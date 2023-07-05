BAI 1 

#include <iostream>
#include <string>
#include <math.h>
using namespace std;

void input_integer(string label, int &n);
void input_array (int *arr, int size);
void output_array (int *arr, int size);
void pust (int* &arr, int &size, int new_element);


int main()
{ 
   int n, x;
   input_integer( "n = ", n);
   int *numbers = new int[n];
   cout << " Nhap mang: ";
   input_array (numbers, n);
   input_integer( "x = ", x);
   pust (numbers, n, x);
   cout << " Mang sau khi them la: ";
   output_array (numbers, n);
   

  
  return 0;
}
void input_integer(string label, int &n) 
{
  cout << label;
  cin >> n;
}
void input_array (int *arr, int size)
{
  for ( int i =0;i < size; i++)
    {
      cin >> arr[i];
    }
}
void output_array (int *arr, int size)
{
 for ( int i =0;i < size; i++)
   {
     cout << arr[i] << " ";
   }
}
void pust (int* &arr, int &size, int new_element)
{  // tao mang moi co phan tu size + 1
  
  int new_size = size + 1;
  int *new_arr = new int [new_size];
  
  // Copy mang arr vao mang new_arr
  
  for ( int i = 0 ; i < size; i++)
  {
    new_arr[i] = arr[i];
  }
  
  // tao gia tri moi vao mang moi
  
  new_arr[new_size - 1]= new_element;
  
  // Xoa mang cu
  
  delete[] arr;
  
  // gan vung nho moi vao mang cu
  
  arr = new_arr;
  size = new_size;
}

