string=""
n=int(input())
for i in range(0,n): 
    a=""
    b=""
    string=input()
    for j in range(0,len(string)):
        if j%2==0:
            a=a+string[j]    
        elif j%2!=0:
            b=b+string[j]
    print(a+" "+b)
        
    
