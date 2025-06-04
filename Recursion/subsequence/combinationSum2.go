package main

import "fmt"

func CombinationSum2(result []int, index int, sum int) {

	if sum == 0 {
		fmt.Println(result)
		return
	}

	if index >= len(Nums) {
		return
	}

	CombinationSum2(append(result, Nums[index]), index+1, sum-Nums[index])
	x := Nums[index]

	for index < len(Nums) && Nums[index] == x {
		index++
	}

	CombinationSum2(result, index, sum)

}
