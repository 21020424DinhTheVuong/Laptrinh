#include<algorithm>
int* merge(int* firstArr, int lenArr1, int* secondArr, int lenArr2){
    int *merge = new int[lenArr1 + lenArr2];
    for(int i=0;i<lenArr1;i++){
        merge[i] = firstArr[i];
    }
    for(int i=lenArr1;i<lenArr1+lenArr2;i++){
        merge[i]= secondArr[i-lenArr1];
    }
    if(lenArr1<2 && lenArr2<2) return merge;
    else if(lenArr1>2){
        if(firstArr[0] <firstArr[1]) {sort(merge, merge + lenArr1 + lenArr2);return merge;}
        else {sort(merge, merge + lenArr1 + lenArr2, greater<int>());return merge;}
    }
    else if(lenArr2 >2){
        if(secondArr[0] < secondArr[1]) {sort(merge, merge + lenArr1 + lenArr2);return merge;}
        else {sort(merge, merge + lenArr1 + lenArr2, greater<int>());return merge;}
    }
}
