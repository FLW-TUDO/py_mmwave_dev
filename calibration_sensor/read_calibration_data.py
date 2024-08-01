import numpy as np

def parse_measurement_line(line):
    """Extract the values from a 'compRangeBiasAndRxChanPhase' line."""
    return list(map(float, line.strip().split()[1:]))

def read_calibration_data(file_path):
    """Read the calibration data from a file and organize it by measurements."""
    measurements = []
    current_measurement = []

    with open(file_path, 'r') as file:
        for line in file:
            if line.startswith("Measurement"):
                if current_measurement:
                    measurements.append(current_measurement)
                current_measurement = []
            elif line.startswith("compRangeBiasAndRxChanPhase"):
                current_measurement.append(parse_measurement_line(line))
        if current_measurement:
            measurements.append(current_measurement)

    return measurements

def calculate_optimized_values(measurements):
    """Calculate the mean (optimized) values across all measurements."""
    all_data = np.concatenate(measurements, axis=0)
    return np.mean(all_data, axis=0)

# Example usage
file_path = "calibration_sensor/Measurement_20240731/sensor_4_calibration_20240731.txt"  # Replace with the path to your .txt file
measurements = read_calibration_data(file_path)
optimized_values = calculate_optimized_values(measurements)

print("Optimized Calibration Values:")
print(optimized_values)
