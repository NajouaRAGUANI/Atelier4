#include <iostream>
#include <list>
#include <iterator>
using namespace std;
class Repas;
class Chat;
class Elment;
class Animal;
class Entraineur;
class Chien;
class Race;
class compitition;

class Repas //association avec chat+composition avec elment 
{
private:
    string nom;
    int heure;
    string description;
    list<Elment> *lisE;

public:
    list<Elment> *getlistElment()
    {
        return this->lisE;
    }
    ~Repas()
    {
        delete this->lisE;
        cout << "call dist of Repas" << endl;
    }
};

class Elment//composition avec repas
{
private:
    string type;
    string nom;
    Repas a;

public:
    ~Elment()
    {
        cout << "call dist of B" << endl;
    }
};

class Animal{//heritage avec chat et chien 
protected:
    string nom;
    int age;
    string genre;
};

class Chat: public Animal{//heritage avec animal et association avec repas
private:
    string type;
public:
    bool sauter();
};

class Race{//heritage avec chien
protected:
    string specificite;
protected:
    bool israceHybride();
};

class Chien: public Race, public Animal {
private:
string taille;
list<Entraineur> lisEntraineur ;
public:
    bool ischass3();
};

class Entraineur {//association avec chien 
private:
string nom;
string description;
list<Chien> listChien ;
};

class Compitition {//association avec entraineur et chiens

private :
    string date;
    string nom;
    Entraineur b ;
    Chien a ;
public:
    int ordre;
} ;
