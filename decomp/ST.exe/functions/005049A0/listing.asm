FUN_005049a0:
005049A0  55                        PUSH EBP
005049A1  8B EC                     MOV EBP,ESP
005049A3  83 EC 50                  SUB ESP,0x50
005049A6  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
005049AB  53                        PUSH EBX
005049AC  56                        PUSH ESI
005049AD  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
005049B0  57                        PUSH EDI
005049B1  8D 55 B4                  LEA EDX,[EBP + -0x4c]
005049B4  8D 4D B0                  LEA ECX,[EBP + -0x50]
005049B7  6A 00                     PUSH 0x0
005049B9  52                        PUSH EDX
005049BA  89 45 B0                  MOV dword ptr [EBP + -0x50],EAX
005049BD  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005049C3  E8 28 8E 22 00            CALL 0x0072d7f0
005049C8  8B F0                     MOV ESI,EAX
005049CA  83 C4 08                  ADD ESP,0x8
005049CD  85 F6                     TEST ESI,ESI
005049CF  0F 85 04 01 00 00         JNZ 0x00504ad9
005049D5  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
005049D8  68 14 27 00 00            PUSH 0x2714
005049DD  8A 86 33 0C 00 00         MOV AL,byte ptr [ESI + 0xc33]
005049E3  8B 8E 94 01 00 00         MOV ECX,dword ptr [ESI + 0x194]
005049E9  50                        PUSH EAX
005049EA  6A 50                     PUSH 0x50
005049EC  6A 5C                     PUSH 0x5c
005049EE  51                        PUSH ECX
005049EF  8B CE                     MOV ECX,ESI
005049F1  E8 25 05 F0 FF            CALL 0x00404f1b
005049F6  8B 96 B2 02 00 00         MOV EDX,dword ptr [ESI + 0x2b2]
005049FC  6A 01                     PUSH 0x1
005049FE  52                        PUSH EDX
005049FF  E8 9C 69 20 00            CALL 0x0070b3a0
00504A04  50                        PUSH EAX
00504A05  8B 86 94 01 00 00         MOV EAX,dword ptr [ESI + 0x194]
00504A0B  6A 01                     PUSH 0x1
00504A0D  6A 7B                     PUSH 0x7b
00504A0F  6A 33                     PUSH 0x33
00504A11  50                        PUSH EAX
00504A12  E8 12 E8 EF FF            CALL 0x00403229
00504A17  33 C0                     XOR EAX,EAX
00504A19  83 C4 1C                  ADD ESP,0x1c
00504A1C  8A 86 33 0C 00 00         MOV AL,byte ptr [ESI + 0xc33]
00504A22  B3 00                     MOV BL,0x0
00504A24  8B C8                     MOV ECX,EAX
00504A26  88 5D FC                  MOV byte ptr [EBP + -0x4],BL
00504A29  C1 E1 05                  SHL ECX,0x5
00504A2C  03 C8                     ADD ECX,EAX
00504A2E  B8 1F 85 EB 51            MOV EAX,0x51eb851f
00504A33  F7 E9                     IMUL ECX
00504A35  C1 FA 05                  SAR EDX,0x5
00504A38  8B CA                     MOV ECX,EDX
00504A3A  C1 E9 1F                  SHR ECX,0x1f
00504A3D  03 D1                     ADD EDX,ECX
00504A3F  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
00504A42  74 41                     JZ 0x00504a85
00504A44  33 FF                     XOR EDI,EDI
LAB_00504a46:
00504A46  8B 96 B6 02 00 00         MOV EDX,dword ptr [ESI + 0x2b6]
00504A4C  6A 01                     PUSH 0x1
00504A4E  52                        PUSH EDX
00504A4F  E8 4C 69 20 00            CALL 0x0070b3a0
00504A54  8B 8E 94 01 00 00         MOV ECX,dword ptr [ESI + 0x194]
00504A5A  50                        PUSH EAX
00504A5B  6A 01                     PUSH 0x1
00504A5D  8D 04 BD 35 00 00 00      LEA EAX,[EDI*0x4 + 0x35]
00504A64  6A 7D                     PUSH 0x7d
00504A66  50                        PUSH EAX
00504A67  51                        PUSH ECX
00504A68  E8 BC E7 EF FF            CALL 0x00403229
00504A6D  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
00504A70  83 C4 1C                  ADD ESP,0x1c
00504A73  FE C3                     INC BL
00504A75  88 5D FC                  MOV byte ptr [EBP + -0x4],BL
00504A78  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
00504A7B  81 E7 FF 00 00 00         AND EDI,0xff
00504A81  3B F8                     CMP EDI,EAX
00504A83  72 C1                     JC 0x00504a46
LAB_00504a85:
00504A85  80 FB 21                  CMP BL,0x21
00504A88  73 3F                     JNC 0x00504ac9
00504A8A  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00504A8D  BB 21 00 00 00            MOV EBX,0x21
00504A92  25 FF 00 00 00            AND EAX,0xff
00504A97  2B D8                     SUB EBX,EAX
00504A99  8D 3C 85 35 00 00 00      LEA EDI,[EAX*0x4 + 0x35]
LAB_00504aa0:
00504AA0  8B 96 B6 02 00 00         MOV EDX,dword ptr [ESI + 0x2b6]
00504AA6  6A 00                     PUSH 0x0
00504AA8  52                        PUSH EDX
00504AA9  E8 F2 68 20 00            CALL 0x0070b3a0
00504AAE  50                        PUSH EAX
00504AAF  8B 86 94 01 00 00         MOV EAX,dword ptr [ESI + 0x194]
00504AB5  6A 01                     PUSH 0x1
00504AB7  6A 7D                     PUSH 0x7d
00504AB9  57                        PUSH EDI
00504ABA  50                        PUSH EAX
00504ABB  E8 69 E7 EF FF            CALL 0x00403229
00504AC0  83 C4 1C                  ADD ESP,0x1c
00504AC3  83 C7 04                  ADD EDI,0x4
00504AC6  4B                        DEC EBX
00504AC7  75 D7                     JNZ 0x00504aa0
LAB_00504ac9:
00504AC9  8B 4D B0                  MOV ECX,dword ptr [EBP + -0x50]
00504ACC  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00504AD2  5F                        POP EDI
00504AD3  5E                        POP ESI
00504AD4  5B                        POP EBX
00504AD5  8B E5                     MOV ESP,EBP
00504AD7  5D                        POP EBP
00504AD8  C3                        RET
LAB_00504ad9:
00504AD9  8B 55 B0                  MOV EDX,dword ptr [EBP + -0x50]
00504ADC  68 78 27 7C 00            PUSH 0x7c2778
00504AE1  68 CC 4C 7A 00            PUSH 0x7a4ccc
00504AE6  56                        PUSH ESI
00504AE7  6A 00                     PUSH 0x0
00504AE9  6A 68                     PUSH 0x68
00504AEB  68 00 27 7C 00            PUSH 0x7c2700
00504AF0  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00504AF6  E8 D5 89 1A 00            CALL 0x006ad4d0
00504AFB  83 C4 18                  ADD ESP,0x18
00504AFE  85 C0                     TEST EAX,EAX
00504B00  74 01                     JZ 0x00504b03
00504B02  CC                        INT3
LAB_00504b03:
00504B03  6A 68                     PUSH 0x68
00504B05  68 00 27 7C 00            PUSH 0x7c2700
00504B0A  6A 00                     PUSH 0x0
00504B0C  56                        PUSH ESI
00504B0D  E8 2E 13 1A 00            CALL 0x006a5e40
00504B12  5F                        POP EDI
00504B13  5E                        POP ESI
00504B14  5B                        POP EBX
00504B15  8B E5                     MOV ESP,EBP
00504B17  5D                        POP EBP
00504B18  C3                        RET
