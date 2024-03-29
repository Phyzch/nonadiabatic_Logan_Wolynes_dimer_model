//
// Created by phyzch on 6/18/20.
//
#pragma once
#ifndef QUANTUM_MEASUREMENT_UTIL_H
#define QUANTUM_MEASUREMENT_UTIL_H

#include<iostream>
#include<time.h>
#include<stdio.h>
#include <fstream>
#include <sstream>
#include <unistd.h>
#include <sys/stat.h>
#include <experimental/filesystem>
#include<iomanip>
#include <complex>
#include <assert.h>
#include <vector>
#include<ctime>
#include<algorithm>
#include<stdlib.h>
#include<mpi/mpi.h>
#include<sys/resource.h>
//using namespace concurrency;
#define pi2 3.141592653589793*2
using namespace std;
extern int Rmax;

extern double nonadiabatic_coupling;
extern bool self_anharmonicity_bool;
extern double self_anharmonicity_D;

// define function here
void convert_dv(const vector<vector<int>> & vec_2d, vector <int>  & vec_1d , vector <int> & displacement , vector <int> & element_size );
// used for cnostruct buffer for communication between process for matrix multiplication.
int construct_send_buffer_index(int * remoteVecCount, int * remoteVecPtr, int * remoteVecIndex, int * tosendVecCount_element, int * tosendVecPtr_element, int * & tosendVecIndex_ptr);

int compar(const void * a, const void * b);

void check_and_create_file(string parent_path, string path);

template <typename T> void broadcast_1d_vector(vector<T> & vector_array, int & array_size, MPI_Datatype datatype, int root );


#endif //QUANTUM_MEASUREMENT_UTIL_H

