int knapsackRec(int C,vector<int> &B,vector<int> &A,int i,int** dp){
    if(i<0){
        return 0;
    }
    if(dp[i][C]!=-1){
        return dp[i][C];
    }
    if(B[i]>C){
        return dp[i][C]=knapsackRec(C,B,A,i-1,dp);
    }
    else{
        return dp[i][C]=max(A[i]+knapsackRec(C-B[i],B,A,i-1,dp),knapsackRec(C,B,A,i-1,dp));
    }
}
int knapsack(int C,vector<int> &B,vector<int> &A,int n){
    int** dp;
    dp=new int*[n];
    
    for(int i=0;i<n;i++){
        dp[i]=new int[C+1];
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<=C;j++){
            dp[i][j]=-1;
        }
    }
    return knapsackRec(C,B,A,n-1,dp);
}
// int knapsack(int C,vector<int> &B,vector<int> &A,int n){
//     int i,w;
//     vector<vector<int>> K(n+1,vector<int>(C+1));   
//     for(i=0;i<=n;i++){
//         for(w=0;w<=C;w++){
//             if(i==0 || w==0){
//                 k[i][w]=0;
//             }
//             else if(B[i-1]<=w){
                
//             }
//         }
//     } 
// }
int Solution::solve(vector<int> &A, vector<int> &B, int C) {
    int n=A.size();
    return knapsack(C,B,A,n);
}
