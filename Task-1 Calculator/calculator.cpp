#include<bits/stdc++.h>
using namespace std;
 
int main() {

  int A,B;
  char op;

  cout << "ENTER FIRST NUMBER: ";
  cin >> A;

  cout << "ENTER OPERATOR: ";
  cin >> op;

  cout << "ENTER SECOND NUMBER: ";
  cin >> B;

  switch(op){

    case '+':
      cout << "ANSWER: " << A + B;
      break;

    case '-':
      cout << "ANSWER: " << A - B;
      break;

    case '*':
      cout << "ANSWER: " << A * B;
      break;

    case '/':
      cout << "ANSWER: " << A / B;
      break;

    default:
      cout << "INVALID OPERATOR";
  }


  return 0;
};