/*
CH-230-A
a9_p8.cpp
Chigozirim Margaret Arukwe
c.arukwe@jacobs-university.de
*/

#include <iostream>
#include <cstdlib>

using namespace std;
int i;

//Function Creation
void subtract_max(int *arr,int length)
{
    int max = arr[0];

    //determining max element
    for(i = 1; i < length; i++)
    {
        if(arr[i] > max)
            max = arr[i];
    }

    //Now subtracting
    for(i = 0; i < length; i++)
        arr[i] -= max;

}

void deallocate(int *arr) {delete [] arr; }



//MAIN FUNCTION
int main (void)
{
    int n; cin >> n;

    int *a = new int[n]; 

    //Enter n elements of the array
    for(i = 0; i < n; i++)
        cin >> a[i];

    subtract_max(a, n);
    //print after function call
    for(i = 0; i < n; i++)
        cout << a[i] << " ";

    cout << endl;

    deallocate(a);
    return 0;

}