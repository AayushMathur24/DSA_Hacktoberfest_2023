#include <iostream>
using namespace std;

int main()
{
    int r,c;
    cout<<"Enter number of rows : ";
    cin>>r;
    cout<<"Enter number of columns : ";
    cin>>c;
    int arr[r][c];
    cout<<"Enter matrix : \n";
    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
            cin>>arr[i][j];
    int x=0;
    cout<<"Snake pattern for the entered matrix : \n";
    while(x<r)
    {
        if(x%2==0)
        {
            for(int y=0;y<c;y++)
                cout<<arr[x][y]<<' ';
            x++;
        }
        else
        {
            for(int y=c-1;y>=0;y--)
                cout<<arr[x][y]<<' ';
            x++;
        }
    }
}
