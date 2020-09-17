#include <stdio.h>

#define max 2

int input_sys();
void sort_sys();
void reverse_sort_sys();

char sname[max];
char m_name[max][max];

int sid[max],r_sid[max];
int no;

int*p_id = &sid;

struct student
	{
		char name[20];
		unsigned int number;
	}id[max],s_id[max];

int main(void)
{
	
	for(no = 0; no < max; no++)
	{
		sid[no] = input_sys();
		id[no].number = sid[no];
	}
	
	sort_sys();
	reverse_sort_sys();
	
	for(no = 0; no < max; no++)
	{
		printf("%d %s\n",s_id[no].number, s_id[no].name);
	}
	
	printf("\n");
		
	for(no = 0; no < max; no++)
	{
		printf("%d\n", r_sid[no]);
	}
}

int input_sys()
{
	int input_no = no + 1, inputval;
	
	printf("Input #%d student information\n",input_no);
	printf("\n");
	
	printf("#%d student name: ",input_no);
	scanf("%s",&id[no].name);
	
	printf("#%d student id: ",input_no);
	scanf("%d",&inputval);
	
	printf("\n");
	
	return inputval;
}

void sort_sys()
{
	int s_no, s_time,s_val;
	
	for(s_no = 0; s_no < max; s_no++)
	{
		for(s_time = s_no + 1; s_time < max + 1;s_time++)
		{
			if(*(p_id + s_time) > *(p_id + s_no))
			{
				s_val = *(p_id + s_no);
				*(p_id + s_no) = *(p_id + s_time);
				*(p_id + s_time) = s_val;	
				
				s_id[s_no].number = id[s_no].number;
				s_id[s_time].number = id[s_time].number;
				
				s_id[s_no].name[20] = id[s_time].name;
				
				s_id[s_time].name[20] = id[s_no].name;
			}
			
			else
			{
				s_id[s_no].number = *(p_id + s_no);
				s_id[s_time].number = *(p_id + s_time);
				
				s_id[s_no].name[20] = id[s_no].name;
				
				s_id[s_time].name[20] = id[s_time].name;
			}
		}
	}
}

void reverse_sort_sys()
{
	for(no = 0; no < max; no++)
	{
		r_sid[no] = sid[max -(no + 1)];
	}
}
