# include <iostream>
using namespace std;
int main(){
    int firstValue;
    int secondValue;
int* Ppointer = nullptr;
 Ppointer=&firstValue;
 *Ppointer = 10;
 *Ppointer= secondValue;
 *Ppointer = 20;
 cout<<"firstValue is :"<<firstValue<<'\n';
  cout<<"secondValue is :"<<secondValue<<'\n';
  return 0;
}