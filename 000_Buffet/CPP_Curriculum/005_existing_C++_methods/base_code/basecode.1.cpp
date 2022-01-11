// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	// write code here
char x;
cout<<"Enter A Symbol";
cin>>x;

int y = 0;
int z = 0;
cout<< "Please Enter The Length";
cin >> y;

char n;
cout<<"Please Enter The h Horizontal, v for Veritcal, or d for Diagonal:";
cin>> n;
if(n=='v'){
	while(true){
		z=z+1;
		cout<<x<<endl;
		if(z==y){
			break;
		}
	}
}
int i =0;
int o =5;
if(n=='d'){
	while(true){
		z= z+1;
		i = i+1;
		o=o+1;
		gotoxy(i,o);
		cout<<x<<endl;
		if(z==y){
			break;
		}
	}
}
}