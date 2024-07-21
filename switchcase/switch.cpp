// #include<iostream>
// using namespace std;
// int main()
// {

//     char ch = '1';
//     int num = 1;

//     cout <<endl;
//     switch( ch ){
        
//         case 1: cout << "First" <<endl;
//         break;

//         case '1': switch(num) {
//                case 1: cout << "value of num is "<< num <<endl;
//                break;
//         }
//         break;
//         default : cout << "this is default case"<<endl;
//                break;
//     }

//     return 0;
// }


// #include<iostream>
// using namespace std;

// int main()
// {
//   int amount;
//   cin>>amount;
//   int Rs100 , Rs50 , Rs20 , Rs1;

//   switch(1) //here 1 is foe case 1
//   {
//       case 1: Rs100=amount/100;
//               amount=amount%100;
//               cout<<"No of 100 Rupee ="<<Rs100<<endl;
              
         
//       case 2: Rs50=amount/50;
//               amount=amount%50;
//               cout<<"No of 50 Rupee ="<<Rs50<<endl;
              

//       case 3: Rs20=amount/20;
//               amount=amount%20;
//               cout<<"No of 20 Rupee ="<<Rs20<<endl;
               

//       case 4: Rs1=amount/1;
//               amount=amount%1;
//               cout<<"No of 1 Rupee ="<<Rs1<<endl; 
          
//            }
//         return 0;
// }






// using switch case in infinite loop , here we are using exit(0);
// there are primarily two types of exit();
// 1. exit(0) which is the exit successfully which means program has run successfully and then it is terminated. i.e. program has been executed without any error or interrupt.
// 2. exit(1) Exit Failure: Exit Failure is indicated by exit(1) which means the abnormal termination of the program, i.e. some error or interrupt has occurred. We can use different integer other than 1 to indicate different types of errors.

#include<iostream>
#include<climits>
using namespace std;


int main()
{
    int n;
    cin >> n;
    while(INT_MIN){
        switch (n){
            case 1: cout <<"bla"<< endl;
            break;
            case 2: cout << "int" << endl;
            default: cout << "defalut" << endl;
        }
        exit(0);
    }
    return 0;
}