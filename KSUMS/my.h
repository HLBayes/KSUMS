#ifndef _MY_H
#define _MY_H

#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <fstream>
#include <algorithm>
#include <list>
#include <set>
#include <map>
#include <ctime>
#include <math.h>
#include <limits.h>
#include <omp.h>
#include <vector>

#define Epslion 1e-10
#define NUM_THREADS_PEI 6

template<typename T>
void read_M_vec2(std::string name, unsigned int K, std::vector<std::vector<T>> &M);

template<typename T>
void show_2Dvec(std::vector<std::vector<T>> &Vec, unsigned int n, unsigned int m);

void argsort_f(int *v, int n, int *ind);

template<typename T>
void write_vec(std::string name, std::vector<T> &y);

void mode_f(int *v, int n, int *mode_ind, int *mode_count);

float clu_acc(int *y, int *y2, int N);

void symmetry(std::vector<std::vector<int>> &NN, std::vector<std::vector<double>> &NND, double fill_ele);

int exist_f(std::vector<int> &v, int x);

double maximum_2Dvec(std::vector<std::vector<double>> &Vec);
#endif // _MY_H
