vector<int> Solution::maxset(vector<int> &A) {
    long long int i=0, sum=INT_MIN, start=0, end=0, max_sum=INT_MIN, ans_len=0, ans_start=0, ans_end=-1;
    while(i<A.size()){
        if(A[i]>=0){
            start=i; 
            sum=0;
            
            while(A[i]>=0 && i<A.size()){
                sum+=A[i];
                i++;
            }
            end = i-1;
            if((sum>max_sum) || (sum==max_sum && end-start+1<ans_len)){
                max_sum = sum;
                ans_start = start;
                ans_end = end;
                ans_len = end+start-1;
        }
            
        }
        i++;
        
        
    }
    
    vector<int> ans;
    for(int i=ans_start; i<=ans_end; i++){
        ans.push_back(A[i]);
    }
    return ans;
    }