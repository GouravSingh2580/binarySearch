/* Abiseno Arya Pramodana */
/* simple recursive binarySearch*/
/*=====================================================================================*/
#include <iostream>

int binarySearch(int arr[],int mid, int num, int arrL); // prototyping a function for binary search

int main() 
{
    int arr[10],num;
    for(int i = 0; i < 10; i++) //asking for input
    {
        std::cout << "enter number " << i+1 << ":" <<std::endl; std::cin >> arr[i];
    }
    std::cout << "enter number that you want to search : "; std::cin >> num; //asking for the number the user wants to search
    
    //getting Array length and middle of array
    int arrayLength = sizeof(arr)/sizeof(arr[0]) - 1;
    int mid = arrayLength/2;

    int search = binarySearch(arr,mid,num,arrayLength); //searching

    //error handling
    if(search > 10)
    {
        std::cout<< "number is not in the array" <<std::endl;
    }
    else
    {
        std::cout << "the number you are looking for is in index number : " << search << std::endl;
    }
    
}

//logic for binary search
int binarySearch(int arr[],int mid, int num, int arrL) 
{
    if(0 <= arrL)
    {
        if(arr[mid] == num )
        {
            return mid+1;
        }
    
        if(arr[mid] > num)
        {
            mid++;
            return binarySearch(arr,mid,num,arrL); //recursing function with mid+1
        }
        else if(arr[mid] < num)
        {
            mid++;   
            return binarySearch(arr,mid, num,arrL); //recursing function with mid+1
        }

    }
    return 11;

}