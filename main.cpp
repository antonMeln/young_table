#include <iostream>

using namespace std;

void write( int mas[3][3]){
  for (int i=0;i<3;i++){
    cout << "\n";
    for (int j=0;j<3;j++)
    cout << mas[i][j] << " ";
  }
}

void sort2(int &m1 ,int &m2){
  if (m1>m2) 
  swap(m1,m2);
}

void sort3(int &m1,int &m2, int &m3){
  if(m1>m3) swap(m1,m3);
  if(m1>m2) swap(m1,m2);
  if(m2>m3) swap(m2,m3);
}

int main() {
int  mas[3][3]= {0},n,k=0;
char op;

write(mas);

while (k < 9) {
  cin >> op;
  switch (op){
    
    case '=': write(mas);break;
    case '+': {
      cin >> n;
      
      if (k==0) mas[0][0]=n;
      if (k==1) {
        mas[0][1]=n;
        sort2(mas[0][0],mas[0][1]);
      }
      if (k==2) {
        mas[1][0]=n;
        sort2(mas[0][0],mas[0][1]);
        sort2(mas[0][0],mas[1][0]);
      }
      if (k==3) {
        mas[1][1]=n;
        sort2(mas[0][0],mas[0][1]);
        sort2(mas[0][0],mas[1][0]);
        sort2(mas[1][1],mas[1][0]);
        sort2(mas[1][0],mas[1][1]);
      }
      if (k==4) {
        mas[2][0]=n;
        sort3(mas[0][0], mas[1][0], mas[2][0]);
        sort2(mas[1][0], mas[1][1]);
        sort2(mas[0][0], mas[0][1]);
        sort3(mas[0][0], mas[1][0], mas[2][0]); 
    
      }
      if (k==5){
        mas[2][1]=n;
        
        sort2(mas[2][0],mas[2][1]);
        sort3(mas[0][0],mas[1][0],mas[2][0]);
        sort3(mas[0][1],mas[1][1],mas[2][1]);
        sort2(mas[2][0],mas[2][1]);
        sort2(mas[1][0],mas[1][1]);
        sort2(mas[0][0],mas[0][1]);
        
        
        
      }
      if (k==6) {
        mas[2][2]=n;
        
        sort3(mas[2][0], mas[2][1], mas[2][2]);
        sort3(mas[0][0], mas[1][0], mas[2][0]);
        sort3(mas[0][1], mas[1][1], mas[2][1]);
        sort3(mas[2][0], mas[2][1], mas[2][2]);
        sort2(mas[0][0], mas[0][1]);
        sort2(mas[1][0], mas[1][1]);
        
        
        
      }
      if (k==7) {
        mas[1][2]=n;
        
        sort3(mas[1][0], mas[1][1], mas[1][2]);
        sort3(mas[2][0], mas[2][1], mas[2][2]);
        sort2(mas[0][0], mas[0][1]);
        sort3(mas[0][0], mas[1][0], mas[2][0]);
        sort3(mas[0][1], mas[1][1], mas[2][1]);
        sort2(mas[1][2], mas[2][2]);
        
        
      }
      if (k==8) {
        mas[0][2]=n;
        
        sort3(mas[0][1],mas[1][1],mas[2][1]);
        sort3(mas[0][0],mas[1][0],mas[2][0]);
        sort3(mas[1][0],mas[1][1],mas[1][2]);
        sort3(mas[2][0],mas[2][1],mas[2][2]);
        sort3(mas[0][0],mas[0][1],mas[0][2]);
        sort3(mas[0][2],mas[1][2],mas[2][2]);
      }
      write(mas);
      k++;
      break;
    }
    case 'q': break;
  }
}

 return 0;

}
