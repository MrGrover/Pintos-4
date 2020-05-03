#include <stdio.h>

#include <stdlib.h>
#include <syscall.h>

int ch=0;

void Decom(int div1, int mod1, int mul , int i)
{
if(ch==0){
if(mod1==0){
mul=3;
printf("=3^");
ch=1;
div1--;
i=1;
}
if(mod1==2){
mul=6;
printf("=2+3^");
ch=1;
div1--;
i=1;
}
if(mod1==1){
mul=4;
printf("=2^2");
ch=1;
div1--;
}
}

if(div1!=0){
mul=mul*3;
if (mod1==1) {
printf("+3^");
mod1=0;
}
Decom(div1-1,mod1,mul,i+1);


}else if (div1==0 && (mod1==0||mod1==2))
printf("%d=%d \n",i,mul);
else printf("=%d \n",mul);



}




main(int argc, const char** argv)
{
   int N;
N=atoi(argv[1]);
if (N<4) printf(" Has no factors other than %d \n",N);
else{
printf("%d", N);
int nDiv= N / 3;
int nMod=N % 3;
 int Mul=0;
Decom(nDiv , nMod, Mul , 0);

}
  return EXIT_SUCCESS;
}
