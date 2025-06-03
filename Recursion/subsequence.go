package main

import "fmt"

// Declare global variable correctly
var nums = []int{1, 2, 3}

func GenerateSubsequences(result []int, index int, limit int) {
	if index >= limit {
		fmt.Println(result)
		return
	}

	result = append(result, nums[index])
	index++

	GenerateSubsequences(result, index, limit)
	result = result[:len(result)-1]
	GenerateSubsequences(result, index, limit)
}

func main() {
	empty := make([]int, 0)
	GenerateSubsequences(empty, 0, len(nums))
}
