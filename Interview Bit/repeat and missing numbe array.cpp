vector<int> Solution::repeatedNumber(const vector<int> &A) {
    
    long long int num1=0, num2=0, sum, sumofsq, n; 
    n = A.size();
    sum = (n*(n+1))/2;
    sumofsq = (n*(n+1)*(2*n+1))/6;
    
    for(int i=0; i<n; i++){
        sum = sum - (long long int)A[i];
        sumofsq = sumofsq - (long long int)A[i]*(long long int)A[i];
    }    
    
    num1 = (sumofsq/sum + sum)/2;
    num2 = num1-sum;
    
    vector<int> vect;
    vect.push_back(num2);
    vect.push_back(num1);
    
    return vect;
}

    

