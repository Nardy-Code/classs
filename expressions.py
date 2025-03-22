import math
print(math.exp(9))
degree=45
radian=degree*math.pi/180
sin_value=math.sin(radian)
x=math.sqrt(2)/2
print(sin_value,x)
x=100
y=10
z=math.sin(math.pi/6)
print(z)



#print(4/3*3.14*5**3)
price=24.95
discount=0.4
ship_1st=3
ship_next=0.75
num_tot=60
book_cost=(price-(price*0.4))*60   #this is the cost of the books excluding the shipping cost
ship_cost=ship_1st+ship_next*(num_tot-1)   #this is a shipping cost
total_cost=book_cost+ship_cost
print(total_cost)


v1=8+(15/60)   #first pace.. minutes per mile
v2=7+12/60
v3=8+15/60
m1=1
m2=3
m3=1
t1=v1*m1
t2=v2*m2
t3=v3*m3
tot_time=t1+t2+t3
init_time=6*60+52
current_time_hour=int((init_time+tot_time)//60)
current_time_minute=int((init_time+tot_time)%60)
print('He,approximately,will reach home at ',end="")
print(current_time_hour,end="")
print(':',end="")
print(current_time_minute,end="")
print('am')



#print(2*(3/1))
#babe_1='monalisa'
#babe_3=' is '
#babe_2='obviously me.  ';
#print(babe_1+babe_3+babe_2)
 #This is called string concatenation
#print(3*babe_2 )
#y=1
#print(y);
#x=12
#print(xy)

type(2)   #the function type is, well, 'type' and the argument is *2* and the return value is *int*
int('2345')
float('3')   #these are called casting and they casted the arguments into integer,float and string respectively
str(2354)