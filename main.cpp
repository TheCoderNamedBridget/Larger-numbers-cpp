/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
/*
Author: Bridget Naylor
Date: Sept 17, 2020
Lab: Larger and Largest
*/

#include <stdio.h>
#include <iostream>
using namespace std;

int larger( int& first, int& second)
{
    int difference = first - second;
    if ( difference < 0 )
    {
        return second;
    } 
    else
    {
        return first;
    }
}

int& largest(int& x, int& y, int& z)
{
    int num = 666;
    int& error = num;
    

    if ( larger(x, y) == y && larger(z, y) == y)
    {
        return y;
    }
    else if ( larger(x, y) == x && larger(z, x) == x )
    {
        return x;
    }
    else if ( larger(x, z) == z && larger(z, y) == z)
    {
        return z;
    }
    return error;//Error
    
}

int main()
{
    int A = 222;
    int B = 1111;
    int C = 60000;


    
    cout<<larger( A, C )<<endl;

    cout<<largest( A, B, C)<<endl;
    


    return 0;
}




