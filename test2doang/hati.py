import turtle
import time

screen = turtle.Screen()
screen.setup(800, 800)
screen.bgcolor("pink")

t = turtle.Turtle()
t.hideturtle()
t.speed(5)

def draw_heart(x, y, size, color, thickness):
    t.penup()
    t.goto(x, y)
    t.color(color)
    t.pensize(thickness)
    t.pendown()
    t.begin_fill()
    t.left(140)
    t.forward(size)

    for _ in range(200):
        t.right(1)
        t.forward(size * 0.009)

    t.left(120)

    for _ in range(200):
        t.right(1)
        t.forward(size * 0.009)

    t.forward(size)
    t.end_fill()
    t.setheading(0)

hearts = [
    (0, -150, 300, "#FF9999", 5),
    (0, -130, 270, "#FFCCCC", 5),
    (0, -110, 240, "#FF6666", 5),
    (0, -90, 210, "#FFCCCC", 5),
    (0, -70, 180, "#FF99CC", 5),
    (0, -50, 150, "#FFCCFF", 5),
    (0, -30, 120, "#FF6666", 5)
]

for heart in hearts:
    draw_heart(*heart)
    time.sleep(0.5)

turtle.done()
