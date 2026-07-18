MMsgTy::StatePanel:
005B9010  55                        PUSH EBP
005B9011  8B EC                     MOV EBP,ESP
005B9013  83 EC 4C                  SUB ESP,0x4c
005B9016  56                        PUSH ESI
005B9017  57                        PUSH EDI
005B9018  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
005B901B  C7 41 2D 20 00 00 00      MOV dword ptr [ECX + 0x2d],0x20
005B9022  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
005B9027  8D 55 B8                  LEA EDX,[EBP + -0x48]
005B902A  8D 4D B4                  LEA ECX,[EBP + -0x4c]
005B902D  6A 00                     PUSH 0x0
005B902F  52                        PUSH EDX
005B9030  89 45 B4                  MOV dword ptr [EBP + -0x4c],EAX
005B9033  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005B9039  E8 B2 47 17 00            CALL 0x0072d7f0
005B903E  8B F0                     MOV ESI,EAX
005B9040  83 C4 08                  ADD ESP,0x8
005B9043  85 F6                     TEST ESI,ESI
005B9045  0F 85 81 00 00 00         JNZ 0x005b90cc
005B904B  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
005B904E  88 45 FC                  MOV byte ptr [EBP + -0x4],AL
005B9051  8A 86 9A 00 00 00         MOV AL,byte ptr [ESI + 0x9a]
005B9057  84 C0                     TEST AL,AL
005B9059  76 60                     JBE 0x005b90bb
005B905B  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
LAB_005b905e:
005B905E  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
005B9061  25 FF 00 00 00            AND EAX,0xff
005B9066  8B 4C 86 66               MOV ECX,dword ptr [ESI + EAX*0x4 + 0x66]
005B906A  85 C9                     TEST ECX,ECX
005B906C  74 2F                     JZ 0x005b909d
005B906E  66 8B 0C 47               MOV CX,word ptr [EDI + EAX*0x2]
005B9072  66 85 C9                  TEST CX,CX
005B9075  74 26                     JZ 0x005b909d
005B9077  7E 09                     JLE 0x005b9082
005B9079  C7 46 31 01 00 00 00      MOV dword ptr [ESI + 0x31],0x1
005B9080  EB 07                     JMP 0x005b9089
LAB_005b9082:
005B9082  C7 46 31 00 00 00 00      MOV dword ptr [ESI + 0x31],0x0
LAB_005b9089:
005B9089  8B 54 86 66               MOV EDX,dword ptr [ESI + EAX*0x4 + 0x66]
005B908D  8D 4E 1D                  LEA ECX,[ESI + 0x1d]
005B9090  51                        PUSH ECX
005B9091  52                        PUSH EDX
005B9092  6A 02                     PUSH 0x2
005B9094  8B CE                     MOV ECX,ESI
005B9096  E8 E5 CF 12 00            CALL 0x006e6080
005B909B  EB 0C                     JMP 0x005b90a9
LAB_005b909d:
005B909D  66 8B 0C 47               MOV CX,word ptr [EDI + EAX*0x2]
005B90A1  66 89 8C 46 82 1C 00 00   MOV word ptr [ESI + EAX*0x2 + 0x1c82],CX
LAB_005b90a9:
005B90A9  8A 45 FC                  MOV AL,byte ptr [EBP + -0x4]
005B90AC  8A 8E 9A 00 00 00         MOV CL,byte ptr [ESI + 0x9a]
005B90B2  FE C0                     INC AL
005B90B4  3A C1                     CMP AL,CL
005B90B6  88 45 FC                  MOV byte ptr [EBP + -0x4],AL
005B90B9  72 A3                     JC 0x005b905e
LAB_005b90bb:
005B90BB  8B 55 B4                  MOV EDX,dword ptr [EBP + -0x4c]
005B90BE  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
005B90C4  5F                        POP EDI
005B90C5  5E                        POP ESI
005B90C6  8B E5                     MOV ESP,EBP
005B90C8  5D                        POP EBP
005B90C9  C2 04 00                  RET 0x4
LAB_005b90cc:
005B90CC  8B 45 B4                  MOV EAX,dword ptr [EBP + -0x4c]
005B90CF  68 E0 CC 7C 00            PUSH 0x7ccce0
005B90D4  68 CC 4C 7A 00            PUSH 0x7a4ccc
005B90D9  56                        PUSH ESI
005B90DA  6A 00                     PUSH 0x0
005B90DC  68 C1 01 00 00            PUSH 0x1c1
005B90E1  68 74 CB 7C 00            PUSH 0x7ccb74
005B90E6  A3 F8 8D 85 00            MOV [0x00858df8],EAX
005B90EB  E8 E0 43 0F 00            CALL 0x006ad4d0
005B90F0  83 C4 18                  ADD ESP,0x18
005B90F3  85 C0                     TEST EAX,EAX
005B90F5  74 01                     JZ 0x005b90f8
005B90F7  CC                        INT3
LAB_005b90f8:
005B90F8  68 C1 01 00 00            PUSH 0x1c1
005B90FD  68 74 CB 7C 00            PUSH 0x7ccb74
005B9102  6A 00                     PUSH 0x0
005B9104  56                        PUSH ESI
005B9105  E8 36 CD 0E 00            CALL 0x006a5e40
005B910A  5F                        POP EDI
005B910B  5E                        POP ESI
005B910C  8B E5                     MOV ESP,EBP
005B910E  5D                        POP EBP
005B910F  C2 04 00                  RET 0x4
