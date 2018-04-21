int main(){
	int first;
	int second;
	int n;
	int i;
	int current;
	first = second = 1;
	n = 4;
	for(i = 0; i<n-2; ++i){
		current = first + second;
		first = second;
		second = current;
	}
}
