 #include <stdio.h>

 int find_max(int a,int b)

  int main(void)
 {
    int max=find_max(10,25);
    printf("Maximum Value is: %d\n", max);
    return 0;
 }

 int find_max(int a,int b)
 {
    if (a>b) return a;
    else return b;
 }
