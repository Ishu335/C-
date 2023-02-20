# Write a python program to store first year percentage of  students  in  array. Write 
# function for sorting array of floating point numbers in ascending order using 
# a) Selection Sort 
# b) Bubble sort and display top five scores.

def bubble_sort(data):
    for i in range(len(data)):
        for j in range(0,len(data)-1-i):
            if data[i]>data[i+1]:
                data[i+1],data[i]=data[i],data[i+1]
    print("\nBubble Sort displaying whole list:- ",data)
    print("\nBubble sort and display top five scores:- ",data[0:5])

def selection_sort(N):
    for step in range(len(N)):
        min_size=step
        for i in range(step,len(N)):
            if N[i]<N[min_size]:
                N[step],N[min_size]=N[min_size],N[step]
                
    print("\nSelection Sort:- ",data)
data=[10,40,20,60,30,70,90,80]
selection_sort(data)
bubble_sort(data)

