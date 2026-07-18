FUN_0043f130:
0043F130  55                        PUSH EBP
0043F131  8B EC                     MOV EBP,ESP
0043F133  83 EC 14                  SUB ESP,0x14
0043F136  0F BE 45 08               MOVSX EAX,byte ptr [EBP + 0x8]
0043F13A  53                        PUSH EBX
0043F13B  57                        PUSH EDI
0043F13C  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
0043F13F  33 FF                     XOR EDI,EDI
0043F141  8D 14 C8                  LEA EDX,[EAX + ECX*0x8]
0043F144  8D 0C 50                  LEA ECX,[EAX + EDX*0x2]
0043F147  C1 E1 04                  SHL ECX,0x4
0043F14A  03 C8                     ADD ECX,EAX
0043F14C  33 C0                     XOR EAX,EAX
0043F14E  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
0043F151  8B 1C 4D 29 4E 7F 00      MOV EBX,dword ptr [ECX*0x2 + 0x7f4e29]
0043F158  8B 4B 0C                  MOV ECX,dword ptr [EBX + 0xc]
0043F15B  85 C9                     TEST ECX,ECX
0043F15D  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0043F160  7E 57                     JLE 0x0043f1b9
0043F162  56                        PUSH ESI
LAB_0043f163:
0043F163  8B 53 1C                  MOV EDX,dword ptr [EBX + 0x1c]
0043F166  8B 0C BA                  MOV ECX,dword ptr [EDX + EDI*0x4]
0043F169  85 C9                     TEST ECX,ECX
0043F16B  74 3F                     JZ 0x0043f1ac
0043F16D  8B 01                     MOV EAX,dword ptr [ECX]
0043F16F  8D 55 EC                  LEA EDX,[EBP + -0x14]
0043F172  52                        PUSH EDX
0043F173  FF 50 74                  CALL dword ptr [EAX + 0x74]
0043F176  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0043F179  8D 75 EC                  LEA ESI,[EBP + -0x14]
LAB_0043f17c:
0043F17C  8A 10                     MOV DL,byte ptr [EAX]
0043F17E  8A CA                     MOV CL,DL
0043F180  3A 16                     CMP DL,byte ptr [ESI]
0043F182  75 1C                     JNZ 0x0043f1a0
0043F184  84 C9                     TEST CL,CL
0043F186  74 14                     JZ 0x0043f19c
0043F188  8A 50 01                  MOV DL,byte ptr [EAX + 0x1]
0043F18B  8A CA                     MOV CL,DL
0043F18D  3A 56 01                  CMP DL,byte ptr [ESI + 0x1]
0043F190  75 0E                     JNZ 0x0043f1a0
0043F192  83 C0 02                  ADD EAX,0x2
0043F195  83 C6 02                  ADD ESI,0x2
0043F198  84 C9                     TEST CL,CL
0043F19A  75 E0                     JNZ 0x0043f17c
LAB_0043f19c:
0043F19C  33 C0                     XOR EAX,EAX
0043F19E  EB 05                     JMP 0x0043f1a5
LAB_0043f1a0:
0043F1A0  1B C0                     SBB EAX,EAX
0043F1A2  83 D8 FF                  SBB EAX,-0x1
LAB_0043f1a5:
0043F1A5  85 C0                     TEST EAX,EAX
0043F1A7  75 03                     JNZ 0x0043f1ac
0043F1A9  FF 45 08                  INC dword ptr [EBP + 0x8]
LAB_0043f1ac:
0043F1AC  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0043F1AF  47                        INC EDI
0043F1B0  3B F8                     CMP EDI,EAX
0043F1B2  7C AF                     JL 0x0043f163
0043F1B4  66 8B 45 08               MOV AX,word ptr [EBP + 0x8]
0043F1B8  5E                        POP ESI
LAB_0043f1b9:
0043F1B9  5F                        POP EDI
0043F1BA  5B                        POP EBX
0043F1BB  8B E5                     MOV ESP,EBP
0043F1BD  5D                        POP EBP
0043F1BE  C2 08 00                  RET 0x8
