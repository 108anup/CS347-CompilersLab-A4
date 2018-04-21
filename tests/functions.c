int a;

int fact(int n){
	if(n == 1){
		return 1;
	}
	else{
		return n * fact(n-1);
	}
}

int main(){
	a = fact(5);
	return a;
}
