b=0
for a in "python is a language":
    if a == " ":
       print(a)
       a=b-1
    else:
       b+=1
       print(a)
print(b)
   