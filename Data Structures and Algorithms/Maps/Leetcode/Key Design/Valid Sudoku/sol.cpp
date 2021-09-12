class Solution {
    

    
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        bool validCol = 1 , validRow = 1 , validGrid = 1;
        
        for(int i = 0 ; i < 9 ; i++){
            vector<int> cnt(10);
            for(int j = 0 ; j < 9 ; j++){
                char cur = board[i][j];
                if(cur != '.'){
                    cnt[cur - '0']++;
                }
            }
            for(int k = 0 ; k < 10 ; k++){
                validRow &= (cnt[k] < 2);
            }
        }
        
       
        
         
        for(int i = 0 ; i < 9 ; i++){
            vector<int> cnt(10);
            for(int j = 0 ; j < 9 ; j++){
                char cur = board[j][i];
                if(cur != '.'){
                    cnt[cur - '0']++;
                }
            }
            for(int k = 0 ; k < 10 ; k++){
                validCol &= (cnt[k] < 2);
            }
        }
        
        for(int i = 0 ; i < 9 ; i += 3){
            for(int j = 0 ; j < 9; j += 3){
                vector<int>cnt(10);
                for(int a = i ; a < i + 3 ; a++){
                    for(int b = j ; b < j + 3 ; b++){
                        char cur = board[a][b];
                        if(cur != '.'){
                            cnt[cur - '0']++;
                        }
                    }
                }
                
                for(int k = 0 ; k < 10; k++){
                validGrid &= (cnt[k] < 2);
            }
            }
        }
        
        
        
        return (validRow && validCol && validGrid);
       
        
    }
};
