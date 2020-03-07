/******************************************************************************

                 Computing Strongly Connected Components in oriented graph

*******************************************************************************/

#include <stdio.h>
# include <stdio.h>
#include <stdlib.h>
#include <time.h>
void main()
{
int t1[100];
int t2[100];
int m[100][100];
int t3[100];
int n,i,j,c,a;

{
printf("vertices numbers =  ");
scanf("%d",&n);
}
while((n<0)||(n>10));
for (i=0;i<n;i++)
for (j=0;j<n;j++)
{
if(i==j)
{
m[i][j]=0;
}
else
{
printf("m[%d][%d]",i,j);
scanf("%d",& m[i][j]);
}
}

for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
printf("%d \t",m[i][j]);
printf("\n");
}

for (i=0;i<n;i++)
{
t1[i]=0;
t2[i]=0;
}

do 
{
	printf("SCC of  ");
	scanf("%d",& c);
}
while((c<0)||(c>n));
printf("\n");
printf("\n"); 
t1[c]=1;
 t2[c]=1;

for(i=0;i<n;i++)
printf("%d \t",t1[i]);
printf("\n");
for(i=0;i<n;i++)
printf("%d \t",t2[i]);

printf("\n");
printf("\n");
for(int k=0;k<n;k++)
{
for(i=0;i<n;i++)
for(j=0;j<n;j++)
 if(m[i ][j]==1)
 {
if((t1[i]==1)&&(t1[j]==0))
t1[j]=1;
if ((t2[i]==0)&&(t2[j]==1))
t2[i]=1;
 }


}
for(i=0;i<n;i++)
printf("%d \t",t1[i]);
printf("\n");
for(i=0;i<n;i++)
printf("%d \t",t2[i]);

printf("\n"); 
a=0;
j=0;
for (i=0;i<n;i++)

if ((t1[i]==1)&&(t1[i]==t2[i]))
{

	t3[j]=i;
	a=a+1;
j++;
}
printf("SCC(%d)=",c);
for (i=0;i<a;i++)
printf("%d",t3[i]);
printf("\n");
printf("a=%d",a);
printf("\n");
if(a==n)

printf("The graph is strongly connected");
else 
printf("The graph is not strongly connected");
}