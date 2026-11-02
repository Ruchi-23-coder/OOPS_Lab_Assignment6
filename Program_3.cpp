#include <iostream>
using namespace std;
class Number{
    int value;
public:
    Number(int v){
        value = v;
    }
    Number operator +(Number n){
        Number temp(0);
        temp.value = value + n.value;
        return temp;
    }
    void display(){
        cout << "Result = " << value << endl;
    }
};
int main(){
    Number n1(10), n2(20);
    Number n3 = n1 + n2;
    n3.display();
    return 0;
}

