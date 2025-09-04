arr = [900, 945, 955, 1100, 1500, 1800]; dep = [920, 1200, 1130, 1150, 1900, 2000]; iterA = 1;iterD = 0; platforms = 1;ans = 1

while iterA < len(arr) and iterD < len(dep):
    if dep[iterD] >= arr[iterA]:
        platforms += 1
        iterA += 1
    else:
        platforms -= 1
        iterD += 1
    ans = max(ans,platforms)

print(ans)