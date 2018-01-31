/* $Id:$ */

/*
 * Copyright 2009 ZOHO Corp. All Rights Reserved.
 * This software is the property of ZOHO Corp. Distribution
 * or deployment of the source or derived binaries of this
 * software are not permitted without a OEM or distribution
 * license from ZOHO Corp.
 */

/**************************************************************************
 *  File	: maxemkcmeasuringethportstateinstru.c.
 *
 *  Purpose	: File contains get and set methods for each scalar 
 * 			  of the module maxEmkcMeasuringEthPortState.
 *
 *  Author	: WebNMS Agent Toolkit C Edition 6
 *
 *  Date	: Fri Jan 26 16:40:26 MSK 2018
 *
 *  Docs	: Yes. 
 ***************************************************************************/

#ifdef  __cplusplus
extern "C" {
#endif /* #ifdef  __cplusplus */

/* User code starts here */
/* User code ends here */

/*
 * If the user wants to add their code, then the code has to be
 * added in between the above mentioned comments. Otherwise, on
 * regeneration, the user added code will be overwritten.
 * The above mentioned comments can be used at any place in this file.
 */

#include "config.h"
#include "genincludes.h"
#include "maxemkcmeasuringethportstate.h" 

/*****************************************************************************
 *	Function Name	: GetMaxEmkcMeasEthPortLinkStatus()
 *
 *	Args			: 1. Pointer of the variable value length(IN/OUT).
 *					  2. Status which is used to return SNMP Error (IN/OUT).
 *
 *	Returns			: The Current value of "maxEmkcMeasEthPortLinkStatus".
 *
 *	Task			: Get method for scalar variable maxEmkcMeasEthPortLinkStatus.
 *
 *					  "Description"
 *
 *	See Also		: SetMaxEmkcMeasEthPortLinkStatus().
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
U_CHAR *GetMaxEmkcMeasEthPortLinkStatus(INT32 *varValLen, U_CHAR *status)
{
	DEBUGMSG1("\n\t@@@@@ Inside GetMaxEmkcMeasEthPortLinkStatus() @@@@@\n");

	/* Please provide your code to instrument "maxEmkcMeasEthPortLinkStatus" here */

	*varValLen = sizeof(gv_maxEmkcMeasEthPortLinkStatus);
	return (U_CHAR *)&gv_maxEmkcMeasEthPortLinkStatus;
}

/*****************************************************************************
 *	Function Name	: SetMaxEmkcMeasEthPortLinkStatus()
 *
 *	Args			: 1. Pointer of the variable to set (IN).
 *					  2. Pointer of the variable value length (IN/OUT).
 *					  3. Status which is used to return SNMP Error (IN/OUT).
 *
 *	Returns			: The Current value of "maxEmkcMeasEthPortLinkStatus".
 *
 *	Task			: Set method for scalar variable maxEmkcMeasEthPortLinkStatus.
 *
 *					  "Description"
 *
 *	See Also		: GetMaxEmkcMeasEthPortLinkStatus().
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
U_CHAR *SetMaxEmkcMeasEthPortLinkStatus(U_CHAR *varVal, INT32 *varValLen, U_CHAR *status)
{
	INT32	value;

	DEBUGMSG1("\n\t@@@@@ Inside SetMaxEmkcMeasEthPortLinkStatus() @@@@@\n");

	if(varVal == NULL)

	{

	return NULL;

	}

	value = (* ((INT32*)(varVal)));

	if (*status == VALIDATE)
	{
		if(!((value == 0) || (value == 1)))
		{
			*status = SNMP_ERR_WRONGVALUE;
			return NULL;
		}
	}
	else
	{
		gv_maxEmkcMeasEthPortLinkStatus = value;
		/* Please provide your code to instrument "maxEmkcMeasEthPortLinkStatus" here */
	}

	*varValLen = sizeof(gv_maxEmkcMeasEthPortLinkStatus);
	return (U_CHAR *)&gv_maxEmkcMeasEthPortLinkStatus;
}


#ifdef  __cplusplus
}
#endif /* #ifdef  __cplusplus */

/*****************************************************************************
 *						 End of maxemkcmeasuringethportstateinstru.c
 *****************************************************************************/
