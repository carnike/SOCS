import numpy as np        
a = [[1, 2, 1, 4], [2, 1, 4, -1], [2, 1, 1, 3], [3, 1, 2, 2]]

#check whether the matrix is diagonally dominant or not
diagonal = np.diag(np.abs(a)) #dpt total diagonalnya
off_diag = np.sum(np.abs(a), axis = 1) - diagonal
if np.all(diagonal > off_diag):
  print('matrix is diagonally dominant')
else:
  print('matrix is not diagonally dominant')

#initialize Gauss Seidel Iteration
x1 = 0
x2 = 0
x3 = 0
x4 = 0
epsilon = 0.01
converged = False #flag

x_old = np.array([x1, x2, x3])

print('Iteration Results :')
print('=====================')
print('k,     x1,     x2,     x3,       x4')
iteration = [] #grafik
dx_array = [] #grafik
for k in range(1, 30): 
  x1 = (12 - 2*x2 - 1*x3 - 1*x4) / 1
  x2 = (12 - 2*x1 - 4*x3 + 1*x4) / 1
  x3 = (19 - 2*x1 - 1*x2 - 3*x4) / 1
  x4 = (19 - 3*x1 - 1*x2 - 2*x3) / 2
  x = np.array([x1, x2, x3])
  dx = np.sqrt(np.dot(x - x_old, x - x_old))
  print('%d, %.4f, %.4f, %.4f, %.4f' %(k, x1, x2, x3, x4))
  iteration.append(k) #grafik
  dx_array.append(dx) #grafik
  if dx < epsilon:
    converged = True
    break
  x_old = x

if not converged:
    print('Not converge yet, please add the number of iterations')

import matplotlib.pyplot as plt #buat grafik
plt.figure(figsize = (10,8)) #ukuran grafik
plt.plot(iteration, dx_array)
plt.title('Perubahan Nilai dx Tiap iterasi')
plt.xlabel('Iterasi ke')
plt.ylabel('dx')