#   				Coded By :  Muneeb Mughal
#                               Date :  June 5th, 2018

#   This program finds all the prime numbers in a given range.
#
#
#    The Sieve of Eratosthenes is a method of finding prime numbers. It operates
#   as follows:
#   a) Create a list with all elements initialized to 1 (true). List elements with prime subscripts
#   will remain 1. All other list elements will eventually be set to zero.
#   b) Starting with list element 2, every time a list element is found whose value is 1, loop
#   through the remainder of the list and set to zero every element whose subscript is a mul-
#   tiple of the subscript for the element with value 1. For list subscript 2, all elements be-
#   yond 2 in the list that are multiples of 2 will be set to zero (subscripts 4, 6, 8, 10, etc.);
#   for list subscript 3, all elements beyond 3 in the list that are multiples of 3 will be set to
#   zero (subscripts 6, 9, 12, 15, etc.); and so on.


def sieve_of_eratosthenes(limit):

    numbers = []

    for i in range(limit):

        numbers.append(1)

    for i in xrange(1,len(numbers)):

        if numbers[i] == 1:

            for j in xrange(i+1, len(numbers)):

                if (j+1) % (i+1) == 0:

                    numbers[j] = 0

    primes = []

    for i in xrange(len(numbers)):

        if numbers[i] == 1:

            primes.append(i + 1)


