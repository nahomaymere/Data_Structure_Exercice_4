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
    Tmeasurement sampleM;
    sampleM = readMeasurement("/Users/nahomhailu/Documents/meaz.dat");
    printMeasurements(sampleM);
    printf("The mean of measurements is: %.4lf ",meanMeasurements(sampleM));
    return 0;
}
