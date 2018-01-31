/* $Id:$ */

/*
 * Copyright 2009 ZOHO Corp. All Rights Reserved.
 * This software is the property of ZOHO Corp. Distribution
 * or deployment of the source or derived binaries of this
 * software are not permitted without a OEM or distribution
 * license from ZOHO Corp.
 */

/**************************************************************************
 *  File	: maxemkcstatusmeasuringresults.h.
 *
 *  Purpose	: File contains data structures and function prototypes for 
 *			  the module maxemkcstatusmeasuringresults.
 *
 *  Author	: WebNMS Agent Toolkit C Edition 6
 *
 *  Date	: Fri Jan 26 16:40:30 MSK 2018
 *
 *  Docs	: Yes. 
 ***************************************************************************/

#ifdef  __cplusplus
extern "C" {
#endif /* #ifdef  __cplusplus */

#ifndef  __MAXEMKCSTATUSMEASURINGRESULTS_H__
#define  __MAXEMKCSTATUSMEASURINGRESULTS_H__

/* User code starts here */
/* User code ends here */

/*
 * If the user wants to add their code, then the code has to be
 * added in between the above mentioned comments. Otherwise, on
 * regeneration, the user added code will be overwritten.
 * The above mentioned comments can be used at any place in this file.
 */


/* ---------------------------- Macro Declarations ---------------------------*/

#define	MAXEMKCSTATUSMEASURINGRESULTS_MAXEMKCSTATUSMEASRESULTSSTATE	1

#define MAXEMKCSTATUSMEASURINGRESULTS_OID_LEN	11
#define MAXEMKCSTATUSMEASURINGRESULTS_SUBID_LEN	1

#ifdef FILE_TO_VECTOR
#if defined (UNIX) || defined (VXWORKS) || defined (NUCLEUS_OS)
#define MAXEMKCSTATUSMEASURINGRESULTS_FILE	"ftov/max-emkc/maxemkcstatusmeasuringresults.txt"
#elif defined (WINDOWS)
#define MAXEMKCSTATUSMEASURINGRESULTS_FILE	"ftov\\max-emkc\\maxemkcstatusmeasuringresults.txt"
#endif
#endif


/* ------------------------- Variable Declarations --------------------------*/

#ifdef MAXEMKCSTATUSMEASURINGRESULTS_PUBLIC


/* The oid to register */
MAXEMKCSTATUSMEASURINGRESULTS_PUBLIC OID gv_maxEmkcStatusMeasuringResultsOid[MAXEMKCSTATUSMEASURINGRESULTS_OID_LEN] = {1,3,6,1,4,1,5597,1,1,9,1};

/* The subid list of the registerd oid */
MAXEMKCSTATUSMEASURINGRESULTS_PUBLIC OID gv_maxEmkcStatusMeasuringResultsSubIdList[MAXEMKCSTATUSMEASURINGRESULTS_SUBID_LEN] = {1};

/* Access type of each subid of the registered oid */
MAXEMKCSTATUSMEASURINGRESULTS_PUBLIC U_CHAR gv_maxEmkcStatusMeasuringResultsSubIdListAccess[MAXEMKCSTATUSMEASURINGRESULTS_SUBID_LEN] = {RWRITE};

/* The data type of each subid of the registered oid */
MAXEMKCSTATUSMEASURINGRESULTS_PUBLIC U_CHAR gv_maxEmkcStatusMeasuringResultsSubIdListDataTypes[MAXEMKCSTATUSMEASURINGRESULTS_SUBID_LEN] = {ASN_INTEGER};

#else

#define MAXEMKCSTATUSMEASURINGRESULTS_PUBLIC extern 

/* The oid to register */
MAXEMKCSTATUSMEASURINGRESULTS_PUBLIC OID gv_maxEmkcStatusMeasuringResultsOid[MAXEMKCSTATUSMEASURINGRESULTS_OID_LEN];

/* The subid list of the registerd oid */
MAXEMKCSTATUSMEASURINGRESULTS_PUBLIC OID gv_maxEmkcStatusMeasuringResultsSubIdList[MAXEMKCSTATUSMEASURINGRESULTS_SUBID_LEN];

/* Access type of each subid of the registered oid */
MAXEMKCSTATUSMEASURINGRESULTS_PUBLIC U_CHAR gv_maxEmkcStatusMeasuringResultsSubIdListAccess[MAXEMKCSTATUSMEASURINGRESULTS_SUBID_LEN];

/* The data type of each subid of the registered oid */
MAXEMKCSTATUSMEASURINGRESULTS_PUBLIC U_CHAR gv_maxEmkcStatusMeasuringResultsSubIdListDataTypes[MAXEMKCSTATUSMEASURINGRESULTS_SUBID_LEN];

#endif /* #ifdef MAXEMKCSTATUSMEASURINGRESULTS_PUBLIC */

MAXEMKCSTATUSMEASURINGRESULTS_PUBLIC INT32 gv_maxEmkcStatusMeasResultsState;

/* --------------------------- Function Prototypes ---------------------------*/

/* Functions defined in maxemkcstatusmeasuringresultshdlr.c */
MAXEMKCSTATUSMEASURINGRESULTS_PUBLIC void InitMaxEmkcStatusMeasuringResults(void);

MAXEMKCSTATUSMEASURINGRESULTS_PUBLIC CHAR MaxEmkcStatusMeasuringResultsProcessRequests(INT32 pduVersion,U_CHAR pduType, Vector *varBinds, LONG *errStatus, LONG *errIndex);

MAXEMKCSTATUSMEASURINGRESULTS_PUBLIC U_CHAR *MaxEmkcStatusMeasuringResultsProcessReadReq(U_CHAR pduType, OID *reqOid, INT32 *reqOidLen, INT32 *varValLen, U_CHAR *status);

MAXEMKCSTATUSMEASURINGRESULTS_PUBLIC U_CHAR *MaxEmkcStatusMeasuringResultsProcessWriteReq(INT32 pduVersion, OID *reqOid, INT32 reqOidLen, U_CHAR *varVal, INT32 *varValLen, U_CHAR *status);

MAXEMKCSTATUSMEASURINGRESULTS_PUBLIC CHAR UpdateMaxEmkcStatusMeasuringResults(U_CHAR command);

/* Functions defined in maxemkcstatusmeasuringresultsinstru.c */
MAXEMKCSTATUSMEASURINGRESULTS_PUBLIC U_CHAR *GetMaxEmkcStatusMeasResultsState(INT32 *varValLen, U_CHAR *status);

MAXEMKCSTATUSMEASURINGRESULTS_PUBLIC U_CHAR *SetMaxEmkcStatusMeasResultsState(U_CHAR *varVal, INT32 *varValLen, U_CHAR *status);

/* Functions defined in maxemkcstatusmeasuringresultsftov.c */
#ifdef FILE_TO_VECTOR
MAXEMKCSTATUSMEASURINGRESULTS_PUBLIC CHAR ReadFromMaxEmkcStatusMeasuringResultsFile();
MAXEMKCSTATUSMEASURINGRESULTS_PUBLIC CHAR WriteToMaxEmkcStatusMeasuringResultsFile();
#endif

#endif  /* __MAXEMKCSTATUSMEASURINGRESULTS_H__ */


#ifdef  __cplusplus
}
#endif /* #ifdef  __cplusplus */

/*****************************************************************************
 *						 End of maxemkcstatusmeasuringresults.h
 *****************************************************************************/
