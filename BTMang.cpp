#include <iostream>

using namespace std;

int main()
{
   int numbers[20];
   int n, x;
   cout << "n = ";
   cin >> n;

   cout << "Nhap mang ";
  for ( int i = 0; i < n; i++)
    {
      cin >> numbers[i];
    }
   cout << "x = ";
   cin >> x;

   numbers[n]= x;
   n++;
   cout << "Mang sau khi them la: ";
  for (int i = 0; i < n; i++)
    {
      cout << numbers[i] << " ";    
    }
  return 0;
  
}

