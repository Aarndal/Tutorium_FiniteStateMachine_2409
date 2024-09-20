#ifndef STATEMACHINE_H
#define STATEMACHINE_H


class BaseState;
class Room1;
enum States;

class StateMachine
{
	BaseState* curState{};

public:
	Room1* pRoom1{};
	StateMachine();
	void StartGame();
	void Update();
	void SwitchState(BaseState* _newState);
};

#endif 
