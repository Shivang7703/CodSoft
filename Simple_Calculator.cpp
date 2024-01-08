#include<iostream>
using namespace std;

int main(){
    double num1,num2;
    char op;
    cout<<"Enter the operation you want to perform ( + - * / ) : "<<endl;
    cin>>op;
    cout<<"Enter the first number : "<<endl;
    cin>>num1;
    cout<<"Enter the second number : "<<endl;
    cin>>num2;

    switch(op){
        case '+' : 
            cout<< num1<<" " << op<<" " << num2 <<" = "<<num1+num2<<endl;
            break;
        case '-' : 
            cout<< num1<<" " << op<<" " << num2 <<" = "<<num1-num2<<endl;
            break;
        case '*' : 
            cout<< num1<<" " << op<<" " << num2 <<" = "<<num1*num2<<endl;
            break;
        case '/' : 
            if(num2 == 0){
                cout<<"Can't divide with zero"<<endl;
            }
            else{
                cout<< num1<<" " << op<<" " << num2 <<" = "<<num1/num2<<endl;
            }
            break;
        default :
            cout<<"Enter a valid operator"<<endl;
            break;
    }
    return 0;
}