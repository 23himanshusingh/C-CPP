class Solution{
public:
	int search(string pat, string txt) {
	    int ans=0;
	    unordered_map <char,int> mp;
	
	    for (int i=0;i<pat.size();i++){
	        mp[pat[i]]++;
	    }
	    int i=0,j=0,k=pat.size(),cnt=mp.size();
	    
	    while (j<txt.size()){
	        if (mp.find(txt[j])!=mp.end()){
	            mp[txt[j]]--;
	            if (mp[txt[j]]==0){
	                cnt--;
	            }
	        }
	        if (j-i+1 != k){
	            j++;
	        }
	        else{
	            if (cnt==0){
	                ans++;
	            }
	            if (mp.find(txt[i])!=mp.end()){
	                mp[txt[i]]++;
	                if (mp[txt[i]]==1){
	                    cnt++;
	                }
	            }
	            i++;
	            j++;
	        }
	    }
	    return ans;
	}

};