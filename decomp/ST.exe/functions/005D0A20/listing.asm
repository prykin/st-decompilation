FUN_005d0a20:
005D0A20  55                        PUSH EBP
005D0A21  8B EC                     MOV EBP,ESP
005D0A23  83 EC 48                  SUB ESP,0x48
005D0A26  8B 81 84 1F 00 00         MOV EAX,dword ptr [ECX + 0x1f84]
005D0A2C  53                        PUSH EBX
005D0A2D  56                        PUSH ESI
005D0A2E  57                        PUSH EDI
005D0A2F  85 C0                     TEST EAX,EAX
005D0A31  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
005D0A34  0F 84 0F 01 00 00         JZ 0x005d0b49
005D0A3A  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
005D0A3F  8D 55 BC                  LEA EDX,[EBP + -0x44]
005D0A42  8D 4D B8                  LEA ECX,[EBP + -0x48]
005D0A45  6A 00                     PUSH 0x0
005D0A47  52                        PUSH EDX
005D0A48  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
005D0A4B  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005D0A51  E8 9A CD 15 00            CALL 0x0072d7f0
005D0A56  8B F0                     MOV ESI,EAX
005D0A58  83 C4 08                  ADD ESP,0x8
005D0A5B  85 F6                     TEST ESI,ESI
005D0A5D  0F 85 A7 00 00 00         JNZ 0x005d0b0a
005D0A63  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
005D0A66  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
005D0A69  8B 83 84 1F 00 00         MOV EAX,dword ptr [EBX + 0x1f84]
005D0A6F  8B 50 0C                  MOV EDX,dword ptr [EAX + 0xc]
005D0A72  3B CA                     CMP ECX,EDX
005D0A74  73 0D                     JNC 0x005d0a83
005D0A76  8B 70 08                  MOV ESI,dword ptr [EAX + 0x8]
005D0A79  8B 78 1C                  MOV EDI,dword ptr [EAX + 0x1c]
005D0A7C  0F AF F1                  IMUL ESI,ECX
005D0A7F  03 F7                     ADD ESI,EDI
005D0A81  EB 02                     JMP 0x005d0a85
LAB_005d0a83:
005D0A83  33 F6                     XOR ESI,ESI
LAB_005d0a85:
005D0A85  80 3E 00                  CMP byte ptr [ESI],0x0
005D0A88  74 6F                     JZ 0x005d0af9
005D0A8A  8A 46 01                  MOV AL,byte ptr [ESI + 0x1]
005D0A8D  84 C0                     TEST AL,AL
005D0A8F  74 15                     JZ 0x005d0aa6
005D0A91  83 FA 18                  CMP EDX,0x18
005D0A94  73 56                     JNC 0x005d0aec
005D0A96  41                        INC ECX
005D0A97  C6 46 01 00               MOV byte ptr [ESI + 0x1],0x0
005D0A9B  51                        PUSH ECX
005D0A9C  56                        PUSH ESI
005D0A9D  8B CB                     MOV ECX,EBX
005D0A9F  E8 2C 0D E3 FF            CALL 0x004017d0
005D0AA4  EB 46                     JMP 0x005d0aec
LAB_005d0aa6:
005D0AA6  8D 79 01                  LEA EDI,[ECX + 0x1]
LAB_005d0aa9:
005D0AA9  8B 8B 84 1F 00 00         MOV ECX,dword ptr [EBX + 0x1f84]
005D0AAF  3B 79 0C                  CMP EDI,dword ptr [ECX + 0xc]
005D0AB2  73 0D                     JNC 0x005d0ac1
005D0AB4  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
005D0AB7  8B 51 1C                  MOV EDX,dword ptr [ECX + 0x1c]
005D0ABA  0F AF C7                  IMUL EAX,EDI
005D0ABD  03 C2                     ADD EAX,EDX
005D0ABF  EB 02                     JMP 0x005d0ac3
LAB_005d0ac1:
005D0AC1  33 C0                     XOR EAX,EAX
LAB_005d0ac3:
005D0AC3  85 C0                     TEST EAX,EAX
005D0AC5  74 21                     JZ 0x005d0ae8
005D0AC7  80 38 00                  CMP byte ptr [EAX],0x0
005D0ACA  75 1C                     JNZ 0x005d0ae8
005D0ACC  8B 40 50                  MOV EAX,dword ptr [EAX + 0x50]
005D0ACF  85 C0                     TEST EAX,EAX
005D0AD1  74 06                     JZ 0x005d0ad9
005D0AD3  50                        PUSH EAX
005D0AD4  E8 37 D6 0D 00            CALL 0x006ae110
LAB_005d0ad9:
005D0AD9  8B 83 84 1F 00 00         MOV EAX,dword ptr [EBX + 0x1f84]
005D0ADF  57                        PUSH EDI
005D0AE0  50                        PUSH EAX
005D0AE1  E8 8A 01 0E 00            CALL 0x006b0c70
005D0AE6  EB C1                     JMP 0x005d0aa9
LAB_005d0ae8:
005D0AE8  C6 46 01 01               MOV byte ptr [ESI + 0x1],0x1
LAB_005d0aec:
005D0AEC  8B 13                     MOV EDX,dword ptr [EBX]
005D0AEE  8B CB                     MOV ECX,EBX
005D0AF0  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
005D0AF3  FF 83 21 21 00 00         INC dword ptr [EBX + 0x2121]
LAB_005d0af9:
005D0AF9  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
005D0AFC  A3 F8 8D 85 00            MOV [0x00858df8],EAX
005D0B01  5F                        POP EDI
005D0B02  5E                        POP ESI
005D0B03  5B                        POP EBX
005D0B04  8B E5                     MOV ESP,EBP
005D0B06  5D                        POP EBP
005D0B07  C2 04 00                  RET 0x4
LAB_005d0b0a:
005D0B0A  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
005D0B0D  68 58 D4 7C 00            PUSH 0x7cd458
005D0B12  68 CC 4C 7A 00            PUSH 0x7a4ccc
005D0B17  56                        PUSH ESI
005D0B18  6A 00                     PUSH 0x0
005D0B1A  68 BA 05 00 00            PUSH 0x5ba
005D0B1F  68 58 D2 7C 00            PUSH 0x7cd258
005D0B24  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005D0B2A  E8 A1 C9 0D 00            CALL 0x006ad4d0
005D0B2F  83 C4 18                  ADD ESP,0x18
005D0B32  85 C0                     TEST EAX,EAX
005D0B34  74 01                     JZ 0x005d0b37
005D0B36  CC                        INT3
LAB_005d0b37:
005D0B37  68 BA 05 00 00            PUSH 0x5ba
005D0B3C  68 58 D2 7C 00            PUSH 0x7cd258
005D0B41  6A 00                     PUSH 0x0
005D0B43  56                        PUSH ESI
005D0B44  E8 F7 52 0D 00            CALL 0x006a5e40
LAB_005d0b49:
005D0B49  5F                        POP EDI
005D0B4A  5E                        POP ESI
005D0B4B  5B                        POP EBX
005D0B4C  8B E5                     MOV ESP,EBP
005D0B4E  5D                        POP EBP
005D0B4F  C2 04 00                  RET 0x4
