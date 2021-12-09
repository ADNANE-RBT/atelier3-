#include<iostream>
using namespace std;

// class mere animal
class Animal {
public:
    string nom;
    float age;
public:
    void set_value(string n, float x) {
        nom = n;
        age = x;

    }




};

// class fille de la class animal pas heritage
class Zebra :public Animal {
public:
    string origine;
public:
    void set_origine(string o) {
        origine = o;
    }

    void dispaly() {
        cout << "le nom de zebra est :" << nom << " l age de zebra est " << age << " l origine de zebra est " << origine<< endl;


    }

};

//class fille 2eme de la class animal par heritage
class Dolphine :public Animal {
public:
    string origine;
public:
    void set_origine(string o) {
        origine = o;
    }

    void dispaly() {
        cout << "le nom de dolphine est :" << nom << " l age de dolphine est " << age << " l origine dedolphine est " << origine << endl;


    }

};

//main fonction
int main() {
    string a;
    float b;
    string c;
    string d;
    float e;
    string f;
    cout << "entrer le nom de zebra ";
    cin >> a;
    cout << "entrer l age de zebra ";
    cin >> b;
    cout << "entrer l origine de zebra ";
    cin >> c;
    cout << "entrer le nom de dolphine ";
    cin >> d;
    cout << "entrer l age de dolphine ";
    cin >> e;
    cout << "entrer l origine de dolphine ";
    cin >> f;

    Zebra z1;
    z1.set_value(a,b);

    z1.set_origine(c);

    z1.dispaly();
    Dolphine d1;
    d1.set_value(d, e);

    d1.set_origine(f);

    d1.dispaly();
    return 0;

}