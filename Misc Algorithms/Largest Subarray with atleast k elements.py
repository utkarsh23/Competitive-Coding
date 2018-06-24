"""
Given an array, find the subarray (containing at least k numbers) which has the largest sum.
Examples:
Input  : arr[] = {-4, -2, 1, -3} 
         k = 2
Output : -1
The sub array is {-2, 1}
Input  : arr[] = {1, 1, 1, 1, 1, 1} 
         k = 2
Output : 6 
The sub array is {1, 1, 1, 1, 1, 1}
"""

def largest_subarray(length, index, elements):
	if (index == length):
		if elements < minimum:
			return float("-inf")
		else:
			return 0
	else:
		return max(array[index] + largest_subarray(length, index + 1, elements + 1), largest_subarray(length, index + 1, elements))

def main():
	global array, minimum
	leng = int(input("Enter number of elements: "))
	array = []
	for i in range(leng):
		array.append(int(input("Enter element at index " + str(i) + " : ")))
	minimum = int(input("Enter the minimum number of elements in desired subarray: "))
	print(largest_subarray(leng, 0, 0))

if __name__ == '__main__':
	main()
