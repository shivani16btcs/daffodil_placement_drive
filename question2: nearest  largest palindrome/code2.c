#include <string.h>
#include <stdio.h>
int main(){
	int num,n,m,i=0,j=1,a[100],b[100],k,count_9=0;
	scanf("%d", &num);              			
	n=num;
	
	while(n!=0){
		m=n%10;
		a[i++]=m;
		n=n/10;
	}   
	for(k=0;k<i;k++){
		b[k]=a[i-k-1];
		if(b[k]==9)
		count_9++;
	}
	if(count_9==i){
		goto PRINT;
	}
	if(i%2==0){
		int mid=(i-1)/2;
		int l=mid;
		int r=mid+1;

		while(b[l]==b[r]&&l>=0){
				l--;
				r++;
		}
		
		if(b[l]>b[r]){
			//take the mirror of first half to right half
			while(l>=0){
				b[r]=b[l];
				l--;
				r++;
			}
		goto PRINT;
		}
		if(b[l]<b[r]){
			b[l]++;
			while(l>=0){
				//take the mirror of right half to left half

				b[r]=b[l];
				l--;
				r++;
			}
		goto PRINT;
		}
	}
	else{
	int mid=(i-1)/2;
	int l=mid-1;
	int r=mid+1;
		while(b[l]==b[r]&&l>=0){
				l--;
				r++;
		}

		if(b[l]>b[r]){
			while(l>=0){
				b[r]=b[l];
				l--;
				r++;
			}
		goto PRINT;
		}

		if(b[l]<b[r]){
			b[mid]++;
			while(l>=0){
				//take the mirror of right half to left half

				b[r]=b[l];
				l--;
				r++;
			}
		goto PRINT;
		}

	}
	


	PRINT:
	for(k=0;k<i;k++){
		printf("%d",b[k]);
	}
}
