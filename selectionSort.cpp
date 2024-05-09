#include <iostream>
using namespace std;

void display(int a[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout<<a[i]<<" ";
    }
} // end of display

void getData(int a[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout<<"a["<<i<<"]:";
        cin>>a[i];
    } // end of for
} // end of scanning

void selectionSort(int size, int a[100])
{ //4 3 2 1 
    int min, temp = 0,j;
    for (int i = 0; i < size; i++)// 0 
    {
        min = i; 
        for (j = i + 1; j < size; j++) // 1 2 
        { // 3 4 2 1 
            if (a[min] > a[j]) // 4>1 
            {
                min = j; // 2
            } // end of i
        } // end of j
        temp = a[i];
        a[i] = a[min];
        a[min] = temp;
    } // end of i
    display(a,size);
} // end of selection sort

int main()
{
    int size, a[100];
    cout<<"Enter the size of the array (1-100): ";
    cin>>size;
    if (0 < size <= 100)
    {
        getData(a, size);
        cout<<"\nThe unsorted data is :\n";
        display(a, size);
        cout<<"\nThe Sorted data is :\n";
        selectionSort(size, a);
    } // end of if
    else
    {
        cout<<"Enter a valid size !!";
    }
    return 0;
} // end of main