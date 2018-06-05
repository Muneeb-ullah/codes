#			   Coded By : Muneeb Mughal
#                           Date : June 5th, 2018
#
#
#       This program takes transpose of a n x n matrix
#
#       The algorithm is to convert the rows into columns by changing the dimension of matrix
#
#       For example to take transpose of a 2 x 3 matrix we have to first make a matrix that can hold its transpose
#       such a matrix needs to be of dimension 3 x 2. After such a matrix has been made we simply use two variables
#       on referring to the row number and the second to the column number.
#
#       Row and columns are interchanged by the following method:
#
#       matrix[column][row] = matrix[row][column]


def transpose(matrix):

    counter = 1

    transposed_matrix = []

    tmp_matrix = []

    while counter <= len(matrix[0]):

        for i in range(len(matrix)):

            tmp_matrix += [0]

        transposed_matrix.append(tmp_matrix)
        tmp_matrix = []
        counter += 1

    for i in range(len(matrix)):

        for j in range(len(matrix[i])):

            transposed_matrix[j][i] = matrix[i][j]

    return transposed_matrix


matrix = [[1, 2], [3, 4]]

print transpose(matrix)

