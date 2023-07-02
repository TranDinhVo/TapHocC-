bai 1

#include <iostream>
using namespace std;

int main()
{
    int arr[10][10], n, m, s = 0;
    cout << "n =  ";
    cin >> n;
    cout << "m =  ";
    cin >> m;

    cout << " Nhap Mang "<< endl;
   for ( int i = 0; i < n; i++)
     {
       for ( int j = 0; j < m; j++)
         {
           cin >> arr[i][j];
         } 
     }
   for ( int i = 0; i < n; i++)
     {
       for ( int j = 0; j < m; j++)
         {
           s += arr[i][j];
         } 
     }
  cout << " Tong S = " << s;
      
    return 0;
} 
 
Bai 2





#include <iostream>
using namespace std;

int main()
{
   int arr[10], n;
   cout << "n = ";
   cin >> n;

  cout << "Nhap mang ";
  for (int i = 0 ; i < n; i++)
    {
      cin >> arr[i];
    }
   int Max = arr[0];
  for (int i = 1 ; i < n; i++)
    { 
      if ( Max < arr[i])
      {
        Max= arr[i];
      }
    }
  cout << "Gia tri lon nhat la: " << Max;
    return 0;
}



Bai 3 
