#include "BaseState.h"
#include "Room1.h"
#include "StateMachine.h"

StateMachine::StateMachine() {
	this->pRoom1 = new Room1();
	this->curState = this->pRoom1;
}

void StateMachine::StartGame()
{
	curState->EnterState(*this);
	while (true)
	{
		Update();
	}
}

void StateMachine::Update()
{

}

void StateMachine::SwitchState(BaseState* _newState)
{
}
