use std::collections::HashMap;

fn main() {
    let mut sensors = HashMap::new();
    sensors.insert("LIDAR_01", "ACTIVE");
    sensors.insert("SAR_04", "STANDBY");
    for (id, status) in &sensors {
        println!("Sensor {}: {}", id, status);
    }
}
