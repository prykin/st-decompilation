TradePanelTy::sub_00551800:
00551800  55                        PUSH EBP
00551801  8B EC                     MOV EBP,ESP
00551803  51                        PUSH ECX
00551804  53                        PUSH EBX
00551805  56                        PUSH ESI
00551806  8B F1                     MOV ESI,ECX
00551808  33 C0                     XOR EAX,EAX
0055180A  33 DB                     XOR EBX,EBX
0055180C  57                        PUSH EDI
0055180D  8A 86 D0 01 00 00         MOV AL,byte ptr [ESI + 0x1d0]
00551813  66 39 9C 46 BC 01 00 00   CMP word ptr [ESI + EAX*0x2 + 0x1bc],BX
0055181B  8B 86 C8 01 00 00         MOV EAX,dword ptr [ESI + 0x1c8]
00551821  75 72                     JNZ 0x00551895
00551823  3B C3                     CMP EAX,EBX
00551825  74 33                     JZ 0x0055185a
00551827  8D 7E 18                  LEA EDI,[ESI + 0x18]
0055182A  C7 46 28 21 00 00 00      MOV dword ptr [ESI + 0x28],0x21
00551831  57                        PUSH EDI
00551832  50                        PUSH EAX
00551833  6A 02                     PUSH 0x2
00551835  E8 46 48 19 00            CALL 0x006e6080
0055183A  39 5E 2C                  CMP dword ptr [ESI + 0x2c],EBX
0055183D  74 1B                     JZ 0x0055185a
0055183F  8B 8E C8 01 00 00         MOV ECX,dword ptr [ESI + 0x1c8]
00551845  57                        PUSH EDI
00551846  51                        PUSH ECX
00551847  6A 02                     PUSH 0x2
00551849  8B CE                     MOV ECX,ESI
0055184B  C7 46 28 20 00 00 00      MOV dword ptr [ESI + 0x28],0x20
00551852  89 5E 2C                  MOV dword ptr [ESI + 0x2c],EBX
00551855  E8 26 48 19 00            CALL 0x006e6080
LAB_0055185a:
0055185A  8B 86 CC 01 00 00         MOV EAX,dword ptr [ESI + 0x1cc]
00551860  3B C3                     CMP EAX,EBX
00551862  0F 84 FD 01 00 00         JZ 0x00551a65
00551868  8D 7E 18                  LEA EDI,[ESI + 0x18]
0055186B  8B CE                     MOV ECX,ESI
0055186D  57                        PUSH EDI
0055186E  50                        PUSH EAX
0055186F  6A 02                     PUSH 0x2
00551871  C7 46 28 21 00 00 00      MOV dword ptr [ESI + 0x28],0x21
00551878  E8 03 48 19 00            CALL 0x006e6080
0055187D  39 5E 2C                  CMP dword ptr [ESI + 0x2c],EBX
00551880  0F 84 DF 01 00 00         JZ 0x00551a65
00551886  C7 46 28 20 00 00 00      MOV dword ptr [ESI + 0x28],0x20
0055188D  89 5E 2C                  MOV dword ptr [ESI + 0x2c],EBX
00551890  E9 BF 01 00 00            JMP 0x00551a54
LAB_00551895:
00551895  3B C3                     CMP EAX,EBX
00551897  0F 84 1F 01 00 00         JZ 0x005519bc
0055189D  39 1D 74 A1 7F 00         CMP dword ptr [0x007fa174],EBX
005518A3  0F 84 13 01 00 00         JZ 0x005519bc
005518A9  8D 5E 18                  LEA EBX,[ESI + 0x18]
005518AC  8B CE                     MOV ECX,ESI
005518AE  53                        PUSH EBX
005518AF  50                        PUSH EAX
005518B0  6A 02                     PUSH 0x2
005518B2  C7 46 28 21 00 00 00      MOV dword ptr [ESI + 0x28],0x21
005518B9  E8 C2 47 19 00            CALL 0x006e6080
005518BE  8A 8E BB 01 00 00         MOV CL,byte ptr [ESI + 0x1bb]
005518C4  8B 46 2C                  MOV EAX,dword ptr [ESI + 0x2c]
005518C7  84 C9                     TEST CL,CL
005518C9  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
005518CC  74 23                     JZ 0x005518f1
005518CE  85 C0                     TEST EAX,EAX
005518D0  0F 85 E6 00 00 00         JNZ 0x005519bc
005518D6  8B 86 C8 01 00 00         MOV EAX,dword ptr [ESI + 0x1c8]
005518DC  53                        PUSH EBX
005518DD  C7 46 28 20 00 00 00      MOV dword ptr [ESI + 0x28],0x20
005518E4  C7 46 2C 01 00 00 00      MOV dword ptr [ESI + 0x2c],0x1
005518EB  50                        PUSH EAX
005518EC  E9 C2 00 00 00            JMP 0x005519b3
LAB_005518f1:
005518F1  80 3D 4E 87 80 00 03      CMP byte ptr [0x0080874e],0x3
005518F8  75 29                     JNZ 0x00551923
005518FA  8A 86 D0 01 00 00         MOV AL,byte ptr [ESI + 0x1d0]
00551900  84 C0                     TEST AL,AL
00551902  75 1F                     JNZ 0x00551923
00551904  66 8B 86 AD 01 00 00      MOV AX,word ptr [ESI + 0x1ad]
0055190B  66 85 C0                  TEST AX,AX
0055190E  74 7E                     JZ 0x0055198e
00551910  33 FF                     XOR EDI,EDI
00551912  25 FF FF 00 00            AND EAX,0xffff
00551917  66 8B BE BC 01 00 00      MOV DI,word ptr [ESI + 0x1bc]
0055191E  0F AF F8                  IMUL EDI,EAX
00551921  EB 2C                     JMP 0x0055194f
LAB_00551923:
00551923  33 C0                     XOR EAX,EAX
00551925  8A 86 D0 01 00 00         MOV AL,byte ptr [ESI + 0x1d0]
0055192B  66 8B 8C C6 AD 01 00 00   MOV CX,word ptr [ESI + EAX*0x8 + 0x1ad]
00551933  66 85 C9                  TEST CX,CX
00551936  74 56                     JZ 0x0055198e
00551938  33 D2                     XOR EDX,EDX
0055193A  81 E1 FF FF 00 00         AND ECX,0xffff
00551940  66 8B 94 46 BC 01 00 00   MOV DX,word ptr [ESI + EAX*0x2 + 0x1bc]
00551948  8B C2                     MOV EAX,EDX
0055194A  99                        CDQ
0055194B  F7 F9                     IDIV ECX
0055194D  8B F8                     MOV EDI,EAX
LAB_0055194f:
0055194F  85 FF                     TEST EDI,EDI
00551951  7E 3B                     JLE 0x0055198e
00551953  80 3D 4E 87 80 00 03      CMP byte ptr [0x0080874e],0x3
0055195A  75 15                     JNZ 0x00551971
0055195C  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00551962  33 C0                     XOR EAX,EAX
00551964  A0 4D 87 80 00            MOV AL,[0x0080874d]
00551969  50                        PUSH EAX
0055196A  E8 38 1D EB FF            CALL 0x004036a7
0055196F  EB 12                     JMP 0x00551983
LAB_00551971:
00551971  8A 0D 4D 87 80 00         MOV CL,byte ptr [0x0080874d]
00551977  51                        PUSH ECX
00551978  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0055197E  E8 5D FD EA FF            CALL 0x004016e0
LAB_00551983:
00551983  3B C7                     CMP EAX,EDI
00551985  7C 07                     JL 0x0055198e
00551987  B8 01 00 00 00            MOV EAX,0x1
0055198C  EB 02                     JMP 0x00551990
LAB_0055198e:
0055198E  33 C0                     XOR EAX,EAX
LAB_00551990:
00551990  89 46 2C                  MOV dword ptr [ESI + 0x2c],EAX
00551993  85 C0                     TEST EAX,EAX
00551995  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00551998  75 06                     JNZ 0x005519a0
0055199A  85 C0                     TEST EAX,EAX
0055199C  75 06                     JNZ 0x005519a4
0055199E  EB 1C                     JMP 0x005519bc
LAB_005519a0:
005519A0  85 C0                     TEST EAX,EAX
005519A2  75 18                     JNZ 0x005519bc
LAB_005519a4:
005519A4  8B 96 C8 01 00 00         MOV EDX,dword ptr [ESI + 0x1c8]
005519AA  53                        PUSH EBX
005519AB  C7 46 28 20 00 00 00      MOV dword ptr [ESI + 0x28],0x20
005519B2  52                        PUSH EDX
LAB_005519b3:
005519B3  6A 02                     PUSH 0x2
005519B5  8B CE                     MOV ECX,ESI
005519B7  E8 C4 46 19 00            CALL 0x006e6080
LAB_005519bc:
005519BC  8B 86 CC 01 00 00         MOV EAX,dword ptr [ESI + 0x1cc]
005519C2  85 C0                     TEST EAX,EAX
005519C4  0F 84 9B 00 00 00         JZ 0x00551a65
005519CA  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
005519D0  85 C9                     TEST ECX,ECX
005519D2  0F 84 8D 00 00 00         JZ 0x00551a65
005519D8  8D 7E 18                  LEA EDI,[ESI + 0x18]
005519DB  8B CE                     MOV ECX,ESI
005519DD  57                        PUSH EDI
005519DE  50                        PUSH EAX
005519DF  6A 02                     PUSH 0x2
005519E1  C7 46 28 21 00 00 00      MOV dword ptr [ESI + 0x28],0x21
005519E8  E8 93 46 19 00            CALL 0x006e6080
005519ED  8A 86 D0 01 00 00         MOV AL,byte ptr [ESI + 0x1d0]
005519F3  8B 5E 2C                  MOV EBX,dword ptr [ESI + 0x2c]
005519F6  84 C0                     TEST AL,AL
005519F8  74 13                     JZ 0x00551a0d
005519FA  A0 4D 87 80 00            MOV AL,[0x0080874d]
005519FF  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00551A05  50                        PUSH EAX
00551A06  E8 79 08 EB FF            CALL 0x00402284
00551A0B  EB 12                     JMP 0x00551a1f
LAB_00551a0d:
00551A0D  8A 15 4D 87 80 00         MOV DL,byte ptr [0x0080874d]
00551A13  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00551A19  52                        PUSH EDX
00551A1A  E8 35 1F EB FF            CALL 0x00403954
LAB_00551a1f:
00551A1F  33 C9                     XOR ECX,ECX
00551A21  33 D2                     XOR EDX,EDX
00551A23  8A 8E D0 01 00 00         MOV CL,byte ptr [ESI + 0x1d0]
00551A29  66 8B 94 4E BC 01 00 00   MOV DX,word ptr [ESI + ECX*0x2 + 0x1bc]
00551A31  33 C9                     XOR ECX,ECX
00551A33  3B C2                     CMP EAX,EDX
00551A35  0F 9D C1                  SETGE CL
00551A38  8B C1                     MOV EAX,ECX
00551A3A  89 4E 2C                  MOV dword ptr [ESI + 0x2c],ECX
00551A3D  85 C0                     TEST EAX,EAX
00551A3F  75 08                     JNZ 0x00551a49
00551A41  85 DB                     TEST EBX,EBX
00551A43  75 08                     JNZ 0x00551a4d
00551A45  85 C0                     TEST EAX,EAX
00551A47  74 1C                     JZ 0x00551a65
LAB_00551a49:
00551A49  85 DB                     TEST EBX,EBX
00551A4B  75 18                     JNZ 0x00551a65
LAB_00551a4d:
00551A4D  C7 46 28 20 00 00 00      MOV dword ptr [ESI + 0x28],0x20
LAB_00551a54:
00551A54  8B 96 CC 01 00 00         MOV EDX,dword ptr [ESI + 0x1cc]
00551A5A  57                        PUSH EDI
00551A5B  52                        PUSH EDX
00551A5C  6A 02                     PUSH 0x2
00551A5E  8B CE                     MOV ECX,ESI
00551A60  E8 1B 46 19 00            CALL 0x006e6080
LAB_00551a65:
00551A65  5F                        POP EDI
00551A66  5E                        POP ESI
00551A67  5B                        POP EBX
00551A68  8B E5                     MOV ESP,EBP
00551A6A  5D                        POP EBP
00551A6B  C3                        RET
