/* 
 * File:   Actor.h
 * Author: yarhoslavme
 *
 * Created on March 17, 2015, 9:52 PM
 */

#ifndef ACTOR_H
#define	ACTOR_H

class Actor {
public:
    Actor();
    Actor(const Actor& orig);
    Actor(unsigned int pId);
    virtual ~Actor();
    
    unsigned getId();
    unsigned getSender();
    
    void start();
    void stop();
    void receive(int pMsg, int pPayload, unsigned int pSender);
    
    //User defined functions
    virtual void preStart();
    virtual void postStop();
    virtual void onReceive(int pMsg, int pPayload, unsigned int pSender);
private:
    unsigned int id;
    unsigned int sender;    
};

#endif	/* ACTOR_H */

