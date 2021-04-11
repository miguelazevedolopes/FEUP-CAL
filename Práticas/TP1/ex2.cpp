// By: Gonçalo Leão

#include "exercises.h"

int maxSubsequence(int A[], unsigned int n, unsigned int &i, unsigned int &j) {
    int soma=0;
    int start=0,end=0;
    int len=n;
    for (int k=0;k<len;k++){
        for(int i=k;i<len;i++){
            int aux=0;
            for(int j=k;j<=i;j++){
                aux+=A[j];
            }
            if (aux>soma){
                soma=aux;
                start=k;
                end=i;
            }
        }
    }
    i=start;
    j=end;
    return soma;
}


/// TESTS ///
#include <gtest/gtest.h>
TEST(TP1_Ex2, maxSubsequence) {
    int A[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    unsigned int n = 9;
    unsigned int i, j;
    EXPECT_EQ(maxSubsequence(A,n,i,j), 6);
    EXPECT_EQ(i, 3);
    EXPECT_EQ(j, 6);
}