#ifndef _PID_H
#define _PID_H

#include "constants.h"
#include "debugable.h"
#include "statemanager.h"

class Input : public Debugable {
public:
	Input(StateManager*);

	void init();

	void loop(unsigned long);

private:
	StateManager* stateManager;

	volatile int lastEncoded;
	volatile long encoderValue;
	long lastEncoderValue;
	bool buttonPressed;
	bool lastButtonPressed;
	unsigned long timeButtonDown;
	bool ignoreNextRelease;


	void updateEncoder();
	void checkButtonLongPress(unsigned long);
	void checkButtonNormalPress();
	void checkRotation();

};
#endif
