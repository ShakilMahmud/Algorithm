#include<bits/stdc++.h>
using namespace std;
int main()
{
    char x[10],y[10];
    int lcs[100][100];
    scanf("%s %s",x,y);
int l,l1;
l=strlen(x);
l1=strlen(y);
    for(int i=0;i<=l;i++) lcs[0][i]=0;
    for (int i=0;i<=l1;i++) lcs[i][0]=0;
    for(int i=0;i<=l;i++){
        for(int j=0;j<=l1;j++){
            if (x[i-1]==y[i-1])
                lcs[i][j]=lcs[i-1][j-1]+1;
            else
                lcs[i][j]=max(lcs[i][j-1],lcs[i-1][j]);
        }
    }
    printf("%d\n",lcs[l][l1]);

    return 0;
}
