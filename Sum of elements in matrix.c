#include<stdio.h>
int main(){
	int a[100][100],r,c,i,j,sum=0;
	printf("Rows");
	scanf("%d",&r);
	printf("Columns");
	scanf("%d",&c);
	printf("Elements of matrix are:");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			sum=sum+a[i][j];
		}
	}
	printf("The Sum of All the elements in the matris is %d",sum);
	
}
