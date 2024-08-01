# This is a sample Python script.

# Press Shift+F10 to execute it or replace it with your code.
# Press Double Shift to search everywhere for classes, files, tool windows, actions, and settings.

# Good python file starts with comments explaining what's goin on how to use it etc.

# Next is loading libraries

# Next is defining functions

# Next global variables

# Next code
from print_hi import *
from fib import *

# Press the green button in the gutter to run the script.
# any variable with that starts and ends with __, it is the name of the file
# Why do we want this line if it runs only in here
if __name__ == '__main__':  #This only executes if in main file.
    print_hi('Eddie')

    sol = []
    for i in range(10):
        sol.append(fib(i))
    print(sol)

# See PyCharm help at https://www.jetbrains.com/help/pycharm/
