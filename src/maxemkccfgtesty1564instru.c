/* $Id:$ */

/*
 * Copyright 2009 ZOHO Corp. All Rights Reserved.
 * This software is the property of ZOHO Corp. Distribution
 * or deployment of the source or derived binaries of this
 * software are not permitted without a OEM or distribution
 * license from ZOHO Corp.
 */

/**************************************************************************
 *  File	: maxemkccfgtesty1564instru.c.
 *
 *  Purpose	: File contains get and set methods for each scalar 
 * 			  of the module maxEmkcCfgTestY1564.
 *
 *  Author	: WebNMS Agent Toolkit C Edition 6
 *
 *  Date	: Fri Jan 26 16:40:39 MSK 2018
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
#include "maxemkccfgtesty1564.h" 

/*****************************************************************************
 *	Function Name	: GetMaxEmrc1CfgY1564EntryRow()
 *
 *	Args			: 1. Pointer of the variable value length(IN/OUT).
 *					  2. Status which is used to return SNMP Error (IN/OUT).
 *
 *	Returns			: The Current value of "maxEmrc1CfgY1564EntryRow".
 *
 *	Task			: Get method for scalar variable maxEmrc1CfgY1564EntryRow.
 *
 *					  "Description"
 *
 *	See Also		: SetMaxEmrc1CfgY1564EntryRow().
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
U_CHAR *GetMaxEmrc1CfgY1564EntryRow(INT32 *varValLen, U_CHAR *status)
{
	DEBUGMSG1("\n\t@@@@@ Inside GetMaxEmrc1CfgY1564EntryRow() @@@@@\n");

	/* Please provide your code to instrument "maxEmrc1CfgY1564EntryRow" here */

	*varValLen = sizeof(gv_maxEmrc1CfgY1564EntryRow);
	return (U_CHAR *)&gv_maxEmrc1CfgY1564EntryRow;
}

/*****************************************************************************
 *	Function Name	: SetMaxEmrc1CfgY1564EntryRow()
 *
 *	Args			: 1. Pointer of the variable to set (IN).
 *					  2. Pointer of the variable value length (IN/OUT).
 *					  3. Status which is used to return SNMP Error (IN/OUT).
 *
 *	Returns			: The Current value of "maxEmrc1CfgY1564EntryRow".
 *
 *	Task			: Set method for scalar variable maxEmrc1CfgY1564EntryRow.
 *
 *					  "Description"
 *
 *	See Also		: GetMaxEmrc1CfgY1564EntryRow().
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
U_CHAR *SetMaxEmrc1CfgY1564EntryRow(U_CHAR *varVal, INT32 *varValLen, U_CHAR *status)
{
	U_INT32	value;

	DEBUGMSG1("\n\t@@@@@ Inside SetMaxEmrc1CfgY1564EntryRow() @@@@@\n");

	value = (* ((U_INT32*)(varVal)));

	if (*status == VALIDATE)
	{
		/* Extra Checkings can be done here */
	}
	else
	{
		gv_maxEmrc1CfgY1564EntryRow = value;
		/* Please provide your code to instrument "maxEmrc1CfgY1564EntryRow" here */
	}

	*varValLen = sizeof(gv_maxEmrc1CfgY1564EntryRow);
	return (U_CHAR *)&gv_maxEmrc1CfgY1564EntryRow;
}


#ifdef  __cplusplus
}
#endif /* #ifdef  __cplusplus */

/*****************************************************************************
 *						 End of maxemkccfgtesty1564instru.c
 *****************************************************************************/
