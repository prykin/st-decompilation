FUN_0058f030:
0058F030  55                        PUSH EBP
0058F031  8B EC                     MOV EBP,ESP
0058F033  83 EC 0C                  SUB ESP,0xc
0058F036  53                        PUSH EBX
0058F037  56                        PUSH ESI
0058F038  8B F1                     MOV ESI,ECX
0058F03A  57                        PUSH EDI
0058F03B  33 DB                     XOR EBX,EBX
0058F03D  0F BF 86 33 02 00 00      MOVSX EAX,word ptr [ESI + 0x233]
0058F044  0F BF 8E 31 02 00 00      MOVSX ECX,word ptr [ESI + 0x231]
0058F04B  0F BF 56 49               MOVSX EDX,word ptr [ESI + 0x49]
0058F04F  50                        PUSH EAX
0058F050  51                        PUSH ECX
0058F051  0F BF 46 47               MOVSX EAX,word ptr [ESI + 0x47]
0058F055  52                        PUSH EDX
0058F056  50                        PUSH EAX
0058F057  E8 B4 C8 14 00            CALL 0x006db910
0058F05C  6A 08                     PUSH 0x8
0058F05E  50                        PUSH EAX
0058F05F  E8 2C C9 14 00            CALL 0x006db990
0058F064  8B 4E 1C                  MOV ECX,dword ptr [ESI + 0x1c]
0058F067  8B F8                     MOV EDI,EAX
0058F069  69 C9 6D 4E C6 41         IMUL ECX,ECX,0x41c64e6d
0058F06F  8D 81 39 30 00 00         LEA EAX,[ECX + 0x3039]
0058F075  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
0058F078  C1 E8 10                  SHR EAX,0x10
0058F07B  50                        PUSH EAX
0058F07C  8D 45 FC                  LEA EAX,[EBP + -0x4]
0058F07F  50                        PUSH EAX
0058F080  8D 45 F8                  LEA EAX,[EBP + -0x8]
0058F083  0F BF 4E 49               MOVSX ECX,word ptr [ESI + 0x49]
0058F087  0F BF 56 47               MOVSX EDX,word ptr [ESI + 0x47]
0058F08B  50                        PUSH EAX
0058F08C  8D 45 F4                  LEA EAX,[EBP + -0xc]
0058F08F  50                        PUSH EAX
0058F090  0F BF 46 4B               MOVSX EAX,word ptr [ESI + 0x4b]
0058F094  50                        PUSH EAX
0058F095  51                        PUSH ECX
0058F096  0F BF 86 33 02 00 00      MOVSX EAX,word ptr [ESI + 0x233]
0058F09D  52                        PUSH EDX
0058F09E  50                        PUSH EAX
0058F09F  0F BF 86 31 02 00 00      MOVSX EAX,word ptr [ESI + 0x231]
0058F0A6  50                        PUSH EAX
0058F0A7  51                        PUSH ECX
0058F0A8  52                        PUSH EDX
0058F0A9  E8 E2 DE 11 00            CALL 0x006acf90
0058F0AE  0F BF 8E 35 02 00 00      MOVSX ECX,word ptr [ESI + 0x235]
0058F0B5  0F BF 56 4B               MOVSX EDX,word ptr [ESI + 0x4b]
0058F0B9  2B CA                     SUB ECX,EDX
0058F0BB  50                        PUSH EAX
0058F0BC  51                        PUSH ECX
0058F0BD  57                        PUSH EDI
0058F0BE  E8 88 33 E7 FF            CALL 0x0040244b
0058F0C3  83 C4 28                  ADD ESP,0x28
0058F0C6  8B CE                     MOV ECX,ESI
0058F0C8  85 C0                     TEST EAX,EAX
0058F0CA  6A 08                     PUSH 0x8
0058F0CC  74 54                     JZ 0x0058f122
0058F0CE  E8 BD 6B E7 FF            CALL 0x00405c90
0058F0D3  6A 06                     PUSH 0x6
0058F0D5  8B CE                     MOV ECX,ESI
0058F0D7  E8 29 60 E7 FF            CALL 0x00405105
0058F0DC  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0058F0DF  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0058F0E2  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
0058F0E5  50                        PUSH EAX
0058F0E6  51                        PUSH ECX
0058F0E7  52                        PUSH EDX
0058F0E8  8B CE                     MOV ECX,ESI
0058F0EA  E8 29 52 E7 FF            CALL 0x00404318
0058F0EF  85 C0                     TEST EAX,EAX
0058F0F1  74 60                     JZ 0x0058f153
0058F0F3  66 8B 86 35 02 00 00      MOV AX,word ptr [ESI + 0x235]
0058F0FA  66 8B 8E 33 02 00 00      MOV CX,word ptr [ESI + 0x233]
0058F101  66 8B 96 31 02 00 00      MOV DX,word ptr [ESI + 0x231]
0058F108  50                        PUSH EAX
0058F109  51                        PUSH ECX
0058F10A  52                        PUSH EDX
0058F10B  8B CE                     MOV ECX,ESI
0058F10D  E8 06 52 E7 FF            CALL 0x00404318
0058F112  85 C0                     TEST EAX,EAX
0058F114  75 49                     JNZ 0x0058f15f
0058F116  5F                        POP EDI
0058F117  5E                        POP ESI
0058F118  B8 01 00 00 00            MOV EAX,0x1
0058F11D  5B                        POP EBX
0058F11E  8B E5                     MOV ESP,EBP
0058F120  5D                        POP EBP
0058F121  C3                        RET
LAB_0058f122:
0058F122  E8 69 6B E7 FF            CALL 0x00405c90
0058F127  6A 06                     PUSH 0x6
0058F129  8B CE                     MOV ECX,ESI
0058F12B  E8 D5 5F E7 FF            CALL 0x00405105
0058F130  66 8B 86 35 02 00 00      MOV AX,word ptr [ESI + 0x235]
0058F137  66 8B 8E 33 02 00 00      MOV CX,word ptr [ESI + 0x233]
0058F13E  66 8B 96 31 02 00 00      MOV DX,word ptr [ESI + 0x231]
0058F145  50                        PUSH EAX
0058F146  51                        PUSH ECX
0058F147  52                        PUSH EDX
0058F148  8B CE                     MOV ECX,ESI
0058F14A  E8 C9 51 E7 FF            CALL 0x00404318
0058F14F  85 C0                     TEST EAX,EAX
0058F151  75 0C                     JNZ 0x0058f15f
LAB_0058f153:
0058F153  5F                        POP EDI
0058F154  5E                        POP ESI
0058F155  B8 01 00 00 00            MOV EAX,0x1
0058F15A  5B                        POP EBX
0058F15B  8B E5                     MOV ESP,EBP
0058F15D  5D                        POP EBP
0058F15E  C3                        RET
LAB_0058f15f:
0058F15F  C7 86 53 02 00 00 1F 00 00 00  MOV dword ptr [ESI + 0x253],0x1f
0058F169  5F                        POP EDI
0058F16A  8B C3                     MOV EAX,EBX
0058F16C  5E                        POP ESI
0058F16D  5B                        POP EBX
0058F16E  8B E5                     MOV ESP,EBP
0058F170  5D                        POP EBP
0058F171  C3                        RET
