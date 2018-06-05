#		   Coded By : Muneeb Mughal
#                   Date : June 5th, 2018
#
#   This program implements bubble sort in python
#
#   Bubble sort works by comparing adjacent elements in a list and interchanging them in case greater number is found
#   before a smaller number
#

def bubble_sort(array):

    for i in range(len(array)):

        for j in range(len(array) - 1):

            if array[j] > array[j + 1]:

                array[j], array[j+1] = array[j+1], array[j]


array = [5, 4, 3, 2, 1, 11, -12, 100, 53]

bubble_sort(array)

print array
