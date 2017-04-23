#define CATCH_CONFIG_RUNNER
#include <catch.hpp>
#include <cmath>

int gcd ( int a , int b ){
if (b==0)
  return a;
else
  return gcd(b, a%b);
}

int aufgabe13(){
  int i = 20;
  while(true){
    if(i%20==0 && i%19==0 && i%18==0 && i%17==0 
    && i%16==0 && i%15==0 && i%14==0 &&
    i%13==0 && i%12==0 && i%11==0){
      return i;
    }else{
      i = i+20;
    }
  }
}

int sumMultiples(){
  int sum = 0;
  int i = 1;
  while(i < 1001){
    if(i%3 == 0 or i%5 == 0){
      sum = sum + i;
    }
    i++;
  }
  return sum;
}

bool is_prime(int a){
  bool prime = true;
  for( int i = 2; i < a; i++){
    if(a%i == 0){
      prime = false;
      break;
    }
  }
  if(prime == true){
    return true;
  }else{
    return false;
  }
}

int factorial( int a){
  int sum = 1;
  for(int i = 1; i <= a; i++){
    sum = sum*i;
  }
  return sum;
}

int binomial( int a, int b){
    int num, den ;
    if ( a < b ){
       return(0) ; 
    }else{
	    den = 1;
	    num = 1; 
	      for (int i =  1  ; i <= b   ; i = i+1)
	        den =    den * i;
	      for (int j = a-b+1; j<=a; j=j+1)	
	        num = num * j;
	    return(num/den);
  } 
}

int checksum(int a){
 int csum = 0;
 while (a > 0) {
  csum = csum +(a % 10);
  a = a/10;
  }
  return csum;
}

float fract(float a){
  while (a > 1){
    a -= 1;
  }
  return a;
}

float cylinder_volume(float r, float h){
  return M_PI*pow(r,2)*h;
}

float cylinder_area(float r, float h){
  return 2*M_PI*r*h+2*M_PI*pow(r,2);
}

double mileToKilometer(double mile){
  return mile*1.60934;
}

TEST_CASE ( "describe_mileToKilometer" , "[mileToKilometer]" )
{
REQUIRE ( mileToKilometer(25) == Approx(40.2336).epsilon(0.001));
}

TEST_CASE ( "describe_cylinder_area" , "[cylinder_area]" )
{
REQUIRE ( cylinder_area(5.1,2.9) == Approx(256.35).epsilon(0.001));
}

TEST_CASE ( "describe_cylinder_volume" , "[cylinder_volume]" )
{
REQUIRE ( cylinder_volume(1,5.5) == Approx(17.28).epsilon(0.001));
}

TEST_CASE ( "describe_fract" , "[fract]" )
{
REQUIRE ( fract(6.98) == Approx(0.98).epsilon(0.001));
REQUIRE ( fract(0.87) == Approx(0.87).epsilon(0.001));
REQUIRE ( fract(6.988888) == Approx(0.988888).epsilon(0.001));
}

TEST_CASE ( "describe_gcd" , "[gcd]" )
{
REQUIRE ( gcd (2 ,4) == 2);
REQUIRE ( gcd (9 ,6) == 3);
REQUIRE ( gcd (3 ,7) == 1);
}

TEST_CASE ( "describe_is_prime" , "[is_prime]" )
{
REQUIRE ( is_prime (13) == true);
REQUIRE ( is_prime (7) == true);
REQUIRE ( is_prime (10) == false);
}

TEST_CASE ( "describe_factorial" , "[factorial]" )
{
REQUIRE ( factorial (4) == 24);
REQUIRE ( factorial (7) == 5040);
REQUIRE ( factorial (2) == 2);
}

TEST_CASE ( "describe_binomial" , "[binomial]" )
{
REQUIRE ( binomial (5,2) == 10);
REQUIRE ( binomial (8,3) == 56);
REQUIRE ( binomial (2,1) == 2);
}

TEST_CASE ( "decribe_checksum", "[checksum]")
{
REQUIRE ( checksum (234) == 9);
REQUIRE ( checksum (123) == 6);
REQUIRE ( checksum (113509) == 19);
}

int main(int argc, char* argv[])
{
  std :: cout << "sumMultiples: " << sumMultiples() << "\nAufgabe13: " << aufgabe13() << "\n";
  return Catch::Session().run(argc, argv);
}
