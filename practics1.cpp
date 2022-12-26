#include<iostream>
using namespace std;
#define X 5
#define Y 6
int spiralMatrix(int row,int colum,int a[X][Y]){
    int i,s=0,t=0;
    while(s<row && t<colum){
        for(int i=t;i<colum;i++){
            cout<<a[s][i]<<" ";
        }
        s++;
        for(int i=s;i<row;i++){
            cout<<a[i][colum-1]<<" ";
        }
        colum--;
        if(s<row){
            for(int i=colum-1;i>=t;i--){
                cout<<a[row-1][i]<<" ";
            }
        row--;
        }
        if(t<colum){
        for(int i=row-1;i>=s;i--){
            cout<<a[i][t]<<" ";
            }
            t++;
        }
    }

}
int main()
{
    int a[X][Y]={ {1,5,7,9,10,11}, {6,10,12,13,20,21},{9,25,29,30,32,41},{15,55,59,63,68,70},{40,70,79,81,95,105}};
    spiralMatrix(X,Y,a);
    return 0;
}
