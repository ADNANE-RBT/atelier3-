#include<iostream>
using namespace std;


class mother {
protected:
    string name;

public:
    void display(){
        cout << "je suis la class mere " << name << endl;
    }
};


class daughter :public mother {
public:
    string Name;


    void display() {
        cout << "je suis la class fille heritee"<<Name <<endl;

    }
};
int main() {
    string s;
    daughter daughter1;

    daughter1.display();

}