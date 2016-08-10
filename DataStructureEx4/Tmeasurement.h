//
//  Tmeasurement.h
//  DataStructureEx4
//
//  Created by Nahom Hailu on 12/07/16.
//  Copyright (c) 2016 Nahom. All rights reserved.
//

#ifndef __DataStructureEx4__Tmeasurement__
#define __DataStructureEx4__Tmeasurement__

#include <stdio.h>

typedef struct{
    int N;// how many measurements
    double *measurement;// Storing measurements in array
} Tmeasurement;
Tmeasurement readMeasurement(char *filename);// I am trying to read from the file mea.dat
void printMeasurements(Tmeasurement m);
double meanMeasurements(Tmeasurement m);
void incMeasurements(Tmeasurement *m, double increment);
#endif /* defined(__DataStructureEx4__Tmeasurement__) */
