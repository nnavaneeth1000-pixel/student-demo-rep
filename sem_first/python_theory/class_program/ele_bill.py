print('ele bill')
chocice=input('enter your choice\n 1.commertial\n 2.non commertial\n')
if chocice=='commertial':
    unit = int (input('enter the unit'))
    if(unit>0 and unit<100):
        price=unit*10
    elif(unit>101 and unit<300):
        print=unit*12
    else:
        print=unit*15
        threshold=input('is threshold found[yes/no]:')
    if threshold == 'yes':
        price=price+100
    else:
        unit
elif chocice== 'non commertial':
       unit = int (input('enter the unit'))
       if(unit>0 and unit<100):
           price=unit*10
       elif(unit>101 and unit<300):
           print=unit*12
       else:
           print=unit*15
           threshold=input('is threshold found[yes/no]:')
       if threshold == 'yes':
           price=price+100
       else:
           unit
        