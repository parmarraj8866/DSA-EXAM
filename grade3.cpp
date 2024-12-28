// Grade Calculate  Switch Case 


#include <iostream>
using namespace std;

int main() {
    int marks;
    cout << "Enter Your Marks: ";
    cin >> marks;

    int gradecalculate;
    if (marks >= 90) {
        gradecalculate = 1;
    }
     else if (marks >= 80) {
        gradecalculate = 2; 
    }
     else if (marks >= 70) {
        gradecalculate = 3; 
    }
     else if (marks >= 60) {
        gradecalculate = 4; 
    }
     else if (marks >= 50) {
        gradecalculate = 5; 
    }
     else if (marks >= 40) {
        gradecalculate = 6; 
    }
     else {
        gradecalculate = 7; 
    }

    switch (gradecalculate) {
        case 1:
            cout << "Excellent Work! Your Grade is : A+" << endl;
            break;
        case 2:
            cout << "Well Done! Your Grade is : A" << endl;
            break;
        case 3:
            cout << "Good Job! Your Grade is : B+" << endl;
            break;
        case 4:
            cout << "You Passed! Your Grade is : B" << endl;
            break;
        case 5:
            cout << "You Passed! Your Grade is : C" << endl;
            break;
        case 6:
            cout << "You Passed! Your Grade is : D" << endl;
            break;
        case 7:
            cout << "Sorry, You Are Fail! Your Grade is : F" << endl;
            break;
        default:
            cout << "Please Enter Currect Marks!" << endl;
    }

    return 0;
}
