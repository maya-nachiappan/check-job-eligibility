//
//  CIS25 - assignment 9
//
//  Created by maya nachiappan on 9/15/24.
//
// program to check if an applicant is elegible for a job or not

#include <iostream>
using namespace std;

bool eligible( bool citizen, bool degree, int exp)
{
    // checks if all conditions are true
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
    
    if (eligible(citizen,degree,exp))
    {
        cout << "you are eligible" << endl;
    }
        else
        {
            cout <<"you are not eligible" << endl;
        }
        return 0;
    }

