#include<stdio.h>
#include<math.h>
int nt(long long n){
	for(int i = 2; i <= sqrt(n); i++)
		if(n % i == 0) return 0;
	return 1;
}
long long uoc(long long n){
	if(nt(n)) return n;
	else{
		for(int i = 2; i <= sqrt(n); i++)
			if(n % i == 0) return uoc(n / i);	
	}
}
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		long long n;
		scanf("%lld",&n);
		printf("%lld\n", uoc(n));
	}
	return 0;
}
