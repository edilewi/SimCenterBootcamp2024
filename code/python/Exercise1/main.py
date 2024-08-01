# This is a sample Python script.

from MyDataType import *



if __name__ == '__main__':
    #Here, creates two instances in my data type
    student1 = MyDataType()
    student2 = MyDataType(first='John',email='john.doe@hotmail.com')

    #Clean way of changing data in object
    student1.setPronouns("they/them")
    student2.setPronouns("he/him")

    #Dirty way of changing data in object
    student1.experience.append("Python programming")
    student2.addExperience("Matlab programming")

    # how does the student know to print itself, every data type is expected to have a function to show itself as a string
    # sloppy printing statement
    print(student1)
    print(student2)

    student1.introduceYourself()
    student2.introduceYourself()
