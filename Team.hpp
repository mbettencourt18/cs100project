#ifndef __TEAM_HPP__
#define __TEAM_HPP__

#include <string>
#include <vector>

#include "Base.hpp"
#include "Player.hpp"
using namespace std;
class Team:public Base {
    public:
        /* Constructors */
	string TeamName;
	vector<Player*> list;
        Team() { };
	Team(string Name): TeamName(Name){};
	string GetName(){
		return TeamName;
	}
        double rating(){
		double rating;
		for(int i = 0; i < 5; ++i){
			rating += list[i]->GetRank();
		}
		return rating / 5;
	}
	void Display(){
		for(int i = 0; i < list.size(); ++i){
			cout << i+1 << ". " ;
			list.at(i)->Display();
		}
	}
	void AddPlayer(Player* player){
		list.push_back(player);
	}
	Player* RemovePlayer(int index){
		Player* temp = list.at(index-1);
		list.erase(list.begin()+index-1);
		return temp;
	}
	void Sort(){
		for(int i = 0; i < list.size(); ++i){
			for(int j = i+1; j < i; ++j){
				if(list.at(j)->GetRank() > list.at(i)->GetRank()){
					Player* temp = list.at(j);
					list.at(j) = list.at(i);
					list.at(i) = temp;
				}
			}
		}
	}			
	int TeamSize(){
		return list.size();
	}
};

#endif

