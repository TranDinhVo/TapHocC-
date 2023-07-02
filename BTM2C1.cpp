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
