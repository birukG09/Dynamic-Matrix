package main

import (
	"fmt"
	"crypto/sha256"
)

func main() {
	data := "Surveillance_Audit_Log_2026"
	hash := sha256.Sum256([]byte(data))
	fmt.Printf("Secure Hash (SHA256): %x\n", hash)
}
