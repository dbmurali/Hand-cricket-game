#include<iostream>
#include<ctime>
//#include<ctime>
using namespace std;

/*void var(){
int pNum, botNum, score;
cin>>pNum;
botNum=rand()%6+1;
score=0;
}*/

void toss(){
cout<<"\"HEADS\"\t or\t\"TAILS\""<<endl<<"ENTER 1 OR 2"<<endl;
cout<<"(ENETER 1 FOR HEADS)\t(ENTER TWO FOR TAILS) "<<endl;
int player;
while(true){

cin>>player;
if(player>0&&player<=2){
break;

}else{
cout<<"wrong input"<<endl;
}

}

int toss;
srand(time(NULL)) ;
toss=rand()%2+1;
switch(toss){
case 1:
cout<<"HEADS"<<endl;
break;
case 2:
cout<<"TAILS"<<endl;
break;
}
if(player==toss){
cout<<"PLAYER WIN";}
else{
cout<<"BOT WINS";}
}
 void match(){
 

 }
 
 void player(){
 
 }

void bot(){

}

int main(){
toss();


}