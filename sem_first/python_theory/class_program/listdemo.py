marks=['gugugaga',50,50,55,60,50]  
#declares an list 'marks' to store mark of gugugaga
my_mark=[]
# dynamic initialization
for number in range (5):
    newMark=int(input("enter the mark:"))
    my_mark.append(newMark)
print("list elements are:")
for i in range (len(my_mark)):
    print(my_mark[i])
for i in range(len(my_mark)):
    sum=my_mark
