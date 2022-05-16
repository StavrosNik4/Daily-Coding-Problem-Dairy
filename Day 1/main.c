#include <stdio.h>
#include <stdlib.h>

// function needed for the sorting part
int cmpfunc (const void * a, const void * b) {
    return ( *(int*)a - *(int*)b );
}

// funtion to check if there are
int check(int a[], int k) {
    int i=0, j = 6 - 1 ;
    int flag = -1;
    while(i<j)
    {
        if(a[i] + a[j] == k)
        {
            printf("%d + %d = %d\n", a[i], a[j], k);
            //return 0;  // comment out this line if you want to display only the first
            i++;
            j--;
            flag = 0;
        }
        if(a[i] + a[j] < k)
            i++;
        if(a[i] + a[j] > k)
            j--;
    }
    return flag;
}

int main() {

    int k = 17;
    int nums[6] = {10, 15, 3, 7, 11, 6};

    // sorting the list
    qsort(nums, 6, sizeof(int), cmpfunc);

    if(check(nums, k)==0){
        printf("true");
    } else{
        printf("false");
    }

    return 0;
}
