#include <stdio.h>
#include <stdlib.h>
struct Node
{
int coeff, exp;
struct Node *next;
};
struct Node *head1 = NULL, *head2 = NULL, *head3 = NULL;
void insert(struct Node **head, int coeff, int exp)
{
struct Node *node = (struct Node*) malloc(sizeof(struct Node));
node->coeff = coeff;
node->exp = exp;
node->next = NULL;
if (*head == NULL)
{
*head = node;
}
else
{
struct Node *temp = *head;
while (temp->next != NULL)
{
temp = temp->next;
}
temp->next = node;
}
}
void addPolynomials(struct Node *head1, struct Node *head2, struct Node **head3)
{
while (head1 != NULL && head2 != NULL)
{
if (head1->exp == head2->exp)
{
insert(head3, head1->coeff + head2->coeff, head1->exp);
head1 = head1->next;
head2 = head2->next;
} else if (head1->exp > head2->exp)
{
insert(head3, head1->coeff, head1->exp);
head1 = head1->next;
}
else
{
insert(head3, head2->coeff, head2->exp);
head2 = head2->next;
}
}
while (head1 != NULL)
{
insert(head3, head1->coeff, head1->exp);
head1 = head1->next;
}
while (head2 != NULL)
{
insert(head3, head2->coeff, head2->exp);
head2 = head2->next;
}
}
void display(struct Node *head)
{
struct Node *temp = head;
while (temp != NULL)
{
printf("%dx^%d", temp->coeff, temp->exp);
temp = temp->next;
if (temp != NULL)
{
printf(" + ");
}
}
printf("\n");
}
int main()
{
insert(&head1, 5, 2);
insert(&head1, 4, 1);
insert(&head1, 2, 0);
printf("Polynomial 1: ");
display(head1);
insert(&head2, 3, 2);
insert(&head2, 2, 1);
insert(&head2, 1, 0);
printf("Polynomial 2: ");
display(head2);
addPolynomials(head1, head2, &head3);
printf("Result: ");
display(head3);
return 0;
}