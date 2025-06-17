package main

import "fmt"

func Permutation(m map[int]bool, result []int, count int) {
	if count == 0 {
		fmt.Println(result)
		return
	}

	for key, val := range m {
		fmt.Println(key)
		if !val {
			m[key] = !val
			Permutation(m, append(result, key), count-1)
			m[key] = val
		}
	}

}
