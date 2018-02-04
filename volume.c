#include<stdio.h>
void volume(float *rad, float *ht);
void main()
{
float vol,radius,height;
volume(&radius,&height);
}
void volume(float *rad,float *ht)
{float vol;
printf("Enter the radius of the cylinder :");
scanf("%f",&*rad);
printf("Enter the height of the cylinder :");
scanf("%f",&*ht);
vol=(3.14*(*rad)*(*rad)*(*ht));
printf("Volume of the cylinder is %f",vol);


}
