#include <iostream>

class Point
{
	int x;
	int y;
public:
	Point(int _x = 0, int _y = 0) :x(_x), y(_y) {}
	
	void Print() const { std::cout << x << "," << y << std::endl; }

	int operator[](int idx) const
	{
		if (idx == 0)
			return x;
		else if (idx == 1)
			return y;
		else
			throw "exception";
	}
};


int main()
{
	Point pt(1, 2);

	pt.Print();

	std::cout << pt[0] << ',' << pt[1] << std::endl;

	return 0;
}