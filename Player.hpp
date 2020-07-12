#ifndef __PLAYER_HPP__
#define __PLAYER_HPP__

#include <string>

class Player {
    public:
        /* Constructors */
        Player() { };

        /* Pure Virtual Functions */
        virtual double rating() = 0;
        virtual std::string FirstName() = 0;
	virtual std::string LastName() = 0;
};

#endif
