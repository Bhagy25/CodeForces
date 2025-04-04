    #include <iostream>
    #include <vector>
    using namespace std  ; 
    int main()
    {
        long long int n , b , d ; 
        cin>>n >>b >>d ; 
        long long int sum=0 ; 
        vector<long long int>arr(n) ; 
        for(auto&it:arr) {
            cin>>it ; 
        }
        int ans=0 ; 
        for(int i =0 ; i<n ; i++)
        {
            if(arr[i]<=b){
                sum+=arr[i]; 
            }
            if(sum>d)
            {
                ans++ ; 
                sum=0; 
            }
            
        } 
        cout<<ans<<endl ; 
        return 0 ; 
    }