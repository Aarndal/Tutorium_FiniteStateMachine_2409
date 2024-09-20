#ifndef BASESTATE_H
#define BASESTATE_H
#include <iostream>
#include "StateMachine.h"

struct BaseState
{
	virtual void EnterState(StateMachine& _context) = 0;
	virtual void Update(StateMachine& _context) = 0;
	virtual void CheckState(StateMachine& _context) = 0;
	virtual void ExitState(StateMachine& _context) = 0;
};

#endif // !BASESTATE_H
