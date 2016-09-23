#pragma once
#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;
class carta{
	private:
		int num;
		string simbolo;
		string color;
	public:
		carta(int,string,string);
		~carta();
};