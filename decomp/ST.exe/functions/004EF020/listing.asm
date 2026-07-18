BldBoatPanelTy::Update:
004EF020  55                        PUSH EBP
004EF021  8B EC                     MOV EBP,ESP
004EF023  83 EC 48                  SUB ESP,0x48
004EF026  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
004EF02B  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
004EF02E  56                        PUSH ESI
004EF02F  8D 55 BC                  LEA EDX,[EBP + -0x44]
004EF032  8D 4D B8                  LEA ECX,[EBP + -0x48]
004EF035  6A 00                     PUSH 0x0
004EF037  52                        PUSH EDX
004EF038  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
004EF03B  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
004EF041  E8 AA E7 23 00            CALL 0x0072d7f0
004EF046  8B F0                     MOV ESI,EAX
004EF048  83 C4 08                  ADD ESP,0x8
004EF04B  85 F6                     TEST ESI,ESI
004EF04D  75 68                     JNZ 0x004ef0b7
004EF04F  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
004EF052  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004EF058  8D 86 7A 02 00 00         LEA EAX,[ESI + 0x27a]
004EF05E  50                        PUSH EAX
004EF05F  6A 07                     PUSH 0x7
004EF061  E8 56 45 F1 FF            CALL 0x004035bc
004EF066  33 C9                     XOR ECX,ECX
004EF068  8A 8E 79 02 00 00         MOV CL,byte ptr [ESI + 0x279]
004EF06E  8B 84 8E 7A 02 00 00      MOV EAX,dword ptr [ESI + ECX*0x4 + 0x27a]
004EF075  85 C0                     TEST EAX,EAX
004EF077  74 05                     JZ 0x004ef07e
004EF079  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
004EF07C  EB 02                     JMP 0x004ef080
LAB_004ef07e:
004EF07E  33 C9                     XOR ECX,ECX
LAB_004ef080:
004EF080  33 D2                     XOR EDX,EDX
004EF082  8A 96 78 02 00 00         MOV DL,byte ptr [ESI + 0x278]
004EF088  8B 84 96 7A 02 00 00      MOV EAX,dword ptr [ESI + EDX*0x4 + 0x27a]
004EF08F  85 C0                     TEST EAX,EAX
004EF091  74 05                     JZ 0x004ef098
004EF093  8B 40 0C                  MOV EAX,dword ptr [EAX + 0xc]
004EF096  EB 02                     JMP 0x004ef09a
LAB_004ef098:
004EF098  33 C0                     XOR EAX,EAX
LAB_004ef09a:
004EF09A  51                        PUSH ECX
004EF09B  50                        PUSH EAX
004EF09C  8B CE                     MOV ECX,ESI
004EF09E  E8 70 39 F1 FF            CALL 0x00402a13
004EF0A3  8B CE                     MOV ECX,ESI
004EF0A5  E8 C0 4B F1 FF            CALL 0x00403c6a
004EF0AA  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
004EF0AD  A3 F8 8D 85 00            MOV [0x00858df8],EAX
004EF0B2  5E                        POP ESI
004EF0B3  8B E5                     MOV ESP,EBP
004EF0B5  5D                        POP EBP
004EF0B6  C3                        RET
LAB_004ef0b7:
004EF0B7  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
004EF0BA  68 50 18 7C 00            PUSH 0x7c1850
004EF0BF  68 CC 4C 7A 00            PUSH 0x7a4ccc
004EF0C4  56                        PUSH ESI
004EF0C5  6A 00                     PUSH 0x0
004EF0C7  6A 60                     PUSH 0x60
004EF0C9  68 B4 17 7C 00            PUSH 0x7c17b4
004EF0CE  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
004EF0D4  E8 F7 E3 1B 00            CALL 0x006ad4d0
004EF0D9  83 C4 18                  ADD ESP,0x18
004EF0DC  85 C0                     TEST EAX,EAX
004EF0DE  74 01                     JZ 0x004ef0e1
004EF0E0  CC                        INT3
LAB_004ef0e1:
004EF0E1  6A 60                     PUSH 0x60
004EF0E3  68 B4 17 7C 00            PUSH 0x7c17b4
004EF0E8  6A 00                     PUSH 0x0
004EF0EA  56                        PUSH ESI
004EF0EB  E8 50 6D 1B 00            CALL 0x006a5e40
004EF0F0  5E                        POP ESI
004EF0F1  8B E5                     MOV ESP,EBP
004EF0F3  5D                        POP EBP
004EF0F4  C3                        RET
