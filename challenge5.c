#include <stdio.h>
int main(){
    int choice,n,i,fact,j;
    float a,b,c,x,d,r1,r2,sq;
    
    do{
        printf("linear equation\n");
        printf("factorial\n");
        printf("quadratic equation\n");
        printf("exit\n");
        printf("enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
            printf("enter a and b: ");
            scanf("%f %f",&a,&b);

            if(a != 0){
            printf("x = %.2f\n", -b/a);}

            else if (b == 0){
            printf("infinite solutions");}

            else{
            printf("no solution");}
            break;

            case 2:
            printf("enter n(0 to 12): ");
            scanf("%d", &n);

            if(n<0 || n>12){
                printf("invalid input");}

                else{
                    fact = 1;
                    for (i=1; i<=n; i++)
                    fact = fact*i;
                printf("factorial = %d\n", fact);}
                break;

            case 3:
            printf("Enter a, b and c: ");
            scanf("%f %f %f", &a, &b, &c);

        if (a == 0){
        printf("Not a quadratic equation\n");}
        else
        {
        d = b * b - 4 * a * c;

        if (d > 0)
        {
            sq = d;

            for (j = 0; j < 50; j++)
            sq = (sq + d / sq) / 2;

            r1 = (-b + sq) / (2 * a);
            r2 = (-b - sq) / (2 * a);

            printf("Root 1 = %.2f\n", r1);
            printf("Root 2 = %.2f\n", r2);
        }
        else if (d == 0){
            r1 = -b / (2 * a);
            printf("Equal roots = %.2f\n", r1);}
        else{
            printf("No real roots\n");
        }
    }
    break;
    case 4:
    printf("program exited\n");

    default:
    printf("invalid input");
    break;       
        }
    } while(choice != 4);
    return 0;
}