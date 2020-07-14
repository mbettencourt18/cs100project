#include <iostream>
#include <string>
#include <sstream>
#include <fstream>
#include <vector>
#include <iterator>
#include "Player.hpp"
using namespace std;

Player::Player(vector<string> player){
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
        }
    
    
}
void getplayer(string input){
    vector<string> player;
    std::istringstream ss(input);
    
    do {
        string tmp;
        player.push_back(tmp);
        
        cout << tmp << endl;
    } while (ss);
    Player varname(player);
}

int main (){
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
    
    
    return 0;
}
