# include <stdio.h>
// to check the count of zeroes or one
int main(){
int t;
scanf("%d",&t);
char a[100];
while(t--){
//fflush(stdin);
fflush(stdout);
int cntone = 0;
int cntzero = 0;
fgets(a,100,stdin);
int i = 0;
while (a[i]  != '\0'){
if (a[i] == '1'){
cntone = cntone + 1;
}
else{
cntzero = cntzero + 1;
}
i=i+1;
}
printf("Number of zeroes %d Number of ones %d\n",cntzero,cntone);
}
return 0;
}
