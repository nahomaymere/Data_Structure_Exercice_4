//
//  Tmeasurement.c
//  DataStructureEx4
//
//  Created by Nahom Hailu on 12/07/16.
//  Copyright (c) 2016 Nahom. All rights reserved.
//

#include "Tmeasurement.h"
#include <stdlib.h>
Tmeasurement readMeasurement(char *filename){
    FILE *fp = fopen(filename, "r");
    Tmeasurement m;
    int counter = 0;
    double buffer[255];
    
    if (fp == NULL) {
        printf("Error opening the file\n");
        return m;
    }
    printf("File opened sucessfully :)\n");

    while (fscanf(fp, "%lf",&buffer[counter]) > 0 ) {
        counter++;
    }
    m.N = counter;// how many measurements are counted
    m.measurement = (double*)malloc(m.N * sizeof(int));
    for(int i = 0; i < m.N; i++) {
        m.measurement[i] = buffer[i];
    }
    fclose(fp);
    return m;
    
}
void printMeasurements(Tmeasurement m){
    int counter = 0;
    if (m.N <= 0) {
        printf("Nothing to print\n");
        return;
    }
    printf("The measurements:\n");

    while (counter < m.N) {
        printf("%f\t",m.measurement[counter]);
        counter ++;
        
    }
    printf("\n");// new line after printing the measurements
    
}
double meanMeasurements(Tmeasurement m){
    double mean = 0;
    double total = 0;
    int counter = 0;
    if (m.N <= 0) {
        return 0;
    }
    while (counter < m.N) {
        total += m.measurement[counter];
        counter++;
    }
    mean = total / m.N;
    return mean;
    
}
