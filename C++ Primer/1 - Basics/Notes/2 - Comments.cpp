
int main(int argc,char *argv[]){

    // You can add single line comments using '//' sign

    /* 
    
    Multiline comments / Comment pair can be added in this manner

    */

   // You cannot nest multiline comments because it starts with /* and ends */
   // Therefore doing the following will resutl in an error
   // /* This
   // * is 
   // * a /* Nested Comment Pair */ (ends here and the compiler detects '*/')
   // * which is not valid
   // */
   // However you can add single line comments signifying a nested multiline comment

   // /*
   // This seems to be a multiline comment but is not
   // /*
   // This seems to be a nest statement but you cannot actually nest them
   // */
   // */
}