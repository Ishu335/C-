# In  second  year  computer  engineering  class,  group  A  students  play  cricket,  group  B 
# students play badminton and group C students play football. 
# Write a Python program using functions to compute following: - 
# a) List of students who play both cricket and badminton 
# b) List of students who play either cricket or badminton but not both 
# c) Number of students who play neither cricket nor badminton 
# d) Number of students who play cricket and football but not badminton. 
# (Note- While realizing the group,  duplicate entries should be avoided, Do  not use SET 
# built-in functions)

Cricket=list() # A This set is usd for to store a Student Name how play Cricket
Badmition=list() # B Badmition
Football=list() # C Footboll
Cricket=["A","B","C","D"]
Badmition=["A","B","E","F","G"]
Football=["z","x","v"]
A=[]
Cricket_Badmition=list()
print("\n 1.List of students who play both cricket and badminton:-")
[print(i) for i in Cricket if i in Badmition]
# /////////////////////////////////////////////////////////////////////////////////////////////////////////////
print("\n 2.List of students who play either cricket or badminton but not both :- ",)
[A.append(x) for x in list(set(Cricket+Badmition)) if x not in Badmition ]
[A.append(x) for x in list(set(Cricket+Badmition)) if x not in Cricket ]
print(A) 
# /////////////////////////////////////////////////////////////////////////////////////////////////////////////
print("\n 3.Number of students who play neither cricket or badminton :- ")
print(Football)
print(A)
# /////////////////////////////////////////////////////////////////////////////////////////////////////////////
A=[]
A=Cricket+Football
# A.join(Football)
print("\n 4.Number  of  students  who  play  cricket  and  football  but  not badminton.")
[print(x,end=" ") for x in A if x not in Badmition]  