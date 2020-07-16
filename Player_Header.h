#ifndef Player_Header_h
#define Player_Header_h

#include <iostream>
#include <string>
#include <list>
#include <vector>
#include <stdio.h>
using namespace std;

class Player{
  
private:
    //vector<Player> list;
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
   // double test;
    double threePA;
    double threeP;
public:
   void Parser(std::list<string> player);
    void getplayer(string input);
    void main();
    Player(int rank, string naem, string team, double rebounds, double points, double assists, double steals, double blocks, double FGPerecent, double FGA, double threePA, double threeP);

    //Player(){};
     /*Player(vector<string> player){

    vector<string>::const_iterator i = player.begin();
        while (i != player.end()) {
           
            if (rank == 0) {
                istringstream iss(*i);
                iss >> rank;
                ++i;
            }
            if (name == " ") {
                istringstream iss(*i);
                iss >> name;
                ++i;
                string last = " ";
                istringstream isss(*i);
                isss >>last;
                name = name + " " + last;
                ++i;
            }
            if (team == " ") {
                istringstream iss(*i);
                iss >> team;
                ++i;
            }
         
            if (FGA == 0) {
                istringstream iss(*i);
                iss >>FGA;
                ++i;
            }
            if (FG == 0) {
                istringstream iss(*i);
                iss >> FG;
                ++i;
            }
            if (threePA == 0) {
                istringstream iss(*i);
                iss >>threePA;
                ++i;
            }
            if (threeP == 0) {
                istringstream iss(*i);
                iss >> threeP;
                ++i;
            }
            if (RPG == 0) {
                istringstream iss(*i);
                iss >> RPG;
                ++i;
            }
            if (APG == 0) {
                istringstream iss(*i);
                iss >> APG;
                ++i;
            }
            if (SPG == 0) {
                istringstream iss(*i);
                iss >> SPG;
                ++i;
            }
            if (BPG == 0) {
                istringstream iss(*i);
                iss >> BPG;
                ++i;
            }
            if (PPG == 0) {
                istringstream iss(*i);
                iss >> PPG;
                ++i;
            }
        }*/
    
    

    
};
#endif /* Player_Header_h */
