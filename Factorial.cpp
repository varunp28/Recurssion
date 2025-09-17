#include <iostream>
using namespace std;
    int fact(int n){
        if (n<=1)
        return 1;
        else 
        return(n*fact(n-1));
    }
    
int main(){
    int num;
    cout<<"Enter n: "<< endl;
    cin>> num;
    fact(num);
    cout<<"The factorial is :"<< fact(num);
    }


//Output:
//Enter n: 
//4
//The factorial is :24
