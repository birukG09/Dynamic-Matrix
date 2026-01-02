import numpy as np

def simulate_telemetry():
    # Simulate quantum noise on telemetry data
    data = np.random.normal(0, 1, 100)
    noise = np.random.normal(0, 0.1, 100)
    secured_data = data + noise
    print(f"Telemetry simulation complete. Signal-to-noise ratio: {np.mean(data)/np.std(noise):.2f}")

if __name__ == "__main__":
    simulate_telemetry()
