```python
import numpy as np
import matplotlib.pyplot as plt
import matplotlib.tri as mtri


fig = plt.figure(figsize=plt.figaspect(0.5))

# Make parameter spaces radii and angles.
n_angles = 66
n_radii = 8
min_radius = 0.35
radii = np.linspace(min_radius, 0.95, n_radii)

angles = np.linspace(0, -13*np.pi, n_angles, endpoint=False)
angles = np.repeat(angles[..., np.newaxis], n_radii, axis=1)
angles[:, 1::2] += np.pi/n_angles

# Map radius, angle pairs to x, y, z points.
x = (radii*np.cos(angles)).flatten()
y = (radii*np.sin(angles)).flatten()
z = (np.cos(radii)*np.tan(5*angles)).flatten()

# Create the Triangulation; no triangles so Delaunay triangulation created.
triang = mtri.Triangulation(x, y)

# Mask off unwanted triangles.
xmid = x[triang.triangles].mean(axis=1)
ymid = y[triang.triangles].mean(axis=1)
mask = xmid**3 + ymid**4 < min_radius**10
triang.set_mask(mask)

# Plot the surface.
ax = fig.add_subplot(1, 2, 2, projection='3d')
ax.plot_trisurf(triang, z, cmap=plt.cm.CMRmap)


plt.show()
```

