#include "abstractlayout.h"

AbstractLayout::AbstractLayout(){

}

void AbstractLayout::getLayout(uint8_t hour, uint8_t minute, uint8_t sec, uint8_t* dest){
  this->append(&dest, 0, 1, 2, 3, -1);
}

void AbstractLayout::append(uint8_t** dest, uint8_t v){
    **dest = v;
    (*dest)++;
}

void AbstractLayout::append(uint8_t** dest, uint8_t v1, uint8_t v2){
  this->append(dest, v1);
  this->append(dest, v2);
}

void AbstractLayout::append(uint8_t** dest, uint8_t v1, uint8_t v2, uint8_t v3){
  this->append(dest, v1, v2);
  this->append(dest, v3);
}

void AbstractLayout::append(uint8_t** dest, uint8_t v1, uint8_t v2, uint8_t v3, uint8_t v4){
  this->append(dest, v1, v2, v3);
  this->append(dest, v4);
}

void AbstractLayout::append(uint8_t** dest, uint8_t v1, uint8_t v2, uint8_t v3, uint8_t v4, uint8_t v5){
  this->append(dest, v1, v2, v3, v4);
  this->append(dest, v5);
}

void AbstractLayout::append(uint8_t** dest, uint8_t v1, uint8_t v2, uint8_t v3, uint8_t v4, uint8_t v5, uint8_t v6){
  this->append(dest, v1, v2, v3, v4, v5);
  this->append(dest, v6);
}

void AbstractLayout::append(uint8_t** dest, uint8_t v1, uint8_t v2, uint8_t v3, uint8_t v4, uint8_t v5, uint8_t v6, uint8_t v7){
  this->append(dest, v1, v2, v3, v4, v5, v6);
  this->append(dest, v7);
}

void AbstractLayout::append(uint8_t** dest, uint8_t v1, uint8_t v2, uint8_t v3, uint8_t v4, uint8_t v5, uint8_t v6, uint8_t v7, uint8_t v8){
  this->append(dest, v1, v2, v3, v4, v5, v6, v7);
  this->append(dest, v8);
}

char* AbstractLayout::getDebugLayout(){
  return "todo";
}
