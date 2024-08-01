import matplotlib.pyplot as plt

class Plotter():

    def __init__(self):
        self.clear()

    def _draw(self, ax):
        ax.set_title('Shapes')
        for obj in self.objects:
            #goes into shape plot
            obj.plot(ax)
        ax.set_aspect('equal')

    def plot(self):
        #point to existing axes
        ax = plt.gca()
        self._draw(ax) #underline so that user knows not to use it
        plt.show()

    def addObject(self, obj):
        self.objects.append(obj)

    def clear(self):
        #clearing takes the objects in the memory and creates an empty list
        self.objects = []

    def export(self, filename):
        self._draw(plt.gca())
        plt.savefig(filename)
        # the next line should not be necessary but jupyter-notebook is doing weird stuff otherwise
        plt.clf()
