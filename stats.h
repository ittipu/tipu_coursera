/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file <stats.h> 
 * @brief <define all the function here >
 *
 * <Add Extended Description Here>
 *
 * @author <Md. Kamruzzaman Tipu>
 * @date <30/06/2020 >
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/* Prints the statistics of an array including minimum, maximum, mean, and median*/

int print_statistics();

/* Array of data and a length, prints the array to the screen*/


int print_arry();

/* Array of data and a length, returns the median value */

int find_median();

/* Array of data and a length, returns the mean*/

int find_mean();

/*Array of data and a length, returns the maximum*/

int find_maximum();

/*Array of data and a length, returns the minimum*/

int find_minimum();

/*Array of data and a length, sorts the array from largest to smallest.*/
int sort_arry();




#endif /* __STATS_H__ */
