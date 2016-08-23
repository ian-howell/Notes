package main

import (
	"fmt"
)

func f(a, b chan int) {
	for {
		select {
		case <-a:
			fmt.Println("Got an a")
		case <-b:
			fmt.Println("Got a b")
		}
	}
}

func main() {

}
