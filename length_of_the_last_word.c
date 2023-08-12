int lengthOfLastWord(char * s){
    int lastSize = 0;
    int i = strlen(s) - 1;
    
    if (s[i] == ' ') {
        while (i >= 0 && s[i] == ' ') {
            i--;
        }
    }

    while (i >= 0) {
        if (s[i] == ' ') {
            break;
        }
        if ((s[i] >= 97 && s[i] <= 122) || (s[i] >= 65 && s[i] <= 90)) {
            lastSize++;
        }
        i--;
    }

    return lastSize;
}
