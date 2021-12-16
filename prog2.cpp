#include <iostream>
#include <string>

using namespace std;

void date(string date)
{
    string mois;
   
        cout<< date.substr(0,2) << "/" << date.substr(2,2) << "/" << date.substr(4,4) <<"  a  "<< date.substr(8,2) << "h" << date.substr(10,2) << endl;

}


int main()
{
    string s="090120012235";
    date(s); 
}
