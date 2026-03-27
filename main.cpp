// Complete the following program.
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    double result = 1;
  int power;
  cout << "Enter the power number: ";
  cin >> power;
  if (power>=0){
    for (int i=0; i<=power; i++){
      cout << fixed << setprecision(5) << result << endl;
      result *= 2.0;
    }
  }
  else if (power<0){
    for (int i=0; i<=abs(power); i++){
      cout << fixed << setprecision(5) << result << endl;
      result /= (double)2;
    }
  }
}
