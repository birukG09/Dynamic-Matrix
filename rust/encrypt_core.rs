fn main() {
    println!("AeroQGeoSecure - High Performance Encryption Module (Rust)");
    let data = vec![1, 2, 3, 4, 5];
    let key = 42;
    let encrypted: Vec<u8> = data.iter().map(|&x| x ^ key).collect();
    println!("Encrypted data: {:?}", encrypted);
}
