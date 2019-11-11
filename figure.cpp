#include"figure.h"

std::ostream& operator<< (std::ostream& os, const Figure& f) {
	f.printVertex(os);
	return os;
};