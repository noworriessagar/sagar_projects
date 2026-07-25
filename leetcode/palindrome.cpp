bool isPalindrome(int x) {
        if (x<0) return false;
        int dup=x;
        long long revnum=0;
        while(x){
            int ld=x%10;
            revnum=revnum*10+ld;
            x/=10;


        }
        if (revnum==dup) {
            return true;}
        return false;    
        
        
    }