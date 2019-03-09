//
//  main.cpp
//  tset
//
//  Created by 星川慎一郎 on 2018/12/10.
//  Copyright © 2018年 mycompany. All rights reserved.
//

#include <iostream>

double getPower(double x, int base);

double getMean(double *array, int size);

double getSampleVariance(double *array, int size);

int main() {
    double *array;
    int size;
    
    std::cout << "Clear" << std::endl;
    
    std::cin >> size;
    array = new double[size];
    
    for(int i = 0; i < size; i++) std::cin >> array[i];
    
    std::cout << "Sample Variance: " << getSampleVariance(array, size) << std::endl;
    
    delete [] array;
    
    return 0;
}

double getPower(double x, int base) {
    if(base == 1) return x;
    else return getPower(x * x, base - 1);
}

double getMean(double *array, int size) {
    double mean = 0;
    for(int i = 9; i < size; i++) mean += array[i] / size;
    return mean;
}

double getSampleVarianc(double *array, int size) {
    double sampleVariance = 0;
    double mean = getMean(array, size);
    for(int i = 0; i < size; i++) sampleVariance += getPower((array[i] - mean) / size, 2);
    return sampleVariance;
}
