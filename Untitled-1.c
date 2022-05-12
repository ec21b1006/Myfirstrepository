#include <stdio.h>
int main()
{
    int a[50][50], r, c, i, j, size=0 ;
    printf("Enter the number of rows for your input matrix\n");
    scanf("%d", &r);
    printf("Enter the number of columns for your input matrix\n");
    scanf("%d", &c);
    for(i=0; i<r; i++)
        for(j=0; j<c; j++){
            printf("Enter the matrix element a[%d][%d]\n", i, j);
            scanf("%d", &a[i][j]);
        }
    for(i=0; i<r; i++)
        for(j=0; j<c; j++)
            if(a[i][j]!=0)
                size++;
    int b[3][size], k=0;
    for(i=0; i<r; i++)
        for(j=0; j<c; j++)
            if(a[i][j]!=0)
            {
                b[0][k]=i+1;
                b[1][k]=j+1;
                b[2][k]=a[i][j];
                k++;
            }
    for(i=0; i<3; i++){
        for(j=0; j<size; j++){
            if(i==2 && j==0)
            printf("%dsize\t", size);
            if(i==1 && j==0)
            printf("%dcolumn\t", c);
            if(i==0 && j==0)
            printf("%drow\t", r);
            printf("%d\t", b[i][j]);
        }
        printf("\n");
    }
    int a1[50][50], a2[50][50];
    for(i=0; i<r; i++)
        for(j=0; j<c; j++){
            printf("Enter the second matrix element a[%d][%d]\n", i, j);
            scanf("%d", &a1[i][j]);
        }
    int res[50][50];
    for(i=0; i<r; i++)
        for(j=0; j<c; j++){
            a1[i][j]= a[i][j] + a1[i][j];
        }
    size = 0;
    for(i=0; i<r; i++)
        for(j=0; j<c; j++)
            if(a1[i][j]!=0)
                size++;
    int d[3][size];
    k=0;
    for(i=0; i<r; i++)
        for(j=0; j<c; j++)
            if(a1[i][j]!=0)
            {
                d[0][k]=i+1;
                d[1][k]=j+1;
                d[2][k]=a2[i][j];
                k++;
            }
    for(i=0; i<3; i++){
        for(j=0; j<size; j++){
            if(i==2 && j==0)
            printf("%dsize\t", size);
            if(i==1 && j==0)
            printf("%dcolumn\t", c);
            if(i==0 && j==0)
            printf("%drow\t", r);
            printf("%d\t", d[i][j]);
        }
        printf("\n");
    }
    return 0;
}