#include "timemanager.h"

TimeManager::TimeManager() {
}

void TimeManager::init(){
  //fixme take from clock
  this->time = 0;
}

void TimeManager::loop(unsigned long){
  //not used yet
}


int TimeManager::getTime(){
  return this->time;
}

void TimeManager::setTime(int time){
  this->time = time;
}

void TimeManager::getTime(char* hour, char* min, char* sec){
  *sec = this->time%60;
  int r = (this->time-*sec)/60;
  *min = r%60;
  *hour = (r-*min)/60;
}
