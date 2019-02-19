#include <iostream>

class Array
{
	int *arr;
	int size;
	int capacity;
public:
	Array(int cap = 100) :arr(nullptr), size(0), capacity(cap) 
	{
		arr = new int[capacity];
	}

	~Array()
	{
		delete[]arr;
	}

	void Add(int data)
	{
		if (size < capacity)
			arr[size++] = data;
	}

	int Size() const
	{
		return size;
	}
	
	//return type would not be 100% 'int', depends on data type 
	int operator[](int idx) const
	{
		return arr[idx];
	}

	//if return type is not reference type, then other reference(something like temp_arr[idx])
	//will be returned not this object
	int& operator[](int idx)
	{
		return arr[idx];
	}
};

int main()
{
	Array ar(10);

	ar.Add(10);
	ar.Add(20);
	ar.Add(30);

	std::cout << ar[0] << std::endl;
	std::cout << std::endl;

	const Array& ar2 = ar;
	std::cout << ar2[0] << std::endl;
	std::cout << std::endl;

	ar[0] = 100;

	return 0;

}




