   BAI1
#include <iostream>
using namespace std;
#include <string>
int main()
{  string str;
  cout << "Nhap chuoi: ";
  getline(cin, str);

  while (str[0]==' ')
    {
      str.erase(0, 1);
    }
  while (str[str.length() - 1]== ' ')
   {
     str.erase(str.length() - 1, 1);
   }
 cout << "Ket qua: " << str << "a";
 
  return 0;
}
 BAI 2
   #include <iostream>
using namespace std;
#include <string>
int main()
{  string str;
  cout << "Nhap chuoi: ";
  getline(cin, str);
  int i=0;
  while (i < str.length())
    {
      if (str[i] == ' ' && str[i+1] == ' ' )
      {
        str.erase(i,1);
      }
         else {  i++;  } 
    }
  cout << "Ket qua: " << str;
 
 
  return 0;
}
   Bai3
#include <iostream>
using namespace std;
#include <string>
int main()
{  string str;
  cout << "Nhap chuoi: ";
  getline(cin, str);
  for ( int i = 0; i < str.length(); i++)
    {
      str[i] = tolower(str[i]);
    }
 if (str[0] != ' ')
   {
     str[0] = toupper(str[0]);
   }
  
 for ( int i = 0; i < str.length(); i++)
   {
     if( str[i] == ' ' && str[i+1] != ' ')
     {
       str[i+1] = toupper(str[i+1]);
     }
   }
   
  cout << "Ket qua: " << str;
 
 
  return 0;
}
  BAI4


#include <iostream>
using namespace std;
#include <string>
int main()
{  string str;
  cout << "Nhap chuoi: ";
  getline(cin, str);
   for ( int i = 0 ; i < str.length(); i++)
     {
       str[i] = tolower(str[i]);
     }
   while ( str[0] == ' ' )
     {
       str.erase(0.1);
     }
  while ( str[str.length() - 1] == ' ' )
     {
       str.erase(str.length() - 1.1);
     }
  int i = 0;
    while (i < str.length())
    {
        if ( str[i] == ' ' && str[i + 1] == ' ')
        {
            str.erase(i,1);
        }  else     {   i++;  } 
    }
 if (str[0] != ' ')
 {
   str[0] = toupper(str[0]);
 }
 for (int i = 0; i < str.length(); i++ )
   {
     if ( str[i] == ' ' && str[i + 1] != ' ')
     {
       str[i + 1] = toupper(str [i + 1]);
     }
   }
 cout << "Ket qua: " <<str;
  return 0;
}
