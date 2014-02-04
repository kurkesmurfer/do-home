//
//  home.c
//  do@home
//
//  Created by Peet van Tooren on 4/7/12.
//  Copyright (c) 2012 Almende. All rights reserved.
//


#include "home.h"


union tRBUF homeMessage;

/// utility library to initialise rfxcomm and add appliances
int homeSetmsg(union tRBUF *hMsg) {
    hMsg->ICMND.packetlength = 0x0D;
    hMsg->ICMND.packettype = 0;
    hMsg->ICMND.subtype = 0;
    hMsg->ICMND.seqnbr = 0;
    hMsg->ICMND.cmnd = cmdRESET;
    hMsg->ICMND.msg1 = 0;
    
    return(0);
}

int homeInit(union tRBUF *hMsg) {
// would be nice if it discovered the right port, maybe change this in a driver someday...
    
    // discovery (tba)
    
    // create initialise method
    // send it
    
    if (homeWrite(hMsg))
        sleep(10);
    // wait min. time
    else
        return(failure);
    
    // receive reply
    
    if (homeRead(hMsg)){
        if (hMsg->IRESPONSE.cmnd)
            return(0);
        else
            return(2);
    }
    else
        return(1);
    // exit, or retry
    
}


int homeRead(union tRBUF *hMsg) {
    return(0);
    
}

int homeWrite(union tRBUF *hMsg) {
    return(0);    
}

int homeEncode(union tRBUF *hMsg) {
    return(0);
}

int homeDecode(union tRBUF *hMsg) {
    return(0);    
}