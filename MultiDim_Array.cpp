#include "iostream"
using namespace std;
int main()
{


    int arr[4][3]={
            {1,2,3,},
            {4,5,6},
            {7,8,9},
            {10,11,12}
    };
    //------------------------------
    // Convert from 2D -> 1D
    // idx = (i * COLS)+j
    //------------------------------

    int idx=0; // index in flatten array
    for(int i = 0;i<4;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<"index: "<<idx<<" "<<"Row: "<<i<<" "<<"Column: "<<j<<endl;
            idx++;
        }
    }

    //------------------------------
    // convert from 1D -> 2D
    // i = idx / COLS
    // j = idx % COLS

    //------------------------------


    //Direction arrays:
    // down , right , up , left
    int di[4]={1,0,-1,0};
    int dj[4]={0,1,0,-1};


}