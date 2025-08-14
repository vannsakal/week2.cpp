#include <iostream>
using namespace std;

double computeAverage(const int arr[], int size){
    double sum=0;
    for(int i=0; i<size; i++){
        sum += arr[i];
    }
    return sum/size;
};

int findMin(const int arr[], int size){
    int min=0;
    for(int i=0; i<size; i++){
        if(min>arr[i]){
            min = arr[i];
        }
    }
    return min;
};
int findMax(const int arr[], int size){
    int max=0;
    for(int i=0; i<size; i++){
        if(max<arr[i]){
            max = arr[i];
        }
    }
    return max;
};

int main(){
    int size;
    int arr[size];
    cout<<"How many Numbers: "<<endl;
    cin >> size;
    cout<<"Enter numbers: "<<endl;
    for(int i =0; i<size; i++){
        cin >> arr[i];
    }
    cout<<computeAverage(arr, size)<<endl;
    cout<<findMin(arr, size)<<endl;
    cout<<findMax(arr, size)<<endl;
    return 0;
}