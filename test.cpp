#include <bits/stdc++.h>
using namespace std;
int main(void){
  int a,b;
  string op;
  cin >> a >> op >> b;
  if(op == "+")cout << a+b << endl;
  if(op == "-")cout << a-b << endl;
  if(op == "*")cout << a*b << endl;
  if(op == "/"){
    if(b == 0)cout << "error" << endl;
    else cout << a/b << endl;
  }
  if(op == "?")cout << "error" << endl;
  if(op == "=")cout << "error" << endl;
  if(op == "!")cout << "error" << endl;
}