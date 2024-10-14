//
//  CIS25 - assignment 9
//
//  Created by maya nachiappan on 9/15/24.
//
// program to check if an applicant is elegible for a job or not

#include <iostream>
using namespace std;

bool eligible( bool citizen, bool degree, int exp) // creates a bool function
{
    // checks if all bool variables are true and experience is greater than 2
    if ( degree && citizen && exp>= 2)
        return true;
    else
        return false;
}

int main ()
{
    int exp;
    bool citizen, degree;
    cout << "Are you a US citizen? Type 1 for yes and 0 for no." << endl;
    cin >> citizen;
    cout << "Do you have a bachelors degree? Type 1 for yes and 0 for no." << endl;
    cin >> degree;
    cout << "How many years of experience do you have?" << endl;
    cin >> exp;
    
    if (eligible(citizen,degree,exp)) // if the eligible function returns a true value
    {
        cout << "You are eligible for this job" << endl;
    }
        else // if the eligible function returns a false value
        {
            cout <<"You are not eligible for this job." << endl;
        }
        return 0;
    }

