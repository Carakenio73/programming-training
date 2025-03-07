A=[4,3,5,76,4,84,90]

largest=A[0]

for i in range(1,len(A)):
    if A[i]>largest:
        largest=A[i]
print(largest)
