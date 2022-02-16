#include <iostream>
#include"bus.h"
#include "func.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	int n,c,s,l;
	bus a,k[20];
	do{
	//initi();
	
	cout<<"enter your choice"<<endl;
	cout<<"1==>Add driver and Bus!"<<endl;
	cout<<"2==>Reserve place"<<endl;

	cin>>n;
	switch(n){
		case 1:
		    l=a.create();
			break;
		case 2:
			c=load(k);
			//cout<<c<<endl;
			//cout<<k[0].p[0].getFname()<<endl;
			s=loadPass(k,10);
			//cout<<k[0].p[4].getFname()<<endl;
			s;
			c;
			a.reserve(k,c,s);
		
			break;
			
	
	}
}while(n);
	return 0;
}
