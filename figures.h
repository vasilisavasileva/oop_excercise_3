#pragma once
#include<stdio.h>
#include"figure.h"

class Pentagon : public Figure {
private:
	Vertex v[5];
public:
	Pentagon();
	Pentagon(std::istream& is);
	double calculateArea() const override;
	Vertex calculateCenter() const override;
	void printVertex(std::ostream&) const override;
};

class Hexagon : public Figure {
private:
	Vertex v[6];
public:
	Hexagon();
	Hexagon(std::istream& is);
	double calculateArea() const override;
	Vertex calculateCenter() const override;
	void printVertex(std::ostream&) const override;
};

class Octagon : public Figure {
private:
	Vertex v[8];
public:
	Octagon();
	Octagon(std::istream& is);
	double calculateArea() const override;
	Vertex calculateCenter() const override;
	void printVertex(std::ostream&) const override;
};