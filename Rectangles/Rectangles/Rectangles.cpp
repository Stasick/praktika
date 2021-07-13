#include <iostream>
#include <stdio.h>
#include "string"
#include"iostream"


using namespace std;
struct Point {
	int x, y;
};
bool doOverlap(Point l1, Point r1, Point l2, Point r2)
{
	if (l1.x == r1.x || l1.y == r1.y || l2.x == r2.x || l2.y == r2.y)
		return false;
	if (l1.x >= r2.x || l2.x >= r1.x)
		return false;
	if (l1.y >= r2.y || l2.y >= r1.y)
		return false;
	return true;
}
int main()
{
	Point l1 = { 1, 1 }, r1 = { 4, 5 };
	Point l2 = { 4, 5 }, r2 = { 8, 7 };
	if (doOverlap(l1, r1, l2, r2))
		printf("Rectangles Overlap");
	else
		printf("Rectangles Don't Overlap");
	return 0;
}