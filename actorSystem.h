/* 
 * File:   actorSystem.h
 * Author: yarhoslavme
 *
 * Created on March 17, 2015, 8:57 PM
 */

#ifndef ACTORSYSTEM_H
#define	ACTORSYSTEM_H

//**************************** clase ActorSystem ****************************
class ActorSystem {
public:
    ActorSystem();
    virtual ~ActorSystem();
    
    unsigned int createActor();
    void killActor(unsigned int pId);
    //Actor getActor(unsigned int pId); 
        
private:
    //Actor actores[5];
};


#endif	/* ACTORSYSTEM_H */

