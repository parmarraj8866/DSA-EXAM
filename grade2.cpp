// Grade Calculate  Ternary Operator


#include <iostream>
using namespace std;

int main() {
    int marks;
    cout << "Enter Your Marks: ";
    cin >> marks;


    (marks >= 90) ? cout << "Excellent Work! Your Grade is : A+" :
    (marks >= 80) ? cout << "Well Done! Your Grade is : A" :
    (marks >= 70) ? cout << "Good Job! Your Grade is : B+" :
    (marks >= 60) ? cout << "You Passed! Your Grade is : B" :
    (marks >= 50) ? cout << "You Passed! Your Grade is : C" :
    (marks >= 40) ? cout << "You Passed! Your Grade is : D" :
    cout << "Sorry, You Are Fail! Your Grade is : F";

    cout << endl;
    return 0;
}
