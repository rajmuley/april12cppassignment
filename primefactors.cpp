#include<iostream>
using namespace std;

// write a code to print prime factor of given number

int main(){

int a, c;
  cout << "Enter Number: ";
  cin >> a;
  for (int i = 1; i <= a; i++)
  {   c=0;
    if (a % i == 0)
    {
      for (int j = 1; j <= i; j++)
      {
        if (i % j == 0)
        {
          c++;
        }
      }
      if (c == 2)
      {
        cout << i << " is a prime factor of "<<a << endl;
      }
    }
  }
}