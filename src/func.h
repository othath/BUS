#include<fstream>
#include<iostream>
#include"bus.h"
#include<cstdlib> //atoi

using namespace std;

int load(bus *T){
	int i=0;
	char store[20][10];
	ifstream infile;
	infile.open("../db/businfo.txt");
	if(!infile) cout<<"load impossible";
	while(!infile.eof()){
		if(infile.eof()) break;
		infile>>store[0]>>store[1]>>store[2]>>store[3]>>store[4]>>store[5];	
		T[i]=bus(store[0],atoi(store[1]),atoi(store[2]),store[3],store[4],store[5]);
		i++;
	}
	return i;
}
int loadPass(bus *T,int k){
    int nbrBus=0;
	char store[10][10];
	ifstream infile;
	infile.open("../db/client.txt");
	if(!infile) cout<<"load passimpossible";
	int  i=0;
	while(!infile.eof()){
	       
			int j=0;
	
	    	  infile>>store[0]>>store[1]>>store[2]>>store[3]>>store[4]>>store[5]>>store[6]>>store[7]>>store[8]>>store[9];
	          if(infile.eof()) break;
	          
				T[i].p[j].setFn(store[1]);
	          	T[i].p[j].setRes(atoi(store[0]));
	          	j++;
				  	T[i].p[j].setFn(store[3]);
	          	T[i].p[j].setRes(atoi(store[2]));
	          	j++;
				  	T[i].p[j].setFn(store[5]);
	          	T[i].p[j].setRes(atoi(store[4]));
	          	j++;
	          	
				   	T[i].p[j].setFn(store[7]);
	          	T[i].p[j].setRes(atoi(store[6]));
	          	j++;
				   	T[i].p[j].setFn(store[9]);
	          	T[i].p[j].setRes(atoi(store[8]));
				  // 	T[i].p[j].setFn(store[10]);
				   	
	        
				i++;}
				cout<<T[2].p[3].getFname()<<"*"<<endl;
	infile.close();
	return nbrBus-1;
}

void initi(){
		ofstream infile;
		infile.open("db/client.txt");  
	if(!infile){cout<<"impossible";}
	  
	  for(int j=0;j<5;j++){
	  	
	  	if(j>0) infile<<endl;
	  for(int j=0;j<5;j++){
	  	infile<<j<<" "<<"EMPTY ";
	  }}
}

