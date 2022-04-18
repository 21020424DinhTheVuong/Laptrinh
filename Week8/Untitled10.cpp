void rFilter(char *s) {
    // Your code goes here
    int i = strlen(s)-1;
   while( ((*(s+i)>='a'&&*(s+i)<='z') || (*(s+i)>='A'&&*(s+i) <='Z')) == false  ){
       *(s+i) = '_';
       i--;
   }
}
