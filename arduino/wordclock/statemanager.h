#ifndef _STATE_MANAGER_H
#define _STATE_MANAGER_H

#include "debugable.h"
#include "timemanager.h"
#include "display.h"
#include "types.h"

class StateManager : public Debugable {
public:
	StateManager(TimeManager*, Display*);

	void init();

	void loop(unsigned long);

	void buttonPressed();
	void buttonLongPressed();
	void encoderIncrease();
	void encoderDecrease();

	state_type getCurrentState();


private:
	TimeManager* timeManager;
	Display* display;

	void applyButtonPressed();
	void applyButtonLongPressed();
	void applyEncoderDelta(int);

	bool isButtonPressed;
	bool isButtonLongPressed;
	int encoderDelta;

	state_type currentState;

	void displayTime();


};
#endif
