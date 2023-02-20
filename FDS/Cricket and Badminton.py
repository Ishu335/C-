# In Second year Computer Engineering class of M students, set A of students play cricket and set B of students play badminton. Write Python program to find and display-
# i. Set of students who play either cricket or badminton or both
# ii. Set of students who play both cricket and badminton
# iii. Set of students who play only cricket
# iv. Set of students who play only badminton
# v. Number of students who play neither cricket nor badminton
class M:
    A=set() # This set is usd for to store a Student Name how play Cricket
    B=set() # Badmition 
    Both=set() #Both 
    Student_name=set() # All Student Name
    no_sport=set() # No sport
    def student_Info():
        for i in range(int(input("\nEnter the Student Numbers:- "))):
            Student_name=str(input("\nEnter The Name:- "))
            Student_sport= str(input("\nEnter The Sport For Cricket (C),Badmition (B) and Both(O) or No sport(N) :- "))
            if Student_sport=="C":
                M.A.add(Student_name)
                # M.display(Cricket)
            elif Student_sport=="B":
                M.B.add(Student_name)
                # M.display(Badminton)
            elif Student_sport=="O":
                M.Both.add(Student_name)
                # M.display(Both)
            elif Student_sport=="N":
                M.no_sport.add(Student_name)    
                # M.display(no_sport)
    # def display(Student):
        print("\n\n\n")
    def display_info():
        a=input("\For Display Infromation Enter (E) and for Exit (Z):-  ")
        if a=="E" or a=="e":
           Value =True
           while (Value):
                print("\n 1. Set of students who play either cricket or badminton or both")
                print("\n 2. Set of students who play both cricket and badminton")
                print("\n 3. Set of students who play only cricket")
                print("\n 4. Set of students who play only badminton")
                print("\n 5. Number of students who play neither cricket nor badminton")
                print("\n 6. For Exit :-  ")
                num =int(input("\n *** Enter The Number:- "))
                match num:
                    case 1:
                        print(M.no_sport)
                    case 2:
                        print(M.Both)
                    case 3:
                        print(M.A)  
                    case 4:
                        print(M.B)
                    case 5:
                        print(M.Both.count())          
                    case 6:
                        exit()
                    case default:
                        print("\n ****Something is Wrong:****")
 
        elif a=="z" or a== "Z":
            exit()
M.student_Info()
M.display_info()