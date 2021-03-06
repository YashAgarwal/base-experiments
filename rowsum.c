#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define N 10000
#define M 10

// int Addrow(int array1[N][N], int k);
// int Addcol(int array1[N][N], int k);

int main()
{
    int arr[N][N];
    int k;
    int i, j, rowsum, colsum;

    srand(time(NULL));  // should only be called once

    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
          arr[i][j] = rand();  // returns a pseudo-random integer between 0 and RAND_MAX
        }
    }

    clock_t start, end;
    double cpu_time_used;

    /*  computing row sum */
    cpu_time_used = 0;
    start = clock();
    for (i = 0; i < 1; i++)
    {
      rowsum = 0;
      k = (int)((double)rand() / ((double)RAND_MAX + 1) * N);
      for ( int l = 0; l < N; l++) {
          rowsum += arr[k][l];
      }
        
    }
      end = clock();
      cpu_time_used += ((double) (end - start)) / CLOCKS_PER_SEC;

    printf("Time to add rows %d times: %le\n", N, cpu_time_used);

    // /*  computing col sum */
    // cpu_time_used = 0;
    // start = clock();
    //
    // for (j = 0; j < M; j++)
    // {
    //   colsum = 0; //Addcol(arr1, i % N);
    //   k = (int)((double)rand() / ((double)RAND_MAX + 1) * N);
    //   for ( int l = 0; l < N; l++) {
    //       colsum += arr1[k][l];
    //     }
    // }
    // end = clock();
    // cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
    //
    // printf("Time to add columns %d times: %le\n", N, cpu_time_used);

    return 0;

}

/*  Function to add each row */
// int Addrow(int array1[N][N], int k)
// {
//     int rsum = 0, i;
//     for (i = 0; i < N; i++)
//     {
//         rsum = rsum + array1[k][i];
//     }
//     return(rsum);
// }

/*  Function to add each column */
// int Addcol(int array1[N][N], int k)
// {
//     int csum = 0, j;
//     for (j = 0; j < N; j++)
//     {
//         csum = csum + array1[j][k];
//     }
//     return(csum);
// }
