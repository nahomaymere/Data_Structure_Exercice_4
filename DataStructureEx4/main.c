//
//  main.c
//  DataStructureEx4
//
//  Created by Nahom Hailu on 12/07/16.
//  Copyright (c) 2016 Nahom. All rights reserved.
//

#include <stdio.h>
#include "Tmeasurement.h"

int main(int argc, const char * argv[]) {
    // insert code here...
    Tmeasurement sampleM,sampleM2;
    sampleM = readMeasurement("/Users/nahomhailu/Documents/mea.dat");
    sampleM2 = sampleM;
    incMeasurements(&sampleM2, 0.2);
    printMeasurements(sampleM2);
    printf("The mean of measurements is: %.4lf\n ",meanMeasurements(sampleM));
    printf("Mean of sampleMsecond : %.4lf",meanMeasurements(sampleM2));
    return 0;
}
