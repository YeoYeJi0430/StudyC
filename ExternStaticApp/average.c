extern int count; // printf.. 사용안해서 #include 필요없음main.c int count공유
extern int total; // input.c total공유

double average(void)
{
	return total / (double)count;
}