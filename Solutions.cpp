//
// Created by floodd on 26/02/2024.
//
#include "Solutions.h"
/*

 Write a program that will read in a users’
 first name and last name and output their name in the format LastName, FirstName.
 */
void question1()
{
    string firstname;
    string lastname;
    cout << "First Name: "<<endl;
    cin >> firstname;
    cout << "Last Name: " <<endl;
    cin >> lastname;
    cout << lastname<< ", " << firstname<<endl;

}
/*
 * Write an application that will ask a user for their age and output a message telling
 * them if they are a Child (under 18), Adult (18 or over) or a Senior Citizen (over 65).
 * Use an if() statement for this. Test your programme with a range of values.
 * Record the test values and the result of your program.
 */

void question2()
{
    int age;
    cout << "Age: "<<endl;
    cin >> age;

    if(age < 0)
    {
        cout << "Invalid Age" <<endl;
    }
    else if(age < 18)
    {
        cout << "You are a child" <<endl;
    }
    else if(age < 65)
    {
        cout << "you are an adult" << endl;
    }
    else
    {
        cout << "You are a senior citizen" <<endl;
    }
}

/*
 * Write an application that implements a menu system to run the previous questions.
 * This should use a switch statement to handle users’ choice of question.
 *
 */
void question3()
{
    int choice;
    cout << "1. Question 1"<<endl;
    cout << "2. Question 2"<<endl;
    cin >> choice;
    switch(choice)
    {
        case 1:
            question1();
            break;
        case 2:
            question2();
            break;
        default:
            cout << "Invalid choice"<<endl;
            break;
    }
}

/*
 * Write a program to calculate the product of all numbers from 1 to 10 (i.e. 1x1, 2x2 etc.)
 */
void question4()
{
    for(int i = 1; i <=10;i++)
    {
        cout << left << setw(3)<< i << " * "<< setw(3) << i << " = " << setw(3)<< (i*i) <<endl;
    }
}
/*
 * Write a program to draw a rectangle, square and pyramid. Place the shapes one on top of the other; leave
 * a blank line between each shape. Assume each shape is 5 lines high and the rectangle is 10 columns wide.
 */
void question5()
{
    cout << "Square: " << endl;
    for(int r = 0; r <5;r++)
    {
        for(int c = 0; c <5;c++)
        {
            cout << "*";
        }
        cout << endl;
    }
    cout <<"\n\n\nRectangle"<<endl;
    for(int r = 0; r <5;r++)
    {
        for(int c = 0; c <10;c++)
        {
            cout << "*";
        }
        cout << endl;
    }
    cout <<"\n\n\nTriangle"<<endl;
    for(int r = 1; r <=5;r++)
    {
        for(int c = 0; c <5-r;c++)
        {
            cout << " ";
        }
        for(int c = 0; c <(r*2)-1;c++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
/*
 *
 * Write a program to declare three variables of type char, int, and double.
 * Assign the maximum allowable value for its type to each variable and output the values
 * from the variables. Increment each variable by one,
 * and output the results. Is the result what you expected? Explain what is happening.
 */
void question6()
{
    char c = CHAR_MAX;
    int i = INT32_MAX;
    double d = DBL_MAX;
    cout << "Char Max" << (int)c<<endl;
    cout << "int Max" << i <<endl;
    cout << "Double Max" << d<<endl;
    c++;
    i++;
    d++;
    cout << "Char Max" << (int)c<<endl;
    cout << "int Max" << i <<endl;
    cout << "Double Max" << d<<endl;

}
/*
 * Use the sizeof() operator to display the size (in bytes)
 * of each of the three variables in the previous question.
 */
void question7()
{
    char c = CHAR_MAX;
    int i = INT32_MAX;
    double d = DBL_MAX;
    cout << "Size of char: " << sizeof(c) <<" bytes"<<endl;
    cout << "Size of int: " << sizeof(i) <<" bytes"<<endl;
    cout << "Size of double: " << sizeof(d) <<" bytes"<<endl;

}
/**
 * How could you modify the shapes program in question 5 to place the three shapes beside each
 * other rather than one on top of one another? What do you need to consider? Implement your solution.
 */
void question8()
{
    cout << "Square: " << endl;
    for(int r = 0; r <5;r++)
    {
        for(int c = 0; c <5;c++)
        {
            cout << "*";
        }
        cout << "\t";

        for(int c = 0; c <10;c++)
        {
            cout << "*";
        }

        cout << "\t";
        for(int c = 0; c <5-(r+1);c++)
        {
            cout << " ";
        }
        for(int c = 0; c <(r*2)+1;c++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
/*
 * Modify the above program to handle different size shapes. (Input sizes)
 */
void question9()
{
    int sqsize, rectW, rectH, pyramidH;
    cout << "Square size: " << endl;
    cin >> sqsize;

    cout << "Rectangle Width" <<endl;
    cin>> rectW;

    cout << "Rectangle Height" <<endl;
    cin>> rectH;
    cout << "Pyramid Height:"<<endl;
    cin>>pyramidH;
    int max = (sqsize>rectH)?sqsize:rectH;
    max = max<pyramidH?pyramidH:max;

    for(int r = 0; r <max;r++)
    {
        if(r < sqsize) {
            for (int c = 0; c < sqsize; c++) {
                cout << "*";
            }

        }
        else
        {
            cout << string(sqsize, ' ');
        }
        cout << "\t";
        if(r < rectH) {
            for (int c = 0; c < rectW; c++) {
                cout << "*";
            }
        }
        else
        {
            cout << string(rectW, ' ') ;
        }
        cout << "\t";
        if(r < pyramidH) {
            for (int c = 0; c < pyramidH - (r + 1); c++) {
                cout << " ";
            }
            for (int c = 0; c < (r * 2) + 1; c++) {
                cout << "*";
            }

        }
        cout << endl;
    }
}
/*
 * Implement a program to draw a border of stars around a sting of text.
 */
void question10()
{
    string txt;
    cout << "Please enter a line of text: "<<endl;
    getline(cin, txt);
    string::size_type max = txt.length();
    string top(max+4, '*');

    cout << top <<endl;
    cout <<"* " << txt <<" *"<<endl;
    cout << top <<endl;
}
/**
 *
 */
 string::size_type getMaxLength(string lines[], int size)
{
     string::size_type max = lines[0].length();
     for(int i = 0; i < size;i++)
     {
         if(max < lines[i].length())
         {
             max = lines[i].length();
         }

     }
     return max;
}
/*
 * How would you modify the border program to display multiple lines of text in the border?
 *
 * What do you need to consider? Implement your solution.
 */
void question11()
{
     const int numLines = 3;
     string arr[numLines];
     for(int i = 0; i < numLines;i++)
     {
         cout << "Line " << (i+1) <<": ";
         getline(cin, arr[i]);
     }
     string::size_type max = getMaxLength(arr, numLines);
     string top(max+4, '*');

     cout << top <<endl;
     for(int i = 0; i < numLines;i++)
     {
         string padd(max - arr[i].length(), ' ');
         cout << "* " << arr[i] << padd <<" *"<<endl;
     }
    cout << top <<endl;
}
/*
 * Modify the above question to left-align or right-align the text in the box.
 * How could you centre align the text?
 */
void question12()
{

    const int numLines = 3;
    string arr[numLines];
    for(int i = 0; i < numLines;i++)
    {
        cout << "Line " << (i+1) <<": ";
        getline(cin, arr[i]);
    }
    string::size_type max = getMaxLength(arr, numLines);
    string top(max+4, '*');

    cout << "Left Aligned" <<endl;
    cout << top <<endl;
    for(int i = 0; i < numLines;i++)
    {
        string padd(max - arr[i].length(), ' ');
        cout << "* " << arr[i] << padd <<" *"<<endl;
    }
    cout << top <<endl;
    cout << "Right Aligned" <<endl;
    cout << top <<endl;
    for(int i = 0; i < numLines;i++)
    {
        string padd(max - arr[i].length(), ' ');
        cout << "* " << padd << arr[i]  <<" *"<<endl;
    }
    cout << top <<endl;
    cout << "Center Aligned" <<endl;
    cout << top <<endl;
    for(int i = 0; i < numLines;i++)
    {
        unsigned long long int totalPadd = max - arr[i].length();
        string paddL(totalPadd/2, ' ');
        string paddR(totalPadd-paddL.length(), ' ');
        cout << "* " << paddL << arr[i]  <<paddR<<" *"<<endl;
    }
    cout << top <<endl;
}


