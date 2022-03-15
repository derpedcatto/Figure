#pragma once
#include <iostream>

class Figure abstract
{
public:
	virtual void Print() const = 0;
	virtual double S() const = 0;
	virtual double P() const = 0;
};