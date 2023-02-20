def binary(data,l,h):
    mid=int(len(data)/2)
    print(mid)
    flag=0
    find=10
    for i in range(len(data)):
        if (data[mid]==find):
            print("\nFind ",data[mid])
        elif(find>mid):
            l=mid+1
            i=0
            for i in range(l,h):
                if data[i]==find:
                    flag=1  
        elif(find<mid):
            h=mid-1
            i=0
            for i in range(l,h):
                if data[i]==find:
                    flag=1 

    if (flag==0):
        print("\nElement not found")
    else:
        print("\nElement  found")



        
        




data=[1,2,3,4,5,6,9,10]
data=sorted(data)
binary(data,0,len(data))