// https://pl.spoj.com/problems/SIGALRM/

#include<signal.h>
 
int main(){
    raise(SIGALRM);
}