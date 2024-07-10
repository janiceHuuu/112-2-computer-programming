#include <iostream>
#include <cstdlib>
using namespace std;
void printCat(char winner);
void printCat2(char winner);
void printBoard(string C[0][10]);
bool checkWin(string C[0][10],int x,int y,string mark);
bool checkDraw(string C[0][10]);

int main() {
  //system("color E9");
  int end=0,X,Y,turn=0,number=0,scoreA=0,scoreB=0;
  string C[10][10],mark="O";
  for(int i=0;i<10;i++) {
    for(int j=0;j<10;j++) {
      C[i][j] = "_"; // 初始化棋盤
    }
  }
  char type='A';
  cout<<"歡迎來到五子棋遊戲！\n遊戲中玩家A執O棋，玩家B執X"<<endl;
  cout<<"祝你們遊玩愉快！"<<endl;
  printBoard(C);
        
  while (end<3){
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
        if (X>10 || X<1) {
          cout<<"該X座標不在範圍內，";
        }
        if (Y>10 || Y<1) {
          if (X>10 || X<1) {
            cout<<"且";
          }
          cout<<"該Y座標不在範圍內，";
        }
        if (X>=1 && X<=10 && Y>=1 && Y<=10 && C[X-1][Y-1]!="_") {
          cout<<"該座標已被輸入，";
        }
        cout<<"請玩家"<<type<<"重新輸入XY座標（座標間由空格隔開）：";
      } 

      else{
        cout<<"請玩家"<<type<<"輸入XY座標（座標間由空格隔開）：";
      }
      cin >> X >> Y;
      turn++;

      if ((X>=1 && X<=10) && (Y>=1 && Y<=10) && C[X-1][Y-1]=="_") {
        validInput=true;
      }
    }while(!validInput);
    turn=0;

    //將OX輸入進陣列中
    C[(X-1)][(Y-1)]=mark;

    //印出陣列
    printBoard(C);

    //判別勝負
    //cout<<"checkWin(C,Y,X,mark)="<<checkWin(C,X,Y,mark)<<endl;
    if(checkWin(C,X-1,Y-1,mark)==1){
      end=1;
      cout<<"此局由玩家"<<type<<"獲勝！"<<endl;
      printCat(type);
      type=='A'?scoreA++:scoreB++;
      cout<<"現在比分是(A:B)："<<scoreA<<":"<<scoreB<<endl;
    }
    if(checkDraw(C)==1){
      end=2;
      cout<<"現在比分是(A:B)："<<scoreA<<":"<<scoreB<<endl;
    }

    if(end!=0){
      cout<<"要不要再玩一局呢？如果要的話，請輸入yes，如果不要，請輸入no"<<endl;
      string n;
      cin>>n;
      if(n=="yes"){
        for (int i=0;i<10;i++) {
          for (int j=0;j<10;j++) {
            C[i][j]="_";
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
    type=(type=='A'?'B':'A');
    mark=(mark=="O"?"X":"O");
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
  cout<<"歡迎下次再度遊玩！"<<endl;
}

void printBoard(string C[0][10]) {
  cout<<endl;
  cout<<"   ";
  for(int i=1;i<=10;i++) {
    cout<<i<<" "; // 列印列號
  }
  cout << endl;
  for(int i=0; i<10;i++) {
    cout<<(i+1)<<(i+1<10?"  ":" "); // 列印行號
      for(int j=0;j<10;j++) {
        cout<<C[i][j]<<" "; // 列印棋子或空格
      }
    cout << endl;
  }
  cout<<endl;
}

bool checkWin(string C[0][10],int x,int y,string mark){
  // 水平檢查
  int count=0;
  for(int i=y-4; i<=y+4; i++) {
    if(i>=0 && i<10 && C[x][i] == mark) {
      count++;
      if(count==5){
        return true;
      }
    } 
    else{
      count=0;
    }
  }

  // 垂直檢查
  count=0;
    for(int i = x-4; i <= x+4; i++) {
      if(i >= 0 && i < 10 && C[i][y] == mark) {
        count++;
        if(count==5){
          return true;
        }
      } 
      else{
        count=0;
      }
    }

    // 對角線檢查（從左上到右下）
    count=0;
    for(int i=-4; i<=4; i++){
      if(x+i>=0 && x+i<10 && y+i>=0 && y+i<10 && C[x+i][y+i]==mark){
        count++;
        if(count==5){
          return true;
        }
      }
      else{
        count=0;
      }
    }

    //對角線檢查（從右上到左下）
    count=0;
    for(int i=-4;i<=4;i++){
      if(x-i>=0 && x-i<10 && x+i>=0 && y+i<10 && C[x-i][y+i]==mark){
        count++;
        if(count == 5){
          return true;
        }
      } 
      else{
        count=0;
      }
    }
    return false;
}

bool checkDraw(string C[0][10]) {
  for(int i=0;i<10;i++){
    for(int j=0;j<10;j++) {
      if(C[i][j]=="_") {
        return false; // 只要有一格是空的，就不是平手
      }
    }
  }
  return true; //所有格子都被佔據，是平手
}