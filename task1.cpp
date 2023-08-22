#include<iostream>
using namespace std;
class Rectangle{
	private:
		int length,breadth;
		public:
		Rectangle(int length,int breadth)
		{
			this->length=length;
			this->breadth=breadth;
		}
		void display()
		{
			int area,perimeter;
			area=length*breadth;
			perimeter=2*(length+breadth);
			cout<<area<<endl<<perimeter;
		}
};
int main()
{
	int x,y;
	cin>>x>>y;
	Rectangle R1(x,y);
	R1.display();	
}
