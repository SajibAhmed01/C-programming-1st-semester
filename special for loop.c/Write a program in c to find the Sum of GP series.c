#include <stdio.h>
#include <math.h>

int main()
{

    float g1,cr,i,n,j;
    float ntrm,gpn;
    float sum=0;

     printf("\n\n Find the Sum of GP series.:\n ");
     printf("-------------------------\n");

    printf("Input the first number of the G.P. series: ");
    scanf("%f",&g1);

    printf("Input the number or terms in the G.P. series: ");
    scanf("%f",&ntrm);

    printf("Input the common ratio of G.P. series: ");
    scanf("%f",&cr);

/*-------- generate G.P. series ---------------*/
     printf("\nThe numbers for the G.P. series:\n ");
	 printf("%f ",g1);
	 sum=g1;

     for(j=1;j<ntrm;j++)
       {
        gpn=g1*pow(cr,j);
		sum=sum+gpn;
        printf("%f  ",gpn);
       }
/*-------- End of G.P. series generate ---------------*/
    printf("\nThe Sum of the G.P. series : %f\n\n",sum);
    return 0;
}


