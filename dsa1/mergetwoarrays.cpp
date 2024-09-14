#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    //input: 2 sorted arrays
    //output: 1 merged array

    //create a new array
    //Loop through the other arrays adding the lesser one before

    int arr1[5] = {1,1,1,5,8};
    int arr2[3] = {4,6,7};

    int arr1Length = 5;
    int arr2Length = 3;

    int arrayLength = 8;

    int arr3[arrayLength];
    int i= 0;
    int j = 0;
    int k = 0;


    while(i<arr1Length && j<arr2Length){
        if(arr1[i] <= arr2[j]){
            arr3[k] = arr1[i];
            i++;
            k++;
        }
        else{
            arr3[k] = arr2[j];
            j++;
            k++;
        }


    }
    while(i<arr1Length){
        arr3[k] = arr1[i];
        i++;
        k++;
    }
    while(j<arr2Length){
        arr3[k] = arr2[j];
        j++;
        k++;
    }


    for(int i=0;i<arrayLength;i++){
        cout<<arr3[i]<<endl;
    }



    return 0;
}
