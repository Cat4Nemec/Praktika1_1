#include<stdio.h>
#include<iostream>
class Road {
public:
	double lenght;
	int Width;
};
int main() {
	int a = 132;
	Road road;
	road.lenght = 50;
	road.Width = 60;
	std::cout << a;
	std::cout << "\nLenght:" << road.lenght << std::endl;
	std::cout << "Width:" << road.Width << std::endl;
	return(0);
}
