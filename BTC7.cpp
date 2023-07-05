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



BAI 2




#include <iostream>
#include <string>
#include <math.h>
using namespace std;

void input_integer(string label, int &n);
void input_array ( int *arr, int size);
void output_array ( int *arr, int size);
void remove( int* &arr, int &size, int delete_index);


int main()
{ 
  int n, x;
  input_integer( "n = ", n);
  int *numbers = new int[n];
  cout << " Nhap Mang: ";
  input_array(numbers, n);

  input_integer( "x = ", x);
  remove(numbers, n, x);
  cout << " Mang sau khi xoa: ";
  output_array(numbers, n);
   

  
  return 0;
}
void input_integer(string label, int &n)
{
  cout << label;
  cin >> n;
}
void input_array ( int *arr, int size)
{
  for ( int i = 0; i < size; i++)
  {
    cin >> arr[i];
  }
}
void output_array ( int *arr, int size)
{
  for ( int i = 0; i < size; i++)
  {
    cout << arr[i] << " ";
  }
}
void remove ( int* &arr, int &size, int delete_index)
{  
    // Xoa phan tu tai vi tri delete_index
  for (int i = delete_index; i < size - 1; i++)
    {
     arr[i] = arr[i+1];
    }
  
   // Tao mang moi
   int new_size = size - 1;
   int *new_arr = new int[new_size];
   
   // copi mang cu sang mang moi

    for (int i = 0 ; i < new_size; i++)
     {
       new_arr[i] = arr[i];
     }
  // gan mang moi cho mang cu va giam size
  
  delete[] arr;
  arr = new_arr;
  size = new_size;
  
}



   BAI3  
#include <iostream>
#include <string>
#include <math.h>
using namespace std;

void input_integer(string label, int &n);
void input_array ( int *arr, int size);
void output_array ( int *arr, int size);
void update( int* &arr, int &size, int update_index, int new_element);


int main()
{ 
  int n, y, x;
  input_integer( "n = ", n);
  int *numbers = new int[n];
  cout << " Nhap Mang: ";
  input_array(numbers, n);
  input_integer( "y = ", y);
  input_integer( "x = ", x);
  update(numbers, n, x ,y);
  cout << "Mang sau khi them la: ";
  output_array(numbers, n);
  

  
  return 0;
}
void input_integer(string label, int &n)
{
  cout << label;
  cin >> n;
}
void input_array ( int *arr, int size)
{
  for ( int i = 0; i < size; i++)
  {
    cin >> arr[i];
  }
}
void output_array ( int *arr, int size)
{
  for ( int i = 0; i < size; i++)
  {
    cout << arr[i] << " ";
  }
}
void update( int* &arr, int &size, int update_index, int new_element)
{  
   // Tao mang moi
  
  int new_size = size + 1;
  int *new_arr = new int[size + 1];
   // Copi mang cu sang mang moi
  for ( int i = 0; i < size ; i++)
    {
      new_arr[i] = arr[i];
    }
  // them phan tu moi vao mang
  for ( int i = new_size - 1 ; i > update_index ; i--)
    {
      new_arr[i] = new_arr[i-1];
    }
  new_arr[update_index] = new_element;
  // gan mang moi cho con tro cu va tang size
  delete[] arr;
  arr = new_arr;
  size = new_size;
  
}










