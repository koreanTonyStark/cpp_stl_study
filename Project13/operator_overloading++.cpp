#include <iostream>

class Point
{
	int x;
	int y;
public:
	Point(int _x = 0, int _y = 0) :x(_x), y(_y) {}
	void Print() const { std::cout << x << ',' << y << std::endl; }
	
	const Point& operator++()
	{
		(this->x)++;
		(this->y)++;
		return *this;
		
	}

	const Point operator++(int)
	{
		Point pt(x, y);
		++x;
		++y;
		return pt;
	}
	
	
};

int main()
{
	Point p1(2, 3), p2(2, 3);
	Point result;

	result = ++p1;
	p1.Print();
	result.Print();

	result = p2++;
	p2.Print();
	result.Print();
	
	return 0;
}