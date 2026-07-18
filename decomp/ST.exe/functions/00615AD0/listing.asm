FUN_00615ad0:
00615AD0  55                        PUSH EBP
00615AD1  8B EC                     MOV EBP,ESP
00615AD3  83 EC 0C                  SUB ESP,0xc
00615AD6  56                        PUSH ESI
00615AD7  8B F1                     MOV ESI,ECX
00615AD9  8D 45 FC                  LEA EAX,[EBP + -0x4]
00615ADC  57                        PUSH EDI
00615ADD  50                        PUSH EAX
00615ADE  8D 4D F8                  LEA ECX,[EBP + -0x8]
00615AE1  0F BF 86 F5 01 00 00      MOVSX EAX,word ptr [ESI + 0x1f5]
00615AE8  8D 55 F4                  LEA EDX,[EBP + -0xc]
00615AEB  51                        PUSH ECX
00615AEC  52                        PUSH EDX
00615AED  50                        PUSH EAX
00615AEE  8B CE                     MOV ECX,ESI
00615AF0  33 FF                     XOR EDI,EDI
00615AF2  E8 B8 EC DE FF            CALL 0x004047af
00615AF7  85 C0                     TEST EAX,EAX
00615AF9  74 6F                     JZ 0x00615b6a
00615AFB  8B 86 DD 02 00 00         MOV EAX,dword ptr [ESI + 0x2dd]
00615B01  85 C0                     TEST EAX,EAX
00615B03  75 0D                     JNZ 0x00615b12
00615B05  6A 1C                     PUSH 0x1c
00615B07  E8 64 51 09 00            CALL 0x006aac70
00615B0C  89 86 DD 02 00 00         MOV dword ptr [ESI + 0x2dd],EAX
LAB_00615b12:
00615B12  0F BF 8E F3 01 00 00      MOVSX ECX,word ptr [ESI + 0x1f3]
00615B19  0F BF 96 F1 01 00 00      MOVSX EDX,word ptr [ESI + 0x1f1]
00615B20  0F BF 86 EF 01 00 00      MOVSX EAX,word ptr [ESI + 0x1ef]
00615B27  51                        PUSH ECX
00615B28  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00615B2B  52                        PUSH EDX
00615B2C  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
00615B2F  50                        PUSH EAX
00615B30  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
00615B33  51                        PUSH ECX
00615B34  52                        PUSH EDX
00615B35  0F BF 8E ED 01 00 00      MOVSX ECX,word ptr [ESI + 0x1ed]
00615B3C  0F BF 96 EB 01 00 00      MOVSX EDX,word ptr [ESI + 0x1eb]
00615B43  50                        PUSH EAX
00615B44  51                        PUSH ECX
00615B45  0F BF 86 E9 01 00 00      MOVSX EAX,word ptr [ESI + 0x1e9]
00615B4C  52                        PUSH EDX
00615B4D  50                        PUSH EAX
00615B4E  6A 00                     PUSH 0x0
00615B50  8B CE                     MOV ECX,ESI
00615B52  C7 86 D5 02 00 00 01 00 00 00  MOV dword ptr [ESI + 0x2d5],0x1
00615B5C  E8 EE CE DE FF            CALL 0x00402a4f
00615B61  85 C0                     TEST EAX,EAX
00615B63  B8 01 00 00 00            MOV EAX,0x1
00615B68  75 02                     JNZ 0x00615b6c
LAB_00615b6a:
00615B6A  8B C7                     MOV EAX,EDI
LAB_00615b6c:
00615B6C  5F                        POP EDI
00615B6D  5E                        POP ESI
00615B6E  8B E5                     MOV ESP,EBP
00615B70  5D                        POP EBP
00615B71  C3                        RET
