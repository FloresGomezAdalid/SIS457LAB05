#pragma once
#include<iostream>

using namespace std;
class Escenario
{
public:
	void ColorMap(string _ColorMap);
protected:
	string form = "Cube";
	float size = 10.0f;
	string Material = "Rock";
private:
	string Color;
};

