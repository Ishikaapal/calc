#include <iostream>
using namespace std;
  

int main(){
    float result = 0;
    cout<<"Welcome to the Calculator"<<endl;

    float  num , num2;
    bool condition;
    do{
        cout<<"Enter a number : ";
        cin>>num;

        cout<<" + for Addition       "<<"\t - for Subtraction"<<endl;
        cout<<" * for Multiplication "<<"\t / for Division"<<endl;
        cout<<" c for Clear          "<<"\t e for Exit"<<endl;

        string user_choice;
        cout<<"Enter your choice : ";
        cin>>user_choice;

        cout<<"Enter a number : ";
        cin>>num2;

        if(user_choice == "+"){
          condition = true;
          
          result = result + num + num2;
          cout<<"Result is : "<<result<<endl;  
        }

        else if(user_choice == "-"){
            condition = true;
            result = result - num - num2;
            cout<<"Result is : "<<result<<endl;
        }

        else if(user_choice == "*"){
            condition = true;
            result = result * num * num2;
            cout<<"Result is : "<<result<<endl;
        }

        else if(user_choice == "/"){
            condition = true;
            if(num != 0){
                result = result / num / num2;
                cout<<"Result is : "<<result<<endl;
            }
            else{
                
                cout<<"Invalid"<<endl;
            }
        }

        else if(user_choice == "c" || user_choice == "C"){
            condition = true;
            result = 0;
            cout<<"Result is : "<<result<<endl;
        }
        else if(user_choice == "e" || user_choice == "E"){
            condition = false;
            break;
        }

        else{
            condition = true;
            cout<<"Invalid input , choose from the above."<<endl;
        }

        
    }
    while(condition);

    cout<<"Thank you for using."<<endl;
}