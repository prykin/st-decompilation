FUN_006099e0:
006099E0  55                        PUSH EBP
006099E1  8B EC                     MOV EBP,ESP
006099E3  81 EC 8C 00 00 00         SUB ESP,0x8c
006099E9  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
006099EE  53                        PUSH EBX
006099EF  56                        PUSH ESI
006099F0  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
006099F3  57                        PUSH EDI
006099F4  8D 55 B8                  LEA EDX,[EBP + -0x48]
006099F7  8D 4D B4                  LEA ECX,[EBP + -0x4c]
006099FA  6A 00                     PUSH 0x0
006099FC  52                        PUSH EDX
006099FD  C7 45 FC FF FF FF FF      MOV dword ptr [EBP + -0x4],0xffffffff
00609A04  89 45 B4                  MOV dword ptr [EBP + -0x4c],EAX
00609A07  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00609A0D  E8 DE 3D 12 00            CALL 0x0072d7f0
00609A12  8B D8                     MOV EBX,EAX
00609A14  83 C4 08                  ADD ESP,0x8
00609A17  85 DB                     TEST EBX,EBX
00609A19  0F 85 94 00 00 00         JNZ 0x00609ab3
00609A1F  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
00609A22  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
00609A25  8B 86 34 02 00 00         MOV EAX,dword ptr [ESI + 0x234]
00609A2B  85 C0                     TEST EAX,EAX
00609A2D  75 12                     JNZ 0x00609a41
00609A2F  6A 0A                     PUSH 0xa
00609A31  6A 40                     PUSH 0x40
00609A33  53                        PUSH EBX
00609A34  6A 00                     PUSH 0x0
00609A36  E8 55 48 0A 00            CALL 0x006ae290
00609A3B  89 86 34 02 00 00         MOV dword ptr [ESI + 0x234],EAX
LAB_00609a41:
00609A41  8B 86 34 02 00 00         MOV EAX,dword ptr [ESI + 0x234]
00609A47  85 C0                     TEST EAX,EAX
00609A49  74 53                     JZ 0x00609a9e
00609A4B  85 DB                     TEST EBX,EBX
00609A4D  74 4F                     JZ 0x00609a9e
00609A4F  B9 10 00 00 00            MOV ECX,0x10
00609A54  33 C0                     XOR EAX,EAX
00609A56  8D BD 74 FF FF FF         LEA EDI,[EBP + 0xffffff74]
00609A5C  F3 AB                     STOSD.REP ES:EDI
00609A5E  85 DB                     TEST EBX,EBX
00609A60  C7 45 B0 FF FF FF FF      MOV dword ptr [EBP + -0x50],0xffffffff
00609A67  7E 1B                     JLE 0x00609a84
LAB_00609a69:
00609A69  8B 8E 34 02 00 00         MOV ECX,dword ptr [ESI + 0x234]
00609A6F  8D 85 74 FF FF FF         LEA EAX,[EBP + 0xffffff74]
00609A75  50                        PUSH EAX
00609A76  51                        PUSH ECX
00609A77  E8 44 47 0A 00            CALL 0x006ae1c0
00609A7C  4B                        DEC EBX
00609A7D  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00609A80  75 E7                     JNZ 0x00609a69
00609A82  EB 03                     JMP 0x00609a87
LAB_00609a84:
00609A84  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
LAB_00609a87:
00609A87  85 C0                     TEST EAX,EAX
00609A89  7C 16                     JL 0x00609aa1
00609A8B  8B 55 B4                  MOV EDX,dword ptr [EBP + -0x4c]
00609A8E  40                        INC EAX
00609A8F  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00609A95  5F                        POP EDI
00609A96  5E                        POP ESI
00609A97  5B                        POP EBX
00609A98  8B E5                     MOV ESP,EBP
00609A9A  5D                        POP EBP
00609A9B  C2 04 00                  RET 0x4
LAB_00609a9e:
00609A9E  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
LAB_00609aa1:
00609AA1  8B 55 B4                  MOV EDX,dword ptr [EBP + -0x4c]
00609AA4  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00609AAA  5F                        POP EDI
00609AAB  5E                        POP ESI
00609AAC  5B                        POP EBX
00609AAD  8B E5                     MOV ESP,EBP
00609AAF  5D                        POP EBP
00609AB0  C2 04 00                  RET 0x4
LAB_00609ab3:
00609AB3  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
00609AB6  8B 45 B4                  MOV EAX,dword ptr [EBP + -0x4c]
00609AB9  85 FF                     TEST EDI,EDI
00609ABB  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00609AC0  7E 1C                     JLE 0x00609ade
00609AC2  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
LAB_00609ac5:
00609AC5  8B 8E 34 02 00 00         MOV ECX,dword ptr [ESI + 0x234]
00609ACB  51                        PUSH ECX
00609ACC  E8 3F 46 0A 00            CALL 0x006ae110
00609AD1  4F                        DEC EDI
00609AD2  C7 86 34 02 00 00 00 00 00 00  MOV dword ptr [ESI + 0x234],0x0
00609ADC  75 E7                     JNZ 0x00609ac5
LAB_00609ade:
00609ADE  68 C0 B2 7C 00            PUSH 0x7cb2c0
00609AE3  68 CC 4C 7A 00            PUSH 0x7a4ccc
00609AE8  53                        PUSH EBX
00609AE9  6A 00                     PUSH 0x0
00609AEB  68 E5 01 00 00            PUSH 0x1e5
00609AF0  68 50 F8 7C 00            PUSH 0x7cf850
00609AF5  E8 D6 39 0A 00            CALL 0x006ad4d0
00609AFA  83 C4 18                  ADD ESP,0x18
00609AFD  85 C0                     TEST EAX,EAX
00609AFF  74 01                     JZ 0x00609b02
00609B01  CC                        INT3
LAB_00609b02:
00609B02  68 E7 01 00 00            PUSH 0x1e7
00609B07  68 50 F8 7C 00            PUSH 0x7cf850
00609B0C  6A 00                     PUSH 0x0
00609B0E  53                        PUSH EBX
00609B0F  E8 2C C3 09 00            CALL 0x006a5e40
00609B14  5F                        POP EDI
00609B15  5E                        POP ESI
00609B16  B8 FF FF 00 00            MOV EAX,0xffff
00609B1B  5B                        POP EBX
00609B1C  8B E5                     MOV ESP,EBP
00609B1E  5D                        POP EBP
00609B1F  C2 04 00                  RET 0x4
