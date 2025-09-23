L = [1,2,3]

def subsequence(arr,ind):
    if ind >= len(L):
        print(arr)
        return

    subsequence(arr,ind+1)
    arr.append(L[ind])
    subsequence(arr,ind+1)
    arr.pop()

subsequence([],0)