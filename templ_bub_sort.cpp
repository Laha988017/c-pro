#include <iostream>
using namespace std;
template <class T>
void bubble_sort(T arr[],int size){
    T temp;
    int swaps;
    for(int i=0;i<size-1;i++){
        swaps=0;
        for(int j=0;j<size-i-1;j++)
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                swaps++;
            }
        if(!swaps)
            break;
    }
}
template <class T>
void arrDisplay(T arr[],int size){
    for(int i=0;i<size;i++)
        cout<<arr[i]<<" ";
}
int main(){
    int arr[10],size;
    float arr2[10];
    char arr3[10];
    cout<<"\nEnter the Size of Integer array:";
    cin>>size;
    cout<<"\nEnter elements of Integer array:";
    for(int i=0;i<size;i++)
        cin>>arr[i];
    bubble_sort<int>(arr,size);
    cout<<"\nThe sorted Integer array is:";
    arrDisplay<int>(arr,size);
    cout<<"\nEnter the Size of Float array:";
    cin>>size;
    cout<<"\nEnter elements of Float array:";
    for(int i=0;i<size;i++)
        cin>>arr2[i];
    bubble_sort<float>(arr2,size);
    cout<<"\nThe sorted Float array is:";
    arrDisplay<float>(arr2,size);
    cout<<"\nEnter the Size of Char array:";
    cin>>size;
    cout<<"\nEnter elements of Char array:";
    for(int i=0;i<size;i++)
        cin>>arr3[i];
    bubble_sort<char>(arr3,size);
    cout<<"\nThe sorted Integer array is:";
    arrDisplay<char>(arr3,size);
    return 0;
}
