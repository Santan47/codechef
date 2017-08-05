#include<stdio.h>
#include<math.h>
void diff(int a[],int n);
char compareArray(int a[],int b[],int size);
int main(){
	int t,i,count=0,star=0,j,k=0,n,a[100],a_rev[100];
	scanf("%d",&t);
	for(j=0;j<t;j++){
		scanf("%d",&n);
		for(i=0;i<n;i++){
			scanf("%d",&a[i]);
		}
		for(i=n-1;i>=0;i--){
			a_rev[k]=a[i];
		k++;
		}
//		 for(k=0;k<n;k++){
  //                      printf("%d ",a_rev[k]);
    //            }
/*
//check a[i]==a_rev[i]------------------------
		int half;
		if(n%2==0){
		half=n/2;
		for(i=0;i<half-1;i++){
			if(a[i+1]-a[i]!=1&&a[i+1]-a[i]!=0){
				printf("no1\n");
			}
			else
			continue;
		}
		}
		else if(n%2==1){
		 half=(n+1)/2;
                for(i=1;i<half;i++){
                         if(a[i+1]-a[i]!=1&&a[i+1]-a[i]!=0){
                                printf("%d NO\n",a[i]);
                        }
			else
			continue;
		}
*/
		 if(compareArray(a,a_rev,n)==0){
                        diff(a,n);
                }
                else{
                        printf("no3\n");
		}
		
}
return 0;
}
char compareArray(int a[],int b[],int size)	{
	int i;
	for(i=0;i<size;i++){
		if(a[i]!=b[i])
			return 1;
	}
	return 0;
}
void diff(int a[],int n){
	int i,half,count_even=0,count_odd=0;
	if(n%2==0){
	half=n/2;
		for(i=0;i<half-1;i++){
			if(a[i+1]-a[i]!=0){
				if(a[i+1]-a[i]!=1){
					printf("no-even\n");
					break;
				}
				else
				count_even++;
			}
			else
			count_even++;
		}
		if(count_even==half){
			printf("yes-even\n");
		}
	}
	else if(n%2==1){
	 half=(n-1)/2;
	printf("%d\n",half);
                for(i=0;i<half;i++){
                        if(a[i+1]-a[i]!=0){
                                if(a[i+1]-a[i]!=1){
                                        printf("no-odd\n");
                                        break;
                                }
                                else
                                count_odd++;
                        }
                        else
                        count_odd++;
                }
                if(count_odd==half){
                        printf("yes-odd\n");
                }
	}
}
