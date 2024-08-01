/**
 *   @file  mmwdemo_flash.c
 *
 *   @brief
 *      The file implements the functions which are required to access QSPI flash 
 *   from mmw demo.
 *
 *  \par
 *  NOTE:
 *      (C) Copyright 2020 Texas Instruments, Inc.
 *
 *  Redistribution and use in source and binary forms, with or without
 *  modification, are permitted provided that the following conditions
 *  are met:
 *
 *    Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 *
 *    Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the
 *    distribution.
 *
 *    Neither the name of Texas Instruments Incorporated nor the names of
 *    its contributors may be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 *  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 *  "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 *  LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
 *  A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
 *  OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 *  SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
 *  LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
 *  DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
 *  THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 *  (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 *  OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

/**************************************************************************
 *************************** Include Files ********************************
 **************************************************************************/
/* Standard Include Files. */
#include <stdint.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>

/* mmWave SDK Include Files: */
#include <ti/common/sys_common.h>
#include <ti/drivers/qspiflash/qspiflash.h>
#include <ti/demo/utils/mmwdemo_flash.h>

/**************************************************************************
 **************************** Local Functions *****************************
 **************************************************************************/
typedef struct mmwDemo_Flash_t
{
    /*! @brief   QSPI driver handle */
    QSPI_Handle   QSPIHandle;

    /*! @brief   QSPI flash driver handle */
    QSPIFlash_Handle QSPIFlashHandle;

    /*! @brief   Module initialized flag */
    bool		     initialized;
}mmwDemo_Flash;


mmwDemo_Flash gMmwDemoFlash;

/**************************************************************************
 **************************** Monitor Functions *****************************
 **************************************************************************/

/**
 *  @b Description
 *  @n
 *      The function is used to initialize QSPI and Flash interface.
 *
 *
 *  @retval
 *      Success -   0
 *  @retval
 *      Error   -   <0
 */
int32_t mmwDemo_flashInit(void)
{
    QSPI_Params     QSPIParams;
    int32_t 		 retVal = 0;

    memset((void *)&gMmwDemoFlash, 0, sizeof(mmwDemo_Flash));

    /* Initialize the QSPI Driver */
    QSPI_init();

    /* Initialize the QSPI Flash */
    QSPIFlash_init();

    /* Open QSPI driver */
    QSPI_Params_init(&QSPIParams);

    /* Set the QSPI peripheral clock to 200MHz  */
    QSPIParams.qspiClk = 200 * 1000000U;

    QSPIParams.clkMode = QSPI_CLOCK_MODE_0;

    /* Running at 40MHz QSPI bit rate
     * QSPI bit clock rate derives from QSPI peripheral clock(qspiClk)
       and divide clock internally down to bit clock rate
       BitClockRate = qspiClk/divisor(=5, setup by QSPI driver internally)
     */
    QSPIParams.bitRate = 40 * 1000000U;

    gMmwDemoFlash.QSPIHandle = QSPI_open(&QSPIParams, &retVal);
    if(gMmwDemoFlash.QSPIHandle == NULL)
    {
        retVal = MMWDEMO_FLASH_EINVAL__QSPI;
        goto exit;
    }
	
    /* Open the QSPI Instance */
    gMmwDemoFlash.QSPIFlashHandle = QSPIFlash_open(gMmwDemoFlash.QSPIHandle, &retVal);
    if (gMmwDemoFlash.QSPIFlashHandle == NULL )
    {
        retVal = MMWDEMO_FLASH_EINVAL__QSPIFLASH;
        goto exit;
    }
    gMmwDemoFlash.initialized = true;
	
exit:
    return retVal;
}

/**
 *  @b Description
 *  @n
 *      The function is used to close QSPI and Flash interface.
 *
 *
 *  @retval
 *      Success -   0
 *  @retval
 *      Error   -   <0
 */
void mmwDemo_flashClose(void)
{
    gMmwDemoFlash.initialized = false;
	
    /* Graceful shutdown */
    QSPIFlash_close(gMmwDemoFlash.QSPIFlashHandle);

    QSPI_close(gMmwDemoFlash.QSPIHandle);
}

/**
 *  @b Description
 *  @n
 *      The function is used to read data from flash.
 *
 *  @param[in]  flashOffset
 *      Flash Offset to read data from 
 *  @param[in]  readBuf
 *      Pointer to buffer that hold data read from flash
 *  @param[in]  size
 *      Size in bytes to be read from flash 
 *
 *  @pre
 *      mmwDemo_flashInit
 *
 *  @retval
 *      Success -   0
 *  @retval
 *      Error   -   <0
 */
int32_t mmwDemo_flashRead(uint32_t flashOffset, uint32_t *readBuf, uint32_t size)
{
    int32_t retVal = 0;

    if(gMmwDemoFlash.initialized == true)
    {
	    /* Configure in flash read mode */
	    if(QSPIFlash_configMmapRead(gMmwDemoFlash.QSPIFlashHandle, FLASH_AUTO_MODE, &retVal) < 0)
	    {
	        retVal = MMWDEMO_FLASH_EINVAL__QSPIFLASH;
	    }

	    QSPIFlash_mmapRead(gMmwDemoFlash.QSPIFlashHandle, 
			                           (const uint32_t *)(flashOffset + QSPIFlash_getExtFlashAddr(gMmwDemoFlash.QSPIFlashHandle)), 
			                           (size +7U)/8U, 
			                           readBuf);
    }
    else
    {
           retVal = MMWDEMO_FLASH_EINVAL;
    }
    return retVal;
}

int32_t mmwDemo_flashSetReadMode(void)
{
    int32_t retVal = 0;

    if(gMmwDemoFlash.initialized == true)
    {
	    /* Configure in flash read mode */
	    if(QSPIFlash_configMmapRead(gMmwDemoFlash.QSPIFlashHandle, FLASH_AUTO_MODE, &retVal) < 0)
	    {
	        retVal = MMWDEMO_FLASH_EINVAL__QSPIFLASH;
	    }

    }
    else
    {
           retVal = MMWDEMO_FLASH_EINVAL;
    }
    return retVal;
}

/**
 *  @b Description
 *  @n
 *      The function is used to write data to flash.
 *
 *  @param[in]  flashOffset
 *      Flash Offset to write data to 
 *  @param[in]  writeBuf
 *      Pointer to buffer that hold data to be written to flash
 *  @param[in]  size
 *      Size in bytes to be written to flash 
 *
 *  @pre
 *      mmwDemo_flashInit
 *
 *  @retval
 *      Success -   0
 *  @retval
 *      Error   -   <0
 */
int32_t mmwDemo_flashWrite(uint32_t flashOffset, uint32_t *writeBuf, uint32_t size)
{
    int32_t retVal = 0;

    if(gMmwDemoFlash.initialized == true)
    {
           mmwDemo_flashEraseOneSector(flashOffset);
	
	    /* Configure in write read mode */
	    QSPIFlash_configMmapWrite(gMmwDemoFlash.QSPIFlashHandle);

	    retVal = QSPIFlash_mmapWrite(gMmwDemoFlash.QSPIFlashHandle, 
			                                         (const uint32_t *)(flashOffset + QSPIFlash_getExtFlashAddr(gMmwDemoFlash.QSPIFlashHandle)), 
			                                         (size +7U)/8U, 
			                                         writeBuf);
    }
    else
    {
           retVal = MMWDEMO_FLASH_EINVAL;
    }
    return retVal;
}

/**
 *  @b Description
 *  @n
 *      The function is used to write data to flash.
 *
 *  @param[in]  flashOffset
 *      Flash Offset to write data to 
 *
 *  @pre
 *      mmwDemo_flashInit
 *
 *  @retval
 *      Success -   0
 *  @retval
 *      Error   -   <0
 */
int32_t mmwDemo_flashEraseOneSector(uint32_t flashOffset)
{
    int32_t retVal = 0;

    if(gMmwDemoFlash.initialized == true)
    {
	    /* Erase one sector */
	    QSPIFlash_sectorErase(gMmwDemoFlash.QSPIFlashHandle, flashOffset);   
    }
    else
    {
           retVal = MMWDEMO_FLASH_EINVAL;
    }

    return retVal;
}

