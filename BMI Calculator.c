#include<conio.h>
int main()
{
    float height;//in metre only
    float weight;//in kg only
    float BMI;//using float due to real value
    
    printf("Enter your height in metre\n");
    scanf("%f", &height);
    printf("Enter your weight in kg\n");
    scanf("%f", &weight);
    
    BMI = weight / (height * height);

    if(BMI <= 18.5)
    {
    printf("Your BMI is : %f underweight", BMI);
    }
    else if(BMI >18.6 && BMI <= 25)
    {
    printf("Your BMI is : %f normal", BMI);
    }
    else if(BMI >25.5 && BMI <= 30.5)
    {
    printf("Your BMI is : %f overweight", BMI);
    }
    else if(BMI > 30.8)
    {
    printf("Your BMI is : %f obese", BMI);
    }
    else
    {
        printf("user has put wrong entry\n");
    }
    getch();
    return 0;
}


    

    

 