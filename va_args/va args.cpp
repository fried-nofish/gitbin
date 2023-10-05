
#include<stdio.h>
#define PFINT printf("hello world!\n");

#define SORT 1000
#undef SORT
	
#define MYCOUT(...) printf( __VA_ARGS__)
	
#define QC(...) (printf(__VA_ARGS__" - %d - %s/%s\n",__LINE__,__TIME__,__DATE__))

#define LOGFUNC(...) (printf(__VA_ARGS__ " - %d - %s / %s \n", __LINE__, __TIME__, __DATE__))

#define LOGSTRINGS(m, ...) printf(m,__VA_ARGS__)


int main()
{
	PFINT 
	printf("\n");
	PFINT PFINT
	
	MYCOUT("123");
    MYCOUT("45\n");
    MYCOUT("67890\n");

    QC("NOW:  ");
    QC("npu   ");
    QC("qwq");
    
	double n=2;

	LOGFUNC("0123456789");

    LOGSTRINGS("0123456789,%lf  %s",n,"ok\n"); 
    
    

#define AB(fmt,...) (printf(fmt " line:%d - %s/%s   \n", ##__VA_ARGS__,__LINE__,__TIME__,__DATE__));

    AB("I am cpp:%d  Name:%s  Age:%d",046,"feima",18);
   
    AB("eternal");
 

    
	
	return 0;
}