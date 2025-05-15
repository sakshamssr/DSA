arr = [1,4,2,3,5]

print("Before Sort:")
for i in arr: print(i,end='')

for i in range(0, len(arr)):
    min = i
    for j in range(i, len(arr)):
        if(arr[j]<arr[i]):
            min = j
            c = arr[i]
            arr[i] = arr[j]
            arr[j] = c
print()
print("After Sort: ")
for i in arr: print(i,end='')