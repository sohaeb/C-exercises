#include <stdio.h>
int main(){
int i,count;
for (i=0;i<100;i++){
	if (i%2 == 0){
	count++;
	printf("x = %d\n",i);
}
	if (count == 10){
	break;
}
}

return 0;

}
