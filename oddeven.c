# include <stdio.h>
# include <string.h>
// to check if lenth of string is odd or even
void main()
{
fflush(stdin);
fflush(stdout);
int t;
printf("Number of Testcases\n");
scanf("%d",&t);
char a[100];
while(t--)
{
fflush(stdin);
fflush(stdout);
fgets(a,100,stdin);
if(strlen(a)%2 == 0){
printf("%ld",strlen(a));
puts("even length string");
}
else{
puts("odd length string");
}
}

}
