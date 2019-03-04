int recursive(int x, int n) {
	if (n>0) {
		return recursive(x+n, n-1);
	} else {
		return x;
	}
}


		
