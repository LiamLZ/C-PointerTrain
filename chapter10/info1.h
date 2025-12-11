struct INFO2
{
    char cust_name[21];
    char cust_addr[41];
    char model[21];
    float msrp;
    float sales_price;

    enum {PURE_CASH,CASH_LOAN,LEASE} type;
    union 
    {
        struct 
        {
            float sales_tax;
            float licensing_fee;
        } pure_cash;
        struct 
        {
            /* data */
        } cash_loan;
        struct 
        {
            /* data */
        } lease;
        
        
    }info;
    

};
