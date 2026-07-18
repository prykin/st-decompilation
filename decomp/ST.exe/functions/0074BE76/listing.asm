FUN_0074be76:
0074BE76  55                        PUSH EBP
0074BE77  8B EC                     MOV EBP,ESP
0074BE79  51                        PUSH ECX
0074BE7A  56                        PUSH ESI
0074BE7B  57                        PUSH EDI
0074BE7C  8B F1                     MOV ESI,ECX
0074BE7E  33 FF                     XOR EDI,EDI
0074BE80  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
0074BE83  39 BE 8C 00 00 00         CMP dword ptr [ESI + 0x8c],EDI
0074BE89  75 75                     JNZ 0x0074bf00
0074BE8B  68 E0 00 00 00            PUSH 0xe0
0074BE90  E8 9B 26 FE FF            CALL 0x0072e530
0074BE95  3B C7                     CMP EAX,EDI
0074BE97  59                        POP ECX
0074BE98  74 14                     JZ 0x0074beae
0074BE9A  8D 4D FC                  LEA ECX,[EBP + -0x4]
0074BE9D  68 24 17 7A 00            PUSH 0x7a1724
0074BEA2  51                        PUSH ECX
0074BEA3  56                        PUSH ESI
0074BEA4  57                        PUSH EDI
0074BEA5  8B C8                     MOV ECX,EAX
0074BEA7  E8 E3 04 00 00            CALL 0x0074c38f
0074BEAC  EB 02                     JMP 0x0074beb0
LAB_0074beae:
0074BEAE  33 C0                     XOR EAX,EAX
LAB_0074beb0:
0074BEB0  3B C7                     CMP EAX,EDI
0074BEB2  89 86 8C 00 00 00         MOV dword ptr [ESI + 0x8c],EAX
0074BEB8  74 61                     JZ 0x0074bf1b
0074BEBA  68 A8 00 00 00            PUSH 0xa8
0074BEBF  E8 6C 26 FE FF            CALL 0x0072e530
0074BEC4  3B C7                     CMP EAX,EDI
0074BEC6  59                        POP ECX
0074BEC7  74 14                     JZ 0x0074bedd
0074BEC9  8D 4D FC                  LEA ECX,[EBP + -0x4]
0074BECC  68 10 17 7A 00            PUSH 0x7a1710
0074BED1  51                        PUSH ECX
0074BED2  56                        PUSH ESI
0074BED3  57                        PUSH EDI
0074BED4  8B C8                     MOV ECX,EAX
0074BED6  E8 7D 07 00 00            CALL 0x0074c658
0074BEDB  EB 02                     JMP 0x0074bedf
LAB_0074bedd:
0074BEDD  33 C0                     XOR EAX,EAX
LAB_0074bedf:
0074BEDF  3B C7                     CMP EAX,EDI
0074BEE1  89 86 90 00 00 00         MOV dword ptr [ESI + 0x90],EAX
0074BEE7  75 17                     JNZ 0x0074bf00
0074BEE9  8B 8E 8C 00 00 00         MOV ECX,dword ptr [ESI + 0x8c]
0074BEEF  3B CF                     CMP ECX,EDI
0074BEF1  74 07                     JZ 0x0074befa
0074BEF3  8B 01                     MOV EAX,dword ptr [ECX]
0074BEF5  6A 01                     PUSH 0x1
0074BEF7  FF 50 0C                  CALL dword ptr [EAX + 0xc]
LAB_0074befa:
0074BEFA  89 BE 8C 00 00 00         MOV dword ptr [ESI + 0x8c],EDI
LAB_0074bf00:
0074BF00  39 7D 08                  CMP dword ptr [EBP + 0x8],EDI
0074BF03  75 08                     JNZ 0x0074bf0d
0074BF05  8B 86 8C 00 00 00         MOV EAX,dword ptr [ESI + 0x8c]
0074BF0B  EB 10                     JMP 0x0074bf1d
LAB_0074bf0d:
0074BF0D  83 7D 08 01               CMP dword ptr [EBP + 0x8],0x1
0074BF11  75 08                     JNZ 0x0074bf1b
0074BF13  8B 86 90 00 00 00         MOV EAX,dword ptr [ESI + 0x90]
0074BF19  EB 02                     JMP 0x0074bf1d
LAB_0074bf1b:
0074BF1B  33 C0                     XOR EAX,EAX
LAB_0074bf1d:
0074BF1D  5F                        POP EDI
0074BF1E  5E                        POP ESI
0074BF1F  C9                        LEAVE
0074BF20  C2 04 00                  RET 0x4
