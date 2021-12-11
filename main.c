#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{   int n,bi,de=0,i,j,a=0,b=0,c=0,d=0,e=0,f=0,g=0,h=0,choice;
    srand(time(NULL));

    do{
    printf("how many letters in the message:");
    scanf("%d",&n);
        for(i=1;i<=n;i++){
            printf("\nInput an encrypted message using binary number upt to 3 digits:");
            scanf("%3d",&bi);
                for(j=0;j<3;j++){
                    if(bi%10)
                        de=de+pow(2,j);    //binary to decimal//
                bi=bi/10;
                }
            switch(de)    //Hangi sayý hangi harfe karþýlýk geliyo//
            {
                case 0: printf("\n%d. encrypted letter is A and random number is %d",i,rand()%8); a++; break;
                case 1: printf("\n%d. encrypted letter is B and random number is %d",i,rand()%8); b++; break;
                case 2: printf("\n%d. encrypted letter is C and random number is %d",i,rand()%8); c++; break;
                case 3: printf("\n%d. encrypted letter is D and random number is %d",i,rand()%8); d++; break;
                case 4: printf("\n%d. encrypted letter is E and random number is %d",i,rand()%8); e++; break;
                case 5: printf("\n%d. encrypted letter is F and random number is %d",i,rand()%8); f++; break;
                case 6: printf("\n%d. encrypted letter is G and random number is %d",i,rand()%8); g++; break;
                case 7: printf("\n%d. encrypted letter is H and random number is %d",i,rand()%8); h++; break;
            }
            de=0;
            bi=0;
        }
            printf("\nInput 1 to continue and 0 exit.");
            scanf("%d",&choice);
        }while(choice==1);
            printf("\nnumber of letters after coding: A:%d,B:%d,C:%d,D:%d,E:%d,F:%d,G:%d,H:%d",a,b,c,d,e,f,g,h);




    return 0;
}
