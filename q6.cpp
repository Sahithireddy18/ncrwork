#include<iostream>
#include<math.h>
using namespace std;
class point
{
	int x_coord;
	int y_coord;
public:
	point()
	{
		x_coord=0;
		y_coord=0;
	}
	point(int x,int y)
	{
		x_coord=x;
		y_coord=y;
	}
	friend void add(point p1, point p2);
}
void add( point p1, point p2)
{
		int distance= sqrt((p2.x_coord-p1.x_coord)*(p2.x_coord-p1.x_coord)+(p2.y_coord-p1.y_coord)*(p2.y_coord-p1.y_coord));
		cout<<distance;
}
int main(int argc, char const *argv[])
{
	point p1(2,3), p2(4,5);
	add(p1,p2);
	return 0;
}

