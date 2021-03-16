#include "exercises.h"

int maxCrossing(int A[], int &l, int &m, int &r){
    int s1=0,s2=0;
    for (int k1=l;k1<m;k1++){
        s1+=A[k1];
    }
    for(int k1=m;k1<=r;k1++){
        s2+=A[k1];
    }
    if (s1>s2) return s1;
    else if (s2>=s1) return s2;
}
int max(int v1,int v2, int v3){
    if(v1>v2&&v1>v3)
        return v1;
    if(v2>v1&&v2>v3)
        return v2;
    if(v3>v2&&v3>v1)
        return v3;
    else return v1;
}
int maxSubsequenceDC(int A[], unsigned int n, int &i, int &j) {
    if (i==j) return A[i];
    int q1=(i+j)/2;
    int L=maxSubsequenceDC(A,n,i,q1);
    int q2=q1+1;
    int R=maxSubsequenceDC(A,n,q2,j);
    int C=maxCrossing(A,i,q1,j);
	return max(L,R,C);
}

/// TESTS ///
#include <gtest/gtest.h>

TEST(TP3_Ex2, testMaxSubsequence) {
    int A1[] = {1, 2, 3, 4};
    unsigned int n1 = 4;
    int i, j;
    EXPECT_EQ(maxSubsequenceDC(A1,n1,i,j), 10);
    EXPECT_EQ(i, 0);
    EXPECT_EQ(j, 3);

    int A2[] = {2, -1, -3, 4};
    unsigned int n2 = 4;
    EXPECT_EQ(maxSubsequenceDC(A2,n2,i,j), 4);
    EXPECT_EQ(i, 3);
    EXPECT_EQ(j, 3);

    int A3[] = {2, -1, 3, 4};
    unsigned int n3 = 4;
    EXPECT_EQ(maxSubsequenceDC(A3,n3,i,j), 8);
    EXPECT_EQ(i, 0);
    EXPECT_EQ(j, 3);

    int A4[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    unsigned int n4 = 9;
    EXPECT_EQ(maxSubsequenceDC(A4,n4,i,j), 6);
    EXPECT_EQ(i, 3);
    EXPECT_EQ(j, 6);
}