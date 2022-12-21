bool possibleBipartition(int n, int** dislikes, int dislikesSize, int* dislikesColSize){
    if(dislikesSize == 0) return true;
    int label[n + 1];
    memset(label, 0, (n + 1)*sizeof(int));
    bool isChecked[dislikesSize];
    memset(isChecked, 0, (dislikesSize)*sizeof(bool));
    label[dislikes[0][0]] = -1;
    label[dislikes[0][1]] = 1;
    isChecked[0] = 1;
    
    while(true){
        bool isUpdated = 0;
        for(int i = 0; i < dislikesSize; i++){
            if(label[dislikes[i][0]] == 0 && label[dislikes[i][1]] == 0) continue;
            else if(label[dislikes[i][0]] != 0 && label[dislikes[i][1]] == 0){
                label[dislikes[i][1]] = -label[dislikes[i][0]];
                isChecked[i] = true;
                isUpdated = true;
            }
            else if(label[dislikes[i][0]] == 0 && label[dislikes[i][1]] != 0){
                label[dislikes[i][0]] = -label[dislikes[i][1]];
                isChecked[i] = true;
                isUpdated = true;
            }
            else{
                if(label[dislikes[i][0]] == label[dislikes[i][1]]){
                    return false;
                }else{
                    isChecked[i] = true;
                }
            }
        }
        bool isAllChecked = true;
        for(int i = 0; i < dislikesSize; i++){
            if(isChecked[i] == false){
                isAllChecked = false;
                break;
            } 
        }
        if(isAllChecked) return true;
        if(isUpdated == false && isAllChecked == false){
            for(int i = 1; i < dislikesSize; i++){
                if(isChecked[i] == false){
                    label[dislikes[i][0]] = -1;
                    label[dislikes[i][1]] = 1;
                    isChecked[i] = true;
                    break;
                }
            }
        }    
    }
    return false;
}
