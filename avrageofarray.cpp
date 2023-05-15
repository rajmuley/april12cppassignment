#include<iostream>
using namespace std;

// write a c++ program to find the avarege value in the array.

int main(){
int line[5]={11,22,88,54,65};
int sum=line[0];
int b = sizeof(line)/sizeof(line[0]);
// sort(line,line+b);
int v=0;
for(int i=0;i<(sizeof(line)/sizeof(int));i++){
sum=line[i]+sum;
}

for(int j=0;j<(sizeof(line)/sizeof(int));j++)
{
    if(line[j]<sum){
       sum=line[j];  
        
        cout<<line[j]<<endl;      
    }

}
cout<<sum;

    return 0;
}