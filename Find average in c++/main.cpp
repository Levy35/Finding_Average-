#include <iostream>

using namespace std;
float avg ( float x);

float average;

int main()
{
    float grade[6];
    string name;
    string subject[6];





    cout << "Enter name of student: ";
    cin >> name;


    for ( int i=0;i<6;i++)
    {
    cout << "Subject: ";
    cin >> subject[i];
    cout << "Grade: ";
    cin >> grade[i];

    average += avg (grade[i]);

    }

    cout << " ------------------------------------ " <<endl;
    cout << name << endl;

    for ( int i=0;i<6;i++)
    {

    cout << subject[i] <<" = "<< grade[i] << endl;

    }

    cout <<"Average grade " << " "<< average << endl;









    return 0;
}

// function

float avg ( float x)
{
    float average;
    average= x/6;

    cout << " " <<endl;
    return average;

}

