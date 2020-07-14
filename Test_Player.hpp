#ifndef Player_Header_h
#define Player_Header_h

#include <iostream>
#include <string>
using namespace std;

class Player{
  
private:
    vector<Player*> list;
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
    double test;
    double threePA;
    double threeP;
public:
    void parser(vector<string> player);
    Player(){};
    
};
#endif /* Player_Header_h */

