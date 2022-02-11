# include <stdio.h>
void areaper(int,float*,float*);
int main()
{
    int radius;
    float area,perimeter;
    printf("enter the raduis");
    
scanf ( "%d", &radius ) ;
areaperi ( rad, &ara, &perier ) ;
printf ( "Area = %f\n", area ) ;
printf ( "Perimeter = %f\n", perimeter ) ;
return 0 ;
}
void areaperi ( int r, float *a, float *p )
{
*a = 3.14 * r * r ;
*p = 2 * 3.14 * r ;
}

