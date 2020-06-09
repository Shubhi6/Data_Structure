#include "slist.h"

int find_node(data_t element, SLink *head)
{
   int position = 1;
  
  //Check list is empty or not
  if (head == NULL)
  {
     return LIST_EMPTY;
  }

  //ELse, list not empty
  while (head != NULL)
  {
      //Traverse till given element is found
      if (head->data == element)
      {
          //Return node position
	  return position;
      }
      head = head -> link;
      //Else, increment position
      position++;
  }
  return DATA_NOT_FOUND;
}
