FUN_0069f7f0:
0069F7F0  55                        PUSH EBP
0069F7F1  8B EC                     MOV EBP,ESP
0069F7F3  83 EC 08                  SUB ESP,0x8
0069F7F6  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0069F7F9  53                        PUSH EBX
0069F7FA  56                        PUSH ESI
0069F7FB  33 F6                     XOR ESI,ESI
0069F7FD  83 C8 FF                  OR EAX,0xffffffff
0069F800  57                        PUSH EDI
0069F801  85 D2                     TEST EDX,EDX
0069F803  0F 8E 86 00 00 00         JLE 0x0069f88f
0069F809  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
0069F80C  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
0069F80F  8D 1C 0F                  LEA EBX,[EDI + ECX*0x1]
0069F812  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
0069F815  89 5D F8                  MOV dword ptr [EBP + -0x8],EBX
0069F818  8B CB                     MOV ECX,EBX
LAB_0069f81a:
0069F81A  03 31                     ADD ESI,dword ptr [ECX]
0069F81C  03 CF                     ADD ECX,EDI
0069F81E  4A                        DEC EDX
0069F81F  75 F9                     JNZ 0x0069f81a
0069F821  85 F6                     TEST ESI,ESI
0069F823  7E 6A                     JLE 0x0069f88f
0069F825  8B 03                     MOV EAX,dword ptr [EBX]
0069F827  33 C9                     XOR ECX,ECX
0069F829  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
0069F82C  89 45 14                  MOV dword ptr [EBP + 0x14],EAX
0069F82F  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
0069F832  33 FF                     XOR EDI,EDI
0069F834  85 C0                     TEST EAX,EAX
0069F836  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0069F839  7E 52                     JLE 0x0069f88d
0069F83B  89 45 18                  MOV dword ptr [EBP + 0x18],EAX
0069F83E  EB 03                     JMP 0x0069f843
LAB_0069f840:
0069F840  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
LAB_0069f843:
0069F843  E8 78 EE 08 00            CALL 0x0072e6c0
0069F848  99                        CDQ
0069F849  46                        INC ESI
0069F84A  F7 FE                     IDIV ESI
0069F84C  33 F6                     XOR ESI,ESI
0069F84E  33 C9                     XOR ECX,ECX
0069F850  8B C3                     MOV EAX,EBX
LAB_0069f852:
0069F852  03 30                     ADD ESI,dword ptr [EAX]
0069F854  3B F2                     CMP ESI,EDX
0069F856  7D 0F                     JGE 0x0069f867
0069F858  8B 5D 10                  MOV EBX,dword ptr [EBP + 0x10]
0069F85B  41                        INC ECX
0069F85C  03 C3                     ADD EAX,EBX
0069F85E  8B 5D 0C                  MOV EBX,dword ptr [EBP + 0xc]
0069F861  3B CB                     CMP ECX,EBX
0069F863  7C ED                     JL 0x0069f852
0069F865  EB 05                     JMP 0x0069f86c
LAB_0069f867:
0069F867  8B 38                     MOV EDI,dword ptr [EAX]
0069F869  89 4D 14                  MOV dword ptr [EBP + 0x14],ECX
LAB_0069f86c:
0069F86C  3B 7D 08                  CMP EDI,dword ptr [EBP + 0x8]
0069F86F  7E 09                     JLE 0x0069f87a
0069F871  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
0069F874  89 7D 08                  MOV dword ptr [EBP + 0x8],EDI
0069F877  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
LAB_0069f87a:
0069F87A  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
0069F87D  48                        DEC EAX
0069F87E  89 45 18                  MOV dword ptr [EBP + 0x18],EAX
0069F881  75 BD                     JNZ 0x0069f840
0069F883  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0069F886  5F                        POP EDI
0069F887  5E                        POP ESI
0069F888  5B                        POP EBX
0069F889  8B E5                     MOV ESP,EBP
0069F88B  5D                        POP EBP
0069F88C  C3                        RET
LAB_0069f88d:
0069F88D  8B C1                     MOV EAX,ECX
LAB_0069f88f:
0069F88F  5F                        POP EDI
0069F890  5E                        POP ESI
0069F891  5B                        POP EBX
0069F892  8B E5                     MOV ESP,EBP
0069F894  5D                        POP EBP
0069F895  C3                        RET
