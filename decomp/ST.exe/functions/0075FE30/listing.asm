FUN_0075fe30:
0075FE30  55                        PUSH EBP
0075FE31  8B EC                     MOV EBP,ESP
0075FE33  83 EC 10                  SUB ESP,0x10
0075FE36  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0075FE39  57                        PUSH EDI
0075FE3A  8B 81 BA 01 00 00         MOV EAX,dword ptr [ECX + 0x1ba]
0075FE40  8B 79 68                  MOV EDI,dword ptr [ECX + 0x68]
0075FE43  89 7D F0                  MOV dword ptr [EBP + -0x10],EDI
0075FE46  8B 40 18                  MOV EAX,dword ptr [EAX + 0x18]
0075FE49  8B 10                     MOV EDX,dword ptr [EAX]
0075FE4B  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
0075FE4E  8B 50 04                  MOV EDX,dword ptr [EAX + 0x4]
0075FE51  8B 40 08                  MOV EAX,dword ptr [EAX + 0x8]
0075FE54  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
0075FE57  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
0075FE5A  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
0075FE5D  85 C0                     TEST EAX,EAX
0075FE5F  7E 72                     JLE 0x0075fed3
0075FE61  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
0075FE64  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0075FE67  2B D1                     SUB EDX,ECX
0075FE69  53                        PUSH EBX
0075FE6A  56                        PUSH ESI
0075FE6B  89 4D 14                  MOV dword ptr [EBP + 0x14],ECX
0075FE6E  89 55 0C                  MOV dword ptr [EBP + 0xc],EDX
0075FE71  89 45 10                  MOV dword ptr [EBP + 0x10],EAX
LAB_0075fe74:
0075FE74  8B 04 0A                  MOV EAX,dword ptr [EDX + ECX*0x1]
0075FE77  8B 31                     MOV ESI,dword ptr [ECX]
0075FE79  85 FF                     TEST EDI,EDI
0075FE7B  76 45                     JBE 0x0075fec2
0075FE7D  89 7D 08                  MOV dword ptr [EBP + 0x8],EDI
LAB_0075fe80:
0075FE80  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
0075FE83  33 C9                     XOR ECX,ECX
0075FE85  8A 08                     MOV CL,byte ptr [EAX]
0075FE87  33 DB                     XOR EBX,EBX
0075FE89  8B D1                     MOV EDX,ECX
0075FE8B  33 C9                     XOR ECX,ECX
0075FE8D  40                        INC EAX
0075FE8E  8A 0C 3A                  MOV CL,byte ptr [EDX + EDI*0x1]
0075FE91  8B 7D F8                  MOV EDI,dword ptr [EBP + -0x8]
0075FE94  33 D2                     XOR EDX,EDX
0075FE96  8A 10                     MOV DL,byte ptr [EAX]
0075FE98  8A 1C 3A                  MOV BL,byte ptr [EDX + EDI*0x1]
0075FE9B  8B 7D F4                  MOV EDI,dword ptr [EBP + -0xc]
0075FE9E  03 CB                     ADD ECX,EBX
0075FEA0  40                        INC EAX
0075FEA1  33 D2                     XOR EDX,EDX
0075FEA3  33 DB                     XOR EBX,EBX
0075FEA5  8A 10                     MOV DL,byte ptr [EAX]
0075FEA7  8A 1C 3A                  MOV BL,byte ptr [EDX + EDI*0x1]
0075FEAA  03 CB                     ADD ECX,EBX
0075FEAC  40                        INC EAX
0075FEAD  88 0E                     MOV byte ptr [ESI],CL
0075FEAF  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0075FEB2  46                        INC ESI
0075FEB3  49                        DEC ECX
0075FEB4  89 4D 08                  MOV dword ptr [EBP + 0x8],ECX
0075FEB7  75 C7                     JNZ 0x0075fe80
0075FEB9  8B 7D F0                  MOV EDI,dword ptr [EBP + -0x10]
0075FEBC  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
0075FEBF  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
LAB_0075fec2:
0075FEC2  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
0075FEC5  83 C1 04                  ADD ECX,0x4
0075FEC8  48                        DEC EAX
0075FEC9  89 4D 14                  MOV dword ptr [EBP + 0x14],ECX
0075FECC  89 45 10                  MOV dword ptr [EBP + 0x10],EAX
0075FECF  75 A3                     JNZ 0x0075fe74
0075FED1  5E                        POP ESI
0075FED2  5B                        POP EBX
LAB_0075fed3:
0075FED3  5F                        POP EDI
0075FED4  8B E5                     MOV ESP,EBP
0075FED6  5D                        POP EBP
0075FED7  C2 10 00                  RET 0x10
