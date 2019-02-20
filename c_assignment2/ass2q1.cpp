#include<iostream>
using namespace std;

class polar
{
	int radius;

	static int count;
		public:
	polar()
	{
		radius=0;
		count++;
	}
	polar(int r1)
	{
		radius=r1;
		count++;
	}
	~polar()
	{
		count--;
	}	 
	void display()
	{
		cout<<radius<<" "<<count<<"\n";
	}
};
int polar::count;
int main()
{

	polar p, p2;
	p.display();
	polar p1(2);
	{
	polar p3(4);
	p3.display();
	}
	p2.display();
	
	
	
	return 0;
}


	
	

