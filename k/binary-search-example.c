#include <stdio.h>

int bin_search(int x, int v[], int n);
int improved_bin_search(int x, int v[],  int high, int low);
int improved_bin_search_loops(int x, int v[], int high, int low);
int
main (int argc, char *argv[])
{
    int array[10] = {1,2,3,4,5,6,7,8,9,10};
    int x = 2;
    printf("\n\n%d\n\n",improved_bin_search(x,array,9,0));   
    return 0;
}

int 
improved_bin_search(int x, int v[], int high, int low)
{
    int h = high;
    int l = low;
    int mid = (h + l) / 2;
    
    if( x == v[mid] )
        return mid;
    else if (x > v[mid])
       return improved_bin_search(x, v, h, mid + 1);
    else
       return improved_bin_search(x, v, mid - 1, l);
    
    return -1 ;     //no match
}

int 
improved_bin_search_loops(int x, int v[], int high, int low)
{
    int h = high;
    int l = low;
    int mid = (h + l) / 2;
    
    if( x == v[mid] )
        return mid;
    else if (x > v[mid])
       return improved_bin_search(x, v, h, mid + 1);
    else
       return improved_bin_search(x, v, mid - 1, l);
    
    return -1 ;     //no match
}

int 
bin_search(int x, int v[], int n)
{
    int mid, low, high;
    high = n - 1;
    
    while(low < high){
        mid = (high+low) / 2;
        if(x == v[mid])
        {
            return mid;
        }
        else if (x < v[mid])
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }        
    }
    return -1;  //no match
}
