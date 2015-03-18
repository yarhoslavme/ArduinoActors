/* 
 * File:   Actor.cpp
 * Author: yarhoslavme
 * 
 * Created on March 17, 2015, 9:52 PM
 */

#include "Actor.h"

Actor::Actor() {
}

Actor::Actor(const Actor& orig) {
}

Actor::~Actor() {
}

Actor::Actor(unsigned int pId) {
    id = pId;
}

//Start actor
void Actor::start() {
    preStart();
    //TODO: Inicializa el actor
}

//Stop actor and calls hook postStop;
void Actor::stop() {
    //TODO: Detiene el actor
    postStop();
}

//Process System messages
void Actor::receive(int pMsg, int pPayload, unsigned int pSender) {
    //TODO: Process system messages
    onReceive(pMsg, pPayload, pSender);
}

void Actor::preStart() {
    
}

void Actor::postStop() {
    
}

void Actor::onReceive(int pMsg, int pPayload, unsigned int pSender) {
    
}
