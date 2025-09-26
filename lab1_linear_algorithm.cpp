/*************************
 * Автор: Захаров Никита *
 * Вариант: 6            *
 * ***********************/

//Данная программа по формулам вычисляет в радианах углы произвольного треугольника

#include <iostream>
#include <cmath>

using namespace std;

int main() {

  double side_a = 3.847;
  double side_b = 5.33;
  double side_c = 7.167;
  const double number_PI = acos(-1.0);

  cout << "Дан треугольник с тремя сторонами, равными 3.847 см, 5.33 см и 7,167 см";

  double angle_A = acos( (side_b*side_b + side_c*side_c - side_a*side_a) / (2 * side_b * side_c) );

  double angle_B = asin( (side_b * sin(angle_A) ) / side_a);

  double angle_C = number_PI - angle_A - angle_B;

  double p = (side_a + side_b + side_c) / 2;
  // p - полупериметр треугольника

  double angle_C_check = 2 * atan(sqrt( ( (p - side_a) * (p - side_b) ) / (p * (p - side_c) ) ) );

  cout << "Угол А(рад.):" << angle_A << endl;
  cout << "Угол B(рад.):" << angle_B << endl;
  cout << "Угол C(рад.):" << angle_C << endl;
  cout << "Угол C(рад., проверка):" << angle_C_check << endl;

  return 0;
}