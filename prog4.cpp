#include<iostream>
#include<list>
#include<string>
using namespace std;
class personne{
	public : 
	string nom ; 
	string prenom ;
	int age;
	personne(string nom , string prenom , int age){
		this->nom = nom;
		this->prenom = prenom ;
		this->age = age;
	}
};
main(){
	list<personne> l;
	string nom , prenom ; 
	int age , n ;
	cout<<"entrer la taille de liste:"<<endl;
	cin>>n;
	for(int i =0 ; i<n ;i++){
		cout<<"entrer le nom numero"<<i+1<<":";
		cin>>nom;
		cout<<"entrer le prenom numero"<<i+1<<":";
		cin>>prenom;
		cout<<"entrer l'age numero"<<i+1<<":";
		cin>>age;
		l.push_back(personne(nom,prenom,age));
	
}
 std :: list<personne> :: iterator it;
 	cout<<"voila la liste :"<<endl;
 for(it = l.begin() ; it != l.end() ; ++it){
 
 	std :: cout<<it->nom<<"  "<<it->prenom<<" son age est:"<<it->age<<endl;
 }
  


}
