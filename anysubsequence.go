package main

import (
	"fmt"
)

var nums = []int{1, 2, 3}

func AnySubsequence(result []int, index int, limit int, currSum int, sum int) bool {
	if currSum == sum {
		fmt.Println(result)
		return true
	}

	if index >= index {
		return false
	}

	result = append(result, nums[index])
	currSum = currSum + nums[index]
	index++

	if AnySubsequence(result, index, limit, currSum, sum) == true {
		return true
	}

	result = result[:len(result)-1]
	currSum -= nums[index-1]

	if AnySubsequence(result, index, limit, currSum, sum) == true {
		return true
	}

	return false

}

func main() {
	empty := make([]int, 0)

	AnySubsequence(empty, 0, len(nums), 0, 2)
}
