int numberPaths(int col, int row, int arrNum[][], int nextCol, int maxRow){
	if(col==maxCol && row == maxRow arrNum[row][col]==1)
		return 1;
	if(arrNum[row][col]==0)
		return 0;
	if(col==maxCol)
		return numberPaths(col, row+1, arrNum, maxCol, maxRow);
	if(row==maxRow)
		return numberPaths(col+1, row, arrNum, maxCol, maxRow);
	return numberPaths(col, row+1) + numberPaths(col+1, row);
}