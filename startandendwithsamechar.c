# include <stdio.h>
# include <string.h>
// to check if a string ends and starts with same char
void main()
{
int t;
int i;
scanf("%d",&t);
for(i=0;i<t;i++){
char a[100];
scanf("%s",a);
if(a[0] == a[strlen(a)-1]){
printf("Starts and End with same Char\n");
}
else{
printf("No Match\n");
}
}
}
