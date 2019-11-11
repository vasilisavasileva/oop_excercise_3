#include"figure.h"
#include"figures.h"
#include<stdio.h>
#include<vector>

void printMenu() {
	std::cout << "��������� �������:" << std::endl;
	std::cout << "0. �����" << std::endl;
	std::cout << "1. �������� ������" << std::endl;
	std::cout << "2. ������� ������� ��� ���� �����" << std::endl;
	std::cout << "3. ������� ������ �� �������" << std::endl;
	std::cout << "4. ������� ��� ����" << std::endl;
}

int main() {
	setlocale(LC_ALL, "rus");
	Figure* s;
	std::vector<Figure*> v1;
	printMenu();
	while (true) {
		std::cout << "�����: ";
		int k;
		std::cin >> k;
		std::vector<Figure*> next;

		switch (k) {
		case 0:
			for (size_t i = 0; i < v1.size(); i++) {
				delete v1[i];
			}
			return 0;

		case 1:
			std::cout << "1. ������������" << std::endl;
			std::cout << "2. �������������" << std::endl;
			std::cout << "3. ��������������" << std::endl;
			std::cout << "�����" << std::endl;
			int a;
			std::cin >> a;
			if (a < 1 || a > 3) {
				std::cout << "�������� �����" << std::endl;
				break;
			}
			switch (a) {
			case 1:
				std::cout << "������� ����������: ";
				s = new Pentagon(std::cin);
				break;
				case 2:
					std::cout << "������� ����������: ";
					s = new Hexagon(std::cin);
				break;
				case 3:
					std::cout << "������� ����������: ";
					s = new Octagon(std::cin);
			}
			v1.push_back(s);
		case 2:
			std::cout << "1. ��������� �������" << std::endl;
			std::cout << "2. ��������� �����" << std::endl;
			std::cout << "3. ����������� ����������" << std::endl;
			std::cout << "�����: ";

			int b;
			std::cin >> b;
			if (b < 1 || b > 5) {
				std::cout << "�������� �����" << std::endl;
				break;
			}


			switch (b) {
			case 1:
				std::cout << "Areas:" << std::endl;
				for (int i = 0; i < v1.size(); i++) {
					std::cout << (*v1[i]).calculateArea() << std::endl;
				}
				break;

			case 2:
				std::cout << "Centers:" << std::endl;
				for (int i = 0; i < v1.size(); i++) {
					std::cout << (*v1[i]).calculateCenter() << std::endl;
				}

				break;

			case 3:
				for (int i = 0; i < v1.size(); i++) {
					(*v1[i]).printVertex(std::cout);
					std::cout << std::endl;
				}
				break;
			}
			break;

		case 3:
			std::cout << "������: \n";
			size_t id;
			std::cin >> id;

			if (id < 0 || id > v1.size() - 1) {
				std::cout << "������ ������� �� ������� �������" << std::endl;
				break;
			}
			delete v1[id];
			v1.erase(v1.begin() + id);
			break;


		case 4:
			printMenu();
			break;
		}
	}
}

