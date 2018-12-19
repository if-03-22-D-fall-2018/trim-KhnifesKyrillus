/*----------------------------------------------------------
 *				HTBLA-Leonding / Klasse: <your class>
 * ---------------------------------------------------------
 * Exercise Number: 8
 * Title:			trim.h
 * Author:			P. Bauer
 * Due Date:		March 14, 2015
 * ----------------------------------------------------------
 * Description:
 * Interface for trim
 * ----------------------------------------------------------
 */
 #ifndef __TRIM_H
 #define __TRIM_H

#define STRLEN 16

 void trim(const char * 	source, char * 	trimmed_string);
 void getFirstLetterIndex(const char* source, int *firstLetter);
 void getLastLetterIndex(const char* source, int *lastLetter);

#endif
