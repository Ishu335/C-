serch_list=[2,3,6,0,9,1]
def Sentinel_serch(search_num):
    f=0
    for i in serch_list:
        if i ==search_num:
            f=1
            break
    if f==0:
        print("\n Search Element is Not Found")
    else:
        print("\n Search Element is Found")
Sentinel_serch(int(input("\nEnter the Number:- ")))