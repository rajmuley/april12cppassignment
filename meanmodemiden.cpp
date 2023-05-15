#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// write a c++ program to find the mean,median and mode in the array.

int main()
{
    int line[5] = {16, 55, 8, 9, 20};
    int sum, ayyu, ne;
    int ans,mean,d;
    int b= sizeof(line)/sizeof(line[0]);
        sort(line,line+b);
        
    for (int i = 0; i < b; i++)
    {
        d= line[i] + d;
    }
    cout << "Mean of array is : " << d / b << endl;


    if ((sizeof(line) / sizeof(int))%2 == 0)
    {
        sum = b / 2;
        ne = ((b + 1)) / 2;
        ans = (line[sum-1] + line[ne]) / 2;
        cout << "Median of array is : " << ans << endl;
    }
    else if (b % 2 != 0)
    {
        ayyu = (b + 1) / 2;
        cout << "Median of array is : " << line[ayyu - 1] << endl;
    }

    return 0;
}