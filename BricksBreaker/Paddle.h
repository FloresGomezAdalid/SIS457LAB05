#pragma once
#include <iostream>
using namespace std;

class Paddle
{
public:
	void speed(float _Speed);
	void material(float _Material);
protected:
	string Color = "Blue";
	string Form = "Ladrillo";
	float size = 1.3f;
private:
	float Speed;
	string Material;
};

