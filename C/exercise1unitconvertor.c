#include <stdio.h>
//unit conversion program
/* Exercise of Units and Conversions

kms to miles
inches to foot
cms to inches
pound to kgs
inches to meters
fahrenheit to celsius

*/

int main(int argc, char const *argv[])
{
    float a,b,c,d,e,f,i;
    start:
    printf("enter the number for the required unit conversion\n");
    printf("0. to exit \n");
    printf("1. kms to miles \n");
    printf("2. inches to foot\n");
    printf("3. cms to inches\n");
    printf("4. pounds to kgs\n");
    printf("5. inches to meter\n");
    printf("6. farenheit to celsius\n");
    
    scanf("   %f" , &i);

    if (i == 0)
    {
        goto end;
    }
    else if (i==1)
    {
        printf("kms to miles\n enter the value in kms\n");
        scanf("%f" , &a);
        printf("the value in miles is %f\n\n" , a*0.6213712);
        goto start;
    }
    else if (i==2)
    {
         printf("inches to feet\nenter value in inches\n");
         scanf("%f" , &b);
         printf("the value in feet is %f\n\n" , b*0.08333333);
         goto start;
    }
    else if (i==3)
    {
        printf("cms to inches\nenter value in cms\n");
         scanf("%f" , &c);
         printf("the value in inches is %f\n\n" , c*0.3937008);
        goto start;
    }
    else if (i==4)
    {
        printf("pounds to kgs\nenter value in pounds\n");
         scanf("%f" , &d);
         printf("the value in kgs is %f\n\n" , d*0.4535924);
        goto start;
    }
    else if (i==5)
    {
        printf("inches to meter\nenter value in inches\n");
         scanf("%f" , &e);
         printf("the value in meter is %f\n\n" , e*0.0254);
        goto start;
    }
    else if (i==6)
    {
        printf("fahrenheit to celsius\nenter value in fahrenheit\n");
         scanf("%f" , &f);
         printf("the value in celsius is %f\n\n" , ((f*1.8) + 32) );
        goto start;
    }
    else
    {
        printf("ERROR\n\n\n\n");
        goto start;
    }
        
     end:
    return 0;
}
