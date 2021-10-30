int Solution::solve(int a, int b) {
    int cnt1= 0 ;
    int cnt2= 0 ;
    if((a ==0) && (b==0)) // if both of the num is zero
    {
        return 0;
    }
    if(a==b)// if both of the num is equal .. floor value of sqrt of their product is not effective bec cnt+=2 ;
    {
        while(a)
        {
            a = floor(a/2);
            cnt1++;
            solve(a , b);
        }
        while(b)
        {
            a = floor(a/2);
            cnt1++;
            solve(a , b);
            
        }
        return cnt1;
        
    }
    else{ // if both are not equal.
            
            int d = floor(sqrt(a*b));
            if(d != 0)
            {
                 a = d ;
                 b = d;
                 cnt1 +=2 ;
                //  solve(a, b);
                if(a)
                {
                    a= floor(a/2) ;
                    cnt2 +=1;
                    solve(a, b);
                }
                if(b)
                {
                    cnt2+=1;
                    b = floor(b/2);
                    solve(a,b);
                }
                return min(cnt1 , cnt2);
            
            }
        else
        {
            if( (a==0 && b==1) || (a==1 && b==0))
            {
                return 1;
            }
            
                
        }
}
    
    
        
    
    
}
