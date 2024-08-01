
from Plotter import *
from Point import *
from Square import *
from Triangle import *
from Circle import *
from Hexagon import *

def problem1():
    x = Plotter() #grab one piece of paper

    #do this
#    shapes = []
#    shapes.append( Square( Point(), 4 ) ) #create a square
#    shapes.append( Square( Point(2,1), 4, color='green') ) #create another square
#    for shape in shapes:
#        x.addObject(shape)

    #or do this
    x.addObject(Square(Point(), 4))  # create a square
    x.addObject(Square(Point(2, 1), 4, color='green'))  # create another square
    x.addObject(Triangle(Point(1,2),side=2,color='yellow'))

    x.plot()
    x.export('problem1.png')

def problem2():
    x = Plotter()
    x.addObject( Square( Point(), 4, fill=True ) )
    x.addObject( Triangle( Point(2,1), 4, color='green' ) )
    x.addObject( Circle( Point(1,2), 1, color='blue', fill=True) )
    x.addObject( Hexagon( Point(3,3), 2, color = 'magenta',fill=False))
    x.plot()
    x.export('problem1.png')


if __name__ == '__main__':
    problem2()
