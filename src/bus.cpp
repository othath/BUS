#include"bus.h"

#include<fstream>
#include<string>
#include<iostream>
using namespace std;
void savepass(bus*);
int bus::create(){
	static int i=0;
	cout<<"Driver's name"<<endl;
	cin>>driver;
	cout<<"No of bus"<<endl;
	cin>>no;
	cout<<"Places"<<endl;
	cin>>nplace;
	cout<<"depart time"<<endl;
	cin>>time;
	cout<<"depart"<<endl;
	cin>>dep;
	cout<<"destination"<<endl;
	cin>>arriv;
	store();
	i++;
	return i;
}
void bus::store(){
	ofstream file;
	file.open("../db/businfo.txt",ios::app);
	if(!file){cout<<"impossible";
	}
	file<<driver<<" "<<no<<" "<<nplace<<" "<<time<<" "<<dep<<" "<<arriv<<endl;
	}


int bus::getNo(){
	return no;
}
string bus:: getDriver(){
	return driver;
}
string bus::getDep(){return dep;
}
string bus::getArr(){
	return arriv;
}
int bus::getNpl(){
	return nplace;
}
string bus::getTime(){return time;
}
void bus::reserve(bus *T,int k,int s){
	int l,n;
	static int count=0;
	cout<<"Hello sir,please enter the bus NO's"<<endl;
	cin>>n;
	for(int i=0;i<k;i++){
		if(n==T[i].getNo()){
        	cout<<"from "<<T[i].getDep()<<" to "<<T[i].getArr()<<" depart time: "<<T[i].getTime()<<endl;
			cout<<"There is "<<T[i].getNpl()-s<<endl;
        	cout<<"chose your place"<<endl;
			cin>>l;
			int v=0;
			for(int j=0;j<10;j++){
				if(l==T[i].p[j].getRes() && T[i].p[j].getFname()!="EMPTY") {
			    cout<<"the place is already reserved by "<<T[i].p[j].getFname()<<endl;
				v++;
				break;
				}}
	// cout<<"THE PLACE IS EMPTY"<<endl;
			if(v==0){
		
			cout<<"THE PLACE IS EMPTY ,please"<<endl;
			string c;
			cout<<"enter your name"<<endl;
			cin>>c;
			T[i].p[l-1].setRes(l);
			T[i].p[l-1].setFn(c);
			
			break;
		}}
	}
	savepass(T);
	cout<<T[2].p[2].getFname()<<"****"<<endl;
}
void savepass(bus *T){
	ofstream infile;
	infile.open("../db/client.txt");  
	if(!infile){cout<<"impossible";}
	 //infile.seekp(i*8,ios::beg);
	 for(int k=0;k<5;k++){
	 	if(k>0) infile<<endl;
	 for(int i=0;i<5;i++){
	 	//cout<<T[k].p[i].getFname()<<endl;
	 	//cout<<"****"<<endl;
	 infile<<T[k].p[i].getRes()<<" "<<T[k].p[i].getFname()<<" ";
	
	 }}
    infile.close();
	 }
