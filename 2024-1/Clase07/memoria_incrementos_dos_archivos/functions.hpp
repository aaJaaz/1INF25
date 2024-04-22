/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   functions.hpp
 * Author: ASUS
 *
 * Created on April 8, 2024, 5:25 PM
 */

#ifndef FUNCTIONS_HPP
#define FUNCTIONS_HPP
#include "Utils.hpp"
using namespace std;
void read_hashtags(int *, char***&, const char *);
void add_hashtags(ifstream &, char** ,int &);
void display_tweets(int *, char**, char***, const char *);
void reserva_memoria_incrementos(int *&,char**&,int &,int &);
void reserva_memoria_incrementos(char**&,int &,int &);
int lookup(int , int*);
char * read_str(ifstream & , char = '\n');
void read_tweets(int *&, char**&, const char *);
void sort_tweets(int*, char**, char***);
void quick_sort(int*, char**, char***, int, int);
void swap2(int &, int &,char *&, char*&, char**&, char**&);
#endif /* FUNCTIONS_HPP */

