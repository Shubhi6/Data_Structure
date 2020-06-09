int remove_duplicates)
{
SLink *temp,*prev;
temp = prev = *head;

if (head == NULL)
{
return LIST_EMPTY;
}


while(temp != NULL)
{
if (temp -> link == NULL)
{
 return temp -> data;
}

while (temp -> link != NULL)
{
 temp = prev -> link;

 if(prev -> data == temp -> data)
 {
  prev -> link = temp -> link;
  }
 temp = temp -> link;
return SUCCESS;
}
