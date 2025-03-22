n=1
while (n<=10):
    k=1
    while k<=n:
        print('',end='*')
        k+=1
    print()
    n+=1
print()

n=1
while n<=5:
    k=1
    while k<=n:
        print('*',end='')
        k+=1
    print()
    n+=1
n=4
while n>=1:
    k=1
    while k<=n:
        print('*',end='')
        k+=1
    print()
    n-=1
print()

n=5
while n>=1:
    k=1
    j=1
    while k<n:
        print(' ',end='')
        k+=1
    print(('*'*j))
    j+=1
    n-=1

row = 5
while row >=1:
    clm=1
    while clm<row:
        print()
    count = 1
    clm = 1

    while clm<=row:
        print(' ', end='')
        clm+=1
    
    for i in range(count):
        print('*', end='')
    
    print()
    
    count+=1
    row-=1
    

        
