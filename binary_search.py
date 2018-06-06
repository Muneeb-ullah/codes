#		Binary Search
#
#		Coded By: Muneeb Mughal
#		Date : June 6, 2018
#
#	This is an implementation of binary search in python. 
#
#	Binary search work by taking a sorted list as input and finding the index of a specified number
#	in the list. Instead of comparing every element with the search_key the algorithm search only
#	the middle of list. Since the list is sorted, if the search_key occurs before the middle it means
#	that the elements ahead of the middle element are futile, vice verse if element occurs after the 
#	middle element. In case the element does not exist in the list, the list will be exhausted!

import random

def binary_search( array, search_key):

	start = 0
	end = len(array)

	while start <= end:

		index =  (start + end) / 2

		if array[index] == search_key:

			return  index

		elif search_key < array[index]:	# If the search key occurs before the middle element discard the list ahead

			end = index - 1

		elif search_key > array[index]: # If the search key occurs after the middle element discard the previous list elements

			start = index + 1


	return -1	# In case the element was not found 


data = []

for i in range(10):

	data.append(random.randint(1, 10))

data.sort()

index =  binary_search(data, 5)

if index == -1:

	print "Element was not found in the list"

else:

	print "Element found at index", index
