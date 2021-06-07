//  File name: main.cpp
//  Programmer: Cynthia Simon
//  Course: Prorgramming Fundamentals II (COSC 1337)
//  Professor: Isaac K. Gang
//  Institution: Texas A&M University-Commerce

//  Problem: I/O
//  Due date: 04/08/2019

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
using namespace std;

int double_num (int& doubled_num);
int reversed_digit (int& num);
int raise_power (int& raisedP);
int sum_digits (int& sumD);
int part_two (int& p2);
int two_digit (int& twoD);
int three_digit (int& threeD);

int main()
{
    char userinput, menu_choice;
    int random_num;
    
    cout << "Hello world!" << endl;
    cout << "Enter a random letter and " << endl;
    cout << "then press enter to generate a random number." << endl;
    
    cout << endl;
    cin >> userinput;
    cout << endl;
    
    srand(time(0));
    random_num = (rand() % (100 ))+ 10;
    
    cout << "Random number: "<< random_num << endl;
    cout << endl;
    
    
    
    cout << "Choose one function: " << endl;
    cout << endl;
    cout << "     a) Double my number" << endl;
    cout << "     b) Reverse my number" << endl;
    cout << "     c) Raise my number to the power of 2, 3, or 4" << endl;
    cout << "     d) Calculate the sum of my digits" << endl;
    
    cout << endl;
    cout << "Enter your pick: ";
    cin >> menu_choice;
    cout << endl;
    
    if (menu_choice == 'a')
    {
        double_num(random_num);
    }
    else if (menu_choice == 'b')
    {
        reversed_digit (random_num);
    }
    else if (menu_choice == 'c')
    {
        raise_power(random_num);
    }
    else if (menu_choice == 'd')
    {
        sum_digits(random_num);
    }
    
    
    return 0;
    
}


int double_num(int& doubled_num)
{
    cout << "You chose 'a' which doubles your random number." << endl;
    
    cout << "Your new number is " << doubled_num * 2 << "." << endl;
    
    return doubled_num;
}

int reversed_digit(int& num)
{
    int rev_num;
    while(num != 0)
    {
        rev_num = rev_num*10 + num%10;
        num = num/10;
    }
    
    cout << "You chose 'b' which reverses your digit." << endl;
    cout << "Your new number is " << rev_num << "." << endl;
    
    return rev_num;
}

int raise_power (int& raisedP)
{
    int userchoice;
    
    cout << "You chose 'c' which raises the power of your number" << endl;
    cout << "Would you like to raise your number to the power of 2,3, or 4?" << endl;
    cout << "Please enter your pick here: ";
    cin >> userchoice;
    
    cout << "Your new number is ";
    
    if (userchoice == 2)
    {
        cout << pow(raisedP, 2) << endl;
    }
    else if (userchoice == 3)
    {
        cout << pow(raisedP, 3) << endl;
    }
    else if (userchoice == 4)
    {
        cout << pow(raisedP, 4) << endl;
    }
    
    return raisedP;
}

int sum_digits (int& sumD)
{
    int new_sumD, a, b;
    
    cout << "You chose 'd' which calculates the sum of your digits" << endl;
    
    a = sumD / 10;
    b = sumD % 10;
    new_sumD = a + b ;
    
    cout << a << " + " << b << " = " << new_sumD << endl;
    cout << "Your new number is " << new_sumD << endl;
    
    return sumD;
    
}
int two_digit (int& twoD)
{
    cout << twoD << endl;
    
    int x, y;
    
    x = twoD / 10;
    y = twoD % 10;
    cout << x<< endl;
    cout << y << endl;
    
    cout << "Your number is " << pow(x,y) << endl;
    
    return x;
    
}
