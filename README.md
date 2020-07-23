# CS Project Devliverable 

**A**. The complete application use **Decorator, Composite, and Stratgey**. Decorator is used to decorate the Player sub-classes *PG, Sg, Sf, Cn and Pf* with the players from the *All_Positions_Stats.txt* file. Composite is used to generate the sub-classes that are composite to the Player Component with the leafs of classes obtain the individual stats corresponding from the *Rb, Base Def, Ast, and Ppg* classes. The last design pattern that was used was strategy in getting the ranking from each player. These were implemented by calling the *FgPcnt* classes which used a different algorithm to rate the players based on positin.   

**pic**
![S](https://user-images.githubusercontent.com/43631772/88321104-79b08a00-ccd3-11ea-83fe-b73547148d23.jpg)



**B**. The application generates a menu display. Allowing the user to choose between generated commands to **Create New Team, Resume Old Team, Faceoff and Restart League** 


![First Menu](https://user-images.githubusercontent.com/62957652/88321007-55ed4400-ccd3-11ea-9255-7840a563e517.png)


*Create New Team* allows the user to Enter Team name. The menu will then Prompt the user to **Add Player, Remove Player, Output All Available Players, Output roster, and Back** 

**Pic**


*Add Player* will allow the user to select a player from an individual position consisting from **Pg, Sg, Sf, Pf, C**. Selecting either position will prompt the to select a player from that given position. The players will be displayed along with their overall stat ranking. Players can be chosen by entering the position number and user can select from *Next Page or Previous Page* to obatin players.

**Pic**

*Remove Player* will allow the user to remove a given player from their team by just entering the position number. 

**Pic**


*Output All Available Players* allows the user to see set roster.

**Pic**


*Output roster* outputs the user's team roster


**pic**

*Resume Old Team* allows the user to make player changes or output roster

**pic**


*Faceoff* Allows the user to faceoff two user generated team rosters and will display the overall points scored.\

**pic**

*Restart League* Will reset the team 

**pic**

**C**. The application can be run by entering **c++ -o main main.cpp ** and running ./main** 








# CS 100 Programming Project
A. Michael Bettencourt mbett005@ucr.edu, Rahul Katwala rkatw001@ucr.edu, David Gutierrez dguti026@ucr.edu

B. NBA Player Rater

C. App gets data from nba player stats websites, rates the players, and helps make an optimal team. User can then faceoff against two generated user teams to compare the optimal team. The application will also store the user's past teams and allow the user to generate a team from a set roster. 

D. This app helps gather information about nba players to create an optimal fantasy team and helps people learn more about basketball. This will familiarize the user to player stats and compare their favorite player to the set roster.  

E. C++. Stats are obtained from https://basketball.realgm.com/nba/stats

F. The input will be a set of commands prompted by a menu. A roster of user chosen players will be displayed. User will also have the options to display the set roster along with the results from the faceoff command. 




