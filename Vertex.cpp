#include"Vertex.h"

std::istream& operator>> (std::istream& is, Vertex& l) {
	return is >> l.x >> l.y;
};

std::ostream& operator<< (std::ostream& os, const Vertex& l) {
	return os << l.x << ' ' << l.y;
};