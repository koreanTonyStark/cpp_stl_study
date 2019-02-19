#include <iostream>

struct FuncObject
{
public:
	void operator()(int arg) const
	{
		std::cout << "integer: " << arg << std::endl;
	}
	void operator()(int arg1, int arg2) const
	{
		std::cout << "integer: " << arg1 << "," << arg2 << std::endl;
	}
};

void Print1(int arg)
{
	std::cout << "integer: " << arg << std::endl;
}

int main()
{
	FuncObject print;

	print(10);
	print(10, 20);

	//explicit call for operator() function
	print.operator()(10);
	print.operator()(10, 20);

	//temporal object to function call operator()
	FuncObject()(10);
	FuncObject()(10,20);

	//temporal object's explicit function call for operator()
	FuncObject().operator()(10);
	FuncObject().operator()(10, 20);


	return 0;
}