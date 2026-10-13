mark1 = int(input("Enter marks for subject 1: "))
mark2 = int(input("Enter marks for subject 2: "))
mark3 = int(input("Enter marks for subject 3: "))

if mark1 < 0 or mark1 > 100 or mark2 < 0 or mark2 > 100 or mark3 < 0 or mark3 > 100:
    print("Invalid marks")
else:
    total = mark1 + mark2 + mark3
    average = total / 3
    percentage = (total / 300) * 100

    print("Total:", total)
    print("Average:", average)
    print("Percentage:", percentage)

    if percentage >= 70:
        print("Grade: DISTINCTION")
    elif percentage >= 60:
        print("Grade: FIRST CLASS")
    elif percentage >= 40:
        print("Grade: SECOND CLASS")
    else:
        print("Grade: FAIL")
