#include <iostream>
using namespace std;
int sumNatural(int n) {
    if (n <= 1) {
        return n;
    }
    else
    return n + sumNatural(n - 1);
}

int main(){
    int num;
    cout<<"Enter number: "<<endl;
    cin>>num;
    
    cout<<"The sum is :"<<sumNatural(num)<< endl;
    
}

//Output
//Enter number: 
//7
//The sum is :28
