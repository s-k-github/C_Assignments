/*6: Write functions for the following base conversion operations: a. Octal to Hexadecimal. b.
Hexadecimal to Octal.
Take care to validate digits/characters while accepting the input. */
#include<stdio.h>
#include<conio.h>
#include<string.h>
void OcttoHex();
void HextoOct();
int main()
{
	
    int ch=1;
    
    printf("\nPlease choose 1: \n1: Octal to Hex\n2: Hex to Octal\n0:Exit\n-> ");
    scanf("%d",&ch);
    switch(ch)
    {
    	case 1:
    		OcttoHex();
    		break;
    	case 2:
    		HextoOct();
    		break;
    	case 0:
			ch=0;
			break;
    	default:
    		printf("try again");
    	
    
    
    }
    return 0;
}

void OcttoHex()
{
	int OctNumber, Reverse=0, LastDigit, counter=0, hex=0, mul=1, i=0, k=0;
    char BinaryNumber[40] = "", HexadecimalNumber[40];
	printf("Enter  Number: ");
    scanf("%d", &OctNumber);
    while(OctNumber!=0)
    {
        LastDigit = OctNumber%10;
        if(LastDigit>7)
        {
            counter++;
            break;
        }
        Reverse = (Reverse*10) + LastDigit;
        OctNumber = OctNumber/10;
    }
    if(counter==0)
    {
        OctNumber = Reverse;
        while(OctNumber!=0)
        {
            LastDigit = OctNumber%10;
            switch(LastDigit)
            {
                case 0: strcat(BinaryNumber, "000");
                    break;
                case 1: strcat(BinaryNumber, "001");
                    break;
                case 2: strcat(BinaryNumber, "010");
                    break;
                case 3: strcat(BinaryNumber, "011");
                    break;
                case 4: strcat(BinaryNumber, "100");
                    break;
                case 5: strcat(BinaryNumber, "101");
                    break;
                case 6: strcat(BinaryNumber, "110");
                    break;
                case 7: strcat(BinaryNumber, "111");
                    break;
            }
            OctNumber = OctNumber/10;
        }
        while(BinaryNumber[k]!='\0')
            k++;
        counter=1;
        k--;
        while(k>=0)
        {
            if(BinaryNumber[k]=='0')
                LastDigit = 0;
            else
                LastDigit = 1;
            hex = hex + (LastDigit*mul);
            if(counter%4==0)
            {
                if(hex<10)
                    HexadecimalNumber[i] = hex+48;
                else
                    HexadecimalNumber[i] = hex+55;
                mul = 1;
                hex = 0;
                counter = 1;
                i++;
            }
            else
            {
                mul = mul*2;
                counter++;
            }
            k--;
        }
        if(counter!=1)
            HexadecimalNumber[i] = hex+48;
        if(counter==1)
            i--;
        printf("Result = ");
        counter = 0;
        for(i=i; i>=0; i--)
        {
            if(HexadecimalNumber[i]=='0' && counter==0)
            {
                counter++;
                continue;
            }
            else
                printf("%c", HexadecimalNumber[i]);
        }
        printf("\n");
    }
   
}

void HextoOct()
{
	int i=0, chk=0, len, rem, BinDigit, OctDigit;
    long long binaryInt=0,BinNumber, temp=1, OctNumber;
    char HexArray[11], BinArray[40]="";
    printf("Enter  Number: ");
	scanf("%s",HexArray);
    while(HexArray[i])
    {
        switch(HexArray[i])
        {
            case '0':
                strcat(BinArray, "0000");
                break;
            case '1':
                strcat(BinArray, "0001");
                break;
            case '2':
                strcat(BinArray, "0010");
                break;
            case '3':
                strcat(BinArray, "0011");
                break;
            case '4':
                strcat(BinArray, "0100");
                break;
            case '5':
                strcat(BinArray, "0101");
                break;
            case '6':
                strcat(BinArray, "0110");
                break;
            case '7':
                strcat(BinArray, "0111");
                break;
            case '8':
                strcat(BinArray, "1000");
                break;
            case '9':
                strcat(BinArray, "1001");
                break;
            case 'A':
                strcat(BinArray, "1010");
                break;
            case 'a':
                strcat(BinArray, "1010");
                break;
            case 'B':
                strcat(BinArray, "1011");
                break;
            case 'b':
                strcat(BinArray, "1011");
                break;
            case 'C':
                strcat(BinArray, "1100");
                break;
            case 'c':
                strcat(BinArray, "1100");
                break;
            case 'D':
                strcat(BinArray, "1101");
                break;
            case 'd':
                strcat(BinArray, "1101");
                break;
            case 'E':
                strcat(BinArray, "1110");
                break;
            case 'e':
                strcat(BinArray, "1110");
                break;
            case 'F':
                strcat(BinArray, "1111");
                break;
            case 'f':
                strcat(BinArray, "1111");
                break;
            default:
                chk = 1;
                break;
        }
        i++;
    }
    if(chk==0)
    {
        len = strlen(BinArray);
        while(len!=0)
        {
            if(BinArray[len-1]=='0')
                BinDigit=0;
            else
                BinDigit=1;
            binaryInt = binaryInt + (BinDigit*temp);
            temp = temp*10;
            len--;
        }
        BinNumber = binaryInt;
        OctNumber = 0;
        temp = 1;
        while(BinNumber>0)
        {
            rem = BinNumber%1000;
            switch(rem)
            {
                case 0:
                    OctDigit = 0;
                    break;
                case 1:
                    OctDigit = 1;
                    break;
                case 10:
                    OctDigit = 2;
                    break;
                case 11:
                    OctDigit = 3;
                    break;
                case 100:
                    OctDigit = 4;
                    break;
                case 101:
                    OctDigit = 5;
                    break;
                case 110:
                    OctDigit = 6;
                    break;
                case 111:
                    OctDigit = 7;
                    break;
            }
            OctNumber = (OctDigit*temp) + OctNumber;
            BinNumber = BinNumber/1000;
            temp = temp*10;
        }
        printf("Result = %lld", OctNumber);
    }
    
}
