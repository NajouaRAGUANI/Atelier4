#include <iostream>
using namespace std;
class Test{
	public:
static int tableau[] ;
public :
static int division(int indice, int diviseur){
	if(diviseur == 0){
		throw"Attempted to divise by zero";
	}
return tableau[indice]/diviseur;
}

};
int Test::tableau[] = {1, 22, 33, 44, 0, 66, 77, , 88, 100} ;
 main()
{
int x, y;
float k ;
cout << "Entrez l indice de l entier a diviser: " << endl;
cin >> x ;



cout << "Entrez le diviseur: " << endl;
cin >> y ;
cout << "Le resultat de la division est: "<< endl;
try{
k=Test::division(x,y);
cout <<k << endl;} catch(const char* e){ 
cerr<<e<<endl;
}

}
