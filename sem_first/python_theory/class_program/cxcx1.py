roll_no=0
name=''
total=0


def student_detail():
    global roll_no
    roll_no=int(input('enter the roll no:\n'))
    return 
def subdetail():
    global sub1,sub2,sub3
    sub1=int(input('enter the sub1:\n'))
    sub2=int(input('enter the sub2:\n'))
    sub3=int(input('enter the sub3:\n'))
    return
def totalmk():
    global total
    total=int(total)
    total=sub1+sub2+sub3
    return
def getaverage():
    average=total/3
    return
def per():
    percent=total/300*100

    if percent<=40:
        print('fail')
    elif percent >40 and percent<=60:
        print('second class')
    elif percent>60 and percent<=75:
        print('first class')
    else:
        print('distinction')
        return
student_detail()
subdetail()
totalmk()
getaverage()
per()
for i in range(2,5):
    student_detail()
    subdetail()
    totalmk()
    getaverage()
    per()
    
    