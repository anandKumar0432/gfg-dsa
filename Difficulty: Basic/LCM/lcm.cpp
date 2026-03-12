// User function Template for C++

int LCM(int a, int b) {

    int maxNum = max(a, b);
    
    while(true){
        if(maxNum % a == 0 && maxNum % b == 0){
            return maxNum;
        }
        
        maxNum++;
    }
    
    return maxNum;
}