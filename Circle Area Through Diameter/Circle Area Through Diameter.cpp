
												/* create a program to calculate circle of area through diameter then print it on screen */

#include <iostream>
using namespace std;

int main()

{

    // inputs 
    int Diameter;
    cout << "Enter the diameter of circle" << endl;
    cin >> Diameter;

    // Calculation  + rule
    float PI = 3.14;
    float area = (3.14 * Diameter * Diameter) / 4;

    //Outputs

    cout << "PI = 3.14" << endl;
    cout << "Rule = (PI * D^2) / 4 = (PI * Diameter * Diameter) / 4 =  = (3.14 * Diameter * Diameter) / 4 " << endl;
    cout << "Area of cirle =" << area << endl;

    return 0;

    // created by @ilyes_trabelsi

}
