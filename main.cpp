#include<iostream>
#include<vector>
#include "figure.h"
void printMenu(){
  std::cout << "Доступные команды:" << std::endl;
  std::cout << "0. Выход" << std::endl;
  std::cout << "1. Добавить фигуру" << std::endl;
  std::cout << "2. Вызвать функцию для всех фигур" << std::endl;
  std::cout << "3. Удалить фигуру по индексу" << std::endl;
  std::cout << "4. Вывести это меню" << std::endl;
}

int main(){
  Figure* s;
  std::vector<Figure*> v1;
  double x1, x2, x3, x4, x5, x6, x7, x8, y1, y2, y3, y4, y5, y6, y7, y8;
  printMenu();
  while(true){
    std::cout << "Номер: ";
    int k;
    std::cin >> k;

    switch(k){
    case 0:{
      for(size_t i = 0; i < v1.size(); i++){
        delete v1[i];
      }
      return 0;
    }
    case 1:{
      std::cout << "1. Пятиугольник" << std::endl;
      std::cout << "2. Шестиугольник" << std::endl;
      std::cout << "3. Восьмиугольник" << std::endl;
      std::cout << "Номер: ";

      int a;
      std::cin >> a;

      if(a < 1 || a > 3){                                                                                                                                                         std::cout << "Неверный номер" << std::endl;                                                                                                                               break;     
}

      switch(a){                                                                                                                                                                case 1:
        std::cout << "Введите координаты: ";
        std::cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4 >> x5 >> y5;
        s = new Pentagon(x1, y1, x2, y2, x3, y3, x4, y4, x5, y5);
        break;                                                                                                                                                                  case 2:
        std::cout << "Введите координаты: ";
        std::cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4 >> x5 >> y5 >> x6 >> y6;
        s = new Hexagon(x1, y1, x2, y2, x3, y3, x4, y4, x5, y5, x6, y6);
        break;                                                                                                                                                                  case 3:
        std::cout << "Введите координаты: ";
        std::cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4 >> x5 >> y5 >> x6 >> y6 >> x7 >> y7 >> x8 >> y8;
        s = new Octagon(x1, y1, x2, y2, x3, y3, x4, y4, x5, y5, x6, y6, x7, y7, x8, y8);
        break;
      }
      v1.push_back(s);                                                                                                                                                          break;                                                                                                                                                                  }
    case 2:{
      std::cout << "1. Посчитать площадь" << std::endl;
      std::cout << "2. Посчитать центр" << std::endl;
      std::cout << "3. Распечатать площадь" << std::endl;
      std::cout << "4. Распечатать центр" << std::endl;
      std::cout << "5. Распечатать координаты" << std::endl;
      std::cout << "Номер: ";

      int a;
      std::cin >> a;
      if(a < 1 || a > 5){
        std::cout << "Неверный номер" << std::endl;
        break;
      }

      switch(a){
      case 1:{
        for(int i = 0; i < v1.size(); i++){
          (*v1[i]).calculateArea();
        }              
        break;                                                                                                                                                                  }
      case 2:{
        for(int i = 0; i < v1.size(); i++){                                                                                                                                         (*v1[i]).calculateCenter();
        }
        break;
      }
      case 3:{
        for(int i = 0; i < v1.size(); i++){
          (*v1[i]).printArea();                                                                                                                                                   }
        break;
      }
      case 4:{
        for(int i = 0; i < v1.size(); i++){
          (*v1[i]).printCenter();
        }
        break;                                                                                                                                                                  }
      case 5:{
        for(int i = 0; i < v1.size(); i++){
          (*v1[i]).printVertex();
        }
        break;
      }
      }
      break;
    }
    case 3:{                                                                                                                                                                    std::cout << "Индекс: ";                                                                                                                                                  size_t id;
      std::cin >> id;

      if(id < 0 || id > v1.size()-1){
        std::cout << "Индекс выходит за границы массива" << std::endl;
        break;
      }

      std::vector<Figure*> next;
      for(int i = 0; i < v1.size(); i++){
        if(i == id){
          continue;          
        }
        next.push_back(v1[i]);
      }
      std::swap(v1, next);
      break;
    }
    case 4:{
      printMenu();                                                                                                                                                              break;                                                                                                                                                                  }
    }
  }
}
