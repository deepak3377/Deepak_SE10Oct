# Python program to find the highest 3 values in a dictionary

from heapq import nlargest

My_dict = {'a' : 500, 'b' : 7689, 'c' : 670, 'e' : 98764}
three_largest = nlargest(3, My_dict, key=My_dict.get)

print(three_largest)