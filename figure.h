#pragma once
#include<iostream>
#include<cmath>
#include"Vertex.h"


class Figure {
public:
	virtual Vertex calculateCenter() const = 0;
	virtual double calculateArea() const = 0;
	virtual void printVertex(std::ostream&) const = 0;
};

std::ostream& operator<< (std::ostream& os, const Figure& f);
