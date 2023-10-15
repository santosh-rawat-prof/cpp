deleteINBet( int pos) { // SINGLY LL
    int count = 0;

    p = start;

    while(p != NULL) {  //COUNTING NODES
        count++;
        p = p -> link;
    }

    if(pos == count && count == 1) {    //FROM START
        if(start == NULL) {
            cout<<"\n NO list present !!";
        } else {
            temp = start;
            start = start -> link;
            free(temp);
        }
    } else if(count != 0 && pos == count) { //FROM LAST
        if(start == NULL) {
            cout<<"\n No list present !!";
        } else if(start -> link == NULL) {
            free(start);
            start = NULL;
        } else {
            p = start;
            while(p -> link != NULL) {
                p = p -> link;
            }
            temp = p -> link;
            free(temp);
            p -> link = NULL;
        }
    } else if(pos < 1) {    //NEGATIVE POSITION
        cout<<"\n Incorrect position";
    } else {    //AT POSITION
        int i;
        p = start;

        for(i = 1; i < pos-1; i++) {
            p = p -> link;
        }
        temp = p -> link;
        p -> link = temp -> link;
        free(temp);
    }
}

void insertAtPos(int pos, int x) {  //SINGLY LL
    int count = 0;

    p = start;

    while(p != NULL) {  //COUNTING NODES
        count++;
        p = p -> link;
    }

    if(pos < 1) {   //NEGATIVE POSITION
        cout<<"\n Incorrert Position";
    } else {
        if(pos == 1) {  //AT START
            if(start == NULL)
	        {
		        start = (struct Node *) malloc(sizeof(struct Node));
		        start -> data = x;
		        start -> link = NULL;
	        } else {
                temp = (struct Node *) malloc(sizeof(struct Node));
                temp -> link = start;
                temp -> data = x;
                start = temp;
            }
        } else if(pos == count + 1) { //AT LAST
            p = start;
            while(p -> link != NULL) {
                p = p -> link;
            }

            temp = (struct Node *) malloc(sizeof(struct Node));
            p -> link = temp;
            temp -> data = x;
            temp -> link = NULL;
        } else {    //AT POSITION
            int i;
            p = start;

            for(i = 1; i < pos-1; i++) {
                p = p -> link;
            }

            temp = (struct Node *) malloc(sizeof(struct Node));
            temp -> link = p -> link;
            p -> link = temp;
            temp -> data = x;
        }
    }
}

//-------------------------------------xDOUBLY LLx----------------------------------------------------------


void insertAtPos(int pos, int x) {  //DOUBLY LL
    int count = 0;

    p = start;

    while(p != NULL) {  //COUNTING NODES
        count++;
        p = p -> next;
    }

    if(pos < 1) {   //NEGATIVE POSITION
        cout<<"\n Incorrert Position";
    } else {
        if(pos == 1) {  //AT START
            if(start == NULL)
	        {
		        start = (struct Node *) malloc(sizeof(struct Node));
                start -> prev = NULL;
		        start -> data = x;
		        start -> next = NULL;
	        } else {
                temp = (struct Node *) malloc(sizeof(struct Node));
                temp -> prev = NULL;
                start -> prev = temp;
                temp -> next = start;
                temp -> data = x;
                start = temp;
            }
        } else if(pos == count + 1) { //AT LAST
            p = start;
            while(p -> next != NULL) {
                p = p -> next;
            }

            temp = (struct Node *) malloc(sizeof(struct Node));
            p -> next = temp;
            temp -> prev = p;
            temp -> data = x;
            temp -> next = NULL;
        } else {    //AT POSITION
            int i;
            p = start;

            for(i = 1; i < pos-1; i++) {
                p = p -> next;
            }

            temp = (struct Node *) malloc(sizeof(struct Node));
            temp -> next = p -> next;
            temp -> prev = p;
            p -> next -> prev = temp;
            p -> next = temp;
            temp -> data = x;
        }
    }
}
