FUN_006f0620:
006F0620  55                        PUSH EBP
006F0621  8B EC                     MOV EBP,ESP
006F0623  83 EC 48                  SUB ESP,0x48
006F0626  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
006F062B  56                        PUSH ESI
006F062C  8D 55 BC                  LEA EDX,[EBP + -0x44]
006F062F  8D 4D B8                  LEA ECX,[EBP + -0x48]
006F0632  6A 00                     PUSH 0x0
006F0634  52                        PUSH EDX
006F0635  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
006F063C  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
006F063F  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
006F0645  E8 A6 D1 03 00            CALL 0x0072d7f0
006F064A  8B F0                     MOV ESI,EAX
006F064C  83 C4 08                  ADD ESP,0x8
006F064F  85 F6                     TEST ESI,ESI
006F0651  75 54                     JNZ 0x006f06a7
006F0653  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
006F0656  85 F6                     TEST ESI,ESI
006F0658  75 17                     JNZ 0x006f0671
006F065A  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
006F065F  68 0A 02 00 00            PUSH 0x20a
006F0664  68 88 EF 7E 00            PUSH 0x7eef88
006F0669  50                        PUSH EAX
006F066A  6A CC                     PUSH -0x34
006F066C  E8 CF 57 FB FF            CALL 0x006a5e40
LAB_006f0671:
006F0671  0F BF 46 02               MOVSX EAX,word ptr [ESI + 0x2]
006F0675  99                        CDQ
006F0676  2B C2                     SUB EAX,EDX
006F0678  D1 F8                     SAR EAX,0x1
006F067A  50                        PUSH EAX
006F067B  0F BF 06                  MOVSX EAX,word ptr [ESI]
006F067E  99                        CDQ
006F067F  2B C2                     SUB EAX,EDX
006F0681  D1 F8                     SAR EAX,0x1
006F0683  50                        PUSH EAX
006F0684  E8 77 00 00 00            CALL 0x006f0700
006F0689  50                        PUSH EAX
006F068A  56                        PUSH ESI
006F068B  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
006F068E  E8 6D 01 00 00            CALL 0x006f0800
006F0693  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
006F0696  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006F0699  83 C4 10                  ADD ESP,0x10
006F069C  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
006F06A2  5E                        POP ESI
006F06A3  8B E5                     MOV ESP,EBP
006F06A5  5D                        POP EBP
006F06A6  C3                        RET
LAB_006f06a7:
006F06A7  8B 55 B8                  MOV EDX,dword ptr [EBP + -0x48]
006F06AA  68 54 F0 7E 00            PUSH 0x7ef054
006F06AF  68 CC 4C 7A 00            PUSH 0x7a4ccc
006F06B4  56                        PUSH ESI
006F06B5  6A 00                     PUSH 0x0
006F06B7  68 10 02 00 00            PUSH 0x210
006F06BC  68 88 EF 7E 00            PUSH 0x7eef88
006F06C1  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
006F06C7  E8 04 CE FB FF            CALL 0x006ad4d0
006F06CC  83 C4 18                  ADD ESP,0x18
006F06CF  85 C0                     TEST EAX,EAX
006F06D1  74 01                     JZ 0x006f06d4
006F06D3  CC                        INT3
LAB_006f06d4:
006F06D4  8D 45 FC                  LEA EAX,[EBP + -0x4]
006F06D7  50                        PUSH EAX
006F06D8  E8 03 01 00 00            CALL 0x006f07e0
006F06DD  83 C4 04                  ADD ESP,0x4
006F06E0  68 13 02 00 00            PUSH 0x213
006F06E5  68 88 EF 7E 00            PUSH 0x7eef88
006F06EA  6A 00                     PUSH 0x0
006F06EC  56                        PUSH ESI
006F06ED  E8 4E 57 FB FF            CALL 0x006a5e40
006F06F2  33 C0                     XOR EAX,EAX
006F06F4  5E                        POP ESI
006F06F5  8B E5                     MOV ESP,EBP
006F06F7  5D                        POP EBP
006F06F8  C3                        RET
