#include <iostream>
#include <cstdlib>
using namespace std;
//char* set(char);

int main() {
  char s1[6],s2[6],s3[6],s4[6],s5[6];
  cin>>s1>>s2>>s3>>s4>>s5;
  char a[7][7]={{'0','0','0','0','0','0','0'},
      {'0',s1[0], s1[1], s1[2], s1[3], s1[4],'0'},
      {'0',s2[0], s2[1], s2[2], s2[3], s2[4],'0'},
      {'0',s3[0], s3[1], s3[2], s3[3], s3[4],'0'},
      {'0',s4[0], s4[1], s4[2], s4[3], s4[4],'0'},
      {'0',s5[0], s5[1], s5[2], s5[3], s5[4],'0'},
      {'0','0','0','0','0','0','0'}};
   char b[5][5];
   for(int i=0;i<5;i++){
      for(int j=0;j<5;j++){
         b[i][j]='0';
     }
   }
   for(int i=1;i<6;i++){
      for(int j=1;j<6;j++){
         if(a[i][j]=='*'){
            b[i-1][j-1]='*';
         }
         else{
            int count = 0;
            for(int k=i-1;k<i+2;k++){
               for(int r=j-1;r<j+2;r++){
                  if(a[k][r]=='*'){
                     count++;
                  }
               }
            }
            b[i-1][j-1] = count + '0';
         }
      }
   } 
   for(int i=0;i<5;i++){
      for(int j=0;j<5;j++){
         cout<<b[i][j];
      }
      cout<<endl;
   }
   cout<<endl;
  return 0;
}

