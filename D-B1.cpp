#include <iostream>
#include <math.h>
using namespace std;

int fac(int n){
    int fact=1;
    for (int i =2; i <=n; i++)
    { 
       fact=fact*i;
    } return fact;
   
    
}
int main(){
    int n;
    cin>>n;
    int a=fac(n);
    cout<<a<<endl;
}