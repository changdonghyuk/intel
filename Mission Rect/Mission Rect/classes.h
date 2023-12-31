
#pragma once
#include <iostream>
#define MIN(x,y) (((x)<(y))? (x):(y))
#define MAX(x,y) (((x)>(y))? (x):(y))
#define	ABS(x)	(((x)<0)?(-(x)):(x))
class Point
{
private:
public:
	int x;
	int y;
	Point* p1 = NULL;

	Point(int x1 = 0, int y1 = 0) : x(x1), y(y1) 
	{
		std::cout << "Point 积己 ("<< x <<","<< y <<") \n";
	}
	~Point()
	{
		std::cout << "Point 家戈 ("<< x <<","<< y <<") \n";
		if (p1 != NULL)delete p1;  // new 皋葛府 庆力 
	}
	double Dist(Point p);		// Distance
	void Show(const char* s = NULL);  // View Current Point, s:Point name
	void ShowEx(const char* s = NULL);  // View Current Point, no Linefeed

	Point& operator+(Point p);
};

class Rect
{
public:
	Point p1, p2;
	Point LL, LR, UL, UR;
	int x1, x2, y1, y2;


	void Init()
	{
	LL = Point(MIN(p1.x, p2.x), MIN(p1.y, p2.y));
	LR = Point(MAX(p1.x, p2.x), MAX(p1.y, p2.y));
	UL = Point(MIN(p1.x, p2.x), MAX(p1.y, p2.y));
	UR = Point(MAX(p1.x, p2.x), MAX(p1.y, p2.y));
	}
	Rect(Point pp1, Point pp2) : p1(pp1), p2(pp2) ,
		x1(pp1.x),y1(pp1.y),x2(pp2.x),y2(pp2.y) 
	{
		Init();
	}
	
	Rect(int xx1 = 0, int yy1 = 0, int xx2 = 0, int yy2 = 0)
	{
		
		x1 = xx1, y1 = yy1;
		x2 = xx2, y2 = yy2;
		p1 = Point(x1, y1);
		p2 = Point(x2, y2);
		Init();
	}

	double Area();
	Rect& Show(const char* s);  // RECT(P1(x1,y1), P2(x2,y2))
	Rect& operator+(Rect r);
	Rect& operator-(Rect r);
	double operator*(Rect r);
};