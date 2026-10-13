print ('ticket rei')
day=input('enter the day :')
if day=="sun": 
      age=input('enter the age :')
      age=int(age)
      if age <= 5  :
          print('the price on week day is 50\n')
          print('the price on  weekends is 75\n')
      elif age >= 59:
         print('the price on week days is 120\n')
         print('the price on weekends is 220\n')
      elif (age>5 ,age > 59) :
        print('the price on week day is 100\n')
        print('the price on weekend is 130\n')
else:
    print('not vaild')