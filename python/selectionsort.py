import random

def selectionsort(arr: list) -> list:
    for i in range(len(arr)):
        lowest = i
        for j in range(i, len(arr)):
            if arr[j] < arr[lowest]:
                lowest = j
        arr[lowest], arr[i] = arr[i], arr[lowest]
    return arr

check = []
for i in range(100):
    check.append(random.randint(0, 1000))
print(selectionsort(check))