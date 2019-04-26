#pragma once
#include <iostream>
#include <string>

using namespace std;

class Tiles
{
public:
	string brand;
	int size_h;
	int size_w;
	int price;

	void getData()
	{
		cout << brand << " " << size_h << " " << size_w << " " << price << endl;
	}

	Tiles(string brand, int size_h, int size_w, int price) :brand(brand), size_h(size_h), size_w(size_w), price(price){}
	Tiles(){}
	~Tiles(){}
};