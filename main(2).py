A= [1, 2, 4, 4, 1, 4, 2, 6, 2, 9]
j=0
while j<len(A):
    B=A[j]
    del A[j]
    C=B not in A 
    if C:
        A.append(B)
        j+=1 
print(A)