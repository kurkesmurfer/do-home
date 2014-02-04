//
//  home.h
//  do@home
//
//  Created by Peet van Tooren on 4/7/12.
//  Copyright (c) 2012 Almende. All rights reserved.
//

#ifndef do_home_home_h
#define do_home_home_h

#include <stdio.h>
#include <unistd.h>
#include "homeFix.h"
#include "RFXtrx.h"

#define failure -1

extern int homeSetmsg(union tRBUF *hMsg);
extern int homeInit(union tRBUF *hMsg);
extern int homeRead(union tRBUF *hMsg);
extern int homeWrite(union tRBUF *hMsg);
extern int homeEncode(union tRBUF *hMsg);
extern int homeDecode(union tRBUF *hMsg);


#endif
