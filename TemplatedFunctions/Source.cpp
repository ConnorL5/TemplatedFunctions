//Connor Lowry
//CIS 1202 501
//May 2, 2021

#include<iostream>
using namespace std;

template <class T>
T half(T);
int half(int);

int main()
{
	double a = 7.0;
	float b = 5.0;
	int c = 3;

	cout << half(a) << endl;
	cout << half(b) << endl;
	cout << half(c) << endl;

	return 0;
}

//Returns half the value of a generic data type
template <class T>
T half(T num)
{
	return (num / 2);
}

//Returns half the value for an integer
int half(int num)
{
	return (round(static_cast<float>(num) / 2));
}