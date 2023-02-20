

def partiations(data,low,high):
    pi=data[high]
    i=low-1
    for j in range(low,high):
        if data[j]<=pi:
            i=i+1
            data[i],data[j]=data[j],data[i]
    data[i+1],data[high]=data[high],data[i+1] 
    return i+1       
def quick_sort(data,l,h):
    if l<h:
        pi=partiations(data,l,h)
        quick_sort(data,l,pi-1)
        quick_sort(data,pi+1,h)

data=[1,7,5,9,2,4,0]
size=len(data)
quick_sort(data,0,size-1)
print(data)

