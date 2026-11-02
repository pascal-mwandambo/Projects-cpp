# include <iostream>
using namespace std;
int main(){
int* Ppointer = nullptr;
int integerVar = 5;
Ppointer = &integerVar;
cout<<"integerVar:"<<integerVar<<endl;
cout<<" address of integerVar:"<<&integerVar<<endl;
cout<<"Ppointer:"<<Ppointer<<endl;
cout<<" address of Ppointer:"<<&Ppointer<<endl;
return 0;

  
} 