#include<stdio.h>
int main(){
	char a[50];
	int i;
	
	printf("enter char : ");
	scanf("%s",a);
	
	if(a[0]>='a' && a[0]<='z'){
	   a[0] -=32;
	}
	
	for(i=1; a[i] != '\0'; i++){
		if(a[i]>='A' && a[i]<= 'Z'){
			a[i] += 32;
	}
}
		printf("%s",a);
	
return 0;

}

