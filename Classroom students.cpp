/*
Author : Jorge Castillo
Project : Enter amount of students and tell which one is first and last alphabetically 
*/

#include <iostream>
#include <string>


using namespace std;

int main ()
{

    //delarations
    int numstudents;
    int number = 0;
    char names [25];
    char first [25];
    char last [25];

    //input
    cout << "Enter the number of students in the class\n";
    cin >> numstudents;


    if ( numstudents < 1 || numstudents > 25)
    {
        cout << " Invalid number of students please try again : ";
        cin >> numstudents;
    }
    else
    cin.ignore(25, '\n');
 
    for (int count = 1; count <= numstudents; count++)
    {
        cout << "Enter in name " << count << ": \n";
        cin.getline(names, 25);
 
    
 
        if (count == 1)
        {
            strcpy_s(first, names);
            strcpy_s(last, names);
        }
 
        if (strcmp(names, first) < 0)
 
        {
 
            strcpy_s(first, names);
 
        }
 
        if (strcmp(names, last) > 0)
 
        {
 
            strcpy_s(last, names);
 
        }
 
    }
 
 
 
    cout << "The first student is " << first << endl;
 
    cout << "The last student is " << last << endl;
    return 0;
}

/*
Enter the number of students in the class
5
Enter in name 1:
joh
Enter in name 2:
brad
Enter in name 3:
jorge
Enter in name 4:
kelly
Enter in name 5:
maria
The first student is brad
The last student is maria
*/
