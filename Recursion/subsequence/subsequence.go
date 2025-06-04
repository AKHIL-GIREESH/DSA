package main

import "fmt"

var Nums = []int{1, 1, 1, 2, 2}

func GenerateSubsequences(result []int, index int, limit int) {
	if index >= limit {
		fmt.Println(result)
		return
	}

	result = append(result, Nums[index])
	index++

	GenerateSubsequences(result, index, limit)
	result = result[:len(result)-1]
	GenerateSubsequences(result, index, limit)
}

func main() {
	empty := make([]int, 0)
	// 	GenerateSubsequences(empty, 0, len(nums))
	// 	AnySubsequence(empty, 0, len(nums), 0, 2)
	// fmt.Println(CountSubsequences(empty, 0, len(Nums)))
	CombinationSum2(empty, 0, 3)
}
