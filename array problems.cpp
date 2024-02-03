//
// Created by A-Fayez on 2/3/2024.
//
#include <iostream>

using namespace std;

//count sort algorithm
void countsort() {
    int x;
    cin >> x;
    int *arr = new int[x]{0};
    int freq[1000] = {0};
    int max = arr[0];
    for (int i = 0; i < x; i++) {
        cin >> arr[i];
        freq[arr[i]]++;
        if (max < arr[i]){max = arr[i];}
    }
    cout << "sorted array: ";
    for (int i = 0; i <1000; i++) {
        for (int j = 0; j < freq[i]; j++) {
            cout << i << " ";
        }
    }

}
void get_value_recaman(int x )
{
    int freq[1000] = {0};
    int arr[1000] = {0};
    arr[0] = 0;
    freq[0] = 1;
    for (int i = 1; i <=x; i++)
    {

        int temp = arr[i - 1] - (i - 1) - 1;
        if (temp > 0 && freq[temp] == 0)
        {
            arr[i] = temp;
            freq[temp]++;
        }
        else
        {
            temp = arr[i - 1] + (i - 1) + 1; // Update temp with new value
            arr[i] = temp;
            freq[temp]++;
        }


    }
cout<<arr[x];
}

//insert integer and return what is the value of this index
//in Recaman's sequence


int main() {
    // countsort();
   //  get_value_recaman(7);


}
