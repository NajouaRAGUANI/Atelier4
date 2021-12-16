#include<iostream>
#include<iterator>
#include<set>

using namespace std;
bool recherche(	set<int , greater<int>> s , int var){
	
	auto it = s.find(var);  
     if ( it == s.end() ) {  
    return false;  
    }   
     else { 
	 return true;  
    }  
	

}

 main(){
	int var;
	bool l;
	cout<<"Enter la valeur a rechercher:"<<endl;
	cin>>var;
	set<int , greater<int>> s ; 
	for(int i = 1 ; i<=100 ; i++){
	s.insert(i)	;
	};
    l=recherche(s , var);
    if(l==true){
    	cout<<"la valeur existe."<<endl;
	}else{
		cout<<"la valeur n'existe pas.";
	}
    
	
}
