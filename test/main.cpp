#include <bits/stdc++.h>
using namespace std;

int main()
{
long long NumberRounds , ComputerTurn , UserTurn;

cout<<"Rock, paper, scissors game\n**************************\nselect how many rounds you want\n**************************\n";

while(true){
cin >> NumberRounds;
if(NumberRounds>0){
break;
}
else{

        cin.clear();


        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout<<"enter a valid number\n";

}
}

   cout<<"YOUR TURN\n*********\nchose a number\n1--->Rock\n2---> paper\n3--->scissors\n**************************\n";

   srand(time(0));
    ComputerTurn = 1+rand()%3;
    for(int i =1 ; i <=NumberRounds ; i++){
        cout<<"\n-------------\nRound Number:"<<i<<endl<<"-------------\n";
       while(true){
        cin>>UserTurn;
        if(UserTurn>=1 && UserTurn<=3){
            break;
        }
        else{
            cin.clear();
             cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout<<"enter a number between 1 and 3 please,\n";
        }
       }
        if(UserTurn==ComputerTurn){
            cout<<"YOU GOT IT RIGHT!";
            break;
        }
        else if (i==NumberRounds){
            cout<<"HAHAHA LOSER :)"<<endl;
        }
        else {
            cout<<"Try again"<<endl;
        }
    }


    return 0;
}
