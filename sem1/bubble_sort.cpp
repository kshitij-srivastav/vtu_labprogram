#include <bits/stdc++.h> 
using namespace std; 
  

// A function to implement bubble sort  
void bubbleSort(int arr[], int n)  
{  
     int temp, check;
    for (int i = 0; i < n - 1; i++)
    {
        check = 0;
        for (int j = 0; j < n - i - 1; j++)
        {
            //swapping
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                check++;
            }
        }
        // check keeps track if any swap happened or not, if swap not happened then array is sorted and it will break out of the loop
        if (!check)
            break;
    }
}
  
int main()  
{  
    int n,arr[n];
    cout<<"Enter the number of elements:\n";
    cin>>n;
    cout<<"Enter the elements of the array:\n";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    bubbleSort(arr, n);
    cout<<"The sorted array is:\n";
    for(int i = 0;i < n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;  
}  
