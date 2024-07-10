#include <iostream>
#include <cstdlib>
using namespace std;
void printCat(char winner);
void printCat2(char winner);
void printBoard(string C[0][3]);

int main() {
  //system("color E9");
  int end=0,X,Y,turn=0,number=0,scoreA=0,scoreB=0;
  char type='A',mark='O';
  string C[3][3];
  for(int i=0;i<3;i++) {
    for(int j=0;j<3;j++) {
      C[i][j] = "_"; // 初始化棋盤
    }
  }
  cout<<"歡迎來到五子棋遊戲！\n遊戲中玩家A執O棋，玩家B執X"<<endl;
  cout<<"祝你們遊玩愉快！"<<endl;
  printBoard(C);
  
  while (end<3){
    end=0;
    bool validInput=false;
    //判別輸入是否有效
    do {
      if(turn!=0){
        if(turn>=3){
          cout<<endl;
          cout << "\\    /\\ #請玩家好好輸入！"<<endl;
          cout << " )  ( ')"<<endl;
          cout << "(  >  )"<<endl;
          cout << " \\(__)|"<<endl<<endl;
        }
        if (X>3 || X<1) {
          cout<<"該X座標不在範圍內，";
        }
        if (Y>3 || Y<1) {
          if (X>3 || X<1) {
            cout<<"且";
          }
          cout<<"該Y座標不在範圍內，";
        }
        if (X>=1 && X<=3 && Y>=1 && Y<=3 && C[X-1][Y-1]!="_") {
          cout<<"該座標已被輸入，";
        }
        cout<<"請玩家"<<type<<"重新輸入XY座標（座標間由空格隔開）：";
      } 
      
      else{
        cout<<"請玩家"<<type<<"輸入XY座標（座標間由空格隔開）：";
      }
      cin >> X >> Y;
      turn++;
      
      if ((X>=1 && X<=3) && (Y>=1 && Y<=3) && C[X-1][Y-1]=="_") {
        validInput = true;
      }
    } while (!validInput);
    turn = 0;

    //將OX輸入進陣列中
    C[(X-1)][(Y-1)]=mark;

    //印出陣列
    printBoard(C);
    
    //判別勝負
    for(int i=0;i<3;i++){
      //判別橫向連線
      if(C[i][0]!="_"){
        if(C[i][0]==C[i][1]){
          if(C[i][1]==C[i][2]){
            cout<<"透過橫向連線，";
            cout<<"玩家"<<type<<"獲勝！"<<endl;
            printCat(type);
            type=='A'?scoreA++:scoreB++;
            cout<<"現在比分是(A:B)："<<scoreA<<":"<<scoreB<<endl;
            end=1;
          }
        }

      }

      //判別直向連線
      if(C[1][i]!="_"){
        if(C[0][i]==C[1][i]){
          if(C[1][i]==C[2][i]){
            cout<<"透過直向連線，";
            cout<<"玩家"<<type<<(end==1?"再次":"")<<"獲勝！"<<endl;
            printCat(type);
            type=='A'?scoreA++:scoreB++;
            cout<<"現在比分是(A:B)："<<scoreA<<":"<<scoreB<<endl;
            end=1;
          }
        }
      }
    }
    //判別斜連線
    if(C[1][1]!="_"){
      if(C[0][0]==C[1][1]){
        if(C[1][1]==C[2][2]){
          cout<<"透過斜向連線，";
          cout<<"玩家"<<type<<(end==1?"再次":"")<<"獲勝！"<<endl;
          printCat(type);
          type=='A'?scoreA++:scoreB++;
          cout<<"現在比分是(A:B)："<<scoreA<<":"<<scoreB<<endl;
          end=1;
        }
      }
      if(C[0][2]==C[1][1]){
        if(C[1][1]==C[2][0]){
          cout<<"透過斜向連線，";
          cout<<"玩家"<<type<<(end==1?"再次":"")<<"獲勝！"<<endl;
          printCat(type);
          type=='A'?scoreA++:scoreB++;
          cout<<"現在比分是(A:B)："<<scoreA<<":"<<scoreB<<endl;
          end=1;
        }
      }
    }
    //判別平手
    if(number==9 && end==0){
      cout<<"\t雙方平手！"<<endl;
      printCat2('A');
      printCat2('B');
      cout<<"現在比分是(A:B)："<<scoreA<<":"<<scoreB<<endl;
      end=2;
    }
    
    if(end!=0){
      cout<<"要不要再玩一局呢？如果要的話，請輸入yes，如果不要，請輸入no"<<endl;
      string n;
      cin>>n;
      if(n=="yes"){
        for (int i = 0; i < 3; i++) {
          for (int j = 0; j < 3; j++) {
            C[i][j] = "_";
          }
        }
        printBoard(C);
        cout<<"換"<<(end==1?"輸":"前一局後手")<<"的玩家先開始!"<<endl; 
        end=0;
        number=0;
      }
      else if(n=="no"){
        if(scoreA>scoreB){
          cout<<"恭喜A獲得最終勝利！！"<<endl;
          printCat2('A');
        }
        else if(scoreA<scoreB){
          cout<<"恭喜B獲得最終勝利！！"<<endl;
          printCat2('B');
        }
        else if(scoreA==scoreB){
          cout<<"A和B平手！！"<<endl;
          printCat2('A');
          printCat2('B');
        }
        end=3;
      }
    }
    number++;
    type = (type == 'A' ? 'B' : 'A');
    mark = (mark == 'O' ? 'X' : 'O');
  }
  return 0;
}

void printCat(char winner) {
  cout << "\t\t    /\\_/\\  " << endl;
  cout << "\t\t   ( o.o ) " << endl;
  cout << "\t\t    > ^ <  " << endl;
  cout << "\t\t   /     \\ " << endl;
  cout << "\t\t  / I ❤ " << winner << " \\ " << endl;
  cout << "\t\t /_________\\ " << endl;
}

void printCat2(char winner) {
  cout << "\t\t  /\\_/\\     " << endl;
  cout << "\t\t ( o.o )    " << endl;
  cout << "\t\t  > ^ <     " << endl;
  cout << "\t\t / \\_/ \\  " << endl;
  cout << "\t\t/_______\\  " << endl;
  cout << "\t\t ❤❤❤" << winner << "❤❤❤" << endl;
  cout<<"\t歡迎下次再度遊玩！"<<endl;
}

void printBoard(string C[3][3]){
  cout<<endl;
  cout<<"\t\t  ";
  for(int i=1;i<=3;i++) {
    cout<<i<<" "; // 列印列號
  }
  cout<<endl;
  for(int i=0;i<3;i++){
    cout<<"\t\t"<<i+1<<" ";
    for(int j=0;j<3;j++){
      cout<<C[i][j]<<" ";
    }
    cout<<endl;
  }
  cout<<endl;
}