#pragma once
#include <iostream>
using namespace std;

class Ball
{
public:
	void speed(float _Speed);
	void material(float _Material);
protected:
	string Color = "Green";
	string Form = "Redonda";
	float size = 1.0f;
private:
	float Speed;
	string Material;
};

