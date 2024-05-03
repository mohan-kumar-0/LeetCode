class Solution {
public:
    int compareVersion(string version1, string version2) {
        stringstream ver1(version1); 
        stringstream ver2(version2); 
        string segment; 

        vector<string> ver1List, ver2List; 
        while(getline(ver1, segment, '.')) {
            ver1List.push_back(segment); 
        }

        while(getline(ver2, segment, '.')) {
            ver2List.push_back(segment); 
        }
        int len1 = ver1List.size(); 
        int len2 = ver2List.size(); 

        for(int i=0; i<min(ver1List.size(), ver2List.size()); i++) {
            int ver1Int = stoi(ver1List[i]); 
            int ver2Int = stoi(ver2List[i]); 

            if(ver1Int > ver2Int) {
                return 1;
            } else if(ver1Int < ver2Int) {
                return -1; 
            } 
        }

        if(len1 > len2) {
            for(int i=len2; i<len1; i++) {
                int ver1Int = stoi(ver1List[i]); 
                if(ver1Int > 0) {
                    return 1; 
                }
            }
        } else if(len1 < len2) {
            for(int i=len1; i<len2; i++) {
                int ver2Int = stoi(ver2List[i]);  
                if(ver2Int > 0) {
                    return -1;
                }
            }
        }
        return 0;
    }
};