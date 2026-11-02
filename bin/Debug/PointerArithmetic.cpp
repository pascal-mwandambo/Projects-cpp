# include <iostream>
using namespace std;
int main(){
    int* Ppointer= nullptr;
    int numbersArray[3] = {10 , 20 , 30};
    Ppointer = numbersArray;
    cout<<"Address at Ppointer:"<<Ppointer<<endl;
    cout<< "Address of numbersArray[0]:"<<numbersArray<<endl;
    cout<<"the value at Ppointer:"<<*Ppointer<<endl;
    cout <<"value at ++Ppointer:"<<*(++Ppointer)<<endl;
    Ppointer = numbersArray;
    cout<<"value at Ppointer++:"<<*(Ppointer++)<<endl;
    return 0;
}