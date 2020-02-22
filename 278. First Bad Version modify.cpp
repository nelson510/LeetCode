// Forward declaration of isBadVersion API.
bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        //cout<<"N is "<<n<<endl;
       return findfirstBadVersion(0,n);
    }
    
   int findfirstBadVersion(int l,int r){
       //cout<<l<<" "<<r<<endl;
       //cout<<(l==r);
        if(r==l){
           return r;
       }
        if(r>l){
        int mid= l + (r - l) / 2;  //(r-l)/2 but this prevent overflow
        if(!isBadVersion(mid)){         //find it from right
           return findfirstBadVersion(mid+1,r);            
        }   
        else if(isBadVersion(mid)){    //find it from left
           return findfirstBadVersion(l,mid);
        }    
        }
       
       return -1;
    }
};
