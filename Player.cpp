#include <stdio.h>
#include <iostream>
#include <string>
#include <sstream>
#include <fstream>
#include <vector>
#include <iterator>
#include <list>
#include "Player_Header.hpp"
using namespace std;
Player::Player(int rank, string name, string team, double rebounds, double points, double assists,
                 double steals, double blocks, double FGPerecent, double FGA, double threePA, double threeP){
    this->rank = rank;
    this->name = name;
    this->team = team;
    this->rebounds = rebounds;
    this->points = points;
    this->assists = assists;
    this->steals = steals;
    this->blocks = blocks;
    this->FGPercent = FGPerecent;
    this->FGA = FGA;
    this->threePA = threePA;
    this->threeP = threeP;
}

void Player::Parser(list<string> player){
    string name = " ";
    int rank = 0;
    string team = " ";
    double FGA = 0.0;
    double FG = 0.0;
    double threePA = 0.0;
    double threeP = 0.0;
    double RPG = 0.0;
    double APG = 0.0;
    double SPG = 0.0;
    double BPG = 0.0;
    double PPG = 0.0;
    
    
    list<string>::const_iterator i = player.begin();
        while (!player.empty()) {
          
            if (rank == 0) {
                istringstream iss(*i);
                iss >> rank;
                player.pop_front();
                ++i;
            }
            if (name == " ") {
                istringstream iss(*i);
                iss >> name;
                player.pop_front();
                ++i;
                
                string last = " ";
                istringstream isss(*i);
                isss >>last;
                player.pop_front();
                name = name + " " + last;
                ++i;
            }
            if (team == " ") {
                istringstream iss(*i);
                iss >> team;
                player.pop_front();
                ++i;
            }
         
            if (FGA == 0) {
                istringstream iss(*i);
                iss >>FGA;
                player.pop_front();
                ++i;
            }
            if (FG == 0) {
                istringstream iss(*i);
                iss >> FG;
                player.pop_front();
                ++i;
            }
            if (threePA == 0) {
                istringstream iss(*i);
                iss >>threePA;
                player.pop_front();
                ++i;
            }
            if (threeP == 0) {
                istringstream iss(*i);
                iss >> threeP;
                player.pop_front();
                ++i;
            }
            if (RPG == 0) {
                istringstream iss(*i);
                iss >> RPG;
                player.pop_front();
                ++i;
            }
            if (APG == 0) {
                istringstream iss(*i);
                iss >> APG;
                player.pop_front();
                ++i;
            }
            if (SPG == 0) {
                istringstream iss(*i);
                iss >> SPG;
                player.pop_front();
                ++i;
            }
            if (BPG == 0) {
                istringstream iss(*i);
                iss >> BPG;
                player.pop_front();
                ++i;
            }
            if (PPG == 0) {
                istringstream iss(*i);
                iss >> PPG;
                player.pop_front();
                ++i;
                player.pop_front();
            }
            
        }
    Player* p = new Player(rank, name, team, RPG, PPG, APG, SPG, BPG, FG, FGA, threePA, threeP);
    player_list.push_back(p);
}

void Player::getplayer(string input){
    list<string> player;
    std::istringstream ss(input);
    
    do {
        string tmp;
        ss >> tmp;
        player.push_back(tmp);
        cout << tmp << endl;
    }while (ss);
    Parser(player);
}

void  Player::main (){
    ifstream file("All_Positions_Stats.txt");
    string input;
    if (file.is_open()) {
        cout << "yes open" << endl;
    }
    else{
        cout << "file was not found" << endl;
    }
    while (file >> input) {
       getline(file,input);
       // cout << input <<endl;
        getplayer(input);
    }
    
    
}
int main(){
    Player* p = nullptr;
    p->main();
    
    return 0;
}

