#include<iostream>

using namespace std;

main (){
	
	char k;
	
	cout<<"Enter text : ";
	cin>>k;
	
	if(isdigit(k)){
		cout<<"this character is numeric";
	}
	
	else{
		cout<<"this character is not numeric";
	}
	
	
}
