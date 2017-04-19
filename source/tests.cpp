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
    i%13==0 && i%12==0 && i%11==0 ){
      return i;
    }else{
      i = i+2;
    }
  }
}

int sumMultiples(){
  int sum = 0;
  for(int i = 1; i < 1001; i++){
    if(i%3 == 0 or i%5 == 0){
      sum = sum + i;
    }
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

int checksum(int a){
 int csum=0;
 while (a > 0) {
  csum = csum +(a % 10);
  a = a/10;
  }
  return csum;
}

TEST_CASE ( "decribe_checksum", "[checksum]")
{
REQUIRE ( checksum (234) == 9);
REQUIRE ( checksum (123) == 6);
REQUIRE ( checksum (134) == 8);
}

int main(int argc, char* argv[])
{
  std :: cout << "";
  return Catch::Session().run(argc, argv);
}
