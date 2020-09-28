import numpy as np
import matplotlib.pyplot as plt

datax, datay = np.loadtxt("datos.txt", unpack = True)

fig, ax = plt.subplots()
ax.plot(datax, datay, 'b-o', label="Data")
ax.legend()
ax.set_xlabel("Numero de términos")
ax.set_ylabel("Delta %")


fig.savefig("fig.pdf")
