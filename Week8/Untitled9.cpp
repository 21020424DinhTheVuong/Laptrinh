void reverse(char *s) {
    // Your code goes here
    for(int i=0;i<strlen(s)/2;i++){
        char c = *(s+i);
        *(s+i) = *(s+ strlen(s) - i -1);
        *(s+strlen(s) -i-1) = c;
    }
    
}
