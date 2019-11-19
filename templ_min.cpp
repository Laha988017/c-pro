#include <iostream>
using namespace std;
template <class T>
T arrMin(T arr[],int size){
    T min=arr[0];
    for(int i=1;i<size;i++)
        if(arr[i]<min)
            min=arr[i];
    return min;
}
int main(){
    int arr1[10],size;
    float arr2[10];
    char arr3[10];
    cout<<"\nEnter the size of Integer array:";
    cin>>size;
    cout<<"\nEnter the elements for Integer array:";
    for(int i=0;i<size;i++)
        cin>>arr1[i];
    cout<<"\nThe minimum element in the Integer array is:"<<arrMin<int>(arr1,size);
    cout<<"\nEnter the size of Float array:";
    cin>>size;
    cout<<"\nEnter the elements for Float array:";
    for(int i=0;i<size;i++)
        cin>>arr2[i];
    cout<<"\nThe minimum element in the Float array is:"<<arrMin<float>(arr2,size);
    cout<<"\nEnter the size of Char array:";
    cin>>size;
    cout<<"\nEnter the elements for Char array:";
    for(int i=0;i<size;i++)
        cin>>arr3[i];
    cout<<"\nThe minimum element in the Char array is:"<<arrMin<char>(arr3,size);
    return 0;
}
