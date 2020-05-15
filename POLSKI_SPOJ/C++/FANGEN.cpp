#include <iostream>

using namespace std;

int main()
{
    int fanRadius;
    int fanDiameter;
    while(cin>>fanRadius)
    {
        if(fanRadius>0) fanDiameter = 2*fanRadius;
        else fanDiameter = -2*fanRadius;
        char fanArray[fanDiameter][fanDiameter];

        //TOP LEFT QUARTER
        for(int i=0; i<fanDiameter/2; i++)
        {
            for(int j=0; j<fanDiameter/2; j++)
            {
                if(fanRadius>0)
                {
                    if(j>i) fanArray[i][j]='.';
                    else fanArray[i][j]='*';
                }
                else
                {
                    if(j<i) fanArray[i][j]='.';
                    else fanArray[i][j]='*';
                }

            }
        }
        //TOP RIGHT QUARTER
        for(int i=0; i<fanDiameter/2; i++)
        {
            for(int j=fanDiameter/2; j<fanDiameter; j++)
            {
             fanArray[i][j] = fanArray[(fanDiameter/2)-(i+1)][j-(fanDiameter/2)];
            }
        }
        //BOTTOM RIGHT QUARTER
        for(int i=fanDiameter/2; i<fanDiameter; i++)
        {
            for(int j=fanDiameter/2; j<fanDiameter; j++)
            {
             fanArray[i][j] = fanArray[j-(fanDiameter/2)][i-(fanDiameter/2)];
            }
        }
        //BOTTOM LEFT QUARTER
        for(int i=fanDiameter/2; i<fanDiameter; i++)
        {
            for(int j=0; j<fanDiameter/2; j++)
            {
             fanArray[i][j] = fanArray[i-(fanDiameter/2)][(fanDiameter/2)-(j+1)];
            }
        }
        //ARRAY PRINTER
        for(int i=0; i<fanDiameter; i++)
        {
            for(int j=0; j<fanDiameter; j++)
            {
                cout<<fanArray[i][j];
            }
            cout<<endl;
        }
        cout<<endl;
    }
    return 0;
}
