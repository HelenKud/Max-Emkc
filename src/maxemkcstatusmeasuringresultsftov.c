/* $Id:$ */

/*
 * Copyright 2009 ZOHO Corp. All Rights Reserved.
 * This software is the property of ZOHO Corp. Distribution
 * or deployment of the source or derived binaries of this
 * software are not permitted without a OEM or distribution
 * license from ZOHO Corp.
 */

/**************************************************************************
 *  File	: maxemkcstatusmeasuringresultsftov.c.
 *
 *  Purpose	: This file is used only when text file storage is used.The 
 * 			  file contains methods to read from & write to the 
 * 			  maxemkcstatusmeasuringresults.txt file in the <bin>/ftov/max-emkc 
 * 			  directory.
 *
 *  Author	: WebNMS Agent Toolkit C Edition 6
 *
 *  Date	: Fri Jan 26 16:40:31 MSK 2018
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
#ifdef FILE_TO_VECTOR
#include "genincludes.h"
#include "maxemkcstatusmeasuringresults.h" 

/******************************************************************************
 *	Function Name	: ReadFromMaxEmkcStatusMeasuringResultsFile()
 *
 *	Args			: Nothing.
 *
 *	Returns			: SUCCESS or FAILURE.
 *
 *	Task			: It will read the values from the file and assign it to 
 *					  the corresponding variables. After successfully reading
 *					  from the file it returns SUCCESS else FAILURE.
 *
 *	See Also		: WriteToMaxEmkcStatusMeasuringResultsFile().
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
CHAR ReadFromMaxEmkcStatusMeasuringResultsFile()
{
	FILE	*fptr;
	CHAR	*fileName;

	DEBUGMSG1("\n\t@@@@@ Inside ReadFromMaxEmkcStatusMeasuringResultsFile() @@@@@\n");

	fileName = (CHAR *)__Calloc(1, (__Strlen(gptr_agentRootDir) + __Strlen(MAXEMKCSTATUSMEASURINGRESULTS_FILE) + 1 ));

	CHECK_NULL_RETURN_ERROR(fileName);

	__Strcpy(fileName, gptr_agentRootDir);

	__Strcat(fileName, MAXEMKCSTATUSMEASURINGRESULTS_FILE);

	fptr = fopen(fileName, "r");

	__Free(fileName);

	if( fptr == NULL)
	{
		DEBUGMSG1("Cannot Open file for reading\n");
		return FAILURE;
	}

	while (!feof(fptr))
	{
		IGNORE_COMMENTED_LINES();
		/* Reading from the file for the scalar gv_maxEmkcStatusMeasResultsState. */
		if(fscanf(fptr,"%d ", &gv_maxEmkcStatusMeasResultsState) == EOF)
		{
			break;
		}
	}

	fclose(fptr);

	return SUCCESS;
}
/******************************************************************************
 *	Function Name	: WriteToMaxEmkcStatusMeasuringResultsFile()
 *
 *	Args			: Nothing.
 *
 *	Returns			: SUCCESS or FAILURE.
 *
 *	Task			: It will write the scalar object values into the file.
 * 					  After successfully writing into the file it returns
 * 					  SUCCESS else FAILURE.
 *
 *	See Also		: ReadFromMaxEmkcStatusMeasuringResultsFile().
 *
 *	Docs			: Yes.
 *
 *	Bugs			: 
 *****************************************************************************/
CHAR WriteToMaxEmkcStatusMeasuringResultsFile()
{
	FILE	*fptr;
	CHAR	*fileName;
	CHAR	str[STRING_MAX_LEN];
	CHAR	finalStr[FTOV_MAX_COMMENT_LINE];

	DEBUGMSG1("\n\t@@@@@ Inside WriteToMaxEmkcStatusMeasuringResultsFile() @@@@@\n");

	fileName = (CHAR *)__Calloc(1, (__Strlen(gptr_agentRootDir) + __Strlen(MAXEMKCSTATUSMEASURINGRESULTS_FILE) + 1 ));

	CHECK_NULL_RETURN_ERROR(fileName);

	__Strcpy(fileName, gptr_agentRootDir);

	__Strcat(fileName, MAXEMKCSTATUSMEASURINGRESULTS_FILE);

	READ_AND_STORE_COMMENTED_LINES();

	fptr = fopen(fileName, "w");

	__Free(fileName);

	if (fptr == NULL)
	{
		DEBUGMSG1("Cannot Open file for writing\n");
		return FAILURE;
	}

	fprintf(fptr, "%s", finalStr);
	/* Writing to the file for the scalar gv_maxEmkcStatusMeasResultsState. */
	fprintf(fptr,"%d \n",
				gv_maxEmkcStatusMeasResultsState);


	fclose(fptr);

	return SUCCESS;
}
#endif /* #ifdef FILE_TO_VECTOR */

#ifdef  __cplusplus
}
#endif /* #ifdef  __cplusplus */

/*****************************************************************************
 *						 End of maxemkcstatusmeasuringresultsftov.c
 *****************************************************************************/
