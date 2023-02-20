# Write Python program to store marks scored for first test of subject 'Data Structures and Algorithms' for N students. Compute
# i. The average score of class
# ii. Highest score and lowest score of class
# iii. Marks scored by most of the students
# iv. List of students who were absent for the test

def Liner_serch(N):
    for i in N.keys():
        if N.get(i) == 0 :
            print("\nLiner Search:-",i)

def sentinelSearch(N):
    n=0
    last=0
    n=list(N.values())
    # Last element of the array
    a=0
    a=len(n)
    last = n[a-1]
    # Element to be searched is
    # placed at the last index
    n[a- 1] = 0   # absent student
    # # print(arr[n-1])
    a = 0
    for i in range(len(n)):
     if (n[i] == 0):
        a += 1
    # Put the last element back

    n[a-1] = last
    if (i < int(n[a - 1]) or (n[a - 1] == 0)):
        print("\nValue of I - ",i)
        print("\nAbsent Student is ",list(N.keys())[i])
    else:
        print(" All Present ")


print("\n\n\t *** ::::: Subject Data Structures and Algorithms ::::: ***")
N={}
# ///////////// Run time Values Porgrame
# for i in range(int(input("\nEnter the student name:- "))):
#     name=input("\nEnter the Name:- ")
#     score=int(input("\nEnter the Score For Absent student Enter ( 0 ):- "))
#     N[name]=score;
# print(N)
# /////////////// Compile Time Porgrame
N={"A":12,"B":40,"C":45 ,"D":0}
N1=sorted(N.values())
try:
    N1.remove(0)
except:
    print("\nNo one is Absent")
# print(N1)
print("\n1. The average score of class",sum(list(map(int,N.values())))/len(N))
print("\n2. Highest score ",max(N.values()))
print("\n3. Lowest score of class", N1[0])
print("\n4. List of students who were absent for the test")
print("\n Liner Search :- ")
Liner_serch(N)
print("\n Sentinel Search :- ")
sentinelSearch(N)