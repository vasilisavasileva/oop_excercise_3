#pragma once
#include<iostream>

struct Vertex {
	double x, y;
};

std::istream& operator>> (std::istream& is, Vertex& l);
std::ostream& operator<< (std::ostream& os, const Vertex& l);