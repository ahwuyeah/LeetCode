bool canVisitAllRooms(int** rooms, int roomsSize, int* roomsColSize){
    bool ifVisit[roomsSize];
    memset(ifVisit, 0, sizeof(ifVisit));

    int roomArr[1000], result = 1;
    roomArr[0] = 0;
    ifVisit[0] = 1;
    int head = 0, tail = 0;

    while(head <= tail){
        int ptr = roomArr[head++];
        for(int i = 0; i < roomsColSize[ptr]; i++){
            if(!ifVisit[rooms[ptr][i]]){
                roomArr[++tail] = rooms[ptr][i];
                ifVisit[rooms[ptr][i]] = 1;
                result++;
            }
        }
    } 
    return result == roomsSize;
}
