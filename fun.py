i=1
def fun_(i):
    i+=1
    print(i)
    #i*=2
for j in range(10):
    fun_(i+j)
    print(i,end=',')
    i+=2
fun_(i)
