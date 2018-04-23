int a[3][3];
int b[3][3];
int c[3][3];

int main(){
  int i; int j; int k;
  
  for(i = 0; i<3; i=i+1){
    for(j = 0; j<3; j=j+1){
      a[i][j] = i+j+1;
      b[i][j] = (i+1)*(j+1);
    }
  }
  
  for(i = 0; i<3; i=i+1){
    for(j = 0; j<3; j=j+1){
      for(k = 0; k<3; k=k+1){
        c[i][j] = c[i][j] + a[i][k]*b[k][j];
      }
    }
  }

  return 0;
}
