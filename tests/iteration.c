	int first;
	int second;
	int n;
	int i;
	int current;

int main(){
	first = second = 1;
	n = 4;
	for(i = 0; i<n-2; i=i+1){
		current = first + second;
		first = second;
		second = current;
	}
}
