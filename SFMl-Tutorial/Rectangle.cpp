#include "Rectangle.hpp"

Rectangle::Rectangle(int Px, int Py, int c)
{
	x = Px;
	y = Py;

	recColor.r = color[c][0];
	recColor.g = color[c][1];
	recColor.b = color[c][2];
	recColor.a = 255;

	rec.setSize(Vector2f(10, 10));
	rec.setFillColor(recColor);
	rec.setPosition(x, y);
}

Rectangle::Rectangle(int Px, int Py)
{
	x = Px;
	y = Py;

	recColor.r = 255;
	recColor.g = 255;
	recColor.b = 255;
	recColor.a = 255;

	rec.setSize(Vector2f(10, 10));
	rec.setFillColor(recColor);
	rec.setPosition(x, y);
}

Rectangle::~Rectangle()
{
	
}

void Rectangle::changeColor(int c)
{
	recColor.r = color[c][0];
	recColor.g = color[c][1];
	recColor.b = color[c][2];

	rec.setFillColor(recColor);
}

void Rectangle::move(Movement m, int SX, int SY)
{
	if(m.left && x > 0)
	{
		x -= velocity;
	}
	else if(m.right && x < SX)
	{
		x += velocity;
	}

	if(m.up && y > 50)
	{
		y -= velocity;
	}
	else if(m.down && y < SY)
	{
		y += velocity;
	}

	rec.setPosition(x, y);
}