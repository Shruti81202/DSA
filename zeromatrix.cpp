#include <bits/stdc++.h> 
vector<vector<int>> zeroMatrix(vector<vector<int>> &matrix, int n, int m) {
	// Write your code here.
	//int col[m]={0}; matrix[0][..]
	//int row[n]={0}; matrix[..][0]
int col0=1;
for(int i=0;i<n;i++){
	for(int j=0;j<m;j++){
                if (matrix[i][j] == 0) {
                        // mark the ith row
                        matrix[i][0] = 0;
                        // mark the jth column
                        if (j != 0)
                            matrix[0][j] = 0;
                        else
                            col0 = 0;
                }
        }
}

for (int i = 0; i < n; i++){
	for(int j=0;j<m;j++){
		if(matrix[i][j]!=0){
			if(matrix[i][0]==0||matrix[0][j]==0){
				matrix[i][j]=0;
			}
		}
	}
}
if(matrix[0][0]==0){
	for(int j=0;j<m;j++)matrix[0][j]=0;
}
if (col0 == 0) {
        for (int i = 0; i < n; i++)
                matrix[i][0] = 0;
}
return matrix;
}