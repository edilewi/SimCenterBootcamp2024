from Shape import *

#square inherits from the shape class
class Square(Shape):

    def __init__(self, ref, side, color='red', fill=False):
        # super says to go to the parent class which is Shape
        # Most of the time super() only really shows up in the constructor
        super().__init__(ref, side, color=color, fill=fill)
        self.n = 4

    #If we had a plot function in here, it wouldn't reference the parent and would instead follow its own