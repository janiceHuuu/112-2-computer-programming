#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
  int a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q=80,r[4][4];
  int s[4][4]={{2,1,1,2},{3,4,4,3},{4,7,7,4},{5,6,6,5}};
  cout<<"我方受到敵軍進攻，請指揮官下達命令，部署軍力！"<<endl;
  while (true){
    int x=0,y=0,win=0,lose=0;
    cout<<"a b c b"<<endl;
    cout<<"e f g h"<<endl;
    cout<<"i j k l"<<endl;
    cout<<"m n o p"<<endl;
    cout<<"我方共有"<<q<<"萬人的軍力可供指揮官調動！"<<endl;
    cout<<"請輸入在 a 點部署的軍力（單位：萬人）：";
    cin>>a;
    cout<<"請輸入在 b 點部署的軍力（單位：萬人）：";
    cin>>b;
    cout<<"請輸入在 c 點部署的軍力（單位：萬人）：";
    cin>>c;
    cout<<"請輸入在 d 點部署的軍力（單位：萬人）：";
    cin>>d;
    cout<<"請輸入在 e 點部署的軍力（單位：萬人）：";
    cin>>e;
    cout<<"請輸入在 f 點部署的軍力（單位：萬人）：";
    cin>>f;
    cout<<"請輸入在 g 點部署的軍力（單位：萬人）：";
    cin>>g;
    cout<<"請輸入在 h 點部署的軍力（單位：萬人）：";
    cin>>h;
    cout<<"請輸入在 i 點部署的軍力（單位：萬人）：";
    cin>>i;
    cout<<"請輸入在 j 點部署的軍力（單位：萬人）：";
    cin>>j;
    cout<<"請輸入在 k 點部署的軍力（單位：萬人）：";
    cin>>k;
    cout<<"請輸入在 l 點部署的軍力（單位：萬人）：";
    cin>>l;
    cout<<"請輸入在 m 點部署的軍力（單位：萬人）：";
    cin>>m;
    cout<<"請輸入在 n 點部署的軍力（單位：萬人）：";
    cin>>n;
    cout<<"請輸入在 o 點部署的軍力（單位：萬人）：";
    cin>>o;
    cout<<"請輸入在 p 點部署的軍力（單位：萬人）：";
    cin>>p;
    if(q<a+b+c+d+e+f+g+h+i+j+k+l+m+n+o+p){
      cout<<"指揮官調動的軍力超出可供調動的軍力，請指揮官重新考慮！"<<endl;
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
        cout<<"恭喜指揮官勝利！"<<endl;
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
        cout<<"敵軍陣列比我方強大，我方失利"<<endl;
        cout<<"在";
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
        cout<<"點我方軍力不足！"<<endl;
        cout<<"我方此次共損失"<<lose<<"萬人"<<endl;
        cout<<"我方此次共倖存"<<win<<"萬人"<<endl;
        cout<<"為獲取勝利，我方將開啟時光機使時間回到戰爭開始之前，請指揮官重新思考並調動軍力！"<<endl;
        cout<<"時光機已開啟！"<<endl;
        continue;
      }
    }
  }
 
  return 0;
}
