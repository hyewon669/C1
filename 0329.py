##import random as rd
##a=rd.random()+1
##print(a)

##from random import *
##import turtle
##t=turtle.Turtle()
##t.shape('turtle')
##
##t.circle(randint(1,100))
##t.dot(randint(1,20))
##t.pensize(randint(1,10))
##t.setheading(randint(0,360))
##t.forward(randint(0,100))
##t.backward(randint(0,300))
##t.setx(randint(0,300))
##t.sety(randint(0,300))
##turtle.done()

import turtle
from random import *

turtle.title("거북이 경주")
turtle.bgcolor("green")

line = turtle.Turtle()
line.speed(10)
line.penup()
line.goto(-380,240)

line.write('1')
line.right(90)
line.forward(20)
line.pendown()
line.forward(500)
line.penup()
line.backward(520)
line.left(90)
line.forward(300)

line.write('2')
line.right(90)
line.forward(20)
line.pendown()
line.forward(500)
line.penup()
line.backward(520)
line.left(90)
line.forward(300)

line.write('3')
line.right(90)
line.forward(20)
line.pendown()
line.forward(500)
line.penup()
line.backward(520)
line.left(90)
line.forward(300)

t1 = turtle.Turtle(shape='turtle')
t1.color("hotpink")
t1.penup()
t1.goto(-400,200)
t1.pendown()
t2 = turtle.Turtle(shape = 'turtle')
t2.color("plum")
t2.penup()
t2.goto(-400,100)
t2.pendown()
t3 = turtle.Turtle(shape='turtle')
t3.color("pink")
t3.penup()
t3.goto(-400,0)
t3.pendown()
t4 = turtle.Turtle(shape='turtle')
t4.color("crimson")
t4.penup()
t4.goto(-400,-100)
t4.pendown()

t1.right(360)
t2.right(360)
t3.right(360)
t4.right(360)
t1.forward(randint(1,450))
t2.forward(randint(1,450))
t3.forward(randint(1,450))
t4.forward(randint(1,450))

t1.forward(randint(1,300))
t2.forward(randint(1,300))
t3.forward(randint(1,300))
t4.forward(randint(1,300))

t1.forward(randint(1,200))
t2.forward(randint(1,200))
t3.forward(randint(1,200))
t4.forward(randint(1,200))
turtle.done()
