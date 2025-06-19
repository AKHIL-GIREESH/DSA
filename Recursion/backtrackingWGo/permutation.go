package main

import "fmt"

var Nums = []int{1, 1, 1, 2, 2}

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

func main() {
	empty := make([]int, 0)
	m := map[int]bool{
		1: false,
		2: false,
		3: false,
	}
	// 	GenerateSubsequences(empty, 0, len(nums))
	// 	AnySubsequence(empty, 0, len(nums), 0, 2)
	//fmt.Println(CountSubsequences(empty, 0, len(Nums)))
	//CombinationSum2(empty, 0, 3)
	Permutation(m, empty, len(m))
}
