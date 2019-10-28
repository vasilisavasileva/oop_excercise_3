#include<iostream>
#include<vector>
#include<cmath>



struct Vertex{
double x, y;
};

double side(Vertex l1, Vertex l2){
double length;
length = sqrt((pow((l2.x - l1.x), 2)) - (pow((l2.y - l1.y), 2)));
return length;
}

class Figure{
 protected:
  std::vector<Vertex> v;
  Vertex Center;
  double Area;
  double xCenter, yCenter;
 public:
  virtual void calculateCenter() = 0;
  virtual void calculateArea() = 0;
  void printArea(){
    std::cout << Area << std::endl;
  }
  void printCenter(){
    std::cout << Center.x << ' ' << Center.y << std::endl;
  }
  virtual void printVertex() = 0;
};
  class Pentagon: public Figure{
  public:

    Pentagon(){};
    Pentagon(double X1, double Y1, double X2, double Y2, double X3, double Y3, double X4, double Y4, double X5, double Y5){
      Vertex l;
      l.x = X1;
      l.y = Y1;
      v.push_back(l);
      l.x = X2;
      l.y = Y2;
 v.push_back(l);                                                                                                                                                             l.x = X3;                                                                                                                                                                 l.y = Y3;                                                                                                                                                                 v.push_back(l);                                                                                                                                                           l.x = X4;
l.y = Y4;                                                                                                                                                                 v.push_back(l);                                                                                                                                                           l.x = X5;
      l.y = Y5;
      v.push_back(l);
    }
                                                                                                                                                                              void calculateArea()override{
      double a = side(v[0], v[1]);
      for(int i = 2; i < v.size(); i++){                                                                                                                                          if(a > side(v[0], v[i]))
          a = side(v[0], v[i]);
      }               
                                                                                                                                                                              Area = ((pow(a, 2)/4)*(sqrt(25 + (10*sqrt(5)))));
    }
                                                                                                                                                                              void calculateCenter() override{                                                                                                                                            for(int i = 0; i < v.size(); i++){                                                                                                                                          xCenter = xCenter + v[i].x;                                                                                                                                               yCenter = yCenter + v[i].y;
      }
      xCenter = xCenter/v.size();                                                                                                                                               yCenter = yCenter/v.size();
    }
                                                                                                                                                                              void printVertex() override{
      Vertex l;                                                                                                                                                                   std::cout<<"Pentagon :"<<std::endl;
      for(int i = 0; i < v.size(); i++){
        l = v[i];
        std::cout << l.x << ' ' << l.y << std::endl;
      }
     }       
  class Hexagon: public Figure{
  public:                                                                                                                                                                     Hexagon(){};                                                                                                                                                              Hexagon(double X1, double Y1, double X2, double Y2, double X3, double Y3, double X4, double Y4, double X5, double Y5, double X6, double Y6){                                Vertex l;                                                                                                                                                                 l.x = X1;                                                                                                                                                                 l.y = Y1;
      v.push_back(l);                                                                                                                                                           l.x = X2;                                                                                                                                                                 l.y = Y2;
      v.push_back(l);                                                                                                                                                           l.x = X3;                                                                                                                                                                 l.y = Y3;                                                                                                                                                                 v.push_back(l);                                                                                                                                                           l.x = X4;                                                                                                                                                                 l.y = Y4;                                                                                                                                                                 v.push_back(l);                                                                                                                                                           l.x = X5;
      l.y = Y5;
      v.push_back(l);
      l.x = X6;                                                                                                                                                                 l.y = Y6;                                                                                                                                                                 v.push_back(l);
    }
                                                                                                                                                                              void calculateArea()override{                                                                                                                                               double a = side(v[0], v[1]);                                                                                                                                       \
       for(int i = 2; i < v.size(); i++){
        if(a > side(v[0], v[i]))                                                                                                                                                    a = side(v[0], v[i]);                                                                                                                                                       }                                                                                                                                                                   Area = ((pow(a,2)/2)*(3*sqrt(3)));                                                                                                                                      }
                                                                                                                                                                              void calculateCenter() override{                                                                                                                                            for(int i = 0; i < v.size(); i++){                                                                                                                                          xCenter = xCenter + v[i].x;                                                                                                                                               yCenter = yCenter + v[i].y;                                                                                                                                             }
      xCenter = xCenter/v.size();
      yCenter = yCenter/v.size();                                                                                                                                             }
                                                                                                                                                                              void printVertex() override{                                                                                                                                                Vertex l;                                                                                                                                                                   std::cout<<"Hexagon:"<<std::endl;                                                                                                                                       for(int i = 0; i < v.size(); i++){                                                                                                                                          l = v[i];                                                                                                                                                                 std::cout << l.x << ' ' << l.y << std::endl;                                                                                                                            }
    }
  };

                                                                                                                                                                            class Octagon: public Figure{                                                                                                                                             public:
    Octagon(){};                                                                                                                                                              Octagon(double X1, double Y1, double X2, double Y2, double X3, double Y3, double X4, double Y4, double X5, double Y5, double X6, double Y6, double X7, double Y7, dou\
ble X8, double Y8){                                                                                                                                                             Vertex l;
      l.x = X1;
      l.y = Y1;
      v.push_back(l);
      l.x = X2;                                                                                                                                                                 l.y = Y2;                                                                                                                                                                 v.push_back(l);                                                                                                                                                           l.x = X3;                                                                                                                                                                 l.y = Y3;                                                                                                                                                                 v.push_back(l);                                                                                                                                                           l.x = X4;                                                                                                                                                                 l.y = Y4;
      v.push_back(l);
      l.x = X5;
      l.y = Y5;
      v.push_back(l);                                                                                                                                                           l.x = X6;                                                                                                                                                                 l.y = Y6;
      v.push_back(l);                                                                                                                                                           l.x = X7;
      l.y = Y7;                                                                                                                                                                 v.push_back(l);
      l.x = X8;
      l.y = Y8;
      v.push_back(l);
    }
    void calculateArea()override{                                                                                                                                               double a = side(v[0], v[1]);                                                                                                                                       \
       for(int i = 2; i < v.size(); i++){                                                                                                                                         if(a > side(v[0], v[i]))                                                                                                                                                    a = side(v[0], v[i]);                                                                                                                                                       }                                                                                                                                                                   Area = (pow(a, 2)*2*(sqrt(2) + 1));
    }
                                                                                                                                                                              void calculateCenter() override{
      for(int i = 0; i < v.size(); i++){                                                                                                                                          xCenter = xCenter + v[i].x;                                                                                                                                               yCenter = yCenter + v[i].y;
      }
      xCenter = xCenter/v.size();
      yCenter = yCenter/v.size();                                                                                                                                             }
                                                                                                                                                                              void printVertex() override{
      Vertex l;            
        std::cout<<"Octagon:"<<std::endl;
      for(int i = 0; i < v.size(); i++){
        l = v[i];
        std::cout << l.x << ' ' << l.y << std::endl;
      }
    }
  };
