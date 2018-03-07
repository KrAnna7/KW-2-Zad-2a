#include <iostream>

using namespace std;
class Point
{
	private:
		float x,y;
	public:
		void setX(float x)
		{
			this->x=x;
		}
		void setY(float y)
		{
			this->y=y;
		}
		float getX()
		{
			return x;
		}
		float getY()
		{
			return y;
		}
		void move(float x,float y)
		{
			this->x+= x;
			this->y+=y;
		}
		
};

int main(int argc, char** argv) {
	Point p =Point();
	p.setX(5.5);
	p.setY(8);
	cout<<p.getX()<<", "<<p.getY()<<endl;
	p.move(1.0,2.0);
	cout<<p.getX()<<", "<<p.getY()<<endl;
	return 0;
}
