package main

func CountSubsequences(result []int, index int, limit int) int {
	if index >= limit {
		return 1
	}

	result = append(result, Nums[index])
	index++

	x := CountSubsequences(result, index, limit)
	result = result[:len(result)-1]
	x += CountSubsequences(result, index, limit)

	return x
}
