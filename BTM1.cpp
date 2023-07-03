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


BAI 6
   #include <iostream>
using namespace std;

int main()
{
   int arr[10][10], n,m;
   cout << "n = ";
   cin >> n;
   cout << "m = ";
   cin >> m;

  cout << "Nhap mang "<< endl;
  for (int i = 0 ; i < n; i++)
    { 
      for (int j = 0 ; j < m; j++)
        {
          cin >> arr[i][j];
        }
    }
   
  for (int i = 0 ; i < n; i++)
    { 
      int Max = arr[i][0];
      for (int j = 0 ; j < m; j++)
        {
          if (Max < arr[i][j])
          {
            Max = arr[i][j];
          }
        }
     cout << Max << " ";
    }
  
    return 0;
} 


BAI 7
   #include <iostream>
using namespace std;

int main()
{
   int arr[10][10], n,m;
   cout << "n = ";
   cin >> n;
   cout << "m = ";
   cin >> m;

  cout << "Nhap mang "<< endl;
  for (int i = 0 ; i < n; i++)
    { 
      for (int j = 0 ; j < m; j++)
        {
          cin >> arr[i][j];
        }
    }
   int s = 0;
  for (int i = 0 ; i < n; i++)
    { 
      for (int j = 0 ; j < m; j++)
        {
          if ( i == 0 || j == 0 || i == n -1 || j == m - 1)
          {
            s += arr[i][j];
          }
        }
     
    }
cout << s;
    return 0;
}    
    
   BAI TAP CHUONG 4
      BAI 1 
      #include <iostream>
using namespace std;

int main()
{
   int arr[10], n;
   cout << "n = ";
   cin >> n;
   cout << " Nhap mang: ";
  for (int i = 0 ; i < n ; i++)
    {
      cin >> arr[i];
    }
  for (int i = n - 1 ; i > 0; i--)
    {
      for (int j = 0 ; j < i ; j++)
        {
          if (arr[j] < arr[j+1])
            {
              int a=arr[j];
               arr[j]=arr[j+1];
               arr[j+1]=a;
            }
        }
       
    }
  cout << " Mang sau khi sap xep la: "
  for (int i = 0 ; i < n ; i++)
    {
       cout << arr[i] << " ";
    }
  return 0;
}

    BAI 2
       #include <iostream>
using namespace std;

int main()
{
   int arr[10], n, k;
   cout << "n = ";
   cin >> n;
   cout << " Nhap mang: ";
  for (int i = 0 ; i < n ; i++)
    {
      cin >> arr[i];
    }
   cout << "k = ";
   cin >> k;
    int x = - 1 ,y = - 1;

    for (int i = 0 ; i < n ; i++)
      {  for (int j = 0; j < n; j++)
          { 
            if (i != j && arr[i] + arr[j] == k)
            { 
              x = i;
              y = j;
              break;
            }
          }
        if (x != -1 && y != -1)
          break;
        
      }
  if ( x !=-1 && y !=-1)
  {
    cout << "Ket qua " << x << " " << y;
  }  else {
    cout << "khong co";
  }
  return 0;
}

     BAI3 
#include <iostream>
using namespace std;

int main()
{
  int n, m, matran1[10][10], matran2[10][10];
  cout << "n = ";
  cin >> n;
  cout << "m = ";
  cin >> m;

  cout << "Nhap ma tran 1:\n";
    for(int i=0;i<n;i++)
      {
        for(int j=0;j<m;j++)
          {
            cin >> matran1[i][j];
          }
      }
  cout << "Nhap ma tran 2:\n";
  for(int i=0;i<n;i++)
    {
      for(int j=0;j<m;j++)
        {
          cin >> matran2[i][j];
        }
    }
   cout << "Tong hai ma tran la:\n";
 for(int i=0;i<n;i++)
   {
     for(int j=0;j<m;j++)
       {
         cout << matran1[i][j] + matran2[i][j] << " ";
       }
     cout << endl;
   }
 
  return 0;
}

   BAI4
#include <iostream>
using namespace std;

int main()
{
  int s =0, n, m, arr[10][10];
  cout << "n = ";
  cin >> n;
  cout << "m = ";
  cin >> m;

  cout << "Nhap ma tran :\n";
    for(int i=0;i<n;i++)
      {
        for(int j=0;j<m;j++)
          {
            cin >> arr[i][j];
          }
      }
  for (int i=0;i<n;i++)
    {
      for (int j=0;j<m;j++)
        {
          if (arr[i][j]%2==1)
          {
            s += arr[i][j];
          }
        }
        
    }
  cout << "Tong so do le la: " << s;
  return 0;
}

      
   


