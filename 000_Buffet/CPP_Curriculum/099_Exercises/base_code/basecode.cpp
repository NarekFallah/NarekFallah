// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	// write code here
cout<< ("COunting From 5-25")<<endl;
int x = 5;
while(true){
    cout << x<<endl;
        x = x + 1;
        if(x==26){
          break;
        }
	}
cout<< ("Counting From 15-5")<<endl;
int z = 15;
while(true){
    cout << z<<endl;
        z = z - 1;
        if(z==4){
          break;
        }
	}
cout<< ("Counting From 5-25 for loop")<<endl;
	for(int i = 0; i <= 25; i = i + 1){
		cout << i <<endl;
	}
cout<< ("Counting From 15-5 for loop")<<endl;
for(int i = 15; i <=  5; i = i - 1){
		cout << i <<endl;
	}
	cout<< ("Counting From 123-200 for loop")<<endl;
for(int i = 123; i <= 200; i = i + 2){
		cout << i <<endl;
	}
	cout<< ("Counting From 1253-55 for loop")<<endl;
for(int i = 1253; i >= 55; i = i - 7){
		cout << i <<endl;
	}
}




