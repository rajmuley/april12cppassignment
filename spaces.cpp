#include <iostream>
#include <string>
using namespace std;
  
int main()
{
    string a;
      
     int b=0;
    cout << "Please enter your name: ";
    getline(cin, a);
    
   for(int i=0;i<sizeof(a);i++)
    {
        
        if(a[i]==' '){

            b++;
        }
    }
    cout<<b;


    return 0;
}