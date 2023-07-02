Bai 1

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

BAI 2


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


BAI 3
   #include <iostream>

using namespace std;

int main()
{
   int numbers[20];
   int n, x , y;
   cout << "n = ";
   cin >> n;  

   cout << "Nhap mang ";
  for ( int i = 0; i < n; i++)
    {
      cin >> numbers[i];
    }
   cout << "x = ";
   cin >> x;
  cout << "y = ";
   cin >> y;  
   for ( int i = n ; i > x ; i--)
     {
       numbers[i] = numbers[i - 1];
     }
   n++;
  numbers[x] = y;
 

  cout << "Mang sau khi them la: ";
  for ( int i=0; i < n; i++)
    {
      cout << numbers[i] << " ";
    }
  return 0;
  
} 


BAI 4
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
 
BAI 5





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



   
   


