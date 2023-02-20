# Write a python program to compute following computation on matrix:
# a) Addition of two matrices
# b) Subtraction of two matrices
# c) Multiplication of two matrices
# d) Transpose of a matrix
num1=[[1,2,3],[4,5,6],[7,8,9]] 
num2=[[9,8,7],[6,5,4],[3,2,1]]
num3=[]

# ////////////////////////// Addition of Matrix :- 
for i in range(len(num1)):
    for j in range(len(num2[i])):
        num3.append(num1[i][j]+num2[i][j])
print("\nSum of Set:- ",num3)
# ////////////////////////// Subtraction of Matrix :- 
num3=[]
for i in range(len(num1)):
    for j in range(len(num2[i])):
        num3.append(num2[i][j]-num1[i][j])
print("\n Sub Of Set: -",num3)
# ////////////////////////// Multiplication of Matrix :-  
num3=[]
for i in range(len(num2)):
    for j in range(len(num2[i])):
        num3.append(num2[i][j]*num1[i][j])
print("\nMul of Set:- ",num3)
num3=[]
# ////////////////////////// Union of Matrix :- 
for i in range(len(num2)):
    for j in range(len(num2[i])):
        num3.append(num2[j][i])
num3=[]
# num3=list(map(set,num2+num1));
num3=list(num1+num2)
print("\nUnion:- ",num3)
# //////// Transpose of a matrix:- 
num3=[]
print("\nTranspose of a matrix:- ")
for i in range(len(num2)):
    for j in range(len(num2)):
        print(num2[j][i], " ", end='')
    print()
     