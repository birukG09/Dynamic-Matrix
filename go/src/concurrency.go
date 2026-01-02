package main

import "fmt"

func main() {
	c := make(chan string)
	go func() { c <- "Quantum Key Handshake Complete" }()
	msg := <-c
	fmt.Println(msg)
}
