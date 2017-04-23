#include <iostream>

double mileToKilometer(double mile){
  return mile*1.60934;
}


int main ()
{
std :: cout << " Bitte geben Sie die Meilen ein:\n " ;
double mile ;
std :: cin >> mile ;
std :: cout << mile <<" Meilen sind " << mileToKilometer(mile) << " Kilometer.\n";
return 0;
}