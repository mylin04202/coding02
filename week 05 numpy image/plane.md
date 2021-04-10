```python
import numpy as np
import matplotlib.pyplot as plt
import matplotlib.tri as mtri

fig = plt.figure(figsize=plt.figaspect(0.5))


# Make a mesh in the space of parameterisation variables u and v
u = np.linspace(0, 5.0 * np.pi, endpoint=True, num=50)
v = np.linspace(-0.5, 0.5, endpoint=True, num=10)
u, v = np.meshgrid(u, v)
u, v = u.flatten(), v.flatten()

# This is the Mobius mapping, taking a u, v pair and returning an x, y, z
# triple
x = (3 + 0.5 * v * np.tan(u / 2.0)) * np.tan(u)
y = (9 + 0.1 * v * np.tan(u / 2.0)) * np.sin(u)
z = 1.8* v * np.sin(u / 2.0)

#三角形参数空间确定三角形 Triangulate parameter space to determine the triangles
tri = mtri.Triangulation(u, v)

#  绘制曲面Plot the surface.  The triangles in parameter space determine which x, y, z
# points are connected by an edge.
ax = fig.add_subplot(1, 1, 1, projection='3d')
ax.plot_trisurf(x, y, z, triangles=tri.triangles, cmap=plt.cm.Spectral)
ax.set_zlim(-1, 1)
```

