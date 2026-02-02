# Create 2 array, using the MatPlotLib, plot the graph with the content of the two array, with coordinates plotting on X axis and Y axis.
import numpy as np
import matplotlib.pyplot as plt
x=np.array(eval(input("Enter elements for x-axis (in list format): ")))
y=np.array(eval(input("Enter elements for y-axis (in list format): ")))
plt.plot(x,y)
plt.xlabel('X-axis')
plt.ylabel('Y-axis')
plt.title('X vs Y plot')
plt.show()