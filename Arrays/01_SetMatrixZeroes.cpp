/*Given an m x n integer matrix matrix, if an element is 0, set its entire row and column to 0's.
You must do it in place.*/


/*Example:
Input: matrix = [[1,1,1],[1,0,1],[1,1,1]]
Output: [[1,0,1],[0,0,0],[1,0,1]]*/

/*
1: Find out where do we have a zero in the matrix
2: Push that particular row and column number into a vector named r and c respectively
3: For all the elements in that particular row, make all columns zero by running a loop
4: Similarly. for that column, make all the row elements as 0 by running another loop*/


class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<int> r,c;
        int m=matrix.size(),n=matrix[0].size();

        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(matrix[i][j]==0){
                    r.push_back(i);
                    c.push_back(j);
                }
            }
        }

        for(auto x:r){
            for(int i=0;i<n;i++){
                matrix[x][i]=0;
            }
        } 

         for(auto x:c){
            for(int i=0;i<m;i++){
                matrix[i][x]=0;
            }
        }           
    }
};

 
