#include <stdio.h>
long long derangement(int n){     //计算错位重排的结果
    if(n==1){          //n==1时不可能装错
        return 0;
    }
    if(n==2){         //n==2时只有一种装法
        return 1;
    }
    long long prev2=0;
    long long prev1=1;    // 初始化D(n-2)和D(n-1)的值
    long long current;
    for(int i=3;i<=n;i++){
        current=(i-1)*(prev1+prev2);        // 根据递推公式计算 D(n)
        prev2=prev1;
        prev1=current;
    }
    return prev1;
}

int main() {
    int n;
    printf("请输入信的数量 n: ");
    scanf("%d",&n);
    if(n<1){
        printf("信的数量必须是正整数。\n");
        return 1;
    }
    long long result=derangement(n);
    printf("将 %d 封信全部装错信封的方法有 %lld 种。\n", n, result);
    return 0;
}
