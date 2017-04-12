#define CATCH_CONFIG_RUNNER
#include <catch.hpp>
#include <cmath>

int gcd ( int a , int b ){
if (b==0)
return a;
else
return gcd(b, a%b);
}

void aufgabe13(int n){
  for(int i = 1; i <= 20; i++){
    if (n % i != 0){
      aufgabe13(n+2);
    }
  }
  std::cout << n;
}

int checksum(int a){
  int csum;
 while (a > 0) {
  csum += a % 10;
  a /= 10;
  }
  return csum;
}

TEST_CASE ( " describe_gcd " , "[gcd]" )
{
REQUIRE ( gcd (2 ,4) == 2);
REQUIRE ( gcd (9 ,6) == 3);
REQUIRE ( gcd (3 ,7) == 1);
}

TEST_CASE ( "decribe_checksum", "[checksum]")
{
REQUIRE ( checksum(124) == 7);
REQUIRE ( checksum(234) == 9);
REQUIRE ( checksum(123) == 6);
}

int main(int argc, char* argv[])
{
  aufgabe13(20);
  return 0;
  return Catch::Session().run(argc, argv);
}
