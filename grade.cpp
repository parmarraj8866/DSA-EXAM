// Grade Calculate  If and Else Statment

#include <iostream>
using namespace std;

int main(){
    int marks;
    cout<<"Enter Your Marks : ";
    cin>>marks;
        
    if(marks>=90){
        cout<<"Excellent Work! Your Grade is : A+";
    }
    else if(marks>=80 && marks < 90){
        cout<<"Well Done Your Grade is : A";
    }
    else if(marks>=70 && marks < 80){
        cout<<"Good Job Your Grade is : B+";
    }
    else if(marks>=60 && marks < 70){
        cout<<"You Passed Your Grade is : B";
    }
    else if(marks>=50 && marks < 60){
        cout<<"You Passed Your Grade is : C";
    }
    else if(marks>=40 && marks < 50){
        cout<<"You Passed Your Grade is : D";
    }
    else {
        cout<<"Sorry, You Are Fail! Your Grade is : F";
    }

    cout<<endl;
}