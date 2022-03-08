#pragma once
/*****************************************************/
/* File   : Os_EcuM.h                                */
/* Author : Naagraaj HM                              */
/*****************************************************/

/*****************************************************/
/* #INCLUDES                                         */
/*****************************************************/
#include "Compiler_Cfg_Os.h"

/*****************************************************/
/* #DEFINES                                          */
/*****************************************************/

/*****************************************************/
/* MACROS                                            */
/*****************************************************/

/*****************************************************/
/* TYPEDEFS                                          */
/*****************************************************/
class infOs_EcuM{
   public:
/*****************************************************/
/* FUNCTIONS                                         */
/*****************************************************/
      virtual FUNC(void, OS_CODE) Start    (void) = 0;
      virtual FUNC(void, OS_CODE) Shutdown (void) = 0;
};

/*****************************************************/
/* CONSTS                                            */
/*****************************************************/

/*****************************************************/
/* PARAMS                                            */
/*****************************************************/

/*****************************************************/
/* OBJECTS                                           */
/*****************************************************/
extern infEcuMClient* gptrinfEcuMClient_Os;
extern infOs_EcuM*    gptrinfOs_EcuM;

/*****************************************************/
/* EOF                                               */
/*****************************************************/

