#include <iostream>
using namespace std;

void arrSort(int a[], int size)//3 -> 3 2 1 
{
    int i,j,temp;
    for(i=0;i<size;i++){
        for(j=0;j<size-1;j++){//  .... 2 3 1 
            if(a[j]>a[j+1]){ // 3>2 
                temp =a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }//end of if
        }//end of j 
    }//end of for of i
} // end of sort
    
void display(int a[],int size){
    cout<<"The array is : \n";
    for(int i=0;i<size;i++){
        cout<<a[i]<<" ";
    }
}//end of display 

void getData(int a[],int size)
{
    for(int i=0;i<size;i++){
        cout<<"a["<<i<<"]:";
        cin>>a[i];
    }//end of for
} // end of scanning

void binarySearch(int search, int size ,int a[]){

    int min =0, mid, max = size-1, flag = 0;
    while (min<=max)
    {
        mid = (min+max)/2;
        if(search == a[mid]){
            flag =1;
            break;
        }
        else if(search>a[mid]){
            min = mid +1;
        }
        else if(search < a[mid]){
            max = mid -1;
        }
    }//end of while 

    if(flag == 1){
        cout<<search<<" found !!";
    }
    else{
        cout<<search<<"not found!!";
    }
    

}//end of binaySearch()

int main()
{
    int size,a[100],search;
    cout << "Enter the size of the array (1-100): ";
    cin >> size;
    if (0 < size <= 100)
    {
        getData(a,size);
        display(a,size);
        arrSort(a,size);
        cout<<"\nEnter a element to search in the list :";
        cin>>search;
        binarySearch(search,size,a);
    }//end of if 
    else{
        cout<<"Enter a valid size !!";
    }
    return 0;
} // end of main
