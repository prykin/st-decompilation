FUN_0066ac80:
0066AC80  55                        PUSH EBP
0066AC81  8B EC                     MOV EBP,ESP
0066AC83  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0066AC86  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0066AC89  50                        PUSH EAX
0066AC8A  51                        PUSH ECX
0066AC8B  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0066AC91  E8 63 B0 D9 FF            CALL 0x00405cf9
0066AC96  85 C0                     TEST EAX,EAX
0066AC98  74 0B                     JZ 0x0066aca5
0066AC9A  8B C8                     MOV ECX,EAX
0066AC9C  E8 61 AC D9 FF            CALL 0x00405902
0066ACA1  85 C0                     TEST EAX,EAX
0066ACA3  75 02                     JNZ 0x0066aca7
LAB_0066aca5:
0066ACA5  33 C0                     XOR EAX,EAX
LAB_0066aca7:
0066ACA7  5D                        POP EBP
0066ACA8  C2 08 00                  RET 0x8
