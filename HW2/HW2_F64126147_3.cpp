#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
  int a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q=80,r[4][4];
  int s[4][4]={{2,1,1,2},{3,4,4,3},{4,7,7,4},{5,6,6,5}};
  cout<<"�ڤ����ĭx�i��A�Ы����x�U�F�R�O�A���p�x�O�I"<<endl;
  while (true){
    int x=0,y=0,win=0,lose=0;
    cout<<"a b c b"<<endl;
    cout<<"e f g h"<<endl;
    cout<<"i j k l"<<endl;
    cout<<"m n o p"<<endl;
    cout<<"�ڤ�@��"<<q<<"�U�H���x�O�i�ѫ����x�հʡI"<<endl;
    cout<<"�п�J�b a �I���p���x�O�]���G�U�H�^�G";
    cin>>a;
    cout<<"�п�J�b b �I���p���x�O�]���G�U�H�^�G";
    cin>>b;
    cout<<"�п�J�b c �I���p���x�O�]���G�U�H�^�G";
    cin>>c;
    cout<<"�п�J�b d �I���p���x�O�]���G�U�H�^�G";
    cin>>d;
    cout<<"�п�J�b e �I���p���x�O�]���G�U�H�^�G";
    cin>>e;
    cout<<"�п�J�b f �I���p���x�O�]���G�U�H�^�G";
    cin>>f;
    cout<<"�п�J�b g �I���p���x�O�]���G�U�H�^�G";
    cin>>g;
    cout<<"�п�J�b h �I���p���x�O�]���G�U�H�^�G";
    cin>>h;
    cout<<"�п�J�b i �I���p���x�O�]���G�U�H�^�G";
    cin>>i;
    cout<<"�п�J�b j �I���p���x�O�]���G�U�H�^�G";
    cin>>j;
    cout<<"�п�J�b k �I���p���x�O�]���G�U�H�^�G";
    cin>>k;
    cout<<"�п�J�b l �I���p���x�O�]���G�U�H�^�G";
    cin>>l;
    cout<<"�п�J�b m �I���p���x�O�]���G�U�H�^�G";
    cin>>m;
    cout<<"�п�J�b n �I���p���x�O�]���G�U�H�^�G";
    cin>>n;
    cout<<"�п�J�b o �I���p���x�O�]���G�U�H�^�G";
    cin>>o;
    cout<<"�п�J�b p �I���p���x�O�]���G�U�H�^�G";
    cin>>p;
    if(q<a+b+c+d+e+f+g+h+i+j+k+l+m+n+o+p){
      cout<<"�����x�հʪ��x�O�W�X�i�ѽհʪ��x�O�A�Ы����x���s�Ҽ{�I"<<endl;
      continue;
    }
    else{
      r[0][0]=a;
      r[0][1]=b;
      r[0][2]=c;
      r[0][3]=d;
      r[1][0]=e;
      r[1][1]=f;
      r[1][2]=g;
      r[1][3]=h;
      r[2][0]=i;
      r[2][1]=j;
      r[2][2]=k;
      r[2][3]=l;
      r[3][0]=m;
      r[3][1]=n;
      r[3][2]=o;
      r[3][3]=p;
      for(int u=0;u<4;u++){
        for(int v=0;v<4;v++){
          if(r[u][v]>=s[u][v]){
            x++;
            win=win+r[u][v]-s[u][v];
          }
          else{
            y++;
            lose=lose+s[u][v]-r[u][v];
          }
        }
      }
      if(x>=y){
        cout<<"���߫����x�ӧQ�I"<<endl;
        cout<<"*    *    *    ***    *    * "<<endl;
        cout<<" *   *   *      *     * *  * "<<endl;
        cout<<"  * * * *       *     *  * * "<<endl;
        cout<<"   *   *       ***    *    * "<<endl<<endl;
        cout<<"  **        **        **"<<endl;          
        cout<<"  ***       ***       ***"<<endl;
        cout<<"  ******    ******    ******"<<endl;
        cout<<"  ******    ******    ******"<<endl;
        cout<<"  ******    ******    ******"<<endl;
        cout<<"  ******    ******    ******"<<endl;
        break;
      }
      else{
        cout<<"�ĭx�}�C��ڤ�j�j�A�ڤ襢�Q"<<endl;
        cout<<"�b";
        if(r[0][0]<s[0][0]){
          cout<<"a ";
        }
        if(r[0][1]<s[0][1]){
          cout<<"b ";          
        }
        if(r[0][2]<s[0][2]){
          cout<<"c ";
        }
        if(r[0][3]<s[0][3]){
          cout<<"d ";
        }
        if(r[1][0]<s[1][0]){
           cout<<"e ";
        }
        if(r[1][1]<s[1][1]){
          cout<<"f ";
        }
        if(r[1][2]<s[1][2]){
          cout<<"g ";
        }
        if(r[1][3]<s[1][3]){
          cout<<"h ";
        }
        if(r[2][0]<s[2][0]){
          cout<<"i ";
        }
        if(r[2][1]<s[2][1]){
          cout<<"j ";
        }
        if(r[2][2]<s[2][2]){
          cout<<"k ";
        }
        if(r[2][3]<s[2][3]){
          cout<<"l ";
        }
        if(r[3][0]<s[3][0]){
          cout<<"m ";
        }
        if(r[3][1]<s[3][1]){
          cout<<"n ";
        }
        if(r[3][2]<s[3][2]){
          cout<<"o ";
        }
        if(r[3][3]<s[3][3]){
            cout<<"p ";
          }
        cout<<"�I�ڤ�x�O�����I"<<endl;
        cout<<"�ڤ覹���@�l��"<<lose<<"�U�H"<<endl;
        cout<<"�ڤ覹���@�Ʀs"<<win<<"�U�H"<<endl;
        cout<<"������ӧQ�A�ڤ�N�}�Үɥ����Ϯɶ��^��Ԫ��}�l���e�A�Ы����x���s��Ҩýհʭx�O�I"<<endl;
        cout<<"�ɥ����w�}�ҡI"<<endl;
        continue;
      }
    }
  }
 
  return 0;
}
