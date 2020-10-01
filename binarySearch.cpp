#include <iostream>

void binarySearch(int arr[],int mid, int num, int arrL);

int main()
{
    int arr[10],num;
    for(int i = 0; i < 10; i++)
    {
        std::cout << "enter number " << i+1 << ":" <<std::endl; std::cin >> arr[i];
    }
    std::cout << "enter number you want to search : "; std::cin >> num;
    int arrayLength = sizeof(arr)/sizeof(arr[0]) - 1;
    int mid = arrayLength/2;

    binarySearch(arr,mid,num,arrayLength);

}

void binarySearch(int arr[],int mid, int num, int arrL)
{

    if(arr[mid] == num )
    {
        std::cout << "the number you are looking for is in index : " << mid+1 << std::endl;
    }
    
    if(arr[mid] > num)
    {
        mid = 1 +  mid;
        binarySearch(arr,mid,num,arrL);
    }
    else if(arr[mid] < num)
    {
        mid = 1 + mid;   
        binarySearch(arr,mid, num,arrL);
    }
    
}