DibPut:
00540760  55                        PUSH EBP
00540761  8B EC                     MOV EBP,ESP
00540763  83 EC 44                  SUB ESP,0x44
00540766  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00540769  56                        PUSH ESI
0054076A  85 C0                     TEST EAX,EAX
0054076C  0F 84 CE 00 00 00         JZ 0x00540840
00540772  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
00540775  85 C0                     TEST EAX,EAX
00540777  0F 84 C3 00 00 00         JZ 0x00540840
0054077D  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
00540782  8D 55 C0                  LEA EDX,[EBP + -0x40]
00540785  8D 4D BC                  LEA ECX,[EBP + -0x44]
00540788  6A 00                     PUSH 0x0
0054078A  52                        PUSH EDX
0054078B  89 45 BC                  MOV dword ptr [EBP + -0x44],EAX
0054078E  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00540794  E8 57 D0 1E 00            CALL 0x0072d7f0
00540799  8B F0                     MOV ESI,EAX
0054079B  83 C4 08                  ADD ESP,0x8
0054079E  85 F6                     TEST ESI,ESI
005407A0  75 65                     JNZ 0x00540807
005407A2  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
005407A5  25 FF 00 00 00            AND EAX,0xff
005407AA  48                        DEC EAX
005407AB  74 28                     JZ 0x005407d5
005407AD  83 E8 05                  SUB EAX,0x5
005407B0  75 48                     JNZ 0x005407fa
005407B2  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
005407B5  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
005407B8  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
005407BB  50                        PUSH EAX
005407BC  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
005407BF  51                        PUSH ECX
005407C0  52                        PUSH EDX
005407C1  56                        PUSH ESI
005407C2  50                        PUSH EAX
005407C3  E8 08 7D 17 00            CALL 0x006b84d0
005407C8  8B 45 BC                  MOV EAX,dword ptr [EBP + -0x44]
005407CB  A3 F8 8D 85 00            MOV [0x00858df8],EAX
005407D0  5E                        POP ESI
005407D1  8B E5                     MOV ESP,EBP
005407D3  5D                        POP EBP
005407D4  C3                        RET
LAB_005407d5:
005407D5  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
005407D8  8B 48 08                  MOV ECX,dword ptr [EAX + 0x8]
005407DB  8B 50 04                  MOV EDX,dword ptr [EAX + 0x4]
005407DE  51                        PUSH ECX
005407DF  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
005407E2  52                        PUSH EDX
005407E3  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
005407E6  6A 00                     PUSH 0x0
005407E8  6A 00                     PUSH 0x0
005407EA  6A 00                     PUSH 0x0
005407EC  50                        PUSH EAX
005407ED  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
005407F0  50                        PUSH EAX
005407F1  51                        PUSH ECX
005407F2  6A 00                     PUSH 0x0
005407F4  52                        PUSH EDX
005407F5  E8 F6 4D 17 00            CALL 0x006b55f0
LAB_005407fa:
005407FA  8B 45 BC                  MOV EAX,dword ptr [EBP + -0x44]
005407FD  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00540802  5E                        POP ESI
00540803  8B E5                     MOV ESP,EBP
00540805  5D                        POP EBP
00540806  C3                        RET
LAB_00540807:
00540807  8B 4D BC                  MOV ECX,dword ptr [EBP + -0x44]
0054080A  68 7C 7B 7C 00            PUSH 0x7c7b7c
0054080F  68 CC 4C 7A 00            PUSH 0x7a4ccc
00540814  56                        PUSH ESI
00540815  6A 00                     PUSH 0x0
00540817  6A 4F                     PUSH 0x4f
00540819  68 2C 7B 7C 00            PUSH 0x7c7b2c
0054081E  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00540824  E8 A7 CC 16 00            CALL 0x006ad4d0
00540829  83 C4 18                  ADD ESP,0x18
0054082C  85 C0                     TEST EAX,EAX
0054082E  74 01                     JZ 0x00540831
00540830  CC                        INT3
LAB_00540831:
00540831  6A 4F                     PUSH 0x4f
00540833  68 2C 7B 7C 00            PUSH 0x7c7b2c
00540838  6A 00                     PUSH 0x0
0054083A  56                        PUSH ESI
0054083B  E8 00 56 16 00            CALL 0x006a5e40
LAB_00540840:
00540840  5E                        POP ESI
00540841  8B E5                     MOV ESP,EBP
00540843  5D                        POP EBP
00540844  C3                        RET
