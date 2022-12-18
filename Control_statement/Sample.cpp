#include <iostream>
using namespace std;


int main() {
  int a,b;
  cout << "enter the value of a \n";
  cin>>a;
  cout <<"enter the value of b\n";
  cin>>b;
  char op;
  cout<<" enter the operation you want to perform\n";
  cin>>op;
switch(op){
  case '+':cout<<(a+b);
  break;
    case '-':cout<<(a-b);
  break;
  case '*':cout<<(a*b);
  break;
    case '/':cout<<(a/b);
  break;
    case'%':cout<<(a%b);
    break;
 default:cout<<"please enter the valid operation \n";
  break;
}  
  return 0;
}
