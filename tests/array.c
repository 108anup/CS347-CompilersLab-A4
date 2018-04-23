int a[10];		
int c[10];
int e;

int main(){
	int i;
	int b[10];
	int d;
	
  for(i = 0; i<10; i=i+1){
    a[i] = b[i] = i;
  }
  
  for(i = 0; i<10; i=i+1){
    c[i] = b[i];
  }
  
  e = d = a[5];
	return 0;
}
