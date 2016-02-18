#pragma once

class Vector {
public:
	float x, y;

	
};

class Point {
public:
	Point AddVector(Vector v);

	float x, y;
};

Vector operator-(Point a, Point b);