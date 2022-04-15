#include <stdio.h>
#include <string.h>
struct s {
    int roll;
    int intake;
};
int main(){
    struct s sojib;
    sojib.roll= 53;
    printf("%d", sojib.roll);
    return 0;
}
