# you need to process a single students data 
#name , rollno,mobileno,email,5 sub mark, and get sub total
#must be implimented using nested lists
#inculd <stdio.h>
def readdata():
    listt=[]
    name=input("enter name:")
    rollno=int (input("enter roll no:"))
    email=("enter email:")
    phone=int(input("enter phone number:"))
    listt.append(name)
    listt.append(rollno)
    listt.append(email)
    listt.append(phone)
    
    listtt=[]
    sub1=int(input("enter sub 1 mark:"))
    sub2=int(input("enter sub 2 mark:"))
    sub3=int(input("enter sub 3 mark:"))
    sub4=int(input("enter sub 4 mark:"))
    sub5=int(input("enter sub 5 mark:"))
    total=sub1+sub2+sub3+sub4+sub5
    listtt.append(sub1)
    listtt.append(sub2)
    listtt.append(sub3)
    listtt.append(sub4)
    listtt.append(sub5)
    listtt.append(total)
def totalmark():
    