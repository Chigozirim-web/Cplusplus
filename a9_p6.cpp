/*
CH-230-A
a9_p6.cpp
Chigozirim Margaret Arukwe
c.arukwe@jacobs-university.de
*/

#include <iostream>
#include <cmath>

using namespace std;

int myfirst(int array[], int length);
double myfirst(double arr[], int length);
const char myfirst(char *arr);

int i;

int main ()
{
    //randomly created arrays for testing the functions
    int testArr[] =
    {99, -22, 35, -100, 62, 0};
    double testArr1[] = 
    {0.004, -12.88, 33.88, -8.00, 0, -22.99};
    char testArr2[] = 
    "^ 67 ae iiii 5456787eeeee aa 90i uuo!p";

    //for int array
    if(myfirst(testArr, 6) == -1)
        cout << "No such integer elememt exists in the array." 
        << endl;
    else
        cout << "First positive even integer is: "
         << myfirst(testArr, 6) << endl; 

    //for double array
    if( myfirst(testArr1, 6) == -1.1)
        cout << "No such double element exists in the array." 
        << endl;
    else
        cout << "First negative non-fractional number is: "
         << myfirst(testArr1, 6) << endl;

    //for char array
    if((myfirst(testArr2)) == '0')
        cout << "No consonants are present in the array" 
        << endl;
    else
        cout << "First consonant in charr array is: "
        << myfirst(testArr2) << endl;

    return 0;
}




//Creating Overloaded Functions
int myfirst(int array[], int length)
{
    for(i = 0; i < length; i++)
    {
        if((array[i] % 2 == 0) && (array[i] > 0))
            return array[i];
    }
    return -1;
}

double myfirst(double arr[], int length)
{
    double fract;
    for(i = 0; i < length; i++)
    {
         //modf from math library, returns the fractional
        //part of a float number
        if((arr[i] < 0) && (modf(arr[i], &fract) == 0))
            return arr[i];
    }
    return -1.1;
}

const char myfirst(char *arr)
{
    for(i = 0; arr[i] != '\0'; i++)
    {
        if((arr[i] >= 65 && arr[i] <= 90)
        || (arr[i] >= 97 && arr[i] <= 122))
        {
            if(arr[i] != 'a' && arr[i] != 'e' && arr[i] != 'i'
            && arr[i] != 'o' && arr[i] != 'u' && arr[i] != 'A'
            && arr[i] != 'E' && arr[i] != 'I' && arr[i] != 'O'
            && arr[i] != 'U')
                return arr[i];
        }
    }
    return '0';
}