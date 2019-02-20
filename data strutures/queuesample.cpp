#include<iostream>
using namespace std;
struct queue
{
	int rear, front;
	int *a;
};
class queueclass
{
	public:
	int size;
	struct queue q;
	queueclass()
	{
		q.rear=q.front=-1;
		q.a=NULL;
	}
	int getsize()
	{
		cout<<"enter size";
		cin>>size;
		q.a= new int[size];
		return size;
	}
	bool overflow()
	{
		if(q.rear==size)
			return true;
		else
			return false;
	}
	bool underflow()
	{
		if(q.front==-1 && q.rear==-1)
			return 1;
		else
		 	return 0;
	}	 
	void enqueue(int a)
	{
		if(overflow())
			cout<<"queue is full";
		
		else 
		{
		
			q.a[++q.rear]=a;
			if(q.front==-1)
				q.front++;
		}
	}
	void dequeue()
	{
		if(underflow())
			cout<<"queue is empty";
		else
		{
			q.front++;
			if(q.front==q.rear)
				q.rear=q.front=-1;
		}
	}

	void display()
	{
		for(int i=q.front;i<=q.rear;i++)
		{
			cout<<q.a[i];
		}
	}
};
int main()
{
	queueclass qs;
	int l;
	int k=qs.getsize();
	for(int i=0;i<k;i++)
	{
		cin>>l;
		qs.enqueue(l);
	}
	qs.dequeue();
	qs.dequeue();
	qs.display();
	return 0;
}
	
			   
		
		

