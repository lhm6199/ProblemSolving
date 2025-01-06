import numpy as np

A = np.arange(9)
A.resize(3,3)

B = np.arange(3)
B = B[:,np.newaxis]

print(A)
print(B)

C = A + B

print(C)