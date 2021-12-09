#include<iostream>
using namespace std;
class calcule {
public:
    static int count;
    void call() {

        count++;
    }
};
int calcule::count = 0;
int main() {
    calcule t1;
    t1.call();
    t1.call();
    t1.call();
    t1.call();
    t1.call();
    t1.call();
    t1.call();
    t1.call();

    cout << "la fonction call a ete appele " << t1.count <<" fois"<< endl;
    return 0;
}