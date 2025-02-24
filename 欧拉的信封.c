#include<stdio.h>
int main(){
	int n;
	scanf("the quantity of envelops is %d",&n);
	int i,sum=n-1;
	for(i=n-1;i>1;i--){
		sum+=i-1;
	}
	printf("there are(is) %d way(s) to envelop different letters",sum);
	return 0;
}