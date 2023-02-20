# Write a python program to store roll numbers of student array who attended training program in sorted order. Write function
#  for searching whether particular student attended training program or not, using Binary search and Fibonacci search

# Binary search
Roll_num=[1,2,3,4,5,6,7,8,9,11,22,44,66,77,88,19]
Roll_num=sorted(Roll_num)
print("\nSorted List:- ",Roll_num)
def search(search_roll):
    f=0
    l=len(Roll_num)
    mid =int(l/2)
    print("\nMId of Roll Numbers:- ",mid)
    print("\nLen of List:- ",l)

    # Binary  search
    if (Roll_num[mid]==search_roll):
       
        print("\n Search Element is Found at  of :-",i) 
    elif (Roll_num[mid+1] <= search_roll):
       
        for i in range(mid+1,l):
            if (search_roll== Roll_num[i]):
                print("\n Search Element is Found at index of :-",i)
                f=1
        if f==0:
            print("\n Search Element is Not Found")
        else:
            print("\n Search Element is Not Found")
    elif  (Roll_num[mid-1] >= search_roll):
        
        for i in range(mid):
            if (Roll_num[i] == search_roll):
                print("\n Search Element is Found at index of :-",i)
                f=1
        if f==0:
            print("\n Search Element is Not Found")
        else:
            print("\n Search Element is Not Found")

search(int(input("\nEnter The Numbers:- ")))