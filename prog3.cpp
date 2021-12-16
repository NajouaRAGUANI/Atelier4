#include <iostream>
#include <list>
#include <iterator>
using namespace std;
  

void showlist(list <int> g)
{
    list <int> :: iterator it;
    for(it = g.begin(); it != g.end(); ++it)
        cout << '\t' << *it;
    cout << '\n';
}
int main(){
	list<int> l1 , l2;
	int n , val;
	cout<<"entrer la taille de liste"<<endl;
	cin>>n;
	for(int i =0 ; i<n ;i++){
		cout<<"entrer la valeur numero:"<<i+1<<endl;
		cin>>val;
		l1.push_back(val);
	}
	cout<<"voila la liste initiale:"<<endl;
	showlist(l1);
    l1.sort();
	cout<<"voila la liste triee:"<<endl;
	
   for (auto it = l1.begin(); it != l1.end(); ++it)
      cout << *it << endl;

}
