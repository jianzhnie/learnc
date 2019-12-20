/* 方法一：确定子列的首部，逐个累加，时间复杂度 O(n^2)*/ 
int MaxSubseqSum1(int n,int a[]){
	int maxsum = 0;
	for(int i=0;i<n;i++){
		int thisSum = 0;
		for(int j=i;j<n;j++){
			thisSum+=a[j];
			if(maxsum < thisSum)
				maxsum = thisSum;
		}
	}
	return maxsum;
}


/* 方法二：递归分成两份，分别求每个分割后子列的最大和，时间复杂度为 O(n*logn)*/
/* 返回三者中最大值*/
int Max3(int A,int B,int C){
	return (A>B)?((A>C)?A:C):((B>C)?B:C);
}
/* 分解成更小规模求解*/
int DivideAndConquer(int a[],int left,int right){
	
	/*递归结束条件，子列只有一个数字*/
	if(left == right){
		if(0 < a[left])
			return a[left];
		return 0;
	}
	
	/* 分别找到左右最大子列和*/ 
	int center = (left+right)/2; 
	int MaxLeftSum = DivideAndConquer(a,left,center);
	int MaxRightSum = DivideAndConquer(a,center+1,right);
	
	/* 再分别找左右跨界最大子列和*/
	int MaxLeftBorderSum = 0;
	int LeftBorderSum = 0;
	for(int i=center;i>=left;i--){
		LeftBorderSum += a[i];
		if(MaxLeftBorderSum < LeftBorderSum)
			MaxLeftBorderSum = LeftBorderSum;	
	}
	int MaXRightBorderSum = 0;
	int RightBorderSum = 0;
	for(int i=center+1;i<=right;i++){
		RightBorderSum += a[i];
		if(MaXRightBorderSum < RightBorderSum)
			MaXRightBorderSum = RightBorderSum;
	}
	
	/*最后返回分解的左边最大子列和，右边最大子列和，和跨界最大子列和三者中最大的数*/
	return Max3(MaxLeftSum,MaxRightSum,MaXRightBorderSum+MaxLeftBorderSum);
}
int MaxSubseqSum2(int n,int a[]){
	return DivideAndConquer(a,0,n-1);
}


/* 方法三：直接累加，如果累加到当前的和为负数，置当前值或0，时间复杂度为 O(n)*/ 
int MaxSubseqSum5(int n,int a[]){
	int maxsum = 0;
	int thisSum=0;
	for(int i=0;i<n;i++){
		thisSum+=a[i];
		if(thisSum<0){
			thisSum=0;
		}else if(maxsum < thisSum){
			maxsum = thisSum;
		}
	}
	return maxsum;
}