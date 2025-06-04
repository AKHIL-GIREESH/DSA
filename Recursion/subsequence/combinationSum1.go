package main

import "fmt"

func CombinationSum(result []int, remaining int, index int) {

	//fmt.Println(result, remaining, index)

	if remaining == 0 {
		fmt.Println(result)
		return
	}

	if remaining < 0 || index >= len(Nums) {
		return
	}

	CombinationSum(append(result, Nums[index]), remaining-Nums[index], index)
	CombinationSum(result, remaining, index+1)

	// if index >= len(Nums) {
	// 	return true
	// }

	// if remaining == Nums[index]{
	// 	print(result)
	// 	return true
	// }else if remaining < Nums[index]{
	// 	return false
	// }

	// result = append(result, index)

	// if CombinationSum(result,remaining,index) == false {
	// 	index++
	// 	result = result[:len(result)-1]
	// }

}
