#include<string>
#ifndef BUS
#define BUS

class bus{
	std::string driver;
	int no,nplace;
	std::string dep,arriv,time;
	
	public:
		bus():no(0),nplace(50){};
		bus(std::string d,int n,int p,std::string t,std::string de,std::string ar):driver(d),no(n),nplace(p),time(t),dep(de),arriv(ar){};
		std::string getDriver();
		std::string getDep();
		std::string getArr();
		std::string getTime();
		class place{
	   std::string fname;
	    int resplace;
	    public:
	 //	place():resplace(0),fname("empty"){
		// };
		//place(std::string fn,int r):fname(fn),resplace(r){
		
		std::string getFname(){
			return fname;
		}
		int getRes(){
			return resplace;
		}
		void setRes(int a){  
		resplace=a;
		}
		void setFn(std::string f){
			fname=f;
		}
		
};
	    place p[50];
		int getNo();
		int getNpl();
		void store();	
		int create();
		void reserve(bus*,int,int);
};
#endif


