#include "Room1.h"


void Room1::EnterState(StateMachine& _context)
{
	std::cout << "EnterRoom1" << std::endl;
}

void Room1::Update(StateMachine& _context)
{
	std::cout << "UpdateRoom1" << std::endl;
}

void Room1::CheckState(StateMachine& _context)
{
	_context.SwitchState(_context.pRoom1);
}

void Room1::ExitState(StateMachine& _context)
{
	std::cout << "ExitRoom1" << std::endl;
}
