#include<iostream>
#include<cstdlib>
#include<conio.h>
#include<ctime>
using namespace std;

class playerBat{
public:
void match(int score){
//player input
int pNum, botNum;
cout<<"enter the number"<<endl;
while(true) {


cin>>pNum;
if(pNum>=0&&pNum<=6) {
break;
}
else{
cout<<"\"Wrong input\""<<endl;
match(score);
}
}
srand(time(NULL));
botNum=rand() % 6+1;


cout<<"enter the number :\t"<<pNum<<endl;
cout<<"bot number :\t"<<botNum<<endl;
if(pNum==botNum){
cout<<"Your OUT\n";

}

score+=pNum;
cout<<"score :\t"<<score<<endl;

match(score);

}
};





int main(){
playerBat mybat;
int scores=0;
mybat. match(scores);
}

