#include"figures.h"
#include<cmath>

	Pentagon::Pentagon() {};
	Pentagon::Pentagon(std::istream& is) {
		Vertex l;
		for (int i = 0; i < 5; i++) {
			is >> l.x >> l.y;
			v[i] = l;
		}
	};

	double Pentagon::calculateArea() const{
		double Area = 0;
		for (int i = 0; i < 5; i++) {
			Area += (v[i].x) * (v[(i + 1)%5].y) - (v[(i + 1)%5].x)*(v[i].y);
		}
		Area *= 0.5;
		return abs(Area);
	};

	Vertex Pentagon::calculateCenter() const {
		Vertex center;
		double xCenter = 0;
		double yCenter = 0;
		for (int i = 0; i < 5; i++) {
			xCenter += v[i].x;
			yCenter += v[i].y;
		}
		xCenter = xCenter / 5;
		yCenter = yCenter / 5;
		center.x = xCenter;
		center.y = yCenter;
		return center;
	};

	void Pentagon::printVertex(std::ostream& os) const {
		os << "Pentagon:\n";
		for (int i = 0; i < 5; i++) {
			os << v[i] << std::endl;
		}
		os << '\b';
	};


	Hexagon::Hexagon() {};
	Hexagon::Hexagon(std::istream& is) {
		Vertex l;
		for (int i = 0; i < 6; i++) {
			is >> l.x >> l.y;
			v[i] = l;
		}
	};

	double Hexagon::calculateArea() const {
		double Area = 0;
		for (int i = 0; i < 6; i++) {
			Area += (v[i].x) * (v[(i + 1) % 6].y) - (v[(i + 1) % 6].x) * (v[i].y);
		}
		Area *= 0.5;
		return abs(Area);
	};

	Vertex Hexagon::calculateCenter() const {
		Vertex center;
		double xCenter = 0;
		double yCenter = 0;
		for (int i = 0; i < 6; i++) {
			xCenter += v[i].x;
			yCenter += v[i].y;
		}
		xCenter = xCenter / 6;
		yCenter = yCenter / 6;
		center.x = xCenter;
		center.y = yCenter;
		return center;
	};

	void Hexagon::printVertex(std::ostream& os) const {
		os << "Hexagon:\n";
		for (int i = 0; i < 6; i++) {
			os << v[i] << std::endl;
		}
		os << '\b';
	};


	Octagon::Octagon() {};
	Octagon::Octagon(std::istream& is) {
		Vertex l;
		for (int i = 0; i < 8; i++) {
			is >> l.x >> l.y;
			v[i] = l;
		}
	};

	double Octagon::calculateArea() const {
		double Area = 0;
		for (int i = 0; i < 8; i++) {
			Area += (v[i].x) * (v[(i + 1) % 8].y) - (v[(i + 1) % 8].x) * (v[i].y);
		}
		Area *= 0.5;
		return abs(Area);
	};

	Vertex Octagon::calculateCenter() const {
		Vertex center;
		double xCenter = 0;
		double yCenter = 0;
		for (int i = 0; i < 8; i++) {
			xCenter += v[i].x;
			yCenter += v[i].y;
		}
		xCenter = xCenter / 5;
		yCenter = yCenter / 5;
		center.x = xCenter;
		center.y = yCenter;
		return center;
	};

	void Octagon::printVertex(std::ostream& os) const {
		os << "Octagon:\n";
		for (int i = 0; i < 8; i++) {
			os << v[i] << std::endl;
		}
		os << '\b';
	};
