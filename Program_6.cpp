#include <iostream>
using namespace std;
class Student{
    float CGPA;
public:
    Student(float c){
        CGPA = c;
    }
    bool operator ==(Student s){
        return CGPA == s.CGPA;
    }
    bool operator >(Student s){
        return CGPA > s.CGPA;
    }
};
int main(){
    Student s1(8.5), s2(9.2);
    if (s1 == s2){
        cout << "Both students have same CGPA." << endl;
    }
    else{
        cout << "Both students have different CGPA." << endl;
    }
    if (s1 > s2){
        cout << "First student has higher CGPA." << endl;
    }
    else if (s2 > s1){
        cout << "Second student has higher CGPA." << endl;
    }
    else{
        cout << "Both students have same CGPA." << endl;
    }
    return 0;
}

