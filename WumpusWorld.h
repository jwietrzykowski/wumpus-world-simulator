// WumpusWorld.h

#ifndef WUMPUSWORLD_H
#define WUMPUSWORLD_H

#include <set>

#include "Percept.h"
#include "Action.h"
#include "WorldState.h"

class WumpusWorld
{
public:
	WumpusWorld (int size);
	WumpusWorld (char* worldFile);
	void Initialize();
	Percept& GetPercept();
	void ExecuteAction (Action action);
	bool GameOver ();
	int GetScore();
	int GetNumVisitedLocations();
	void Print();
	void Write(const char* worldFile);

	void UpdatePercept();
	int numActions;
	Percept currentPercept;
	WorldState currentState;

	std::set<int> visitedLocations;
	int numPits;
};

#endif // WUMPUSWORLD_H
