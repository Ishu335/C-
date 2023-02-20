# a)  Write  a  python  program  to  store  roll  numbers  of  student  in  array  who  attended 
# training  program  in  random  order.  Write  function  for  searching  whether  particular 
# student attended training program or not, using Linear search and Sentinel search. 

def Liner_serch(N,key):
    f=0
    for i in N:
        if i == key :
            f=1
            print("\nLiner Search:-",i)
    if f==1:
        print("\nElement is Found")
    else:
        print("\nElement is Not Found")


def sentinelSearch(N,key):
    n=0
    last=0
    # Last element of the array
    a=0
    a=len(N)
    # print(a)
    last = N[a-1]
    # Element to be searched is
    # placed at the last index
    N[a-1] = key   # absent student
    # # print(arr[n-1])
    a = 0
    for i in range(len(N)):
        if (N[i] != key):
            a=+1
            break
    # Put the last element back
    N[len(N)-1] = last 
    if ((i < a - 1) or (N[a - 1] == key)):
        print("\nSearch Element is NOt Found")
    else:
        print("\nSearch Element is Found")

N=[12,23,34,34,98]
key=23 #Search Elememt
sentinelSearch(N,key)
Liner_serch(N,key)