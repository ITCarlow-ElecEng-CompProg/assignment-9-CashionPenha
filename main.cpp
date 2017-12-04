/**
 * Cashion Penha
 * Lab 9
 * Sphere Calculations
 * 06/11/2017
 */

/**< preprocessor directives / header files*/

#include <iostream>
#include <cstdio>
#include <math.h>

using namespace std;/** Includes commonly used tools, such as cout, cin, To prevent typing "std" */

/**< Separate function to calculate the surface area and volume of the sphere*/
void sphere(double radius, double *sa, double *v)
{
    /**< declaring pointer*/
    *sa = (4.00*M_PI*pow(radius,2.00));
    *v = ((4.00/3.00)*M_PI*pow(radius,3.00));
    cout.precision(2);/**< Limiting the answer to 3 decimal places*/
    cout << fixed;

}

/**< main function */
int main(void)
{
    /**< Declaring variables of type double*/
    double radius,sa,v;

    cout <<"Lab 9 - Sphere Calculations" << endl;

    /**< Do while loop to ensure value entered by user is greater than 0*/
	do
    {
        cout <<"\nPlease enter the radius of the sphere: ";
        cin >> radius;
    }
    while(radius<=0);/**< Loop condition */

    sphere(radius, &sa, &v);/**< Calling the function*/

    /**< Displaying the results */
    cout <<"\nThe surface area of the sphere is: " << sa;
    cout <<"\n\nThe volume of the sphere is: " << v << endl;

    /**< End of program*/
    return 0;
}
