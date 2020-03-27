# Major idea for implementing diagonals code as mentioned here: https://www.coursera.org/learn/what-is-a-proof/discussions/weeks/2/threads/x1n3gUoDEemkThIF0dHxlg

# Implement check_if_Diag_can_be_extended function definition here.

def extend(Diag, n, arr):
	if len(Diag) == n*n:
		arr.append(Diag)
	choices = [0, 1, 2]
	for Diag_k in choices:
		Diag.append(Diag_k)
		if check_if_Diag_can_be_extended(Diag, n, arr):
			extend(Diag, n, arr)
		Diag.pop()

def check_if_Diag_can_be_extended(Diag, n, arr):
	k = len(Diag)

	#Add diagonal checking condition here.
	return True

def hello_world():
	arr = []
	Diag = []
	extend(Diag, arr, n)
	print(arr)