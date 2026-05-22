#include <stdio.h>

int main () {
    int choice, kms, inches, cms, pounds;

    printf("select the type of conversion you want, 1 for km to miles, 2 for inches to foot, 3 for cms to inches, 4 for pounds to kgs, 5 for inches to meters");
    scanf("%d", &choice);
    switch (choice)
    {
        case 1:
        printf("enter the value in kms : ");
        scanf("%d", &kms);

        printf("the value of %d in miles is %f", kms, 0.624*kms);
        break;

        case 2:
        printf("enter the value in inches ");
        scanf("%d", &inches);

        printf("the value of %d in foot is %f", inches, 0.0833*inches);
        break;

        case 3:
        printf("enter the value in cms : ");
        scanf("%d", &cms);

        printf("the value of %d in foot is %f", inches, 0.394*cms);
        break;

        case 4:
        printf("enter the value in pounds : ");
        scanf("%d", &pounds);

        printf("the value of %d in foot is %f", inches, 0.454*pounds);
        break;

        case 5:
        printf("enter the value in inches : ");
        scanf("%d", &inches);

        printf("the value of %d in foot is %f", inches, 0.0254*inches);
        break;

        default:
        printf("invalid choice");
        

    }

    return 0;

}