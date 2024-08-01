class MyDataType():  #a class defines an object type that combines a set of functionality and storing data

    #def defines a function or in this case a functionality of the class

    #None of the functions can assume the other is called first. THe only one that we know will be run first is __init__

    #the one function every class has to have is a constructor
    #it always has the name __init__
    #the first argument in any function within a class is self
    def __init__(self,
                 first = 'Jane',
                 last  = 'Doe',
                 email = 'jane.doe@gmail.com',
                 phone = '(000) 000-0000',
                 yob   = 2000):
        #this is punching in the data and saving it to the object self
        self.first_name = first
        self.last_name  = last
        self.email      = email
        self.phone      = phone
        self.YOB        = yob
        self.experience = []    #You can always have it where you tell others not to modify by putting underscore at beginning
        self.pronouns   = ""

        #raise

    # whenever you create a data type immediately create this function
    # This function should return a string that represents itself.
    def __str__(self):
        s =  "First name:    {}\n".format(self.first_name)
        s += "Last name:     {}\n".format(self.last_name)
        if self.pronouns:
            s += "Pronouns:      {}\n".format(self.pronouns)
        s += "E-mail:        {}\n".format(self.email)
        s += "Phone number:  {}\n".format(self.phone)
        s += "Year of birth: {}\n".format(self.YOB)

        return s

    #new function to define new pronouns
    def setPronouns(self,newPronouns):
        self.pronouns   = newPronouns

    def introduceYourself(self):
        s = "Hi, my name is {} {}.".format(self.first_name,self.last_name)
        print(s)

        if self.experience:
            print("I am an expert in:")
            for exper in self.experience:
                print("  * ",exper)

    def addExperience(self,exper):
        if exper not in self.experience:
            self.experience.append(exper)