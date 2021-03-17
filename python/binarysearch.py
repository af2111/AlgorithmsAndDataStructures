def binary_search(arr: list, query: int) -> bool:
    
    
    middle = len(arr) // 2
    
    if len(arr) == 1 and arr[middle] != query:
        return False
    
    
    
    if arr[middle] < query:
        return binary_search(arr[middle:], query) 
    
    if arr[middle] > query:
        return binary_search(arr[:middle], query)
    
    
    if arr[middle] == query:
        return True

    
    
    
arr = [2, 4, 7, 12, 5434 , 2224345, 1423232543]
print(binary_search(arr, 3))
