types = input("enter the category [commercial/non comertial]:")
unit = int(input("enter the unit"))
peak = input("is peak threshold found [true/false]")
duedate = input("pay before [true/false]:")

if types == "commercial:":

    if unit <=100:
        amount= unit 