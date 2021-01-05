#include <iostream>
using namespace std;

class Complejo{
    private:
     int complejoreal1;
     int complejoimg1;
     int complejoreal2;
     int complejoimg2;
    public:
     Complejo(int,int);
     void print();
     void add();
     void sub();
};

Complejo::Complejo(int _complejoreal1, int _complejoimg1){
    complejoreal1 = _complejoreal1;
    complejoimg1 = _complejoimg1;
}

Complejo::Complejo(int _complejoreal2, int _complejoimg2){
    complejoreal2 = _complejoreal2;
    complejoimg2 = _complejoimg2;
}

void Complejo::print(){
    cout << complejoreal1 << ' + ' << complejoimg1 << 'i' << endl;
    cout << complejoreal2 << ' + ' << complejoimg2 << 'i' << endl;
}

void Complejo:: add(){
    cout << complejoreal1 + complejoreal2 << complejoimg1 + complejoimg2 << endl;
}

void Complejo:: sub(){
    cout << complejoreal1 - complejoreal2 << complejoimg1 - complejoimg2 << endl;
}

int main(){
    Complejo c1(5,6);
    Complejo c2(3,2);

    c1.print();
    c1.add();
    c1.sub();

}
