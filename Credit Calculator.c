#include<stdio.h>
void main() {
     int a[6],i,b,c,d,s=0;
     float e;
     printf("Enter credit marks in order : C, Mat, DF, Phy, ES, IC : ");
     
     //Marks around - 27 to 30, then Credit Marks = 10
     //Marks around - 24 to 26, then Credit Marks = 9
     //Marks around - 21 to 23, then Credit Marks = 8
     //Marks around - 18 to 20, then Credit Marks = 7
     //Marks around - 15 to 17, then Credit Marks = 6
     //Marks around - 12 to 14, then Credit Marks = 5    and so on...

     for(i=0;i<6;i++){
     scanf("%d",&a[i]);
     }
     for(i=0;i<6;i++){
          if(i==0 || i==1){
               b=6*a[i];
               s=s+b;
          }
          else if(i==2 || i==3){
               c=5*a[i];
               s=s+c;
          }
          else if(i==4 || i==5){
               d=2*a[i];
               s=s+d;
          }
     }
     e=s/26.0;
     printf("Credit = %2.3f",e);
}