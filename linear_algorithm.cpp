/*************************
 * Автор: Захаров Никита *
 * Вариант: 6            *
 * ***********************/
 
//Данная программа по формулам вычисляет в радианах углы произвольного треугольника
 
#include <iostream>
#include <cmath>
 
using namespace std;
 
int main() {

  double sideA;
  double sideB;
  double sideC;
  const double numberPI = acos(-1.0);
  
  cout << "Введите значение первой стороны треугольника: ";
  cin >> sideA;
  
  cout << "Введите значение второй стороны треугольника: ";
  cin >> sideB;
  
  cout << "Введите значение третьей стороны треугольника: ";
  cin >> sideC;

  //Объявляем углы треугольника, которые будем считать
  double angleA;
  double angleB;
  double angleC;
  
  angleA = acos( (sideB*sideB + sideC*sideC - sideA*sideA) / (2.0 * sideB * sideC) );
  
  angleB = asin( (sideB * sin(angleA) ) / sideA);
  
  angleC = numberPI - angleA - angleB;

  //Полупериметр треугольника
  double semiperimeter;
  semiperimeter = (sideA + sideB + sideC) / 2.0;

  //Проверка величины угла C отдельной формулой
  double angleCcheck;
  angleCcheck = 2.0 * atan(sqrt( ( (semiperimeter - sideA) * (semiperimeter - sideB) ) / (semiperimeter * (semiperimeter - sideC) ) ) );
  
  cout << "Угол А(рад.): " << angleA << endl
       << "Угол B(рад.): " << angleB << endl
       << "Угол C(рад.): " << angleC << endl
       << "Угол C(рад., проверка): " << angleCcheck << endl;
  
  return 0;
}
