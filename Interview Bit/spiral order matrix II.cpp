vector<vector<int> > Solution::generateMatrix(int A) {
    vector<vector<int> >sol(A, vector<int>(A, 0));
    
    int left=0, right=A-1, top=0, bottom=A-1;
    int dir=0,num=1;
    
    LOOP: while(left<=right && top<=bottom){
        if(dir==0){
            for(int i=left; i<=right; i++){
                sol[top][i]=num;
                num++;
            }
            top++;
            dir=1;
            goto LOOP;
        }
        else if(dir==1){
            for(int j=top; j<=bottom; j++){
                sol[j][right]=num;
                num++;
            }
            right--;
            dir=2;
            goto LOOP;
        }
        else if(dir==2){
            for(int i=right; i>=left; i--){
                sol[bottom][i]=num;
                num++;
            }
            bottom--;
            dir=3;
            goto LOOP;
        }
        else if(dir==3){
            for(int j=bottom; j>=top; j--){
                sol[j][left]=num;
                num++;
            }
            left++;
            dir=0;
            goto LOOP;
        }
    }
    return sol;
        
    }

