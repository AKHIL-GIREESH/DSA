package main

import "fmt"

//var nums = []int{1, 2, 3}

func AnySubsequence(result []int, index int, limit int, currsum int, sum int) bool {
	if currsum == sum {
		fmt.Println(result)
		return true
	}

	if index >= limit {
		return false
	}

	result = append(result, Nums[index])
	currsum = currsum + Nums[index]
	index++

	if AnySubsequence(result, index, limit, currsum, sum) == true {
		return true
	}

	result = result[:len(result)-1]
	currsum -= Nums[index-1]

	if AnySubsequence(result, index, limit, currsum, sum) == true {
		return true
	}

	return false

}

// func main() {
// 	empty := make([]int, 0)

// }
