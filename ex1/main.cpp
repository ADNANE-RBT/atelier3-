#include <iostream>

using namespace std;

class Myclass{
   float x;
float y;

	public:
		// constructeur par defaut
		Myclass();
		//fonction pour initializer les nombres
		void initializer(float a, float b){
		    x = a;
		    y = b;

		};
		//fonction pour afficher les nombres
		void afficher();
		//Destructeur
		~Myclass();
};




//definition du constructeur
Myclass::Myclass(){
cout << "constructeur creer"<< endl;
	//ne rien donner a cette etape est meme que laisser le constructeur par defaut
};

void Myclass::afficher() {
cout <<"hi,"<< endl;
  cout << " your numbers are: "<<x<< " and " << y << endl;
};


Myclass::~Myclass(){
	cout<<"Destructeur appele."<<endl;
};

int main(){
	//creation d'un object
	Myclass nombre1;
	nombre1.initializer(4.5, 5.6);
	nombre1.afficher();

	return 0;
};