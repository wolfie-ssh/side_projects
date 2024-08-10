 #include <stdio.h>

void add_one(int array[], int length);


int main(void) 
{
    int a[]={2,4,8,10,12,16};
    printf("a: %p\n", a);

    add_one(a, 6);
    for (int i = 0; i < 6; i++)
    printf("a[%d]=%d\n", i, a[i]);
    return 0;
    
}

void add_one(int array[], int length)
{   
    printf("array: %p\n", array);
    for (int  i = 0; i < length; i++)
    {
        array[i] +=1;
    }
    
}



// Pass By Value
// Below Program Is An Example For A Case of The Above Program
/*  #include <stdio.h>

void increment(int n) {
    n += 1;
    printf("Inside Function: n = %d\n", n);
}

int main(void) {
    int x=5;
    increment(x);
    printf("After Function Call: %d\n", x);
    return 0;
} 

*/ //Comment End