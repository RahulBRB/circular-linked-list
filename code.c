void enqueue(node ** ptrhead,int val){
    node*tmp=(node*)malloc(sizeof(node));
    tmp->data=val;
    if(*ptrear==NULL)
    tmp->next=tmp;
    else{
        tmp->next=(*ptrear)->next;
        (*ptrear)->next=tmp;
    }
    *ptrear=tmp;
}

void dequeue(node**ptrear){
    if(*ptrear!=NULL)return;
    else{
        val=(*ptrear)->next->data;
        tmp=(*ptrear)=>next;
        if(*ptrear->next==*ptrear)
        *ptrear=NULL;
        else{
            (*ptrear)->next=tmp->next;
            free(tmp);
            return val;
        }
    }
}
