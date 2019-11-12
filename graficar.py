import numpy as np
import matplotlib.pylab as plt


i1 = np.loadtxt("impli1.dat")
i2 = np.loadtxt("impli2.dat")
i3 = np.loadtxt("impli3.dat")
e1 = np.loadtxt("euler1.dat")
e2 = np.loadtxt("euler2.dat")
e3 = np.loadtxt("euler3.dat")
x1 = e1[:,0]
y1 = e1[:,1]
x2 = e2[:,0]
y2 = e2[:,1]
x3 = e3[:,0]
y3 = e3[:,1]

x4 = i1[:,0]
y4 = i1[:,1]
x5 = i2[:,0]
y5 = i2[:,1]
x6 = i3[:,0]
y6 = i3[:,1]

plt.figure(figsize=(12,4))
plt.subplot(1,2,1)
plt.plot(x1,y1)
plt.plot(x2,y2)
plt.plot(x3,y3)
plt.subplot(1,2,2)
plt.plot(x4,y4)
plt.plot(x5,y5)
plt.plot(x6,y6)
plt.savefig("primergrado.png")