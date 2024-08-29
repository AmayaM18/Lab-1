// Lab 1 pt 2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <cstdlib> 
#include <ctime>   
#include <cmath>   
using namespace std;

int main() {
    // set up variables used
    string in1, in2, in3, in4;
    int x1, y1, x2, y2;
    float dist1, dist2;
    char userChoice;

    // get choice from user 'e' to enter values or 'g' to generate values using random values
    cout << "How would you like to get the 4 values (e for enter, g for generate): ";
    cin >> userChoice;

    if (userChoice == 'e') {
        // get input if choice is 'e'
        cout << "Please enter 4 values: ";
        cin >> in1 >> in2 >> in3 >> in4;

        // verify input to make sure it is numeric and within -10 and 10 inclusive
        if (isdigit(in1[0]) && isdigit(in2[0]) && isdigit(in3[0]) && isdigit(in4[0])) {
            x1 = stoi(in1);
            y1 = stoi(in2);
            x2 = stoi(in3);
            y2 = stoi(in4);
            //Through copiolet AI i figured out that STOI stands for string to Integer which in turn help greatly when it came to the math portion of the program 
            // Also bouncin ideas off of copilet i was reminded of the isdigit function
            if (x1 < -10 || x1 > 10 || y1 < -10 || y1 > 10 || x2 < -10 || x2 > 10 || y2 < -10 || y2 > 10) {
                cout << "Values must be between -10 and 10 inclusive " << endl;
                return 1;
            }
        }
        else {
            cout << "Invalid input. Please enter numeric values " << endl;
            return 1;
        }
    }
    else if (userChoice == 'g') {
        // generate 4 random numbers between -10 & 10
        srand(time(0));
        x1 = rand() % 21 - 10;
        y1 = rand() % 21 - 10;
        x2 = rand() % 21 - 10;
        y2 = rand() % 21 - 10;
        //worked on in class
    }
    else {
        cout << "Invalid choice." << endl;
        return 1;
    }

    // print both points
    cout << "Point 1: (" << x1 << ", " << y1 << ")" << endl;
    cout << "Point 2: (" << x2 << ", " << y2 << ")" << endl;

    // calculate dist1 & dist2
    dist1 = sqrt(x1 * x1 + y1 * y1);
    dist2 = sqrt(x2 * x2 + y2 * y2);

    // determine which is closer and print
    if (dist1 < dist2) {
        cout << "Point 1 is closer to the origin." << endl;
    }
    else if (dist2 < dist1) {
        cout << "Point 2 is closer to the origin." << endl;
    }

    return 0;
}
