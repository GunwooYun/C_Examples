#include<stdio.h>


void input_nums(int* lottop){

    int size, no, cnt;
    cnt = 0;
    int index = 0;
    if(lottop == NULL)
        return;

    int flag = 0;

    //size = sizeof(lottop) / sizeof(int);
    size = 6;
    printf("%d\n", size);

    while(1){
        
        if(index > size-1)
            break;
        printf("번호 입력 : ");
        scanf("%d", &no);
        for(int i = 0; i < index; i++){
            if(lottop[i] == no)
                flag = 1;
        }
        if(flag == 1){
            printf("같은 번호가 있습니다\n");
            flag = 0;
        }
            
        else{
            
            lottop[index++] = no;
            printf("index : %d\n", index);
        }
        
        
        
    }
}
    void print_nums(int* lotto_nums){
        for(int i=0; i<6;i++)
            printf("%d ", lotto_nums[i]);
    }


int main()
{
    int lotto_nums[6];

    input_nums(lotto_nums);
    print_nums(lotto_nums);
}