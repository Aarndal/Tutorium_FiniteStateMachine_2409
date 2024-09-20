#ifndef ROOM1_H
#define ROOM1_H
#include "BaseState.h"
class Room1 : public BaseState
{
	virtual void EnterState(StateMachine& _context) override;
	virtual void Update(StateMachine& _context) override;
	virtual void CheckState(StateMachine& _context) override;
	virtual void ExitState(StateMachine& _context) override;
};
#endif // !ROOM1_H
