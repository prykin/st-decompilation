FUN_0062e240:
0062E240  55                        PUSH EBP
0062E241  8B EC                     MOV EBP,ESP
0062E243  51                        PUSH ECX
0062E244  53                        PUSH EBX
0062E245  56                        PUSH ESI
0062E246  8B F1                     MOV ESI,ECX
0062E248  57                        PUSH EDI
0062E249  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0062E24C  66 85 C9                  TEST CX,CX
0062E24F  7C 77                     JL 0x0062e2c8
0062E251  66 8B 3D 40 B2 7F 00      MOV DI,word ptr [0x007fb240]
0062E258  66 3B CF                  CMP CX,DI
0062E25B  7D 6B                     JGE 0x0062e2c8
0062E25D  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
0062E260  66 85 D2                  TEST DX,DX
0062E263  7C 63                     JL 0x0062e2c8
0062E265  66 3B 15 42 B2 7F 00      CMP DX,word ptr [0x007fb242]
0062E26C  7D 5A                     JGE 0x0062e2c8
0062E26E  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
0062E271  66 85 C0                  TEST AX,AX
0062E274  7C 52                     JL 0x0062e2c8
0062E276  66 3B 05 44 B2 7F 00      CMP AX,word ptr [0x007fb244]
0062E27D  7D 49                     JGE 0x0062e2c8
0062E27F  0F BF 1D 46 B2 7F 00      MOVSX EBX,word ptr [0x007fb246]
0062E286  0F BF C0                  MOVSX EAX,AX
0062E289  0F AF D8                  IMUL EBX,EAX
0062E28C  0F BF C7                  MOVSX EAX,DI
0062E28F  0F BF D2                  MOVSX EDX,DX
0062E292  0F AF C2                  IMUL EAX,EDX
0062E295  03 D8                     ADD EBX,EAX
0062E297  0F BF C1                  MOVSX EAX,CX
0062E29A  8B 0D 48 B2 7F 00         MOV ECX,dword ptr [0x007fb248]
0062E2A0  03 D8                     ADD EBX,EAX
0062E2A2  8B 0C D9                  MOV ECX,dword ptr [ECX + EBX*0x8]
0062E2A5  85 C9                     TEST ECX,ECX
0062E2A7  74 1F                     JZ 0x0062e2c8
0062E2A9  8B 7D 18                  MOV EDI,dword ptr [EBP + 0x18]
0062E2AC  8B 41 18                  MOV EAX,dword ptr [ECX + 0x18]
0062E2AF  3B C7                     CMP EAX,EDI
0062E2B1  75 18                     JNZ 0x0062e2cb
0062E2B3  81 79 20 E8 03 00 00      CMP dword ptr [ECX + 0x20],0x3e8
0062E2BA  75 0F                     JNZ 0x0062e2cb
0062E2BC  8B 11                     MOV EDX,dword ptr [ECX]
0062E2BE  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
0062E2C1  83 F8 6E                  CMP EAX,0x6e
0062E2C4  74 1E                     JZ 0x0062e2e4
0062E2C6  EB 03                     JMP 0x0062e2cb
LAB_0062e2c8:
0062E2C8  8B 7D 18                  MOV EDI,dword ptr [EBP + 0x18]
LAB_0062e2cb:
0062E2CB  85 FF                     TEST EDI,EDI
0062E2CD  74 71                     JZ 0x0062e340
0062E2CF  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
0062E2D5  8D 45 FC                  LEA EAX,[EBP + -0x4]
0062E2D8  50                        PUSH EAX
0062E2D9  57                        PUSH EDI
0062E2DA  E8 F1 7F 0B 00            CALL 0x006e62d0
0062E2DF  83 F8 FC                  CMP EAX,-0x4
0062E2E2  74 5C                     JZ 0x0062e340
LAB_0062e2e4:
0062E2E4  8B 5D 1C                  MOV EBX,dword ptr [EBP + 0x1c]
0062E2E7  85 DB                     TEST EBX,EBX
0062E2E9  75 07                     JNZ 0x0062e2f2
0062E2EB  BB 01 00 00 00            MOV EBX,0x1
0062E2F0  85 DB                     TEST EBX,EBX
LAB_0062e2f2:
0062E2F2  7E 4C                     JLE 0x0062e340
0062E2F4  33 FF                     XOR EDI,EDI
LAB_0062e2f6:
0062E2F6  8B 8E B4 00 00 00         MOV ECX,dword ptr [ESI + 0xb4]
0062E2FC  33 D2                     XOR EDX,EDX
0062E2FE  69 C9 6D 4E C6 41         IMUL ECX,ECX,0x41c64e6d
0062E304  6A 03                     PUSH 0x3
0062E306  8D 81 39 30 00 00         LEA EAX,[ECX + 0x3039]
0062E30C  B9 1F 00 00 00            MOV ECX,0x1f
0062E311  89 86 B4 00 00 00         MOV dword ptr [ESI + 0xb4],EAX
0062E317  C1 E8 10                  SHR EAX,0x10
0062E31A  F7 F1                     DIV ECX
0062E31C  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
0062E31F  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
0062E322  03 D7                     ADD EDX,EDI
0062E324  52                        PUSH EDX
0062E325  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
0062E328  52                        PUSH EDX
0062E329  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0062E32C  50                        PUSH EAX
0062E32D  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0062E330  51                        PUSH ECX
0062E331  52                        PUSH EDX
0062E332  50                        PUSH EAX
0062E333  8B CE                     MOV ECX,ESI
0062E335  E8 6B 5A DD FF            CALL 0x00403da5
0062E33A  83 C7 1E                  ADD EDI,0x1e
0062E33D  4B                        DEC EBX
0062E33E  75 B6                     JNZ 0x0062e2f6
LAB_0062e340:
0062E340  5F                        POP EDI
0062E341  5E                        POP ESI
0062E342  5B                        POP EBX
0062E343  8B E5                     MOV ESP,EBP
0062E345  5D                        POP EBP
0062E346  C2 18 00                  RET 0x18
