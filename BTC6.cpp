Bai1 KT so NGUYEN n



#include <iostream>
#include <string>
#include <math.h>
using namespace std;

void input_integer(string label, int &n);
bool is_prime( int n);


int main()
{ 
  int n;
  input_integer (" n= " , n);
  if (is_prime(n))
  {
    cout << n << " la so nguyen to";
    
  } else 
    {
       cout << n << " khong phai la so nguyen to";
    }


  return 0;
}
void input_integer(string label, int &n) 
{
  cout << label;
  cin >> n;
}
bool is_prime( int n)
{
  for (int i = 2; i <= sqrt(n); i++)
    {
      if ( n % i == 0)
      {
        return 0;
      }
    }
  return 1;
}

               BAI2
cách 1 sd VÒNG LẶP

  
  #include <iostream>
#include <string>
#include <math.h>
using namespace std;

void input_integer(string label, int &n);
bool is_prime( int n);
int sum_of_primes( int n);

int main()
{ 
  int n;
  input_integer (" n= " , n);
  cout << " Ket qua: " << sum_of_primes(n);
  
  return 0;
}
void input_integer(string label, int &n) 
{
  cout << label;
  cin >> n;
}
bool is_prime( int n)
{
  for (int i = 2; i <= sqrt(n); i++)
    {
      if ( n % i == 0)
      {
        return false;
      }
    }
  return true;
}
int sum_of_primes( int n)
{
  int sum = 0;
  for ( int i = 2 ; i <= n ; i++)
    {
      if (is_prime(i))
      {
        sum += i;
      }
    }
  return sum;
}





Cach 2 sd ĐỆ QUY
#include <iostream>
#include <string>
#include <math.h>
using namespace std;

void input_integer(string label, int &n);
bool is_prime( int n);
int sum_of_primes( int n);

int main()
{ 
  int n;
  input_integer (" n= " , n);
  cout << " Ket qua: " << sum_of_primes(n);
  
  return 0;
}
void input_integer(string label, int &n) 
{
  cout << label;
  cin >> n;
}
bool is_prime( int n)
{
  for (int i = 2; i <= sqrt(n); i++)
    {
      if ( n % i == 0)
      {
        return false;
      }
    }
  return true;
}
int sum_of_primes( int n)
{ 
  
   if ( n == 2)
   {
     return 2;
   }
  if ( is_prime(n))
  {
    return n + sum_of_primes( n-1);
  }
  return sum_of_primes( n-1);
}




    BAI3 
CACH1 SD VONG LAP
#include <iostream>
#include <string>
#include <math.h>
using namespace std;

void input_integer(string label, int &n);
long long factor( int n);

int main()
{ 
  int n;
  input_integer (" n= " , n);
  cout << n << "! = " << factor(n);
  
  return 0;
}
void input_integer(string label, int &n) 
{
  cout << label;
  cin >> n;
}

long long factor (int n)
{ 
  long long factor = 1 ;
  for (int i = 1; i <= n ; i++)
    {
      factor *= i;
    }
  return factor;
}  

CACH2 SD ĐỆ QUY
#include <iostream>
#include <string>
#include <math.h>
using namespace std;

void input_integer(string label, int &n);
long long factor( int n);

int main()
{ 
  int n;
  input_integer (" n= " , n);
  cout << n << "! = " << factor(n);
  
  return 0;
}
void input_integer(string label, int &n) 
{
  cout << label;
  cin >> n;
}

long long factor (int n)
{ 
  if ( n == 1)
  {
    return 1;
  }
  return n*factor(n-1);
}
  
