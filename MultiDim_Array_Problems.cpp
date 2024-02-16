#include "iostream"
using namespace std;
//[1] check if the point is the greatest among all 8 surrounding points.
void mountain()
{
    int arr[100][100];
    int n , m ;
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>arr[i][j];
        }
    }
    int di[8]={0,1,-1,0,1,-1,1,-1};
    int dj[8]={1,1,1,-1,-1,-1,0,0};
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            bool is_mountain = true;
            for(int t=0;t<8 && is_mountain;t++)
            {
             int ni = i+di[t];
             int nj = j+dj[t];
             if(ni<0 || nj<0 ||ni>=n || nj>=m ) continue; // out of matrix
             if(arr[ni][nj] >= arr[i][j])is_mountain=false;

            }
            if(is_mountain)cout<<"index: "<<i<<" , "<<j<<"  value: "<<arr[i][j]<<endl;


        }
    }
}



int main()
{
// mountain();
}

