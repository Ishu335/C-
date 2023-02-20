# Write a python program to store roll numbers of student in array who attended training program
# in random order. Write function for searching whether particular student attended training program 
# or not, using Linear search and Sentinel search.
Roll_num=[1,2,3,4,5,6,7,8,9,11,22,44,66,77,88,19]
def search(search_roll):
    F=1
    # Linear search
    for i in range(len(Roll_num)):
        if Roll_num[i] == search_roll:
            print(Roll_num[i])
            F =0
    if F == 0:
        print("\nRoll No is Found")
    else:
        print("\nRoll is Not Found") 

search(int(input("\nEnter The Numbers:- ")))