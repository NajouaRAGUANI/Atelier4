#include <iostream>
using namespace std;

class complexe {
public :
    float reel;
    float image;
	complexe(){};
    complexe(float reel, float image)
    {
        reel = reel;
        image = image;
    }
    void afficher()
    {cout<<reel<<"+i"<<image<<endl;
    }
    
    //La somme
    complexe operator+(complexe c)
    {
        complexe com;
        com.reel = reel + c.reel;
        com.image = image + c.image;
        return com;
    }
     
    //La soustraction
    complexe operator-(complexe c)
    {
       complexe com;
        com.reel = reel - c.reel;
        com.image = image - c.image;
        return com;
    }
    
    //Le produit
    complexe operator*(complexe c)
    {
        complexe com;
        com.reel = reel * c.reel - image * c.image;
        com.image = reel * c.image + image * c.reel;
        return com;
    }
    //la division
      complexe operator/(complexe c)
    {
        complexe com;
        com.reel =( reel*c.reel+ image*c.image)/((c.reel * c.reel) + (c.image*c.image));
        com.image = ((image * c.reel)-(reel * c.image))/((c.reel * c.reel) + (c.image*c.image));
        return com;
    }
    
    
    
    

};


int main()
{
	float r1,r2,i1,i2;

	complexe com1 , com2 , c ;
	cout<<"entrer la partie reelle de premier complexe:"<<endl;
	cin>>r1;
	cout<<"entrer la partie imaginaire de premier complexe:"<<endl;
	cin>>i1;
	com1.reel=r1;
	com1.image=i1;

	cout<<"entrer la partie reelle de deuxieme complexe:"<<endl;
	cin>>r2;
	cout<<"entrer la partie imaginaire de deuxieme complexe:"<<endl;
	cin>>i2;
	com2.reel=r2;
	com2.image=i2;
	cout<<"le premier complexe:";
	com1.afficher();
	cout<<endl;
	cout<<"le deuxieme 3complexe:";
	com2.afficher();
		cout<<endl;
	cout<<"______________________"<<endl;
	cout<<"la somme est:"<<endl;
	c = (com1 + com2);
	c.afficher();
	cout<<"______________________"<<endl;
	cout<<"la soustraction est:"<<endl;
	c = (com1 - com2);
	c.afficher();
	cout<<"______________________"<<endl;
	cout<<"le produit est:"<<endl;
	c = (com1 * com2);
	c.afficher();
	cout<<"______________________"<<endl;
	cout<<"la division est:"<<endl;
	c = (com1 / com2);
	c.afficher();
	
	

}
