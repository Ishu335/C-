# Python program for implementation of Quicksort Sort

# This implementation utilizes pivot as the last element in the nums list
# It has a pointer to keep track of the elements smaller than the pivot
# At the very end of partition() function, the pointer is swapped with the pivot
# to come up with a "sorted" nums relative to the pivot


# Function to find the partition position
def partition(array, low, high):
    pivot = array[high]
    i = low - 1
    for j in range(low, high):
        if array[j] <= pivot:
            i = i + 1
            (array[i], array[j]) = (array[j], array[i])
            print(array[i], array[j])       
    (array[i + 1], array[high]) = (array[high], array[i + 1])
    return i + 1
    
def quickSort(array, low, high):
	if low < high:
		pi = partition(array, low, high)
		quickSort(array, low, pi - 1)
		quickSort(array, pi + 1, high)

data = [100, 7, 4, 580, 10, 9, -2]
size = len(data)
print("\nasdf:-",size)
quickSort(data, 0, size - 1)
print('Sorted Array in Ascending Order:')
print(data)