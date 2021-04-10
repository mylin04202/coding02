```python
import numpy as np
import matplotlib.pyplot as plt

#fig, ax = plt.subplots()
fig = plt.figure(figsize=(8,25))
# function - zoom in and zoom out
def call_back(event):
    axtemp = event.inaxes
    x_min, x_max = axtemp.get_xlim()
    y_min, y_max = axtemp.get_ylim()
    z_min, z_max = axtemp.get_zlim()
    scope = (x_max - x_min) / 2
    if event.button == "up":
        axtemp.set(xlim = (x_min + scope, x_max - scope))*2
        axtemp.set(ylim = (y_min + scope, y_max - scope))
        axtemp.set(zlim = (z_min + scope, z_max - scope))
        print('up')
    elif event.button == 'down':
        axtemp.set(xlim = (x_min - scope, x_max - scope))
        axtemp.set(ylim = (y_min - scope, y_max - scope))
        axtemp.set(zlim = (z_min - scope, z_max - scope))
        print('down')
    fig.canvas.draw_idle()
fig.canvas.mpl_connect('scroll_event', call_back)
fig.canvas.mpl_connect('button_press_event', call_back)
ax = fig.add_subplot(111, projection = '3d')
ax.xaxis.set_major_formatter(plt.NullFormatter())
ax.yaxis.set_major_formatter(plt.NullFormatter())
ax.zaxis.set_major_formatter(plt.NullFormatter())
#t = np.arange(0.0, 3 * np.pi, 0.005)
t = np.arange(0.0, 0.8 * np.pi, 0.01)
x = np.sin(t) *5* (np.e ** np.cos(t)-1 * np.cos(14 * t) -np.sin(t/2) ** 5)
y = np.cos(t) *2*(np.e ** np.cos(t)-5 * np.cos(10 * t) -np.sin(t/5) ** 2)
z = pow(x ** 2 + y ** 2, 1/2) + np.sin(t) * np.pi + t **1.5 * np.pi+5
#plt.figure(figsize=(8,6))
#plt.axis("off")
# def update(*args):
#     for i in range(100):
#         z = z + 1
#     return z
plt.scatter(x, y,z, c = t, cmap = 'magma', marker = ',', linestyle = ':')
plt.title("Noise")
ax.text(4, 8, 8, "myLLin", color='#007aff')
plt.show()
```

