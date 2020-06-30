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

void print_statistics(unsigned char *a , int n);
void print_array(unsigned char *a , int n);
float find_median(unsigned char *a , int n);
float find_mean(unsigned char *a , int n);
unsigned char find_maximum(unsigned char *a , int n);
unsigned char find_minimum(unsigned char *a , int n);
void sort_array(unsigned char *a , int n);




#endif /* __STATS_H__ */
