// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	// write code here
//	int x = 0;
//	char y = 'a';
//	while(true){
  //      cout<< "Youve Been Gnomed";
    //    cout << x;
      //  cin>>y;
        //if(y == 'q'){
          //  cout<< "Look Behind you, gg bro"<<endl;
            //break;
        //}
        //x = x + 1;
        //if(x==100){
          //  break;
        //}
	//}

    int num1, num2, answer;
    char op;
    char y = 'a';
    while(true){
    cout<<"Enter the first number: ";
    cin>>num1;
    cout<<"Enter the second number: ";
    cin>>num2;
    cout<<"Enter operator (+, -, *, /)";
    cin>>op;
    if(op== '+')
    {
        answer  = num1+num2;
        cout<<answer<<endl ;

    }
    else if(op== '-'){
        answer  = num1-num2;
        cout<<answer<<endl ;

    }
    else if (op== '*'){
        answer  = num1*num2;
        cout<<answer<<endl ;

    }
    else if (op== '/'){
        answer  = num1/num2;
        cout<<answer<<endl ;
    }
      else {
    cout<<"You entered wrong operator"<<endl;
      }

   }
}