string pigLatin(string word){
    if(word[0]=='u'||word[0]=='e'||word[0]=='o'||word[0]=='a'||word[0]=='i'){
        word+="way";
    }
    else {
        char c=word[0];
        for(int i=0;i<word.length()-1;i++){
            word[i]=word[i+1];
        }
        word[word.length()-1]=c;
        word+="ay";
    }
    return word;
}
