#import <stdio.h>


int main(){
int binary[8] = {0,0,0,0,0,0,0,0};
int multiples[8] = {128,64,32,16,8,4,2,1};
int num = 0;
printf("enter base 10 number (0-255): ");
scanf("%d",&num);
if(num > 255){num = 255;} else if(num < 0){num = 0;}
for(int i = 0; i < 8; i++){
    if((num-multiples[i]) >= 0){
        binary[i] = 1;
        num -= multiples[i];
        printf("%d \n",num);
    }

}
for(int i = 0;i<8;i++){
    printf("%d",binary[i]);
}
printf("\n");
}
