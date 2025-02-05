#include <stdio.h>
#include <math.h>
int main() {
    int radius;  
    printf(" the radius : ");
    scanf("%d", &radius);  
    int area = (int)(M_PI * radius * radius);      
    int perimeter = (int)(2 * M_PI * radius);     
    printf("Area: %d\n", area);          
    printf("Perimeter: %d\n", perimeter); 
    return 0; 
}