# include<stdio.h>
# include<list>

/**
 * 常规算法
 * 序列为 1,2，... ，n
 */
static int Josephus(int n,int m){
 
    List<Integer> monkeys=new ArrayList<>();
 
    for(int i=1;i<=n;i++){
        monkeys.add(i);
    }
 
    int pos=0;
 
    while(n>1){
        pos+=m-1;
        pos%=n;
        monkeys.remove(pos);
        n--;
    }
 
    return monkeys.get(0);
}