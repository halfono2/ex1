#include <stdio.h>
int ex01() {
    int num , pos;
    printf("please enter a number:" ); //קולט מהמשתמש את המספר
    scanf("%d", &num); //מכניס את הערך שהמשתמש נתן לnum
    printf("please enter position:" ); // קולט מהמשתמש את המיקום
    scanf("%d", &pos); // מכניס את הערך שהמשתמש נתן למיקום
    int bit= (num>>pos); //מזיז את המספר למיקום ישמר בביט
   int n=(bit%2==1); //לוקח את המספר ועושה לו מודולו 2 אם זה נכון n=1 אם לא נכון n=0

    printf("the bit in position %d of number %d is: %d\n",pos, num , n);
    return 0;


}
int ex02() {
    int num , pos;//num=17(00010001),pos=3 numon(00010101)
    printf("please enter a number:" );
    scanf("%d", &num);
    printf("please enter position:" );
    scanf("%d", &pos);
    int num1=(num>>pos);//לוקח את המספר ומזיז אותו שהספרה עלינו לשנות תהיה בספרת האחדות
    int numon,numoff;
    if(num1%2==1) //בודק האם ערך הספרה אחד או 0
        {
        numon=num; //אם ערך הספרה 1 כלומר אין מה לשנות במספר המקורי כשהוא "דלוק"
        numoff=(num-(1<<pos)); //לוקח את המספר המקורי ומחסיר ממנו 1 במיקום הספרה
        }
    else // אחרת כלומר מתי שערך הספרה במיקום המבוקש שווה ל0
        {
        numoff=num; //לא ישנה אתה המספר הכבוי כי ערכו כבר 0
        numon=num+(1<<pos); //יחבר 1 במיקום הרלוונטי
         }
    printf("The number when the bit at position %d is ON (set to 1): %d\n", pos, numon);
    printf("The number when the bit at position %d is OFF (set to 0): %d\n", pos, numoff);



}
int ex03() {
    int num , pos;
    printf("please enter a number:" );
    scanf("%d", &num);
    printf("please enter position:" );
    scanf("%d", &pos);
    int num1=(num>>pos); //לוקח את המספר ומזיז אותו כך שהספרה עליה אנו רוצים לעבוד תהיה ספרת האחדות בnum1
    if(num1%2==1) // בודק האם ספרת האחדות בnum1 היא 1 (הספרה אותה אנו רוצים לשנות)
        {
        num=num-(1<<pos); // אם הספרה שווה 1 אז הערך של המספר הראשוני יהפוך להיות הערך של המספר הראשוני ויחסיר את ה1 במיקום המבוקש
        }
    else // אחרת , כלומר כשערך הספרה במיקום המבוקש הוא 0
        {
        num=num+(1<<pos); // ערך המספר המקורי יהפוך להיות ערך המספר המקורי ועוד 1 במיקום המבוקש
    }
    printf("number with bit %d toggled: %d" , pos, num);
    return 0;
}
int ex04() {
    int num;
    printf("please enter a number:" );
    scanf("%d", &num);
    int check_if_odd;
    int check_if_even =((num%2)==0); //אם זוגי ערך המשתנה 1 אם זוגי(true) ערך המשתנה יהיה 0 (false)
    printf("%d",check_if_even);
}
int ex05() {
    int num1, num2;
    printf("please enter the first number (octal): " );
    scanf("%o", &num1);
    printf("please enter the second number (octal): ");
    scanf("%o", &num2);
    int sum=num1+num2; //מחבר את המספרים שהמשתמש נתן ומכניס לערך sum
    int bit3=(sum>>3); //לוקח את הביט השלישי ושם אותו בספרת האחדות
    bit3=((bit3%2)==1); //אם הערך של הביט השלישי 1 אז הערך יהיה 1 אם לא אז הערך יהיה 0
    int bit5=(sum>>5);
    bit5=((bit5%2)==1);
    int bit7=(sum>>7);
    bit7=((bit7%2)==1);
    int bit11=(sum>>11);
    bit11=((bit11%2)==1);
    int num=(bit3*1000)+(bit5*100)+(bit7*10)+(bit11*1);
    printf("the sum in hexadecimal: %x \n" , sum);
    printf("the 3,5,7,11 bits are: %d " , num);
}
int main(void) {
    ex05();
    return 0;
}
