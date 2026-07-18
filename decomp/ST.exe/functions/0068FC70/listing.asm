FUN_0068fc70:
0068FC70  55                        PUSH EBP
0068FC71  8B EC                     MOV EBP,ESP
0068FC73  56                        PUSH ESI
0068FC74  57                        PUSH EDI
0068FC75  8B F9                     MOV EDI,ECX
0068FC77  33 F6                     XOR ESI,ESI
0068FC79  8B 8F A5 00 00 00         MOV ECX,dword ptr [EDI + 0xa5]
0068FC7F  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
0068FC82  85 C0                     TEST EAX,EAX
0068FC84  7E 4E                     JLE 0x0068fcd4
0068FC86  53                        PUSH EBX
0068FC87  66 8B 5D 0C               MOV BX,word ptr [EBP + 0xc]
0068FC8B  3B F0                     CMP ESI,EAX
LAB_0068fc8d:
0068FC8D  73 2E                     JNC 0x0068fcbd
0068FC8F  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
0068FC92  8B 51 1C                  MOV EDX,dword ptr [ECX + 0x1c]
0068FC95  0F AF C6                  IMUL EAX,ESI
0068FC98  03 C2                     ADD EAX,EDX
0068FC9A  85 C0                     TEST EAX,EAX
0068FC9C  74 1F                     JZ 0x0068fcbd
0068FC9E  8B 40 04                  MOV EAX,dword ptr [EAX + 0x4]
0068FCA1  85 C0                     TEST EAX,EAX
0068FCA3  74 18                     JZ 0x0068fcbd
0068FCA5  33 C9                     XOR ECX,ECX
0068FCA7  66 8B 48 7D               MOV CX,word ptr [EAX + 0x7d]
0068FCAB  0F BF D3                  MOVSX EDX,BX
0068FCAE  3B CA                     CMP ECX,EDX
0068FCB0  75 0B                     JNZ 0x0068fcbd
0068FCB2  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0068FCB5  51                        PUSH ECX
0068FCB6  8B C8                     MOV ECX,EAX
0068FCB8  E8 98 18 D7 FF            CALL 0x00401555
LAB_0068fcbd:
0068FCBD  8B 8F A5 00 00 00         MOV ECX,dword ptr [EDI + 0xa5]
0068FCC3  46                        INC ESI
0068FCC4  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
0068FCC7  3B F0                     CMP ESI,EAX
0068FCC9  7C C2                     JL 0x0068fc8d
0068FCCB  5B                        POP EBX
0068FCCC  5F                        POP EDI
0068FCCD  33 C0                     XOR EAX,EAX
0068FCCF  5E                        POP ESI
0068FCD0  5D                        POP EBP
0068FCD1  C2 08 00                  RET 0x8
LAB_0068fcd4:
0068FCD4  5F                        POP EDI
0068FCD5  33 C0                     XOR EAX,EAX
0068FCD7  5E                        POP ESI
0068FCD8  5D                        POP EBP
0068FCD9  C2 08 00                  RET 0x8
