﻿#include <iostream>
#include "Classes.h"

int main()
{
	/*Rect r1;
	Rect r2(10, 10, 30, 30);
	Rect r3(Point(20, 20), Point(40, 40));
	r1.Show("R1");
	r2.Show("R2");
	r3.Show("R3");

	
	double d1 = (r2 + r3).Show("[R2] + [R3] ").Area(); printf("면적은 %2.f \n", d1);
	double d2 = (r2 - r3).Show("[R2] - [R3] ").Area(); printf("면적은 %2.f \n", d2);
	double d3 = (r3 - r2).Show("[R3] - [R2] ").Area(); printf("면적은 %2.f \n", d3);
	double d4 = (r3 * r2); printf("[R3]  x [R2] = 면적은 %2.f \n", d4);*/

	Point p1(10, 10);
	Point p2(20, 20);
	p1.Show("_P");
	p2.Show("_P");
	(p1 + p2).Show("P1+P2");
}