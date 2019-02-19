#include <iostream>

class Point
{
	int x;
	int y;
public:
	Point(int _x = 0, int _y = 0) : x(_x), y(_y) {}
	void Print() const { std::cout << x << "," << y << std::endl; }

	//++a
	Point& operator--()
	{
		this->x--;
		this->y--;
		return *this;
	}
	
	//a++
	Point operator--(int)
	{
		Point pt(x, y);

		this->x--;
		this->y--;

		return pt;
	}

	bool operator==(const Point& _p) const
	{
		if (this->x == _p.x && this->y == _p.y)
			return true;
		return false;
	}

	bool operator!=(const Point& _p) const
	{
		return !(*this == _p);
	}

	friend const Point operator-(const Point& arg1, const Point& arg2);

};

const Point operator-(const Point& arg1, const Point& arg2)
{
	return Point(arg1.x - arg2.x, arg1.y - arg2.y);
}



int main()
{
	Point p1(2, 3), p2(2, 3);
	Point p3 = p1 - p2;

	p3.Print();


	return 0;
}