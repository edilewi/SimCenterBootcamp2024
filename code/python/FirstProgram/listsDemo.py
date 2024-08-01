def extend(lst):
    if lst:
        new_item = lst[-1]+1
        lst.append(new_item)
    else:
        lst = [42]

# We do this in cases where we don't want to mess up the variables and it
# just passes the code inside the function (just the local variables)
def testfunction():
    myList = [1,3,7]
    for i in range(1000):
        extend(myList)
        if myList[-1]>10:
            break
    print(myList)

if __name__ == '__main__':
    testfunction()