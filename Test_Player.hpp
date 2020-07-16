#ifndef Test_Player_hpp
#define Test_Player_hpp
#include <stdio.h>
#include <iostream>
#include <string>
#include <list>
#include <vector>

using namespace std;

class Player{
  
private:
    vector<Player*> player_list;
    int rank;
    string name;
    string team;
     double rebounds;
    double points;
    double assists;
    double steals;
    double blocks;
    double FGPercent;
    double FGA;
    double threePA;
    double threeP;
    
    
public:
     Player(int rank, string naem, string team, double rebounds, double points, double assists,
            double steals, double blocks, double FGPerecent, double FGA, double threePA, double threeP);
    void Parser(list<string> player);
    void getplayer(string p);
    void main();
   
    
};
#endif /* Player_Header_h */
