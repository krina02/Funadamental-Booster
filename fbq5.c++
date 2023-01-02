#include<iostream>

using namespace std;

main(){
	
	int b = 10;
	int c = 20;
	int d = 30;
	int e = 40;
	int f = 50; 
	
	b = b*b*b;
	c = c*c*c;
	d = d*d*d;
	e = e*e*e;
	f = f*f*f;
  
    int a[]={b,c,d,e,f};   
           //0 1 2 3 4
    int i;
      
    for(i=0 ; i<=4 ; i++){
    	
    	cout<<a[i]<<endl;
  	}
     
}
