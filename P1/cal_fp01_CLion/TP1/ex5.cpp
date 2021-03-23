// By: Gonçalo Leão

#include "exercises.h"

unsigned int sumArray(unsigned int a[], unsigned int n) {
    unsigned int sum = 0;
    for(unsigned int i = 0; i < n; i++) {
        sum += a[i];
    }
    return sum;
}

#include <iostream>
bool isCanonical(unsigned int C[], unsigned int n) {
    unsigned int C1[n],C2[n],S2[n],S1[n],usedCoins1[n],usedCoins2[n];

    for (int i=3;i<(C[n-1]+C[n-2]);i++){
        for (int j=0;j<n;j++) {
            C1[j] = C[j];
            C2[j] = C[j];
            S1[j] = 9999;
            S2[j] = 9999;
            usedCoins1[j]=0;
            usedCoins2[j]=0;
        }
        if(changeMakingGreedy(C1,S1,n,i,usedCoins1)){
            changeMakingBF(C2,S2,n,i,usedCoins2);
            if(sumArray(usedCoins1,n)>sumArray(usedCoins2,n))
                return false;
        }
        else return false;
    }
    return true;
}


/// TESTS ///
#include <gtest/gtest.h>

TEST(TP1_Ex5, canonicalTrue) {
    unsigned int C[] = {1,2,5};
    EXPECT_EQ(isCanonical(C,3), true);

    unsigned int C2[] = {1,2,5,10};
    EXPECT_EQ(isCanonical(C2,4), true);
}

TEST(TP1_Ex5, canonicalFalse) {
    unsigned int C[] = {1,4,5};
    EXPECT_EQ(isCanonical(C,3), false);
}