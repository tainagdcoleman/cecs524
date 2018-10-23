import numpy as np
import matplotlib.pyplot as plt 

filename = "histogram.txt"
arr =  [] 


with open(filename) as fp:
    for line in fp.readlines():
        arr.append(int(line))
    
# x = list(range(len(arr)))

# fig, (ax, ax2) = plt.subplots(2,1,sharex = True)
# ax.bar(x, height=arr)
# ax2.bar(x, height=arr)

# ax.set_ylim(0,133420986)
# ax2.set_ylim(2014063014 - 10000,2014063014)

# plt.show()

x = np.linspace(start = -3.40282e+38, stop = 3.40282e+38, num = len(arr) + 1)
#x = np.linspace(start = -100, stop = 100, num = len(arr) + 1)

x_label = []
for i in range(len(x) - 1):
    x_label.append(f'{format(x[i], ".2e")} - {format(x[i+1], ".2e")}')


plt.bar(x_label , height = arr)
plt.xticks(rotation=90)
plt.tight_layout()
plt.yscale('log')
plt.show() 