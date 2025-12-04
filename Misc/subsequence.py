L = [1,1,1,2,3]

def subsequence(ind,arr,s):
    if s == 0:
        # print(arr)
        return 1
    if s < 0 or ind == len(L):
        # print(arr)
        return 0
    
    l = subsequence(ind+1,arr,s)
    arr.append(L[ind])
    r = subsequence(ind+1,arr,s-L[ind])
    arr.pop()

    return l+r

print(subsequence(0,[],3))