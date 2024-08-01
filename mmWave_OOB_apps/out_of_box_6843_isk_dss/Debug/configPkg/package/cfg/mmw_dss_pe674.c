/*
 *  Do not modify this file; it is automatically 
 *  generated and any modifications will be overwritten.
 *
 * @(#) xdc-E10
 */

#define __nested__
#define __config__

#include <xdc/std.h>

/*
 * ======== GENERATED SECTIONS ========
 *
 *     MODULE INCLUDES
 *
 *     <module-name> INTERNALS
 *     <module-name> INHERITS
 *     <module-name> VTABLE
 *     <module-name> PATCH TABLE
 *     <module-name> DECLARATIONS
 *     <module-name> OBJECT OFFSETS
 *     <module-name> TEMPLATES
 *     <module-name> INITIALIZERS
 *     <module-name> FUNCTION STUBS
 *     <module-name> PROXY BODY
 *     <module-name> OBJECT DESCRIPTOR
 *     <module-name> VIRTUAL FUNCTIONS
 *     <module-name> SYSTEM FUNCTIONS
 *     <module-name> PRAGMAS
 *
 *     INITIALIZATION ENTRY POINT
 *     PROGRAM GLOBALS
 *     CLINK DIRECTIVES
 */


/*
 * ======== MODULE INCLUDES ========
 */

#include <ti/sysbios/BIOS.h>
#include <ti/sysbios/family/c62/IntrinsicsSupport.h>
#include <ti/sysbios/family/c62/TaskSupport.h>
#include <ti/sysbios/family/c64p/Cache.h>
#include <ti/sysbios/family/c64p/EventCombiner.h>
#include <ti/sysbios/family/c64p/Exception.h>
#include <ti/sysbios/family/c64p/Hwi.h>
#include <ti/sysbios/family/c64p/TimestampProvider.h>
#include <ti/sysbios/gates/GateHwi.h>
#include <ti/sysbios/gates/GateMutex.h>
#include <ti/sysbios/hal/Hwi.h>
#include <ti/sysbios/heaps/HeapBuf.h>
#include <ti/sysbios/heaps/HeapMem.h>
#include <ti/sysbios/knl/Clock.h>
#include <ti/sysbios/knl/Event.h>
#include <ti/sysbios/knl/Idle.h>
#include <ti/sysbios/knl/Intrinsics.h>
#include <ti/sysbios/knl/Queue.h>
#include <ti/sysbios/knl/Semaphore.h>
#include <ti/sysbios/knl/Swi.h>
#include <ti/sysbios/knl/Task.h>
#include <ti/sysbios/rts/ti/ThreadLocalStorage.h>
#include <ti/sysbios/timers/rti/Timer.h>
#include <ti/sysbios/utils/Load.h>
#include <xdc/runtime/Assert.h>
#include <xdc/runtime/Core.h>
#include <xdc/runtime/Defaults.h>
#include <xdc/runtime/Diags.h>
#include <xdc/runtime/Error.h>
#include <xdc/runtime/Gate.h>
#include <xdc/runtime/Log.h>
#include <xdc/runtime/LoggerBuf.h>
#include <xdc/runtime/Main.h>
#include <xdc/runtime/Memory.h>
#include <xdc/runtime/Registry.h>
#include <xdc/runtime/Startup.h>
#include <xdc/runtime/SysStd.h>
#include <xdc/runtime/System.h>
#include <xdc/runtime/Text.h>
#include <xdc/runtime/Timestamp.h>
#include <xdc/runtime/TimestampNull.h>

/* suppress 'type qualifier is meaningless on cast type' warning */
#ifdef __ti__
#pragma diag_suppress 193
#endif
#ifdef __IAR_SYSTEMS_ICC__
#pragma diag_suppress=Pe191
#endif

/*
 * ======== ti.sysbios.BIOS INTERNALS ========
 */


/*
 * ======== ti.sysbios.BIOS_RtsGateProxy INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_BIOS_RtsGateProxy_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_BIOS_RtsGateProxy_Module__;

/* Module__root__V */
extern ti_sysbios_BIOS_RtsGateProxy_Module__ ti_sysbios_BIOS_RtsGateProxy_Module__root__V;

/* @@@ ti_sysbios_knl_Queue_Object__ */
typedef struct ti_sysbios_knl_Queue_Object__ {
    ti_sysbios_knl_Queue_Elem elem;
} ti_sysbios_knl_Queue_Object__;

/* @@@ ti_sysbios_knl_Queue_Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_knl_Queue_Object__ obj;
} ti_sysbios_knl_Queue_Object2__;

/* @@@ ti_sysbios_knl_Semaphore_Object__ */
typedef struct ti_sysbios_knl_Semaphore_Object__ {
    ti_sysbios_knl_Event_Handle event;
    xdc_UInt eventId;
    ti_sysbios_knl_Semaphore_Mode mode;
    volatile xdc_UInt16 count;
    ti_sysbios_knl_Queue_Object__ Object_field_pendQ;
} ti_sysbios_knl_Semaphore_Object__;

/* @@@ ti_sysbios_knl_Semaphore_Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_knl_Semaphore_Object__ obj;
} ti_sysbios_knl_Semaphore_Object2__;

/* Object__ */
typedef struct ti_sysbios_gates_GateMutex_Object__ {
    const ti_sysbios_gates_GateMutex_Fxns__ *__fxns;
    ti_sysbios_knl_Task_Handle owner;
    ti_sysbios_knl_Semaphore_Object__ Object_field_sem;
} ti_sysbios_gates_GateMutex_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_gates_GateMutex_Object__ obj;
} ti_sysbios_gates_GateMutex_Object2__;

/* Object */
typedef ti_sysbios_gates_GateMutex_Object__ ti_sysbios_BIOS_RtsGateProxy_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_BIOS_RtsGateProxy_Object__ obj;
} ti_sysbios_BIOS_RtsGateProxy_Object2__;


/*
 * ======== ti.sysbios.family.c62.IntrinsicsSupport INTERNALS ========
 */


/*
 * ======== ti.sysbios.family.c62.TaskSupport INTERNALS ========
 */


/*
 * ======== ti.sysbios.family.c64p.Cache INTERNALS ========
 */


/*
 * ======== ti.sysbios.family.c64p.EventCombiner INTERNALS ========
 */


/*
 * ======== ti.sysbios.family.c64p.Exception INTERNALS ========
 */


/*
 * ======== ti.sysbios.family.c64p.Hwi INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_family_c64p_Hwi_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_family_c64p_Hwi_Module__;

/* Module__root__V */
extern ti_sysbios_family_c64p_Hwi_Module__ ti_sysbios_family_c64p_Hwi_Module__root__V;

/* Object__ */
typedef struct ti_sysbios_family_c64p_Hwi_Object__ {
    const ti_sysbios_family_c64p_Hwi_Fxns__ *__fxns;
    xdc_Bits16 disableMask;
    xdc_Bits16 restoreMask;
    xdc_UArg arg;
    ti_sysbios_family_c64p_Hwi_FuncPtr fxn;
    ti_sysbios_family_c64p_Hwi_Irp irp;
    __TA_ti_sysbios_family_c64p_Hwi_Instance_State__hookEnv hookEnv;
} ti_sysbios_family_c64p_Hwi_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_family_c64p_Hwi_Object__ obj;
} ti_sysbios_family_c64p_Hwi_Object2__;


/*
 * ======== ti.sysbios.family.c64p.TimestampProvider INTERNALS ========
 */


/*
 * ======== ti.sysbios.gates.GateHwi INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_gates_GateHwi_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_gates_GateHwi_Module__;

/* Module__root__V */
extern ti_sysbios_gates_GateHwi_Module__ ti_sysbios_gates_GateHwi_Module__root__V;

/* Object__ */
typedef struct ti_sysbios_gates_GateHwi_Object__ {
    const ti_sysbios_gates_GateHwi_Fxns__ *__fxns;
} ti_sysbios_gates_GateHwi_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_gates_GateHwi_Object__ obj;
} ti_sysbios_gates_GateHwi_Object2__;


/*
 * ======== ti.sysbios.gates.GateMutex INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_gates_GateMutex_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_gates_GateMutex_Module__;

/* Module__root__V */
extern ti_sysbios_gates_GateMutex_Module__ ti_sysbios_gates_GateMutex_Module__root__V;

/* <-- ti_sysbios_gates_GateMutex_Object */


/*
 * ======== ti.sysbios.hal.Hwi INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_hal_Hwi_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_hal_Hwi_Module__;

/* Module__root__V */
extern ti_sysbios_hal_Hwi_Module__ ti_sysbios_hal_Hwi_Module__root__V;

/* Object__ */
typedef struct ti_sysbios_hal_Hwi_Object__ {
    const ti_sysbios_hal_Hwi_Fxns__ *__fxns;
    ti_sysbios_hal_Hwi_HwiProxy_Handle pi;
} ti_sysbios_hal_Hwi_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_hal_Hwi_Object__ obj;
} ti_sysbios_hal_Hwi_Object2__;


/*
 * ======== ti.sysbios.hal.Hwi_HwiProxy INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_hal_Hwi_HwiProxy_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_hal_Hwi_HwiProxy_Module__;

/* Module__root__V */
extern ti_sysbios_hal_Hwi_HwiProxy_Module__ ti_sysbios_hal_Hwi_HwiProxy_Module__root__V;

/* <-- ti_sysbios_family_c64p_Hwi_Object */

/* Object */
typedef ti_sysbios_family_c64p_Hwi_Object__ ti_sysbios_hal_Hwi_HwiProxy_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_hal_Hwi_HwiProxy_Object__ obj;
} ti_sysbios_hal_Hwi_HwiProxy_Object2__;


/*
 * ======== ti.sysbios.heaps.HeapBuf INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_heaps_HeapBuf_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_heaps_HeapBuf_Module__;

/* Module__root__V */
extern ti_sysbios_heaps_HeapBuf_Module__ ti_sysbios_heaps_HeapBuf_Module__root__V;

/* <-- ti_sysbios_knl_Queue_Object */

/* Object__ */
typedef struct ti_sysbios_heaps_HeapBuf_Object__ {
    const ti_sysbios_heaps_HeapBuf_Fxns__ *__fxns;
    xdc_SizeT blockSize;
    xdc_SizeT align;
    xdc_UInt numBlocks;
    xdc_runtime_Memory_Size bufSize;
    __TA_ti_sysbios_heaps_HeapBuf_Instance_State__buf buf;
    xdc_UInt numFreeBlocks;
    xdc_UInt minFreeBlocks;
    ti_sysbios_knl_Queue_Object__ Object_field_freeList;
} ti_sysbios_heaps_HeapBuf_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_heaps_HeapBuf_Object__ obj;
} ti_sysbios_heaps_HeapBuf_Object2__;


/*
 * ======== ti.sysbios.heaps.HeapMem INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_heaps_HeapMem_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_heaps_HeapMem_Module__;

/* Module__root__V */
extern ti_sysbios_heaps_HeapMem_Module__ ti_sysbios_heaps_HeapMem_Module__root__V;

/* Object__ */
typedef struct ti_sysbios_heaps_HeapMem_Object__ {
    const ti_sysbios_heaps_HeapMem_Fxns__ *__fxns;
    xdc_runtime_Memory_Size align;
    __TA_ti_sysbios_heaps_HeapMem_Instance_State__buf buf;
    ti_sysbios_heaps_HeapMem_Header head;
    xdc_SizeT minBlockAlign;
} ti_sysbios_heaps_HeapMem_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_heaps_HeapMem_Object__ obj;
} ti_sysbios_heaps_HeapMem_Object2__;


/*
 * ======== ti.sysbios.heaps.HeapMem_Module_GateProxy INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__;

/* Module__root__V */
extern ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__ ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__root__V;

/* <-- ti_sysbios_gates_GateMutex_Object */

/* Object */
typedef ti_sysbios_gates_GateMutex_Object__ ti_sysbios_heaps_HeapMem_Module_GateProxy_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_heaps_HeapMem_Module_GateProxy_Object__ obj;
} ti_sysbios_heaps_HeapMem_Module_GateProxy_Object2__;


/*
 * ======== ti.sysbios.knl.Clock INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_knl_Clock_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_knl_Clock_Module__;

/* Module__root__V */
extern ti_sysbios_knl_Clock_Module__ ti_sysbios_knl_Clock_Module__root__V;

/* <-- ti_sysbios_knl_Queue_Object */

/* Object__ */
typedef struct ti_sysbios_knl_Clock_Object__ {
    ti_sysbios_knl_Queue_Elem elem;
    xdc_UInt32 timeout;
    xdc_UInt32 currTimeout;
    xdc_UInt32 period;
    volatile xdc_Bool active;
    ti_sysbios_knl_Clock_FuncPtr fxn;
    xdc_UArg arg;
} ti_sysbios_knl_Clock_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_knl_Clock_Object__ obj;
} ti_sysbios_knl_Clock_Object2__;


/*
 * ======== ti.sysbios.knl.Clock_TimerProxy INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_knl_Clock_TimerProxy_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_knl_Clock_TimerProxy_Module__;

/* Module__root__V */
extern ti_sysbios_knl_Clock_TimerProxy_Module__ ti_sysbios_knl_Clock_TimerProxy_Module__root__V;

/* Object__ */
typedef struct ti_sysbios_timers_rti_Timer_Object__ {
    const ti_sysbios_timers_rti_Timer_Fxns__ *__fxns;
    xdc_Bool staticInst;
    xdc_Int id;
    ti_sysbios_interfaces_ITimer_RunMode runMode;
    ti_sysbios_interfaces_ITimer_StartMode startMode;
    xdc_UInt prescale;
    xdc_UInt period;
    ti_sysbios_interfaces_ITimer_PeriodType periodType;
    xdc_UInt intNum;
    xdc_UArg arg;
    ti_sysbios_hal_Hwi_FuncPtr tickFxn;
    xdc_runtime_Types_FreqHz extFreq;
    ti_sysbios_hal_Hwi_Handle hwi;
    xdc_Bool createHwi;
} ti_sysbios_timers_rti_Timer_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_timers_rti_Timer_Object__ obj;
} ti_sysbios_timers_rti_Timer_Object2__;

/* Object */
typedef ti_sysbios_timers_rti_Timer_Object__ ti_sysbios_knl_Clock_TimerProxy_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_knl_Clock_TimerProxy_Object__ obj;
} ti_sysbios_knl_Clock_TimerProxy_Object2__;


/*
 * ======== ti.sysbios.knl.Event INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_knl_Event_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_knl_Event_Module__;

/* Module__root__V */
extern ti_sysbios_knl_Event_Module__ ti_sysbios_knl_Event_Module__root__V;

/* <-- ti_sysbios_knl_Queue_Object */

/* Object__ */
typedef struct ti_sysbios_knl_Event_Object__ {
    volatile xdc_UInt postedEvents;
    ti_sysbios_knl_Queue_Object__ Object_field_pendQ;
} ti_sysbios_knl_Event_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_knl_Event_Object__ obj;
} ti_sysbios_knl_Event_Object2__;


/*
 * ======== ti.sysbios.knl.Idle INTERNALS ========
 */


/*
 * ======== ti.sysbios.knl.Intrinsics INTERNALS ========
 */


/*
 * ======== ti.sysbios.knl.Intrinsics_SupportProxy INTERNALS ========
 */


/*
 * ======== ti.sysbios.knl.Queue INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_knl_Queue_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_knl_Queue_Module__;

/* Module__root__V */
extern ti_sysbios_knl_Queue_Module__ ti_sysbios_knl_Queue_Module__root__V;

/* <-- ti_sysbios_knl_Queue_Object */


/*
 * ======== ti.sysbios.knl.Semaphore INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_knl_Semaphore_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_knl_Semaphore_Module__;

/* Module__root__V */
extern ti_sysbios_knl_Semaphore_Module__ ti_sysbios_knl_Semaphore_Module__root__V;

/* <-- ti_sysbios_knl_Semaphore_Object */


/*
 * ======== ti.sysbios.knl.Swi INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_knl_Swi_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_knl_Swi_Module__;

/* Module__root__V */
extern ti_sysbios_knl_Swi_Module__ ti_sysbios_knl_Swi_Module__root__V;

/* Object__ */
typedef struct ti_sysbios_knl_Swi_Object__ {
    ti_sysbios_knl_Queue_Elem qElem;
    ti_sysbios_knl_Swi_FuncPtr fxn;
    xdc_UArg arg0;
    xdc_UArg arg1;
    xdc_UInt priority;
    xdc_UInt mask;
    xdc_Bool posted;
    xdc_UInt initTrigger;
    xdc_UInt trigger;
    ti_sysbios_knl_Queue_Handle readyQ;
    __TA_ti_sysbios_knl_Swi_Instance_State__hookEnv hookEnv;
} ti_sysbios_knl_Swi_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_knl_Swi_Object__ obj;
} ti_sysbios_knl_Swi_Object2__;


/*
 * ======== ti.sysbios.knl.Task INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_knl_Task_Module__ {
    xdc_runtime_Types_Link link;
    xdc_runtime_Types_DiagsMask mask;
} ti_sysbios_knl_Task_Module__;

/* Module__root__V */
extern ti_sysbios_knl_Task_Module__ ti_sysbios_knl_Task_Module__root__V;

/* <-- ti_sysbios_knl_Queue_Object */

/* Object__ */
typedef struct ti_sysbios_knl_Task_Object__ {
    ti_sysbios_knl_Queue_Elem qElem;
    volatile xdc_Int priority;
    xdc_UInt mask;
    xdc_Ptr context;
    ti_sysbios_knl_Task_Mode mode;
    ti_sysbios_knl_Task_PendElem *pendElem;
    xdc_SizeT stackSize;
    __TA_ti_sysbios_knl_Task_Instance_State__stack stack;
    xdc_runtime_IHeap_Handle stackHeap;
    ti_sysbios_knl_Task_FuncPtr fxn;
    xdc_UArg arg0;
    xdc_UArg arg1;
    xdc_Ptr env;
    __TA_ti_sysbios_knl_Task_Instance_State__hookEnv hookEnv;
    xdc_Bool vitalTaskFlag;
    ti_sysbios_knl_Queue_Handle readyQ;
    xdc_UInt curCoreId;
    xdc_UInt affinity;
    xdc_Bool privileged;
    xdc_Ptr domain;
    xdc_UInt32 checkValue;
    xdc_Ptr tls;
} ti_sysbios_knl_Task_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_knl_Task_Object__ obj;
} ti_sysbios_knl_Task_Object2__;


/*
 * ======== ti.sysbios.knl.Task_SupportProxy INTERNALS ========
 */


/*
 * ======== ti.sysbios.rts.ti.ThreadLocalStorage INTERNALS ========
 */


/*
 * ======== ti.sysbios.timers.rti.Timer INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_timers_rti_Timer_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_timers_rti_Timer_Module__;

/* Module__root__V */
extern ti_sysbios_timers_rti_Timer_Module__ ti_sysbios_timers_rti_Timer_Module__root__V;

/* <-- ti_sysbios_timers_rti_Timer_Object */


/*
 * ======== ti.sysbios.utils.Load INTERNALS ========
 */


/*
 * ======== xdc.runtime.Assert INTERNALS ========
 */


/*
 * ======== xdc.runtime.Core INTERNALS ========
 */


/*
 * ======== xdc.runtime.Defaults INTERNALS ========
 */


/*
 * ======== xdc.runtime.Diags INTERNALS ========
 */


/*
 * ======== xdc.runtime.Error INTERNALS ========
 */


/*
 * ======== xdc.runtime.Gate INTERNALS ========
 */


/*
 * ======== xdc.runtime.Log INTERNALS ========
 */


/*
 * ======== xdc.runtime.LoggerBuf INTERNALS ========
 */

/* Module__ */
typedef struct xdc_runtime_LoggerBuf_Module__ {
    xdc_runtime_Types_Link link;
} xdc_runtime_LoggerBuf_Module__;

/* Module__root__V */
extern xdc_runtime_LoggerBuf_Module__ xdc_runtime_LoggerBuf_Module__root__V;

/* Object__ */
typedef struct xdc_runtime_LoggerBuf_Object__ {
    const xdc_runtime_LoggerBuf_Fxns__ *__fxns;
    xdc_runtime_IHeap_Handle bufHeap;
    __TA_xdc_runtime_LoggerBuf_Instance_State__entryArr entryArr;
    xdc_runtime_LoggerBuf_Entry *curEntry;
    xdc_runtime_LoggerBuf_Entry *endEntry;
    xdc_runtime_LoggerBuf_Entry *readEntry;
    xdc_Bits32 serial;
    xdc_UInt16 numEntries;
    xdc_Int8 advance;
    xdc_Bool enabled;
    xdc_Bool flush;
} xdc_runtime_LoggerBuf_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    xdc_runtime_LoggerBuf_Object__ obj;
} xdc_runtime_LoggerBuf_Object2__;


/*
 * ======== xdc.runtime.LoggerBuf_Module_GateProxy INTERNALS ========
 */

/* Module__ */
typedef struct xdc_runtime_LoggerBuf_Module_GateProxy_Module__ {
    xdc_runtime_Types_Link link;
} xdc_runtime_LoggerBuf_Module_GateProxy_Module__;

/* Module__root__V */
extern xdc_runtime_LoggerBuf_Module_GateProxy_Module__ xdc_runtime_LoggerBuf_Module_GateProxy_Module__root__V;

/* <-- ti_sysbios_gates_GateHwi_Object */

/* Object */
typedef ti_sysbios_gates_GateHwi_Object__ xdc_runtime_LoggerBuf_Module_GateProxy_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    xdc_runtime_LoggerBuf_Module_GateProxy_Object__ obj;
} xdc_runtime_LoggerBuf_Module_GateProxy_Object2__;


/*
 * ======== xdc.runtime.LoggerBuf_TimestampProxy INTERNALS ========
 */


/*
 * ======== xdc.runtime.Main INTERNALS ========
 */

/* Module__ */
typedef struct xdc_runtime_Main_Module__ {
    xdc_runtime_Types_DiagsMask mask;
} xdc_runtime_Main_Module__;

/* Module__root__V */
extern xdc_runtime_Main_Module__ xdc_runtime_Main_Module__root__V;


/*
 * ======== xdc.runtime.Main_Module_GateProxy INTERNALS ========
 */

/* Module__ */
typedef struct xdc_runtime_Main_Module_GateProxy_Module__ {
    xdc_runtime_Types_Link link;
} xdc_runtime_Main_Module_GateProxy_Module__;

/* Module__root__V */
extern xdc_runtime_Main_Module_GateProxy_Module__ xdc_runtime_Main_Module_GateProxy_Module__root__V;

/* <-- ti_sysbios_gates_GateHwi_Object */

/* Object */
typedef ti_sysbios_gates_GateHwi_Object__ xdc_runtime_Main_Module_GateProxy_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    xdc_runtime_Main_Module_GateProxy_Object__ obj;
} xdc_runtime_Main_Module_GateProxy_Object2__;


/*
 * ======== xdc.runtime.Memory INTERNALS ========
 */


/*
 * ======== xdc.runtime.Memory_HeapProxy INTERNALS ========
 */

/* Module__ */
typedef struct xdc_runtime_Memory_HeapProxy_Module__ {
    xdc_runtime_Types_Link link;
} xdc_runtime_Memory_HeapProxy_Module__;

/* Module__root__V */
extern xdc_runtime_Memory_HeapProxy_Module__ xdc_runtime_Memory_HeapProxy_Module__root__V;

/* <-- ti_sysbios_heaps_HeapMem_Object */

/* Object */
typedef ti_sysbios_heaps_HeapMem_Object__ xdc_runtime_Memory_HeapProxy_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    xdc_runtime_Memory_HeapProxy_Object__ obj;
} xdc_runtime_Memory_HeapProxy_Object2__;


/*
 * ======== xdc.runtime.Registry INTERNALS ========
 */


/*
 * ======== xdc.runtime.Startup INTERNALS ========
 */


/*
 * ======== xdc.runtime.SysStd INTERNALS ========
 */


/*
 * ======== xdc.runtime.System INTERNALS ========
 */


/*
 * ======== xdc.runtime.System_Module_GateProxy INTERNALS ========
 */

/* Module__ */
typedef struct xdc_runtime_System_Module_GateProxy_Module__ {
    xdc_runtime_Types_Link link;
} xdc_runtime_System_Module_GateProxy_Module__;

/* Module__root__V */
extern xdc_runtime_System_Module_GateProxy_Module__ xdc_runtime_System_Module_GateProxy_Module__root__V;

/* <-- ti_sysbios_gates_GateHwi_Object */

/* Object */
typedef ti_sysbios_gates_GateHwi_Object__ xdc_runtime_System_Module_GateProxy_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    xdc_runtime_System_Module_GateProxy_Object__ obj;
} xdc_runtime_System_Module_GateProxy_Object2__;


/*
 * ======== xdc.runtime.System_SupportProxy INTERNALS ========
 */


/*
 * ======== xdc.runtime.Text INTERNALS ========
 */


/*
 * ======== xdc.runtime.Timestamp INTERNALS ========
 */


/*
 * ======== xdc.runtime.TimestampNull INTERNALS ========
 */


/*
 * ======== xdc.runtime.Timestamp_SupportProxy INTERNALS ========
 */


/*
 * ======== INHERITS ========
 */

#pragma DATA_SECTION(xdc_runtime_IHeap_Interface__BASE__C, ".const:xdc_runtime_IHeap_Interface__BASE__C");
__FAR__ const xdc_runtime_Types_Base xdc_runtime_IHeap_Interface__BASE__C = {&xdc_runtime_IModule_Interface__BASE__C};

#pragma DATA_SECTION(xdc_runtime_ISystemSupport_Interface__BASE__C, ".const:xdc_runtime_ISystemSupport_Interface__BASE__C");
__FAR__ const xdc_runtime_Types_Base xdc_runtime_ISystemSupport_Interface__BASE__C = {&xdc_runtime_IModule_Interface__BASE__C};

#pragma DATA_SECTION(xdc_runtime_ITimestampProvider_Interface__BASE__C, ".const:xdc_runtime_ITimestampProvider_Interface__BASE__C");
__FAR__ const xdc_runtime_Types_Base xdc_runtime_ITimestampProvider_Interface__BASE__C = {&xdc_runtime_ITimestampClient_Interface__BASE__C};

#pragma DATA_SECTION(xdc_runtime_IGateProvider_Interface__BASE__C, ".const:xdc_runtime_IGateProvider_Interface__BASE__C");
__FAR__ const xdc_runtime_Types_Base xdc_runtime_IGateProvider_Interface__BASE__C = {&xdc_runtime_IModule_Interface__BASE__C};

#pragma DATA_SECTION(xdc_runtime_IFilterLogger_Interface__BASE__C, ".const:xdc_runtime_IFilterLogger_Interface__BASE__C");
__FAR__ const xdc_runtime_Types_Base xdc_runtime_IFilterLogger_Interface__BASE__C = {&xdc_runtime_ILogger_Interface__BASE__C};

#pragma DATA_SECTION(xdc_runtime_ILogger_Interface__BASE__C, ".const:xdc_runtime_ILogger_Interface__BASE__C");
__FAR__ const xdc_runtime_Types_Base xdc_runtime_ILogger_Interface__BASE__C = {&xdc_runtime_IModule_Interface__BASE__C};

#pragma DATA_SECTION(xdc_runtime_IModule_Interface__BASE__C, ".const:xdc_runtime_IModule_Interface__BASE__C");
__FAR__ const xdc_runtime_Types_Base xdc_runtime_IModule_Interface__BASE__C = {0};

#pragma DATA_SECTION(xdc_runtime_ITimestampClient_Interface__BASE__C, ".const:xdc_runtime_ITimestampClient_Interface__BASE__C");
__FAR__ const xdc_runtime_Types_Base xdc_runtime_ITimestampClient_Interface__BASE__C = {&xdc_runtime_IModule_Interface__BASE__C};


/*
 * ======== ti.sysbios.gates.GateHwi VTABLE ========
 */

/* Module__FXNS__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__FXNS__C, ".const:ti_sysbios_gates_GateHwi_Module__FXNS__C");
const ti_sysbios_gates_GateHwi_Fxns__ ti_sysbios_gates_GateHwi_Module__FXNS__C = {
    &xdc_runtime_IGateProvider_Interface__BASE__C, /* __base */
    &ti_sysbios_gates_GateHwi_Module__FXNS__C.__sfxns, /* __sysp */
    ti_sysbios_gates_GateHwi_query__E,
    ti_sysbios_gates_GateHwi_enter__E,
    ti_sysbios_gates_GateHwi_leave__E,
    {
        ti_sysbios_gates_GateHwi_Object__create__S,
        ti_sysbios_gates_GateHwi_Object__delete__S,
        ti_sysbios_gates_GateHwi_Handle__label__S,
        0x8033, /* __mid */
    } /* __sfxns */
};


/*
 * ======== ti.sysbios.gates.GateMutex VTABLE ========
 */

/* Module__FXNS__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__FXNS__C, ".const:ti_sysbios_gates_GateMutex_Module__FXNS__C");
const ti_sysbios_gates_GateMutex_Fxns__ ti_sysbios_gates_GateMutex_Module__FXNS__C = {
    &xdc_runtime_IGateProvider_Interface__BASE__C, /* __base */
    &ti_sysbios_gates_GateMutex_Module__FXNS__C.__sfxns, /* __sysp */
    ti_sysbios_gates_GateMutex_query__E,
    ti_sysbios_gates_GateMutex_enter__E,
    ti_sysbios_gates_GateMutex_leave__E,
    {
        ti_sysbios_gates_GateMutex_Object__create__S,
        ti_sysbios_gates_GateMutex_Object__delete__S,
        ti_sysbios_gates_GateMutex_Handle__label__S,
        0x8034, /* __mid */
    } /* __sfxns */
};


/*
 * ======== ti.sysbios.heaps.HeapBuf VTABLE ========
 */

/* Module__FXNS__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapBuf_Module__FXNS__C, ".const:ti_sysbios_heaps_HeapBuf_Module__FXNS__C");
const ti_sysbios_heaps_HeapBuf_Fxns__ ti_sysbios_heaps_HeapBuf_Module__FXNS__C = {
    &xdc_runtime_IHeap_Interface__BASE__C, /* __base */
    &ti_sysbios_heaps_HeapBuf_Module__FXNS__C.__sfxns, /* __sysp */
    ti_sysbios_heaps_HeapBuf_alloc__E,
    ti_sysbios_heaps_HeapBuf_free__E,
    ti_sysbios_heaps_HeapBuf_isBlocking__E,
    ti_sysbios_heaps_HeapBuf_getStats__E,
    {
        ti_sysbios_heaps_HeapBuf_Object__create__S,
        ti_sysbios_heaps_HeapBuf_Object__delete__S,
        ti_sysbios_heaps_HeapBuf_Handle__label__S,
        0x8026, /* __mid */
    } /* __sfxns */
};


/*
 * ======== ti.sysbios.heaps.HeapMem VTABLE ========
 */

/* Module__FXNS__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__FXNS__C, ".const:ti_sysbios_heaps_HeapMem_Module__FXNS__C");
const ti_sysbios_heaps_HeapMem_Fxns__ ti_sysbios_heaps_HeapMem_Module__FXNS__C = {
    &xdc_runtime_IHeap_Interface__BASE__C, /* __base */
    &ti_sysbios_heaps_HeapMem_Module__FXNS__C.__sfxns, /* __sysp */
    ti_sysbios_heaps_HeapMem_alloc__E,
    ti_sysbios_heaps_HeapMem_free__E,
    ti_sysbios_heaps_HeapMem_isBlocking__E,
    ti_sysbios_heaps_HeapMem_getStats__E,
    {
        ti_sysbios_heaps_HeapMem_Object__create__S,
        ti_sysbios_heaps_HeapMem_Object__delete__S,
        ti_sysbios_heaps_HeapMem_Handle__label__S,
        0x8027, /* __mid */
    } /* __sfxns */
};


/*
 * ======== xdc.runtime.LoggerBuf VTABLE ========
 */

/* Module__FXNS__C */
#pragma DATA_SECTION(xdc_runtime_LoggerBuf_Module__FXNS__C, ".const:xdc_runtime_LoggerBuf_Module__FXNS__C");
const xdc_runtime_LoggerBuf_Fxns__ xdc_runtime_LoggerBuf_Module__FXNS__C = {
    &xdc_runtime_IFilterLogger_Interface__BASE__C, /* __base */
    &xdc_runtime_LoggerBuf_Module__FXNS__C.__sfxns, /* __sysp */
    xdc_runtime_LoggerBuf_enable__E,
    xdc_runtime_LoggerBuf_disable__E,
    xdc_runtime_LoggerBuf_write0__E,
    xdc_runtime_LoggerBuf_write1__E,
    xdc_runtime_LoggerBuf_write2__E,
    xdc_runtime_LoggerBuf_write4__E,
    xdc_runtime_LoggerBuf_write8__E,
    xdc_runtime_LoggerBuf_setFilterLevel__E,
    xdc_runtime_LoggerBuf_getFilterLevel__E,
    {
        xdc_runtime_LoggerBuf_Object__create__S,
        xdc_runtime_LoggerBuf_Object__delete__S,
        xdc_runtime_LoggerBuf_Handle__label__S,
        0x8009, /* __mid */
    } /* __sfxns */
};


/*
 * ======== xdc.runtime.SysStd VTABLE ========
 */

/* Module__FXNS__C */
#pragma DATA_SECTION(xdc_runtime_SysStd_Module__FXNS__C, ".const:xdc_runtime_SysStd_Module__FXNS__C");
const xdc_runtime_SysStd_Fxns__ xdc_runtime_SysStd_Module__FXNS__C = {
    &xdc_runtime_ISystemSupport_Interface__BASE__C, /* __base */
    &xdc_runtime_SysStd_Module__FXNS__C.__sfxns, /* __sysp */
    xdc_runtime_SysStd_abort__E,
    xdc_runtime_SysStd_exit__E,
    xdc_runtime_SysStd_flush__E,
    xdc_runtime_SysStd_putch__E,
    xdc_runtime_SysStd_ready__E,
    {
        NULL, /* __create */
        NULL, /* __delete */
        NULL, /* __label */
        0x800f, /* __mid */
    } /* __sfxns */
};


/*
 * ======== xdc.runtime.Timestamp VTABLE ========
 */

/* Module__FXNS__C */
#pragma DATA_SECTION(xdc_runtime_Timestamp_Module__FXNS__C, ".const:xdc_runtime_Timestamp_Module__FXNS__C");
const xdc_runtime_Timestamp_Fxns__ xdc_runtime_Timestamp_Module__FXNS__C = {
    &xdc_runtime_ITimestampClient_Interface__BASE__C, /* __base */
    &xdc_runtime_Timestamp_Module__FXNS__C.__sfxns, /* __sysp */
    xdc_runtime_Timestamp_get32__E,
    xdc_runtime_Timestamp_get64__E,
    xdc_runtime_Timestamp_getFreq__E,
    {
        NULL, /* __create */
        NULL, /* __delete */
        NULL, /* __label */
        0x8011, /* __mid */
    } /* __sfxns */
};


/*
 * ======== xdc.runtime.TimestampNull VTABLE ========
 */

/* Module__FXNS__C */
#pragma DATA_SECTION(xdc_runtime_TimestampNull_Module__FXNS__C, ".const:xdc_runtime_TimestampNull_Module__FXNS__C");
const xdc_runtime_TimestampNull_Fxns__ xdc_runtime_TimestampNull_Module__FXNS__C = {
    &xdc_runtime_ITimestampProvider_Interface__BASE__C, /* __base */
    &xdc_runtime_TimestampNull_Module__FXNS__C.__sfxns, /* __sysp */
    xdc_runtime_TimestampNull_get32__E,
    xdc_runtime_TimestampNull_get64__E,
    xdc_runtime_TimestampNull_getFreq__E,
    {
        NULL, /* __create */
        NULL, /* __delete */
        NULL, /* __label */
        0x8012, /* __mid */
    } /* __sfxns */
};


/*
 * ======== ti.sysbios.BIOS DECLARATIONS ========
 */

/* Module_State__ */
typedef struct ti_sysbios_BIOS_Module_State__ {
    xdc_runtime_Types_FreqHz cpuFreq;
    xdc_UInt rtsGateCount;
    xdc_IArg rtsGateKey;
    ti_sysbios_BIOS_RtsGateProxy_Handle rtsGate;
    ti_sysbios_BIOS_ThreadType threadType;
    __TA_ti_sysbios_BIOS_Module_State__smpThreadType smpThreadType;
    volatile ti_sysbios_BIOS_StartFuncPtr startFunc;
    volatile ti_sysbios_BIOS_ExitFuncPtr exitFunc;
} ti_sysbios_BIOS_Module_State__;

/* --> ti_sysbios_BIOS_startFunc */
extern xdc_Void ti_sysbios_BIOS_startFunc(xdc_Void);

/* --> ti_sysbios_BIOS_exitFunc */
extern xdc_Void ti_sysbios_BIOS_exitFunc(xdc_Int);

/* Module__state__V */
ti_sysbios_BIOS_Module_State__ ti_sysbios_BIOS_Module__state__V;


/*
 * ======== ti.sysbios.BIOS_RtsGateProxy DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.family.c62.IntrinsicsSupport DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.family.c62.TaskSupport DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.family.c64p.Cache DECLARATIONS ========
 */

/* Module_State__ */
typedef struct ti_sysbios_family_c64p_Cache_Module_State__ {
    volatile xdc_UInt32 *emifAddr;
} ti_sysbios_family_c64p_Cache_Module_State__;

/* Module__state__V */
ti_sysbios_family_c64p_Cache_Module_State__ ti_sysbios_family_c64p_Cache_Module__state__V;


/*
 * ======== ti.sysbios.family.c64p.EventCombiner DECLARATIONS ========
 */

/* Module_State__ */
typedef struct ti_sysbios_family_c64p_EventCombiner_Module_State__ {
    __TA_ti_sysbios_family_c64p_EventCombiner_Module_State__dispatchTab dispatchTab;
} ti_sysbios_family_c64p_EventCombiner_Module_State__;

/* --> ti_sysbios_family_c64p_EventCombiner_unused */
extern xdc_Void ti_sysbios_family_c64p_EventCombiner_unused(xdc_UArg);

/* --> ti_sysbios_family_c64p_EventCombiner_unused */
extern xdc_Void ti_sysbios_family_c64p_EventCombiner_unused(xdc_UArg);

/* --> ti_sysbios_family_c64p_EventCombiner_unused */
extern xdc_Void ti_sysbios_family_c64p_EventCombiner_unused(xdc_UArg);

/* --> ti_sysbios_family_c64p_EventCombiner_unused */
extern xdc_Void ti_sysbios_family_c64p_EventCombiner_unused(xdc_UArg);

/* --> ti_sysbios_family_c64p_EventCombiner_unused */
extern xdc_Void ti_sysbios_family_c64p_EventCombiner_unused(xdc_UArg);

/* --> ti_sysbios_family_c64p_EventCombiner_unused */
extern xdc_Void ti_sysbios_family_c64p_EventCombiner_unused(xdc_UArg);

/* --> ti_sysbios_family_c64p_EventCombiner_unused */
extern xdc_Void ti_sysbios_family_c64p_EventCombiner_unused(xdc_UArg);

/* --> ti_sysbios_family_c64p_EventCombiner_unused */
extern xdc_Void ti_sysbios_family_c64p_EventCombiner_unused(xdc_UArg);

/* --> ti_sysbios_family_c64p_EventCombiner_unused */
extern xdc_Void ti_sysbios_family_c64p_EventCombiner_unused(xdc_UArg);

/* --> ti_sysbios_family_c64p_EventCombiner_unused */
extern xdc_Void ti_sysbios_family_c64p_EventCombiner_unused(xdc_UArg);

/* --> ti_sysbios_family_c64p_EventCombiner_unused */
extern xdc_Void ti_sysbios_family_c64p_EventCombiner_unused(xdc_UArg);

/* --> ti_sysbios_family_c64p_EventCombiner_unused */
extern xdc_Void ti_sysbios_family_c64p_EventCombiner_unused(xdc_UArg);

/* --> ti_sysbios_family_c64p_EventCombiner_unused */
extern xdc_Void ti_sysbios_family_c64p_EventCombiner_unused(xdc_UArg);

/* --> ti_sysbios_family_c64p_EventCombiner_unused */
extern xdc_Void ti_sysbios_family_c64p_EventCombiner_unused(xdc_UArg);

/* --> ti_sysbios_family_c64p_EventCombiner_unused */
extern xdc_Void ti_sysbios_family_c64p_EventCombiner_unused(xdc_UArg);

/* --> ti_sysbios_family_c64p_EventCombiner_unused */
extern xdc_Void ti_sysbios_family_c64p_EventCombiner_unused(xdc_UArg);

/* --> ti_sysbios_family_c64p_EventCombiner_unused */
extern xdc_Void ti_sysbios_family_c64p_EventCombiner_unused(xdc_UArg);

/* --> ti_sysbios_family_c64p_EventCombiner_unused */
extern xdc_Void ti_sysbios_family_c64p_EventCombiner_unused(xdc_UArg);

/* --> ti_sysbios_family_c64p_EventCombiner_unused */
extern xdc_Void ti_sysbios_family_c64p_EventCombiner_unused(xdc_UArg);

/* --> ti_sysbios_family_c64p_EventCombiner_unused */
extern xdc_Void ti_sysbios_family_c64p_EventCombiner_unused(xdc_UArg);

/* --> ti_sysbios_family_c64p_EventCombiner_unused */
extern xdc_Void ti_sysbios_family_c64p_EventCombiner_unused(xdc_UArg);

/* --> ti_sysbios_family_c64p_EventCombiner_unused */
extern xdc_Void ti_sysbios_family_c64p_EventCombiner_unused(xdc_UArg);

/* --> ti_sysbios_family_c64p_EventCombiner_unused */
extern xdc_Void ti_sysbios_family_c64p_EventCombiner_unused(xdc_UArg);

/* --> ti_sysbios_family_c64p_EventCombiner_unused */
extern xdc_Void ti_sysbios_family_c64p_EventCombiner_unused(xdc_UArg);

/* --> ti_sysbios_family_c64p_EventCombiner_unused */
extern xdc_Void ti_sysbios_family_c64p_EventCombiner_unused(xdc_UArg);

/* --> ti_sysbios_family_c64p_EventCombiner_unused */
extern xdc_Void ti_sysbios_family_c64p_EventCombiner_unused(xdc_UArg);

/* --> ti_sysbios_family_c64p_EventCombiner_unused */
extern xdc_Void ti_sysbios_family_c64p_EventCombiner_unused(xdc_UArg);

/* --> ti_sysbios_family_c64p_EventCombiner_unused */
extern xdc_Void ti_sysbios_family_c64p_EventCombiner_unused(xdc_UArg);

/* --> ti_sysbios_family_c64p_EventCombiner_unused */
extern xdc_Void ti_sysbios_family_c64p_EventCombiner_unused(xdc_UArg);

/* --> ti_sysbios_family_c64p_EventCombiner_unused */
extern xdc_Void ti_sysbios_family_c64p_EventCombiner_unused(xdc_UArg);

/* --> ti_sysbios_family_c64p_EventCombiner_unused */
extern xdc_Void ti_sysbios_family_c64p_EventCombiner_unused(xdc_UArg);

/* --> ti_sysbios_family_c64p_EventCombiner_unused */
extern xdc_Void ti_sysbios_family_c64p_EventCombiner_unused(xdc_UArg);

/* --> ti_sysbios_family_c64p_EventCombiner_unused */
extern xdc_Void ti_sysbios_family_c64p_EventCombiner_unused(xdc_UArg);

/* --> ti_sysbios_family_c64p_EventCombiner_unused */
extern xdc_Void ti_sysbios_family_c64p_EventCombiner_unused(xdc_UArg);

/* --> ti_sysbios_family_c64p_EventCombiner_unused */
extern xdc_Void ti_sysbios_family_c64p_EventCombiner_unused(xdc_UArg);

/* --> ti_sysbios_family_c64p_EventCombiner_unused */
extern xdc_Void ti_sysbios_family_c64p_EventCombiner_unused(xdc_UArg);

/* --> ti_sysbios_family_c64p_EventCombiner_unused */
extern xdc_Void ti_sysbios_family_c64p_EventCombiner_unused(xdc_UArg);

/* --> ti_sysbios_family_c64p_EventCombiner_unused */
extern xdc_Void ti_sysbios_family_c64p_EventCombiner_unused(xdc_UArg);

/* --> ti_sysbios_family_c64p_EventCombiner_unused */
extern xdc_Void ti_sysbios_family_c64p_EventCombiner_unused(xdc_UArg);

/* --> ti_sysbios_family_c64p_EventCombiner_unused */
extern xdc_Void ti_sysbios_family_c64p_EventCombiner_unused(xdc_UArg);

/* --> ti_sysbios_family_c64p_EventCombiner_unused */
extern xdc_Void ti_sysbios_family_c64p_EventCombiner_unused(xdc_UArg);

/* --> ti_sysbios_family_c64p_EventCombiner_unused */
extern xdc_Void ti_sysbios_family_c64p_EventCombiner_unused(xdc_UArg);

/* --> ti_sysbios_family_c64p_EventCombiner_unused */
extern xdc_Void ti_sysbios_family_c64p_EventCombiner_unused(xdc_UArg);

/* --> ti_sysbios_family_c64p_EventCombiner_unused */
extern xdc_Void ti_sysbios_family_c64p_EventCombiner_unused(xdc_UArg);

/* --> ti_sysbios_family_c64p_EventCombiner_unused */
extern xdc_Void ti_sysbios_family_c64p_EventCombiner_unused(xdc_UArg);

/* --> ti_sysbios_family_c64p_EventCombiner_unused */
extern xdc_Void ti_sysbios_family_c64p_EventCombiner_unused(xdc_UArg);

/* --> ti_sysbios_family_c64p_EventCombiner_unused */
extern xdc_Void ti_sysbios_family_c64p_EventCombiner_unused(xdc_UArg);

/* --> ti_sysbios_family_c64p_EventCombiner_unused */
extern xdc_Void ti_sysbios_family_c64p_EventCombiner_unused(xdc_UArg);

/* --> ti_sysbios_family_c64p_EventCombiner_unused */
extern xdc_Void ti_sysbios_family_c64p_EventCombiner_unused(xdc_UArg);

/* --> ti_sysbios_family_c64p_EventCombiner_unused */
extern xdc_Void ti_sysbios_family_c64p_EventCombiner_unused(xdc_UArg);

/* --> ti_sysbios_family_c64p_EventCombiner_unused */
extern xdc_Void ti_sysbios_family_c64p_EventCombiner_unused(xdc_UArg);

/* --> ti_sysbios_family_c64p_EventCombiner_unused */
extern xdc_Void ti_sysbios_family_c64p_EventCombiner_unused(xdc_UArg);

/* --> ti_sysbios_family_c64p_EventCombiner_unused */
extern xdc_Void ti_sysbios_family_c64p_EventCombiner_unused(xdc_UArg);

/* --> ti_sysbios_family_c64p_EventCombiner_unused */
extern xdc_Void ti_sysbios_family_c64p_EventCombiner_unused(xdc_UArg);

/* --> ti_sysbios_family_c64p_EventCombiner_unused */
extern xdc_Void ti_sysbios_family_c64p_EventCombiner_unused(xdc_UArg);

/* --> ti_sysbios_family_c64p_EventCombiner_unused */
extern xdc_Void ti_sysbios_family_c64p_EventCombiner_unused(xdc_UArg);

/* --> ti_sysbios_family_c64p_EventCombiner_unused */
extern xdc_Void ti_sysbios_family_c64p_EventCombiner_unused(xdc_UArg);

/* --> ti_sysbios_family_c64p_EventCombiner_unused */
extern xdc_Void ti_sysbios_family_c64p_EventCombiner_unused(xdc_UArg);

/* --> ti_sysbios_family_c64p_EventCombiner_unused */
extern xdc_Void ti_sysbios_family_c64p_EventCombiner_unused(xdc_UArg);

/* --> ti_sysbios_family_c64p_EventCombiner_unused */
extern xdc_Void ti_sysbios_family_c64p_EventCombiner_unused(xdc_UArg);

/* --> ti_sysbios_family_c64p_EventCombiner_unused */
extern xdc_Void ti_sysbios_family_c64p_EventCombiner_unused(xdc_UArg);

/* --> ti_sysbios_family_c64p_EventCombiner_unused */
extern xdc_Void ti_sysbios_family_c64p_EventCombiner_unused(xdc_UArg);

/* --> ti_sysbios_family_c64p_EventCombiner_unused */
extern xdc_Void ti_sysbios_family_c64p_EventCombiner_unused(xdc_UArg);

/* --> ti_sysbios_family_c64p_EventCombiner_unused */
extern xdc_Void ti_sysbios_family_c64p_EventCombiner_unused(xdc_UArg);

/* --> ti_sysbios_family_c64p_EventCombiner_unused */
extern xdc_Void ti_sysbios_family_c64p_EventCombiner_unused(xdc_UArg);

/* --> ti_sysbios_family_c64p_EventCombiner_unused */
extern xdc_Void ti_sysbios_family_c64p_EventCombiner_unused(xdc_UArg);

/* --> ti_sysbios_family_c64p_EventCombiner_unused */
extern xdc_Void ti_sysbios_family_c64p_EventCombiner_unused(xdc_UArg);

/* --> ti_sysbios_family_c64p_EventCombiner_unused */
extern xdc_Void ti_sysbios_family_c64p_EventCombiner_unused(xdc_UArg);

/* --> ti_sysbios_family_c64p_EventCombiner_unused */
extern xdc_Void ti_sysbios_family_c64p_EventCombiner_unused(xdc_UArg);

/* --> ti_sysbios_family_c64p_EventCombiner_unused */
extern xdc_Void ti_sysbios_family_c64p_EventCombiner_unused(xdc_UArg);

/* --> ti_sysbios_family_c64p_EventCombiner_unused */
extern xdc_Void ti_sysbios_family_c64p_EventCombiner_unused(xdc_UArg);

/* --> ti_sysbios_family_c64p_EventCombiner_unused */
extern xdc_Void ti_sysbios_family_c64p_EventCombiner_unused(xdc_UArg);

/* --> ti_sysbios_family_c64p_EventCombiner_unused */
extern xdc_Void ti_sysbios_family_c64p_EventCombiner_unused(xdc_UArg);

/* --> ti_sysbios_family_c64p_EventCombiner_unused */
extern xdc_Void ti_sysbios_family_c64p_EventCombiner_unused(xdc_UArg);

/* --> ti_sysbios_family_c64p_EventCombiner_unused */
extern xdc_Void ti_sysbios_family_c64p_EventCombiner_unused(xdc_UArg);

/* --> ti_sysbios_family_c64p_EventCombiner_unused */
extern xdc_Void ti_sysbios_family_c64p_EventCombiner_unused(xdc_UArg);

/* --> ti_sysbios_family_c64p_EventCombiner_unused */
extern xdc_Void ti_sysbios_family_c64p_EventCombiner_unused(xdc_UArg);

/* --> ti_sysbios_family_c64p_EventCombiner_unused */
extern xdc_Void ti_sysbios_family_c64p_EventCombiner_unused(xdc_UArg);

/* --> ti_sysbios_family_c64p_EventCombiner_unused */
extern xdc_Void ti_sysbios_family_c64p_EventCombiner_unused(xdc_UArg);

/* --> ti_sysbios_family_c64p_EventCombiner_unused */
extern xdc_Void ti_sysbios_family_c64p_EventCombiner_unused(xdc_UArg);

/* --> ti_sysbios_family_c64p_EventCombiner_unused */
extern xdc_Void ti_sysbios_family_c64p_EventCombiner_unused(xdc_UArg);

/* --> ti_sysbios_family_c64p_EventCombiner_unused */
extern xdc_Void ti_sysbios_family_c64p_EventCombiner_unused(xdc_UArg);

/* --> ti_sysbios_family_c64p_EventCombiner_unused */
extern xdc_Void ti_sysbios_family_c64p_EventCombiner_unused(xdc_UArg);

/* --> ti_sysbios_family_c64p_EventCombiner_unused */
extern xdc_Void ti_sysbios_family_c64p_EventCombiner_unused(xdc_UArg);

/* --> ti_sysbios_family_c64p_EventCombiner_unused */
extern xdc_Void ti_sysbios_family_c64p_EventCombiner_unused(xdc_UArg);

/* --> ti_sysbios_family_c64p_EventCombiner_unused */
extern xdc_Void ti_sysbios_family_c64p_EventCombiner_unused(xdc_UArg);

/* --> ti_sysbios_family_c64p_EventCombiner_unused */
extern xdc_Void ti_sysbios_family_c64p_EventCombiner_unused(xdc_UArg);

/* --> ti_sysbios_family_c64p_EventCombiner_unused */
extern xdc_Void ti_sysbios_family_c64p_EventCombiner_unused(xdc_UArg);

/* --> ti_sysbios_family_c64p_EventCombiner_unused */
extern xdc_Void ti_sysbios_family_c64p_EventCombiner_unused(xdc_UArg);

/* --> ti_sysbios_family_c64p_EventCombiner_unused */
extern xdc_Void ti_sysbios_family_c64p_EventCombiner_unused(xdc_UArg);

/* --> ti_sysbios_family_c64p_EventCombiner_unused */
extern xdc_Void ti_sysbios_family_c64p_EventCombiner_unused(xdc_UArg);

/* --> ti_sysbios_family_c64p_EventCombiner_unused */
extern xdc_Void ti_sysbios_family_c64p_EventCombiner_unused(xdc_UArg);

/* --> ti_sysbios_family_c64p_EventCombiner_unused */
extern xdc_Void ti_sysbios_family_c64p_EventCombiner_unused(xdc_UArg);

/* --> ti_sysbios_family_c64p_EventCombiner_unused */
extern xdc_Void ti_sysbios_family_c64p_EventCombiner_unused(xdc_UArg);

/* --> ti_sysbios_family_c64p_EventCombiner_unused */
extern xdc_Void ti_sysbios_family_c64p_EventCombiner_unused(xdc_UArg);

/* --> ti_sysbios_family_c64p_EventCombiner_unused */
extern xdc_Void ti_sysbios_family_c64p_EventCombiner_unused(xdc_UArg);

/* --> ti_sysbios_family_c64p_EventCombiner_unused */
extern xdc_Void ti_sysbios_family_c64p_EventCombiner_unused(xdc_UArg);

/* --> ti_sysbios_family_c64p_EventCombiner_unused */
extern xdc_Void ti_sysbios_family_c64p_EventCombiner_unused(xdc_UArg);

/* --> ti_sysbios_family_c64p_EventCombiner_unused */
extern xdc_Void ti_sysbios_family_c64p_EventCombiner_unused(xdc_UArg);

/* --> ti_sysbios_family_c64p_EventCombiner_unused */
extern xdc_Void ti_sysbios_family_c64p_EventCombiner_unused(xdc_UArg);

/* --> ti_sysbios_family_c64p_EventCombiner_unused */
extern xdc_Void ti_sysbios_family_c64p_EventCombiner_unused(xdc_UArg);

/* --> ti_sysbios_family_c64p_EventCombiner_unused */
extern xdc_Void ti_sysbios_family_c64p_EventCombiner_unused(xdc_UArg);

/* --> ti_sysbios_family_c64p_EventCombiner_unused */
extern xdc_Void ti_sysbios_family_c64p_EventCombiner_unused(xdc_UArg);

/* --> ti_sysbios_family_c64p_EventCombiner_unused */
extern xdc_Void ti_sysbios_family_c64p_EventCombiner_unused(xdc_UArg);

/* --> ti_sysbios_family_c64p_EventCombiner_unused */
extern xdc_Void ti_sysbios_family_c64p_EventCombiner_unused(xdc_UArg);

/* --> ti_sysbios_family_c64p_EventCombiner_unused */
extern xdc_Void ti_sysbios_family_c64p_EventCombiner_unused(xdc_UArg);

/* --> ti_sysbios_family_c64p_EventCombiner_unused */
extern xdc_Void ti_sysbios_family_c64p_EventCombiner_unused(xdc_UArg);

/* --> ti_sysbios_family_c64p_EventCombiner_unused */
extern xdc_Void ti_sysbios_family_c64p_EventCombiner_unused(xdc_UArg);

/* --> ti_sysbios_family_c64p_EventCombiner_unused */
extern xdc_Void ti_sysbios_family_c64p_EventCombiner_unused(xdc_UArg);

/* --> ti_sysbios_family_c64p_EventCombiner_unused */
extern xdc_Void ti_sysbios_family_c64p_EventCombiner_unused(xdc_UArg);

/* --> ti_sysbios_family_c64p_EventCombiner_unused */
extern xdc_Void ti_sysbios_family_c64p_EventCombiner_unused(xdc_UArg);

/* --> ti_sysbios_family_c64p_EventCombiner_unused */
extern xdc_Void ti_sysbios_family_c64p_EventCombiner_unused(xdc_UArg);

/* --> ti_sysbios_family_c64p_EventCombiner_unused */
extern xdc_Void ti_sysbios_family_c64p_EventCombiner_unused(xdc_UArg);

/* --> ti_sysbios_family_c64p_EventCombiner_unused */
extern xdc_Void ti_sysbios_family_c64p_EventCombiner_unused(xdc_UArg);

/* --> ti_sysbios_family_c64p_EventCombiner_unused */
extern xdc_Void ti_sysbios_family_c64p_EventCombiner_unused(xdc_UArg);

/* --> ti_sysbios_family_c64p_EventCombiner_unused */
extern xdc_Void ti_sysbios_family_c64p_EventCombiner_unused(xdc_UArg);

/* --> ti_sysbios_family_c64p_EventCombiner_unused */
extern xdc_Void ti_sysbios_family_c64p_EventCombiner_unused(xdc_UArg);

/* --> ti_sysbios_family_c64p_EventCombiner_unused */
extern xdc_Void ti_sysbios_family_c64p_EventCombiner_unused(xdc_UArg);

/* --> ti_sysbios_family_c64p_EventCombiner_unused */
extern xdc_Void ti_sysbios_family_c64p_EventCombiner_unused(xdc_UArg);

/* --> ti_sysbios_family_c64p_EventCombiner_unused */
extern xdc_Void ti_sysbios_family_c64p_EventCombiner_unused(xdc_UArg);

/* --> ti_sysbios_family_c64p_EventCombiner_unused */
extern xdc_Void ti_sysbios_family_c64p_EventCombiner_unused(xdc_UArg);

/* --> ti_sysbios_family_c64p_EventCombiner_unused */
extern xdc_Void ti_sysbios_family_c64p_EventCombiner_unused(xdc_UArg);

/* --> ti_sysbios_family_c64p_EventCombiner_unused */
extern xdc_Void ti_sysbios_family_c64p_EventCombiner_unused(xdc_UArg);

/* --> ti_sysbios_family_c64p_EventCombiner_unused */
extern xdc_Void ti_sysbios_family_c64p_EventCombiner_unused(xdc_UArg);

/* --> ti_sysbios_family_c64p_EventCombiner_unused */
extern xdc_Void ti_sysbios_family_c64p_EventCombiner_unused(xdc_UArg);

/* --> ti_sysbios_family_c64p_EventCombiner_unused */
extern xdc_Void ti_sysbios_family_c64p_EventCombiner_unused(xdc_UArg);

/* --> ti_sysbios_family_c64p_EventCombiner_unused */
extern xdc_Void ti_sysbios_family_c64p_EventCombiner_unused(xdc_UArg);

/* --> ti_sysbios_family_c64p_EventCombiner_unused */
extern xdc_Void ti_sysbios_family_c64p_EventCombiner_unused(xdc_UArg);

/* Module__state__V */
ti_sysbios_family_c64p_EventCombiner_Module_State__ ti_sysbios_family_c64p_EventCombiner_Module__state__V;


/*
 * ======== ti.sysbios.family.c64p.Exception DECLARATIONS ========
 */

/* Module_State__ */
typedef struct ti_sysbios_family_c64p_Exception_Module_State__ {
    xdc_Bits32 efr;
    xdc_Bits32 nrp;
    xdc_Bits32 ntsr;
    xdc_Bits32 ierr;
    ti_sysbios_family_c64p_Exception_FuncPtr returnHook;
    ti_sysbios_family_c64p_Exception_Context *excContext;
    __TA_ti_sysbios_family_c64p_Exception_Module_State__scratch scratch;
    xdc_Char *excPtr;
    __TA_ti_sysbios_family_c64p_Exception_Module_State__contextBuf contextBuf;
} ti_sysbios_family_c64p_Exception_Module_State__;

/* Module__state__V */
ti_sysbios_family_c64p_Exception_Module_State__ ti_sysbios_family_c64p_Exception_Module__state__V;


/*
 * ======== ti.sysbios.family.c64p.Hwi DECLARATIONS ========
 */

/* --> ti_sysbios_family_c64p_EventCombiner_dispatch */
extern xdc_Void ti_sysbios_family_c64p_EventCombiner_dispatch(xdc_UArg);

/* --> ti_sysbios_family_c64p_EventCombiner_dispatch */
extern xdc_Void ti_sysbios_family_c64p_EventCombiner_dispatch(xdc_UArg);

/* --> ti_sysbios_family_c64p_EventCombiner_dispatch */
extern xdc_Void ti_sysbios_family_c64p_EventCombiner_dispatch(xdc_UArg);

/* --> ti_sysbios_family_c64p_EventCombiner_dispatch */
extern xdc_Void ti_sysbios_family_c64p_EventCombiner_dispatch(xdc_UArg);

/* Object__table__V */
ti_sysbios_family_c64p_Hwi_Object__ ti_sysbios_family_c64p_Hwi_Object__table__V[5];

/* Module_State__ */
typedef struct ti_sysbios_family_c64p_Hwi_Module_State__ {
    __TA_ti_sysbios_family_c64p_Hwi_Module_State__intEvents intEvents;
    xdc_Bits16 ierMask;
    volatile xdc_Int intNum;
    xdc_Char *taskSP;
    xdc_Char *isrStack;
    xdc_Ptr vectorTableBase;
    xdc_Ptr bss;
    xdc_Int scw;
    __TA_ti_sysbios_family_c64p_Hwi_Module_State__dispatchTable dispatchTable;
} ti_sysbios_family_c64p_Hwi_Module_State__;

/* --> ti_sysbios_family_c64p_Hwi0 */
extern void* ti_sysbios_family_c64p_Hwi0;

/* --> __TI_STATIC_BASE */
extern void* __TI_STATIC_BASE;

/* Module__state__V */
ti_sysbios_family_c64p_Hwi_Module_State__ ti_sysbios_family_c64p_Hwi_Module__state__V;

/* --> ti_sysbios_knl_Swi_disable__E */
extern xdc_UInt ti_sysbios_knl_Swi_disable__E(xdc_Void);

/* --> ti_sysbios_knl_Swi_restoreHwi__E */
extern xdc_Void ti_sysbios_knl_Swi_restoreHwi__E(xdc_UInt);

/* --> ti_sysbios_knl_Task_disable__E */
extern xdc_UInt ti_sysbios_knl_Task_disable__E(xdc_Void);

/* --> ti_sysbios_knl_Task_restoreHwi__E */
extern xdc_Void ti_sysbios_knl_Task_restoreHwi__E(xdc_UInt);


/*
 * ======== ti.sysbios.family.c64p.TimestampProvider DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.gates.GateHwi DECLARATIONS ========
 */

/* Object__table__V */
ti_sysbios_gates_GateHwi_Object__ ti_sysbios_gates_GateHwi_Object__table__V[1];


/*
 * ======== ti.sysbios.gates.GateMutex DECLARATIONS ========
 */

/* Object__table__V */
ti_sysbios_gates_GateMutex_Object__ ti_sysbios_gates_GateMutex_Object__table__V[2];


/*
 * ======== ti.sysbios.hal.Hwi DECLARATIONS ========
 */

/* Object__table__V */
ti_sysbios_hal_Hwi_Object__ ti_sysbios_hal_Hwi_Object__table__V[1];


/*
 * ======== ti.sysbios.hal.Hwi_HwiProxy DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.heaps.HeapBuf DECLARATIONS ========
 */

/* Module_State__ */
typedef struct ti_sysbios_heaps_HeapBuf_Module_State__ {
    __TA_ti_sysbios_heaps_HeapBuf_Module_State__constructedHeaps constructedHeaps;
} ti_sysbios_heaps_HeapBuf_Module_State__;

/* Module__state__V */
ti_sysbios_heaps_HeapBuf_Module_State__ ti_sysbios_heaps_HeapBuf_Module__state__V;


/*
 * ======== ti.sysbios.heaps.HeapMem DECLARATIONS ========
 */

#ifdef __IAR_SYSTEMS_ICC__
    #pragma data_alignment=8
#endif
/* --> ti_sysbios_heaps_HeapMem_Instance_State_0_buf__A */
__T1_ti_sysbios_heaps_HeapMem_Instance_State__buf ti_sysbios_heaps_HeapMem_Instance_State_0_buf__A[32768];
#ifdef __ti__sect
    #pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Instance_State_0_buf__A, "systemHeap");
#endif
#if defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __TI_COMPILER_VERSION__
__T1_ti_sysbios_heaps_HeapMem_Instance_State__buf ti_sysbios_heaps_HeapMem_Instance_State_0_buf__A[32768] __attribute__ ((section("systemHeap")));
#endif
#endif
#ifdef __ti__align
    #pragma DATA_ALIGN(ti_sysbios_heaps_HeapMem_Instance_State_0_buf__A, 8);
#endif
#ifdef __GNUC__
#ifndef __TI_COMPILER_VERSION__
__T1_ti_sysbios_heaps_HeapMem_Instance_State__buf ti_sysbios_heaps_HeapMem_Instance_State_0_buf__A[32768] __attribute__ ((aligned(8)));
#endif
#endif

/* Object__table__V */
ti_sysbios_heaps_HeapMem_Object__ ti_sysbios_heaps_HeapMem_Object__table__V[1];


/*
 * ======== ti.sysbios.heaps.HeapMem_Module_GateProxy DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.knl.Clock DECLARATIONS ========
 */

/* Module_State__ */
typedef struct ti_sysbios_knl_Clock_Module_State__ {
    volatile xdc_UInt32 ticks;
    xdc_UInt swiCount;
    ti_sysbios_knl_Clock_TimerProxy_Handle timer;
    ti_sysbios_knl_Swi_Handle swi;
    volatile xdc_UInt numTickSkip;
    xdc_UInt32 nextScheduledTick;
    xdc_UInt32 maxSkippable;
    xdc_Bool inWorkFunc;
    volatile xdc_Bool startDuringWorkFunc;
    xdc_Bool ticking;
    ti_sysbios_knl_Queue_Object__ Object_field_clockQ;
} ti_sysbios_knl_Clock_Module_State__;

/* Module__state__V */
ti_sysbios_knl_Clock_Module_State__ ti_sysbios_knl_Clock_Module__state__V;

/* --> ti_sysbios_knl_Clock_doTick__I */
extern xdc_Void ti_sysbios_knl_Clock_doTick__I(xdc_UArg);


/*
 * ======== ti.sysbios.knl.Clock_TimerProxy DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.knl.Event DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.knl.Idle DECLARATIONS ========
 */

/* --> MmwDemo_sleep */
extern xdc_Void MmwDemo_sleep(xdc_Void);

/* --> ti_sysbios_hal_Hwi_checkStack */
extern xdc_Void ti_sysbios_hal_Hwi_checkStack(xdc_Void);

/* --> ti_sysbios_knl_Idle_funcList__A */
const __T1_ti_sysbios_knl_Idle_funcList ti_sysbios_knl_Idle_funcList__A[3];

/* --> ti_sysbios_knl_Idle_coreList__A */
const __T1_ti_sysbios_knl_Idle_coreList ti_sysbios_knl_Idle_coreList__A[3];


/*
 * ======== ti.sysbios.knl.Intrinsics DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.knl.Intrinsics_SupportProxy DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.knl.Queue DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.knl.Semaphore DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.knl.Swi DECLARATIONS ========
 */

/* Object__table__V */
ti_sysbios_knl_Swi_Object__ ti_sysbios_knl_Swi_Object__table__V[1];

/* Module_State__ */
typedef struct ti_sysbios_knl_Swi_Module_State__ {
    volatile xdc_Bool locked;
    xdc_UInt curSet;
    xdc_UInt curTrigger;
    ti_sysbios_knl_Swi_Handle curSwi;
    ti_sysbios_knl_Queue_Handle curQ;
    __TA_ti_sysbios_knl_Swi_Module_State__readyQ readyQ;
    __TA_ti_sysbios_knl_Swi_Module_State__constructedSwis constructedSwis;
} ti_sysbios_knl_Swi_Module_State__;

/* --> ti_sysbios_knl_Swi_Module_State_0_readyQ__A */
__T1_ti_sysbios_knl_Swi_Module_State__readyQ ti_sysbios_knl_Swi_Module_State_0_readyQ__A[16];

/* Module__state__V */
ti_sysbios_knl_Swi_Module_State__ ti_sysbios_knl_Swi_Module__state__V;

/* --> ti_sysbios_knl_Task_disable__E */
extern xdc_UInt ti_sysbios_knl_Task_disable__E(xdc_Void);

/* --> ti_sysbios_knl_Task_restore__E */
extern xdc_Void ti_sysbios_knl_Task_restore__E(xdc_UInt);


/*
 * ======== ti.sysbios.knl.Task DECLARATIONS ========
 */

#ifdef __IAR_SYSTEMS_ICC__
    #pragma data_alignment=8
#endif
/* --> ti_sysbios_knl_Task_Instance_State_0_stack__A */
__T1_ti_sysbios_knl_Task_Instance_State__stack ti_sysbios_knl_Task_Instance_State_0_stack__A[800];
#ifdef __ti__sect
    #pragma DATA_SECTION(ti_sysbios_knl_Task_Instance_State_0_stack__A, ".far:taskStackSection");
#endif
#if defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __TI_COMPILER_VERSION__
__T1_ti_sysbios_knl_Task_Instance_State__stack ti_sysbios_knl_Task_Instance_State_0_stack__A[800] __attribute__ ((section(".far:taskStackSection")));
#endif
#endif
#ifdef __ti__align
    #pragma DATA_ALIGN(ti_sysbios_knl_Task_Instance_State_0_stack__A, 8);
#endif
#ifdef __GNUC__
#ifndef __TI_COMPILER_VERSION__
__T1_ti_sysbios_knl_Task_Instance_State__stack ti_sysbios_knl_Task_Instance_State_0_stack__A[800] __attribute__ ((aligned(8)));
#endif
#endif

/* --> ti_sysbios_knl_Task_Instance_State_0_hookEnv__A */
__T1_ti_sysbios_knl_Task_Instance_State__hookEnv ti_sysbios_knl_Task_Instance_State_0_hookEnv__A[1];

/* Object__table__V */
ti_sysbios_knl_Task_Object__ ti_sysbios_knl_Task_Object__table__V[1];

/* Module_State__ */
typedef struct ti_sysbios_knl_Task_Module_State__ {
    volatile xdc_Bool locked;
    volatile xdc_UInt curSet;
    volatile xdc_Bool workFlag;
    xdc_UInt vitalTasks;
    ti_sysbios_knl_Task_Handle curTask;
    ti_sysbios_knl_Queue_Handle curQ;
    __TA_ti_sysbios_knl_Task_Module_State__readyQ readyQ;
    __TA_ti_sysbios_knl_Task_Module_State__smpCurSet smpCurSet;
    __TA_ti_sysbios_knl_Task_Module_State__smpCurMask smpCurMask;
    __TA_ti_sysbios_knl_Task_Module_State__smpCurTask smpCurTask;
    __TA_ti_sysbios_knl_Task_Module_State__smpReadyQ smpReadyQ;
    __TA_ti_sysbios_knl_Task_Module_State__idleTask idleTask;
    __TA_ti_sysbios_knl_Task_Module_State__constructedTasks constructedTasks;
    xdc_Bool curTaskPrivileged;
    ti_sysbios_knl_Queue_Object__ Object_field_inactiveQ;
    ti_sysbios_knl_Queue_Object__ Object_field_terminatedQ;
} ti_sysbios_knl_Task_Module_State__;

/* --> ti_sysbios_knl_Task_Module_State_0_readyQ__A */
__T1_ti_sysbios_knl_Task_Module_State__readyQ ti_sysbios_knl_Task_Module_State_0_readyQ__A[16];

/* --> ti_sysbios_knl_Task_Module_State_0_idleTask__A */
__T1_ti_sysbios_knl_Task_Module_State__idleTask ti_sysbios_knl_Task_Module_State_0_idleTask__A[1];

/* Module__state__V */
ti_sysbios_knl_Task_Module_State__ ti_sysbios_knl_Task_Module__state__V;

/* --> ti_sysbios_utils_Load_taskRegHook__E */
extern xdc_Void ti_sysbios_utils_Load_taskRegHook__E(xdc_Int);

/* --> ti_sysbios_knl_Task_hooks__A */
const __T1_ti_sysbios_knl_Task_hooks ti_sysbios_knl_Task_hooks__A[1];


/*
 * ======== ti.sysbios.knl.Task_SupportProxy DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.rts.ti.ThreadLocalStorage DECLARATIONS ========
 */

/* Module_State__ */
typedef struct ti_sysbios_rts_ti_ThreadLocalStorage_Module_State__ {
    xdc_Ptr currentTP;
    xdc_UInt contextId;
    xdc_runtime_IHeap_Handle heapHandle;
} ti_sysbios_rts_ti_ThreadLocalStorage_Module_State__;

/* Module__state__V */
ti_sysbios_rts_ti_ThreadLocalStorage_Module_State__ ti_sysbios_rts_ti_ThreadLocalStorage_Module__state__V;


/*
 * ======== ti.sysbios.timers.rti.Timer DECLARATIONS ========
 */

/* Object__table__V */
ti_sysbios_timers_rti_Timer_Object__ ti_sysbios_timers_rti_Timer_Object__table__V[1];

/* Module_State__ */
typedef struct ti_sysbios_timers_rti_Timer_Module_State__ {
    xdc_UInt availMask;
    __TA_ti_sysbios_timers_rti_Timer_Module_State__device device;
    __TA_ti_sysbios_timers_rti_Timer_Module_State__intFreqs intFreqs;
    __TA_ti_sysbios_timers_rti_Timer_Module_State__handles handles;
} ti_sysbios_timers_rti_Timer_Module_State__;

/* --> ti_sysbios_timers_rti_Timer_Module_State_0_device__A */
__T1_ti_sysbios_timers_rti_Timer_Module_State__device ti_sysbios_timers_rti_Timer_Module_State_0_device__A[2];

/* --> ti_sysbios_timers_rti_Timer_Module_State_0_intFreqs__A */
__T1_ti_sysbios_timers_rti_Timer_Module_State__intFreqs ti_sysbios_timers_rti_Timer_Module_State_0_intFreqs__A[2];

/* --> ti_sysbios_timers_rti_Timer_Module_State_0_handles__A */
__T1_ti_sysbios_timers_rti_Timer_Module_State__handles ti_sysbios_timers_rti_Timer_Module_State_0_handles__A[2];

/* Module__state__V */
ti_sysbios_timers_rti_Timer_Module_State__ ti_sysbios_timers_rti_Timer_Module__state__V;


/*
 * ======== ti.sysbios.utils.Load DECLARATIONS ========
 */

/* Module_State__ */
typedef struct ti_sysbios_utils_Load_Module_State__ {
    xdc_Int taskHId;
    __TA_ti_sysbios_utils_Load_Module_State__taskStartTime taskStartTime;
    xdc_UInt32 timeElapsed;
    __TA_ti_sysbios_utils_Load_Module_State__runningTask runningTask;
    xdc_Bool firstSwitchDone;
    xdc_UInt32 swiStartTime;
    ti_sysbios_utils_Load_HookContext swiEnv;
    __TA_ti_sysbios_utils_Load_Module_State__taskEnv taskEnv;
    xdc_UInt32 swiCnt;
    xdc_UInt32 hwiStartTime;
    ti_sysbios_utils_Load_HookContext hwiEnv;
    xdc_UInt32 hwiCnt;
    xdc_UInt32 timeSlotCnt;
    xdc_UInt32 minLoop;
    xdc_UInt32 minIdle;
    xdc_UInt32 t0;
    xdc_UInt32 idleCnt;
    xdc_UInt32 cpuLoad;
    xdc_UInt32 taskEnvLen;
    xdc_UInt32 taskNum;
    xdc_Bool powerEnabled;
    xdc_UInt32 idleStartTime;
    xdc_UInt32 busyStartTime;
    xdc_UInt32 busyTime;
    ti_sysbios_knl_Queue_Object__ Object_field_taskList;
} ti_sysbios_utils_Load_Module_State__;

/* --> ti_sysbios_utils_Load_Module_State_0_taskStartTime__A */
__T1_ti_sysbios_utils_Load_Module_State__taskStartTime ti_sysbios_utils_Load_Module_State_0_taskStartTime__A[1];

/* --> ti_sysbios_utils_Load_Module_State_0_runningTask__A */
__T1_ti_sysbios_utils_Load_Module_State__runningTask ti_sysbios_utils_Load_Module_State_0_runningTask__A[1];

/* --> ti_sysbios_utils_Load_Module_State_0_taskEnv__A */
__T1_ti_sysbios_utils_Load_Module_State__taskEnv ti_sysbios_utils_Load_Module_State_0_taskEnv__A[1];

/* Module__state__V */
ti_sysbios_utils_Load_Module_State__ ti_sysbios_utils_Load_Module__state__V;


/*
 * ======== xdc.runtime.Assert DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Core DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Defaults DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Diags DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Error DECLARATIONS ========
 */

/* Module_State__ */
typedef struct xdc_runtime_Error_Module_State__ {
    xdc_UInt16 count;
} xdc_runtime_Error_Module_State__;

/* Module__state__V */
xdc_runtime_Error_Module_State__ xdc_runtime_Error_Module__state__V;


/*
 * ======== xdc.runtime.Gate DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Log DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.LoggerBuf DECLARATIONS ========
 */

/* --> xdc_runtime_LoggerBuf_Instance_State_0_entryArr__A */
__T1_xdc_runtime_LoggerBuf_Instance_State__entryArr xdc_runtime_LoggerBuf_Instance_State_0_entryArr__A[200];

/* Object__table__V */
xdc_runtime_LoggerBuf_Object__ xdc_runtime_LoggerBuf_Object__table__V[1];

/* Module_State__ */
typedef struct xdc_runtime_LoggerBuf_Module_State__ {
    xdc_runtime_Diags_Mask level1;
    xdc_runtime_Diags_Mask level2;
    xdc_runtime_Diags_Mask level3;
} xdc_runtime_LoggerBuf_Module_State__;

/* Module__state__V */
xdc_runtime_LoggerBuf_Module_State__ xdc_runtime_LoggerBuf_Module__state__V;


/*
 * ======== xdc.runtime.LoggerBuf_Module_GateProxy DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.LoggerBuf_TimestampProxy DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Main DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Main_Module_GateProxy DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Memory DECLARATIONS ========
 */

/* Module_State__ */
typedef struct xdc_runtime_Memory_Module_State__ {
    xdc_SizeT maxDefaultTypeAlign;
} xdc_runtime_Memory_Module_State__;

/* Module__state__V */
xdc_runtime_Memory_Module_State__ xdc_runtime_Memory_Module__state__V;


/*
 * ======== xdc.runtime.Memory_HeapProxy DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Registry DECLARATIONS ========
 */

/* Module_State__ */
typedef struct xdc_runtime_Registry_Module_State__ {
    xdc_runtime_Registry_Desc *listHead;
    xdc_runtime_Types_ModuleId curId;
} xdc_runtime_Registry_Module_State__;

/* Module__state__V */
xdc_runtime_Registry_Module_State__ xdc_runtime_Registry_Module__state__V;


/*
 * ======== xdc.runtime.Startup DECLARATIONS ========
 */

/* Module_State__ */
typedef struct xdc_runtime_Startup_Module_State__ {
    xdc_Int *stateTab;
    xdc_Bool execFlag;
    xdc_Bool rtsDoneFlag;
} xdc_runtime_Startup_Module_State__;

/* Module__state__V */
xdc_runtime_Startup_Module_State__ xdc_runtime_Startup_Module__state__V;

/* --> ti_sysbios_hal_Hwi_initStack */
extern xdc_Void ti_sysbios_hal_Hwi_initStack(xdc_Void);

/* --> xdc_runtime_Startup_firstFxns__A */
const __T1_xdc_runtime_Startup_firstFxns xdc_runtime_Startup_firstFxns__A[2];

/* --> xdc_runtime_LoggerBuf_Module_startup__E */
extern xdc_Int xdc_runtime_LoggerBuf_Module_startup__E(xdc_Int);

/* --> xdc_runtime_System_Module_startup__E */
extern xdc_Int xdc_runtime_System_Module_startup__E(xdc_Int);

/* --> ti_sysbios_family_c64p_EventCombiner_Module_startup__E */
extern xdc_Int ti_sysbios_family_c64p_EventCombiner_Module_startup__E(xdc_Int);

/* --> ti_sysbios_family_c64p_Exception_Module_startup__E */
extern xdc_Int ti_sysbios_family_c64p_Exception_Module_startup__E(xdc_Int);

/* --> ti_sysbios_family_c64p_Hwi_Module_startup__E */
extern xdc_Int ti_sysbios_family_c64p_Hwi_Module_startup__E(xdc_Int);

/* --> ti_sysbios_family_c64p_TimestampProvider_Module_startup__E */
extern xdc_Int ti_sysbios_family_c64p_TimestampProvider_Module_startup__E(xdc_Int);

/* --> ti_sysbios_family_c64p_Cache_Module_startup__E */
extern xdc_Int ti_sysbios_family_c64p_Cache_Module_startup__E(xdc_Int);

/* --> ti_sysbios_knl_Clock_Module_startup__E */
extern xdc_Int ti_sysbios_knl_Clock_Module_startup__E(xdc_Int);

/* --> ti_sysbios_knl_Swi_Module_startup__E */
extern xdc_Int ti_sysbios_knl_Swi_Module_startup__E(xdc_Int);

/* --> ti_sysbios_knl_Task_Module_startup__E */
extern xdc_Int ti_sysbios_knl_Task_Module_startup__E(xdc_Int);

/* --> ti_sysbios_heaps_HeapBuf_Module_startup__E */
extern xdc_Int ti_sysbios_heaps_HeapBuf_Module_startup__E(xdc_Int);

/* --> ti_sysbios_hal_Hwi_Module_startup__E */
extern xdc_Int ti_sysbios_hal_Hwi_Module_startup__E(xdc_Int);

/* --> ti_sysbios_timers_rti_Timer_Module_startup__E */
extern xdc_Int ti_sysbios_timers_rti_Timer_Module_startup__E(xdc_Int);

/* --> xdc_runtime_Startup_sfxnTab__A */
const __T1_xdc_runtime_Startup_sfxnTab xdc_runtime_Startup_sfxnTab__A[13];

/* --> xdc_runtime_Startup_sfxnRts__A */
const __T1_xdc_runtime_Startup_sfxnRts xdc_runtime_Startup_sfxnRts__A[13];


/*
 * ======== xdc.runtime.SysStd DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.System DECLARATIONS ========
 */

/* Module_State__ */
typedef struct xdc_runtime_System_Module_State__ {
    __TA_xdc_runtime_System_Module_State__atexitHandlers atexitHandlers;
    xdc_Int numAtexitHandlers;
} xdc_runtime_System_Module_State__;

/* --> xdc_runtime_System_Module_State_0_atexitHandlers__A */
__T1_xdc_runtime_System_Module_State__atexitHandlers xdc_runtime_System_Module_State_0_atexitHandlers__A[8];

/* Module__state__V */
xdc_runtime_System_Module_State__ xdc_runtime_System_Module__state__V;

/* --> xdc_runtime_System_printfExtend__I */
extern xdc_Int xdc_runtime_System_printfExtend__I(xdc_Char**,xdc_CString*,xdc_VaList*,xdc_runtime_System_ParseData*);


/*
 * ======== xdc.runtime.System_Module_GateProxy DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.System_SupportProxy DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Text DECLARATIONS ========
 */

/* Module_State__ */
typedef struct xdc_runtime_Text_Module_State__ {
    xdc_CPtr charBase;
    xdc_CPtr nodeBase;
} xdc_runtime_Text_Module_State__;

/* Module__state__V */
xdc_runtime_Text_Module_State__ xdc_runtime_Text_Module__state__V;

/* --> xdc_runtime_Text_charTab__A */
const __T1_xdc_runtime_Text_charTab xdc_runtime_Text_charTab__A[6745];

/* --> xdc_runtime_Text_nodeTab__A */
const __T1_xdc_runtime_Text_nodeTab xdc_runtime_Text_nodeTab__A[56];


/*
 * ======== xdc.runtime.Timestamp DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.TimestampNull DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Timestamp_SupportProxy DECLARATIONS ========
 */


/*
 * ======== OBJECT OFFSETS ========
 */

#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Instance_State_sem__O, ".const:ti_sysbios_gates_GateMutex_Instance_State_sem__O");
__FAR__ const xdc_SizeT ti_sysbios_gates_GateMutex_Instance_State_sem__O = offsetof(ti_sysbios_gates_GateMutex_Object__,Object_field_sem);


/*
 * ======== OBJECT OFFSETS ========
 */

#pragma DATA_SECTION(ti_sysbios_heaps_HeapBuf_Instance_State_freeList__O, ".const:ti_sysbios_heaps_HeapBuf_Instance_State_freeList__O");
__FAR__ const xdc_SizeT ti_sysbios_heaps_HeapBuf_Instance_State_freeList__O = offsetof(ti_sysbios_heaps_HeapBuf_Object__,Object_field_freeList);


/*
 * ======== OBJECT OFFSETS ========
 */

#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module_State_clockQ__O, ".const:ti_sysbios_knl_Clock_Module_State_clockQ__O");
__FAR__ const xdc_SizeT ti_sysbios_knl_Clock_Module_State_clockQ__O = offsetof(ti_sysbios_knl_Clock_Module_State__,Object_field_clockQ);


/*
 * ======== OBJECT OFFSETS ========
 */

#pragma DATA_SECTION(ti_sysbios_knl_Event_Instance_State_pendQ__O, ".const:ti_sysbios_knl_Event_Instance_State_pendQ__O");
__FAR__ const xdc_SizeT ti_sysbios_knl_Event_Instance_State_pendQ__O = offsetof(ti_sysbios_knl_Event_Object__,Object_field_pendQ);


/*
 * ======== OBJECT OFFSETS ========
 */

#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Instance_State_pendQ__O, ".const:ti_sysbios_knl_Semaphore_Instance_State_pendQ__O");
__FAR__ const xdc_SizeT ti_sysbios_knl_Semaphore_Instance_State_pendQ__O = offsetof(ti_sysbios_knl_Semaphore_Object__,Object_field_pendQ);


/*
 * ======== OBJECT OFFSETS ========
 */

#pragma DATA_SECTION(ti_sysbios_knl_Task_Module_State_inactiveQ__O, ".const:ti_sysbios_knl_Task_Module_State_inactiveQ__O");
__FAR__ const xdc_SizeT ti_sysbios_knl_Task_Module_State_inactiveQ__O = offsetof(ti_sysbios_knl_Task_Module_State__,Object_field_inactiveQ);
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module_State_terminatedQ__O, ".const:ti_sysbios_knl_Task_Module_State_terminatedQ__O");
__FAR__ const xdc_SizeT ti_sysbios_knl_Task_Module_State_terminatedQ__O = offsetof(ti_sysbios_knl_Task_Module_State__,Object_field_terminatedQ);


/*
 * ======== OBJECT OFFSETS ========
 */

#pragma DATA_SECTION(ti_sysbios_utils_Load_Module_State_taskList__O, ".const:ti_sysbios_utils_Load_Module_State_taskList__O");
__FAR__ const xdc_SizeT ti_sysbios_utils_Load_Module_State_taskList__O = offsetof(ti_sysbios_utils_Load_Module_State__,Object_field_taskList);


/*
 * ======== xdc.cfg.Program TEMPLATE ========
 */

/*
 *  ======== __ASM__ ========
 *  Define absolute path prefix for this executable's
 *  configuration generated files.
 */
xdc__META(__ASM__, "@(#)__ASM__ = D:/ti/dev/mmWave/out_of_box_6843_isk_dss/Debug/configPkg/package/cfg/mmw_dss_pe674");

/*
 *  ======== __ISA__ ========
 *  Define the ISA of this executable.  This symbol is used by platform
 *  specific "exec" commands that support more than one ISA; e.g., gdb
 */
xdc__META(__ISA__, "@(#)__ISA__ = 674");

/*
 *  ======== __PLAT__ ========
 *  Define the name of the platform that can run this executable.  This
 *  symbol is used by platform independent "exec" commands
 */
xdc__META(__PLAT__, "@(#)__PLAT__ = ti.platforms.c6x");

/*
 *  ======== __TARG__ ========
 *  Define the name of the target used to build this executable.
 */
xdc__META(__TARG__, "@(#)__TARG__ = ti.targets.elf.C674");

/*
 *  ======== __TRDR__ ========
 *  Define the name of the class that can read/parse this executable.
 */
xdc__META(__TRDR__, "@(#)__TRDR__ = ti.targets.omf.elf.Elf32");


/*
 * ======== xdc.cfg.SourceDir TEMPLATE ========
 */



/*
 * ======== xdc.runtime.Diags TEMPLATE ========
 */

xdc_runtime_Diags_DictElem xdc_runtime_Diags_dictElems[] = {
    {32778, &xdc_runtime_Main_Module__root__V.mask},
    {32804, &ti_sysbios_knl_Task_Module__root__V.mask},
    {0, 0}
};


/*
 * ======== xdc.runtime.Error TEMPLATE ========
 */

xdc_runtime_Error_Block xdc_runtime_Error_IgnoreBlock = {
    ~0, /* unused */
    {
        {0, 0} /* data */
    },
    0,  /* id */
    0,  /* msg */
    {
        0,  /* mod */
        0,  /* file */
        0   /* line */
    }
};

/*
 * ======== xdc.runtime.Startup TEMPLATE ========
 */

/*
 *  ======== MODULE STARTUP DONE FUNCTIONS ========
 */
xdc_Bool xdc_runtime_LoggerBuf_Module__startupDone__F(void); /* keep GCC prototype warning quiet */
xdc_Bool xdc_runtime_LoggerBuf_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[0] < 0;
}
xdc_Bool xdc_runtime_System_Module__startupDone__F(void); /* keep GCC prototype warning quiet */
xdc_Bool xdc_runtime_System_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[1] < 0;
}
xdc_Bool ti_sysbios_family_c64p_EventCombiner_Module__startupDone__F(void); /* keep GCC prototype warning quiet */
xdc_Bool ti_sysbios_family_c64p_EventCombiner_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[2] < 0;
}
xdc_Bool ti_sysbios_family_c64p_Exception_Module__startupDone__F(void); /* keep GCC prototype warning quiet */
xdc_Bool ti_sysbios_family_c64p_Exception_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[3] < 0;
}
xdc_Bool ti_sysbios_family_c64p_Hwi_Module__startupDone__F(void); /* keep GCC prototype warning quiet */
xdc_Bool ti_sysbios_family_c64p_Hwi_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[4] < 0;
}
xdc_Bool ti_sysbios_family_c64p_TimestampProvider_Module__startupDone__F(void); /* keep GCC prototype warning quiet */
xdc_Bool ti_sysbios_family_c64p_TimestampProvider_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[5] < 0;
}
xdc_Bool ti_sysbios_family_c64p_Cache_Module__startupDone__F(void); /* keep GCC prototype warning quiet */
xdc_Bool ti_sysbios_family_c64p_Cache_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[6] < 0;
}
xdc_Bool ti_sysbios_knl_Clock_Module__startupDone__F(void); /* keep GCC prototype warning quiet */
xdc_Bool ti_sysbios_knl_Clock_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[7] < 0;
}
xdc_Bool ti_sysbios_knl_Swi_Module__startupDone__F(void); /* keep GCC prototype warning quiet */
xdc_Bool ti_sysbios_knl_Swi_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[8] < 0;
}
xdc_Bool ti_sysbios_knl_Task_Module__startupDone__F(void); /* keep GCC prototype warning quiet */
xdc_Bool ti_sysbios_knl_Task_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[9] < 0;
}
xdc_Bool ti_sysbios_heaps_HeapBuf_Module__startupDone__F(void); /* keep GCC prototype warning quiet */
xdc_Bool ti_sysbios_heaps_HeapBuf_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[10] < 0;
}
xdc_Bool ti_sysbios_hal_Hwi_Module__startupDone__F(void); /* keep GCC prototype warning quiet */
xdc_Bool ti_sysbios_hal_Hwi_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[11] < 0;
}
xdc_Bool ti_sysbios_timers_rti_Timer_Module__startupDone__F(void); /* keep GCC prototype warning quiet */
xdc_Bool ti_sysbios_timers_rti_Timer_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[12] < 0;
}


/*
 * Startup_exec__I is an internal entry point called by target/platform
 * boot code. Boot code is not brought into a partial-link assembly. So,
 * without this pragma, whole program optimizers would otherwise optimize-out
 * this function.
 */
#ifdef __ti__
#pragma FUNC_EXT_CALLED(xdc_runtime_Startup_exec__I);
#endif

#ifdef __GNUC__
#if __GNUC__ >= 4
#ifdef __llvm__
xdc_Void xdc_runtime_Startup_exec__I(void) __attribute__ ((used));
#else
xdc_Void xdc_runtime_Startup_exec__I(void) __attribute__ ((externally_visible));
#endif
#endif
#endif

/*
 *  ======== xdc_runtime_Startup_exec__I ========
 *  Initialize all used modules that have startup functions
 */
xdc_Void xdc_runtime_Startup_exec__I(void)
{
    xdc_Int state[13];
    xdc_runtime_Startup_startModsFxn__C(state, 13);
}

/*
 * ======== xdc.runtime.Reset TEMPLATE ========
 */

/*
 * Startup_reset__I is an internal entry point called by target/platform
 * boot code. Boot code is not brought into a partial-link assembly. So,
 * without this pragma, whole program optimizers would otherwise optimize-out
 * this function.
 */
#ifdef __ti__
#pragma FUNC_EXT_CALLED(xdc_runtime_Startup_reset__I);
#endif

#ifdef __GNUC__
#if __GNUC__ >= 4
#ifdef __llvm__
xdc_Void xdc_runtime_Startup_reset__I(void) __attribute__ ((used));
#else
xdc_Void xdc_runtime_Startup_reset__I(void) __attribute__ ((externally_visible));
#endif
#endif
#endif


/*
 *  ======== xdc_runtime_Startup_reset__I ========
 *  This function is called by bootstrap initialization code as early as
 *  possible in the startup process.  This function calls all functions in
 *  the Reset.fxns array _as well as_ Startup.resetFxn (if it's non-NULL)
 */
xdc_Void xdc_runtime_Startup_reset__I(void)
{
}

/*
 * ======== xdc.runtime.System TEMPLATE ========
 */


#include <xdc/std.h>
#include <limits.h>
#include <xdc/runtime/Types.h>
#include <xdc/runtime/Text.h>
#include <xdc/runtime/Assert.h>

#include <xdc/runtime/System.h>
#include <xdc/runtime/System__internal.h>

/*
 *  ======== System_printfExtend__I ========
 *  This function processes optional extended formats of printf.
 *  
 *  It returns the number of characters added to the result.
 *
 *  Precision (maximum string length) is not supported for %$S.
 *
 *  Right-justified (which is default) minimum width is not supported
 *  for %$L, %$S, or %$F.
 */
xdc_Int xdc_runtime_System_printfExtend__I(xdc_Char **pbuf, xdc_CString *pfmt, 
    xdc_VaList *pva, xdc_runtime_System_ParseData *parse)
{
    xdc_CString fmt = *pfmt;
    xdc_Int     res;
    xdc_Char    c;
    xdc_Bool    found = FALSE;
    
    /* 
     * Create a local variable 'va' to ensure that the dereference of
     * pva only occurs once.
     */
    va_list va = *pva;
    
    res = 0;

    c = *fmt++;
    *pfmt = *pfmt + 1;

    
    if (c == '$') {
        c = *fmt++;
        *pfmt = *pfmt + 1;
        
        if (c == 'L') {
            xdc_runtime_Types_Label *lab = parse->aFlag ? 
                (xdc_runtime_Types_Label *)xdc_iargToPtr(va_arg(va, xdc_IArg)) :
                (xdc_runtime_Types_Label *)va_arg(va, void *);
            
            /* 
             * Call Text_putLab to write out the label, taking the precision 
             * into account.
             */
            res = xdc_runtime_Text_putLab(lab, pbuf, parse->precis);
            
            /*
             * Set the length to 0 to indicate to 'doPrint' that nothing should
             * be copied from parse.ptr.
             */
            parse->len = 0;
            
            /* Update the minimum width field. */
            parse->width -= res;
            
            found = TRUE;
        }
        
        if (c == 'F') {
            xdc_runtime_Types_Site site;
            
            /* Retrieve the file name string from the argument list */
            site.file = parse->aFlag ? (xdc_Char *) xdc_iargToPtr(va_arg(va, xdc_IArg)) :
                                       (xdc_Char *) va_arg(va, xdc_Char *);
            
            /* Retrieve the line number from the argument list. */
            site.line = parse->aFlag ? (xdc_Int) va_arg(va, xdc_IArg) : 
                                       (xdc_Int) va_arg(va, xdc_Int);
            
            /* 
             * Omit the 'mod' field, set it to 0.
             * '0' is a safe sentinel value - the IDs for named modules are 
             * 0x8000 and higher, and the IDs for unnamed modules go from 0x1
             * to 0x7fff.
             */
            site.mod = 0;
            
            /* 
             * Call putSite to format the file and line number.
             * If a precision was specified, it will be used as the maximum
             * string lengrth.
             */
            res = xdc_runtime_Text_putSite(&site, pbuf, parse->precis);
            
            /*
             * Set the length to 0 to indicate to 'doPrint' that nothing should
             * be copied from parse.ptr.
             */
            parse->len = 0;
       
            /* Update the minimum width field */
            parse->width -= res;
            
            found = TRUE;
        }
        
        if (c == 'S') {
            /* Retrieve the format string from the argument list */
            parse->ptr = parse->aFlag ? 
                (xdc_Char *) xdc_iargToPtr(va_arg(va, xdc_IArg)) :
                (xdc_Char *) va_arg(va, xdc_Char *);
            
            /* Update pva before passing it to doPrint. */
            *pva = va;
            
            /* Perform the recursive format. System_doPrint does not advance
             * the buffer pointer, so it has to be done explicitly.
             */
            res = xdc_runtime_System_doPrint__I(*pbuf, parse->precis, 
                                                parse->ptr, pva, parse->aFlag);

            if (*pbuf) {
                *pbuf += res;
            }
            
            /* Update the temporary variable with any changes to *pva */
            va = *pva;
            
            /*
             * Set the length to 0 to indicate to 'doPrint' that nothing should
             * be copied from parse.ptr
             */
            parse->len = 0;

            /* Update the minimum width field */
            parse->width -= res;
            
            /* Indicate that we were able to interpret the specifier */
            found = TRUE;
        }
        
    }

    if (c == 'f') {
        /* support arguments _after_ optional float support */
        if (parse->aFlag) {
            (void)va_arg(va, xdc_IArg);
        }
        else {
            (void)va_arg(va, double);
        }
    }    

    if (found == FALSE) {
        /* other character (like %) copy to output */
        *(parse->ptr) = c;
        parse->len = 1;
    }

    /*
     * Before returning, we must update the value of pva. We use a label here
     * so that all return points will go through this update.
     * The 'goto end' is here to ensure that there is always a reference to the
     * label (to avoid the compiler complaining). 
     */
    goto end; 
end:
    *pva = va;
    return (res);
}

/*
 * ======== xdc.runtime.Text TEMPLATE ========
 */


/*
 *  ======== xdc_runtime_Text_visitRope__I ========
 *  This function is indirectly called within Text.c through
 *  the visitRopeFxn configuration parameter of xdc.runtime.Text.
 */
void xdc_runtime_Text_visitRope__I(xdc_runtime_Text_RopeId rope,
    xdc_Fxn visFxn, xdc_Ptr visState)
{
    xdc_CString stack[5];
    xdc_runtime_Text_visitRope2__I(rope, visFxn, visState, stack);
}


/*
 * ======== ti.sysbios.family.c64p.Hwi TEMPLATE ========
 */


asm("           .sect \".vecs\"         ");
asm("           .align 0x400            ");
asm("           .nocmp                  ");
asm("           .global ti_sysbios_family_c64p_Hwi0          ");
asm("ti_sysbios_family_c64p_Hwi0:                            ");
asm("           .global ti_sysbios_family_c64p_Hwi_int0         ");
asm("           .global _c_int00         ");
asm("ti_sysbios_family_c64p_Hwi_int0:                           ");
asm("           nop                     ");
asm("           nop                     ");
asm("           nop                     ");
asm("           mvkl    _c_int00, b0     ");
asm("           mvkh    _c_int00, b0     ");
asm("           b       b0              ");
asm("           nop                     ");
asm("           nop     4               ");

asm("           .global ti_sysbios_family_c64p_Hwi_int1         ");
asm("           .global ti_sysbios_family_c64p_Exception_dispatch__E         ");
asm("ti_sysbios_family_c64p_Hwi_int1:                           ");
asm("           stw     b0, *b15--[2]   ");
asm("           mvk     1, b0         ");
asm("           stw     b0, *b15[1]     ");
asm("           mvkl    ti_sysbios_family_c64p_Exception_dispatch__E, b0     ");
asm("           mvkh    ti_sysbios_family_c64p_Exception_dispatch__E, b0     ");
asm("           b       b0              ");
asm("           ldw     *++b15[2], b0   ");
asm("           nop     4               ");

asm("           .global ti_sysbios_family_c64p_Hwi_int2         ");
asm("           .global ti_sysbios_family_c64p_Hwi_int2         ");
asm("ti_sysbios_family_c64p_Hwi_int2:                           ");
asm("           stw     b0, *b15--[2]   ");
asm("           mvk     2, b0         ");
asm("           stw     b0, *b15[1]     ");
asm("           mvkl    ti_sysbios_family_c64p_Hwi_int2, b0     ");
asm("           mvkh    ti_sysbios_family_c64p_Hwi_int2, b0     ");
asm("           b       b0              ");
asm("           ldw     *++b15[2], b0   ");
asm("           nop     4               ");

asm("           .global ti_sysbios_family_c64p_Hwi_int3         ");
asm("           .global ti_sysbios_family_c64p_Hwi_int3         ");
asm("ti_sysbios_family_c64p_Hwi_int3:                           ");
asm("           stw     b0, *b15--[2]   ");
asm("           mvk     3, b0         ");
asm("           stw     b0, *b15[1]     ");
asm("           mvkl    ti_sysbios_family_c64p_Hwi_int3, b0     ");
asm("           mvkh    ti_sysbios_family_c64p_Hwi_int3, b0     ");
asm("           b       b0              ");
asm("           ldw     *++b15[2], b0   ");
asm("           nop     4               ");

asm("           .global ti_sysbios_family_c64p_Hwi_int4         ");
asm("           .global ti_sysbios_family_c64p_Hwi_int4         ");
asm("ti_sysbios_family_c64p_Hwi_int4:                           ");
asm("           stw     b0, *b15--[2]   ");
asm("           mvk     4, b0         ");
asm("           stw     b0, *b15[1]     ");
asm("           mvkl    ti_sysbios_family_c64p_Hwi_int4, b0     ");
asm("           mvkh    ti_sysbios_family_c64p_Hwi_int4, b0     ");
asm("           b       b0              ");
asm("           ldw     *++b15[2], b0   ");
asm("           nop     4               ");

asm("           .global ti_sysbios_family_c64p_Hwi_int5         ");
asm("           .global ti_sysbios_family_c64p_Hwi_int5         ");
asm("ti_sysbios_family_c64p_Hwi_int5:                           ");
asm("           stw     b0, *b15--[2]   ");
asm("           mvk     5, b0         ");
asm("           stw     b0, *b15[1]     ");
asm("           mvkl    ti_sysbios_family_c64p_Hwi_int5, b0     ");
asm("           mvkh    ti_sysbios_family_c64p_Hwi_int5, b0     ");
asm("           b       b0              ");
asm("           ldw     *++b15[2], b0   ");
asm("           nop     4               ");

asm("           .global ti_sysbios_family_c64p_Hwi_int6         ");
asm("           .global ti_sysbios_family_c64p_Hwi_int6         ");
asm("ti_sysbios_family_c64p_Hwi_int6:                           ");
asm("           stw     b0, *b15--[2]   ");
asm("           mvk     6, b0         ");
asm("           stw     b0, *b15[1]     ");
asm("           mvkl    ti_sysbios_family_c64p_Hwi_int6, b0     ");
asm("           mvkh    ti_sysbios_family_c64p_Hwi_int6, b0     ");
asm("           b       b0              ");
asm("           ldw     *++b15[2], b0   ");
asm("           nop     4               ");

asm("           .global ti_sysbios_family_c64p_Hwi_int7         ");
asm("           .global ti_sysbios_family_c64p_Hwi_dispatchAlways         ");
asm("ti_sysbios_family_c64p_Hwi_int7:                           ");
asm("           stw     b0, *b15--[2]   ");
asm("           mvk     7, b0         ");
asm("           stw     b0, *b15[1]     ");
asm("           mvkl    ti_sysbios_family_c64p_Hwi_dispatchAlways, b0     ");
asm("           mvkh    ti_sysbios_family_c64p_Hwi_dispatchAlways, b0     ");
asm("           b       b0              ");
asm("           ldw     *++b15[2], b0   ");
asm("           nop     4               ");

asm("           .global ti_sysbios_family_c64p_Hwi_int8         ");
asm("           .global ti_sysbios_family_c64p_Hwi_dispatchAlways         ");
asm("ti_sysbios_family_c64p_Hwi_int8:                           ");
asm("           stw     b0, *b15--[2]   ");
asm("           mvk     8, b0         ");
asm("           stw     b0, *b15[1]     ");
asm("           mvkl    ti_sysbios_family_c64p_Hwi_dispatchAlways, b0     ");
asm("           mvkh    ti_sysbios_family_c64p_Hwi_dispatchAlways, b0     ");
asm("           b       b0              ");
asm("           ldw     *++b15[2], b0   ");
asm("           nop     4               ");

asm("           .global ti_sysbios_family_c64p_Hwi_int9         ");
asm("           .global ti_sysbios_family_c64p_Hwi_dispatchAlways         ");
asm("ti_sysbios_family_c64p_Hwi_int9:                           ");
asm("           stw     b0, *b15--[2]   ");
asm("           mvk     9, b0         ");
asm("           stw     b0, *b15[1]     ");
asm("           mvkl    ti_sysbios_family_c64p_Hwi_dispatchAlways, b0     ");
asm("           mvkh    ti_sysbios_family_c64p_Hwi_dispatchAlways, b0     ");
asm("           b       b0              ");
asm("           ldw     *++b15[2], b0   ");
asm("           nop     4               ");

asm("           .global ti_sysbios_family_c64p_Hwi_int10         ");
asm("           .global ti_sysbios_family_c64p_Hwi_dispatchAlways         ");
asm("ti_sysbios_family_c64p_Hwi_int10:                           ");
asm("           stw     b0, *b15--[2]   ");
asm("           mvk     10, b0         ");
asm("           stw     b0, *b15[1]     ");
asm("           mvkl    ti_sysbios_family_c64p_Hwi_dispatchAlways, b0     ");
asm("           mvkh    ti_sysbios_family_c64p_Hwi_dispatchAlways, b0     ");
asm("           b       b0              ");
asm("           ldw     *++b15[2], b0   ");
asm("           nop     4               ");

asm("           .global ti_sysbios_family_c64p_Hwi_int11         ");
asm("           .global ti_sysbios_family_c64p_Hwi_int11         ");
asm("ti_sysbios_family_c64p_Hwi_int11:                           ");
asm("           stw     b0, *b15--[2]   ");
asm("           mvk     11, b0         ");
asm("           stw     b0, *b15[1]     ");
asm("           mvkl    ti_sysbios_family_c64p_Hwi_int11, b0     ");
asm("           mvkh    ti_sysbios_family_c64p_Hwi_int11, b0     ");
asm("           b       b0              ");
asm("           ldw     *++b15[2], b0   ");
asm("           nop     4               ");

asm("           .global ti_sysbios_family_c64p_Hwi_int12         ");
asm("           .global ti_sysbios_family_c64p_Hwi_int12         ");
asm("ti_sysbios_family_c64p_Hwi_int12:                           ");
asm("           stw     b0, *b15--[2]   ");
asm("           mvk     12, b0         ");
asm("           stw     b0, *b15[1]     ");
asm("           mvkl    ti_sysbios_family_c64p_Hwi_int12, b0     ");
asm("           mvkh    ti_sysbios_family_c64p_Hwi_int12, b0     ");
asm("           b       b0              ");
asm("           ldw     *++b15[2], b0   ");
asm("           nop     4               ");

asm("           .global ti_sysbios_family_c64p_Hwi_int13         ");
asm("           .global ti_sysbios_family_c64p_Hwi_int13         ");
asm("ti_sysbios_family_c64p_Hwi_int13:                           ");
asm("           stw     b0, *b15--[2]   ");
asm("           mvk     13, b0         ");
asm("           stw     b0, *b15[1]     ");
asm("           mvkl    ti_sysbios_family_c64p_Hwi_int13, b0     ");
asm("           mvkh    ti_sysbios_family_c64p_Hwi_int13, b0     ");
asm("           b       b0              ");
asm("           ldw     *++b15[2], b0   ");
asm("           nop     4               ");

asm("           .global ti_sysbios_family_c64p_Hwi_int14         ");
asm("           .global ti_sysbios_family_c64p_Hwi_dispatchAlways         ");
asm("ti_sysbios_family_c64p_Hwi_int14:                           ");
asm("           stw     b0, *b15--[2]   ");
asm("           mvk     14, b0         ");
asm("           stw     b0, *b15[1]     ");
asm("           mvkl    ti_sysbios_family_c64p_Hwi_dispatchAlways, b0     ");
asm("           mvkh    ti_sysbios_family_c64p_Hwi_dispatchAlways, b0     ");
asm("           b       b0              ");
asm("           ldw     *++b15[2], b0   ");
asm("           nop     4               ");

asm("           .global ti_sysbios_family_c64p_Hwi_int15         ");
asm("           .global ti_sysbios_family_c64p_Hwi_int15         ");
asm("ti_sysbios_family_c64p_Hwi_int15:                           ");
asm("           stw     b0, *b15--[2]   ");
asm("           mvk     15, b0         ");
asm("           stw     b0, *b15[1]     ");
asm("           mvkl    ti_sysbios_family_c64p_Hwi_int15, b0     ");
asm("           mvkh    ti_sysbios_family_c64p_Hwi_int15, b0     ");
asm("           b       b0              ");
asm("           ldw     *++b15[2], b0   ");
asm("           nop     4               ");



/*
 * ======== ti.sysbios.BIOS TEMPLATE ========
 */


Void ti_sysbios_BIOS_atExitFunc__I(Int);

extern Void ti_sysbios_BIOS_registerRTSLock();
extern Void ti_sysbios_timers_rti_Timer_startup__E();

Void ti_sysbios_BIOS_startFunc__I()
{
    /*
     *  Check if XDC runtime startup functions have been called. If not, then
     *  call BIOS_linkedWithIncorrectBootLibrary() function. This function
     *  will spin forever.
     */
    if (xdc_runtime_Startup_rtsDone() != TRUE) {
        ti_sysbios_BIOS_linkedWithIncorrectBootLibrary();
    }

    xdc_runtime_System_atexit(
        (xdc_runtime_System_AtexitHandler)ti_sysbios_BIOS_atExitFunc__I);
    ti_sysbios_BIOS_registerRTSLock();
    ti_sysbios_timers_rti_Timer_startup__E();
    ti_sysbios_hal_Hwi_startup();
    ti_sysbios_knl_Swi_startup();
    ti_sysbios_utils_Load_startup();
    ti_sysbios_knl_Task_startup();
}

#include <_lock.h>

Void ti_sysbios_BIOS_atExitFunc__I(Int notused)
{
    ti_sysbios_knl_Swi_disable();
    ti_sysbios_knl_Task_disable();
    ti_sysbios_BIOS_setThreadType(ti_sysbios_BIOS_ThreadType_Main);

    if ((&ti_sysbios_BIOS_Module__state__V)->rtsGate != NULL) {
        _register_lock(_nop);
        _register_unlock(_nop);
    }
}


/*
 *  ======== BIOS_rtsLock ========
 *  Called by rts _lock() function
 */
Void ti_sysbios_BIOS_rtsLock()
{
    IArg key;

    key = ti_sysbios_BIOS_RtsGateProxy_enter((&ti_sysbios_BIOS_Module__state__V)->rtsGate);
    if ((&ti_sysbios_BIOS_Module__state__V)->rtsGateCount == 0) {
        (&ti_sysbios_BIOS_Module__state__V)->rtsGateKey = key;
    }
    /* Increment need not be atomic */
    (&ti_sysbios_BIOS_Module__state__V)->rtsGateCount++;
}

/*
 *  ======== BIOS_rtsUnLock ========
 *  Called by rts _unlock() function
 */
Void ti_sysbios_BIOS_rtsUnlock()
{
    xdc_runtime_Assert_isTrue(((&ti_sysbios_BIOS_Module__state__V)->rtsGateCount), NULL);

    (&ti_sysbios_BIOS_Module__state__V)->rtsGateCount--;

    if ((&ti_sysbios_BIOS_Module__state__V)->rtsGateCount == 0) {
        ti_sysbios_BIOS_RtsGateProxy_leave((&ti_sysbios_BIOS_Module__state__V)->rtsGate, (&ti_sysbios_BIOS_Module__state__V)->rtsGateKey);
    }
}

/*
 *  ======== BIOS_nullFunc ========
 */
Void ti_sysbios_BIOS_nullFunc__I()
{
}

/*
 *  ======== BIOS_registerRTSLock ========
 */
Void ti_sysbios_BIOS_registerRTSLock(Void)
{
    if ((&ti_sysbios_BIOS_Module__state__V)->rtsGate != NULL) {
        _register_lock(ti_sysbios_BIOS_rtsLock);
        _register_unlock(ti_sysbios_BIOS_rtsUnlock);
    }
}

/*
 *  ======== BIOS_removeRTSLock ========
 */
Void ti_sysbios_BIOS_removeRTSLock(Void)
{
    if ((&ti_sysbios_BIOS_Module__state__V)->rtsGate != NULL) {
        _register_lock(ti_sysbios_BIOS_nullFunc);
        _register_unlock(ti_sysbios_BIOS_nullFunc);
    }
}

/*
 *  ======== BIOS_exitFunc ========
 */
Void ti_sysbios_BIOS_exitFunc(Int stat)
{
    /* remove the RTS lock */
    ti_sysbios_BIOS_removeRTSLock();

    /* force thread type to 'Main' */
    ti_sysbios_BIOS_setThreadType(ti_sysbios_BIOS_ThreadType_Main);

    xdc_runtime_System_exit(stat);
}

/*
 *  ======== BIOS_errorRaiseHook ========
 */
Void ti_sysbios_BIOS_errorRaiseHook(xdc_runtime_Error_Block *eb)
{
    /*
     * If this is an Assert thread, defang Gate threadtype check
     */
    if (eb->id == xdc_runtime_Assert_E_assertFailed) {
        /* remove the RTS lock */
        ti_sysbios_BIOS_removeRTSLock();
        /* force thread type to 'Main' */
        ti_sysbios_BIOS_setThreadType(ti_sysbios_BIOS_ThreadType_Main);
    }

    /* Call the installed Error.raiseHook */
    ti_sysbios_BIOS_installedErrorHook(eb);
}

/*
 * ======== ti.sysbios.Build TEMPLATE ========
 */


/*
 * ======== ti.sysbios.knl.Clock TEMPLATE ========
 */

Void ti_sysbios_knl_Clock_doTick__I(UArg arg)
{
    /* update system time */
    (&ti_sysbios_knl_Clock_Module__state__V)->ticks++;

    ti_sysbios_knl_Clock_logTick__E();

    if (!ti_sysbios_knl_Queue_empty(ti_sysbios_knl_Clock_Module_State_clockQ())) {
        (&ti_sysbios_knl_Clock_Module__state__V)->swiCount++;

        ti_sysbios_knl_Swi_post((&ti_sysbios_knl_Clock_Module__state__V)->swi);
    }
}

/*
 * ======== ti.sysbios.knl.Task TEMPLATE ========
 */




/*
 * ======== ti.sysbios.utils.Load TEMPLATE ========
 */

#include <ti/sysbios/utils/Load.h>
#include <ti/sysbios/hal/Core.h>

/*
 *  ======== Load_update ========
 */
Void ti_sysbios_utils_Load_update__E()
{
    /* Update and Log CPU load, Task, Swi, and Hwi loads (if enabled). */
    ti_sysbios_utils_Load_updateLoads();
}


/*
 * ======== ti.sysbios.rts.MemAlloc TEMPLATE ========
 */



#if defined(__ti__)

#pragma FUNC_EXT_CALLED(malloc);
#pragma FUNC_EXT_CALLED(memalign);
#pragma FUNC_EXT_CALLED(free);
#pragma FUNC_EXT_CALLED(calloc);
#pragma FUNC_EXT_CALLED(realloc);

#define ATTRIBUTE

#elif defined(__IAR_SYSTEMS_ICC__)

#define ATTRIBUTE

#else

#define ATTRIBUTE __attribute__ ((used))

#endif


#include <xdc/std.h>

#include <xdc/runtime/Memory.h>
#include <xdc/runtime/Error.h>

#include <string.h>

#if defined(__GNUC__) && !defined(__ti__)

#include <reent.h>

#endif


/*
 * Header is a union to make sure that the size is a power of 2.
 *
 * On the MSP430 small model (MSP430X), size_t is 2 bytes, which makes
 * the size of this struct 6 bytes.
 */
typedef union Header {
    struct {
        Ptr   actualBuf;
        SizeT size;
    } header;
    UArg pad[2];	/* 4 words on 28L, 8 bytes on most others */
} Header;



/*
 *  ======== ti_sysbios_rts_MemAlloc_alloc ========
 */
static Void *ti_sysbios_rts_MemAlloc_alloc(SizeT size)
{
    Header *packet;
    xdc_runtime_Error_Block eb;

    if (size == 0) {
        return (NULL);
    }

    xdc_runtime_Error_init(&eb);

    packet = (Header *)xdc_runtime_Memory_alloc(NULL,
        (SizeT)(size + sizeof(Header)), 0, &eb);

    if (packet == NULL) {
        return (NULL);
    }

    packet->header.actualBuf = (Ptr)packet;
    packet->header.size = size + sizeof(Header);

    return (packet + 1);
}

/*
 *  ======== malloc ========
 */
Void ATTRIBUTE *malloc(SizeT size)
{
    return (ti_sysbios_rts_MemAlloc_alloc(size));
}

/*
 *  ======== memalign ========
 *  mirrors the memalign() function from the TI run-time library
 */
Void ATTRIBUTE *memalign(SizeT alignment, SizeT size)
{
    Header                      *packet;
    Void                        *tmp;
    xdc_runtime_Error_Block     eb;

    if (alignment < sizeof(Header)) {
        alignment = sizeof(Header);
    }

    /*
     * return NULL if size is 0, or alignment is not a power of 2
     */
    if (size == 0 || (alignment & (alignment - 1))) {
        return (NULL);
    }

    xdc_runtime_Error_init(&eb);

    /*
     * Allocate 'align + size' so that we have room for the 'packet'
     * and can return an aligned buffer.
     */
    tmp = xdc_runtime_Memory_alloc(NULL, alignment + size, alignment, &eb);

    if (tmp == NULL) {
        return (NULL);
    }

    packet = (Header *)((char *)tmp + alignment - sizeof(Header));

    packet->header.actualBuf = tmp;
    packet->header.size = size + sizeof(Header);

    return (packet + 1);
}

/*
 *  ======== calloc ========
 */
Void ATTRIBUTE *calloc(SizeT nmemb, SizeT size)
{
    SizeT       nbytes;
    Ptr         retval;

    nbytes = nmemb * size;

    /* return NULL if there's an overflow */
    if (nmemb && size != (nbytes / nmemb)) {
        return (NULL);
    }

    retval = ti_sysbios_rts_MemAlloc_alloc(nbytes);
    if (retval != NULL) {
        (Void)memset(retval, (Int)'\0', nbytes);
    }

    return (retval);
}

/*
 *  ======== free ========
 */
Void ATTRIBUTE free(Void *ptr)
{
    Header      *packet;

    if (ptr != NULL) {
        packet = ((Header *)ptr) - 1;

        xdc_runtime_Memory_free(NULL, (Ptr)packet->header.actualBuf,
            (packet->header.size +
            ((char*)packet - (char*)packet->header.actualBuf)));
    }
}

/*
 *  ======== realloc ========
 */
Void ATTRIBUTE *realloc(Void *ptr, SizeT size)
{
    Ptr         retval;
    Header      *packet;
    SizeT       oldSize;

    if (ptr == NULL) {
        retval = malloc(size);
    }
    else if (size == 0) {
        free(ptr);
        retval = NULL;
    }
    else {
        packet = (Header *)ptr - 1;
        retval = malloc(size);
        if (retval != NULL) {
            oldSize = packet->header.size - sizeof(Header);
            (Void)memcpy(retval, ptr, (size < oldSize) ? size : oldSize);
            free(ptr);
        }
    }

    return (retval);
}

#if defined(__GNUC__) && !defined(__ti__)

/*
 *  ======== _malloc_r ========
 */
Void ATTRIBUTE *_malloc_r(struct _reent *rptr, SizeT size)
{
    return malloc(size);
}

/*
 *  ======== _calloc_r ========
 */
Void ATTRIBUTE *_calloc_r(struct _reent *rptr, SizeT nmemb, SizeT size)
{
    return calloc(nmemb, size);
}

/*
 *  ======== _free_r ========
 */
Void ATTRIBUTE _free_r(struct _reent *rptr, Void *ptr)
{
    free(ptr);
}

/*
 *  ======== _realloc_r ========
 */
Void ATTRIBUTE *_realloc_r(struct _reent *rptr, Void *ptr, SizeT size)
{
    return realloc(ptr, size);
}

#endif


/*
 * ======== ti.sysbios.BIOS INITIALIZERS ========
 */

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_ti_sysbios_BIOS_Module__state__V"
#endif
#if defined(__llvm__) && defined(__ti__)
ti_sysbios_BIOS_Module_State__ ti_sysbios_BIOS_Module__state__V __attribute__ ((section(".data:ti_sysbios_BIOS_Module__state__V")));
#elif defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __TI_COMPILER_VERSION__
ti_sysbios_BIOS_Module_State__ ti_sysbios_BIOS_Module__state__V __attribute__ ((section(".data_ti_sysbios_BIOS_Module__state__V")));
#endif
#endif
ti_sysbios_BIOS_Module_State__ ti_sysbios_BIOS_Module__state__V = {
    {
        (xdc_Bits32)0x0,  /* hi */
        (xdc_Bits32)0x23c34600,  /* lo */
    },  /* cpuFreq */
    (xdc_UInt)0x0,  /* rtsGateCount */
    ((xdc_IArg)(0x0)),  /* rtsGateKey */
    (ti_sysbios_BIOS_RtsGateProxy_Handle)&ti_sysbios_gates_GateMutex_Object__table__V[1],  /* rtsGate */
    ti_sysbios_BIOS_ThreadType_Main,  /* threadType */
    ((void*)0),  /* smpThreadType */
    ((xdc_Void(*)(xdc_Void))((xdc_Fxn)ti_sysbios_BIOS_startFunc)),  /* startFunc */
    ((xdc_Void(*)(xdc_Int))((xdc_Fxn)ti_sysbios_BIOS_exitFunc)),  /* exitFunc */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__diagsEnabled__C, ".const:ti_sysbios_BIOS_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_BIOS_Module__diagsEnabled ti_sysbios_BIOS_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__diagsIncluded__C, ".const:ti_sysbios_BIOS_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_BIOS_Module__diagsIncluded ti_sysbios_BIOS_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__diagsMask__C, ".const:ti_sysbios_BIOS_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_BIOS_Module__diagsMask ti_sysbios_BIOS_Module__diagsMask__C = ((CT__ti_sysbios_BIOS_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__gateObj__C, ".const:ti_sysbios_BIOS_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_BIOS_Module__gateObj ti_sysbios_BIOS_Module__gateObj__C = ((CT__ti_sysbios_BIOS_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__gatePrms__C, ".const:ti_sysbios_BIOS_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_BIOS_Module__gatePrms ti_sysbios_BIOS_Module__gatePrms__C = ((CT__ti_sysbios_BIOS_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__id__C, ".const:ti_sysbios_BIOS_Module__id__C");
__FAR__ const CT__ti_sysbios_BIOS_Module__id ti_sysbios_BIOS_Module__id__C = (xdc_Bits16)0x801b;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__loggerDefined__C, ".const:ti_sysbios_BIOS_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_BIOS_Module__loggerDefined ti_sysbios_BIOS_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__loggerObj__C, ".const:ti_sysbios_BIOS_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_BIOS_Module__loggerObj ti_sysbios_BIOS_Module__loggerObj__C = ((CT__ti_sysbios_BIOS_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__loggerFxn0__C, ".const:ti_sysbios_BIOS_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_BIOS_Module__loggerFxn0 ti_sysbios_BIOS_Module__loggerFxn0__C = ((CT__ti_sysbios_BIOS_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__loggerFxn1__C, ".const:ti_sysbios_BIOS_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_BIOS_Module__loggerFxn1 ti_sysbios_BIOS_Module__loggerFxn1__C = ((CT__ti_sysbios_BIOS_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__loggerFxn2__C, ".const:ti_sysbios_BIOS_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_BIOS_Module__loggerFxn2 ti_sysbios_BIOS_Module__loggerFxn2__C = ((CT__ti_sysbios_BIOS_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__loggerFxn4__C, ".const:ti_sysbios_BIOS_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_BIOS_Module__loggerFxn4 ti_sysbios_BIOS_Module__loggerFxn4__C = ((CT__ti_sysbios_BIOS_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__loggerFxn8__C, ".const:ti_sysbios_BIOS_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_BIOS_Module__loggerFxn8 ti_sysbios_BIOS_Module__loggerFxn8__C = ((CT__ti_sysbios_BIOS_Module__loggerFxn8)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Object__count__C, ".const:ti_sysbios_BIOS_Object__count__C");
__FAR__ const CT__ti_sysbios_BIOS_Object__count ti_sysbios_BIOS_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Object__heap__C, ".const:ti_sysbios_BIOS_Object__heap__C");
__FAR__ const CT__ti_sysbios_BIOS_Object__heap ti_sysbios_BIOS_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Object__sizeof__C, ".const:ti_sysbios_BIOS_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_BIOS_Object__sizeof ti_sysbios_BIOS_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Object__table__C, ".const:ti_sysbios_BIOS_Object__table__C");
__FAR__ const CT__ti_sysbios_BIOS_Object__table ti_sysbios_BIOS_Object__table__C = 0;

/* smpEnabled__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_smpEnabled__C, ".const:ti_sysbios_BIOS_smpEnabled__C");
__FAR__ const CT__ti_sysbios_BIOS_smpEnabled ti_sysbios_BIOS_smpEnabled__C = 0;

/* mpeEnabled__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_mpeEnabled__C, ".const:ti_sysbios_BIOS_mpeEnabled__C");
__FAR__ const CT__ti_sysbios_BIOS_mpeEnabled ti_sysbios_BIOS_mpeEnabled__C = 0;

/* cpuFreq__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_cpuFreq__C, ".const:ti_sysbios_BIOS_cpuFreq__C");
__FAR__ const CT__ti_sysbios_BIOS_cpuFreq ti_sysbios_BIOS_cpuFreq__C = {
    (xdc_Bits32)0x0,  /* hi */
    (xdc_Bits32)0x23c34600,  /* lo */
};

/* runtimeCreatesEnabled__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_runtimeCreatesEnabled__C, ".const:ti_sysbios_BIOS_runtimeCreatesEnabled__C");
__FAR__ const CT__ti_sysbios_BIOS_runtimeCreatesEnabled ti_sysbios_BIOS_runtimeCreatesEnabled__C = 1;

/* taskEnabled__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_taskEnabled__C, ".const:ti_sysbios_BIOS_taskEnabled__C");
__FAR__ const CT__ti_sysbios_BIOS_taskEnabled ti_sysbios_BIOS_taskEnabled__C = 1;

/* swiEnabled__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_swiEnabled__C, ".const:ti_sysbios_BIOS_swiEnabled__C");
__FAR__ const CT__ti_sysbios_BIOS_swiEnabled ti_sysbios_BIOS_swiEnabled__C = 1;

/* clockEnabled__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_clockEnabled__C, ".const:ti_sysbios_BIOS_clockEnabled__C");
__FAR__ const CT__ti_sysbios_BIOS_clockEnabled ti_sysbios_BIOS_clockEnabled__C = 1;

/* defaultKernelHeapInstance__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_defaultKernelHeapInstance__C, ".const:ti_sysbios_BIOS_defaultKernelHeapInstance__C");
__FAR__ const CT__ti_sysbios_BIOS_defaultKernelHeapInstance ti_sysbios_BIOS_defaultKernelHeapInstance__C = 0;

/* kernelHeapSize__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_kernelHeapSize__C, ".const:ti_sysbios_BIOS_kernelHeapSize__C");
__FAR__ const CT__ti_sysbios_BIOS_kernelHeapSize ti_sysbios_BIOS_kernelHeapSize__C = (xdc_SizeT)0x1000;

/* kernelHeapSection__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_kernelHeapSection__C, ".const:ti_sysbios_BIOS_kernelHeapSection__C");
__FAR__ const CT__ti_sysbios_BIOS_kernelHeapSection ti_sysbios_BIOS_kernelHeapSection__C = ".kernel_heap";

/* heapSize__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_heapSize__C, ".const:ti_sysbios_BIOS_heapSize__C");
__FAR__ const CT__ti_sysbios_BIOS_heapSize ti_sysbios_BIOS_heapSize__C = (xdc_SizeT)0x1000;

/* heapSection__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_heapSection__C, ".const:ti_sysbios_BIOS_heapSection__C");
__FAR__ const CT__ti_sysbios_BIOS_heapSection ti_sysbios_BIOS_heapSection__C = 0;

/* heapTrackEnabled__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_heapTrackEnabled__C, ".const:ti_sysbios_BIOS_heapTrackEnabled__C");
__FAR__ const CT__ti_sysbios_BIOS_heapTrackEnabled ti_sysbios_BIOS_heapTrackEnabled__C = 0;

/* setupSecureContext__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_setupSecureContext__C, ".const:ti_sysbios_BIOS_setupSecureContext__C");
__FAR__ const CT__ti_sysbios_BIOS_setupSecureContext ti_sysbios_BIOS_setupSecureContext__C = 0;

/* useSK__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_useSK__C, ".const:ti_sysbios_BIOS_useSK__C");
__FAR__ const CT__ti_sysbios_BIOS_useSK ti_sysbios_BIOS_useSK__C = 0;

/* installedErrorHook__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_installedErrorHook__C, ".const:ti_sysbios_BIOS_installedErrorHook__C");
__FAR__ const CT__ti_sysbios_BIOS_installedErrorHook ti_sysbios_BIOS_installedErrorHook__C = ((CT__ti_sysbios_BIOS_installedErrorHook)((xdc_Fxn)xdc_runtime_Error_print__E));


/*
 * ======== ti.sysbios.BIOS_RtsGateProxy INITIALIZERS ========
 */


/*
 * ======== ti.sysbios.family.c62.IntrinsicsSupport INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_family_c62_IntrinsicsSupport_Module__diagsEnabled__C, ".const:ti_sysbios_family_c62_IntrinsicsSupport_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_family_c62_IntrinsicsSupport_Module__diagsEnabled ti_sysbios_family_c62_IntrinsicsSupport_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_family_c62_IntrinsicsSupport_Module__diagsIncluded__C, ".const:ti_sysbios_family_c62_IntrinsicsSupport_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_family_c62_IntrinsicsSupport_Module__diagsIncluded ti_sysbios_family_c62_IntrinsicsSupport_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_family_c62_IntrinsicsSupport_Module__diagsMask__C, ".const:ti_sysbios_family_c62_IntrinsicsSupport_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_family_c62_IntrinsicsSupport_Module__diagsMask ti_sysbios_family_c62_IntrinsicsSupport_Module__diagsMask__C = ((CT__ti_sysbios_family_c62_IntrinsicsSupport_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_family_c62_IntrinsicsSupport_Module__gateObj__C, ".const:ti_sysbios_family_c62_IntrinsicsSupport_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_family_c62_IntrinsicsSupport_Module__gateObj ti_sysbios_family_c62_IntrinsicsSupport_Module__gateObj__C = ((CT__ti_sysbios_family_c62_IntrinsicsSupport_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_family_c62_IntrinsicsSupport_Module__gatePrms__C, ".const:ti_sysbios_family_c62_IntrinsicsSupport_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_family_c62_IntrinsicsSupport_Module__gatePrms ti_sysbios_family_c62_IntrinsicsSupport_Module__gatePrms__C = ((CT__ti_sysbios_family_c62_IntrinsicsSupport_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_family_c62_IntrinsicsSupport_Module__id__C, ".const:ti_sysbios_family_c62_IntrinsicsSupport_Module__id__C");
__FAR__ const CT__ti_sysbios_family_c62_IntrinsicsSupport_Module__id ti_sysbios_family_c62_IntrinsicsSupport_Module__id__C = (xdc_Bits16)0x8031;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_family_c62_IntrinsicsSupport_Module__loggerDefined__C, ".const:ti_sysbios_family_c62_IntrinsicsSupport_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_family_c62_IntrinsicsSupport_Module__loggerDefined ti_sysbios_family_c62_IntrinsicsSupport_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_family_c62_IntrinsicsSupport_Module__loggerObj__C, ".const:ti_sysbios_family_c62_IntrinsicsSupport_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_family_c62_IntrinsicsSupport_Module__loggerObj ti_sysbios_family_c62_IntrinsicsSupport_Module__loggerObj__C = ((CT__ti_sysbios_family_c62_IntrinsicsSupport_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_family_c62_IntrinsicsSupport_Module__loggerFxn0__C, ".const:ti_sysbios_family_c62_IntrinsicsSupport_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_family_c62_IntrinsicsSupport_Module__loggerFxn0 ti_sysbios_family_c62_IntrinsicsSupport_Module__loggerFxn0__C = ((CT__ti_sysbios_family_c62_IntrinsicsSupport_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_family_c62_IntrinsicsSupport_Module__loggerFxn1__C, ".const:ti_sysbios_family_c62_IntrinsicsSupport_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_family_c62_IntrinsicsSupport_Module__loggerFxn1 ti_sysbios_family_c62_IntrinsicsSupport_Module__loggerFxn1__C = ((CT__ti_sysbios_family_c62_IntrinsicsSupport_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_family_c62_IntrinsicsSupport_Module__loggerFxn2__C, ".const:ti_sysbios_family_c62_IntrinsicsSupport_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_family_c62_IntrinsicsSupport_Module__loggerFxn2 ti_sysbios_family_c62_IntrinsicsSupport_Module__loggerFxn2__C = ((CT__ti_sysbios_family_c62_IntrinsicsSupport_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_family_c62_IntrinsicsSupport_Module__loggerFxn4__C, ".const:ti_sysbios_family_c62_IntrinsicsSupport_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_family_c62_IntrinsicsSupport_Module__loggerFxn4 ti_sysbios_family_c62_IntrinsicsSupport_Module__loggerFxn4__C = ((CT__ti_sysbios_family_c62_IntrinsicsSupport_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_family_c62_IntrinsicsSupport_Module__loggerFxn8__C, ".const:ti_sysbios_family_c62_IntrinsicsSupport_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_family_c62_IntrinsicsSupport_Module__loggerFxn8 ti_sysbios_family_c62_IntrinsicsSupport_Module__loggerFxn8__C = ((CT__ti_sysbios_family_c62_IntrinsicsSupport_Module__loggerFxn8)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_family_c62_IntrinsicsSupport_Object__count__C, ".const:ti_sysbios_family_c62_IntrinsicsSupport_Object__count__C");
__FAR__ const CT__ti_sysbios_family_c62_IntrinsicsSupport_Object__count ti_sysbios_family_c62_IntrinsicsSupport_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_family_c62_IntrinsicsSupport_Object__heap__C, ".const:ti_sysbios_family_c62_IntrinsicsSupport_Object__heap__C");
__FAR__ const CT__ti_sysbios_family_c62_IntrinsicsSupport_Object__heap ti_sysbios_family_c62_IntrinsicsSupport_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_family_c62_IntrinsicsSupport_Object__sizeof__C, ".const:ti_sysbios_family_c62_IntrinsicsSupport_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_family_c62_IntrinsicsSupport_Object__sizeof ti_sysbios_family_c62_IntrinsicsSupport_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_family_c62_IntrinsicsSupport_Object__table__C, ".const:ti_sysbios_family_c62_IntrinsicsSupport_Object__table__C");
__FAR__ const CT__ti_sysbios_family_c62_IntrinsicsSupport_Object__table ti_sysbios_family_c62_IntrinsicsSupport_Object__table__C = 0;


/*
 * ======== ti.sysbios.family.c62.TaskSupport INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_family_c62_TaskSupport_Module__diagsEnabled__C, ".const:ti_sysbios_family_c62_TaskSupport_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_family_c62_TaskSupport_Module__diagsEnabled ti_sysbios_family_c62_TaskSupport_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_family_c62_TaskSupport_Module__diagsIncluded__C, ".const:ti_sysbios_family_c62_TaskSupport_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_family_c62_TaskSupport_Module__diagsIncluded ti_sysbios_family_c62_TaskSupport_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_family_c62_TaskSupport_Module__diagsMask__C, ".const:ti_sysbios_family_c62_TaskSupport_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_family_c62_TaskSupport_Module__diagsMask ti_sysbios_family_c62_TaskSupport_Module__diagsMask__C = ((CT__ti_sysbios_family_c62_TaskSupport_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_family_c62_TaskSupport_Module__gateObj__C, ".const:ti_sysbios_family_c62_TaskSupport_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_family_c62_TaskSupport_Module__gateObj ti_sysbios_family_c62_TaskSupport_Module__gateObj__C = ((CT__ti_sysbios_family_c62_TaskSupport_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_family_c62_TaskSupport_Module__gatePrms__C, ".const:ti_sysbios_family_c62_TaskSupport_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_family_c62_TaskSupport_Module__gatePrms ti_sysbios_family_c62_TaskSupport_Module__gatePrms__C = ((CT__ti_sysbios_family_c62_TaskSupport_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_family_c62_TaskSupport_Module__id__C, ".const:ti_sysbios_family_c62_TaskSupport_Module__id__C");
__FAR__ const CT__ti_sysbios_family_c62_TaskSupport_Module__id ti_sysbios_family_c62_TaskSupport_Module__id__C = (xdc_Bits16)0x8030;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_family_c62_TaskSupport_Module__loggerDefined__C, ".const:ti_sysbios_family_c62_TaskSupport_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_family_c62_TaskSupport_Module__loggerDefined ti_sysbios_family_c62_TaskSupport_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_family_c62_TaskSupport_Module__loggerObj__C, ".const:ti_sysbios_family_c62_TaskSupport_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_family_c62_TaskSupport_Module__loggerObj ti_sysbios_family_c62_TaskSupport_Module__loggerObj__C = ((CT__ti_sysbios_family_c62_TaskSupport_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_family_c62_TaskSupport_Module__loggerFxn0__C, ".const:ti_sysbios_family_c62_TaskSupport_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_family_c62_TaskSupport_Module__loggerFxn0 ti_sysbios_family_c62_TaskSupport_Module__loggerFxn0__C = ((CT__ti_sysbios_family_c62_TaskSupport_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_family_c62_TaskSupport_Module__loggerFxn1__C, ".const:ti_sysbios_family_c62_TaskSupport_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_family_c62_TaskSupport_Module__loggerFxn1 ti_sysbios_family_c62_TaskSupport_Module__loggerFxn1__C = ((CT__ti_sysbios_family_c62_TaskSupport_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_family_c62_TaskSupport_Module__loggerFxn2__C, ".const:ti_sysbios_family_c62_TaskSupport_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_family_c62_TaskSupport_Module__loggerFxn2 ti_sysbios_family_c62_TaskSupport_Module__loggerFxn2__C = ((CT__ti_sysbios_family_c62_TaskSupport_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_family_c62_TaskSupport_Module__loggerFxn4__C, ".const:ti_sysbios_family_c62_TaskSupport_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_family_c62_TaskSupport_Module__loggerFxn4 ti_sysbios_family_c62_TaskSupport_Module__loggerFxn4__C = ((CT__ti_sysbios_family_c62_TaskSupport_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_family_c62_TaskSupport_Module__loggerFxn8__C, ".const:ti_sysbios_family_c62_TaskSupport_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_family_c62_TaskSupport_Module__loggerFxn8 ti_sysbios_family_c62_TaskSupport_Module__loggerFxn8__C = ((CT__ti_sysbios_family_c62_TaskSupport_Module__loggerFxn8)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_family_c62_TaskSupport_Object__count__C, ".const:ti_sysbios_family_c62_TaskSupport_Object__count__C");
__FAR__ const CT__ti_sysbios_family_c62_TaskSupport_Object__count ti_sysbios_family_c62_TaskSupport_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_family_c62_TaskSupport_Object__heap__C, ".const:ti_sysbios_family_c62_TaskSupport_Object__heap__C");
__FAR__ const CT__ti_sysbios_family_c62_TaskSupport_Object__heap ti_sysbios_family_c62_TaskSupport_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_family_c62_TaskSupport_Object__sizeof__C, ".const:ti_sysbios_family_c62_TaskSupport_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_family_c62_TaskSupport_Object__sizeof ti_sysbios_family_c62_TaskSupport_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_family_c62_TaskSupport_Object__table__C, ".const:ti_sysbios_family_c62_TaskSupport_Object__table__C");
__FAR__ const CT__ti_sysbios_family_c62_TaskSupport_Object__table ti_sysbios_family_c62_TaskSupport_Object__table__C = 0;

/* defaultStackSize__C */
#pragma DATA_SECTION(ti_sysbios_family_c62_TaskSupport_defaultStackSize__C, ".const:ti_sysbios_family_c62_TaskSupport_defaultStackSize__C");
__FAR__ const CT__ti_sysbios_family_c62_TaskSupport_defaultStackSize ti_sysbios_family_c62_TaskSupport_defaultStackSize__C = (xdc_SizeT)0x800;

/* stackAlignment__C */
#pragma DATA_SECTION(ti_sysbios_family_c62_TaskSupport_stackAlignment__C, ".const:ti_sysbios_family_c62_TaskSupport_stackAlignment__C");
__FAR__ const CT__ti_sysbios_family_c62_TaskSupport_stackAlignment ti_sysbios_family_c62_TaskSupport_stackAlignment__C = (xdc_UInt)0x8;


/*
 * ======== ti.sysbios.family.c64p.Cache INITIALIZERS ========
 */

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_ti_sysbios_family_c64p_Cache_Module__state__V"
#endif
#if defined(__llvm__) && defined(__ti__)
ti_sysbios_family_c64p_Cache_Module_State__ ti_sysbios_family_c64p_Cache_Module__state__V __attribute__ ((section(".data:ti_sysbios_family_c64p_Cache_Module__state__V")));
#elif defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __TI_COMPILER_VERSION__
ti_sysbios_family_c64p_Cache_Module_State__ ti_sysbios_family_c64p_Cache_Module__state__V __attribute__ ((section(".data_ti_sysbios_family_c64p_Cache_Module__state__V")));
#endif
#endif
ti_sysbios_family_c64p_Cache_Module_State__ ti_sysbios_family_c64p_Cache_Module__state__V = {
    ((xdc_UInt32*)0),  /* emifAddr */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_family_c64p_Cache_Module__diagsEnabled__C, ".const:ti_sysbios_family_c64p_Cache_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_family_c64p_Cache_Module__diagsEnabled ti_sysbios_family_c64p_Cache_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_family_c64p_Cache_Module__diagsIncluded__C, ".const:ti_sysbios_family_c64p_Cache_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_family_c64p_Cache_Module__diagsIncluded ti_sysbios_family_c64p_Cache_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_family_c64p_Cache_Module__diagsMask__C, ".const:ti_sysbios_family_c64p_Cache_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_family_c64p_Cache_Module__diagsMask ti_sysbios_family_c64p_Cache_Module__diagsMask__C = ((CT__ti_sysbios_family_c64p_Cache_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_family_c64p_Cache_Module__gateObj__C, ".const:ti_sysbios_family_c64p_Cache_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_family_c64p_Cache_Module__gateObj ti_sysbios_family_c64p_Cache_Module__gateObj__C = ((CT__ti_sysbios_family_c64p_Cache_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_family_c64p_Cache_Module__gatePrms__C, ".const:ti_sysbios_family_c64p_Cache_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_family_c64p_Cache_Module__gatePrms ti_sysbios_family_c64p_Cache_Module__gatePrms__C = ((CT__ti_sysbios_family_c64p_Cache_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_family_c64p_Cache_Module__id__C, ".const:ti_sysbios_family_c64p_Cache_Module__id__C");
__FAR__ const CT__ti_sysbios_family_c64p_Cache_Module__id ti_sysbios_family_c64p_Cache_Module__id__C = (xdc_Bits16)0x801a;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_family_c64p_Cache_Module__loggerDefined__C, ".const:ti_sysbios_family_c64p_Cache_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_family_c64p_Cache_Module__loggerDefined ti_sysbios_family_c64p_Cache_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_family_c64p_Cache_Module__loggerObj__C, ".const:ti_sysbios_family_c64p_Cache_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_family_c64p_Cache_Module__loggerObj ti_sysbios_family_c64p_Cache_Module__loggerObj__C = ((CT__ti_sysbios_family_c64p_Cache_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_family_c64p_Cache_Module__loggerFxn0__C, ".const:ti_sysbios_family_c64p_Cache_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_family_c64p_Cache_Module__loggerFxn0 ti_sysbios_family_c64p_Cache_Module__loggerFxn0__C = ((CT__ti_sysbios_family_c64p_Cache_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_family_c64p_Cache_Module__loggerFxn1__C, ".const:ti_sysbios_family_c64p_Cache_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_family_c64p_Cache_Module__loggerFxn1 ti_sysbios_family_c64p_Cache_Module__loggerFxn1__C = ((CT__ti_sysbios_family_c64p_Cache_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_family_c64p_Cache_Module__loggerFxn2__C, ".const:ti_sysbios_family_c64p_Cache_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_family_c64p_Cache_Module__loggerFxn2 ti_sysbios_family_c64p_Cache_Module__loggerFxn2__C = ((CT__ti_sysbios_family_c64p_Cache_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_family_c64p_Cache_Module__loggerFxn4__C, ".const:ti_sysbios_family_c64p_Cache_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_family_c64p_Cache_Module__loggerFxn4 ti_sysbios_family_c64p_Cache_Module__loggerFxn4__C = ((CT__ti_sysbios_family_c64p_Cache_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_family_c64p_Cache_Module__loggerFxn8__C, ".const:ti_sysbios_family_c64p_Cache_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_family_c64p_Cache_Module__loggerFxn8 ti_sysbios_family_c64p_Cache_Module__loggerFxn8__C = ((CT__ti_sysbios_family_c64p_Cache_Module__loggerFxn8)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_family_c64p_Cache_Object__count__C, ".const:ti_sysbios_family_c64p_Cache_Object__count__C");
__FAR__ const CT__ti_sysbios_family_c64p_Cache_Object__count ti_sysbios_family_c64p_Cache_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_family_c64p_Cache_Object__heap__C, ".const:ti_sysbios_family_c64p_Cache_Object__heap__C");
__FAR__ const CT__ti_sysbios_family_c64p_Cache_Object__heap ti_sysbios_family_c64p_Cache_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_family_c64p_Cache_Object__sizeof__C, ".const:ti_sysbios_family_c64p_Cache_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_family_c64p_Cache_Object__sizeof ti_sysbios_family_c64p_Cache_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_family_c64p_Cache_Object__table__C, ".const:ti_sysbios_family_c64p_Cache_Object__table__C");
__FAR__ const CT__ti_sysbios_family_c64p_Cache_Object__table ti_sysbios_family_c64p_Cache_Object__table__C = 0;

/* initSize__C */
#pragma DATA_SECTION(ti_sysbios_family_c64p_Cache_initSize__C, ".const:ti_sysbios_family_c64p_Cache_initSize__C");
__FAR__ const CT__ti_sysbios_family_c64p_Cache_initSize ti_sysbios_family_c64p_Cache_initSize__C = {
    ti_sysbios_family_c64p_Cache_L1Size_32K,  /* l1pSize */
    ti_sysbios_family_c64p_Cache_L1Size_32K,  /* l1dSize */
    ti_sysbios_family_c64p_Cache_L2Size_0K,  /* l2Size */
};

/* EMIFA_CFG__C */
#pragma DATA_SECTION(ti_sysbios_family_c64p_Cache_EMIFA_CFG__C, ".const:ti_sysbios_family_c64p_Cache_EMIFA_CFG__C");
__FAR__ const CT__ti_sysbios_family_c64p_Cache_EMIFA_CFG ti_sysbios_family_c64p_Cache_EMIFA_CFG__C = ((CT__ti_sysbios_family_c64p_Cache_EMIFA_CFG)0);

/* EMIFA_BASE__C */
#pragma DATA_SECTION(ti_sysbios_family_c64p_Cache_EMIFA_BASE__C, ".const:ti_sysbios_family_c64p_Cache_EMIFA_BASE__C");
__FAR__ const CT__ti_sysbios_family_c64p_Cache_EMIFA_BASE ti_sysbios_family_c64p_Cache_EMIFA_BASE__C = (xdc_UInt)0x0;

/* EMIFA_LENGTH__C */
#pragma DATA_SECTION(ti_sysbios_family_c64p_Cache_EMIFA_LENGTH__C, ".const:ti_sysbios_family_c64p_Cache_EMIFA_LENGTH__C");
__FAR__ const CT__ti_sysbios_family_c64p_Cache_EMIFA_LENGTH ti_sysbios_family_c64p_Cache_EMIFA_LENGTH__C = (xdc_UInt)0x0;

/* EMIFB_CFG__C */
#pragma DATA_SECTION(ti_sysbios_family_c64p_Cache_EMIFB_CFG__C, ".const:ti_sysbios_family_c64p_Cache_EMIFB_CFG__C");
__FAR__ const CT__ti_sysbios_family_c64p_Cache_EMIFB_CFG ti_sysbios_family_c64p_Cache_EMIFB_CFG__C = ((CT__ti_sysbios_family_c64p_Cache_EMIFB_CFG)0);

/* EMIFB_BASE__C */
#pragma DATA_SECTION(ti_sysbios_family_c64p_Cache_EMIFB_BASE__C, ".const:ti_sysbios_family_c64p_Cache_EMIFB_BASE__C");
__FAR__ const CT__ti_sysbios_family_c64p_Cache_EMIFB_BASE ti_sysbios_family_c64p_Cache_EMIFB_BASE__C = (xdc_UInt)0x0;

/* EMIFB_LENGTH__C */
#pragma DATA_SECTION(ti_sysbios_family_c64p_Cache_EMIFB_LENGTH__C, ".const:ti_sysbios_family_c64p_Cache_EMIFB_LENGTH__C");
__FAR__ const CT__ti_sysbios_family_c64p_Cache_EMIFB_LENGTH ti_sysbios_family_c64p_Cache_EMIFB_LENGTH__C = (xdc_UInt)0x0;

/* EMIFC_CFG__C */
#pragma DATA_SECTION(ti_sysbios_family_c64p_Cache_EMIFC_CFG__C, ".const:ti_sysbios_family_c64p_Cache_EMIFC_CFG__C");
__FAR__ const CT__ti_sysbios_family_c64p_Cache_EMIFC_CFG ti_sysbios_family_c64p_Cache_EMIFC_CFG__C = ((CT__ti_sysbios_family_c64p_Cache_EMIFC_CFG)0);

/* EMIFC_BASE__C */
#pragma DATA_SECTION(ti_sysbios_family_c64p_Cache_EMIFC_BASE__C, ".const:ti_sysbios_family_c64p_Cache_EMIFC_BASE__C");
__FAR__ const CT__ti_sysbios_family_c64p_Cache_EMIFC_BASE ti_sysbios_family_c64p_Cache_EMIFC_BASE__C = (xdc_UInt)0x0;

/* EMIFC_LENGTH__C */
#pragma DATA_SECTION(ti_sysbios_family_c64p_Cache_EMIFC_LENGTH__C, ".const:ti_sysbios_family_c64p_Cache_EMIFC_LENGTH__C");
__FAR__ const CT__ti_sysbios_family_c64p_Cache_EMIFC_LENGTH ti_sysbios_family_c64p_Cache_EMIFC_LENGTH__C = (xdc_UInt)0x0;

/* MAR0_31__C */
#pragma DATA_SECTION(ti_sysbios_family_c64p_Cache_MAR0_31__C, ".const:ti_sysbios_family_c64p_Cache_MAR0_31__C");
__FAR__ const CT__ti_sysbios_family_c64p_Cache_MAR0_31 ti_sysbios_family_c64p_Cache_MAR0_31__C = (xdc_UInt32)0x0;

/* MAR32_63__C */
#pragma DATA_SECTION(ti_sysbios_family_c64p_Cache_MAR32_63__C, ".const:ti_sysbios_family_c64p_Cache_MAR32_63__C");
__FAR__ const CT__ti_sysbios_family_c64p_Cache_MAR32_63 ti_sysbios_family_c64p_Cache_MAR32_63__C = (xdc_UInt32)0x0;

/* MAR64_95__C */
#pragma DATA_SECTION(ti_sysbios_family_c64p_Cache_MAR64_95__C, ".const:ti_sysbios_family_c64p_Cache_MAR64_95__C");
__FAR__ const CT__ti_sysbios_family_c64p_Cache_MAR64_95 ti_sysbios_family_c64p_Cache_MAR64_95__C = (xdc_UInt32)0x0;

/* MAR96_127__C */
#pragma DATA_SECTION(ti_sysbios_family_c64p_Cache_MAR96_127__C, ".const:ti_sysbios_family_c64p_Cache_MAR96_127__C");
__FAR__ const CT__ti_sysbios_family_c64p_Cache_MAR96_127 ti_sysbios_family_c64p_Cache_MAR96_127__C = (xdc_UInt32)0x0;

/* MAR128_159__C */
#pragma DATA_SECTION(ti_sysbios_family_c64p_Cache_MAR128_159__C, ".const:ti_sysbios_family_c64p_Cache_MAR128_159__C");
__FAR__ const CT__ti_sysbios_family_c64p_Cache_MAR128_159 ti_sysbios_family_c64p_Cache_MAR128_159__C = (xdc_UInt32)0x0;

/* MAR160_191__C */
#pragma DATA_SECTION(ti_sysbios_family_c64p_Cache_MAR160_191__C, ".const:ti_sysbios_family_c64p_Cache_MAR160_191__C");
__FAR__ const CT__ti_sysbios_family_c64p_Cache_MAR160_191 ti_sysbios_family_c64p_Cache_MAR160_191__C = (xdc_UInt32)0x0;

/* MAR192_223__C */
#pragma DATA_SECTION(ti_sysbios_family_c64p_Cache_MAR192_223__C, ".const:ti_sysbios_family_c64p_Cache_MAR192_223__C");
__FAR__ const CT__ti_sysbios_family_c64p_Cache_MAR192_223 ti_sysbios_family_c64p_Cache_MAR192_223__C = (xdc_UInt32)0x0;

/* MAR224_255__C */
#pragma DATA_SECTION(ti_sysbios_family_c64p_Cache_MAR224_255__C, ".const:ti_sysbios_family_c64p_Cache_MAR224_255__C");
__FAR__ const CT__ti_sysbios_family_c64p_Cache_MAR224_255 ti_sysbios_family_c64p_Cache_MAR224_255__C = (xdc_UInt32)0x0;

/* E_invalidL1CacheSize__C */
#pragma DATA_SECTION(ti_sysbios_family_c64p_Cache_E_invalidL1CacheSize__C, ".const:ti_sysbios_family_c64p_Cache_E_invalidL1CacheSize__C");
__FAR__ const CT__ti_sysbios_family_c64p_Cache_E_invalidL1CacheSize ti_sysbios_family_c64p_Cache_E_invalidL1CacheSize__C = (((xdc_runtime_Error_Id)4133) << 16 | 0);

/* E_invalidL2CacheSize__C */
#pragma DATA_SECTION(ti_sysbios_family_c64p_Cache_E_invalidL2CacheSize__C, ".const:ti_sysbios_family_c64p_Cache_E_invalidL2CacheSize__C");
__FAR__ const CT__ti_sysbios_family_c64p_Cache_E_invalidL2CacheSize ti_sysbios_family_c64p_Cache_E_invalidL2CacheSize__C = (((xdc_runtime_Error_Id)4180) << 16 | 0);


/*
 * ======== ti.sysbios.family.c64p.EventCombiner INITIALIZERS ========
 */

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_ti_sysbios_family_c64p_EventCombiner_Module__state__V"
#endif
#if defined(__llvm__) && defined(__ti__)
ti_sysbios_family_c64p_EventCombiner_Module_State__ ti_sysbios_family_c64p_EventCombiner_Module__state__V __attribute__ ((section(".data:ti_sysbios_family_c64p_EventCombiner_Module__state__V")));
#elif defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __TI_COMPILER_VERSION__
ti_sysbios_family_c64p_EventCombiner_Module_State__ ti_sysbios_family_c64p_EventCombiner_Module__state__V __attribute__ ((section(".data_ti_sysbios_family_c64p_EventCombiner_Module__state__V")));
#endif
#endif
ti_sysbios_family_c64p_EventCombiner_Module_State__ ti_sysbios_family_c64p_EventCombiner_Module__state__V = {
    {
        {
            ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c64p_EventCombiner_unused)),  /* fxn */
            ((xdc_UArg)(0x0)),  /* arg */
        },  /* [0] */
        {
            ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c64p_EventCombiner_unused)),  /* fxn */
            ((xdc_UArg)(0x1)),  /* arg */
        },  /* [1] */
        {
            ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c64p_EventCombiner_unused)),  /* fxn */
            ((xdc_UArg)(0x2)),  /* arg */
        },  /* [2] */
        {
            ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c64p_EventCombiner_unused)),  /* fxn */
            ((xdc_UArg)(0x3)),  /* arg */
        },  /* [3] */
        {
            ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c64p_EventCombiner_unused)),  /* fxn */
            ((xdc_UArg)(0x4)),  /* arg */
        },  /* [4] */
        {
            ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c64p_EventCombiner_unused)),  /* fxn */
            ((xdc_UArg)(0x5)),  /* arg */
        },  /* [5] */
        {
            ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c64p_EventCombiner_unused)),  /* fxn */
            ((xdc_UArg)(0x6)),  /* arg */
        },  /* [6] */
        {
            ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c64p_EventCombiner_unused)),  /* fxn */
            ((xdc_UArg)(0x7)),  /* arg */
        },  /* [7] */
        {
            ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c64p_EventCombiner_unused)),  /* fxn */
            ((xdc_UArg)(0x8)),  /* arg */
        },  /* [8] */
        {
            ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c64p_EventCombiner_unused)),  /* fxn */
            ((xdc_UArg)(0x9)),  /* arg */
        },  /* [9] */
        {
            ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c64p_EventCombiner_unused)),  /* fxn */
            ((xdc_UArg)(0xa)),  /* arg */
        },  /* [10] */
        {
            ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c64p_EventCombiner_unused)),  /* fxn */
            ((xdc_UArg)(0xb)),  /* arg */
        },  /* [11] */
        {
            ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c64p_EventCombiner_unused)),  /* fxn */
            ((xdc_UArg)(0xc)),  /* arg */
        },  /* [12] */
        {
            ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c64p_EventCombiner_unused)),  /* fxn */
            ((xdc_UArg)(0xd)),  /* arg */
        },  /* [13] */
        {
            ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c64p_EventCombiner_unused)),  /* fxn */
            ((xdc_UArg)(0xe)),  /* arg */
        },  /* [14] */
        {
            ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c64p_EventCombiner_unused)),  /* fxn */
            ((xdc_UArg)(0xf)),  /* arg */
        },  /* [15] */
        {
            ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c64p_EventCombiner_unused)),  /* fxn */
            ((xdc_UArg)(0x10)),  /* arg */
        },  /* [16] */
        {
            ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c64p_EventCombiner_unused)),  /* fxn */
            ((xdc_UArg)(0x11)),  /* arg */
        },  /* [17] */
        {
            ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c64p_EventCombiner_unused)),  /* fxn */
            ((xdc_UArg)(0x12)),  /* arg */
        },  /* [18] */
        {
            ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c64p_EventCombiner_unused)),  /* fxn */
            ((xdc_UArg)(0x13)),  /* arg */
        },  /* [19] */
        {
            ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c64p_EventCombiner_unused)),  /* fxn */
            ((xdc_UArg)(0x14)),  /* arg */
        },  /* [20] */
        {
            ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c64p_EventCombiner_unused)),  /* fxn */
            ((xdc_UArg)(0x15)),  /* arg */
        },  /* [21] */
        {
            ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c64p_EventCombiner_unused)),  /* fxn */
            ((xdc_UArg)(0x16)),  /* arg */
        },  /* [22] */
        {
            ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c64p_EventCombiner_unused)),  /* fxn */
            ((xdc_UArg)(0x17)),  /* arg */
        },  /* [23] */
        {
            ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c64p_EventCombiner_unused)),  /* fxn */
            ((xdc_UArg)(0x18)),  /* arg */
        },  /* [24] */
        {
            ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c64p_EventCombiner_unused)),  /* fxn */
            ((xdc_UArg)(0x19)),  /* arg */
        },  /* [25] */
        {
            ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c64p_EventCombiner_unused)),  /* fxn */
            ((xdc_UArg)(0x1a)),  /* arg */
        },  /* [26] */
        {
            ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c64p_EventCombiner_unused)),  /* fxn */
            ((xdc_UArg)(0x1b)),  /* arg */
        },  /* [27] */
        {
            ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c64p_EventCombiner_unused)),  /* fxn */
            ((xdc_UArg)(0x1c)),  /* arg */
        },  /* [28] */
        {
            ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c64p_EventCombiner_unused)),  /* fxn */
            ((xdc_UArg)(0x1d)),  /* arg */
        },  /* [29] */
        {
            ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c64p_EventCombiner_unused)),  /* fxn */
            ((xdc_UArg)(0x1e)),  /* arg */
        },  /* [30] */
        {
            ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c64p_EventCombiner_unused)),  /* fxn */
            ((xdc_UArg)(0x1f)),  /* arg */
        },  /* [31] */
        {
            ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c64p_EventCombiner_unused)),  /* fxn */
            ((xdc_UArg)(0x20)),  /* arg */
        },  /* [32] */
        {
            ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c64p_EventCombiner_unused)),  /* fxn */
            ((xdc_UArg)(0x21)),  /* arg */
        },  /* [33] */
        {
            ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c64p_EventCombiner_unused)),  /* fxn */
            ((xdc_UArg)(0x22)),  /* arg */
        },  /* [34] */
        {
            ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c64p_EventCombiner_unused)),  /* fxn */
            ((xdc_UArg)(0x23)),  /* arg */
        },  /* [35] */
        {
            ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c64p_EventCombiner_unused)),  /* fxn */
            ((xdc_UArg)(0x24)),  /* arg */
        },  /* [36] */
        {
            ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c64p_EventCombiner_unused)),  /* fxn */
            ((xdc_UArg)(0x25)),  /* arg */
        },  /* [37] */
        {
            ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c64p_EventCombiner_unused)),  /* fxn */
            ((xdc_UArg)(0x26)),  /* arg */
        },  /* [38] */
        {
            ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c64p_EventCombiner_unused)),  /* fxn */
            ((xdc_UArg)(0x27)),  /* arg */
        },  /* [39] */
        {
            ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c64p_EventCombiner_unused)),  /* fxn */
            ((xdc_UArg)(0x28)),  /* arg */
        },  /* [40] */
        {
            ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c64p_EventCombiner_unused)),  /* fxn */
            ((xdc_UArg)(0x29)),  /* arg */
        },  /* [41] */
        {
            ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c64p_EventCombiner_unused)),  /* fxn */
            ((xdc_UArg)(0x2a)),  /* arg */
        },  /* [42] */
        {
            ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c64p_EventCombiner_unused)),  /* fxn */
            ((xdc_UArg)(0x2b)),  /* arg */
        },  /* [43] */
        {
            ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c64p_EventCombiner_unused)),  /* fxn */
            ((xdc_UArg)(0x2c)),  /* arg */
        },  /* [44] */
        {
            ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c64p_EventCombiner_unused)),  /* fxn */
            ((xdc_UArg)(0x2d)),  /* arg */
        },  /* [45] */
        {
            ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c64p_EventCombiner_unused)),  /* fxn */
            ((xdc_UArg)(0x2e)),  /* arg */
        },  /* [46] */
        {
            ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c64p_EventCombiner_unused)),  /* fxn */
            ((xdc_UArg)(0x2f)),  /* arg */
        },  /* [47] */
        {
            ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c64p_EventCombiner_unused)),  /* fxn */
            ((xdc_UArg)(0x30)),  /* arg */
        },  /* [48] */
        {
            ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c64p_EventCombiner_unused)),  /* fxn */
            ((xdc_UArg)(0x31)),  /* arg */
        },  /* [49] */
        {
            ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c64p_EventCombiner_unused)),  /* fxn */
            ((xdc_UArg)(0x32)),  /* arg */
        },  /* [50] */
        {
            ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c64p_EventCombiner_unused)),  /* fxn */
            ((xdc_UArg)(0x33)),  /* arg */
        },  /* [51] */
        {
            ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c64p_EventCombiner_unused)),  /* fxn */
            ((xdc_UArg)(0x34)),  /* arg */
        },  /* [52] */
        {
            ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c64p_EventCombiner_unused)),  /* fxn */
            ((xdc_UArg)(0x35)),  /* arg */
        },  /* [53] */
        {
            ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c64p_EventCombiner_unused)),  /* fxn */
            ((xdc_UArg)(0x36)),  /* arg */
        },  /* [54] */
        {
            ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c64p_EventCombiner_unused)),  /* fxn */
            ((xdc_UArg)(0x37)),  /* arg */
        },  /* [55] */
        {
            ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c64p_EventCombiner_unused)),  /* fxn */
            ((xdc_UArg)(0x38)),  /* arg */
        },  /* [56] */
        {
            ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c64p_EventCombiner_unused)),  /* fxn */
            ((xdc_UArg)(0x39)),  /* arg */
        },  /* [57] */
        {
            ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c64p_EventCombiner_unused)),  /* fxn */
            ((xdc_UArg)(0x3a)),  /* arg */
        },  /* [58] */
        {
            ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c64p_EventCombiner_unused)),  /* fxn */
            ((xdc_UArg)(0x3b)),  /* arg */
        },  /* [59] */
        {
            ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c64p_EventCombiner_unused)),  /* fxn */
            ((xdc_UArg)(0x3c)),  /* arg */
        },  /* [60] */
        {
            ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c64p_EventCombiner_unused)),  /* fxn */
            ((xdc_UArg)(0x3d)),  /* arg */
        },  /* [61] */
        {
            ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c64p_EventCombiner_unused)),  /* fxn */
            ((xdc_UArg)(0x3e)),  /* arg */
        },  /* [62] */
        {
            ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c64p_EventCombiner_unused)),  /* fxn */
            ((xdc_UArg)(0x3f)),  /* arg */
        },  /* [63] */
        {
            ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c64p_EventCombiner_unused)),  /* fxn */
            ((xdc_UArg)(0x40)),  /* arg */
        },  /* [64] */
        {
            ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c64p_EventCombiner_unused)),  /* fxn */
            ((xdc_UArg)(0x41)),  /* arg */
        },  /* [65] */
        {
            ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c64p_EventCombiner_unused)),  /* fxn */
            ((xdc_UArg)(0x42)),  /* arg */
        },  /* [66] */
        {
            ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c64p_EventCombiner_unused)),  /* fxn */
            ((xdc_UArg)(0x43)),  /* arg */
        },  /* [67] */
        {
            ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c64p_EventCombiner_unused)),  /* fxn */
            ((xdc_UArg)(0x44)),  /* arg */
        },  /* [68] */
        {
            ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c64p_EventCombiner_unused)),  /* fxn */
            ((xdc_UArg)(0x45)),  /* arg */
        },  /* [69] */
        {
            ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c64p_EventCombiner_unused)),  /* fxn */
            ((xdc_UArg)(0x46)),  /* arg */
        },  /* [70] */
        {
            ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c64p_EventCombiner_unused)),  /* fxn */
            ((xdc_UArg)(0x47)),  /* arg */
        },  /* [71] */
        {
            ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c64p_EventCombiner_unused)),  /* fxn */
            ((xdc_UArg)(0x48)),  /* arg */
        },  /* [72] */
        {
            ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c64p_EventCombiner_unused)),  /* fxn */
            ((xdc_UArg)(0x49)),  /* arg */
        },  /* [73] */
        {
            ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c64p_EventCombiner_unused)),  /* fxn */
            ((xdc_UArg)(0x4a)),  /* arg */
        },  /* [74] */
        {
            ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c64p_EventCombiner_unused)),  /* fxn */
            ((xdc_UArg)(0x4b)),  /* arg */
        },  /* [75] */
        {
            ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c64p_EventCombiner_unused)),  /* fxn */
            ((xdc_UArg)(0x4c)),  /* arg */
        },  /* [76] */
        {
            ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c64p_EventCombiner_unused)),  /* fxn */
            ((xdc_UArg)(0x4d)),  /* arg */
        },  /* [77] */
        {
            ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c64p_EventCombiner_unused)),  /* fxn */
            ((xdc_UArg)(0x4e)),  /* arg */
        },  /* [78] */
        {
            ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c64p_EventCombiner_unused)),  /* fxn */
            ((xdc_UArg)(0x4f)),  /* arg */
        },  /* [79] */
        {
            ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c64p_EventCombiner_unused)),  /* fxn */
            ((xdc_UArg)(0x50)),  /* arg */
        },  /* [80] */
        {
            ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c64p_EventCombiner_unused)),  /* fxn */
            ((xdc_UArg)(0x51)),  /* arg */
        },  /* [81] */
        {
            ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c64p_EventCombiner_unused)),  /* fxn */
            ((xdc_UArg)(0x52)),  /* arg */
        },  /* [82] */
        {
            ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c64p_EventCombiner_unused)),  /* fxn */
            ((xdc_UArg)(0x53)),  /* arg */
        },  /* [83] */
        {
            ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c64p_EventCombiner_unused)),  /* fxn */
            ((xdc_UArg)(0x54)),  /* arg */
        },  /* [84] */
        {
            ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c64p_EventCombiner_unused)),  /* fxn */
            ((xdc_UArg)(0x55)),  /* arg */
        },  /* [85] */
        {
            ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c64p_EventCombiner_unused)),  /* fxn */
            ((xdc_UArg)(0x56)),  /* arg */
        },  /* [86] */
        {
            ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c64p_EventCombiner_unused)),  /* fxn */
            ((xdc_UArg)(0x57)),  /* arg */
        },  /* [87] */
        {
            ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c64p_EventCombiner_unused)),  /* fxn */
            ((xdc_UArg)(0x58)),  /* arg */
        },  /* [88] */
        {
            ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c64p_EventCombiner_unused)),  /* fxn */
            ((xdc_UArg)(0x59)),  /* arg */
        },  /* [89] */
        {
            ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c64p_EventCombiner_unused)),  /* fxn */
            ((xdc_UArg)(0x5a)),  /* arg */
        },  /* [90] */
        {
            ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c64p_EventCombiner_unused)),  /* fxn */
            ((xdc_UArg)(0x5b)),  /* arg */
        },  /* [91] */
        {
            ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c64p_EventCombiner_unused)),  /* fxn */
            ((xdc_UArg)(0x5c)),  /* arg */
        },  /* [92] */
        {
            ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c64p_EventCombiner_unused)),  /* fxn */
            ((xdc_UArg)(0x5d)),  /* arg */
        },  /* [93] */
        {
            ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c64p_EventCombiner_unused)),  /* fxn */
            ((xdc_UArg)(0x5e)),  /* arg */
        },  /* [94] */
        {
            ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c64p_EventCombiner_unused)),  /* fxn */
            ((xdc_UArg)(0x5f)),  /* arg */
        },  /* [95] */
        {
            ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c64p_EventCombiner_unused)),  /* fxn */
            ((xdc_UArg)(0x60)),  /* arg */
        },  /* [96] */
        {
            ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c64p_EventCombiner_unused)),  /* fxn */
            ((xdc_UArg)(0x61)),  /* arg */
        },  /* [97] */
        {
            ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c64p_EventCombiner_unused)),  /* fxn */
            ((xdc_UArg)(0x62)),  /* arg */
        },  /* [98] */
        {
            ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c64p_EventCombiner_unused)),  /* fxn */
            ((xdc_UArg)(0x63)),  /* arg */
        },  /* [99] */
        {
            ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c64p_EventCombiner_unused)),  /* fxn */
            ((xdc_UArg)(0x64)),  /* arg */
        },  /* [100] */
        {
            ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c64p_EventCombiner_unused)),  /* fxn */
            ((xdc_UArg)(0x65)),  /* arg */
        },  /* [101] */
        {
            ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c64p_EventCombiner_unused)),  /* fxn */
            ((xdc_UArg)(0x66)),  /* arg */
        },  /* [102] */
        {
            ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c64p_EventCombiner_unused)),  /* fxn */
            ((xdc_UArg)(0x67)),  /* arg */
        },  /* [103] */
        {
            ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c64p_EventCombiner_unused)),  /* fxn */
            ((xdc_UArg)(0x68)),  /* arg */
        },  /* [104] */
        {
            ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c64p_EventCombiner_unused)),  /* fxn */
            ((xdc_UArg)(0x69)),  /* arg */
        },  /* [105] */
        {
            ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c64p_EventCombiner_unused)),  /* fxn */
            ((xdc_UArg)(0x6a)),  /* arg */
        },  /* [106] */
        {
            ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c64p_EventCombiner_unused)),  /* fxn */
            ((xdc_UArg)(0x6b)),  /* arg */
        },  /* [107] */
        {
            ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c64p_EventCombiner_unused)),  /* fxn */
            ((xdc_UArg)(0x6c)),  /* arg */
        },  /* [108] */
        {
            ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c64p_EventCombiner_unused)),  /* fxn */
            ((xdc_UArg)(0x6d)),  /* arg */
        },  /* [109] */
        {
            ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c64p_EventCombiner_unused)),  /* fxn */
            ((xdc_UArg)(0x6e)),  /* arg */
        },  /* [110] */
        {
            ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c64p_EventCombiner_unused)),  /* fxn */
            ((xdc_UArg)(0x6f)),  /* arg */
        },  /* [111] */
        {
            ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c64p_EventCombiner_unused)),  /* fxn */
            ((xdc_UArg)(0x70)),  /* arg */
        },  /* [112] */
        {
            ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c64p_EventCombiner_unused)),  /* fxn */
            ((xdc_UArg)(0x71)),  /* arg */
        },  /* [113] */
        {
            ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c64p_EventCombiner_unused)),  /* fxn */
            ((xdc_UArg)(0x72)),  /* arg */
        },  /* [114] */
        {
            ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c64p_EventCombiner_unused)),  /* fxn */
            ((xdc_UArg)(0x73)),  /* arg */
        },  /* [115] */
        {
            ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c64p_EventCombiner_unused)),  /* fxn */
            ((xdc_UArg)(0x74)),  /* arg */
        },  /* [116] */
        {
            ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c64p_EventCombiner_unused)),  /* fxn */
            ((xdc_UArg)(0x75)),  /* arg */
        },  /* [117] */
        {
            ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c64p_EventCombiner_unused)),  /* fxn */
            ((xdc_UArg)(0x76)),  /* arg */
        },  /* [118] */
        {
            ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c64p_EventCombiner_unused)),  /* fxn */
            ((xdc_UArg)(0x77)),  /* arg */
        },  /* [119] */
        {
            ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c64p_EventCombiner_unused)),  /* fxn */
            ((xdc_UArg)(0x78)),  /* arg */
        },  /* [120] */
        {
            ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c64p_EventCombiner_unused)),  /* fxn */
            ((xdc_UArg)(0x79)),  /* arg */
        },  /* [121] */
        {
            ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c64p_EventCombiner_unused)),  /* fxn */
            ((xdc_UArg)(0x7a)),  /* arg */
        },  /* [122] */
        {
            ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c64p_EventCombiner_unused)),  /* fxn */
            ((xdc_UArg)(0x7b)),  /* arg */
        },  /* [123] */
        {
            ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c64p_EventCombiner_unused)),  /* fxn */
            ((xdc_UArg)(0x7c)),  /* arg */
        },  /* [124] */
        {
            ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c64p_EventCombiner_unused)),  /* fxn */
            ((xdc_UArg)(0x7d)),  /* arg */
        },  /* [125] */
        {
            ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c64p_EventCombiner_unused)),  /* fxn */
            ((xdc_UArg)(0x7e)),  /* arg */
        },  /* [126] */
        {
            ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c64p_EventCombiner_unused)),  /* fxn */
            ((xdc_UArg)(0x7f)),  /* arg */
        },  /* [127] */
    },  /* dispatchTab */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_family_c64p_EventCombiner_Module__diagsEnabled__C, ".const:ti_sysbios_family_c64p_EventCombiner_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_family_c64p_EventCombiner_Module__diagsEnabled ti_sysbios_family_c64p_EventCombiner_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_family_c64p_EventCombiner_Module__diagsIncluded__C, ".const:ti_sysbios_family_c64p_EventCombiner_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_family_c64p_EventCombiner_Module__diagsIncluded ti_sysbios_family_c64p_EventCombiner_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_family_c64p_EventCombiner_Module__diagsMask__C, ".const:ti_sysbios_family_c64p_EventCombiner_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_family_c64p_EventCombiner_Module__diagsMask ti_sysbios_family_c64p_EventCombiner_Module__diagsMask__C = ((CT__ti_sysbios_family_c64p_EventCombiner_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_family_c64p_EventCombiner_Module__gateObj__C, ".const:ti_sysbios_family_c64p_EventCombiner_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_family_c64p_EventCombiner_Module__gateObj ti_sysbios_family_c64p_EventCombiner_Module__gateObj__C = ((CT__ti_sysbios_family_c64p_EventCombiner_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_family_c64p_EventCombiner_Module__gatePrms__C, ".const:ti_sysbios_family_c64p_EventCombiner_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_family_c64p_EventCombiner_Module__gatePrms ti_sysbios_family_c64p_EventCombiner_Module__gatePrms__C = ((CT__ti_sysbios_family_c64p_EventCombiner_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_family_c64p_EventCombiner_Module__id__C, ".const:ti_sysbios_family_c64p_EventCombiner_Module__id__C");
__FAR__ const CT__ti_sysbios_family_c64p_EventCombiner_Module__id ti_sysbios_family_c64p_EventCombiner_Module__id__C = (xdc_Bits16)0x8016;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_family_c64p_EventCombiner_Module__loggerDefined__C, ".const:ti_sysbios_family_c64p_EventCombiner_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_family_c64p_EventCombiner_Module__loggerDefined ti_sysbios_family_c64p_EventCombiner_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_family_c64p_EventCombiner_Module__loggerObj__C, ".const:ti_sysbios_family_c64p_EventCombiner_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_family_c64p_EventCombiner_Module__loggerObj ti_sysbios_family_c64p_EventCombiner_Module__loggerObj__C = ((CT__ti_sysbios_family_c64p_EventCombiner_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_family_c64p_EventCombiner_Module__loggerFxn0__C, ".const:ti_sysbios_family_c64p_EventCombiner_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_family_c64p_EventCombiner_Module__loggerFxn0 ti_sysbios_family_c64p_EventCombiner_Module__loggerFxn0__C = ((CT__ti_sysbios_family_c64p_EventCombiner_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_family_c64p_EventCombiner_Module__loggerFxn1__C, ".const:ti_sysbios_family_c64p_EventCombiner_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_family_c64p_EventCombiner_Module__loggerFxn1 ti_sysbios_family_c64p_EventCombiner_Module__loggerFxn1__C = ((CT__ti_sysbios_family_c64p_EventCombiner_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_family_c64p_EventCombiner_Module__loggerFxn2__C, ".const:ti_sysbios_family_c64p_EventCombiner_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_family_c64p_EventCombiner_Module__loggerFxn2 ti_sysbios_family_c64p_EventCombiner_Module__loggerFxn2__C = ((CT__ti_sysbios_family_c64p_EventCombiner_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_family_c64p_EventCombiner_Module__loggerFxn4__C, ".const:ti_sysbios_family_c64p_EventCombiner_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_family_c64p_EventCombiner_Module__loggerFxn4 ti_sysbios_family_c64p_EventCombiner_Module__loggerFxn4__C = ((CT__ti_sysbios_family_c64p_EventCombiner_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_family_c64p_EventCombiner_Module__loggerFxn8__C, ".const:ti_sysbios_family_c64p_EventCombiner_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_family_c64p_EventCombiner_Module__loggerFxn8 ti_sysbios_family_c64p_EventCombiner_Module__loggerFxn8__C = ((CT__ti_sysbios_family_c64p_EventCombiner_Module__loggerFxn8)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_family_c64p_EventCombiner_Object__count__C, ".const:ti_sysbios_family_c64p_EventCombiner_Object__count__C");
__FAR__ const CT__ti_sysbios_family_c64p_EventCombiner_Object__count ti_sysbios_family_c64p_EventCombiner_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_family_c64p_EventCombiner_Object__heap__C, ".const:ti_sysbios_family_c64p_EventCombiner_Object__heap__C");
__FAR__ const CT__ti_sysbios_family_c64p_EventCombiner_Object__heap ti_sysbios_family_c64p_EventCombiner_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_family_c64p_EventCombiner_Object__sizeof__C, ".const:ti_sysbios_family_c64p_EventCombiner_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_family_c64p_EventCombiner_Object__sizeof ti_sysbios_family_c64p_EventCombiner_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_family_c64p_EventCombiner_Object__table__C, ".const:ti_sysbios_family_c64p_EventCombiner_Object__table__C");
__FAR__ const CT__ti_sysbios_family_c64p_EventCombiner_Object__table ti_sysbios_family_c64p_EventCombiner_Object__table__C = 0;

/* EVTRegs__C */
#pragma DATA_SECTION(ti_sysbios_family_c64p_EventCombiner_EVTRegs__C, ".const:ti_sysbios_family_c64p_EventCombiner_EVTRegs__C");
__FAR__ const CT__ti_sysbios_family_c64p_EventCombiner_EVTRegs ti_sysbios_family_c64p_EventCombiner_EVTRegs__C = ((CT__ti_sysbios_family_c64p_EventCombiner_EVTRegs)(0x1800000));

/* A_invalidEventId__C */
#pragma DATA_SECTION(ti_sysbios_family_c64p_EventCombiner_A_invalidEventId__C, ".const:ti_sysbios_family_c64p_EventCombiner_A_invalidEventId__C");
__FAR__ const CT__ti_sysbios_family_c64p_EventCombiner_A_invalidEventId ti_sysbios_family_c64p_EventCombiner_A_invalidEventId__C = (((xdc_runtime_Assert_Id)400) << 16 | 16);

/* E_unpluggedEvent__C */
#pragma DATA_SECTION(ti_sysbios_family_c64p_EventCombiner_E_unpluggedEvent__C, ".const:ti_sysbios_family_c64p_EventCombiner_E_unpluggedEvent__C");
__FAR__ const CT__ti_sysbios_family_c64p_EventCombiner_E_unpluggedEvent ti_sysbios_family_c64p_EventCombiner_E_unpluggedEvent__C = (((xdc_runtime_Error_Id)3667) << 16 | 0);

/* EVTMASK__C */
#pragma DATA_SECTION(ti_sysbios_family_c64p_EventCombiner_EVTMASK__C, ".const:ti_sysbios_family_c64p_EventCombiner_EVTMASK__C");
__FAR__ const CT__ti_sysbios_family_c64p_EventCombiner_EVTMASK ti_sysbios_family_c64p_EventCombiner_EVTMASK__C = {
    (xdc_Bits32)(-0x0 - 1),  /* [0] */
    (xdc_Bits32)(-0x0 - 1),  /* [1] */
    (xdc_Bits32)(-0x0 - 1),  /* [2] */
    (xdc_Bits32)(-0x0 - 1),  /* [3] */
};


/*
 * ======== ti.sysbios.family.c64p.Exception INITIALIZERS ========
 */

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_ti_sysbios_family_c64p_Exception_Module__state__V"
#endif
#if defined(__llvm__) && defined(__ti__)
ti_sysbios_family_c64p_Exception_Module_State__ ti_sysbios_family_c64p_Exception_Module__state__V __attribute__ ((section(".data:ti_sysbios_family_c64p_Exception_Module__state__V")));
#elif defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __TI_COMPILER_VERSION__
ti_sysbios_family_c64p_Exception_Module_State__ ti_sysbios_family_c64p_Exception_Module__state__V __attribute__ ((section(".data_ti_sysbios_family_c64p_Exception_Module__state__V")));
#endif
#endif
ti_sysbios_family_c64p_Exception_Module_State__ ti_sysbios_family_c64p_Exception_Module__state__V = {
    (xdc_Bits32)0x0,  /* efr */
    (xdc_Bits32)0x0,  /* nrp */
    (xdc_Bits32)0x0,  /* ntsr */
    (xdc_Bits32)0x0,  /* ierr */
    ((xdc_Void(*)(xdc_Void))0),  /* returnHook */
    ((ti_sysbios_family_c64p_Exception_Context*)0),  /* excContext */
    {
        (xdc_Char)0x0,  /* [0] */
        (xdc_Char)0x0,  /* [1] */
        (xdc_Char)0x0,  /* [2] */
        (xdc_Char)0x0,  /* [3] */
        (xdc_Char)0x0,  /* [4] */
        (xdc_Char)0x0,  /* [5] */
        (xdc_Char)0x0,  /* [6] */
        (xdc_Char)0x0,  /* [7] */
        (xdc_Char)0x0,  /* [8] */
        (xdc_Char)0x0,  /* [9] */
        (xdc_Char)0x0,  /* [10] */
        (xdc_Char)0x0,  /* [11] */
        (xdc_Char)0x0,  /* [12] */
        (xdc_Char)0x0,  /* [13] */
        (xdc_Char)0x0,  /* [14] */
        (xdc_Char)0x0,  /* [15] */
    },  /* scratch */
    ((xdc_Char*)0),  /* excPtr */
    ((void*)0),  /* contextBuf */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_family_c64p_Exception_Module__diagsEnabled__C, ".const:ti_sysbios_family_c64p_Exception_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_family_c64p_Exception_Module__diagsEnabled ti_sysbios_family_c64p_Exception_Module__diagsEnabled__C = (xdc_Bits32)0x190;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_family_c64p_Exception_Module__diagsIncluded__C, ".const:ti_sysbios_family_c64p_Exception_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_family_c64p_Exception_Module__diagsIncluded ti_sysbios_family_c64p_Exception_Module__diagsIncluded__C = (xdc_Bits32)0x190;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_family_c64p_Exception_Module__diagsMask__C, ".const:ti_sysbios_family_c64p_Exception_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_family_c64p_Exception_Module__diagsMask ti_sysbios_family_c64p_Exception_Module__diagsMask__C = ((CT__ti_sysbios_family_c64p_Exception_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_family_c64p_Exception_Module__gateObj__C, ".const:ti_sysbios_family_c64p_Exception_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_family_c64p_Exception_Module__gateObj ti_sysbios_family_c64p_Exception_Module__gateObj__C = ((CT__ti_sysbios_family_c64p_Exception_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_family_c64p_Exception_Module__gatePrms__C, ".const:ti_sysbios_family_c64p_Exception_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_family_c64p_Exception_Module__gatePrms ti_sysbios_family_c64p_Exception_Module__gatePrms__C = ((CT__ti_sysbios_family_c64p_Exception_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_family_c64p_Exception_Module__id__C, ".const:ti_sysbios_family_c64p_Exception_Module__id__C");
__FAR__ const CT__ti_sysbios_family_c64p_Exception_Module__id ti_sysbios_family_c64p_Exception_Module__id__C = (xdc_Bits16)0x8017;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_family_c64p_Exception_Module__loggerDefined__C, ".const:ti_sysbios_family_c64p_Exception_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_family_c64p_Exception_Module__loggerDefined ti_sysbios_family_c64p_Exception_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_family_c64p_Exception_Module__loggerObj__C, ".const:ti_sysbios_family_c64p_Exception_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_family_c64p_Exception_Module__loggerObj ti_sysbios_family_c64p_Exception_Module__loggerObj__C = ((CT__ti_sysbios_family_c64p_Exception_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_family_c64p_Exception_Module__loggerFxn0__C, ".const:ti_sysbios_family_c64p_Exception_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_family_c64p_Exception_Module__loggerFxn0 ti_sysbios_family_c64p_Exception_Module__loggerFxn0__C = ((CT__ti_sysbios_family_c64p_Exception_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_family_c64p_Exception_Module__loggerFxn1__C, ".const:ti_sysbios_family_c64p_Exception_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_family_c64p_Exception_Module__loggerFxn1 ti_sysbios_family_c64p_Exception_Module__loggerFxn1__C = ((CT__ti_sysbios_family_c64p_Exception_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_family_c64p_Exception_Module__loggerFxn2__C, ".const:ti_sysbios_family_c64p_Exception_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_family_c64p_Exception_Module__loggerFxn2 ti_sysbios_family_c64p_Exception_Module__loggerFxn2__C = ((CT__ti_sysbios_family_c64p_Exception_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_family_c64p_Exception_Module__loggerFxn4__C, ".const:ti_sysbios_family_c64p_Exception_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_family_c64p_Exception_Module__loggerFxn4 ti_sysbios_family_c64p_Exception_Module__loggerFxn4__C = ((CT__ti_sysbios_family_c64p_Exception_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_family_c64p_Exception_Module__loggerFxn8__C, ".const:ti_sysbios_family_c64p_Exception_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_family_c64p_Exception_Module__loggerFxn8 ti_sysbios_family_c64p_Exception_Module__loggerFxn8__C = ((CT__ti_sysbios_family_c64p_Exception_Module__loggerFxn8)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_family_c64p_Exception_Object__count__C, ".const:ti_sysbios_family_c64p_Exception_Object__count__C");
__FAR__ const CT__ti_sysbios_family_c64p_Exception_Object__count ti_sysbios_family_c64p_Exception_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_family_c64p_Exception_Object__heap__C, ".const:ti_sysbios_family_c64p_Exception_Object__heap__C");
__FAR__ const CT__ti_sysbios_family_c64p_Exception_Object__heap ti_sysbios_family_c64p_Exception_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_family_c64p_Exception_Object__sizeof__C, ".const:ti_sysbios_family_c64p_Exception_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_family_c64p_Exception_Object__sizeof ti_sysbios_family_c64p_Exception_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_family_c64p_Exception_Object__table__C, ".const:ti_sysbios_family_c64p_Exception_Object__table__C");
__FAR__ const CT__ti_sysbios_family_c64p_Exception_Object__table ti_sysbios_family_c64p_Exception_Object__table__C = 0;

/* E_exceptionMin__C */
#pragma DATA_SECTION(ti_sysbios_family_c64p_Exception_E_exceptionMin__C, ".const:ti_sysbios_family_c64p_Exception_E_exceptionMin__C");
__FAR__ const CT__ti_sysbios_family_c64p_Exception_E_exceptionMin ti_sysbios_family_c64p_Exception_E_exceptionMin__C = (((xdc_runtime_Error_Id)3708) << 16 | 0);

/* E_exceptionMax__C */
#pragma DATA_SECTION(ti_sysbios_family_c64p_Exception_E_exceptionMax__C, ".const:ti_sysbios_family_c64p_Exception_E_exceptionMax__C");
__FAR__ const CT__ti_sysbios_family_c64p_Exception_E_exceptionMax ti_sysbios_family_c64p_Exception_E_exceptionMax__C = (((xdc_runtime_Error_Id)3850) << 16 | 0);

/* useInternalBuffer__C */
#pragma DATA_SECTION(ti_sysbios_family_c64p_Exception_useInternalBuffer__C, ".const:ti_sysbios_family_c64p_Exception_useInternalBuffer__C");
__FAR__ const CT__ti_sysbios_family_c64p_Exception_useInternalBuffer ti_sysbios_family_c64p_Exception_useInternalBuffer__C = 0;

/* enableExternalMPC__C */
#pragma DATA_SECTION(ti_sysbios_family_c64p_Exception_enableExternalMPC__C, ".const:ti_sysbios_family_c64p_Exception_enableExternalMPC__C");
__FAR__ const CT__ti_sysbios_family_c64p_Exception_enableExternalMPC ti_sysbios_family_c64p_Exception_enableExternalMPC__C = 0;

/* enablePrint__C */
#pragma DATA_SECTION(ti_sysbios_family_c64p_Exception_enablePrint__C, ".const:ti_sysbios_family_c64p_Exception_enablePrint__C");
__FAR__ const CT__ti_sysbios_family_c64p_Exception_enablePrint ti_sysbios_family_c64p_Exception_enablePrint__C = 1;

/* exceptionHook__C */
#pragma DATA_SECTION(ti_sysbios_family_c64p_Exception_exceptionHook__C, ".const:ti_sysbios_family_c64p_Exception_exceptionHook__C");
__FAR__ const CT__ti_sysbios_family_c64p_Exception_exceptionHook ti_sysbios_family_c64p_Exception_exceptionHook__C = ((CT__ti_sysbios_family_c64p_Exception_exceptionHook)0);

/* internalHook__C */
#pragma DATA_SECTION(ti_sysbios_family_c64p_Exception_internalHook__C, ".const:ti_sysbios_family_c64p_Exception_internalHook__C");
__FAR__ const CT__ti_sysbios_family_c64p_Exception_internalHook ti_sysbios_family_c64p_Exception_internalHook__C = ((CT__ti_sysbios_family_c64p_Exception_internalHook)0);

/* externalHook__C */
#pragma DATA_SECTION(ti_sysbios_family_c64p_Exception_externalHook__C, ".const:ti_sysbios_family_c64p_Exception_externalHook__C");
__FAR__ const CT__ti_sysbios_family_c64p_Exception_externalHook ti_sysbios_family_c64p_Exception_externalHook__C = ((CT__ti_sysbios_family_c64p_Exception_externalHook)0);

/* nmiHook__C */
#pragma DATA_SECTION(ti_sysbios_family_c64p_Exception_nmiHook__C, ".const:ti_sysbios_family_c64p_Exception_nmiHook__C");
__FAR__ const CT__ti_sysbios_family_c64p_Exception_nmiHook ti_sysbios_family_c64p_Exception_nmiHook__C = ((CT__ti_sysbios_family_c64p_Exception_nmiHook)0);

/* returnHook__C */
#pragma DATA_SECTION(ti_sysbios_family_c64p_Exception_returnHook__C, ".const:ti_sysbios_family_c64p_Exception_returnHook__C");
__FAR__ const CT__ti_sysbios_family_c64p_Exception_returnHook ti_sysbios_family_c64p_Exception_returnHook__C = ((CT__ti_sysbios_family_c64p_Exception_returnHook)0);


/*
 * ======== ti.sysbios.family.c64p.Hwi INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_family_c64p_Hwi_Object__DESC__C;

/* Object__PARAMS__C */
#pragma DATA_SECTION(ti_sysbios_family_c64p_Hwi_Object__PARAMS__C, ".const:ti_sysbios_family_c64p_Hwi_Object__PARAMS__C");
__FAR__ const ti_sysbios_family_c64p_Hwi_Params ti_sysbios_family_c64p_Hwi_Object__PARAMS__C = {
    sizeof (ti_sysbios_family_c64p_Hwi_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_family_c64p_Hwi_Object__PARAMS__C.__iprms, /* instance */
    ti_sysbios_interfaces_IHwi_MaskingOption_SELF,  /* maskSetting */
    ((xdc_UArg)(0x0)),  /* arg */
    1,  /* enableInt */
    (xdc_Int)(-0x0 - 1),  /* eventId */
    (xdc_Int)0x0,  /* priority */
    (xdc_Bits16)0x0,  /* disableMask */
    (xdc_Bits16)0x0,  /* restoreMask */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_family_c64p_Hwi_Module__ ti_sysbios_family_c64p_Hwi_Module__root__V = {
    {&ti_sysbios_family_c64p_Hwi_Module__root__V.link,  /* link.next */
    &ti_sysbios_family_c64p_Hwi_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_sysbios_family_c64p_Hwi_Object__ ti_sysbios_family_c64p_Hwi_Object__table__V[5] = {
    {/* instance#0 */
        0,
        (xdc_Bits16)0x80,  /* disableMask */
        (xdc_Bits16)0x80,  /* restoreMask */
        ((xdc_UArg)(0x0)),  /* arg */
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c64p_EventCombiner_dispatch)),  /* fxn */
        ((xdc_UArg)0),  /* irp */
        ((void*)0),  /* hookEnv */
    },
    {/* instance#1 */
        0,
        (xdc_Bits16)0x100,  /* disableMask */
        (xdc_Bits16)0x100,  /* restoreMask */
        ((xdc_UArg)(0x1)),  /* arg */
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c64p_EventCombiner_dispatch)),  /* fxn */
        ((xdc_UArg)0),  /* irp */
        ((void*)0),  /* hookEnv */
    },
    {/* instance#2 */
        0,
        (xdc_Bits16)0x200,  /* disableMask */
        (xdc_Bits16)0x200,  /* restoreMask */
        ((xdc_UArg)(0x2)),  /* arg */
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c64p_EventCombiner_dispatch)),  /* fxn */
        ((xdc_UArg)0),  /* irp */
        ((void*)0),  /* hookEnv */
    },
    {/* instance#3 */
        0,
        (xdc_Bits16)0x400,  /* disableMask */
        (xdc_Bits16)0x400,  /* restoreMask */
        ((xdc_UArg)(0x3)),  /* arg */
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_c64p_EventCombiner_dispatch)),  /* fxn */
        ((xdc_UArg)0),  /* irp */
        ((void*)0),  /* hookEnv */
    },
    {/* instance#4 */
        0,
        (xdc_Bits16)0x4000,  /* disableMask */
        (xdc_Bits16)0x4000,  /* restoreMask */
        ((xdc_UArg)((void*)(ti_sysbios_timers_rti_Timer_Handle)&ti_sysbios_timers_rti_Timer_Object__table__V[0])),  /* arg */
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_timers_rti_Timer_periodicStub__E)),  /* fxn */
        ((xdc_UArg)0),  /* irp */
        ((void*)0),  /* hookEnv */
    },
};

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_ti_sysbios_family_c64p_Hwi_Module__state__V"
#endif
#if defined(__llvm__) && defined(__ti__)
ti_sysbios_family_c64p_Hwi_Module_State__ ti_sysbios_family_c64p_Hwi_Module__state__V __attribute__ ((section(".data:ti_sysbios_family_c64p_Hwi_Module__state__V")));
#elif defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __TI_COMPILER_VERSION__
ti_sysbios_family_c64p_Hwi_Module_State__ ti_sysbios_family_c64p_Hwi_Module__state__V __attribute__ ((section(".data_ti_sysbios_family_c64p_Hwi_Module__state__V")));
#endif
#endif
ti_sysbios_family_c64p_Hwi_Module_State__ ti_sysbios_family_c64p_Hwi_Module__state__V = {
    {
        (xdc_Char)(-0x0 - 1),  /* [0] */
        (xdc_Char)(-0x0 - 1),  /* [1] */
        (xdc_Char)(-0x0 - 1),  /* [2] */
        (xdc_Char)(-0x0 - 1),  /* [3] */
        (xdc_Char)(-0x0 - 1),  /* [4] */
        (xdc_Char)(-0x0 - 1),  /* [5] */
        (xdc_Char)(-0x0 - 1),  /* [6] */
        (xdc_Char)0x0,  /* [7] */
        (xdc_Char)0x1,  /* [8] */
        (xdc_Char)0x2,  /* [9] */
        (xdc_Char)0x3,  /* [10] */
        (xdc_Char)(-0x0 - 1),  /* [11] */
        (xdc_Char)(-0x0 - 1),  /* [12] */
        (xdc_Char)(-0x0 - 1),  /* [13] */
        (xdc_Char)0x4b,  /* [14] */
        (xdc_Char)(-0x0 - 1),  /* [15] */
    },  /* intEvents */
    (xdc_Bits16)0x4783,  /* ierMask */
    (xdc_Int)0x0,  /* intNum */
    ((xdc_Char*)0),  /* taskSP */
    ((xdc_Char*)0),  /* isrStack */
    ((xdc_Ptr)((void*)&ti_sysbios_family_c64p_Hwi0)),  /* vectorTableBase */
    ((xdc_Ptr)((void*)&__TI_STATIC_BASE)),  /* bss */
    (xdc_Int)0x0,  /* scw */
    {
        0,  /* [0] */
        0,  /* [1] */
        0,  /* [2] */
        0,  /* [3] */
        0,  /* [4] */
        0,  /* [5] */
        0,  /* [6] */
        (ti_sysbios_family_c64p_Hwi_Handle)&ti_sysbios_family_c64p_Hwi_Object__table__V[0],  /* [7] */
        (ti_sysbios_family_c64p_Hwi_Handle)&ti_sysbios_family_c64p_Hwi_Object__table__V[1],  /* [8] */
        (ti_sysbios_family_c64p_Hwi_Handle)&ti_sysbios_family_c64p_Hwi_Object__table__V[2],  /* [9] */
        (ti_sysbios_family_c64p_Hwi_Handle)&ti_sysbios_family_c64p_Hwi_Object__table__V[3],  /* [10] */
        0,  /* [11] */
        0,  /* [12] */
        0,  /* [13] */
        (ti_sysbios_family_c64p_Hwi_Handle)&ti_sysbios_family_c64p_Hwi_Object__table__V[4],  /* [14] */
        0,  /* [15] */
    },  /* dispatchTable */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_family_c64p_Hwi_Module__diagsEnabled__C, ".const:ti_sysbios_family_c64p_Hwi_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_family_c64p_Hwi_Module__diagsEnabled ti_sysbios_family_c64p_Hwi_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_family_c64p_Hwi_Module__diagsIncluded__C, ".const:ti_sysbios_family_c64p_Hwi_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_family_c64p_Hwi_Module__diagsIncluded ti_sysbios_family_c64p_Hwi_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_family_c64p_Hwi_Module__diagsMask__C, ".const:ti_sysbios_family_c64p_Hwi_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_family_c64p_Hwi_Module__diagsMask ti_sysbios_family_c64p_Hwi_Module__diagsMask__C = ((CT__ti_sysbios_family_c64p_Hwi_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_family_c64p_Hwi_Module__gateObj__C, ".const:ti_sysbios_family_c64p_Hwi_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_family_c64p_Hwi_Module__gateObj ti_sysbios_family_c64p_Hwi_Module__gateObj__C = ((CT__ti_sysbios_family_c64p_Hwi_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_family_c64p_Hwi_Module__gatePrms__C, ".const:ti_sysbios_family_c64p_Hwi_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_family_c64p_Hwi_Module__gatePrms ti_sysbios_family_c64p_Hwi_Module__gatePrms__C = ((CT__ti_sysbios_family_c64p_Hwi_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_family_c64p_Hwi_Module__id__C, ".const:ti_sysbios_family_c64p_Hwi_Module__id__C");
__FAR__ const CT__ti_sysbios_family_c64p_Hwi_Module__id ti_sysbios_family_c64p_Hwi_Module__id__C = (xdc_Bits16)0x8018;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_family_c64p_Hwi_Module__loggerDefined__C, ".const:ti_sysbios_family_c64p_Hwi_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_family_c64p_Hwi_Module__loggerDefined ti_sysbios_family_c64p_Hwi_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_family_c64p_Hwi_Module__loggerObj__C, ".const:ti_sysbios_family_c64p_Hwi_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_family_c64p_Hwi_Module__loggerObj ti_sysbios_family_c64p_Hwi_Module__loggerObj__C = ((CT__ti_sysbios_family_c64p_Hwi_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_family_c64p_Hwi_Module__loggerFxn0__C, ".const:ti_sysbios_family_c64p_Hwi_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_family_c64p_Hwi_Module__loggerFxn0 ti_sysbios_family_c64p_Hwi_Module__loggerFxn0__C = ((CT__ti_sysbios_family_c64p_Hwi_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_family_c64p_Hwi_Module__loggerFxn1__C, ".const:ti_sysbios_family_c64p_Hwi_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_family_c64p_Hwi_Module__loggerFxn1 ti_sysbios_family_c64p_Hwi_Module__loggerFxn1__C = ((CT__ti_sysbios_family_c64p_Hwi_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_family_c64p_Hwi_Module__loggerFxn2__C, ".const:ti_sysbios_family_c64p_Hwi_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_family_c64p_Hwi_Module__loggerFxn2 ti_sysbios_family_c64p_Hwi_Module__loggerFxn2__C = ((CT__ti_sysbios_family_c64p_Hwi_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_family_c64p_Hwi_Module__loggerFxn4__C, ".const:ti_sysbios_family_c64p_Hwi_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_family_c64p_Hwi_Module__loggerFxn4 ti_sysbios_family_c64p_Hwi_Module__loggerFxn4__C = ((CT__ti_sysbios_family_c64p_Hwi_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_family_c64p_Hwi_Module__loggerFxn8__C, ".const:ti_sysbios_family_c64p_Hwi_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_family_c64p_Hwi_Module__loggerFxn8 ti_sysbios_family_c64p_Hwi_Module__loggerFxn8__C = ((CT__ti_sysbios_family_c64p_Hwi_Module__loggerFxn8)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_family_c64p_Hwi_Object__count__C, ".const:ti_sysbios_family_c64p_Hwi_Object__count__C");
__FAR__ const CT__ti_sysbios_family_c64p_Hwi_Object__count ti_sysbios_family_c64p_Hwi_Object__count__C = 5;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_family_c64p_Hwi_Object__heap__C, ".const:ti_sysbios_family_c64p_Hwi_Object__heap__C");
__FAR__ const CT__ti_sysbios_family_c64p_Hwi_Object__heap ti_sysbios_family_c64p_Hwi_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_family_c64p_Hwi_Object__sizeof__C, ".const:ti_sysbios_family_c64p_Hwi_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_family_c64p_Hwi_Object__sizeof ti_sysbios_family_c64p_Hwi_Object__sizeof__C = sizeof(ti_sysbios_family_c64p_Hwi_Object__);

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_family_c64p_Hwi_Object__table__C, ".const:ti_sysbios_family_c64p_Hwi_Object__table__C");
__FAR__ const CT__ti_sysbios_family_c64p_Hwi_Object__table ti_sysbios_family_c64p_Hwi_Object__table__C = ti_sysbios_family_c64p_Hwi_Object__table__V;

/* dispatcherAutoNestingSupport__C */
#pragma DATA_SECTION(ti_sysbios_family_c64p_Hwi_dispatcherAutoNestingSupport__C, ".const:ti_sysbios_family_c64p_Hwi_dispatcherAutoNestingSupport__C");
__FAR__ const CT__ti_sysbios_family_c64p_Hwi_dispatcherAutoNestingSupport ti_sysbios_family_c64p_Hwi_dispatcherAutoNestingSupport__C = 1;

/* dispatcherSwiSupport__C */
#pragma DATA_SECTION(ti_sysbios_family_c64p_Hwi_dispatcherSwiSupport__C, ".const:ti_sysbios_family_c64p_Hwi_dispatcherSwiSupport__C");
__FAR__ const CT__ti_sysbios_family_c64p_Hwi_dispatcherSwiSupport ti_sysbios_family_c64p_Hwi_dispatcherSwiSupport__C = 1;

/* dispatcherTaskSupport__C */
#pragma DATA_SECTION(ti_sysbios_family_c64p_Hwi_dispatcherTaskSupport__C, ".const:ti_sysbios_family_c64p_Hwi_dispatcherTaskSupport__C");
__FAR__ const CT__ti_sysbios_family_c64p_Hwi_dispatcherTaskSupport ti_sysbios_family_c64p_Hwi_dispatcherTaskSupport__C = 1;

/* dispatcherIrpTrackingSupport__C */
#pragma DATA_SECTION(ti_sysbios_family_c64p_Hwi_dispatcherIrpTrackingSupport__C, ".const:ti_sysbios_family_c64p_Hwi_dispatcherIrpTrackingSupport__C");
__FAR__ const CT__ti_sysbios_family_c64p_Hwi_dispatcherIrpTrackingSupport ti_sysbios_family_c64p_Hwi_dispatcherIrpTrackingSupport__C = 1;

/* INTRMUX1Address__C */
#pragma DATA_SECTION(ti_sysbios_family_c64p_Hwi_INTRMUX1Address__C, ".const:ti_sysbios_family_c64p_Hwi_INTRMUX1Address__C");
__FAR__ const CT__ti_sysbios_family_c64p_Hwi_INTRMUX1Address ti_sysbios_family_c64p_Hwi_INTRMUX1Address__C = ((CT__ti_sysbios_family_c64p_Hwi_INTRMUX1Address)(0x1800104));

/* E_alreadyDefined__C */
#pragma DATA_SECTION(ti_sysbios_family_c64p_Hwi_E_alreadyDefined__C, ".const:ti_sysbios_family_c64p_Hwi_E_alreadyDefined__C");
__FAR__ const CT__ti_sysbios_family_c64p_Hwi_E_alreadyDefined ti_sysbios_family_c64p_Hwi_E_alreadyDefined__C = (((xdc_runtime_Error_Id)3892) << 16 | 0);

/* E_handleNotFound__C */
#pragma DATA_SECTION(ti_sysbios_family_c64p_Hwi_E_handleNotFound__C, ".const:ti_sysbios_family_c64p_Hwi_E_handleNotFound__C");
__FAR__ const CT__ti_sysbios_family_c64p_Hwi_E_handleNotFound ti_sysbios_family_c64p_Hwi_E_handleNotFound__C = (((xdc_runtime_Error_Id)3940) << 16 | 0);

/* E_allocSCFailed__C */
#pragma DATA_SECTION(ti_sysbios_family_c64p_Hwi_E_allocSCFailed__C, ".const:ti_sysbios_family_c64p_Hwi_E_allocSCFailed__C");
__FAR__ const CT__ti_sysbios_family_c64p_Hwi_E_allocSCFailed ti_sysbios_family_c64p_Hwi_E_allocSCFailed__C = (((xdc_runtime_Error_Id)3985) << 16 | 0);

/* E_registerSCFailed__C */
#pragma DATA_SECTION(ti_sysbios_family_c64p_Hwi_E_registerSCFailed__C, ".const:ti_sysbios_family_c64p_Hwi_E_registerSCFailed__C");
__FAR__ const CT__ti_sysbios_family_c64p_Hwi_E_registerSCFailed ti_sysbios_family_c64p_Hwi_E_registerSCFailed__C = (((xdc_runtime_Error_Id)4030) << 16 | 0);

/* E_invalidIntNum__C */
#pragma DATA_SECTION(ti_sysbios_family_c64p_Hwi_E_invalidIntNum__C, ".const:ti_sysbios_family_c64p_Hwi_E_invalidIntNum__C");
__FAR__ const CT__ti_sysbios_family_c64p_Hwi_E_invalidIntNum ti_sysbios_family_c64p_Hwi_E_invalidIntNum__C = (((xdc_runtime_Error_Id)4081) << 16 | 0);

/* LM_begin__C */
#pragma DATA_SECTION(ti_sysbios_family_c64p_Hwi_LM_begin__C, ".const:ti_sysbios_family_c64p_Hwi_LM_begin__C");
__FAR__ const CT__ti_sysbios_family_c64p_Hwi_LM_begin ti_sysbios_family_c64p_Hwi_LM_begin__C = (((xdc_runtime_Log_Event)5169) << 16 | 768);

/* LD_end__C */
#pragma DATA_SECTION(ti_sysbios_family_c64p_Hwi_LD_end__C, ".const:ti_sysbios_family_c64p_Hwi_LD_end__C");
__FAR__ const CT__ti_sysbios_family_c64p_Hwi_LD_end ti_sysbios_family_c64p_Hwi_LD_end__C = (((xdc_runtime_Log_Event)5239) << 16 | 512);

/* enableException__C */
#pragma DATA_SECTION(ti_sysbios_family_c64p_Hwi_enableException__C, ".const:ti_sysbios_family_c64p_Hwi_enableException__C");
__FAR__ const CT__ti_sysbios_family_c64p_Hwi_enableException ti_sysbios_family_c64p_Hwi_enableException__C = 1;

/* swiDisable__C */
#pragma DATA_SECTION(ti_sysbios_family_c64p_Hwi_swiDisable__C, ".const:ti_sysbios_family_c64p_Hwi_swiDisable__C");
__FAR__ const CT__ti_sysbios_family_c64p_Hwi_swiDisable ti_sysbios_family_c64p_Hwi_swiDisable__C = ((CT__ti_sysbios_family_c64p_Hwi_swiDisable)((xdc_Fxn)ti_sysbios_knl_Swi_disable__E));

/* swiRestoreHwi__C */
#pragma DATA_SECTION(ti_sysbios_family_c64p_Hwi_swiRestoreHwi__C, ".const:ti_sysbios_family_c64p_Hwi_swiRestoreHwi__C");
__FAR__ const CT__ti_sysbios_family_c64p_Hwi_swiRestoreHwi ti_sysbios_family_c64p_Hwi_swiRestoreHwi__C = ((CT__ti_sysbios_family_c64p_Hwi_swiRestoreHwi)((xdc_Fxn)ti_sysbios_knl_Swi_restoreHwi__E));

/* taskDisable__C */
#pragma DATA_SECTION(ti_sysbios_family_c64p_Hwi_taskDisable__C, ".const:ti_sysbios_family_c64p_Hwi_taskDisable__C");
__FAR__ const CT__ti_sysbios_family_c64p_Hwi_taskDisable ti_sysbios_family_c64p_Hwi_taskDisable__C = ((CT__ti_sysbios_family_c64p_Hwi_taskDisable)((xdc_Fxn)ti_sysbios_knl_Task_disable__E));

/* taskRestoreHwi__C */
#pragma DATA_SECTION(ti_sysbios_family_c64p_Hwi_taskRestoreHwi__C, ".const:ti_sysbios_family_c64p_Hwi_taskRestoreHwi__C");
__FAR__ const CT__ti_sysbios_family_c64p_Hwi_taskRestoreHwi ti_sysbios_family_c64p_Hwi_taskRestoreHwi__C = ((CT__ti_sysbios_family_c64p_Hwi_taskRestoreHwi)((xdc_Fxn)ti_sysbios_knl_Task_restoreHwi__E));

/* hooks__C */
#pragma DATA_SECTION(ti_sysbios_family_c64p_Hwi_hooks__C, ".const:ti_sysbios_family_c64p_Hwi_hooks__C");
__FAR__ const CT__ti_sysbios_family_c64p_Hwi_hooks ti_sysbios_family_c64p_Hwi_hooks__C = {0, 0};


/*
 * ======== ti.sysbios.family.c64p.TimestampProvider INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_family_c64p_TimestampProvider_Module__diagsEnabled__C, ".const:ti_sysbios_family_c64p_TimestampProvider_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_family_c64p_TimestampProvider_Module__diagsEnabled ti_sysbios_family_c64p_TimestampProvider_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_family_c64p_TimestampProvider_Module__diagsIncluded__C, ".const:ti_sysbios_family_c64p_TimestampProvider_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_family_c64p_TimestampProvider_Module__diagsIncluded ti_sysbios_family_c64p_TimestampProvider_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_family_c64p_TimestampProvider_Module__diagsMask__C, ".const:ti_sysbios_family_c64p_TimestampProvider_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_family_c64p_TimestampProvider_Module__diagsMask ti_sysbios_family_c64p_TimestampProvider_Module__diagsMask__C = ((CT__ti_sysbios_family_c64p_TimestampProvider_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_family_c64p_TimestampProvider_Module__gateObj__C, ".const:ti_sysbios_family_c64p_TimestampProvider_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_family_c64p_TimestampProvider_Module__gateObj ti_sysbios_family_c64p_TimestampProvider_Module__gateObj__C = ((CT__ti_sysbios_family_c64p_TimestampProvider_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_family_c64p_TimestampProvider_Module__gatePrms__C, ".const:ti_sysbios_family_c64p_TimestampProvider_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_family_c64p_TimestampProvider_Module__gatePrms ti_sysbios_family_c64p_TimestampProvider_Module__gatePrms__C = ((CT__ti_sysbios_family_c64p_TimestampProvider_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_family_c64p_TimestampProvider_Module__id__C, ".const:ti_sysbios_family_c64p_TimestampProvider_Module__id__C");
__FAR__ const CT__ti_sysbios_family_c64p_TimestampProvider_Module__id ti_sysbios_family_c64p_TimestampProvider_Module__id__C = (xdc_Bits16)0x8019;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_family_c64p_TimestampProvider_Module__loggerDefined__C, ".const:ti_sysbios_family_c64p_TimestampProvider_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_family_c64p_TimestampProvider_Module__loggerDefined ti_sysbios_family_c64p_TimestampProvider_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_family_c64p_TimestampProvider_Module__loggerObj__C, ".const:ti_sysbios_family_c64p_TimestampProvider_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_family_c64p_TimestampProvider_Module__loggerObj ti_sysbios_family_c64p_TimestampProvider_Module__loggerObj__C = ((CT__ti_sysbios_family_c64p_TimestampProvider_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_family_c64p_TimestampProvider_Module__loggerFxn0__C, ".const:ti_sysbios_family_c64p_TimestampProvider_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_family_c64p_TimestampProvider_Module__loggerFxn0 ti_sysbios_family_c64p_TimestampProvider_Module__loggerFxn0__C = ((CT__ti_sysbios_family_c64p_TimestampProvider_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_family_c64p_TimestampProvider_Module__loggerFxn1__C, ".const:ti_sysbios_family_c64p_TimestampProvider_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_family_c64p_TimestampProvider_Module__loggerFxn1 ti_sysbios_family_c64p_TimestampProvider_Module__loggerFxn1__C = ((CT__ti_sysbios_family_c64p_TimestampProvider_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_family_c64p_TimestampProvider_Module__loggerFxn2__C, ".const:ti_sysbios_family_c64p_TimestampProvider_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_family_c64p_TimestampProvider_Module__loggerFxn2 ti_sysbios_family_c64p_TimestampProvider_Module__loggerFxn2__C = ((CT__ti_sysbios_family_c64p_TimestampProvider_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_family_c64p_TimestampProvider_Module__loggerFxn4__C, ".const:ti_sysbios_family_c64p_TimestampProvider_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_family_c64p_TimestampProvider_Module__loggerFxn4 ti_sysbios_family_c64p_TimestampProvider_Module__loggerFxn4__C = ((CT__ti_sysbios_family_c64p_TimestampProvider_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_family_c64p_TimestampProvider_Module__loggerFxn8__C, ".const:ti_sysbios_family_c64p_TimestampProvider_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_family_c64p_TimestampProvider_Module__loggerFxn8 ti_sysbios_family_c64p_TimestampProvider_Module__loggerFxn8__C = ((CT__ti_sysbios_family_c64p_TimestampProvider_Module__loggerFxn8)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_family_c64p_TimestampProvider_Object__count__C, ".const:ti_sysbios_family_c64p_TimestampProvider_Object__count__C");
__FAR__ const CT__ti_sysbios_family_c64p_TimestampProvider_Object__count ti_sysbios_family_c64p_TimestampProvider_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_family_c64p_TimestampProvider_Object__heap__C, ".const:ti_sysbios_family_c64p_TimestampProvider_Object__heap__C");
__FAR__ const CT__ti_sysbios_family_c64p_TimestampProvider_Object__heap ti_sysbios_family_c64p_TimestampProvider_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_family_c64p_TimestampProvider_Object__sizeof__C, ".const:ti_sysbios_family_c64p_TimestampProvider_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_family_c64p_TimestampProvider_Object__sizeof ti_sysbios_family_c64p_TimestampProvider_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_family_c64p_TimestampProvider_Object__table__C, ".const:ti_sysbios_family_c64p_TimestampProvider_Object__table__C");
__FAR__ const CT__ti_sysbios_family_c64p_TimestampProvider_Object__table ti_sysbios_family_c64p_TimestampProvider_Object__table__C = 0;


/*
 * ======== ti.sysbios.gates.GateHwi INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_gates_GateHwi_Object__DESC__C;

/* Object__PARAMS__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Object__PARAMS__C, ".const:ti_sysbios_gates_GateHwi_Object__PARAMS__C");
__FAR__ const ti_sysbios_gates_GateHwi_Params ti_sysbios_gates_GateHwi_Object__PARAMS__C = {
    sizeof (ti_sysbios_gates_GateHwi_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_gates_GateHwi_Object__PARAMS__C.__iprms, /* instance */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_gates_GateHwi_Module__ ti_sysbios_gates_GateHwi_Module__root__V = {
    {&ti_sysbios_gates_GateHwi_Module__root__V.link,  /* link.next */
    &ti_sysbios_gates_GateHwi_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_sysbios_gates_GateHwi_Object__ ti_sysbios_gates_GateHwi_Object__table__V[1] = {
    {/* instance#0 */
        &ti_sysbios_gates_GateHwi_Module__FXNS__C,
    },
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__diagsEnabled__C, ".const:ti_sysbios_gates_GateHwi_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__diagsEnabled ti_sysbios_gates_GateHwi_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__diagsIncluded__C, ".const:ti_sysbios_gates_GateHwi_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__diagsIncluded ti_sysbios_gates_GateHwi_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__diagsMask__C, ".const:ti_sysbios_gates_GateHwi_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__diagsMask ti_sysbios_gates_GateHwi_Module__diagsMask__C = ((CT__ti_sysbios_gates_GateHwi_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__gateObj__C, ".const:ti_sysbios_gates_GateHwi_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__gateObj ti_sysbios_gates_GateHwi_Module__gateObj__C = ((CT__ti_sysbios_gates_GateHwi_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__gatePrms__C, ".const:ti_sysbios_gates_GateHwi_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__gatePrms ti_sysbios_gates_GateHwi_Module__gatePrms__C = ((CT__ti_sysbios_gates_GateHwi_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__id__C, ".const:ti_sysbios_gates_GateHwi_Module__id__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__id ti_sysbios_gates_GateHwi_Module__id__C = (xdc_Bits16)0x8033;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__loggerDefined__C, ".const:ti_sysbios_gates_GateHwi_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__loggerDefined ti_sysbios_gates_GateHwi_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__loggerObj__C, ".const:ti_sysbios_gates_GateHwi_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__loggerObj ti_sysbios_gates_GateHwi_Module__loggerObj__C = ((CT__ti_sysbios_gates_GateHwi_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__loggerFxn0__C, ".const:ti_sysbios_gates_GateHwi_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__loggerFxn0 ti_sysbios_gates_GateHwi_Module__loggerFxn0__C = ((CT__ti_sysbios_gates_GateHwi_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__loggerFxn1__C, ".const:ti_sysbios_gates_GateHwi_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__loggerFxn1 ti_sysbios_gates_GateHwi_Module__loggerFxn1__C = ((CT__ti_sysbios_gates_GateHwi_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__loggerFxn2__C, ".const:ti_sysbios_gates_GateHwi_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__loggerFxn2 ti_sysbios_gates_GateHwi_Module__loggerFxn2__C = ((CT__ti_sysbios_gates_GateHwi_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__loggerFxn4__C, ".const:ti_sysbios_gates_GateHwi_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__loggerFxn4 ti_sysbios_gates_GateHwi_Module__loggerFxn4__C = ((CT__ti_sysbios_gates_GateHwi_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__loggerFxn8__C, ".const:ti_sysbios_gates_GateHwi_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__loggerFxn8 ti_sysbios_gates_GateHwi_Module__loggerFxn8__C = ((CT__ti_sysbios_gates_GateHwi_Module__loggerFxn8)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Object__count__C, ".const:ti_sysbios_gates_GateHwi_Object__count__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Object__count ti_sysbios_gates_GateHwi_Object__count__C = 1;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Object__heap__C, ".const:ti_sysbios_gates_GateHwi_Object__heap__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Object__heap ti_sysbios_gates_GateHwi_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Object__sizeof__C, ".const:ti_sysbios_gates_GateHwi_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Object__sizeof ti_sysbios_gates_GateHwi_Object__sizeof__C = sizeof(ti_sysbios_gates_GateHwi_Object__);

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Object__table__C, ".const:ti_sysbios_gates_GateHwi_Object__table__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Object__table ti_sysbios_gates_GateHwi_Object__table__C = ti_sysbios_gates_GateHwi_Object__table__V;


/*
 * ======== ti.sysbios.gates.GateMutex INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_gates_GateMutex_Object__DESC__C;

/* Object__PARAMS__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Object__PARAMS__C, ".const:ti_sysbios_gates_GateMutex_Object__PARAMS__C");
__FAR__ const ti_sysbios_gates_GateMutex_Params ti_sysbios_gates_GateMutex_Object__PARAMS__C = {
    sizeof (ti_sysbios_gates_GateMutex_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_gates_GateMutex_Object__PARAMS__C.__iprms, /* instance */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_gates_GateMutex_Module__ ti_sysbios_gates_GateMutex_Module__root__V = {
    {&ti_sysbios_gates_GateMutex_Module__root__V.link,  /* link.next */
    &ti_sysbios_gates_GateMutex_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_sysbios_gates_GateMutex_Object__ ti_sysbios_gates_GateMutex_Object__table__V[2] = {
    {/* instance#0 */
        &ti_sysbios_gates_GateMutex_Module__FXNS__C,
        0,  /* owner */
        {
            0,  /* event */
            (xdc_UInt)0x1,  /* eventId */
            ti_sysbios_knl_Semaphore_Mode_COUNTING,  /* mode */
            (xdc_UInt16)0x1,  /* count */
            {
                {
                    ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_gates_GateMutex_Object__table__V[0].Object_field_sem.Object_field_pendQ.elem)),  /* next */
                    ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_gates_GateMutex_Object__table__V[0].Object_field_sem.Object_field_pendQ.elem)),  /* prev */
                },  /* elem */
            },  /* Object_field_pendQ */
        },  /* Object_field_sem */
    },
    {/* instance#1 */
        &ti_sysbios_gates_GateMutex_Module__FXNS__C,
        0,  /* owner */
        {
            0,  /* event */
            (xdc_UInt)0x1,  /* eventId */
            ti_sysbios_knl_Semaphore_Mode_COUNTING,  /* mode */
            (xdc_UInt16)0x1,  /* count */
            {
                {
                    ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_gates_GateMutex_Object__table__V[1].Object_field_sem.Object_field_pendQ.elem)),  /* next */
                    ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_gates_GateMutex_Object__table__V[1].Object_field_sem.Object_field_pendQ.elem)),  /* prev */
                },  /* elem */
            },  /* Object_field_pendQ */
        },  /* Object_field_sem */
    },
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__diagsEnabled__C, ".const:ti_sysbios_gates_GateMutex_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__diagsEnabled ti_sysbios_gates_GateMutex_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__diagsIncluded__C, ".const:ti_sysbios_gates_GateMutex_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__diagsIncluded ti_sysbios_gates_GateMutex_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__diagsMask__C, ".const:ti_sysbios_gates_GateMutex_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__diagsMask ti_sysbios_gates_GateMutex_Module__diagsMask__C = ((CT__ti_sysbios_gates_GateMutex_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__gateObj__C, ".const:ti_sysbios_gates_GateMutex_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__gateObj ti_sysbios_gates_GateMutex_Module__gateObj__C = ((CT__ti_sysbios_gates_GateMutex_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__gatePrms__C, ".const:ti_sysbios_gates_GateMutex_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__gatePrms ti_sysbios_gates_GateMutex_Module__gatePrms__C = ((CT__ti_sysbios_gates_GateMutex_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__id__C, ".const:ti_sysbios_gates_GateMutex_Module__id__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__id ti_sysbios_gates_GateMutex_Module__id__C = (xdc_Bits16)0x8034;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__loggerDefined__C, ".const:ti_sysbios_gates_GateMutex_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__loggerDefined ti_sysbios_gates_GateMutex_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__loggerObj__C, ".const:ti_sysbios_gates_GateMutex_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__loggerObj ti_sysbios_gates_GateMutex_Module__loggerObj__C = ((CT__ti_sysbios_gates_GateMutex_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__loggerFxn0__C, ".const:ti_sysbios_gates_GateMutex_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__loggerFxn0 ti_sysbios_gates_GateMutex_Module__loggerFxn0__C = ((CT__ti_sysbios_gates_GateMutex_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__loggerFxn1__C, ".const:ti_sysbios_gates_GateMutex_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__loggerFxn1 ti_sysbios_gates_GateMutex_Module__loggerFxn1__C = ((CT__ti_sysbios_gates_GateMutex_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__loggerFxn2__C, ".const:ti_sysbios_gates_GateMutex_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__loggerFxn2 ti_sysbios_gates_GateMutex_Module__loggerFxn2__C = ((CT__ti_sysbios_gates_GateMutex_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__loggerFxn4__C, ".const:ti_sysbios_gates_GateMutex_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__loggerFxn4 ti_sysbios_gates_GateMutex_Module__loggerFxn4__C = ((CT__ti_sysbios_gates_GateMutex_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__loggerFxn8__C, ".const:ti_sysbios_gates_GateMutex_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__loggerFxn8 ti_sysbios_gates_GateMutex_Module__loggerFxn8__C = ((CT__ti_sysbios_gates_GateMutex_Module__loggerFxn8)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Object__count__C, ".const:ti_sysbios_gates_GateMutex_Object__count__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Object__count ti_sysbios_gates_GateMutex_Object__count__C = 2;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Object__heap__C, ".const:ti_sysbios_gates_GateMutex_Object__heap__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Object__heap ti_sysbios_gates_GateMutex_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Object__sizeof__C, ".const:ti_sysbios_gates_GateMutex_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Object__sizeof ti_sysbios_gates_GateMutex_Object__sizeof__C = sizeof(ti_sysbios_gates_GateMutex_Object__);

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Object__table__C, ".const:ti_sysbios_gates_GateMutex_Object__table__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Object__table ti_sysbios_gates_GateMutex_Object__table__C = ti_sysbios_gates_GateMutex_Object__table__V;

/* A_badContext__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_A_badContext__C, ".const:ti_sysbios_gates_GateMutex_A_badContext__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_A_badContext ti_sysbios_gates_GateMutex_A_badContext__C = (((xdc_runtime_Assert_Id)3194) << 16 | 16);


/*
 * ======== ti.sysbios.hal.Hwi INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_hal_Hwi_Object__DESC__C;

/* Object__PARAMS__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Object__PARAMS__C, ".const:ti_sysbios_hal_Hwi_Object__PARAMS__C");
__FAR__ const ti_sysbios_hal_Hwi_Params ti_sysbios_hal_Hwi_Object__PARAMS__C = {
    sizeof (ti_sysbios_hal_Hwi_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_hal_Hwi_Object__PARAMS__C.__iprms, /* instance */
    ti_sysbios_interfaces_IHwi_MaskingOption_SELF,  /* maskSetting */
    ((xdc_UArg)(0x0)),  /* arg */
    1,  /* enableInt */
    (xdc_Int)(-0x0 - 1),  /* eventId */
    (xdc_Int)(-0x0 - 1),  /* priority */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_hal_Hwi_Module__ ti_sysbios_hal_Hwi_Module__root__V = {
    {&ti_sysbios_hal_Hwi_Module__root__V.link,  /* link.next */
    &ti_sysbios_hal_Hwi_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_sysbios_hal_Hwi_Object__ ti_sysbios_hal_Hwi_Object__table__V[1] = {
    {/* instance#0 */
        0,
        (ti_sysbios_hal_Hwi_HwiProxy_Handle)&ti_sysbios_family_c64p_Hwi_Object__table__V[4],  /* pi */
    },
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__diagsEnabled__C, ".const:ti_sysbios_hal_Hwi_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__diagsEnabled ti_sysbios_hal_Hwi_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__diagsIncluded__C, ".const:ti_sysbios_hal_Hwi_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__diagsIncluded ti_sysbios_hal_Hwi_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__diagsMask__C, ".const:ti_sysbios_hal_Hwi_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__diagsMask ti_sysbios_hal_Hwi_Module__diagsMask__C = ((CT__ti_sysbios_hal_Hwi_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__gateObj__C, ".const:ti_sysbios_hal_Hwi_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__gateObj ti_sysbios_hal_Hwi_Module__gateObj__C = ((CT__ti_sysbios_hal_Hwi_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__gatePrms__C, ".const:ti_sysbios_hal_Hwi_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__gatePrms ti_sysbios_hal_Hwi_Module__gatePrms__C = ((CT__ti_sysbios_hal_Hwi_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__id__C, ".const:ti_sysbios_hal_Hwi_Module__id__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__id ti_sysbios_hal_Hwi_Module__id__C = (xdc_Bits16)0x802e;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__loggerDefined__C, ".const:ti_sysbios_hal_Hwi_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__loggerDefined ti_sysbios_hal_Hwi_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__loggerObj__C, ".const:ti_sysbios_hal_Hwi_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__loggerObj ti_sysbios_hal_Hwi_Module__loggerObj__C = ((CT__ti_sysbios_hal_Hwi_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__loggerFxn0__C, ".const:ti_sysbios_hal_Hwi_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__loggerFxn0 ti_sysbios_hal_Hwi_Module__loggerFxn0__C = ((CT__ti_sysbios_hal_Hwi_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__loggerFxn1__C, ".const:ti_sysbios_hal_Hwi_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__loggerFxn1 ti_sysbios_hal_Hwi_Module__loggerFxn1__C = ((CT__ti_sysbios_hal_Hwi_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__loggerFxn2__C, ".const:ti_sysbios_hal_Hwi_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__loggerFxn2 ti_sysbios_hal_Hwi_Module__loggerFxn2__C = ((CT__ti_sysbios_hal_Hwi_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__loggerFxn4__C, ".const:ti_sysbios_hal_Hwi_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__loggerFxn4 ti_sysbios_hal_Hwi_Module__loggerFxn4__C = ((CT__ti_sysbios_hal_Hwi_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__loggerFxn8__C, ".const:ti_sysbios_hal_Hwi_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__loggerFxn8 ti_sysbios_hal_Hwi_Module__loggerFxn8__C = ((CT__ti_sysbios_hal_Hwi_Module__loggerFxn8)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Object__count__C, ".const:ti_sysbios_hal_Hwi_Object__count__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Object__count ti_sysbios_hal_Hwi_Object__count__C = 1;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Object__heap__C, ".const:ti_sysbios_hal_Hwi_Object__heap__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Object__heap ti_sysbios_hal_Hwi_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Object__sizeof__C, ".const:ti_sysbios_hal_Hwi_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Object__sizeof ti_sysbios_hal_Hwi_Object__sizeof__C = sizeof(ti_sysbios_hal_Hwi_Object__);

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Object__table__C, ".const:ti_sysbios_hal_Hwi_Object__table__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Object__table ti_sysbios_hal_Hwi_Object__table__C = ti_sysbios_hal_Hwi_Object__table__V;

/* dispatcherAutoNestingSupport__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_dispatcherAutoNestingSupport__C, ".const:ti_sysbios_hal_Hwi_dispatcherAutoNestingSupport__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_dispatcherAutoNestingSupport ti_sysbios_hal_Hwi_dispatcherAutoNestingSupport__C = 1;

/* dispatcherSwiSupport__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_dispatcherSwiSupport__C, ".const:ti_sysbios_hal_Hwi_dispatcherSwiSupport__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_dispatcherSwiSupport ti_sysbios_hal_Hwi_dispatcherSwiSupport__C = 1;

/* dispatcherTaskSupport__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_dispatcherTaskSupport__C, ".const:ti_sysbios_hal_Hwi_dispatcherTaskSupport__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_dispatcherTaskSupport ti_sysbios_hal_Hwi_dispatcherTaskSupport__C = 1;

/* dispatcherIrpTrackingSupport__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_dispatcherIrpTrackingSupport__C, ".const:ti_sysbios_hal_Hwi_dispatcherIrpTrackingSupport__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_dispatcherIrpTrackingSupport ti_sysbios_hal_Hwi_dispatcherIrpTrackingSupport__C = 1;

/* E_stackOverflow__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_E_stackOverflow__C, ".const:ti_sysbios_hal_Hwi_E_stackOverflow__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_E_stackOverflow ti_sysbios_hal_Hwi_E_stackOverflow__C = (((xdc_runtime_Error_Id)4729) << 16 | 0);


/*
 * ======== ti.sysbios.hal.Hwi_HwiProxy INITIALIZERS ========
 */


/*
 * ======== ti.sysbios.heaps.HeapBuf INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_heaps_HeapBuf_Object__DESC__C;

/* Object__PARAMS__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapBuf_Object__PARAMS__C, ".const:ti_sysbios_heaps_HeapBuf_Object__PARAMS__C");
__FAR__ const ti_sysbios_heaps_HeapBuf_Params ti_sysbios_heaps_HeapBuf_Object__PARAMS__C = {
    sizeof (ti_sysbios_heaps_HeapBuf_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_heaps_HeapBuf_Object__PARAMS__C.__iprms, /* instance */
    (xdc_SizeT)0x0,  /* align */
    (xdc_UInt)0x0,  /* numBlocks */
    (xdc_SizeT)0x0,  /* blockSize */
    ((xdc_UArg)(0x0)),  /* bufSize */
    ((xdc_Ptr)(0x0)),  /* buf */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_heaps_HeapBuf_Module__ ti_sysbios_heaps_HeapBuf_Module__root__V = {
    {&ti_sysbios_heaps_HeapBuf_Module__root__V.link,  /* link.next */
    &ti_sysbios_heaps_HeapBuf_Module__root__V.link},  /* link.prev */
};

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_ti_sysbios_heaps_HeapBuf_Module__state__V"
#endif
#if defined(__llvm__) && defined(__ti__)
ti_sysbios_heaps_HeapBuf_Module_State__ ti_sysbios_heaps_HeapBuf_Module__state__V __attribute__ ((section(".data:ti_sysbios_heaps_HeapBuf_Module__state__V")));
#elif defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __TI_COMPILER_VERSION__
ti_sysbios_heaps_HeapBuf_Module_State__ ti_sysbios_heaps_HeapBuf_Module__state__V __attribute__ ((section(".data_ti_sysbios_heaps_HeapBuf_Module__state__V")));
#endif
#endif
ti_sysbios_heaps_HeapBuf_Module_State__ ti_sysbios_heaps_HeapBuf_Module__state__V = {
    ((void*)0),  /* constructedHeaps */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapBuf_Module__diagsEnabled__C, ".const:ti_sysbios_heaps_HeapBuf_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_heaps_HeapBuf_Module__diagsEnabled ti_sysbios_heaps_HeapBuf_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapBuf_Module__diagsIncluded__C, ".const:ti_sysbios_heaps_HeapBuf_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_heaps_HeapBuf_Module__diagsIncluded ti_sysbios_heaps_HeapBuf_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapBuf_Module__diagsMask__C, ".const:ti_sysbios_heaps_HeapBuf_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_heaps_HeapBuf_Module__diagsMask ti_sysbios_heaps_HeapBuf_Module__diagsMask__C = ((CT__ti_sysbios_heaps_HeapBuf_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapBuf_Module__gateObj__C, ".const:ti_sysbios_heaps_HeapBuf_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_heaps_HeapBuf_Module__gateObj ti_sysbios_heaps_HeapBuf_Module__gateObj__C = ((CT__ti_sysbios_heaps_HeapBuf_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapBuf_Module__gatePrms__C, ".const:ti_sysbios_heaps_HeapBuf_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_heaps_HeapBuf_Module__gatePrms ti_sysbios_heaps_HeapBuf_Module__gatePrms__C = ((CT__ti_sysbios_heaps_HeapBuf_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapBuf_Module__id__C, ".const:ti_sysbios_heaps_HeapBuf_Module__id__C");
__FAR__ const CT__ti_sysbios_heaps_HeapBuf_Module__id ti_sysbios_heaps_HeapBuf_Module__id__C = (xdc_Bits16)0x8026;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapBuf_Module__loggerDefined__C, ".const:ti_sysbios_heaps_HeapBuf_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_heaps_HeapBuf_Module__loggerDefined ti_sysbios_heaps_HeapBuf_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapBuf_Module__loggerObj__C, ".const:ti_sysbios_heaps_HeapBuf_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_heaps_HeapBuf_Module__loggerObj ti_sysbios_heaps_HeapBuf_Module__loggerObj__C = ((CT__ti_sysbios_heaps_HeapBuf_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapBuf_Module__loggerFxn0__C, ".const:ti_sysbios_heaps_HeapBuf_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_heaps_HeapBuf_Module__loggerFxn0 ti_sysbios_heaps_HeapBuf_Module__loggerFxn0__C = ((CT__ti_sysbios_heaps_HeapBuf_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapBuf_Module__loggerFxn1__C, ".const:ti_sysbios_heaps_HeapBuf_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_heaps_HeapBuf_Module__loggerFxn1 ti_sysbios_heaps_HeapBuf_Module__loggerFxn1__C = ((CT__ti_sysbios_heaps_HeapBuf_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapBuf_Module__loggerFxn2__C, ".const:ti_sysbios_heaps_HeapBuf_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_heaps_HeapBuf_Module__loggerFxn2 ti_sysbios_heaps_HeapBuf_Module__loggerFxn2__C = ((CT__ti_sysbios_heaps_HeapBuf_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapBuf_Module__loggerFxn4__C, ".const:ti_sysbios_heaps_HeapBuf_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_heaps_HeapBuf_Module__loggerFxn4 ti_sysbios_heaps_HeapBuf_Module__loggerFxn4__C = ((CT__ti_sysbios_heaps_HeapBuf_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapBuf_Module__loggerFxn8__C, ".const:ti_sysbios_heaps_HeapBuf_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_heaps_HeapBuf_Module__loggerFxn8 ti_sysbios_heaps_HeapBuf_Module__loggerFxn8__C = ((CT__ti_sysbios_heaps_HeapBuf_Module__loggerFxn8)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapBuf_Object__count__C, ".const:ti_sysbios_heaps_HeapBuf_Object__count__C");
__FAR__ const CT__ti_sysbios_heaps_HeapBuf_Object__count ti_sysbios_heaps_HeapBuf_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapBuf_Object__heap__C, ".const:ti_sysbios_heaps_HeapBuf_Object__heap__C");
__FAR__ const CT__ti_sysbios_heaps_HeapBuf_Object__heap ti_sysbios_heaps_HeapBuf_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapBuf_Object__sizeof__C, ".const:ti_sysbios_heaps_HeapBuf_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_heaps_HeapBuf_Object__sizeof ti_sysbios_heaps_HeapBuf_Object__sizeof__C = sizeof(ti_sysbios_heaps_HeapBuf_Object__);

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapBuf_Object__table__C, ".const:ti_sysbios_heaps_HeapBuf_Object__table__C");
__FAR__ const CT__ti_sysbios_heaps_HeapBuf_Object__table ti_sysbios_heaps_HeapBuf_Object__table__C = 0;

/* A_nullBuf__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapBuf_A_nullBuf__C, ".const:ti_sysbios_heaps_HeapBuf_A_nullBuf__C");
__FAR__ const CT__ti_sysbios_heaps_HeapBuf_A_nullBuf ti_sysbios_heaps_HeapBuf_A_nullBuf__C = (((xdc_runtime_Assert_Id)1825) << 16 | 16);

/* A_bufAlign__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapBuf_A_bufAlign__C, ".const:ti_sysbios_heaps_HeapBuf_A_bufAlign__C");
__FAR__ const CT__ti_sysbios_heaps_HeapBuf_A_bufAlign ti_sysbios_heaps_HeapBuf_A_bufAlign__C = (((xdc_runtime_Assert_Id)1854) << 16 | 16);

/* A_invalidAlign__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapBuf_A_invalidAlign__C, ".const:ti_sysbios_heaps_HeapBuf_A_invalidAlign__C");
__FAR__ const CT__ti_sysbios_heaps_HeapBuf_A_invalidAlign ti_sysbios_heaps_HeapBuf_A_invalidAlign__C = (((xdc_runtime_Assert_Id)1879) << 16 | 16);

/* A_invalidRequestedAlign__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapBuf_A_invalidRequestedAlign__C, ".const:ti_sysbios_heaps_HeapBuf_A_invalidRequestedAlign__C");
__FAR__ const CT__ti_sysbios_heaps_HeapBuf_A_invalidRequestedAlign ti_sysbios_heaps_HeapBuf_A_invalidRequestedAlign__C = (((xdc_runtime_Assert_Id)1969) << 16 | 16);

/* A_invalidBlockSize__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapBuf_A_invalidBlockSize__C, ".const:ti_sysbios_heaps_HeapBuf_A_invalidBlockSize__C");
__FAR__ const CT__ti_sysbios_heaps_HeapBuf_A_invalidBlockSize ti_sysbios_heaps_HeapBuf_A_invalidBlockSize__C = (((xdc_runtime_Assert_Id)2058) << 16 | 16);

/* A_zeroBlocks__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapBuf_A_zeroBlocks__C, ".const:ti_sysbios_heaps_HeapBuf_A_zeroBlocks__C");
__FAR__ const CT__ti_sysbios_heaps_HeapBuf_A_zeroBlocks ti_sysbios_heaps_HeapBuf_A_zeroBlocks__C = (((xdc_runtime_Assert_Id)2118) << 16 | 16);

/* A_zeroBufSize__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapBuf_A_zeroBufSize__C, ".const:ti_sysbios_heaps_HeapBuf_A_zeroBufSize__C");
__FAR__ const CT__ti_sysbios_heaps_HeapBuf_A_zeroBufSize ti_sysbios_heaps_HeapBuf_A_zeroBufSize__C = (((xdc_runtime_Assert_Id)2143) << 16 | 16);

/* A_invalidBufSize__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapBuf_A_invalidBufSize__C, ".const:ti_sysbios_heaps_HeapBuf_A_invalidBufSize__C");
__FAR__ const CT__ti_sysbios_heaps_HeapBuf_A_invalidBufSize ti_sysbios_heaps_HeapBuf_A_invalidBufSize__C = (((xdc_runtime_Assert_Id)2166) << 16 | 16);

/* A_noBlocksToFree__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapBuf_A_noBlocksToFree__C, ".const:ti_sysbios_heaps_HeapBuf_A_noBlocksToFree__C");
__FAR__ const CT__ti_sysbios_heaps_HeapBuf_A_noBlocksToFree ti_sysbios_heaps_HeapBuf_A_noBlocksToFree__C = (((xdc_runtime_Assert_Id)2224) << 16 | 16);

/* A_invalidFree__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapBuf_A_invalidFree__C, ".const:ti_sysbios_heaps_HeapBuf_A_invalidFree__C");
__FAR__ const CT__ti_sysbios_heaps_HeapBuf_A_invalidFree ti_sysbios_heaps_HeapBuf_A_invalidFree__C = (((xdc_runtime_Assert_Id)2284) << 16 | 16);

/* E_size__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapBuf_E_size__C, ".const:ti_sysbios_heaps_HeapBuf_E_size__C");
__FAR__ const CT__ti_sysbios_heaps_HeapBuf_E_size ti_sysbios_heaps_HeapBuf_E_size__C = (((xdc_runtime_Error_Id)4645) << 16 | 0);

/* trackMaxAllocs__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapBuf_trackMaxAllocs__C, ".const:ti_sysbios_heaps_HeapBuf_trackMaxAllocs__C");
__FAR__ const CT__ti_sysbios_heaps_HeapBuf_trackMaxAllocs ti_sysbios_heaps_HeapBuf_trackMaxAllocs__C = 0;

/* numConstructedHeaps__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapBuf_numConstructedHeaps__C, ".const:ti_sysbios_heaps_HeapBuf_numConstructedHeaps__C");
__FAR__ const CT__ti_sysbios_heaps_HeapBuf_numConstructedHeaps ti_sysbios_heaps_HeapBuf_numConstructedHeaps__C = (xdc_UInt)0x0;


/*
 * ======== ti.sysbios.heaps.HeapMem INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_heaps_HeapMem_Object__DESC__C;

/* Object__PARAMS__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Object__PARAMS__C, ".const:ti_sysbios_heaps_HeapMem_Object__PARAMS__C");
__FAR__ const ti_sysbios_heaps_HeapMem_Params ti_sysbios_heaps_HeapMem_Object__PARAMS__C = {
    sizeof (ti_sysbios_heaps_HeapMem_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_heaps_HeapMem_Object__PARAMS__C.__iprms, /* instance */
    (xdc_SizeT)0x0,  /* minBlockAlign */
    ((xdc_Ptr)(0x0)),  /* buf */
    ((xdc_UArg)(0x0)),  /* size */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* --> ti_sysbios_heaps_HeapMem_Instance_State_0_buf__A */
__T1_ti_sysbios_heaps_HeapMem_Instance_State__buf ti_sysbios_heaps_HeapMem_Instance_State_0_buf__A[32768];

/* Module__root__V */
ti_sysbios_heaps_HeapMem_Module__ ti_sysbios_heaps_HeapMem_Module__root__V = {
    {&ti_sysbios_heaps_HeapMem_Module__root__V.link,  /* link.next */
    &ti_sysbios_heaps_HeapMem_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_sysbios_heaps_HeapMem_Object__ ti_sysbios_heaps_HeapMem_Object__table__V[1] = {
    {/* instance#0 */
        &ti_sysbios_heaps_HeapMem_Module__FXNS__C,
        ((xdc_UArg)(0x8)),  /* align */
        ((void*)ti_sysbios_heaps_HeapMem_Instance_State_0_buf__A),  /* buf */
        {
            ((ti_sysbios_heaps_HeapMem_Header*)0),  /* next */
            ((xdc_UArg)(0x8000)),  /* size */
        },  /* head */
        (xdc_SizeT)0x8,  /* minBlockAlign */
    },
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__diagsEnabled__C, ".const:ti_sysbios_heaps_HeapMem_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__diagsEnabled ti_sysbios_heaps_HeapMem_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__diagsIncluded__C, ".const:ti_sysbios_heaps_HeapMem_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__diagsIncluded ti_sysbios_heaps_HeapMem_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__diagsMask__C, ".const:ti_sysbios_heaps_HeapMem_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__diagsMask ti_sysbios_heaps_HeapMem_Module__diagsMask__C = ((CT__ti_sysbios_heaps_HeapMem_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__gateObj__C, ".const:ti_sysbios_heaps_HeapMem_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__gateObj ti_sysbios_heaps_HeapMem_Module__gateObj__C = ((CT__ti_sysbios_heaps_HeapMem_Module__gateObj)((const void*)(xdc_runtime_IGateProvider_Handle)&ti_sysbios_gates_GateMutex_Object__table__V[0]));

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__gatePrms__C, ".const:ti_sysbios_heaps_HeapMem_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__gatePrms ti_sysbios_heaps_HeapMem_Module__gatePrms__C = ((CT__ti_sysbios_heaps_HeapMem_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__id__C, ".const:ti_sysbios_heaps_HeapMem_Module__id__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__id ti_sysbios_heaps_HeapMem_Module__id__C = (xdc_Bits16)0x8027;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__loggerDefined__C, ".const:ti_sysbios_heaps_HeapMem_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__loggerDefined ti_sysbios_heaps_HeapMem_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__loggerObj__C, ".const:ti_sysbios_heaps_HeapMem_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__loggerObj ti_sysbios_heaps_HeapMem_Module__loggerObj__C = ((CT__ti_sysbios_heaps_HeapMem_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__loggerFxn0__C, ".const:ti_sysbios_heaps_HeapMem_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn0 ti_sysbios_heaps_HeapMem_Module__loggerFxn0__C = ((CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__loggerFxn1__C, ".const:ti_sysbios_heaps_HeapMem_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn1 ti_sysbios_heaps_HeapMem_Module__loggerFxn1__C = ((CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__loggerFxn2__C, ".const:ti_sysbios_heaps_HeapMem_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn2 ti_sysbios_heaps_HeapMem_Module__loggerFxn2__C = ((CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__loggerFxn4__C, ".const:ti_sysbios_heaps_HeapMem_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn4 ti_sysbios_heaps_HeapMem_Module__loggerFxn4__C = ((CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__loggerFxn8__C, ".const:ti_sysbios_heaps_HeapMem_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn8 ti_sysbios_heaps_HeapMem_Module__loggerFxn8__C = ((CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn8)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Object__count__C, ".const:ti_sysbios_heaps_HeapMem_Object__count__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Object__count ti_sysbios_heaps_HeapMem_Object__count__C = 1;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Object__heap__C, ".const:ti_sysbios_heaps_HeapMem_Object__heap__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Object__heap ti_sysbios_heaps_HeapMem_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Object__sizeof__C, ".const:ti_sysbios_heaps_HeapMem_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Object__sizeof ti_sysbios_heaps_HeapMem_Object__sizeof__C = sizeof(ti_sysbios_heaps_HeapMem_Object__);

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Object__table__C, ".const:ti_sysbios_heaps_HeapMem_Object__table__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Object__table ti_sysbios_heaps_HeapMem_Object__table__C = ti_sysbios_heaps_HeapMem_Object__table__V;

/* A_zeroBlock__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_A_zeroBlock__C, ".const:ti_sysbios_heaps_HeapMem_A_zeroBlock__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_A_zeroBlock ti_sysbios_heaps_HeapMem_A_zeroBlock__C = (((xdc_runtime_Assert_Id)2312) << 16 | 16);

/* A_heapSize__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_A_heapSize__C, ".const:ti_sysbios_heaps_HeapMem_A_heapSize__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_A_heapSize ti_sysbios_heaps_HeapMem_A_heapSize__C = (((xdc_runtime_Assert_Id)2348) << 16 | 16);

/* A_align__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_A_align__C, ".const:ti_sysbios_heaps_HeapMem_A_align__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_A_align ti_sysbios_heaps_HeapMem_A_align__C = (((xdc_runtime_Assert_Id)2393) << 16 | 16);

/* E_memory__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_E_memory__C, ".const:ti_sysbios_heaps_HeapMem_E_memory__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_E_memory ti_sysbios_heaps_HeapMem_E_memory__C = (((xdc_runtime_Error_Id)4693) << 16 | 0);

/* A_invalidFree__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_A_invalidFree__C, ".const:ti_sysbios_heaps_HeapMem_A_invalidFree__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_A_invalidFree ti_sysbios_heaps_HeapMem_A_invalidFree__C = (((xdc_runtime_Assert_Id)2284) << 16 | 16);

/* primaryHeapBaseAddr__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_primaryHeapBaseAddr__C, ".const:ti_sysbios_heaps_HeapMem_primaryHeapBaseAddr__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_primaryHeapBaseAddr ti_sysbios_heaps_HeapMem_primaryHeapBaseAddr__C = ((CT__ti_sysbios_heaps_HeapMem_primaryHeapBaseAddr)0);

/* primaryHeapEndAddr__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_primaryHeapEndAddr__C, ".const:ti_sysbios_heaps_HeapMem_primaryHeapEndAddr__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_primaryHeapEndAddr ti_sysbios_heaps_HeapMem_primaryHeapEndAddr__C = ((CT__ti_sysbios_heaps_HeapMem_primaryHeapEndAddr)0);

/* reqAlign__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_reqAlign__C, ".const:ti_sysbios_heaps_HeapMem_reqAlign__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_reqAlign ti_sysbios_heaps_HeapMem_reqAlign__C = (xdc_SizeT)0x8;


/*
 * ======== ti.sysbios.heaps.HeapMem_Module_GateProxy INITIALIZERS ========
 */


/*
 * ======== ti.sysbios.knl.Clock INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Clock_Object__DESC__C;

/* Object__PARAMS__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Object__PARAMS__C, ".const:ti_sysbios_knl_Clock_Object__PARAMS__C");
__FAR__ const ti_sysbios_knl_Clock_Params ti_sysbios_knl_Clock_Object__PARAMS__C = {
    sizeof (ti_sysbios_knl_Clock_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_knl_Clock_Object__PARAMS__C.__iprms, /* instance */
    0,  /* startFlag */
    (xdc_UInt32)0x0,  /* period */
    ((xdc_UArg)0),  /* arg */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_knl_Clock_Module__ ti_sysbios_knl_Clock_Module__root__V = {
    {&ti_sysbios_knl_Clock_Module__root__V.link,  /* link.next */
    &ti_sysbios_knl_Clock_Module__root__V.link},  /* link.prev */
};

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_ti_sysbios_knl_Clock_Module__state__V"
#endif
#if defined(__llvm__) && defined(__ti__)
ti_sysbios_knl_Clock_Module_State__ ti_sysbios_knl_Clock_Module__state__V __attribute__ ((section(".data:ti_sysbios_knl_Clock_Module__state__V")));
#elif defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __TI_COMPILER_VERSION__
ti_sysbios_knl_Clock_Module_State__ ti_sysbios_knl_Clock_Module__state__V __attribute__ ((section(".data_ti_sysbios_knl_Clock_Module__state__V")));
#endif
#endif
ti_sysbios_knl_Clock_Module_State__ ti_sysbios_knl_Clock_Module__state__V = {
    (xdc_UInt32)0x0,  /* ticks */
    (xdc_UInt)0x0,  /* swiCount */
    (ti_sysbios_knl_Clock_TimerProxy_Handle)&ti_sysbios_timers_rti_Timer_Object__table__V[0],  /* timer */
    (ti_sysbios_knl_Swi_Handle)&ti_sysbios_knl_Swi_Object__table__V[0],  /* swi */
    (xdc_UInt)0x1,  /* numTickSkip */
    (xdc_UInt32)0x1,  /* nextScheduledTick */
    (xdc_UInt32)0x0,  /* maxSkippable */
    0,  /* inWorkFunc */
    0,  /* startDuringWorkFunc */
    0,  /* ticking */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Clock_Module__state__V.Object_field_clockQ.elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Clock_Module__state__V.Object_field_clockQ.elem)),  /* prev */
        },  /* elem */
    },  /* Object_field_clockQ */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__diagsEnabled__C, ".const:ti_sysbios_knl_Clock_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Module__diagsEnabled ti_sysbios_knl_Clock_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__diagsIncluded__C, ".const:ti_sysbios_knl_Clock_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Module__diagsIncluded ti_sysbios_knl_Clock_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__diagsMask__C, ".const:ti_sysbios_knl_Clock_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Module__diagsMask ti_sysbios_knl_Clock_Module__diagsMask__C = ((CT__ti_sysbios_knl_Clock_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__gateObj__C, ".const:ti_sysbios_knl_Clock_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Module__gateObj ti_sysbios_knl_Clock_Module__gateObj__C = ((CT__ti_sysbios_knl_Clock_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__gatePrms__C, ".const:ti_sysbios_knl_Clock_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Module__gatePrms ti_sysbios_knl_Clock_Module__gatePrms__C = ((CT__ti_sysbios_knl_Clock_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__id__C, ".const:ti_sysbios_knl_Clock_Module__id__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Module__id ti_sysbios_knl_Clock_Module__id__C = (xdc_Bits16)0x801d;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__loggerDefined__C, ".const:ti_sysbios_knl_Clock_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Module__loggerDefined ti_sysbios_knl_Clock_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__loggerObj__C, ".const:ti_sysbios_knl_Clock_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Module__loggerObj ti_sysbios_knl_Clock_Module__loggerObj__C = ((CT__ti_sysbios_knl_Clock_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__loggerFxn0__C, ".const:ti_sysbios_knl_Clock_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Module__loggerFxn0 ti_sysbios_knl_Clock_Module__loggerFxn0__C = ((CT__ti_sysbios_knl_Clock_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__loggerFxn1__C, ".const:ti_sysbios_knl_Clock_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Module__loggerFxn1 ti_sysbios_knl_Clock_Module__loggerFxn1__C = ((CT__ti_sysbios_knl_Clock_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__loggerFxn2__C, ".const:ti_sysbios_knl_Clock_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Module__loggerFxn2 ti_sysbios_knl_Clock_Module__loggerFxn2__C = ((CT__ti_sysbios_knl_Clock_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__loggerFxn4__C, ".const:ti_sysbios_knl_Clock_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Module__loggerFxn4 ti_sysbios_knl_Clock_Module__loggerFxn4__C = ((CT__ti_sysbios_knl_Clock_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__loggerFxn8__C, ".const:ti_sysbios_knl_Clock_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Module__loggerFxn8 ti_sysbios_knl_Clock_Module__loggerFxn8__C = ((CT__ti_sysbios_knl_Clock_Module__loggerFxn8)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Object__count__C, ".const:ti_sysbios_knl_Clock_Object__count__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Object__count ti_sysbios_knl_Clock_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Object__heap__C, ".const:ti_sysbios_knl_Clock_Object__heap__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Object__heap ti_sysbios_knl_Clock_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Object__sizeof__C, ".const:ti_sysbios_knl_Clock_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Object__sizeof ti_sysbios_knl_Clock_Object__sizeof__C = sizeof(ti_sysbios_knl_Clock_Object__);

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Object__table__C, ".const:ti_sysbios_knl_Clock_Object__table__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Object__table ti_sysbios_knl_Clock_Object__table__C = 0;

/* LW_delayed__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_LW_delayed__C, ".const:ti_sysbios_knl_Clock_LW_delayed__C");
__FAR__ const CT__ti_sysbios_knl_Clock_LW_delayed ti_sysbios_knl_Clock_LW_delayed__C = (((xdc_runtime_Log_Event)5257) << 16 | 1024);

/* LM_tick__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_LM_tick__C, ".const:ti_sysbios_knl_Clock_LM_tick__C");
__FAR__ const CT__ti_sysbios_knl_Clock_LM_tick ti_sysbios_knl_Clock_LM_tick__C = (((xdc_runtime_Log_Event)5279) << 16 | 768);

/* LM_begin__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_LM_begin__C, ".const:ti_sysbios_knl_Clock_LM_begin__C");
__FAR__ const CT__ti_sysbios_knl_Clock_LM_begin ti_sysbios_knl_Clock_LM_begin__C = (((xdc_runtime_Log_Event)5297) << 16 | 768);

/* A_clockDisabled__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_A_clockDisabled__C, ".const:ti_sysbios_knl_Clock_A_clockDisabled__C");
__FAR__ const CT__ti_sysbios_knl_Clock_A_clockDisabled ti_sysbios_knl_Clock_A_clockDisabled__C = (((xdc_runtime_Assert_Id)445) << 16 | 16);

/* A_badThreadType__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_A_badThreadType__C, ".const:ti_sysbios_knl_Clock_A_badThreadType__C");
__FAR__ const CT__ti_sysbios_knl_Clock_A_badThreadType ti_sysbios_knl_Clock_A_badThreadType__C = (((xdc_runtime_Assert_Id)526) << 16 | 16);

/* serviceMargin__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_serviceMargin__C, ".const:ti_sysbios_knl_Clock_serviceMargin__C");
__FAR__ const CT__ti_sysbios_knl_Clock_serviceMargin ti_sysbios_knl_Clock_serviceMargin__C = (xdc_UInt32)0x0;

/* tickSource__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_tickSource__C, ".const:ti_sysbios_knl_Clock_tickSource__C");
__FAR__ const CT__ti_sysbios_knl_Clock_tickSource ti_sysbios_knl_Clock_tickSource__C = ti_sysbios_knl_Clock_TickSource_TIMER;

/* tickMode__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_tickMode__C, ".const:ti_sysbios_knl_Clock_tickMode__C");
__FAR__ const CT__ti_sysbios_knl_Clock_tickMode ti_sysbios_knl_Clock_tickMode__C = ti_sysbios_knl_Clock_TickMode_PERIODIC;

/* timerId__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_timerId__C, ".const:ti_sysbios_knl_Clock_timerId__C");
__FAR__ const CT__ti_sysbios_knl_Clock_timerId ti_sysbios_knl_Clock_timerId__C = (xdc_UInt)(-0x0 - 1);

/* tickPeriod__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_tickPeriod__C, ".const:ti_sysbios_knl_Clock_tickPeriod__C");
__FAR__ const CT__ti_sysbios_knl_Clock_tickPeriod ti_sysbios_knl_Clock_tickPeriod__C = (xdc_UInt32)0x3e8;

/* doTickFunc__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_doTickFunc__C, ".const:ti_sysbios_knl_Clock_doTickFunc__C");
__FAR__ const CT__ti_sysbios_knl_Clock_doTickFunc ti_sysbios_knl_Clock_doTickFunc__C = ((CT__ti_sysbios_knl_Clock_doTickFunc)((xdc_Fxn)ti_sysbios_knl_Clock_doTick__I));

/* triggerClock__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_triggerClock__C, ".const:ti_sysbios_knl_Clock_triggerClock__C");
__FAR__ const CT__ti_sysbios_knl_Clock_triggerClock ti_sysbios_knl_Clock_triggerClock__C = 0;


/*
 * ======== ti.sysbios.knl.Clock_TimerProxy INITIALIZERS ========
 */


/*
 * ======== ti.sysbios.knl.Event INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Event_Object__DESC__C;

/* Object__PARAMS__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Object__PARAMS__C, ".const:ti_sysbios_knl_Event_Object__PARAMS__C");
__FAR__ const ti_sysbios_knl_Event_Params ti_sysbios_knl_Event_Object__PARAMS__C = {
    sizeof (ti_sysbios_knl_Event_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_knl_Event_Object__PARAMS__C.__iprms, /* instance */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_knl_Event_Module__ ti_sysbios_knl_Event_Module__root__V = {
    {&ti_sysbios_knl_Event_Module__root__V.link,  /* link.next */
    &ti_sysbios_knl_Event_Module__root__V.link},  /* link.prev */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Module__diagsEnabled__C, ".const:ti_sysbios_knl_Event_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_knl_Event_Module__diagsEnabled ti_sysbios_knl_Event_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Module__diagsIncluded__C, ".const:ti_sysbios_knl_Event_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_knl_Event_Module__diagsIncluded ti_sysbios_knl_Event_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Module__diagsMask__C, ".const:ti_sysbios_knl_Event_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_knl_Event_Module__diagsMask ti_sysbios_knl_Event_Module__diagsMask__C = ((CT__ti_sysbios_knl_Event_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Module__gateObj__C, ".const:ti_sysbios_knl_Event_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_knl_Event_Module__gateObj ti_sysbios_knl_Event_Module__gateObj__C = ((CT__ti_sysbios_knl_Event_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Module__gatePrms__C, ".const:ti_sysbios_knl_Event_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_knl_Event_Module__gatePrms ti_sysbios_knl_Event_Module__gatePrms__C = ((CT__ti_sysbios_knl_Event_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Module__id__C, ".const:ti_sysbios_knl_Event_Module__id__C");
__FAR__ const CT__ti_sysbios_knl_Event_Module__id ti_sysbios_knl_Event_Module__id__C = (xdc_Bits16)0x8020;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Module__loggerDefined__C, ".const:ti_sysbios_knl_Event_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_knl_Event_Module__loggerDefined ti_sysbios_knl_Event_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Module__loggerObj__C, ".const:ti_sysbios_knl_Event_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_knl_Event_Module__loggerObj ti_sysbios_knl_Event_Module__loggerObj__C = ((CT__ti_sysbios_knl_Event_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Module__loggerFxn0__C, ".const:ti_sysbios_knl_Event_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_knl_Event_Module__loggerFxn0 ti_sysbios_knl_Event_Module__loggerFxn0__C = ((CT__ti_sysbios_knl_Event_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Module__loggerFxn1__C, ".const:ti_sysbios_knl_Event_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_knl_Event_Module__loggerFxn1 ti_sysbios_knl_Event_Module__loggerFxn1__C = ((CT__ti_sysbios_knl_Event_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Module__loggerFxn2__C, ".const:ti_sysbios_knl_Event_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_knl_Event_Module__loggerFxn2 ti_sysbios_knl_Event_Module__loggerFxn2__C = ((CT__ti_sysbios_knl_Event_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Module__loggerFxn4__C, ".const:ti_sysbios_knl_Event_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_knl_Event_Module__loggerFxn4 ti_sysbios_knl_Event_Module__loggerFxn4__C = ((CT__ti_sysbios_knl_Event_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Module__loggerFxn8__C, ".const:ti_sysbios_knl_Event_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_knl_Event_Module__loggerFxn8 ti_sysbios_knl_Event_Module__loggerFxn8__C = ((CT__ti_sysbios_knl_Event_Module__loggerFxn8)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Object__count__C, ".const:ti_sysbios_knl_Event_Object__count__C");
__FAR__ const CT__ti_sysbios_knl_Event_Object__count ti_sysbios_knl_Event_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Object__heap__C, ".const:ti_sysbios_knl_Event_Object__heap__C");
__FAR__ const CT__ti_sysbios_knl_Event_Object__heap ti_sysbios_knl_Event_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Object__sizeof__C, ".const:ti_sysbios_knl_Event_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_knl_Event_Object__sizeof ti_sysbios_knl_Event_Object__sizeof__C = sizeof(ti_sysbios_knl_Event_Object__);

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Object__table__C, ".const:ti_sysbios_knl_Event_Object__table__C");
__FAR__ const CT__ti_sysbios_knl_Event_Object__table ti_sysbios_knl_Event_Object__table__C = 0;

/* LM_post__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_LM_post__C, ".const:ti_sysbios_knl_Event_LM_post__C");
__FAR__ const CT__ti_sysbios_knl_Event_LM_post ti_sysbios_knl_Event_LM_post__C = (((xdc_runtime_Log_Event)5329) << 16 | 768);

/* LM_pend__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_LM_pend__C, ".const:ti_sysbios_knl_Event_LM_pend__C");
__FAR__ const CT__ti_sysbios_knl_Event_LM_pend ti_sysbios_knl_Event_LM_pend__C = (((xdc_runtime_Log_Event)5383) << 16 | 768);

/* A_nullEventMasks__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_A_nullEventMasks__C, ".const:ti_sysbios_knl_Event_A_nullEventMasks__C");
__FAR__ const CT__ti_sysbios_knl_Event_A_nullEventMasks ti_sysbios_knl_Event_A_nullEventMasks__C = (((xdc_runtime_Assert_Id)596) << 16 | 16);

/* A_nullEventId__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_A_nullEventId__C, ".const:ti_sysbios_knl_Event_A_nullEventId__C");
__FAR__ const CT__ti_sysbios_knl_Event_A_nullEventId ti_sysbios_knl_Event_A_nullEventId__C = (((xdc_runtime_Assert_Id)643) << 16 | 16);

/* A_eventInUse__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_A_eventInUse__C, ".const:ti_sysbios_knl_Event_A_eventInUse__C");
__FAR__ const CT__ti_sysbios_knl_Event_A_eventInUse ti_sysbios_knl_Event_A_eventInUse__C = (((xdc_runtime_Assert_Id)682) << 16 | 16);

/* A_badContext__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_A_badContext__C, ".const:ti_sysbios_knl_Event_A_badContext__C");
__FAR__ const CT__ti_sysbios_knl_Event_A_badContext ti_sysbios_knl_Event_A_badContext__C = (((xdc_runtime_Assert_Id)725) << 16 | 16);

/* A_pendTaskDisabled__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_A_pendTaskDisabled__C, ".const:ti_sysbios_knl_Event_A_pendTaskDisabled__C");
__FAR__ const CT__ti_sysbios_knl_Event_A_pendTaskDisabled ti_sysbios_knl_Event_A_pendTaskDisabled__C = (((xdc_runtime_Assert_Id)788) << 16 | 16);


/*
 * ======== ti.sysbios.knl.Idle INITIALIZERS ========
 */

/* --> ti_sysbios_knl_Idle_funcList__A */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_funcList__A, ".const:ti_sysbios_knl_Idle_funcList__A");
const __T1_ti_sysbios_knl_Idle_funcList ti_sysbios_knl_Idle_funcList__A[3] = {
    ((xdc_Void(*)(xdc_Void))((xdc_Fxn)MmwDemo_sleep)),  /* [0] */
    ((xdc_Void(*)(xdc_Void))((xdc_Fxn)ti_sysbios_utils_Load_idleFxn__E)),  /* [1] */
    ((xdc_Void(*)(xdc_Void))((xdc_Fxn)ti_sysbios_hal_Hwi_checkStack)),  /* [2] */
};

/* --> ti_sysbios_knl_Idle_coreList__A */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_coreList__A, ".const:ti_sysbios_knl_Idle_coreList__A");
const __T1_ti_sysbios_knl_Idle_coreList ti_sysbios_knl_Idle_coreList__A[3] = {
    (xdc_UInt)0x0,  /* [0] */
    (xdc_UInt)0x0,  /* [1] */
    (xdc_UInt)0x0,  /* [2] */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__diagsEnabled__C, ".const:ti_sysbios_knl_Idle_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Module__diagsEnabled ti_sysbios_knl_Idle_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__diagsIncluded__C, ".const:ti_sysbios_knl_Idle_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Module__diagsIncluded ti_sysbios_knl_Idle_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__diagsMask__C, ".const:ti_sysbios_knl_Idle_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Module__diagsMask ti_sysbios_knl_Idle_Module__diagsMask__C = ((CT__ti_sysbios_knl_Idle_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__gateObj__C, ".const:ti_sysbios_knl_Idle_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Module__gateObj ti_sysbios_knl_Idle_Module__gateObj__C = ((CT__ti_sysbios_knl_Idle_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__gatePrms__C, ".const:ti_sysbios_knl_Idle_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Module__gatePrms ti_sysbios_knl_Idle_Module__gatePrms__C = ((CT__ti_sysbios_knl_Idle_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__id__C, ".const:ti_sysbios_knl_Idle_Module__id__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Module__id ti_sysbios_knl_Idle_Module__id__C = (xdc_Bits16)0x801e;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__loggerDefined__C, ".const:ti_sysbios_knl_Idle_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Module__loggerDefined ti_sysbios_knl_Idle_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__loggerObj__C, ".const:ti_sysbios_knl_Idle_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Module__loggerObj ti_sysbios_knl_Idle_Module__loggerObj__C = ((CT__ti_sysbios_knl_Idle_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__loggerFxn0__C, ".const:ti_sysbios_knl_Idle_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Module__loggerFxn0 ti_sysbios_knl_Idle_Module__loggerFxn0__C = ((CT__ti_sysbios_knl_Idle_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__loggerFxn1__C, ".const:ti_sysbios_knl_Idle_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Module__loggerFxn1 ti_sysbios_knl_Idle_Module__loggerFxn1__C = ((CT__ti_sysbios_knl_Idle_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__loggerFxn2__C, ".const:ti_sysbios_knl_Idle_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Module__loggerFxn2 ti_sysbios_knl_Idle_Module__loggerFxn2__C = ((CT__ti_sysbios_knl_Idle_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__loggerFxn4__C, ".const:ti_sysbios_knl_Idle_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Module__loggerFxn4 ti_sysbios_knl_Idle_Module__loggerFxn4__C = ((CT__ti_sysbios_knl_Idle_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__loggerFxn8__C, ".const:ti_sysbios_knl_Idle_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Module__loggerFxn8 ti_sysbios_knl_Idle_Module__loggerFxn8__C = ((CT__ti_sysbios_knl_Idle_Module__loggerFxn8)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Object__count__C, ".const:ti_sysbios_knl_Idle_Object__count__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Object__count ti_sysbios_knl_Idle_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Object__heap__C, ".const:ti_sysbios_knl_Idle_Object__heap__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Object__heap ti_sysbios_knl_Idle_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Object__sizeof__C, ".const:ti_sysbios_knl_Idle_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Object__sizeof ti_sysbios_knl_Idle_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Object__table__C, ".const:ti_sysbios_knl_Idle_Object__table__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Object__table ti_sysbios_knl_Idle_Object__table__C = 0;

/* funcList__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_funcList__C, ".const:ti_sysbios_knl_Idle_funcList__C");
__FAR__ const CT__ti_sysbios_knl_Idle_funcList ti_sysbios_knl_Idle_funcList__C = {3, ((__T1_ti_sysbios_knl_Idle_funcList *)ti_sysbios_knl_Idle_funcList__A)};

/* coreList__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_coreList__C, ".const:ti_sysbios_knl_Idle_coreList__C");
__FAR__ const CT__ti_sysbios_knl_Idle_coreList ti_sysbios_knl_Idle_coreList__C = {3, ((__T1_ti_sysbios_knl_Idle_coreList *)ti_sysbios_knl_Idle_coreList__A)};


/*
 * ======== ti.sysbios.knl.Intrinsics INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__diagsEnabled__C, ".const:ti_sysbios_knl_Intrinsics_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__diagsEnabled ti_sysbios_knl_Intrinsics_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__diagsIncluded__C, ".const:ti_sysbios_knl_Intrinsics_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__diagsIncluded ti_sysbios_knl_Intrinsics_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__diagsMask__C, ".const:ti_sysbios_knl_Intrinsics_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__diagsMask ti_sysbios_knl_Intrinsics_Module__diagsMask__C = ((CT__ti_sysbios_knl_Intrinsics_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__gateObj__C, ".const:ti_sysbios_knl_Intrinsics_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__gateObj ti_sysbios_knl_Intrinsics_Module__gateObj__C = ((CT__ti_sysbios_knl_Intrinsics_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__gatePrms__C, ".const:ti_sysbios_knl_Intrinsics_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__gatePrms ti_sysbios_knl_Intrinsics_Module__gatePrms__C = ((CT__ti_sysbios_knl_Intrinsics_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__id__C, ".const:ti_sysbios_knl_Intrinsics_Module__id__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__id ti_sysbios_knl_Intrinsics_Module__id__C = (xdc_Bits16)0x801f;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__loggerDefined__C, ".const:ti_sysbios_knl_Intrinsics_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__loggerDefined ti_sysbios_knl_Intrinsics_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__loggerObj__C, ".const:ti_sysbios_knl_Intrinsics_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__loggerObj ti_sysbios_knl_Intrinsics_Module__loggerObj__C = ((CT__ti_sysbios_knl_Intrinsics_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__loggerFxn0__C, ".const:ti_sysbios_knl_Intrinsics_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn0 ti_sysbios_knl_Intrinsics_Module__loggerFxn0__C = ((CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__loggerFxn1__C, ".const:ti_sysbios_knl_Intrinsics_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn1 ti_sysbios_knl_Intrinsics_Module__loggerFxn1__C = ((CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__loggerFxn2__C, ".const:ti_sysbios_knl_Intrinsics_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn2 ti_sysbios_knl_Intrinsics_Module__loggerFxn2__C = ((CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__loggerFxn4__C, ".const:ti_sysbios_knl_Intrinsics_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn4 ti_sysbios_knl_Intrinsics_Module__loggerFxn4__C = ((CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__loggerFxn8__C, ".const:ti_sysbios_knl_Intrinsics_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn8 ti_sysbios_knl_Intrinsics_Module__loggerFxn8__C = ((CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn8)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Object__count__C, ".const:ti_sysbios_knl_Intrinsics_Object__count__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Object__count ti_sysbios_knl_Intrinsics_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Object__heap__C, ".const:ti_sysbios_knl_Intrinsics_Object__heap__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Object__heap ti_sysbios_knl_Intrinsics_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Object__sizeof__C, ".const:ti_sysbios_knl_Intrinsics_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Object__sizeof ti_sysbios_knl_Intrinsics_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Object__table__C, ".const:ti_sysbios_knl_Intrinsics_Object__table__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Object__table ti_sysbios_knl_Intrinsics_Object__table__C = 0;


/*
 * ======== ti.sysbios.knl.Intrinsics_SupportProxy INITIALIZERS ========
 */


/*
 * ======== ti.sysbios.knl.Queue INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Queue_Object__DESC__C;

/* Object__PARAMS__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Object__PARAMS__C, ".const:ti_sysbios_knl_Queue_Object__PARAMS__C");
__FAR__ const ti_sysbios_knl_Queue_Params ti_sysbios_knl_Queue_Object__PARAMS__C = {
    sizeof (ti_sysbios_knl_Queue_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_knl_Queue_Object__PARAMS__C.__iprms, /* instance */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_knl_Queue_Module__ ti_sysbios_knl_Queue_Module__root__V = {
    {&ti_sysbios_knl_Queue_Module__root__V.link,  /* link.next */
    &ti_sysbios_knl_Queue_Module__root__V.link},  /* link.prev */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__diagsEnabled__C, ".const:ti_sysbios_knl_Queue_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Module__diagsEnabled ti_sysbios_knl_Queue_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__diagsIncluded__C, ".const:ti_sysbios_knl_Queue_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Module__diagsIncluded ti_sysbios_knl_Queue_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__diagsMask__C, ".const:ti_sysbios_knl_Queue_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Module__diagsMask ti_sysbios_knl_Queue_Module__diagsMask__C = ((CT__ti_sysbios_knl_Queue_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__gateObj__C, ".const:ti_sysbios_knl_Queue_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Module__gateObj ti_sysbios_knl_Queue_Module__gateObj__C = ((CT__ti_sysbios_knl_Queue_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__gatePrms__C, ".const:ti_sysbios_knl_Queue_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Module__gatePrms ti_sysbios_knl_Queue_Module__gatePrms__C = ((CT__ti_sysbios_knl_Queue_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__id__C, ".const:ti_sysbios_knl_Queue_Module__id__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Module__id ti_sysbios_knl_Queue_Module__id__C = (xdc_Bits16)0x8021;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__loggerDefined__C, ".const:ti_sysbios_knl_Queue_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Module__loggerDefined ti_sysbios_knl_Queue_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__loggerObj__C, ".const:ti_sysbios_knl_Queue_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Module__loggerObj ti_sysbios_knl_Queue_Module__loggerObj__C = ((CT__ti_sysbios_knl_Queue_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__loggerFxn0__C, ".const:ti_sysbios_knl_Queue_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Module__loggerFxn0 ti_sysbios_knl_Queue_Module__loggerFxn0__C = ((CT__ti_sysbios_knl_Queue_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__loggerFxn1__C, ".const:ti_sysbios_knl_Queue_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Module__loggerFxn1 ti_sysbios_knl_Queue_Module__loggerFxn1__C = ((CT__ti_sysbios_knl_Queue_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__loggerFxn2__C, ".const:ti_sysbios_knl_Queue_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Module__loggerFxn2 ti_sysbios_knl_Queue_Module__loggerFxn2__C = ((CT__ti_sysbios_knl_Queue_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__loggerFxn4__C, ".const:ti_sysbios_knl_Queue_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Module__loggerFxn4 ti_sysbios_knl_Queue_Module__loggerFxn4__C = ((CT__ti_sysbios_knl_Queue_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__loggerFxn8__C, ".const:ti_sysbios_knl_Queue_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Module__loggerFxn8 ti_sysbios_knl_Queue_Module__loggerFxn8__C = ((CT__ti_sysbios_knl_Queue_Module__loggerFxn8)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Object__count__C, ".const:ti_sysbios_knl_Queue_Object__count__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Object__count ti_sysbios_knl_Queue_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Object__heap__C, ".const:ti_sysbios_knl_Queue_Object__heap__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Object__heap ti_sysbios_knl_Queue_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Object__sizeof__C, ".const:ti_sysbios_knl_Queue_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Object__sizeof ti_sysbios_knl_Queue_Object__sizeof__C = sizeof(ti_sysbios_knl_Queue_Object__);

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Object__table__C, ".const:ti_sysbios_knl_Queue_Object__table__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Object__table ti_sysbios_knl_Queue_Object__table__C = 0;


/*
 * ======== ti.sysbios.knl.Semaphore INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Semaphore_Object__DESC__C;

/* Object__PARAMS__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Object__PARAMS__C, ".const:ti_sysbios_knl_Semaphore_Object__PARAMS__C");
__FAR__ const ti_sysbios_knl_Semaphore_Params ti_sysbios_knl_Semaphore_Object__PARAMS__C = {
    sizeof (ti_sysbios_knl_Semaphore_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_knl_Semaphore_Object__PARAMS__C.__iprms, /* instance */
    0,  /* event */
    (xdc_UInt)0x1,  /* eventId */
    ti_sysbios_knl_Semaphore_Mode_COUNTING,  /* mode */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_knl_Semaphore_Module__ ti_sysbios_knl_Semaphore_Module__root__V = {
    {&ti_sysbios_knl_Semaphore_Module__root__V.link,  /* link.next */
    &ti_sysbios_knl_Semaphore_Module__root__V.link},  /* link.prev */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__diagsEnabled__C, ".const:ti_sysbios_knl_Semaphore_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__diagsEnabled ti_sysbios_knl_Semaphore_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__diagsIncluded__C, ".const:ti_sysbios_knl_Semaphore_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__diagsIncluded ti_sysbios_knl_Semaphore_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__diagsMask__C, ".const:ti_sysbios_knl_Semaphore_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__diagsMask ti_sysbios_knl_Semaphore_Module__diagsMask__C = ((CT__ti_sysbios_knl_Semaphore_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__gateObj__C, ".const:ti_sysbios_knl_Semaphore_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__gateObj ti_sysbios_knl_Semaphore_Module__gateObj__C = ((CT__ti_sysbios_knl_Semaphore_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__gatePrms__C, ".const:ti_sysbios_knl_Semaphore_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__gatePrms ti_sysbios_knl_Semaphore_Module__gatePrms__C = ((CT__ti_sysbios_knl_Semaphore_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__id__C, ".const:ti_sysbios_knl_Semaphore_Module__id__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__id ti_sysbios_knl_Semaphore_Module__id__C = (xdc_Bits16)0x8022;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__loggerDefined__C, ".const:ti_sysbios_knl_Semaphore_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__loggerDefined ti_sysbios_knl_Semaphore_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__loggerObj__C, ".const:ti_sysbios_knl_Semaphore_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__loggerObj ti_sysbios_knl_Semaphore_Module__loggerObj__C = ((CT__ti_sysbios_knl_Semaphore_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__loggerFxn0__C, ".const:ti_sysbios_knl_Semaphore_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__loggerFxn0 ti_sysbios_knl_Semaphore_Module__loggerFxn0__C = ((CT__ti_sysbios_knl_Semaphore_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__loggerFxn1__C, ".const:ti_sysbios_knl_Semaphore_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__loggerFxn1 ti_sysbios_knl_Semaphore_Module__loggerFxn1__C = ((CT__ti_sysbios_knl_Semaphore_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__loggerFxn2__C, ".const:ti_sysbios_knl_Semaphore_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__loggerFxn2 ti_sysbios_knl_Semaphore_Module__loggerFxn2__C = ((CT__ti_sysbios_knl_Semaphore_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__loggerFxn4__C, ".const:ti_sysbios_knl_Semaphore_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__loggerFxn4 ti_sysbios_knl_Semaphore_Module__loggerFxn4__C = ((CT__ti_sysbios_knl_Semaphore_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__loggerFxn8__C, ".const:ti_sysbios_knl_Semaphore_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__loggerFxn8 ti_sysbios_knl_Semaphore_Module__loggerFxn8__C = ((CT__ti_sysbios_knl_Semaphore_Module__loggerFxn8)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Object__count__C, ".const:ti_sysbios_knl_Semaphore_Object__count__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Object__count ti_sysbios_knl_Semaphore_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Object__heap__C, ".const:ti_sysbios_knl_Semaphore_Object__heap__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Object__heap ti_sysbios_knl_Semaphore_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Object__sizeof__C, ".const:ti_sysbios_knl_Semaphore_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Object__sizeof ti_sysbios_knl_Semaphore_Object__sizeof__C = sizeof(ti_sysbios_knl_Semaphore_Object__);

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Object__table__C, ".const:ti_sysbios_knl_Semaphore_Object__table__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Object__table ti_sysbios_knl_Semaphore_Object__table__C = 0;

/* LM_post__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_LM_post__C, ".const:ti_sysbios_knl_Semaphore_LM_post__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_LM_post ti_sysbios_knl_Semaphore_LM_post__C = (((xdc_runtime_Log_Event)5464) << 16 | 768);

/* LM_pend__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_LM_pend__C, ".const:ti_sysbios_knl_Semaphore_LM_pend__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_LM_pend ti_sysbios_knl_Semaphore_LM_pend__C = (((xdc_runtime_Log_Event)5494) << 16 | 768);

/* A_noEvents__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_A_noEvents__C, ".const:ti_sysbios_knl_Semaphore_A_noEvents__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_A_noEvents ti_sysbios_knl_Semaphore_A_noEvents__C = (((xdc_runtime_Assert_Id)936) << 16 | 16);

/* A_invTimeout__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_A_invTimeout__C, ".const:ti_sysbios_knl_Semaphore_A_invTimeout__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_A_invTimeout ti_sysbios_knl_Semaphore_A_invTimeout__C = (((xdc_runtime_Assert_Id)991) << 16 | 16);

/* A_badContext__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_A_badContext__C, ".const:ti_sysbios_knl_Semaphore_A_badContext__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_A_badContext ti_sysbios_knl_Semaphore_A_badContext__C = (((xdc_runtime_Assert_Id)725) << 16 | 16);

/* A_overflow__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_A_overflow__C, ".const:ti_sysbios_knl_Semaphore_A_overflow__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_A_overflow ti_sysbios_knl_Semaphore_A_overflow__C = (((xdc_runtime_Assert_Id)1056) << 16 | 16);

/* A_pendTaskDisabled__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_A_pendTaskDisabled__C, ".const:ti_sysbios_knl_Semaphore_A_pendTaskDisabled__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_A_pendTaskDisabled ti_sysbios_knl_Semaphore_A_pendTaskDisabled__C = (((xdc_runtime_Assert_Id)1110) << 16 | 16);

/* E_objectNotInKernelSpace__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_E_objectNotInKernelSpace__C, ".const:ti_sysbios_knl_Semaphore_E_objectNotInKernelSpace__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_E_objectNotInKernelSpace ti_sysbios_knl_Semaphore_E_objectNotInKernelSpace__C = (((xdc_runtime_Error_Id)4227) << 16 | 0);

/* supportsEvents__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_supportsEvents__C, ".const:ti_sysbios_knl_Semaphore_supportsEvents__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_supportsEvents ti_sysbios_knl_Semaphore_supportsEvents__C = 0;

/* supportsPriority__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_supportsPriority__C, ".const:ti_sysbios_knl_Semaphore_supportsPriority__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_supportsPriority ti_sysbios_knl_Semaphore_supportsPriority__C = 1;

/* eventPost__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_eventPost__C, ".const:ti_sysbios_knl_Semaphore_eventPost__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_eventPost ti_sysbios_knl_Semaphore_eventPost__C = ((CT__ti_sysbios_knl_Semaphore_eventPost)0);

/* eventSync__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_eventSync__C, ".const:ti_sysbios_knl_Semaphore_eventSync__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_eventSync ti_sysbios_knl_Semaphore_eventSync__C = ((CT__ti_sysbios_knl_Semaphore_eventSync)0);


/*
 * ======== ti.sysbios.knl.Swi INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Swi_Object__DESC__C;

/* Object__PARAMS__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Object__PARAMS__C, ".const:ti_sysbios_knl_Swi_Object__PARAMS__C");
__FAR__ const ti_sysbios_knl_Swi_Params ti_sysbios_knl_Swi_Object__PARAMS__C = {
    sizeof (ti_sysbios_knl_Swi_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_knl_Swi_Object__PARAMS__C.__iprms, /* instance */
    ((xdc_UArg)(0x0)),  /* arg0 */
    ((xdc_UArg)(0x0)),  /* arg1 */
    (xdc_UInt)(-0x0 - 1),  /* priority */
    (xdc_UInt)0x0,  /* trigger */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_knl_Swi_Module__ ti_sysbios_knl_Swi_Module__root__V = {
    {&ti_sysbios_knl_Swi_Module__root__V.link,  /* link.next */
    &ti_sysbios_knl_Swi_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_sysbios_knl_Swi_Object__ ti_sysbios_knl_Swi_Object__table__V[1] = {
    {/* instance#0 */
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Object__table__V[0].qElem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Object__table__V[0].qElem)),  /* prev */
        },  /* qElem */
        ((xdc_Void(*)(xdc_UArg,xdc_UArg))((xdc_Fxn)ti_sysbios_knl_Clock_workFunc__E)),  /* fxn */
        ((xdc_UArg)(0x0)),  /* arg0 */
        ((xdc_UArg)(0x0)),  /* arg1 */
        (xdc_UInt)0xf,  /* priority */
        (xdc_UInt)0x8000,  /* mask */
        0,  /* posted */
        (xdc_UInt)0x0,  /* initTrigger */
        (xdc_UInt)0x0,  /* trigger */
        (ti_sysbios_knl_Queue_Handle)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[15],  /* readyQ */
        ((void*)0),  /* hookEnv */
    },
};

/* --> ti_sysbios_knl_Swi_Module_State_0_readyQ__A */
__T1_ti_sysbios_knl_Swi_Module_State__readyQ ti_sysbios_knl_Swi_Module_State_0_readyQ__A[16] = {
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[0].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[0].elem)),  /* prev */
        },  /* elem */
    },  /* [0] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[1].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[1].elem)),  /* prev */
        },  /* elem */
    },  /* [1] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[2].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[2].elem)),  /* prev */
        },  /* elem */
    },  /* [2] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[3].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[3].elem)),  /* prev */
        },  /* elem */
    },  /* [3] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[4].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[4].elem)),  /* prev */
        },  /* elem */
    },  /* [4] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[5].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[5].elem)),  /* prev */
        },  /* elem */
    },  /* [5] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[6].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[6].elem)),  /* prev */
        },  /* elem */
    },  /* [6] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[7].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[7].elem)),  /* prev */
        },  /* elem */
    },  /* [7] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[8].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[8].elem)),  /* prev */
        },  /* elem */
    },  /* [8] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[9].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[9].elem)),  /* prev */
        },  /* elem */
    },  /* [9] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[10].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[10].elem)),  /* prev */
        },  /* elem */
    },  /* [10] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[11].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[11].elem)),  /* prev */
        },  /* elem */
    },  /* [11] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[12].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[12].elem)),  /* prev */
        },  /* elem */
    },  /* [12] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[13].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[13].elem)),  /* prev */
        },  /* elem */
    },  /* [13] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[14].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[14].elem)),  /* prev */
        },  /* elem */
    },  /* [14] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[15].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[15].elem)),  /* prev */
        },  /* elem */
    },  /* [15] */
};

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_ti_sysbios_knl_Swi_Module__state__V"
#endif
#if defined(__llvm__) && defined(__ti__)
ti_sysbios_knl_Swi_Module_State__ ti_sysbios_knl_Swi_Module__state__V __attribute__ ((section(".data:ti_sysbios_knl_Swi_Module__state__V")));
#elif defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __TI_COMPILER_VERSION__
ti_sysbios_knl_Swi_Module_State__ ti_sysbios_knl_Swi_Module__state__V __attribute__ ((section(".data_ti_sysbios_knl_Swi_Module__state__V")));
#endif
#endif
ti_sysbios_knl_Swi_Module_State__ ti_sysbios_knl_Swi_Module__state__V = {
    1,  /* locked */
    (xdc_UInt)0x0,  /* curSet */
    (xdc_UInt)0x0,  /* curTrigger */
    0,  /* curSwi */
    0,  /* curQ */
    ((void*)ti_sysbios_knl_Swi_Module_State_0_readyQ__A),  /* readyQ */
    ((void*)0),  /* constructedSwis */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__diagsEnabled__C, ".const:ti_sysbios_knl_Swi_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Module__diagsEnabled ti_sysbios_knl_Swi_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__diagsIncluded__C, ".const:ti_sysbios_knl_Swi_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Module__diagsIncluded ti_sysbios_knl_Swi_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__diagsMask__C, ".const:ti_sysbios_knl_Swi_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Module__diagsMask ti_sysbios_knl_Swi_Module__diagsMask__C = ((CT__ti_sysbios_knl_Swi_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__gateObj__C, ".const:ti_sysbios_knl_Swi_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Module__gateObj ti_sysbios_knl_Swi_Module__gateObj__C = ((CT__ti_sysbios_knl_Swi_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__gatePrms__C, ".const:ti_sysbios_knl_Swi_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Module__gatePrms ti_sysbios_knl_Swi_Module__gatePrms__C = ((CT__ti_sysbios_knl_Swi_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__id__C, ".const:ti_sysbios_knl_Swi_Module__id__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Module__id ti_sysbios_knl_Swi_Module__id__C = (xdc_Bits16)0x8023;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__loggerDefined__C, ".const:ti_sysbios_knl_Swi_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Module__loggerDefined ti_sysbios_knl_Swi_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__loggerObj__C, ".const:ti_sysbios_knl_Swi_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Module__loggerObj ti_sysbios_knl_Swi_Module__loggerObj__C = ((CT__ti_sysbios_knl_Swi_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__loggerFxn0__C, ".const:ti_sysbios_knl_Swi_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Module__loggerFxn0 ti_sysbios_knl_Swi_Module__loggerFxn0__C = ((CT__ti_sysbios_knl_Swi_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__loggerFxn1__C, ".const:ti_sysbios_knl_Swi_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Module__loggerFxn1 ti_sysbios_knl_Swi_Module__loggerFxn1__C = ((CT__ti_sysbios_knl_Swi_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__loggerFxn2__C, ".const:ti_sysbios_knl_Swi_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Module__loggerFxn2 ti_sysbios_knl_Swi_Module__loggerFxn2__C = ((CT__ti_sysbios_knl_Swi_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__loggerFxn4__C, ".const:ti_sysbios_knl_Swi_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Module__loggerFxn4 ti_sysbios_knl_Swi_Module__loggerFxn4__C = ((CT__ti_sysbios_knl_Swi_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__loggerFxn8__C, ".const:ti_sysbios_knl_Swi_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Module__loggerFxn8 ti_sysbios_knl_Swi_Module__loggerFxn8__C = ((CT__ti_sysbios_knl_Swi_Module__loggerFxn8)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Object__count__C, ".const:ti_sysbios_knl_Swi_Object__count__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Object__count ti_sysbios_knl_Swi_Object__count__C = 1;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Object__heap__C, ".const:ti_sysbios_knl_Swi_Object__heap__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Object__heap ti_sysbios_knl_Swi_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Object__sizeof__C, ".const:ti_sysbios_knl_Swi_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Object__sizeof ti_sysbios_knl_Swi_Object__sizeof__C = sizeof(ti_sysbios_knl_Swi_Object__);

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Object__table__C, ".const:ti_sysbios_knl_Swi_Object__table__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Object__table ti_sysbios_knl_Swi_Object__table__C = ti_sysbios_knl_Swi_Object__table__V;

/* LM_begin__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_LM_begin__C, ".const:ti_sysbios_knl_Swi_LM_begin__C");
__FAR__ const CT__ti_sysbios_knl_Swi_LM_begin ti_sysbios_knl_Swi_LM_begin__C = (((xdc_runtime_Log_Event)5537) << 16 | 768);

/* LD_end__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_LD_end__C, ".const:ti_sysbios_knl_Swi_LD_end__C");
__FAR__ const CT__ti_sysbios_knl_Swi_LD_end ti_sysbios_knl_Swi_LD_end__C = (((xdc_runtime_Log_Event)5584) << 16 | 512);

/* LM_post__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_LM_post__C, ".const:ti_sysbios_knl_Swi_LM_post__C");
__FAR__ const CT__ti_sysbios_knl_Swi_LM_post ti_sysbios_knl_Swi_LM_post__C = (((xdc_runtime_Log_Event)5602) << 16 | 768);

/* A_swiDisabled__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_A_swiDisabled__C, ".const:ti_sysbios_knl_Swi_A_swiDisabled__C");
__FAR__ const CT__ti_sysbios_knl_Swi_A_swiDisabled ti_sysbios_knl_Swi_A_swiDisabled__C = (((xdc_runtime_Assert_Id)1204) << 16 | 16);

/* A_badPriority__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_A_badPriority__C, ".const:ti_sysbios_knl_Swi_A_badPriority__C");
__FAR__ const CT__ti_sysbios_knl_Swi_A_badPriority ti_sysbios_knl_Swi_A_badPriority__C = (((xdc_runtime_Assert_Id)1261) << 16 | 16);

/* numPriorities__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_numPriorities__C, ".const:ti_sysbios_knl_Swi_numPriorities__C");
__FAR__ const CT__ti_sysbios_knl_Swi_numPriorities ti_sysbios_knl_Swi_numPriorities__C = (xdc_UInt)0x10;

/* hooks__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_hooks__C, ".const:ti_sysbios_knl_Swi_hooks__C");
__FAR__ const CT__ti_sysbios_knl_Swi_hooks ti_sysbios_knl_Swi_hooks__C = {0, 0};

/* taskDisable__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_taskDisable__C, ".const:ti_sysbios_knl_Swi_taskDisable__C");
__FAR__ const CT__ti_sysbios_knl_Swi_taskDisable ti_sysbios_knl_Swi_taskDisable__C = ((CT__ti_sysbios_knl_Swi_taskDisable)((xdc_Fxn)ti_sysbios_knl_Task_disable__E));

/* taskRestore__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_taskRestore__C, ".const:ti_sysbios_knl_Swi_taskRestore__C");
__FAR__ const CT__ti_sysbios_knl_Swi_taskRestore ti_sysbios_knl_Swi_taskRestore__C = ((CT__ti_sysbios_knl_Swi_taskRestore)((xdc_Fxn)ti_sysbios_knl_Task_restore__E));

/* numConstructedSwis__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_numConstructedSwis__C, ".const:ti_sysbios_knl_Swi_numConstructedSwis__C");
__FAR__ const CT__ti_sysbios_knl_Swi_numConstructedSwis ti_sysbios_knl_Swi_numConstructedSwis__C = (xdc_UInt)0x0;


/*
 * ======== ti.sysbios.knl.Task INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Task_Object__DESC__C;

/* Object__PARAMS__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Object__PARAMS__C, ".const:ti_sysbios_knl_Task_Object__PARAMS__C");
__FAR__ const ti_sysbios_knl_Task_Params ti_sysbios_knl_Task_Object__PARAMS__C = {
    sizeof (ti_sysbios_knl_Task_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_knl_Task_Object__PARAMS__C.__iprms, /* instance */
    ((xdc_UArg)(0x0)),  /* arg0 */
    ((xdc_UArg)(0x0)),  /* arg1 */
    (xdc_Int)0x1,  /* priority */
    ((xdc_Ptr)0),  /* stack */
    (xdc_SizeT)0x0,  /* stackSize */
    0,  /* stackHeap */
    ((xdc_Ptr)0),  /* env */
    1,  /* vitalTaskFlag */
    (xdc_UInt)0x0,  /* affinity */
    1,  /* privileged */
    ((xdc_Ptr)0),  /* domain */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* --> ti_sysbios_knl_Task_Instance_State_0_stack__A */
__T1_ti_sysbios_knl_Task_Instance_State__stack ti_sysbios_knl_Task_Instance_State_0_stack__A[800];

/* --> ti_sysbios_knl_Task_Instance_State_0_hookEnv__A */
__T1_ti_sysbios_knl_Task_Instance_State__hookEnv ti_sysbios_knl_Task_Instance_State_0_hookEnv__A[1];

/* Module__root__V */
ti_sysbios_knl_Task_Module__ ti_sysbios_knl_Task_Module__root__V = {
    {&ti_sysbios_knl_Task_Module__root__V.link,  /* link.next */
    &ti_sysbios_knl_Task_Module__root__V.link},  /* link.prev */
    256,  /* mask */
};

/* Object__table__V */
ti_sysbios_knl_Task_Object__ ti_sysbios_knl_Task_Object__table__V[1] = {
    {/* instance#0 */
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Object__table__V[0].qElem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Object__table__V[0].qElem)),  /* prev */
        },  /* qElem */
        (xdc_Int)0x0,  /* priority */
        (xdc_UInt)0x1,  /* mask */
        ((xdc_Ptr)0),  /* context */
        ti_sysbios_knl_Task_Mode_INACTIVE,  /* mode */
        ((ti_sysbios_knl_Task_PendElem*)0),  /* pendElem */
        (xdc_SizeT)0x320,  /* stackSize */
        ((void*)ti_sysbios_knl_Task_Instance_State_0_stack__A),  /* stack */
        0,  /* stackHeap */
        ((xdc_Void(*)(xdc_UArg,xdc_UArg))((xdc_Fxn)ti_sysbios_knl_Idle_loop__E)),  /* fxn */
        ((xdc_UArg)(0x0)),  /* arg0 */
        ((xdc_UArg)(0x0)),  /* arg1 */
        ((xdc_Ptr)0),  /* env */
        ((void*)ti_sysbios_knl_Task_Instance_State_0_hookEnv__A),  /* hookEnv */
        1,  /* vitalTaskFlag */
        0,  /* readyQ */
        (xdc_UInt)0x0,  /* curCoreId */
        (xdc_UInt)0x0,  /* affinity */
        1,  /* privileged */
        ((xdc_Ptr)0),  /* domain */
        (xdc_UInt32)0x0,  /* checkValue */
        ((xdc_Ptr)0),  /* tls */
    },
};

/* --> ti_sysbios_knl_Task_Module_State_0_readyQ__A */
__T1_ti_sysbios_knl_Task_Module_State__readyQ ti_sysbios_knl_Task_Module_State_0_readyQ__A[16] = {
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[0].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[0].elem)),  /* prev */
        },  /* elem */
    },  /* [0] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[1].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[1].elem)),  /* prev */
        },  /* elem */
    },  /* [1] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[2].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[2].elem)),  /* prev */
        },  /* elem */
    },  /* [2] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[3].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[3].elem)),  /* prev */
        },  /* elem */
    },  /* [3] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[4].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[4].elem)),  /* prev */
        },  /* elem */
    },  /* [4] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[5].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[5].elem)),  /* prev */
        },  /* elem */
    },  /* [5] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[6].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[6].elem)),  /* prev */
        },  /* elem */
    },  /* [6] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[7].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[7].elem)),  /* prev */
        },  /* elem */
    },  /* [7] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[8].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[8].elem)),  /* prev */
        },  /* elem */
    },  /* [8] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[9].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[9].elem)),  /* prev */
        },  /* elem */
    },  /* [9] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[10].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[10].elem)),  /* prev */
        },  /* elem */
    },  /* [10] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[11].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[11].elem)),  /* prev */
        },  /* elem */
    },  /* [11] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[12].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[12].elem)),  /* prev */
        },  /* elem */
    },  /* [12] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[13].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[13].elem)),  /* prev */
        },  /* elem */
    },  /* [13] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[14].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[14].elem)),  /* prev */
        },  /* elem */
    },  /* [14] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[15].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[15].elem)),  /* prev */
        },  /* elem */
    },  /* [15] */
};

/* --> ti_sysbios_knl_Task_Module_State_0_idleTask__A */
__T1_ti_sysbios_knl_Task_Module_State__idleTask ti_sysbios_knl_Task_Module_State_0_idleTask__A[1] = {
    (ti_sysbios_knl_Task_Handle)&ti_sysbios_knl_Task_Object__table__V[0],  /* [0] */
};

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_ti_sysbios_knl_Task_Module__state__V"
#endif
#if defined(__llvm__) && defined(__ti__)
ti_sysbios_knl_Task_Module_State__ ti_sysbios_knl_Task_Module__state__V __attribute__ ((section(".data:ti_sysbios_knl_Task_Module__state__V")));
#elif defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __TI_COMPILER_VERSION__
ti_sysbios_knl_Task_Module_State__ ti_sysbios_knl_Task_Module__state__V __attribute__ ((section(".data_ti_sysbios_knl_Task_Module__state__V")));
#endif
#endif
ti_sysbios_knl_Task_Module_State__ ti_sysbios_knl_Task_Module__state__V = {
    1,  /* locked */
    (xdc_UInt)0x0,  /* curSet */
    0,  /* workFlag */
    (xdc_UInt)0x1,  /* vitalTasks */
    0,  /* curTask */
    0,  /* curQ */
    ((void*)ti_sysbios_knl_Task_Module_State_0_readyQ__A),  /* readyQ */
    ((void*)0),  /* smpCurSet */
    ((void*)0),  /* smpCurMask */
    ((void*)0),  /* smpCurTask */
    ((void*)0),  /* smpReadyQ */
    ((void*)ti_sysbios_knl_Task_Module_State_0_idleTask__A),  /* idleTask */
    ((void*)0),  /* constructedTasks */
    1,  /* curTaskPrivileged */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module__state__V.Object_field_inactiveQ.elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module__state__V.Object_field_inactiveQ.elem)),  /* prev */
        },  /* elem */
    },  /* Object_field_inactiveQ */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module__state__V.Object_field_terminatedQ.elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module__state__V.Object_field_terminatedQ.elem)),  /* prev */
        },  /* elem */
    },  /* Object_field_terminatedQ */
};

/* --> ti_sysbios_knl_Task_hooks__A */
#pragma DATA_SECTION(ti_sysbios_knl_Task_hooks__A, ".const:ti_sysbios_knl_Task_hooks__A");
const __T1_ti_sysbios_knl_Task_hooks ti_sysbios_knl_Task_hooks__A[1] = {
    {
        ((xdc_Void(*)(xdc_Int))((xdc_Fxn)ti_sysbios_utils_Load_taskRegHook__E)),  /* registerFxn */
        ((xdc_Void(*)(ti_sysbios_knl_Task_Handle,xdc_runtime_Error_Block*))((xdc_Fxn)ti_sysbios_utils_Load_taskCreateHook__E)),  /* createFxn */
        ((xdc_Void(*)(ti_sysbios_knl_Task_Handle))0),  /* readyFxn */
        ((xdc_Void(*)(ti_sysbios_knl_Task_Handle,ti_sysbios_knl_Task_Handle))((xdc_Fxn)ti_sysbios_utils_Load_taskSwitchHook__E)),  /* switchFxn */
        ((xdc_Void(*)(ti_sysbios_knl_Task_Handle))0),  /* exitFxn */
        ((xdc_Void(*)(ti_sysbios_knl_Task_Handle))((xdc_Fxn)ti_sysbios_utils_Load_taskDeleteHook__E)),  /* deleteFxn */
    },  /* [0] */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__diagsEnabled__C, ".const:ti_sysbios_knl_Task_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_knl_Task_Module__diagsEnabled ti_sysbios_knl_Task_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__diagsIncluded__C, ".const:ti_sysbios_knl_Task_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_knl_Task_Module__diagsIncluded ti_sysbios_knl_Task_Module__diagsIncluded__C = (xdc_Bits32)0x190;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__diagsMask__C, ".const:ti_sysbios_knl_Task_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_knl_Task_Module__diagsMask ti_sysbios_knl_Task_Module__diagsMask__C = ((CT__ti_sysbios_knl_Task_Module__diagsMask)((void*)&ti_sysbios_knl_Task_Module__root__V.mask));

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__gateObj__C, ".const:ti_sysbios_knl_Task_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_knl_Task_Module__gateObj ti_sysbios_knl_Task_Module__gateObj__C = ((CT__ti_sysbios_knl_Task_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__gatePrms__C, ".const:ti_sysbios_knl_Task_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_knl_Task_Module__gatePrms ti_sysbios_knl_Task_Module__gatePrms__C = ((CT__ti_sysbios_knl_Task_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__id__C, ".const:ti_sysbios_knl_Task_Module__id__C");
__FAR__ const CT__ti_sysbios_knl_Task_Module__id ti_sysbios_knl_Task_Module__id__C = (xdc_Bits16)0x8024;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__loggerDefined__C, ".const:ti_sysbios_knl_Task_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_knl_Task_Module__loggerDefined ti_sysbios_knl_Task_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__loggerObj__C, ".const:ti_sysbios_knl_Task_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_knl_Task_Module__loggerObj ti_sysbios_knl_Task_Module__loggerObj__C = ((CT__ti_sysbios_knl_Task_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__loggerFxn0__C, ".const:ti_sysbios_knl_Task_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_knl_Task_Module__loggerFxn0 ti_sysbios_knl_Task_Module__loggerFxn0__C = ((CT__ti_sysbios_knl_Task_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__loggerFxn1__C, ".const:ti_sysbios_knl_Task_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_knl_Task_Module__loggerFxn1 ti_sysbios_knl_Task_Module__loggerFxn1__C = ((CT__ti_sysbios_knl_Task_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__loggerFxn2__C, ".const:ti_sysbios_knl_Task_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_knl_Task_Module__loggerFxn2 ti_sysbios_knl_Task_Module__loggerFxn2__C = ((CT__ti_sysbios_knl_Task_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__loggerFxn4__C, ".const:ti_sysbios_knl_Task_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_knl_Task_Module__loggerFxn4 ti_sysbios_knl_Task_Module__loggerFxn4__C = ((CT__ti_sysbios_knl_Task_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__loggerFxn8__C, ".const:ti_sysbios_knl_Task_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_knl_Task_Module__loggerFxn8 ti_sysbios_knl_Task_Module__loggerFxn8__C = ((CT__ti_sysbios_knl_Task_Module__loggerFxn8)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Object__count__C, ".const:ti_sysbios_knl_Task_Object__count__C");
__FAR__ const CT__ti_sysbios_knl_Task_Object__count ti_sysbios_knl_Task_Object__count__C = 1;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Object__heap__C, ".const:ti_sysbios_knl_Task_Object__heap__C");
__FAR__ const CT__ti_sysbios_knl_Task_Object__heap ti_sysbios_knl_Task_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Object__sizeof__C, ".const:ti_sysbios_knl_Task_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_knl_Task_Object__sizeof ti_sysbios_knl_Task_Object__sizeof__C = sizeof(ti_sysbios_knl_Task_Object__);

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Object__table__C, ".const:ti_sysbios_knl_Task_Object__table__C");
__FAR__ const CT__ti_sysbios_knl_Task_Object__table ti_sysbios_knl_Task_Object__table__C = ti_sysbios_knl_Task_Object__table__V;

/* LM_switch__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_LM_switch__C, ".const:ti_sysbios_knl_Task_LM_switch__C");
__FAR__ const CT__ti_sysbios_knl_Task_LM_switch ti_sysbios_knl_Task_LM_switch__C = (((xdc_runtime_Log_Event)5642) << 16 | 768);

/* LM_sleep__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_LM_sleep__C, ".const:ti_sysbios_knl_Task_LM_sleep__C");
__FAR__ const CT__ti_sysbios_knl_Task_LM_sleep ti_sysbios_knl_Task_LM_sleep__C = (((xdc_runtime_Log_Event)5710) << 16 | 768);

/* LD_ready__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_LD_ready__C, ".const:ti_sysbios_knl_Task_LD_ready__C");
__FAR__ const CT__ti_sysbios_knl_Task_LD_ready ti_sysbios_knl_Task_LD_ready__C = (((xdc_runtime_Log_Event)5755) << 16 | 512);

/* LD_block__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_LD_block__C, ".const:ti_sysbios_knl_Task_LD_block__C");
__FAR__ const CT__ti_sysbios_knl_Task_LD_block ti_sysbios_knl_Task_LD_block__C = (((xdc_runtime_Log_Event)5796) << 16 | 512);

/* LM_yield__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_LM_yield__C, ".const:ti_sysbios_knl_Task_LM_yield__C");
__FAR__ const CT__ti_sysbios_knl_Task_LM_yield ti_sysbios_knl_Task_LM_yield__C = (((xdc_runtime_Log_Event)5828) << 16 | 768);

/* LM_setPri__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_LM_setPri__C, ".const:ti_sysbios_knl_Task_LM_setPri__C");
__FAR__ const CT__ti_sysbios_knl_Task_LM_setPri ti_sysbios_knl_Task_LM_setPri__C = (((xdc_runtime_Log_Event)5876) << 16 | 768);

/* LD_exit__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_LD_exit__C, ".const:ti_sysbios_knl_Task_LD_exit__C");
__FAR__ const CT__ti_sysbios_knl_Task_LD_exit ti_sysbios_knl_Task_LD_exit__C = (((xdc_runtime_Log_Event)5932) << 16 | 512);

/* LM_setAffinity__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_LM_setAffinity__C, ".const:ti_sysbios_knl_Task_LM_setAffinity__C");
__FAR__ const CT__ti_sysbios_knl_Task_LM_setAffinity ti_sysbios_knl_Task_LM_setAffinity__C = (((xdc_runtime_Log_Event)5963) << 16 | 768);

/* LM_schedule__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_LM_schedule__C, ".const:ti_sysbios_knl_Task_LM_schedule__C");
__FAR__ const CT__ti_sysbios_knl_Task_LM_schedule ti_sysbios_knl_Task_LM_schedule__C = (((xdc_runtime_Log_Event)6046) << 16 | 1024);

/* LM_noWork__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_LM_noWork__C, ".const:ti_sysbios_knl_Task_LM_noWork__C");
__FAR__ const CT__ti_sysbios_knl_Task_LM_noWork ti_sysbios_knl_Task_LM_noWork__C = (((xdc_runtime_Log_Event)6132) << 16 | 1024);

/* E_stackOverflow__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_E_stackOverflow__C, ".const:ti_sysbios_knl_Task_E_stackOverflow__C");
__FAR__ const CT__ti_sysbios_knl_Task_E_stackOverflow ti_sysbios_knl_Task_E_stackOverflow__C = (((xdc_runtime_Error_Id)4306) << 16 | 0);

/* E_spOutOfBounds__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_E_spOutOfBounds__C, ".const:ti_sysbios_knl_Task_E_spOutOfBounds__C");
__FAR__ const CT__ti_sysbios_knl_Task_E_spOutOfBounds ti_sysbios_knl_Task_E_spOutOfBounds__C = (((xdc_runtime_Error_Id)4349) << 16 | 0);

/* E_deleteNotAllowed__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_E_deleteNotAllowed__C, ".const:ti_sysbios_knl_Task_E_deleteNotAllowed__C");
__FAR__ const CT__ti_sysbios_knl_Task_E_deleteNotAllowed ti_sysbios_knl_Task_E_deleteNotAllowed__C = (((xdc_runtime_Error_Id)4400) << 16 | 0);

/* E_moduleStateCheckFailed__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_E_moduleStateCheckFailed__C, ".const:ti_sysbios_knl_Task_E_moduleStateCheckFailed__C");
__FAR__ const CT__ti_sysbios_knl_Task_E_moduleStateCheckFailed ti_sysbios_knl_Task_E_moduleStateCheckFailed__C = (((xdc_runtime_Error_Id)4431) << 16 | 0);

/* E_objectCheckFailed__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_E_objectCheckFailed__C, ".const:ti_sysbios_knl_Task_E_objectCheckFailed__C");
__FAR__ const CT__ti_sysbios_knl_Task_E_objectCheckFailed ti_sysbios_knl_Task_E_objectCheckFailed__C = (((xdc_runtime_Error_Id)4504) << 16 | 0);

/* E_objectNotInKernelSpace__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_E_objectNotInKernelSpace__C, ".const:ti_sysbios_knl_Task_E_objectNotInKernelSpace__C");
__FAR__ const CT__ti_sysbios_knl_Task_E_objectNotInKernelSpace ti_sysbios_knl_Task_E_objectNotInKernelSpace__C = (((xdc_runtime_Error_Id)4571) << 16 | 0);

/* A_badThreadType__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_A_badThreadType__C, ".const:ti_sysbios_knl_Task_A_badThreadType__C");
__FAR__ const CT__ti_sysbios_knl_Task_A_badThreadType ti_sysbios_knl_Task_A_badThreadType__C = (((xdc_runtime_Assert_Id)1310) << 16 | 16);

/* A_badTaskState__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_A_badTaskState__C, ".const:ti_sysbios_knl_Task_A_badTaskState__C");
__FAR__ const CT__ti_sysbios_knl_Task_A_badTaskState ti_sysbios_knl_Task_A_badTaskState__C = (((xdc_runtime_Assert_Id)1379) << 16 | 16);

/* A_noPendElem__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_A_noPendElem__C, ".const:ti_sysbios_knl_Task_A_noPendElem__C");
__FAR__ const CT__ti_sysbios_knl_Task_A_noPendElem ti_sysbios_knl_Task_A_noPendElem__C = (((xdc_runtime_Assert_Id)1433) << 16 | 16);

/* A_taskDisabled__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_A_taskDisabled__C, ".const:ti_sysbios_knl_Task_A_taskDisabled__C");
__FAR__ const CT__ti_sysbios_knl_Task_A_taskDisabled ti_sysbios_knl_Task_A_taskDisabled__C = (((xdc_runtime_Assert_Id)1487) << 16 | 16);

/* A_badPriority__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_A_badPriority__C, ".const:ti_sysbios_knl_Task_A_badPriority__C");
__FAR__ const CT__ti_sysbios_knl_Task_A_badPriority ti_sysbios_knl_Task_A_badPriority__C = (((xdc_runtime_Assert_Id)1550) << 16 | 16);

/* A_badTimeout__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_A_badTimeout__C, ".const:ti_sysbios_knl_Task_A_badTimeout__C");
__FAR__ const CT__ti_sysbios_knl_Task_A_badTimeout ti_sysbios_knl_Task_A_badTimeout__C = (((xdc_runtime_Assert_Id)1600) << 16 | 16);

/* A_badAffinity__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_A_badAffinity__C, ".const:ti_sysbios_knl_Task_A_badAffinity__C");
__FAR__ const CT__ti_sysbios_knl_Task_A_badAffinity ti_sysbios_knl_Task_A_badAffinity__C = (((xdc_runtime_Assert_Id)1635) << 16 | 16);

/* A_sleepTaskDisabled__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_A_sleepTaskDisabled__C, ".const:ti_sysbios_knl_Task_A_sleepTaskDisabled__C");
__FAR__ const CT__ti_sysbios_knl_Task_A_sleepTaskDisabled ti_sysbios_knl_Task_A_sleepTaskDisabled__C = (((xdc_runtime_Assert_Id)1668) << 16 | 16);

/* A_invalidCoreId__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_A_invalidCoreId__C, ".const:ti_sysbios_knl_Task_A_invalidCoreId__C");
__FAR__ const CT__ti_sysbios_knl_Task_A_invalidCoreId ti_sysbios_knl_Task_A_invalidCoreId__C = (((xdc_runtime_Assert_Id)1752) << 16 | 16);

/* numPriorities__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_numPriorities__C, ".const:ti_sysbios_knl_Task_numPriorities__C");
__FAR__ const CT__ti_sysbios_knl_Task_numPriorities ti_sysbios_knl_Task_numPriorities__C = (xdc_UInt)0x10;

/* defaultStackSize__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_defaultStackSize__C, ".const:ti_sysbios_knl_Task_defaultStackSize__C");
__FAR__ const CT__ti_sysbios_knl_Task_defaultStackSize ti_sysbios_knl_Task_defaultStackSize__C = (xdc_SizeT)0x800;

/* defaultStackHeap__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_defaultStackHeap__C, ".const:ti_sysbios_knl_Task_defaultStackHeap__C");
__FAR__ const CT__ti_sysbios_knl_Task_defaultStackHeap ti_sysbios_knl_Task_defaultStackHeap__C = 0;

/* allBlockedFunc__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_allBlockedFunc__C, ".const:ti_sysbios_knl_Task_allBlockedFunc__C");
__FAR__ const CT__ti_sysbios_knl_Task_allBlockedFunc ti_sysbios_knl_Task_allBlockedFunc__C = ((CT__ti_sysbios_knl_Task_allBlockedFunc)0);

/* initStackFlag__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_initStackFlag__C, ".const:ti_sysbios_knl_Task_initStackFlag__C");
__FAR__ const CT__ti_sysbios_knl_Task_initStackFlag ti_sysbios_knl_Task_initStackFlag__C = 1;

/* checkStackFlag__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_checkStackFlag__C, ".const:ti_sysbios_knl_Task_checkStackFlag__C");
__FAR__ const CT__ti_sysbios_knl_Task_checkStackFlag ti_sysbios_knl_Task_checkStackFlag__C = 1;

/* deleteTerminatedTasks__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_deleteTerminatedTasks__C, ".const:ti_sysbios_knl_Task_deleteTerminatedTasks__C");
__FAR__ const CT__ti_sysbios_knl_Task_deleteTerminatedTasks ti_sysbios_knl_Task_deleteTerminatedTasks__C = 0;

/* hooks__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_hooks__C, ".const:ti_sysbios_knl_Task_hooks__C");
__FAR__ const CT__ti_sysbios_knl_Task_hooks ti_sysbios_knl_Task_hooks__C = {1, ((__T1_ti_sysbios_knl_Task_hooks *)ti_sysbios_knl_Task_hooks__A)};

/* moduleStateCheckFxn__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_moduleStateCheckFxn__C, ".const:ti_sysbios_knl_Task_moduleStateCheckFxn__C");
__FAR__ const CT__ti_sysbios_knl_Task_moduleStateCheckFxn ti_sysbios_knl_Task_moduleStateCheckFxn__C = ((CT__ti_sysbios_knl_Task_moduleStateCheckFxn)((xdc_Fxn)ti_sysbios_knl_Task_moduleStateCheck__I));

/* moduleStateCheckValueFxn__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_moduleStateCheckValueFxn__C, ".const:ti_sysbios_knl_Task_moduleStateCheckValueFxn__C");
__FAR__ const CT__ti_sysbios_knl_Task_moduleStateCheckValueFxn ti_sysbios_knl_Task_moduleStateCheckValueFxn__C = ((CT__ti_sysbios_knl_Task_moduleStateCheckValueFxn)((xdc_Fxn)ti_sysbios_knl_Task_getModuleStateCheckValue__I));

/* moduleStateCheckFlag__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_moduleStateCheckFlag__C, ".const:ti_sysbios_knl_Task_moduleStateCheckFlag__C");
__FAR__ const CT__ti_sysbios_knl_Task_moduleStateCheckFlag ti_sysbios_knl_Task_moduleStateCheckFlag__C = 0;

/* objectCheckFxn__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_objectCheckFxn__C, ".const:ti_sysbios_knl_Task_objectCheckFxn__C");
__FAR__ const CT__ti_sysbios_knl_Task_objectCheckFxn ti_sysbios_knl_Task_objectCheckFxn__C = ((CT__ti_sysbios_knl_Task_objectCheckFxn)((xdc_Fxn)ti_sysbios_knl_Task_objectCheck__I));

/* objectCheckValueFxn__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_objectCheckValueFxn__C, ".const:ti_sysbios_knl_Task_objectCheckValueFxn__C");
__FAR__ const CT__ti_sysbios_knl_Task_objectCheckValueFxn ti_sysbios_knl_Task_objectCheckValueFxn__C = ((CT__ti_sysbios_knl_Task_objectCheckValueFxn)((xdc_Fxn)ti_sysbios_knl_Task_getObjectCheckValue__I));

/* objectCheckFlag__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_objectCheckFlag__C, ".const:ti_sysbios_knl_Task_objectCheckFlag__C");
__FAR__ const CT__ti_sysbios_knl_Task_objectCheckFlag ti_sysbios_knl_Task_objectCheckFlag__C = 0;

/* numConstructedTasks__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_numConstructedTasks__C, ".const:ti_sysbios_knl_Task_numConstructedTasks__C");
__FAR__ const CT__ti_sysbios_knl_Task_numConstructedTasks ti_sysbios_knl_Task_numConstructedTasks__C = (xdc_UInt)0x0;

/* startupHookFunc__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_startupHookFunc__C, ".const:ti_sysbios_knl_Task_startupHookFunc__C");
__FAR__ const CT__ti_sysbios_knl_Task_startupHookFunc ti_sysbios_knl_Task_startupHookFunc__C = ((CT__ti_sysbios_knl_Task_startupHookFunc)0);


/*
 * ======== ti.sysbios.knl.Task_SupportProxy INITIALIZERS ========
 */


/*
 * ======== ti.sysbios.rts.ti.ThreadLocalStorage INITIALIZERS ========
 */

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_ti_sysbios_rts_ti_ThreadLocalStorage_Module__state__V"
#endif
#if defined(__llvm__) && defined(__ti__)
ti_sysbios_rts_ti_ThreadLocalStorage_Module_State__ ti_sysbios_rts_ti_ThreadLocalStorage_Module__state__V __attribute__ ((section(".data:ti_sysbios_rts_ti_ThreadLocalStorage_Module__state__V")));
#elif defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __TI_COMPILER_VERSION__
ti_sysbios_rts_ti_ThreadLocalStorage_Module_State__ ti_sysbios_rts_ti_ThreadLocalStorage_Module__state__V __attribute__ ((section(".data_ti_sysbios_rts_ti_ThreadLocalStorage_Module__state__V")));
#endif
#endif
ti_sysbios_rts_ti_ThreadLocalStorage_Module_State__ ti_sysbios_rts_ti_ThreadLocalStorage_Module__state__V = {
    ((xdc_Ptr)((void*)"&__TI_TLS_MAIN_THREAD_Base")),  /* currentTP */
    (xdc_UInt)(-0x0 - 1),  /* contextId */
    0,  /* heapHandle */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_rts_ti_ThreadLocalStorage_Module__diagsEnabled__C, ".const:ti_sysbios_rts_ti_ThreadLocalStorage_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_rts_ti_ThreadLocalStorage_Module__diagsEnabled ti_sysbios_rts_ti_ThreadLocalStorage_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_rts_ti_ThreadLocalStorage_Module__diagsIncluded__C, ".const:ti_sysbios_rts_ti_ThreadLocalStorage_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_rts_ti_ThreadLocalStorage_Module__diagsIncluded ti_sysbios_rts_ti_ThreadLocalStorage_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_rts_ti_ThreadLocalStorage_Module__diagsMask__C, ".const:ti_sysbios_rts_ti_ThreadLocalStorage_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_rts_ti_ThreadLocalStorage_Module__diagsMask ti_sysbios_rts_ti_ThreadLocalStorage_Module__diagsMask__C = ((CT__ti_sysbios_rts_ti_ThreadLocalStorage_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_rts_ti_ThreadLocalStorage_Module__gateObj__C, ".const:ti_sysbios_rts_ti_ThreadLocalStorage_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_rts_ti_ThreadLocalStorage_Module__gateObj ti_sysbios_rts_ti_ThreadLocalStorage_Module__gateObj__C = ((CT__ti_sysbios_rts_ti_ThreadLocalStorage_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_rts_ti_ThreadLocalStorage_Module__gatePrms__C, ".const:ti_sysbios_rts_ti_ThreadLocalStorage_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_rts_ti_ThreadLocalStorage_Module__gatePrms ti_sysbios_rts_ti_ThreadLocalStorage_Module__gatePrms__C = ((CT__ti_sysbios_rts_ti_ThreadLocalStorage_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_rts_ti_ThreadLocalStorage_Module__id__C, ".const:ti_sysbios_rts_ti_ThreadLocalStorage_Module__id__C");
__FAR__ const CT__ti_sysbios_rts_ti_ThreadLocalStorage_Module__id ti_sysbios_rts_ti_ThreadLocalStorage_Module__id__C = (xdc_Bits16)0x802c;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_rts_ti_ThreadLocalStorage_Module__loggerDefined__C, ".const:ti_sysbios_rts_ti_ThreadLocalStorage_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_rts_ti_ThreadLocalStorage_Module__loggerDefined ti_sysbios_rts_ti_ThreadLocalStorage_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_rts_ti_ThreadLocalStorage_Module__loggerObj__C, ".const:ti_sysbios_rts_ti_ThreadLocalStorage_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_rts_ti_ThreadLocalStorage_Module__loggerObj ti_sysbios_rts_ti_ThreadLocalStorage_Module__loggerObj__C = ((CT__ti_sysbios_rts_ti_ThreadLocalStorage_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_rts_ti_ThreadLocalStorage_Module__loggerFxn0__C, ".const:ti_sysbios_rts_ti_ThreadLocalStorage_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_rts_ti_ThreadLocalStorage_Module__loggerFxn0 ti_sysbios_rts_ti_ThreadLocalStorage_Module__loggerFxn0__C = ((CT__ti_sysbios_rts_ti_ThreadLocalStorage_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_rts_ti_ThreadLocalStorage_Module__loggerFxn1__C, ".const:ti_sysbios_rts_ti_ThreadLocalStorage_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_rts_ti_ThreadLocalStorage_Module__loggerFxn1 ti_sysbios_rts_ti_ThreadLocalStorage_Module__loggerFxn1__C = ((CT__ti_sysbios_rts_ti_ThreadLocalStorage_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_rts_ti_ThreadLocalStorage_Module__loggerFxn2__C, ".const:ti_sysbios_rts_ti_ThreadLocalStorage_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_rts_ti_ThreadLocalStorage_Module__loggerFxn2 ti_sysbios_rts_ti_ThreadLocalStorage_Module__loggerFxn2__C = ((CT__ti_sysbios_rts_ti_ThreadLocalStorage_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_rts_ti_ThreadLocalStorage_Module__loggerFxn4__C, ".const:ti_sysbios_rts_ti_ThreadLocalStorage_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_rts_ti_ThreadLocalStorage_Module__loggerFxn4 ti_sysbios_rts_ti_ThreadLocalStorage_Module__loggerFxn4__C = ((CT__ti_sysbios_rts_ti_ThreadLocalStorage_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_rts_ti_ThreadLocalStorage_Module__loggerFxn8__C, ".const:ti_sysbios_rts_ti_ThreadLocalStorage_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_rts_ti_ThreadLocalStorage_Module__loggerFxn8 ti_sysbios_rts_ti_ThreadLocalStorage_Module__loggerFxn8__C = ((CT__ti_sysbios_rts_ti_ThreadLocalStorage_Module__loggerFxn8)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_rts_ti_ThreadLocalStorage_Object__count__C, ".const:ti_sysbios_rts_ti_ThreadLocalStorage_Object__count__C");
__FAR__ const CT__ti_sysbios_rts_ti_ThreadLocalStorage_Object__count ti_sysbios_rts_ti_ThreadLocalStorage_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_rts_ti_ThreadLocalStorage_Object__heap__C, ".const:ti_sysbios_rts_ti_ThreadLocalStorage_Object__heap__C");
__FAR__ const CT__ti_sysbios_rts_ti_ThreadLocalStorage_Object__heap ti_sysbios_rts_ti_ThreadLocalStorage_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_rts_ti_ThreadLocalStorage_Object__sizeof__C, ".const:ti_sysbios_rts_ti_ThreadLocalStorage_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_rts_ti_ThreadLocalStorage_Object__sizeof ti_sysbios_rts_ti_ThreadLocalStorage_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_rts_ti_ThreadLocalStorage_Object__table__C, ".const:ti_sysbios_rts_ti_ThreadLocalStorage_Object__table__C");
__FAR__ const CT__ti_sysbios_rts_ti_ThreadLocalStorage_Object__table ti_sysbios_rts_ti_ThreadLocalStorage_Object__table__C = 0;

/* heapHandle__C */
#pragma DATA_SECTION(ti_sysbios_rts_ti_ThreadLocalStorage_heapHandle__C, ".const:ti_sysbios_rts_ti_ThreadLocalStorage_heapHandle__C");
__FAR__ const CT__ti_sysbios_rts_ti_ThreadLocalStorage_heapHandle ti_sysbios_rts_ti_ThreadLocalStorage_heapHandle__C = 0;

/* enableTLSSupport__C */
#pragma DATA_SECTION(ti_sysbios_rts_ti_ThreadLocalStorage_enableTLSSupport__C, ".const:ti_sysbios_rts_ti_ThreadLocalStorage_enableTLSSupport__C");
__FAR__ const CT__ti_sysbios_rts_ti_ThreadLocalStorage_enableTLSSupport ti_sysbios_rts_ti_ThreadLocalStorage_enableTLSSupport__C = 0;

/* TItlsSectMemory__C */
#pragma DATA_SECTION(ti_sysbios_rts_ti_ThreadLocalStorage_TItlsSectMemory__C, ".const:ti_sysbios_rts_ti_ThreadLocalStorage_TItlsSectMemory__C");
__FAR__ const CT__ti_sysbios_rts_ti_ThreadLocalStorage_TItlsSectMemory ti_sysbios_rts_ti_ThreadLocalStorage_TItlsSectMemory__C = 0;

/* TItls_initSectMemory__C */
#pragma DATA_SECTION(ti_sysbios_rts_ti_ThreadLocalStorage_TItls_initSectMemory__C, ".const:ti_sysbios_rts_ti_ThreadLocalStorage_TItls_initSectMemory__C");
__FAR__ const CT__ti_sysbios_rts_ti_ThreadLocalStorage_TItls_initSectMemory ti_sysbios_rts_ti_ThreadLocalStorage_TItls_initSectMemory__C = 0;


/*
 * ======== ti.sysbios.timers.rti.Timer INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_timers_rti_Timer_Object__DESC__C;

/* Object__PARAMS__C */
#pragma DATA_SECTION(ti_sysbios_timers_rti_Timer_Object__PARAMS__C, ".const:ti_sysbios_timers_rti_Timer_Object__PARAMS__C");
__FAR__ const ti_sysbios_timers_rti_Timer_Params ti_sysbios_timers_rti_Timer_Object__PARAMS__C = {
    sizeof (ti_sysbios_timers_rti_Timer_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_timers_rti_Timer_Object__PARAMS__C.__iprms, /* instance */
    ti_sysbios_interfaces_ITimer_RunMode_CONTINUOUS,  /* runMode */
    ti_sysbios_interfaces_ITimer_StartMode_AUTO,  /* startMode */
    ((xdc_UArg)0),  /* arg */
    (xdc_UInt32)0x0,  /* period */
    ti_sysbios_interfaces_ITimer_PeriodType_MICROSECS,  /* periodType */
    {
        (xdc_Bits32)0x0,  /* hi */
        (xdc_Bits32)0x0,  /* lo */
    },  /* extFreq */
    1,  /* createHwi */
    ((ti_sysbios_hal_Hwi_Params*)0),  /* hwiParams */
    (xdc_UInt8)0x1,  /* prescale */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_timers_rti_Timer_Module__ ti_sysbios_timers_rti_Timer_Module__root__V = {
    {&ti_sysbios_timers_rti_Timer_Module__root__V.link,  /* link.next */
    &ti_sysbios_timers_rti_Timer_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_sysbios_timers_rti_Timer_Object__ ti_sysbios_timers_rti_Timer_Object__table__V[1] = {
    {/* instance#0 */
        0,
        1,  /* staticInst */
        (xdc_Int)0x0,  /* id */
        ti_sysbios_interfaces_ITimer_RunMode_CONTINUOUS,  /* runMode */
        ti_sysbios_interfaces_ITimer_StartMode_AUTO,  /* startMode */
        (xdc_UInt)0x1,  /* prescale */
        (xdc_UInt)0x3e8,  /* period */
        ti_sysbios_interfaces_ITimer_PeriodType_MICROSECS,  /* periodType */
        (xdc_UInt)0xe,  /* intNum */
        ((xdc_UArg)0),  /* arg */
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_knl_Clock_doTick__I)),  /* tickFxn */
        {
            (xdc_Bits32)0x0,  /* hi */
            (xdc_Bits32)0x0,  /* lo */
        },  /* extFreq */
        (ti_sysbios_hal_Hwi_Handle)&ti_sysbios_hal_Hwi_Object__table__V[0],  /* hwi */
        1,  /* createHwi */
    },
};

/* --> ti_sysbios_timers_rti_Timer_Module_State_0_device__A */
__T1_ti_sysbios_timers_rti_Timer_Module_State__device ti_sysbios_timers_rti_Timer_Module_State_0_device__A[2] = {
    {
        (xdc_Int)0xe,  /* intNum */
        (xdc_Int)0x4b,  /* eventId */
        ((xdc_Ptr)((void*)0x2020000)),  /* baseAddr */
    },  /* [0] */
    {
        (xdc_Int)0xf,  /* intNum */
        (xdc_Int)0x4c,  /* eventId */
        ((xdc_Ptr)((void*)0x2020000)),  /* baseAddr */
    },  /* [1] */
};

/* --> ti_sysbios_timers_rti_Timer_Module_State_0_intFreqs__A */
__T1_ti_sysbios_timers_rti_Timer_Module_State__intFreqs ti_sysbios_timers_rti_Timer_Module_State_0_intFreqs__A[2] = {
    {
        (xdc_Bits32)0x0,  /* hi */
        (xdc_Bits32)0xbebc200,  /* lo */
    },  /* [0] */
    {
        (xdc_Bits32)0x0,  /* hi */
        (xdc_Bits32)0xbebc200,  /* lo */
    },  /* [1] */
};

/* --> ti_sysbios_timers_rti_Timer_Module_State_0_handles__A */
__T1_ti_sysbios_timers_rti_Timer_Module_State__handles ti_sysbios_timers_rti_Timer_Module_State_0_handles__A[2] = {
    (ti_sysbios_timers_rti_Timer_Handle)&ti_sysbios_timers_rti_Timer_Object__table__V[0],  /* [0] */
    0,  /* [1] */
};

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_ti_sysbios_timers_rti_Timer_Module__state__V"
#endif
#if defined(__llvm__) && defined(__ti__)
ti_sysbios_timers_rti_Timer_Module_State__ ti_sysbios_timers_rti_Timer_Module__state__V __attribute__ ((section(".data:ti_sysbios_timers_rti_Timer_Module__state__V")));
#elif defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __TI_COMPILER_VERSION__
ti_sysbios_timers_rti_Timer_Module_State__ ti_sysbios_timers_rti_Timer_Module__state__V __attribute__ ((section(".data_ti_sysbios_timers_rti_Timer_Module__state__V")));
#endif
#endif
ti_sysbios_timers_rti_Timer_Module_State__ ti_sysbios_timers_rti_Timer_Module__state__V = {
    (xdc_UInt)0x2,  /* availMask */
    ((void*)ti_sysbios_timers_rti_Timer_Module_State_0_device__A),  /* device */
    ((void*)ti_sysbios_timers_rti_Timer_Module_State_0_intFreqs__A),  /* intFreqs */
    ((void*)ti_sysbios_timers_rti_Timer_Module_State_0_handles__A),  /* handles */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_timers_rti_Timer_Module__diagsEnabled__C, ".const:ti_sysbios_timers_rti_Timer_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_timers_rti_Timer_Module__diagsEnabled ti_sysbios_timers_rti_Timer_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_timers_rti_Timer_Module__diagsIncluded__C, ".const:ti_sysbios_timers_rti_Timer_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_timers_rti_Timer_Module__diagsIncluded ti_sysbios_timers_rti_Timer_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_timers_rti_Timer_Module__diagsMask__C, ".const:ti_sysbios_timers_rti_Timer_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_timers_rti_Timer_Module__diagsMask ti_sysbios_timers_rti_Timer_Module__diagsMask__C = ((CT__ti_sysbios_timers_rti_Timer_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_timers_rti_Timer_Module__gateObj__C, ".const:ti_sysbios_timers_rti_Timer_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_timers_rti_Timer_Module__gateObj ti_sysbios_timers_rti_Timer_Module__gateObj__C = ((CT__ti_sysbios_timers_rti_Timer_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_timers_rti_Timer_Module__gatePrms__C, ".const:ti_sysbios_timers_rti_Timer_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_timers_rti_Timer_Module__gatePrms ti_sysbios_timers_rti_Timer_Module__gatePrms__C = ((CT__ti_sysbios_timers_rti_Timer_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_timers_rti_Timer_Module__id__C, ".const:ti_sysbios_timers_rti_Timer_Module__id__C");
__FAR__ const CT__ti_sysbios_timers_rti_Timer_Module__id ti_sysbios_timers_rti_Timer_Module__id__C = (xdc_Bits16)0x8037;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_timers_rti_Timer_Module__loggerDefined__C, ".const:ti_sysbios_timers_rti_Timer_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_timers_rti_Timer_Module__loggerDefined ti_sysbios_timers_rti_Timer_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_timers_rti_Timer_Module__loggerObj__C, ".const:ti_sysbios_timers_rti_Timer_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_timers_rti_Timer_Module__loggerObj ti_sysbios_timers_rti_Timer_Module__loggerObj__C = ((CT__ti_sysbios_timers_rti_Timer_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_timers_rti_Timer_Module__loggerFxn0__C, ".const:ti_sysbios_timers_rti_Timer_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_timers_rti_Timer_Module__loggerFxn0 ti_sysbios_timers_rti_Timer_Module__loggerFxn0__C = ((CT__ti_sysbios_timers_rti_Timer_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_timers_rti_Timer_Module__loggerFxn1__C, ".const:ti_sysbios_timers_rti_Timer_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_timers_rti_Timer_Module__loggerFxn1 ti_sysbios_timers_rti_Timer_Module__loggerFxn1__C = ((CT__ti_sysbios_timers_rti_Timer_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_timers_rti_Timer_Module__loggerFxn2__C, ".const:ti_sysbios_timers_rti_Timer_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_timers_rti_Timer_Module__loggerFxn2 ti_sysbios_timers_rti_Timer_Module__loggerFxn2__C = ((CT__ti_sysbios_timers_rti_Timer_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_timers_rti_Timer_Module__loggerFxn4__C, ".const:ti_sysbios_timers_rti_Timer_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_timers_rti_Timer_Module__loggerFxn4 ti_sysbios_timers_rti_Timer_Module__loggerFxn4__C = ((CT__ti_sysbios_timers_rti_Timer_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_timers_rti_Timer_Module__loggerFxn8__C, ".const:ti_sysbios_timers_rti_Timer_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_timers_rti_Timer_Module__loggerFxn8 ti_sysbios_timers_rti_Timer_Module__loggerFxn8__C = ((CT__ti_sysbios_timers_rti_Timer_Module__loggerFxn8)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_timers_rti_Timer_Object__count__C, ".const:ti_sysbios_timers_rti_Timer_Object__count__C");
__FAR__ const CT__ti_sysbios_timers_rti_Timer_Object__count ti_sysbios_timers_rti_Timer_Object__count__C = 1;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_timers_rti_Timer_Object__heap__C, ".const:ti_sysbios_timers_rti_Timer_Object__heap__C");
__FAR__ const CT__ti_sysbios_timers_rti_Timer_Object__heap ti_sysbios_timers_rti_Timer_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_timers_rti_Timer_Object__sizeof__C, ".const:ti_sysbios_timers_rti_Timer_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_timers_rti_Timer_Object__sizeof ti_sysbios_timers_rti_Timer_Object__sizeof__C = sizeof(ti_sysbios_timers_rti_Timer_Object__);

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_timers_rti_Timer_Object__table__C, ".const:ti_sysbios_timers_rti_Timer_Object__table__C");
__FAR__ const CT__ti_sysbios_timers_rti_Timer_Object__table ti_sysbios_timers_rti_Timer_Object__table__C = ti_sysbios_timers_rti_Timer_Object__table__V;

/* A_invalidTimer__C */
#pragma DATA_SECTION(ti_sysbios_timers_rti_Timer_A_invalidTimer__C, ".const:ti_sysbios_timers_rti_Timer_A_invalidTimer__C");
__FAR__ const CT__ti_sysbios_timers_rti_Timer_A_invalidTimer ti_sysbios_timers_rti_Timer_A_invalidTimer__C = (((xdc_runtime_Assert_Id)3393) << 16 | 16);

/* E_invalidTimer__C */
#pragma DATA_SECTION(ti_sysbios_timers_rti_Timer_E_invalidTimer__C, ".const:ti_sysbios_timers_rti_Timer_E_invalidTimer__C");
__FAR__ const CT__ti_sysbios_timers_rti_Timer_E_invalidTimer ti_sysbios_timers_rti_Timer_E_invalidTimer__C = (((xdc_runtime_Error_Id)4808) << 16 | 0);

/* E_notAvailable__C */
#pragma DATA_SECTION(ti_sysbios_timers_rti_Timer_E_notAvailable__C, ".const:ti_sysbios_timers_rti_Timer_E_notAvailable__C");
__FAR__ const CT__ti_sysbios_timers_rti_Timer_E_notAvailable ti_sysbios_timers_rti_Timer_E_notAvailable__C = (((xdc_runtime_Error_Id)4844) << 16 | 0);

/* E_invalidHwiMask__C */
#pragma DATA_SECTION(ti_sysbios_timers_rti_Timer_E_invalidHwiMask__C, ".const:ti_sysbios_timers_rti_Timer_E_invalidHwiMask__C");
__FAR__ const CT__ti_sysbios_timers_rti_Timer_E_invalidHwiMask ti_sysbios_timers_rti_Timer_E_invalidHwiMask__C = (((xdc_runtime_Error_Id)4883) << 16 | 0);

/* E_cannotSupport__C */
#pragma DATA_SECTION(ti_sysbios_timers_rti_Timer_E_cannotSupport__C, ".const:ti_sysbios_timers_rti_Timer_E_cannotSupport__C");
__FAR__ const CT__ti_sysbios_timers_rti_Timer_E_cannotSupport ti_sysbios_timers_rti_Timer_E_cannotSupport__C = (((xdc_runtime_Error_Id)4935) << 16 | 0);

/* anyMask__C */
#pragma DATA_SECTION(ti_sysbios_timers_rti_Timer_anyMask__C, ".const:ti_sysbios_timers_rti_Timer_anyMask__C");
__FAR__ const CT__ti_sysbios_timers_rti_Timer_anyMask ti_sysbios_timers_rti_Timer_anyMask__C = (xdc_UInt)0x3;

/* continueOnSuspend__C */
#pragma DATA_SECTION(ti_sysbios_timers_rti_Timer_continueOnSuspend__C, ".const:ti_sysbios_timers_rti_Timer_continueOnSuspend__C");
__FAR__ const CT__ti_sysbios_timers_rti_Timer_continueOnSuspend ti_sysbios_timers_rti_Timer_continueOnSuspend__C = 0;

/* startupNeeded__C */
#pragma DATA_SECTION(ti_sysbios_timers_rti_Timer_startupNeeded__C, ".const:ti_sysbios_timers_rti_Timer_startupNeeded__C");
__FAR__ const CT__ti_sysbios_timers_rti_Timer_startupNeeded ti_sysbios_timers_rti_Timer_startupNeeded__C = (xdc_UInt)0x1;

/* numTimerDevices__C */
#pragma DATA_SECTION(ti_sysbios_timers_rti_Timer_numTimerDevices__C, ".const:ti_sysbios_timers_rti_Timer_numTimerDevices__C");
__FAR__ const CT__ti_sysbios_timers_rti_Timer_numTimerDevices ti_sysbios_timers_rti_Timer_numTimerDevices__C = (xdc_Int)0x2;


/*
 * ======== ti.sysbios.utils.Load INITIALIZERS ========
 */

/* --> ti_sysbios_utils_Load_Module_State_0_taskStartTime__A */
__T1_ti_sysbios_utils_Load_Module_State__taskStartTime ti_sysbios_utils_Load_Module_State_0_taskStartTime__A[1] = {
    (xdc_UInt32)0x0,  /* [0] */
};

/* --> ti_sysbios_utils_Load_Module_State_0_runningTask__A */
__T1_ti_sysbios_utils_Load_Module_State__runningTask ti_sysbios_utils_Load_Module_State_0_runningTask__A[1] = {
    0,  /* [0] */
};

/* --> ti_sysbios_utils_Load_Module_State_0_taskEnv__A */
__T1_ti_sysbios_utils_Load_Module_State__taskEnv ti_sysbios_utils_Load_Module_State_0_taskEnv__A[1] = {
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_utils_Load_Module_State_0_taskEnv__A[0].qElem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_utils_Load_Module_State_0_taskEnv__A[0].qElem)),  /* prev */
        },  /* qElem */
        (xdc_UInt32)0x0,  /* totalTimeElapsed */
        (xdc_UInt32)0x0,  /* totalTime */
        (xdc_UInt32)0x0,  /* nextTotalTime */
        (xdc_UInt32)0x0,  /* timeOfLastUpdate */
        ((xdc_Ptr)0),  /* threadHandle */
    },  /* [0] */
};

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_ti_sysbios_utils_Load_Module__state__V"
#endif
#if defined(__llvm__) && defined(__ti__)
ti_sysbios_utils_Load_Module_State__ ti_sysbios_utils_Load_Module__state__V __attribute__ ((section(".data:ti_sysbios_utils_Load_Module__state__V")));
#elif defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __TI_COMPILER_VERSION__
ti_sysbios_utils_Load_Module_State__ ti_sysbios_utils_Load_Module__state__V __attribute__ ((section(".data_ti_sysbios_utils_Load_Module__state__V")));
#endif
#endif
ti_sysbios_utils_Load_Module_State__ ti_sysbios_utils_Load_Module__state__V = {
    (xdc_Int)0x0,  /* taskHId */
    ((void*)ti_sysbios_utils_Load_Module_State_0_taskStartTime__A),  /* taskStartTime */
    (xdc_UInt32)0x0,  /* timeElapsed */
    ((void*)ti_sysbios_utils_Load_Module_State_0_runningTask__A),  /* runningTask */
    0,  /* firstSwitchDone */
    (xdc_UInt32)0x0,  /* swiStartTime */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_utils_Load_Module__state__V.swiEnv.qElem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_utils_Load_Module__state__V.swiEnv.qElem)),  /* prev */
        },  /* qElem */
        (xdc_UInt32)0x0,  /* totalTimeElapsed */
        (xdc_UInt32)0x0,  /* totalTime */
        (xdc_UInt32)0x0,  /* nextTotalTime */
        (xdc_UInt32)0x0,  /* timeOfLastUpdate */
        ((xdc_Ptr)0),  /* threadHandle */
    },  /* swiEnv */
    ((void*)ti_sysbios_utils_Load_Module_State_0_taskEnv__A),  /* taskEnv */
    (xdc_UInt32)0x0,  /* swiCnt */
    (xdc_UInt32)0x0,  /* hwiStartTime */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_utils_Load_Module__state__V.hwiEnv.qElem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_utils_Load_Module__state__V.hwiEnv.qElem)),  /* prev */
        },  /* qElem */
        (xdc_UInt32)0x0,  /* totalTimeElapsed */
        (xdc_UInt32)0x0,  /* totalTime */
        (xdc_UInt32)0x0,  /* nextTotalTime */
        (xdc_UInt32)0x0,  /* timeOfLastUpdate */
        ((xdc_Ptr)0),  /* threadHandle */
    },  /* hwiEnv */
    (xdc_UInt32)0x0,  /* hwiCnt */
    (xdc_UInt32)0x0,  /* timeSlotCnt */
    (xdc_UInt32)0xffffffff,  /* minLoop */
    (xdc_UInt32)0x0,  /* minIdle */
    (xdc_UInt32)0x0,  /* t0 */
    (xdc_UInt32)0x0,  /* idleCnt */
    (xdc_UInt32)0x0,  /* cpuLoad */
    (xdc_UInt32)0x1,  /* taskEnvLen */
    (xdc_UInt32)0x0,  /* taskNum */
    0,  /* powerEnabled */
    (xdc_UInt32)0x0,  /* idleStartTime */
    (xdc_UInt32)0x0,  /* busyStartTime */
    (xdc_UInt32)0x0,  /* busyTime */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_utils_Load_Module__state__V.Object_field_taskList.elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_utils_Load_Module__state__V.Object_field_taskList.elem)),  /* prev */
        },  /* elem */
    },  /* Object_field_taskList */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_Module__diagsEnabled__C, ".const:ti_sysbios_utils_Load_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_utils_Load_Module__diagsEnabled ti_sysbios_utils_Load_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_Module__diagsIncluded__C, ".const:ti_sysbios_utils_Load_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_utils_Load_Module__diagsIncluded ti_sysbios_utils_Load_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_Module__diagsMask__C, ".const:ti_sysbios_utils_Load_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_utils_Load_Module__diagsMask ti_sysbios_utils_Load_Module__diagsMask__C = ((CT__ti_sysbios_utils_Load_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_Module__gateObj__C, ".const:ti_sysbios_utils_Load_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_utils_Load_Module__gateObj ti_sysbios_utils_Load_Module__gateObj__C = ((CT__ti_sysbios_utils_Load_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_Module__gatePrms__C, ".const:ti_sysbios_utils_Load_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_utils_Load_Module__gatePrms ti_sysbios_utils_Load_Module__gatePrms__C = ((CT__ti_sysbios_utils_Load_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_Module__id__C, ".const:ti_sysbios_utils_Load_Module__id__C");
__FAR__ const CT__ti_sysbios_utils_Load_Module__id ti_sysbios_utils_Load_Module__id__C = (xdc_Bits16)0x8029;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_Module__loggerDefined__C, ".const:ti_sysbios_utils_Load_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_utils_Load_Module__loggerDefined ti_sysbios_utils_Load_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_Module__loggerObj__C, ".const:ti_sysbios_utils_Load_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_utils_Load_Module__loggerObj ti_sysbios_utils_Load_Module__loggerObj__C = ((CT__ti_sysbios_utils_Load_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_Module__loggerFxn0__C, ".const:ti_sysbios_utils_Load_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_utils_Load_Module__loggerFxn0 ti_sysbios_utils_Load_Module__loggerFxn0__C = ((CT__ti_sysbios_utils_Load_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_Module__loggerFxn1__C, ".const:ti_sysbios_utils_Load_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_utils_Load_Module__loggerFxn1 ti_sysbios_utils_Load_Module__loggerFxn1__C = ((CT__ti_sysbios_utils_Load_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_Module__loggerFxn2__C, ".const:ti_sysbios_utils_Load_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_utils_Load_Module__loggerFxn2 ti_sysbios_utils_Load_Module__loggerFxn2__C = ((CT__ti_sysbios_utils_Load_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_Module__loggerFxn4__C, ".const:ti_sysbios_utils_Load_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_utils_Load_Module__loggerFxn4 ti_sysbios_utils_Load_Module__loggerFxn4__C = ((CT__ti_sysbios_utils_Load_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_Module__loggerFxn8__C, ".const:ti_sysbios_utils_Load_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_utils_Load_Module__loggerFxn8 ti_sysbios_utils_Load_Module__loggerFxn8__C = ((CT__ti_sysbios_utils_Load_Module__loggerFxn8)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_Object__count__C, ".const:ti_sysbios_utils_Load_Object__count__C");
__FAR__ const CT__ti_sysbios_utils_Load_Object__count ti_sysbios_utils_Load_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_Object__heap__C, ".const:ti_sysbios_utils_Load_Object__heap__C");
__FAR__ const CT__ti_sysbios_utils_Load_Object__heap ti_sysbios_utils_Load_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_Object__sizeof__C, ".const:ti_sysbios_utils_Load_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_utils_Load_Object__sizeof ti_sysbios_utils_Load_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_Object__table__C, ".const:ti_sysbios_utils_Load_Object__table__C");
__FAR__ const CT__ti_sysbios_utils_Load_Object__table ti_sysbios_utils_Load_Object__table__C = 0;

/* LS_cpuLoad__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_LS_cpuLoad__C, ".const:ti_sysbios_utils_Load_LS_cpuLoad__C");
__FAR__ const CT__ti_sysbios_utils_Load_LS_cpuLoad ti_sysbios_utils_Load_LS_cpuLoad__C = (((xdc_runtime_Log_Event)6202) << 16 | 2048);

/* LS_hwiLoad__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_LS_hwiLoad__C, ".const:ti_sysbios_utils_Load_LS_hwiLoad__C");
__FAR__ const CT__ti_sysbios_utils_Load_LS_hwiLoad ti_sysbios_utils_Load_LS_hwiLoad__C = (((xdc_runtime_Log_Event)6219) << 16 | 2048);

/* LS_swiLoad__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_LS_swiLoad__C, ".const:ti_sysbios_utils_Load_LS_swiLoad__C");
__FAR__ const CT__ti_sysbios_utils_Load_LS_swiLoad ti_sysbios_utils_Load_LS_swiLoad__C = (((xdc_runtime_Log_Event)6237) << 16 | 2048);

/* LS_taskLoad__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_LS_taskLoad__C, ".const:ti_sysbios_utils_Load_LS_taskLoad__C");
__FAR__ const CT__ti_sysbios_utils_Load_LS_taskLoad ti_sysbios_utils_Load_LS_taskLoad__C = (((xdc_runtime_Log_Event)6255) << 16 | 2048);

/* postUpdate__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_postUpdate__C, ".const:ti_sysbios_utils_Load_postUpdate__C");
__FAR__ const CT__ti_sysbios_utils_Load_postUpdate ti_sysbios_utils_Load_postUpdate__C = ((CT__ti_sysbios_utils_Load_postUpdate)0);

/* updateInIdle__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_updateInIdle__C, ".const:ti_sysbios_utils_Load_updateInIdle__C");
__FAR__ const CT__ti_sysbios_utils_Load_updateInIdle ti_sysbios_utils_Load_updateInIdle__C = 0;

/* windowInMs__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_windowInMs__C, ".const:ti_sysbios_utils_Load_windowInMs__C");
__FAR__ const CT__ti_sysbios_utils_Load_windowInMs ti_sysbios_utils_Load_windowInMs__C = (xdc_UInt)0x1f4;

/* hwiEnabled__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_hwiEnabled__C, ".const:ti_sysbios_utils_Load_hwiEnabled__C");
__FAR__ const CT__ti_sysbios_utils_Load_hwiEnabled ti_sysbios_utils_Load_hwiEnabled__C = 0;

/* swiEnabled__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_swiEnabled__C, ".const:ti_sysbios_utils_Load_swiEnabled__C");
__FAR__ const CT__ti_sysbios_utils_Load_swiEnabled ti_sysbios_utils_Load_swiEnabled__C = 0;

/* taskEnabled__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_taskEnabled__C, ".const:ti_sysbios_utils_Load_taskEnabled__C");
__FAR__ const CT__ti_sysbios_utils_Load_taskEnabled ti_sysbios_utils_Load_taskEnabled__C = 1;

/* autoAddTasks__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_autoAddTasks__C, ".const:ti_sysbios_utils_Load_autoAddTasks__C");
__FAR__ const CT__ti_sysbios_utils_Load_autoAddTasks ti_sysbios_utils_Load_autoAddTasks__C = 1;


/*
 * ======== xdc.runtime.Assert INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Module__diagsEnabled__C, ".const:xdc_runtime_Assert_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_Assert_Module__diagsEnabled xdc_runtime_Assert_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Module__diagsIncluded__C, ".const:xdc_runtime_Assert_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_Assert_Module__diagsIncluded xdc_runtime_Assert_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Module__diagsMask__C, ".const:xdc_runtime_Assert_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_Assert_Module__diagsMask xdc_runtime_Assert_Module__diagsMask__C = ((CT__xdc_runtime_Assert_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Module__gateObj__C, ".const:xdc_runtime_Assert_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_Assert_Module__gateObj xdc_runtime_Assert_Module__gateObj__C = ((CT__xdc_runtime_Assert_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Module__gatePrms__C, ".const:xdc_runtime_Assert_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_Assert_Module__gatePrms xdc_runtime_Assert_Module__gatePrms__C = ((CT__xdc_runtime_Assert_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Module__id__C, ".const:xdc_runtime_Assert_Module__id__C");
__FAR__ const CT__xdc_runtime_Assert_Module__id xdc_runtime_Assert_Module__id__C = (xdc_Bits16)0x8002;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Module__loggerDefined__C, ".const:xdc_runtime_Assert_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_Assert_Module__loggerDefined xdc_runtime_Assert_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Module__loggerObj__C, ".const:xdc_runtime_Assert_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_Assert_Module__loggerObj xdc_runtime_Assert_Module__loggerObj__C = ((CT__xdc_runtime_Assert_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Module__loggerFxn0__C, ".const:xdc_runtime_Assert_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_Assert_Module__loggerFxn0 xdc_runtime_Assert_Module__loggerFxn0__C = ((CT__xdc_runtime_Assert_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Module__loggerFxn1__C, ".const:xdc_runtime_Assert_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_Assert_Module__loggerFxn1 xdc_runtime_Assert_Module__loggerFxn1__C = ((CT__xdc_runtime_Assert_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Module__loggerFxn2__C, ".const:xdc_runtime_Assert_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_Assert_Module__loggerFxn2 xdc_runtime_Assert_Module__loggerFxn2__C = ((CT__xdc_runtime_Assert_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Module__loggerFxn4__C, ".const:xdc_runtime_Assert_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_Assert_Module__loggerFxn4 xdc_runtime_Assert_Module__loggerFxn4__C = ((CT__xdc_runtime_Assert_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Module__loggerFxn8__C, ".const:xdc_runtime_Assert_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_Assert_Module__loggerFxn8 xdc_runtime_Assert_Module__loggerFxn8__C = ((CT__xdc_runtime_Assert_Module__loggerFxn8)0);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Object__count__C, ".const:xdc_runtime_Assert_Object__count__C");
__FAR__ const CT__xdc_runtime_Assert_Object__count xdc_runtime_Assert_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Object__heap__C, ".const:xdc_runtime_Assert_Object__heap__C");
__FAR__ const CT__xdc_runtime_Assert_Object__heap xdc_runtime_Assert_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Object__sizeof__C, ".const:xdc_runtime_Assert_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_Assert_Object__sizeof xdc_runtime_Assert_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Object__table__C, ".const:xdc_runtime_Assert_Object__table__C");
__FAR__ const CT__xdc_runtime_Assert_Object__table xdc_runtime_Assert_Object__table__C = 0;

/* E_assertFailed__C */
#pragma DATA_SECTION(xdc_runtime_Assert_E_assertFailed__C, ".const:xdc_runtime_Assert_E_assertFailed__C");
__FAR__ const CT__xdc_runtime_Assert_E_assertFailed xdc_runtime_Assert_E_assertFailed__C = (((xdc_runtime_Error_Id)3427) << 16 | 0);


/*
 * ======== xdc.runtime.Core INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Core_Module__diagsEnabled__C, ".const:xdc_runtime_Core_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_Core_Module__diagsEnabled xdc_runtime_Core_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_Core_Module__diagsIncluded__C, ".const:xdc_runtime_Core_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_Core_Module__diagsIncluded xdc_runtime_Core_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_Core_Module__diagsMask__C, ".const:xdc_runtime_Core_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_Core_Module__diagsMask xdc_runtime_Core_Module__diagsMask__C = ((CT__xdc_runtime_Core_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_Core_Module__gateObj__C, ".const:xdc_runtime_Core_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_Core_Module__gateObj xdc_runtime_Core_Module__gateObj__C = ((CT__xdc_runtime_Core_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_Core_Module__gatePrms__C, ".const:xdc_runtime_Core_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_Core_Module__gatePrms xdc_runtime_Core_Module__gatePrms__C = ((CT__xdc_runtime_Core_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_Core_Module__id__C, ".const:xdc_runtime_Core_Module__id__C");
__FAR__ const CT__xdc_runtime_Core_Module__id xdc_runtime_Core_Module__id__C = (xdc_Bits16)0x8003;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_Core_Module__loggerDefined__C, ".const:xdc_runtime_Core_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_Core_Module__loggerDefined xdc_runtime_Core_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_Core_Module__loggerObj__C, ".const:xdc_runtime_Core_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_Core_Module__loggerObj xdc_runtime_Core_Module__loggerObj__C = ((CT__xdc_runtime_Core_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_Core_Module__loggerFxn0__C, ".const:xdc_runtime_Core_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_Core_Module__loggerFxn0 xdc_runtime_Core_Module__loggerFxn0__C = ((CT__xdc_runtime_Core_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_Core_Module__loggerFxn1__C, ".const:xdc_runtime_Core_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_Core_Module__loggerFxn1 xdc_runtime_Core_Module__loggerFxn1__C = ((CT__xdc_runtime_Core_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Core_Module__loggerFxn2__C, ".const:xdc_runtime_Core_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_Core_Module__loggerFxn2 xdc_runtime_Core_Module__loggerFxn2__C = ((CT__xdc_runtime_Core_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_Core_Module__loggerFxn4__C, ".const:xdc_runtime_Core_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_Core_Module__loggerFxn4 xdc_runtime_Core_Module__loggerFxn4__C = ((CT__xdc_runtime_Core_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_Core_Module__loggerFxn8__C, ".const:xdc_runtime_Core_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_Core_Module__loggerFxn8 xdc_runtime_Core_Module__loggerFxn8__C = ((CT__xdc_runtime_Core_Module__loggerFxn8)0);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_Core_Object__count__C, ".const:xdc_runtime_Core_Object__count__C");
__FAR__ const CT__xdc_runtime_Core_Object__count xdc_runtime_Core_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_Core_Object__heap__C, ".const:xdc_runtime_Core_Object__heap__C");
__FAR__ const CT__xdc_runtime_Core_Object__heap xdc_runtime_Core_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_Core_Object__sizeof__C, ".const:xdc_runtime_Core_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_Core_Object__sizeof xdc_runtime_Core_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_Core_Object__table__C, ".const:xdc_runtime_Core_Object__table__C");
__FAR__ const CT__xdc_runtime_Core_Object__table xdc_runtime_Core_Object__table__C = 0;

/* A_initializedParams__C */
#pragma DATA_SECTION(xdc_runtime_Core_A_initializedParams__C, ".const:xdc_runtime_Core_A_initializedParams__C");
__FAR__ const CT__xdc_runtime_Core_A_initializedParams xdc_runtime_Core_A_initializedParams__C = (((xdc_runtime_Assert_Id)1) << 16 | 16);


/*
 * ======== xdc.runtime.Defaults INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__diagsEnabled__C, ".const:xdc_runtime_Defaults_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_Defaults_Module__diagsEnabled xdc_runtime_Defaults_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__diagsIncluded__C, ".const:xdc_runtime_Defaults_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_Defaults_Module__diagsIncluded xdc_runtime_Defaults_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__diagsMask__C, ".const:xdc_runtime_Defaults_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_Defaults_Module__diagsMask xdc_runtime_Defaults_Module__diagsMask__C = ((CT__xdc_runtime_Defaults_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__gateObj__C, ".const:xdc_runtime_Defaults_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_Defaults_Module__gateObj xdc_runtime_Defaults_Module__gateObj__C = ((CT__xdc_runtime_Defaults_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__gatePrms__C, ".const:xdc_runtime_Defaults_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_Defaults_Module__gatePrms xdc_runtime_Defaults_Module__gatePrms__C = ((CT__xdc_runtime_Defaults_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__id__C, ".const:xdc_runtime_Defaults_Module__id__C");
__FAR__ const CT__xdc_runtime_Defaults_Module__id xdc_runtime_Defaults_Module__id__C = (xdc_Bits16)0x8004;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__loggerDefined__C, ".const:xdc_runtime_Defaults_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_Defaults_Module__loggerDefined xdc_runtime_Defaults_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__loggerObj__C, ".const:xdc_runtime_Defaults_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_Defaults_Module__loggerObj xdc_runtime_Defaults_Module__loggerObj__C = ((CT__xdc_runtime_Defaults_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__loggerFxn0__C, ".const:xdc_runtime_Defaults_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_Defaults_Module__loggerFxn0 xdc_runtime_Defaults_Module__loggerFxn0__C = ((CT__xdc_runtime_Defaults_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__loggerFxn1__C, ".const:xdc_runtime_Defaults_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_Defaults_Module__loggerFxn1 xdc_runtime_Defaults_Module__loggerFxn1__C = ((CT__xdc_runtime_Defaults_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__loggerFxn2__C, ".const:xdc_runtime_Defaults_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_Defaults_Module__loggerFxn2 xdc_runtime_Defaults_Module__loggerFxn2__C = ((CT__xdc_runtime_Defaults_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__loggerFxn4__C, ".const:xdc_runtime_Defaults_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_Defaults_Module__loggerFxn4 xdc_runtime_Defaults_Module__loggerFxn4__C = ((CT__xdc_runtime_Defaults_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__loggerFxn8__C, ".const:xdc_runtime_Defaults_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_Defaults_Module__loggerFxn8 xdc_runtime_Defaults_Module__loggerFxn8__C = ((CT__xdc_runtime_Defaults_Module__loggerFxn8)0);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Object__count__C, ".const:xdc_runtime_Defaults_Object__count__C");
__FAR__ const CT__xdc_runtime_Defaults_Object__count xdc_runtime_Defaults_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Object__heap__C, ".const:xdc_runtime_Defaults_Object__heap__C");
__FAR__ const CT__xdc_runtime_Defaults_Object__heap xdc_runtime_Defaults_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Object__sizeof__C, ".const:xdc_runtime_Defaults_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_Defaults_Object__sizeof xdc_runtime_Defaults_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Object__table__C, ".const:xdc_runtime_Defaults_Object__table__C");
__FAR__ const CT__xdc_runtime_Defaults_Object__table xdc_runtime_Defaults_Object__table__C = 0;


/*
 * ======== xdc.runtime.Diags INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Module__diagsEnabled__C, ".const:xdc_runtime_Diags_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_Diags_Module__diagsEnabled xdc_runtime_Diags_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Module__diagsIncluded__C, ".const:xdc_runtime_Diags_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_Diags_Module__diagsIncluded xdc_runtime_Diags_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Module__diagsMask__C, ".const:xdc_runtime_Diags_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_Diags_Module__diagsMask xdc_runtime_Diags_Module__diagsMask__C = ((CT__xdc_runtime_Diags_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Module__gateObj__C, ".const:xdc_runtime_Diags_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_Diags_Module__gateObj xdc_runtime_Diags_Module__gateObj__C = ((CT__xdc_runtime_Diags_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Module__gatePrms__C, ".const:xdc_runtime_Diags_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_Diags_Module__gatePrms xdc_runtime_Diags_Module__gatePrms__C = ((CT__xdc_runtime_Diags_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Module__id__C, ".const:xdc_runtime_Diags_Module__id__C");
__FAR__ const CT__xdc_runtime_Diags_Module__id xdc_runtime_Diags_Module__id__C = (xdc_Bits16)0x8005;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Module__loggerDefined__C, ".const:xdc_runtime_Diags_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_Diags_Module__loggerDefined xdc_runtime_Diags_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Module__loggerObj__C, ".const:xdc_runtime_Diags_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_Diags_Module__loggerObj xdc_runtime_Diags_Module__loggerObj__C = ((CT__xdc_runtime_Diags_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Module__loggerFxn0__C, ".const:xdc_runtime_Diags_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_Diags_Module__loggerFxn0 xdc_runtime_Diags_Module__loggerFxn0__C = ((CT__xdc_runtime_Diags_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Module__loggerFxn1__C, ".const:xdc_runtime_Diags_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_Diags_Module__loggerFxn1 xdc_runtime_Diags_Module__loggerFxn1__C = ((CT__xdc_runtime_Diags_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Module__loggerFxn2__C, ".const:xdc_runtime_Diags_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_Diags_Module__loggerFxn2 xdc_runtime_Diags_Module__loggerFxn2__C = ((CT__xdc_runtime_Diags_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Module__loggerFxn4__C, ".const:xdc_runtime_Diags_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_Diags_Module__loggerFxn4 xdc_runtime_Diags_Module__loggerFxn4__C = ((CT__xdc_runtime_Diags_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Module__loggerFxn8__C, ".const:xdc_runtime_Diags_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_Diags_Module__loggerFxn8 xdc_runtime_Diags_Module__loggerFxn8__C = ((CT__xdc_runtime_Diags_Module__loggerFxn8)0);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Object__count__C, ".const:xdc_runtime_Diags_Object__count__C");
__FAR__ const CT__xdc_runtime_Diags_Object__count xdc_runtime_Diags_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Object__heap__C, ".const:xdc_runtime_Diags_Object__heap__C");
__FAR__ const CT__xdc_runtime_Diags_Object__heap xdc_runtime_Diags_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Object__sizeof__C, ".const:xdc_runtime_Diags_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_Diags_Object__sizeof xdc_runtime_Diags_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Object__table__C, ".const:xdc_runtime_Diags_Object__table__C");
__FAR__ const CT__xdc_runtime_Diags_Object__table xdc_runtime_Diags_Object__table__C = 0;

/* setMaskEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Diags_setMaskEnabled__C, ".const:xdc_runtime_Diags_setMaskEnabled__C");
__FAR__ const CT__xdc_runtime_Diags_setMaskEnabled xdc_runtime_Diags_setMaskEnabled__C = 1;

/* dictBase__C */
#pragma DATA_SECTION(xdc_runtime_Diags_dictBase__C, ".const:xdc_runtime_Diags_dictBase__C");
__FAR__ const CT__xdc_runtime_Diags_dictBase xdc_runtime_Diags_dictBase__C = ((CT__xdc_runtime_Diags_dictBase)((void*)&xdc_runtime_Diags_dictElems[0]));


/*
 * ======== xdc.runtime.Error INITIALIZERS ========
 */

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_xdc_runtime_Error_Module__state__V"
#endif
#if defined(__llvm__) && defined(__ti__)
xdc_runtime_Error_Module_State__ xdc_runtime_Error_Module__state__V __attribute__ ((section(".data:xdc_runtime_Error_Module__state__V")));
#elif defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __TI_COMPILER_VERSION__
xdc_runtime_Error_Module_State__ xdc_runtime_Error_Module__state__V __attribute__ ((section(".data_xdc_runtime_Error_Module__state__V")));
#endif
#endif
xdc_runtime_Error_Module_State__ xdc_runtime_Error_Module__state__V = {
    (xdc_UInt16)0x0,  /* count */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Error_Module__diagsEnabled__C, ".const:xdc_runtime_Error_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_Error_Module__diagsEnabled xdc_runtime_Error_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_Error_Module__diagsIncluded__C, ".const:xdc_runtime_Error_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_Error_Module__diagsIncluded xdc_runtime_Error_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_Error_Module__diagsMask__C, ".const:xdc_runtime_Error_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_Error_Module__diagsMask xdc_runtime_Error_Module__diagsMask__C = ((CT__xdc_runtime_Error_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_Error_Module__gateObj__C, ".const:xdc_runtime_Error_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_Error_Module__gateObj xdc_runtime_Error_Module__gateObj__C = ((CT__xdc_runtime_Error_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_Error_Module__gatePrms__C, ".const:xdc_runtime_Error_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_Error_Module__gatePrms xdc_runtime_Error_Module__gatePrms__C = ((CT__xdc_runtime_Error_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_Error_Module__id__C, ".const:xdc_runtime_Error_Module__id__C");
__FAR__ const CT__xdc_runtime_Error_Module__id xdc_runtime_Error_Module__id__C = (xdc_Bits16)0x8006;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_Error_Module__loggerDefined__C, ".const:xdc_runtime_Error_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_Error_Module__loggerDefined xdc_runtime_Error_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_Error_Module__loggerObj__C, ".const:xdc_runtime_Error_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_Error_Module__loggerObj xdc_runtime_Error_Module__loggerObj__C = ((CT__xdc_runtime_Error_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_Error_Module__loggerFxn0__C, ".const:xdc_runtime_Error_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_Error_Module__loggerFxn0 xdc_runtime_Error_Module__loggerFxn0__C = ((CT__xdc_runtime_Error_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_Error_Module__loggerFxn1__C, ".const:xdc_runtime_Error_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_Error_Module__loggerFxn1 xdc_runtime_Error_Module__loggerFxn1__C = ((CT__xdc_runtime_Error_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Error_Module__loggerFxn2__C, ".const:xdc_runtime_Error_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_Error_Module__loggerFxn2 xdc_runtime_Error_Module__loggerFxn2__C = ((CT__xdc_runtime_Error_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_Error_Module__loggerFxn4__C, ".const:xdc_runtime_Error_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_Error_Module__loggerFxn4 xdc_runtime_Error_Module__loggerFxn4__C = ((CT__xdc_runtime_Error_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_Error_Module__loggerFxn8__C, ".const:xdc_runtime_Error_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_Error_Module__loggerFxn8 xdc_runtime_Error_Module__loggerFxn8__C = ((CT__xdc_runtime_Error_Module__loggerFxn8)0);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_Error_Object__count__C, ".const:xdc_runtime_Error_Object__count__C");
__FAR__ const CT__xdc_runtime_Error_Object__count xdc_runtime_Error_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_Error_Object__heap__C, ".const:xdc_runtime_Error_Object__heap__C");
__FAR__ const CT__xdc_runtime_Error_Object__heap xdc_runtime_Error_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_Error_Object__sizeof__C, ".const:xdc_runtime_Error_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_Error_Object__sizeof xdc_runtime_Error_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_Error_Object__table__C, ".const:xdc_runtime_Error_Object__table__C");
__FAR__ const CT__xdc_runtime_Error_Object__table xdc_runtime_Error_Object__table__C = 0;

/* policyFxn__C */
#pragma DATA_SECTION(xdc_runtime_Error_policyFxn__C, ".const:xdc_runtime_Error_policyFxn__C");
__FAR__ const CT__xdc_runtime_Error_policyFxn xdc_runtime_Error_policyFxn__C = ((CT__xdc_runtime_Error_policyFxn)((xdc_Fxn)xdc_runtime_Error_policyDefault__E));

/* E_generic__C */
#pragma DATA_SECTION(xdc_runtime_Error_E_generic__C, ".const:xdc_runtime_Error_E_generic__C");
__FAR__ const CT__xdc_runtime_Error_E_generic xdc_runtime_Error_E_generic__C = (((xdc_runtime_Error_Id)3449) << 16 | 0);

/* E_memory__C */
#pragma DATA_SECTION(xdc_runtime_Error_E_memory__C, ".const:xdc_runtime_Error_E_memory__C");
__FAR__ const CT__xdc_runtime_Error_E_memory xdc_runtime_Error_E_memory__C = (((xdc_runtime_Error_Id)3453) << 16 | 0);

/* E_msgCode__C */
#pragma DATA_SECTION(xdc_runtime_Error_E_msgCode__C, ".const:xdc_runtime_Error_E_msgCode__C");
__FAR__ const CT__xdc_runtime_Error_E_msgCode xdc_runtime_Error_E_msgCode__C = (((xdc_runtime_Error_Id)3487) << 16 | 0);

/* policy__C */
#pragma DATA_SECTION(xdc_runtime_Error_policy__C, ".const:xdc_runtime_Error_policy__C");
__FAR__ const CT__xdc_runtime_Error_policy xdc_runtime_Error_policy__C = xdc_runtime_Error_UNWIND;

/* raiseHook__C */
#pragma DATA_SECTION(xdc_runtime_Error_raiseHook__C, ".const:xdc_runtime_Error_raiseHook__C");
__FAR__ const CT__xdc_runtime_Error_raiseHook xdc_runtime_Error_raiseHook__C = ((CT__xdc_runtime_Error_raiseHook)((xdc_Fxn)ti_sysbios_BIOS_errorRaiseHook__I));

/* maxDepth__C */
#pragma DATA_SECTION(xdc_runtime_Error_maxDepth__C, ".const:xdc_runtime_Error_maxDepth__C");
__FAR__ const CT__xdc_runtime_Error_maxDepth xdc_runtime_Error_maxDepth__C = (xdc_UInt16)0x10;


/*
 * ======== xdc.runtime.Gate INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Module__diagsEnabled__C, ".const:xdc_runtime_Gate_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_Gate_Module__diagsEnabled xdc_runtime_Gate_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Module__diagsIncluded__C, ".const:xdc_runtime_Gate_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_Gate_Module__diagsIncluded xdc_runtime_Gate_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Module__diagsMask__C, ".const:xdc_runtime_Gate_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_Gate_Module__diagsMask xdc_runtime_Gate_Module__diagsMask__C = ((CT__xdc_runtime_Gate_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Module__gateObj__C, ".const:xdc_runtime_Gate_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_Gate_Module__gateObj xdc_runtime_Gate_Module__gateObj__C = ((CT__xdc_runtime_Gate_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Module__gatePrms__C, ".const:xdc_runtime_Gate_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_Gate_Module__gatePrms xdc_runtime_Gate_Module__gatePrms__C = ((CT__xdc_runtime_Gate_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Module__id__C, ".const:xdc_runtime_Gate_Module__id__C");
__FAR__ const CT__xdc_runtime_Gate_Module__id xdc_runtime_Gate_Module__id__C = (xdc_Bits16)0x8007;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Module__loggerDefined__C, ".const:xdc_runtime_Gate_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_Gate_Module__loggerDefined xdc_runtime_Gate_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Module__loggerObj__C, ".const:xdc_runtime_Gate_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_Gate_Module__loggerObj xdc_runtime_Gate_Module__loggerObj__C = ((CT__xdc_runtime_Gate_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Module__loggerFxn0__C, ".const:xdc_runtime_Gate_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_Gate_Module__loggerFxn0 xdc_runtime_Gate_Module__loggerFxn0__C = ((CT__xdc_runtime_Gate_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Module__loggerFxn1__C, ".const:xdc_runtime_Gate_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_Gate_Module__loggerFxn1 xdc_runtime_Gate_Module__loggerFxn1__C = ((CT__xdc_runtime_Gate_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Module__loggerFxn2__C, ".const:xdc_runtime_Gate_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_Gate_Module__loggerFxn2 xdc_runtime_Gate_Module__loggerFxn2__C = ((CT__xdc_runtime_Gate_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Module__loggerFxn4__C, ".const:xdc_runtime_Gate_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_Gate_Module__loggerFxn4 xdc_runtime_Gate_Module__loggerFxn4__C = ((CT__xdc_runtime_Gate_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Module__loggerFxn8__C, ".const:xdc_runtime_Gate_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_Gate_Module__loggerFxn8 xdc_runtime_Gate_Module__loggerFxn8__C = ((CT__xdc_runtime_Gate_Module__loggerFxn8)0);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Object__count__C, ".const:xdc_runtime_Gate_Object__count__C");
__FAR__ const CT__xdc_runtime_Gate_Object__count xdc_runtime_Gate_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Object__heap__C, ".const:xdc_runtime_Gate_Object__heap__C");
__FAR__ const CT__xdc_runtime_Gate_Object__heap xdc_runtime_Gate_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Object__sizeof__C, ".const:xdc_runtime_Gate_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_Gate_Object__sizeof xdc_runtime_Gate_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Object__table__C, ".const:xdc_runtime_Gate_Object__table__C");
__FAR__ const CT__xdc_runtime_Gate_Object__table xdc_runtime_Gate_Object__table__C = 0;


/*
 * ======== xdc.runtime.Log INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Log_Module__diagsEnabled__C, ".const:xdc_runtime_Log_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_Log_Module__diagsEnabled xdc_runtime_Log_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_Log_Module__diagsIncluded__C, ".const:xdc_runtime_Log_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_Log_Module__diagsIncluded xdc_runtime_Log_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_Log_Module__diagsMask__C, ".const:xdc_runtime_Log_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_Log_Module__diagsMask xdc_runtime_Log_Module__diagsMask__C = ((CT__xdc_runtime_Log_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_Log_Module__gateObj__C, ".const:xdc_runtime_Log_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_Log_Module__gateObj xdc_runtime_Log_Module__gateObj__C = ((CT__xdc_runtime_Log_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_Log_Module__gatePrms__C, ".const:xdc_runtime_Log_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_Log_Module__gatePrms xdc_runtime_Log_Module__gatePrms__C = ((CT__xdc_runtime_Log_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_Log_Module__id__C, ".const:xdc_runtime_Log_Module__id__C");
__FAR__ const CT__xdc_runtime_Log_Module__id xdc_runtime_Log_Module__id__C = (xdc_Bits16)0x8008;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_Log_Module__loggerDefined__C, ".const:xdc_runtime_Log_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_Log_Module__loggerDefined xdc_runtime_Log_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_Log_Module__loggerObj__C, ".const:xdc_runtime_Log_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_Log_Module__loggerObj xdc_runtime_Log_Module__loggerObj__C = ((CT__xdc_runtime_Log_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_Log_Module__loggerFxn0__C, ".const:xdc_runtime_Log_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_Log_Module__loggerFxn0 xdc_runtime_Log_Module__loggerFxn0__C = ((CT__xdc_runtime_Log_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_Log_Module__loggerFxn1__C, ".const:xdc_runtime_Log_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_Log_Module__loggerFxn1 xdc_runtime_Log_Module__loggerFxn1__C = ((CT__xdc_runtime_Log_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Log_Module__loggerFxn2__C, ".const:xdc_runtime_Log_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_Log_Module__loggerFxn2 xdc_runtime_Log_Module__loggerFxn2__C = ((CT__xdc_runtime_Log_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_Log_Module__loggerFxn4__C, ".const:xdc_runtime_Log_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_Log_Module__loggerFxn4 xdc_runtime_Log_Module__loggerFxn4__C = ((CT__xdc_runtime_Log_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_Log_Module__loggerFxn8__C, ".const:xdc_runtime_Log_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_Log_Module__loggerFxn8 xdc_runtime_Log_Module__loggerFxn8__C = ((CT__xdc_runtime_Log_Module__loggerFxn8)0);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_Log_Object__count__C, ".const:xdc_runtime_Log_Object__count__C");
__FAR__ const CT__xdc_runtime_Log_Object__count xdc_runtime_Log_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_Log_Object__heap__C, ".const:xdc_runtime_Log_Object__heap__C");
__FAR__ const CT__xdc_runtime_Log_Object__heap xdc_runtime_Log_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_Log_Object__sizeof__C, ".const:xdc_runtime_Log_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_Log_Object__sizeof xdc_runtime_Log_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_Log_Object__table__C, ".const:xdc_runtime_Log_Object__table__C");
__FAR__ const CT__xdc_runtime_Log_Object__table xdc_runtime_Log_Object__table__C = 0;

/* L_construct__C */
#pragma DATA_SECTION(xdc_runtime_Log_L_construct__C, ".const:xdc_runtime_Log_L_construct__C");
__FAR__ const CT__xdc_runtime_Log_L_construct xdc_runtime_Log_L_construct__C = (((xdc_runtime_Log_Event)4993) << 16 | 4);

/* L_create__C */
#pragma DATA_SECTION(xdc_runtime_Log_L_create__C, ".const:xdc_runtime_Log_L_create__C");
__FAR__ const CT__xdc_runtime_Log_L_create xdc_runtime_Log_L_create__C = (((xdc_runtime_Log_Event)5017) << 16 | 4);

/* L_destruct__C */
#pragma DATA_SECTION(xdc_runtime_Log_L_destruct__C, ".const:xdc_runtime_Log_L_destruct__C");
__FAR__ const CT__xdc_runtime_Log_L_destruct xdc_runtime_Log_L_destruct__C = (((xdc_runtime_Log_Event)5038) << 16 | 4);

/* L_delete__C */
#pragma DATA_SECTION(xdc_runtime_Log_L_delete__C, ".const:xdc_runtime_Log_L_delete__C");
__FAR__ const CT__xdc_runtime_Log_L_delete xdc_runtime_Log_L_delete__C = (((xdc_runtime_Log_Event)5057) << 16 | 4);

/* L_error__C */
#pragma DATA_SECTION(xdc_runtime_Log_L_error__C, ".const:xdc_runtime_Log_L_error__C");
__FAR__ const CT__xdc_runtime_Log_L_error xdc_runtime_Log_L_error__C = (((xdc_runtime_Log_Event)5074) << 16 | 192);

/* L_warning__C */
#pragma DATA_SECTION(xdc_runtime_Log_L_warning__C, ".const:xdc_runtime_Log_L_warning__C");
__FAR__ const CT__xdc_runtime_Log_L_warning xdc_runtime_Log_L_warning__C = (((xdc_runtime_Log_Event)5088) << 16 | 224);

/* L_info__C */
#pragma DATA_SECTION(xdc_runtime_Log_L_info__C, ".const:xdc_runtime_Log_L_info__C");
__FAR__ const CT__xdc_runtime_Log_L_info xdc_runtime_Log_L_info__C = (((xdc_runtime_Log_Event)5104) << 16 | 16384);

/* L_start__C */
#pragma DATA_SECTION(xdc_runtime_Log_L_start__C, ".const:xdc_runtime_Log_L_start__C");
__FAR__ const CT__xdc_runtime_Log_L_start xdc_runtime_Log_L_start__C = (((xdc_runtime_Log_Event)5111) << 16 | 32768);

/* L_stop__C */
#pragma DATA_SECTION(xdc_runtime_Log_L_stop__C, ".const:xdc_runtime_Log_L_stop__C");
__FAR__ const CT__xdc_runtime_Log_L_stop xdc_runtime_Log_L_stop__C = (((xdc_runtime_Log_Event)5122) << 16 | 32768);

/* L_startInstance__C */
#pragma DATA_SECTION(xdc_runtime_Log_L_startInstance__C, ".const:xdc_runtime_Log_L_startInstance__C");
__FAR__ const CT__xdc_runtime_Log_L_startInstance xdc_runtime_Log_L_startInstance__C = (((xdc_runtime_Log_Event)5132) << 16 | 32768);

/* L_stopInstance__C */
#pragma DATA_SECTION(xdc_runtime_Log_L_stopInstance__C, ".const:xdc_runtime_Log_L_stopInstance__C");
__FAR__ const CT__xdc_runtime_Log_L_stopInstance xdc_runtime_Log_L_stopInstance__C = (((xdc_runtime_Log_Event)5151) << 16 | 32768);


/*
 * ======== xdc.runtime.LoggerBuf INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc xdc_runtime_LoggerBuf_Object__DESC__C;

/* Object__PARAMS__C */
#pragma DATA_SECTION(xdc_runtime_LoggerBuf_Object__PARAMS__C, ".const:xdc_runtime_LoggerBuf_Object__PARAMS__C");
__FAR__ const xdc_runtime_LoggerBuf_Params xdc_runtime_LoggerBuf_Object__PARAMS__C = {
    sizeof (xdc_runtime_LoggerBuf_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&xdc_runtime_LoggerBuf_Object__PARAMS__C.__iprms, /* instance */
    (xdc_UInt)0x40,  /* numEntries */
    xdc_runtime_LoggerBuf_BufType_CIRCULAR,  /* bufType */
    0,  /* exitFlush */
    0,  /* bufHeap */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* --> xdc_runtime_LoggerBuf_Instance_State_0_entryArr__A */
__T1_xdc_runtime_LoggerBuf_Instance_State__entryArr xdc_runtime_LoggerBuf_Instance_State_0_entryArr__A[200];

/* Module__root__V */
xdc_runtime_LoggerBuf_Module__ xdc_runtime_LoggerBuf_Module__root__V = {
    {&xdc_runtime_LoggerBuf_Module__root__V.link,  /* link.next */
    &xdc_runtime_LoggerBuf_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
xdc_runtime_LoggerBuf_Object__ xdc_runtime_LoggerBuf_Object__table__V[1] = {
    {/* instance#0 */
        &xdc_runtime_LoggerBuf_Module__FXNS__C,
        0,  /* bufHeap */
        ((void*)xdc_runtime_LoggerBuf_Instance_State_0_entryArr__A),  /* entryArr */
        ((xdc_runtime_LoggerBuf_Entry*)(&xdc_runtime_LoggerBuf_Instance_State_0_entryArr__A[0])),  /* curEntry */
        ((xdc_runtime_LoggerBuf_Entry*)(&xdc_runtime_LoggerBuf_Instance_State_0_entryArr__A[199])),  /* endEntry */
        ((xdc_runtime_LoggerBuf_Entry*)(&xdc_runtime_LoggerBuf_Instance_State_0_entryArr__A[0])),  /* readEntry */
        (xdc_Bits32)0x1,  /* serial */
        (xdc_UInt16)0xc8,  /* numEntries */
        (xdc_Int8)0x0,  /* advance */
        0,  /* enabled */
        0,  /* flush */
    },
};

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_xdc_runtime_LoggerBuf_Module__state__V"
#endif
#if defined(__llvm__) && defined(__ti__)
xdc_runtime_LoggerBuf_Module_State__ xdc_runtime_LoggerBuf_Module__state__V __attribute__ ((section(".data:xdc_runtime_LoggerBuf_Module__state__V")));
#elif defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __TI_COMPILER_VERSION__
xdc_runtime_LoggerBuf_Module_State__ xdc_runtime_LoggerBuf_Module__state__V __attribute__ ((section(".data_xdc_runtime_LoggerBuf_Module__state__V")));
#endif
#endif
xdc_runtime_LoggerBuf_Module_State__ xdc_runtime_LoggerBuf_Module__state__V = {
    (xdc_Bits16)0x0,  /* level1 */
    (xdc_Bits16)0x0,  /* level2 */
    (xdc_Bits16)0x0,  /* level3 */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_LoggerBuf_Module__diagsEnabled__C, ".const:xdc_runtime_LoggerBuf_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_LoggerBuf_Module__diagsEnabled xdc_runtime_LoggerBuf_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_LoggerBuf_Module__diagsIncluded__C, ".const:xdc_runtime_LoggerBuf_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_LoggerBuf_Module__diagsIncluded xdc_runtime_LoggerBuf_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_LoggerBuf_Module__diagsMask__C, ".const:xdc_runtime_LoggerBuf_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_LoggerBuf_Module__diagsMask xdc_runtime_LoggerBuf_Module__diagsMask__C = ((CT__xdc_runtime_LoggerBuf_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_LoggerBuf_Module__gateObj__C, ".const:xdc_runtime_LoggerBuf_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_LoggerBuf_Module__gateObj xdc_runtime_LoggerBuf_Module__gateObj__C = ((CT__xdc_runtime_LoggerBuf_Module__gateObj)((const void*)(xdc_runtime_IGateProvider_Handle)&ti_sysbios_gates_GateHwi_Object__table__V[0]));

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_LoggerBuf_Module__gatePrms__C, ".const:xdc_runtime_LoggerBuf_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_LoggerBuf_Module__gatePrms xdc_runtime_LoggerBuf_Module__gatePrms__C = ((CT__xdc_runtime_LoggerBuf_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_LoggerBuf_Module__id__C, ".const:xdc_runtime_LoggerBuf_Module__id__C");
__FAR__ const CT__xdc_runtime_LoggerBuf_Module__id xdc_runtime_LoggerBuf_Module__id__C = (xdc_Bits16)0x8009;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_LoggerBuf_Module__loggerDefined__C, ".const:xdc_runtime_LoggerBuf_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_LoggerBuf_Module__loggerDefined xdc_runtime_LoggerBuf_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_LoggerBuf_Module__loggerObj__C, ".const:xdc_runtime_LoggerBuf_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_LoggerBuf_Module__loggerObj xdc_runtime_LoggerBuf_Module__loggerObj__C = ((CT__xdc_runtime_LoggerBuf_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_LoggerBuf_Module__loggerFxn0__C, ".const:xdc_runtime_LoggerBuf_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_LoggerBuf_Module__loggerFxn0 xdc_runtime_LoggerBuf_Module__loggerFxn0__C = ((CT__xdc_runtime_LoggerBuf_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_LoggerBuf_Module__loggerFxn1__C, ".const:xdc_runtime_LoggerBuf_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_LoggerBuf_Module__loggerFxn1 xdc_runtime_LoggerBuf_Module__loggerFxn1__C = ((CT__xdc_runtime_LoggerBuf_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_LoggerBuf_Module__loggerFxn2__C, ".const:xdc_runtime_LoggerBuf_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_LoggerBuf_Module__loggerFxn2 xdc_runtime_LoggerBuf_Module__loggerFxn2__C = ((CT__xdc_runtime_LoggerBuf_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_LoggerBuf_Module__loggerFxn4__C, ".const:xdc_runtime_LoggerBuf_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_LoggerBuf_Module__loggerFxn4 xdc_runtime_LoggerBuf_Module__loggerFxn4__C = ((CT__xdc_runtime_LoggerBuf_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_LoggerBuf_Module__loggerFxn8__C, ".const:xdc_runtime_LoggerBuf_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_LoggerBuf_Module__loggerFxn8 xdc_runtime_LoggerBuf_Module__loggerFxn8__C = ((CT__xdc_runtime_LoggerBuf_Module__loggerFxn8)0);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_LoggerBuf_Object__count__C, ".const:xdc_runtime_LoggerBuf_Object__count__C");
__FAR__ const CT__xdc_runtime_LoggerBuf_Object__count xdc_runtime_LoggerBuf_Object__count__C = 1;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_LoggerBuf_Object__heap__C, ".const:xdc_runtime_LoggerBuf_Object__heap__C");
__FAR__ const CT__xdc_runtime_LoggerBuf_Object__heap xdc_runtime_LoggerBuf_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_LoggerBuf_Object__sizeof__C, ".const:xdc_runtime_LoggerBuf_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_LoggerBuf_Object__sizeof xdc_runtime_LoggerBuf_Object__sizeof__C = sizeof(xdc_runtime_LoggerBuf_Object__);

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_LoggerBuf_Object__table__C, ".const:xdc_runtime_LoggerBuf_Object__table__C");
__FAR__ const CT__xdc_runtime_LoggerBuf_Object__table xdc_runtime_LoggerBuf_Object__table__C = xdc_runtime_LoggerBuf_Object__table__V;

/* filterByLevel__C */
#pragma DATA_SECTION(xdc_runtime_LoggerBuf_filterByLevel__C, ".const:xdc_runtime_LoggerBuf_filterByLevel__C");
__FAR__ const CT__xdc_runtime_LoggerBuf_filterByLevel xdc_runtime_LoggerBuf_filterByLevel__C = 0;

/* E_badLevel__C */
#pragma DATA_SECTION(xdc_runtime_LoggerBuf_E_badLevel__C, ".const:xdc_runtime_LoggerBuf_E_badLevel__C");
__FAR__ const CT__xdc_runtime_LoggerBuf_E_badLevel xdc_runtime_LoggerBuf_E_badLevel__C = (((xdc_runtime_Error_Id)3495) << 16 | 0);

/* enableFlush__C */
#pragma DATA_SECTION(xdc_runtime_LoggerBuf_enableFlush__C, ".const:xdc_runtime_LoggerBuf_enableFlush__C");
__FAR__ const CT__xdc_runtime_LoggerBuf_enableFlush xdc_runtime_LoggerBuf_enableFlush__C = 0;

/* statusLogger__C */
#pragma DATA_SECTION(xdc_runtime_LoggerBuf_statusLogger__C, ".const:xdc_runtime_LoggerBuf_statusLogger__C");
__FAR__ const CT__xdc_runtime_LoggerBuf_statusLogger xdc_runtime_LoggerBuf_statusLogger__C = 0;

/* level1Mask__C */
#pragma DATA_SECTION(xdc_runtime_LoggerBuf_level1Mask__C, ".const:xdc_runtime_LoggerBuf_level1Mask__C");
__FAR__ const CT__xdc_runtime_LoggerBuf_level1Mask xdc_runtime_LoggerBuf_level1Mask__C = (xdc_Bits16)0x0;

/* level2Mask__C */
#pragma DATA_SECTION(xdc_runtime_LoggerBuf_level2Mask__C, ".const:xdc_runtime_LoggerBuf_level2Mask__C");
__FAR__ const CT__xdc_runtime_LoggerBuf_level2Mask xdc_runtime_LoggerBuf_level2Mask__C = (xdc_Bits16)0x0;

/* level3Mask__C */
#pragma DATA_SECTION(xdc_runtime_LoggerBuf_level3Mask__C, ".const:xdc_runtime_LoggerBuf_level3Mask__C");
__FAR__ const CT__xdc_runtime_LoggerBuf_level3Mask xdc_runtime_LoggerBuf_level3Mask__C = (xdc_Bits16)0x0;

/* level4Mask__C */
#pragma DATA_SECTION(xdc_runtime_LoggerBuf_level4Mask__C, ".const:xdc_runtime_LoggerBuf_level4Mask__C");
__FAR__ const CT__xdc_runtime_LoggerBuf_level4Mask xdc_runtime_LoggerBuf_level4Mask__C = (xdc_Bits16)0xff87;


/*
 * ======== xdc.runtime.LoggerBuf_Module_GateProxy INITIALIZERS ========
 */


/*
 * ======== xdc.runtime.LoggerBuf_TimestampProxy INITIALIZERS ========
 */


/*
 * ======== xdc.runtime.Main INITIALIZERS ========
 */

/* Module__root__V */
xdc_runtime_Main_Module__ xdc_runtime_Main_Module__root__V = {
    256,  /* mask */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Main_Module__diagsEnabled__C, ".const:xdc_runtime_Main_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_Main_Module__diagsEnabled xdc_runtime_Main_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_Main_Module__diagsIncluded__C, ".const:xdc_runtime_Main_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_Main_Module__diagsIncluded xdc_runtime_Main_Module__diagsIncluded__C = (xdc_Bits32)0x190;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_Main_Module__diagsMask__C, ".const:xdc_runtime_Main_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_Main_Module__diagsMask xdc_runtime_Main_Module__diagsMask__C = ((CT__xdc_runtime_Main_Module__diagsMask)((void*)&xdc_runtime_Main_Module__root__V.mask));

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_Main_Module__gateObj__C, ".const:xdc_runtime_Main_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_Main_Module__gateObj xdc_runtime_Main_Module__gateObj__C = ((CT__xdc_runtime_Main_Module__gateObj)((const void*)(xdc_runtime_IGateProvider_Handle)&ti_sysbios_gates_GateHwi_Object__table__V[0]));

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_Main_Module__gatePrms__C, ".const:xdc_runtime_Main_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_Main_Module__gatePrms xdc_runtime_Main_Module__gatePrms__C = ((CT__xdc_runtime_Main_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_Main_Module__id__C, ".const:xdc_runtime_Main_Module__id__C");
__FAR__ const CT__xdc_runtime_Main_Module__id xdc_runtime_Main_Module__id__C = (xdc_Bits16)0x800a;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_Main_Module__loggerDefined__C, ".const:xdc_runtime_Main_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_Main_Module__loggerDefined xdc_runtime_Main_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_Main_Module__loggerObj__C, ".const:xdc_runtime_Main_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_Main_Module__loggerObj xdc_runtime_Main_Module__loggerObj__C = ((CT__xdc_runtime_Main_Module__loggerObj)((const void*)(xdc_runtime_ILogger_Handle)&xdc_runtime_LoggerBuf_Object__table__V[0]));

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_Main_Module__loggerFxn0__C, ".const:xdc_runtime_Main_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_Main_Module__loggerFxn0 xdc_runtime_Main_Module__loggerFxn0__C = ((CT__xdc_runtime_Main_Module__loggerFxn0)((xdc_Fxn)xdc_runtime_LoggerBuf_write0));

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_Main_Module__loggerFxn1__C, ".const:xdc_runtime_Main_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_Main_Module__loggerFxn1 xdc_runtime_Main_Module__loggerFxn1__C = ((CT__xdc_runtime_Main_Module__loggerFxn1)((xdc_Fxn)xdc_runtime_LoggerBuf_write1));

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Main_Module__loggerFxn2__C, ".const:xdc_runtime_Main_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_Main_Module__loggerFxn2 xdc_runtime_Main_Module__loggerFxn2__C = ((CT__xdc_runtime_Main_Module__loggerFxn2)((xdc_Fxn)xdc_runtime_LoggerBuf_write2));

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_Main_Module__loggerFxn4__C, ".const:xdc_runtime_Main_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_Main_Module__loggerFxn4 xdc_runtime_Main_Module__loggerFxn4__C = ((CT__xdc_runtime_Main_Module__loggerFxn4)((xdc_Fxn)xdc_runtime_LoggerBuf_write4));

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_Main_Module__loggerFxn8__C, ".const:xdc_runtime_Main_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_Main_Module__loggerFxn8 xdc_runtime_Main_Module__loggerFxn8__C = ((CT__xdc_runtime_Main_Module__loggerFxn8)((xdc_Fxn)xdc_runtime_LoggerBuf_write8));

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_Main_Object__count__C, ".const:xdc_runtime_Main_Object__count__C");
__FAR__ const CT__xdc_runtime_Main_Object__count xdc_runtime_Main_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_Main_Object__heap__C, ".const:xdc_runtime_Main_Object__heap__C");
__FAR__ const CT__xdc_runtime_Main_Object__heap xdc_runtime_Main_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_Main_Object__sizeof__C, ".const:xdc_runtime_Main_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_Main_Object__sizeof xdc_runtime_Main_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_Main_Object__table__C, ".const:xdc_runtime_Main_Object__table__C");
__FAR__ const CT__xdc_runtime_Main_Object__table xdc_runtime_Main_Object__table__C = 0;


/*
 * ======== xdc.runtime.Main_Module_GateProxy INITIALIZERS ========
 */


/*
 * ======== xdc.runtime.Memory INITIALIZERS ========
 */

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_xdc_runtime_Memory_Module__state__V"
#endif
#if defined(__llvm__) && defined(__ti__)
xdc_runtime_Memory_Module_State__ xdc_runtime_Memory_Module__state__V __attribute__ ((section(".data:xdc_runtime_Memory_Module__state__V")));
#elif defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __TI_COMPILER_VERSION__
xdc_runtime_Memory_Module_State__ xdc_runtime_Memory_Module__state__V __attribute__ ((section(".data_xdc_runtime_Memory_Module__state__V")));
#endif
#endif
xdc_runtime_Memory_Module_State__ xdc_runtime_Memory_Module__state__V = {
    (xdc_SizeT)0x8,  /* maxDefaultTypeAlign */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Module__diagsEnabled__C, ".const:xdc_runtime_Memory_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_Memory_Module__diagsEnabled xdc_runtime_Memory_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Module__diagsIncluded__C, ".const:xdc_runtime_Memory_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_Memory_Module__diagsIncluded xdc_runtime_Memory_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Module__diagsMask__C, ".const:xdc_runtime_Memory_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_Memory_Module__diagsMask xdc_runtime_Memory_Module__diagsMask__C = ((CT__xdc_runtime_Memory_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Module__gateObj__C, ".const:xdc_runtime_Memory_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_Memory_Module__gateObj xdc_runtime_Memory_Module__gateObj__C = ((CT__xdc_runtime_Memory_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Module__gatePrms__C, ".const:xdc_runtime_Memory_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_Memory_Module__gatePrms xdc_runtime_Memory_Module__gatePrms__C = ((CT__xdc_runtime_Memory_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Module__id__C, ".const:xdc_runtime_Memory_Module__id__C");
__FAR__ const CT__xdc_runtime_Memory_Module__id xdc_runtime_Memory_Module__id__C = (xdc_Bits16)0x800b;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Module__loggerDefined__C, ".const:xdc_runtime_Memory_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_Memory_Module__loggerDefined xdc_runtime_Memory_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Module__loggerObj__C, ".const:xdc_runtime_Memory_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_Memory_Module__loggerObj xdc_runtime_Memory_Module__loggerObj__C = ((CT__xdc_runtime_Memory_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Module__loggerFxn0__C, ".const:xdc_runtime_Memory_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_Memory_Module__loggerFxn0 xdc_runtime_Memory_Module__loggerFxn0__C = ((CT__xdc_runtime_Memory_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Module__loggerFxn1__C, ".const:xdc_runtime_Memory_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_Memory_Module__loggerFxn1 xdc_runtime_Memory_Module__loggerFxn1__C = ((CT__xdc_runtime_Memory_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Module__loggerFxn2__C, ".const:xdc_runtime_Memory_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_Memory_Module__loggerFxn2 xdc_runtime_Memory_Module__loggerFxn2__C = ((CT__xdc_runtime_Memory_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Module__loggerFxn4__C, ".const:xdc_runtime_Memory_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_Memory_Module__loggerFxn4 xdc_runtime_Memory_Module__loggerFxn4__C = ((CT__xdc_runtime_Memory_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Module__loggerFxn8__C, ".const:xdc_runtime_Memory_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_Memory_Module__loggerFxn8 xdc_runtime_Memory_Module__loggerFxn8__C = ((CT__xdc_runtime_Memory_Module__loggerFxn8)0);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Object__count__C, ".const:xdc_runtime_Memory_Object__count__C");
__FAR__ const CT__xdc_runtime_Memory_Object__count xdc_runtime_Memory_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Object__heap__C, ".const:xdc_runtime_Memory_Object__heap__C");
__FAR__ const CT__xdc_runtime_Memory_Object__heap xdc_runtime_Memory_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Object__sizeof__C, ".const:xdc_runtime_Memory_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_Memory_Object__sizeof xdc_runtime_Memory_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Object__table__C, ".const:xdc_runtime_Memory_Object__table__C");
__FAR__ const CT__xdc_runtime_Memory_Object__table xdc_runtime_Memory_Object__table__C = 0;

/* defaultHeapInstance__C */
#pragma DATA_SECTION(xdc_runtime_Memory_defaultHeapInstance__C, ".const:xdc_runtime_Memory_defaultHeapInstance__C");
__FAR__ const CT__xdc_runtime_Memory_defaultHeapInstance xdc_runtime_Memory_defaultHeapInstance__C = (xdc_runtime_IHeap_Handle)&ti_sysbios_heaps_HeapMem_Object__table__V[0];


/*
 * ======== xdc.runtime.Memory_HeapProxy INITIALIZERS ========
 */


/*
 * ======== xdc.runtime.Registry INITIALIZERS ========
 */

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_xdc_runtime_Registry_Module__state__V"
#endif
#if defined(__llvm__) && defined(__ti__)
xdc_runtime_Registry_Module_State__ xdc_runtime_Registry_Module__state__V __attribute__ ((section(".data:xdc_runtime_Registry_Module__state__V")));
#elif defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __TI_COMPILER_VERSION__
xdc_runtime_Registry_Module_State__ xdc_runtime_Registry_Module__state__V __attribute__ ((section(".data_xdc_runtime_Registry_Module__state__V")));
#endif
#endif
xdc_runtime_Registry_Module_State__ xdc_runtime_Registry_Module__state__V = {
    ((xdc_runtime_Types_RegDesc*)0),  /* listHead */
    (xdc_Bits16)0x7fff,  /* curId */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Module__diagsEnabled__C, ".const:xdc_runtime_Registry_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_Registry_Module__diagsEnabled xdc_runtime_Registry_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Module__diagsIncluded__C, ".const:xdc_runtime_Registry_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_Registry_Module__diagsIncluded xdc_runtime_Registry_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Module__diagsMask__C, ".const:xdc_runtime_Registry_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_Registry_Module__diagsMask xdc_runtime_Registry_Module__diagsMask__C = ((CT__xdc_runtime_Registry_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Module__gateObj__C, ".const:xdc_runtime_Registry_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_Registry_Module__gateObj xdc_runtime_Registry_Module__gateObj__C = ((CT__xdc_runtime_Registry_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Module__gatePrms__C, ".const:xdc_runtime_Registry_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_Registry_Module__gatePrms xdc_runtime_Registry_Module__gatePrms__C = ((CT__xdc_runtime_Registry_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Module__id__C, ".const:xdc_runtime_Registry_Module__id__C");
__FAR__ const CT__xdc_runtime_Registry_Module__id xdc_runtime_Registry_Module__id__C = (xdc_Bits16)0x800c;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Module__loggerDefined__C, ".const:xdc_runtime_Registry_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_Registry_Module__loggerDefined xdc_runtime_Registry_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Module__loggerObj__C, ".const:xdc_runtime_Registry_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_Registry_Module__loggerObj xdc_runtime_Registry_Module__loggerObj__C = ((CT__xdc_runtime_Registry_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Module__loggerFxn0__C, ".const:xdc_runtime_Registry_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_Registry_Module__loggerFxn0 xdc_runtime_Registry_Module__loggerFxn0__C = ((CT__xdc_runtime_Registry_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Module__loggerFxn1__C, ".const:xdc_runtime_Registry_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_Registry_Module__loggerFxn1 xdc_runtime_Registry_Module__loggerFxn1__C = ((CT__xdc_runtime_Registry_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Module__loggerFxn2__C, ".const:xdc_runtime_Registry_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_Registry_Module__loggerFxn2 xdc_runtime_Registry_Module__loggerFxn2__C = ((CT__xdc_runtime_Registry_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Module__loggerFxn4__C, ".const:xdc_runtime_Registry_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_Registry_Module__loggerFxn4 xdc_runtime_Registry_Module__loggerFxn4__C = ((CT__xdc_runtime_Registry_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Module__loggerFxn8__C, ".const:xdc_runtime_Registry_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_Registry_Module__loggerFxn8 xdc_runtime_Registry_Module__loggerFxn8__C = ((CT__xdc_runtime_Registry_Module__loggerFxn8)0);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Object__count__C, ".const:xdc_runtime_Registry_Object__count__C");
__FAR__ const CT__xdc_runtime_Registry_Object__count xdc_runtime_Registry_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Object__heap__C, ".const:xdc_runtime_Registry_Object__heap__C");
__FAR__ const CT__xdc_runtime_Registry_Object__heap xdc_runtime_Registry_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Object__sizeof__C, ".const:xdc_runtime_Registry_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_Registry_Object__sizeof xdc_runtime_Registry_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Object__table__C, ".const:xdc_runtime_Registry_Object__table__C");
__FAR__ const CT__xdc_runtime_Registry_Object__table xdc_runtime_Registry_Object__table__C = 0;


/*
 * ======== xdc.runtime.Startup INITIALIZERS ========
 */

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_xdc_runtime_Startup_Module__state__V"
#endif
#if defined(__llvm__) && defined(__ti__)
xdc_runtime_Startup_Module_State__ xdc_runtime_Startup_Module__state__V __attribute__ ((section(".data:xdc_runtime_Startup_Module__state__V")));
#elif defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __TI_COMPILER_VERSION__
xdc_runtime_Startup_Module_State__ xdc_runtime_Startup_Module__state__V __attribute__ ((section(".data_xdc_runtime_Startup_Module__state__V")));
#endif
#endif
xdc_runtime_Startup_Module_State__ xdc_runtime_Startup_Module__state__V = {
    ((xdc_Int*)0),  /* stateTab */
    0,  /* execFlag */
    0,  /* rtsDoneFlag */
};

/* --> xdc_runtime_Startup_firstFxns__A */
#pragma DATA_SECTION(xdc_runtime_Startup_firstFxns__A, ".const:xdc_runtime_Startup_firstFxns__A");
const __T1_xdc_runtime_Startup_firstFxns xdc_runtime_Startup_firstFxns__A[2] = {
    ((xdc_Void(*)(xdc_Void))((xdc_Fxn)ti_sysbios_heaps_HeapMem_init__I)),  /* [0] */
    ((xdc_Void(*)(xdc_Void))((xdc_Fxn)ti_sysbios_hal_Hwi_initStack)),  /* [1] */
};

/* --> xdc_runtime_Startup_sfxnTab__A */
#pragma DATA_SECTION(xdc_runtime_Startup_sfxnTab__A, ".const:xdc_runtime_Startup_sfxnTab__A");
const __T1_xdc_runtime_Startup_sfxnTab xdc_runtime_Startup_sfxnTab__A[13] = {
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)xdc_runtime_LoggerBuf_Module_startup__E)),  /* [0] */
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)xdc_runtime_System_Module_startup__E)),  /* [1] */
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)ti_sysbios_family_c64p_EventCombiner_Module_startup__E)),  /* [2] */
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)ti_sysbios_family_c64p_Exception_Module_startup__E)),  /* [3] */
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)ti_sysbios_family_c64p_Hwi_Module_startup__E)),  /* [4] */
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)ti_sysbios_family_c64p_TimestampProvider_Module_startup__E)),  /* [5] */
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)ti_sysbios_family_c64p_Cache_Module_startup__E)),  /* [6] */
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)ti_sysbios_knl_Clock_Module_startup__E)),  /* [7] */
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)ti_sysbios_knl_Swi_Module_startup__E)),  /* [8] */
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)ti_sysbios_knl_Task_Module_startup__E)),  /* [9] */
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)ti_sysbios_heaps_HeapBuf_Module_startup__E)),  /* [10] */
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)ti_sysbios_hal_Hwi_Module_startup__E)),  /* [11] */
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)ti_sysbios_timers_rti_Timer_Module_startup__E)),  /* [12] */
};

/* --> xdc_runtime_Startup_sfxnRts__A */
#pragma DATA_SECTION(xdc_runtime_Startup_sfxnRts__A, ".const:xdc_runtime_Startup_sfxnRts__A");
const __T1_xdc_runtime_Startup_sfxnRts xdc_runtime_Startup_sfxnRts__A[13] = {
    1,  /* [0] */
    1,  /* [1] */
    0,  /* [2] */
    0,  /* [3] */
    0,  /* [4] */
    1,  /* [5] */
    0,  /* [6] */
    0,  /* [7] */
    0,  /* [8] */
    0,  /* [9] */
    1,  /* [10] */
    0,  /* [11] */
    0,  /* [12] */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Module__diagsEnabled__C, ".const:xdc_runtime_Startup_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_Startup_Module__diagsEnabled xdc_runtime_Startup_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Module__diagsIncluded__C, ".const:xdc_runtime_Startup_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_Startup_Module__diagsIncluded xdc_runtime_Startup_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Module__diagsMask__C, ".const:xdc_runtime_Startup_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_Startup_Module__diagsMask xdc_runtime_Startup_Module__diagsMask__C = ((CT__xdc_runtime_Startup_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Module__gateObj__C, ".const:xdc_runtime_Startup_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_Startup_Module__gateObj xdc_runtime_Startup_Module__gateObj__C = ((CT__xdc_runtime_Startup_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Module__gatePrms__C, ".const:xdc_runtime_Startup_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_Startup_Module__gatePrms xdc_runtime_Startup_Module__gatePrms__C = ((CT__xdc_runtime_Startup_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Module__id__C, ".const:xdc_runtime_Startup_Module__id__C");
__FAR__ const CT__xdc_runtime_Startup_Module__id xdc_runtime_Startup_Module__id__C = (xdc_Bits16)0x800d;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Module__loggerDefined__C, ".const:xdc_runtime_Startup_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_Startup_Module__loggerDefined xdc_runtime_Startup_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Module__loggerObj__C, ".const:xdc_runtime_Startup_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_Startup_Module__loggerObj xdc_runtime_Startup_Module__loggerObj__C = ((CT__xdc_runtime_Startup_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Module__loggerFxn0__C, ".const:xdc_runtime_Startup_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_Startup_Module__loggerFxn0 xdc_runtime_Startup_Module__loggerFxn0__C = ((CT__xdc_runtime_Startup_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Module__loggerFxn1__C, ".const:xdc_runtime_Startup_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_Startup_Module__loggerFxn1 xdc_runtime_Startup_Module__loggerFxn1__C = ((CT__xdc_runtime_Startup_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Module__loggerFxn2__C, ".const:xdc_runtime_Startup_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_Startup_Module__loggerFxn2 xdc_runtime_Startup_Module__loggerFxn2__C = ((CT__xdc_runtime_Startup_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Module__loggerFxn4__C, ".const:xdc_runtime_Startup_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_Startup_Module__loggerFxn4 xdc_runtime_Startup_Module__loggerFxn4__C = ((CT__xdc_runtime_Startup_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Module__loggerFxn8__C, ".const:xdc_runtime_Startup_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_Startup_Module__loggerFxn8 xdc_runtime_Startup_Module__loggerFxn8__C = ((CT__xdc_runtime_Startup_Module__loggerFxn8)0);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Object__count__C, ".const:xdc_runtime_Startup_Object__count__C");
__FAR__ const CT__xdc_runtime_Startup_Object__count xdc_runtime_Startup_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Object__heap__C, ".const:xdc_runtime_Startup_Object__heap__C");
__FAR__ const CT__xdc_runtime_Startup_Object__heap xdc_runtime_Startup_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Object__sizeof__C, ".const:xdc_runtime_Startup_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_Startup_Object__sizeof xdc_runtime_Startup_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Object__table__C, ".const:xdc_runtime_Startup_Object__table__C");
__FAR__ const CT__xdc_runtime_Startup_Object__table xdc_runtime_Startup_Object__table__C = 0;

/* maxPasses__C */
#pragma DATA_SECTION(xdc_runtime_Startup_maxPasses__C, ".const:xdc_runtime_Startup_maxPasses__C");
__FAR__ const CT__xdc_runtime_Startup_maxPasses xdc_runtime_Startup_maxPasses__C = (xdc_Int)0x20;

/* firstFxns__C */
#pragma DATA_SECTION(xdc_runtime_Startup_firstFxns__C, ".const:xdc_runtime_Startup_firstFxns__C");
__FAR__ const CT__xdc_runtime_Startup_firstFxns xdc_runtime_Startup_firstFxns__C = {2, ((__T1_xdc_runtime_Startup_firstFxns *)xdc_runtime_Startup_firstFxns__A)};

/* lastFxns__C */
#pragma DATA_SECTION(xdc_runtime_Startup_lastFxns__C, ".const:xdc_runtime_Startup_lastFxns__C");
__FAR__ const CT__xdc_runtime_Startup_lastFxns xdc_runtime_Startup_lastFxns__C = {0, 0};

/* startModsFxn__C */
#pragma DATA_SECTION(xdc_runtime_Startup_startModsFxn__C, ".const:xdc_runtime_Startup_startModsFxn__C");
__FAR__ const CT__xdc_runtime_Startup_startModsFxn xdc_runtime_Startup_startModsFxn__C = ((CT__xdc_runtime_Startup_startModsFxn)((xdc_Fxn)xdc_runtime_Startup_startMods__I));

/* execImpl__C */
#pragma DATA_SECTION(xdc_runtime_Startup_execImpl__C, ".const:xdc_runtime_Startup_execImpl__C");
__FAR__ const CT__xdc_runtime_Startup_execImpl xdc_runtime_Startup_execImpl__C = ((CT__xdc_runtime_Startup_execImpl)((xdc_Fxn)xdc_runtime_Startup_exec__I));

/* sfxnTab__C */
#pragma DATA_SECTION(xdc_runtime_Startup_sfxnTab__C, ".const:xdc_runtime_Startup_sfxnTab__C");
__FAR__ const CT__xdc_runtime_Startup_sfxnTab xdc_runtime_Startup_sfxnTab__C = ((CT__xdc_runtime_Startup_sfxnTab)xdc_runtime_Startup_sfxnTab__A);

/* sfxnRts__C */
#pragma DATA_SECTION(xdc_runtime_Startup_sfxnRts__C, ".const:xdc_runtime_Startup_sfxnRts__C");
__FAR__ const CT__xdc_runtime_Startup_sfxnRts xdc_runtime_Startup_sfxnRts__C = ((CT__xdc_runtime_Startup_sfxnRts)xdc_runtime_Startup_sfxnRts__A);


/*
 * ======== xdc.runtime.SysStd INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_SysStd_Module__diagsEnabled__C, ".const:xdc_runtime_SysStd_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_SysStd_Module__diagsEnabled xdc_runtime_SysStd_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_SysStd_Module__diagsIncluded__C, ".const:xdc_runtime_SysStd_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_SysStd_Module__diagsIncluded xdc_runtime_SysStd_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_SysStd_Module__diagsMask__C, ".const:xdc_runtime_SysStd_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_SysStd_Module__diagsMask xdc_runtime_SysStd_Module__diagsMask__C = ((CT__xdc_runtime_SysStd_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_SysStd_Module__gateObj__C, ".const:xdc_runtime_SysStd_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_SysStd_Module__gateObj xdc_runtime_SysStd_Module__gateObj__C = ((CT__xdc_runtime_SysStd_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_SysStd_Module__gatePrms__C, ".const:xdc_runtime_SysStd_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_SysStd_Module__gatePrms xdc_runtime_SysStd_Module__gatePrms__C = ((CT__xdc_runtime_SysStd_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_SysStd_Module__id__C, ".const:xdc_runtime_SysStd_Module__id__C");
__FAR__ const CT__xdc_runtime_SysStd_Module__id xdc_runtime_SysStd_Module__id__C = (xdc_Bits16)0x800f;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_SysStd_Module__loggerDefined__C, ".const:xdc_runtime_SysStd_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_SysStd_Module__loggerDefined xdc_runtime_SysStd_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_SysStd_Module__loggerObj__C, ".const:xdc_runtime_SysStd_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_SysStd_Module__loggerObj xdc_runtime_SysStd_Module__loggerObj__C = ((CT__xdc_runtime_SysStd_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_SysStd_Module__loggerFxn0__C, ".const:xdc_runtime_SysStd_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_SysStd_Module__loggerFxn0 xdc_runtime_SysStd_Module__loggerFxn0__C = ((CT__xdc_runtime_SysStd_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_SysStd_Module__loggerFxn1__C, ".const:xdc_runtime_SysStd_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_SysStd_Module__loggerFxn1 xdc_runtime_SysStd_Module__loggerFxn1__C = ((CT__xdc_runtime_SysStd_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_SysStd_Module__loggerFxn2__C, ".const:xdc_runtime_SysStd_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_SysStd_Module__loggerFxn2 xdc_runtime_SysStd_Module__loggerFxn2__C = ((CT__xdc_runtime_SysStd_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_SysStd_Module__loggerFxn4__C, ".const:xdc_runtime_SysStd_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_SysStd_Module__loggerFxn4 xdc_runtime_SysStd_Module__loggerFxn4__C = ((CT__xdc_runtime_SysStd_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_SysStd_Module__loggerFxn8__C, ".const:xdc_runtime_SysStd_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_SysStd_Module__loggerFxn8 xdc_runtime_SysStd_Module__loggerFxn8__C = ((CT__xdc_runtime_SysStd_Module__loggerFxn8)0);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_SysStd_Object__count__C, ".const:xdc_runtime_SysStd_Object__count__C");
__FAR__ const CT__xdc_runtime_SysStd_Object__count xdc_runtime_SysStd_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_SysStd_Object__heap__C, ".const:xdc_runtime_SysStd_Object__heap__C");
__FAR__ const CT__xdc_runtime_SysStd_Object__heap xdc_runtime_SysStd_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_SysStd_Object__sizeof__C, ".const:xdc_runtime_SysStd_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_SysStd_Object__sizeof xdc_runtime_SysStd_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_SysStd_Object__table__C, ".const:xdc_runtime_SysStd_Object__table__C");
__FAR__ const CT__xdc_runtime_SysStd_Object__table xdc_runtime_SysStd_Object__table__C = 0;


/*
 * ======== xdc.runtime.System INITIALIZERS ========
 */

/* --> xdc_runtime_System_Module_State_0_atexitHandlers__A */
__T1_xdc_runtime_System_Module_State__atexitHandlers xdc_runtime_System_Module_State_0_atexitHandlers__A[8] = {
    ((xdc_Void(*)(xdc_Int))0),  /* [0] */
    ((xdc_Void(*)(xdc_Int))0),  /* [1] */
    ((xdc_Void(*)(xdc_Int))0),  /* [2] */
    ((xdc_Void(*)(xdc_Int))0),  /* [3] */
    ((xdc_Void(*)(xdc_Int))0),  /* [4] */
    ((xdc_Void(*)(xdc_Int))0),  /* [5] */
    ((xdc_Void(*)(xdc_Int))0),  /* [6] */
    ((xdc_Void(*)(xdc_Int))0),  /* [7] */
};

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_xdc_runtime_System_Module__state__V"
#endif
#if defined(__llvm__) && defined(__ti__)
xdc_runtime_System_Module_State__ xdc_runtime_System_Module__state__V __attribute__ ((section(".data:xdc_runtime_System_Module__state__V")));
#elif defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __TI_COMPILER_VERSION__
xdc_runtime_System_Module_State__ xdc_runtime_System_Module__state__V __attribute__ ((section(".data_xdc_runtime_System_Module__state__V")));
#endif
#endif
xdc_runtime_System_Module_State__ xdc_runtime_System_Module__state__V = {
    ((void*)xdc_runtime_System_Module_State_0_atexitHandlers__A),  /* atexitHandlers */
    (xdc_Int)0x0,  /* numAtexitHandlers */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_System_Module__diagsEnabled__C, ".const:xdc_runtime_System_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_System_Module__diagsEnabled xdc_runtime_System_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_System_Module__diagsIncluded__C, ".const:xdc_runtime_System_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_System_Module__diagsIncluded xdc_runtime_System_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_System_Module__diagsMask__C, ".const:xdc_runtime_System_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_System_Module__diagsMask xdc_runtime_System_Module__diagsMask__C = ((CT__xdc_runtime_System_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_System_Module__gateObj__C, ".const:xdc_runtime_System_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_System_Module__gateObj xdc_runtime_System_Module__gateObj__C = ((CT__xdc_runtime_System_Module__gateObj)((const void*)(xdc_runtime_IGateProvider_Handle)&ti_sysbios_gates_GateHwi_Object__table__V[0]));

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_System_Module__gatePrms__C, ".const:xdc_runtime_System_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_System_Module__gatePrms xdc_runtime_System_Module__gatePrms__C = ((CT__xdc_runtime_System_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_System_Module__id__C, ".const:xdc_runtime_System_Module__id__C");
__FAR__ const CT__xdc_runtime_System_Module__id xdc_runtime_System_Module__id__C = (xdc_Bits16)0x800e;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_System_Module__loggerDefined__C, ".const:xdc_runtime_System_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_System_Module__loggerDefined xdc_runtime_System_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_System_Module__loggerObj__C, ".const:xdc_runtime_System_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_System_Module__loggerObj xdc_runtime_System_Module__loggerObj__C = ((CT__xdc_runtime_System_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_System_Module__loggerFxn0__C, ".const:xdc_runtime_System_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_System_Module__loggerFxn0 xdc_runtime_System_Module__loggerFxn0__C = ((CT__xdc_runtime_System_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_System_Module__loggerFxn1__C, ".const:xdc_runtime_System_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_System_Module__loggerFxn1 xdc_runtime_System_Module__loggerFxn1__C = ((CT__xdc_runtime_System_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_System_Module__loggerFxn2__C, ".const:xdc_runtime_System_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_System_Module__loggerFxn2 xdc_runtime_System_Module__loggerFxn2__C = ((CT__xdc_runtime_System_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_System_Module__loggerFxn4__C, ".const:xdc_runtime_System_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_System_Module__loggerFxn4 xdc_runtime_System_Module__loggerFxn4__C = ((CT__xdc_runtime_System_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_System_Module__loggerFxn8__C, ".const:xdc_runtime_System_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_System_Module__loggerFxn8 xdc_runtime_System_Module__loggerFxn8__C = ((CT__xdc_runtime_System_Module__loggerFxn8)0);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_System_Object__count__C, ".const:xdc_runtime_System_Object__count__C");
__FAR__ const CT__xdc_runtime_System_Object__count xdc_runtime_System_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_System_Object__heap__C, ".const:xdc_runtime_System_Object__heap__C");
__FAR__ const CT__xdc_runtime_System_Object__heap xdc_runtime_System_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_System_Object__sizeof__C, ".const:xdc_runtime_System_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_System_Object__sizeof xdc_runtime_System_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_System_Object__table__C, ".const:xdc_runtime_System_Object__table__C");
__FAR__ const CT__xdc_runtime_System_Object__table xdc_runtime_System_Object__table__C = 0;

/* A_cannotFitIntoArg__C */
#pragma DATA_SECTION(xdc_runtime_System_A_cannotFitIntoArg__C, ".const:xdc_runtime_System_A_cannotFitIntoArg__C");
__FAR__ const CT__xdc_runtime_System_A_cannotFitIntoArg xdc_runtime_System_A_cannotFitIntoArg__C = (((xdc_runtime_Assert_Id)352) << 16 | 16);

/* maxAtexitHandlers__C */
#pragma DATA_SECTION(xdc_runtime_System_maxAtexitHandlers__C, ".const:xdc_runtime_System_maxAtexitHandlers__C");
__FAR__ const CT__xdc_runtime_System_maxAtexitHandlers xdc_runtime_System_maxAtexitHandlers__C = (xdc_Int)0x8;

/* abortFxn__C */
#pragma DATA_SECTION(xdc_runtime_System_abortFxn__C, ".const:xdc_runtime_System_abortFxn__C");
__FAR__ const CT__xdc_runtime_System_abortFxn xdc_runtime_System_abortFxn__C = ((CT__xdc_runtime_System_abortFxn)((xdc_Fxn)xdc_runtime_System_abortStd__E));

/* exitFxn__C */
#pragma DATA_SECTION(xdc_runtime_System_exitFxn__C, ".const:xdc_runtime_System_exitFxn__C");
__FAR__ const CT__xdc_runtime_System_exitFxn xdc_runtime_System_exitFxn__C = ((CT__xdc_runtime_System_exitFxn)((xdc_Fxn)xdc_runtime_System_exitStd__E));

/* extendFxn__C */
#pragma DATA_SECTION(xdc_runtime_System_extendFxn__C, ".const:xdc_runtime_System_extendFxn__C");
__FAR__ const CT__xdc_runtime_System_extendFxn xdc_runtime_System_extendFxn__C = ((CT__xdc_runtime_System_extendFxn)((xdc_Fxn)xdc_runtime_System_printfExtend__I));


/*
 * ======== xdc.runtime.System_Module_GateProxy INITIALIZERS ========
 */


/*
 * ======== xdc.runtime.System_SupportProxy INITIALIZERS ========
 */


/*
 * ======== xdc.runtime.Text INITIALIZERS ========
 */

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_xdc_runtime_Text_Module__state__V"
#endif
#if defined(__llvm__) && defined(__ti__)
xdc_runtime_Text_Module_State__ xdc_runtime_Text_Module__state__V __attribute__ ((section(".data:xdc_runtime_Text_Module__state__V")));
#elif defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __TI_COMPILER_VERSION__
xdc_runtime_Text_Module_State__ xdc_runtime_Text_Module__state__V __attribute__ ((section(".data_xdc_runtime_Text_Module__state__V")));
#endif
#endif
xdc_runtime_Text_Module_State__ xdc_runtime_Text_Module__state__V = {
    ((xdc_CPtr)(&xdc_runtime_Text_charTab__A[0])),  /* charBase */
    ((xdc_CPtr)(&xdc_runtime_Text_nodeTab__A[0])),  /* nodeBase */
};

/* --> xdc_runtime_Text_charTab__A */
#pragma DATA_SECTION(xdc_runtime_Text_charTab__A, ".const:xdc_runtime_Text_charTab__A");
const __T1_xdc_runtime_Text_charTab xdc_runtime_Text_charTab__A[6745] = {
    (xdc_Char)0x0,  /* [0] */
    (xdc_Char)0x41,  /* [1] */
    (xdc_Char)0x5f,  /* [2] */
    (xdc_Char)0x69,  /* [3] */
    (xdc_Char)0x6e,  /* [4] */
    (xdc_Char)0x69,  /* [5] */
    (xdc_Char)0x74,  /* [6] */
    (xdc_Char)0x69,  /* [7] */
    (xdc_Char)0x61,  /* [8] */
    (xdc_Char)0x6c,  /* [9] */
    (xdc_Char)0x69,  /* [10] */
    (xdc_Char)0x7a,  /* [11] */
    (xdc_Char)0x65,  /* [12] */
    (xdc_Char)0x64,  /* [13] */
    (xdc_Char)0x50,  /* [14] */
    (xdc_Char)0x61,  /* [15] */
    (xdc_Char)0x72,  /* [16] */
    (xdc_Char)0x61,  /* [17] */
    (xdc_Char)0x6d,  /* [18] */
    (xdc_Char)0x73,  /* [19] */
    (xdc_Char)0x3a,  /* [20] */
    (xdc_Char)0x20,  /* [21] */
    (xdc_Char)0x75,  /* [22] */
    (xdc_Char)0x6e,  /* [23] */
    (xdc_Char)0x69,  /* [24] */
    (xdc_Char)0x6e,  /* [25] */
    (xdc_Char)0x69,  /* [26] */
    (xdc_Char)0x74,  /* [27] */
    (xdc_Char)0x69,  /* [28] */
    (xdc_Char)0x61,  /* [29] */
    (xdc_Char)0x6c,  /* [30] */
    (xdc_Char)0x69,  /* [31] */
    (xdc_Char)0x7a,  /* [32] */
    (xdc_Char)0x65,  /* [33] */
    (xdc_Char)0x64,  /* [34] */
    (xdc_Char)0x20,  /* [35] */
    (xdc_Char)0x50,  /* [36] */
    (xdc_Char)0x61,  /* [37] */
    (xdc_Char)0x72,  /* [38] */
    (xdc_Char)0x61,  /* [39] */
    (xdc_Char)0x6d,  /* [40] */
    (xdc_Char)0x73,  /* [41] */
    (xdc_Char)0x20,  /* [42] */
    (xdc_Char)0x73,  /* [43] */
    (xdc_Char)0x74,  /* [44] */
    (xdc_Char)0x72,  /* [45] */
    (xdc_Char)0x75,  /* [46] */
    (xdc_Char)0x63,  /* [47] */
    (xdc_Char)0x74,  /* [48] */
    (xdc_Char)0x0,  /* [49] */
    (xdc_Char)0x48,  /* [50] */
    (xdc_Char)0x65,  /* [51] */
    (xdc_Char)0x61,  /* [52] */
    (xdc_Char)0x70,  /* [53] */
    (xdc_Char)0x4d,  /* [54] */
    (xdc_Char)0x69,  /* [55] */
    (xdc_Char)0x6e,  /* [56] */
    (xdc_Char)0x5f,  /* [57] */
    (xdc_Char)0x63,  /* [58] */
    (xdc_Char)0x72,  /* [59] */
    (xdc_Char)0x65,  /* [60] */
    (xdc_Char)0x61,  /* [61] */
    (xdc_Char)0x74,  /* [62] */
    (xdc_Char)0x65,  /* [63] */
    (xdc_Char)0x20,  /* [64] */
    (xdc_Char)0x63,  /* [65] */
    (xdc_Char)0x61,  /* [66] */
    (xdc_Char)0x6e,  /* [67] */
    (xdc_Char)0x6e,  /* [68] */
    (xdc_Char)0x6f,  /* [69] */
    (xdc_Char)0x74,  /* [70] */
    (xdc_Char)0x20,  /* [71] */
    (xdc_Char)0x68,  /* [72] */
    (xdc_Char)0x61,  /* [73] */
    (xdc_Char)0x76,  /* [74] */
    (xdc_Char)0x65,  /* [75] */
    (xdc_Char)0x20,  /* [76] */
    (xdc_Char)0x61,  /* [77] */
    (xdc_Char)0x20,  /* [78] */
    (xdc_Char)0x7a,  /* [79] */
    (xdc_Char)0x65,  /* [80] */
    (xdc_Char)0x72,  /* [81] */
    (xdc_Char)0x6f,  /* [82] */
    (xdc_Char)0x20,  /* [83] */
    (xdc_Char)0x73,  /* [84] */
    (xdc_Char)0x69,  /* [85] */
    (xdc_Char)0x7a,  /* [86] */
    (xdc_Char)0x65,  /* [87] */
    (xdc_Char)0x20,  /* [88] */
    (xdc_Char)0x76,  /* [89] */
    (xdc_Char)0x61,  /* [90] */
    (xdc_Char)0x6c,  /* [91] */
    (xdc_Char)0x75,  /* [92] */
    (xdc_Char)0x65,  /* [93] */
    (xdc_Char)0x0,  /* [94] */
    (xdc_Char)0x48,  /* [95] */
    (xdc_Char)0x65,  /* [96] */
    (xdc_Char)0x61,  /* [97] */
    (xdc_Char)0x70,  /* [98] */
    (xdc_Char)0x53,  /* [99] */
    (xdc_Char)0x74,  /* [100] */
    (xdc_Char)0x64,  /* [101] */
    (xdc_Char)0x5f,  /* [102] */
    (xdc_Char)0x63,  /* [103] */
    (xdc_Char)0x72,  /* [104] */
    (xdc_Char)0x65,  /* [105] */
    (xdc_Char)0x61,  /* [106] */
    (xdc_Char)0x74,  /* [107] */
    (xdc_Char)0x65,  /* [108] */
    (xdc_Char)0x20,  /* [109] */
    (xdc_Char)0x63,  /* [110] */
    (xdc_Char)0x61,  /* [111] */
    (xdc_Char)0x6e,  /* [112] */
    (xdc_Char)0x6e,  /* [113] */
    (xdc_Char)0x6f,  /* [114] */
    (xdc_Char)0x74,  /* [115] */
    (xdc_Char)0x20,  /* [116] */
    (xdc_Char)0x68,  /* [117] */
    (xdc_Char)0x61,  /* [118] */
    (xdc_Char)0x76,  /* [119] */
    (xdc_Char)0x65,  /* [120] */
    (xdc_Char)0x20,  /* [121] */
    (xdc_Char)0x61,  /* [122] */
    (xdc_Char)0x20,  /* [123] */
    (xdc_Char)0x7a,  /* [124] */
    (xdc_Char)0x65,  /* [125] */
    (xdc_Char)0x72,  /* [126] */
    (xdc_Char)0x6f,  /* [127] */
    (xdc_Char)0x20,  /* [128] */
    (xdc_Char)0x73,  /* [129] */
    (xdc_Char)0x69,  /* [130] */
    (xdc_Char)0x7a,  /* [131] */
    (xdc_Char)0x65,  /* [132] */
    (xdc_Char)0x20,  /* [133] */
    (xdc_Char)0x76,  /* [134] */
    (xdc_Char)0x61,  /* [135] */
    (xdc_Char)0x6c,  /* [136] */
    (xdc_Char)0x75,  /* [137] */
    (xdc_Char)0x65,  /* [138] */
    (xdc_Char)0x0,  /* [139] */
    (xdc_Char)0x48,  /* [140] */
    (xdc_Char)0x65,  /* [141] */
    (xdc_Char)0x61,  /* [142] */
    (xdc_Char)0x70,  /* [143] */
    (xdc_Char)0x53,  /* [144] */
    (xdc_Char)0x74,  /* [145] */
    (xdc_Char)0x64,  /* [146] */
    (xdc_Char)0x5f,  /* [147] */
    (xdc_Char)0x61,  /* [148] */
    (xdc_Char)0x6c,  /* [149] */
    (xdc_Char)0x6c,  /* [150] */
    (xdc_Char)0x6f,  /* [151] */
    (xdc_Char)0x63,  /* [152] */
    (xdc_Char)0x20,  /* [153] */
    (xdc_Char)0x61,  /* [154] */
    (xdc_Char)0x6c,  /* [155] */
    (xdc_Char)0x69,  /* [156] */
    (xdc_Char)0x67,  /* [157] */
    (xdc_Char)0x6e,  /* [158] */
    (xdc_Char)0x6d,  /* [159] */
    (xdc_Char)0x65,  /* [160] */
    (xdc_Char)0x6e,  /* [161] */
    (xdc_Char)0x74,  /* [162] */
    (xdc_Char)0x20,  /* [163] */
    (xdc_Char)0x6d,  /* [164] */
    (xdc_Char)0x75,  /* [165] */
    (xdc_Char)0x73,  /* [166] */
    (xdc_Char)0x74,  /* [167] */
    (xdc_Char)0x20,  /* [168] */
    (xdc_Char)0x62,  /* [169] */
    (xdc_Char)0x65,  /* [170] */
    (xdc_Char)0x20,  /* [171] */
    (xdc_Char)0x61,  /* [172] */
    (xdc_Char)0x20,  /* [173] */
    (xdc_Char)0x70,  /* [174] */
    (xdc_Char)0x6f,  /* [175] */
    (xdc_Char)0x77,  /* [176] */
    (xdc_Char)0x65,  /* [177] */
    (xdc_Char)0x72,  /* [178] */
    (xdc_Char)0x20,  /* [179] */
    (xdc_Char)0x6f,  /* [180] */
    (xdc_Char)0x66,  /* [181] */
    (xdc_Char)0x20,  /* [182] */
    (xdc_Char)0x32,  /* [183] */
    (xdc_Char)0x0,  /* [184] */
    (xdc_Char)0x48,  /* [185] */
    (xdc_Char)0x65,  /* [186] */
    (xdc_Char)0x61,  /* [187] */
    (xdc_Char)0x70,  /* [188] */
    (xdc_Char)0x53,  /* [189] */
    (xdc_Char)0x74,  /* [190] */
    (xdc_Char)0x64,  /* [191] */
    (xdc_Char)0x20,  /* [192] */
    (xdc_Char)0x69,  /* [193] */
    (xdc_Char)0x6e,  /* [194] */
    (xdc_Char)0x73,  /* [195] */
    (xdc_Char)0x74,  /* [196] */
    (xdc_Char)0x61,  /* [197] */
    (xdc_Char)0x6e,  /* [198] */
    (xdc_Char)0x63,  /* [199] */
    (xdc_Char)0x65,  /* [200] */
    (xdc_Char)0x20,  /* [201] */
    (xdc_Char)0x74,  /* [202] */
    (xdc_Char)0x6f,  /* [203] */
    (xdc_Char)0x74,  /* [204] */
    (xdc_Char)0x61,  /* [205] */
    (xdc_Char)0x6c,  /* [206] */
    (xdc_Char)0x46,  /* [207] */
    (xdc_Char)0x72,  /* [208] */
    (xdc_Char)0x65,  /* [209] */
    (xdc_Char)0x65,  /* [210] */
    (xdc_Char)0x53,  /* [211] */
    (xdc_Char)0x69,  /* [212] */
    (xdc_Char)0x7a,  /* [213] */
    (xdc_Char)0x65,  /* [214] */
    (xdc_Char)0x20,  /* [215] */
    (xdc_Char)0x69,  /* [216] */
    (xdc_Char)0x73,  /* [217] */
    (xdc_Char)0x20,  /* [218] */
    (xdc_Char)0x67,  /* [219] */
    (xdc_Char)0x72,  /* [220] */
    (xdc_Char)0x65,  /* [221] */
    (xdc_Char)0x61,  /* [222] */
    (xdc_Char)0x74,  /* [223] */
    (xdc_Char)0x65,  /* [224] */
    (xdc_Char)0x72,  /* [225] */
    (xdc_Char)0x20,  /* [226] */
    (xdc_Char)0x74,  /* [227] */
    (xdc_Char)0x68,  /* [228] */
    (xdc_Char)0x61,  /* [229] */
    (xdc_Char)0x6e,  /* [230] */
    (xdc_Char)0x20,  /* [231] */
    (xdc_Char)0x73,  /* [232] */
    (xdc_Char)0x74,  /* [233] */
    (xdc_Char)0x61,  /* [234] */
    (xdc_Char)0x72,  /* [235] */
    (xdc_Char)0x74,  /* [236] */
    (xdc_Char)0x69,  /* [237] */
    (xdc_Char)0x6e,  /* [238] */
    (xdc_Char)0x67,  /* [239] */
    (xdc_Char)0x20,  /* [240] */
    (xdc_Char)0x73,  /* [241] */
    (xdc_Char)0x69,  /* [242] */
    (xdc_Char)0x7a,  /* [243] */
    (xdc_Char)0x65,  /* [244] */
    (xdc_Char)0x0,  /* [245] */
    (xdc_Char)0x48,  /* [246] */
    (xdc_Char)0x65,  /* [247] */
    (xdc_Char)0x61,  /* [248] */
    (xdc_Char)0x70,  /* [249] */
    (xdc_Char)0x53,  /* [250] */
    (xdc_Char)0x74,  /* [251] */
    (xdc_Char)0x64,  /* [252] */
    (xdc_Char)0x5f,  /* [253] */
    (xdc_Char)0x61,  /* [254] */
    (xdc_Char)0x6c,  /* [255] */
    (xdc_Char)0x6c,  /* [256] */
    (xdc_Char)0x6f,  /* [257] */
    (xdc_Char)0x63,  /* [258] */
    (xdc_Char)0x20,  /* [259] */
    (xdc_Char)0x2d,  /* [260] */
    (xdc_Char)0x20,  /* [261] */
    (xdc_Char)0x72,  /* [262] */
    (xdc_Char)0x65,  /* [263] */
    (xdc_Char)0x71,  /* [264] */
    (xdc_Char)0x75,  /* [265] */
    (xdc_Char)0x65,  /* [266] */
    (xdc_Char)0x73,  /* [267] */
    (xdc_Char)0x74,  /* [268] */
    (xdc_Char)0x65,  /* [269] */
    (xdc_Char)0x64,  /* [270] */
    (xdc_Char)0x20,  /* [271] */
    (xdc_Char)0x61,  /* [272] */
    (xdc_Char)0x6c,  /* [273] */
    (xdc_Char)0x69,  /* [274] */
    (xdc_Char)0x67,  /* [275] */
    (xdc_Char)0x6e,  /* [276] */
    (xdc_Char)0x6d,  /* [277] */
    (xdc_Char)0x65,  /* [278] */
    (xdc_Char)0x6e,  /* [279] */
    (xdc_Char)0x74,  /* [280] */
    (xdc_Char)0x20,  /* [281] */
    (xdc_Char)0x69,  /* [282] */
    (xdc_Char)0x73,  /* [283] */
    (xdc_Char)0x20,  /* [284] */
    (xdc_Char)0x67,  /* [285] */
    (xdc_Char)0x72,  /* [286] */
    (xdc_Char)0x65,  /* [287] */
    (xdc_Char)0x61,  /* [288] */
    (xdc_Char)0x74,  /* [289] */
    (xdc_Char)0x65,  /* [290] */
    (xdc_Char)0x72,  /* [291] */
    (xdc_Char)0x20,  /* [292] */
    (xdc_Char)0x74,  /* [293] */
    (xdc_Char)0x68,  /* [294] */
    (xdc_Char)0x61,  /* [295] */
    (xdc_Char)0x6e,  /* [296] */
    (xdc_Char)0x20,  /* [297] */
    (xdc_Char)0x61,  /* [298] */
    (xdc_Char)0x6c,  /* [299] */
    (xdc_Char)0x6c,  /* [300] */
    (xdc_Char)0x6f,  /* [301] */
    (xdc_Char)0x77,  /* [302] */
    (xdc_Char)0x65,  /* [303] */
    (xdc_Char)0x64,  /* [304] */
    (xdc_Char)0x0,  /* [305] */
    (xdc_Char)0x41,  /* [306] */
    (xdc_Char)0x5f,  /* [307] */
    (xdc_Char)0x69,  /* [308] */
    (xdc_Char)0x6e,  /* [309] */
    (xdc_Char)0x76,  /* [310] */
    (xdc_Char)0x61,  /* [311] */
    (xdc_Char)0x6c,  /* [312] */
    (xdc_Char)0x69,  /* [313] */
    (xdc_Char)0x64,  /* [314] */
    (xdc_Char)0x4c,  /* [315] */
    (xdc_Char)0x6f,  /* [316] */
    (xdc_Char)0x67,  /* [317] */
    (xdc_Char)0x67,  /* [318] */
    (xdc_Char)0x65,  /* [319] */
    (xdc_Char)0x72,  /* [320] */
    (xdc_Char)0x3a,  /* [321] */
    (xdc_Char)0x20,  /* [322] */
    (xdc_Char)0x54,  /* [323] */
    (xdc_Char)0x68,  /* [324] */
    (xdc_Char)0x65,  /* [325] */
    (xdc_Char)0x20,  /* [326] */
    (xdc_Char)0x6c,  /* [327] */
    (xdc_Char)0x6f,  /* [328] */
    (xdc_Char)0x67,  /* [329] */
    (xdc_Char)0x67,  /* [330] */
    (xdc_Char)0x65,  /* [331] */
    (xdc_Char)0x72,  /* [332] */
    (xdc_Char)0x20,  /* [333] */
    (xdc_Char)0x69,  /* [334] */
    (xdc_Char)0x64,  /* [335] */
    (xdc_Char)0x20,  /* [336] */
    (xdc_Char)0x25,  /* [337] */
    (xdc_Char)0x64,  /* [338] */
    (xdc_Char)0x20,  /* [339] */
    (xdc_Char)0x69,  /* [340] */
    (xdc_Char)0x73,  /* [341] */
    (xdc_Char)0x20,  /* [342] */
    (xdc_Char)0x69,  /* [343] */
    (xdc_Char)0x6e,  /* [344] */
    (xdc_Char)0x76,  /* [345] */
    (xdc_Char)0x61,  /* [346] */
    (xdc_Char)0x6c,  /* [347] */
    (xdc_Char)0x69,  /* [348] */
    (xdc_Char)0x64,  /* [349] */
    (xdc_Char)0x2e,  /* [350] */
    (xdc_Char)0x0,  /* [351] */
    (xdc_Char)0x41,  /* [352] */
    (xdc_Char)0x5f,  /* [353] */
    (xdc_Char)0x63,  /* [354] */
    (xdc_Char)0x61,  /* [355] */
    (xdc_Char)0x6e,  /* [356] */
    (xdc_Char)0x6e,  /* [357] */
    (xdc_Char)0x6f,  /* [358] */
    (xdc_Char)0x74,  /* [359] */
    (xdc_Char)0x46,  /* [360] */
    (xdc_Char)0x69,  /* [361] */
    (xdc_Char)0x74,  /* [362] */
    (xdc_Char)0x49,  /* [363] */
    (xdc_Char)0x6e,  /* [364] */
    (xdc_Char)0x74,  /* [365] */
    (xdc_Char)0x6f,  /* [366] */
    (xdc_Char)0x41,  /* [367] */
    (xdc_Char)0x72,  /* [368] */
    (xdc_Char)0x67,  /* [369] */
    (xdc_Char)0x3a,  /* [370] */
    (xdc_Char)0x20,  /* [371] */
    (xdc_Char)0x73,  /* [372] */
    (xdc_Char)0x69,  /* [373] */
    (xdc_Char)0x7a,  /* [374] */
    (xdc_Char)0x65,  /* [375] */
    (xdc_Char)0x6f,  /* [376] */
    (xdc_Char)0x66,  /* [377] */
    (xdc_Char)0x28,  /* [378] */
    (xdc_Char)0x46,  /* [379] */
    (xdc_Char)0x6c,  /* [380] */
    (xdc_Char)0x6f,  /* [381] */
    (xdc_Char)0x61,  /* [382] */
    (xdc_Char)0x74,  /* [383] */
    (xdc_Char)0x29,  /* [384] */
    (xdc_Char)0x20,  /* [385] */
    (xdc_Char)0x3e,  /* [386] */
    (xdc_Char)0x20,  /* [387] */
    (xdc_Char)0x73,  /* [388] */
    (xdc_Char)0x69,  /* [389] */
    (xdc_Char)0x7a,  /* [390] */
    (xdc_Char)0x65,  /* [391] */
    (xdc_Char)0x6f,  /* [392] */
    (xdc_Char)0x66,  /* [393] */
    (xdc_Char)0x28,  /* [394] */
    (xdc_Char)0x41,  /* [395] */
    (xdc_Char)0x72,  /* [396] */
    (xdc_Char)0x67,  /* [397] */
    (xdc_Char)0x29,  /* [398] */
    (xdc_Char)0x0,  /* [399] */
    (xdc_Char)0x41,  /* [400] */
    (xdc_Char)0x5f,  /* [401] */
    (xdc_Char)0x69,  /* [402] */
    (xdc_Char)0x6e,  /* [403] */
    (xdc_Char)0x76,  /* [404] */
    (xdc_Char)0x61,  /* [405] */
    (xdc_Char)0x6c,  /* [406] */
    (xdc_Char)0x69,  /* [407] */
    (xdc_Char)0x64,  /* [408] */
    (xdc_Char)0x45,  /* [409] */
    (xdc_Char)0x76,  /* [410] */
    (xdc_Char)0x65,  /* [411] */
    (xdc_Char)0x6e,  /* [412] */
    (xdc_Char)0x74,  /* [413] */
    (xdc_Char)0x49,  /* [414] */
    (xdc_Char)0x64,  /* [415] */
    (xdc_Char)0x3a,  /* [416] */
    (xdc_Char)0x20,  /* [417] */
    (xdc_Char)0x49,  /* [418] */
    (xdc_Char)0x6e,  /* [419] */
    (xdc_Char)0x76,  /* [420] */
    (xdc_Char)0x61,  /* [421] */
    (xdc_Char)0x6c,  /* [422] */
    (xdc_Char)0x69,  /* [423] */
    (xdc_Char)0x64,  /* [424] */
    (xdc_Char)0x20,  /* [425] */
    (xdc_Char)0x65,  /* [426] */
    (xdc_Char)0x76,  /* [427] */
    (xdc_Char)0x65,  /* [428] */
    (xdc_Char)0x6e,  /* [429] */
    (xdc_Char)0x74,  /* [430] */
    (xdc_Char)0x20,  /* [431] */
    (xdc_Char)0x49,  /* [432] */
    (xdc_Char)0x64,  /* [433] */
    (xdc_Char)0x20,  /* [434] */
    (xdc_Char)0x73,  /* [435] */
    (xdc_Char)0x70,  /* [436] */
    (xdc_Char)0x65,  /* [437] */
    (xdc_Char)0x63,  /* [438] */
    (xdc_Char)0x69,  /* [439] */
    (xdc_Char)0x66,  /* [440] */
    (xdc_Char)0x69,  /* [441] */
    (xdc_Char)0x65,  /* [442] */
    (xdc_Char)0x64,  /* [443] */
    (xdc_Char)0x0,  /* [444] */
    (xdc_Char)0x41,  /* [445] */
    (xdc_Char)0x5f,  /* [446] */
    (xdc_Char)0x63,  /* [447] */
    (xdc_Char)0x6c,  /* [448] */
    (xdc_Char)0x6f,  /* [449] */
    (xdc_Char)0x63,  /* [450] */
    (xdc_Char)0x6b,  /* [451] */
    (xdc_Char)0x44,  /* [452] */
    (xdc_Char)0x69,  /* [453] */
    (xdc_Char)0x73,  /* [454] */
    (xdc_Char)0x61,  /* [455] */
    (xdc_Char)0x62,  /* [456] */
    (xdc_Char)0x6c,  /* [457] */
    (xdc_Char)0x65,  /* [458] */
    (xdc_Char)0x64,  /* [459] */
    (xdc_Char)0x3a,  /* [460] */
    (xdc_Char)0x20,  /* [461] */
    (xdc_Char)0x43,  /* [462] */
    (xdc_Char)0x61,  /* [463] */
    (xdc_Char)0x6e,  /* [464] */
    (xdc_Char)0x6e,  /* [465] */
    (xdc_Char)0x6f,  /* [466] */
    (xdc_Char)0x74,  /* [467] */
    (xdc_Char)0x20,  /* [468] */
    (xdc_Char)0x63,  /* [469] */
    (xdc_Char)0x72,  /* [470] */
    (xdc_Char)0x65,  /* [471] */
    (xdc_Char)0x61,  /* [472] */
    (xdc_Char)0x74,  /* [473] */
    (xdc_Char)0x65,  /* [474] */
    (xdc_Char)0x20,  /* [475] */
    (xdc_Char)0x61,  /* [476] */
    (xdc_Char)0x20,  /* [477] */
    (xdc_Char)0x63,  /* [478] */
    (xdc_Char)0x6c,  /* [479] */
    (xdc_Char)0x6f,  /* [480] */
    (xdc_Char)0x63,  /* [481] */
    (xdc_Char)0x6b,  /* [482] */
    (xdc_Char)0x20,  /* [483] */
    (xdc_Char)0x69,  /* [484] */
    (xdc_Char)0x6e,  /* [485] */
    (xdc_Char)0x73,  /* [486] */
    (xdc_Char)0x74,  /* [487] */
    (xdc_Char)0x61,  /* [488] */
    (xdc_Char)0x6e,  /* [489] */
    (xdc_Char)0x63,  /* [490] */
    (xdc_Char)0x65,  /* [491] */
    (xdc_Char)0x20,  /* [492] */
    (xdc_Char)0x77,  /* [493] */
    (xdc_Char)0x68,  /* [494] */
    (xdc_Char)0x65,  /* [495] */
    (xdc_Char)0x6e,  /* [496] */
    (xdc_Char)0x20,  /* [497] */
    (xdc_Char)0x42,  /* [498] */
    (xdc_Char)0x49,  /* [499] */
    (xdc_Char)0x4f,  /* [500] */
    (xdc_Char)0x53,  /* [501] */
    (xdc_Char)0x2e,  /* [502] */
    (xdc_Char)0x63,  /* [503] */
    (xdc_Char)0x6c,  /* [504] */
    (xdc_Char)0x6f,  /* [505] */
    (xdc_Char)0x63,  /* [506] */
    (xdc_Char)0x6b,  /* [507] */
    (xdc_Char)0x45,  /* [508] */
    (xdc_Char)0x6e,  /* [509] */
    (xdc_Char)0x61,  /* [510] */
    (xdc_Char)0x62,  /* [511] */
    (xdc_Char)0x6c,  /* [512] */
    (xdc_Char)0x65,  /* [513] */
    (xdc_Char)0x64,  /* [514] */
    (xdc_Char)0x20,  /* [515] */
    (xdc_Char)0x69,  /* [516] */
    (xdc_Char)0x73,  /* [517] */
    (xdc_Char)0x20,  /* [518] */
    (xdc_Char)0x66,  /* [519] */
    (xdc_Char)0x61,  /* [520] */
    (xdc_Char)0x6c,  /* [521] */
    (xdc_Char)0x73,  /* [522] */
    (xdc_Char)0x65,  /* [523] */
    (xdc_Char)0x2e,  /* [524] */
    (xdc_Char)0x0,  /* [525] */
    (xdc_Char)0x41,  /* [526] */
    (xdc_Char)0x5f,  /* [527] */
    (xdc_Char)0x62,  /* [528] */
    (xdc_Char)0x61,  /* [529] */
    (xdc_Char)0x64,  /* [530] */
    (xdc_Char)0x54,  /* [531] */
    (xdc_Char)0x68,  /* [532] */
    (xdc_Char)0x72,  /* [533] */
    (xdc_Char)0x65,  /* [534] */
    (xdc_Char)0x61,  /* [535] */
    (xdc_Char)0x64,  /* [536] */
    (xdc_Char)0x54,  /* [537] */
    (xdc_Char)0x79,  /* [538] */
    (xdc_Char)0x70,  /* [539] */
    (xdc_Char)0x65,  /* [540] */
    (xdc_Char)0x3a,  /* [541] */
    (xdc_Char)0x20,  /* [542] */
    (xdc_Char)0x43,  /* [543] */
    (xdc_Char)0x61,  /* [544] */
    (xdc_Char)0x6e,  /* [545] */
    (xdc_Char)0x6e,  /* [546] */
    (xdc_Char)0x6f,  /* [547] */
    (xdc_Char)0x74,  /* [548] */
    (xdc_Char)0x20,  /* [549] */
    (xdc_Char)0x63,  /* [550] */
    (xdc_Char)0x72,  /* [551] */
    (xdc_Char)0x65,  /* [552] */
    (xdc_Char)0x61,  /* [553] */
    (xdc_Char)0x74,  /* [554] */
    (xdc_Char)0x65,  /* [555] */
    (xdc_Char)0x2f,  /* [556] */
    (xdc_Char)0x64,  /* [557] */
    (xdc_Char)0x65,  /* [558] */
    (xdc_Char)0x6c,  /* [559] */
    (xdc_Char)0x65,  /* [560] */
    (xdc_Char)0x74,  /* [561] */
    (xdc_Char)0x65,  /* [562] */
    (xdc_Char)0x20,  /* [563] */
    (xdc_Char)0x61,  /* [564] */
    (xdc_Char)0x20,  /* [565] */
    (xdc_Char)0x43,  /* [566] */
    (xdc_Char)0x6c,  /* [567] */
    (xdc_Char)0x6f,  /* [568] */
    (xdc_Char)0x63,  /* [569] */
    (xdc_Char)0x6b,  /* [570] */
    (xdc_Char)0x20,  /* [571] */
    (xdc_Char)0x66,  /* [572] */
    (xdc_Char)0x72,  /* [573] */
    (xdc_Char)0x6f,  /* [574] */
    (xdc_Char)0x6d,  /* [575] */
    (xdc_Char)0x20,  /* [576] */
    (xdc_Char)0x48,  /* [577] */
    (xdc_Char)0x77,  /* [578] */
    (xdc_Char)0x69,  /* [579] */
    (xdc_Char)0x20,  /* [580] */
    (xdc_Char)0x6f,  /* [581] */
    (xdc_Char)0x72,  /* [582] */
    (xdc_Char)0x20,  /* [583] */
    (xdc_Char)0x53,  /* [584] */
    (xdc_Char)0x77,  /* [585] */
    (xdc_Char)0x69,  /* [586] */
    (xdc_Char)0x20,  /* [587] */
    (xdc_Char)0x74,  /* [588] */
    (xdc_Char)0x68,  /* [589] */
    (xdc_Char)0x72,  /* [590] */
    (xdc_Char)0x65,  /* [591] */
    (xdc_Char)0x61,  /* [592] */
    (xdc_Char)0x64,  /* [593] */
    (xdc_Char)0x2e,  /* [594] */
    (xdc_Char)0x0,  /* [595] */
    (xdc_Char)0x41,  /* [596] */
    (xdc_Char)0x5f,  /* [597] */
    (xdc_Char)0x6e,  /* [598] */
    (xdc_Char)0x75,  /* [599] */
    (xdc_Char)0x6c,  /* [600] */
    (xdc_Char)0x6c,  /* [601] */
    (xdc_Char)0x45,  /* [602] */
    (xdc_Char)0x76,  /* [603] */
    (xdc_Char)0x65,  /* [604] */
    (xdc_Char)0x6e,  /* [605] */
    (xdc_Char)0x74,  /* [606] */
    (xdc_Char)0x4d,  /* [607] */
    (xdc_Char)0x61,  /* [608] */
    (xdc_Char)0x73,  /* [609] */
    (xdc_Char)0x6b,  /* [610] */
    (xdc_Char)0x73,  /* [611] */
    (xdc_Char)0x3a,  /* [612] */
    (xdc_Char)0x20,  /* [613] */
    (xdc_Char)0x6f,  /* [614] */
    (xdc_Char)0x72,  /* [615] */
    (xdc_Char)0x4d,  /* [616] */
    (xdc_Char)0x61,  /* [617] */
    (xdc_Char)0x73,  /* [618] */
    (xdc_Char)0x6b,  /* [619] */
    (xdc_Char)0x20,  /* [620] */
    (xdc_Char)0x61,  /* [621] */
    (xdc_Char)0x6e,  /* [622] */
    (xdc_Char)0x64,  /* [623] */
    (xdc_Char)0x20,  /* [624] */
    (xdc_Char)0x61,  /* [625] */
    (xdc_Char)0x6e,  /* [626] */
    (xdc_Char)0x64,  /* [627] */
    (xdc_Char)0x4d,  /* [628] */
    (xdc_Char)0x61,  /* [629] */
    (xdc_Char)0x73,  /* [630] */
    (xdc_Char)0x6b,  /* [631] */
    (xdc_Char)0x20,  /* [632] */
    (xdc_Char)0x61,  /* [633] */
    (xdc_Char)0x72,  /* [634] */
    (xdc_Char)0x65,  /* [635] */
    (xdc_Char)0x20,  /* [636] */
    (xdc_Char)0x6e,  /* [637] */
    (xdc_Char)0x75,  /* [638] */
    (xdc_Char)0x6c,  /* [639] */
    (xdc_Char)0x6c,  /* [640] */
    (xdc_Char)0x2e,  /* [641] */
    (xdc_Char)0x0,  /* [642] */
    (xdc_Char)0x41,  /* [643] */
    (xdc_Char)0x5f,  /* [644] */
    (xdc_Char)0x6e,  /* [645] */
    (xdc_Char)0x75,  /* [646] */
    (xdc_Char)0x6c,  /* [647] */
    (xdc_Char)0x6c,  /* [648] */
    (xdc_Char)0x45,  /* [649] */
    (xdc_Char)0x76,  /* [650] */
    (xdc_Char)0x65,  /* [651] */
    (xdc_Char)0x6e,  /* [652] */
    (xdc_Char)0x74,  /* [653] */
    (xdc_Char)0x49,  /* [654] */
    (xdc_Char)0x64,  /* [655] */
    (xdc_Char)0x3a,  /* [656] */
    (xdc_Char)0x20,  /* [657] */
    (xdc_Char)0x70,  /* [658] */
    (xdc_Char)0x6f,  /* [659] */
    (xdc_Char)0x73,  /* [660] */
    (xdc_Char)0x74,  /* [661] */
    (xdc_Char)0x65,  /* [662] */
    (xdc_Char)0x64,  /* [663] */
    (xdc_Char)0x20,  /* [664] */
    (xdc_Char)0x65,  /* [665] */
    (xdc_Char)0x76,  /* [666] */
    (xdc_Char)0x65,  /* [667] */
    (xdc_Char)0x6e,  /* [668] */
    (xdc_Char)0x74,  /* [669] */
    (xdc_Char)0x49,  /* [670] */
    (xdc_Char)0x64,  /* [671] */
    (xdc_Char)0x20,  /* [672] */
    (xdc_Char)0x69,  /* [673] */
    (xdc_Char)0x73,  /* [674] */
    (xdc_Char)0x20,  /* [675] */
    (xdc_Char)0x6e,  /* [676] */
    (xdc_Char)0x75,  /* [677] */
    (xdc_Char)0x6c,  /* [678] */
    (xdc_Char)0x6c,  /* [679] */
    (xdc_Char)0x2e,  /* [680] */
    (xdc_Char)0x0,  /* [681] */
    (xdc_Char)0x41,  /* [682] */
    (xdc_Char)0x5f,  /* [683] */
    (xdc_Char)0x65,  /* [684] */
    (xdc_Char)0x76,  /* [685] */
    (xdc_Char)0x65,  /* [686] */
    (xdc_Char)0x6e,  /* [687] */
    (xdc_Char)0x74,  /* [688] */
    (xdc_Char)0x49,  /* [689] */
    (xdc_Char)0x6e,  /* [690] */
    (xdc_Char)0x55,  /* [691] */
    (xdc_Char)0x73,  /* [692] */
    (xdc_Char)0x65,  /* [693] */
    (xdc_Char)0x3a,  /* [694] */
    (xdc_Char)0x20,  /* [695] */
    (xdc_Char)0x45,  /* [696] */
    (xdc_Char)0x76,  /* [697] */
    (xdc_Char)0x65,  /* [698] */
    (xdc_Char)0x6e,  /* [699] */
    (xdc_Char)0x74,  /* [700] */
    (xdc_Char)0x20,  /* [701] */
    (xdc_Char)0x6f,  /* [702] */
    (xdc_Char)0x62,  /* [703] */
    (xdc_Char)0x6a,  /* [704] */
    (xdc_Char)0x65,  /* [705] */
    (xdc_Char)0x63,  /* [706] */
    (xdc_Char)0x74,  /* [707] */
    (xdc_Char)0x20,  /* [708] */
    (xdc_Char)0x61,  /* [709] */
    (xdc_Char)0x6c,  /* [710] */
    (xdc_Char)0x72,  /* [711] */
    (xdc_Char)0x65,  /* [712] */
    (xdc_Char)0x61,  /* [713] */
    (xdc_Char)0x64,  /* [714] */
    (xdc_Char)0x79,  /* [715] */
    (xdc_Char)0x20,  /* [716] */
    (xdc_Char)0x69,  /* [717] */
    (xdc_Char)0x6e,  /* [718] */
    (xdc_Char)0x20,  /* [719] */
    (xdc_Char)0x75,  /* [720] */
    (xdc_Char)0x73,  /* [721] */
    (xdc_Char)0x65,  /* [722] */
    (xdc_Char)0x2e,  /* [723] */
    (xdc_Char)0x0,  /* [724] */
    (xdc_Char)0x41,  /* [725] */
    (xdc_Char)0x5f,  /* [726] */
    (xdc_Char)0x62,  /* [727] */
    (xdc_Char)0x61,  /* [728] */
    (xdc_Char)0x64,  /* [729] */
    (xdc_Char)0x43,  /* [730] */
    (xdc_Char)0x6f,  /* [731] */
    (xdc_Char)0x6e,  /* [732] */
    (xdc_Char)0x74,  /* [733] */
    (xdc_Char)0x65,  /* [734] */
    (xdc_Char)0x78,  /* [735] */
    (xdc_Char)0x74,  /* [736] */
    (xdc_Char)0x3a,  /* [737] */
    (xdc_Char)0x20,  /* [738] */
    (xdc_Char)0x62,  /* [739] */
    (xdc_Char)0x61,  /* [740] */
    (xdc_Char)0x64,  /* [741] */
    (xdc_Char)0x20,  /* [742] */
    (xdc_Char)0x63,  /* [743] */
    (xdc_Char)0x61,  /* [744] */
    (xdc_Char)0x6c,  /* [745] */
    (xdc_Char)0x6c,  /* [746] */
    (xdc_Char)0x69,  /* [747] */
    (xdc_Char)0x6e,  /* [748] */
    (xdc_Char)0x67,  /* [749] */
    (xdc_Char)0x20,  /* [750] */
    (xdc_Char)0x63,  /* [751] */
    (xdc_Char)0x6f,  /* [752] */
    (xdc_Char)0x6e,  /* [753] */
    (xdc_Char)0x74,  /* [754] */
    (xdc_Char)0x65,  /* [755] */
    (xdc_Char)0x78,  /* [756] */
    (xdc_Char)0x74,  /* [757] */
    (xdc_Char)0x2e,  /* [758] */
    (xdc_Char)0x20,  /* [759] */
    (xdc_Char)0x4d,  /* [760] */
    (xdc_Char)0x75,  /* [761] */
    (xdc_Char)0x73,  /* [762] */
    (xdc_Char)0x74,  /* [763] */
    (xdc_Char)0x20,  /* [764] */
    (xdc_Char)0x62,  /* [765] */
    (xdc_Char)0x65,  /* [766] */
    (xdc_Char)0x20,  /* [767] */
    (xdc_Char)0x63,  /* [768] */
    (xdc_Char)0x61,  /* [769] */
    (xdc_Char)0x6c,  /* [770] */
    (xdc_Char)0x6c,  /* [771] */
    (xdc_Char)0x65,  /* [772] */
    (xdc_Char)0x64,  /* [773] */
    (xdc_Char)0x20,  /* [774] */
    (xdc_Char)0x66,  /* [775] */
    (xdc_Char)0x72,  /* [776] */
    (xdc_Char)0x6f,  /* [777] */
    (xdc_Char)0x6d,  /* [778] */
    (xdc_Char)0x20,  /* [779] */
    (xdc_Char)0x61,  /* [780] */
    (xdc_Char)0x20,  /* [781] */
    (xdc_Char)0x54,  /* [782] */
    (xdc_Char)0x61,  /* [783] */
    (xdc_Char)0x73,  /* [784] */
    (xdc_Char)0x6b,  /* [785] */
    (xdc_Char)0x2e,  /* [786] */
    (xdc_Char)0x0,  /* [787] */
    (xdc_Char)0x41,  /* [788] */
    (xdc_Char)0x5f,  /* [789] */
    (xdc_Char)0x70,  /* [790] */
    (xdc_Char)0x65,  /* [791] */
    (xdc_Char)0x6e,  /* [792] */
    (xdc_Char)0x64,  /* [793] */
    (xdc_Char)0x54,  /* [794] */
    (xdc_Char)0x61,  /* [795] */
    (xdc_Char)0x73,  /* [796] */
    (xdc_Char)0x6b,  /* [797] */
    (xdc_Char)0x44,  /* [798] */
    (xdc_Char)0x69,  /* [799] */
    (xdc_Char)0x73,  /* [800] */
    (xdc_Char)0x61,  /* [801] */
    (xdc_Char)0x62,  /* [802] */
    (xdc_Char)0x6c,  /* [803] */
    (xdc_Char)0x65,  /* [804] */
    (xdc_Char)0x64,  /* [805] */
    (xdc_Char)0x3a,  /* [806] */
    (xdc_Char)0x20,  /* [807] */
    (xdc_Char)0x43,  /* [808] */
    (xdc_Char)0x61,  /* [809] */
    (xdc_Char)0x6e,  /* [810] */
    (xdc_Char)0x6e,  /* [811] */
    (xdc_Char)0x6f,  /* [812] */
    (xdc_Char)0x74,  /* [813] */
    (xdc_Char)0x20,  /* [814] */
    (xdc_Char)0x63,  /* [815] */
    (xdc_Char)0x61,  /* [816] */
    (xdc_Char)0x6c,  /* [817] */
    (xdc_Char)0x6c,  /* [818] */
    (xdc_Char)0x20,  /* [819] */
    (xdc_Char)0x45,  /* [820] */
    (xdc_Char)0x76,  /* [821] */
    (xdc_Char)0x65,  /* [822] */
    (xdc_Char)0x6e,  /* [823] */
    (xdc_Char)0x74,  /* [824] */
    (xdc_Char)0x5f,  /* [825] */
    (xdc_Char)0x70,  /* [826] */
    (xdc_Char)0x65,  /* [827] */
    (xdc_Char)0x6e,  /* [828] */
    (xdc_Char)0x64,  /* [829] */
    (xdc_Char)0x28,  /* [830] */
    (xdc_Char)0x29,  /* [831] */
    (xdc_Char)0x20,  /* [832] */
    (xdc_Char)0x77,  /* [833] */
    (xdc_Char)0x68,  /* [834] */
    (xdc_Char)0x69,  /* [835] */
    (xdc_Char)0x6c,  /* [836] */
    (xdc_Char)0x65,  /* [837] */
    (xdc_Char)0x20,  /* [838] */
    (xdc_Char)0x74,  /* [839] */
    (xdc_Char)0x68,  /* [840] */
    (xdc_Char)0x65,  /* [841] */
    (xdc_Char)0x20,  /* [842] */
    (xdc_Char)0x54,  /* [843] */
    (xdc_Char)0x61,  /* [844] */
    (xdc_Char)0x73,  /* [845] */
    (xdc_Char)0x6b,  /* [846] */
    (xdc_Char)0x20,  /* [847] */
    (xdc_Char)0x6f,  /* [848] */
    (xdc_Char)0x72,  /* [849] */
    (xdc_Char)0x20,  /* [850] */
    (xdc_Char)0x53,  /* [851] */
    (xdc_Char)0x77,  /* [852] */
    (xdc_Char)0x69,  /* [853] */
    (xdc_Char)0x20,  /* [854] */
    (xdc_Char)0x73,  /* [855] */
    (xdc_Char)0x63,  /* [856] */
    (xdc_Char)0x68,  /* [857] */
    (xdc_Char)0x65,  /* [858] */
    (xdc_Char)0x64,  /* [859] */
    (xdc_Char)0x75,  /* [860] */
    (xdc_Char)0x6c,  /* [861] */
    (xdc_Char)0x65,  /* [862] */
    (xdc_Char)0x72,  /* [863] */
    (xdc_Char)0x20,  /* [864] */
    (xdc_Char)0x69,  /* [865] */
    (xdc_Char)0x73,  /* [866] */
    (xdc_Char)0x20,  /* [867] */
    (xdc_Char)0x64,  /* [868] */
    (xdc_Char)0x69,  /* [869] */
    (xdc_Char)0x73,  /* [870] */
    (xdc_Char)0x61,  /* [871] */
    (xdc_Char)0x62,  /* [872] */
    (xdc_Char)0x6c,  /* [873] */
    (xdc_Char)0x65,  /* [874] */
    (xdc_Char)0x64,  /* [875] */
    (xdc_Char)0x2e,  /* [876] */
    (xdc_Char)0x0,  /* [877] */
    (xdc_Char)0x4d,  /* [878] */
    (xdc_Char)0x61,  /* [879] */
    (xdc_Char)0x69,  /* [880] */
    (xdc_Char)0x6c,  /* [881] */
    (xdc_Char)0x62,  /* [882] */
    (xdc_Char)0x6f,  /* [883] */
    (xdc_Char)0x78,  /* [884] */
    (xdc_Char)0x5f,  /* [885] */
    (xdc_Char)0x63,  /* [886] */
    (xdc_Char)0x72,  /* [887] */
    (xdc_Char)0x65,  /* [888] */
    (xdc_Char)0x61,  /* [889] */
    (xdc_Char)0x74,  /* [890] */
    (xdc_Char)0x65,  /* [891] */
    (xdc_Char)0x27,  /* [892] */
    (xdc_Char)0x73,  /* [893] */
    (xdc_Char)0x20,  /* [894] */
    (xdc_Char)0x62,  /* [895] */
    (xdc_Char)0x75,  /* [896] */
    (xdc_Char)0x66,  /* [897] */
    (xdc_Char)0x53,  /* [898] */
    (xdc_Char)0x69,  /* [899] */
    (xdc_Char)0x7a,  /* [900] */
    (xdc_Char)0x65,  /* [901] */
    (xdc_Char)0x20,  /* [902] */
    (xdc_Char)0x70,  /* [903] */
    (xdc_Char)0x61,  /* [904] */
    (xdc_Char)0x72,  /* [905] */
    (xdc_Char)0x61,  /* [906] */
    (xdc_Char)0x6d,  /* [907] */
    (xdc_Char)0x65,  /* [908] */
    (xdc_Char)0x74,  /* [909] */
    (xdc_Char)0x65,  /* [910] */
    (xdc_Char)0x72,  /* [911] */
    (xdc_Char)0x20,  /* [912] */
    (xdc_Char)0x69,  /* [913] */
    (xdc_Char)0x73,  /* [914] */
    (xdc_Char)0x20,  /* [915] */
    (xdc_Char)0x69,  /* [916] */
    (xdc_Char)0x6e,  /* [917] */
    (xdc_Char)0x76,  /* [918] */
    (xdc_Char)0x61,  /* [919] */
    (xdc_Char)0x6c,  /* [920] */
    (xdc_Char)0x69,  /* [921] */
    (xdc_Char)0x64,  /* [922] */
    (xdc_Char)0x20,  /* [923] */
    (xdc_Char)0x28,  /* [924] */
    (xdc_Char)0x74,  /* [925] */
    (xdc_Char)0x6f,  /* [926] */
    (xdc_Char)0x6f,  /* [927] */
    (xdc_Char)0x20,  /* [928] */
    (xdc_Char)0x73,  /* [929] */
    (xdc_Char)0x6d,  /* [930] */
    (xdc_Char)0x61,  /* [931] */
    (xdc_Char)0x6c,  /* [932] */
    (xdc_Char)0x6c,  /* [933] */
    (xdc_Char)0x29,  /* [934] */
    (xdc_Char)0x0,  /* [935] */
    (xdc_Char)0x41,  /* [936] */
    (xdc_Char)0x5f,  /* [937] */
    (xdc_Char)0x6e,  /* [938] */
    (xdc_Char)0x6f,  /* [939] */
    (xdc_Char)0x45,  /* [940] */
    (xdc_Char)0x76,  /* [941] */
    (xdc_Char)0x65,  /* [942] */
    (xdc_Char)0x6e,  /* [943] */
    (xdc_Char)0x74,  /* [944] */
    (xdc_Char)0x73,  /* [945] */
    (xdc_Char)0x3a,  /* [946] */
    (xdc_Char)0x20,  /* [947] */
    (xdc_Char)0x54,  /* [948] */
    (xdc_Char)0x68,  /* [949] */
    (xdc_Char)0x65,  /* [950] */
    (xdc_Char)0x20,  /* [951] */
    (xdc_Char)0x45,  /* [952] */
    (xdc_Char)0x76,  /* [953] */
    (xdc_Char)0x65,  /* [954] */
    (xdc_Char)0x6e,  /* [955] */
    (xdc_Char)0x74,  /* [956] */
    (xdc_Char)0x2e,  /* [957] */
    (xdc_Char)0x73,  /* [958] */
    (xdc_Char)0x75,  /* [959] */
    (xdc_Char)0x70,  /* [960] */
    (xdc_Char)0x70,  /* [961] */
    (xdc_Char)0x6f,  /* [962] */
    (xdc_Char)0x72,  /* [963] */
    (xdc_Char)0x74,  /* [964] */
    (xdc_Char)0x73,  /* [965] */
    (xdc_Char)0x45,  /* [966] */
    (xdc_Char)0x76,  /* [967] */
    (xdc_Char)0x65,  /* [968] */
    (xdc_Char)0x6e,  /* [969] */
    (xdc_Char)0x74,  /* [970] */
    (xdc_Char)0x73,  /* [971] */
    (xdc_Char)0x20,  /* [972] */
    (xdc_Char)0x66,  /* [973] */
    (xdc_Char)0x6c,  /* [974] */
    (xdc_Char)0x61,  /* [975] */
    (xdc_Char)0x67,  /* [976] */
    (xdc_Char)0x20,  /* [977] */
    (xdc_Char)0x69,  /* [978] */
    (xdc_Char)0x73,  /* [979] */
    (xdc_Char)0x20,  /* [980] */
    (xdc_Char)0x64,  /* [981] */
    (xdc_Char)0x69,  /* [982] */
    (xdc_Char)0x73,  /* [983] */
    (xdc_Char)0x61,  /* [984] */
    (xdc_Char)0x62,  /* [985] */
    (xdc_Char)0x6c,  /* [986] */
    (xdc_Char)0x65,  /* [987] */
    (xdc_Char)0x64,  /* [988] */
    (xdc_Char)0x2e,  /* [989] */
    (xdc_Char)0x0,  /* [990] */
    (xdc_Char)0x41,  /* [991] */
    (xdc_Char)0x5f,  /* [992] */
    (xdc_Char)0x69,  /* [993] */
    (xdc_Char)0x6e,  /* [994] */
    (xdc_Char)0x76,  /* [995] */
    (xdc_Char)0x54,  /* [996] */
    (xdc_Char)0x69,  /* [997] */
    (xdc_Char)0x6d,  /* [998] */
    (xdc_Char)0x65,  /* [999] */
    (xdc_Char)0x6f,  /* [1000] */
    (xdc_Char)0x75,  /* [1001] */
    (xdc_Char)0x74,  /* [1002] */
    (xdc_Char)0x3a,  /* [1003] */
    (xdc_Char)0x20,  /* [1004] */
    (xdc_Char)0x43,  /* [1005] */
    (xdc_Char)0x61,  /* [1006] */
    (xdc_Char)0x6e,  /* [1007] */
    (xdc_Char)0x27,  /* [1008] */
    (xdc_Char)0x74,  /* [1009] */
    (xdc_Char)0x20,  /* [1010] */
    (xdc_Char)0x75,  /* [1011] */
    (xdc_Char)0x73,  /* [1012] */
    (xdc_Char)0x65,  /* [1013] */
    (xdc_Char)0x20,  /* [1014] */
    (xdc_Char)0x42,  /* [1015] */
    (xdc_Char)0x49,  /* [1016] */
    (xdc_Char)0x4f,  /* [1017] */
    (xdc_Char)0x53,  /* [1018] */
    (xdc_Char)0x5f,  /* [1019] */
    (xdc_Char)0x45,  /* [1020] */
    (xdc_Char)0x56,  /* [1021] */
    (xdc_Char)0x45,  /* [1022] */
    (xdc_Char)0x4e,  /* [1023] */
    (xdc_Char)0x54,  /* [1024] */
    (xdc_Char)0x5f,  /* [1025] */
    (xdc_Char)0x41,  /* [1026] */
    (xdc_Char)0x43,  /* [1027] */
    (xdc_Char)0x51,  /* [1028] */
    (xdc_Char)0x55,  /* [1029] */
    (xdc_Char)0x49,  /* [1030] */
    (xdc_Char)0x52,  /* [1031] */
    (xdc_Char)0x45,  /* [1032] */
    (xdc_Char)0x44,  /* [1033] */
    (xdc_Char)0x20,  /* [1034] */
    (xdc_Char)0x77,  /* [1035] */
    (xdc_Char)0x69,  /* [1036] */
    (xdc_Char)0x74,  /* [1037] */
    (xdc_Char)0x68,  /* [1038] */
    (xdc_Char)0x20,  /* [1039] */
    (xdc_Char)0x74,  /* [1040] */
    (xdc_Char)0x68,  /* [1041] */
    (xdc_Char)0x69,  /* [1042] */
    (xdc_Char)0x73,  /* [1043] */
    (xdc_Char)0x20,  /* [1044] */
    (xdc_Char)0x53,  /* [1045] */
    (xdc_Char)0x65,  /* [1046] */
    (xdc_Char)0x6d,  /* [1047] */
    (xdc_Char)0x61,  /* [1048] */
    (xdc_Char)0x70,  /* [1049] */
    (xdc_Char)0x68,  /* [1050] */
    (xdc_Char)0x6f,  /* [1051] */
    (xdc_Char)0x72,  /* [1052] */
    (xdc_Char)0x65,  /* [1053] */
    (xdc_Char)0x2e,  /* [1054] */
    (xdc_Char)0x0,  /* [1055] */
    (xdc_Char)0x41,  /* [1056] */
    (xdc_Char)0x5f,  /* [1057] */
    (xdc_Char)0x6f,  /* [1058] */
    (xdc_Char)0x76,  /* [1059] */
    (xdc_Char)0x65,  /* [1060] */
    (xdc_Char)0x72,  /* [1061] */
    (xdc_Char)0x66,  /* [1062] */
    (xdc_Char)0x6c,  /* [1063] */
    (xdc_Char)0x6f,  /* [1064] */
    (xdc_Char)0x77,  /* [1065] */
    (xdc_Char)0x3a,  /* [1066] */
    (xdc_Char)0x20,  /* [1067] */
    (xdc_Char)0x43,  /* [1068] */
    (xdc_Char)0x6f,  /* [1069] */
    (xdc_Char)0x75,  /* [1070] */
    (xdc_Char)0x6e,  /* [1071] */
    (xdc_Char)0x74,  /* [1072] */
    (xdc_Char)0x20,  /* [1073] */
    (xdc_Char)0x68,  /* [1074] */
    (xdc_Char)0x61,  /* [1075] */
    (xdc_Char)0x73,  /* [1076] */
    (xdc_Char)0x20,  /* [1077] */
    (xdc_Char)0x65,  /* [1078] */
    (xdc_Char)0x78,  /* [1079] */
    (xdc_Char)0x63,  /* [1080] */
    (xdc_Char)0x65,  /* [1081] */
    (xdc_Char)0x65,  /* [1082] */
    (xdc_Char)0x64,  /* [1083] */
    (xdc_Char)0x65,  /* [1084] */
    (xdc_Char)0x64,  /* [1085] */
    (xdc_Char)0x20,  /* [1086] */
    (xdc_Char)0x36,  /* [1087] */
    (xdc_Char)0x35,  /* [1088] */
    (xdc_Char)0x35,  /* [1089] */
    (xdc_Char)0x33,  /* [1090] */
    (xdc_Char)0x35,  /* [1091] */
    (xdc_Char)0x20,  /* [1092] */
    (xdc_Char)0x61,  /* [1093] */
    (xdc_Char)0x6e,  /* [1094] */
    (xdc_Char)0x64,  /* [1095] */
    (xdc_Char)0x20,  /* [1096] */
    (xdc_Char)0x72,  /* [1097] */
    (xdc_Char)0x6f,  /* [1098] */
    (xdc_Char)0x6c,  /* [1099] */
    (xdc_Char)0x6c,  /* [1100] */
    (xdc_Char)0x65,  /* [1101] */
    (xdc_Char)0x64,  /* [1102] */
    (xdc_Char)0x20,  /* [1103] */
    (xdc_Char)0x6f,  /* [1104] */
    (xdc_Char)0x76,  /* [1105] */
    (xdc_Char)0x65,  /* [1106] */
    (xdc_Char)0x72,  /* [1107] */
    (xdc_Char)0x2e,  /* [1108] */
    (xdc_Char)0x0,  /* [1109] */
    (xdc_Char)0x41,  /* [1110] */
    (xdc_Char)0x5f,  /* [1111] */
    (xdc_Char)0x70,  /* [1112] */
    (xdc_Char)0x65,  /* [1113] */
    (xdc_Char)0x6e,  /* [1114] */
    (xdc_Char)0x64,  /* [1115] */
    (xdc_Char)0x54,  /* [1116] */
    (xdc_Char)0x61,  /* [1117] */
    (xdc_Char)0x73,  /* [1118] */
    (xdc_Char)0x6b,  /* [1119] */
    (xdc_Char)0x44,  /* [1120] */
    (xdc_Char)0x69,  /* [1121] */
    (xdc_Char)0x73,  /* [1122] */
    (xdc_Char)0x61,  /* [1123] */
    (xdc_Char)0x62,  /* [1124] */
    (xdc_Char)0x6c,  /* [1125] */
    (xdc_Char)0x65,  /* [1126] */
    (xdc_Char)0x64,  /* [1127] */
    (xdc_Char)0x3a,  /* [1128] */
    (xdc_Char)0x20,  /* [1129] */
    (xdc_Char)0x43,  /* [1130] */
    (xdc_Char)0x61,  /* [1131] */
    (xdc_Char)0x6e,  /* [1132] */
    (xdc_Char)0x6e,  /* [1133] */
    (xdc_Char)0x6f,  /* [1134] */
    (xdc_Char)0x74,  /* [1135] */
    (xdc_Char)0x20,  /* [1136] */
    (xdc_Char)0x63,  /* [1137] */
    (xdc_Char)0x61,  /* [1138] */
    (xdc_Char)0x6c,  /* [1139] */
    (xdc_Char)0x6c,  /* [1140] */
    (xdc_Char)0x20,  /* [1141] */
    (xdc_Char)0x53,  /* [1142] */
    (xdc_Char)0x65,  /* [1143] */
    (xdc_Char)0x6d,  /* [1144] */
    (xdc_Char)0x61,  /* [1145] */
    (xdc_Char)0x70,  /* [1146] */
    (xdc_Char)0x68,  /* [1147] */
    (xdc_Char)0x6f,  /* [1148] */
    (xdc_Char)0x72,  /* [1149] */
    (xdc_Char)0x65,  /* [1150] */
    (xdc_Char)0x5f,  /* [1151] */
    (xdc_Char)0x70,  /* [1152] */
    (xdc_Char)0x65,  /* [1153] */
    (xdc_Char)0x6e,  /* [1154] */
    (xdc_Char)0x64,  /* [1155] */
    (xdc_Char)0x28,  /* [1156] */
    (xdc_Char)0x29,  /* [1157] */
    (xdc_Char)0x20,  /* [1158] */
    (xdc_Char)0x77,  /* [1159] */
    (xdc_Char)0x68,  /* [1160] */
    (xdc_Char)0x69,  /* [1161] */
    (xdc_Char)0x6c,  /* [1162] */
    (xdc_Char)0x65,  /* [1163] */
    (xdc_Char)0x20,  /* [1164] */
    (xdc_Char)0x74,  /* [1165] */
    (xdc_Char)0x68,  /* [1166] */
    (xdc_Char)0x65,  /* [1167] */
    (xdc_Char)0x20,  /* [1168] */
    (xdc_Char)0x54,  /* [1169] */
    (xdc_Char)0x61,  /* [1170] */
    (xdc_Char)0x73,  /* [1171] */
    (xdc_Char)0x6b,  /* [1172] */
    (xdc_Char)0x20,  /* [1173] */
    (xdc_Char)0x6f,  /* [1174] */
    (xdc_Char)0x72,  /* [1175] */
    (xdc_Char)0x20,  /* [1176] */
    (xdc_Char)0x53,  /* [1177] */
    (xdc_Char)0x77,  /* [1178] */
    (xdc_Char)0x69,  /* [1179] */
    (xdc_Char)0x20,  /* [1180] */
    (xdc_Char)0x73,  /* [1181] */
    (xdc_Char)0x63,  /* [1182] */
    (xdc_Char)0x68,  /* [1183] */
    (xdc_Char)0x65,  /* [1184] */
    (xdc_Char)0x64,  /* [1185] */
    (xdc_Char)0x75,  /* [1186] */
    (xdc_Char)0x6c,  /* [1187] */
    (xdc_Char)0x65,  /* [1188] */
    (xdc_Char)0x72,  /* [1189] */
    (xdc_Char)0x20,  /* [1190] */
    (xdc_Char)0x69,  /* [1191] */
    (xdc_Char)0x73,  /* [1192] */
    (xdc_Char)0x20,  /* [1193] */
    (xdc_Char)0x64,  /* [1194] */
    (xdc_Char)0x69,  /* [1195] */
    (xdc_Char)0x73,  /* [1196] */
    (xdc_Char)0x61,  /* [1197] */
    (xdc_Char)0x62,  /* [1198] */
    (xdc_Char)0x6c,  /* [1199] */
    (xdc_Char)0x65,  /* [1200] */
    (xdc_Char)0x64,  /* [1201] */
    (xdc_Char)0x2e,  /* [1202] */
    (xdc_Char)0x0,  /* [1203] */
    (xdc_Char)0x41,  /* [1204] */
    (xdc_Char)0x5f,  /* [1205] */
    (xdc_Char)0x73,  /* [1206] */
    (xdc_Char)0x77,  /* [1207] */
    (xdc_Char)0x69,  /* [1208] */
    (xdc_Char)0x44,  /* [1209] */
    (xdc_Char)0x69,  /* [1210] */
    (xdc_Char)0x73,  /* [1211] */
    (xdc_Char)0x61,  /* [1212] */
    (xdc_Char)0x62,  /* [1213] */
    (xdc_Char)0x6c,  /* [1214] */
    (xdc_Char)0x65,  /* [1215] */
    (xdc_Char)0x64,  /* [1216] */
    (xdc_Char)0x3a,  /* [1217] */
    (xdc_Char)0x20,  /* [1218] */
    (xdc_Char)0x43,  /* [1219] */
    (xdc_Char)0x61,  /* [1220] */
    (xdc_Char)0x6e,  /* [1221] */
    (xdc_Char)0x6e,  /* [1222] */
    (xdc_Char)0x6f,  /* [1223] */
    (xdc_Char)0x74,  /* [1224] */
    (xdc_Char)0x20,  /* [1225] */
    (xdc_Char)0x63,  /* [1226] */
    (xdc_Char)0x72,  /* [1227] */
    (xdc_Char)0x65,  /* [1228] */
    (xdc_Char)0x61,  /* [1229] */
    (xdc_Char)0x74,  /* [1230] */
    (xdc_Char)0x65,  /* [1231] */
    (xdc_Char)0x20,  /* [1232] */
    (xdc_Char)0x61,  /* [1233] */
    (xdc_Char)0x20,  /* [1234] */
    (xdc_Char)0x53,  /* [1235] */
    (xdc_Char)0x77,  /* [1236] */
    (xdc_Char)0x69,  /* [1237] */
    (xdc_Char)0x20,  /* [1238] */
    (xdc_Char)0x77,  /* [1239] */
    (xdc_Char)0x68,  /* [1240] */
    (xdc_Char)0x65,  /* [1241] */
    (xdc_Char)0x6e,  /* [1242] */
    (xdc_Char)0x20,  /* [1243] */
    (xdc_Char)0x53,  /* [1244] */
    (xdc_Char)0x77,  /* [1245] */
    (xdc_Char)0x69,  /* [1246] */
    (xdc_Char)0x20,  /* [1247] */
    (xdc_Char)0x69,  /* [1248] */
    (xdc_Char)0x73,  /* [1249] */
    (xdc_Char)0x20,  /* [1250] */
    (xdc_Char)0x64,  /* [1251] */
    (xdc_Char)0x69,  /* [1252] */
    (xdc_Char)0x73,  /* [1253] */
    (xdc_Char)0x61,  /* [1254] */
    (xdc_Char)0x62,  /* [1255] */
    (xdc_Char)0x6c,  /* [1256] */
    (xdc_Char)0x65,  /* [1257] */
    (xdc_Char)0x64,  /* [1258] */
    (xdc_Char)0x2e,  /* [1259] */
    (xdc_Char)0x0,  /* [1260] */
    (xdc_Char)0x41,  /* [1261] */
    (xdc_Char)0x5f,  /* [1262] */
    (xdc_Char)0x62,  /* [1263] */
    (xdc_Char)0x61,  /* [1264] */
    (xdc_Char)0x64,  /* [1265] */
    (xdc_Char)0x50,  /* [1266] */
    (xdc_Char)0x72,  /* [1267] */
    (xdc_Char)0x69,  /* [1268] */
    (xdc_Char)0x6f,  /* [1269] */
    (xdc_Char)0x72,  /* [1270] */
    (xdc_Char)0x69,  /* [1271] */
    (xdc_Char)0x74,  /* [1272] */
    (xdc_Char)0x79,  /* [1273] */
    (xdc_Char)0x3a,  /* [1274] */
    (xdc_Char)0x20,  /* [1275] */
    (xdc_Char)0x41,  /* [1276] */
    (xdc_Char)0x6e,  /* [1277] */
    (xdc_Char)0x20,  /* [1278] */
    (xdc_Char)0x69,  /* [1279] */
    (xdc_Char)0x6e,  /* [1280] */
    (xdc_Char)0x76,  /* [1281] */
    (xdc_Char)0x61,  /* [1282] */
    (xdc_Char)0x6c,  /* [1283] */
    (xdc_Char)0x69,  /* [1284] */
    (xdc_Char)0x64,  /* [1285] */
    (xdc_Char)0x20,  /* [1286] */
    (xdc_Char)0x53,  /* [1287] */
    (xdc_Char)0x77,  /* [1288] */
    (xdc_Char)0x69,  /* [1289] */
    (xdc_Char)0x20,  /* [1290] */
    (xdc_Char)0x70,  /* [1291] */
    (xdc_Char)0x72,  /* [1292] */
    (xdc_Char)0x69,  /* [1293] */
    (xdc_Char)0x6f,  /* [1294] */
    (xdc_Char)0x72,  /* [1295] */
    (xdc_Char)0x69,  /* [1296] */
    (xdc_Char)0x74,  /* [1297] */
    (xdc_Char)0x79,  /* [1298] */
    (xdc_Char)0x20,  /* [1299] */
    (xdc_Char)0x77,  /* [1300] */
    (xdc_Char)0x61,  /* [1301] */
    (xdc_Char)0x73,  /* [1302] */
    (xdc_Char)0x20,  /* [1303] */
    (xdc_Char)0x75,  /* [1304] */
    (xdc_Char)0x73,  /* [1305] */
    (xdc_Char)0x65,  /* [1306] */
    (xdc_Char)0x64,  /* [1307] */
    (xdc_Char)0x2e,  /* [1308] */
    (xdc_Char)0x0,  /* [1309] */
    (xdc_Char)0x41,  /* [1310] */
    (xdc_Char)0x5f,  /* [1311] */
    (xdc_Char)0x62,  /* [1312] */
    (xdc_Char)0x61,  /* [1313] */
    (xdc_Char)0x64,  /* [1314] */
    (xdc_Char)0x54,  /* [1315] */
    (xdc_Char)0x68,  /* [1316] */
    (xdc_Char)0x72,  /* [1317] */
    (xdc_Char)0x65,  /* [1318] */
    (xdc_Char)0x61,  /* [1319] */
    (xdc_Char)0x64,  /* [1320] */
    (xdc_Char)0x54,  /* [1321] */
    (xdc_Char)0x79,  /* [1322] */
    (xdc_Char)0x70,  /* [1323] */
    (xdc_Char)0x65,  /* [1324] */
    (xdc_Char)0x3a,  /* [1325] */
    (xdc_Char)0x20,  /* [1326] */
    (xdc_Char)0x43,  /* [1327] */
    (xdc_Char)0x61,  /* [1328] */
    (xdc_Char)0x6e,  /* [1329] */
    (xdc_Char)0x6e,  /* [1330] */
    (xdc_Char)0x6f,  /* [1331] */
    (xdc_Char)0x74,  /* [1332] */
    (xdc_Char)0x20,  /* [1333] */
    (xdc_Char)0x63,  /* [1334] */
    (xdc_Char)0x72,  /* [1335] */
    (xdc_Char)0x65,  /* [1336] */
    (xdc_Char)0x61,  /* [1337] */
    (xdc_Char)0x74,  /* [1338] */
    (xdc_Char)0x65,  /* [1339] */
    (xdc_Char)0x2f,  /* [1340] */
    (xdc_Char)0x64,  /* [1341] */
    (xdc_Char)0x65,  /* [1342] */
    (xdc_Char)0x6c,  /* [1343] */
    (xdc_Char)0x65,  /* [1344] */
    (xdc_Char)0x74,  /* [1345] */
    (xdc_Char)0x65,  /* [1346] */
    (xdc_Char)0x20,  /* [1347] */
    (xdc_Char)0x61,  /* [1348] */
    (xdc_Char)0x20,  /* [1349] */
    (xdc_Char)0x74,  /* [1350] */
    (xdc_Char)0x61,  /* [1351] */
    (xdc_Char)0x73,  /* [1352] */
    (xdc_Char)0x6b,  /* [1353] */
    (xdc_Char)0x20,  /* [1354] */
    (xdc_Char)0x66,  /* [1355] */
    (xdc_Char)0x72,  /* [1356] */
    (xdc_Char)0x6f,  /* [1357] */
    (xdc_Char)0x6d,  /* [1358] */
    (xdc_Char)0x20,  /* [1359] */
    (xdc_Char)0x48,  /* [1360] */
    (xdc_Char)0x77,  /* [1361] */
    (xdc_Char)0x69,  /* [1362] */
    (xdc_Char)0x20,  /* [1363] */
    (xdc_Char)0x6f,  /* [1364] */
    (xdc_Char)0x72,  /* [1365] */
    (xdc_Char)0x20,  /* [1366] */
    (xdc_Char)0x53,  /* [1367] */
    (xdc_Char)0x77,  /* [1368] */
    (xdc_Char)0x69,  /* [1369] */
    (xdc_Char)0x20,  /* [1370] */
    (xdc_Char)0x74,  /* [1371] */
    (xdc_Char)0x68,  /* [1372] */
    (xdc_Char)0x72,  /* [1373] */
    (xdc_Char)0x65,  /* [1374] */
    (xdc_Char)0x61,  /* [1375] */
    (xdc_Char)0x64,  /* [1376] */
    (xdc_Char)0x2e,  /* [1377] */
    (xdc_Char)0x0,  /* [1378] */
    (xdc_Char)0x41,  /* [1379] */
    (xdc_Char)0x5f,  /* [1380] */
    (xdc_Char)0x62,  /* [1381] */
    (xdc_Char)0x61,  /* [1382] */
    (xdc_Char)0x64,  /* [1383] */
    (xdc_Char)0x54,  /* [1384] */
    (xdc_Char)0x61,  /* [1385] */
    (xdc_Char)0x73,  /* [1386] */
    (xdc_Char)0x6b,  /* [1387] */
    (xdc_Char)0x53,  /* [1388] */
    (xdc_Char)0x74,  /* [1389] */
    (xdc_Char)0x61,  /* [1390] */
    (xdc_Char)0x74,  /* [1391] */
    (xdc_Char)0x65,  /* [1392] */
    (xdc_Char)0x3a,  /* [1393] */
    (xdc_Char)0x20,  /* [1394] */
    (xdc_Char)0x43,  /* [1395] */
    (xdc_Char)0x61,  /* [1396] */
    (xdc_Char)0x6e,  /* [1397] */
    (xdc_Char)0x27,  /* [1398] */
    (xdc_Char)0x74,  /* [1399] */
    (xdc_Char)0x20,  /* [1400] */
    (xdc_Char)0x64,  /* [1401] */
    (xdc_Char)0x65,  /* [1402] */
    (xdc_Char)0x6c,  /* [1403] */
    (xdc_Char)0x65,  /* [1404] */
    (xdc_Char)0x74,  /* [1405] */
    (xdc_Char)0x65,  /* [1406] */
    (xdc_Char)0x20,  /* [1407] */
    (xdc_Char)0x61,  /* [1408] */
    (xdc_Char)0x20,  /* [1409] */
    (xdc_Char)0x74,  /* [1410] */
    (xdc_Char)0x61,  /* [1411] */
    (xdc_Char)0x73,  /* [1412] */
    (xdc_Char)0x6b,  /* [1413] */
    (xdc_Char)0x20,  /* [1414] */
    (xdc_Char)0x69,  /* [1415] */
    (xdc_Char)0x6e,  /* [1416] */
    (xdc_Char)0x20,  /* [1417] */
    (xdc_Char)0x52,  /* [1418] */
    (xdc_Char)0x55,  /* [1419] */
    (xdc_Char)0x4e,  /* [1420] */
    (xdc_Char)0x4e,  /* [1421] */
    (xdc_Char)0x49,  /* [1422] */
    (xdc_Char)0x4e,  /* [1423] */
    (xdc_Char)0x47,  /* [1424] */
    (xdc_Char)0x20,  /* [1425] */
    (xdc_Char)0x73,  /* [1426] */
    (xdc_Char)0x74,  /* [1427] */
    (xdc_Char)0x61,  /* [1428] */
    (xdc_Char)0x74,  /* [1429] */
    (xdc_Char)0x65,  /* [1430] */
    (xdc_Char)0x2e,  /* [1431] */
    (xdc_Char)0x0,  /* [1432] */
    (xdc_Char)0x41,  /* [1433] */
    (xdc_Char)0x5f,  /* [1434] */
    (xdc_Char)0x6e,  /* [1435] */
    (xdc_Char)0x6f,  /* [1436] */
    (xdc_Char)0x50,  /* [1437] */
    (xdc_Char)0x65,  /* [1438] */
    (xdc_Char)0x6e,  /* [1439] */
    (xdc_Char)0x64,  /* [1440] */
    (xdc_Char)0x45,  /* [1441] */
    (xdc_Char)0x6c,  /* [1442] */
    (xdc_Char)0x65,  /* [1443] */
    (xdc_Char)0x6d,  /* [1444] */
    (xdc_Char)0x3a,  /* [1445] */
    (xdc_Char)0x20,  /* [1446] */
    (xdc_Char)0x4e,  /* [1447] */
    (xdc_Char)0x6f,  /* [1448] */
    (xdc_Char)0x74,  /* [1449] */
    (xdc_Char)0x20,  /* [1450] */
    (xdc_Char)0x65,  /* [1451] */
    (xdc_Char)0x6e,  /* [1452] */
    (xdc_Char)0x6f,  /* [1453] */
    (xdc_Char)0x75,  /* [1454] */
    (xdc_Char)0x67,  /* [1455] */
    (xdc_Char)0x68,  /* [1456] */
    (xdc_Char)0x20,  /* [1457] */
    (xdc_Char)0x69,  /* [1458] */
    (xdc_Char)0x6e,  /* [1459] */
    (xdc_Char)0x66,  /* [1460] */
    (xdc_Char)0x6f,  /* [1461] */
    (xdc_Char)0x20,  /* [1462] */
    (xdc_Char)0x74,  /* [1463] */
    (xdc_Char)0x6f,  /* [1464] */
    (xdc_Char)0x20,  /* [1465] */
    (xdc_Char)0x64,  /* [1466] */
    (xdc_Char)0x65,  /* [1467] */
    (xdc_Char)0x6c,  /* [1468] */
    (xdc_Char)0x65,  /* [1469] */
    (xdc_Char)0x74,  /* [1470] */
    (xdc_Char)0x65,  /* [1471] */
    (xdc_Char)0x20,  /* [1472] */
    (xdc_Char)0x42,  /* [1473] */
    (xdc_Char)0x4c,  /* [1474] */
    (xdc_Char)0x4f,  /* [1475] */
    (xdc_Char)0x43,  /* [1476] */
    (xdc_Char)0x4b,  /* [1477] */
    (xdc_Char)0x45,  /* [1478] */
    (xdc_Char)0x44,  /* [1479] */
    (xdc_Char)0x20,  /* [1480] */
    (xdc_Char)0x74,  /* [1481] */
    (xdc_Char)0x61,  /* [1482] */
    (xdc_Char)0x73,  /* [1483] */
    (xdc_Char)0x6b,  /* [1484] */
    (xdc_Char)0x2e,  /* [1485] */
    (xdc_Char)0x0,  /* [1486] */
    (xdc_Char)0x41,  /* [1487] */
    (xdc_Char)0x5f,  /* [1488] */
    (xdc_Char)0x74,  /* [1489] */
    (xdc_Char)0x61,  /* [1490] */
    (xdc_Char)0x73,  /* [1491] */
    (xdc_Char)0x6b,  /* [1492] */
    (xdc_Char)0x44,  /* [1493] */
    (xdc_Char)0x69,  /* [1494] */
    (xdc_Char)0x73,  /* [1495] */
    (xdc_Char)0x61,  /* [1496] */
    (xdc_Char)0x62,  /* [1497] */
    (xdc_Char)0x6c,  /* [1498] */
    (xdc_Char)0x65,  /* [1499] */
    (xdc_Char)0x64,  /* [1500] */
    (xdc_Char)0x3a,  /* [1501] */
    (xdc_Char)0x20,  /* [1502] */
    (xdc_Char)0x43,  /* [1503] */
    (xdc_Char)0x61,  /* [1504] */
    (xdc_Char)0x6e,  /* [1505] */
    (xdc_Char)0x6e,  /* [1506] */
    (xdc_Char)0x6f,  /* [1507] */
    (xdc_Char)0x74,  /* [1508] */
    (xdc_Char)0x20,  /* [1509] */
    (xdc_Char)0x63,  /* [1510] */
    (xdc_Char)0x72,  /* [1511] */
    (xdc_Char)0x65,  /* [1512] */
    (xdc_Char)0x61,  /* [1513] */
    (xdc_Char)0x74,  /* [1514] */
    (xdc_Char)0x65,  /* [1515] */
    (xdc_Char)0x20,  /* [1516] */
    (xdc_Char)0x61,  /* [1517] */
    (xdc_Char)0x20,  /* [1518] */
    (xdc_Char)0x74,  /* [1519] */
    (xdc_Char)0x61,  /* [1520] */
    (xdc_Char)0x73,  /* [1521] */
    (xdc_Char)0x6b,  /* [1522] */
    (xdc_Char)0x20,  /* [1523] */
    (xdc_Char)0x77,  /* [1524] */
    (xdc_Char)0x68,  /* [1525] */
    (xdc_Char)0x65,  /* [1526] */
    (xdc_Char)0x6e,  /* [1527] */
    (xdc_Char)0x20,  /* [1528] */
    (xdc_Char)0x74,  /* [1529] */
    (xdc_Char)0x61,  /* [1530] */
    (xdc_Char)0x73,  /* [1531] */
    (xdc_Char)0x6b,  /* [1532] */
    (xdc_Char)0x69,  /* [1533] */
    (xdc_Char)0x6e,  /* [1534] */
    (xdc_Char)0x67,  /* [1535] */
    (xdc_Char)0x20,  /* [1536] */
    (xdc_Char)0x69,  /* [1537] */
    (xdc_Char)0x73,  /* [1538] */
    (xdc_Char)0x20,  /* [1539] */
    (xdc_Char)0x64,  /* [1540] */
    (xdc_Char)0x69,  /* [1541] */
    (xdc_Char)0x73,  /* [1542] */
    (xdc_Char)0x61,  /* [1543] */
    (xdc_Char)0x62,  /* [1544] */
    (xdc_Char)0x6c,  /* [1545] */
    (xdc_Char)0x65,  /* [1546] */
    (xdc_Char)0x64,  /* [1547] */
    (xdc_Char)0x2e,  /* [1548] */
    (xdc_Char)0x0,  /* [1549] */
    (xdc_Char)0x41,  /* [1550] */
    (xdc_Char)0x5f,  /* [1551] */
    (xdc_Char)0x62,  /* [1552] */
    (xdc_Char)0x61,  /* [1553] */
    (xdc_Char)0x64,  /* [1554] */
    (xdc_Char)0x50,  /* [1555] */
    (xdc_Char)0x72,  /* [1556] */
    (xdc_Char)0x69,  /* [1557] */
    (xdc_Char)0x6f,  /* [1558] */
    (xdc_Char)0x72,  /* [1559] */
    (xdc_Char)0x69,  /* [1560] */
    (xdc_Char)0x74,  /* [1561] */
    (xdc_Char)0x79,  /* [1562] */
    (xdc_Char)0x3a,  /* [1563] */
    (xdc_Char)0x20,  /* [1564] */
    (xdc_Char)0x41,  /* [1565] */
    (xdc_Char)0x6e,  /* [1566] */
    (xdc_Char)0x20,  /* [1567] */
    (xdc_Char)0x69,  /* [1568] */
    (xdc_Char)0x6e,  /* [1569] */
    (xdc_Char)0x76,  /* [1570] */
    (xdc_Char)0x61,  /* [1571] */
    (xdc_Char)0x6c,  /* [1572] */
    (xdc_Char)0x69,  /* [1573] */
    (xdc_Char)0x64,  /* [1574] */
    (xdc_Char)0x20,  /* [1575] */
    (xdc_Char)0x74,  /* [1576] */
    (xdc_Char)0x61,  /* [1577] */
    (xdc_Char)0x73,  /* [1578] */
    (xdc_Char)0x6b,  /* [1579] */
    (xdc_Char)0x20,  /* [1580] */
    (xdc_Char)0x70,  /* [1581] */
    (xdc_Char)0x72,  /* [1582] */
    (xdc_Char)0x69,  /* [1583] */
    (xdc_Char)0x6f,  /* [1584] */
    (xdc_Char)0x72,  /* [1585] */
    (xdc_Char)0x69,  /* [1586] */
    (xdc_Char)0x74,  /* [1587] */
    (xdc_Char)0x79,  /* [1588] */
    (xdc_Char)0x20,  /* [1589] */
    (xdc_Char)0x77,  /* [1590] */
    (xdc_Char)0x61,  /* [1591] */
    (xdc_Char)0x73,  /* [1592] */
    (xdc_Char)0x20,  /* [1593] */
    (xdc_Char)0x75,  /* [1594] */
    (xdc_Char)0x73,  /* [1595] */
    (xdc_Char)0x65,  /* [1596] */
    (xdc_Char)0x64,  /* [1597] */
    (xdc_Char)0x2e,  /* [1598] */
    (xdc_Char)0x0,  /* [1599] */
    (xdc_Char)0x41,  /* [1600] */
    (xdc_Char)0x5f,  /* [1601] */
    (xdc_Char)0x62,  /* [1602] */
    (xdc_Char)0x61,  /* [1603] */
    (xdc_Char)0x64,  /* [1604] */
    (xdc_Char)0x54,  /* [1605] */
    (xdc_Char)0x69,  /* [1606] */
    (xdc_Char)0x6d,  /* [1607] */
    (xdc_Char)0x65,  /* [1608] */
    (xdc_Char)0x6f,  /* [1609] */
    (xdc_Char)0x75,  /* [1610] */
    (xdc_Char)0x74,  /* [1611] */
    (xdc_Char)0x3a,  /* [1612] */
    (xdc_Char)0x20,  /* [1613] */
    (xdc_Char)0x43,  /* [1614] */
    (xdc_Char)0x61,  /* [1615] */
    (xdc_Char)0x6e,  /* [1616] */
    (xdc_Char)0x27,  /* [1617] */
    (xdc_Char)0x74,  /* [1618] */
    (xdc_Char)0x20,  /* [1619] */
    (xdc_Char)0x73,  /* [1620] */
    (xdc_Char)0x6c,  /* [1621] */
    (xdc_Char)0x65,  /* [1622] */
    (xdc_Char)0x65,  /* [1623] */
    (xdc_Char)0x70,  /* [1624] */
    (xdc_Char)0x20,  /* [1625] */
    (xdc_Char)0x46,  /* [1626] */
    (xdc_Char)0x4f,  /* [1627] */
    (xdc_Char)0x52,  /* [1628] */
    (xdc_Char)0x45,  /* [1629] */
    (xdc_Char)0x56,  /* [1630] */
    (xdc_Char)0x45,  /* [1631] */
    (xdc_Char)0x52,  /* [1632] */
    (xdc_Char)0x2e,  /* [1633] */
    (xdc_Char)0x0,  /* [1634] */
    (xdc_Char)0x41,  /* [1635] */
    (xdc_Char)0x5f,  /* [1636] */
    (xdc_Char)0x62,  /* [1637] */
    (xdc_Char)0x61,  /* [1638] */
    (xdc_Char)0x64,  /* [1639] */
    (xdc_Char)0x41,  /* [1640] */
    (xdc_Char)0x66,  /* [1641] */
    (xdc_Char)0x66,  /* [1642] */
    (xdc_Char)0x69,  /* [1643] */
    (xdc_Char)0x6e,  /* [1644] */
    (xdc_Char)0x69,  /* [1645] */
    (xdc_Char)0x74,  /* [1646] */
    (xdc_Char)0x79,  /* [1647] */
    (xdc_Char)0x3a,  /* [1648] */
    (xdc_Char)0x20,  /* [1649] */
    (xdc_Char)0x49,  /* [1650] */
    (xdc_Char)0x6e,  /* [1651] */
    (xdc_Char)0x76,  /* [1652] */
    (xdc_Char)0x61,  /* [1653] */
    (xdc_Char)0x6c,  /* [1654] */
    (xdc_Char)0x69,  /* [1655] */
    (xdc_Char)0x64,  /* [1656] */
    (xdc_Char)0x20,  /* [1657] */
    (xdc_Char)0x61,  /* [1658] */
    (xdc_Char)0x66,  /* [1659] */
    (xdc_Char)0x66,  /* [1660] */
    (xdc_Char)0x69,  /* [1661] */
    (xdc_Char)0x6e,  /* [1662] */
    (xdc_Char)0x69,  /* [1663] */
    (xdc_Char)0x74,  /* [1664] */
    (xdc_Char)0x79,  /* [1665] */
    (xdc_Char)0x2e,  /* [1666] */
    (xdc_Char)0x0,  /* [1667] */
    (xdc_Char)0x41,  /* [1668] */
    (xdc_Char)0x5f,  /* [1669] */
    (xdc_Char)0x73,  /* [1670] */
    (xdc_Char)0x6c,  /* [1671] */
    (xdc_Char)0x65,  /* [1672] */
    (xdc_Char)0x65,  /* [1673] */
    (xdc_Char)0x70,  /* [1674] */
    (xdc_Char)0x54,  /* [1675] */
    (xdc_Char)0x61,  /* [1676] */
    (xdc_Char)0x73,  /* [1677] */
    (xdc_Char)0x6b,  /* [1678] */
    (xdc_Char)0x44,  /* [1679] */
    (xdc_Char)0x69,  /* [1680] */
    (xdc_Char)0x73,  /* [1681] */
    (xdc_Char)0x61,  /* [1682] */
    (xdc_Char)0x62,  /* [1683] */
    (xdc_Char)0x6c,  /* [1684] */
    (xdc_Char)0x65,  /* [1685] */
    (xdc_Char)0x64,  /* [1686] */
    (xdc_Char)0x3a,  /* [1687] */
    (xdc_Char)0x20,  /* [1688] */
    (xdc_Char)0x43,  /* [1689] */
    (xdc_Char)0x61,  /* [1690] */
    (xdc_Char)0x6e,  /* [1691] */
    (xdc_Char)0x6e,  /* [1692] */
    (xdc_Char)0x6f,  /* [1693] */
    (xdc_Char)0x74,  /* [1694] */
    (xdc_Char)0x20,  /* [1695] */
    (xdc_Char)0x63,  /* [1696] */
    (xdc_Char)0x61,  /* [1697] */
    (xdc_Char)0x6c,  /* [1698] */
    (xdc_Char)0x6c,  /* [1699] */
    (xdc_Char)0x20,  /* [1700] */
    (xdc_Char)0x54,  /* [1701] */
    (xdc_Char)0x61,  /* [1702] */
    (xdc_Char)0x73,  /* [1703] */
    (xdc_Char)0x6b,  /* [1704] */
    (xdc_Char)0x5f,  /* [1705] */
    (xdc_Char)0x73,  /* [1706] */
    (xdc_Char)0x6c,  /* [1707] */
    (xdc_Char)0x65,  /* [1708] */
    (xdc_Char)0x65,  /* [1709] */
    (xdc_Char)0x70,  /* [1710] */
    (xdc_Char)0x28,  /* [1711] */
    (xdc_Char)0x29,  /* [1712] */
    (xdc_Char)0x20,  /* [1713] */
    (xdc_Char)0x77,  /* [1714] */
    (xdc_Char)0x68,  /* [1715] */
    (xdc_Char)0x69,  /* [1716] */
    (xdc_Char)0x6c,  /* [1717] */
    (xdc_Char)0x65,  /* [1718] */
    (xdc_Char)0x20,  /* [1719] */
    (xdc_Char)0x74,  /* [1720] */
    (xdc_Char)0x68,  /* [1721] */
    (xdc_Char)0x65,  /* [1722] */
    (xdc_Char)0x20,  /* [1723] */
    (xdc_Char)0x54,  /* [1724] */
    (xdc_Char)0x61,  /* [1725] */
    (xdc_Char)0x73,  /* [1726] */
    (xdc_Char)0x6b,  /* [1727] */
    (xdc_Char)0x20,  /* [1728] */
    (xdc_Char)0x73,  /* [1729] */
    (xdc_Char)0x63,  /* [1730] */
    (xdc_Char)0x68,  /* [1731] */
    (xdc_Char)0x65,  /* [1732] */
    (xdc_Char)0x64,  /* [1733] */
    (xdc_Char)0x75,  /* [1734] */
    (xdc_Char)0x6c,  /* [1735] */
    (xdc_Char)0x65,  /* [1736] */
    (xdc_Char)0x72,  /* [1737] */
    (xdc_Char)0x20,  /* [1738] */
    (xdc_Char)0x69,  /* [1739] */
    (xdc_Char)0x73,  /* [1740] */
    (xdc_Char)0x20,  /* [1741] */
    (xdc_Char)0x64,  /* [1742] */
    (xdc_Char)0x69,  /* [1743] */
    (xdc_Char)0x73,  /* [1744] */
    (xdc_Char)0x61,  /* [1745] */
    (xdc_Char)0x62,  /* [1746] */
    (xdc_Char)0x6c,  /* [1747] */
    (xdc_Char)0x65,  /* [1748] */
    (xdc_Char)0x64,  /* [1749] */
    (xdc_Char)0x2e,  /* [1750] */
    (xdc_Char)0x0,  /* [1751] */
    (xdc_Char)0x41,  /* [1752] */
    (xdc_Char)0x5f,  /* [1753] */
    (xdc_Char)0x69,  /* [1754] */
    (xdc_Char)0x6e,  /* [1755] */
    (xdc_Char)0x76,  /* [1756] */
    (xdc_Char)0x61,  /* [1757] */
    (xdc_Char)0x6c,  /* [1758] */
    (xdc_Char)0x69,  /* [1759] */
    (xdc_Char)0x64,  /* [1760] */
    (xdc_Char)0x43,  /* [1761] */
    (xdc_Char)0x6f,  /* [1762] */
    (xdc_Char)0x72,  /* [1763] */
    (xdc_Char)0x65,  /* [1764] */
    (xdc_Char)0x49,  /* [1765] */
    (xdc_Char)0x64,  /* [1766] */
    (xdc_Char)0x3a,  /* [1767] */
    (xdc_Char)0x20,  /* [1768] */
    (xdc_Char)0x43,  /* [1769] */
    (xdc_Char)0x61,  /* [1770] */
    (xdc_Char)0x6e,  /* [1771] */
    (xdc_Char)0x6e,  /* [1772] */
    (xdc_Char)0x6f,  /* [1773] */
    (xdc_Char)0x74,  /* [1774] */
    (xdc_Char)0x20,  /* [1775] */
    (xdc_Char)0x70,  /* [1776] */
    (xdc_Char)0x61,  /* [1777] */
    (xdc_Char)0x73,  /* [1778] */
    (xdc_Char)0x73,  /* [1779] */
    (xdc_Char)0x20,  /* [1780] */
    (xdc_Char)0x61,  /* [1781] */
    (xdc_Char)0x20,  /* [1782] */
    (xdc_Char)0x6e,  /* [1783] */
    (xdc_Char)0x6f,  /* [1784] */
    (xdc_Char)0x6e,  /* [1785] */
    (xdc_Char)0x2d,  /* [1786] */
    (xdc_Char)0x7a,  /* [1787] */
    (xdc_Char)0x65,  /* [1788] */
    (xdc_Char)0x72,  /* [1789] */
    (xdc_Char)0x6f,  /* [1790] */
    (xdc_Char)0x20,  /* [1791] */
    (xdc_Char)0x43,  /* [1792] */
    (xdc_Char)0x6f,  /* [1793] */
    (xdc_Char)0x72,  /* [1794] */
    (xdc_Char)0x65,  /* [1795] */
    (xdc_Char)0x49,  /* [1796] */
    (xdc_Char)0x64,  /* [1797] */
    (xdc_Char)0x20,  /* [1798] */
    (xdc_Char)0x69,  /* [1799] */
    (xdc_Char)0x6e,  /* [1800] */
    (xdc_Char)0x20,  /* [1801] */
    (xdc_Char)0x61,  /* [1802] */
    (xdc_Char)0x20,  /* [1803] */
    (xdc_Char)0x6e,  /* [1804] */
    (xdc_Char)0x6f,  /* [1805] */
    (xdc_Char)0x6e,  /* [1806] */
    (xdc_Char)0x2d,  /* [1807] */
    (xdc_Char)0x53,  /* [1808] */
    (xdc_Char)0x4d,  /* [1809] */
    (xdc_Char)0x50,  /* [1810] */
    (xdc_Char)0x20,  /* [1811] */
    (xdc_Char)0x61,  /* [1812] */
    (xdc_Char)0x70,  /* [1813] */
    (xdc_Char)0x70,  /* [1814] */
    (xdc_Char)0x6c,  /* [1815] */
    (xdc_Char)0x69,  /* [1816] */
    (xdc_Char)0x63,  /* [1817] */
    (xdc_Char)0x61,  /* [1818] */
    (xdc_Char)0x74,  /* [1819] */
    (xdc_Char)0x69,  /* [1820] */
    (xdc_Char)0x6f,  /* [1821] */
    (xdc_Char)0x6e,  /* [1822] */
    (xdc_Char)0x2e,  /* [1823] */
    (xdc_Char)0x0,  /* [1824] */
    (xdc_Char)0x62,  /* [1825] */
    (xdc_Char)0x75,  /* [1826] */
    (xdc_Char)0x66,  /* [1827] */
    (xdc_Char)0x20,  /* [1828] */
    (xdc_Char)0x70,  /* [1829] */
    (xdc_Char)0x61,  /* [1830] */
    (xdc_Char)0x72,  /* [1831] */
    (xdc_Char)0x61,  /* [1832] */
    (xdc_Char)0x6d,  /* [1833] */
    (xdc_Char)0x65,  /* [1834] */
    (xdc_Char)0x74,  /* [1835] */
    (xdc_Char)0x65,  /* [1836] */
    (xdc_Char)0x72,  /* [1837] */
    (xdc_Char)0x20,  /* [1838] */
    (xdc_Char)0x63,  /* [1839] */
    (xdc_Char)0x61,  /* [1840] */
    (xdc_Char)0x6e,  /* [1841] */
    (xdc_Char)0x6e,  /* [1842] */
    (xdc_Char)0x6f,  /* [1843] */
    (xdc_Char)0x74,  /* [1844] */
    (xdc_Char)0x20,  /* [1845] */
    (xdc_Char)0x62,  /* [1846] */
    (xdc_Char)0x65,  /* [1847] */
    (xdc_Char)0x20,  /* [1848] */
    (xdc_Char)0x6e,  /* [1849] */
    (xdc_Char)0x75,  /* [1850] */
    (xdc_Char)0x6c,  /* [1851] */
    (xdc_Char)0x6c,  /* [1852] */
    (xdc_Char)0x0,  /* [1853] */
    (xdc_Char)0x62,  /* [1854] */
    (xdc_Char)0x75,  /* [1855] */
    (xdc_Char)0x66,  /* [1856] */
    (xdc_Char)0x20,  /* [1857] */
    (xdc_Char)0x6e,  /* [1858] */
    (xdc_Char)0x6f,  /* [1859] */
    (xdc_Char)0x74,  /* [1860] */
    (xdc_Char)0x20,  /* [1861] */
    (xdc_Char)0x70,  /* [1862] */
    (xdc_Char)0x72,  /* [1863] */
    (xdc_Char)0x6f,  /* [1864] */
    (xdc_Char)0x70,  /* [1865] */
    (xdc_Char)0x65,  /* [1866] */
    (xdc_Char)0x72,  /* [1867] */
    (xdc_Char)0x6c,  /* [1868] */
    (xdc_Char)0x79,  /* [1869] */
    (xdc_Char)0x20,  /* [1870] */
    (xdc_Char)0x61,  /* [1871] */
    (xdc_Char)0x6c,  /* [1872] */
    (xdc_Char)0x69,  /* [1873] */
    (xdc_Char)0x67,  /* [1874] */
    (xdc_Char)0x6e,  /* [1875] */
    (xdc_Char)0x65,  /* [1876] */
    (xdc_Char)0x64,  /* [1877] */
    (xdc_Char)0x0,  /* [1878] */
    (xdc_Char)0x61,  /* [1879] */
    (xdc_Char)0x6c,  /* [1880] */
    (xdc_Char)0x69,  /* [1881] */
    (xdc_Char)0x67,  /* [1882] */
    (xdc_Char)0x6e,  /* [1883] */
    (xdc_Char)0x20,  /* [1884] */
    (xdc_Char)0x70,  /* [1885] */
    (xdc_Char)0x61,  /* [1886] */
    (xdc_Char)0x72,  /* [1887] */
    (xdc_Char)0x61,  /* [1888] */
    (xdc_Char)0x6d,  /* [1889] */
    (xdc_Char)0x65,  /* [1890] */
    (xdc_Char)0x74,  /* [1891] */
    (xdc_Char)0x65,  /* [1892] */
    (xdc_Char)0x72,  /* [1893] */
    (xdc_Char)0x20,  /* [1894] */
    (xdc_Char)0x6d,  /* [1895] */
    (xdc_Char)0x75,  /* [1896] */
    (xdc_Char)0x73,  /* [1897] */
    (xdc_Char)0x74,  /* [1898] */
    (xdc_Char)0x20,  /* [1899] */
    (xdc_Char)0x62,  /* [1900] */
    (xdc_Char)0x65,  /* [1901] */
    (xdc_Char)0x20,  /* [1902] */
    (xdc_Char)0x30,  /* [1903] */
    (xdc_Char)0x20,  /* [1904] */
    (xdc_Char)0x6f,  /* [1905] */
    (xdc_Char)0x72,  /* [1906] */
    (xdc_Char)0x20,  /* [1907] */
    (xdc_Char)0x61,  /* [1908] */
    (xdc_Char)0x20,  /* [1909] */
    (xdc_Char)0x70,  /* [1910] */
    (xdc_Char)0x6f,  /* [1911] */
    (xdc_Char)0x77,  /* [1912] */
    (xdc_Char)0x65,  /* [1913] */
    (xdc_Char)0x72,  /* [1914] */
    (xdc_Char)0x20,  /* [1915] */
    (xdc_Char)0x6f,  /* [1916] */
    (xdc_Char)0x66,  /* [1917] */
    (xdc_Char)0x20,  /* [1918] */
    (xdc_Char)0x32,  /* [1919] */
    (xdc_Char)0x20,  /* [1920] */
    (xdc_Char)0x3e,  /* [1921] */
    (xdc_Char)0x3d,  /* [1922] */
    (xdc_Char)0x20,  /* [1923] */
    (xdc_Char)0x74,  /* [1924] */
    (xdc_Char)0x68,  /* [1925] */
    (xdc_Char)0x65,  /* [1926] */
    (xdc_Char)0x20,  /* [1927] */
    (xdc_Char)0x76,  /* [1928] */
    (xdc_Char)0x61,  /* [1929] */
    (xdc_Char)0x6c,  /* [1930] */
    (xdc_Char)0x75,  /* [1931] */
    (xdc_Char)0x65,  /* [1932] */
    (xdc_Char)0x20,  /* [1933] */
    (xdc_Char)0x6f,  /* [1934] */
    (xdc_Char)0x66,  /* [1935] */
    (xdc_Char)0x20,  /* [1936] */
    (xdc_Char)0x4d,  /* [1937] */
    (xdc_Char)0x65,  /* [1938] */
    (xdc_Char)0x6d,  /* [1939] */
    (xdc_Char)0x6f,  /* [1940] */
    (xdc_Char)0x72,  /* [1941] */
    (xdc_Char)0x79,  /* [1942] */
    (xdc_Char)0x5f,  /* [1943] */
    (xdc_Char)0x67,  /* [1944] */
    (xdc_Char)0x65,  /* [1945] */
    (xdc_Char)0x74,  /* [1946] */
    (xdc_Char)0x4d,  /* [1947] */
    (xdc_Char)0x61,  /* [1948] */
    (xdc_Char)0x78,  /* [1949] */
    (xdc_Char)0x44,  /* [1950] */
    (xdc_Char)0x65,  /* [1951] */
    (xdc_Char)0x66,  /* [1952] */
    (xdc_Char)0x61,  /* [1953] */
    (xdc_Char)0x75,  /* [1954] */
    (xdc_Char)0x6c,  /* [1955] */
    (xdc_Char)0x74,  /* [1956] */
    (xdc_Char)0x54,  /* [1957] */
    (xdc_Char)0x79,  /* [1958] */
    (xdc_Char)0x70,  /* [1959] */
    (xdc_Char)0x65,  /* [1960] */
    (xdc_Char)0x41,  /* [1961] */
    (xdc_Char)0x6c,  /* [1962] */
    (xdc_Char)0x69,  /* [1963] */
    (xdc_Char)0x67,  /* [1964] */
    (xdc_Char)0x6e,  /* [1965] */
    (xdc_Char)0x28,  /* [1966] */
    (xdc_Char)0x29,  /* [1967] */
    (xdc_Char)0x0,  /* [1968] */
    (xdc_Char)0x61,  /* [1969] */
    (xdc_Char)0x6c,  /* [1970] */
    (xdc_Char)0x69,  /* [1971] */
    (xdc_Char)0x67,  /* [1972] */
    (xdc_Char)0x6e,  /* [1973] */
    (xdc_Char)0x20,  /* [1974] */
    (xdc_Char)0x70,  /* [1975] */
    (xdc_Char)0x61,  /* [1976] */
    (xdc_Char)0x72,  /* [1977] */
    (xdc_Char)0x61,  /* [1978] */
    (xdc_Char)0x6d,  /* [1979] */
    (xdc_Char)0x65,  /* [1980] */
    (xdc_Char)0x74,  /* [1981] */
    (xdc_Char)0x65,  /* [1982] */
    (xdc_Char)0x72,  /* [1983] */
    (xdc_Char)0x20,  /* [1984] */
    (xdc_Char)0x31,  /* [1985] */
    (xdc_Char)0x29,  /* [1986] */
    (xdc_Char)0x20,  /* [1987] */
    (xdc_Char)0x6d,  /* [1988] */
    (xdc_Char)0x75,  /* [1989] */
    (xdc_Char)0x73,  /* [1990] */
    (xdc_Char)0x74,  /* [1991] */
    (xdc_Char)0x20,  /* [1992] */
    (xdc_Char)0x62,  /* [1993] */
    (xdc_Char)0x65,  /* [1994] */
    (xdc_Char)0x20,  /* [1995] */
    (xdc_Char)0x30,  /* [1996] */
    (xdc_Char)0x20,  /* [1997] */
    (xdc_Char)0x6f,  /* [1998] */
    (xdc_Char)0x72,  /* [1999] */
    (xdc_Char)0x20,  /* [2000] */
    (xdc_Char)0x61,  /* [2001] */
    (xdc_Char)0x20,  /* [2002] */
    (xdc_Char)0x70,  /* [2003] */
    (xdc_Char)0x6f,  /* [2004] */
    (xdc_Char)0x77,  /* [2005] */
    (xdc_Char)0x65,  /* [2006] */
    (xdc_Char)0x72,  /* [2007] */
    (xdc_Char)0x20,  /* [2008] */
    (xdc_Char)0x6f,  /* [2009] */
    (xdc_Char)0x66,  /* [2010] */
    (xdc_Char)0x20,  /* [2011] */
    (xdc_Char)0x32,  /* [2012] */
    (xdc_Char)0x20,  /* [2013] */
    (xdc_Char)0x61,  /* [2014] */
    (xdc_Char)0x6e,  /* [2015] */
    (xdc_Char)0x64,  /* [2016] */
    (xdc_Char)0x20,  /* [2017] */
    (xdc_Char)0x32,  /* [2018] */
    (xdc_Char)0x29,  /* [2019] */
    (xdc_Char)0x20,  /* [2020] */
    (xdc_Char)0x6e,  /* [2021] */
    (xdc_Char)0x6f,  /* [2022] */
    (xdc_Char)0x74,  /* [2023] */
    (xdc_Char)0x20,  /* [2024] */
    (xdc_Char)0x67,  /* [2025] */
    (xdc_Char)0x72,  /* [2026] */
    (xdc_Char)0x65,  /* [2027] */
    (xdc_Char)0x61,  /* [2028] */
    (xdc_Char)0x74,  /* [2029] */
    (xdc_Char)0x65,  /* [2030] */
    (xdc_Char)0x72,  /* [2031] */
    (xdc_Char)0x20,  /* [2032] */
    (xdc_Char)0x74,  /* [2033] */
    (xdc_Char)0x68,  /* [2034] */
    (xdc_Char)0x61,  /* [2035] */
    (xdc_Char)0x6e,  /* [2036] */
    (xdc_Char)0x20,  /* [2037] */
    (xdc_Char)0x74,  /* [2038] */
    (xdc_Char)0x68,  /* [2039] */
    (xdc_Char)0x65,  /* [2040] */
    (xdc_Char)0x20,  /* [2041] */
    (xdc_Char)0x68,  /* [2042] */
    (xdc_Char)0x65,  /* [2043] */
    (xdc_Char)0x61,  /* [2044] */
    (xdc_Char)0x70,  /* [2045] */
    (xdc_Char)0x73,  /* [2046] */
    (xdc_Char)0x20,  /* [2047] */
    (xdc_Char)0x61,  /* [2048] */
    (xdc_Char)0x6c,  /* [2049] */
    (xdc_Char)0x69,  /* [2050] */
    (xdc_Char)0x67,  /* [2051] */
    (xdc_Char)0x6e,  /* [2052] */
    (xdc_Char)0x6d,  /* [2053] */
    (xdc_Char)0x65,  /* [2054] */
    (xdc_Char)0x6e,  /* [2055] */
    (xdc_Char)0x74,  /* [2056] */
    (xdc_Char)0x0,  /* [2057] */
    (xdc_Char)0x62,  /* [2058] */
    (xdc_Char)0x6c,  /* [2059] */
    (xdc_Char)0x6f,  /* [2060] */
    (xdc_Char)0x63,  /* [2061] */
    (xdc_Char)0x6b,  /* [2062] */
    (xdc_Char)0x53,  /* [2063] */
    (xdc_Char)0x69,  /* [2064] */
    (xdc_Char)0x7a,  /* [2065] */
    (xdc_Char)0x65,  /* [2066] */
    (xdc_Char)0x20,  /* [2067] */
    (xdc_Char)0x6d,  /* [2068] */
    (xdc_Char)0x75,  /* [2069] */
    (xdc_Char)0x73,  /* [2070] */
    (xdc_Char)0x74,  /* [2071] */
    (xdc_Char)0x20,  /* [2072] */
    (xdc_Char)0x62,  /* [2073] */
    (xdc_Char)0x65,  /* [2074] */
    (xdc_Char)0x20,  /* [2075] */
    (xdc_Char)0x6c,  /* [2076] */
    (xdc_Char)0x61,  /* [2077] */
    (xdc_Char)0x72,  /* [2078] */
    (xdc_Char)0x67,  /* [2079] */
    (xdc_Char)0x65,  /* [2080] */
    (xdc_Char)0x20,  /* [2081] */
    (xdc_Char)0x65,  /* [2082] */
    (xdc_Char)0x6e,  /* [2083] */
    (xdc_Char)0x6f,  /* [2084] */
    (xdc_Char)0x75,  /* [2085] */
    (xdc_Char)0x67,  /* [2086] */
    (xdc_Char)0x68,  /* [2087] */
    (xdc_Char)0x20,  /* [2088] */
    (xdc_Char)0x74,  /* [2089] */
    (xdc_Char)0x6f,  /* [2090] */
    (xdc_Char)0x20,  /* [2091] */
    (xdc_Char)0x68,  /* [2092] */
    (xdc_Char)0x6f,  /* [2093] */
    (xdc_Char)0x6c,  /* [2094] */
    (xdc_Char)0x64,  /* [2095] */
    (xdc_Char)0x20,  /* [2096] */
    (xdc_Char)0x61,  /* [2097] */
    (xdc_Char)0x74,  /* [2098] */
    (xdc_Char)0x6c,  /* [2099] */
    (xdc_Char)0x65,  /* [2100] */
    (xdc_Char)0x61,  /* [2101] */
    (xdc_Char)0x73,  /* [2102] */
    (xdc_Char)0x74,  /* [2103] */
    (xdc_Char)0x20,  /* [2104] */
    (xdc_Char)0x74,  /* [2105] */
    (xdc_Char)0x77,  /* [2106] */
    (xdc_Char)0x6f,  /* [2107] */
    (xdc_Char)0x20,  /* [2108] */
    (xdc_Char)0x70,  /* [2109] */
    (xdc_Char)0x6f,  /* [2110] */
    (xdc_Char)0x69,  /* [2111] */
    (xdc_Char)0x6e,  /* [2112] */
    (xdc_Char)0x74,  /* [2113] */
    (xdc_Char)0x65,  /* [2114] */
    (xdc_Char)0x72,  /* [2115] */
    (xdc_Char)0x73,  /* [2116] */
    (xdc_Char)0x0,  /* [2117] */
    (xdc_Char)0x6e,  /* [2118] */
    (xdc_Char)0x75,  /* [2119] */
    (xdc_Char)0x6d,  /* [2120] */
    (xdc_Char)0x42,  /* [2121] */
    (xdc_Char)0x6c,  /* [2122] */
    (xdc_Char)0x6f,  /* [2123] */
    (xdc_Char)0x63,  /* [2124] */
    (xdc_Char)0x6b,  /* [2125] */
    (xdc_Char)0x73,  /* [2126] */
    (xdc_Char)0x20,  /* [2127] */
    (xdc_Char)0x63,  /* [2128] */
    (xdc_Char)0x61,  /* [2129] */
    (xdc_Char)0x6e,  /* [2130] */
    (xdc_Char)0x6e,  /* [2131] */
    (xdc_Char)0x6f,  /* [2132] */
    (xdc_Char)0x74,  /* [2133] */
    (xdc_Char)0x20,  /* [2134] */
    (xdc_Char)0x62,  /* [2135] */
    (xdc_Char)0x65,  /* [2136] */
    (xdc_Char)0x20,  /* [2137] */
    (xdc_Char)0x7a,  /* [2138] */
    (xdc_Char)0x65,  /* [2139] */
    (xdc_Char)0x72,  /* [2140] */
    (xdc_Char)0x6f,  /* [2141] */
    (xdc_Char)0x0,  /* [2142] */
    (xdc_Char)0x62,  /* [2143] */
    (xdc_Char)0x75,  /* [2144] */
    (xdc_Char)0x66,  /* [2145] */
    (xdc_Char)0x53,  /* [2146] */
    (xdc_Char)0x69,  /* [2147] */
    (xdc_Char)0x7a,  /* [2148] */
    (xdc_Char)0x65,  /* [2149] */
    (xdc_Char)0x20,  /* [2150] */
    (xdc_Char)0x63,  /* [2151] */
    (xdc_Char)0x61,  /* [2152] */
    (xdc_Char)0x6e,  /* [2153] */
    (xdc_Char)0x6e,  /* [2154] */
    (xdc_Char)0x6f,  /* [2155] */
    (xdc_Char)0x74,  /* [2156] */
    (xdc_Char)0x20,  /* [2157] */
    (xdc_Char)0x62,  /* [2158] */
    (xdc_Char)0x65,  /* [2159] */
    (xdc_Char)0x20,  /* [2160] */
    (xdc_Char)0x7a,  /* [2161] */
    (xdc_Char)0x65,  /* [2162] */
    (xdc_Char)0x72,  /* [2163] */
    (xdc_Char)0x6f,  /* [2164] */
    (xdc_Char)0x0,  /* [2165] */
    (xdc_Char)0x48,  /* [2166] */
    (xdc_Char)0x65,  /* [2167] */
    (xdc_Char)0x61,  /* [2168] */
    (xdc_Char)0x70,  /* [2169] */
    (xdc_Char)0x42,  /* [2170] */
    (xdc_Char)0x75,  /* [2171] */
    (xdc_Char)0x66,  /* [2172] */
    (xdc_Char)0x5f,  /* [2173] */
    (xdc_Char)0x63,  /* [2174] */
    (xdc_Char)0x72,  /* [2175] */
    (xdc_Char)0x65,  /* [2176] */
    (xdc_Char)0x61,  /* [2177] */
    (xdc_Char)0x74,  /* [2178] */
    (xdc_Char)0x65,  /* [2179] */
    (xdc_Char)0x27,  /* [2180] */
    (xdc_Char)0x73,  /* [2181] */
    (xdc_Char)0x20,  /* [2182] */
    (xdc_Char)0x62,  /* [2183] */
    (xdc_Char)0x75,  /* [2184] */
    (xdc_Char)0x66,  /* [2185] */
    (xdc_Char)0x53,  /* [2186] */
    (xdc_Char)0x69,  /* [2187] */
    (xdc_Char)0x7a,  /* [2188] */
    (xdc_Char)0x65,  /* [2189] */
    (xdc_Char)0x20,  /* [2190] */
    (xdc_Char)0x70,  /* [2191] */
    (xdc_Char)0x61,  /* [2192] */
    (xdc_Char)0x72,  /* [2193] */
    (xdc_Char)0x61,  /* [2194] */
    (xdc_Char)0x6d,  /* [2195] */
    (xdc_Char)0x65,  /* [2196] */
    (xdc_Char)0x74,  /* [2197] */
    (xdc_Char)0x65,  /* [2198] */
    (xdc_Char)0x72,  /* [2199] */
    (xdc_Char)0x20,  /* [2200] */
    (xdc_Char)0x69,  /* [2201] */
    (xdc_Char)0x73,  /* [2202] */
    (xdc_Char)0x20,  /* [2203] */
    (xdc_Char)0x69,  /* [2204] */
    (xdc_Char)0x6e,  /* [2205] */
    (xdc_Char)0x76,  /* [2206] */
    (xdc_Char)0x61,  /* [2207] */
    (xdc_Char)0x6c,  /* [2208] */
    (xdc_Char)0x69,  /* [2209] */
    (xdc_Char)0x64,  /* [2210] */
    (xdc_Char)0x20,  /* [2211] */
    (xdc_Char)0x28,  /* [2212] */
    (xdc_Char)0x74,  /* [2213] */
    (xdc_Char)0x6f,  /* [2214] */
    (xdc_Char)0x6f,  /* [2215] */
    (xdc_Char)0x20,  /* [2216] */
    (xdc_Char)0x73,  /* [2217] */
    (xdc_Char)0x6d,  /* [2218] */
    (xdc_Char)0x61,  /* [2219] */
    (xdc_Char)0x6c,  /* [2220] */
    (xdc_Char)0x6c,  /* [2221] */
    (xdc_Char)0x29,  /* [2222] */
    (xdc_Char)0x0,  /* [2223] */
    (xdc_Char)0x43,  /* [2224] */
    (xdc_Char)0x61,  /* [2225] */
    (xdc_Char)0x6e,  /* [2226] */
    (xdc_Char)0x6e,  /* [2227] */
    (xdc_Char)0x6f,  /* [2228] */
    (xdc_Char)0x74,  /* [2229] */
    (xdc_Char)0x20,  /* [2230] */
    (xdc_Char)0x63,  /* [2231] */
    (xdc_Char)0x61,  /* [2232] */
    (xdc_Char)0x6c,  /* [2233] */
    (xdc_Char)0x6c,  /* [2234] */
    (xdc_Char)0x20,  /* [2235] */
    (xdc_Char)0x48,  /* [2236] */
    (xdc_Char)0x65,  /* [2237] */
    (xdc_Char)0x61,  /* [2238] */
    (xdc_Char)0x70,  /* [2239] */
    (xdc_Char)0x42,  /* [2240] */
    (xdc_Char)0x75,  /* [2241] */
    (xdc_Char)0x66,  /* [2242] */
    (xdc_Char)0x5f,  /* [2243] */
    (xdc_Char)0x66,  /* [2244] */
    (xdc_Char)0x72,  /* [2245] */
    (xdc_Char)0x65,  /* [2246] */
    (xdc_Char)0x65,  /* [2247] */
    (xdc_Char)0x20,  /* [2248] */
    (xdc_Char)0x77,  /* [2249] */
    (xdc_Char)0x68,  /* [2250] */
    (xdc_Char)0x65,  /* [2251] */
    (xdc_Char)0x6e,  /* [2252] */
    (xdc_Char)0x20,  /* [2253] */
    (xdc_Char)0x6e,  /* [2254] */
    (xdc_Char)0x6f,  /* [2255] */
    (xdc_Char)0x20,  /* [2256] */
    (xdc_Char)0x62,  /* [2257] */
    (xdc_Char)0x6c,  /* [2258] */
    (xdc_Char)0x6f,  /* [2259] */
    (xdc_Char)0x63,  /* [2260] */
    (xdc_Char)0x6b,  /* [2261] */
    (xdc_Char)0x73,  /* [2262] */
    (xdc_Char)0x20,  /* [2263] */
    (xdc_Char)0x68,  /* [2264] */
    (xdc_Char)0x61,  /* [2265] */
    (xdc_Char)0x76,  /* [2266] */
    (xdc_Char)0x65,  /* [2267] */
    (xdc_Char)0x20,  /* [2268] */
    (xdc_Char)0x62,  /* [2269] */
    (xdc_Char)0x65,  /* [2270] */
    (xdc_Char)0x65,  /* [2271] */
    (xdc_Char)0x6e,  /* [2272] */
    (xdc_Char)0x20,  /* [2273] */
    (xdc_Char)0x61,  /* [2274] */
    (xdc_Char)0x6c,  /* [2275] */
    (xdc_Char)0x6c,  /* [2276] */
    (xdc_Char)0x6f,  /* [2277] */
    (xdc_Char)0x63,  /* [2278] */
    (xdc_Char)0x61,  /* [2279] */
    (xdc_Char)0x74,  /* [2280] */
    (xdc_Char)0x65,  /* [2281] */
    (xdc_Char)0x64,  /* [2282] */
    (xdc_Char)0x0,  /* [2283] */
    (xdc_Char)0x41,  /* [2284] */
    (xdc_Char)0x5f,  /* [2285] */
    (xdc_Char)0x69,  /* [2286] */
    (xdc_Char)0x6e,  /* [2287] */
    (xdc_Char)0x76,  /* [2288] */
    (xdc_Char)0x61,  /* [2289] */
    (xdc_Char)0x6c,  /* [2290] */
    (xdc_Char)0x69,  /* [2291] */
    (xdc_Char)0x64,  /* [2292] */
    (xdc_Char)0x46,  /* [2293] */
    (xdc_Char)0x72,  /* [2294] */
    (xdc_Char)0x65,  /* [2295] */
    (xdc_Char)0x65,  /* [2296] */
    (xdc_Char)0x3a,  /* [2297] */
    (xdc_Char)0x20,  /* [2298] */
    (xdc_Char)0x49,  /* [2299] */
    (xdc_Char)0x6e,  /* [2300] */
    (xdc_Char)0x76,  /* [2301] */
    (xdc_Char)0x61,  /* [2302] */
    (xdc_Char)0x6c,  /* [2303] */
    (xdc_Char)0x69,  /* [2304] */
    (xdc_Char)0x64,  /* [2305] */
    (xdc_Char)0x20,  /* [2306] */
    (xdc_Char)0x66,  /* [2307] */
    (xdc_Char)0x72,  /* [2308] */
    (xdc_Char)0x65,  /* [2309] */
    (xdc_Char)0x65,  /* [2310] */
    (xdc_Char)0x0,  /* [2311] */
    (xdc_Char)0x41,  /* [2312] */
    (xdc_Char)0x5f,  /* [2313] */
    (xdc_Char)0x7a,  /* [2314] */
    (xdc_Char)0x65,  /* [2315] */
    (xdc_Char)0x72,  /* [2316] */
    (xdc_Char)0x6f,  /* [2317] */
    (xdc_Char)0x42,  /* [2318] */
    (xdc_Char)0x6c,  /* [2319] */
    (xdc_Char)0x6f,  /* [2320] */
    (xdc_Char)0x63,  /* [2321] */
    (xdc_Char)0x6b,  /* [2322] */
    (xdc_Char)0x3a,  /* [2323] */
    (xdc_Char)0x20,  /* [2324] */
    (xdc_Char)0x43,  /* [2325] */
    (xdc_Char)0x61,  /* [2326] */
    (xdc_Char)0x6e,  /* [2327] */
    (xdc_Char)0x6e,  /* [2328] */
    (xdc_Char)0x6f,  /* [2329] */
    (xdc_Char)0x74,  /* [2330] */
    (xdc_Char)0x20,  /* [2331] */
    (xdc_Char)0x61,  /* [2332] */
    (xdc_Char)0x6c,  /* [2333] */
    (xdc_Char)0x6c,  /* [2334] */
    (xdc_Char)0x6f,  /* [2335] */
    (xdc_Char)0x63,  /* [2336] */
    (xdc_Char)0x61,  /* [2337] */
    (xdc_Char)0x74,  /* [2338] */
    (xdc_Char)0x65,  /* [2339] */
    (xdc_Char)0x20,  /* [2340] */
    (xdc_Char)0x73,  /* [2341] */
    (xdc_Char)0x69,  /* [2342] */
    (xdc_Char)0x7a,  /* [2343] */
    (xdc_Char)0x65,  /* [2344] */
    (xdc_Char)0x20,  /* [2345] */
    (xdc_Char)0x30,  /* [2346] */
    (xdc_Char)0x0,  /* [2347] */
    (xdc_Char)0x41,  /* [2348] */
    (xdc_Char)0x5f,  /* [2349] */
    (xdc_Char)0x68,  /* [2350] */
    (xdc_Char)0x65,  /* [2351] */
    (xdc_Char)0x61,  /* [2352] */
    (xdc_Char)0x70,  /* [2353] */
    (xdc_Char)0x53,  /* [2354] */
    (xdc_Char)0x69,  /* [2355] */
    (xdc_Char)0x7a,  /* [2356] */
    (xdc_Char)0x65,  /* [2357] */
    (xdc_Char)0x3a,  /* [2358] */
    (xdc_Char)0x20,  /* [2359] */
    (xdc_Char)0x52,  /* [2360] */
    (xdc_Char)0x65,  /* [2361] */
    (xdc_Char)0x71,  /* [2362] */
    (xdc_Char)0x75,  /* [2363] */
    (xdc_Char)0x65,  /* [2364] */
    (xdc_Char)0x73,  /* [2365] */
    (xdc_Char)0x74,  /* [2366] */
    (xdc_Char)0x65,  /* [2367] */
    (xdc_Char)0x64,  /* [2368] */
    (xdc_Char)0x20,  /* [2369] */
    (xdc_Char)0x68,  /* [2370] */
    (xdc_Char)0x65,  /* [2371] */
    (xdc_Char)0x61,  /* [2372] */
    (xdc_Char)0x70,  /* [2373] */
    (xdc_Char)0x20,  /* [2374] */
    (xdc_Char)0x73,  /* [2375] */
    (xdc_Char)0x69,  /* [2376] */
    (xdc_Char)0x7a,  /* [2377] */
    (xdc_Char)0x65,  /* [2378] */
    (xdc_Char)0x20,  /* [2379] */
    (xdc_Char)0x69,  /* [2380] */
    (xdc_Char)0x73,  /* [2381] */
    (xdc_Char)0x20,  /* [2382] */
    (xdc_Char)0x74,  /* [2383] */
    (xdc_Char)0x6f,  /* [2384] */
    (xdc_Char)0x6f,  /* [2385] */
    (xdc_Char)0x20,  /* [2386] */
    (xdc_Char)0x73,  /* [2387] */
    (xdc_Char)0x6d,  /* [2388] */
    (xdc_Char)0x61,  /* [2389] */
    (xdc_Char)0x6c,  /* [2390] */
    (xdc_Char)0x6c,  /* [2391] */
    (xdc_Char)0x0,  /* [2392] */
    (xdc_Char)0x41,  /* [2393] */
    (xdc_Char)0x5f,  /* [2394] */
    (xdc_Char)0x61,  /* [2395] */
    (xdc_Char)0x6c,  /* [2396] */
    (xdc_Char)0x69,  /* [2397] */
    (xdc_Char)0x67,  /* [2398] */
    (xdc_Char)0x6e,  /* [2399] */
    (xdc_Char)0x3a,  /* [2400] */
    (xdc_Char)0x20,  /* [2401] */
    (xdc_Char)0x52,  /* [2402] */
    (xdc_Char)0x65,  /* [2403] */
    (xdc_Char)0x71,  /* [2404] */
    (xdc_Char)0x75,  /* [2405] */
    (xdc_Char)0x65,  /* [2406] */
    (xdc_Char)0x73,  /* [2407] */
    (xdc_Char)0x74,  /* [2408] */
    (xdc_Char)0x65,  /* [2409] */
    (xdc_Char)0x64,  /* [2410] */
    (xdc_Char)0x20,  /* [2411] */
    (xdc_Char)0x61,  /* [2412] */
    (xdc_Char)0x6c,  /* [2413] */
    (xdc_Char)0x69,  /* [2414] */
    (xdc_Char)0x67,  /* [2415] */
    (xdc_Char)0x6e,  /* [2416] */
    (xdc_Char)0x20,  /* [2417] */
    (xdc_Char)0x69,  /* [2418] */
    (xdc_Char)0x73,  /* [2419] */
    (xdc_Char)0x20,  /* [2420] */
    (xdc_Char)0x6e,  /* [2421] */
    (xdc_Char)0x6f,  /* [2422] */
    (xdc_Char)0x74,  /* [2423] */
    (xdc_Char)0x20,  /* [2424] */
    (xdc_Char)0x61,  /* [2425] */
    (xdc_Char)0x20,  /* [2426] */
    (xdc_Char)0x70,  /* [2427] */
    (xdc_Char)0x6f,  /* [2428] */
    (xdc_Char)0x77,  /* [2429] */
    (xdc_Char)0x65,  /* [2430] */
    (xdc_Char)0x72,  /* [2431] */
    (xdc_Char)0x20,  /* [2432] */
    (xdc_Char)0x6f,  /* [2433] */
    (xdc_Char)0x66,  /* [2434] */
    (xdc_Char)0x20,  /* [2435] */
    (xdc_Char)0x32,  /* [2436] */
    (xdc_Char)0x0,  /* [2437] */
    (xdc_Char)0x49,  /* [2438] */
    (xdc_Char)0x6e,  /* [2439] */
    (xdc_Char)0x76,  /* [2440] */
    (xdc_Char)0x61,  /* [2441] */
    (xdc_Char)0x6c,  /* [2442] */
    (xdc_Char)0x69,  /* [2443] */
    (xdc_Char)0x64,  /* [2444] */
    (xdc_Char)0x20,  /* [2445] */
    (xdc_Char)0x62,  /* [2446] */
    (xdc_Char)0x6c,  /* [2447] */
    (xdc_Char)0x6f,  /* [2448] */
    (xdc_Char)0x63,  /* [2449] */
    (xdc_Char)0x6b,  /* [2450] */
    (xdc_Char)0x20,  /* [2451] */
    (xdc_Char)0x61,  /* [2452] */
    (xdc_Char)0x64,  /* [2453] */
    (xdc_Char)0x64,  /* [2454] */
    (xdc_Char)0x72,  /* [2455] */
    (xdc_Char)0x65,  /* [2456] */
    (xdc_Char)0x73,  /* [2457] */
    (xdc_Char)0x73,  /* [2458] */
    (xdc_Char)0x20,  /* [2459] */
    (xdc_Char)0x6f,  /* [2460] */
    (xdc_Char)0x6e,  /* [2461] */
    (xdc_Char)0x20,  /* [2462] */
    (xdc_Char)0x74,  /* [2463] */
    (xdc_Char)0x68,  /* [2464] */
    (xdc_Char)0x65,  /* [2465] */
    (xdc_Char)0x20,  /* [2466] */
    (xdc_Char)0x66,  /* [2467] */
    (xdc_Char)0x72,  /* [2468] */
    (xdc_Char)0x65,  /* [2469] */
    (xdc_Char)0x65,  /* [2470] */
    (xdc_Char)0x2e,  /* [2471] */
    (xdc_Char)0x20,  /* [2472] */
    (xdc_Char)0x46,  /* [2473] */
    (xdc_Char)0x61,  /* [2474] */
    (xdc_Char)0x69,  /* [2475] */
    (xdc_Char)0x6c,  /* [2476] */
    (xdc_Char)0x65,  /* [2477] */
    (xdc_Char)0x64,  /* [2478] */
    (xdc_Char)0x20,  /* [2479] */
    (xdc_Char)0x74,  /* [2480] */
    (xdc_Char)0x6f,  /* [2481] */
    (xdc_Char)0x20,  /* [2482] */
    (xdc_Char)0x66,  /* [2483] */
    (xdc_Char)0x72,  /* [2484] */
    (xdc_Char)0x65,  /* [2485] */
    (xdc_Char)0x65,  /* [2486] */
    (xdc_Char)0x20,  /* [2487] */
    (xdc_Char)0x62,  /* [2488] */
    (xdc_Char)0x6c,  /* [2489] */
    (xdc_Char)0x6f,  /* [2490] */
    (xdc_Char)0x63,  /* [2491] */
    (xdc_Char)0x6b,  /* [2492] */
    (xdc_Char)0x20,  /* [2493] */
    (xdc_Char)0x62,  /* [2494] */
    (xdc_Char)0x61,  /* [2495] */
    (xdc_Char)0x63,  /* [2496] */
    (xdc_Char)0x6b,  /* [2497] */
    (xdc_Char)0x20,  /* [2498] */
    (xdc_Char)0x74,  /* [2499] */
    (xdc_Char)0x6f,  /* [2500] */
    (xdc_Char)0x20,  /* [2501] */
    (xdc_Char)0x68,  /* [2502] */
    (xdc_Char)0x65,  /* [2503] */
    (xdc_Char)0x61,  /* [2504] */
    (xdc_Char)0x70,  /* [2505] */
    (xdc_Char)0x2e,  /* [2506] */
    (xdc_Char)0x0,  /* [2507] */
    (xdc_Char)0x41,  /* [2508] */
    (xdc_Char)0x5f,  /* [2509] */
    (xdc_Char)0x64,  /* [2510] */
    (xdc_Char)0x6f,  /* [2511] */
    (xdc_Char)0x75,  /* [2512] */
    (xdc_Char)0x62,  /* [2513] */
    (xdc_Char)0x6c,  /* [2514] */
    (xdc_Char)0x65,  /* [2515] */
    (xdc_Char)0x46,  /* [2516] */
    (xdc_Char)0x72,  /* [2517] */
    (xdc_Char)0x65,  /* [2518] */
    (xdc_Char)0x65,  /* [2519] */
    (xdc_Char)0x3a,  /* [2520] */
    (xdc_Char)0x20,  /* [2521] */
    (xdc_Char)0x42,  /* [2522] */
    (xdc_Char)0x75,  /* [2523] */
    (xdc_Char)0x66,  /* [2524] */
    (xdc_Char)0x66,  /* [2525] */
    (xdc_Char)0x65,  /* [2526] */
    (xdc_Char)0x72,  /* [2527] */
    (xdc_Char)0x20,  /* [2528] */
    (xdc_Char)0x61,  /* [2529] */
    (xdc_Char)0x6c,  /* [2530] */
    (xdc_Char)0x72,  /* [2531] */
    (xdc_Char)0x65,  /* [2532] */
    (xdc_Char)0x61,  /* [2533] */
    (xdc_Char)0x64,  /* [2534] */
    (xdc_Char)0x79,  /* [2535] */
    (xdc_Char)0x20,  /* [2536] */
    (xdc_Char)0x66,  /* [2537] */
    (xdc_Char)0x72,  /* [2538] */
    (xdc_Char)0x65,  /* [2539] */
    (xdc_Char)0x65,  /* [2540] */
    (xdc_Char)0x0,  /* [2541] */
    (xdc_Char)0x41,  /* [2542] */
    (xdc_Char)0x5f,  /* [2543] */
    (xdc_Char)0x62,  /* [2544] */
    (xdc_Char)0x75,  /* [2545] */
    (xdc_Char)0x66,  /* [2546] */
    (xdc_Char)0x4f,  /* [2547] */
    (xdc_Char)0x76,  /* [2548] */
    (xdc_Char)0x65,  /* [2549] */
    (xdc_Char)0x72,  /* [2550] */
    (xdc_Char)0x66,  /* [2551] */
    (xdc_Char)0x6c,  /* [2552] */
    (xdc_Char)0x6f,  /* [2553] */
    (xdc_Char)0x77,  /* [2554] */
    (xdc_Char)0x3a,  /* [2555] */
    (xdc_Char)0x20,  /* [2556] */
    (xdc_Char)0x42,  /* [2557] */
    (xdc_Char)0x75,  /* [2558] */
    (xdc_Char)0x66,  /* [2559] */
    (xdc_Char)0x66,  /* [2560] */
    (xdc_Char)0x65,  /* [2561] */
    (xdc_Char)0x72,  /* [2562] */
    (xdc_Char)0x20,  /* [2563] */
    (xdc_Char)0x6f,  /* [2564] */
    (xdc_Char)0x76,  /* [2565] */
    (xdc_Char)0x65,  /* [2566] */
    (xdc_Char)0x72,  /* [2567] */
    (xdc_Char)0x66,  /* [2568] */
    (xdc_Char)0x6c,  /* [2569] */
    (xdc_Char)0x6f,  /* [2570] */
    (xdc_Char)0x77,  /* [2571] */
    (xdc_Char)0x0,  /* [2572] */
    (xdc_Char)0x41,  /* [2573] */
    (xdc_Char)0x5f,  /* [2574] */
    (xdc_Char)0x6e,  /* [2575] */
    (xdc_Char)0x6f,  /* [2576] */
    (xdc_Char)0x74,  /* [2577] */
    (xdc_Char)0x45,  /* [2578] */
    (xdc_Char)0x6d,  /* [2579] */
    (xdc_Char)0x70,  /* [2580] */
    (xdc_Char)0x74,  /* [2581] */
    (xdc_Char)0x79,  /* [2582] */
    (xdc_Char)0x3a,  /* [2583] */
    (xdc_Char)0x20,  /* [2584] */
    (xdc_Char)0x48,  /* [2585] */
    (xdc_Char)0x65,  /* [2586] */
    (xdc_Char)0x61,  /* [2587] */
    (xdc_Char)0x70,  /* [2588] */
    (xdc_Char)0x20,  /* [2589] */
    (xdc_Char)0x6e,  /* [2590] */
    (xdc_Char)0x6f,  /* [2591] */
    (xdc_Char)0x74,  /* [2592] */
    (xdc_Char)0x20,  /* [2593] */
    (xdc_Char)0x65,  /* [2594] */
    (xdc_Char)0x6d,  /* [2595] */
    (xdc_Char)0x70,  /* [2596] */
    (xdc_Char)0x74,  /* [2597] */
    (xdc_Char)0x79,  /* [2598] */
    (xdc_Char)0x0,  /* [2599] */
    (xdc_Char)0x41,  /* [2600] */
    (xdc_Char)0x5f,  /* [2601] */
    (xdc_Char)0x6e,  /* [2602] */
    (xdc_Char)0x75,  /* [2603] */
    (xdc_Char)0x6c,  /* [2604] */
    (xdc_Char)0x6c,  /* [2605] */
    (xdc_Char)0x4f,  /* [2606] */
    (xdc_Char)0x62,  /* [2607] */
    (xdc_Char)0x6a,  /* [2608] */
    (xdc_Char)0x65,  /* [2609] */
    (xdc_Char)0x63,  /* [2610] */
    (xdc_Char)0x74,  /* [2611] */
    (xdc_Char)0x3a,  /* [2612] */
    (xdc_Char)0x20,  /* [2613] */
    (xdc_Char)0x48,  /* [2614] */
    (xdc_Char)0x65,  /* [2615] */
    (xdc_Char)0x61,  /* [2616] */
    (xdc_Char)0x70,  /* [2617] */
    (xdc_Char)0x54,  /* [2618] */
    (xdc_Char)0x72,  /* [2619] */
    (xdc_Char)0x61,  /* [2620] */
    (xdc_Char)0x63,  /* [2621] */
    (xdc_Char)0x6b,  /* [2622] */
    (xdc_Char)0x5f,  /* [2623] */
    (xdc_Char)0x70,  /* [2624] */
    (xdc_Char)0x72,  /* [2625] */
    (xdc_Char)0x69,  /* [2626] */
    (xdc_Char)0x6e,  /* [2627] */
    (xdc_Char)0x74,  /* [2628] */
    (xdc_Char)0x48,  /* [2629] */
    (xdc_Char)0x65,  /* [2630] */
    (xdc_Char)0x61,  /* [2631] */
    (xdc_Char)0x70,  /* [2632] */
    (xdc_Char)0x20,  /* [2633] */
    (xdc_Char)0x63,  /* [2634] */
    (xdc_Char)0x61,  /* [2635] */
    (xdc_Char)0x6c,  /* [2636] */
    (xdc_Char)0x6c,  /* [2637] */
    (xdc_Char)0x65,  /* [2638] */
    (xdc_Char)0x64,  /* [2639] */
    (xdc_Char)0x20,  /* [2640] */
    (xdc_Char)0x77,  /* [2641] */
    (xdc_Char)0x69,  /* [2642] */
    (xdc_Char)0x74,  /* [2643] */
    (xdc_Char)0x68,  /* [2644] */
    (xdc_Char)0x20,  /* [2645] */
    (xdc_Char)0x6e,  /* [2646] */
    (xdc_Char)0x75,  /* [2647] */
    (xdc_Char)0x6c,  /* [2648] */
    (xdc_Char)0x6c,  /* [2649] */
    (xdc_Char)0x20,  /* [2650] */
    (xdc_Char)0x6f,  /* [2651] */
    (xdc_Char)0x62,  /* [2652] */
    (xdc_Char)0x6a,  /* [2653] */
    (xdc_Char)0x0,  /* [2654] */
    (xdc_Char)0x41,  /* [2655] */
    (xdc_Char)0x5f,  /* [2656] */
    (xdc_Char)0x62,  /* [2657] */
    (xdc_Char)0x61,  /* [2658] */
    (xdc_Char)0x64,  /* [2659] */
    (xdc_Char)0x54,  /* [2660] */
    (xdc_Char)0x68,  /* [2661] */
    (xdc_Char)0x72,  /* [2662] */
    (xdc_Char)0x65,  /* [2663] */
    (xdc_Char)0x61,  /* [2664] */
    (xdc_Char)0x64,  /* [2665] */
    (xdc_Char)0x54,  /* [2666] */
    (xdc_Char)0x79,  /* [2667] */
    (xdc_Char)0x70,  /* [2668] */
    (xdc_Char)0x65,  /* [2669] */
    (xdc_Char)0x3a,  /* [2670] */
    (xdc_Char)0x20,  /* [2671] */
    (xdc_Char)0x43,  /* [2672] */
    (xdc_Char)0x61,  /* [2673] */
    (xdc_Char)0x6e,  /* [2674] */
    (xdc_Char)0x6e,  /* [2675] */
    (xdc_Char)0x6f,  /* [2676] */
    (xdc_Char)0x74,  /* [2677] */
    (xdc_Char)0x20,  /* [2678] */
    (xdc_Char)0x63,  /* [2679] */
    (xdc_Char)0x61,  /* [2680] */
    (xdc_Char)0x6c,  /* [2681] */
    (xdc_Char)0x6c,  /* [2682] */
    (xdc_Char)0x20,  /* [2683] */
    (xdc_Char)0x61,  /* [2684] */
    (xdc_Char)0x20,  /* [2685] */
    (xdc_Char)0x43,  /* [2686] */
    (xdc_Char)0x20,  /* [2687] */
    (xdc_Char)0x72,  /* [2688] */
    (xdc_Char)0x75,  /* [2689] */
    (xdc_Char)0x6e,  /* [2690] */
    (xdc_Char)0x74,  /* [2691] */
    (xdc_Char)0x69,  /* [2692] */
    (xdc_Char)0x6d,  /* [2693] */
    (xdc_Char)0x65,  /* [2694] */
    (xdc_Char)0x20,  /* [2695] */
    (xdc_Char)0x6c,  /* [2696] */
    (xdc_Char)0x69,  /* [2697] */
    (xdc_Char)0x62,  /* [2698] */
    (xdc_Char)0x72,  /* [2699] */
    (xdc_Char)0x61,  /* [2700] */
    (xdc_Char)0x72,  /* [2701] */
    (xdc_Char)0x79,  /* [2702] */
    (xdc_Char)0x20,  /* [2703] */
    (xdc_Char)0x41,  /* [2704] */
    (xdc_Char)0x50,  /* [2705] */
    (xdc_Char)0x49,  /* [2706] */
    (xdc_Char)0x20,  /* [2707] */
    (xdc_Char)0x66,  /* [2708] */
    (xdc_Char)0x72,  /* [2709] */
    (xdc_Char)0x6f,  /* [2710] */
    (xdc_Char)0x6d,  /* [2711] */
    (xdc_Char)0x20,  /* [2712] */
    (xdc_Char)0x61,  /* [2713] */
    (xdc_Char)0x20,  /* [2714] */
    (xdc_Char)0x48,  /* [2715] */
    (xdc_Char)0x77,  /* [2716] */
    (xdc_Char)0x69,  /* [2717] */
    (xdc_Char)0x20,  /* [2718] */
    (xdc_Char)0x6f,  /* [2719] */
    (xdc_Char)0x72,  /* [2720] */
    (xdc_Char)0x20,  /* [2721] */
    (xdc_Char)0x53,  /* [2722] */
    (xdc_Char)0x77,  /* [2723] */
    (xdc_Char)0x69,  /* [2724] */
    (xdc_Char)0x20,  /* [2725] */
    (xdc_Char)0x74,  /* [2726] */
    (xdc_Char)0x68,  /* [2727] */
    (xdc_Char)0x72,  /* [2728] */
    (xdc_Char)0x65,  /* [2729] */
    (xdc_Char)0x61,  /* [2730] */
    (xdc_Char)0x64,  /* [2731] */
    (xdc_Char)0x2e,  /* [2732] */
    (xdc_Char)0x0,  /* [2733] */
    (xdc_Char)0x41,  /* [2734] */
    (xdc_Char)0x5f,  /* [2735] */
    (xdc_Char)0x7a,  /* [2736] */
    (xdc_Char)0x65,  /* [2737] */
    (xdc_Char)0x72,  /* [2738] */
    (xdc_Char)0x6f,  /* [2739] */
    (xdc_Char)0x54,  /* [2740] */
    (xdc_Char)0x69,  /* [2741] */
    (xdc_Char)0x6d,  /* [2742] */
    (xdc_Char)0x65,  /* [2743] */
    (xdc_Char)0x6f,  /* [2744] */
    (xdc_Char)0x75,  /* [2745] */
    (xdc_Char)0x74,  /* [2746] */
    (xdc_Char)0x3a,  /* [2747] */
    (xdc_Char)0x20,  /* [2748] */
    (xdc_Char)0x54,  /* [2749] */
    (xdc_Char)0x69,  /* [2750] */
    (xdc_Char)0x6d,  /* [2751] */
    (xdc_Char)0x65,  /* [2752] */
    (xdc_Char)0x6f,  /* [2753] */
    (xdc_Char)0x75,  /* [2754] */
    (xdc_Char)0x74,  /* [2755] */
    (xdc_Char)0x20,  /* [2756] */
    (xdc_Char)0x76,  /* [2757] */
    (xdc_Char)0x61,  /* [2758] */
    (xdc_Char)0x6c,  /* [2759] */
    (xdc_Char)0x75,  /* [2760] */
    (xdc_Char)0x65,  /* [2761] */
    (xdc_Char)0x20,  /* [2762] */
    (xdc_Char)0x61,  /* [2763] */
    (xdc_Char)0x6e,  /* [2764] */
    (xdc_Char)0x6e,  /* [2765] */
    (xdc_Char)0x6f,  /* [2766] */
    (xdc_Char)0x74,  /* [2767] */
    (xdc_Char)0x20,  /* [2768] */
    (xdc_Char)0x62,  /* [2769] */
    (xdc_Char)0x65,  /* [2770] */
    (xdc_Char)0x20,  /* [2771] */
    (xdc_Char)0x7a,  /* [2772] */
    (xdc_Char)0x65,  /* [2773] */
    (xdc_Char)0x72,  /* [2774] */
    (xdc_Char)0x6f,  /* [2775] */
    (xdc_Char)0x0,  /* [2776] */
    (xdc_Char)0x41,  /* [2777] */
    (xdc_Char)0x5f,  /* [2778] */
    (xdc_Char)0x69,  /* [2779] */
    (xdc_Char)0x6e,  /* [2780] */
    (xdc_Char)0x76,  /* [2781] */
    (xdc_Char)0x61,  /* [2782] */
    (xdc_Char)0x6c,  /* [2783] */
    (xdc_Char)0x69,  /* [2784] */
    (xdc_Char)0x64,  /* [2785] */
    (xdc_Char)0x4b,  /* [2786] */
    (xdc_Char)0x65,  /* [2787] */
    (xdc_Char)0x79,  /* [2788] */
    (xdc_Char)0x3a,  /* [2789] */
    (xdc_Char)0x20,  /* [2790] */
    (xdc_Char)0x74,  /* [2791] */
    (xdc_Char)0x68,  /* [2792] */
    (xdc_Char)0x65,  /* [2793] */
    (xdc_Char)0x20,  /* [2794] */
    (xdc_Char)0x6b,  /* [2795] */
    (xdc_Char)0x65,  /* [2796] */
    (xdc_Char)0x79,  /* [2797] */
    (xdc_Char)0x20,  /* [2798] */
    (xdc_Char)0x6d,  /* [2799] */
    (xdc_Char)0x75,  /* [2800] */
    (xdc_Char)0x73,  /* [2801] */
    (xdc_Char)0x74,  /* [2802] */
    (xdc_Char)0x20,  /* [2803] */
    (xdc_Char)0x62,  /* [2804] */
    (xdc_Char)0x65,  /* [2805] */
    (xdc_Char)0x20,  /* [2806] */
    (xdc_Char)0x73,  /* [2807] */
    (xdc_Char)0x65,  /* [2808] */
    (xdc_Char)0x74,  /* [2809] */
    (xdc_Char)0x20,  /* [2810] */
    (xdc_Char)0x74,  /* [2811] */
    (xdc_Char)0x6f,  /* [2812] */
    (xdc_Char)0x20,  /* [2813] */
    (xdc_Char)0x61,  /* [2814] */
    (xdc_Char)0x20,  /* [2815] */
    (xdc_Char)0x6e,  /* [2816] */
    (xdc_Char)0x6f,  /* [2817] */
    (xdc_Char)0x6e,  /* [2818] */
    (xdc_Char)0x2d,  /* [2819] */
    (xdc_Char)0x64,  /* [2820] */
    (xdc_Char)0x65,  /* [2821] */
    (xdc_Char)0x66,  /* [2822] */
    (xdc_Char)0x61,  /* [2823] */
    (xdc_Char)0x75,  /* [2824] */
    (xdc_Char)0x6c,  /* [2825] */
    (xdc_Char)0x74,  /* [2826] */
    (xdc_Char)0x20,  /* [2827] */
    (xdc_Char)0x76,  /* [2828] */
    (xdc_Char)0x61,  /* [2829] */
    (xdc_Char)0x6c,  /* [2830] */
    (xdc_Char)0x75,  /* [2831] */
    (xdc_Char)0x65,  /* [2832] */
    (xdc_Char)0x0,  /* [2833] */
    (xdc_Char)0x41,  /* [2834] */
    (xdc_Char)0x5f,  /* [2835] */
    (xdc_Char)0x62,  /* [2836] */
    (xdc_Char)0x61,  /* [2837] */
    (xdc_Char)0x64,  /* [2838] */
    (xdc_Char)0x43,  /* [2839] */
    (xdc_Char)0x6f,  /* [2840] */
    (xdc_Char)0x6e,  /* [2841] */
    (xdc_Char)0x74,  /* [2842] */
    (xdc_Char)0x65,  /* [2843] */
    (xdc_Char)0x78,  /* [2844] */
    (xdc_Char)0x74,  /* [2845] */
    (xdc_Char)0x3a,  /* [2846] */
    (xdc_Char)0x20,  /* [2847] */
    (xdc_Char)0x62,  /* [2848] */
    (xdc_Char)0x61,  /* [2849] */
    (xdc_Char)0x64,  /* [2850] */
    (xdc_Char)0x20,  /* [2851] */
    (xdc_Char)0x63,  /* [2852] */
    (xdc_Char)0x61,  /* [2853] */
    (xdc_Char)0x6c,  /* [2854] */
    (xdc_Char)0x6c,  /* [2855] */
    (xdc_Char)0x69,  /* [2856] */
    (xdc_Char)0x6e,  /* [2857] */
    (xdc_Char)0x67,  /* [2858] */
    (xdc_Char)0x20,  /* [2859] */
    (xdc_Char)0x63,  /* [2860] */
    (xdc_Char)0x6f,  /* [2861] */
    (xdc_Char)0x6e,  /* [2862] */
    (xdc_Char)0x74,  /* [2863] */
    (xdc_Char)0x65,  /* [2864] */
    (xdc_Char)0x78,  /* [2865] */
    (xdc_Char)0x74,  /* [2866] */
    (xdc_Char)0x2e,  /* [2867] */
    (xdc_Char)0x20,  /* [2868] */
    (xdc_Char)0x4d,  /* [2869] */
    (xdc_Char)0x61,  /* [2870] */
    (xdc_Char)0x79,  /* [2871] */
    (xdc_Char)0x20,  /* [2872] */
    (xdc_Char)0x6e,  /* [2873] */
    (xdc_Char)0x6f,  /* [2874] */
    (xdc_Char)0x74,  /* [2875] */
    (xdc_Char)0x20,  /* [2876] */
    (xdc_Char)0x62,  /* [2877] */
    (xdc_Char)0x65,  /* [2878] */
    (xdc_Char)0x20,  /* [2879] */
    (xdc_Char)0x65,  /* [2880] */
    (xdc_Char)0x6e,  /* [2881] */
    (xdc_Char)0x74,  /* [2882] */
    (xdc_Char)0x65,  /* [2883] */
    (xdc_Char)0x72,  /* [2884] */
    (xdc_Char)0x65,  /* [2885] */
    (xdc_Char)0x64,  /* [2886] */
    (xdc_Char)0x20,  /* [2887] */
    (xdc_Char)0x66,  /* [2888] */
    (xdc_Char)0x72,  /* [2889] */
    (xdc_Char)0x6f,  /* [2890] */
    (xdc_Char)0x6d,  /* [2891] */
    (xdc_Char)0x20,  /* [2892] */
    (xdc_Char)0x61,  /* [2893] */
    (xdc_Char)0x20,  /* [2894] */
    (xdc_Char)0x68,  /* [2895] */
    (xdc_Char)0x61,  /* [2896] */
    (xdc_Char)0x72,  /* [2897] */
    (xdc_Char)0x64,  /* [2898] */
    (xdc_Char)0x77,  /* [2899] */
    (xdc_Char)0x61,  /* [2900] */
    (xdc_Char)0x72,  /* [2901] */
    (xdc_Char)0x65,  /* [2902] */
    (xdc_Char)0x20,  /* [2903] */
    (xdc_Char)0x69,  /* [2904] */
    (xdc_Char)0x6e,  /* [2905] */
    (xdc_Char)0x74,  /* [2906] */
    (xdc_Char)0x65,  /* [2907] */
    (xdc_Char)0x72,  /* [2908] */
    (xdc_Char)0x72,  /* [2909] */
    (xdc_Char)0x75,  /* [2910] */
    (xdc_Char)0x70,  /* [2911] */
    (xdc_Char)0x74,  /* [2912] */
    (xdc_Char)0x20,  /* [2913] */
    (xdc_Char)0x74,  /* [2914] */
    (xdc_Char)0x68,  /* [2915] */
    (xdc_Char)0x72,  /* [2916] */
    (xdc_Char)0x65,  /* [2917] */
    (xdc_Char)0x61,  /* [2918] */
    (xdc_Char)0x64,  /* [2919] */
    (xdc_Char)0x2e,  /* [2920] */
    (xdc_Char)0x0,  /* [2921] */
    (xdc_Char)0x41,  /* [2922] */
    (xdc_Char)0x5f,  /* [2923] */
    (xdc_Char)0x62,  /* [2924] */
    (xdc_Char)0x61,  /* [2925] */
    (xdc_Char)0x64,  /* [2926] */
    (xdc_Char)0x43,  /* [2927] */
    (xdc_Char)0x6f,  /* [2928] */
    (xdc_Char)0x6e,  /* [2929] */
    (xdc_Char)0x74,  /* [2930] */
    (xdc_Char)0x65,  /* [2931] */
    (xdc_Char)0x78,  /* [2932] */
    (xdc_Char)0x74,  /* [2933] */
    (xdc_Char)0x3a,  /* [2934] */
    (xdc_Char)0x20,  /* [2935] */
    (xdc_Char)0x62,  /* [2936] */
    (xdc_Char)0x61,  /* [2937] */
    (xdc_Char)0x64,  /* [2938] */
    (xdc_Char)0x20,  /* [2939] */
    (xdc_Char)0x63,  /* [2940] */
    (xdc_Char)0x61,  /* [2941] */
    (xdc_Char)0x6c,  /* [2942] */
    (xdc_Char)0x6c,  /* [2943] */
    (xdc_Char)0x69,  /* [2944] */
    (xdc_Char)0x6e,  /* [2945] */
    (xdc_Char)0x67,  /* [2946] */
    (xdc_Char)0x20,  /* [2947] */
    (xdc_Char)0x63,  /* [2948] */
    (xdc_Char)0x6f,  /* [2949] */
    (xdc_Char)0x6e,  /* [2950] */
    (xdc_Char)0x74,  /* [2951] */
    (xdc_Char)0x65,  /* [2952] */
    (xdc_Char)0x78,  /* [2953] */
    (xdc_Char)0x74,  /* [2954] */
    (xdc_Char)0x2e,  /* [2955] */
    (xdc_Char)0x20,  /* [2956] */
    (xdc_Char)0x4d,  /* [2957] */
    (xdc_Char)0x61,  /* [2958] */
    (xdc_Char)0x79,  /* [2959] */
    (xdc_Char)0x20,  /* [2960] */
    (xdc_Char)0x6e,  /* [2961] */
    (xdc_Char)0x6f,  /* [2962] */
    (xdc_Char)0x74,  /* [2963] */
    (xdc_Char)0x20,  /* [2964] */
    (xdc_Char)0x62,  /* [2965] */
    (xdc_Char)0x65,  /* [2966] */
    (xdc_Char)0x20,  /* [2967] */
    (xdc_Char)0x65,  /* [2968] */
    (xdc_Char)0x6e,  /* [2969] */
    (xdc_Char)0x74,  /* [2970] */
    (xdc_Char)0x65,  /* [2971] */
    (xdc_Char)0x72,  /* [2972] */
    (xdc_Char)0x65,  /* [2973] */
    (xdc_Char)0x64,  /* [2974] */
    (xdc_Char)0x20,  /* [2975] */
    (xdc_Char)0x66,  /* [2976] */
    (xdc_Char)0x72,  /* [2977] */
    (xdc_Char)0x6f,  /* [2978] */
    (xdc_Char)0x6d,  /* [2979] */
    (xdc_Char)0x20,  /* [2980] */
    (xdc_Char)0x61,  /* [2981] */
    (xdc_Char)0x20,  /* [2982] */
    (xdc_Char)0x73,  /* [2983] */
    (xdc_Char)0x6f,  /* [2984] */
    (xdc_Char)0x66,  /* [2985] */
    (xdc_Char)0x74,  /* [2986] */
    (xdc_Char)0x77,  /* [2987] */
    (xdc_Char)0x61,  /* [2988] */
    (xdc_Char)0x72,  /* [2989] */
    (xdc_Char)0x65,  /* [2990] */
    (xdc_Char)0x20,  /* [2991] */
    (xdc_Char)0x6f,  /* [2992] */
    (xdc_Char)0x72,  /* [2993] */
    (xdc_Char)0x20,  /* [2994] */
    (xdc_Char)0x68,  /* [2995] */
    (xdc_Char)0x61,  /* [2996] */
    (xdc_Char)0x72,  /* [2997] */
    (xdc_Char)0x64,  /* [2998] */
    (xdc_Char)0x77,  /* [2999] */
    (xdc_Char)0x61,  /* [3000] */
    (xdc_Char)0x72,  /* [3001] */
    (xdc_Char)0x65,  /* [3002] */
    (xdc_Char)0x20,  /* [3003] */
    (xdc_Char)0x69,  /* [3004] */
    (xdc_Char)0x6e,  /* [3005] */
    (xdc_Char)0x74,  /* [3006] */
    (xdc_Char)0x65,  /* [3007] */
    (xdc_Char)0x72,  /* [3008] */
    (xdc_Char)0x72,  /* [3009] */
    (xdc_Char)0x75,  /* [3010] */
    (xdc_Char)0x70,  /* [3011] */
    (xdc_Char)0x74,  /* [3012] */
    (xdc_Char)0x20,  /* [3013] */
    (xdc_Char)0x74,  /* [3014] */
    (xdc_Char)0x68,  /* [3015] */
    (xdc_Char)0x72,  /* [3016] */
    (xdc_Char)0x65,  /* [3017] */
    (xdc_Char)0x61,  /* [3018] */
    (xdc_Char)0x64,  /* [3019] */
    (xdc_Char)0x2e,  /* [3020] */
    (xdc_Char)0x0,  /* [3021] */
    (xdc_Char)0x41,  /* [3022] */
    (xdc_Char)0x5f,  /* [3023] */
    (xdc_Char)0x62,  /* [3024] */
    (xdc_Char)0x61,  /* [3025] */
    (xdc_Char)0x64,  /* [3026] */
    (xdc_Char)0x43,  /* [3027] */
    (xdc_Char)0x6f,  /* [3028] */
    (xdc_Char)0x6e,  /* [3029] */
    (xdc_Char)0x74,  /* [3030] */
    (xdc_Char)0x65,  /* [3031] */
    (xdc_Char)0x78,  /* [3032] */
    (xdc_Char)0x74,  /* [3033] */
    (xdc_Char)0x3a,  /* [3034] */
    (xdc_Char)0x20,  /* [3035] */
    (xdc_Char)0x62,  /* [3036] */
    (xdc_Char)0x61,  /* [3037] */
    (xdc_Char)0x64,  /* [3038] */
    (xdc_Char)0x20,  /* [3039] */
    (xdc_Char)0x63,  /* [3040] */
    (xdc_Char)0x61,  /* [3041] */
    (xdc_Char)0x6c,  /* [3042] */
    (xdc_Char)0x6c,  /* [3043] */
    (xdc_Char)0x69,  /* [3044] */
    (xdc_Char)0x6e,  /* [3045] */
    (xdc_Char)0x67,  /* [3046] */
    (xdc_Char)0x20,  /* [3047] */
    (xdc_Char)0x63,  /* [3048] */
    (xdc_Char)0x6f,  /* [3049] */
    (xdc_Char)0x6e,  /* [3050] */
    (xdc_Char)0x74,  /* [3051] */
    (xdc_Char)0x65,  /* [3052] */
    (xdc_Char)0x78,  /* [3053] */
    (xdc_Char)0x74,  /* [3054] */
    (xdc_Char)0x2e,  /* [3055] */
    (xdc_Char)0x20,  /* [3056] */
    (xdc_Char)0x53,  /* [3057] */
    (xdc_Char)0x65,  /* [3058] */
    (xdc_Char)0x65,  /* [3059] */
    (xdc_Char)0x20,  /* [3060] */
    (xdc_Char)0x47,  /* [3061] */
    (xdc_Char)0x61,  /* [3062] */
    (xdc_Char)0x74,  /* [3063] */
    (xdc_Char)0x65,  /* [3064] */
    (xdc_Char)0x4d,  /* [3065] */
    (xdc_Char)0x75,  /* [3066] */
    (xdc_Char)0x74,  /* [3067] */
    (xdc_Char)0x65,  /* [3068] */
    (xdc_Char)0x78,  /* [3069] */
    (xdc_Char)0x50,  /* [3070] */
    (xdc_Char)0x72,  /* [3071] */
    (xdc_Char)0x69,  /* [3072] */
    (xdc_Char)0x20,  /* [3073] */
    (xdc_Char)0x41,  /* [3074] */
    (xdc_Char)0x50,  /* [3075] */
    (xdc_Char)0x49,  /* [3076] */
    (xdc_Char)0x20,  /* [3077] */
    (xdc_Char)0x64,  /* [3078] */
    (xdc_Char)0x6f,  /* [3079] */
    (xdc_Char)0x63,  /* [3080] */
    (xdc_Char)0x20,  /* [3081] */
    (xdc_Char)0x66,  /* [3082] */
    (xdc_Char)0x6f,  /* [3083] */
    (xdc_Char)0x72,  /* [3084] */
    (xdc_Char)0x20,  /* [3085] */
    (xdc_Char)0x64,  /* [3086] */
    (xdc_Char)0x65,  /* [3087] */
    (xdc_Char)0x74,  /* [3088] */
    (xdc_Char)0x61,  /* [3089] */
    (xdc_Char)0x69,  /* [3090] */
    (xdc_Char)0x6c,  /* [3091] */
    (xdc_Char)0x73,  /* [3092] */
    (xdc_Char)0x2e,  /* [3093] */
    (xdc_Char)0x0,  /* [3094] */
    (xdc_Char)0x41,  /* [3095] */
    (xdc_Char)0x5f,  /* [3096] */
    (xdc_Char)0x65,  /* [3097] */
    (xdc_Char)0x6e,  /* [3098] */
    (xdc_Char)0x74,  /* [3099] */
    (xdc_Char)0x65,  /* [3100] */
    (xdc_Char)0x72,  /* [3101] */
    (xdc_Char)0x54,  /* [3102] */
    (xdc_Char)0x61,  /* [3103] */
    (xdc_Char)0x73,  /* [3104] */
    (xdc_Char)0x6b,  /* [3105] */
    (xdc_Char)0x44,  /* [3106] */
    (xdc_Char)0x69,  /* [3107] */
    (xdc_Char)0x73,  /* [3108] */
    (xdc_Char)0x61,  /* [3109] */
    (xdc_Char)0x62,  /* [3110] */
    (xdc_Char)0x6c,  /* [3111] */
    (xdc_Char)0x65,  /* [3112] */
    (xdc_Char)0x64,  /* [3113] */
    (xdc_Char)0x3a,  /* [3114] */
    (xdc_Char)0x20,  /* [3115] */
    (xdc_Char)0x43,  /* [3116] */
    (xdc_Char)0x61,  /* [3117] */
    (xdc_Char)0x6e,  /* [3118] */
    (xdc_Char)0x6e,  /* [3119] */
    (xdc_Char)0x6f,  /* [3120] */
    (xdc_Char)0x74,  /* [3121] */
    (xdc_Char)0x20,  /* [3122] */
    (xdc_Char)0x63,  /* [3123] */
    (xdc_Char)0x61,  /* [3124] */
    (xdc_Char)0x6c,  /* [3125] */
    (xdc_Char)0x6c,  /* [3126] */
    (xdc_Char)0x20,  /* [3127] */
    (xdc_Char)0x47,  /* [3128] */
    (xdc_Char)0x61,  /* [3129] */
    (xdc_Char)0x74,  /* [3130] */
    (xdc_Char)0x65,  /* [3131] */
    (xdc_Char)0x4d,  /* [3132] */
    (xdc_Char)0x75,  /* [3133] */
    (xdc_Char)0x74,  /* [3134] */
    (xdc_Char)0x65,  /* [3135] */
    (xdc_Char)0x78,  /* [3136] */
    (xdc_Char)0x50,  /* [3137] */
    (xdc_Char)0x72,  /* [3138] */
    (xdc_Char)0x69,  /* [3139] */
    (xdc_Char)0x5f,  /* [3140] */
    (xdc_Char)0x65,  /* [3141] */
    (xdc_Char)0x6e,  /* [3142] */
    (xdc_Char)0x74,  /* [3143] */
    (xdc_Char)0x65,  /* [3144] */
    (xdc_Char)0x72,  /* [3145] */
    (xdc_Char)0x28,  /* [3146] */
    (xdc_Char)0x29,  /* [3147] */
    (xdc_Char)0x20,  /* [3148] */
    (xdc_Char)0x77,  /* [3149] */
    (xdc_Char)0x68,  /* [3150] */
    (xdc_Char)0x69,  /* [3151] */
    (xdc_Char)0x6c,  /* [3152] */
    (xdc_Char)0x65,  /* [3153] */
    (xdc_Char)0x20,  /* [3154] */
    (xdc_Char)0x74,  /* [3155] */
    (xdc_Char)0x68,  /* [3156] */
    (xdc_Char)0x65,  /* [3157] */
    (xdc_Char)0x20,  /* [3158] */
    (xdc_Char)0x54,  /* [3159] */
    (xdc_Char)0x61,  /* [3160] */
    (xdc_Char)0x73,  /* [3161] */
    (xdc_Char)0x6b,  /* [3162] */
    (xdc_Char)0x20,  /* [3163] */
    (xdc_Char)0x6f,  /* [3164] */
    (xdc_Char)0x72,  /* [3165] */
    (xdc_Char)0x20,  /* [3166] */
    (xdc_Char)0x53,  /* [3167] */
    (xdc_Char)0x77,  /* [3168] */
    (xdc_Char)0x69,  /* [3169] */
    (xdc_Char)0x20,  /* [3170] */
    (xdc_Char)0x73,  /* [3171] */
    (xdc_Char)0x63,  /* [3172] */
    (xdc_Char)0x68,  /* [3173] */
    (xdc_Char)0x65,  /* [3174] */
    (xdc_Char)0x64,  /* [3175] */
    (xdc_Char)0x75,  /* [3176] */
    (xdc_Char)0x6c,  /* [3177] */
    (xdc_Char)0x65,  /* [3178] */
    (xdc_Char)0x72,  /* [3179] */
    (xdc_Char)0x20,  /* [3180] */
    (xdc_Char)0x69,  /* [3181] */
    (xdc_Char)0x73,  /* [3182] */
    (xdc_Char)0x20,  /* [3183] */
    (xdc_Char)0x64,  /* [3184] */
    (xdc_Char)0x69,  /* [3185] */
    (xdc_Char)0x73,  /* [3186] */
    (xdc_Char)0x61,  /* [3187] */
    (xdc_Char)0x62,  /* [3188] */
    (xdc_Char)0x6c,  /* [3189] */
    (xdc_Char)0x65,  /* [3190] */
    (xdc_Char)0x64,  /* [3191] */
    (xdc_Char)0x2e,  /* [3192] */
    (xdc_Char)0x0,  /* [3193] */
    (xdc_Char)0x41,  /* [3194] */
    (xdc_Char)0x5f,  /* [3195] */
    (xdc_Char)0x62,  /* [3196] */
    (xdc_Char)0x61,  /* [3197] */
    (xdc_Char)0x64,  /* [3198] */
    (xdc_Char)0x43,  /* [3199] */
    (xdc_Char)0x6f,  /* [3200] */
    (xdc_Char)0x6e,  /* [3201] */
    (xdc_Char)0x74,  /* [3202] */
    (xdc_Char)0x65,  /* [3203] */
    (xdc_Char)0x78,  /* [3204] */
    (xdc_Char)0x74,  /* [3205] */
    (xdc_Char)0x3a,  /* [3206] */
    (xdc_Char)0x20,  /* [3207] */
    (xdc_Char)0x62,  /* [3208] */
    (xdc_Char)0x61,  /* [3209] */
    (xdc_Char)0x64,  /* [3210] */
    (xdc_Char)0x20,  /* [3211] */
    (xdc_Char)0x63,  /* [3212] */
    (xdc_Char)0x61,  /* [3213] */
    (xdc_Char)0x6c,  /* [3214] */
    (xdc_Char)0x6c,  /* [3215] */
    (xdc_Char)0x69,  /* [3216] */
    (xdc_Char)0x6e,  /* [3217] */
    (xdc_Char)0x67,  /* [3218] */
    (xdc_Char)0x20,  /* [3219] */
    (xdc_Char)0x63,  /* [3220] */
    (xdc_Char)0x6f,  /* [3221] */
    (xdc_Char)0x6e,  /* [3222] */
    (xdc_Char)0x74,  /* [3223] */
    (xdc_Char)0x65,  /* [3224] */
    (xdc_Char)0x78,  /* [3225] */
    (xdc_Char)0x74,  /* [3226] */
    (xdc_Char)0x2e,  /* [3227] */
    (xdc_Char)0x20,  /* [3228] */
    (xdc_Char)0x53,  /* [3229] */
    (xdc_Char)0x65,  /* [3230] */
    (xdc_Char)0x65,  /* [3231] */
    (xdc_Char)0x20,  /* [3232] */
    (xdc_Char)0x47,  /* [3233] */
    (xdc_Char)0x61,  /* [3234] */
    (xdc_Char)0x74,  /* [3235] */
    (xdc_Char)0x65,  /* [3236] */
    (xdc_Char)0x4d,  /* [3237] */
    (xdc_Char)0x75,  /* [3238] */
    (xdc_Char)0x74,  /* [3239] */
    (xdc_Char)0x65,  /* [3240] */
    (xdc_Char)0x78,  /* [3241] */
    (xdc_Char)0x20,  /* [3242] */
    (xdc_Char)0x41,  /* [3243] */
    (xdc_Char)0x50,  /* [3244] */
    (xdc_Char)0x49,  /* [3245] */
    (xdc_Char)0x20,  /* [3246] */
    (xdc_Char)0x64,  /* [3247] */
    (xdc_Char)0x6f,  /* [3248] */
    (xdc_Char)0x63,  /* [3249] */
    (xdc_Char)0x20,  /* [3250] */
    (xdc_Char)0x66,  /* [3251] */
    (xdc_Char)0x6f,  /* [3252] */
    (xdc_Char)0x72,  /* [3253] */
    (xdc_Char)0x20,  /* [3254] */
    (xdc_Char)0x64,  /* [3255] */
    (xdc_Char)0x65,  /* [3256] */
    (xdc_Char)0x74,  /* [3257] */
    (xdc_Char)0x61,  /* [3258] */
    (xdc_Char)0x69,  /* [3259] */
    (xdc_Char)0x6c,  /* [3260] */
    (xdc_Char)0x73,  /* [3261] */
    (xdc_Char)0x2e,  /* [3262] */
    (xdc_Char)0x0,  /* [3263] */
    (xdc_Char)0x41,  /* [3264] */
    (xdc_Char)0x5f,  /* [3265] */
    (xdc_Char)0x62,  /* [3266] */
    (xdc_Char)0x61,  /* [3267] */
    (xdc_Char)0x64,  /* [3268] */
    (xdc_Char)0x43,  /* [3269] */
    (xdc_Char)0x6f,  /* [3270] */
    (xdc_Char)0x6e,  /* [3271] */
    (xdc_Char)0x74,  /* [3272] */
    (xdc_Char)0x65,  /* [3273] */
    (xdc_Char)0x78,  /* [3274] */
    (xdc_Char)0x74,  /* [3275] */
    (xdc_Char)0x3a,  /* [3276] */
    (xdc_Char)0x20,  /* [3277] */
    (xdc_Char)0x62,  /* [3278] */
    (xdc_Char)0x61,  /* [3279] */
    (xdc_Char)0x64,  /* [3280] */
    (xdc_Char)0x20,  /* [3281] */
    (xdc_Char)0x63,  /* [3282] */
    (xdc_Char)0x61,  /* [3283] */
    (xdc_Char)0x6c,  /* [3284] */
    (xdc_Char)0x6c,  /* [3285] */
    (xdc_Char)0x69,  /* [3286] */
    (xdc_Char)0x6e,  /* [3287] */
    (xdc_Char)0x67,  /* [3288] */
    (xdc_Char)0x20,  /* [3289] */
    (xdc_Char)0x63,  /* [3290] */
    (xdc_Char)0x6f,  /* [3291] */
    (xdc_Char)0x6e,  /* [3292] */
    (xdc_Char)0x74,  /* [3293] */
    (xdc_Char)0x65,  /* [3294] */
    (xdc_Char)0x78,  /* [3295] */
    (xdc_Char)0x74,  /* [3296] */
    (xdc_Char)0x2e,  /* [3297] */
    (xdc_Char)0x20,  /* [3298] */
    (xdc_Char)0x53,  /* [3299] */
    (xdc_Char)0x65,  /* [3300] */
    (xdc_Char)0x65,  /* [3301] */
    (xdc_Char)0x20,  /* [3302] */
    (xdc_Char)0x47,  /* [3303] */
    (xdc_Char)0x61,  /* [3304] */
    (xdc_Char)0x74,  /* [3305] */
    (xdc_Char)0x65,  /* [3306] */
    (xdc_Char)0x53,  /* [3307] */
    (xdc_Char)0x70,  /* [3308] */
    (xdc_Char)0x69,  /* [3309] */
    (xdc_Char)0x6e,  /* [3310] */
    (xdc_Char)0x6c,  /* [3311] */
    (xdc_Char)0x6f,  /* [3312] */
    (xdc_Char)0x63,  /* [3313] */
    (xdc_Char)0x6b,  /* [3314] */
    (xdc_Char)0x20,  /* [3315] */
    (xdc_Char)0x41,  /* [3316] */
    (xdc_Char)0x50,  /* [3317] */
    (xdc_Char)0x49,  /* [3318] */
    (xdc_Char)0x20,  /* [3319] */
    (xdc_Char)0x64,  /* [3320] */
    (xdc_Char)0x6f,  /* [3321] */
    (xdc_Char)0x63,  /* [3322] */
    (xdc_Char)0x20,  /* [3323] */
    (xdc_Char)0x66,  /* [3324] */
    (xdc_Char)0x6f,  /* [3325] */
    (xdc_Char)0x72,  /* [3326] */
    (xdc_Char)0x20,  /* [3327] */
    (xdc_Char)0x64,  /* [3328] */
    (xdc_Char)0x65,  /* [3329] */
    (xdc_Char)0x74,  /* [3330] */
    (xdc_Char)0x61,  /* [3331] */
    (xdc_Char)0x69,  /* [3332] */
    (xdc_Char)0x6c,  /* [3333] */
    (xdc_Char)0x73,  /* [3334] */
    (xdc_Char)0x2e,  /* [3335] */
    (xdc_Char)0x0,  /* [3336] */
    (xdc_Char)0x41,  /* [3337] */
    (xdc_Char)0x5f,  /* [3338] */
    (xdc_Char)0x69,  /* [3339] */
    (xdc_Char)0x6e,  /* [3340] */
    (xdc_Char)0x76,  /* [3341] */
    (xdc_Char)0x61,  /* [3342] */
    (xdc_Char)0x6c,  /* [3343] */
    (xdc_Char)0x69,  /* [3344] */
    (xdc_Char)0x64,  /* [3345] */
    (xdc_Char)0x51,  /* [3346] */
    (xdc_Char)0x75,  /* [3347] */
    (xdc_Char)0x61,  /* [3348] */
    (xdc_Char)0x6c,  /* [3349] */
    (xdc_Char)0x69,  /* [3350] */
    (xdc_Char)0x74,  /* [3351] */
    (xdc_Char)0x79,  /* [3352] */
    (xdc_Char)0x3a,  /* [3353] */
    (xdc_Char)0x20,  /* [3354] */
    (xdc_Char)0x53,  /* [3355] */
    (xdc_Char)0x65,  /* [3356] */
    (xdc_Char)0x65,  /* [3357] */
    (xdc_Char)0x20,  /* [3358] */
    (xdc_Char)0x47,  /* [3359] */
    (xdc_Char)0x61,  /* [3360] */
    (xdc_Char)0x74,  /* [3361] */
    (xdc_Char)0x65,  /* [3362] */
    (xdc_Char)0x53,  /* [3363] */
    (xdc_Char)0x70,  /* [3364] */
    (xdc_Char)0x69,  /* [3365] */
    (xdc_Char)0x6e,  /* [3366] */
    (xdc_Char)0x6c,  /* [3367] */
    (xdc_Char)0x6f,  /* [3368] */
    (xdc_Char)0x63,  /* [3369] */
    (xdc_Char)0x6b,  /* [3370] */
    (xdc_Char)0x20,  /* [3371] */
    (xdc_Char)0x41,  /* [3372] */
    (xdc_Char)0x50,  /* [3373] */
    (xdc_Char)0x49,  /* [3374] */
    (xdc_Char)0x20,  /* [3375] */
    (xdc_Char)0x64,  /* [3376] */
    (xdc_Char)0x6f,  /* [3377] */
    (xdc_Char)0x63,  /* [3378] */
    (xdc_Char)0x20,  /* [3379] */
    (xdc_Char)0x66,  /* [3380] */
    (xdc_Char)0x6f,  /* [3381] */
    (xdc_Char)0x72,  /* [3382] */
    (xdc_Char)0x20,  /* [3383] */
    (xdc_Char)0x64,  /* [3384] */
    (xdc_Char)0x65,  /* [3385] */
    (xdc_Char)0x74,  /* [3386] */
    (xdc_Char)0x61,  /* [3387] */
    (xdc_Char)0x69,  /* [3388] */
    (xdc_Char)0x6c,  /* [3389] */
    (xdc_Char)0x73,  /* [3390] */
    (xdc_Char)0x2e,  /* [3391] */
    (xdc_Char)0x0,  /* [3392] */
    (xdc_Char)0x41,  /* [3393] */
    (xdc_Char)0x5f,  /* [3394] */
    (xdc_Char)0x69,  /* [3395] */
    (xdc_Char)0x6e,  /* [3396] */
    (xdc_Char)0x76,  /* [3397] */
    (xdc_Char)0x61,  /* [3398] */
    (xdc_Char)0x6c,  /* [3399] */
    (xdc_Char)0x69,  /* [3400] */
    (xdc_Char)0x64,  /* [3401] */
    (xdc_Char)0x54,  /* [3402] */
    (xdc_Char)0x69,  /* [3403] */
    (xdc_Char)0x6d,  /* [3404] */
    (xdc_Char)0x65,  /* [3405] */
    (xdc_Char)0x72,  /* [3406] */
    (xdc_Char)0x3a,  /* [3407] */
    (xdc_Char)0x20,  /* [3408] */
    (xdc_Char)0x49,  /* [3409] */
    (xdc_Char)0x6e,  /* [3410] */
    (xdc_Char)0x76,  /* [3411] */
    (xdc_Char)0x61,  /* [3412] */
    (xdc_Char)0x6c,  /* [3413] */
    (xdc_Char)0x69,  /* [3414] */
    (xdc_Char)0x64,  /* [3415] */
    (xdc_Char)0x20,  /* [3416] */
    (xdc_Char)0x54,  /* [3417] */
    (xdc_Char)0x69,  /* [3418] */
    (xdc_Char)0x6d,  /* [3419] */
    (xdc_Char)0x65,  /* [3420] */
    (xdc_Char)0x72,  /* [3421] */
    (xdc_Char)0x20,  /* [3422] */
    (xdc_Char)0x49,  /* [3423] */
    (xdc_Char)0x64,  /* [3424] */
    (xdc_Char)0x2e,  /* [3425] */
    (xdc_Char)0x0,  /* [3426] */
    (xdc_Char)0x61,  /* [3427] */
    (xdc_Char)0x73,  /* [3428] */
    (xdc_Char)0x73,  /* [3429] */
    (xdc_Char)0x65,  /* [3430] */
    (xdc_Char)0x72,  /* [3431] */
    (xdc_Char)0x74,  /* [3432] */
    (xdc_Char)0x69,  /* [3433] */
    (xdc_Char)0x6f,  /* [3434] */
    (xdc_Char)0x6e,  /* [3435] */
    (xdc_Char)0x20,  /* [3436] */
    (xdc_Char)0x66,  /* [3437] */
    (xdc_Char)0x61,  /* [3438] */
    (xdc_Char)0x69,  /* [3439] */
    (xdc_Char)0x6c,  /* [3440] */
    (xdc_Char)0x75,  /* [3441] */
    (xdc_Char)0x72,  /* [3442] */
    (xdc_Char)0x65,  /* [3443] */
    (xdc_Char)0x25,  /* [3444] */
    (xdc_Char)0x73,  /* [3445] */
    (xdc_Char)0x25,  /* [3446] */
    (xdc_Char)0x73,  /* [3447] */
    (xdc_Char)0x0,  /* [3448] */
    (xdc_Char)0x25,  /* [3449] */
    (xdc_Char)0x24,  /* [3450] */
    (xdc_Char)0x53,  /* [3451] */
    (xdc_Char)0x0,  /* [3452] */
    (xdc_Char)0x6f,  /* [3453] */
    (xdc_Char)0x75,  /* [3454] */
    (xdc_Char)0x74,  /* [3455] */
    (xdc_Char)0x20,  /* [3456] */
    (xdc_Char)0x6f,  /* [3457] */
    (xdc_Char)0x66,  /* [3458] */
    (xdc_Char)0x20,  /* [3459] */
    (xdc_Char)0x6d,  /* [3460] */
    (xdc_Char)0x65,  /* [3461] */
    (xdc_Char)0x6d,  /* [3462] */
    (xdc_Char)0x6f,  /* [3463] */
    (xdc_Char)0x72,  /* [3464] */
    (xdc_Char)0x79,  /* [3465] */
    (xdc_Char)0x3a,  /* [3466] */
    (xdc_Char)0x20,  /* [3467] */
    (xdc_Char)0x68,  /* [3468] */
    (xdc_Char)0x65,  /* [3469] */
    (xdc_Char)0x61,  /* [3470] */
    (xdc_Char)0x70,  /* [3471] */
    (xdc_Char)0x3d,  /* [3472] */
    (xdc_Char)0x30,  /* [3473] */
    (xdc_Char)0x78,  /* [3474] */
    (xdc_Char)0x25,  /* [3475] */
    (xdc_Char)0x78,  /* [3476] */
    (xdc_Char)0x2c,  /* [3477] */
    (xdc_Char)0x20,  /* [3478] */
    (xdc_Char)0x73,  /* [3479] */
    (xdc_Char)0x69,  /* [3480] */
    (xdc_Char)0x7a,  /* [3481] */
    (xdc_Char)0x65,  /* [3482] */
    (xdc_Char)0x3d,  /* [3483] */
    (xdc_Char)0x25,  /* [3484] */
    (xdc_Char)0x75,  /* [3485] */
    (xdc_Char)0x0,  /* [3486] */
    (xdc_Char)0x25,  /* [3487] */
    (xdc_Char)0x73,  /* [3488] */
    (xdc_Char)0x20,  /* [3489] */
    (xdc_Char)0x30,  /* [3490] */
    (xdc_Char)0x78,  /* [3491] */
    (xdc_Char)0x25,  /* [3492] */
    (xdc_Char)0x78,  /* [3493] */
    (xdc_Char)0x0,  /* [3494] */
    (xdc_Char)0x45,  /* [3495] */
    (xdc_Char)0x5f,  /* [3496] */
    (xdc_Char)0x62,  /* [3497] */
    (xdc_Char)0x61,  /* [3498] */
    (xdc_Char)0x64,  /* [3499] */
    (xdc_Char)0x4c,  /* [3500] */
    (xdc_Char)0x65,  /* [3501] */
    (xdc_Char)0x76,  /* [3502] */
    (xdc_Char)0x65,  /* [3503] */
    (xdc_Char)0x6c,  /* [3504] */
    (xdc_Char)0x3a,  /* [3505] */
    (xdc_Char)0x20,  /* [3506] */
    (xdc_Char)0x42,  /* [3507] */
    (xdc_Char)0x61,  /* [3508] */
    (xdc_Char)0x64,  /* [3509] */
    (xdc_Char)0x20,  /* [3510] */
    (xdc_Char)0x66,  /* [3511] */
    (xdc_Char)0x69,  /* [3512] */
    (xdc_Char)0x6c,  /* [3513] */
    (xdc_Char)0x74,  /* [3514] */
    (xdc_Char)0x65,  /* [3515] */
    (xdc_Char)0x72,  /* [3516] */
    (xdc_Char)0x20,  /* [3517] */
    (xdc_Char)0x6c,  /* [3518] */
    (xdc_Char)0x65,  /* [3519] */
    (xdc_Char)0x76,  /* [3520] */
    (xdc_Char)0x65,  /* [3521] */
    (xdc_Char)0x6c,  /* [3522] */
    (xdc_Char)0x20,  /* [3523] */
    (xdc_Char)0x76,  /* [3524] */
    (xdc_Char)0x61,  /* [3525] */
    (xdc_Char)0x6c,  /* [3526] */
    (xdc_Char)0x75,  /* [3527] */
    (xdc_Char)0x65,  /* [3528] */
    (xdc_Char)0x3a,  /* [3529] */
    (xdc_Char)0x20,  /* [3530] */
    (xdc_Char)0x25,  /* [3531] */
    (xdc_Char)0x64,  /* [3532] */
    (xdc_Char)0x0,  /* [3533] */
    (xdc_Char)0x66,  /* [3534] */
    (xdc_Char)0x72,  /* [3535] */
    (xdc_Char)0x65,  /* [3536] */
    (xdc_Char)0x65,  /* [3537] */
    (xdc_Char)0x28,  /* [3538] */
    (xdc_Char)0x29,  /* [3539] */
    (xdc_Char)0x20,  /* [3540] */
    (xdc_Char)0x69,  /* [3541] */
    (xdc_Char)0x6e,  /* [3542] */
    (xdc_Char)0x76,  /* [3543] */
    (xdc_Char)0x61,  /* [3544] */
    (xdc_Char)0x6c,  /* [3545] */
    (xdc_Char)0x69,  /* [3546] */
    (xdc_Char)0x64,  /* [3547] */
    (xdc_Char)0x20,  /* [3548] */
    (xdc_Char)0x69,  /* [3549] */
    (xdc_Char)0x6e,  /* [3550] */
    (xdc_Char)0x20,  /* [3551] */
    (xdc_Char)0x67,  /* [3552] */
    (xdc_Char)0x72,  /* [3553] */
    (xdc_Char)0x6f,  /* [3554] */
    (xdc_Char)0x77,  /* [3555] */
    (xdc_Char)0x74,  /* [3556] */
    (xdc_Char)0x68,  /* [3557] */
    (xdc_Char)0x2d,  /* [3558] */
    (xdc_Char)0x6f,  /* [3559] */
    (xdc_Char)0x6e,  /* [3560] */
    (xdc_Char)0x6c,  /* [3561] */
    (xdc_Char)0x79,  /* [3562] */
    (xdc_Char)0x20,  /* [3563] */
    (xdc_Char)0x48,  /* [3564] */
    (xdc_Char)0x65,  /* [3565] */
    (xdc_Char)0x61,  /* [3566] */
    (xdc_Char)0x70,  /* [3567] */
    (xdc_Char)0x4d,  /* [3568] */
    (xdc_Char)0x69,  /* [3569] */
    (xdc_Char)0x6e,  /* [3570] */
    (xdc_Char)0x0,  /* [3571] */
    (xdc_Char)0x54,  /* [3572] */
    (xdc_Char)0x68,  /* [3573] */
    (xdc_Char)0x65,  /* [3574] */
    (xdc_Char)0x20,  /* [3575] */
    (xdc_Char)0x52,  /* [3576] */
    (xdc_Char)0x54,  /* [3577] */
    (xdc_Char)0x53,  /* [3578] */
    (xdc_Char)0x20,  /* [3579] */
    (xdc_Char)0x68,  /* [3580] */
    (xdc_Char)0x65,  /* [3581] */
    (xdc_Char)0x61,  /* [3582] */
    (xdc_Char)0x70,  /* [3583] */
    (xdc_Char)0x20,  /* [3584] */
    (xdc_Char)0x69,  /* [3585] */
    (xdc_Char)0x73,  /* [3586] */
    (xdc_Char)0x20,  /* [3587] */
    (xdc_Char)0x75,  /* [3588] */
    (xdc_Char)0x73,  /* [3589] */
    (xdc_Char)0x65,  /* [3590] */
    (xdc_Char)0x64,  /* [3591] */
    (xdc_Char)0x20,  /* [3592] */
    (xdc_Char)0x75,  /* [3593] */
    (xdc_Char)0x70,  /* [3594] */
    (xdc_Char)0x2e,  /* [3595] */
    (xdc_Char)0x20,  /* [3596] */
    (xdc_Char)0x45,  /* [3597] */
    (xdc_Char)0x78,  /* [3598] */
    (xdc_Char)0x61,  /* [3599] */
    (xdc_Char)0x6d,  /* [3600] */
    (xdc_Char)0x69,  /* [3601] */
    (xdc_Char)0x6e,  /* [3602] */
    (xdc_Char)0x65,  /* [3603] */
    (xdc_Char)0x20,  /* [3604] */
    (xdc_Char)0x50,  /* [3605] */
    (xdc_Char)0x72,  /* [3606] */
    (xdc_Char)0x6f,  /* [3607] */
    (xdc_Char)0x67,  /* [3608] */
    (xdc_Char)0x72,  /* [3609] */
    (xdc_Char)0x61,  /* [3610] */
    (xdc_Char)0x6d,  /* [3611] */
    (xdc_Char)0x2e,  /* [3612] */
    (xdc_Char)0x68,  /* [3613] */
    (xdc_Char)0x65,  /* [3614] */
    (xdc_Char)0x61,  /* [3615] */
    (xdc_Char)0x70,  /* [3616] */
    (xdc_Char)0x2e,  /* [3617] */
    (xdc_Char)0x0,  /* [3618] */
    (xdc_Char)0x45,  /* [3619] */
    (xdc_Char)0x5f,  /* [3620] */
    (xdc_Char)0x62,  /* [3621] */
    (xdc_Char)0x61,  /* [3622] */
    (xdc_Char)0x64,  /* [3623] */
    (xdc_Char)0x43,  /* [3624] */
    (xdc_Char)0x6f,  /* [3625] */
    (xdc_Char)0x6d,  /* [3626] */
    (xdc_Char)0x6d,  /* [3627] */
    (xdc_Char)0x61,  /* [3628] */
    (xdc_Char)0x6e,  /* [3629] */
    (xdc_Char)0x64,  /* [3630] */
    (xdc_Char)0x3a,  /* [3631] */
    (xdc_Char)0x20,  /* [3632] */
    (xdc_Char)0x52,  /* [3633] */
    (xdc_Char)0x65,  /* [3634] */
    (xdc_Char)0x63,  /* [3635] */
    (xdc_Char)0x65,  /* [3636] */
    (xdc_Char)0x69,  /* [3637] */
    (xdc_Char)0x76,  /* [3638] */
    (xdc_Char)0x65,  /* [3639] */
    (xdc_Char)0x64,  /* [3640] */
    (xdc_Char)0x20,  /* [3641] */
    (xdc_Char)0x69,  /* [3642] */
    (xdc_Char)0x6e,  /* [3643] */
    (xdc_Char)0x76,  /* [3644] */
    (xdc_Char)0x61,  /* [3645] */
    (xdc_Char)0x6c,  /* [3646] */
    (xdc_Char)0x69,  /* [3647] */
    (xdc_Char)0x64,  /* [3648] */
    (xdc_Char)0x20,  /* [3649] */
    (xdc_Char)0x63,  /* [3650] */
    (xdc_Char)0x6f,  /* [3651] */
    (xdc_Char)0x6d,  /* [3652] */
    (xdc_Char)0x6d,  /* [3653] */
    (xdc_Char)0x61,  /* [3654] */
    (xdc_Char)0x6e,  /* [3655] */
    (xdc_Char)0x64,  /* [3656] */
    (xdc_Char)0x2c,  /* [3657] */
    (xdc_Char)0x20,  /* [3658] */
    (xdc_Char)0x69,  /* [3659] */
    (xdc_Char)0x64,  /* [3660] */
    (xdc_Char)0x3a,  /* [3661] */
    (xdc_Char)0x20,  /* [3662] */
    (xdc_Char)0x25,  /* [3663] */
    (xdc_Char)0x64,  /* [3664] */
    (xdc_Char)0x2e,  /* [3665] */
    (xdc_Char)0x0,  /* [3666] */
    (xdc_Char)0x45,  /* [3667] */
    (xdc_Char)0x5f,  /* [3668] */
    (xdc_Char)0x75,  /* [3669] */
    (xdc_Char)0x6e,  /* [3670] */
    (xdc_Char)0x70,  /* [3671] */
    (xdc_Char)0x6c,  /* [3672] */
    (xdc_Char)0x75,  /* [3673] */
    (xdc_Char)0x67,  /* [3674] */
    (xdc_Char)0x67,  /* [3675] */
    (xdc_Char)0x65,  /* [3676] */
    (xdc_Char)0x64,  /* [3677] */
    (xdc_Char)0x45,  /* [3678] */
    (xdc_Char)0x76,  /* [3679] */
    (xdc_Char)0x65,  /* [3680] */
    (xdc_Char)0x6e,  /* [3681] */
    (xdc_Char)0x74,  /* [3682] */
    (xdc_Char)0x3a,  /* [3683] */
    (xdc_Char)0x20,  /* [3684] */
    (xdc_Char)0x45,  /* [3685] */
    (xdc_Char)0x76,  /* [3686] */
    (xdc_Char)0x65,  /* [3687] */
    (xdc_Char)0x6e,  /* [3688] */
    (xdc_Char)0x74,  /* [3689] */
    (xdc_Char)0x23,  /* [3690] */
    (xdc_Char)0x20,  /* [3691] */
    (xdc_Char)0x25,  /* [3692] */
    (xdc_Char)0x64,  /* [3693] */
    (xdc_Char)0x20,  /* [3694] */
    (xdc_Char)0x69,  /* [3695] */
    (xdc_Char)0x73,  /* [3696] */
    (xdc_Char)0x20,  /* [3697] */
    (xdc_Char)0x75,  /* [3698] */
    (xdc_Char)0x6e,  /* [3699] */
    (xdc_Char)0x70,  /* [3700] */
    (xdc_Char)0x6c,  /* [3701] */
    (xdc_Char)0x75,  /* [3702] */
    (xdc_Char)0x67,  /* [3703] */
    (xdc_Char)0x67,  /* [3704] */
    (xdc_Char)0x65,  /* [3705] */
    (xdc_Char)0x64,  /* [3706] */
    (xdc_Char)0x0,  /* [3707] */
    (xdc_Char)0x45,  /* [3708] */
    (xdc_Char)0x5f,  /* [3709] */
    (xdc_Char)0x65,  /* [3710] */
    (xdc_Char)0x78,  /* [3711] */
    (xdc_Char)0x63,  /* [3712] */
    (xdc_Char)0x65,  /* [3713] */
    (xdc_Char)0x70,  /* [3714] */
    (xdc_Char)0x74,  /* [3715] */
    (xdc_Char)0x69,  /* [3716] */
    (xdc_Char)0x6f,  /* [3717] */
    (xdc_Char)0x6e,  /* [3718] */
    (xdc_Char)0x4d,  /* [3719] */
    (xdc_Char)0x69,  /* [3720] */
    (xdc_Char)0x6e,  /* [3721] */
    (xdc_Char)0x3a,  /* [3722] */
    (xdc_Char)0x20,  /* [3723] */
    (xdc_Char)0x70,  /* [3724] */
    (xdc_Char)0x63,  /* [3725] */
    (xdc_Char)0x20,  /* [3726] */
    (xdc_Char)0x3d,  /* [3727] */
    (xdc_Char)0x20,  /* [3728] */
    (xdc_Char)0x30,  /* [3729] */
    (xdc_Char)0x78,  /* [3730] */
    (xdc_Char)0x25,  /* [3731] */
    (xdc_Char)0x30,  /* [3732] */
    (xdc_Char)0x38,  /* [3733] */
    (xdc_Char)0x78,  /* [3734] */
    (xdc_Char)0x2c,  /* [3735] */
    (xdc_Char)0x20,  /* [3736] */
    (xdc_Char)0x73,  /* [3737] */
    (xdc_Char)0x70,  /* [3738] */
    (xdc_Char)0x20,  /* [3739] */
    (xdc_Char)0x3d,  /* [3740] */
    (xdc_Char)0x20,  /* [3741] */
    (xdc_Char)0x30,  /* [3742] */
    (xdc_Char)0x78,  /* [3743] */
    (xdc_Char)0x25,  /* [3744] */
    (xdc_Char)0x30,  /* [3745] */
    (xdc_Char)0x38,  /* [3746] */
    (xdc_Char)0x78,  /* [3747] */
    (xdc_Char)0x2e,  /* [3748] */
    (xdc_Char)0xa,  /* [3749] */
    (xdc_Char)0x54,  /* [3750] */
    (xdc_Char)0x6f,  /* [3751] */
    (xdc_Char)0x20,  /* [3752] */
    (xdc_Char)0x73,  /* [3753] */
    (xdc_Char)0x65,  /* [3754] */
    (xdc_Char)0x65,  /* [3755] */
    (xdc_Char)0x20,  /* [3756] */
    (xdc_Char)0x6d,  /* [3757] */
    (xdc_Char)0x6f,  /* [3758] */
    (xdc_Char)0x72,  /* [3759] */
    (xdc_Char)0x65,  /* [3760] */
    (xdc_Char)0x20,  /* [3761] */
    (xdc_Char)0x65,  /* [3762] */
    (xdc_Char)0x78,  /* [3763] */
    (xdc_Char)0x63,  /* [3764] */
    (xdc_Char)0x65,  /* [3765] */
    (xdc_Char)0x70,  /* [3766] */
    (xdc_Char)0x74,  /* [3767] */
    (xdc_Char)0x69,  /* [3768] */
    (xdc_Char)0x6f,  /* [3769] */
    (xdc_Char)0x6e,  /* [3770] */
    (xdc_Char)0x20,  /* [3771] */
    (xdc_Char)0x64,  /* [3772] */
    (xdc_Char)0x65,  /* [3773] */
    (xdc_Char)0x74,  /* [3774] */
    (xdc_Char)0x61,  /* [3775] */
    (xdc_Char)0x69,  /* [3776] */
    (xdc_Char)0x6c,  /* [3777] */
    (xdc_Char)0x2c,  /* [3778] */
    (xdc_Char)0x20,  /* [3779] */
    (xdc_Char)0x75,  /* [3780] */
    (xdc_Char)0x73,  /* [3781] */
    (xdc_Char)0x65,  /* [3782] */
    (xdc_Char)0x20,  /* [3783] */
    (xdc_Char)0x52,  /* [3784] */
    (xdc_Char)0x4f,  /* [3785] */
    (xdc_Char)0x56,  /* [3786] */
    (xdc_Char)0x20,  /* [3787] */
    (xdc_Char)0x6f,  /* [3788] */
    (xdc_Char)0x72,  /* [3789] */
    (xdc_Char)0x20,  /* [3790] */
    (xdc_Char)0x73,  /* [3791] */
    (xdc_Char)0x65,  /* [3792] */
    (xdc_Char)0x74,  /* [3793] */
    (xdc_Char)0x20,  /* [3794] */
    (xdc_Char)0x27,  /* [3795] */
    (xdc_Char)0x74,  /* [3796] */
    (xdc_Char)0x69,  /* [3797] */
    (xdc_Char)0x2e,  /* [3798] */
    (xdc_Char)0x73,  /* [3799] */
    (xdc_Char)0x79,  /* [3800] */
    (xdc_Char)0x73,  /* [3801] */
    (xdc_Char)0x62,  /* [3802] */
    (xdc_Char)0x69,  /* [3803] */
    (xdc_Char)0x6f,  /* [3804] */
    (xdc_Char)0x73,  /* [3805] */
    (xdc_Char)0x2e,  /* [3806] */
    (xdc_Char)0x66,  /* [3807] */
    (xdc_Char)0x61,  /* [3808] */
    (xdc_Char)0x6d,  /* [3809] */
    (xdc_Char)0x69,  /* [3810] */
    (xdc_Char)0x6c,  /* [3811] */
    (xdc_Char)0x79,  /* [3812] */
    (xdc_Char)0x2e,  /* [3813] */
    (xdc_Char)0x63,  /* [3814] */
    (xdc_Char)0x36,  /* [3815] */
    (xdc_Char)0x34,  /* [3816] */
    (xdc_Char)0x70,  /* [3817] */
    (xdc_Char)0x2e,  /* [3818] */
    (xdc_Char)0x45,  /* [3819] */
    (xdc_Char)0x78,  /* [3820] */
    (xdc_Char)0x63,  /* [3821] */
    (xdc_Char)0x65,  /* [3822] */
    (xdc_Char)0x70,  /* [3823] */
    (xdc_Char)0x74,  /* [3824] */
    (xdc_Char)0x69,  /* [3825] */
    (xdc_Char)0x6f,  /* [3826] */
    (xdc_Char)0x6e,  /* [3827] */
    (xdc_Char)0x2e,  /* [3828] */
    (xdc_Char)0x65,  /* [3829] */
    (xdc_Char)0x6e,  /* [3830] */
    (xdc_Char)0x61,  /* [3831] */
    (xdc_Char)0x62,  /* [3832] */
    (xdc_Char)0x6c,  /* [3833] */
    (xdc_Char)0x65,  /* [3834] */
    (xdc_Char)0x50,  /* [3835] */
    (xdc_Char)0x72,  /* [3836] */
    (xdc_Char)0x69,  /* [3837] */
    (xdc_Char)0x6e,  /* [3838] */
    (xdc_Char)0x74,  /* [3839] */
    (xdc_Char)0x20,  /* [3840] */
    (xdc_Char)0x3d,  /* [3841] */
    (xdc_Char)0x20,  /* [3842] */
    (xdc_Char)0x74,  /* [3843] */
    (xdc_Char)0x72,  /* [3844] */
    (xdc_Char)0x75,  /* [3845] */
    (xdc_Char)0x65,  /* [3846] */
    (xdc_Char)0x3b,  /* [3847] */
    (xdc_Char)0x27,  /* [3848] */
    (xdc_Char)0x0,  /* [3849] */
    (xdc_Char)0x45,  /* [3850] */
    (xdc_Char)0x5f,  /* [3851] */
    (xdc_Char)0x65,  /* [3852] */
    (xdc_Char)0x78,  /* [3853] */
    (xdc_Char)0x63,  /* [3854] */
    (xdc_Char)0x65,  /* [3855] */
    (xdc_Char)0x70,  /* [3856] */
    (xdc_Char)0x74,  /* [3857] */
    (xdc_Char)0x69,  /* [3858] */
    (xdc_Char)0x6f,  /* [3859] */
    (xdc_Char)0x6e,  /* [3860] */
    (xdc_Char)0x4d,  /* [3861] */
    (xdc_Char)0x61,  /* [3862] */
    (xdc_Char)0x78,  /* [3863] */
    (xdc_Char)0x3a,  /* [3864] */
    (xdc_Char)0x20,  /* [3865] */
    (xdc_Char)0x70,  /* [3866] */
    (xdc_Char)0x63,  /* [3867] */
    (xdc_Char)0x20,  /* [3868] */
    (xdc_Char)0x3d,  /* [3869] */
    (xdc_Char)0x20,  /* [3870] */
    (xdc_Char)0x30,  /* [3871] */
    (xdc_Char)0x78,  /* [3872] */
    (xdc_Char)0x25,  /* [3873] */
    (xdc_Char)0x30,  /* [3874] */
    (xdc_Char)0x38,  /* [3875] */
    (xdc_Char)0x78,  /* [3876] */
    (xdc_Char)0x2c,  /* [3877] */
    (xdc_Char)0x20,  /* [3878] */
    (xdc_Char)0x73,  /* [3879] */
    (xdc_Char)0x70,  /* [3880] */
    (xdc_Char)0x20,  /* [3881] */
    (xdc_Char)0x3d,  /* [3882] */
    (xdc_Char)0x20,  /* [3883] */
    (xdc_Char)0x30,  /* [3884] */
    (xdc_Char)0x78,  /* [3885] */
    (xdc_Char)0x25,  /* [3886] */
    (xdc_Char)0x30,  /* [3887] */
    (xdc_Char)0x38,  /* [3888] */
    (xdc_Char)0x78,  /* [3889] */
    (xdc_Char)0x2e,  /* [3890] */
    (xdc_Char)0x0,  /* [3891] */
    (xdc_Char)0x45,  /* [3892] */
    (xdc_Char)0x5f,  /* [3893] */
    (xdc_Char)0x61,  /* [3894] */
    (xdc_Char)0x6c,  /* [3895] */
    (xdc_Char)0x72,  /* [3896] */
    (xdc_Char)0x65,  /* [3897] */
    (xdc_Char)0x61,  /* [3898] */
    (xdc_Char)0x64,  /* [3899] */
    (xdc_Char)0x79,  /* [3900] */
    (xdc_Char)0x44,  /* [3901] */
    (xdc_Char)0x65,  /* [3902] */
    (xdc_Char)0x66,  /* [3903] */
    (xdc_Char)0x69,  /* [3904] */
    (xdc_Char)0x6e,  /* [3905] */
    (xdc_Char)0x65,  /* [3906] */
    (xdc_Char)0x64,  /* [3907] */
    (xdc_Char)0x3a,  /* [3908] */
    (xdc_Char)0x20,  /* [3909] */
    (xdc_Char)0x48,  /* [3910] */
    (xdc_Char)0x77,  /* [3911] */
    (xdc_Char)0x69,  /* [3912] */
    (xdc_Char)0x20,  /* [3913] */
    (xdc_Char)0x61,  /* [3914] */
    (xdc_Char)0x6c,  /* [3915] */
    (xdc_Char)0x72,  /* [3916] */
    (xdc_Char)0x65,  /* [3917] */
    (xdc_Char)0x61,  /* [3918] */
    (xdc_Char)0x64,  /* [3919] */
    (xdc_Char)0x79,  /* [3920] */
    (xdc_Char)0x20,  /* [3921] */
    (xdc_Char)0x64,  /* [3922] */
    (xdc_Char)0x65,  /* [3923] */
    (xdc_Char)0x66,  /* [3924] */
    (xdc_Char)0x69,  /* [3925] */
    (xdc_Char)0x6e,  /* [3926] */
    (xdc_Char)0x65,  /* [3927] */
    (xdc_Char)0x64,  /* [3928] */
    (xdc_Char)0x3a,  /* [3929] */
    (xdc_Char)0x20,  /* [3930] */
    (xdc_Char)0x69,  /* [3931] */
    (xdc_Char)0x6e,  /* [3932] */
    (xdc_Char)0x74,  /* [3933] */
    (xdc_Char)0x72,  /* [3934] */
    (xdc_Char)0x23,  /* [3935] */
    (xdc_Char)0x20,  /* [3936] */
    (xdc_Char)0x25,  /* [3937] */
    (xdc_Char)0x64,  /* [3938] */
    (xdc_Char)0x0,  /* [3939] */
    (xdc_Char)0x45,  /* [3940] */
    (xdc_Char)0x5f,  /* [3941] */
    (xdc_Char)0x68,  /* [3942] */
    (xdc_Char)0x61,  /* [3943] */
    (xdc_Char)0x6e,  /* [3944] */
    (xdc_Char)0x64,  /* [3945] */
    (xdc_Char)0x6c,  /* [3946] */
    (xdc_Char)0x65,  /* [3947] */
    (xdc_Char)0x4e,  /* [3948] */
    (xdc_Char)0x6f,  /* [3949] */
    (xdc_Char)0x74,  /* [3950] */
    (xdc_Char)0x46,  /* [3951] */
    (xdc_Char)0x6f,  /* [3952] */
    (xdc_Char)0x75,  /* [3953] */
    (xdc_Char)0x6e,  /* [3954] */
    (xdc_Char)0x64,  /* [3955] */
    (xdc_Char)0x3a,  /* [3956] */
    (xdc_Char)0x20,  /* [3957] */
    (xdc_Char)0x48,  /* [3958] */
    (xdc_Char)0x77,  /* [3959] */
    (xdc_Char)0x69,  /* [3960] */
    (xdc_Char)0x20,  /* [3961] */
    (xdc_Char)0x68,  /* [3962] */
    (xdc_Char)0x61,  /* [3963] */
    (xdc_Char)0x6e,  /* [3964] */
    (xdc_Char)0x64,  /* [3965] */
    (xdc_Char)0x6c,  /* [3966] */
    (xdc_Char)0x65,  /* [3967] */
    (xdc_Char)0x20,  /* [3968] */
    (xdc_Char)0x6e,  /* [3969] */
    (xdc_Char)0x6f,  /* [3970] */
    (xdc_Char)0x74,  /* [3971] */
    (xdc_Char)0x20,  /* [3972] */
    (xdc_Char)0x66,  /* [3973] */
    (xdc_Char)0x6f,  /* [3974] */
    (xdc_Char)0x75,  /* [3975] */
    (xdc_Char)0x6e,  /* [3976] */
    (xdc_Char)0x64,  /* [3977] */
    (xdc_Char)0x3a,  /* [3978] */
    (xdc_Char)0x20,  /* [3979] */
    (xdc_Char)0x30,  /* [3980] */
    (xdc_Char)0x78,  /* [3981] */
    (xdc_Char)0x25,  /* [3982] */
    (xdc_Char)0x78,  /* [3983] */
    (xdc_Char)0x0,  /* [3984] */
    (xdc_Char)0x45,  /* [3985] */
    (xdc_Char)0x5f,  /* [3986] */
    (xdc_Char)0x61,  /* [3987] */
    (xdc_Char)0x6c,  /* [3988] */
    (xdc_Char)0x6c,  /* [3989] */
    (xdc_Char)0x6f,  /* [3990] */
    (xdc_Char)0x63,  /* [3991] */
    (xdc_Char)0x53,  /* [3992] */
    (xdc_Char)0x43,  /* [3993] */
    (xdc_Char)0x46,  /* [3994] */
    (xdc_Char)0x61,  /* [3995] */
    (xdc_Char)0x69,  /* [3996] */
    (xdc_Char)0x6c,  /* [3997] */
    (xdc_Char)0x65,  /* [3998] */
    (xdc_Char)0x64,  /* [3999] */
    (xdc_Char)0x3a,  /* [4000] */
    (xdc_Char)0x20,  /* [4001] */
    (xdc_Char)0x41,  /* [4002] */
    (xdc_Char)0x6c,  /* [4003] */
    (xdc_Char)0x6c,  /* [4004] */
    (xdc_Char)0x6f,  /* [4005] */
    (xdc_Char)0x63,  /* [4006] */
    (xdc_Char)0x20,  /* [4007] */
    (xdc_Char)0x73,  /* [4008] */
    (xdc_Char)0x65,  /* [4009] */
    (xdc_Char)0x63,  /* [4010] */
    (xdc_Char)0x75,  /* [4011] */
    (xdc_Char)0x72,  /* [4012] */
    (xdc_Char)0x65,  /* [4013] */
    (xdc_Char)0x20,  /* [4014] */
    (xdc_Char)0x63,  /* [4015] */
    (xdc_Char)0x6f,  /* [4016] */
    (xdc_Char)0x6e,  /* [4017] */
    (xdc_Char)0x74,  /* [4018] */
    (xdc_Char)0x65,  /* [4019] */
    (xdc_Char)0x78,  /* [4020] */
    (xdc_Char)0x74,  /* [4021] */
    (xdc_Char)0x20,  /* [4022] */
    (xdc_Char)0x66,  /* [4023] */
    (xdc_Char)0x61,  /* [4024] */
    (xdc_Char)0x69,  /* [4025] */
    (xdc_Char)0x6c,  /* [4026] */
    (xdc_Char)0x65,  /* [4027] */
    (xdc_Char)0x64,  /* [4028] */
    (xdc_Char)0x0,  /* [4029] */
    (xdc_Char)0x45,  /* [4030] */
    (xdc_Char)0x5f,  /* [4031] */
    (xdc_Char)0x72,  /* [4032] */
    (xdc_Char)0x65,  /* [4033] */
    (xdc_Char)0x67,  /* [4034] */
    (xdc_Char)0x69,  /* [4035] */
    (xdc_Char)0x73,  /* [4036] */
    (xdc_Char)0x74,  /* [4037] */
    (xdc_Char)0x65,  /* [4038] */
    (xdc_Char)0x72,  /* [4039] */
    (xdc_Char)0x53,  /* [4040] */
    (xdc_Char)0x43,  /* [4041] */
    (xdc_Char)0x46,  /* [4042] */
    (xdc_Char)0x61,  /* [4043] */
    (xdc_Char)0x69,  /* [4044] */
    (xdc_Char)0x6c,  /* [4045] */
    (xdc_Char)0x65,  /* [4046] */
    (xdc_Char)0x64,  /* [4047] */
    (xdc_Char)0x3a,  /* [4048] */
    (xdc_Char)0x20,  /* [4049] */
    (xdc_Char)0x52,  /* [4050] */
    (xdc_Char)0x65,  /* [4051] */
    (xdc_Char)0x67,  /* [4052] */
    (xdc_Char)0x69,  /* [4053] */
    (xdc_Char)0x73,  /* [4054] */
    (xdc_Char)0x74,  /* [4055] */
    (xdc_Char)0x65,  /* [4056] */
    (xdc_Char)0x72,  /* [4057] */
    (xdc_Char)0x20,  /* [4058] */
    (xdc_Char)0x73,  /* [4059] */
    (xdc_Char)0x65,  /* [4060] */
    (xdc_Char)0x63,  /* [4061] */
    (xdc_Char)0x75,  /* [4062] */
    (xdc_Char)0x72,  /* [4063] */
    (xdc_Char)0x65,  /* [4064] */
    (xdc_Char)0x20,  /* [4065] */
    (xdc_Char)0x63,  /* [4066] */
    (xdc_Char)0x6f,  /* [4067] */
    (xdc_Char)0x6e,  /* [4068] */
    (xdc_Char)0x74,  /* [4069] */
    (xdc_Char)0x65,  /* [4070] */
    (xdc_Char)0x78,  /* [4071] */
    (xdc_Char)0x74,  /* [4072] */
    (xdc_Char)0x20,  /* [4073] */
    (xdc_Char)0x66,  /* [4074] */
    (xdc_Char)0x61,  /* [4075] */
    (xdc_Char)0x69,  /* [4076] */
    (xdc_Char)0x6c,  /* [4077] */
    (xdc_Char)0x65,  /* [4078] */
    (xdc_Char)0x64,  /* [4079] */
    (xdc_Char)0x0,  /* [4080] */
    (xdc_Char)0x45,  /* [4081] */
    (xdc_Char)0x5f,  /* [4082] */
    (xdc_Char)0x69,  /* [4083] */
    (xdc_Char)0x6e,  /* [4084] */
    (xdc_Char)0x76,  /* [4085] */
    (xdc_Char)0x61,  /* [4086] */
    (xdc_Char)0x6c,  /* [4087] */
    (xdc_Char)0x69,  /* [4088] */
    (xdc_Char)0x64,  /* [4089] */
    (xdc_Char)0x49,  /* [4090] */
    (xdc_Char)0x6e,  /* [4091] */
    (xdc_Char)0x74,  /* [4092] */
    (xdc_Char)0x4e,  /* [4093] */
    (xdc_Char)0x75,  /* [4094] */
    (xdc_Char)0x6d,  /* [4095] */
    (xdc_Char)0x3a,  /* [4096] */
    (xdc_Char)0x20,  /* [4097] */
    (xdc_Char)0x49,  /* [4098] */
    (xdc_Char)0x6e,  /* [4099] */
    (xdc_Char)0x76,  /* [4100] */
    (xdc_Char)0x61,  /* [4101] */
    (xdc_Char)0x6c,  /* [4102] */
    (xdc_Char)0x69,  /* [4103] */
    (xdc_Char)0x64,  /* [4104] */
    (xdc_Char)0x20,  /* [4105] */
    (xdc_Char)0x69,  /* [4106] */
    (xdc_Char)0x6e,  /* [4107] */
    (xdc_Char)0x74,  /* [4108] */
    (xdc_Char)0x65,  /* [4109] */
    (xdc_Char)0x72,  /* [4110] */
    (xdc_Char)0x72,  /* [4111] */
    (xdc_Char)0x75,  /* [4112] */
    (xdc_Char)0x70,  /* [4113] */
    (xdc_Char)0x74,  /* [4114] */
    (xdc_Char)0x20,  /* [4115] */
    (xdc_Char)0x6e,  /* [4116] */
    (xdc_Char)0x75,  /* [4117] */
    (xdc_Char)0x6d,  /* [4118] */
    (xdc_Char)0x62,  /* [4119] */
    (xdc_Char)0x65,  /* [4120] */
    (xdc_Char)0x72,  /* [4121] */
    (xdc_Char)0x3a,  /* [4122] */
    (xdc_Char)0x20,  /* [4123] */
    (xdc_Char)0x69,  /* [4124] */
    (xdc_Char)0x6e,  /* [4125] */
    (xdc_Char)0x74,  /* [4126] */
    (xdc_Char)0x72,  /* [4127] */
    (xdc_Char)0x23,  /* [4128] */
    (xdc_Char)0x20,  /* [4129] */
    (xdc_Char)0x25,  /* [4130] */
    (xdc_Char)0x64,  /* [4131] */
    (xdc_Char)0x0,  /* [4132] */
    (xdc_Char)0x45,  /* [4133] */
    (xdc_Char)0x5f,  /* [4134] */
    (xdc_Char)0x69,  /* [4135] */
    (xdc_Char)0x6e,  /* [4136] */
    (xdc_Char)0x76,  /* [4137] */
    (xdc_Char)0x61,  /* [4138] */
    (xdc_Char)0x6c,  /* [4139] */
    (xdc_Char)0x69,  /* [4140] */
    (xdc_Char)0x64,  /* [4141] */
    (xdc_Char)0x4c,  /* [4142] */
    (xdc_Char)0x31,  /* [4143] */
    (xdc_Char)0x43,  /* [4144] */
    (xdc_Char)0x61,  /* [4145] */
    (xdc_Char)0x63,  /* [4146] */
    (xdc_Char)0x68,  /* [4147] */
    (xdc_Char)0x65,  /* [4148] */
    (xdc_Char)0x53,  /* [4149] */
    (xdc_Char)0x69,  /* [4150] */
    (xdc_Char)0x7a,  /* [4151] */
    (xdc_Char)0x65,  /* [4152] */
    (xdc_Char)0x3a,  /* [4153] */
    (xdc_Char)0x20,  /* [4154] */
    (xdc_Char)0x49,  /* [4155] */
    (xdc_Char)0x6e,  /* [4156] */
    (xdc_Char)0x76,  /* [4157] */
    (xdc_Char)0x61,  /* [4158] */
    (xdc_Char)0x6c,  /* [4159] */
    (xdc_Char)0x69,  /* [4160] */
    (xdc_Char)0x64,  /* [4161] */
    (xdc_Char)0x20,  /* [4162] */
    (xdc_Char)0x4c,  /* [4163] */
    (xdc_Char)0x31,  /* [4164] */
    (xdc_Char)0x20,  /* [4165] */
    (xdc_Char)0x63,  /* [4166] */
    (xdc_Char)0x61,  /* [4167] */
    (xdc_Char)0x63,  /* [4168] */
    (xdc_Char)0x68,  /* [4169] */
    (xdc_Char)0x65,  /* [4170] */
    (xdc_Char)0x20,  /* [4171] */
    (xdc_Char)0x73,  /* [4172] */
    (xdc_Char)0x69,  /* [4173] */
    (xdc_Char)0x7a,  /* [4174] */
    (xdc_Char)0x65,  /* [4175] */
    (xdc_Char)0x20,  /* [4176] */
    (xdc_Char)0x25,  /* [4177] */
    (xdc_Char)0x64,  /* [4178] */
    (xdc_Char)0x0,  /* [4179] */
    (xdc_Char)0x45,  /* [4180] */
    (xdc_Char)0x5f,  /* [4181] */
    (xdc_Char)0x69,  /* [4182] */
    (xdc_Char)0x6e,  /* [4183] */
    (xdc_Char)0x76,  /* [4184] */
    (xdc_Char)0x61,  /* [4185] */
    (xdc_Char)0x6c,  /* [4186] */
    (xdc_Char)0x69,  /* [4187] */
    (xdc_Char)0x64,  /* [4188] */
    (xdc_Char)0x4c,  /* [4189] */
    (xdc_Char)0x32,  /* [4190] */
    (xdc_Char)0x43,  /* [4191] */
    (xdc_Char)0x61,  /* [4192] */
    (xdc_Char)0x63,  /* [4193] */
    (xdc_Char)0x68,  /* [4194] */
    (xdc_Char)0x65,  /* [4195] */
    (xdc_Char)0x53,  /* [4196] */
    (xdc_Char)0x69,  /* [4197] */
    (xdc_Char)0x7a,  /* [4198] */
    (xdc_Char)0x65,  /* [4199] */
    (xdc_Char)0x3a,  /* [4200] */
    (xdc_Char)0x20,  /* [4201] */
    (xdc_Char)0x49,  /* [4202] */
    (xdc_Char)0x6e,  /* [4203] */
    (xdc_Char)0x76,  /* [4204] */
    (xdc_Char)0x61,  /* [4205] */
    (xdc_Char)0x6c,  /* [4206] */
    (xdc_Char)0x69,  /* [4207] */
    (xdc_Char)0x64,  /* [4208] */
    (xdc_Char)0x20,  /* [4209] */
    (xdc_Char)0x4c,  /* [4210] */
    (xdc_Char)0x32,  /* [4211] */
    (xdc_Char)0x20,  /* [4212] */
    (xdc_Char)0x63,  /* [4213] */
    (xdc_Char)0x61,  /* [4214] */
    (xdc_Char)0x63,  /* [4215] */
    (xdc_Char)0x68,  /* [4216] */
    (xdc_Char)0x65,  /* [4217] */
    (xdc_Char)0x20,  /* [4218] */
    (xdc_Char)0x73,  /* [4219] */
    (xdc_Char)0x69,  /* [4220] */
    (xdc_Char)0x7a,  /* [4221] */
    (xdc_Char)0x65,  /* [4222] */
    (xdc_Char)0x20,  /* [4223] */
    (xdc_Char)0x25,  /* [4224] */
    (xdc_Char)0x64,  /* [4225] */
    (xdc_Char)0x0,  /* [4226] */
    (xdc_Char)0x45,  /* [4227] */
    (xdc_Char)0x5f,  /* [4228] */
    (xdc_Char)0x6f,  /* [4229] */
    (xdc_Char)0x62,  /* [4230] */
    (xdc_Char)0x6a,  /* [4231] */
    (xdc_Char)0x65,  /* [4232] */
    (xdc_Char)0x63,  /* [4233] */
    (xdc_Char)0x74,  /* [4234] */
    (xdc_Char)0x4e,  /* [4235] */
    (xdc_Char)0x6f,  /* [4236] */
    (xdc_Char)0x74,  /* [4237] */
    (xdc_Char)0x49,  /* [4238] */
    (xdc_Char)0x6e,  /* [4239] */
    (xdc_Char)0x4b,  /* [4240] */
    (xdc_Char)0x65,  /* [4241] */
    (xdc_Char)0x72,  /* [4242] */
    (xdc_Char)0x6e,  /* [4243] */
    (xdc_Char)0x65,  /* [4244] */
    (xdc_Char)0x6c,  /* [4245] */
    (xdc_Char)0x53,  /* [4246] */
    (xdc_Char)0x70,  /* [4247] */
    (xdc_Char)0x61,  /* [4248] */
    (xdc_Char)0x63,  /* [4249] */
    (xdc_Char)0x65,  /* [4250] */
    (xdc_Char)0x3a,  /* [4251] */
    (xdc_Char)0x20,  /* [4252] */
    (xdc_Char)0x53,  /* [4253] */
    (xdc_Char)0x65,  /* [4254] */
    (xdc_Char)0x6d,  /* [4255] */
    (xdc_Char)0x61,  /* [4256] */
    (xdc_Char)0x70,  /* [4257] */
    (xdc_Char)0x68,  /* [4258] */
    (xdc_Char)0x6f,  /* [4259] */
    (xdc_Char)0x72,  /* [4260] */
    (xdc_Char)0x65,  /* [4261] */
    (xdc_Char)0x20,  /* [4262] */
    (xdc_Char)0x6f,  /* [4263] */
    (xdc_Char)0x62,  /* [4264] */
    (xdc_Char)0x6a,  /* [4265] */
    (xdc_Char)0x65,  /* [4266] */
    (xdc_Char)0x63,  /* [4267] */
    (xdc_Char)0x74,  /* [4268] */
    (xdc_Char)0x20,  /* [4269] */
    (xdc_Char)0x70,  /* [4270] */
    (xdc_Char)0x61,  /* [4271] */
    (xdc_Char)0x73,  /* [4272] */
    (xdc_Char)0x73,  /* [4273] */
    (xdc_Char)0x65,  /* [4274] */
    (xdc_Char)0x64,  /* [4275] */
    (xdc_Char)0x20,  /* [4276] */
    (xdc_Char)0x6e,  /* [4277] */
    (xdc_Char)0x6f,  /* [4278] */
    (xdc_Char)0x74,  /* [4279] */
    (xdc_Char)0x20,  /* [4280] */
    (xdc_Char)0x69,  /* [4281] */
    (xdc_Char)0x6e,  /* [4282] */
    (xdc_Char)0x20,  /* [4283] */
    (xdc_Char)0x4b,  /* [4284] */
    (xdc_Char)0x65,  /* [4285] */
    (xdc_Char)0x72,  /* [4286] */
    (xdc_Char)0x6e,  /* [4287] */
    (xdc_Char)0x65,  /* [4288] */
    (xdc_Char)0x6c,  /* [4289] */
    (xdc_Char)0x20,  /* [4290] */
    (xdc_Char)0x61,  /* [4291] */
    (xdc_Char)0x64,  /* [4292] */
    (xdc_Char)0x64,  /* [4293] */
    (xdc_Char)0x72,  /* [4294] */
    (xdc_Char)0x65,  /* [4295] */
    (xdc_Char)0x73,  /* [4296] */
    (xdc_Char)0x73,  /* [4297] */
    (xdc_Char)0x20,  /* [4298] */
    (xdc_Char)0x73,  /* [4299] */
    (xdc_Char)0x70,  /* [4300] */
    (xdc_Char)0x61,  /* [4301] */
    (xdc_Char)0x63,  /* [4302] */
    (xdc_Char)0x65,  /* [4303] */
    (xdc_Char)0x2e,  /* [4304] */
    (xdc_Char)0x0,  /* [4305] */
    (xdc_Char)0x45,  /* [4306] */
    (xdc_Char)0x5f,  /* [4307] */
    (xdc_Char)0x73,  /* [4308] */
    (xdc_Char)0x74,  /* [4309] */
    (xdc_Char)0x61,  /* [4310] */
    (xdc_Char)0x63,  /* [4311] */
    (xdc_Char)0x6b,  /* [4312] */
    (xdc_Char)0x4f,  /* [4313] */
    (xdc_Char)0x76,  /* [4314] */
    (xdc_Char)0x65,  /* [4315] */
    (xdc_Char)0x72,  /* [4316] */
    (xdc_Char)0x66,  /* [4317] */
    (xdc_Char)0x6c,  /* [4318] */
    (xdc_Char)0x6f,  /* [4319] */
    (xdc_Char)0x77,  /* [4320] */
    (xdc_Char)0x3a,  /* [4321] */
    (xdc_Char)0x20,  /* [4322] */
    (xdc_Char)0x54,  /* [4323] */
    (xdc_Char)0x61,  /* [4324] */
    (xdc_Char)0x73,  /* [4325] */
    (xdc_Char)0x6b,  /* [4326] */
    (xdc_Char)0x20,  /* [4327] */
    (xdc_Char)0x30,  /* [4328] */
    (xdc_Char)0x78,  /* [4329] */
    (xdc_Char)0x25,  /* [4330] */
    (xdc_Char)0x78,  /* [4331] */
    (xdc_Char)0x20,  /* [4332] */
    (xdc_Char)0x73,  /* [4333] */
    (xdc_Char)0x74,  /* [4334] */
    (xdc_Char)0x61,  /* [4335] */
    (xdc_Char)0x63,  /* [4336] */
    (xdc_Char)0x6b,  /* [4337] */
    (xdc_Char)0x20,  /* [4338] */
    (xdc_Char)0x6f,  /* [4339] */
    (xdc_Char)0x76,  /* [4340] */
    (xdc_Char)0x65,  /* [4341] */
    (xdc_Char)0x72,  /* [4342] */
    (xdc_Char)0x66,  /* [4343] */
    (xdc_Char)0x6c,  /* [4344] */
    (xdc_Char)0x6f,  /* [4345] */
    (xdc_Char)0x77,  /* [4346] */
    (xdc_Char)0x2e,  /* [4347] */
    (xdc_Char)0x0,  /* [4348] */
    (xdc_Char)0x45,  /* [4349] */
    (xdc_Char)0x5f,  /* [4350] */
    (xdc_Char)0x73,  /* [4351] */
    (xdc_Char)0x70,  /* [4352] */
    (xdc_Char)0x4f,  /* [4353] */
    (xdc_Char)0x75,  /* [4354] */
    (xdc_Char)0x74,  /* [4355] */
    (xdc_Char)0x4f,  /* [4356] */
    (xdc_Char)0x66,  /* [4357] */
    (xdc_Char)0x42,  /* [4358] */
    (xdc_Char)0x6f,  /* [4359] */
    (xdc_Char)0x75,  /* [4360] */
    (xdc_Char)0x6e,  /* [4361] */
    (xdc_Char)0x64,  /* [4362] */
    (xdc_Char)0x73,  /* [4363] */
    (xdc_Char)0x3a,  /* [4364] */
    (xdc_Char)0x20,  /* [4365] */
    (xdc_Char)0x54,  /* [4366] */
    (xdc_Char)0x61,  /* [4367] */
    (xdc_Char)0x73,  /* [4368] */
    (xdc_Char)0x6b,  /* [4369] */
    (xdc_Char)0x20,  /* [4370] */
    (xdc_Char)0x30,  /* [4371] */
    (xdc_Char)0x78,  /* [4372] */
    (xdc_Char)0x25,  /* [4373] */
    (xdc_Char)0x78,  /* [4374] */
    (xdc_Char)0x20,  /* [4375] */
    (xdc_Char)0x73,  /* [4376] */
    (xdc_Char)0x74,  /* [4377] */
    (xdc_Char)0x61,  /* [4378] */
    (xdc_Char)0x63,  /* [4379] */
    (xdc_Char)0x6b,  /* [4380] */
    (xdc_Char)0x20,  /* [4381] */
    (xdc_Char)0x65,  /* [4382] */
    (xdc_Char)0x72,  /* [4383] */
    (xdc_Char)0x72,  /* [4384] */
    (xdc_Char)0x6f,  /* [4385] */
    (xdc_Char)0x72,  /* [4386] */
    (xdc_Char)0x2c,  /* [4387] */
    (xdc_Char)0x20,  /* [4388] */
    (xdc_Char)0x53,  /* [4389] */
    (xdc_Char)0x50,  /* [4390] */
    (xdc_Char)0x20,  /* [4391] */
    (xdc_Char)0x3d,  /* [4392] */
    (xdc_Char)0x20,  /* [4393] */
    (xdc_Char)0x30,  /* [4394] */
    (xdc_Char)0x78,  /* [4395] */
    (xdc_Char)0x25,  /* [4396] */
    (xdc_Char)0x78,  /* [4397] */
    (xdc_Char)0x2e,  /* [4398] */
    (xdc_Char)0x0,  /* [4399] */
    (xdc_Char)0x45,  /* [4400] */
    (xdc_Char)0x5f,  /* [4401] */
    (xdc_Char)0x64,  /* [4402] */
    (xdc_Char)0x65,  /* [4403] */
    (xdc_Char)0x6c,  /* [4404] */
    (xdc_Char)0x65,  /* [4405] */
    (xdc_Char)0x74,  /* [4406] */
    (xdc_Char)0x65,  /* [4407] */
    (xdc_Char)0x4e,  /* [4408] */
    (xdc_Char)0x6f,  /* [4409] */
    (xdc_Char)0x74,  /* [4410] */
    (xdc_Char)0x41,  /* [4411] */
    (xdc_Char)0x6c,  /* [4412] */
    (xdc_Char)0x6c,  /* [4413] */
    (xdc_Char)0x6f,  /* [4414] */
    (xdc_Char)0x77,  /* [4415] */
    (xdc_Char)0x65,  /* [4416] */
    (xdc_Char)0x64,  /* [4417] */
    (xdc_Char)0x3a,  /* [4418] */
    (xdc_Char)0x20,  /* [4419] */
    (xdc_Char)0x54,  /* [4420] */
    (xdc_Char)0x61,  /* [4421] */
    (xdc_Char)0x73,  /* [4422] */
    (xdc_Char)0x6b,  /* [4423] */
    (xdc_Char)0x20,  /* [4424] */
    (xdc_Char)0x30,  /* [4425] */
    (xdc_Char)0x78,  /* [4426] */
    (xdc_Char)0x25,  /* [4427] */
    (xdc_Char)0x78,  /* [4428] */
    (xdc_Char)0x2e,  /* [4429] */
    (xdc_Char)0x0,  /* [4430] */
    (xdc_Char)0x45,  /* [4431] */
    (xdc_Char)0x5f,  /* [4432] */
    (xdc_Char)0x6d,  /* [4433] */
    (xdc_Char)0x6f,  /* [4434] */
    (xdc_Char)0x64,  /* [4435] */
    (xdc_Char)0x75,  /* [4436] */
    (xdc_Char)0x6c,  /* [4437] */
    (xdc_Char)0x65,  /* [4438] */
    (xdc_Char)0x53,  /* [4439] */
    (xdc_Char)0x74,  /* [4440] */
    (xdc_Char)0x61,  /* [4441] */
    (xdc_Char)0x74,  /* [4442] */
    (xdc_Char)0x65,  /* [4443] */
    (xdc_Char)0x43,  /* [4444] */
    (xdc_Char)0x68,  /* [4445] */
    (xdc_Char)0x65,  /* [4446] */
    (xdc_Char)0x63,  /* [4447] */
    (xdc_Char)0x6b,  /* [4448] */
    (xdc_Char)0x46,  /* [4449] */
    (xdc_Char)0x61,  /* [4450] */
    (xdc_Char)0x69,  /* [4451] */
    (xdc_Char)0x6c,  /* [4452] */
    (xdc_Char)0x65,  /* [4453] */
    (xdc_Char)0x64,  /* [4454] */
    (xdc_Char)0x3a,  /* [4455] */
    (xdc_Char)0x20,  /* [4456] */
    (xdc_Char)0x54,  /* [4457] */
    (xdc_Char)0x61,  /* [4458] */
    (xdc_Char)0x73,  /* [4459] */
    (xdc_Char)0x6b,  /* [4460] */
    (xdc_Char)0x20,  /* [4461] */
    (xdc_Char)0x6d,  /* [4462] */
    (xdc_Char)0x6f,  /* [4463] */
    (xdc_Char)0x64,  /* [4464] */
    (xdc_Char)0x75,  /* [4465] */
    (xdc_Char)0x6c,  /* [4466] */
    (xdc_Char)0x65,  /* [4467] */
    (xdc_Char)0x20,  /* [4468] */
    (xdc_Char)0x73,  /* [4469] */
    (xdc_Char)0x74,  /* [4470] */
    (xdc_Char)0x61,  /* [4471] */
    (xdc_Char)0x74,  /* [4472] */
    (xdc_Char)0x65,  /* [4473] */
    (xdc_Char)0x20,  /* [4474] */
    (xdc_Char)0x64,  /* [4475] */
    (xdc_Char)0x61,  /* [4476] */
    (xdc_Char)0x74,  /* [4477] */
    (xdc_Char)0x61,  /* [4478] */
    (xdc_Char)0x20,  /* [4479] */
    (xdc_Char)0x69,  /* [4480] */
    (xdc_Char)0x6e,  /* [4481] */
    (xdc_Char)0x74,  /* [4482] */
    (xdc_Char)0x65,  /* [4483] */
    (xdc_Char)0x67,  /* [4484] */
    (xdc_Char)0x72,  /* [4485] */
    (xdc_Char)0x69,  /* [4486] */
    (xdc_Char)0x74,  /* [4487] */
    (xdc_Char)0x79,  /* [4488] */
    (xdc_Char)0x20,  /* [4489] */
    (xdc_Char)0x63,  /* [4490] */
    (xdc_Char)0x68,  /* [4491] */
    (xdc_Char)0x65,  /* [4492] */
    (xdc_Char)0x63,  /* [4493] */
    (xdc_Char)0x6b,  /* [4494] */
    (xdc_Char)0x20,  /* [4495] */
    (xdc_Char)0x66,  /* [4496] */
    (xdc_Char)0x61,  /* [4497] */
    (xdc_Char)0x69,  /* [4498] */
    (xdc_Char)0x6c,  /* [4499] */
    (xdc_Char)0x65,  /* [4500] */
    (xdc_Char)0x64,  /* [4501] */
    (xdc_Char)0x2e,  /* [4502] */
    (xdc_Char)0x0,  /* [4503] */
    (xdc_Char)0x45,  /* [4504] */
    (xdc_Char)0x5f,  /* [4505] */
    (xdc_Char)0x6f,  /* [4506] */
    (xdc_Char)0x62,  /* [4507] */
    (xdc_Char)0x6a,  /* [4508] */
    (xdc_Char)0x65,  /* [4509] */
    (xdc_Char)0x63,  /* [4510] */
    (xdc_Char)0x74,  /* [4511] */
    (xdc_Char)0x43,  /* [4512] */
    (xdc_Char)0x68,  /* [4513] */
    (xdc_Char)0x65,  /* [4514] */
    (xdc_Char)0x63,  /* [4515] */
    (xdc_Char)0x6b,  /* [4516] */
    (xdc_Char)0x46,  /* [4517] */
    (xdc_Char)0x61,  /* [4518] */
    (xdc_Char)0x69,  /* [4519] */
    (xdc_Char)0x6c,  /* [4520] */
    (xdc_Char)0x65,  /* [4521] */
    (xdc_Char)0x64,  /* [4522] */
    (xdc_Char)0x3a,  /* [4523] */
    (xdc_Char)0x20,  /* [4524] */
    (xdc_Char)0x54,  /* [4525] */
    (xdc_Char)0x61,  /* [4526] */
    (xdc_Char)0x73,  /* [4527] */
    (xdc_Char)0x6b,  /* [4528] */
    (xdc_Char)0x20,  /* [4529] */
    (xdc_Char)0x30,  /* [4530] */
    (xdc_Char)0x78,  /* [4531] */
    (xdc_Char)0x25,  /* [4532] */
    (xdc_Char)0x78,  /* [4533] */
    (xdc_Char)0x20,  /* [4534] */
    (xdc_Char)0x6f,  /* [4535] */
    (xdc_Char)0x62,  /* [4536] */
    (xdc_Char)0x6a,  /* [4537] */
    (xdc_Char)0x65,  /* [4538] */
    (xdc_Char)0x63,  /* [4539] */
    (xdc_Char)0x74,  /* [4540] */
    (xdc_Char)0x20,  /* [4541] */
    (xdc_Char)0x64,  /* [4542] */
    (xdc_Char)0x61,  /* [4543] */
    (xdc_Char)0x74,  /* [4544] */
    (xdc_Char)0x61,  /* [4545] */
    (xdc_Char)0x20,  /* [4546] */
    (xdc_Char)0x69,  /* [4547] */
    (xdc_Char)0x6e,  /* [4548] */
    (xdc_Char)0x74,  /* [4549] */
    (xdc_Char)0x65,  /* [4550] */
    (xdc_Char)0x67,  /* [4551] */
    (xdc_Char)0x72,  /* [4552] */
    (xdc_Char)0x69,  /* [4553] */
    (xdc_Char)0x74,  /* [4554] */
    (xdc_Char)0x79,  /* [4555] */
    (xdc_Char)0x20,  /* [4556] */
    (xdc_Char)0x63,  /* [4557] */
    (xdc_Char)0x68,  /* [4558] */
    (xdc_Char)0x65,  /* [4559] */
    (xdc_Char)0x63,  /* [4560] */
    (xdc_Char)0x6b,  /* [4561] */
    (xdc_Char)0x20,  /* [4562] */
    (xdc_Char)0x66,  /* [4563] */
    (xdc_Char)0x61,  /* [4564] */
    (xdc_Char)0x69,  /* [4565] */
    (xdc_Char)0x6c,  /* [4566] */
    (xdc_Char)0x65,  /* [4567] */
    (xdc_Char)0x64,  /* [4568] */
    (xdc_Char)0x2e,  /* [4569] */
    (xdc_Char)0x0,  /* [4570] */
    (xdc_Char)0x45,  /* [4571] */
    (xdc_Char)0x5f,  /* [4572] */
    (xdc_Char)0x6f,  /* [4573] */
    (xdc_Char)0x62,  /* [4574] */
    (xdc_Char)0x6a,  /* [4575] */
    (xdc_Char)0x65,  /* [4576] */
    (xdc_Char)0x63,  /* [4577] */
    (xdc_Char)0x74,  /* [4578] */
    (xdc_Char)0x4e,  /* [4579] */
    (xdc_Char)0x6f,  /* [4580] */
    (xdc_Char)0x74,  /* [4581] */
    (xdc_Char)0x49,  /* [4582] */
    (xdc_Char)0x6e,  /* [4583] */
    (xdc_Char)0x4b,  /* [4584] */
    (xdc_Char)0x65,  /* [4585] */
    (xdc_Char)0x72,  /* [4586] */
    (xdc_Char)0x6e,  /* [4587] */
    (xdc_Char)0x65,  /* [4588] */
    (xdc_Char)0x6c,  /* [4589] */
    (xdc_Char)0x53,  /* [4590] */
    (xdc_Char)0x70,  /* [4591] */
    (xdc_Char)0x61,  /* [4592] */
    (xdc_Char)0x63,  /* [4593] */
    (xdc_Char)0x65,  /* [4594] */
    (xdc_Char)0x3a,  /* [4595] */
    (xdc_Char)0x20,  /* [4596] */
    (xdc_Char)0x54,  /* [4597] */
    (xdc_Char)0x61,  /* [4598] */
    (xdc_Char)0x73,  /* [4599] */
    (xdc_Char)0x6b,  /* [4600] */
    (xdc_Char)0x20,  /* [4601] */
    (xdc_Char)0x6f,  /* [4602] */
    (xdc_Char)0x62,  /* [4603] */
    (xdc_Char)0x6a,  /* [4604] */
    (xdc_Char)0x65,  /* [4605] */
    (xdc_Char)0x63,  /* [4606] */
    (xdc_Char)0x74,  /* [4607] */
    (xdc_Char)0x20,  /* [4608] */
    (xdc_Char)0x70,  /* [4609] */
    (xdc_Char)0x61,  /* [4610] */
    (xdc_Char)0x73,  /* [4611] */
    (xdc_Char)0x73,  /* [4612] */
    (xdc_Char)0x65,  /* [4613] */
    (xdc_Char)0x64,  /* [4614] */
    (xdc_Char)0x20,  /* [4615] */
    (xdc_Char)0x6e,  /* [4616] */
    (xdc_Char)0x6f,  /* [4617] */
    (xdc_Char)0x74,  /* [4618] */
    (xdc_Char)0x20,  /* [4619] */
    (xdc_Char)0x69,  /* [4620] */
    (xdc_Char)0x6e,  /* [4621] */
    (xdc_Char)0x20,  /* [4622] */
    (xdc_Char)0x4b,  /* [4623] */
    (xdc_Char)0x65,  /* [4624] */
    (xdc_Char)0x72,  /* [4625] */
    (xdc_Char)0x6e,  /* [4626] */
    (xdc_Char)0x65,  /* [4627] */
    (xdc_Char)0x6c,  /* [4628] */
    (xdc_Char)0x20,  /* [4629] */
    (xdc_Char)0x61,  /* [4630] */
    (xdc_Char)0x64,  /* [4631] */
    (xdc_Char)0x64,  /* [4632] */
    (xdc_Char)0x72,  /* [4633] */
    (xdc_Char)0x65,  /* [4634] */
    (xdc_Char)0x73,  /* [4635] */
    (xdc_Char)0x73,  /* [4636] */
    (xdc_Char)0x20,  /* [4637] */
    (xdc_Char)0x73,  /* [4638] */
    (xdc_Char)0x70,  /* [4639] */
    (xdc_Char)0x61,  /* [4640] */
    (xdc_Char)0x63,  /* [4641] */
    (xdc_Char)0x65,  /* [4642] */
    (xdc_Char)0x2e,  /* [4643] */
    (xdc_Char)0x0,  /* [4644] */
    (xdc_Char)0x72,  /* [4645] */
    (xdc_Char)0x65,  /* [4646] */
    (xdc_Char)0x71,  /* [4647] */
    (xdc_Char)0x75,  /* [4648] */
    (xdc_Char)0x65,  /* [4649] */
    (xdc_Char)0x73,  /* [4650] */
    (xdc_Char)0x74,  /* [4651] */
    (xdc_Char)0x65,  /* [4652] */
    (xdc_Char)0x64,  /* [4653] */
    (xdc_Char)0x20,  /* [4654] */
    (xdc_Char)0x73,  /* [4655] */
    (xdc_Char)0x69,  /* [4656] */
    (xdc_Char)0x7a,  /* [4657] */
    (xdc_Char)0x65,  /* [4658] */
    (xdc_Char)0x20,  /* [4659] */
    (xdc_Char)0x69,  /* [4660] */
    (xdc_Char)0x73,  /* [4661] */
    (xdc_Char)0x20,  /* [4662] */
    (xdc_Char)0x74,  /* [4663] */
    (xdc_Char)0x6f,  /* [4664] */
    (xdc_Char)0x6f,  /* [4665] */
    (xdc_Char)0x20,  /* [4666] */
    (xdc_Char)0x62,  /* [4667] */
    (xdc_Char)0x69,  /* [4668] */
    (xdc_Char)0x67,  /* [4669] */
    (xdc_Char)0x3a,  /* [4670] */
    (xdc_Char)0x20,  /* [4671] */
    (xdc_Char)0x68,  /* [4672] */
    (xdc_Char)0x61,  /* [4673] */
    (xdc_Char)0x6e,  /* [4674] */
    (xdc_Char)0x64,  /* [4675] */
    (xdc_Char)0x6c,  /* [4676] */
    (xdc_Char)0x65,  /* [4677] */
    (xdc_Char)0x3d,  /* [4678] */
    (xdc_Char)0x30,  /* [4679] */
    (xdc_Char)0x78,  /* [4680] */
    (xdc_Char)0x25,  /* [4681] */
    (xdc_Char)0x78,  /* [4682] */
    (xdc_Char)0x2c,  /* [4683] */
    (xdc_Char)0x20,  /* [4684] */
    (xdc_Char)0x73,  /* [4685] */
    (xdc_Char)0x69,  /* [4686] */
    (xdc_Char)0x7a,  /* [4687] */
    (xdc_Char)0x65,  /* [4688] */
    (xdc_Char)0x3d,  /* [4689] */
    (xdc_Char)0x25,  /* [4690] */
    (xdc_Char)0x75,  /* [4691] */
    (xdc_Char)0x0,  /* [4692] */
    (xdc_Char)0x6f,  /* [4693] */
    (xdc_Char)0x75,  /* [4694] */
    (xdc_Char)0x74,  /* [4695] */
    (xdc_Char)0x20,  /* [4696] */
    (xdc_Char)0x6f,  /* [4697] */
    (xdc_Char)0x66,  /* [4698] */
    (xdc_Char)0x20,  /* [4699] */
    (xdc_Char)0x6d,  /* [4700] */
    (xdc_Char)0x65,  /* [4701] */
    (xdc_Char)0x6d,  /* [4702] */
    (xdc_Char)0x6f,  /* [4703] */
    (xdc_Char)0x72,  /* [4704] */
    (xdc_Char)0x79,  /* [4705] */
    (xdc_Char)0x3a,  /* [4706] */
    (xdc_Char)0x20,  /* [4707] */
    (xdc_Char)0x68,  /* [4708] */
    (xdc_Char)0x61,  /* [4709] */
    (xdc_Char)0x6e,  /* [4710] */
    (xdc_Char)0x64,  /* [4711] */
    (xdc_Char)0x6c,  /* [4712] */
    (xdc_Char)0x65,  /* [4713] */
    (xdc_Char)0x3d,  /* [4714] */
    (xdc_Char)0x30,  /* [4715] */
    (xdc_Char)0x78,  /* [4716] */
    (xdc_Char)0x25,  /* [4717] */
    (xdc_Char)0x78,  /* [4718] */
    (xdc_Char)0x2c,  /* [4719] */
    (xdc_Char)0x20,  /* [4720] */
    (xdc_Char)0x73,  /* [4721] */
    (xdc_Char)0x69,  /* [4722] */
    (xdc_Char)0x7a,  /* [4723] */
    (xdc_Char)0x65,  /* [4724] */
    (xdc_Char)0x3d,  /* [4725] */
    (xdc_Char)0x25,  /* [4726] */
    (xdc_Char)0x75,  /* [4727] */
    (xdc_Char)0x0,  /* [4728] */
    (xdc_Char)0x45,  /* [4729] */
    (xdc_Char)0x5f,  /* [4730] */
    (xdc_Char)0x73,  /* [4731] */
    (xdc_Char)0x74,  /* [4732] */
    (xdc_Char)0x61,  /* [4733] */
    (xdc_Char)0x63,  /* [4734] */
    (xdc_Char)0x6b,  /* [4735] */
    (xdc_Char)0x4f,  /* [4736] */
    (xdc_Char)0x76,  /* [4737] */
    (xdc_Char)0x65,  /* [4738] */
    (xdc_Char)0x72,  /* [4739] */
    (xdc_Char)0x66,  /* [4740] */
    (xdc_Char)0x6c,  /* [4741] */
    (xdc_Char)0x6f,  /* [4742] */
    (xdc_Char)0x77,  /* [4743] */
    (xdc_Char)0x3a,  /* [4744] */
    (xdc_Char)0x20,  /* [4745] */
    (xdc_Char)0x49,  /* [4746] */
    (xdc_Char)0x53,  /* [4747] */
    (xdc_Char)0x52,  /* [4748] */
    (xdc_Char)0x20,  /* [4749] */
    (xdc_Char)0x73,  /* [4750] */
    (xdc_Char)0x74,  /* [4751] */
    (xdc_Char)0x61,  /* [4752] */
    (xdc_Char)0x63,  /* [4753] */
    (xdc_Char)0x6b,  /* [4754] */
    (xdc_Char)0x20,  /* [4755] */
    (xdc_Char)0x6f,  /* [4756] */
    (xdc_Char)0x76,  /* [4757] */
    (xdc_Char)0x65,  /* [4758] */
    (xdc_Char)0x72,  /* [4759] */
    (xdc_Char)0x66,  /* [4760] */
    (xdc_Char)0x6c,  /* [4761] */
    (xdc_Char)0x6f,  /* [4762] */
    (xdc_Char)0x77,  /* [4763] */
    (xdc_Char)0x2e,  /* [4764] */
    (xdc_Char)0x0,  /* [4765] */
    (xdc_Char)0x45,  /* [4766] */
    (xdc_Char)0x5f,  /* [4767] */
    (xdc_Char)0x70,  /* [4768] */
    (xdc_Char)0x72,  /* [4769] */
    (xdc_Char)0x69,  /* [4770] */
    (xdc_Char)0x6f,  /* [4771] */
    (xdc_Char)0x72,  /* [4772] */
    (xdc_Char)0x69,  /* [4773] */
    (xdc_Char)0x74,  /* [4774] */
    (xdc_Char)0x79,  /* [4775] */
    (xdc_Char)0x3a,  /* [4776] */
    (xdc_Char)0x20,  /* [4777] */
    (xdc_Char)0x54,  /* [4778] */
    (xdc_Char)0x68,  /* [4779] */
    (xdc_Char)0x72,  /* [4780] */
    (xdc_Char)0x65,  /* [4781] */
    (xdc_Char)0x61,  /* [4782] */
    (xdc_Char)0x64,  /* [4783] */
    (xdc_Char)0x20,  /* [4784] */
    (xdc_Char)0x70,  /* [4785] */
    (xdc_Char)0x72,  /* [4786] */
    (xdc_Char)0x69,  /* [4787] */
    (xdc_Char)0x6f,  /* [4788] */
    (xdc_Char)0x72,  /* [4789] */
    (xdc_Char)0x69,  /* [4790] */
    (xdc_Char)0x74,  /* [4791] */
    (xdc_Char)0x79,  /* [4792] */
    (xdc_Char)0x20,  /* [4793] */
    (xdc_Char)0x69,  /* [4794] */
    (xdc_Char)0x73,  /* [4795] */
    (xdc_Char)0x20,  /* [4796] */
    (xdc_Char)0x69,  /* [4797] */
    (xdc_Char)0x6e,  /* [4798] */
    (xdc_Char)0x76,  /* [4799] */
    (xdc_Char)0x61,  /* [4800] */
    (xdc_Char)0x6c,  /* [4801] */
    (xdc_Char)0x69,  /* [4802] */
    (xdc_Char)0x64,  /* [4803] */
    (xdc_Char)0x20,  /* [4804] */
    (xdc_Char)0x25,  /* [4805] */
    (xdc_Char)0x64,  /* [4806] */
    (xdc_Char)0x0,  /* [4807] */
    (xdc_Char)0x45,  /* [4808] */
    (xdc_Char)0x5f,  /* [4809] */
    (xdc_Char)0x69,  /* [4810] */
    (xdc_Char)0x6e,  /* [4811] */
    (xdc_Char)0x76,  /* [4812] */
    (xdc_Char)0x61,  /* [4813] */
    (xdc_Char)0x6c,  /* [4814] */
    (xdc_Char)0x69,  /* [4815] */
    (xdc_Char)0x64,  /* [4816] */
    (xdc_Char)0x54,  /* [4817] */
    (xdc_Char)0x69,  /* [4818] */
    (xdc_Char)0x6d,  /* [4819] */
    (xdc_Char)0x65,  /* [4820] */
    (xdc_Char)0x72,  /* [4821] */
    (xdc_Char)0x3a,  /* [4822] */
    (xdc_Char)0x20,  /* [4823] */
    (xdc_Char)0x49,  /* [4824] */
    (xdc_Char)0x6e,  /* [4825] */
    (xdc_Char)0x76,  /* [4826] */
    (xdc_Char)0x61,  /* [4827] */
    (xdc_Char)0x6c,  /* [4828] */
    (xdc_Char)0x69,  /* [4829] */
    (xdc_Char)0x64,  /* [4830] */
    (xdc_Char)0x20,  /* [4831] */
    (xdc_Char)0x54,  /* [4832] */
    (xdc_Char)0x69,  /* [4833] */
    (xdc_Char)0x6d,  /* [4834] */
    (xdc_Char)0x65,  /* [4835] */
    (xdc_Char)0x72,  /* [4836] */
    (xdc_Char)0x20,  /* [4837] */
    (xdc_Char)0x49,  /* [4838] */
    (xdc_Char)0x64,  /* [4839] */
    (xdc_Char)0x20,  /* [4840] */
    (xdc_Char)0x25,  /* [4841] */
    (xdc_Char)0x64,  /* [4842] */
    (xdc_Char)0x0,  /* [4843] */
    (xdc_Char)0x45,  /* [4844] */
    (xdc_Char)0x5f,  /* [4845] */
    (xdc_Char)0x6e,  /* [4846] */
    (xdc_Char)0x6f,  /* [4847] */
    (xdc_Char)0x74,  /* [4848] */
    (xdc_Char)0x41,  /* [4849] */
    (xdc_Char)0x76,  /* [4850] */
    (xdc_Char)0x61,  /* [4851] */
    (xdc_Char)0x69,  /* [4852] */
    (xdc_Char)0x6c,  /* [4853] */
    (xdc_Char)0x61,  /* [4854] */
    (xdc_Char)0x62,  /* [4855] */
    (xdc_Char)0x6c,  /* [4856] */
    (xdc_Char)0x65,  /* [4857] */
    (xdc_Char)0x3a,  /* [4858] */
    (xdc_Char)0x20,  /* [4859] */
    (xdc_Char)0x54,  /* [4860] */
    (xdc_Char)0x69,  /* [4861] */
    (xdc_Char)0x6d,  /* [4862] */
    (xdc_Char)0x65,  /* [4863] */
    (xdc_Char)0x72,  /* [4864] */
    (xdc_Char)0x20,  /* [4865] */
    (xdc_Char)0x6e,  /* [4866] */
    (xdc_Char)0x6f,  /* [4867] */
    (xdc_Char)0x74,  /* [4868] */
    (xdc_Char)0x20,  /* [4869] */
    (xdc_Char)0x61,  /* [4870] */
    (xdc_Char)0x76,  /* [4871] */
    (xdc_Char)0x61,  /* [4872] */
    (xdc_Char)0x69,  /* [4873] */
    (xdc_Char)0x6c,  /* [4874] */
    (xdc_Char)0x61,  /* [4875] */
    (xdc_Char)0x62,  /* [4876] */
    (xdc_Char)0x6c,  /* [4877] */
    (xdc_Char)0x65,  /* [4878] */
    (xdc_Char)0x20,  /* [4879] */
    (xdc_Char)0x25,  /* [4880] */
    (xdc_Char)0x64,  /* [4881] */
    (xdc_Char)0x0,  /* [4882] */
    (xdc_Char)0x45,  /* [4883] */
    (xdc_Char)0x5f,  /* [4884] */
    (xdc_Char)0x49,  /* [4885] */
    (xdc_Char)0x6e,  /* [4886] */
    (xdc_Char)0x76,  /* [4887] */
    (xdc_Char)0x61,  /* [4888] */
    (xdc_Char)0x6c,  /* [4889] */
    (xdc_Char)0x69,  /* [4890] */
    (xdc_Char)0x64,  /* [4891] */
    (xdc_Char)0x4d,  /* [4892] */
    (xdc_Char)0x61,  /* [4893] */
    (xdc_Char)0x73,  /* [4894] */
    (xdc_Char)0x6b,  /* [4895] */
    (xdc_Char)0x3a,  /* [4896] */
    (xdc_Char)0x20,  /* [4897] */
    (xdc_Char)0x4d,  /* [4898] */
    (xdc_Char)0x61,  /* [4899] */
    (xdc_Char)0x73,  /* [4900] */
    (xdc_Char)0x6b,  /* [4901] */
    (xdc_Char)0x20,  /* [4902] */
    (xdc_Char)0x69,  /* [4903] */
    (xdc_Char)0x6e,  /* [4904] */
    (xdc_Char)0x20,  /* [4905] */
    (xdc_Char)0x68,  /* [4906] */
    (xdc_Char)0x77,  /* [4907] */
    (xdc_Char)0x69,  /* [4908] */
    (xdc_Char)0x50,  /* [4909] */
    (xdc_Char)0x61,  /* [4910] */
    (xdc_Char)0x72,  /* [4911] */
    (xdc_Char)0x61,  /* [4912] */
    (xdc_Char)0x6d,  /* [4913] */
    (xdc_Char)0x73,  /* [4914] */
    (xdc_Char)0x20,  /* [4915] */
    (xdc_Char)0x63,  /* [4916] */
    (xdc_Char)0x61,  /* [4917] */
    (xdc_Char)0x6e,  /* [4918] */
    (xdc_Char)0x6e,  /* [4919] */
    (xdc_Char)0x6f,  /* [4920] */
    (xdc_Char)0x74,  /* [4921] */
    (xdc_Char)0x20,  /* [4922] */
    (xdc_Char)0x65,  /* [4923] */
    (xdc_Char)0x6e,  /* [4924] */
    (xdc_Char)0x61,  /* [4925] */
    (xdc_Char)0x62,  /* [4926] */
    (xdc_Char)0x6c,  /* [4927] */
    (xdc_Char)0x65,  /* [4928] */
    (xdc_Char)0x20,  /* [4929] */
    (xdc_Char)0x73,  /* [4930] */
    (xdc_Char)0x65,  /* [4931] */
    (xdc_Char)0x6c,  /* [4932] */
    (xdc_Char)0x66,  /* [4933] */
    (xdc_Char)0x0,  /* [4934] */
    (xdc_Char)0x45,  /* [4935] */
    (xdc_Char)0x5f,  /* [4936] */
    (xdc_Char)0x63,  /* [4937] */
    (xdc_Char)0x61,  /* [4938] */
    (xdc_Char)0x6e,  /* [4939] */
    (xdc_Char)0x6e,  /* [4940] */
    (xdc_Char)0x6f,  /* [4941] */
    (xdc_Char)0x74,  /* [4942] */
    (xdc_Char)0x53,  /* [4943] */
    (xdc_Char)0x75,  /* [4944] */
    (xdc_Char)0x70,  /* [4945] */
    (xdc_Char)0x70,  /* [4946] */
    (xdc_Char)0x6f,  /* [4947] */
    (xdc_Char)0x72,  /* [4948] */
    (xdc_Char)0x74,  /* [4949] */
    (xdc_Char)0x3a,  /* [4950] */
    (xdc_Char)0x20,  /* [4951] */
    (xdc_Char)0x54,  /* [4952] */
    (xdc_Char)0x69,  /* [4953] */
    (xdc_Char)0x6d,  /* [4954] */
    (xdc_Char)0x65,  /* [4955] */
    (xdc_Char)0x72,  /* [4956] */
    (xdc_Char)0x20,  /* [4957] */
    (xdc_Char)0x63,  /* [4958] */
    (xdc_Char)0x61,  /* [4959] */
    (xdc_Char)0x6e,  /* [4960] */
    (xdc_Char)0x6e,  /* [4961] */
    (xdc_Char)0x6f,  /* [4962] */
    (xdc_Char)0x74,  /* [4963] */
    (xdc_Char)0x20,  /* [4964] */
    (xdc_Char)0x73,  /* [4965] */
    (xdc_Char)0x75,  /* [4966] */
    (xdc_Char)0x70,  /* [4967] */
    (xdc_Char)0x70,  /* [4968] */
    (xdc_Char)0x6f,  /* [4969] */
    (xdc_Char)0x72,  /* [4970] */
    (xdc_Char)0x74,  /* [4971] */
    (xdc_Char)0x20,  /* [4972] */
    (xdc_Char)0x72,  /* [4973] */
    (xdc_Char)0x65,  /* [4974] */
    (xdc_Char)0x71,  /* [4975] */
    (xdc_Char)0x75,  /* [4976] */
    (xdc_Char)0x65,  /* [4977] */
    (xdc_Char)0x73,  /* [4978] */
    (xdc_Char)0x74,  /* [4979] */
    (xdc_Char)0x65,  /* [4980] */
    (xdc_Char)0x64,  /* [4981] */
    (xdc_Char)0x20,  /* [4982] */
    (xdc_Char)0x70,  /* [4983] */
    (xdc_Char)0x65,  /* [4984] */
    (xdc_Char)0x72,  /* [4985] */
    (xdc_Char)0x69,  /* [4986] */
    (xdc_Char)0x6f,  /* [4987] */
    (xdc_Char)0x64,  /* [4988] */
    (xdc_Char)0x20,  /* [4989] */
    (xdc_Char)0x25,  /* [4990] */
    (xdc_Char)0x64,  /* [4991] */
    (xdc_Char)0x0,  /* [4992] */
    (xdc_Char)0x3c,  /* [4993] */
    (xdc_Char)0x2d,  /* [4994] */
    (xdc_Char)0x2d,  /* [4995] */
    (xdc_Char)0x20,  /* [4996] */
    (xdc_Char)0x63,  /* [4997] */
    (xdc_Char)0x6f,  /* [4998] */
    (xdc_Char)0x6e,  /* [4999] */
    (xdc_Char)0x73,  /* [5000] */
    (xdc_Char)0x74,  /* [5001] */
    (xdc_Char)0x72,  /* [5002] */
    (xdc_Char)0x75,  /* [5003] */
    (xdc_Char)0x63,  /* [5004] */
    (xdc_Char)0x74,  /* [5005] */
    (xdc_Char)0x3a,  /* [5006] */
    (xdc_Char)0x20,  /* [5007] */
    (xdc_Char)0x25,  /* [5008] */
    (xdc_Char)0x70,  /* [5009] */
    (xdc_Char)0x28,  /* [5010] */
    (xdc_Char)0x27,  /* [5011] */
    (xdc_Char)0x25,  /* [5012] */
    (xdc_Char)0x73,  /* [5013] */
    (xdc_Char)0x27,  /* [5014] */
    (xdc_Char)0x29,  /* [5015] */
    (xdc_Char)0x0,  /* [5016] */
    (xdc_Char)0x3c,  /* [5017] */
    (xdc_Char)0x2d,  /* [5018] */
    (xdc_Char)0x2d,  /* [5019] */
    (xdc_Char)0x20,  /* [5020] */
    (xdc_Char)0x63,  /* [5021] */
    (xdc_Char)0x72,  /* [5022] */
    (xdc_Char)0x65,  /* [5023] */
    (xdc_Char)0x61,  /* [5024] */
    (xdc_Char)0x74,  /* [5025] */
    (xdc_Char)0x65,  /* [5026] */
    (xdc_Char)0x3a,  /* [5027] */
    (xdc_Char)0x20,  /* [5028] */
    (xdc_Char)0x25,  /* [5029] */
    (xdc_Char)0x70,  /* [5030] */
    (xdc_Char)0x28,  /* [5031] */
    (xdc_Char)0x27,  /* [5032] */
    (xdc_Char)0x25,  /* [5033] */
    (xdc_Char)0x73,  /* [5034] */
    (xdc_Char)0x27,  /* [5035] */
    (xdc_Char)0x29,  /* [5036] */
    (xdc_Char)0x0,  /* [5037] */
    (xdc_Char)0x2d,  /* [5038] */
    (xdc_Char)0x2d,  /* [5039] */
    (xdc_Char)0x3e,  /* [5040] */
    (xdc_Char)0x20,  /* [5041] */
    (xdc_Char)0x64,  /* [5042] */
    (xdc_Char)0x65,  /* [5043] */
    (xdc_Char)0x73,  /* [5044] */
    (xdc_Char)0x74,  /* [5045] */
    (xdc_Char)0x72,  /* [5046] */
    (xdc_Char)0x75,  /* [5047] */
    (xdc_Char)0x63,  /* [5048] */
    (xdc_Char)0x74,  /* [5049] */
    (xdc_Char)0x3a,  /* [5050] */
    (xdc_Char)0x20,  /* [5051] */
    (xdc_Char)0x28,  /* [5052] */
    (xdc_Char)0x25,  /* [5053] */
    (xdc_Char)0x70,  /* [5054] */
    (xdc_Char)0x29,  /* [5055] */
    (xdc_Char)0x0,  /* [5056] */
    (xdc_Char)0x2d,  /* [5057] */
    (xdc_Char)0x2d,  /* [5058] */
    (xdc_Char)0x3e,  /* [5059] */
    (xdc_Char)0x20,  /* [5060] */
    (xdc_Char)0x64,  /* [5061] */
    (xdc_Char)0x65,  /* [5062] */
    (xdc_Char)0x6c,  /* [5063] */
    (xdc_Char)0x65,  /* [5064] */
    (xdc_Char)0x74,  /* [5065] */
    (xdc_Char)0x65,  /* [5066] */
    (xdc_Char)0x3a,  /* [5067] */
    (xdc_Char)0x20,  /* [5068] */
    (xdc_Char)0x28,  /* [5069] */
    (xdc_Char)0x25,  /* [5070] */
    (xdc_Char)0x70,  /* [5071] */
    (xdc_Char)0x29,  /* [5072] */
    (xdc_Char)0x0,  /* [5073] */
    (xdc_Char)0x45,  /* [5074] */
    (xdc_Char)0x52,  /* [5075] */
    (xdc_Char)0x52,  /* [5076] */
    (xdc_Char)0x4f,  /* [5077] */
    (xdc_Char)0x52,  /* [5078] */
    (xdc_Char)0x3a,  /* [5079] */
    (xdc_Char)0x20,  /* [5080] */
    (xdc_Char)0x25,  /* [5081] */
    (xdc_Char)0x24,  /* [5082] */
    (xdc_Char)0x46,  /* [5083] */
    (xdc_Char)0x25,  /* [5084] */
    (xdc_Char)0x24,  /* [5085] */
    (xdc_Char)0x53,  /* [5086] */
    (xdc_Char)0x0,  /* [5087] */
    (xdc_Char)0x57,  /* [5088] */
    (xdc_Char)0x41,  /* [5089] */
    (xdc_Char)0x52,  /* [5090] */
    (xdc_Char)0x4e,  /* [5091] */
    (xdc_Char)0x49,  /* [5092] */
    (xdc_Char)0x4e,  /* [5093] */
    (xdc_Char)0x47,  /* [5094] */
    (xdc_Char)0x3a,  /* [5095] */
    (xdc_Char)0x20,  /* [5096] */
    (xdc_Char)0x25,  /* [5097] */
    (xdc_Char)0x24,  /* [5098] */
    (xdc_Char)0x46,  /* [5099] */
    (xdc_Char)0x25,  /* [5100] */
    (xdc_Char)0x24,  /* [5101] */
    (xdc_Char)0x53,  /* [5102] */
    (xdc_Char)0x0,  /* [5103] */
    (xdc_Char)0x25,  /* [5104] */
    (xdc_Char)0x24,  /* [5105] */
    (xdc_Char)0x46,  /* [5106] */
    (xdc_Char)0x25,  /* [5107] */
    (xdc_Char)0x24,  /* [5108] */
    (xdc_Char)0x53,  /* [5109] */
    (xdc_Char)0x0,  /* [5110] */
    (xdc_Char)0x53,  /* [5111] */
    (xdc_Char)0x74,  /* [5112] */
    (xdc_Char)0x61,  /* [5113] */
    (xdc_Char)0x72,  /* [5114] */
    (xdc_Char)0x74,  /* [5115] */
    (xdc_Char)0x3a,  /* [5116] */
    (xdc_Char)0x20,  /* [5117] */
    (xdc_Char)0x25,  /* [5118] */
    (xdc_Char)0x24,  /* [5119] */
    (xdc_Char)0x53,  /* [5120] */
    (xdc_Char)0x0,  /* [5121] */
    (xdc_Char)0x53,  /* [5122] */
    (xdc_Char)0x74,  /* [5123] */
    (xdc_Char)0x6f,  /* [5124] */
    (xdc_Char)0x70,  /* [5125] */
    (xdc_Char)0x3a,  /* [5126] */
    (xdc_Char)0x20,  /* [5127] */
    (xdc_Char)0x25,  /* [5128] */
    (xdc_Char)0x24,  /* [5129] */
    (xdc_Char)0x53,  /* [5130] */
    (xdc_Char)0x0,  /* [5131] */
    (xdc_Char)0x53,  /* [5132] */
    (xdc_Char)0x74,  /* [5133] */
    (xdc_Char)0x61,  /* [5134] */
    (xdc_Char)0x72,  /* [5135] */
    (xdc_Char)0x74,  /* [5136] */
    (xdc_Char)0x49,  /* [5137] */
    (xdc_Char)0x6e,  /* [5138] */
    (xdc_Char)0x73,  /* [5139] */
    (xdc_Char)0x74,  /* [5140] */
    (xdc_Char)0x61,  /* [5141] */
    (xdc_Char)0x6e,  /* [5142] */
    (xdc_Char)0x63,  /* [5143] */
    (xdc_Char)0x65,  /* [5144] */
    (xdc_Char)0x3a,  /* [5145] */
    (xdc_Char)0x20,  /* [5146] */
    (xdc_Char)0x25,  /* [5147] */
    (xdc_Char)0x24,  /* [5148] */
    (xdc_Char)0x53,  /* [5149] */
    (xdc_Char)0x0,  /* [5150] */
    (xdc_Char)0x53,  /* [5151] */
    (xdc_Char)0x74,  /* [5152] */
    (xdc_Char)0x6f,  /* [5153] */
    (xdc_Char)0x70,  /* [5154] */
    (xdc_Char)0x49,  /* [5155] */
    (xdc_Char)0x6e,  /* [5156] */
    (xdc_Char)0x73,  /* [5157] */
    (xdc_Char)0x74,  /* [5158] */
    (xdc_Char)0x61,  /* [5159] */
    (xdc_Char)0x6e,  /* [5160] */
    (xdc_Char)0x63,  /* [5161] */
    (xdc_Char)0x65,  /* [5162] */
    (xdc_Char)0x3a,  /* [5163] */
    (xdc_Char)0x20,  /* [5164] */
    (xdc_Char)0x25,  /* [5165] */
    (xdc_Char)0x24,  /* [5166] */
    (xdc_Char)0x53,  /* [5167] */
    (xdc_Char)0x0,  /* [5168] */
    (xdc_Char)0x4c,  /* [5169] */
    (xdc_Char)0x4d,  /* [5170] */
    (xdc_Char)0x5f,  /* [5171] */
    (xdc_Char)0x62,  /* [5172] */
    (xdc_Char)0x65,  /* [5173] */
    (xdc_Char)0x67,  /* [5174] */
    (xdc_Char)0x69,  /* [5175] */
    (xdc_Char)0x6e,  /* [5176] */
    (xdc_Char)0x3a,  /* [5177] */
    (xdc_Char)0x20,  /* [5178] */
    (xdc_Char)0x68,  /* [5179] */
    (xdc_Char)0x77,  /* [5180] */
    (xdc_Char)0x69,  /* [5181] */
    (xdc_Char)0x3a,  /* [5182] */
    (xdc_Char)0x20,  /* [5183] */
    (xdc_Char)0x30,  /* [5184] */
    (xdc_Char)0x78,  /* [5185] */
    (xdc_Char)0x25,  /* [5186] */
    (xdc_Char)0x78,  /* [5187] */
    (xdc_Char)0x2c,  /* [5188] */
    (xdc_Char)0x20,  /* [5189] */
    (xdc_Char)0x66,  /* [5190] */
    (xdc_Char)0x75,  /* [5191] */
    (xdc_Char)0x6e,  /* [5192] */
    (xdc_Char)0x63,  /* [5193] */
    (xdc_Char)0x3a,  /* [5194] */
    (xdc_Char)0x20,  /* [5195] */
    (xdc_Char)0x30,  /* [5196] */
    (xdc_Char)0x78,  /* [5197] */
    (xdc_Char)0x25,  /* [5198] */
    (xdc_Char)0x78,  /* [5199] */
    (xdc_Char)0x2c,  /* [5200] */
    (xdc_Char)0x20,  /* [5201] */
    (xdc_Char)0x70,  /* [5202] */
    (xdc_Char)0x72,  /* [5203] */
    (xdc_Char)0x65,  /* [5204] */
    (xdc_Char)0x54,  /* [5205] */
    (xdc_Char)0x68,  /* [5206] */
    (xdc_Char)0x72,  /* [5207] */
    (xdc_Char)0x65,  /* [5208] */
    (xdc_Char)0x61,  /* [5209] */
    (xdc_Char)0x64,  /* [5210] */
    (xdc_Char)0x3a,  /* [5211] */
    (xdc_Char)0x20,  /* [5212] */
    (xdc_Char)0x25,  /* [5213] */
    (xdc_Char)0x64,  /* [5214] */
    (xdc_Char)0x2c,  /* [5215] */
    (xdc_Char)0x20,  /* [5216] */
    (xdc_Char)0x69,  /* [5217] */
    (xdc_Char)0x6e,  /* [5218] */
    (xdc_Char)0x74,  /* [5219] */
    (xdc_Char)0x4e,  /* [5220] */
    (xdc_Char)0x75,  /* [5221] */
    (xdc_Char)0x6d,  /* [5222] */
    (xdc_Char)0x3a,  /* [5223] */
    (xdc_Char)0x20,  /* [5224] */
    (xdc_Char)0x25,  /* [5225] */
    (xdc_Char)0x64,  /* [5226] */
    (xdc_Char)0x2c,  /* [5227] */
    (xdc_Char)0x20,  /* [5228] */
    (xdc_Char)0x69,  /* [5229] */
    (xdc_Char)0x72,  /* [5230] */
    (xdc_Char)0x70,  /* [5231] */
    (xdc_Char)0x3a,  /* [5232] */
    (xdc_Char)0x20,  /* [5233] */
    (xdc_Char)0x30,  /* [5234] */
    (xdc_Char)0x78,  /* [5235] */
    (xdc_Char)0x25,  /* [5236] */
    (xdc_Char)0x78,  /* [5237] */
    (xdc_Char)0x0,  /* [5238] */
    (xdc_Char)0x4c,  /* [5239] */
    (xdc_Char)0x44,  /* [5240] */
    (xdc_Char)0x5f,  /* [5241] */
    (xdc_Char)0x65,  /* [5242] */
    (xdc_Char)0x6e,  /* [5243] */
    (xdc_Char)0x64,  /* [5244] */
    (xdc_Char)0x3a,  /* [5245] */
    (xdc_Char)0x20,  /* [5246] */
    (xdc_Char)0x68,  /* [5247] */
    (xdc_Char)0x77,  /* [5248] */
    (xdc_Char)0x69,  /* [5249] */
    (xdc_Char)0x3a,  /* [5250] */
    (xdc_Char)0x20,  /* [5251] */
    (xdc_Char)0x30,  /* [5252] */
    (xdc_Char)0x78,  /* [5253] */
    (xdc_Char)0x25,  /* [5254] */
    (xdc_Char)0x78,  /* [5255] */
    (xdc_Char)0x0,  /* [5256] */
    (xdc_Char)0x4c,  /* [5257] */
    (xdc_Char)0x57,  /* [5258] */
    (xdc_Char)0x5f,  /* [5259] */
    (xdc_Char)0x64,  /* [5260] */
    (xdc_Char)0x65,  /* [5261] */
    (xdc_Char)0x6c,  /* [5262] */
    (xdc_Char)0x61,  /* [5263] */
    (xdc_Char)0x79,  /* [5264] */
    (xdc_Char)0x65,  /* [5265] */
    (xdc_Char)0x64,  /* [5266] */
    (xdc_Char)0x3a,  /* [5267] */
    (xdc_Char)0x20,  /* [5268] */
    (xdc_Char)0x64,  /* [5269] */
    (xdc_Char)0x65,  /* [5270] */
    (xdc_Char)0x6c,  /* [5271] */
    (xdc_Char)0x61,  /* [5272] */
    (xdc_Char)0x79,  /* [5273] */
    (xdc_Char)0x3a,  /* [5274] */
    (xdc_Char)0x20,  /* [5275] */
    (xdc_Char)0x25,  /* [5276] */
    (xdc_Char)0x64,  /* [5277] */
    (xdc_Char)0x0,  /* [5278] */
    (xdc_Char)0x4c,  /* [5279] */
    (xdc_Char)0x4d,  /* [5280] */
    (xdc_Char)0x5f,  /* [5281] */
    (xdc_Char)0x74,  /* [5282] */
    (xdc_Char)0x69,  /* [5283] */
    (xdc_Char)0x63,  /* [5284] */
    (xdc_Char)0x6b,  /* [5285] */
    (xdc_Char)0x3a,  /* [5286] */
    (xdc_Char)0x20,  /* [5287] */
    (xdc_Char)0x74,  /* [5288] */
    (xdc_Char)0x69,  /* [5289] */
    (xdc_Char)0x63,  /* [5290] */
    (xdc_Char)0x6b,  /* [5291] */
    (xdc_Char)0x3a,  /* [5292] */
    (xdc_Char)0x20,  /* [5293] */
    (xdc_Char)0x25,  /* [5294] */
    (xdc_Char)0x64,  /* [5295] */
    (xdc_Char)0x0,  /* [5296] */
    (xdc_Char)0x4c,  /* [5297] */
    (xdc_Char)0x4d,  /* [5298] */
    (xdc_Char)0x5f,  /* [5299] */
    (xdc_Char)0x62,  /* [5300] */
    (xdc_Char)0x65,  /* [5301] */
    (xdc_Char)0x67,  /* [5302] */
    (xdc_Char)0x69,  /* [5303] */
    (xdc_Char)0x6e,  /* [5304] */
    (xdc_Char)0x3a,  /* [5305] */
    (xdc_Char)0x20,  /* [5306] */
    (xdc_Char)0x63,  /* [5307] */
    (xdc_Char)0x6c,  /* [5308] */
    (xdc_Char)0x6b,  /* [5309] */
    (xdc_Char)0x3a,  /* [5310] */
    (xdc_Char)0x20,  /* [5311] */
    (xdc_Char)0x30,  /* [5312] */
    (xdc_Char)0x78,  /* [5313] */
    (xdc_Char)0x25,  /* [5314] */
    (xdc_Char)0x78,  /* [5315] */
    (xdc_Char)0x2c,  /* [5316] */
    (xdc_Char)0x20,  /* [5317] */
    (xdc_Char)0x66,  /* [5318] */
    (xdc_Char)0x75,  /* [5319] */
    (xdc_Char)0x6e,  /* [5320] */
    (xdc_Char)0x63,  /* [5321] */
    (xdc_Char)0x3a,  /* [5322] */
    (xdc_Char)0x20,  /* [5323] */
    (xdc_Char)0x30,  /* [5324] */
    (xdc_Char)0x78,  /* [5325] */
    (xdc_Char)0x25,  /* [5326] */
    (xdc_Char)0x78,  /* [5327] */
    (xdc_Char)0x0,  /* [5328] */
    (xdc_Char)0x4c,  /* [5329] */
    (xdc_Char)0x4d,  /* [5330] */
    (xdc_Char)0x5f,  /* [5331] */
    (xdc_Char)0x70,  /* [5332] */
    (xdc_Char)0x6f,  /* [5333] */
    (xdc_Char)0x73,  /* [5334] */
    (xdc_Char)0x74,  /* [5335] */
    (xdc_Char)0x3a,  /* [5336] */
    (xdc_Char)0x20,  /* [5337] */
    (xdc_Char)0x65,  /* [5338] */
    (xdc_Char)0x76,  /* [5339] */
    (xdc_Char)0x65,  /* [5340] */
    (xdc_Char)0x6e,  /* [5341] */
    (xdc_Char)0x74,  /* [5342] */
    (xdc_Char)0x3a,  /* [5343] */
    (xdc_Char)0x20,  /* [5344] */
    (xdc_Char)0x30,  /* [5345] */
    (xdc_Char)0x78,  /* [5346] */
    (xdc_Char)0x25,  /* [5347] */
    (xdc_Char)0x78,  /* [5348] */
    (xdc_Char)0x2c,  /* [5349] */
    (xdc_Char)0x20,  /* [5350] */
    (xdc_Char)0x63,  /* [5351] */
    (xdc_Char)0x75,  /* [5352] */
    (xdc_Char)0x72,  /* [5353] */
    (xdc_Char)0x72,  /* [5354] */
    (xdc_Char)0x45,  /* [5355] */
    (xdc_Char)0x76,  /* [5356] */
    (xdc_Char)0x65,  /* [5357] */
    (xdc_Char)0x6e,  /* [5358] */
    (xdc_Char)0x74,  /* [5359] */
    (xdc_Char)0x73,  /* [5360] */
    (xdc_Char)0x3a,  /* [5361] */
    (xdc_Char)0x20,  /* [5362] */
    (xdc_Char)0x30,  /* [5363] */
    (xdc_Char)0x78,  /* [5364] */
    (xdc_Char)0x25,  /* [5365] */
    (xdc_Char)0x78,  /* [5366] */
    (xdc_Char)0x2c,  /* [5367] */
    (xdc_Char)0x20,  /* [5368] */
    (xdc_Char)0x65,  /* [5369] */
    (xdc_Char)0x76,  /* [5370] */
    (xdc_Char)0x65,  /* [5371] */
    (xdc_Char)0x6e,  /* [5372] */
    (xdc_Char)0x74,  /* [5373] */
    (xdc_Char)0x49,  /* [5374] */
    (xdc_Char)0x64,  /* [5375] */
    (xdc_Char)0x3a,  /* [5376] */
    (xdc_Char)0x20,  /* [5377] */
    (xdc_Char)0x30,  /* [5378] */
    (xdc_Char)0x78,  /* [5379] */
    (xdc_Char)0x25,  /* [5380] */
    (xdc_Char)0x78,  /* [5381] */
    (xdc_Char)0x0,  /* [5382] */
    (xdc_Char)0x4c,  /* [5383] */
    (xdc_Char)0x4d,  /* [5384] */
    (xdc_Char)0x5f,  /* [5385] */
    (xdc_Char)0x70,  /* [5386] */
    (xdc_Char)0x65,  /* [5387] */
    (xdc_Char)0x6e,  /* [5388] */
    (xdc_Char)0x64,  /* [5389] */
    (xdc_Char)0x3a,  /* [5390] */
    (xdc_Char)0x20,  /* [5391] */
    (xdc_Char)0x65,  /* [5392] */
    (xdc_Char)0x76,  /* [5393] */
    (xdc_Char)0x65,  /* [5394] */
    (xdc_Char)0x6e,  /* [5395] */
    (xdc_Char)0x74,  /* [5396] */
    (xdc_Char)0x3a,  /* [5397] */
    (xdc_Char)0x20,  /* [5398] */
    (xdc_Char)0x30,  /* [5399] */
    (xdc_Char)0x78,  /* [5400] */
    (xdc_Char)0x25,  /* [5401] */
    (xdc_Char)0x78,  /* [5402] */
    (xdc_Char)0x2c,  /* [5403] */
    (xdc_Char)0x20,  /* [5404] */
    (xdc_Char)0x63,  /* [5405] */
    (xdc_Char)0x75,  /* [5406] */
    (xdc_Char)0x72,  /* [5407] */
    (xdc_Char)0x72,  /* [5408] */
    (xdc_Char)0x45,  /* [5409] */
    (xdc_Char)0x76,  /* [5410] */
    (xdc_Char)0x65,  /* [5411] */
    (xdc_Char)0x6e,  /* [5412] */
    (xdc_Char)0x74,  /* [5413] */
    (xdc_Char)0x73,  /* [5414] */
    (xdc_Char)0x3a,  /* [5415] */
    (xdc_Char)0x20,  /* [5416] */
    (xdc_Char)0x30,  /* [5417] */
    (xdc_Char)0x78,  /* [5418] */
    (xdc_Char)0x25,  /* [5419] */
    (xdc_Char)0x78,  /* [5420] */
    (xdc_Char)0x2c,  /* [5421] */
    (xdc_Char)0x20,  /* [5422] */
    (xdc_Char)0x61,  /* [5423] */
    (xdc_Char)0x6e,  /* [5424] */
    (xdc_Char)0x64,  /* [5425] */
    (xdc_Char)0x4d,  /* [5426] */
    (xdc_Char)0x61,  /* [5427] */
    (xdc_Char)0x73,  /* [5428] */
    (xdc_Char)0x6b,  /* [5429] */
    (xdc_Char)0x3a,  /* [5430] */
    (xdc_Char)0x20,  /* [5431] */
    (xdc_Char)0x30,  /* [5432] */
    (xdc_Char)0x78,  /* [5433] */
    (xdc_Char)0x25,  /* [5434] */
    (xdc_Char)0x78,  /* [5435] */
    (xdc_Char)0x2c,  /* [5436] */
    (xdc_Char)0x20,  /* [5437] */
    (xdc_Char)0x6f,  /* [5438] */
    (xdc_Char)0x72,  /* [5439] */
    (xdc_Char)0x4d,  /* [5440] */
    (xdc_Char)0x61,  /* [5441] */
    (xdc_Char)0x73,  /* [5442] */
    (xdc_Char)0x6b,  /* [5443] */
    (xdc_Char)0x3a,  /* [5444] */
    (xdc_Char)0x20,  /* [5445] */
    (xdc_Char)0x30,  /* [5446] */
    (xdc_Char)0x78,  /* [5447] */
    (xdc_Char)0x25,  /* [5448] */
    (xdc_Char)0x78,  /* [5449] */
    (xdc_Char)0x2c,  /* [5450] */
    (xdc_Char)0x20,  /* [5451] */
    (xdc_Char)0x74,  /* [5452] */
    (xdc_Char)0x69,  /* [5453] */
    (xdc_Char)0x6d,  /* [5454] */
    (xdc_Char)0x65,  /* [5455] */
    (xdc_Char)0x6f,  /* [5456] */
    (xdc_Char)0x75,  /* [5457] */
    (xdc_Char)0x74,  /* [5458] */
    (xdc_Char)0x3a,  /* [5459] */
    (xdc_Char)0x20,  /* [5460] */
    (xdc_Char)0x25,  /* [5461] */
    (xdc_Char)0x64,  /* [5462] */
    (xdc_Char)0x0,  /* [5463] */
    (xdc_Char)0x4c,  /* [5464] */
    (xdc_Char)0x4d,  /* [5465] */
    (xdc_Char)0x5f,  /* [5466] */
    (xdc_Char)0x70,  /* [5467] */
    (xdc_Char)0x6f,  /* [5468] */
    (xdc_Char)0x73,  /* [5469] */
    (xdc_Char)0x74,  /* [5470] */
    (xdc_Char)0x3a,  /* [5471] */
    (xdc_Char)0x20,  /* [5472] */
    (xdc_Char)0x73,  /* [5473] */
    (xdc_Char)0x65,  /* [5474] */
    (xdc_Char)0x6d,  /* [5475] */
    (xdc_Char)0x3a,  /* [5476] */
    (xdc_Char)0x20,  /* [5477] */
    (xdc_Char)0x30,  /* [5478] */
    (xdc_Char)0x78,  /* [5479] */
    (xdc_Char)0x25,  /* [5480] */
    (xdc_Char)0x78,  /* [5481] */
    (xdc_Char)0x2c,  /* [5482] */
    (xdc_Char)0x20,  /* [5483] */
    (xdc_Char)0x63,  /* [5484] */
    (xdc_Char)0x6f,  /* [5485] */
    (xdc_Char)0x75,  /* [5486] */
    (xdc_Char)0x6e,  /* [5487] */
    (xdc_Char)0x74,  /* [5488] */
    (xdc_Char)0x3a,  /* [5489] */
    (xdc_Char)0x20,  /* [5490] */
    (xdc_Char)0x25,  /* [5491] */
    (xdc_Char)0x64,  /* [5492] */
    (xdc_Char)0x0,  /* [5493] */
    (xdc_Char)0x4c,  /* [5494] */
    (xdc_Char)0x4d,  /* [5495] */
    (xdc_Char)0x5f,  /* [5496] */
    (xdc_Char)0x70,  /* [5497] */
    (xdc_Char)0x65,  /* [5498] */
    (xdc_Char)0x6e,  /* [5499] */
    (xdc_Char)0x64,  /* [5500] */
    (xdc_Char)0x3a,  /* [5501] */
    (xdc_Char)0x20,  /* [5502] */
    (xdc_Char)0x73,  /* [5503] */
    (xdc_Char)0x65,  /* [5504] */
    (xdc_Char)0x6d,  /* [5505] */
    (xdc_Char)0x3a,  /* [5506] */
    (xdc_Char)0x20,  /* [5507] */
    (xdc_Char)0x30,  /* [5508] */
    (xdc_Char)0x78,  /* [5509] */
    (xdc_Char)0x25,  /* [5510] */
    (xdc_Char)0x78,  /* [5511] */
    (xdc_Char)0x2c,  /* [5512] */
    (xdc_Char)0x20,  /* [5513] */
    (xdc_Char)0x63,  /* [5514] */
    (xdc_Char)0x6f,  /* [5515] */
    (xdc_Char)0x75,  /* [5516] */
    (xdc_Char)0x6e,  /* [5517] */
    (xdc_Char)0x74,  /* [5518] */
    (xdc_Char)0x3a,  /* [5519] */
    (xdc_Char)0x20,  /* [5520] */
    (xdc_Char)0x25,  /* [5521] */
    (xdc_Char)0x64,  /* [5522] */
    (xdc_Char)0x2c,  /* [5523] */
    (xdc_Char)0x20,  /* [5524] */
    (xdc_Char)0x74,  /* [5525] */
    (xdc_Char)0x69,  /* [5526] */
    (xdc_Char)0x6d,  /* [5527] */
    (xdc_Char)0x65,  /* [5528] */
    (xdc_Char)0x6f,  /* [5529] */
    (xdc_Char)0x75,  /* [5530] */
    (xdc_Char)0x74,  /* [5531] */
    (xdc_Char)0x3a,  /* [5532] */
    (xdc_Char)0x20,  /* [5533] */
    (xdc_Char)0x25,  /* [5534] */
    (xdc_Char)0x64,  /* [5535] */
    (xdc_Char)0x0,  /* [5536] */
    (xdc_Char)0x4c,  /* [5537] */
    (xdc_Char)0x4d,  /* [5538] */
    (xdc_Char)0x5f,  /* [5539] */
    (xdc_Char)0x62,  /* [5540] */
    (xdc_Char)0x65,  /* [5541] */
    (xdc_Char)0x67,  /* [5542] */
    (xdc_Char)0x69,  /* [5543] */
    (xdc_Char)0x6e,  /* [5544] */
    (xdc_Char)0x3a,  /* [5545] */
    (xdc_Char)0x20,  /* [5546] */
    (xdc_Char)0x73,  /* [5547] */
    (xdc_Char)0x77,  /* [5548] */
    (xdc_Char)0x69,  /* [5549] */
    (xdc_Char)0x3a,  /* [5550] */
    (xdc_Char)0x20,  /* [5551] */
    (xdc_Char)0x30,  /* [5552] */
    (xdc_Char)0x78,  /* [5553] */
    (xdc_Char)0x25,  /* [5554] */
    (xdc_Char)0x78,  /* [5555] */
    (xdc_Char)0x2c,  /* [5556] */
    (xdc_Char)0x20,  /* [5557] */
    (xdc_Char)0x66,  /* [5558] */
    (xdc_Char)0x75,  /* [5559] */
    (xdc_Char)0x6e,  /* [5560] */
    (xdc_Char)0x63,  /* [5561] */
    (xdc_Char)0x3a,  /* [5562] */
    (xdc_Char)0x20,  /* [5563] */
    (xdc_Char)0x30,  /* [5564] */
    (xdc_Char)0x78,  /* [5565] */
    (xdc_Char)0x25,  /* [5566] */
    (xdc_Char)0x78,  /* [5567] */
    (xdc_Char)0x2c,  /* [5568] */
    (xdc_Char)0x20,  /* [5569] */
    (xdc_Char)0x70,  /* [5570] */
    (xdc_Char)0x72,  /* [5571] */
    (xdc_Char)0x65,  /* [5572] */
    (xdc_Char)0x54,  /* [5573] */
    (xdc_Char)0x68,  /* [5574] */
    (xdc_Char)0x72,  /* [5575] */
    (xdc_Char)0x65,  /* [5576] */
    (xdc_Char)0x61,  /* [5577] */
    (xdc_Char)0x64,  /* [5578] */
    (xdc_Char)0x3a,  /* [5579] */
    (xdc_Char)0x20,  /* [5580] */
    (xdc_Char)0x25,  /* [5581] */
    (xdc_Char)0x64,  /* [5582] */
    (xdc_Char)0x0,  /* [5583] */
    (xdc_Char)0x4c,  /* [5584] */
    (xdc_Char)0x44,  /* [5585] */
    (xdc_Char)0x5f,  /* [5586] */
    (xdc_Char)0x65,  /* [5587] */
    (xdc_Char)0x6e,  /* [5588] */
    (xdc_Char)0x64,  /* [5589] */
    (xdc_Char)0x3a,  /* [5590] */
    (xdc_Char)0x20,  /* [5591] */
    (xdc_Char)0x73,  /* [5592] */
    (xdc_Char)0x77,  /* [5593] */
    (xdc_Char)0x69,  /* [5594] */
    (xdc_Char)0x3a,  /* [5595] */
    (xdc_Char)0x20,  /* [5596] */
    (xdc_Char)0x30,  /* [5597] */
    (xdc_Char)0x78,  /* [5598] */
    (xdc_Char)0x25,  /* [5599] */
    (xdc_Char)0x78,  /* [5600] */
    (xdc_Char)0x0,  /* [5601] */
    (xdc_Char)0x4c,  /* [5602] */
    (xdc_Char)0x4d,  /* [5603] */
    (xdc_Char)0x5f,  /* [5604] */
    (xdc_Char)0x70,  /* [5605] */
    (xdc_Char)0x6f,  /* [5606] */
    (xdc_Char)0x73,  /* [5607] */
    (xdc_Char)0x74,  /* [5608] */
    (xdc_Char)0x3a,  /* [5609] */
    (xdc_Char)0x20,  /* [5610] */
    (xdc_Char)0x73,  /* [5611] */
    (xdc_Char)0x77,  /* [5612] */
    (xdc_Char)0x69,  /* [5613] */
    (xdc_Char)0x3a,  /* [5614] */
    (xdc_Char)0x20,  /* [5615] */
    (xdc_Char)0x30,  /* [5616] */
    (xdc_Char)0x78,  /* [5617] */
    (xdc_Char)0x25,  /* [5618] */
    (xdc_Char)0x78,  /* [5619] */
    (xdc_Char)0x2c,  /* [5620] */
    (xdc_Char)0x20,  /* [5621] */
    (xdc_Char)0x66,  /* [5622] */
    (xdc_Char)0x75,  /* [5623] */
    (xdc_Char)0x6e,  /* [5624] */
    (xdc_Char)0x63,  /* [5625] */
    (xdc_Char)0x3a,  /* [5626] */
    (xdc_Char)0x20,  /* [5627] */
    (xdc_Char)0x30,  /* [5628] */
    (xdc_Char)0x78,  /* [5629] */
    (xdc_Char)0x25,  /* [5630] */
    (xdc_Char)0x78,  /* [5631] */
    (xdc_Char)0x2c,  /* [5632] */
    (xdc_Char)0x20,  /* [5633] */
    (xdc_Char)0x70,  /* [5634] */
    (xdc_Char)0x72,  /* [5635] */
    (xdc_Char)0x69,  /* [5636] */
    (xdc_Char)0x3a,  /* [5637] */
    (xdc_Char)0x20,  /* [5638] */
    (xdc_Char)0x25,  /* [5639] */
    (xdc_Char)0x64,  /* [5640] */
    (xdc_Char)0x0,  /* [5641] */
    (xdc_Char)0x4c,  /* [5642] */
    (xdc_Char)0x4d,  /* [5643] */
    (xdc_Char)0x5f,  /* [5644] */
    (xdc_Char)0x73,  /* [5645] */
    (xdc_Char)0x77,  /* [5646] */
    (xdc_Char)0x69,  /* [5647] */
    (xdc_Char)0x74,  /* [5648] */
    (xdc_Char)0x63,  /* [5649] */
    (xdc_Char)0x68,  /* [5650] */
    (xdc_Char)0x3a,  /* [5651] */
    (xdc_Char)0x20,  /* [5652] */
    (xdc_Char)0x6f,  /* [5653] */
    (xdc_Char)0x6c,  /* [5654] */
    (xdc_Char)0x64,  /* [5655] */
    (xdc_Char)0x74,  /* [5656] */
    (xdc_Char)0x73,  /* [5657] */
    (xdc_Char)0x6b,  /* [5658] */
    (xdc_Char)0x3a,  /* [5659] */
    (xdc_Char)0x20,  /* [5660] */
    (xdc_Char)0x30,  /* [5661] */
    (xdc_Char)0x78,  /* [5662] */
    (xdc_Char)0x25,  /* [5663] */
    (xdc_Char)0x78,  /* [5664] */
    (xdc_Char)0x2c,  /* [5665] */
    (xdc_Char)0x20,  /* [5666] */
    (xdc_Char)0x6f,  /* [5667] */
    (xdc_Char)0x6c,  /* [5668] */
    (xdc_Char)0x64,  /* [5669] */
    (xdc_Char)0x66,  /* [5670] */
    (xdc_Char)0x75,  /* [5671] */
    (xdc_Char)0x6e,  /* [5672] */
    (xdc_Char)0x63,  /* [5673] */
    (xdc_Char)0x3a,  /* [5674] */
    (xdc_Char)0x20,  /* [5675] */
    (xdc_Char)0x30,  /* [5676] */
    (xdc_Char)0x78,  /* [5677] */
    (xdc_Char)0x25,  /* [5678] */
    (xdc_Char)0x78,  /* [5679] */
    (xdc_Char)0x2c,  /* [5680] */
    (xdc_Char)0x20,  /* [5681] */
    (xdc_Char)0x6e,  /* [5682] */
    (xdc_Char)0x65,  /* [5683] */
    (xdc_Char)0x77,  /* [5684] */
    (xdc_Char)0x74,  /* [5685] */
    (xdc_Char)0x73,  /* [5686] */
    (xdc_Char)0x6b,  /* [5687] */
    (xdc_Char)0x3a,  /* [5688] */
    (xdc_Char)0x20,  /* [5689] */
    (xdc_Char)0x30,  /* [5690] */
    (xdc_Char)0x78,  /* [5691] */
    (xdc_Char)0x25,  /* [5692] */
    (xdc_Char)0x78,  /* [5693] */
    (xdc_Char)0x2c,  /* [5694] */
    (xdc_Char)0x20,  /* [5695] */
    (xdc_Char)0x6e,  /* [5696] */
    (xdc_Char)0x65,  /* [5697] */
    (xdc_Char)0x77,  /* [5698] */
    (xdc_Char)0x66,  /* [5699] */
    (xdc_Char)0x75,  /* [5700] */
    (xdc_Char)0x6e,  /* [5701] */
    (xdc_Char)0x63,  /* [5702] */
    (xdc_Char)0x3a,  /* [5703] */
    (xdc_Char)0x20,  /* [5704] */
    (xdc_Char)0x30,  /* [5705] */
    (xdc_Char)0x78,  /* [5706] */
    (xdc_Char)0x25,  /* [5707] */
    (xdc_Char)0x78,  /* [5708] */
    (xdc_Char)0x0,  /* [5709] */
    (xdc_Char)0x4c,  /* [5710] */
    (xdc_Char)0x4d,  /* [5711] */
    (xdc_Char)0x5f,  /* [5712] */
    (xdc_Char)0x73,  /* [5713] */
    (xdc_Char)0x6c,  /* [5714] */
    (xdc_Char)0x65,  /* [5715] */
    (xdc_Char)0x65,  /* [5716] */
    (xdc_Char)0x70,  /* [5717] */
    (xdc_Char)0x3a,  /* [5718] */
    (xdc_Char)0x20,  /* [5719] */
    (xdc_Char)0x74,  /* [5720] */
    (xdc_Char)0x73,  /* [5721] */
    (xdc_Char)0x6b,  /* [5722] */
    (xdc_Char)0x3a,  /* [5723] */
    (xdc_Char)0x20,  /* [5724] */
    (xdc_Char)0x30,  /* [5725] */
    (xdc_Char)0x78,  /* [5726] */
    (xdc_Char)0x25,  /* [5727] */
    (xdc_Char)0x78,  /* [5728] */
    (xdc_Char)0x2c,  /* [5729] */
    (xdc_Char)0x20,  /* [5730] */
    (xdc_Char)0x66,  /* [5731] */
    (xdc_Char)0x75,  /* [5732] */
    (xdc_Char)0x6e,  /* [5733] */
    (xdc_Char)0x63,  /* [5734] */
    (xdc_Char)0x3a,  /* [5735] */
    (xdc_Char)0x20,  /* [5736] */
    (xdc_Char)0x30,  /* [5737] */
    (xdc_Char)0x78,  /* [5738] */
    (xdc_Char)0x25,  /* [5739] */
    (xdc_Char)0x78,  /* [5740] */
    (xdc_Char)0x2c,  /* [5741] */
    (xdc_Char)0x20,  /* [5742] */
    (xdc_Char)0x74,  /* [5743] */
    (xdc_Char)0x69,  /* [5744] */
    (xdc_Char)0x6d,  /* [5745] */
    (xdc_Char)0x65,  /* [5746] */
    (xdc_Char)0x6f,  /* [5747] */
    (xdc_Char)0x75,  /* [5748] */
    (xdc_Char)0x74,  /* [5749] */
    (xdc_Char)0x3a,  /* [5750] */
    (xdc_Char)0x20,  /* [5751] */
    (xdc_Char)0x25,  /* [5752] */
    (xdc_Char)0x64,  /* [5753] */
    (xdc_Char)0x0,  /* [5754] */
    (xdc_Char)0x4c,  /* [5755] */
    (xdc_Char)0x44,  /* [5756] */
    (xdc_Char)0x5f,  /* [5757] */
    (xdc_Char)0x72,  /* [5758] */
    (xdc_Char)0x65,  /* [5759] */
    (xdc_Char)0x61,  /* [5760] */
    (xdc_Char)0x64,  /* [5761] */
    (xdc_Char)0x79,  /* [5762] */
    (xdc_Char)0x3a,  /* [5763] */
    (xdc_Char)0x20,  /* [5764] */
    (xdc_Char)0x74,  /* [5765] */
    (xdc_Char)0x73,  /* [5766] */
    (xdc_Char)0x6b,  /* [5767] */
    (xdc_Char)0x3a,  /* [5768] */
    (xdc_Char)0x20,  /* [5769] */
    (xdc_Char)0x30,  /* [5770] */
    (xdc_Char)0x78,  /* [5771] */
    (xdc_Char)0x25,  /* [5772] */
    (xdc_Char)0x78,  /* [5773] */
    (xdc_Char)0x2c,  /* [5774] */
    (xdc_Char)0x20,  /* [5775] */
    (xdc_Char)0x66,  /* [5776] */
    (xdc_Char)0x75,  /* [5777] */
    (xdc_Char)0x6e,  /* [5778] */
    (xdc_Char)0x63,  /* [5779] */
    (xdc_Char)0x3a,  /* [5780] */
    (xdc_Char)0x20,  /* [5781] */
    (xdc_Char)0x30,  /* [5782] */
    (xdc_Char)0x78,  /* [5783] */
    (xdc_Char)0x25,  /* [5784] */
    (xdc_Char)0x78,  /* [5785] */
    (xdc_Char)0x2c,  /* [5786] */
    (xdc_Char)0x20,  /* [5787] */
    (xdc_Char)0x70,  /* [5788] */
    (xdc_Char)0x72,  /* [5789] */
    (xdc_Char)0x69,  /* [5790] */
    (xdc_Char)0x3a,  /* [5791] */
    (xdc_Char)0x20,  /* [5792] */
    (xdc_Char)0x25,  /* [5793] */
    (xdc_Char)0x64,  /* [5794] */
    (xdc_Char)0x0,  /* [5795] */
    (xdc_Char)0x4c,  /* [5796] */
    (xdc_Char)0x44,  /* [5797] */
    (xdc_Char)0x5f,  /* [5798] */
    (xdc_Char)0x62,  /* [5799] */
    (xdc_Char)0x6c,  /* [5800] */
    (xdc_Char)0x6f,  /* [5801] */
    (xdc_Char)0x63,  /* [5802] */
    (xdc_Char)0x6b,  /* [5803] */
    (xdc_Char)0x3a,  /* [5804] */
    (xdc_Char)0x20,  /* [5805] */
    (xdc_Char)0x74,  /* [5806] */
    (xdc_Char)0x73,  /* [5807] */
    (xdc_Char)0x6b,  /* [5808] */
    (xdc_Char)0x3a,  /* [5809] */
    (xdc_Char)0x20,  /* [5810] */
    (xdc_Char)0x30,  /* [5811] */
    (xdc_Char)0x78,  /* [5812] */
    (xdc_Char)0x25,  /* [5813] */
    (xdc_Char)0x78,  /* [5814] */
    (xdc_Char)0x2c,  /* [5815] */
    (xdc_Char)0x20,  /* [5816] */
    (xdc_Char)0x66,  /* [5817] */
    (xdc_Char)0x75,  /* [5818] */
    (xdc_Char)0x6e,  /* [5819] */
    (xdc_Char)0x63,  /* [5820] */
    (xdc_Char)0x3a,  /* [5821] */
    (xdc_Char)0x20,  /* [5822] */
    (xdc_Char)0x30,  /* [5823] */
    (xdc_Char)0x78,  /* [5824] */
    (xdc_Char)0x25,  /* [5825] */
    (xdc_Char)0x78,  /* [5826] */
    (xdc_Char)0x0,  /* [5827] */
    (xdc_Char)0x4c,  /* [5828] */
    (xdc_Char)0x4d,  /* [5829] */
    (xdc_Char)0x5f,  /* [5830] */
    (xdc_Char)0x79,  /* [5831] */
    (xdc_Char)0x69,  /* [5832] */
    (xdc_Char)0x65,  /* [5833] */
    (xdc_Char)0x6c,  /* [5834] */
    (xdc_Char)0x64,  /* [5835] */
    (xdc_Char)0x3a,  /* [5836] */
    (xdc_Char)0x20,  /* [5837] */
    (xdc_Char)0x74,  /* [5838] */
    (xdc_Char)0x73,  /* [5839] */
    (xdc_Char)0x6b,  /* [5840] */
    (xdc_Char)0x3a,  /* [5841] */
    (xdc_Char)0x20,  /* [5842] */
    (xdc_Char)0x30,  /* [5843] */
    (xdc_Char)0x78,  /* [5844] */
    (xdc_Char)0x25,  /* [5845] */
    (xdc_Char)0x78,  /* [5846] */
    (xdc_Char)0x2c,  /* [5847] */
    (xdc_Char)0x20,  /* [5848] */
    (xdc_Char)0x66,  /* [5849] */
    (xdc_Char)0x75,  /* [5850] */
    (xdc_Char)0x6e,  /* [5851] */
    (xdc_Char)0x63,  /* [5852] */
    (xdc_Char)0x3a,  /* [5853] */
    (xdc_Char)0x20,  /* [5854] */
    (xdc_Char)0x30,  /* [5855] */
    (xdc_Char)0x78,  /* [5856] */
    (xdc_Char)0x25,  /* [5857] */
    (xdc_Char)0x78,  /* [5858] */
    (xdc_Char)0x2c,  /* [5859] */
    (xdc_Char)0x20,  /* [5860] */
    (xdc_Char)0x63,  /* [5861] */
    (xdc_Char)0x75,  /* [5862] */
    (xdc_Char)0x72,  /* [5863] */
    (xdc_Char)0x72,  /* [5864] */
    (xdc_Char)0x54,  /* [5865] */
    (xdc_Char)0x68,  /* [5866] */
    (xdc_Char)0x72,  /* [5867] */
    (xdc_Char)0x65,  /* [5868] */
    (xdc_Char)0x61,  /* [5869] */
    (xdc_Char)0x64,  /* [5870] */
    (xdc_Char)0x3a,  /* [5871] */
    (xdc_Char)0x20,  /* [5872] */
    (xdc_Char)0x25,  /* [5873] */
    (xdc_Char)0x64,  /* [5874] */
    (xdc_Char)0x0,  /* [5875] */
    (xdc_Char)0x4c,  /* [5876] */
    (xdc_Char)0x4d,  /* [5877] */
    (xdc_Char)0x5f,  /* [5878] */
    (xdc_Char)0x73,  /* [5879] */
    (xdc_Char)0x65,  /* [5880] */
    (xdc_Char)0x74,  /* [5881] */
    (xdc_Char)0x50,  /* [5882] */
    (xdc_Char)0x72,  /* [5883] */
    (xdc_Char)0x69,  /* [5884] */
    (xdc_Char)0x3a,  /* [5885] */
    (xdc_Char)0x20,  /* [5886] */
    (xdc_Char)0x74,  /* [5887] */
    (xdc_Char)0x73,  /* [5888] */
    (xdc_Char)0x6b,  /* [5889] */
    (xdc_Char)0x3a,  /* [5890] */
    (xdc_Char)0x20,  /* [5891] */
    (xdc_Char)0x30,  /* [5892] */
    (xdc_Char)0x78,  /* [5893] */
    (xdc_Char)0x25,  /* [5894] */
    (xdc_Char)0x78,  /* [5895] */
    (xdc_Char)0x2c,  /* [5896] */
    (xdc_Char)0x20,  /* [5897] */
    (xdc_Char)0x66,  /* [5898] */
    (xdc_Char)0x75,  /* [5899] */
    (xdc_Char)0x6e,  /* [5900] */
    (xdc_Char)0x63,  /* [5901] */
    (xdc_Char)0x3a,  /* [5902] */
    (xdc_Char)0x20,  /* [5903] */
    (xdc_Char)0x30,  /* [5904] */
    (xdc_Char)0x78,  /* [5905] */
    (xdc_Char)0x25,  /* [5906] */
    (xdc_Char)0x78,  /* [5907] */
    (xdc_Char)0x2c,  /* [5908] */
    (xdc_Char)0x20,  /* [5909] */
    (xdc_Char)0x6f,  /* [5910] */
    (xdc_Char)0x6c,  /* [5911] */
    (xdc_Char)0x64,  /* [5912] */
    (xdc_Char)0x50,  /* [5913] */
    (xdc_Char)0x72,  /* [5914] */
    (xdc_Char)0x69,  /* [5915] */
    (xdc_Char)0x3a,  /* [5916] */
    (xdc_Char)0x20,  /* [5917] */
    (xdc_Char)0x25,  /* [5918] */
    (xdc_Char)0x64,  /* [5919] */
    (xdc_Char)0x2c,  /* [5920] */
    (xdc_Char)0x20,  /* [5921] */
    (xdc_Char)0x6e,  /* [5922] */
    (xdc_Char)0x65,  /* [5923] */
    (xdc_Char)0x77,  /* [5924] */
    (xdc_Char)0x50,  /* [5925] */
    (xdc_Char)0x72,  /* [5926] */
    (xdc_Char)0x69,  /* [5927] */
    (xdc_Char)0x20,  /* [5928] */
    (xdc_Char)0x25,  /* [5929] */
    (xdc_Char)0x64,  /* [5930] */
    (xdc_Char)0x0,  /* [5931] */
    (xdc_Char)0x4c,  /* [5932] */
    (xdc_Char)0x44,  /* [5933] */
    (xdc_Char)0x5f,  /* [5934] */
    (xdc_Char)0x65,  /* [5935] */
    (xdc_Char)0x78,  /* [5936] */
    (xdc_Char)0x69,  /* [5937] */
    (xdc_Char)0x74,  /* [5938] */
    (xdc_Char)0x3a,  /* [5939] */
    (xdc_Char)0x20,  /* [5940] */
    (xdc_Char)0x74,  /* [5941] */
    (xdc_Char)0x73,  /* [5942] */
    (xdc_Char)0x6b,  /* [5943] */
    (xdc_Char)0x3a,  /* [5944] */
    (xdc_Char)0x20,  /* [5945] */
    (xdc_Char)0x30,  /* [5946] */
    (xdc_Char)0x78,  /* [5947] */
    (xdc_Char)0x25,  /* [5948] */
    (xdc_Char)0x78,  /* [5949] */
    (xdc_Char)0x2c,  /* [5950] */
    (xdc_Char)0x20,  /* [5951] */
    (xdc_Char)0x66,  /* [5952] */
    (xdc_Char)0x75,  /* [5953] */
    (xdc_Char)0x6e,  /* [5954] */
    (xdc_Char)0x63,  /* [5955] */
    (xdc_Char)0x3a,  /* [5956] */
    (xdc_Char)0x20,  /* [5957] */
    (xdc_Char)0x30,  /* [5958] */
    (xdc_Char)0x78,  /* [5959] */
    (xdc_Char)0x25,  /* [5960] */
    (xdc_Char)0x78,  /* [5961] */
    (xdc_Char)0x0,  /* [5962] */
    (xdc_Char)0x4c,  /* [5963] */
    (xdc_Char)0x4d,  /* [5964] */
    (xdc_Char)0x5f,  /* [5965] */
    (xdc_Char)0x73,  /* [5966] */
    (xdc_Char)0x65,  /* [5967] */
    (xdc_Char)0x74,  /* [5968] */
    (xdc_Char)0x41,  /* [5969] */
    (xdc_Char)0x66,  /* [5970] */
    (xdc_Char)0x66,  /* [5971] */
    (xdc_Char)0x69,  /* [5972] */
    (xdc_Char)0x6e,  /* [5973] */
    (xdc_Char)0x69,  /* [5974] */
    (xdc_Char)0x74,  /* [5975] */
    (xdc_Char)0x79,  /* [5976] */
    (xdc_Char)0x3a,  /* [5977] */
    (xdc_Char)0x20,  /* [5978] */
    (xdc_Char)0x74,  /* [5979] */
    (xdc_Char)0x73,  /* [5980] */
    (xdc_Char)0x6b,  /* [5981] */
    (xdc_Char)0x3a,  /* [5982] */
    (xdc_Char)0x20,  /* [5983] */
    (xdc_Char)0x30,  /* [5984] */
    (xdc_Char)0x78,  /* [5985] */
    (xdc_Char)0x25,  /* [5986] */
    (xdc_Char)0x78,  /* [5987] */
    (xdc_Char)0x2c,  /* [5988] */
    (xdc_Char)0x20,  /* [5989] */
    (xdc_Char)0x66,  /* [5990] */
    (xdc_Char)0x75,  /* [5991] */
    (xdc_Char)0x6e,  /* [5992] */
    (xdc_Char)0x63,  /* [5993] */
    (xdc_Char)0x3a,  /* [5994] */
    (xdc_Char)0x20,  /* [5995] */
    (xdc_Char)0x30,  /* [5996] */
    (xdc_Char)0x78,  /* [5997] */
    (xdc_Char)0x25,  /* [5998] */
    (xdc_Char)0x78,  /* [5999] */
    (xdc_Char)0x2c,  /* [6000] */
    (xdc_Char)0x20,  /* [6001] */
    (xdc_Char)0x6f,  /* [6002] */
    (xdc_Char)0x6c,  /* [6003] */
    (xdc_Char)0x64,  /* [6004] */
    (xdc_Char)0x43,  /* [6005] */
    (xdc_Char)0x6f,  /* [6006] */
    (xdc_Char)0x72,  /* [6007] */
    (xdc_Char)0x65,  /* [6008] */
    (xdc_Char)0x3a,  /* [6009] */
    (xdc_Char)0x20,  /* [6010] */
    (xdc_Char)0x25,  /* [6011] */
    (xdc_Char)0x64,  /* [6012] */
    (xdc_Char)0x2c,  /* [6013] */
    (xdc_Char)0x20,  /* [6014] */
    (xdc_Char)0x6f,  /* [6015] */
    (xdc_Char)0x6c,  /* [6016] */
    (xdc_Char)0x64,  /* [6017] */
    (xdc_Char)0x41,  /* [6018] */
    (xdc_Char)0x66,  /* [6019] */
    (xdc_Char)0x66,  /* [6020] */
    (xdc_Char)0x69,  /* [6021] */
    (xdc_Char)0x6e,  /* [6022] */
    (xdc_Char)0x69,  /* [6023] */
    (xdc_Char)0x74,  /* [6024] */
    (xdc_Char)0x79,  /* [6025] */
    (xdc_Char)0x20,  /* [6026] */
    (xdc_Char)0x25,  /* [6027] */
    (xdc_Char)0x64,  /* [6028] */
    (xdc_Char)0x2c,  /* [6029] */
    (xdc_Char)0x20,  /* [6030] */
    (xdc_Char)0x6e,  /* [6031] */
    (xdc_Char)0x65,  /* [6032] */
    (xdc_Char)0x77,  /* [6033] */
    (xdc_Char)0x41,  /* [6034] */
    (xdc_Char)0x66,  /* [6035] */
    (xdc_Char)0x66,  /* [6036] */
    (xdc_Char)0x69,  /* [6037] */
    (xdc_Char)0x6e,  /* [6038] */
    (xdc_Char)0x69,  /* [6039] */
    (xdc_Char)0x74,  /* [6040] */
    (xdc_Char)0x79,  /* [6041] */
    (xdc_Char)0x20,  /* [6042] */
    (xdc_Char)0x25,  /* [6043] */
    (xdc_Char)0x64,  /* [6044] */
    (xdc_Char)0x0,  /* [6045] */
    (xdc_Char)0x4c,  /* [6046] */
    (xdc_Char)0x44,  /* [6047] */
    (xdc_Char)0x5f,  /* [6048] */
    (xdc_Char)0x73,  /* [6049] */
    (xdc_Char)0x63,  /* [6050] */
    (xdc_Char)0x68,  /* [6051] */
    (xdc_Char)0x65,  /* [6052] */
    (xdc_Char)0x64,  /* [6053] */
    (xdc_Char)0x75,  /* [6054] */
    (xdc_Char)0x6c,  /* [6055] */
    (xdc_Char)0x65,  /* [6056] */
    (xdc_Char)0x3a,  /* [6057] */
    (xdc_Char)0x20,  /* [6058] */
    (xdc_Char)0x63,  /* [6059] */
    (xdc_Char)0x6f,  /* [6060] */
    (xdc_Char)0x72,  /* [6061] */
    (xdc_Char)0x65,  /* [6062] */
    (xdc_Char)0x49,  /* [6063] */
    (xdc_Char)0x64,  /* [6064] */
    (xdc_Char)0x3a,  /* [6065] */
    (xdc_Char)0x20,  /* [6066] */
    (xdc_Char)0x25,  /* [6067] */
    (xdc_Char)0x64,  /* [6068] */
    (xdc_Char)0x2c,  /* [6069] */
    (xdc_Char)0x20,  /* [6070] */
    (xdc_Char)0x77,  /* [6071] */
    (xdc_Char)0x6f,  /* [6072] */
    (xdc_Char)0x72,  /* [6073] */
    (xdc_Char)0x6b,  /* [6074] */
    (xdc_Char)0x46,  /* [6075] */
    (xdc_Char)0x6c,  /* [6076] */
    (xdc_Char)0x61,  /* [6077] */
    (xdc_Char)0x67,  /* [6078] */
    (xdc_Char)0x3a,  /* [6079] */
    (xdc_Char)0x20,  /* [6080] */
    (xdc_Char)0x25,  /* [6081] */
    (xdc_Char)0x64,  /* [6082] */
    (xdc_Char)0x2c,  /* [6083] */
    (xdc_Char)0x20,  /* [6084] */
    (xdc_Char)0x63,  /* [6085] */
    (xdc_Char)0x75,  /* [6086] */
    (xdc_Char)0x72,  /* [6087] */
    (xdc_Char)0x53,  /* [6088] */
    (xdc_Char)0x65,  /* [6089] */
    (xdc_Char)0x74,  /* [6090] */
    (xdc_Char)0x4c,  /* [6091] */
    (xdc_Char)0x6f,  /* [6092] */
    (xdc_Char)0x63,  /* [6093] */
    (xdc_Char)0x61,  /* [6094] */
    (xdc_Char)0x6c,  /* [6095] */
    (xdc_Char)0x3a,  /* [6096] */
    (xdc_Char)0x20,  /* [6097] */
    (xdc_Char)0x25,  /* [6098] */
    (xdc_Char)0x64,  /* [6099] */
    (xdc_Char)0x2c,  /* [6100] */
    (xdc_Char)0x20,  /* [6101] */
    (xdc_Char)0x63,  /* [6102] */
    (xdc_Char)0x75,  /* [6103] */
    (xdc_Char)0x72,  /* [6104] */
    (xdc_Char)0x53,  /* [6105] */
    (xdc_Char)0x65,  /* [6106] */
    (xdc_Char)0x74,  /* [6107] */
    (xdc_Char)0x58,  /* [6108] */
    (xdc_Char)0x3a,  /* [6109] */
    (xdc_Char)0x20,  /* [6110] */
    (xdc_Char)0x25,  /* [6111] */
    (xdc_Char)0x64,  /* [6112] */
    (xdc_Char)0x2c,  /* [6113] */
    (xdc_Char)0x20,  /* [6114] */
    (xdc_Char)0x63,  /* [6115] */
    (xdc_Char)0x75,  /* [6116] */
    (xdc_Char)0x72,  /* [6117] */
    (xdc_Char)0x4d,  /* [6118] */
    (xdc_Char)0x61,  /* [6119] */
    (xdc_Char)0x73,  /* [6120] */
    (xdc_Char)0x6b,  /* [6121] */
    (xdc_Char)0x4c,  /* [6122] */
    (xdc_Char)0x6f,  /* [6123] */
    (xdc_Char)0x63,  /* [6124] */
    (xdc_Char)0x61,  /* [6125] */
    (xdc_Char)0x6c,  /* [6126] */
    (xdc_Char)0x3a,  /* [6127] */
    (xdc_Char)0x20,  /* [6128] */
    (xdc_Char)0x25,  /* [6129] */
    (xdc_Char)0x64,  /* [6130] */
    (xdc_Char)0x0,  /* [6131] */
    (xdc_Char)0x4c,  /* [6132] */
    (xdc_Char)0x44,  /* [6133] */
    (xdc_Char)0x5f,  /* [6134] */
    (xdc_Char)0x6e,  /* [6135] */
    (xdc_Char)0x6f,  /* [6136] */
    (xdc_Char)0x57,  /* [6137] */
    (xdc_Char)0x6f,  /* [6138] */
    (xdc_Char)0x72,  /* [6139] */
    (xdc_Char)0x6b,  /* [6140] */
    (xdc_Char)0x3a,  /* [6141] */
    (xdc_Char)0x20,  /* [6142] */
    (xdc_Char)0x63,  /* [6143] */
    (xdc_Char)0x6f,  /* [6144] */
    (xdc_Char)0x72,  /* [6145] */
    (xdc_Char)0x65,  /* [6146] */
    (xdc_Char)0x49,  /* [6147] */
    (xdc_Char)0x64,  /* [6148] */
    (xdc_Char)0x3a,  /* [6149] */
    (xdc_Char)0x20,  /* [6150] */
    (xdc_Char)0x25,  /* [6151] */
    (xdc_Char)0x64,  /* [6152] */
    (xdc_Char)0x2c,  /* [6153] */
    (xdc_Char)0x20,  /* [6154] */
    (xdc_Char)0x63,  /* [6155] */
    (xdc_Char)0x75,  /* [6156] */
    (xdc_Char)0x72,  /* [6157] */
    (xdc_Char)0x53,  /* [6158] */
    (xdc_Char)0x65,  /* [6159] */
    (xdc_Char)0x74,  /* [6160] */
    (xdc_Char)0x4c,  /* [6161] */
    (xdc_Char)0x6f,  /* [6162] */
    (xdc_Char)0x63,  /* [6163] */
    (xdc_Char)0x61,  /* [6164] */
    (xdc_Char)0x6c,  /* [6165] */
    (xdc_Char)0x3a,  /* [6166] */
    (xdc_Char)0x20,  /* [6167] */
    (xdc_Char)0x25,  /* [6168] */
    (xdc_Char)0x64,  /* [6169] */
    (xdc_Char)0x2c,  /* [6170] */
    (xdc_Char)0x20,  /* [6171] */
    (xdc_Char)0x63,  /* [6172] */
    (xdc_Char)0x75,  /* [6173] */
    (xdc_Char)0x72,  /* [6174] */
    (xdc_Char)0x53,  /* [6175] */
    (xdc_Char)0x65,  /* [6176] */
    (xdc_Char)0x74,  /* [6177] */
    (xdc_Char)0x58,  /* [6178] */
    (xdc_Char)0x3a,  /* [6179] */
    (xdc_Char)0x20,  /* [6180] */
    (xdc_Char)0x25,  /* [6181] */
    (xdc_Char)0x64,  /* [6182] */
    (xdc_Char)0x2c,  /* [6183] */
    (xdc_Char)0x20,  /* [6184] */
    (xdc_Char)0x63,  /* [6185] */
    (xdc_Char)0x75,  /* [6186] */
    (xdc_Char)0x72,  /* [6187] */
    (xdc_Char)0x4d,  /* [6188] */
    (xdc_Char)0x61,  /* [6189] */
    (xdc_Char)0x73,  /* [6190] */
    (xdc_Char)0x6b,  /* [6191] */
    (xdc_Char)0x4c,  /* [6192] */
    (xdc_Char)0x6f,  /* [6193] */
    (xdc_Char)0x63,  /* [6194] */
    (xdc_Char)0x61,  /* [6195] */
    (xdc_Char)0x6c,  /* [6196] */
    (xdc_Char)0x3a,  /* [6197] */
    (xdc_Char)0x20,  /* [6198] */
    (xdc_Char)0x25,  /* [6199] */
    (xdc_Char)0x64,  /* [6200] */
    (xdc_Char)0x0,  /* [6201] */
    (xdc_Char)0x4c,  /* [6202] */
    (xdc_Char)0x53,  /* [6203] */
    (xdc_Char)0x5f,  /* [6204] */
    (xdc_Char)0x63,  /* [6205] */
    (xdc_Char)0x70,  /* [6206] */
    (xdc_Char)0x75,  /* [6207] */
    (xdc_Char)0x4c,  /* [6208] */
    (xdc_Char)0x6f,  /* [6209] */
    (xdc_Char)0x61,  /* [6210] */
    (xdc_Char)0x64,  /* [6211] */
    (xdc_Char)0x3a,  /* [6212] */
    (xdc_Char)0x20,  /* [6213] */
    (xdc_Char)0x25,  /* [6214] */
    (xdc_Char)0x64,  /* [6215] */
    (xdc_Char)0x25,  /* [6216] */
    (xdc_Char)0x25,  /* [6217] */
    (xdc_Char)0x0,  /* [6218] */
    (xdc_Char)0x4c,  /* [6219] */
    (xdc_Char)0x53,  /* [6220] */
    (xdc_Char)0x5f,  /* [6221] */
    (xdc_Char)0x68,  /* [6222] */
    (xdc_Char)0x77,  /* [6223] */
    (xdc_Char)0x69,  /* [6224] */
    (xdc_Char)0x4c,  /* [6225] */
    (xdc_Char)0x6f,  /* [6226] */
    (xdc_Char)0x61,  /* [6227] */
    (xdc_Char)0x64,  /* [6228] */
    (xdc_Char)0x3a,  /* [6229] */
    (xdc_Char)0x20,  /* [6230] */
    (xdc_Char)0x25,  /* [6231] */
    (xdc_Char)0x64,  /* [6232] */
    (xdc_Char)0x2c,  /* [6233] */
    (xdc_Char)0x25,  /* [6234] */
    (xdc_Char)0x64,  /* [6235] */
    (xdc_Char)0x0,  /* [6236] */
    (xdc_Char)0x4c,  /* [6237] */
    (xdc_Char)0x53,  /* [6238] */
    (xdc_Char)0x5f,  /* [6239] */
    (xdc_Char)0x73,  /* [6240] */
    (xdc_Char)0x77,  /* [6241] */
    (xdc_Char)0x69,  /* [6242] */
    (xdc_Char)0x4c,  /* [6243] */
    (xdc_Char)0x6f,  /* [6244] */
    (xdc_Char)0x61,  /* [6245] */
    (xdc_Char)0x64,  /* [6246] */
    (xdc_Char)0x3a,  /* [6247] */
    (xdc_Char)0x20,  /* [6248] */
    (xdc_Char)0x25,  /* [6249] */
    (xdc_Char)0x64,  /* [6250] */
    (xdc_Char)0x2c,  /* [6251] */
    (xdc_Char)0x25,  /* [6252] */
    (xdc_Char)0x64,  /* [6253] */
    (xdc_Char)0x0,  /* [6254] */
    (xdc_Char)0x4c,  /* [6255] */
    (xdc_Char)0x53,  /* [6256] */
    (xdc_Char)0x5f,  /* [6257] */
    (xdc_Char)0x74,  /* [6258] */
    (xdc_Char)0x61,  /* [6259] */
    (xdc_Char)0x73,  /* [6260] */
    (xdc_Char)0x6b,  /* [6261] */
    (xdc_Char)0x4c,  /* [6262] */
    (xdc_Char)0x6f,  /* [6263] */
    (xdc_Char)0x61,  /* [6264] */
    (xdc_Char)0x64,  /* [6265] */
    (xdc_Char)0x3a,  /* [6266] */
    (xdc_Char)0x20,  /* [6267] */
    (xdc_Char)0x30,  /* [6268] */
    (xdc_Char)0x78,  /* [6269] */
    (xdc_Char)0x25,  /* [6270] */
    (xdc_Char)0x78,  /* [6271] */
    (xdc_Char)0x2c,  /* [6272] */
    (xdc_Char)0x25,  /* [6273] */
    (xdc_Char)0x64,  /* [6274] */
    (xdc_Char)0x2c,  /* [6275] */
    (xdc_Char)0x25,  /* [6276] */
    (xdc_Char)0x64,  /* [6277] */
    (xdc_Char)0x2c,  /* [6278] */
    (xdc_Char)0x30,  /* [6279] */
    (xdc_Char)0x78,  /* [6280] */
    (xdc_Char)0x25,  /* [6281] */
    (xdc_Char)0x78,  /* [6282] */
    (xdc_Char)0x0,  /* [6283] */
    (xdc_Char)0x78,  /* [6284] */
    (xdc_Char)0x64,  /* [6285] */
    (xdc_Char)0x63,  /* [6286] */
    (xdc_Char)0x2e,  /* [6287] */
    (xdc_Char)0x0,  /* [6288] */
    (xdc_Char)0x72,  /* [6289] */
    (xdc_Char)0x75,  /* [6290] */
    (xdc_Char)0x6e,  /* [6291] */
    (xdc_Char)0x74,  /* [6292] */
    (xdc_Char)0x69,  /* [6293] */
    (xdc_Char)0x6d,  /* [6294] */
    (xdc_Char)0x65,  /* [6295] */
    (xdc_Char)0x2e,  /* [6296] */
    (xdc_Char)0x0,  /* [6297] */
    (xdc_Char)0x41,  /* [6298] */
    (xdc_Char)0x73,  /* [6299] */
    (xdc_Char)0x73,  /* [6300] */
    (xdc_Char)0x65,  /* [6301] */
    (xdc_Char)0x72,  /* [6302] */
    (xdc_Char)0x74,  /* [6303] */
    (xdc_Char)0x0,  /* [6304] */
    (xdc_Char)0x43,  /* [6305] */
    (xdc_Char)0x6f,  /* [6306] */
    (xdc_Char)0x72,  /* [6307] */
    (xdc_Char)0x65,  /* [6308] */
    (xdc_Char)0x0,  /* [6309] */
    (xdc_Char)0x44,  /* [6310] */
    (xdc_Char)0x65,  /* [6311] */
    (xdc_Char)0x66,  /* [6312] */
    (xdc_Char)0x61,  /* [6313] */
    (xdc_Char)0x75,  /* [6314] */
    (xdc_Char)0x6c,  /* [6315] */
    (xdc_Char)0x74,  /* [6316] */
    (xdc_Char)0x73,  /* [6317] */
    (xdc_Char)0x0,  /* [6318] */
    (xdc_Char)0x44,  /* [6319] */
    (xdc_Char)0x69,  /* [6320] */
    (xdc_Char)0x61,  /* [6321] */
    (xdc_Char)0x67,  /* [6322] */
    (xdc_Char)0x73,  /* [6323] */
    (xdc_Char)0x0,  /* [6324] */
    (xdc_Char)0x45,  /* [6325] */
    (xdc_Char)0x72,  /* [6326] */
    (xdc_Char)0x72,  /* [6327] */
    (xdc_Char)0x6f,  /* [6328] */
    (xdc_Char)0x72,  /* [6329] */
    (xdc_Char)0x0,  /* [6330] */
    (xdc_Char)0x47,  /* [6331] */
    (xdc_Char)0x61,  /* [6332] */
    (xdc_Char)0x74,  /* [6333] */
    (xdc_Char)0x65,  /* [6334] */
    (xdc_Char)0x0,  /* [6335] */
    (xdc_Char)0x4c,  /* [6336] */
    (xdc_Char)0x6f,  /* [6337] */
    (xdc_Char)0x67,  /* [6338] */
    (xdc_Char)0x0,  /* [6339] */
    (xdc_Char)0x4c,  /* [6340] */
    (xdc_Char)0x6f,  /* [6341] */
    (xdc_Char)0x67,  /* [6342] */
    (xdc_Char)0x67,  /* [6343] */
    (xdc_Char)0x65,  /* [6344] */
    (xdc_Char)0x72,  /* [6345] */
    (xdc_Char)0x42,  /* [6346] */
    (xdc_Char)0x75,  /* [6347] */
    (xdc_Char)0x66,  /* [6348] */
    (xdc_Char)0x0,  /* [6349] */
    (xdc_Char)0x4d,  /* [6350] */
    (xdc_Char)0x61,  /* [6351] */
    (xdc_Char)0x69,  /* [6352] */
    (xdc_Char)0x6e,  /* [6353] */
    (xdc_Char)0x0,  /* [6354] */
    (xdc_Char)0x4d,  /* [6355] */
    (xdc_Char)0x65,  /* [6356] */
    (xdc_Char)0x6d,  /* [6357] */
    (xdc_Char)0x6f,  /* [6358] */
    (xdc_Char)0x72,  /* [6359] */
    (xdc_Char)0x79,  /* [6360] */
    (xdc_Char)0x0,  /* [6361] */
    (xdc_Char)0x52,  /* [6362] */
    (xdc_Char)0x65,  /* [6363] */
    (xdc_Char)0x67,  /* [6364] */
    (xdc_Char)0x69,  /* [6365] */
    (xdc_Char)0x73,  /* [6366] */
    (xdc_Char)0x74,  /* [6367] */
    (xdc_Char)0x72,  /* [6368] */
    (xdc_Char)0x79,  /* [6369] */
    (xdc_Char)0x0,  /* [6370] */
    (xdc_Char)0x53,  /* [6371] */
    (xdc_Char)0x74,  /* [6372] */
    (xdc_Char)0x61,  /* [6373] */
    (xdc_Char)0x72,  /* [6374] */
    (xdc_Char)0x74,  /* [6375] */
    (xdc_Char)0x75,  /* [6376] */
    (xdc_Char)0x70,  /* [6377] */
    (xdc_Char)0x0,  /* [6378] */
    (xdc_Char)0x53,  /* [6379] */
    (xdc_Char)0x79,  /* [6380] */
    (xdc_Char)0x73,  /* [6381] */
    (xdc_Char)0x74,  /* [6382] */
    (xdc_Char)0x65,  /* [6383] */
    (xdc_Char)0x6d,  /* [6384] */
    (xdc_Char)0x0,  /* [6385] */
    (xdc_Char)0x53,  /* [6386] */
    (xdc_Char)0x79,  /* [6387] */
    (xdc_Char)0x73,  /* [6388] */
    (xdc_Char)0x53,  /* [6389] */
    (xdc_Char)0x74,  /* [6390] */
    (xdc_Char)0x64,  /* [6391] */
    (xdc_Char)0x0,  /* [6392] */
    (xdc_Char)0x54,  /* [6393] */
    (xdc_Char)0x65,  /* [6394] */
    (xdc_Char)0x78,  /* [6395] */
    (xdc_Char)0x74,  /* [6396] */
    (xdc_Char)0x0,  /* [6397] */
    (xdc_Char)0x54,  /* [6398] */
    (xdc_Char)0x69,  /* [6399] */
    (xdc_Char)0x6d,  /* [6400] */
    (xdc_Char)0x65,  /* [6401] */
    (xdc_Char)0x73,  /* [6402] */
    (xdc_Char)0x74,  /* [6403] */
    (xdc_Char)0x61,  /* [6404] */
    (xdc_Char)0x6d,  /* [6405] */
    (xdc_Char)0x70,  /* [6406] */
    (xdc_Char)0x0,  /* [6407] */
    (xdc_Char)0x54,  /* [6408] */
    (xdc_Char)0x69,  /* [6409] */
    (xdc_Char)0x6d,  /* [6410] */
    (xdc_Char)0x65,  /* [6411] */
    (xdc_Char)0x73,  /* [6412] */
    (xdc_Char)0x74,  /* [6413] */
    (xdc_Char)0x61,  /* [6414] */
    (xdc_Char)0x6d,  /* [6415] */
    (xdc_Char)0x70,  /* [6416] */
    (xdc_Char)0x4e,  /* [6417] */
    (xdc_Char)0x75,  /* [6418] */
    (xdc_Char)0x6c,  /* [6419] */
    (xdc_Char)0x6c,  /* [6420] */
    (xdc_Char)0x0,  /* [6421] */
    (xdc_Char)0x74,  /* [6422] */
    (xdc_Char)0x69,  /* [6423] */
    (xdc_Char)0x2e,  /* [6424] */
    (xdc_Char)0x0,  /* [6425] */
    (xdc_Char)0x73,  /* [6426] */
    (xdc_Char)0x79,  /* [6427] */
    (xdc_Char)0x73,  /* [6428] */
    (xdc_Char)0x62,  /* [6429] */
    (xdc_Char)0x69,  /* [6430] */
    (xdc_Char)0x6f,  /* [6431] */
    (xdc_Char)0x73,  /* [6432] */
    (xdc_Char)0x2e,  /* [6433] */
    (xdc_Char)0x0,  /* [6434] */
    (xdc_Char)0x66,  /* [6435] */
    (xdc_Char)0x61,  /* [6436] */
    (xdc_Char)0x6d,  /* [6437] */
    (xdc_Char)0x69,  /* [6438] */
    (xdc_Char)0x6c,  /* [6439] */
    (xdc_Char)0x79,  /* [6440] */
    (xdc_Char)0x2e,  /* [6441] */
    (xdc_Char)0x0,  /* [6442] */
    (xdc_Char)0x63,  /* [6443] */
    (xdc_Char)0x36,  /* [6444] */
    (xdc_Char)0x34,  /* [6445] */
    (xdc_Char)0x70,  /* [6446] */
    (xdc_Char)0x2e,  /* [6447] */
    (xdc_Char)0x0,  /* [6448] */
    (xdc_Char)0x45,  /* [6449] */
    (xdc_Char)0x76,  /* [6450] */
    (xdc_Char)0x65,  /* [6451] */
    (xdc_Char)0x6e,  /* [6452] */
    (xdc_Char)0x74,  /* [6453] */
    (xdc_Char)0x43,  /* [6454] */
    (xdc_Char)0x6f,  /* [6455] */
    (xdc_Char)0x6d,  /* [6456] */
    (xdc_Char)0x62,  /* [6457] */
    (xdc_Char)0x69,  /* [6458] */
    (xdc_Char)0x6e,  /* [6459] */
    (xdc_Char)0x65,  /* [6460] */
    (xdc_Char)0x72,  /* [6461] */
    (xdc_Char)0x0,  /* [6462] */
    (xdc_Char)0x45,  /* [6463] */
    (xdc_Char)0x78,  /* [6464] */
    (xdc_Char)0x63,  /* [6465] */
    (xdc_Char)0x65,  /* [6466] */
    (xdc_Char)0x70,  /* [6467] */
    (xdc_Char)0x74,  /* [6468] */
    (xdc_Char)0x69,  /* [6469] */
    (xdc_Char)0x6f,  /* [6470] */
    (xdc_Char)0x6e,  /* [6471] */
    (xdc_Char)0x0,  /* [6472] */
    (xdc_Char)0x48,  /* [6473] */
    (xdc_Char)0x77,  /* [6474] */
    (xdc_Char)0x69,  /* [6475] */
    (xdc_Char)0x0,  /* [6476] */
    (xdc_Char)0x54,  /* [6477] */
    (xdc_Char)0x69,  /* [6478] */
    (xdc_Char)0x6d,  /* [6479] */
    (xdc_Char)0x65,  /* [6480] */
    (xdc_Char)0x73,  /* [6481] */
    (xdc_Char)0x74,  /* [6482] */
    (xdc_Char)0x61,  /* [6483] */
    (xdc_Char)0x6d,  /* [6484] */
    (xdc_Char)0x70,  /* [6485] */
    (xdc_Char)0x50,  /* [6486] */
    (xdc_Char)0x72,  /* [6487] */
    (xdc_Char)0x6f,  /* [6488] */
    (xdc_Char)0x76,  /* [6489] */
    (xdc_Char)0x69,  /* [6490] */
    (xdc_Char)0x64,  /* [6491] */
    (xdc_Char)0x65,  /* [6492] */
    (xdc_Char)0x72,  /* [6493] */
    (xdc_Char)0x0,  /* [6494] */
    (xdc_Char)0x43,  /* [6495] */
    (xdc_Char)0x61,  /* [6496] */
    (xdc_Char)0x63,  /* [6497] */
    (xdc_Char)0x68,  /* [6498] */
    (xdc_Char)0x65,  /* [6499] */
    (xdc_Char)0x0,  /* [6500] */
    (xdc_Char)0x42,  /* [6501] */
    (xdc_Char)0x49,  /* [6502] */
    (xdc_Char)0x4f,  /* [6503] */
    (xdc_Char)0x53,  /* [6504] */
    (xdc_Char)0x0,  /* [6505] */
    (xdc_Char)0x6b,  /* [6506] */
    (xdc_Char)0x6e,  /* [6507] */
    (xdc_Char)0x6c,  /* [6508] */
    (xdc_Char)0x2e,  /* [6509] */
    (xdc_Char)0x0,  /* [6510] */
    (xdc_Char)0x43,  /* [6511] */
    (xdc_Char)0x6c,  /* [6512] */
    (xdc_Char)0x6f,  /* [6513] */
    (xdc_Char)0x63,  /* [6514] */
    (xdc_Char)0x6b,  /* [6515] */
    (xdc_Char)0x0,  /* [6516] */
    (xdc_Char)0x49,  /* [6517] */
    (xdc_Char)0x64,  /* [6518] */
    (xdc_Char)0x6c,  /* [6519] */
    (xdc_Char)0x65,  /* [6520] */
    (xdc_Char)0x0,  /* [6521] */
    (xdc_Char)0x49,  /* [6522] */
    (xdc_Char)0x6e,  /* [6523] */
    (xdc_Char)0x74,  /* [6524] */
    (xdc_Char)0x72,  /* [6525] */
    (xdc_Char)0x69,  /* [6526] */
    (xdc_Char)0x6e,  /* [6527] */
    (xdc_Char)0x73,  /* [6528] */
    (xdc_Char)0x69,  /* [6529] */
    (xdc_Char)0x63,  /* [6530] */
    (xdc_Char)0x73,  /* [6531] */
    (xdc_Char)0x0,  /* [6532] */
    (xdc_Char)0x45,  /* [6533] */
    (xdc_Char)0x76,  /* [6534] */
    (xdc_Char)0x65,  /* [6535] */
    (xdc_Char)0x6e,  /* [6536] */
    (xdc_Char)0x74,  /* [6537] */
    (xdc_Char)0x0,  /* [6538] */
    (xdc_Char)0x51,  /* [6539] */
    (xdc_Char)0x75,  /* [6540] */
    (xdc_Char)0x65,  /* [6541] */
    (xdc_Char)0x75,  /* [6542] */
    (xdc_Char)0x65,  /* [6543] */
    (xdc_Char)0x0,  /* [6544] */
    (xdc_Char)0x53,  /* [6545] */
    (xdc_Char)0x65,  /* [6546] */
    (xdc_Char)0x6d,  /* [6547] */
    (xdc_Char)0x61,  /* [6548] */
    (xdc_Char)0x70,  /* [6549] */
    (xdc_Char)0x68,  /* [6550] */
    (xdc_Char)0x6f,  /* [6551] */
    (xdc_Char)0x72,  /* [6552] */
    (xdc_Char)0x65,  /* [6553] */
    (xdc_Char)0x0,  /* [6554] */
    (xdc_Char)0x53,  /* [6555] */
    (xdc_Char)0x77,  /* [6556] */
    (xdc_Char)0x69,  /* [6557] */
    (xdc_Char)0x0,  /* [6558] */
    (xdc_Char)0x54,  /* [6559] */
    (xdc_Char)0x61,  /* [6560] */
    (xdc_Char)0x73,  /* [6561] */
    (xdc_Char)0x6b,  /* [6562] */
    (xdc_Char)0x0,  /* [6563] */
    (xdc_Char)0x68,  /* [6564] */
    (xdc_Char)0x65,  /* [6565] */
    (xdc_Char)0x61,  /* [6566] */
    (xdc_Char)0x70,  /* [6567] */
    (xdc_Char)0x73,  /* [6568] */
    (xdc_Char)0x2e,  /* [6569] */
    (xdc_Char)0x0,  /* [6570] */
    (xdc_Char)0x48,  /* [6571] */
    (xdc_Char)0x65,  /* [6572] */
    (xdc_Char)0x61,  /* [6573] */
    (xdc_Char)0x70,  /* [6574] */
    (xdc_Char)0x42,  /* [6575] */
    (xdc_Char)0x75,  /* [6576] */
    (xdc_Char)0x66,  /* [6577] */
    (xdc_Char)0x0,  /* [6578] */
    (xdc_Char)0x48,  /* [6579] */
    (xdc_Char)0x65,  /* [6580] */
    (xdc_Char)0x61,  /* [6581] */
    (xdc_Char)0x70,  /* [6582] */
    (xdc_Char)0x4d,  /* [6583] */
    (xdc_Char)0x65,  /* [6584] */
    (xdc_Char)0x6d,  /* [6585] */
    (xdc_Char)0x0,  /* [6586] */
    (xdc_Char)0x75,  /* [6587] */
    (xdc_Char)0x74,  /* [6588] */
    (xdc_Char)0x69,  /* [6589] */
    (xdc_Char)0x6c,  /* [6590] */
    (xdc_Char)0x73,  /* [6591] */
    (xdc_Char)0x2e,  /* [6592] */
    (xdc_Char)0x0,  /* [6593] */
    (xdc_Char)0x4c,  /* [6594] */
    (xdc_Char)0x6f,  /* [6595] */
    (xdc_Char)0x61,  /* [6596] */
    (xdc_Char)0x64,  /* [6597] */
    (xdc_Char)0x0,  /* [6598] */
    (xdc_Char)0x72,  /* [6599] */
    (xdc_Char)0x74,  /* [6600] */
    (xdc_Char)0x73,  /* [6601] */
    (xdc_Char)0x2e,  /* [6602] */
    (xdc_Char)0x0,  /* [6603] */
    (xdc_Char)0x54,  /* [6604] */
    (xdc_Char)0x68,  /* [6605] */
    (xdc_Char)0x72,  /* [6606] */
    (xdc_Char)0x65,  /* [6607] */
    (xdc_Char)0x61,  /* [6608] */
    (xdc_Char)0x64,  /* [6609] */
    (xdc_Char)0x4c,  /* [6610] */
    (xdc_Char)0x6f,  /* [6611] */
    (xdc_Char)0x63,  /* [6612] */
    (xdc_Char)0x61,  /* [6613] */
    (xdc_Char)0x6c,  /* [6614] */
    (xdc_Char)0x53,  /* [6615] */
    (xdc_Char)0x74,  /* [6616] */
    (xdc_Char)0x6f,  /* [6617] */
    (xdc_Char)0x72,  /* [6618] */
    (xdc_Char)0x61,  /* [6619] */
    (xdc_Char)0x67,  /* [6620] */
    (xdc_Char)0x65,  /* [6621] */
    (xdc_Char)0x0,  /* [6622] */
    (xdc_Char)0x68,  /* [6623] */
    (xdc_Char)0x61,  /* [6624] */
    (xdc_Char)0x6c,  /* [6625] */
    (xdc_Char)0x2e,  /* [6626] */
    (xdc_Char)0x0,  /* [6627] */
    (xdc_Char)0x63,  /* [6628] */
    (xdc_Char)0x36,  /* [6629] */
    (xdc_Char)0x32,  /* [6630] */
    (xdc_Char)0x2e,  /* [6631] */
    (xdc_Char)0x0,  /* [6632] */
    (xdc_Char)0x54,  /* [6633] */
    (xdc_Char)0x61,  /* [6634] */
    (xdc_Char)0x73,  /* [6635] */
    (xdc_Char)0x6b,  /* [6636] */
    (xdc_Char)0x53,  /* [6637] */
    (xdc_Char)0x75,  /* [6638] */
    (xdc_Char)0x70,  /* [6639] */
    (xdc_Char)0x70,  /* [6640] */
    (xdc_Char)0x6f,  /* [6641] */
    (xdc_Char)0x72,  /* [6642] */
    (xdc_Char)0x74,  /* [6643] */
    (xdc_Char)0x0,  /* [6644] */
    (xdc_Char)0x49,  /* [6645] */
    (xdc_Char)0x6e,  /* [6646] */
    (xdc_Char)0x74,  /* [6647] */
    (xdc_Char)0x72,  /* [6648] */
    (xdc_Char)0x69,  /* [6649] */
    (xdc_Char)0x6e,  /* [6650] */
    (xdc_Char)0x73,  /* [6651] */
    (xdc_Char)0x69,  /* [6652] */
    (xdc_Char)0x63,  /* [6653] */
    (xdc_Char)0x73,  /* [6654] */
    (xdc_Char)0x53,  /* [6655] */
    (xdc_Char)0x75,  /* [6656] */
    (xdc_Char)0x70,  /* [6657] */
    (xdc_Char)0x70,  /* [6658] */
    (xdc_Char)0x6f,  /* [6659] */
    (xdc_Char)0x72,  /* [6660] */
    (xdc_Char)0x74,  /* [6661] */
    (xdc_Char)0x0,  /* [6662] */
    (xdc_Char)0x67,  /* [6663] */
    (xdc_Char)0x61,  /* [6664] */
    (xdc_Char)0x74,  /* [6665] */
    (xdc_Char)0x65,  /* [6666] */
    (xdc_Char)0x73,  /* [6667] */
    (xdc_Char)0x2e,  /* [6668] */
    (xdc_Char)0x0,  /* [6669] */
    (xdc_Char)0x47,  /* [6670] */
    (xdc_Char)0x61,  /* [6671] */
    (xdc_Char)0x74,  /* [6672] */
    (xdc_Char)0x65,  /* [6673] */
    (xdc_Char)0x48,  /* [6674] */
    (xdc_Char)0x77,  /* [6675] */
    (xdc_Char)0x69,  /* [6676] */
    (xdc_Char)0x0,  /* [6677] */
    (xdc_Char)0x47,  /* [6678] */
    (xdc_Char)0x61,  /* [6679] */
    (xdc_Char)0x74,  /* [6680] */
    (xdc_Char)0x65,  /* [6681] */
    (xdc_Char)0x4d,  /* [6682] */
    (xdc_Char)0x75,  /* [6683] */
    (xdc_Char)0x74,  /* [6684] */
    (xdc_Char)0x65,  /* [6685] */
    (xdc_Char)0x78,  /* [6686] */
    (xdc_Char)0x0,  /* [6687] */
    (xdc_Char)0x74,  /* [6688] */
    (xdc_Char)0x69,  /* [6689] */
    (xdc_Char)0x6d,  /* [6690] */
    (xdc_Char)0x65,  /* [6691] */
    (xdc_Char)0x72,  /* [6692] */
    (xdc_Char)0x73,  /* [6693] */
    (xdc_Char)0x2e,  /* [6694] */
    (xdc_Char)0x0,  /* [6695] */
    (xdc_Char)0x72,  /* [6696] */
    (xdc_Char)0x74,  /* [6697] */
    (xdc_Char)0x69,  /* [6698] */
    (xdc_Char)0x2e,  /* [6699] */
    (xdc_Char)0x0,  /* [6700] */
    (xdc_Char)0x54,  /* [6701] */
    (xdc_Char)0x69,  /* [6702] */
    (xdc_Char)0x6d,  /* [6703] */
    (xdc_Char)0x65,  /* [6704] */
    (xdc_Char)0x72,  /* [6705] */
    (xdc_Char)0x0,  /* [6706] */
    (xdc_Char)0x5f,  /* [6707] */
    (xdc_Char)0x6c,  /* [6708] */
    (xdc_Char)0x6f,  /* [6709] */
    (xdc_Char)0x67,  /* [6710] */
    (xdc_Char)0x49,  /* [6711] */
    (xdc_Char)0x6e,  /* [6712] */
    (xdc_Char)0x66,  /* [6713] */
    (xdc_Char)0x6f,  /* [6714] */
    (xdc_Char)0x0,  /* [6715] */
    (xdc_Char)0x74,  /* [6716] */
    (xdc_Char)0x69,  /* [6717] */
    (xdc_Char)0x2e,  /* [6718] */
    (xdc_Char)0x73,  /* [6719] */
    (xdc_Char)0x79,  /* [6720] */
    (xdc_Char)0x73,  /* [6721] */
    (xdc_Char)0x62,  /* [6722] */
    (xdc_Char)0x69,  /* [6723] */
    (xdc_Char)0x6f,  /* [6724] */
    (xdc_Char)0x73,  /* [6725] */
    (xdc_Char)0x2e,  /* [6726] */
    (xdc_Char)0x6b,  /* [6727] */
    (xdc_Char)0x6e,  /* [6728] */
    (xdc_Char)0x6c,  /* [6729] */
    (xdc_Char)0x2e,  /* [6730] */
    (xdc_Char)0x54,  /* [6731] */
    (xdc_Char)0x61,  /* [6732] */
    (xdc_Char)0x73,  /* [6733] */
    (xdc_Char)0x6b,  /* [6734] */
    (xdc_Char)0x2e,  /* [6735] */
    (xdc_Char)0x49,  /* [6736] */
    (xdc_Char)0x64,  /* [6737] */
    (xdc_Char)0x6c,  /* [6738] */
    (xdc_Char)0x65,  /* [6739] */
    (xdc_Char)0x54,  /* [6740] */
    (xdc_Char)0x61,  /* [6741] */
    (xdc_Char)0x73,  /* [6742] */
    (xdc_Char)0x6b,  /* [6743] */
    (xdc_Char)0x0,  /* [6744] */
};

/* --> xdc_runtime_Text_nodeTab__A */
#pragma DATA_SECTION(xdc_runtime_Text_nodeTab__A, ".const:xdc_runtime_Text_nodeTab__A");
const __T1_xdc_runtime_Text_nodeTab xdc_runtime_Text_nodeTab__A[56] = {
    {
        (xdc_Bits16)0x0,  /* left */
        (xdc_Bits16)0x0,  /* right */
    },  /* [0] */
    {
        (xdc_Bits16)0x188c,  /* left */
        (xdc_Bits16)0x1891,  /* right */
    },  /* [1] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x189a,  /* right */
    },  /* [2] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x18a1,  /* right */
    },  /* [3] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x18a6,  /* right */
    },  /* [4] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x18af,  /* right */
    },  /* [5] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x18b5,  /* right */
    },  /* [6] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x18bb,  /* right */
    },  /* [7] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x18c0,  /* right */
    },  /* [8] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x18c4,  /* right */
    },  /* [9] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x18ce,  /* right */
    },  /* [10] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x18d3,  /* right */
    },  /* [11] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x18da,  /* right */
    },  /* [12] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x18e3,  /* right */
    },  /* [13] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x18eb,  /* right */
    },  /* [14] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x18f2,  /* right */
    },  /* [15] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x18f9,  /* right */
    },  /* [16] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x18fe,  /* right */
    },  /* [17] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x1908,  /* right */
    },  /* [18] */
    {
        (xdc_Bits16)0x1916,  /* left */
        (xdc_Bits16)0x191a,  /* right */
    },  /* [19] */
    {
        (xdc_Bits16)0x8013,  /* left */
        (xdc_Bits16)0x1923,  /* right */
    },  /* [20] */
    {
        (xdc_Bits16)0x8014,  /* left */
        (xdc_Bits16)0x192b,  /* right */
    },  /* [21] */
    {
        (xdc_Bits16)0x8015,  /* left */
        (xdc_Bits16)0x1931,  /* right */
    },  /* [22] */
    {
        (xdc_Bits16)0x8015,  /* left */
        (xdc_Bits16)0x193f,  /* right */
    },  /* [23] */
    {
        (xdc_Bits16)0x8015,  /* left */
        (xdc_Bits16)0x1949,  /* right */
    },  /* [24] */
    {
        (xdc_Bits16)0x8015,  /* left */
        (xdc_Bits16)0x194d,  /* right */
    },  /* [25] */
    {
        (xdc_Bits16)0x8015,  /* left */
        (xdc_Bits16)0x195f,  /* right */
    },  /* [26] */
    {
        (xdc_Bits16)0x8013,  /* left */
        (xdc_Bits16)0x1965,  /* right */
    },  /* [27] */
    {
        (xdc_Bits16)0x8013,  /* left */
        (xdc_Bits16)0x196a,  /* right */
    },  /* [28] */
    {
        (xdc_Bits16)0x801c,  /* left */
        (xdc_Bits16)0x196f,  /* right */
    },  /* [29] */
    {
        (xdc_Bits16)0x801c,  /* left */
        (xdc_Bits16)0x1975,  /* right */
    },  /* [30] */
    {
        (xdc_Bits16)0x801c,  /* left */
        (xdc_Bits16)0x197a,  /* right */
    },  /* [31] */
    {
        (xdc_Bits16)0x801c,  /* left */
        (xdc_Bits16)0x1985,  /* right */
    },  /* [32] */
    {
        (xdc_Bits16)0x801c,  /* left */
        (xdc_Bits16)0x198b,  /* right */
    },  /* [33] */
    {
        (xdc_Bits16)0x801c,  /* left */
        (xdc_Bits16)0x1991,  /* right */
    },  /* [34] */
    {
        (xdc_Bits16)0x801c,  /* left */
        (xdc_Bits16)0x199b,  /* right */
    },  /* [35] */
    {
        (xdc_Bits16)0x801c,  /* left */
        (xdc_Bits16)0x199f,  /* right */
    },  /* [36] */
    {
        (xdc_Bits16)0x8013,  /* left */
        (xdc_Bits16)0x19a4,  /* right */
    },  /* [37] */
    {
        (xdc_Bits16)0x8025,  /* left */
        (xdc_Bits16)0x19ab,  /* right */
    },  /* [38] */
    {
        (xdc_Bits16)0x8025,  /* left */
        (xdc_Bits16)0x19b3,  /* right */
    },  /* [39] */
    {
        (xdc_Bits16)0x8013,  /* left */
        (xdc_Bits16)0x19bb,  /* right */
    },  /* [40] */
    {
        (xdc_Bits16)0x8028,  /* left */
        (xdc_Bits16)0x19c2,  /* right */
    },  /* [41] */
    {
        (xdc_Bits16)0x8013,  /* left */
        (xdc_Bits16)0x19c7,  /* right */
    },  /* [42] */
    {
        (xdc_Bits16)0x802a,  /* left */
        (xdc_Bits16)0x1916,  /* right */
    },  /* [43] */
    {
        (xdc_Bits16)0x802b,  /* left */
        (xdc_Bits16)0x19cc,  /* right */
    },  /* [44] */
    {
        (xdc_Bits16)0x8013,  /* left */
        (xdc_Bits16)0x19df,  /* right */
    },  /* [45] */
    {
        (xdc_Bits16)0x802d,  /* left */
        (xdc_Bits16)0x1949,  /* right */
    },  /* [46] */
    {
        (xdc_Bits16)0x8014,  /* left */
        (xdc_Bits16)0x19e4,  /* right */
    },  /* [47] */
    {
        (xdc_Bits16)0x802f,  /* left */
        (xdc_Bits16)0x19e9,  /* right */
    },  /* [48] */
    {
        (xdc_Bits16)0x802f,  /* left */
        (xdc_Bits16)0x19f5,  /* right */
    },  /* [49] */
    {
        (xdc_Bits16)0x8013,  /* left */
        (xdc_Bits16)0x1a07,  /* right */
    },  /* [50] */
    {
        (xdc_Bits16)0x8032,  /* left */
        (xdc_Bits16)0x1a0e,  /* right */
    },  /* [51] */
    {
        (xdc_Bits16)0x8032,  /* left */
        (xdc_Bits16)0x1a16,  /* right */
    },  /* [52] */
    {
        (xdc_Bits16)0x8013,  /* left */
        (xdc_Bits16)0x1a20,  /* right */
    },  /* [53] */
    {
        (xdc_Bits16)0x8035,  /* left */
        (xdc_Bits16)0x1a28,  /* right */
    },  /* [54] */
    {
        (xdc_Bits16)0x8036,  /* left */
        (xdc_Bits16)0x1a2d,  /* right */
    },  /* [55] */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Text_Module__diagsEnabled__C, ".const:xdc_runtime_Text_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_Text_Module__diagsEnabled xdc_runtime_Text_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_Text_Module__diagsIncluded__C, ".const:xdc_runtime_Text_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_Text_Module__diagsIncluded xdc_runtime_Text_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_Text_Module__diagsMask__C, ".const:xdc_runtime_Text_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_Text_Module__diagsMask xdc_runtime_Text_Module__diagsMask__C = ((CT__xdc_runtime_Text_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_Text_Module__gateObj__C, ".const:xdc_runtime_Text_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_Text_Module__gateObj xdc_runtime_Text_Module__gateObj__C = ((CT__xdc_runtime_Text_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_Text_Module__gatePrms__C, ".const:xdc_runtime_Text_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_Text_Module__gatePrms xdc_runtime_Text_Module__gatePrms__C = ((CT__xdc_runtime_Text_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_Text_Module__id__C, ".const:xdc_runtime_Text_Module__id__C");
__FAR__ const CT__xdc_runtime_Text_Module__id xdc_runtime_Text_Module__id__C = (xdc_Bits16)0x8010;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_Text_Module__loggerDefined__C, ".const:xdc_runtime_Text_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_Text_Module__loggerDefined xdc_runtime_Text_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_Text_Module__loggerObj__C, ".const:xdc_runtime_Text_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_Text_Module__loggerObj xdc_runtime_Text_Module__loggerObj__C = ((CT__xdc_runtime_Text_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_Text_Module__loggerFxn0__C, ".const:xdc_runtime_Text_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_Text_Module__loggerFxn0 xdc_runtime_Text_Module__loggerFxn0__C = ((CT__xdc_runtime_Text_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_Text_Module__loggerFxn1__C, ".const:xdc_runtime_Text_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_Text_Module__loggerFxn1 xdc_runtime_Text_Module__loggerFxn1__C = ((CT__xdc_runtime_Text_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Text_Module__loggerFxn2__C, ".const:xdc_runtime_Text_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_Text_Module__loggerFxn2 xdc_runtime_Text_Module__loggerFxn2__C = ((CT__xdc_runtime_Text_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_Text_Module__loggerFxn4__C, ".const:xdc_runtime_Text_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_Text_Module__loggerFxn4 xdc_runtime_Text_Module__loggerFxn4__C = ((CT__xdc_runtime_Text_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_Text_Module__loggerFxn8__C, ".const:xdc_runtime_Text_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_Text_Module__loggerFxn8 xdc_runtime_Text_Module__loggerFxn8__C = ((CT__xdc_runtime_Text_Module__loggerFxn8)0);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_Text_Object__count__C, ".const:xdc_runtime_Text_Object__count__C");
__FAR__ const CT__xdc_runtime_Text_Object__count xdc_runtime_Text_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_Text_Object__heap__C, ".const:xdc_runtime_Text_Object__heap__C");
__FAR__ const CT__xdc_runtime_Text_Object__heap xdc_runtime_Text_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_Text_Object__sizeof__C, ".const:xdc_runtime_Text_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_Text_Object__sizeof xdc_runtime_Text_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_Text_Object__table__C, ".const:xdc_runtime_Text_Object__table__C");
__FAR__ const CT__xdc_runtime_Text_Object__table xdc_runtime_Text_Object__table__C = 0;

/* nameUnknown__C */
#pragma DATA_SECTION(xdc_runtime_Text_nameUnknown__C, ".const:xdc_runtime_Text_nameUnknown__C");
__FAR__ const CT__xdc_runtime_Text_nameUnknown xdc_runtime_Text_nameUnknown__C = "{unknown-instance-name}";

/* nameEmpty__C */
#pragma DATA_SECTION(xdc_runtime_Text_nameEmpty__C, ".const:xdc_runtime_Text_nameEmpty__C");
__FAR__ const CT__xdc_runtime_Text_nameEmpty xdc_runtime_Text_nameEmpty__C = "{empty-instance-name}";

/* nameStatic__C */
#pragma DATA_SECTION(xdc_runtime_Text_nameStatic__C, ".const:xdc_runtime_Text_nameStatic__C");
__FAR__ const CT__xdc_runtime_Text_nameStatic xdc_runtime_Text_nameStatic__C = "{static-instance-name}";

/* isLoaded__C */
#pragma DATA_SECTION(xdc_runtime_Text_isLoaded__C, ".const:xdc_runtime_Text_isLoaded__C");
__FAR__ const CT__xdc_runtime_Text_isLoaded xdc_runtime_Text_isLoaded__C = 1;

/* charTab__C */
#pragma DATA_SECTION(xdc_runtime_Text_charTab__C, ".const:xdc_runtime_Text_charTab__C");
__FAR__ const CT__xdc_runtime_Text_charTab xdc_runtime_Text_charTab__C = ((CT__xdc_runtime_Text_charTab)xdc_runtime_Text_charTab__A);

/* nodeTab__C */
#pragma DATA_SECTION(xdc_runtime_Text_nodeTab__C, ".const:xdc_runtime_Text_nodeTab__C");
__FAR__ const CT__xdc_runtime_Text_nodeTab xdc_runtime_Text_nodeTab__C = ((CT__xdc_runtime_Text_nodeTab)xdc_runtime_Text_nodeTab__A);

/* charCnt__C */
#pragma DATA_SECTION(xdc_runtime_Text_charCnt__C, ".const:xdc_runtime_Text_charCnt__C");
__FAR__ const CT__xdc_runtime_Text_charCnt xdc_runtime_Text_charCnt__C = (xdc_Int16)0x1a59;

/* nodeCnt__C */
#pragma DATA_SECTION(xdc_runtime_Text_nodeCnt__C, ".const:xdc_runtime_Text_nodeCnt__C");
__FAR__ const CT__xdc_runtime_Text_nodeCnt xdc_runtime_Text_nodeCnt__C = (xdc_Int16)0x38;

/* unnamedModsLastId__C */
#pragma DATA_SECTION(xdc_runtime_Text_unnamedModsLastId__C, ".const:xdc_runtime_Text_unnamedModsLastId__C");
__FAR__ const CT__xdc_runtime_Text_unnamedModsLastId xdc_runtime_Text_unnamedModsLastId__C = (xdc_UInt16)0x4000;

/* registryModsLastId__C */
#pragma DATA_SECTION(xdc_runtime_Text_registryModsLastId__C, ".const:xdc_runtime_Text_registryModsLastId__C");
__FAR__ const CT__xdc_runtime_Text_registryModsLastId xdc_runtime_Text_registryModsLastId__C = (xdc_UInt16)0x7fff;

/* visitRopeFxn__C */
#pragma DATA_SECTION(xdc_runtime_Text_visitRopeFxn__C, ".const:xdc_runtime_Text_visitRopeFxn__C");
__FAR__ const CT__xdc_runtime_Text_visitRopeFxn xdc_runtime_Text_visitRopeFxn__C = ((CT__xdc_runtime_Text_visitRopeFxn)((xdc_Fxn)xdc_runtime_Text_visitRope__I));

/* visitRopeFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Text_visitRopeFxn2__C, ".const:xdc_runtime_Text_visitRopeFxn2__C");
__FAR__ const CT__xdc_runtime_Text_visitRopeFxn2 xdc_runtime_Text_visitRopeFxn2__C = ((CT__xdc_runtime_Text_visitRopeFxn2)((xdc_Fxn)xdc_runtime_Text_visitRope2__I));


/*
 * ======== xdc.runtime.Timestamp INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Timestamp_Module__diagsEnabled__C, ".const:xdc_runtime_Timestamp_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_Timestamp_Module__diagsEnabled xdc_runtime_Timestamp_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_Timestamp_Module__diagsIncluded__C, ".const:xdc_runtime_Timestamp_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_Timestamp_Module__diagsIncluded xdc_runtime_Timestamp_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_Timestamp_Module__diagsMask__C, ".const:xdc_runtime_Timestamp_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_Timestamp_Module__diagsMask xdc_runtime_Timestamp_Module__diagsMask__C = ((CT__xdc_runtime_Timestamp_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_Timestamp_Module__gateObj__C, ".const:xdc_runtime_Timestamp_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_Timestamp_Module__gateObj xdc_runtime_Timestamp_Module__gateObj__C = ((CT__xdc_runtime_Timestamp_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_Timestamp_Module__gatePrms__C, ".const:xdc_runtime_Timestamp_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_Timestamp_Module__gatePrms xdc_runtime_Timestamp_Module__gatePrms__C = ((CT__xdc_runtime_Timestamp_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_Timestamp_Module__id__C, ".const:xdc_runtime_Timestamp_Module__id__C");
__FAR__ const CT__xdc_runtime_Timestamp_Module__id xdc_runtime_Timestamp_Module__id__C = (xdc_Bits16)0x8011;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_Timestamp_Module__loggerDefined__C, ".const:xdc_runtime_Timestamp_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_Timestamp_Module__loggerDefined xdc_runtime_Timestamp_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_Timestamp_Module__loggerObj__C, ".const:xdc_runtime_Timestamp_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_Timestamp_Module__loggerObj xdc_runtime_Timestamp_Module__loggerObj__C = ((CT__xdc_runtime_Timestamp_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_Timestamp_Module__loggerFxn0__C, ".const:xdc_runtime_Timestamp_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_Timestamp_Module__loggerFxn0 xdc_runtime_Timestamp_Module__loggerFxn0__C = ((CT__xdc_runtime_Timestamp_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_Timestamp_Module__loggerFxn1__C, ".const:xdc_runtime_Timestamp_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_Timestamp_Module__loggerFxn1 xdc_runtime_Timestamp_Module__loggerFxn1__C = ((CT__xdc_runtime_Timestamp_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Timestamp_Module__loggerFxn2__C, ".const:xdc_runtime_Timestamp_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_Timestamp_Module__loggerFxn2 xdc_runtime_Timestamp_Module__loggerFxn2__C = ((CT__xdc_runtime_Timestamp_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_Timestamp_Module__loggerFxn4__C, ".const:xdc_runtime_Timestamp_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_Timestamp_Module__loggerFxn4 xdc_runtime_Timestamp_Module__loggerFxn4__C = ((CT__xdc_runtime_Timestamp_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_Timestamp_Module__loggerFxn8__C, ".const:xdc_runtime_Timestamp_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_Timestamp_Module__loggerFxn8 xdc_runtime_Timestamp_Module__loggerFxn8__C = ((CT__xdc_runtime_Timestamp_Module__loggerFxn8)0);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_Timestamp_Object__count__C, ".const:xdc_runtime_Timestamp_Object__count__C");
__FAR__ const CT__xdc_runtime_Timestamp_Object__count xdc_runtime_Timestamp_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_Timestamp_Object__heap__C, ".const:xdc_runtime_Timestamp_Object__heap__C");
__FAR__ const CT__xdc_runtime_Timestamp_Object__heap xdc_runtime_Timestamp_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_Timestamp_Object__sizeof__C, ".const:xdc_runtime_Timestamp_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_Timestamp_Object__sizeof xdc_runtime_Timestamp_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_Timestamp_Object__table__C, ".const:xdc_runtime_Timestamp_Object__table__C");
__FAR__ const CT__xdc_runtime_Timestamp_Object__table xdc_runtime_Timestamp_Object__table__C = 0;


/*
 * ======== xdc.runtime.TimestampNull INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_TimestampNull_Module__diagsEnabled__C, ".const:xdc_runtime_TimestampNull_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_TimestampNull_Module__diagsEnabled xdc_runtime_TimestampNull_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_TimestampNull_Module__diagsIncluded__C, ".const:xdc_runtime_TimestampNull_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_TimestampNull_Module__diagsIncluded xdc_runtime_TimestampNull_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_TimestampNull_Module__diagsMask__C, ".const:xdc_runtime_TimestampNull_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_TimestampNull_Module__diagsMask xdc_runtime_TimestampNull_Module__diagsMask__C = ((CT__xdc_runtime_TimestampNull_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_TimestampNull_Module__gateObj__C, ".const:xdc_runtime_TimestampNull_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_TimestampNull_Module__gateObj xdc_runtime_TimestampNull_Module__gateObj__C = ((CT__xdc_runtime_TimestampNull_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_TimestampNull_Module__gatePrms__C, ".const:xdc_runtime_TimestampNull_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_TimestampNull_Module__gatePrms xdc_runtime_TimestampNull_Module__gatePrms__C = ((CT__xdc_runtime_TimestampNull_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_TimestampNull_Module__id__C, ".const:xdc_runtime_TimestampNull_Module__id__C");
__FAR__ const CT__xdc_runtime_TimestampNull_Module__id xdc_runtime_TimestampNull_Module__id__C = (xdc_Bits16)0x8012;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_TimestampNull_Module__loggerDefined__C, ".const:xdc_runtime_TimestampNull_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_TimestampNull_Module__loggerDefined xdc_runtime_TimestampNull_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_TimestampNull_Module__loggerObj__C, ".const:xdc_runtime_TimestampNull_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_TimestampNull_Module__loggerObj xdc_runtime_TimestampNull_Module__loggerObj__C = ((CT__xdc_runtime_TimestampNull_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_TimestampNull_Module__loggerFxn0__C, ".const:xdc_runtime_TimestampNull_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_TimestampNull_Module__loggerFxn0 xdc_runtime_TimestampNull_Module__loggerFxn0__C = ((CT__xdc_runtime_TimestampNull_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_TimestampNull_Module__loggerFxn1__C, ".const:xdc_runtime_TimestampNull_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_TimestampNull_Module__loggerFxn1 xdc_runtime_TimestampNull_Module__loggerFxn1__C = ((CT__xdc_runtime_TimestampNull_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_TimestampNull_Module__loggerFxn2__C, ".const:xdc_runtime_TimestampNull_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_TimestampNull_Module__loggerFxn2 xdc_runtime_TimestampNull_Module__loggerFxn2__C = ((CT__xdc_runtime_TimestampNull_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_TimestampNull_Module__loggerFxn4__C, ".const:xdc_runtime_TimestampNull_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_TimestampNull_Module__loggerFxn4 xdc_runtime_TimestampNull_Module__loggerFxn4__C = ((CT__xdc_runtime_TimestampNull_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_TimestampNull_Module__loggerFxn8__C, ".const:xdc_runtime_TimestampNull_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_TimestampNull_Module__loggerFxn8 xdc_runtime_TimestampNull_Module__loggerFxn8__C = ((CT__xdc_runtime_TimestampNull_Module__loggerFxn8)0);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_TimestampNull_Object__count__C, ".const:xdc_runtime_TimestampNull_Object__count__C");
__FAR__ const CT__xdc_runtime_TimestampNull_Object__count xdc_runtime_TimestampNull_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_TimestampNull_Object__heap__C, ".const:xdc_runtime_TimestampNull_Object__heap__C");
__FAR__ const CT__xdc_runtime_TimestampNull_Object__heap xdc_runtime_TimestampNull_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_TimestampNull_Object__sizeof__C, ".const:xdc_runtime_TimestampNull_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_TimestampNull_Object__sizeof xdc_runtime_TimestampNull_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_TimestampNull_Object__table__C, ".const:xdc_runtime_TimestampNull_Object__table__C");
__FAR__ const CT__xdc_runtime_TimestampNull_Object__table xdc_runtime_TimestampNull_Object__table__C = 0;


/*
 * ======== xdc.runtime.Timestamp_SupportProxy INITIALIZERS ========
 */


/*
 * ======== xdc.runtime.System FUNCTION STUBS ========
 */

/* printf_va__E */
xdc_Int xdc_runtime_System_printf_va__E( xdc_CString fmt, va_list __va ) 
{
    return xdc_runtime_System_printf_va__F(fmt, __va);
}

/* printf__E */
xdc_Int xdc_runtime_System_printf__E( xdc_CString fmt, ... ) 
{
    xdc_Int __ret;

    va_list __va; va_start(__va, fmt);
    __ret = xdc_runtime_System_printf_va__F(fmt, __va);

    va_end(__va);
    return __ret;
}

/* aprintf_va__E */
xdc_Int xdc_runtime_System_aprintf_va__E( xdc_CString fmt, va_list __va ) 
{
    return xdc_runtime_System_aprintf_va__F(fmt, __va);
}

/* aprintf__E */
xdc_Int xdc_runtime_System_aprintf__E( xdc_CString fmt, ... ) 
{
    xdc_Int __ret;

    va_list __va; va_start(__va, fmt);
    __ret = xdc_runtime_System_aprintf_va__F(fmt, __va);

    va_end(__va);
    return __ret;
}

/* sprintf_va__E */
xdc_Int xdc_runtime_System_sprintf_va__E( xdc_Char buf[], xdc_CString fmt, va_list __va ) 
{
    return xdc_runtime_System_sprintf_va__F(buf, fmt, __va);
}

/* sprintf__E */
xdc_Int xdc_runtime_System_sprintf__E( xdc_Char buf[], xdc_CString fmt, ... ) 
{
    xdc_Int __ret;

    va_list __va; va_start(__va, fmt);
    __ret = xdc_runtime_System_sprintf_va__F(buf, fmt, __va);

    va_end(__va);
    return __ret;
}

/* asprintf_va__E */
xdc_Int xdc_runtime_System_asprintf_va__E( xdc_Char buf[], xdc_CString fmt, va_list __va ) 
{
    return xdc_runtime_System_asprintf_va__F(buf, fmt, __va);
}

/* asprintf__E */
xdc_Int xdc_runtime_System_asprintf__E( xdc_Char buf[], xdc_CString fmt, ... ) 
{
    xdc_Int __ret;

    va_list __va; va_start(__va, fmt);
    __ret = xdc_runtime_System_asprintf_va__F(buf, fmt, __va);

    va_end(__va);
    return __ret;
}

/* snprintf_va__E */
xdc_Int xdc_runtime_System_snprintf_va__E( xdc_Char buf[], xdc_SizeT n, xdc_CString fmt, va_list __va ) 
{
    return xdc_runtime_System_snprintf_va__F(buf, n, fmt, __va);
}

/* snprintf__E */
xdc_Int xdc_runtime_System_snprintf__E( xdc_Char buf[], xdc_SizeT n, xdc_CString fmt, ... ) 
{
    xdc_Int __ret;

    va_list __va; va_start(__va, fmt);
    __ret = xdc_runtime_System_snprintf_va__F(buf, n, fmt, __va);

    va_end(__va);
    return __ret;
}


/*
 * ======== ti.sysbios.BIOS_RtsGateProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.gates.GateMutex */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_BIOS_RtsGateProxy_Module__startupDone__S( void ) 
{
    return ti_sysbios_gates_GateMutex_Module__startupDone__S();
}

/* create */
ti_sysbios_BIOS_RtsGateProxy_Handle ti_sysbios_BIOS_RtsGateProxy_create( const ti_sysbios_BIOS_RtsGateProxy_Params *prms, xdc_runtime_Error_Block *eb )
{
    return (ti_sysbios_BIOS_RtsGateProxy_Handle)ti_sysbios_gates_GateMutex_create((const ti_sysbios_gates_GateMutex_Params *)prms, eb);
}

/* delete */
void ti_sysbios_BIOS_RtsGateProxy_delete(ti_sysbios_BIOS_RtsGateProxy_Handle *instp)
{
    ti_sysbios_gates_GateMutex_Object__delete__S(instp);
}

/* Params__init__S */
void ti_sysbios_BIOS_RtsGateProxy_Params__init__S( xdc_Ptr dst, const void *src, xdc_SizeT psz, xdc_SizeT isz )
{
    ti_sysbios_gates_GateMutex_Params__init__S(dst, src, psz, isz);
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_BIOS_RtsGateProxy_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab)
{
    return ti_sysbios_gates_GateMutex_Handle__label__S(obj, lab);
}

/* query__E */
xdc_Bool ti_sysbios_BIOS_RtsGateProxy_query__E( xdc_Int qual )
{
    return ti_sysbios_gates_GateMutex_query(qual);
}

/* enter__E */
xdc_IArg ti_sysbios_BIOS_RtsGateProxy_enter__E( ti_sysbios_BIOS_RtsGateProxy_Handle __inst )
{
    return ti_sysbios_gates_GateMutex_enter((ti_sysbios_gates_GateMutex_Handle)__inst);
}

/* leave__E */
xdc_Void ti_sysbios_BIOS_RtsGateProxy_leave__E( ti_sysbios_BIOS_RtsGateProxy_Handle __inst, xdc_IArg key )
{
    ti_sysbios_gates_GateMutex_leave((ti_sysbios_gates_GateMutex_Handle)__inst, key);
}


/*
 * ======== ti.sysbios.hal.Hwi_HwiProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.family.c64p.Hwi */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_hal_Hwi_HwiProxy_Module__startupDone__S( void ) 
{
    return ti_sysbios_family_c64p_Hwi_Module__startupDone__S();
}

/* create */
ti_sysbios_hal_Hwi_HwiProxy_Handle ti_sysbios_hal_Hwi_HwiProxy_create( xdc_Int intNum, ti_sysbios_interfaces_IHwi_FuncPtr hwiFxn, const ti_sysbios_hal_Hwi_HwiProxy_Params *prms, xdc_runtime_Error_Block *eb )
{
    return (ti_sysbios_hal_Hwi_HwiProxy_Handle)ti_sysbios_family_c64p_Hwi_create(intNum, hwiFxn, (const ti_sysbios_family_c64p_Hwi_Params *)prms, eb);
}

/* delete */
void ti_sysbios_hal_Hwi_HwiProxy_delete(ti_sysbios_hal_Hwi_HwiProxy_Handle *instp)
{
    ti_sysbios_family_c64p_Hwi_Object__delete__S(instp);
}

/* Params__init__S */
void ti_sysbios_hal_Hwi_HwiProxy_Params__init__S( xdc_Ptr dst, const void *src, xdc_SizeT psz, xdc_SizeT isz )
{
    ti_sysbios_family_c64p_Hwi_Params__init__S(dst, src, psz, isz);
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_hal_Hwi_HwiProxy_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab)
{
    return ti_sysbios_family_c64p_Hwi_Handle__label__S(obj, lab);
}

/* getStackInfo__E */
xdc_Bool ti_sysbios_hal_Hwi_HwiProxy_getStackInfo__E( ti_sysbios_interfaces_IHwi_StackInfo *stkInfo, xdc_Bool computeStackDepth )
{
    return ti_sysbios_family_c64p_Hwi_getStackInfo(stkInfo, computeStackDepth);
}

/* getCoreStackInfo__E */
xdc_Bool ti_sysbios_hal_Hwi_HwiProxy_getCoreStackInfo__E( ti_sysbios_interfaces_IHwi_StackInfo *stkInfo, xdc_Bool computeStackDepth, xdc_UInt coreId )
{
    return ti_sysbios_family_c64p_Hwi_getCoreStackInfo(stkInfo, computeStackDepth, coreId);
}

/* startup__E */
xdc_Void ti_sysbios_hal_Hwi_HwiProxy_startup__E( void )
{
    ti_sysbios_family_c64p_Hwi_startup();
}

/* disable__E */
xdc_UInt ti_sysbios_hal_Hwi_HwiProxy_disable__E( void )
{
    return ti_sysbios_family_c64p_Hwi_disable();
}

/* enable__E */
xdc_UInt ti_sysbios_hal_Hwi_HwiProxy_enable__E( void )
{
    return ti_sysbios_family_c64p_Hwi_enable();
}

/* restore__E */
xdc_Void ti_sysbios_hal_Hwi_HwiProxy_restore__E( xdc_UInt key )
{
    ti_sysbios_family_c64p_Hwi_restore(key);
}

/* switchFromBootStack__E */
xdc_Void ti_sysbios_hal_Hwi_HwiProxy_switchFromBootStack__E( void )
{
    ti_sysbios_family_c64p_Hwi_switchFromBootStack();
}

/* post__E */
xdc_Void ti_sysbios_hal_Hwi_HwiProxy_post__E( xdc_UInt intNum )
{
    ti_sysbios_family_c64p_Hwi_post(intNum);
}

/* getTaskSP__E */
xdc_Char *ti_sysbios_hal_Hwi_HwiProxy_getTaskSP__E( void )
{
    return ti_sysbios_family_c64p_Hwi_getTaskSP();
}

/* disableInterrupt__E */
xdc_UInt ti_sysbios_hal_Hwi_HwiProxy_disableInterrupt__E( xdc_UInt intNum )
{
    return ti_sysbios_family_c64p_Hwi_disableInterrupt(intNum);
}

/* enableInterrupt__E */
xdc_UInt ti_sysbios_hal_Hwi_HwiProxy_enableInterrupt__E( xdc_UInt intNum )
{
    return ti_sysbios_family_c64p_Hwi_enableInterrupt(intNum);
}

/* restoreInterrupt__E */
xdc_Void ti_sysbios_hal_Hwi_HwiProxy_restoreInterrupt__E( xdc_UInt intNum, xdc_UInt key )
{
    ti_sysbios_family_c64p_Hwi_restoreInterrupt(intNum, key);
}

/* clearInterrupt__E */
xdc_Void ti_sysbios_hal_Hwi_HwiProxy_clearInterrupt__E( xdc_UInt intNum )
{
    ti_sysbios_family_c64p_Hwi_clearInterrupt(intNum);
}

/* getFunc__E */
ti_sysbios_interfaces_IHwi_FuncPtr ti_sysbios_hal_Hwi_HwiProxy_getFunc__E( ti_sysbios_hal_Hwi_HwiProxy_Handle __inst, xdc_UArg *arg )
{
    return ti_sysbios_family_c64p_Hwi_getFunc((ti_sysbios_family_c64p_Hwi_Handle)__inst, arg);
}

/* setFunc__E */
xdc_Void ti_sysbios_hal_Hwi_HwiProxy_setFunc__E( ti_sysbios_hal_Hwi_HwiProxy_Handle __inst, ti_sysbios_interfaces_IHwi_FuncPtr fxn, xdc_UArg arg )
{
    ti_sysbios_family_c64p_Hwi_setFunc((ti_sysbios_family_c64p_Hwi_Handle)__inst, fxn, arg);
}

/* getHookContext__E */
xdc_Ptr ti_sysbios_hal_Hwi_HwiProxy_getHookContext__E( ti_sysbios_hal_Hwi_HwiProxy_Handle __inst, xdc_Int id )
{
    return ti_sysbios_family_c64p_Hwi_getHookContext((ti_sysbios_family_c64p_Hwi_Handle)__inst, id);
}

/* setHookContext__E */
xdc_Void ti_sysbios_hal_Hwi_HwiProxy_setHookContext__E( ti_sysbios_hal_Hwi_HwiProxy_Handle __inst, xdc_Int id, xdc_Ptr hookContext )
{
    ti_sysbios_family_c64p_Hwi_setHookContext((ti_sysbios_family_c64p_Hwi_Handle)__inst, id, hookContext);
}

/* getIrp__E */
ti_sysbios_interfaces_IHwi_Irp ti_sysbios_hal_Hwi_HwiProxy_getIrp__E( ti_sysbios_hal_Hwi_HwiProxy_Handle __inst )
{
    return ti_sysbios_family_c64p_Hwi_getIrp((ti_sysbios_family_c64p_Hwi_Handle)__inst);
}


/*
 * ======== ti.sysbios.heaps.HeapMem_Module_GateProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.gates.GateMutex */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__startupDone__S( void ) 
{
    return ti_sysbios_gates_GateMutex_Module__startupDone__S();
}

/* create */
ti_sysbios_heaps_HeapMem_Module_GateProxy_Handle ti_sysbios_heaps_HeapMem_Module_GateProxy_create( const ti_sysbios_heaps_HeapMem_Module_GateProxy_Params *prms, xdc_runtime_Error_Block *eb )
{
    return (ti_sysbios_heaps_HeapMem_Module_GateProxy_Handle)ti_sysbios_gates_GateMutex_create((const ti_sysbios_gates_GateMutex_Params *)prms, eb);
}

/* delete */
void ti_sysbios_heaps_HeapMem_Module_GateProxy_delete(ti_sysbios_heaps_HeapMem_Module_GateProxy_Handle *instp)
{
    ti_sysbios_gates_GateMutex_Object__delete__S(instp);
}

/* Params__init__S */
void ti_sysbios_heaps_HeapMem_Module_GateProxy_Params__init__S( xdc_Ptr dst, const void *src, xdc_SizeT psz, xdc_SizeT isz )
{
    ti_sysbios_gates_GateMutex_Params__init__S(dst, src, psz, isz);
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_heaps_HeapMem_Module_GateProxy_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab)
{
    return ti_sysbios_gates_GateMutex_Handle__label__S(obj, lab);
}

/* query__E */
xdc_Bool ti_sysbios_heaps_HeapMem_Module_GateProxy_query__E( xdc_Int qual )
{
    return ti_sysbios_gates_GateMutex_query(qual);
}

/* enter__E */
xdc_IArg ti_sysbios_heaps_HeapMem_Module_GateProxy_enter__E( ti_sysbios_heaps_HeapMem_Module_GateProxy_Handle __inst )
{
    return ti_sysbios_gates_GateMutex_enter((ti_sysbios_gates_GateMutex_Handle)__inst);
}

/* leave__E */
xdc_Void ti_sysbios_heaps_HeapMem_Module_GateProxy_leave__E( ti_sysbios_heaps_HeapMem_Module_GateProxy_Handle __inst, xdc_IArg key )
{
    ti_sysbios_gates_GateMutex_leave((ti_sysbios_gates_GateMutex_Handle)__inst, key);
}


/*
 * ======== ti.sysbios.knl.Clock_TimerProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.timers.rti.Timer */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Clock_TimerProxy_Module__startupDone__S( void ) 
{
    return ti_sysbios_timers_rti_Timer_Module__startupDone__S();
}

/* create */
ti_sysbios_knl_Clock_TimerProxy_Handle ti_sysbios_knl_Clock_TimerProxy_create( xdc_Int id, ti_sysbios_interfaces_ITimer_FuncPtr tickFxn, const ti_sysbios_knl_Clock_TimerProxy_Params *prms, xdc_runtime_Error_Block *eb )
{
    return (ti_sysbios_knl_Clock_TimerProxy_Handle)ti_sysbios_timers_rti_Timer_create(id, tickFxn, (const ti_sysbios_timers_rti_Timer_Params *)prms, eb);
}

/* delete */
void ti_sysbios_knl_Clock_TimerProxy_delete(ti_sysbios_knl_Clock_TimerProxy_Handle *instp)
{
    ti_sysbios_timers_rti_Timer_Object__delete__S(instp);
}

/* Params__init__S */
void ti_sysbios_knl_Clock_TimerProxy_Params__init__S( xdc_Ptr dst, const void *src, xdc_SizeT psz, xdc_SizeT isz )
{
    ti_sysbios_timers_rti_Timer_Params__init__S(dst, src, psz, isz);
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_knl_Clock_TimerProxy_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab)
{
    return ti_sysbios_timers_rti_Timer_Handle__label__S(obj, lab);
}

/* getNumTimers__E */
xdc_UInt ti_sysbios_knl_Clock_TimerProxy_getNumTimers__E( void )
{
    return ti_sysbios_timers_rti_Timer_getNumTimers();
}

/* getStatus__E */
ti_sysbios_interfaces_ITimer_Status ti_sysbios_knl_Clock_TimerProxy_getStatus__E( xdc_UInt id )
{
    return ti_sysbios_timers_rti_Timer_getStatus(id);
}

/* startup__E */
xdc_Void ti_sysbios_knl_Clock_TimerProxy_startup__E( void )
{
    ti_sysbios_timers_rti_Timer_startup();
}

/* getMaxTicks__E */
xdc_UInt32 ti_sysbios_knl_Clock_TimerProxy_getMaxTicks__E( ti_sysbios_knl_Clock_TimerProxy_Handle __inst )
{
    return ti_sysbios_timers_rti_Timer_getMaxTicks((ti_sysbios_timers_rti_Timer_Handle)__inst);
}

/* setNextTick__E */
xdc_Void ti_sysbios_knl_Clock_TimerProxy_setNextTick__E( ti_sysbios_knl_Clock_TimerProxy_Handle __inst, xdc_UInt32 ticks )
{
    ti_sysbios_timers_rti_Timer_setNextTick((ti_sysbios_timers_rti_Timer_Handle)__inst, ticks);
}

/* start__E */
xdc_Void ti_sysbios_knl_Clock_TimerProxy_start__E( ti_sysbios_knl_Clock_TimerProxy_Handle __inst )
{
    ti_sysbios_timers_rti_Timer_start((ti_sysbios_timers_rti_Timer_Handle)__inst);
}

/* stop__E */
xdc_Void ti_sysbios_knl_Clock_TimerProxy_stop__E( ti_sysbios_knl_Clock_TimerProxy_Handle __inst )
{
    ti_sysbios_timers_rti_Timer_stop((ti_sysbios_timers_rti_Timer_Handle)__inst);
}

/* setPeriod__E */
xdc_Void ti_sysbios_knl_Clock_TimerProxy_setPeriod__E( ti_sysbios_knl_Clock_TimerProxy_Handle __inst, xdc_UInt32 period )
{
    ti_sysbios_timers_rti_Timer_setPeriod((ti_sysbios_timers_rti_Timer_Handle)__inst, period);
}

/* setPeriodMicroSecs__E */
xdc_Bool ti_sysbios_knl_Clock_TimerProxy_setPeriodMicroSecs__E( ti_sysbios_knl_Clock_TimerProxy_Handle __inst, xdc_UInt32 microsecs )
{
    return ti_sysbios_timers_rti_Timer_setPeriodMicroSecs((ti_sysbios_timers_rti_Timer_Handle)__inst, microsecs);
}

/* getPeriod__E */
xdc_UInt32 ti_sysbios_knl_Clock_TimerProxy_getPeriod__E( ti_sysbios_knl_Clock_TimerProxy_Handle __inst )
{
    return ti_sysbios_timers_rti_Timer_getPeriod((ti_sysbios_timers_rti_Timer_Handle)__inst);
}

/* getCount__E */
xdc_UInt32 ti_sysbios_knl_Clock_TimerProxy_getCount__E( ti_sysbios_knl_Clock_TimerProxy_Handle __inst )
{
    return ti_sysbios_timers_rti_Timer_getCount((ti_sysbios_timers_rti_Timer_Handle)__inst);
}

/* getFreq__E */
xdc_Void ti_sysbios_knl_Clock_TimerProxy_getFreq__E( ti_sysbios_knl_Clock_TimerProxy_Handle __inst, xdc_runtime_Types_FreqHz *freq )
{
    ti_sysbios_timers_rti_Timer_getFreq((ti_sysbios_timers_rti_Timer_Handle)__inst, freq);
}

/* getFunc__E */
ti_sysbios_interfaces_ITimer_FuncPtr ti_sysbios_knl_Clock_TimerProxy_getFunc__E( ti_sysbios_knl_Clock_TimerProxy_Handle __inst, xdc_UArg *arg )
{
    return ti_sysbios_timers_rti_Timer_getFunc((ti_sysbios_timers_rti_Timer_Handle)__inst, arg);
}

/* setFunc__E */
xdc_Void ti_sysbios_knl_Clock_TimerProxy_setFunc__E( ti_sysbios_knl_Clock_TimerProxy_Handle __inst, ti_sysbios_interfaces_ITimer_FuncPtr fxn, xdc_UArg arg )
{
    ti_sysbios_timers_rti_Timer_setFunc((ti_sysbios_timers_rti_Timer_Handle)__inst, fxn, arg);
}

/* trigger__E */
xdc_Void ti_sysbios_knl_Clock_TimerProxy_trigger__E( ti_sysbios_knl_Clock_TimerProxy_Handle __inst, xdc_UInt32 cycles )
{
    ti_sysbios_timers_rti_Timer_trigger((ti_sysbios_timers_rti_Timer_Handle)__inst, cycles);
}

/* getExpiredCounts__E */
xdc_UInt32 ti_sysbios_knl_Clock_TimerProxy_getExpiredCounts__E( ti_sysbios_knl_Clock_TimerProxy_Handle __inst )
{
    return ti_sysbios_timers_rti_Timer_getExpiredCounts((ti_sysbios_timers_rti_Timer_Handle)__inst);
}

/* getExpiredTicks__E */
xdc_UInt32 ti_sysbios_knl_Clock_TimerProxy_getExpiredTicks__E( ti_sysbios_knl_Clock_TimerProxy_Handle __inst, xdc_UInt32 tickPeriod )
{
    return ti_sysbios_timers_rti_Timer_getExpiredTicks((ti_sysbios_timers_rti_Timer_Handle)__inst, tickPeriod);
}

/* getCurrentTick__E */
xdc_UInt32 ti_sysbios_knl_Clock_TimerProxy_getCurrentTick__E( ti_sysbios_knl_Clock_TimerProxy_Handle __inst, xdc_Bool save )
{
    return ti_sysbios_timers_rti_Timer_getCurrentTick((ti_sysbios_timers_rti_Timer_Handle)__inst, save);
}


/*
 * ======== ti.sysbios.knl.Intrinsics_SupportProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.family.c62.IntrinsicsSupport */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Intrinsics_SupportProxy_Module__startupDone__S( void ) 
{
    return ti_sysbios_family_c62_IntrinsicsSupport_Module__startupDone__S();
}

/* maxbit__E */
xdc_UInt ti_sysbios_knl_Intrinsics_SupportProxy_maxbit__E( xdc_UInt bits )
{
    return ti_sysbios_family_c62_IntrinsicsSupport_maxbit(bits);
}


/*
 * ======== ti.sysbios.knl.Task_SupportProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.family.c62.TaskSupport */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Task_SupportProxy_Module__startupDone__S( void ) 
{
    return ti_sysbios_family_c62_TaskSupport_Module__startupDone__S();
}

/* start__E */
xdc_Ptr ti_sysbios_knl_Task_SupportProxy_start__E( xdc_Ptr curTask, ti_sysbios_interfaces_ITaskSupport_FuncPtr enterFxn, ti_sysbios_interfaces_ITaskSupport_FuncPtr exitFxn, xdc_runtime_Error_Block *eb )
{
    return ti_sysbios_family_c62_TaskSupport_start(curTask, enterFxn, exitFxn, eb);
}

/* swap__E */
xdc_Void ti_sysbios_knl_Task_SupportProxy_swap__E( xdc_Ptr *oldtskContext, xdc_Ptr *newtskContext )
{
    ti_sysbios_family_c62_TaskSupport_swap(oldtskContext, newtskContext);
}

/* checkStack__E */
xdc_Bool ti_sysbios_knl_Task_SupportProxy_checkStack__E( xdc_Char *stack, xdc_SizeT size )
{
    return ti_sysbios_family_c62_TaskSupport_checkStack(stack, size);
}

/* stackUsed__E */
xdc_SizeT ti_sysbios_knl_Task_SupportProxy_stackUsed__E( xdc_Char *stack, xdc_SizeT size )
{
    return ti_sysbios_family_c62_TaskSupport_stackUsed(stack, size);
}

/* getStackAlignment__E */
xdc_UInt ti_sysbios_knl_Task_SupportProxy_getStackAlignment__E( void )
{
    return ti_sysbios_family_c62_TaskSupport_getStackAlignment();
}

/* getDefaultStackSize__E */
xdc_SizeT ti_sysbios_knl_Task_SupportProxy_getDefaultStackSize__E( void )
{
    return ti_sysbios_family_c62_TaskSupport_getDefaultStackSize();
}


/*
 * ======== xdc.runtime.LoggerBuf_Module_GateProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.gates.GateHwi */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_LoggerBuf_Module_GateProxy_Module__startupDone__S( void ) 
{
    return ti_sysbios_gates_GateHwi_Module__startupDone__S();
}

/* create */
xdc_runtime_LoggerBuf_Module_GateProxy_Handle xdc_runtime_LoggerBuf_Module_GateProxy_create( const xdc_runtime_LoggerBuf_Module_GateProxy_Params *prms, xdc_runtime_Error_Block *eb )
{
    return (xdc_runtime_LoggerBuf_Module_GateProxy_Handle)ti_sysbios_gates_GateHwi_create((const ti_sysbios_gates_GateHwi_Params *)prms, eb);
}

/* delete */
void xdc_runtime_LoggerBuf_Module_GateProxy_delete(xdc_runtime_LoggerBuf_Module_GateProxy_Handle *instp)
{
    ti_sysbios_gates_GateHwi_Object__delete__S(instp);
}

/* Params__init__S */
void xdc_runtime_LoggerBuf_Module_GateProxy_Params__init__S( xdc_Ptr dst, const void *src, xdc_SizeT psz, xdc_SizeT isz )
{
    ti_sysbios_gates_GateHwi_Params__init__S(dst, src, psz, isz);
}

/* Handle__label__S */
xdc_runtime_Types_Label *xdc_runtime_LoggerBuf_Module_GateProxy_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab)
{
    return ti_sysbios_gates_GateHwi_Handle__label__S(obj, lab);
}

/* query__E */
xdc_Bool xdc_runtime_LoggerBuf_Module_GateProxy_query__E( xdc_Int qual )
{
    return ti_sysbios_gates_GateHwi_query(qual);
}

/* enter__E */
xdc_IArg xdc_runtime_LoggerBuf_Module_GateProxy_enter__E( xdc_runtime_LoggerBuf_Module_GateProxy_Handle __inst )
{
    return ti_sysbios_gates_GateHwi_enter((ti_sysbios_gates_GateHwi_Handle)__inst);
}

/* leave__E */
xdc_Void xdc_runtime_LoggerBuf_Module_GateProxy_leave__E( xdc_runtime_LoggerBuf_Module_GateProxy_Handle __inst, xdc_IArg key )
{
    ti_sysbios_gates_GateHwi_leave((ti_sysbios_gates_GateHwi_Handle)__inst, key);
}


/*
 * ======== xdc.runtime.LoggerBuf_TimestampProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.family.c64p.TimestampProvider */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_LoggerBuf_TimestampProxy_Module__startupDone__S( void ) 
{
    return ti_sysbios_family_c64p_TimestampProvider_Module__startupDone__S();
}

/* get32__E */
xdc_Bits32 xdc_runtime_LoggerBuf_TimestampProxy_get32__E( void )
{
    return ti_sysbios_family_c64p_TimestampProvider_get32();
}

/* get64__E */
xdc_Void xdc_runtime_LoggerBuf_TimestampProxy_get64__E( xdc_runtime_Types_Timestamp64 *result )
{
    ti_sysbios_family_c64p_TimestampProvider_get64(result);
}

/* getFreq__E */
xdc_Void xdc_runtime_LoggerBuf_TimestampProxy_getFreq__E( xdc_runtime_Types_FreqHz *freq )
{
    ti_sysbios_family_c64p_TimestampProvider_getFreq(freq);
}


/*
 * ======== xdc.runtime.Main_Module_GateProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.gates.GateHwi */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Main_Module_GateProxy_Module__startupDone__S( void ) 
{
    return ti_sysbios_gates_GateHwi_Module__startupDone__S();
}

/* create */
xdc_runtime_Main_Module_GateProxy_Handle xdc_runtime_Main_Module_GateProxy_create( const xdc_runtime_Main_Module_GateProxy_Params *prms, xdc_runtime_Error_Block *eb )
{
    return (xdc_runtime_Main_Module_GateProxy_Handle)ti_sysbios_gates_GateHwi_create((const ti_sysbios_gates_GateHwi_Params *)prms, eb);
}

/* delete */
void xdc_runtime_Main_Module_GateProxy_delete(xdc_runtime_Main_Module_GateProxy_Handle *instp)
{
    ti_sysbios_gates_GateHwi_Object__delete__S(instp);
}

/* Params__init__S */
void xdc_runtime_Main_Module_GateProxy_Params__init__S( xdc_Ptr dst, const void *src, xdc_SizeT psz, xdc_SizeT isz )
{
    ti_sysbios_gates_GateHwi_Params__init__S(dst, src, psz, isz);
}

/* Handle__label__S */
xdc_runtime_Types_Label *xdc_runtime_Main_Module_GateProxy_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab)
{
    return ti_sysbios_gates_GateHwi_Handle__label__S(obj, lab);
}

/* query__E */
xdc_Bool xdc_runtime_Main_Module_GateProxy_query__E( xdc_Int qual )
{
    return ti_sysbios_gates_GateHwi_query(qual);
}

/* enter__E */
xdc_IArg xdc_runtime_Main_Module_GateProxy_enter__E( xdc_runtime_Main_Module_GateProxy_Handle __inst )
{
    return ti_sysbios_gates_GateHwi_enter((ti_sysbios_gates_GateHwi_Handle)__inst);
}

/* leave__E */
xdc_Void xdc_runtime_Main_Module_GateProxy_leave__E( xdc_runtime_Main_Module_GateProxy_Handle __inst, xdc_IArg key )
{
    ti_sysbios_gates_GateHwi_leave((ti_sysbios_gates_GateHwi_Handle)__inst, key);
}


/*
 * ======== xdc.runtime.Memory_HeapProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.heaps.HeapMem */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Memory_HeapProxy_Module__startupDone__S( void ) 
{
    return ti_sysbios_heaps_HeapMem_Module__startupDone__S();
}

/* create */
xdc_runtime_Memory_HeapProxy_Handle xdc_runtime_Memory_HeapProxy_create( const xdc_runtime_Memory_HeapProxy_Params *prms, xdc_runtime_Error_Block *eb )
{
    return (xdc_runtime_Memory_HeapProxy_Handle)ti_sysbios_heaps_HeapMem_create((const ti_sysbios_heaps_HeapMem_Params *)prms, eb);
}

/* delete */
void xdc_runtime_Memory_HeapProxy_delete(xdc_runtime_Memory_HeapProxy_Handle *instp)
{
    ti_sysbios_heaps_HeapMem_Object__delete__S(instp);
}

/* Params__init__S */
void xdc_runtime_Memory_HeapProxy_Params__init__S( xdc_Ptr dst, const void *src, xdc_SizeT psz, xdc_SizeT isz )
{
    ti_sysbios_heaps_HeapMem_Params__init__S(dst, src, psz, isz);
}

/* Handle__label__S */
xdc_runtime_Types_Label *xdc_runtime_Memory_HeapProxy_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab)
{
    return ti_sysbios_heaps_HeapMem_Handle__label__S(obj, lab);
}

/* alloc__E */
xdc_Ptr xdc_runtime_Memory_HeapProxy_alloc__E( xdc_runtime_Memory_HeapProxy_Handle __inst, xdc_SizeT size, xdc_SizeT align, xdc_runtime_Error_Block *eb )
{
    return xdc_runtime_IHeap_alloc((xdc_runtime_IHeap_Handle)__inst, size, align, eb);
}

/* free__E */
xdc_Void xdc_runtime_Memory_HeapProxy_free__E( xdc_runtime_Memory_HeapProxy_Handle __inst, xdc_Ptr block, xdc_SizeT size )
{
    xdc_runtime_IHeap_free((xdc_runtime_IHeap_Handle)__inst, block, size);
}

/* isBlocking__E */
xdc_Bool xdc_runtime_Memory_HeapProxy_isBlocking__E( xdc_runtime_Memory_HeapProxy_Handle __inst )
{
    return xdc_runtime_IHeap_isBlocking((xdc_runtime_IHeap_Handle)__inst);
}

/* getStats__E */
xdc_Void xdc_runtime_Memory_HeapProxy_getStats__E( xdc_runtime_Memory_HeapProxy_Handle __inst, xdc_runtime_Memory_Stats *stats )
{
    xdc_runtime_IHeap_getStats((xdc_runtime_IHeap_Handle)__inst, stats);
}


/*
 * ======== xdc.runtime.System_Module_GateProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.gates.GateHwi */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_System_Module_GateProxy_Module__startupDone__S( void ) 
{
    return ti_sysbios_gates_GateHwi_Module__startupDone__S();
}

/* create */
xdc_runtime_System_Module_GateProxy_Handle xdc_runtime_System_Module_GateProxy_create( const xdc_runtime_System_Module_GateProxy_Params *prms, xdc_runtime_Error_Block *eb )
{
    return (xdc_runtime_System_Module_GateProxy_Handle)ti_sysbios_gates_GateHwi_create((const ti_sysbios_gates_GateHwi_Params *)prms, eb);
}

/* delete */
void xdc_runtime_System_Module_GateProxy_delete(xdc_runtime_System_Module_GateProxy_Handle *instp)
{
    ti_sysbios_gates_GateHwi_Object__delete__S(instp);
}

/* Params__init__S */
void xdc_runtime_System_Module_GateProxy_Params__init__S( xdc_Ptr dst, const void *src, xdc_SizeT psz, xdc_SizeT isz )
{
    ti_sysbios_gates_GateHwi_Params__init__S(dst, src, psz, isz);
}

/* Handle__label__S */
xdc_runtime_Types_Label *xdc_runtime_System_Module_GateProxy_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab)
{
    return ti_sysbios_gates_GateHwi_Handle__label__S(obj, lab);
}

/* query__E */
xdc_Bool xdc_runtime_System_Module_GateProxy_query__E( xdc_Int qual )
{
    return ti_sysbios_gates_GateHwi_query(qual);
}

/* enter__E */
xdc_IArg xdc_runtime_System_Module_GateProxy_enter__E( xdc_runtime_System_Module_GateProxy_Handle __inst )
{
    return ti_sysbios_gates_GateHwi_enter((ti_sysbios_gates_GateHwi_Handle)__inst);
}

/* leave__E */
xdc_Void xdc_runtime_System_Module_GateProxy_leave__E( xdc_runtime_System_Module_GateProxy_Handle __inst, xdc_IArg key )
{
    ti_sysbios_gates_GateHwi_leave((ti_sysbios_gates_GateHwi_Handle)__inst, key);
}


/*
 * ======== xdc.runtime.System_SupportProxy PROXY BODY ========
 */

/* DELEGATES TO xdc.runtime.SysStd */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_System_SupportProxy_Module__startupDone__S( void ) 
{
    return xdc_runtime_SysStd_Module__startupDone__S();
}

/* abort__E */
xdc_Void xdc_runtime_System_SupportProxy_abort__E( xdc_CString str )
{
    xdc_runtime_SysStd_abort(str);
}

/* exit__E */
xdc_Void xdc_runtime_System_SupportProxy_exit__E( xdc_Int stat )
{
    xdc_runtime_SysStd_exit(stat);
}

/* flush__E */
xdc_Void xdc_runtime_System_SupportProxy_flush__E( void )
{
    xdc_runtime_SysStd_flush();
}

/* putch__E */
xdc_Void xdc_runtime_System_SupportProxy_putch__E( xdc_Char ch )
{
    xdc_runtime_SysStd_putch(ch);
}

/* ready__E */
xdc_Bool xdc_runtime_System_SupportProxy_ready__E( void )
{
    return xdc_runtime_SysStd_ready();
}


/*
 * ======== xdc.runtime.Timestamp_SupportProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.family.c64p.TimestampProvider */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Timestamp_SupportProxy_Module__startupDone__S( void ) 
{
    return ti_sysbios_family_c64p_TimestampProvider_Module__startupDone__S();
}

/* get32__E */
xdc_Bits32 xdc_runtime_Timestamp_SupportProxy_get32__E( void )
{
    return ti_sysbios_family_c64p_TimestampProvider_get32();
}

/* get64__E */
xdc_Void xdc_runtime_Timestamp_SupportProxy_get64__E( xdc_runtime_Types_Timestamp64 *result )
{
    ti_sysbios_family_c64p_TimestampProvider_get64(result);
}

/* getFreq__E */
xdc_Void xdc_runtime_Timestamp_SupportProxy_getFreq__E( xdc_runtime_Types_FreqHz *freq )
{
    ti_sysbios_family_c64p_TimestampProvider_getFreq(freq);
}


/*
 * ======== ti.sysbios.family.c64p.Hwi OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_family_c64p_Hwi_Object2__ s0; char c; } ti_sysbios_family_c64p_Hwi___S1;
#pragma DATA_SECTION(ti_sysbios_family_c64p_Hwi_Object__DESC__C, ".const:ti_sysbios_family_c64p_Hwi_Object__DESC__C");
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_family_c64p_Hwi_Object__DESC__C = {
    (xdc_CPtr)0, /* fxnTab */
    &ti_sysbios_family_c64p_Hwi_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_family_c64p_Hwi___S1) - sizeof(ti_sysbios_family_c64p_Hwi_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_family_c64p_Hwi_Object2__), /* objSize */
    (xdc_CPtr)&ti_sysbios_family_c64p_Hwi_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_family_c64p_Hwi_Params), /* prmsSize */
};


/*
 * ======== ti.sysbios.gates.GateHwi OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_gates_GateHwi_Object2__ s0; char c; } ti_sysbios_gates_GateHwi___S1;
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Object__DESC__C, ".const:ti_sysbios_gates_GateHwi_Object__DESC__C");
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_gates_GateHwi_Object__DESC__C = {
    (xdc_CPtr)&ti_sysbios_gates_GateHwi_Module__FXNS__C, /* fxnTab */
    &ti_sysbios_gates_GateHwi_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_gates_GateHwi___S1) - sizeof(ti_sysbios_gates_GateHwi_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_gates_GateHwi_Object2__), /* objSize */
    (xdc_CPtr)&ti_sysbios_gates_GateHwi_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_gates_GateHwi_Params), /* prmsSize */
};


/*
 * ======== ti.sysbios.gates.GateMutex OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_gates_GateMutex_Object2__ s0; char c; } ti_sysbios_gates_GateMutex___S1;
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Object__DESC__C, ".const:ti_sysbios_gates_GateMutex_Object__DESC__C");
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_gates_GateMutex_Object__DESC__C = {
    (xdc_CPtr)&ti_sysbios_gates_GateMutex_Module__FXNS__C, /* fxnTab */
    &ti_sysbios_gates_GateMutex_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_gates_GateMutex___S1) - sizeof(ti_sysbios_gates_GateMutex_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_gates_GateMutex_Object2__), /* objSize */
    (xdc_CPtr)&ti_sysbios_gates_GateMutex_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_gates_GateMutex_Params), /* prmsSize */
};


/*
 * ======== ti.sysbios.hal.Hwi OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_hal_Hwi_Object2__ s0; char c; } ti_sysbios_hal_Hwi___S1;
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Object__DESC__C, ".const:ti_sysbios_hal_Hwi_Object__DESC__C");
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_hal_Hwi_Object__DESC__C = {
    (xdc_CPtr)0, /* fxnTab */
    &ti_sysbios_hal_Hwi_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_hal_Hwi___S1) - sizeof(ti_sysbios_hal_Hwi_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_hal_Hwi_Object2__), /* objSize */
    (xdc_CPtr)&ti_sysbios_hal_Hwi_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_hal_Hwi_Params), /* prmsSize */
};


/*
 * ======== ti.sysbios.heaps.HeapBuf OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_heaps_HeapBuf_Object2__ s0; char c; } ti_sysbios_heaps_HeapBuf___S1;
#pragma DATA_SECTION(ti_sysbios_heaps_HeapBuf_Object__DESC__C, ".const:ti_sysbios_heaps_HeapBuf_Object__DESC__C");
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_heaps_HeapBuf_Object__DESC__C = {
    (xdc_CPtr)&ti_sysbios_heaps_HeapBuf_Module__FXNS__C, /* fxnTab */
    &ti_sysbios_heaps_HeapBuf_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_heaps_HeapBuf___S1) - sizeof(ti_sysbios_heaps_HeapBuf_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_heaps_HeapBuf_Object2__), /* objSize */
    (xdc_CPtr)&ti_sysbios_heaps_HeapBuf_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_heaps_HeapBuf_Params), /* prmsSize */
};


/*
 * ======== ti.sysbios.heaps.HeapMem OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_heaps_HeapMem_Object2__ s0; char c; } ti_sysbios_heaps_HeapMem___S1;
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Object__DESC__C, ".const:ti_sysbios_heaps_HeapMem_Object__DESC__C");
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_heaps_HeapMem_Object__DESC__C = {
    (xdc_CPtr)&ti_sysbios_heaps_HeapMem_Module__FXNS__C, /* fxnTab */
    &ti_sysbios_heaps_HeapMem_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_heaps_HeapMem___S1) - sizeof(ti_sysbios_heaps_HeapMem_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_heaps_HeapMem_Object2__), /* objSize */
    (xdc_CPtr)&ti_sysbios_heaps_HeapMem_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_heaps_HeapMem_Params), /* prmsSize */
};


/*
 * ======== ti.sysbios.knl.Clock OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_knl_Clock_Object2__ s0; char c; } ti_sysbios_knl_Clock___S1;
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Object__DESC__C, ".const:ti_sysbios_knl_Clock_Object__DESC__C");
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Clock_Object__DESC__C = {
    (xdc_CPtr)-1, /* fxnTab */
    &ti_sysbios_knl_Clock_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_knl_Clock___S1) - sizeof(ti_sysbios_knl_Clock_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_knl_Clock_Object2__), /* objSize */
    (xdc_CPtr)&ti_sysbios_knl_Clock_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_knl_Clock_Params), /* prmsSize */
};


/*
 * ======== ti.sysbios.knl.Event OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_knl_Event_Object2__ s0; char c; } ti_sysbios_knl_Event___S1;
#pragma DATA_SECTION(ti_sysbios_knl_Event_Object__DESC__C, ".const:ti_sysbios_knl_Event_Object__DESC__C");
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Event_Object__DESC__C = {
    (xdc_CPtr)-1, /* fxnTab */
    &ti_sysbios_knl_Event_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_knl_Event___S1) - sizeof(ti_sysbios_knl_Event_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_knl_Event_Object2__), /* objSize */
    (xdc_CPtr)&ti_sysbios_knl_Event_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_knl_Event_Params), /* prmsSize */
};


/*
 * ======== ti.sysbios.knl.Queue OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_knl_Queue_Object2__ s0; char c; } ti_sysbios_knl_Queue___S1;
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Object__DESC__C, ".const:ti_sysbios_knl_Queue_Object__DESC__C");
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Queue_Object__DESC__C = {
    (xdc_CPtr)-1, /* fxnTab */
    &ti_sysbios_knl_Queue_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_knl_Queue___S1) - sizeof(ti_sysbios_knl_Queue_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_knl_Queue_Object2__), /* objSize */
    (xdc_CPtr)&ti_sysbios_knl_Queue_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_knl_Queue_Params), /* prmsSize */
};


/*
 * ======== ti.sysbios.knl.Semaphore OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_knl_Semaphore_Object2__ s0; char c; } ti_sysbios_knl_Semaphore___S1;
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Object__DESC__C, ".const:ti_sysbios_knl_Semaphore_Object__DESC__C");
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Semaphore_Object__DESC__C = {
    (xdc_CPtr)-1, /* fxnTab */
    &ti_sysbios_knl_Semaphore_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_knl_Semaphore___S1) - sizeof(ti_sysbios_knl_Semaphore_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_knl_Semaphore_Object2__), /* objSize */
    (xdc_CPtr)&ti_sysbios_knl_Semaphore_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_knl_Semaphore_Params), /* prmsSize */
};


/*
 * ======== ti.sysbios.knl.Swi OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_knl_Swi_Object2__ s0; char c; } ti_sysbios_knl_Swi___S1;
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Object__DESC__C, ".const:ti_sysbios_knl_Swi_Object__DESC__C");
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Swi_Object__DESC__C = {
    (xdc_CPtr)-1, /* fxnTab */
    &ti_sysbios_knl_Swi_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_knl_Swi___S1) - sizeof(ti_sysbios_knl_Swi_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_knl_Swi_Object2__), /* objSize */
    (xdc_CPtr)&ti_sysbios_knl_Swi_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_knl_Swi_Params), /* prmsSize */
};


/*
 * ======== ti.sysbios.knl.Task OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_knl_Task_Object2__ s0; char c; } ti_sysbios_knl_Task___S1;
#pragma DATA_SECTION(ti_sysbios_knl_Task_Object__DESC__C, ".const:ti_sysbios_knl_Task_Object__DESC__C");
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Task_Object__DESC__C = {
    (xdc_CPtr)-1, /* fxnTab */
    &ti_sysbios_knl_Task_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_knl_Task___S1) - sizeof(ti_sysbios_knl_Task_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_knl_Task_Object2__), /* objSize */
    (xdc_CPtr)&ti_sysbios_knl_Task_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_knl_Task_Params), /* prmsSize */
};


/*
 * ======== ti.sysbios.timers.rti.Timer OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_timers_rti_Timer_Object2__ s0; char c; } ti_sysbios_timers_rti_Timer___S1;
#pragma DATA_SECTION(ti_sysbios_timers_rti_Timer_Object__DESC__C, ".const:ti_sysbios_timers_rti_Timer_Object__DESC__C");
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_timers_rti_Timer_Object__DESC__C = {
    (xdc_CPtr)0, /* fxnTab */
    &ti_sysbios_timers_rti_Timer_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_timers_rti_Timer___S1) - sizeof(ti_sysbios_timers_rti_Timer_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_timers_rti_Timer_Object2__), /* objSize */
    (xdc_CPtr)&ti_sysbios_timers_rti_Timer_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_timers_rti_Timer_Params), /* prmsSize */
};


/*
 * ======== xdc.runtime.LoggerBuf OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { xdc_runtime_LoggerBuf_Object2__ s0; char c; } xdc_runtime_LoggerBuf___S1;
#pragma DATA_SECTION(xdc_runtime_LoggerBuf_Object__DESC__C, ".const:xdc_runtime_LoggerBuf_Object__DESC__C");
__FAR__ const xdc_runtime_Core_ObjDesc xdc_runtime_LoggerBuf_Object__DESC__C = {
    (xdc_CPtr)&xdc_runtime_LoggerBuf_Module__FXNS__C, /* fxnTab */
    &xdc_runtime_LoggerBuf_Module__root__V.link, /* modLink */
    sizeof(xdc_runtime_LoggerBuf___S1) - sizeof(xdc_runtime_LoggerBuf_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(xdc_runtime_LoggerBuf_Object2__), /* objSize */
    (xdc_CPtr)&xdc_runtime_LoggerBuf_Object__PARAMS__C, /* prmsInit */
    sizeof(xdc_runtime_LoggerBuf_Params), /* prmsSize */
};


/*
 * ======== xdc.runtime.IHeap VIRTUAL FUNCTIONS ========
 */

/* create */
xdc_runtime_IHeap_Handle xdc_runtime_IHeap_create( xdc_runtime_IHeap_Module mod, const xdc_runtime_IHeap_Params *prms, xdc_runtime_Error_Block *eb )
{
    return (xdc_runtime_IHeap_Handle) mod->__sysp->__create(0, (const xdc_UChar*)prms, sizeof (xdc_runtime_IHeap_Params), eb);
}

/* delete */
void xdc_runtime_IHeap_delete( xdc_runtime_IHeap_Handle *instp )
{
    (*instp)->__fxns->__sysp->__delete(instp);
}


/*
 * ======== xdc.runtime.IGateProvider VIRTUAL FUNCTIONS ========
 */

/* create */
xdc_runtime_IGateProvider_Handle xdc_runtime_IGateProvider_create( xdc_runtime_IGateProvider_Module mod, const xdc_runtime_IGateProvider_Params *prms, xdc_runtime_Error_Block *eb )
{
    return (xdc_runtime_IGateProvider_Handle) mod->__sysp->__create(0, (const xdc_UChar*)prms, sizeof (xdc_runtime_IGateProvider_Params), eb);
}

/* delete */
void xdc_runtime_IGateProvider_delete( xdc_runtime_IGateProvider_Handle *instp )
{
    (*instp)->__fxns->__sysp->__delete(instp);
}


/*
 * ======== xdc.runtime.IFilterLogger VIRTUAL FUNCTIONS ========
 */

/* create */
xdc_runtime_IFilterLogger_Handle xdc_runtime_IFilterLogger_create( xdc_runtime_IFilterLogger_Module mod, const xdc_runtime_IFilterLogger_Params *prms, xdc_runtime_Error_Block *eb )
{
    return (xdc_runtime_IFilterLogger_Handle) mod->__sysp->__create(0, (const xdc_UChar*)prms, sizeof (xdc_runtime_IFilterLogger_Params), eb);
}

/* delete */
void xdc_runtime_IFilterLogger_delete( xdc_runtime_IFilterLogger_Handle *instp )
{
    (*instp)->__fxns->__sysp->__delete(instp);
}


/*
 * ======== xdc.runtime.ILogger VIRTUAL FUNCTIONS ========
 */

/* create */
xdc_runtime_ILogger_Handle xdc_runtime_ILogger_create( xdc_runtime_ILogger_Module mod, const xdc_runtime_ILogger_Params *prms, xdc_runtime_Error_Block *eb )
{
    return (xdc_runtime_ILogger_Handle) mod->__sysp->__create(0, (const xdc_UChar*)prms, sizeof (xdc_runtime_ILogger_Params), eb);
}

/* delete */
void xdc_runtime_ILogger_delete( xdc_runtime_ILogger_Handle *instp )
{
    (*instp)->__fxns->__sysp->__delete(instp);
}


/*
 * ======== ti.sysbios.BIOS SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_BIOS_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== ti.sysbios.BIOS_RtsGateProxy SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#ifdef ti_sysbios_BIOS_RtsGateProxy_Module__id__CR
#define Module__MID (*((CT__ti_sysbios_BIOS_RtsGateProxy_Module__id *)(xdcRomConstPtr + ti_sysbios_BIOS_RtsGateProxy_Module__id__C_offset)))
#else
#define Module__MID ti_sysbios_BIOS_RtsGateProxy_Module__id__C
#endif

#undef Module__DGSINCL
#ifdef ti_sysbios_BIOS_RtsGateProxy_Module__diagsIncluded__CR
#define Module__DGSINCL (*((CT__ti_sysbios_BIOS_RtsGateProxy_Module__diagsIncluded *)(xdcRomConstPtr + ti_sysbios_BIOS_RtsGateProxy_Module__diagsIncluded__C_offset)))
#else
#define Module__DGSINCL ti_sysbios_BIOS_RtsGateProxy_Module__diagsIncluded__C
#endif

#undef Module__DGSENAB
#ifdef ti_sysbios_BIOS_RtsGateProxy_Module__diagsEnabled__CR
#define Module__DGSENAB (*((CT__ti_sysbios_BIOS_RtsGateProxy_Module__diagsEnabled *)(xdcRomConstPtr + ti_sysbios_BIOS_RtsGateProxy_Module__diagsEnabled__C_offset)))
#else
#define Module__DGSENAB ti_sysbios_BIOS_RtsGateProxy_Module__diagsEnabled__C
#endif

#undef Module__DGSMASK
#ifdef ti_sysbios_BIOS_RtsGateProxy_Module__diagsMask__CR
#define Module__DGSMASK (*((CT__ti_sysbios_BIOS_RtsGateProxy_Module__diagsMask *)(xdcRomConstPtr + ti_sysbios_BIOS_RtsGateProxy_Module__diagsMask__C_offset)))
#else
#define Module__DGSMASK ti_sysbios_BIOS_RtsGateProxy_Module__diagsMask__C
#endif

#undef Module__LOGDEF
#ifdef ti_sysbios_BIOS_RtsGateProxy_Module__loggerDefined__CR
#define Module__LOGDEF (*((CT__ti_sysbios_BIOS_RtsGateProxy_Module__loggerDefined *)(xdcRomConstPtr + ti_sysbios_BIOS_RtsGateProxy_Module__loggerDefined__C_offset)))
#else
#define Module__LOGDEF ti_sysbios_BIOS_RtsGateProxy_Module__loggerDefined__C
#endif

#undef Module__LOGOBJ
#ifdef ti_sysbios_BIOS_RtsGateProxy_Module__loggerObj__CR
#define Module__LOGOBJ ti_sysbios_BIOS_RtsGateProxy_Module__loggerObj__R
#define Module__LOGOBJ (*((CT__ti_sysbios_BIOS_RtsGateProxy_Module__loggerObj *)(xdcRomConstPtr + ti_sysbios_BIOS_RtsGateProxy_Module__loggerObj__C_offset)))
#else
#define Module__LOGOBJ ti_sysbios_BIOS_RtsGateProxy_Module__loggerObj__C
#endif

#undef Module__LOGFXN0
#ifdef ti_sysbios_BIOS_RtsGateProxy_Module__loggerFxn0__CR
#define Module__LOGFXN0 (*((CT__ti_sysbios_BIOS_RtsGateProxy_Module__loggerFxn0 *)(xdcRomConstPtr + ti_sysbios_BIOS_RtsGateProxy_Module__loggerFxn0__C_offset)))
#else
#define Module__LOGFXN0 ti_sysbios_BIOS_RtsGateProxy_Module__loggerFxn0__C
#endif

#undef Module__LOGFXN1
#ifdef ti_sysbios_BIOS_RtsGateProxy_Module__loggerFxn1__CR
#define Module__LOGFXN1 (*((CT__ti_sysbios_BIOS_RtsGateProxy_Module__loggerFxn1 *)(xdcRomConstPtr + ti_sysbios_BIOS_RtsGateProxy_Module__loggerFxn1__C_offset)))
#else
#define Module__LOGFXN1 ti_sysbios_BIOS_RtsGateProxy_Module__loggerFxn1__C
#endif

#undef Module__LOGFXN2
#ifdef ti_sysbios_BIOS_RtsGateProxy_Module__loggerFxn2__CR
#define Module__LOGFXN2 (*((CT__ti_sysbios_BIOS_RtsGateProxy_Module__loggerFxn2 *)(xdcRomConstPtr + ti_sysbios_BIOS_RtsGateProxy_Module__loggerFxn2__C_offset)))
#else
#define Module__LOGFXN2 ti_sysbios_BIOS_RtsGateProxy_Module__loggerFxn2__C
#endif

#undef Module__LOGFXN4
#ifdef ti_sysbios_BIOS_RtsGateProxy_Module__loggerFxn4__CR
#define Module__LOGFXN4 (*((CT__ti_sysbios_BIOS_RtsGateProxy_Module__loggerFxn4 *)(xdcRomConstPtr + ti_sysbios_BIOS_RtsGateProxy_Module__loggerFxn4__C_offset)))
#else
#define Module__LOGFXN4 ti_sysbios_BIOS_RtsGateProxy_Module__loggerFxn4__C
#endif

#undef Module__LOGFXN8
#ifdef ti_sysbios_BIOS_RtsGateProxy_Module__loggerFxn8__CR
#define Module__LOGFXN8 (*((CT__ti_sysbios_BIOS_RtsGateProxy_Module__loggerFxn8 *)(xdcRomConstPtr + ti_sysbios_BIOS_RtsGateProxy_Module__loggerFxn8__C_offset)))
#else
#define Module__LOGFXN8 ti_sysbios_BIOS_RtsGateProxy_Module__loggerFxn8__C
#endif

#undef Module__G_OBJ
#ifdef ti_sysbios_BIOS_RtsGateProxy_Module__gateObj__CR
#define Module__G_OBJ (*((CT__ti_sysbios_BIOS_RtsGateProxy_Module__gateObj *)(xdcRomConstPtr + ti_sysbios_BIOS_RtsGateProxy_Module__gateObj__C_offset)))
#else
#define Module__G_OBJ ti_sysbios_BIOS_RtsGateProxy_Module__gateObj__C
#endif

#undef Module__G_PRMS
#ifdef ti_sysbios_BIOS_RtsGateProxy_Module__gatePrms__CR
#define Module__G_PRMS (*((CT__ti_sysbios_BIOS_RtsGateProxy_Module__gatePrms *)(xdcRomConstPtr + ti_sysbios_BIOS_RtsGateProxy_Module__gatePrms__C_offset)))
#else
#define Module__G_PRMS ti_sysbios_BIOS_RtsGateProxy_Module__gatePrms__C
#endif

#undef Module__GP_create
#define Module__GP_create ti_sysbios_BIOS_RtsGateProxy_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_BIOS_RtsGateProxy_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_BIOS_RtsGateProxy_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_BIOS_RtsGateProxy_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_BIOS_RtsGateProxy_Module_GateProxy_query

xdc_Bool ti_sysbios_BIOS_RtsGateProxy_Proxy__abstract__S(void)
{
    return 0;
}
xdc_CPtr ti_sysbios_BIOS_RtsGateProxy_Proxy__delegate__S(void)
{
    return (const void *)&ti_sysbios_gates_GateMutex_Module__FXNS__C;
}



/*
 * ======== ti.sysbios.family.c62.IntrinsicsSupport SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_family_c62_IntrinsicsSupport_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== ti.sysbios.family.c62.TaskSupport SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_family_c62_TaskSupport_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== ti.sysbios.family.c64p.Cache SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_family_c64p_Cache_Module__startupDone__S( void )
{
    return ti_sysbios_family_c64p_Cache_Module__startupDone__F();
}



/*
 * ======== ti.sysbios.family.c64p.EventCombiner SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_family_c64p_EventCombiner_Module__startupDone__S( void )
{
    return ti_sysbios_family_c64p_EventCombiner_Module__startupDone__F();
}



/*
 * ======== ti.sysbios.family.c64p.Exception SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_family_c64p_Exception_Module__startupDone__S( void )
{
    return ti_sysbios_family_c64p_Exception_Module__startupDone__F();
}



/*
 * ======== ti.sysbios.family.c64p.Hwi SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#ifdef ti_sysbios_family_c64p_Hwi_Module__id__CR
#define Module__MID (*((CT__ti_sysbios_family_c64p_Hwi_Module__id *)(xdcRomConstPtr + ti_sysbios_family_c64p_Hwi_Module__id__C_offset)))
#else
#define Module__MID ti_sysbios_family_c64p_Hwi_Module__id__C
#endif

#undef Module__DGSINCL
#ifdef ti_sysbios_family_c64p_Hwi_Module__diagsIncluded__CR
#define Module__DGSINCL (*((CT__ti_sysbios_family_c64p_Hwi_Module__diagsIncluded *)(xdcRomConstPtr + ti_sysbios_family_c64p_Hwi_Module__diagsIncluded__C_offset)))
#else
#define Module__DGSINCL ti_sysbios_family_c64p_Hwi_Module__diagsIncluded__C
#endif

#undef Module__DGSENAB
#ifdef ti_sysbios_family_c64p_Hwi_Module__diagsEnabled__CR
#define Module__DGSENAB (*((CT__ti_sysbios_family_c64p_Hwi_Module__diagsEnabled *)(xdcRomConstPtr + ti_sysbios_family_c64p_Hwi_Module__diagsEnabled__C_offset)))
#else
#define Module__DGSENAB ti_sysbios_family_c64p_Hwi_Module__diagsEnabled__C
#endif

#undef Module__DGSMASK
#ifdef ti_sysbios_family_c64p_Hwi_Module__diagsMask__CR
#define Module__DGSMASK (*((CT__ti_sysbios_family_c64p_Hwi_Module__diagsMask *)(xdcRomConstPtr + ti_sysbios_family_c64p_Hwi_Module__diagsMask__C_offset)))
#else
#define Module__DGSMASK ti_sysbios_family_c64p_Hwi_Module__diagsMask__C
#endif

#undef Module__LOGDEF
#ifdef ti_sysbios_family_c64p_Hwi_Module__loggerDefined__CR
#define Module__LOGDEF (*((CT__ti_sysbios_family_c64p_Hwi_Module__loggerDefined *)(xdcRomConstPtr + ti_sysbios_family_c64p_Hwi_Module__loggerDefined__C_offset)))
#else
#define Module__LOGDEF ti_sysbios_family_c64p_Hwi_Module__loggerDefined__C
#endif

#undef Module__LOGOBJ
#ifdef ti_sysbios_family_c64p_Hwi_Module__loggerObj__CR
#define Module__LOGOBJ ti_sysbios_family_c64p_Hwi_Module__loggerObj__R
#define Module__LOGOBJ (*((CT__ti_sysbios_family_c64p_Hwi_Module__loggerObj *)(xdcRomConstPtr + ti_sysbios_family_c64p_Hwi_Module__loggerObj__C_offset)))
#else
#define Module__LOGOBJ ti_sysbios_family_c64p_Hwi_Module__loggerObj__C
#endif

#undef Module__LOGFXN0
#ifdef ti_sysbios_family_c64p_Hwi_Module__loggerFxn0__CR
#define Module__LOGFXN0 (*((CT__ti_sysbios_family_c64p_Hwi_Module__loggerFxn0 *)(xdcRomConstPtr + ti_sysbios_family_c64p_Hwi_Module__loggerFxn0__C_offset)))
#else
#define Module__LOGFXN0 ti_sysbios_family_c64p_Hwi_Module__loggerFxn0__C
#endif

#undef Module__LOGFXN1
#ifdef ti_sysbios_family_c64p_Hwi_Module__loggerFxn1__CR
#define Module__LOGFXN1 (*((CT__ti_sysbios_family_c64p_Hwi_Module__loggerFxn1 *)(xdcRomConstPtr + ti_sysbios_family_c64p_Hwi_Module__loggerFxn1__C_offset)))
#else
#define Module__LOGFXN1 ti_sysbios_family_c64p_Hwi_Module__loggerFxn1__C
#endif

#undef Module__LOGFXN2
#ifdef ti_sysbios_family_c64p_Hwi_Module__loggerFxn2__CR
#define Module__LOGFXN2 (*((CT__ti_sysbios_family_c64p_Hwi_Module__loggerFxn2 *)(xdcRomConstPtr + ti_sysbios_family_c64p_Hwi_Module__loggerFxn2__C_offset)))
#else
#define Module__LOGFXN2 ti_sysbios_family_c64p_Hwi_Module__loggerFxn2__C
#endif

#undef Module__LOGFXN4
#ifdef ti_sysbios_family_c64p_Hwi_Module__loggerFxn4__CR
#define Module__LOGFXN4 (*((CT__ti_sysbios_family_c64p_Hwi_Module__loggerFxn4 *)(xdcRomConstPtr + ti_sysbios_family_c64p_Hwi_Module__loggerFxn4__C_offset)))
#else
#define Module__LOGFXN4 ti_sysbios_family_c64p_Hwi_Module__loggerFxn4__C
#endif

#undef Module__LOGFXN8
#ifdef ti_sysbios_family_c64p_Hwi_Module__loggerFxn8__CR
#define Module__LOGFXN8 (*((CT__ti_sysbios_family_c64p_Hwi_Module__loggerFxn8 *)(xdcRomConstPtr + ti_sysbios_family_c64p_Hwi_Module__loggerFxn8__C_offset)))
#else
#define Module__LOGFXN8 ti_sysbios_family_c64p_Hwi_Module__loggerFxn8__C
#endif

#undef Module__G_OBJ
#ifdef ti_sysbios_family_c64p_Hwi_Module__gateObj__CR
#define Module__G_OBJ (*((CT__ti_sysbios_family_c64p_Hwi_Module__gateObj *)(xdcRomConstPtr + ti_sysbios_family_c64p_Hwi_Module__gateObj__C_offset)))
#else
#define Module__G_OBJ ti_sysbios_family_c64p_Hwi_Module__gateObj__C
#endif

#undef Module__G_PRMS
#ifdef ti_sysbios_family_c64p_Hwi_Module__gatePrms__CR
#define Module__G_PRMS (*((CT__ti_sysbios_family_c64p_Hwi_Module__gatePrms *)(xdcRomConstPtr + ti_sysbios_family_c64p_Hwi_Module__gatePrms__C_offset)))
#else
#define Module__G_PRMS ti_sysbios_family_c64p_Hwi_Module__gatePrms__C
#endif

#undef Module__GP_create
#define Module__GP_create ti_sysbios_family_c64p_Hwi_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_family_c64p_Hwi_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_family_c64p_Hwi_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_family_c64p_Hwi_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_family_c64p_Hwi_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_family_c64p_Hwi_Module__startupDone__S( void )
{
    return ti_sysbios_family_c64p_Hwi_Module__startupDone__F();
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_family_c64p_Hwi_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) 
{
    lab->handle = obj;
    lab->modId = 32792;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_family_c64p_Hwi_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_CPtr)(src ? src : &ti_sysbios_family_c64p_Hwi_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_family_c64p_Hwi_Object__get__S(xdc_Ptr oa, xdc_Int i)
{
    if (oa) {
        return ((ti_sysbios_family_c64p_Hwi_Object__ *)oa) + i;
    }

    /* the bogus 'const' in the cast suppresses Klocwork MISRA complaints */
    return ((ti_sysbios_family_c64p_Hwi_Object__ * const)ti_sysbios_family_c64p_Hwi_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_family_c64p_Hwi_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_family_c64p_Hwi_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_family_c64p_Hwi_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_family_c64p_Hwi_Object__next__S( xdc_Ptr obj )
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_family_c64p_Hwi_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_family_c64p_Hwi_Object__create__S (
    xdc_CPtr __aa,
    const xdc_UChar *__paramsPtr,
    xdc_SizeT __psz,
    xdc_runtime_Error_Block *eb)
{
    const ti_sysbios_family_c64p_Hwi_Args__create *__args = __aa;
    ti_sysbios_family_c64p_Hwi_Params __prms;
    ti_sysbios_family_c64p_Hwi_Object *__obj;
    int iStat;

    /* common instance initialization */
    __obj = xdc_runtime_Core_createObject__I(&ti_sysbios_family_c64p_Hwi_Object__DESC__C, NULL, &__prms, (xdc_CPtr)__paramsPtr, 0, eb);
    if (__obj == NULL) {
        return NULL;
    }


    /* module-specific initialization */
    iStat = ti_sysbios_family_c64p_Hwi_Instance_init__E(__obj, __args->intNum, __args->hwiFxn, &__prms, eb);
    if (iStat) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_family_c64p_Hwi_Object__DESC__C, __obj, (xdc_Fxn)ti_sysbios_family_c64p_Hwi_Instance_finalize__E, iStat, 0);
        return NULL;
    }

    return __obj;
}

/* create */
ti_sysbios_family_c64p_Hwi_Handle ti_sysbios_family_c64p_Hwi_create( xdc_Int intNum, ti_sysbios_interfaces_IHwi_FuncPtr hwiFxn, const ti_sysbios_family_c64p_Hwi_Params *__paramsPtr, xdc_runtime_Error_Block *eb )
{
    ti_sysbios_family_c64p_Hwi_Params prms;
    ti_sysbios_family_c64p_Hwi_Object *obj;

    int iStat;

    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&ti_sysbios_family_c64p_Hwi_Object__DESC__C, NULL, &prms, (xdc_CPtr)__paramsPtr, 0, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    iStat = ti_sysbios_family_c64p_Hwi_Instance_init__E(obj, intNum, hwiFxn, &prms, eb);
    if (iStat) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_family_c64p_Hwi_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_family_c64p_Hwi_Instance_finalize__E, iStat, 0);
        return NULL;
    }

    return obj;
}

/* construct */
void ti_sysbios_family_c64p_Hwi_construct(ti_sysbios_family_c64p_Hwi_Struct *__obj, xdc_Int intNum, ti_sysbios_interfaces_IHwi_FuncPtr hwiFxn, const ti_sysbios_family_c64p_Hwi_Params *__paramsPtr, xdc_runtime_Error_Block *eb )
{
    ti_sysbios_family_c64p_Hwi_Params __prms;
    int iStat;

    /* common instance initialization */
    xdc_runtime_Core_constructObject__I(&ti_sysbios_family_c64p_Hwi_Object__DESC__C, __obj, &__prms, (xdc_CPtr)__paramsPtr, 0, eb);

    /* module-specific initialization */
    iStat = ti_sysbios_family_c64p_Hwi_Instance_init__E((xdc_Ptr)__obj, intNum, hwiFxn, &__prms, eb);
    if (iStat) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_family_c64p_Hwi_Object__DESC__C, __obj, (xdc_Fxn)ti_sysbios_family_c64p_Hwi_Instance_finalize__E, iStat, 1);
    }

}

/* destruct */
void ti_sysbios_family_c64p_Hwi_destruct(ti_sysbios_family_c64p_Hwi_Struct *obj)
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_family_c64p_Hwi_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_family_c64p_Hwi_Instance_finalize__E, 0, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sysbios_family_c64p_Hwi_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_family_c64p_Hwi_Object__DESC__C, *((ti_sysbios_family_c64p_Hwi_Object**)instp), (xdc_Fxn)ti_sysbios_family_c64p_Hwi_Instance_finalize__E, 0, FALSE);
    *((ti_sysbios_family_c64p_Hwi_Handle*)instp) = NULL;
}

/* delete */
void ti_sysbios_family_c64p_Hwi_delete(ti_sysbios_family_c64p_Hwi_Handle *instp)
{
    ti_sysbios_family_c64p_Hwi_Object__delete__S(instp);
}


/*
 * ======== ti.sysbios.family.c64p.TimestampProvider SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_family_c64p_TimestampProvider_Module__startupDone__S( void )
{
    return ti_sysbios_family_c64p_TimestampProvider_Module__startupDone__F();
}



/*
 * ======== ti.sysbios.gates.GateHwi SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#ifdef ti_sysbios_gates_GateHwi_Module__id__CR
#define Module__MID (*((CT__ti_sysbios_gates_GateHwi_Module__id *)(xdcRomConstPtr + ti_sysbios_gates_GateHwi_Module__id__C_offset)))
#else
#define Module__MID ti_sysbios_gates_GateHwi_Module__id__C
#endif

#undef Module__DGSINCL
#ifdef ti_sysbios_gates_GateHwi_Module__diagsIncluded__CR
#define Module__DGSINCL (*((CT__ti_sysbios_gates_GateHwi_Module__diagsIncluded *)(xdcRomConstPtr + ti_sysbios_gates_GateHwi_Module__diagsIncluded__C_offset)))
#else
#define Module__DGSINCL ti_sysbios_gates_GateHwi_Module__diagsIncluded__C
#endif

#undef Module__DGSENAB
#ifdef ti_sysbios_gates_GateHwi_Module__diagsEnabled__CR
#define Module__DGSENAB (*((CT__ti_sysbios_gates_GateHwi_Module__diagsEnabled *)(xdcRomConstPtr + ti_sysbios_gates_GateHwi_Module__diagsEnabled__C_offset)))
#else
#define Module__DGSENAB ti_sysbios_gates_GateHwi_Module__diagsEnabled__C
#endif

#undef Module__DGSMASK
#ifdef ti_sysbios_gates_GateHwi_Module__diagsMask__CR
#define Module__DGSMASK (*((CT__ti_sysbios_gates_GateHwi_Module__diagsMask *)(xdcRomConstPtr + ti_sysbios_gates_GateHwi_Module__diagsMask__C_offset)))
#else
#define Module__DGSMASK ti_sysbios_gates_GateHwi_Module__diagsMask__C
#endif

#undef Module__LOGDEF
#ifdef ti_sysbios_gates_GateHwi_Module__loggerDefined__CR
#define Module__LOGDEF (*((CT__ti_sysbios_gates_GateHwi_Module__loggerDefined *)(xdcRomConstPtr + ti_sysbios_gates_GateHwi_Module__loggerDefined__C_offset)))
#else
#define Module__LOGDEF ti_sysbios_gates_GateHwi_Module__loggerDefined__C
#endif

#undef Module__LOGOBJ
#ifdef ti_sysbios_gates_GateHwi_Module__loggerObj__CR
#define Module__LOGOBJ ti_sysbios_gates_GateHwi_Module__loggerObj__R
#define Module__LOGOBJ (*((CT__ti_sysbios_gates_GateHwi_Module__loggerObj *)(xdcRomConstPtr + ti_sysbios_gates_GateHwi_Module__loggerObj__C_offset)))
#else
#define Module__LOGOBJ ti_sysbios_gates_GateHwi_Module__loggerObj__C
#endif

#undef Module__LOGFXN0
#ifdef ti_sysbios_gates_GateHwi_Module__loggerFxn0__CR
#define Module__LOGFXN0 (*((CT__ti_sysbios_gates_GateHwi_Module__loggerFxn0 *)(xdcRomConstPtr + ti_sysbios_gates_GateHwi_Module__loggerFxn0__C_offset)))
#else
#define Module__LOGFXN0 ti_sysbios_gates_GateHwi_Module__loggerFxn0__C
#endif

#undef Module__LOGFXN1
#ifdef ti_sysbios_gates_GateHwi_Module__loggerFxn1__CR
#define Module__LOGFXN1 (*((CT__ti_sysbios_gates_GateHwi_Module__loggerFxn1 *)(xdcRomConstPtr + ti_sysbios_gates_GateHwi_Module__loggerFxn1__C_offset)))
#else
#define Module__LOGFXN1 ti_sysbios_gates_GateHwi_Module__loggerFxn1__C
#endif

#undef Module__LOGFXN2
#ifdef ti_sysbios_gates_GateHwi_Module__loggerFxn2__CR
#define Module__LOGFXN2 (*((CT__ti_sysbios_gates_GateHwi_Module__loggerFxn2 *)(xdcRomConstPtr + ti_sysbios_gates_GateHwi_Module__loggerFxn2__C_offset)))
#else
#define Module__LOGFXN2 ti_sysbios_gates_GateHwi_Module__loggerFxn2__C
#endif

#undef Module__LOGFXN4
#ifdef ti_sysbios_gates_GateHwi_Module__loggerFxn4__CR
#define Module__LOGFXN4 (*((CT__ti_sysbios_gates_GateHwi_Module__loggerFxn4 *)(xdcRomConstPtr + ti_sysbios_gates_GateHwi_Module__loggerFxn4__C_offset)))
#else
#define Module__LOGFXN4 ti_sysbios_gates_GateHwi_Module__loggerFxn4__C
#endif

#undef Module__LOGFXN8
#ifdef ti_sysbios_gates_GateHwi_Module__loggerFxn8__CR
#define Module__LOGFXN8 (*((CT__ti_sysbios_gates_GateHwi_Module__loggerFxn8 *)(xdcRomConstPtr + ti_sysbios_gates_GateHwi_Module__loggerFxn8__C_offset)))
#else
#define Module__LOGFXN8 ti_sysbios_gates_GateHwi_Module__loggerFxn8__C
#endif

#undef Module__G_OBJ
#ifdef ti_sysbios_gates_GateHwi_Module__gateObj__CR
#define Module__G_OBJ (*((CT__ti_sysbios_gates_GateHwi_Module__gateObj *)(xdcRomConstPtr + ti_sysbios_gates_GateHwi_Module__gateObj__C_offset)))
#else
#define Module__G_OBJ ti_sysbios_gates_GateHwi_Module__gateObj__C
#endif

#undef Module__G_PRMS
#ifdef ti_sysbios_gates_GateHwi_Module__gatePrms__CR
#define Module__G_PRMS (*((CT__ti_sysbios_gates_GateHwi_Module__gatePrms *)(xdcRomConstPtr + ti_sysbios_gates_GateHwi_Module__gatePrms__C_offset)))
#else
#define Module__G_PRMS ti_sysbios_gates_GateHwi_Module__gatePrms__C
#endif

#undef Module__GP_create
#define Module__GP_create ti_sysbios_gates_GateHwi_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_gates_GateHwi_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_gates_GateHwi_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_gates_GateHwi_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_gates_GateHwi_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_gates_GateHwi_Module__startupDone__S( void )
{
    return 1;
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_gates_GateHwi_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) 
{
    lab->handle = obj;
    lab->modId = 32819;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_gates_GateHwi_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_CPtr)(src ? src : &ti_sysbios_gates_GateHwi_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_gates_GateHwi_Object__get__S(xdc_Ptr oa, xdc_Int i)
{
    if (oa) {
        return ((ti_sysbios_gates_GateHwi_Object__ *)oa) + i;
    }

    /* the bogus 'const' in the cast suppresses Klocwork MISRA complaints */
    return ((ti_sysbios_gates_GateHwi_Object__ * const)ti_sysbios_gates_GateHwi_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_gates_GateHwi_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_gates_GateHwi_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_gates_GateHwi_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_gates_GateHwi_Object__next__S( xdc_Ptr obj )
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_gates_GateHwi_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_gates_GateHwi_Object__create__S (
    xdc_CPtr __aa,
    const xdc_UChar *__paramsPtr,
    xdc_SizeT __psz,
    xdc_runtime_Error_Block *eb)
{
    ti_sysbios_gates_GateHwi_Params __prms;
    ti_sysbios_gates_GateHwi_Object *__obj;

    /* common instance initialization */
    __obj = xdc_runtime_Core_createObject__I(&ti_sysbios_gates_GateHwi_Object__DESC__C, NULL, &__prms, (xdc_CPtr)__paramsPtr, 0, eb);
    if (__obj == NULL) {
        return NULL;
    }


    /* module-specific initialization */
    ti_sysbios_gates_GateHwi_Instance_init__E(__obj, &__prms);
    return __obj;
}

/* create */
ti_sysbios_gates_GateHwi_Handle ti_sysbios_gates_GateHwi_create( const ti_sysbios_gates_GateHwi_Params *__paramsPtr, xdc_runtime_Error_Block *eb )
{
    ti_sysbios_gates_GateHwi_Params prms;
    ti_sysbios_gates_GateHwi_Object *obj;


    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&ti_sysbios_gates_GateHwi_Object__DESC__C, NULL, &prms, (xdc_CPtr)__paramsPtr, 0, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_sysbios_gates_GateHwi_Instance_init__E(obj, &prms);
    return obj;
}

/* construct */
void ti_sysbios_gates_GateHwi_construct(ti_sysbios_gates_GateHwi_Struct *__obj, const ti_sysbios_gates_GateHwi_Params *__paramsPtr )
{
    ti_sysbios_gates_GateHwi_Params __prms;

    /* common instance initialization */
    xdc_runtime_Core_constructObject__I(&ti_sysbios_gates_GateHwi_Object__DESC__C, __obj, &__prms, (xdc_CPtr)__paramsPtr, 0, NULL);

    /* module-specific initialization */
    ti_sysbios_gates_GateHwi_Instance_init__E((xdc_Ptr)__obj, &__prms);
}

/* destruct */
void ti_sysbios_gates_GateHwi_destruct(ti_sysbios_gates_GateHwi_Struct *obj)
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_gates_GateHwi_Object__DESC__C, obj, NULL, -1, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sysbios_gates_GateHwi_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_gates_GateHwi_Object__DESC__C, *((ti_sysbios_gates_GateHwi_Object**)instp), NULL, -1, FALSE);
    *((ti_sysbios_gates_GateHwi_Handle*)instp) = NULL;
}

/* delete */
void ti_sysbios_gates_GateHwi_delete(ti_sysbios_gates_GateHwi_Handle *instp)
{
    ti_sysbios_gates_GateHwi_Object__delete__S(instp);
}


/*
 * ======== ti.sysbios.gates.GateMutex SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#ifdef ti_sysbios_gates_GateMutex_Module__id__CR
#define Module__MID (*((CT__ti_sysbios_gates_GateMutex_Module__id *)(xdcRomConstPtr + ti_sysbios_gates_GateMutex_Module__id__C_offset)))
#else
#define Module__MID ti_sysbios_gates_GateMutex_Module__id__C
#endif

#undef Module__DGSINCL
#ifdef ti_sysbios_gates_GateMutex_Module__diagsIncluded__CR
#define Module__DGSINCL (*((CT__ti_sysbios_gates_GateMutex_Module__diagsIncluded *)(xdcRomConstPtr + ti_sysbios_gates_GateMutex_Module__diagsIncluded__C_offset)))
#else
#define Module__DGSINCL ti_sysbios_gates_GateMutex_Module__diagsIncluded__C
#endif

#undef Module__DGSENAB
#ifdef ti_sysbios_gates_GateMutex_Module__diagsEnabled__CR
#define Module__DGSENAB (*((CT__ti_sysbios_gates_GateMutex_Module__diagsEnabled *)(xdcRomConstPtr + ti_sysbios_gates_GateMutex_Module__diagsEnabled__C_offset)))
#else
#define Module__DGSENAB ti_sysbios_gates_GateMutex_Module__diagsEnabled__C
#endif

#undef Module__DGSMASK
#ifdef ti_sysbios_gates_GateMutex_Module__diagsMask__CR
#define Module__DGSMASK (*((CT__ti_sysbios_gates_GateMutex_Module__diagsMask *)(xdcRomConstPtr + ti_sysbios_gates_GateMutex_Module__diagsMask__C_offset)))
#else
#define Module__DGSMASK ti_sysbios_gates_GateMutex_Module__diagsMask__C
#endif

#undef Module__LOGDEF
#ifdef ti_sysbios_gates_GateMutex_Module__loggerDefined__CR
#define Module__LOGDEF (*((CT__ti_sysbios_gates_GateMutex_Module__loggerDefined *)(xdcRomConstPtr + ti_sysbios_gates_GateMutex_Module__loggerDefined__C_offset)))
#else
#define Module__LOGDEF ti_sysbios_gates_GateMutex_Module__loggerDefined__C
#endif

#undef Module__LOGOBJ
#ifdef ti_sysbios_gates_GateMutex_Module__loggerObj__CR
#define Module__LOGOBJ ti_sysbios_gates_GateMutex_Module__loggerObj__R
#define Module__LOGOBJ (*((CT__ti_sysbios_gates_GateMutex_Module__loggerObj *)(xdcRomConstPtr + ti_sysbios_gates_GateMutex_Module__loggerObj__C_offset)))
#else
#define Module__LOGOBJ ti_sysbios_gates_GateMutex_Module__loggerObj__C
#endif

#undef Module__LOGFXN0
#ifdef ti_sysbios_gates_GateMutex_Module__loggerFxn0__CR
#define Module__LOGFXN0 (*((CT__ti_sysbios_gates_GateMutex_Module__loggerFxn0 *)(xdcRomConstPtr + ti_sysbios_gates_GateMutex_Module__loggerFxn0__C_offset)))
#else
#define Module__LOGFXN0 ti_sysbios_gates_GateMutex_Module__loggerFxn0__C
#endif

#undef Module__LOGFXN1
#ifdef ti_sysbios_gates_GateMutex_Module__loggerFxn1__CR
#define Module__LOGFXN1 (*((CT__ti_sysbios_gates_GateMutex_Module__loggerFxn1 *)(xdcRomConstPtr + ti_sysbios_gates_GateMutex_Module__loggerFxn1__C_offset)))
#else
#define Module__LOGFXN1 ti_sysbios_gates_GateMutex_Module__loggerFxn1__C
#endif

#undef Module__LOGFXN2
#ifdef ti_sysbios_gates_GateMutex_Module__loggerFxn2__CR
#define Module__LOGFXN2 (*((CT__ti_sysbios_gates_GateMutex_Module__loggerFxn2 *)(xdcRomConstPtr + ti_sysbios_gates_GateMutex_Module__loggerFxn2__C_offset)))
#else
#define Module__LOGFXN2 ti_sysbios_gates_GateMutex_Module__loggerFxn2__C
#endif

#undef Module__LOGFXN4
#ifdef ti_sysbios_gates_GateMutex_Module__loggerFxn4__CR
#define Module__LOGFXN4 (*((CT__ti_sysbios_gates_GateMutex_Module__loggerFxn4 *)(xdcRomConstPtr + ti_sysbios_gates_GateMutex_Module__loggerFxn4__C_offset)))
#else
#define Module__LOGFXN4 ti_sysbios_gates_GateMutex_Module__loggerFxn4__C
#endif

#undef Module__LOGFXN8
#ifdef ti_sysbios_gates_GateMutex_Module__loggerFxn8__CR
#define Module__LOGFXN8 (*((CT__ti_sysbios_gates_GateMutex_Module__loggerFxn8 *)(xdcRomConstPtr + ti_sysbios_gates_GateMutex_Module__loggerFxn8__C_offset)))
#else
#define Module__LOGFXN8 ti_sysbios_gates_GateMutex_Module__loggerFxn8__C
#endif

#undef Module__G_OBJ
#ifdef ti_sysbios_gates_GateMutex_Module__gateObj__CR
#define Module__G_OBJ (*((CT__ti_sysbios_gates_GateMutex_Module__gateObj *)(xdcRomConstPtr + ti_sysbios_gates_GateMutex_Module__gateObj__C_offset)))
#else
#define Module__G_OBJ ti_sysbios_gates_GateMutex_Module__gateObj__C
#endif

#undef Module__G_PRMS
#ifdef ti_sysbios_gates_GateMutex_Module__gatePrms__CR
#define Module__G_PRMS (*((CT__ti_sysbios_gates_GateMutex_Module__gatePrms *)(xdcRomConstPtr + ti_sysbios_gates_GateMutex_Module__gatePrms__C_offset)))
#else
#define Module__G_PRMS ti_sysbios_gates_GateMutex_Module__gatePrms__C
#endif

#undef Module__GP_create
#define Module__GP_create ti_sysbios_gates_GateMutex_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_gates_GateMutex_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_gates_GateMutex_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_gates_GateMutex_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_gates_GateMutex_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_gates_GateMutex_Module__startupDone__S( void )
{
    return 1;
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_gates_GateMutex_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) 
{
    lab->handle = obj;
    lab->modId = 32820;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_gates_GateMutex_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_CPtr)(src ? src : &ti_sysbios_gates_GateMutex_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_gates_GateMutex_Object__get__S(xdc_Ptr oa, xdc_Int i)
{
    if (oa) {
        return ((ti_sysbios_gates_GateMutex_Object__ *)oa) + i;
    }

    /* the bogus 'const' in the cast suppresses Klocwork MISRA complaints */
    return ((ti_sysbios_gates_GateMutex_Object__ * const)ti_sysbios_gates_GateMutex_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_gates_GateMutex_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_gates_GateMutex_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_gates_GateMutex_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_gates_GateMutex_Object__next__S( xdc_Ptr obj )
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_gates_GateMutex_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_gates_GateMutex_Object__create__S (
    xdc_CPtr __aa,
    const xdc_UChar *__paramsPtr,
    xdc_SizeT __psz,
    xdc_runtime_Error_Block *eb)
{
    ti_sysbios_gates_GateMutex_Params __prms;
    ti_sysbios_gates_GateMutex_Object *__obj;

    /* common instance initialization */
    __obj = xdc_runtime_Core_createObject__I(&ti_sysbios_gates_GateMutex_Object__DESC__C, NULL, &__prms, (xdc_CPtr)__paramsPtr, 0, eb);
    if (__obj == NULL) {
        return NULL;
    }


    /* module-specific initialization */
    ti_sysbios_gates_GateMutex_Instance_init__E(__obj, &__prms);
    return __obj;
}

/* create */
ti_sysbios_gates_GateMutex_Handle ti_sysbios_gates_GateMutex_create( const ti_sysbios_gates_GateMutex_Params *__paramsPtr, xdc_runtime_Error_Block *eb )
{
    ti_sysbios_gates_GateMutex_Params prms;
    ti_sysbios_gates_GateMutex_Object *obj;


    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&ti_sysbios_gates_GateMutex_Object__DESC__C, NULL, &prms, (xdc_CPtr)__paramsPtr, 0, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_sysbios_gates_GateMutex_Instance_init__E(obj, &prms);
    return obj;
}

/* construct */
void ti_sysbios_gates_GateMutex_construct(ti_sysbios_gates_GateMutex_Struct *__obj, const ti_sysbios_gates_GateMutex_Params *__paramsPtr )
{
    ti_sysbios_gates_GateMutex_Params __prms;

    /* common instance initialization */
    xdc_runtime_Core_constructObject__I(&ti_sysbios_gates_GateMutex_Object__DESC__C, __obj, &__prms, (xdc_CPtr)__paramsPtr, 0, NULL);

    /* module-specific initialization */
    ti_sysbios_gates_GateMutex_Instance_init__E((xdc_Ptr)__obj, &__prms);
}

/* destruct */
void ti_sysbios_gates_GateMutex_destruct(ti_sysbios_gates_GateMutex_Struct *obj)
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_gates_GateMutex_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_gates_GateMutex_Instance_finalize__E, -1, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sysbios_gates_GateMutex_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_gates_GateMutex_Object__DESC__C, *((ti_sysbios_gates_GateMutex_Object**)instp), (xdc_Fxn)ti_sysbios_gates_GateMutex_Instance_finalize__E, -1, FALSE);
    *((ti_sysbios_gates_GateMutex_Handle*)instp) = NULL;
}

/* delete */
void ti_sysbios_gates_GateMutex_delete(ti_sysbios_gates_GateMutex_Handle *instp)
{
    ti_sysbios_gates_GateMutex_Object__delete__S(instp);
}


/*
 * ======== ti.sysbios.hal.Hwi SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#ifdef ti_sysbios_hal_Hwi_Module__id__CR
#define Module__MID (*((CT__ti_sysbios_hal_Hwi_Module__id *)(xdcRomConstPtr + ti_sysbios_hal_Hwi_Module__id__C_offset)))
#else
#define Module__MID ti_sysbios_hal_Hwi_Module__id__C
#endif

#undef Module__DGSINCL
#ifdef ti_sysbios_hal_Hwi_Module__diagsIncluded__CR
#define Module__DGSINCL (*((CT__ti_sysbios_hal_Hwi_Module__diagsIncluded *)(xdcRomConstPtr + ti_sysbios_hal_Hwi_Module__diagsIncluded__C_offset)))
#else
#define Module__DGSINCL ti_sysbios_hal_Hwi_Module__diagsIncluded__C
#endif

#undef Module__DGSENAB
#ifdef ti_sysbios_hal_Hwi_Module__diagsEnabled__CR
#define Module__DGSENAB (*((CT__ti_sysbios_hal_Hwi_Module__diagsEnabled *)(xdcRomConstPtr + ti_sysbios_hal_Hwi_Module__diagsEnabled__C_offset)))
#else
#define Module__DGSENAB ti_sysbios_hal_Hwi_Module__diagsEnabled__C
#endif

#undef Module__DGSMASK
#ifdef ti_sysbios_hal_Hwi_Module__diagsMask__CR
#define Module__DGSMASK (*((CT__ti_sysbios_hal_Hwi_Module__diagsMask *)(xdcRomConstPtr + ti_sysbios_hal_Hwi_Module__diagsMask__C_offset)))
#else
#define Module__DGSMASK ti_sysbios_hal_Hwi_Module__diagsMask__C
#endif

#undef Module__LOGDEF
#ifdef ti_sysbios_hal_Hwi_Module__loggerDefined__CR
#define Module__LOGDEF (*((CT__ti_sysbios_hal_Hwi_Module__loggerDefined *)(xdcRomConstPtr + ti_sysbios_hal_Hwi_Module__loggerDefined__C_offset)))
#else
#define Module__LOGDEF ti_sysbios_hal_Hwi_Module__loggerDefined__C
#endif

#undef Module__LOGOBJ
#ifdef ti_sysbios_hal_Hwi_Module__loggerObj__CR
#define Module__LOGOBJ ti_sysbios_hal_Hwi_Module__loggerObj__R
#define Module__LOGOBJ (*((CT__ti_sysbios_hal_Hwi_Module__loggerObj *)(xdcRomConstPtr + ti_sysbios_hal_Hwi_Module__loggerObj__C_offset)))
#else
#define Module__LOGOBJ ti_sysbios_hal_Hwi_Module__loggerObj__C
#endif

#undef Module__LOGFXN0
#ifdef ti_sysbios_hal_Hwi_Module__loggerFxn0__CR
#define Module__LOGFXN0 (*((CT__ti_sysbios_hal_Hwi_Module__loggerFxn0 *)(xdcRomConstPtr + ti_sysbios_hal_Hwi_Module__loggerFxn0__C_offset)))
#else
#define Module__LOGFXN0 ti_sysbios_hal_Hwi_Module__loggerFxn0__C
#endif

#undef Module__LOGFXN1
#ifdef ti_sysbios_hal_Hwi_Module__loggerFxn1__CR
#define Module__LOGFXN1 (*((CT__ti_sysbios_hal_Hwi_Module__loggerFxn1 *)(xdcRomConstPtr + ti_sysbios_hal_Hwi_Module__loggerFxn1__C_offset)))
#else
#define Module__LOGFXN1 ti_sysbios_hal_Hwi_Module__loggerFxn1__C
#endif

#undef Module__LOGFXN2
#ifdef ti_sysbios_hal_Hwi_Module__loggerFxn2__CR
#define Module__LOGFXN2 (*((CT__ti_sysbios_hal_Hwi_Module__loggerFxn2 *)(xdcRomConstPtr + ti_sysbios_hal_Hwi_Module__loggerFxn2__C_offset)))
#else
#define Module__LOGFXN2 ti_sysbios_hal_Hwi_Module__loggerFxn2__C
#endif

#undef Module__LOGFXN4
#ifdef ti_sysbios_hal_Hwi_Module__loggerFxn4__CR
#define Module__LOGFXN4 (*((CT__ti_sysbios_hal_Hwi_Module__loggerFxn4 *)(xdcRomConstPtr + ti_sysbios_hal_Hwi_Module__loggerFxn4__C_offset)))
#else
#define Module__LOGFXN4 ti_sysbios_hal_Hwi_Module__loggerFxn4__C
#endif

#undef Module__LOGFXN8
#ifdef ti_sysbios_hal_Hwi_Module__loggerFxn8__CR
#define Module__LOGFXN8 (*((CT__ti_sysbios_hal_Hwi_Module__loggerFxn8 *)(xdcRomConstPtr + ti_sysbios_hal_Hwi_Module__loggerFxn8__C_offset)))
#else
#define Module__LOGFXN8 ti_sysbios_hal_Hwi_Module__loggerFxn8__C
#endif

#undef Module__G_OBJ
#ifdef ti_sysbios_hal_Hwi_Module__gateObj__CR
#define Module__G_OBJ (*((CT__ti_sysbios_hal_Hwi_Module__gateObj *)(xdcRomConstPtr + ti_sysbios_hal_Hwi_Module__gateObj__C_offset)))
#else
#define Module__G_OBJ ti_sysbios_hal_Hwi_Module__gateObj__C
#endif

#undef Module__G_PRMS
#ifdef ti_sysbios_hal_Hwi_Module__gatePrms__CR
#define Module__G_PRMS (*((CT__ti_sysbios_hal_Hwi_Module__gatePrms *)(xdcRomConstPtr + ti_sysbios_hal_Hwi_Module__gatePrms__C_offset)))
#else
#define Module__G_PRMS ti_sysbios_hal_Hwi_Module__gatePrms__C
#endif

#undef Module__GP_create
#define Module__GP_create ti_sysbios_hal_Hwi_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_hal_Hwi_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_hal_Hwi_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_hal_Hwi_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_hal_Hwi_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_hal_Hwi_Module__startupDone__S( void )
{
    return ti_sysbios_hal_Hwi_Module__startupDone__F();
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_hal_Hwi_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) 
{
    lab->handle = obj;
    lab->modId = 32814;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_hal_Hwi_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_CPtr)(src ? src : &ti_sysbios_hal_Hwi_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_hal_Hwi_Object__get__S(xdc_Ptr oa, xdc_Int i)
{
    if (oa) {
        return ((ti_sysbios_hal_Hwi_Object__ *)oa) + i;
    }

    /* the bogus 'const' in the cast suppresses Klocwork MISRA complaints */
    return ((ti_sysbios_hal_Hwi_Object__ * const)ti_sysbios_hal_Hwi_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_hal_Hwi_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_hal_Hwi_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_hal_Hwi_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_hal_Hwi_Object__next__S( xdc_Ptr obj )
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_hal_Hwi_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_hal_Hwi_Object__create__S (
    xdc_CPtr __aa,
    const xdc_UChar *__paramsPtr,
    xdc_SizeT __psz,
    xdc_runtime_Error_Block *eb)
{
    const ti_sysbios_hal_Hwi_Args__create *__args = __aa;
    ti_sysbios_hal_Hwi_Params __prms;
    ti_sysbios_hal_Hwi_Object *__obj;
    int iStat;

    /* common instance initialization */
    __obj = xdc_runtime_Core_createObject__I(&ti_sysbios_hal_Hwi_Object__DESC__C, NULL, &__prms, (xdc_CPtr)__paramsPtr, 0, eb);
    if (__obj == NULL) {
        return NULL;
    }


    /* module-specific initialization */
    iStat = ti_sysbios_hal_Hwi_Instance_init__E(__obj, __args->intNum, __args->hwiFxn, &__prms, eb);
    if (iStat) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_hal_Hwi_Object__DESC__C, __obj, (xdc_Fxn)ti_sysbios_hal_Hwi_Instance_finalize__E, iStat, 0);
        return NULL;
    }

    return __obj;
}

/* create */
ti_sysbios_hal_Hwi_Handle ti_sysbios_hal_Hwi_create( xdc_Int intNum, ti_sysbios_hal_Hwi_FuncPtr hwiFxn, const ti_sysbios_hal_Hwi_Params *__paramsPtr, xdc_runtime_Error_Block *eb )
{
    ti_sysbios_hal_Hwi_Params prms;
    ti_sysbios_hal_Hwi_Object *obj;

    int iStat;

    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&ti_sysbios_hal_Hwi_Object__DESC__C, NULL, &prms, (xdc_CPtr)__paramsPtr, 0, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    iStat = ti_sysbios_hal_Hwi_Instance_init__E(obj, intNum, hwiFxn, &prms, eb);
    if (iStat) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_hal_Hwi_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_hal_Hwi_Instance_finalize__E, iStat, 0);
        return NULL;
    }

    return obj;
}

/* construct */
void ti_sysbios_hal_Hwi_construct(ti_sysbios_hal_Hwi_Struct *__obj, xdc_Int intNum, ti_sysbios_hal_Hwi_FuncPtr hwiFxn, const ti_sysbios_hal_Hwi_Params *__paramsPtr, xdc_runtime_Error_Block *eb )
{
    ti_sysbios_hal_Hwi_Params __prms;
    int iStat;

    /* common instance initialization */
    xdc_runtime_Core_constructObject__I(&ti_sysbios_hal_Hwi_Object__DESC__C, __obj, &__prms, (xdc_CPtr)__paramsPtr, 0, eb);

    /* module-specific initialization */
    iStat = ti_sysbios_hal_Hwi_Instance_init__E((xdc_Ptr)__obj, intNum, hwiFxn, &__prms, eb);
    if (iStat) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_hal_Hwi_Object__DESC__C, __obj, (xdc_Fxn)ti_sysbios_hal_Hwi_Instance_finalize__E, iStat, 1);
    }

}

/* destruct */
void ti_sysbios_hal_Hwi_destruct(ti_sysbios_hal_Hwi_Struct *obj)
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_hal_Hwi_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_hal_Hwi_Instance_finalize__E, 0, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sysbios_hal_Hwi_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_hal_Hwi_Object__DESC__C, *((ti_sysbios_hal_Hwi_Object**)instp), (xdc_Fxn)ti_sysbios_hal_Hwi_Instance_finalize__E, 0, FALSE);
    *((ti_sysbios_hal_Hwi_Handle*)instp) = NULL;
}

/* delete */
void ti_sysbios_hal_Hwi_delete(ti_sysbios_hal_Hwi_Handle *instp)
{
    ti_sysbios_hal_Hwi_Object__delete__S(instp);
}


/*
 * ======== ti.sysbios.hal.Hwi_HwiProxy SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#ifdef ti_sysbios_hal_Hwi_HwiProxy_Module__id__CR
#define Module__MID (*((CT__ti_sysbios_hal_Hwi_HwiProxy_Module__id *)(xdcRomConstPtr + ti_sysbios_hal_Hwi_HwiProxy_Module__id__C_offset)))
#else
#define Module__MID ti_sysbios_hal_Hwi_HwiProxy_Module__id__C
#endif

#undef Module__DGSINCL
#ifdef ti_sysbios_hal_Hwi_HwiProxy_Module__diagsIncluded__CR
#define Module__DGSINCL (*((CT__ti_sysbios_hal_Hwi_HwiProxy_Module__diagsIncluded *)(xdcRomConstPtr + ti_sysbios_hal_Hwi_HwiProxy_Module__diagsIncluded__C_offset)))
#else
#define Module__DGSINCL ti_sysbios_hal_Hwi_HwiProxy_Module__diagsIncluded__C
#endif

#undef Module__DGSENAB
#ifdef ti_sysbios_hal_Hwi_HwiProxy_Module__diagsEnabled__CR
#define Module__DGSENAB (*((CT__ti_sysbios_hal_Hwi_HwiProxy_Module__diagsEnabled *)(xdcRomConstPtr + ti_sysbios_hal_Hwi_HwiProxy_Module__diagsEnabled__C_offset)))
#else
#define Module__DGSENAB ti_sysbios_hal_Hwi_HwiProxy_Module__diagsEnabled__C
#endif

#undef Module__DGSMASK
#ifdef ti_sysbios_hal_Hwi_HwiProxy_Module__diagsMask__CR
#define Module__DGSMASK (*((CT__ti_sysbios_hal_Hwi_HwiProxy_Module__diagsMask *)(xdcRomConstPtr + ti_sysbios_hal_Hwi_HwiProxy_Module__diagsMask__C_offset)))
#else
#define Module__DGSMASK ti_sysbios_hal_Hwi_HwiProxy_Module__diagsMask__C
#endif

#undef Module__LOGDEF
#ifdef ti_sysbios_hal_Hwi_HwiProxy_Module__loggerDefined__CR
#define Module__LOGDEF (*((CT__ti_sysbios_hal_Hwi_HwiProxy_Module__loggerDefined *)(xdcRomConstPtr + ti_sysbios_hal_Hwi_HwiProxy_Module__loggerDefined__C_offset)))
#else
#define Module__LOGDEF ti_sysbios_hal_Hwi_HwiProxy_Module__loggerDefined__C
#endif

#undef Module__LOGOBJ
#ifdef ti_sysbios_hal_Hwi_HwiProxy_Module__loggerObj__CR
#define Module__LOGOBJ ti_sysbios_hal_Hwi_HwiProxy_Module__loggerObj__R
#define Module__LOGOBJ (*((CT__ti_sysbios_hal_Hwi_HwiProxy_Module__loggerObj *)(xdcRomConstPtr + ti_sysbios_hal_Hwi_HwiProxy_Module__loggerObj__C_offset)))
#else
#define Module__LOGOBJ ti_sysbios_hal_Hwi_HwiProxy_Module__loggerObj__C
#endif

#undef Module__LOGFXN0
#ifdef ti_sysbios_hal_Hwi_HwiProxy_Module__loggerFxn0__CR
#define Module__LOGFXN0 (*((CT__ti_sysbios_hal_Hwi_HwiProxy_Module__loggerFxn0 *)(xdcRomConstPtr + ti_sysbios_hal_Hwi_HwiProxy_Module__loggerFxn0__C_offset)))
#else
#define Module__LOGFXN0 ti_sysbios_hal_Hwi_HwiProxy_Module__loggerFxn0__C
#endif

#undef Module__LOGFXN1
#ifdef ti_sysbios_hal_Hwi_HwiProxy_Module__loggerFxn1__CR
#define Module__LOGFXN1 (*((CT__ti_sysbios_hal_Hwi_HwiProxy_Module__loggerFxn1 *)(xdcRomConstPtr + ti_sysbios_hal_Hwi_HwiProxy_Module__loggerFxn1__C_offset)))
#else
#define Module__LOGFXN1 ti_sysbios_hal_Hwi_HwiProxy_Module__loggerFxn1__C
#endif

#undef Module__LOGFXN2
#ifdef ti_sysbios_hal_Hwi_HwiProxy_Module__loggerFxn2__CR
#define Module__LOGFXN2 (*((CT__ti_sysbios_hal_Hwi_HwiProxy_Module__loggerFxn2 *)(xdcRomConstPtr + ti_sysbios_hal_Hwi_HwiProxy_Module__loggerFxn2__C_offset)))
#else
#define Module__LOGFXN2 ti_sysbios_hal_Hwi_HwiProxy_Module__loggerFxn2__C
#endif

#undef Module__LOGFXN4
#ifdef ti_sysbios_hal_Hwi_HwiProxy_Module__loggerFxn4__CR
#define Module__LOGFXN4 (*((CT__ti_sysbios_hal_Hwi_HwiProxy_Module__loggerFxn4 *)(xdcRomConstPtr + ti_sysbios_hal_Hwi_HwiProxy_Module__loggerFxn4__C_offset)))
#else
#define Module__LOGFXN4 ti_sysbios_hal_Hwi_HwiProxy_Module__loggerFxn4__C
#endif

#undef Module__LOGFXN8
#ifdef ti_sysbios_hal_Hwi_HwiProxy_Module__loggerFxn8__CR
#define Module__LOGFXN8 (*((CT__ti_sysbios_hal_Hwi_HwiProxy_Module__loggerFxn8 *)(xdcRomConstPtr + ti_sysbios_hal_Hwi_HwiProxy_Module__loggerFxn8__C_offset)))
#else
#define Module__LOGFXN8 ti_sysbios_hal_Hwi_HwiProxy_Module__loggerFxn8__C
#endif

#undef Module__G_OBJ
#ifdef ti_sysbios_hal_Hwi_HwiProxy_Module__gateObj__CR
#define Module__G_OBJ (*((CT__ti_sysbios_hal_Hwi_HwiProxy_Module__gateObj *)(xdcRomConstPtr + ti_sysbios_hal_Hwi_HwiProxy_Module__gateObj__C_offset)))
#else
#define Module__G_OBJ ti_sysbios_hal_Hwi_HwiProxy_Module__gateObj__C
#endif

#undef Module__G_PRMS
#ifdef ti_sysbios_hal_Hwi_HwiProxy_Module__gatePrms__CR
#define Module__G_PRMS (*((CT__ti_sysbios_hal_Hwi_HwiProxy_Module__gatePrms *)(xdcRomConstPtr + ti_sysbios_hal_Hwi_HwiProxy_Module__gatePrms__C_offset)))
#else
#define Module__G_PRMS ti_sysbios_hal_Hwi_HwiProxy_Module__gatePrms__C
#endif

#undef Module__GP_create
#define Module__GP_create ti_sysbios_hal_Hwi_HwiProxy_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_hal_Hwi_HwiProxy_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_hal_Hwi_HwiProxy_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_hal_Hwi_HwiProxy_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_hal_Hwi_HwiProxy_Module_GateProxy_query

xdc_Bool ti_sysbios_hal_Hwi_HwiProxy_Proxy__abstract__S(void)
{
    return 0;
}
xdc_CPtr ti_sysbios_hal_Hwi_HwiProxy_Proxy__delegate__S(void)
{
    return 0;
}



/*
 * ======== ti.sysbios.heaps.HeapBuf SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#ifdef ti_sysbios_heaps_HeapBuf_Module__id__CR
#define Module__MID (*((CT__ti_sysbios_heaps_HeapBuf_Module__id *)(xdcRomConstPtr + ti_sysbios_heaps_HeapBuf_Module__id__C_offset)))
#else
#define Module__MID ti_sysbios_heaps_HeapBuf_Module__id__C
#endif

#undef Module__DGSINCL
#ifdef ti_sysbios_heaps_HeapBuf_Module__diagsIncluded__CR
#define Module__DGSINCL (*((CT__ti_sysbios_heaps_HeapBuf_Module__diagsIncluded *)(xdcRomConstPtr + ti_sysbios_heaps_HeapBuf_Module__diagsIncluded__C_offset)))
#else
#define Module__DGSINCL ti_sysbios_heaps_HeapBuf_Module__diagsIncluded__C
#endif

#undef Module__DGSENAB
#ifdef ti_sysbios_heaps_HeapBuf_Module__diagsEnabled__CR
#define Module__DGSENAB (*((CT__ti_sysbios_heaps_HeapBuf_Module__diagsEnabled *)(xdcRomConstPtr + ti_sysbios_heaps_HeapBuf_Module__diagsEnabled__C_offset)))
#else
#define Module__DGSENAB ti_sysbios_heaps_HeapBuf_Module__diagsEnabled__C
#endif

#undef Module__DGSMASK
#ifdef ti_sysbios_heaps_HeapBuf_Module__diagsMask__CR
#define Module__DGSMASK (*((CT__ti_sysbios_heaps_HeapBuf_Module__diagsMask *)(xdcRomConstPtr + ti_sysbios_heaps_HeapBuf_Module__diagsMask__C_offset)))
#else
#define Module__DGSMASK ti_sysbios_heaps_HeapBuf_Module__diagsMask__C
#endif

#undef Module__LOGDEF
#ifdef ti_sysbios_heaps_HeapBuf_Module__loggerDefined__CR
#define Module__LOGDEF (*((CT__ti_sysbios_heaps_HeapBuf_Module__loggerDefined *)(xdcRomConstPtr + ti_sysbios_heaps_HeapBuf_Module__loggerDefined__C_offset)))
#else
#define Module__LOGDEF ti_sysbios_heaps_HeapBuf_Module__loggerDefined__C
#endif

#undef Module__LOGOBJ
#ifdef ti_sysbios_heaps_HeapBuf_Module__loggerObj__CR
#define Module__LOGOBJ ti_sysbios_heaps_HeapBuf_Module__loggerObj__R
#define Module__LOGOBJ (*((CT__ti_sysbios_heaps_HeapBuf_Module__loggerObj *)(xdcRomConstPtr + ti_sysbios_heaps_HeapBuf_Module__loggerObj__C_offset)))
#else
#define Module__LOGOBJ ti_sysbios_heaps_HeapBuf_Module__loggerObj__C
#endif

#undef Module__LOGFXN0
#ifdef ti_sysbios_heaps_HeapBuf_Module__loggerFxn0__CR
#define Module__LOGFXN0 (*((CT__ti_sysbios_heaps_HeapBuf_Module__loggerFxn0 *)(xdcRomConstPtr + ti_sysbios_heaps_HeapBuf_Module__loggerFxn0__C_offset)))
#else
#define Module__LOGFXN0 ti_sysbios_heaps_HeapBuf_Module__loggerFxn0__C
#endif

#undef Module__LOGFXN1
#ifdef ti_sysbios_heaps_HeapBuf_Module__loggerFxn1__CR
#define Module__LOGFXN1 (*((CT__ti_sysbios_heaps_HeapBuf_Module__loggerFxn1 *)(xdcRomConstPtr + ti_sysbios_heaps_HeapBuf_Module__loggerFxn1__C_offset)))
#else
#define Module__LOGFXN1 ti_sysbios_heaps_HeapBuf_Module__loggerFxn1__C
#endif

#undef Module__LOGFXN2
#ifdef ti_sysbios_heaps_HeapBuf_Module__loggerFxn2__CR
#define Module__LOGFXN2 (*((CT__ti_sysbios_heaps_HeapBuf_Module__loggerFxn2 *)(xdcRomConstPtr + ti_sysbios_heaps_HeapBuf_Module__loggerFxn2__C_offset)))
#else
#define Module__LOGFXN2 ti_sysbios_heaps_HeapBuf_Module__loggerFxn2__C
#endif

#undef Module__LOGFXN4
#ifdef ti_sysbios_heaps_HeapBuf_Module__loggerFxn4__CR
#define Module__LOGFXN4 (*((CT__ti_sysbios_heaps_HeapBuf_Module__loggerFxn4 *)(xdcRomConstPtr + ti_sysbios_heaps_HeapBuf_Module__loggerFxn4__C_offset)))
#else
#define Module__LOGFXN4 ti_sysbios_heaps_HeapBuf_Module__loggerFxn4__C
#endif

#undef Module__LOGFXN8
#ifdef ti_sysbios_heaps_HeapBuf_Module__loggerFxn8__CR
#define Module__LOGFXN8 (*((CT__ti_sysbios_heaps_HeapBuf_Module__loggerFxn8 *)(xdcRomConstPtr + ti_sysbios_heaps_HeapBuf_Module__loggerFxn8__C_offset)))
#else
#define Module__LOGFXN8 ti_sysbios_heaps_HeapBuf_Module__loggerFxn8__C
#endif

#undef Module__G_OBJ
#ifdef ti_sysbios_heaps_HeapBuf_Module__gateObj__CR
#define Module__G_OBJ (*((CT__ti_sysbios_heaps_HeapBuf_Module__gateObj *)(xdcRomConstPtr + ti_sysbios_heaps_HeapBuf_Module__gateObj__C_offset)))
#else
#define Module__G_OBJ ti_sysbios_heaps_HeapBuf_Module__gateObj__C
#endif

#undef Module__G_PRMS
#ifdef ti_sysbios_heaps_HeapBuf_Module__gatePrms__CR
#define Module__G_PRMS (*((CT__ti_sysbios_heaps_HeapBuf_Module__gatePrms *)(xdcRomConstPtr + ti_sysbios_heaps_HeapBuf_Module__gatePrms__C_offset)))
#else
#define Module__G_PRMS ti_sysbios_heaps_HeapBuf_Module__gatePrms__C
#endif

#undef Module__GP_create
#define Module__GP_create ti_sysbios_heaps_HeapBuf_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_heaps_HeapBuf_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_heaps_HeapBuf_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_heaps_HeapBuf_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_heaps_HeapBuf_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_heaps_HeapBuf_Module__startupDone__S( void )
{
    return ti_sysbios_heaps_HeapBuf_Module__startupDone__F();
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_heaps_HeapBuf_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) 
{
    lab->handle = obj;
    lab->modId = 32806;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_heaps_HeapBuf_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_CPtr)(src ? src : &ti_sysbios_heaps_HeapBuf_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_heaps_HeapBuf_Object__get__S(xdc_Ptr oa, xdc_Int i)
{
    if (oa) {
        return ((ti_sysbios_heaps_HeapBuf_Object__ *)oa) + i;
    }

    return NULL;
}


/* Object__first__S */
xdc_Ptr ti_sysbios_heaps_HeapBuf_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_heaps_HeapBuf_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_heaps_HeapBuf_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_heaps_HeapBuf_Object__next__S( xdc_Ptr obj )
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_heaps_HeapBuf_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_heaps_HeapBuf_Object__create__S (
    xdc_CPtr __aa,
    const xdc_UChar *__paramsPtr,
    xdc_SizeT __psz,
    xdc_runtime_Error_Block *eb)
{
    ti_sysbios_heaps_HeapBuf_Params __prms;
    ti_sysbios_heaps_HeapBuf_Object *__obj;
    int iStat;

    /* common instance initialization */
    __obj = xdc_runtime_Core_createObject__I(&ti_sysbios_heaps_HeapBuf_Object__DESC__C, NULL, &__prms, (xdc_CPtr)__paramsPtr, 0, eb);
    if (__obj == NULL) {
        return NULL;
    }


    /* module-specific initialization */
    iStat = ti_sysbios_heaps_HeapBuf_Instance_init__E(__obj, &__prms, eb);
    if (iStat) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_heaps_HeapBuf_Object__DESC__C, __obj, (xdc_Fxn)ti_sysbios_heaps_HeapBuf_Instance_finalize__E, iStat, 0);
        return NULL;
    }

    return __obj;
}

/* create */
ti_sysbios_heaps_HeapBuf_Handle ti_sysbios_heaps_HeapBuf_create( const ti_sysbios_heaps_HeapBuf_Params *__paramsPtr, xdc_runtime_Error_Block *eb )
{
    ti_sysbios_heaps_HeapBuf_Params prms;
    ti_sysbios_heaps_HeapBuf_Object *obj;

    int iStat;

    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&ti_sysbios_heaps_HeapBuf_Object__DESC__C, NULL, &prms, (xdc_CPtr)__paramsPtr, 0, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    iStat = ti_sysbios_heaps_HeapBuf_Instance_init__E(obj, &prms, eb);
    if (iStat) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_heaps_HeapBuf_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_heaps_HeapBuf_Instance_finalize__E, iStat, 0);
        return NULL;
    }

    return obj;
}

/* construct */
void ti_sysbios_heaps_HeapBuf_construct(ti_sysbios_heaps_HeapBuf_Struct *__obj, const ti_sysbios_heaps_HeapBuf_Params *__paramsPtr, xdc_runtime_Error_Block *eb )
{
    ti_sysbios_heaps_HeapBuf_Params __prms;
    int iStat;

    /* common instance initialization */
    xdc_runtime_Core_constructObject__I(&ti_sysbios_heaps_HeapBuf_Object__DESC__C, __obj, &__prms, (xdc_CPtr)__paramsPtr, 0, eb);

    /* module-specific initialization */
    iStat = ti_sysbios_heaps_HeapBuf_Instance_init__E((xdc_Ptr)__obj, &__prms, eb);
    if (iStat) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_heaps_HeapBuf_Object__DESC__C, __obj, (xdc_Fxn)ti_sysbios_heaps_HeapBuf_Instance_finalize__E, iStat, 1);
    }

}

/* destruct */
void ti_sysbios_heaps_HeapBuf_destruct(ti_sysbios_heaps_HeapBuf_Struct *obj)
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_heaps_HeapBuf_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_heaps_HeapBuf_Instance_finalize__E, 0, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sysbios_heaps_HeapBuf_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_heaps_HeapBuf_Object__DESC__C, *((ti_sysbios_heaps_HeapBuf_Object**)instp), (xdc_Fxn)ti_sysbios_heaps_HeapBuf_Instance_finalize__E, 0, FALSE);
    *((ti_sysbios_heaps_HeapBuf_Handle*)instp) = NULL;
}

/* delete */
void ti_sysbios_heaps_HeapBuf_delete(ti_sysbios_heaps_HeapBuf_Handle *instp)
{
    ti_sysbios_heaps_HeapBuf_Object__delete__S(instp);
}


/*
 * ======== ti.sysbios.heaps.HeapMem SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#ifdef ti_sysbios_heaps_HeapMem_Module__id__CR
#define Module__MID (*((CT__ti_sysbios_heaps_HeapMem_Module__id *)(xdcRomConstPtr + ti_sysbios_heaps_HeapMem_Module__id__C_offset)))
#else
#define Module__MID ti_sysbios_heaps_HeapMem_Module__id__C
#endif

#undef Module__DGSINCL
#ifdef ti_sysbios_heaps_HeapMem_Module__diagsIncluded__CR
#define Module__DGSINCL (*((CT__ti_sysbios_heaps_HeapMem_Module__diagsIncluded *)(xdcRomConstPtr + ti_sysbios_heaps_HeapMem_Module__diagsIncluded__C_offset)))
#else
#define Module__DGSINCL ti_sysbios_heaps_HeapMem_Module__diagsIncluded__C
#endif

#undef Module__DGSENAB
#ifdef ti_sysbios_heaps_HeapMem_Module__diagsEnabled__CR
#define Module__DGSENAB (*((CT__ti_sysbios_heaps_HeapMem_Module__diagsEnabled *)(xdcRomConstPtr + ti_sysbios_heaps_HeapMem_Module__diagsEnabled__C_offset)))
#else
#define Module__DGSENAB ti_sysbios_heaps_HeapMem_Module__diagsEnabled__C
#endif

#undef Module__DGSMASK
#ifdef ti_sysbios_heaps_HeapMem_Module__diagsMask__CR
#define Module__DGSMASK (*((CT__ti_sysbios_heaps_HeapMem_Module__diagsMask *)(xdcRomConstPtr + ti_sysbios_heaps_HeapMem_Module__diagsMask__C_offset)))
#else
#define Module__DGSMASK ti_sysbios_heaps_HeapMem_Module__diagsMask__C
#endif

#undef Module__LOGDEF
#ifdef ti_sysbios_heaps_HeapMem_Module__loggerDefined__CR
#define Module__LOGDEF (*((CT__ti_sysbios_heaps_HeapMem_Module__loggerDefined *)(xdcRomConstPtr + ti_sysbios_heaps_HeapMem_Module__loggerDefined__C_offset)))
#else
#define Module__LOGDEF ti_sysbios_heaps_HeapMem_Module__loggerDefined__C
#endif

#undef Module__LOGOBJ
#ifdef ti_sysbios_heaps_HeapMem_Module__loggerObj__CR
#define Module__LOGOBJ ti_sysbios_heaps_HeapMem_Module__loggerObj__R
#define Module__LOGOBJ (*((CT__ti_sysbios_heaps_HeapMem_Module__loggerObj *)(xdcRomConstPtr + ti_sysbios_heaps_HeapMem_Module__loggerObj__C_offset)))
#else
#define Module__LOGOBJ ti_sysbios_heaps_HeapMem_Module__loggerObj__C
#endif

#undef Module__LOGFXN0
#ifdef ti_sysbios_heaps_HeapMem_Module__loggerFxn0__CR
#define Module__LOGFXN0 (*((CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn0 *)(xdcRomConstPtr + ti_sysbios_heaps_HeapMem_Module__loggerFxn0__C_offset)))
#else
#define Module__LOGFXN0 ti_sysbios_heaps_HeapMem_Module__loggerFxn0__C
#endif

#undef Module__LOGFXN1
#ifdef ti_sysbios_heaps_HeapMem_Module__loggerFxn1__CR
#define Module__LOGFXN1 (*((CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn1 *)(xdcRomConstPtr + ti_sysbios_heaps_HeapMem_Module__loggerFxn1__C_offset)))
#else
#define Module__LOGFXN1 ti_sysbios_heaps_HeapMem_Module__loggerFxn1__C
#endif

#undef Module__LOGFXN2
#ifdef ti_sysbios_heaps_HeapMem_Module__loggerFxn2__CR
#define Module__LOGFXN2 (*((CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn2 *)(xdcRomConstPtr + ti_sysbios_heaps_HeapMem_Module__loggerFxn2__C_offset)))
#else
#define Module__LOGFXN2 ti_sysbios_heaps_HeapMem_Module__loggerFxn2__C
#endif

#undef Module__LOGFXN4
#ifdef ti_sysbios_heaps_HeapMem_Module__loggerFxn4__CR
#define Module__LOGFXN4 (*((CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn4 *)(xdcRomConstPtr + ti_sysbios_heaps_HeapMem_Module__loggerFxn4__C_offset)))
#else
#define Module__LOGFXN4 ti_sysbios_heaps_HeapMem_Module__loggerFxn4__C
#endif

#undef Module__LOGFXN8
#ifdef ti_sysbios_heaps_HeapMem_Module__loggerFxn8__CR
#define Module__LOGFXN8 (*((CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn8 *)(xdcRomConstPtr + ti_sysbios_heaps_HeapMem_Module__loggerFxn8__C_offset)))
#else
#define Module__LOGFXN8 ti_sysbios_heaps_HeapMem_Module__loggerFxn8__C
#endif

#undef Module__G_OBJ
#ifdef ti_sysbios_heaps_HeapMem_Module__gateObj__CR
#define Module__G_OBJ (*((CT__ti_sysbios_heaps_HeapMem_Module__gateObj *)(xdcRomConstPtr + ti_sysbios_heaps_HeapMem_Module__gateObj__C_offset)))
#else
#define Module__G_OBJ ti_sysbios_heaps_HeapMem_Module__gateObj__C
#endif

#undef Module__G_PRMS
#ifdef ti_sysbios_heaps_HeapMem_Module__gatePrms__CR
#define Module__G_PRMS (*((CT__ti_sysbios_heaps_HeapMem_Module__gatePrms *)(xdcRomConstPtr + ti_sysbios_heaps_HeapMem_Module__gatePrms__C_offset)))
#else
#define Module__G_PRMS ti_sysbios_heaps_HeapMem_Module__gatePrms__C
#endif

#undef Module__GP_create
#define Module__GP_create ti_sysbios_heaps_HeapMem_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_heaps_HeapMem_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_heaps_HeapMem_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_heaps_HeapMem_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_heaps_HeapMem_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_heaps_HeapMem_Module__startupDone__S( void )
{
    return 1;
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_heaps_HeapMem_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) 
{
    lab->handle = obj;
    lab->modId = 32807;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_heaps_HeapMem_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_CPtr)(src ? src : &ti_sysbios_heaps_HeapMem_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_heaps_HeapMem_Object__get__S(xdc_Ptr oa, xdc_Int i)
{
    if (oa) {
        return ((ti_sysbios_heaps_HeapMem_Object__ *)oa) + i;
    }

    /* the bogus 'const' in the cast suppresses Klocwork MISRA complaints */
    return ((ti_sysbios_heaps_HeapMem_Object__ * const)ti_sysbios_heaps_HeapMem_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_heaps_HeapMem_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_heaps_HeapMem_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_heaps_HeapMem_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_heaps_HeapMem_Object__next__S( xdc_Ptr obj )
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_heaps_HeapMem_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_heaps_HeapMem_Object__create__S (
    xdc_CPtr __aa,
    const xdc_UChar *__paramsPtr,
    xdc_SizeT __psz,
    xdc_runtime_Error_Block *eb)
{
    ti_sysbios_heaps_HeapMem_Params __prms;
    ti_sysbios_heaps_HeapMem_Object *__obj;

    /* common instance initialization */
    __obj = xdc_runtime_Core_createObject__I(&ti_sysbios_heaps_HeapMem_Object__DESC__C, NULL, &__prms, (xdc_CPtr)__paramsPtr, 0, eb);
    if (__obj == NULL) {
        return NULL;
    }


    /* module-specific initialization */
    ti_sysbios_heaps_HeapMem_Instance_init__E(__obj, &__prms);
    return __obj;
}

/* create */
ti_sysbios_heaps_HeapMem_Handle ti_sysbios_heaps_HeapMem_create( const ti_sysbios_heaps_HeapMem_Params *__paramsPtr, xdc_runtime_Error_Block *eb )
{
    ti_sysbios_heaps_HeapMem_Params prms;
    ti_sysbios_heaps_HeapMem_Object *obj;


    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&ti_sysbios_heaps_HeapMem_Object__DESC__C, NULL, &prms, (xdc_CPtr)__paramsPtr, 0, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_sysbios_heaps_HeapMem_Instance_init__E(obj, &prms);
    return obj;
}

/* construct */
void ti_sysbios_heaps_HeapMem_construct(ti_sysbios_heaps_HeapMem_Struct *__obj, const ti_sysbios_heaps_HeapMem_Params *__paramsPtr )
{
    ti_sysbios_heaps_HeapMem_Params __prms;

    /* common instance initialization */
    xdc_runtime_Core_constructObject__I(&ti_sysbios_heaps_HeapMem_Object__DESC__C, __obj, &__prms, (xdc_CPtr)__paramsPtr, 0, NULL);

    /* module-specific initialization */
    ti_sysbios_heaps_HeapMem_Instance_init__E((xdc_Ptr)__obj, &__prms);
}

/* destruct */
void ti_sysbios_heaps_HeapMem_destruct(ti_sysbios_heaps_HeapMem_Struct *obj)
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_heaps_HeapMem_Object__DESC__C, obj, NULL, -1, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sysbios_heaps_HeapMem_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_heaps_HeapMem_Object__DESC__C, *((ti_sysbios_heaps_HeapMem_Object**)instp), NULL, -1, FALSE);
    *((ti_sysbios_heaps_HeapMem_Handle*)instp) = NULL;
}

/* delete */
void ti_sysbios_heaps_HeapMem_delete(ti_sysbios_heaps_HeapMem_Handle *instp)
{
    ti_sysbios_heaps_HeapMem_Object__delete__S(instp);
}


/*
 * ======== ti.sysbios.heaps.HeapMem_Module_GateProxy SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#ifdef ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__id__CR
#define Module__MID (*((CT__ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__id *)(xdcRomConstPtr + ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__id__C_offset)))
#else
#define Module__MID ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__id__C
#endif

#undef Module__DGSINCL
#ifdef ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__diagsIncluded__CR
#define Module__DGSINCL (*((CT__ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__diagsIncluded *)(xdcRomConstPtr + ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__diagsIncluded__C_offset)))
#else
#define Module__DGSINCL ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__diagsIncluded__C
#endif

#undef Module__DGSENAB
#ifdef ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__diagsEnabled__CR
#define Module__DGSENAB (*((CT__ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__diagsEnabled *)(xdcRomConstPtr + ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__diagsEnabled__C_offset)))
#else
#define Module__DGSENAB ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__diagsEnabled__C
#endif

#undef Module__DGSMASK
#ifdef ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__diagsMask__CR
#define Module__DGSMASK (*((CT__ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__diagsMask *)(xdcRomConstPtr + ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__diagsMask__C_offset)))
#else
#define Module__DGSMASK ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__diagsMask__C
#endif

#undef Module__LOGDEF
#ifdef ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerDefined__CR
#define Module__LOGDEF (*((CT__ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerDefined *)(xdcRomConstPtr + ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerDefined__C_offset)))
#else
#define Module__LOGDEF ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerDefined__C
#endif

#undef Module__LOGOBJ
#ifdef ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerObj__CR
#define Module__LOGOBJ ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerObj__R
#define Module__LOGOBJ (*((CT__ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerObj *)(xdcRomConstPtr + ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerObj__C_offset)))
#else
#define Module__LOGOBJ ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerObj__C
#endif

#undef Module__LOGFXN0
#ifdef ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerFxn0__CR
#define Module__LOGFXN0 (*((CT__ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerFxn0 *)(xdcRomConstPtr + ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerFxn0__C_offset)))
#else
#define Module__LOGFXN0 ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerFxn0__C
#endif

#undef Module__LOGFXN1
#ifdef ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerFxn1__CR
#define Module__LOGFXN1 (*((CT__ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerFxn1 *)(xdcRomConstPtr + ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerFxn1__C_offset)))
#else
#define Module__LOGFXN1 ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerFxn1__C
#endif

#undef Module__LOGFXN2
#ifdef ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerFxn2__CR
#define Module__LOGFXN2 (*((CT__ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerFxn2 *)(xdcRomConstPtr + ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerFxn2__C_offset)))
#else
#define Module__LOGFXN2 ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerFxn2__C
#endif

#undef Module__LOGFXN4
#ifdef ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerFxn4__CR
#define Module__LOGFXN4 (*((CT__ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerFxn4 *)(xdcRomConstPtr + ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerFxn4__C_offset)))
#else
#define Module__LOGFXN4 ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerFxn4__C
#endif

#undef Module__LOGFXN8
#ifdef ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerFxn8__CR
#define Module__LOGFXN8 (*((CT__ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerFxn8 *)(xdcRomConstPtr + ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerFxn8__C_offset)))
#else
#define Module__LOGFXN8 ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerFxn8__C
#endif

#undef Module__G_OBJ
#ifdef ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__gateObj__CR
#define Module__G_OBJ (*((CT__ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__gateObj *)(xdcRomConstPtr + ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__gateObj__C_offset)))
#else
#define Module__G_OBJ ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__gateObj__C
#endif

#undef Module__G_PRMS
#ifdef ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__gatePrms__CR
#define Module__G_PRMS (*((CT__ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__gatePrms *)(xdcRomConstPtr + ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__gatePrms__C_offset)))
#else
#define Module__G_PRMS ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__gatePrms__C
#endif

#undef Module__GP_create
#define Module__GP_create ti_sysbios_heaps_HeapMem_Module_GateProxy_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_heaps_HeapMem_Module_GateProxy_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_heaps_HeapMem_Module_GateProxy_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_heaps_HeapMem_Module_GateProxy_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_heaps_HeapMem_Module_GateProxy_Module_GateProxy_query

xdc_Bool ti_sysbios_heaps_HeapMem_Module_GateProxy_Proxy__abstract__S(void)
{
    return 0;
}
xdc_CPtr ti_sysbios_heaps_HeapMem_Module_GateProxy_Proxy__delegate__S(void)
{
    return (const void *)&ti_sysbios_gates_GateMutex_Module__FXNS__C;
}



/*
 * ======== ti.sysbios.knl.Clock SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#ifdef ti_sysbios_knl_Clock_Module__id__CR
#define Module__MID (*((CT__ti_sysbios_knl_Clock_Module__id *)(xdcRomConstPtr + ti_sysbios_knl_Clock_Module__id__C_offset)))
#else
#define Module__MID ti_sysbios_knl_Clock_Module__id__C
#endif

#undef Module__DGSINCL
#ifdef ti_sysbios_knl_Clock_Module__diagsIncluded__CR
#define Module__DGSINCL (*((CT__ti_sysbios_knl_Clock_Module__diagsIncluded *)(xdcRomConstPtr + ti_sysbios_knl_Clock_Module__diagsIncluded__C_offset)))
#else
#define Module__DGSINCL ti_sysbios_knl_Clock_Module__diagsIncluded__C
#endif

#undef Module__DGSENAB
#ifdef ti_sysbios_knl_Clock_Module__diagsEnabled__CR
#define Module__DGSENAB (*((CT__ti_sysbios_knl_Clock_Module__diagsEnabled *)(xdcRomConstPtr + ti_sysbios_knl_Clock_Module__diagsEnabled__C_offset)))
#else
#define Module__DGSENAB ti_sysbios_knl_Clock_Module__diagsEnabled__C
#endif

#undef Module__DGSMASK
#ifdef ti_sysbios_knl_Clock_Module__diagsMask__CR
#define Module__DGSMASK (*((CT__ti_sysbios_knl_Clock_Module__diagsMask *)(xdcRomConstPtr + ti_sysbios_knl_Clock_Module__diagsMask__C_offset)))
#else
#define Module__DGSMASK ti_sysbios_knl_Clock_Module__diagsMask__C
#endif

#undef Module__LOGDEF
#ifdef ti_sysbios_knl_Clock_Module__loggerDefined__CR
#define Module__LOGDEF (*((CT__ti_sysbios_knl_Clock_Module__loggerDefined *)(xdcRomConstPtr + ti_sysbios_knl_Clock_Module__loggerDefined__C_offset)))
#else
#define Module__LOGDEF ti_sysbios_knl_Clock_Module__loggerDefined__C
#endif

#undef Module__LOGOBJ
#ifdef ti_sysbios_knl_Clock_Module__loggerObj__CR
#define Module__LOGOBJ ti_sysbios_knl_Clock_Module__loggerObj__R
#define Module__LOGOBJ (*((CT__ti_sysbios_knl_Clock_Module__loggerObj *)(xdcRomConstPtr + ti_sysbios_knl_Clock_Module__loggerObj__C_offset)))
#else
#define Module__LOGOBJ ti_sysbios_knl_Clock_Module__loggerObj__C
#endif

#undef Module__LOGFXN0
#ifdef ti_sysbios_knl_Clock_Module__loggerFxn0__CR
#define Module__LOGFXN0 (*((CT__ti_sysbios_knl_Clock_Module__loggerFxn0 *)(xdcRomConstPtr + ti_sysbios_knl_Clock_Module__loggerFxn0__C_offset)))
#else
#define Module__LOGFXN0 ti_sysbios_knl_Clock_Module__loggerFxn0__C
#endif

#undef Module__LOGFXN1
#ifdef ti_sysbios_knl_Clock_Module__loggerFxn1__CR
#define Module__LOGFXN1 (*((CT__ti_sysbios_knl_Clock_Module__loggerFxn1 *)(xdcRomConstPtr + ti_sysbios_knl_Clock_Module__loggerFxn1__C_offset)))
#else
#define Module__LOGFXN1 ti_sysbios_knl_Clock_Module__loggerFxn1__C
#endif

#undef Module__LOGFXN2
#ifdef ti_sysbios_knl_Clock_Module__loggerFxn2__CR
#define Module__LOGFXN2 (*((CT__ti_sysbios_knl_Clock_Module__loggerFxn2 *)(xdcRomConstPtr + ti_sysbios_knl_Clock_Module__loggerFxn2__C_offset)))
#else
#define Module__LOGFXN2 ti_sysbios_knl_Clock_Module__loggerFxn2__C
#endif

#undef Module__LOGFXN4
#ifdef ti_sysbios_knl_Clock_Module__loggerFxn4__CR
#define Module__LOGFXN4 (*((CT__ti_sysbios_knl_Clock_Module__loggerFxn4 *)(xdcRomConstPtr + ti_sysbios_knl_Clock_Module__loggerFxn4__C_offset)))
#else
#define Module__LOGFXN4 ti_sysbios_knl_Clock_Module__loggerFxn4__C
#endif

#undef Module__LOGFXN8
#ifdef ti_sysbios_knl_Clock_Module__loggerFxn8__CR
#define Module__LOGFXN8 (*((CT__ti_sysbios_knl_Clock_Module__loggerFxn8 *)(xdcRomConstPtr + ti_sysbios_knl_Clock_Module__loggerFxn8__C_offset)))
#else
#define Module__LOGFXN8 ti_sysbios_knl_Clock_Module__loggerFxn8__C
#endif

#undef Module__G_OBJ
#ifdef ti_sysbios_knl_Clock_Module__gateObj__CR
#define Module__G_OBJ (*((CT__ti_sysbios_knl_Clock_Module__gateObj *)(xdcRomConstPtr + ti_sysbios_knl_Clock_Module__gateObj__C_offset)))
#else
#define Module__G_OBJ ti_sysbios_knl_Clock_Module__gateObj__C
#endif

#undef Module__G_PRMS
#ifdef ti_sysbios_knl_Clock_Module__gatePrms__CR
#define Module__G_PRMS (*((CT__ti_sysbios_knl_Clock_Module__gatePrms *)(xdcRomConstPtr + ti_sysbios_knl_Clock_Module__gatePrms__C_offset)))
#else
#define Module__G_PRMS ti_sysbios_knl_Clock_Module__gatePrms__C
#endif

#undef Module__GP_create
#define Module__GP_create ti_sysbios_knl_Clock_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_knl_Clock_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_knl_Clock_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_knl_Clock_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_knl_Clock_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Clock_Module__startupDone__S( void )
{
    return ti_sysbios_knl_Clock_Module__startupDone__F();
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_knl_Clock_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) 
{
    lab->handle = obj;
    lab->modId = 32797;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_knl_Clock_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_CPtr)(src ? src : &ti_sysbios_knl_Clock_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_knl_Clock_Object__get__S(xdc_Ptr oa, xdc_Int i)
{
    if (oa) {
        return ((ti_sysbios_knl_Clock_Object__ *)oa) + i;
    }

    return NULL;
}


/* Object__first__S */
xdc_Ptr ti_sysbios_knl_Clock_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_knl_Clock_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_knl_Clock_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_knl_Clock_Object__next__S( xdc_Ptr obj )
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_knl_Clock_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_knl_Clock_Object__create__S (
    xdc_CPtr __aa,
    const xdc_UChar *__paramsPtr,
    xdc_SizeT __psz,
    xdc_runtime_Error_Block *eb)
{
    const ti_sysbios_knl_Clock_Args__create *__args = __aa;
    ti_sysbios_knl_Clock_Params __prms;
    ti_sysbios_knl_Clock_Object *__obj;

    /* common instance initialization */
    __obj = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Clock_Object__DESC__C, NULL, &__prms, (xdc_CPtr)__paramsPtr, 0, eb);
    if (__obj == NULL) {
        return NULL;
    }


    /* module-specific initialization */
    ti_sysbios_knl_Clock_Instance_init__E(__obj, __args->clockFxn, __args->timeout, &__prms);
    return __obj;
}

/* create */
ti_sysbios_knl_Clock_Handle ti_sysbios_knl_Clock_create( ti_sysbios_knl_Clock_FuncPtr clockFxn, xdc_UInt timeout, const ti_sysbios_knl_Clock_Params *__paramsPtr, xdc_runtime_Error_Block *eb )
{
    ti_sysbios_knl_Clock_Params prms;
    ti_sysbios_knl_Clock_Object *obj;


    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Clock_Object__DESC__C, NULL, &prms, (xdc_CPtr)__paramsPtr, 0, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_sysbios_knl_Clock_Instance_init__E(obj, clockFxn, timeout, &prms);
    return obj;
}

/* construct */
void ti_sysbios_knl_Clock_construct(ti_sysbios_knl_Clock_Struct *__obj, ti_sysbios_knl_Clock_FuncPtr clockFxn, xdc_UInt timeout, const ti_sysbios_knl_Clock_Params *__paramsPtr )
{
    ti_sysbios_knl_Clock_Params __prms;

    /* common instance initialization */
    xdc_runtime_Core_constructObject__I(&ti_sysbios_knl_Clock_Object__DESC__C, __obj, &__prms, (xdc_CPtr)__paramsPtr, 0, NULL);

    /* module-specific initialization */
    ti_sysbios_knl_Clock_Instance_init__E((xdc_Ptr)__obj, clockFxn, timeout, &__prms);
}

/* destruct */
void ti_sysbios_knl_Clock_destruct(ti_sysbios_knl_Clock_Struct *obj)
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Clock_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_knl_Clock_Instance_finalize__E, -1, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sysbios_knl_Clock_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Clock_Object__DESC__C, *((ti_sysbios_knl_Clock_Object**)instp), (xdc_Fxn)ti_sysbios_knl_Clock_Instance_finalize__E, -1, FALSE);
    *((ti_sysbios_knl_Clock_Handle*)instp) = NULL;
}

/* delete */
void ti_sysbios_knl_Clock_delete(ti_sysbios_knl_Clock_Handle *instp)
{
    ti_sysbios_knl_Clock_Object__delete__S(instp);
}


/*
 * ======== ti.sysbios.knl.Clock_TimerProxy SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#ifdef ti_sysbios_knl_Clock_TimerProxy_Module__id__CR
#define Module__MID (*((CT__ti_sysbios_knl_Clock_TimerProxy_Module__id *)(xdcRomConstPtr + ti_sysbios_knl_Clock_TimerProxy_Module__id__C_offset)))
#else
#define Module__MID ti_sysbios_knl_Clock_TimerProxy_Module__id__C
#endif

#undef Module__DGSINCL
#ifdef ti_sysbios_knl_Clock_TimerProxy_Module__diagsIncluded__CR
#define Module__DGSINCL (*((CT__ti_sysbios_knl_Clock_TimerProxy_Module__diagsIncluded *)(xdcRomConstPtr + ti_sysbios_knl_Clock_TimerProxy_Module__diagsIncluded__C_offset)))
#else
#define Module__DGSINCL ti_sysbios_knl_Clock_TimerProxy_Module__diagsIncluded__C
#endif

#undef Module__DGSENAB
#ifdef ti_sysbios_knl_Clock_TimerProxy_Module__diagsEnabled__CR
#define Module__DGSENAB (*((CT__ti_sysbios_knl_Clock_TimerProxy_Module__diagsEnabled *)(xdcRomConstPtr + ti_sysbios_knl_Clock_TimerProxy_Module__diagsEnabled__C_offset)))
#else
#define Module__DGSENAB ti_sysbios_knl_Clock_TimerProxy_Module__diagsEnabled__C
#endif

#undef Module__DGSMASK
#ifdef ti_sysbios_knl_Clock_TimerProxy_Module__diagsMask__CR
#define Module__DGSMASK (*((CT__ti_sysbios_knl_Clock_TimerProxy_Module__diagsMask *)(xdcRomConstPtr + ti_sysbios_knl_Clock_TimerProxy_Module__diagsMask__C_offset)))
#else
#define Module__DGSMASK ti_sysbios_knl_Clock_TimerProxy_Module__diagsMask__C
#endif

#undef Module__LOGDEF
#ifdef ti_sysbios_knl_Clock_TimerProxy_Module__loggerDefined__CR
#define Module__LOGDEF (*((CT__ti_sysbios_knl_Clock_TimerProxy_Module__loggerDefined *)(xdcRomConstPtr + ti_sysbios_knl_Clock_TimerProxy_Module__loggerDefined__C_offset)))
#else
#define Module__LOGDEF ti_sysbios_knl_Clock_TimerProxy_Module__loggerDefined__C
#endif

#undef Module__LOGOBJ
#ifdef ti_sysbios_knl_Clock_TimerProxy_Module__loggerObj__CR
#define Module__LOGOBJ ti_sysbios_knl_Clock_TimerProxy_Module__loggerObj__R
#define Module__LOGOBJ (*((CT__ti_sysbios_knl_Clock_TimerProxy_Module__loggerObj *)(xdcRomConstPtr + ti_sysbios_knl_Clock_TimerProxy_Module__loggerObj__C_offset)))
#else
#define Module__LOGOBJ ti_sysbios_knl_Clock_TimerProxy_Module__loggerObj__C
#endif

#undef Module__LOGFXN0
#ifdef ti_sysbios_knl_Clock_TimerProxy_Module__loggerFxn0__CR
#define Module__LOGFXN0 (*((CT__ti_sysbios_knl_Clock_TimerProxy_Module__loggerFxn0 *)(xdcRomConstPtr + ti_sysbios_knl_Clock_TimerProxy_Module__loggerFxn0__C_offset)))
#else
#define Module__LOGFXN0 ti_sysbios_knl_Clock_TimerProxy_Module__loggerFxn0__C
#endif

#undef Module__LOGFXN1
#ifdef ti_sysbios_knl_Clock_TimerProxy_Module__loggerFxn1__CR
#define Module__LOGFXN1 (*((CT__ti_sysbios_knl_Clock_TimerProxy_Module__loggerFxn1 *)(xdcRomConstPtr + ti_sysbios_knl_Clock_TimerProxy_Module__loggerFxn1__C_offset)))
#else
#define Module__LOGFXN1 ti_sysbios_knl_Clock_TimerProxy_Module__loggerFxn1__C
#endif

#undef Module__LOGFXN2
#ifdef ti_sysbios_knl_Clock_TimerProxy_Module__loggerFxn2__CR
#define Module__LOGFXN2 (*((CT__ti_sysbios_knl_Clock_TimerProxy_Module__loggerFxn2 *)(xdcRomConstPtr + ti_sysbios_knl_Clock_TimerProxy_Module__loggerFxn2__C_offset)))
#else
#define Module__LOGFXN2 ti_sysbios_knl_Clock_TimerProxy_Module__loggerFxn2__C
#endif

#undef Module__LOGFXN4
#ifdef ti_sysbios_knl_Clock_TimerProxy_Module__loggerFxn4__CR
#define Module__LOGFXN4 (*((CT__ti_sysbios_knl_Clock_TimerProxy_Module__loggerFxn4 *)(xdcRomConstPtr + ti_sysbios_knl_Clock_TimerProxy_Module__loggerFxn4__C_offset)))
#else
#define Module__LOGFXN4 ti_sysbios_knl_Clock_TimerProxy_Module__loggerFxn4__C
#endif

#undef Module__LOGFXN8
#ifdef ti_sysbios_knl_Clock_TimerProxy_Module__loggerFxn8__CR
#define Module__LOGFXN8 (*((CT__ti_sysbios_knl_Clock_TimerProxy_Module__loggerFxn8 *)(xdcRomConstPtr + ti_sysbios_knl_Clock_TimerProxy_Module__loggerFxn8__C_offset)))
#else
#define Module__LOGFXN8 ti_sysbios_knl_Clock_TimerProxy_Module__loggerFxn8__C
#endif

#undef Module__G_OBJ
#ifdef ti_sysbios_knl_Clock_TimerProxy_Module__gateObj__CR
#define Module__G_OBJ (*((CT__ti_sysbios_knl_Clock_TimerProxy_Module__gateObj *)(xdcRomConstPtr + ti_sysbios_knl_Clock_TimerProxy_Module__gateObj__C_offset)))
#else
#define Module__G_OBJ ti_sysbios_knl_Clock_TimerProxy_Module__gateObj__C
#endif

#undef Module__G_PRMS
#ifdef ti_sysbios_knl_Clock_TimerProxy_Module__gatePrms__CR
#define Module__G_PRMS (*((CT__ti_sysbios_knl_Clock_TimerProxy_Module__gatePrms *)(xdcRomConstPtr + ti_sysbios_knl_Clock_TimerProxy_Module__gatePrms__C_offset)))
#else
#define Module__G_PRMS ti_sysbios_knl_Clock_TimerProxy_Module__gatePrms__C
#endif

#undef Module__GP_create
#define Module__GP_create ti_sysbios_knl_Clock_TimerProxy_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_knl_Clock_TimerProxy_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_knl_Clock_TimerProxy_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_knl_Clock_TimerProxy_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_knl_Clock_TimerProxy_Module_GateProxy_query

xdc_Bool ti_sysbios_knl_Clock_TimerProxy_Proxy__abstract__S(void)
{
    return 0;
}
xdc_CPtr ti_sysbios_knl_Clock_TimerProxy_Proxy__delegate__S(void)
{
    return 0;
}



/*
 * ======== ti.sysbios.knl.Event SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#ifdef ti_sysbios_knl_Event_Module__id__CR
#define Module__MID (*((CT__ti_sysbios_knl_Event_Module__id *)(xdcRomConstPtr + ti_sysbios_knl_Event_Module__id__C_offset)))
#else
#define Module__MID ti_sysbios_knl_Event_Module__id__C
#endif

#undef Module__DGSINCL
#ifdef ti_sysbios_knl_Event_Module__diagsIncluded__CR
#define Module__DGSINCL (*((CT__ti_sysbios_knl_Event_Module__diagsIncluded *)(xdcRomConstPtr + ti_sysbios_knl_Event_Module__diagsIncluded__C_offset)))
#else
#define Module__DGSINCL ti_sysbios_knl_Event_Module__diagsIncluded__C
#endif

#undef Module__DGSENAB
#ifdef ti_sysbios_knl_Event_Module__diagsEnabled__CR
#define Module__DGSENAB (*((CT__ti_sysbios_knl_Event_Module__diagsEnabled *)(xdcRomConstPtr + ti_sysbios_knl_Event_Module__diagsEnabled__C_offset)))
#else
#define Module__DGSENAB ti_sysbios_knl_Event_Module__diagsEnabled__C
#endif

#undef Module__DGSMASK
#ifdef ti_sysbios_knl_Event_Module__diagsMask__CR
#define Module__DGSMASK (*((CT__ti_sysbios_knl_Event_Module__diagsMask *)(xdcRomConstPtr + ti_sysbios_knl_Event_Module__diagsMask__C_offset)))
#else
#define Module__DGSMASK ti_sysbios_knl_Event_Module__diagsMask__C
#endif

#undef Module__LOGDEF
#ifdef ti_sysbios_knl_Event_Module__loggerDefined__CR
#define Module__LOGDEF (*((CT__ti_sysbios_knl_Event_Module__loggerDefined *)(xdcRomConstPtr + ti_sysbios_knl_Event_Module__loggerDefined__C_offset)))
#else
#define Module__LOGDEF ti_sysbios_knl_Event_Module__loggerDefined__C
#endif

#undef Module__LOGOBJ
#ifdef ti_sysbios_knl_Event_Module__loggerObj__CR
#define Module__LOGOBJ ti_sysbios_knl_Event_Module__loggerObj__R
#define Module__LOGOBJ (*((CT__ti_sysbios_knl_Event_Module__loggerObj *)(xdcRomConstPtr + ti_sysbios_knl_Event_Module__loggerObj__C_offset)))
#else
#define Module__LOGOBJ ti_sysbios_knl_Event_Module__loggerObj__C
#endif

#undef Module__LOGFXN0
#ifdef ti_sysbios_knl_Event_Module__loggerFxn0__CR
#define Module__LOGFXN0 (*((CT__ti_sysbios_knl_Event_Module__loggerFxn0 *)(xdcRomConstPtr + ti_sysbios_knl_Event_Module__loggerFxn0__C_offset)))
#else
#define Module__LOGFXN0 ti_sysbios_knl_Event_Module__loggerFxn0__C
#endif

#undef Module__LOGFXN1
#ifdef ti_sysbios_knl_Event_Module__loggerFxn1__CR
#define Module__LOGFXN1 (*((CT__ti_sysbios_knl_Event_Module__loggerFxn1 *)(xdcRomConstPtr + ti_sysbios_knl_Event_Module__loggerFxn1__C_offset)))
#else
#define Module__LOGFXN1 ti_sysbios_knl_Event_Module__loggerFxn1__C
#endif

#undef Module__LOGFXN2
#ifdef ti_sysbios_knl_Event_Module__loggerFxn2__CR
#define Module__LOGFXN2 (*((CT__ti_sysbios_knl_Event_Module__loggerFxn2 *)(xdcRomConstPtr + ti_sysbios_knl_Event_Module__loggerFxn2__C_offset)))
#else
#define Module__LOGFXN2 ti_sysbios_knl_Event_Module__loggerFxn2__C
#endif

#undef Module__LOGFXN4
#ifdef ti_sysbios_knl_Event_Module__loggerFxn4__CR
#define Module__LOGFXN4 (*((CT__ti_sysbios_knl_Event_Module__loggerFxn4 *)(xdcRomConstPtr + ti_sysbios_knl_Event_Module__loggerFxn4__C_offset)))
#else
#define Module__LOGFXN4 ti_sysbios_knl_Event_Module__loggerFxn4__C
#endif

#undef Module__LOGFXN8
#ifdef ti_sysbios_knl_Event_Module__loggerFxn8__CR
#define Module__LOGFXN8 (*((CT__ti_sysbios_knl_Event_Module__loggerFxn8 *)(xdcRomConstPtr + ti_sysbios_knl_Event_Module__loggerFxn8__C_offset)))
#else
#define Module__LOGFXN8 ti_sysbios_knl_Event_Module__loggerFxn8__C
#endif

#undef Module__G_OBJ
#ifdef ti_sysbios_knl_Event_Module__gateObj__CR
#define Module__G_OBJ (*((CT__ti_sysbios_knl_Event_Module__gateObj *)(xdcRomConstPtr + ti_sysbios_knl_Event_Module__gateObj__C_offset)))
#else
#define Module__G_OBJ ti_sysbios_knl_Event_Module__gateObj__C
#endif

#undef Module__G_PRMS
#ifdef ti_sysbios_knl_Event_Module__gatePrms__CR
#define Module__G_PRMS (*((CT__ti_sysbios_knl_Event_Module__gatePrms *)(xdcRomConstPtr + ti_sysbios_knl_Event_Module__gatePrms__C_offset)))
#else
#define Module__G_PRMS ti_sysbios_knl_Event_Module__gatePrms__C
#endif

#undef Module__GP_create
#define Module__GP_create ti_sysbios_knl_Event_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_knl_Event_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_knl_Event_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_knl_Event_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_knl_Event_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Event_Module__startupDone__S( void )
{
    return 1;
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_knl_Event_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) 
{
    lab->handle = obj;
    lab->modId = 32800;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_knl_Event_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_CPtr)(src ? src : &ti_sysbios_knl_Event_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_knl_Event_Object__get__S(xdc_Ptr oa, xdc_Int i)
{
    if (oa) {
        return ((ti_sysbios_knl_Event_Object__ *)oa) + i;
    }

    return NULL;
}


/* Object__first__S */
xdc_Ptr ti_sysbios_knl_Event_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_knl_Event_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_knl_Event_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_knl_Event_Object__next__S( xdc_Ptr obj )
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_knl_Event_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_knl_Event_Object__create__S (
    xdc_CPtr __aa,
    const xdc_UChar *__paramsPtr,
    xdc_SizeT __psz,
    xdc_runtime_Error_Block *eb)
{
    ti_sysbios_knl_Event_Params __prms;
    ti_sysbios_knl_Event_Object *__obj;

    /* common instance initialization */
    __obj = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Event_Object__DESC__C, NULL, &__prms, (xdc_CPtr)__paramsPtr, 0, eb);
    if (__obj == NULL) {
        return NULL;
    }


    /* module-specific initialization */
    ti_sysbios_knl_Event_Instance_init__E(__obj, &__prms);
    return __obj;
}

/* create */
ti_sysbios_knl_Event_Handle ti_sysbios_knl_Event_create( const ti_sysbios_knl_Event_Params *__paramsPtr, xdc_runtime_Error_Block *eb )
{
    ti_sysbios_knl_Event_Params prms;
    ti_sysbios_knl_Event_Object *obj;


    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Event_Object__DESC__C, NULL, &prms, (xdc_CPtr)__paramsPtr, 0, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_sysbios_knl_Event_Instance_init__E(obj, &prms);
    return obj;
}

/* construct */
void ti_sysbios_knl_Event_construct(ti_sysbios_knl_Event_Struct *__obj, const ti_sysbios_knl_Event_Params *__paramsPtr )
{
    ti_sysbios_knl_Event_Params __prms;

    /* common instance initialization */
    xdc_runtime_Core_constructObject__I(&ti_sysbios_knl_Event_Object__DESC__C, __obj, &__prms, (xdc_CPtr)__paramsPtr, 0, NULL);

    /* module-specific initialization */
    ti_sysbios_knl_Event_Instance_init__E((xdc_Ptr)__obj, &__prms);
}

/* destruct */
void ti_sysbios_knl_Event_destruct(ti_sysbios_knl_Event_Struct *obj)
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Event_Object__DESC__C, obj, NULL, -1, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sysbios_knl_Event_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Event_Object__DESC__C, *((ti_sysbios_knl_Event_Object**)instp), NULL, -1, FALSE);
    *((ti_sysbios_knl_Event_Handle*)instp) = NULL;
}

/* delete */
void ti_sysbios_knl_Event_delete(ti_sysbios_knl_Event_Handle *instp)
{
    ti_sysbios_knl_Event_Object__delete__S(instp);
}


/*
 * ======== ti.sysbios.knl.Idle SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Idle_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== ti.sysbios.knl.Intrinsics SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Intrinsics_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== ti.sysbios.knl.Intrinsics_SupportProxy SYSTEM FUNCTIONS ========
 */


xdc_Bool ti_sysbios_knl_Intrinsics_SupportProxy_Proxy__abstract__S(void)
{
    return 0;
}
xdc_CPtr ti_sysbios_knl_Intrinsics_SupportProxy_Proxy__delegate__S(void)
{
    return 0;
}


/*
 * ======== ti.sysbios.knl.Queue SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#ifdef ti_sysbios_knl_Queue_Module__id__CR
#define Module__MID (*((CT__ti_sysbios_knl_Queue_Module__id *)(xdcRomConstPtr + ti_sysbios_knl_Queue_Module__id__C_offset)))
#else
#define Module__MID ti_sysbios_knl_Queue_Module__id__C
#endif

#undef Module__DGSINCL
#ifdef ti_sysbios_knl_Queue_Module__diagsIncluded__CR
#define Module__DGSINCL (*((CT__ti_sysbios_knl_Queue_Module__diagsIncluded *)(xdcRomConstPtr + ti_sysbios_knl_Queue_Module__diagsIncluded__C_offset)))
#else
#define Module__DGSINCL ti_sysbios_knl_Queue_Module__diagsIncluded__C
#endif

#undef Module__DGSENAB
#ifdef ti_sysbios_knl_Queue_Module__diagsEnabled__CR
#define Module__DGSENAB (*((CT__ti_sysbios_knl_Queue_Module__diagsEnabled *)(xdcRomConstPtr + ti_sysbios_knl_Queue_Module__diagsEnabled__C_offset)))
#else
#define Module__DGSENAB ti_sysbios_knl_Queue_Module__diagsEnabled__C
#endif

#undef Module__DGSMASK
#ifdef ti_sysbios_knl_Queue_Module__diagsMask__CR
#define Module__DGSMASK (*((CT__ti_sysbios_knl_Queue_Module__diagsMask *)(xdcRomConstPtr + ti_sysbios_knl_Queue_Module__diagsMask__C_offset)))
#else
#define Module__DGSMASK ti_sysbios_knl_Queue_Module__diagsMask__C
#endif

#undef Module__LOGDEF
#ifdef ti_sysbios_knl_Queue_Module__loggerDefined__CR
#define Module__LOGDEF (*((CT__ti_sysbios_knl_Queue_Module__loggerDefined *)(xdcRomConstPtr + ti_sysbios_knl_Queue_Module__loggerDefined__C_offset)))
#else
#define Module__LOGDEF ti_sysbios_knl_Queue_Module__loggerDefined__C
#endif

#undef Module__LOGOBJ
#ifdef ti_sysbios_knl_Queue_Module__loggerObj__CR
#define Module__LOGOBJ ti_sysbios_knl_Queue_Module__loggerObj__R
#define Module__LOGOBJ (*((CT__ti_sysbios_knl_Queue_Module__loggerObj *)(xdcRomConstPtr + ti_sysbios_knl_Queue_Module__loggerObj__C_offset)))
#else
#define Module__LOGOBJ ti_sysbios_knl_Queue_Module__loggerObj__C
#endif

#undef Module__LOGFXN0
#ifdef ti_sysbios_knl_Queue_Module__loggerFxn0__CR
#define Module__LOGFXN0 (*((CT__ti_sysbios_knl_Queue_Module__loggerFxn0 *)(xdcRomConstPtr + ti_sysbios_knl_Queue_Module__loggerFxn0__C_offset)))
#else
#define Module__LOGFXN0 ti_sysbios_knl_Queue_Module__loggerFxn0__C
#endif

#undef Module__LOGFXN1
#ifdef ti_sysbios_knl_Queue_Module__loggerFxn1__CR
#define Module__LOGFXN1 (*((CT__ti_sysbios_knl_Queue_Module__loggerFxn1 *)(xdcRomConstPtr + ti_sysbios_knl_Queue_Module__loggerFxn1__C_offset)))
#else
#define Module__LOGFXN1 ti_sysbios_knl_Queue_Module__loggerFxn1__C
#endif

#undef Module__LOGFXN2
#ifdef ti_sysbios_knl_Queue_Module__loggerFxn2__CR
#define Module__LOGFXN2 (*((CT__ti_sysbios_knl_Queue_Module__loggerFxn2 *)(xdcRomConstPtr + ti_sysbios_knl_Queue_Module__loggerFxn2__C_offset)))
#else
#define Module__LOGFXN2 ti_sysbios_knl_Queue_Module__loggerFxn2__C
#endif

#undef Module__LOGFXN4
#ifdef ti_sysbios_knl_Queue_Module__loggerFxn4__CR
#define Module__LOGFXN4 (*((CT__ti_sysbios_knl_Queue_Module__loggerFxn4 *)(xdcRomConstPtr + ti_sysbios_knl_Queue_Module__loggerFxn4__C_offset)))
#else
#define Module__LOGFXN4 ti_sysbios_knl_Queue_Module__loggerFxn4__C
#endif

#undef Module__LOGFXN8
#ifdef ti_sysbios_knl_Queue_Module__loggerFxn8__CR
#define Module__LOGFXN8 (*((CT__ti_sysbios_knl_Queue_Module__loggerFxn8 *)(xdcRomConstPtr + ti_sysbios_knl_Queue_Module__loggerFxn8__C_offset)))
#else
#define Module__LOGFXN8 ti_sysbios_knl_Queue_Module__loggerFxn8__C
#endif

#undef Module__G_OBJ
#ifdef ti_sysbios_knl_Queue_Module__gateObj__CR
#define Module__G_OBJ (*((CT__ti_sysbios_knl_Queue_Module__gateObj *)(xdcRomConstPtr + ti_sysbios_knl_Queue_Module__gateObj__C_offset)))
#else
#define Module__G_OBJ ti_sysbios_knl_Queue_Module__gateObj__C
#endif

#undef Module__G_PRMS
#ifdef ti_sysbios_knl_Queue_Module__gatePrms__CR
#define Module__G_PRMS (*((CT__ti_sysbios_knl_Queue_Module__gatePrms *)(xdcRomConstPtr + ti_sysbios_knl_Queue_Module__gatePrms__C_offset)))
#else
#define Module__G_PRMS ti_sysbios_knl_Queue_Module__gatePrms__C
#endif

#undef Module__GP_create
#define Module__GP_create ti_sysbios_knl_Queue_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_knl_Queue_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_knl_Queue_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_knl_Queue_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_knl_Queue_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Queue_Module__startupDone__S( void )
{
    return 1;
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_knl_Queue_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) 
{
    lab->handle = obj;
    lab->modId = 32801;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_knl_Queue_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_CPtr)(src ? src : &ti_sysbios_knl_Queue_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_knl_Queue_Object__get__S(xdc_Ptr oa, xdc_Int i)
{
    if (oa) {
        return ((ti_sysbios_knl_Queue_Object__ *)oa) + i;
    }

    return NULL;
}


/* Object__first__S */
xdc_Ptr ti_sysbios_knl_Queue_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_knl_Queue_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_knl_Queue_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_knl_Queue_Object__next__S( xdc_Ptr obj )
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_knl_Queue_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_knl_Queue_Object__create__S (
    xdc_CPtr __aa,
    const xdc_UChar *__paramsPtr,
    xdc_SizeT __psz,
    xdc_runtime_Error_Block *eb)
{
    ti_sysbios_knl_Queue_Params __prms;
    ti_sysbios_knl_Queue_Object *__obj;

    /* common instance initialization */
    __obj = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Queue_Object__DESC__C, NULL, &__prms, (xdc_CPtr)__paramsPtr, 0, eb);
    if (__obj == NULL) {
        return NULL;
    }


    /* module-specific initialization */
    ti_sysbios_knl_Queue_Instance_init__E(__obj, &__prms);
    return __obj;
}

/* create */
ti_sysbios_knl_Queue_Handle ti_sysbios_knl_Queue_create( const ti_sysbios_knl_Queue_Params *__paramsPtr, xdc_runtime_Error_Block *eb )
{
    ti_sysbios_knl_Queue_Params prms;
    ti_sysbios_knl_Queue_Object *obj;


    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Queue_Object__DESC__C, NULL, &prms, (xdc_CPtr)__paramsPtr, 0, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_sysbios_knl_Queue_Instance_init__E(obj, &prms);
    return obj;
}

/* construct */
void ti_sysbios_knl_Queue_construct(ti_sysbios_knl_Queue_Struct *__obj, const ti_sysbios_knl_Queue_Params *__paramsPtr )
{
    ti_sysbios_knl_Queue_Params __prms;

    /* common instance initialization */
    xdc_runtime_Core_constructObject__I(&ti_sysbios_knl_Queue_Object__DESC__C, __obj, &__prms, (xdc_CPtr)__paramsPtr, 0, NULL);

    /* module-specific initialization */
    ti_sysbios_knl_Queue_Instance_init__E((xdc_Ptr)__obj, &__prms);
}

/* destruct */
void ti_sysbios_knl_Queue_destruct(ti_sysbios_knl_Queue_Struct *obj)
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Queue_Object__DESC__C, obj, NULL, -1, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sysbios_knl_Queue_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Queue_Object__DESC__C, *((ti_sysbios_knl_Queue_Object**)instp), NULL, -1, FALSE);
    *((ti_sysbios_knl_Queue_Handle*)instp) = NULL;
}

/* delete */
void ti_sysbios_knl_Queue_delete(ti_sysbios_knl_Queue_Handle *instp)
{
    ti_sysbios_knl_Queue_Object__delete__S(instp);
}


/*
 * ======== ti.sysbios.knl.Semaphore SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#ifdef ti_sysbios_knl_Semaphore_Module__id__CR
#define Module__MID (*((CT__ti_sysbios_knl_Semaphore_Module__id *)(xdcRomConstPtr + ti_sysbios_knl_Semaphore_Module__id__C_offset)))
#else
#define Module__MID ti_sysbios_knl_Semaphore_Module__id__C
#endif

#undef Module__DGSINCL
#ifdef ti_sysbios_knl_Semaphore_Module__diagsIncluded__CR
#define Module__DGSINCL (*((CT__ti_sysbios_knl_Semaphore_Module__diagsIncluded *)(xdcRomConstPtr + ti_sysbios_knl_Semaphore_Module__diagsIncluded__C_offset)))
#else
#define Module__DGSINCL ti_sysbios_knl_Semaphore_Module__diagsIncluded__C
#endif

#undef Module__DGSENAB
#ifdef ti_sysbios_knl_Semaphore_Module__diagsEnabled__CR
#define Module__DGSENAB (*((CT__ti_sysbios_knl_Semaphore_Module__diagsEnabled *)(xdcRomConstPtr + ti_sysbios_knl_Semaphore_Module__diagsEnabled__C_offset)))
#else
#define Module__DGSENAB ti_sysbios_knl_Semaphore_Module__diagsEnabled__C
#endif

#undef Module__DGSMASK
#ifdef ti_sysbios_knl_Semaphore_Module__diagsMask__CR
#define Module__DGSMASK (*((CT__ti_sysbios_knl_Semaphore_Module__diagsMask *)(xdcRomConstPtr + ti_sysbios_knl_Semaphore_Module__diagsMask__C_offset)))
#else
#define Module__DGSMASK ti_sysbios_knl_Semaphore_Module__diagsMask__C
#endif

#undef Module__LOGDEF
#ifdef ti_sysbios_knl_Semaphore_Module__loggerDefined__CR
#define Module__LOGDEF (*((CT__ti_sysbios_knl_Semaphore_Module__loggerDefined *)(xdcRomConstPtr + ti_sysbios_knl_Semaphore_Module__loggerDefined__C_offset)))
#else
#define Module__LOGDEF ti_sysbios_knl_Semaphore_Module__loggerDefined__C
#endif

#undef Module__LOGOBJ
#ifdef ti_sysbios_knl_Semaphore_Module__loggerObj__CR
#define Module__LOGOBJ ti_sysbios_knl_Semaphore_Module__loggerObj__R
#define Module__LOGOBJ (*((CT__ti_sysbios_knl_Semaphore_Module__loggerObj *)(xdcRomConstPtr + ti_sysbios_knl_Semaphore_Module__loggerObj__C_offset)))
#else
#define Module__LOGOBJ ti_sysbios_knl_Semaphore_Module__loggerObj__C
#endif

#undef Module__LOGFXN0
#ifdef ti_sysbios_knl_Semaphore_Module__loggerFxn0__CR
#define Module__LOGFXN0 (*((CT__ti_sysbios_knl_Semaphore_Module__loggerFxn0 *)(xdcRomConstPtr + ti_sysbios_knl_Semaphore_Module__loggerFxn0__C_offset)))
#else
#define Module__LOGFXN0 ti_sysbios_knl_Semaphore_Module__loggerFxn0__C
#endif

#undef Module__LOGFXN1
#ifdef ti_sysbios_knl_Semaphore_Module__loggerFxn1__CR
#define Module__LOGFXN1 (*((CT__ti_sysbios_knl_Semaphore_Module__loggerFxn1 *)(xdcRomConstPtr + ti_sysbios_knl_Semaphore_Module__loggerFxn1__C_offset)))
#else
#define Module__LOGFXN1 ti_sysbios_knl_Semaphore_Module__loggerFxn1__C
#endif

#undef Module__LOGFXN2
#ifdef ti_sysbios_knl_Semaphore_Module__loggerFxn2__CR
#define Module__LOGFXN2 (*((CT__ti_sysbios_knl_Semaphore_Module__loggerFxn2 *)(xdcRomConstPtr + ti_sysbios_knl_Semaphore_Module__loggerFxn2__C_offset)))
#else
#define Module__LOGFXN2 ti_sysbios_knl_Semaphore_Module__loggerFxn2__C
#endif

#undef Module__LOGFXN4
#ifdef ti_sysbios_knl_Semaphore_Module__loggerFxn4__CR
#define Module__LOGFXN4 (*((CT__ti_sysbios_knl_Semaphore_Module__loggerFxn4 *)(xdcRomConstPtr + ti_sysbios_knl_Semaphore_Module__loggerFxn4__C_offset)))
#else
#define Module__LOGFXN4 ti_sysbios_knl_Semaphore_Module__loggerFxn4__C
#endif

#undef Module__LOGFXN8
#ifdef ti_sysbios_knl_Semaphore_Module__loggerFxn8__CR
#define Module__LOGFXN8 (*((CT__ti_sysbios_knl_Semaphore_Module__loggerFxn8 *)(xdcRomConstPtr + ti_sysbios_knl_Semaphore_Module__loggerFxn8__C_offset)))
#else
#define Module__LOGFXN8 ti_sysbios_knl_Semaphore_Module__loggerFxn8__C
#endif

#undef Module__G_OBJ
#ifdef ti_sysbios_knl_Semaphore_Module__gateObj__CR
#define Module__G_OBJ (*((CT__ti_sysbios_knl_Semaphore_Module__gateObj *)(xdcRomConstPtr + ti_sysbios_knl_Semaphore_Module__gateObj__C_offset)))
#else
#define Module__G_OBJ ti_sysbios_knl_Semaphore_Module__gateObj__C
#endif

#undef Module__G_PRMS
#ifdef ti_sysbios_knl_Semaphore_Module__gatePrms__CR
#define Module__G_PRMS (*((CT__ti_sysbios_knl_Semaphore_Module__gatePrms *)(xdcRomConstPtr + ti_sysbios_knl_Semaphore_Module__gatePrms__C_offset)))
#else
#define Module__G_PRMS ti_sysbios_knl_Semaphore_Module__gatePrms__C
#endif

#undef Module__GP_create
#define Module__GP_create ti_sysbios_knl_Semaphore_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_knl_Semaphore_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_knl_Semaphore_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_knl_Semaphore_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_knl_Semaphore_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Semaphore_Module__startupDone__S( void )
{
    return 1;
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_knl_Semaphore_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) 
{
    lab->handle = obj;
    lab->modId = 32802;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_knl_Semaphore_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_CPtr)(src ? src : &ti_sysbios_knl_Semaphore_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_knl_Semaphore_Object__get__S(xdc_Ptr oa, xdc_Int i)
{
    if (oa) {
        return ((ti_sysbios_knl_Semaphore_Object__ *)oa) + i;
    }

    return NULL;
}


/* Object__first__S */
xdc_Ptr ti_sysbios_knl_Semaphore_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_knl_Semaphore_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_knl_Semaphore_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_knl_Semaphore_Object__next__S( xdc_Ptr obj )
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_knl_Semaphore_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_knl_Semaphore_Object__create__S (
    xdc_CPtr __aa,
    const xdc_UChar *__paramsPtr,
    xdc_SizeT __psz,
    xdc_runtime_Error_Block *eb)
{
    const ti_sysbios_knl_Semaphore_Args__create *__args = __aa;
    ti_sysbios_knl_Semaphore_Params __prms;
    ti_sysbios_knl_Semaphore_Object *__obj;

    /* common instance initialization */
    __obj = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Semaphore_Object__DESC__C, NULL, &__prms, (xdc_CPtr)__paramsPtr, 0, eb);
    if (__obj == NULL) {
        return NULL;
    }


    /* module-specific initialization */
    ti_sysbios_knl_Semaphore_Instance_init__E(__obj, __args->count, &__prms);
    return __obj;
}

/* create */
ti_sysbios_knl_Semaphore_Handle ti_sysbios_knl_Semaphore_create( xdc_Int count, const ti_sysbios_knl_Semaphore_Params *__paramsPtr, xdc_runtime_Error_Block *eb )
{
    ti_sysbios_knl_Semaphore_Params prms;
    ti_sysbios_knl_Semaphore_Object *obj;


    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Semaphore_Object__DESC__C, NULL, &prms, (xdc_CPtr)__paramsPtr, 0, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_sysbios_knl_Semaphore_Instance_init__E(obj, count, &prms);
    return obj;
}

/* construct */
void ti_sysbios_knl_Semaphore_construct(ti_sysbios_knl_Semaphore_Struct *__obj, xdc_Int count, const ti_sysbios_knl_Semaphore_Params *__paramsPtr )
{
    ti_sysbios_knl_Semaphore_Params __prms;

    /* common instance initialization */
    xdc_runtime_Core_constructObject__I(&ti_sysbios_knl_Semaphore_Object__DESC__C, __obj, &__prms, (xdc_CPtr)__paramsPtr, 0, NULL);

    /* module-specific initialization */
    ti_sysbios_knl_Semaphore_Instance_init__E((xdc_Ptr)__obj, count, &__prms);
}

/* destruct */
void ti_sysbios_knl_Semaphore_destruct(ti_sysbios_knl_Semaphore_Struct *obj)
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Semaphore_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_knl_Semaphore_Instance_finalize__E, -1, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sysbios_knl_Semaphore_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Semaphore_Object__DESC__C, *((ti_sysbios_knl_Semaphore_Object**)instp), (xdc_Fxn)ti_sysbios_knl_Semaphore_Instance_finalize__E, -1, FALSE);
    *((ti_sysbios_knl_Semaphore_Handle*)instp) = NULL;
}

/* delete */
void ti_sysbios_knl_Semaphore_delete(ti_sysbios_knl_Semaphore_Handle *instp)
{
    ti_sysbios_knl_Semaphore_Object__delete__S(instp);
}


/*
 * ======== ti.sysbios.knl.Swi SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#ifdef ti_sysbios_knl_Swi_Module__id__CR
#define Module__MID (*((CT__ti_sysbios_knl_Swi_Module__id *)(xdcRomConstPtr + ti_sysbios_knl_Swi_Module__id__C_offset)))
#else
#define Module__MID ti_sysbios_knl_Swi_Module__id__C
#endif

#undef Module__DGSINCL
#ifdef ti_sysbios_knl_Swi_Module__diagsIncluded__CR
#define Module__DGSINCL (*((CT__ti_sysbios_knl_Swi_Module__diagsIncluded *)(xdcRomConstPtr + ti_sysbios_knl_Swi_Module__diagsIncluded__C_offset)))
#else
#define Module__DGSINCL ti_sysbios_knl_Swi_Module__diagsIncluded__C
#endif

#undef Module__DGSENAB
#ifdef ti_sysbios_knl_Swi_Module__diagsEnabled__CR
#define Module__DGSENAB (*((CT__ti_sysbios_knl_Swi_Module__diagsEnabled *)(xdcRomConstPtr + ti_sysbios_knl_Swi_Module__diagsEnabled__C_offset)))
#else
#define Module__DGSENAB ti_sysbios_knl_Swi_Module__diagsEnabled__C
#endif

#undef Module__DGSMASK
#ifdef ti_sysbios_knl_Swi_Module__diagsMask__CR
#define Module__DGSMASK (*((CT__ti_sysbios_knl_Swi_Module__diagsMask *)(xdcRomConstPtr + ti_sysbios_knl_Swi_Module__diagsMask__C_offset)))
#else
#define Module__DGSMASK ti_sysbios_knl_Swi_Module__diagsMask__C
#endif

#undef Module__LOGDEF
#ifdef ti_sysbios_knl_Swi_Module__loggerDefined__CR
#define Module__LOGDEF (*((CT__ti_sysbios_knl_Swi_Module__loggerDefined *)(xdcRomConstPtr + ti_sysbios_knl_Swi_Module__loggerDefined__C_offset)))
#else
#define Module__LOGDEF ti_sysbios_knl_Swi_Module__loggerDefined__C
#endif

#undef Module__LOGOBJ
#ifdef ti_sysbios_knl_Swi_Module__loggerObj__CR
#define Module__LOGOBJ ti_sysbios_knl_Swi_Module__loggerObj__R
#define Module__LOGOBJ (*((CT__ti_sysbios_knl_Swi_Module__loggerObj *)(xdcRomConstPtr + ti_sysbios_knl_Swi_Module__loggerObj__C_offset)))
#else
#define Module__LOGOBJ ti_sysbios_knl_Swi_Module__loggerObj__C
#endif

#undef Module__LOGFXN0
#ifdef ti_sysbios_knl_Swi_Module__loggerFxn0__CR
#define Module__LOGFXN0 (*((CT__ti_sysbios_knl_Swi_Module__loggerFxn0 *)(xdcRomConstPtr + ti_sysbios_knl_Swi_Module__loggerFxn0__C_offset)))
#else
#define Module__LOGFXN0 ti_sysbios_knl_Swi_Module__loggerFxn0__C
#endif

#undef Module__LOGFXN1
#ifdef ti_sysbios_knl_Swi_Module__loggerFxn1__CR
#define Module__LOGFXN1 (*((CT__ti_sysbios_knl_Swi_Module__loggerFxn1 *)(xdcRomConstPtr + ti_sysbios_knl_Swi_Module__loggerFxn1__C_offset)))
#else
#define Module__LOGFXN1 ti_sysbios_knl_Swi_Module__loggerFxn1__C
#endif

#undef Module__LOGFXN2
#ifdef ti_sysbios_knl_Swi_Module__loggerFxn2__CR
#define Module__LOGFXN2 (*((CT__ti_sysbios_knl_Swi_Module__loggerFxn2 *)(xdcRomConstPtr + ti_sysbios_knl_Swi_Module__loggerFxn2__C_offset)))
#else
#define Module__LOGFXN2 ti_sysbios_knl_Swi_Module__loggerFxn2__C
#endif

#undef Module__LOGFXN4
#ifdef ti_sysbios_knl_Swi_Module__loggerFxn4__CR
#define Module__LOGFXN4 (*((CT__ti_sysbios_knl_Swi_Module__loggerFxn4 *)(xdcRomConstPtr + ti_sysbios_knl_Swi_Module__loggerFxn4__C_offset)))
#else
#define Module__LOGFXN4 ti_sysbios_knl_Swi_Module__loggerFxn4__C
#endif

#undef Module__LOGFXN8
#ifdef ti_sysbios_knl_Swi_Module__loggerFxn8__CR
#define Module__LOGFXN8 (*((CT__ti_sysbios_knl_Swi_Module__loggerFxn8 *)(xdcRomConstPtr + ti_sysbios_knl_Swi_Module__loggerFxn8__C_offset)))
#else
#define Module__LOGFXN8 ti_sysbios_knl_Swi_Module__loggerFxn8__C
#endif

#undef Module__G_OBJ
#ifdef ti_sysbios_knl_Swi_Module__gateObj__CR
#define Module__G_OBJ (*((CT__ti_sysbios_knl_Swi_Module__gateObj *)(xdcRomConstPtr + ti_sysbios_knl_Swi_Module__gateObj__C_offset)))
#else
#define Module__G_OBJ ti_sysbios_knl_Swi_Module__gateObj__C
#endif

#undef Module__G_PRMS
#ifdef ti_sysbios_knl_Swi_Module__gatePrms__CR
#define Module__G_PRMS (*((CT__ti_sysbios_knl_Swi_Module__gatePrms *)(xdcRomConstPtr + ti_sysbios_knl_Swi_Module__gatePrms__C_offset)))
#else
#define Module__G_PRMS ti_sysbios_knl_Swi_Module__gatePrms__C
#endif

#undef Module__GP_create
#define Module__GP_create ti_sysbios_knl_Swi_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_knl_Swi_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_knl_Swi_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_knl_Swi_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_knl_Swi_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Swi_Module__startupDone__S( void )
{
    return ti_sysbios_knl_Swi_Module__startupDone__F();
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_knl_Swi_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) 
{
    lab->handle = obj;
    lab->modId = 32803;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_knl_Swi_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_CPtr)(src ? src : &ti_sysbios_knl_Swi_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_knl_Swi_Object__get__S(xdc_Ptr oa, xdc_Int i)
{
    if (oa) {
        return ((ti_sysbios_knl_Swi_Object__ *)oa) + i;
    }

    /* the bogus 'const' in the cast suppresses Klocwork MISRA complaints */
    return ((ti_sysbios_knl_Swi_Object__ * const)ti_sysbios_knl_Swi_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_knl_Swi_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_knl_Swi_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_knl_Swi_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_knl_Swi_Object__next__S( xdc_Ptr obj )
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_knl_Swi_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_knl_Swi_Object__create__S (
    xdc_CPtr __aa,
    const xdc_UChar *__paramsPtr,
    xdc_SizeT __psz,
    xdc_runtime_Error_Block *eb)
{
    const ti_sysbios_knl_Swi_Args__create *__args = __aa;
    ti_sysbios_knl_Swi_Params __prms;
    ti_sysbios_knl_Swi_Object *__obj;
    int iStat;

    /* common instance initialization */
    __obj = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Swi_Object__DESC__C, NULL, &__prms, (xdc_CPtr)__paramsPtr, 0, eb);
    if (__obj == NULL) {
        return NULL;
    }


    /* module-specific initialization */
    iStat = ti_sysbios_knl_Swi_Instance_init__E(__obj, __args->swiFxn, &__prms, eb);
    if (iStat) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Swi_Object__DESC__C, __obj, (xdc_Fxn)ti_sysbios_knl_Swi_Instance_finalize__E, iStat, 0);
        return NULL;
    }

    return __obj;
}

/* create */
ti_sysbios_knl_Swi_Handle ti_sysbios_knl_Swi_create( ti_sysbios_knl_Swi_FuncPtr swiFxn, const ti_sysbios_knl_Swi_Params *__paramsPtr, xdc_runtime_Error_Block *eb )
{
    ti_sysbios_knl_Swi_Params prms;
    ti_sysbios_knl_Swi_Object *obj;

    int iStat;

    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Swi_Object__DESC__C, NULL, &prms, (xdc_CPtr)__paramsPtr, 0, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    iStat = ti_sysbios_knl_Swi_Instance_init__E(obj, swiFxn, &prms, eb);
    if (iStat) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Swi_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_knl_Swi_Instance_finalize__E, iStat, 0);
        return NULL;
    }

    return obj;
}

/* construct */
void ti_sysbios_knl_Swi_construct(ti_sysbios_knl_Swi_Struct *__obj, ti_sysbios_knl_Swi_FuncPtr swiFxn, const ti_sysbios_knl_Swi_Params *__paramsPtr, xdc_runtime_Error_Block *eb )
{
    ti_sysbios_knl_Swi_Params __prms;
    int iStat;

    /* common instance initialization */
    xdc_runtime_Core_constructObject__I(&ti_sysbios_knl_Swi_Object__DESC__C, __obj, &__prms, (xdc_CPtr)__paramsPtr, 0, eb);

    /* module-specific initialization */
    iStat = ti_sysbios_knl_Swi_Instance_init__E((xdc_Ptr)__obj, swiFxn, &__prms, eb);
    if (iStat) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Swi_Object__DESC__C, __obj, (xdc_Fxn)ti_sysbios_knl_Swi_Instance_finalize__E, iStat, 1);
    }

}

/* destruct */
void ti_sysbios_knl_Swi_destruct(ti_sysbios_knl_Swi_Struct *obj)
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Swi_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_knl_Swi_Instance_finalize__E, 0, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sysbios_knl_Swi_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Swi_Object__DESC__C, *((ti_sysbios_knl_Swi_Object**)instp), (xdc_Fxn)ti_sysbios_knl_Swi_Instance_finalize__E, 0, FALSE);
    *((ti_sysbios_knl_Swi_Handle*)instp) = NULL;
}

/* delete */
void ti_sysbios_knl_Swi_delete(ti_sysbios_knl_Swi_Handle *instp)
{
    ti_sysbios_knl_Swi_Object__delete__S(instp);
}


/*
 * ======== ti.sysbios.knl.Task SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#ifdef ti_sysbios_knl_Task_Module__id__CR
#define Module__MID (*((CT__ti_sysbios_knl_Task_Module__id *)(xdcRomConstPtr + ti_sysbios_knl_Task_Module__id__C_offset)))
#else
#define Module__MID ti_sysbios_knl_Task_Module__id__C
#endif

#undef Module__DGSINCL
#ifdef ti_sysbios_knl_Task_Module__diagsIncluded__CR
#define Module__DGSINCL (*((CT__ti_sysbios_knl_Task_Module__diagsIncluded *)(xdcRomConstPtr + ti_sysbios_knl_Task_Module__diagsIncluded__C_offset)))
#else
#define Module__DGSINCL ti_sysbios_knl_Task_Module__diagsIncluded__C
#endif

#undef Module__DGSENAB
#ifdef ti_sysbios_knl_Task_Module__diagsEnabled__CR
#define Module__DGSENAB (*((CT__ti_sysbios_knl_Task_Module__diagsEnabled *)(xdcRomConstPtr + ti_sysbios_knl_Task_Module__diagsEnabled__C_offset)))
#else
#define Module__DGSENAB ti_sysbios_knl_Task_Module__diagsEnabled__C
#endif

#undef Module__DGSMASK
#ifdef ti_sysbios_knl_Task_Module__diagsMask__CR
#define Module__DGSMASK (*((CT__ti_sysbios_knl_Task_Module__diagsMask *)(xdcRomConstPtr + ti_sysbios_knl_Task_Module__diagsMask__C_offset)))
#else
#define Module__DGSMASK ti_sysbios_knl_Task_Module__diagsMask__C
#endif

#undef Module__LOGDEF
#ifdef ti_sysbios_knl_Task_Module__loggerDefined__CR
#define Module__LOGDEF (*((CT__ti_sysbios_knl_Task_Module__loggerDefined *)(xdcRomConstPtr + ti_sysbios_knl_Task_Module__loggerDefined__C_offset)))
#else
#define Module__LOGDEF ti_sysbios_knl_Task_Module__loggerDefined__C
#endif

#undef Module__LOGOBJ
#ifdef ti_sysbios_knl_Task_Module__loggerObj__CR
#define Module__LOGOBJ ti_sysbios_knl_Task_Module__loggerObj__R
#define Module__LOGOBJ (*((CT__ti_sysbios_knl_Task_Module__loggerObj *)(xdcRomConstPtr + ti_sysbios_knl_Task_Module__loggerObj__C_offset)))
#else
#define Module__LOGOBJ ti_sysbios_knl_Task_Module__loggerObj__C
#endif

#undef Module__LOGFXN0
#ifdef ti_sysbios_knl_Task_Module__loggerFxn0__CR
#define Module__LOGFXN0 (*((CT__ti_sysbios_knl_Task_Module__loggerFxn0 *)(xdcRomConstPtr + ti_sysbios_knl_Task_Module__loggerFxn0__C_offset)))
#else
#define Module__LOGFXN0 ti_sysbios_knl_Task_Module__loggerFxn0__C
#endif

#undef Module__LOGFXN1
#ifdef ti_sysbios_knl_Task_Module__loggerFxn1__CR
#define Module__LOGFXN1 (*((CT__ti_sysbios_knl_Task_Module__loggerFxn1 *)(xdcRomConstPtr + ti_sysbios_knl_Task_Module__loggerFxn1__C_offset)))
#else
#define Module__LOGFXN1 ti_sysbios_knl_Task_Module__loggerFxn1__C
#endif

#undef Module__LOGFXN2
#ifdef ti_sysbios_knl_Task_Module__loggerFxn2__CR
#define Module__LOGFXN2 (*((CT__ti_sysbios_knl_Task_Module__loggerFxn2 *)(xdcRomConstPtr + ti_sysbios_knl_Task_Module__loggerFxn2__C_offset)))
#else
#define Module__LOGFXN2 ti_sysbios_knl_Task_Module__loggerFxn2__C
#endif

#undef Module__LOGFXN4
#ifdef ti_sysbios_knl_Task_Module__loggerFxn4__CR
#define Module__LOGFXN4 (*((CT__ti_sysbios_knl_Task_Module__loggerFxn4 *)(xdcRomConstPtr + ti_sysbios_knl_Task_Module__loggerFxn4__C_offset)))
#else
#define Module__LOGFXN4 ti_sysbios_knl_Task_Module__loggerFxn4__C
#endif

#undef Module__LOGFXN8
#ifdef ti_sysbios_knl_Task_Module__loggerFxn8__CR
#define Module__LOGFXN8 (*((CT__ti_sysbios_knl_Task_Module__loggerFxn8 *)(xdcRomConstPtr + ti_sysbios_knl_Task_Module__loggerFxn8__C_offset)))
#else
#define Module__LOGFXN8 ti_sysbios_knl_Task_Module__loggerFxn8__C
#endif

#undef Module__G_OBJ
#ifdef ti_sysbios_knl_Task_Module__gateObj__CR
#define Module__G_OBJ (*((CT__ti_sysbios_knl_Task_Module__gateObj *)(xdcRomConstPtr + ti_sysbios_knl_Task_Module__gateObj__C_offset)))
#else
#define Module__G_OBJ ti_sysbios_knl_Task_Module__gateObj__C
#endif

#undef Module__G_PRMS
#ifdef ti_sysbios_knl_Task_Module__gatePrms__CR
#define Module__G_PRMS (*((CT__ti_sysbios_knl_Task_Module__gatePrms *)(xdcRomConstPtr + ti_sysbios_knl_Task_Module__gatePrms__C_offset)))
#else
#define Module__G_PRMS ti_sysbios_knl_Task_Module__gatePrms__C
#endif

#undef Module__GP_create
#define Module__GP_create ti_sysbios_knl_Task_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_knl_Task_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_knl_Task_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_knl_Task_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_knl_Task_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Task_Module__startupDone__S( void )
{
    return ti_sysbios_knl_Task_Module__startupDone__F();
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_knl_Task_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) 
{
    lab->handle = obj;
    lab->modId = 32804;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_knl_Task_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_CPtr)(src ? src : &ti_sysbios_knl_Task_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_knl_Task_Object__get__S(xdc_Ptr oa, xdc_Int i)
{
    if (oa) {
        return ((ti_sysbios_knl_Task_Object__ *)oa) + i;
    }

    /* the bogus 'const' in the cast suppresses Klocwork MISRA complaints */
    return ((ti_sysbios_knl_Task_Object__ * const)ti_sysbios_knl_Task_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_knl_Task_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_knl_Task_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_knl_Task_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_knl_Task_Object__next__S( xdc_Ptr obj )
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_knl_Task_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_knl_Task_Object__create__S (
    xdc_CPtr __aa,
    const xdc_UChar *__paramsPtr,
    xdc_SizeT __psz,
    xdc_runtime_Error_Block *eb)
{
    const ti_sysbios_knl_Task_Args__create *__args = __aa;
    ti_sysbios_knl_Task_Params __prms;
    ti_sysbios_knl_Task_Object *__obj;
    int iStat;

    /* common instance initialization */
    __obj = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Task_Object__DESC__C, NULL, &__prms, (xdc_CPtr)__paramsPtr, 0, eb);
    if (__obj == NULL) {
        return NULL;
    }


    /* module-specific initialization */
    iStat = ti_sysbios_knl_Task_Instance_init__E(__obj, __args->fxn, &__prms, eb);
    if (iStat) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Task_Object__DESC__C, __obj, (xdc_Fxn)ti_sysbios_knl_Task_Instance_finalize__E, iStat, 0);
        return NULL;
    }

    return __obj;
}

/* create */
ti_sysbios_knl_Task_Handle ti_sysbios_knl_Task_create( ti_sysbios_knl_Task_FuncPtr fxn, const ti_sysbios_knl_Task_Params *__paramsPtr, xdc_runtime_Error_Block *eb )
{
    ti_sysbios_knl_Task_Params prms;
    ti_sysbios_knl_Task_Object *obj;

    int iStat;

    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Task_Object__DESC__C, NULL, &prms, (xdc_CPtr)__paramsPtr, 0, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    iStat = ti_sysbios_knl_Task_Instance_init__E(obj, fxn, &prms, eb);
    if (iStat) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Task_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_knl_Task_Instance_finalize__E, iStat, 0);
        return NULL;
    }

    return obj;
}

/* construct */
void ti_sysbios_knl_Task_construct(ti_sysbios_knl_Task_Struct *__obj, ti_sysbios_knl_Task_FuncPtr fxn, const ti_sysbios_knl_Task_Params *__paramsPtr, xdc_runtime_Error_Block *eb )
{
    ti_sysbios_knl_Task_Params __prms;
    int iStat;

    /* common instance initialization */
    xdc_runtime_Core_constructObject__I(&ti_sysbios_knl_Task_Object__DESC__C, __obj, &__prms, (xdc_CPtr)__paramsPtr, 0, eb);

    /* module-specific initialization */
    iStat = ti_sysbios_knl_Task_Instance_init__E((xdc_Ptr)__obj, fxn, &__prms, eb);
    if (iStat) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Task_Object__DESC__C, __obj, (xdc_Fxn)ti_sysbios_knl_Task_Instance_finalize__E, iStat, 1);
    }

}

/* destruct */
void ti_sysbios_knl_Task_destruct(ti_sysbios_knl_Task_Struct *obj)
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Task_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_knl_Task_Instance_finalize__E, 0, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sysbios_knl_Task_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Task_Object__DESC__C, *((ti_sysbios_knl_Task_Object**)instp), (xdc_Fxn)ti_sysbios_knl_Task_Instance_finalize__E, 0, FALSE);
    *((ti_sysbios_knl_Task_Handle*)instp) = NULL;
}

/* delete */
void ti_sysbios_knl_Task_delete(ti_sysbios_knl_Task_Handle *instp)
{
    ti_sysbios_knl_Task_Object__delete__S(instp);
}


/*
 * ======== ti.sysbios.knl.Task_SupportProxy SYSTEM FUNCTIONS ========
 */


xdc_Bool ti_sysbios_knl_Task_SupportProxy_Proxy__abstract__S(void)
{
    return 0;
}
xdc_CPtr ti_sysbios_knl_Task_SupportProxy_Proxy__delegate__S(void)
{
    return 0;
}


/*
 * ======== ti.sysbios.rts.ti.ThreadLocalStorage SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_rts_ti_ThreadLocalStorage_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== ti.sysbios.timers.rti.Timer SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#ifdef ti_sysbios_timers_rti_Timer_Module__id__CR
#define Module__MID (*((CT__ti_sysbios_timers_rti_Timer_Module__id *)(xdcRomConstPtr + ti_sysbios_timers_rti_Timer_Module__id__C_offset)))
#else
#define Module__MID ti_sysbios_timers_rti_Timer_Module__id__C
#endif

#undef Module__DGSINCL
#ifdef ti_sysbios_timers_rti_Timer_Module__diagsIncluded__CR
#define Module__DGSINCL (*((CT__ti_sysbios_timers_rti_Timer_Module__diagsIncluded *)(xdcRomConstPtr + ti_sysbios_timers_rti_Timer_Module__diagsIncluded__C_offset)))
#else
#define Module__DGSINCL ti_sysbios_timers_rti_Timer_Module__diagsIncluded__C
#endif

#undef Module__DGSENAB
#ifdef ti_sysbios_timers_rti_Timer_Module__diagsEnabled__CR
#define Module__DGSENAB (*((CT__ti_sysbios_timers_rti_Timer_Module__diagsEnabled *)(xdcRomConstPtr + ti_sysbios_timers_rti_Timer_Module__diagsEnabled__C_offset)))
#else
#define Module__DGSENAB ti_sysbios_timers_rti_Timer_Module__diagsEnabled__C
#endif

#undef Module__DGSMASK
#ifdef ti_sysbios_timers_rti_Timer_Module__diagsMask__CR
#define Module__DGSMASK (*((CT__ti_sysbios_timers_rti_Timer_Module__diagsMask *)(xdcRomConstPtr + ti_sysbios_timers_rti_Timer_Module__diagsMask__C_offset)))
#else
#define Module__DGSMASK ti_sysbios_timers_rti_Timer_Module__diagsMask__C
#endif

#undef Module__LOGDEF
#ifdef ti_sysbios_timers_rti_Timer_Module__loggerDefined__CR
#define Module__LOGDEF (*((CT__ti_sysbios_timers_rti_Timer_Module__loggerDefined *)(xdcRomConstPtr + ti_sysbios_timers_rti_Timer_Module__loggerDefined__C_offset)))
#else
#define Module__LOGDEF ti_sysbios_timers_rti_Timer_Module__loggerDefined__C
#endif

#undef Module__LOGOBJ
#ifdef ti_sysbios_timers_rti_Timer_Module__loggerObj__CR
#define Module__LOGOBJ ti_sysbios_timers_rti_Timer_Module__loggerObj__R
#define Module__LOGOBJ (*((CT__ti_sysbios_timers_rti_Timer_Module__loggerObj *)(xdcRomConstPtr + ti_sysbios_timers_rti_Timer_Module__loggerObj__C_offset)))
#else
#define Module__LOGOBJ ti_sysbios_timers_rti_Timer_Module__loggerObj__C
#endif

#undef Module__LOGFXN0
#ifdef ti_sysbios_timers_rti_Timer_Module__loggerFxn0__CR
#define Module__LOGFXN0 (*((CT__ti_sysbios_timers_rti_Timer_Module__loggerFxn0 *)(xdcRomConstPtr + ti_sysbios_timers_rti_Timer_Module__loggerFxn0__C_offset)))
#else
#define Module__LOGFXN0 ti_sysbios_timers_rti_Timer_Module__loggerFxn0__C
#endif

#undef Module__LOGFXN1
#ifdef ti_sysbios_timers_rti_Timer_Module__loggerFxn1__CR
#define Module__LOGFXN1 (*((CT__ti_sysbios_timers_rti_Timer_Module__loggerFxn1 *)(xdcRomConstPtr + ti_sysbios_timers_rti_Timer_Module__loggerFxn1__C_offset)))
#else
#define Module__LOGFXN1 ti_sysbios_timers_rti_Timer_Module__loggerFxn1__C
#endif

#undef Module__LOGFXN2
#ifdef ti_sysbios_timers_rti_Timer_Module__loggerFxn2__CR
#define Module__LOGFXN2 (*((CT__ti_sysbios_timers_rti_Timer_Module__loggerFxn2 *)(xdcRomConstPtr + ti_sysbios_timers_rti_Timer_Module__loggerFxn2__C_offset)))
#else
#define Module__LOGFXN2 ti_sysbios_timers_rti_Timer_Module__loggerFxn2__C
#endif

#undef Module__LOGFXN4
#ifdef ti_sysbios_timers_rti_Timer_Module__loggerFxn4__CR
#define Module__LOGFXN4 (*((CT__ti_sysbios_timers_rti_Timer_Module__loggerFxn4 *)(xdcRomConstPtr + ti_sysbios_timers_rti_Timer_Module__loggerFxn4__C_offset)))
#else
#define Module__LOGFXN4 ti_sysbios_timers_rti_Timer_Module__loggerFxn4__C
#endif

#undef Module__LOGFXN8
#ifdef ti_sysbios_timers_rti_Timer_Module__loggerFxn8__CR
#define Module__LOGFXN8 (*((CT__ti_sysbios_timers_rti_Timer_Module__loggerFxn8 *)(xdcRomConstPtr + ti_sysbios_timers_rti_Timer_Module__loggerFxn8__C_offset)))
#else
#define Module__LOGFXN8 ti_sysbios_timers_rti_Timer_Module__loggerFxn8__C
#endif

#undef Module__G_OBJ
#ifdef ti_sysbios_timers_rti_Timer_Module__gateObj__CR
#define Module__G_OBJ (*((CT__ti_sysbios_timers_rti_Timer_Module__gateObj *)(xdcRomConstPtr + ti_sysbios_timers_rti_Timer_Module__gateObj__C_offset)))
#else
#define Module__G_OBJ ti_sysbios_timers_rti_Timer_Module__gateObj__C
#endif

#undef Module__G_PRMS
#ifdef ti_sysbios_timers_rti_Timer_Module__gatePrms__CR
#define Module__G_PRMS (*((CT__ti_sysbios_timers_rti_Timer_Module__gatePrms *)(xdcRomConstPtr + ti_sysbios_timers_rti_Timer_Module__gatePrms__C_offset)))
#else
#define Module__G_PRMS ti_sysbios_timers_rti_Timer_Module__gatePrms__C
#endif

#undef Module__GP_create
#define Module__GP_create ti_sysbios_timers_rti_Timer_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_timers_rti_Timer_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_timers_rti_Timer_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_timers_rti_Timer_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_timers_rti_Timer_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_timers_rti_Timer_Module__startupDone__S( void )
{
    return ti_sysbios_timers_rti_Timer_Module__startupDone__F();
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_timers_rti_Timer_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) 
{
    lab->handle = obj;
    lab->modId = 32823;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_timers_rti_Timer_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_CPtr)(src ? src : &ti_sysbios_timers_rti_Timer_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_timers_rti_Timer_Object__get__S(xdc_Ptr oa, xdc_Int i)
{
    if (oa) {
        return ((ti_sysbios_timers_rti_Timer_Object__ *)oa) + i;
    }

    /* the bogus 'const' in the cast suppresses Klocwork MISRA complaints */
    return ((ti_sysbios_timers_rti_Timer_Object__ * const)ti_sysbios_timers_rti_Timer_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_timers_rti_Timer_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_timers_rti_Timer_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_timers_rti_Timer_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_timers_rti_Timer_Object__next__S( xdc_Ptr obj )
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_timers_rti_Timer_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_timers_rti_Timer_Object__create__S (
    xdc_CPtr __aa,
    const xdc_UChar *__paramsPtr,
    xdc_SizeT __psz,
    xdc_runtime_Error_Block *eb)
{
    const ti_sysbios_timers_rti_Timer_Args__create *__args = __aa;
    ti_sysbios_timers_rti_Timer_Params __prms;
    ti_sysbios_timers_rti_Timer_Object *__obj;
    int iStat;

    /* common instance initialization */
    __obj = xdc_runtime_Core_createObject__I(&ti_sysbios_timers_rti_Timer_Object__DESC__C, NULL, &__prms, (xdc_CPtr)__paramsPtr, 0, eb);
    if (__obj == NULL) {
        return NULL;
    }


    /* module-specific initialization */
    iStat = ti_sysbios_timers_rti_Timer_Instance_init__E(__obj, __args->id, __args->tickFxn, &__prms, eb);
    if (iStat) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_timers_rti_Timer_Object__DESC__C, __obj, (xdc_Fxn)ti_sysbios_timers_rti_Timer_Instance_finalize__E, iStat, 0);
        return NULL;
    }

    return __obj;
}

/* create */
ti_sysbios_timers_rti_Timer_Handle ti_sysbios_timers_rti_Timer_create( xdc_Int id, ti_sysbios_interfaces_ITimer_FuncPtr tickFxn, const ti_sysbios_timers_rti_Timer_Params *__paramsPtr, xdc_runtime_Error_Block *eb )
{
    ti_sysbios_timers_rti_Timer_Params prms;
    ti_sysbios_timers_rti_Timer_Object *obj;

    int iStat;

    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&ti_sysbios_timers_rti_Timer_Object__DESC__C, NULL, &prms, (xdc_CPtr)__paramsPtr, 0, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    iStat = ti_sysbios_timers_rti_Timer_Instance_init__E(obj, id, tickFxn, &prms, eb);
    if (iStat) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_timers_rti_Timer_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_timers_rti_Timer_Instance_finalize__E, iStat, 0);
        return NULL;
    }

    return obj;
}

/* construct */
void ti_sysbios_timers_rti_Timer_construct(ti_sysbios_timers_rti_Timer_Struct *__obj, xdc_Int id, ti_sysbios_interfaces_ITimer_FuncPtr tickFxn, const ti_sysbios_timers_rti_Timer_Params *__paramsPtr, xdc_runtime_Error_Block *eb )
{
    ti_sysbios_timers_rti_Timer_Params __prms;
    int iStat;

    /* common instance initialization */
    xdc_runtime_Core_constructObject__I(&ti_sysbios_timers_rti_Timer_Object__DESC__C, __obj, &__prms, (xdc_CPtr)__paramsPtr, 0, eb);

    /* module-specific initialization */
    iStat = ti_sysbios_timers_rti_Timer_Instance_init__E((xdc_Ptr)__obj, id, tickFxn, &__prms, eb);
    if (iStat) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_timers_rti_Timer_Object__DESC__C, __obj, (xdc_Fxn)ti_sysbios_timers_rti_Timer_Instance_finalize__E, iStat, 1);
    }

}

/* destruct */
void ti_sysbios_timers_rti_Timer_destruct(ti_sysbios_timers_rti_Timer_Struct *obj)
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_timers_rti_Timer_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_timers_rti_Timer_Instance_finalize__E, 0, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sysbios_timers_rti_Timer_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_timers_rti_Timer_Object__DESC__C, *((ti_sysbios_timers_rti_Timer_Object**)instp), (xdc_Fxn)ti_sysbios_timers_rti_Timer_Instance_finalize__E, 0, FALSE);
    *((ti_sysbios_timers_rti_Timer_Handle*)instp) = NULL;
}

/* delete */
void ti_sysbios_timers_rti_Timer_delete(ti_sysbios_timers_rti_Timer_Handle *instp)
{
    ti_sysbios_timers_rti_Timer_Object__delete__S(instp);
}


/*
 * ======== ti.sysbios.utils.Load SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_utils_Load_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.Assert SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Assert_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.Core SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Core_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.Defaults SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Defaults_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.Diags SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Diags_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.Error SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Error_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.Gate SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Gate_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.Log SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Log_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.LoggerBuf SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#ifdef xdc_runtime_LoggerBuf_Module__id__CR
#define Module__MID (*((CT__xdc_runtime_LoggerBuf_Module__id *)(xdcRomConstPtr + xdc_runtime_LoggerBuf_Module__id__C_offset)))
#else
#define Module__MID xdc_runtime_LoggerBuf_Module__id__C
#endif

#undef Module__DGSINCL
#ifdef xdc_runtime_LoggerBuf_Module__diagsIncluded__CR
#define Module__DGSINCL (*((CT__xdc_runtime_LoggerBuf_Module__diagsIncluded *)(xdcRomConstPtr + xdc_runtime_LoggerBuf_Module__diagsIncluded__C_offset)))
#else
#define Module__DGSINCL xdc_runtime_LoggerBuf_Module__diagsIncluded__C
#endif

#undef Module__DGSENAB
#ifdef xdc_runtime_LoggerBuf_Module__diagsEnabled__CR
#define Module__DGSENAB (*((CT__xdc_runtime_LoggerBuf_Module__diagsEnabled *)(xdcRomConstPtr + xdc_runtime_LoggerBuf_Module__diagsEnabled__C_offset)))
#else
#define Module__DGSENAB xdc_runtime_LoggerBuf_Module__diagsEnabled__C
#endif

#undef Module__DGSMASK
#ifdef xdc_runtime_LoggerBuf_Module__diagsMask__CR
#define Module__DGSMASK (*((CT__xdc_runtime_LoggerBuf_Module__diagsMask *)(xdcRomConstPtr + xdc_runtime_LoggerBuf_Module__diagsMask__C_offset)))
#else
#define Module__DGSMASK xdc_runtime_LoggerBuf_Module__diagsMask__C
#endif

#undef Module__LOGDEF
#ifdef xdc_runtime_LoggerBuf_Module__loggerDefined__CR
#define Module__LOGDEF (*((CT__xdc_runtime_LoggerBuf_Module__loggerDefined *)(xdcRomConstPtr + xdc_runtime_LoggerBuf_Module__loggerDefined__C_offset)))
#else
#define Module__LOGDEF xdc_runtime_LoggerBuf_Module__loggerDefined__C
#endif

#undef Module__LOGOBJ
#ifdef xdc_runtime_LoggerBuf_Module__loggerObj__CR
#define Module__LOGOBJ xdc_runtime_LoggerBuf_Module__loggerObj__R
#define Module__LOGOBJ (*((CT__xdc_runtime_LoggerBuf_Module__loggerObj *)(xdcRomConstPtr + xdc_runtime_LoggerBuf_Module__loggerObj__C_offset)))
#else
#define Module__LOGOBJ xdc_runtime_LoggerBuf_Module__loggerObj__C
#endif

#undef Module__LOGFXN0
#ifdef xdc_runtime_LoggerBuf_Module__loggerFxn0__CR
#define Module__LOGFXN0 (*((CT__xdc_runtime_LoggerBuf_Module__loggerFxn0 *)(xdcRomConstPtr + xdc_runtime_LoggerBuf_Module__loggerFxn0__C_offset)))
#else
#define Module__LOGFXN0 xdc_runtime_LoggerBuf_Module__loggerFxn0__C
#endif

#undef Module__LOGFXN1
#ifdef xdc_runtime_LoggerBuf_Module__loggerFxn1__CR
#define Module__LOGFXN1 (*((CT__xdc_runtime_LoggerBuf_Module__loggerFxn1 *)(xdcRomConstPtr + xdc_runtime_LoggerBuf_Module__loggerFxn1__C_offset)))
#else
#define Module__LOGFXN1 xdc_runtime_LoggerBuf_Module__loggerFxn1__C
#endif

#undef Module__LOGFXN2
#ifdef xdc_runtime_LoggerBuf_Module__loggerFxn2__CR
#define Module__LOGFXN2 (*((CT__xdc_runtime_LoggerBuf_Module__loggerFxn2 *)(xdcRomConstPtr + xdc_runtime_LoggerBuf_Module__loggerFxn2__C_offset)))
#else
#define Module__LOGFXN2 xdc_runtime_LoggerBuf_Module__loggerFxn2__C
#endif

#undef Module__LOGFXN4
#ifdef xdc_runtime_LoggerBuf_Module__loggerFxn4__CR
#define Module__LOGFXN4 (*((CT__xdc_runtime_LoggerBuf_Module__loggerFxn4 *)(xdcRomConstPtr + xdc_runtime_LoggerBuf_Module__loggerFxn4__C_offset)))
#else
#define Module__LOGFXN4 xdc_runtime_LoggerBuf_Module__loggerFxn4__C
#endif

#undef Module__LOGFXN8
#ifdef xdc_runtime_LoggerBuf_Module__loggerFxn8__CR
#define Module__LOGFXN8 (*((CT__xdc_runtime_LoggerBuf_Module__loggerFxn8 *)(xdcRomConstPtr + xdc_runtime_LoggerBuf_Module__loggerFxn8__C_offset)))
#else
#define Module__LOGFXN8 xdc_runtime_LoggerBuf_Module__loggerFxn8__C
#endif

#undef Module__G_OBJ
#ifdef xdc_runtime_LoggerBuf_Module__gateObj__CR
#define Module__G_OBJ (*((CT__xdc_runtime_LoggerBuf_Module__gateObj *)(xdcRomConstPtr + xdc_runtime_LoggerBuf_Module__gateObj__C_offset)))
#else
#define Module__G_OBJ xdc_runtime_LoggerBuf_Module__gateObj__C
#endif

#undef Module__G_PRMS
#ifdef xdc_runtime_LoggerBuf_Module__gatePrms__CR
#define Module__G_PRMS (*((CT__xdc_runtime_LoggerBuf_Module__gatePrms *)(xdcRomConstPtr + xdc_runtime_LoggerBuf_Module__gatePrms__C_offset)))
#else
#define Module__G_PRMS xdc_runtime_LoggerBuf_Module__gatePrms__C
#endif

#undef Module__GP_create
#define Module__GP_create xdc_runtime_LoggerBuf_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete xdc_runtime_LoggerBuf_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter xdc_runtime_LoggerBuf_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave xdc_runtime_LoggerBuf_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query xdc_runtime_LoggerBuf_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool xdc_runtime_LoggerBuf_Module__startupDone__S( void )
{
    return xdc_runtime_LoggerBuf_Module__startupDone__F();
}

/* Handle__label__S */
xdc_runtime_Types_Label *xdc_runtime_LoggerBuf_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) 
{
    lab->handle = obj;
    lab->modId = 32777;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void xdc_runtime_LoggerBuf_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_CPtr)(src ? src : &xdc_runtime_LoggerBuf_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr xdc_runtime_LoggerBuf_Object__get__S(xdc_Ptr oa, xdc_Int i)
{
    if (oa) {
        return ((xdc_runtime_LoggerBuf_Object__ *)oa) + i;
    }

    /* the bogus 'const' in the cast suppresses Klocwork MISRA complaints */
    return ((xdc_runtime_LoggerBuf_Object__ * const)xdc_runtime_LoggerBuf_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr xdc_runtime_LoggerBuf_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)xdc_runtime_LoggerBuf_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&xdc_runtime_LoggerBuf_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr xdc_runtime_LoggerBuf_Object__next__S( xdc_Ptr obj )
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&xdc_runtime_LoggerBuf_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr xdc_runtime_LoggerBuf_Object__create__S (
    xdc_CPtr __aa,
    const xdc_UChar *__paramsPtr,
    xdc_SizeT __psz,
    xdc_runtime_Error_Block *eb)
{
    xdc_runtime_LoggerBuf_Params __prms;
    xdc_runtime_LoggerBuf_Object *__obj;
    int iStat;

    /* common instance initialization */
    __obj = xdc_runtime_Core_createObject__I(&xdc_runtime_LoggerBuf_Object__DESC__C, NULL, &__prms, (xdc_CPtr)__paramsPtr, 0, eb);
    if (__obj == NULL) {
        return NULL;
    }


    /* module-specific initialization */
    iStat = xdc_runtime_LoggerBuf_Instance_init__E(__obj, &__prms, eb);
    if (iStat) {
        xdc_runtime_Core_deleteObject__I(&xdc_runtime_LoggerBuf_Object__DESC__C, __obj, (xdc_Fxn)xdc_runtime_LoggerBuf_Instance_finalize__E, iStat, 0);
        return NULL;
    }

    return __obj;
}

/* create */
xdc_runtime_LoggerBuf_Handle xdc_runtime_LoggerBuf_create( const xdc_runtime_LoggerBuf_Params *__paramsPtr, xdc_runtime_Error_Block *eb )
{
    xdc_runtime_LoggerBuf_Params prms;
    xdc_runtime_LoggerBuf_Object *obj;

    int iStat;

    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&xdc_runtime_LoggerBuf_Object__DESC__C, NULL, &prms, (xdc_CPtr)__paramsPtr, 0, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    iStat = xdc_runtime_LoggerBuf_Instance_init__E(obj, &prms, eb);
    if (iStat) {
        xdc_runtime_Core_deleteObject__I(&xdc_runtime_LoggerBuf_Object__DESC__C, obj, (xdc_Fxn)xdc_runtime_LoggerBuf_Instance_finalize__E, iStat, 0);
        return NULL;
    }

    return obj;
}

/* construct */
void xdc_runtime_LoggerBuf_construct(xdc_runtime_LoggerBuf_Struct *__obj, const xdc_runtime_LoggerBuf_Params *__paramsPtr, xdc_runtime_Error_Block *eb )
{
    xdc_runtime_LoggerBuf_Params __prms;
    int iStat;

    /* common instance initialization */
    xdc_runtime_Core_constructObject__I(&xdc_runtime_LoggerBuf_Object__DESC__C, __obj, &__prms, (xdc_CPtr)__paramsPtr, 0, eb);

    /* module-specific initialization */
    iStat = xdc_runtime_LoggerBuf_Instance_init__E((xdc_Ptr)__obj, &__prms, eb);
    if (iStat) {
        xdc_runtime_Core_deleteObject__I(&xdc_runtime_LoggerBuf_Object__DESC__C, __obj, (xdc_Fxn)xdc_runtime_LoggerBuf_Instance_finalize__E, iStat, 1);
    }

}

/* destruct */
void xdc_runtime_LoggerBuf_destruct(xdc_runtime_LoggerBuf_Struct *obj)
{
    xdc_runtime_Core_deleteObject__I(&xdc_runtime_LoggerBuf_Object__DESC__C, obj, (xdc_Fxn)xdc_runtime_LoggerBuf_Instance_finalize__E, 0, TRUE);
}

/* Object__delete__S */
xdc_Void xdc_runtime_LoggerBuf_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&xdc_runtime_LoggerBuf_Object__DESC__C, *((xdc_runtime_LoggerBuf_Object**)instp), (xdc_Fxn)xdc_runtime_LoggerBuf_Instance_finalize__E, 0, FALSE);
    *((xdc_runtime_LoggerBuf_Handle*)instp) = NULL;
}

/* delete */
void xdc_runtime_LoggerBuf_delete(xdc_runtime_LoggerBuf_Handle *instp)
{
    xdc_runtime_LoggerBuf_Object__delete__S(instp);
}


/*
 * ======== xdc.runtime.LoggerBuf_Module_GateProxy SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#ifdef xdc_runtime_LoggerBuf_Module_GateProxy_Module__id__CR
#define Module__MID (*((CT__xdc_runtime_LoggerBuf_Module_GateProxy_Module__id *)(xdcRomConstPtr + xdc_runtime_LoggerBuf_Module_GateProxy_Module__id__C_offset)))
#else
#define Module__MID xdc_runtime_LoggerBuf_Module_GateProxy_Module__id__C
#endif

#undef Module__DGSINCL
#ifdef xdc_runtime_LoggerBuf_Module_GateProxy_Module__diagsIncluded__CR
#define Module__DGSINCL (*((CT__xdc_runtime_LoggerBuf_Module_GateProxy_Module__diagsIncluded *)(xdcRomConstPtr + xdc_runtime_LoggerBuf_Module_GateProxy_Module__diagsIncluded__C_offset)))
#else
#define Module__DGSINCL xdc_runtime_LoggerBuf_Module_GateProxy_Module__diagsIncluded__C
#endif

#undef Module__DGSENAB
#ifdef xdc_runtime_LoggerBuf_Module_GateProxy_Module__diagsEnabled__CR
#define Module__DGSENAB (*((CT__xdc_runtime_LoggerBuf_Module_GateProxy_Module__diagsEnabled *)(xdcRomConstPtr + xdc_runtime_LoggerBuf_Module_GateProxy_Module__diagsEnabled__C_offset)))
#else
#define Module__DGSENAB xdc_runtime_LoggerBuf_Module_GateProxy_Module__diagsEnabled__C
#endif

#undef Module__DGSMASK
#ifdef xdc_runtime_LoggerBuf_Module_GateProxy_Module__diagsMask__CR
#define Module__DGSMASK (*((CT__xdc_runtime_LoggerBuf_Module_GateProxy_Module__diagsMask *)(xdcRomConstPtr + xdc_runtime_LoggerBuf_Module_GateProxy_Module__diagsMask__C_offset)))
#else
#define Module__DGSMASK xdc_runtime_LoggerBuf_Module_GateProxy_Module__diagsMask__C
#endif

#undef Module__LOGDEF
#ifdef xdc_runtime_LoggerBuf_Module_GateProxy_Module__loggerDefined__CR
#define Module__LOGDEF (*((CT__xdc_runtime_LoggerBuf_Module_GateProxy_Module__loggerDefined *)(xdcRomConstPtr + xdc_runtime_LoggerBuf_Module_GateProxy_Module__loggerDefined__C_offset)))
#else
#define Module__LOGDEF xdc_runtime_LoggerBuf_Module_GateProxy_Module__loggerDefined__C
#endif

#undef Module__LOGOBJ
#ifdef xdc_runtime_LoggerBuf_Module_GateProxy_Module__loggerObj__CR
#define Module__LOGOBJ xdc_runtime_LoggerBuf_Module_GateProxy_Module__loggerObj__R
#define Module__LOGOBJ (*((CT__xdc_runtime_LoggerBuf_Module_GateProxy_Module__loggerObj *)(xdcRomConstPtr + xdc_runtime_LoggerBuf_Module_GateProxy_Module__loggerObj__C_offset)))
#else
#define Module__LOGOBJ xdc_runtime_LoggerBuf_Module_GateProxy_Module__loggerObj__C
#endif

#undef Module__LOGFXN0
#ifdef xdc_runtime_LoggerBuf_Module_GateProxy_Module__loggerFxn0__CR
#define Module__LOGFXN0 (*((CT__xdc_runtime_LoggerBuf_Module_GateProxy_Module__loggerFxn0 *)(xdcRomConstPtr + xdc_runtime_LoggerBuf_Module_GateProxy_Module__loggerFxn0__C_offset)))
#else
#define Module__LOGFXN0 xdc_runtime_LoggerBuf_Module_GateProxy_Module__loggerFxn0__C
#endif

#undef Module__LOGFXN1
#ifdef xdc_runtime_LoggerBuf_Module_GateProxy_Module__loggerFxn1__CR
#define Module__LOGFXN1 (*((CT__xdc_runtime_LoggerBuf_Module_GateProxy_Module__loggerFxn1 *)(xdcRomConstPtr + xdc_runtime_LoggerBuf_Module_GateProxy_Module__loggerFxn1__C_offset)))
#else
#define Module__LOGFXN1 xdc_runtime_LoggerBuf_Module_GateProxy_Module__loggerFxn1__C
#endif

#undef Module__LOGFXN2
#ifdef xdc_runtime_LoggerBuf_Module_GateProxy_Module__loggerFxn2__CR
#define Module__LOGFXN2 (*((CT__xdc_runtime_LoggerBuf_Module_GateProxy_Module__loggerFxn2 *)(xdcRomConstPtr + xdc_runtime_LoggerBuf_Module_GateProxy_Module__loggerFxn2__C_offset)))
#else
#define Module__LOGFXN2 xdc_runtime_LoggerBuf_Module_GateProxy_Module__loggerFxn2__C
#endif

#undef Module__LOGFXN4
#ifdef xdc_runtime_LoggerBuf_Module_GateProxy_Module__loggerFxn4__CR
#define Module__LOGFXN4 (*((CT__xdc_runtime_LoggerBuf_Module_GateProxy_Module__loggerFxn4 *)(xdcRomConstPtr + xdc_runtime_LoggerBuf_Module_GateProxy_Module__loggerFxn4__C_offset)))
#else
#define Module__LOGFXN4 xdc_runtime_LoggerBuf_Module_GateProxy_Module__loggerFxn4__C
#endif

#undef Module__LOGFXN8
#ifdef xdc_runtime_LoggerBuf_Module_GateProxy_Module__loggerFxn8__CR
#define Module__LOGFXN8 (*((CT__xdc_runtime_LoggerBuf_Module_GateProxy_Module__loggerFxn8 *)(xdcRomConstPtr + xdc_runtime_LoggerBuf_Module_GateProxy_Module__loggerFxn8__C_offset)))
#else
#define Module__LOGFXN8 xdc_runtime_LoggerBuf_Module_GateProxy_Module__loggerFxn8__C
#endif

#undef Module__G_OBJ
#ifdef xdc_runtime_LoggerBuf_Module_GateProxy_Module__gateObj__CR
#define Module__G_OBJ (*((CT__xdc_runtime_LoggerBuf_Module_GateProxy_Module__gateObj *)(xdcRomConstPtr + xdc_runtime_LoggerBuf_Module_GateProxy_Module__gateObj__C_offset)))
#else
#define Module__G_OBJ xdc_runtime_LoggerBuf_Module_GateProxy_Module__gateObj__C
#endif

#undef Module__G_PRMS
#ifdef xdc_runtime_LoggerBuf_Module_GateProxy_Module__gatePrms__CR
#define Module__G_PRMS (*((CT__xdc_runtime_LoggerBuf_Module_GateProxy_Module__gatePrms *)(xdcRomConstPtr + xdc_runtime_LoggerBuf_Module_GateProxy_Module__gatePrms__C_offset)))
#else
#define Module__G_PRMS xdc_runtime_LoggerBuf_Module_GateProxy_Module__gatePrms__C
#endif

#undef Module__GP_create
#define Module__GP_create xdc_runtime_LoggerBuf_Module_GateProxy_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete xdc_runtime_LoggerBuf_Module_GateProxy_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter xdc_runtime_LoggerBuf_Module_GateProxy_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave xdc_runtime_LoggerBuf_Module_GateProxy_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query xdc_runtime_LoggerBuf_Module_GateProxy_Module_GateProxy_query

xdc_Bool xdc_runtime_LoggerBuf_Module_GateProxy_Proxy__abstract__S(void)
{
    return 0;
}
xdc_CPtr xdc_runtime_LoggerBuf_Module_GateProxy_Proxy__delegate__S(void)
{
    return (const void *)&ti_sysbios_gates_GateHwi_Module__FXNS__C;
}



/*
 * ======== xdc.runtime.LoggerBuf_TimestampProxy SYSTEM FUNCTIONS ========
 */


xdc_Bool xdc_runtime_LoggerBuf_TimestampProxy_Proxy__abstract__S(void)
{
    return 0;
}
xdc_CPtr xdc_runtime_LoggerBuf_TimestampProxy_Proxy__delegate__S(void)
{
    return 0;
}


/*
 * ======== xdc.runtime.Main SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Main_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.Main_Module_GateProxy SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#ifdef xdc_runtime_Main_Module_GateProxy_Module__id__CR
#define Module__MID (*((CT__xdc_runtime_Main_Module_GateProxy_Module__id *)(xdcRomConstPtr + xdc_runtime_Main_Module_GateProxy_Module__id__C_offset)))
#else
#define Module__MID xdc_runtime_Main_Module_GateProxy_Module__id__C
#endif

#undef Module__DGSINCL
#ifdef xdc_runtime_Main_Module_GateProxy_Module__diagsIncluded__CR
#define Module__DGSINCL (*((CT__xdc_runtime_Main_Module_GateProxy_Module__diagsIncluded *)(xdcRomConstPtr + xdc_runtime_Main_Module_GateProxy_Module__diagsIncluded__C_offset)))
#else
#define Module__DGSINCL xdc_runtime_Main_Module_GateProxy_Module__diagsIncluded__C
#endif

#undef Module__DGSENAB
#ifdef xdc_runtime_Main_Module_GateProxy_Module__diagsEnabled__CR
#define Module__DGSENAB (*((CT__xdc_runtime_Main_Module_GateProxy_Module__diagsEnabled *)(xdcRomConstPtr + xdc_runtime_Main_Module_GateProxy_Module__diagsEnabled__C_offset)))
#else
#define Module__DGSENAB xdc_runtime_Main_Module_GateProxy_Module__diagsEnabled__C
#endif

#undef Module__DGSMASK
#ifdef xdc_runtime_Main_Module_GateProxy_Module__diagsMask__CR
#define Module__DGSMASK (*((CT__xdc_runtime_Main_Module_GateProxy_Module__diagsMask *)(xdcRomConstPtr + xdc_runtime_Main_Module_GateProxy_Module__diagsMask__C_offset)))
#else
#define Module__DGSMASK xdc_runtime_Main_Module_GateProxy_Module__diagsMask__C
#endif

#undef Module__LOGDEF
#ifdef xdc_runtime_Main_Module_GateProxy_Module__loggerDefined__CR
#define Module__LOGDEF (*((CT__xdc_runtime_Main_Module_GateProxy_Module__loggerDefined *)(xdcRomConstPtr + xdc_runtime_Main_Module_GateProxy_Module__loggerDefined__C_offset)))
#else
#define Module__LOGDEF xdc_runtime_Main_Module_GateProxy_Module__loggerDefined__C
#endif

#undef Module__LOGOBJ
#ifdef xdc_runtime_Main_Module_GateProxy_Module__loggerObj__CR
#define Module__LOGOBJ xdc_runtime_Main_Module_GateProxy_Module__loggerObj__R
#define Module__LOGOBJ (*((CT__xdc_runtime_Main_Module_GateProxy_Module__loggerObj *)(xdcRomConstPtr + xdc_runtime_Main_Module_GateProxy_Module__loggerObj__C_offset)))
#else
#define Module__LOGOBJ xdc_runtime_Main_Module_GateProxy_Module__loggerObj__C
#endif

#undef Module__LOGFXN0
#ifdef xdc_runtime_Main_Module_GateProxy_Module__loggerFxn0__CR
#define Module__LOGFXN0 (*((CT__xdc_runtime_Main_Module_GateProxy_Module__loggerFxn0 *)(xdcRomConstPtr + xdc_runtime_Main_Module_GateProxy_Module__loggerFxn0__C_offset)))
#else
#define Module__LOGFXN0 xdc_runtime_Main_Module_GateProxy_Module__loggerFxn0__C
#endif

#undef Module__LOGFXN1
#ifdef xdc_runtime_Main_Module_GateProxy_Module__loggerFxn1__CR
#define Module__LOGFXN1 (*((CT__xdc_runtime_Main_Module_GateProxy_Module__loggerFxn1 *)(xdcRomConstPtr + xdc_runtime_Main_Module_GateProxy_Module__loggerFxn1__C_offset)))
#else
#define Module__LOGFXN1 xdc_runtime_Main_Module_GateProxy_Module__loggerFxn1__C
#endif

#undef Module__LOGFXN2
#ifdef xdc_runtime_Main_Module_GateProxy_Module__loggerFxn2__CR
#define Module__LOGFXN2 (*((CT__xdc_runtime_Main_Module_GateProxy_Module__loggerFxn2 *)(xdcRomConstPtr + xdc_runtime_Main_Module_GateProxy_Module__loggerFxn2__C_offset)))
#else
#define Module__LOGFXN2 xdc_runtime_Main_Module_GateProxy_Module__loggerFxn2__C
#endif

#undef Module__LOGFXN4
#ifdef xdc_runtime_Main_Module_GateProxy_Module__loggerFxn4__CR
#define Module__LOGFXN4 (*((CT__xdc_runtime_Main_Module_GateProxy_Module__loggerFxn4 *)(xdcRomConstPtr + xdc_runtime_Main_Module_GateProxy_Module__loggerFxn4__C_offset)))
#else
#define Module__LOGFXN4 xdc_runtime_Main_Module_GateProxy_Module__loggerFxn4__C
#endif

#undef Module__LOGFXN8
#ifdef xdc_runtime_Main_Module_GateProxy_Module__loggerFxn8__CR
#define Module__LOGFXN8 (*((CT__xdc_runtime_Main_Module_GateProxy_Module__loggerFxn8 *)(xdcRomConstPtr + xdc_runtime_Main_Module_GateProxy_Module__loggerFxn8__C_offset)))
#else
#define Module__LOGFXN8 xdc_runtime_Main_Module_GateProxy_Module__loggerFxn8__C
#endif

#undef Module__G_OBJ
#ifdef xdc_runtime_Main_Module_GateProxy_Module__gateObj__CR
#define Module__G_OBJ (*((CT__xdc_runtime_Main_Module_GateProxy_Module__gateObj *)(xdcRomConstPtr + xdc_runtime_Main_Module_GateProxy_Module__gateObj__C_offset)))
#else
#define Module__G_OBJ xdc_runtime_Main_Module_GateProxy_Module__gateObj__C
#endif

#undef Module__G_PRMS
#ifdef xdc_runtime_Main_Module_GateProxy_Module__gatePrms__CR
#define Module__G_PRMS (*((CT__xdc_runtime_Main_Module_GateProxy_Module__gatePrms *)(xdcRomConstPtr + xdc_runtime_Main_Module_GateProxy_Module__gatePrms__C_offset)))
#else
#define Module__G_PRMS xdc_runtime_Main_Module_GateProxy_Module__gatePrms__C
#endif

#undef Module__GP_create
#define Module__GP_create xdc_runtime_Main_Module_GateProxy_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete xdc_runtime_Main_Module_GateProxy_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter xdc_runtime_Main_Module_GateProxy_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave xdc_runtime_Main_Module_GateProxy_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query xdc_runtime_Main_Module_GateProxy_Module_GateProxy_query

xdc_Bool xdc_runtime_Main_Module_GateProxy_Proxy__abstract__S(void)
{
    return 0;
}
xdc_CPtr xdc_runtime_Main_Module_GateProxy_Proxy__delegate__S(void)
{
    return (const void *)&ti_sysbios_gates_GateHwi_Module__FXNS__C;
}



/*
 * ======== xdc.runtime.Memory SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Memory_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.Memory_HeapProxy SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#ifdef xdc_runtime_Memory_HeapProxy_Module__id__CR
#define Module__MID (*((CT__xdc_runtime_Memory_HeapProxy_Module__id *)(xdcRomConstPtr + xdc_runtime_Memory_HeapProxy_Module__id__C_offset)))
#else
#define Module__MID xdc_runtime_Memory_HeapProxy_Module__id__C
#endif

#undef Module__DGSINCL
#ifdef xdc_runtime_Memory_HeapProxy_Module__diagsIncluded__CR
#define Module__DGSINCL (*((CT__xdc_runtime_Memory_HeapProxy_Module__diagsIncluded *)(xdcRomConstPtr + xdc_runtime_Memory_HeapProxy_Module__diagsIncluded__C_offset)))
#else
#define Module__DGSINCL xdc_runtime_Memory_HeapProxy_Module__diagsIncluded__C
#endif

#undef Module__DGSENAB
#ifdef xdc_runtime_Memory_HeapProxy_Module__diagsEnabled__CR
#define Module__DGSENAB (*((CT__xdc_runtime_Memory_HeapProxy_Module__diagsEnabled *)(xdcRomConstPtr + xdc_runtime_Memory_HeapProxy_Module__diagsEnabled__C_offset)))
#else
#define Module__DGSENAB xdc_runtime_Memory_HeapProxy_Module__diagsEnabled__C
#endif

#undef Module__DGSMASK
#ifdef xdc_runtime_Memory_HeapProxy_Module__diagsMask__CR
#define Module__DGSMASK (*((CT__xdc_runtime_Memory_HeapProxy_Module__diagsMask *)(xdcRomConstPtr + xdc_runtime_Memory_HeapProxy_Module__diagsMask__C_offset)))
#else
#define Module__DGSMASK xdc_runtime_Memory_HeapProxy_Module__diagsMask__C
#endif

#undef Module__LOGDEF
#ifdef xdc_runtime_Memory_HeapProxy_Module__loggerDefined__CR
#define Module__LOGDEF (*((CT__xdc_runtime_Memory_HeapProxy_Module__loggerDefined *)(xdcRomConstPtr + xdc_runtime_Memory_HeapProxy_Module__loggerDefined__C_offset)))
#else
#define Module__LOGDEF xdc_runtime_Memory_HeapProxy_Module__loggerDefined__C
#endif

#undef Module__LOGOBJ
#ifdef xdc_runtime_Memory_HeapProxy_Module__loggerObj__CR
#define Module__LOGOBJ xdc_runtime_Memory_HeapProxy_Module__loggerObj__R
#define Module__LOGOBJ (*((CT__xdc_runtime_Memory_HeapProxy_Module__loggerObj *)(xdcRomConstPtr + xdc_runtime_Memory_HeapProxy_Module__loggerObj__C_offset)))
#else
#define Module__LOGOBJ xdc_runtime_Memory_HeapProxy_Module__loggerObj__C
#endif

#undef Module__LOGFXN0
#ifdef xdc_runtime_Memory_HeapProxy_Module__loggerFxn0__CR
#define Module__LOGFXN0 (*((CT__xdc_runtime_Memory_HeapProxy_Module__loggerFxn0 *)(xdcRomConstPtr + xdc_runtime_Memory_HeapProxy_Module__loggerFxn0__C_offset)))
#else
#define Module__LOGFXN0 xdc_runtime_Memory_HeapProxy_Module__loggerFxn0__C
#endif

#undef Module__LOGFXN1
#ifdef xdc_runtime_Memory_HeapProxy_Module__loggerFxn1__CR
#define Module__LOGFXN1 (*((CT__xdc_runtime_Memory_HeapProxy_Module__loggerFxn1 *)(xdcRomConstPtr + xdc_runtime_Memory_HeapProxy_Module__loggerFxn1__C_offset)))
#else
#define Module__LOGFXN1 xdc_runtime_Memory_HeapProxy_Module__loggerFxn1__C
#endif

#undef Module__LOGFXN2
#ifdef xdc_runtime_Memory_HeapProxy_Module__loggerFxn2__CR
#define Module__LOGFXN2 (*((CT__xdc_runtime_Memory_HeapProxy_Module__loggerFxn2 *)(xdcRomConstPtr + xdc_runtime_Memory_HeapProxy_Module__loggerFxn2__C_offset)))
#else
#define Module__LOGFXN2 xdc_runtime_Memory_HeapProxy_Module__loggerFxn2__C
#endif

#undef Module__LOGFXN4
#ifdef xdc_runtime_Memory_HeapProxy_Module__loggerFxn4__CR
#define Module__LOGFXN4 (*((CT__xdc_runtime_Memory_HeapProxy_Module__loggerFxn4 *)(xdcRomConstPtr + xdc_runtime_Memory_HeapProxy_Module__loggerFxn4__C_offset)))
#else
#define Module__LOGFXN4 xdc_runtime_Memory_HeapProxy_Module__loggerFxn4__C
#endif

#undef Module__LOGFXN8
#ifdef xdc_runtime_Memory_HeapProxy_Module__loggerFxn8__CR
#define Module__LOGFXN8 (*((CT__xdc_runtime_Memory_HeapProxy_Module__loggerFxn8 *)(xdcRomConstPtr + xdc_runtime_Memory_HeapProxy_Module__loggerFxn8__C_offset)))
#else
#define Module__LOGFXN8 xdc_runtime_Memory_HeapProxy_Module__loggerFxn8__C
#endif

#undef Module__G_OBJ
#ifdef xdc_runtime_Memory_HeapProxy_Module__gateObj__CR
#define Module__G_OBJ (*((CT__xdc_runtime_Memory_HeapProxy_Module__gateObj *)(xdcRomConstPtr + xdc_runtime_Memory_HeapProxy_Module__gateObj__C_offset)))
#else
#define Module__G_OBJ xdc_runtime_Memory_HeapProxy_Module__gateObj__C
#endif

#undef Module__G_PRMS
#ifdef xdc_runtime_Memory_HeapProxy_Module__gatePrms__CR
#define Module__G_PRMS (*((CT__xdc_runtime_Memory_HeapProxy_Module__gatePrms *)(xdcRomConstPtr + xdc_runtime_Memory_HeapProxy_Module__gatePrms__C_offset)))
#else
#define Module__G_PRMS xdc_runtime_Memory_HeapProxy_Module__gatePrms__C
#endif

#undef Module__GP_create
#define Module__GP_create xdc_runtime_Memory_HeapProxy_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete xdc_runtime_Memory_HeapProxy_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter xdc_runtime_Memory_HeapProxy_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave xdc_runtime_Memory_HeapProxy_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query xdc_runtime_Memory_HeapProxy_Module_GateProxy_query

xdc_Bool xdc_runtime_Memory_HeapProxy_Proxy__abstract__S(void)
{
    return 1;
}
xdc_CPtr xdc_runtime_Memory_HeapProxy_Proxy__delegate__S(void)
{
    return (const void *)&ti_sysbios_heaps_HeapMem_Module__FXNS__C;
}



/*
 * ======== xdc.runtime.Registry SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Registry_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.Startup SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Startup_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.SysStd SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_SysStd_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.System SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_System_Module__startupDone__S( void )
{
    return xdc_runtime_System_Module__startupDone__F();
}



/*
 * ======== xdc.runtime.System_Module_GateProxy SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#ifdef xdc_runtime_System_Module_GateProxy_Module__id__CR
#define Module__MID (*((CT__xdc_runtime_System_Module_GateProxy_Module__id *)(xdcRomConstPtr + xdc_runtime_System_Module_GateProxy_Module__id__C_offset)))
#else
#define Module__MID xdc_runtime_System_Module_GateProxy_Module__id__C
#endif

#undef Module__DGSINCL
#ifdef xdc_runtime_System_Module_GateProxy_Module__diagsIncluded__CR
#define Module__DGSINCL (*((CT__xdc_runtime_System_Module_GateProxy_Module__diagsIncluded *)(xdcRomConstPtr + xdc_runtime_System_Module_GateProxy_Module__diagsIncluded__C_offset)))
#else
#define Module__DGSINCL xdc_runtime_System_Module_GateProxy_Module__diagsIncluded__C
#endif

#undef Module__DGSENAB
#ifdef xdc_runtime_System_Module_GateProxy_Module__diagsEnabled__CR
#define Module__DGSENAB (*((CT__xdc_runtime_System_Module_GateProxy_Module__diagsEnabled *)(xdcRomConstPtr + xdc_runtime_System_Module_GateProxy_Module__diagsEnabled__C_offset)))
#else
#define Module__DGSENAB xdc_runtime_System_Module_GateProxy_Module__diagsEnabled__C
#endif

#undef Module__DGSMASK
#ifdef xdc_runtime_System_Module_GateProxy_Module__diagsMask__CR
#define Module__DGSMASK (*((CT__xdc_runtime_System_Module_GateProxy_Module__diagsMask *)(xdcRomConstPtr + xdc_runtime_System_Module_GateProxy_Module__diagsMask__C_offset)))
#else
#define Module__DGSMASK xdc_runtime_System_Module_GateProxy_Module__diagsMask__C
#endif

#undef Module__LOGDEF
#ifdef xdc_runtime_System_Module_GateProxy_Module__loggerDefined__CR
#define Module__LOGDEF (*((CT__xdc_runtime_System_Module_GateProxy_Module__loggerDefined *)(xdcRomConstPtr + xdc_runtime_System_Module_GateProxy_Module__loggerDefined__C_offset)))
#else
#define Module__LOGDEF xdc_runtime_System_Module_GateProxy_Module__loggerDefined__C
#endif

#undef Module__LOGOBJ
#ifdef xdc_runtime_System_Module_GateProxy_Module__loggerObj__CR
#define Module__LOGOBJ xdc_runtime_System_Module_GateProxy_Module__loggerObj__R
#define Module__LOGOBJ (*((CT__xdc_runtime_System_Module_GateProxy_Module__loggerObj *)(xdcRomConstPtr + xdc_runtime_System_Module_GateProxy_Module__loggerObj__C_offset)))
#else
#define Module__LOGOBJ xdc_runtime_System_Module_GateProxy_Module__loggerObj__C
#endif

#undef Module__LOGFXN0
#ifdef xdc_runtime_System_Module_GateProxy_Module__loggerFxn0__CR
#define Module__LOGFXN0 (*((CT__xdc_runtime_System_Module_GateProxy_Module__loggerFxn0 *)(xdcRomConstPtr + xdc_runtime_System_Module_GateProxy_Module__loggerFxn0__C_offset)))
#else
#define Module__LOGFXN0 xdc_runtime_System_Module_GateProxy_Module__loggerFxn0__C
#endif

#undef Module__LOGFXN1
#ifdef xdc_runtime_System_Module_GateProxy_Module__loggerFxn1__CR
#define Module__LOGFXN1 (*((CT__xdc_runtime_System_Module_GateProxy_Module__loggerFxn1 *)(xdcRomConstPtr + xdc_runtime_System_Module_GateProxy_Module__loggerFxn1__C_offset)))
#else
#define Module__LOGFXN1 xdc_runtime_System_Module_GateProxy_Module__loggerFxn1__C
#endif

#undef Module__LOGFXN2
#ifdef xdc_runtime_System_Module_GateProxy_Module__loggerFxn2__CR
#define Module__LOGFXN2 (*((CT__xdc_runtime_System_Module_GateProxy_Module__loggerFxn2 *)(xdcRomConstPtr + xdc_runtime_System_Module_GateProxy_Module__loggerFxn2__C_offset)))
#else
#define Module__LOGFXN2 xdc_runtime_System_Module_GateProxy_Module__loggerFxn2__C
#endif

#undef Module__LOGFXN4
#ifdef xdc_runtime_System_Module_GateProxy_Module__loggerFxn4__CR
#define Module__LOGFXN4 (*((CT__xdc_runtime_System_Module_GateProxy_Module__loggerFxn4 *)(xdcRomConstPtr + xdc_runtime_System_Module_GateProxy_Module__loggerFxn4__C_offset)))
#else
#define Module__LOGFXN4 xdc_runtime_System_Module_GateProxy_Module__loggerFxn4__C
#endif

#undef Module__LOGFXN8
#ifdef xdc_runtime_System_Module_GateProxy_Module__loggerFxn8__CR
#define Module__LOGFXN8 (*((CT__xdc_runtime_System_Module_GateProxy_Module__loggerFxn8 *)(xdcRomConstPtr + xdc_runtime_System_Module_GateProxy_Module__loggerFxn8__C_offset)))
#else
#define Module__LOGFXN8 xdc_runtime_System_Module_GateProxy_Module__loggerFxn8__C
#endif

#undef Module__G_OBJ
#ifdef xdc_runtime_System_Module_GateProxy_Module__gateObj__CR
#define Module__G_OBJ (*((CT__xdc_runtime_System_Module_GateProxy_Module__gateObj *)(xdcRomConstPtr + xdc_runtime_System_Module_GateProxy_Module__gateObj__C_offset)))
#else
#define Module__G_OBJ xdc_runtime_System_Module_GateProxy_Module__gateObj__C
#endif

#undef Module__G_PRMS
#ifdef xdc_runtime_System_Module_GateProxy_Module__gatePrms__CR
#define Module__G_PRMS (*((CT__xdc_runtime_System_Module_GateProxy_Module__gatePrms *)(xdcRomConstPtr + xdc_runtime_System_Module_GateProxy_Module__gatePrms__C_offset)))
#else
#define Module__G_PRMS xdc_runtime_System_Module_GateProxy_Module__gatePrms__C
#endif

#undef Module__GP_create
#define Module__GP_create xdc_runtime_System_Module_GateProxy_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete xdc_runtime_System_Module_GateProxy_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter xdc_runtime_System_Module_GateProxy_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave xdc_runtime_System_Module_GateProxy_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query xdc_runtime_System_Module_GateProxy_Module_GateProxy_query

xdc_Bool xdc_runtime_System_Module_GateProxy_Proxy__abstract__S(void)
{
    return 0;
}
xdc_CPtr xdc_runtime_System_Module_GateProxy_Proxy__delegate__S(void)
{
    return (const void *)&ti_sysbios_gates_GateHwi_Module__FXNS__C;
}



/*
 * ======== xdc.runtime.System_SupportProxy SYSTEM FUNCTIONS ========
 */


xdc_Bool xdc_runtime_System_SupportProxy_Proxy__abstract__S(void)
{
    return 0;
}
xdc_CPtr xdc_runtime_System_SupportProxy_Proxy__delegate__S(void)
{
    return (const void *)&xdc_runtime_SysStd_Module__FXNS__C;
}


/*
 * ======== xdc.runtime.Text SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Text_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.Timestamp SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Timestamp_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.TimestampNull SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_TimestampNull_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.Timestamp_SupportProxy SYSTEM FUNCTIONS ========
 */


xdc_Bool xdc_runtime_Timestamp_SupportProxy_Proxy__abstract__S(void)
{
    return 0;
}
xdc_CPtr xdc_runtime_Timestamp_SupportProxy_Proxy__delegate__S(void)
{
    return 0;
}


/*
 * ======== INITIALIZATION ENTRY POINT ========
 */

extern int __xdc__init(void);
#ifdef __GNUC__
#if defined(__llvm__) && defined(__ti__)
    __attribute__ ((used))
#else
#ifndef __TI_COMPILER_VERSION__
    __attribute__ ((externally_visible))
#endif
#endif
#endif
__FAR__ int (* volatile __xdc__init__addr)(void) = &__xdc__init;


/*
 * ======== PROGRAM GLOBALS ========
 */

#ifdef __GNUC__
#if defined(__llvm__) && defined(__ti__)
    __attribute__ ((used))
#else
#ifndef __TI_COMPILER_VERSION__
    __attribute__ ((externally_visible))
#endif
#endif
#endif
const ti_sysbios_heaps_HeapMem_Handle heap0 = (ti_sysbios_heaps_HeapMem_Handle)((ti_sysbios_heaps_HeapMem_Handle)&ti_sysbios_heaps_HeapMem_Object__table__V[0]);

