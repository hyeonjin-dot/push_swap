
#include "header.h"

void	dli_init(t_dli* head)
{
	head->llink = head;
	head->rlink = head;
}

t_dli	dli_create(int data) //
{
	t_dli	*new;

	new = (t_dli*)malloc(sizeof(t_dli));
	new->data = data;
	new->rlink = NULL;
	new->llink = NULL;
	return (*new);
}

void	dli_insert(t_dli *bef, int data) //오른쪽  삽입
{
	t_dli	*new;

	new = (t_dli *)malloc(sizeof(t_dli));
	new->data = data;
	new->llink = bef;
	if (bef->rlink == bef)
		new->rlink = NULL;
	else
		new->rlink = bef->rlink;
	bef->rlink->llink = new;
	bef->rlink = new;
}

void	dli_print(t_dli* head)
{
	t_dli*	new;
	char	*tmp;
	int		len;
	
	new = head->llink;
	while (new != head)
	{
		tmp = ft_itoa(new->data);
		len = ft_strlen(tmp);
		write(1, tmp, len);
		write(1, "\n", 2);
		new = new->llink;
	}
}
