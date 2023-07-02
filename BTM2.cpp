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
  for (int i = x; i < n-1; i++)
    {
     numbers[i]=numbers[i+1]; 
    }
   n--;
  cout << "Mang sau khi xoa ";
  for (int i = 0; i < n; i++)
    {
      cout << numbers[i] << " ";
    }
  return 0;
  
} 
   // 1 2 3 4 5
   // 1 3 3 4 5
   // 1 3 4 5 5 
