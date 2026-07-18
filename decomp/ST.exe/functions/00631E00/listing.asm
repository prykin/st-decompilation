FUN_00631e00:
00631E00  55                        PUSH EBP
00631E01  8B EC                     MOV EBP,ESP
00631E03  83 EC 08                  SUB ESP,0x8
00631E06  53                        PUSH EBX
00631E07  56                        PUSH ESI
00631E08  8B 71 69                  MOV ESI,dword ptr [ECX + 0x69]
00631E0B  33 C0                     XOR EAX,EAX
00631E0D  85 F6                     TEST ESI,ESI
00631E0F  57                        PUSH EDI
00631E10  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
00631E13  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00631E16  0F 84 1A 01 00 00         JZ 0x00631f36
00631E1C  8B 7E 0C                  MOV EDI,dword ptr [ESI + 0xc]
00631E1F  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
00631E22  3B DF                     CMP EBX,EDI
00631E24  73 7B                     JNC 0x00631ea1
00631E26  8B 56 08                  MOV EDX,dword ptr [ESI + 0x8]
00631E29  0F AF D3                  IMUL EDX,EBX
00631E2C  03 56 1C                  ADD EDX,dword ptr [ESI + 0x1c]
00631E2F  85 D2                     TEST EDX,EDX
00631E31  74 6E                     JZ 0x00631ea1
00631E33  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00631E36  8B 5A 08                  MOV EBX,dword ptr [EDX + 0x8]
00631E39  3B D9                     CMP EBX,ECX
00631E3B  75 64                     JNZ 0x00631ea1
00631E3D  8B 1A                     MOV EBX,dword ptr [EDX]
00631E3F  81 FB BE 00 00 00         CMP EBX,0xbe
00631E45  74 08                     JZ 0x00631e4f
00631E47  81 FB A8 00 00 00         CMP EBX,0xa8
00631E4D  75 52                     JNZ 0x00631ea1
LAB_00631e4f:
00631E4F  8B 42 1C                  MOV EAX,dword ptr [EDX + 0x1c]
00631E52  8B 88 66 02 00 00         MOV ECX,dword ptr [EAX + 0x266]
00631E58  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
00631E5B  89 08                     MOV dword ptr [EAX],ECX
00631E5D  8B 4A 1C                  MOV ECX,dword ptr [EDX + 0x1c]
00631E60  8B 81 6A 02 00 00         MOV EAX,dword ptr [ECX + 0x26a]
00631E66  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
00631E69  89 01                     MOV dword ptr [ECX],EAX
00631E6B  8B 42 1C                  MOV EAX,dword ptr [EDX + 0x1c]
00631E6E  8B 88 6E 02 00 00         MOV ECX,dword ptr [EAX + 0x26e]
00631E74  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
00631E77  89 08                     MOV dword ptr [EAX],ECX
00631E79  8B 4A 1C                  MOV ECX,dword ptr [EDX + 0x1c]
00631E7C  8B 81 92 02 00 00         MOV EAX,dword ptr [ECX + 0x292]
00631E82  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
00631E85  89 01                     MOV dword ptr [ECX],EAX
00631E87  8B 45 20                  MOV EAX,dword ptr [EBP + 0x20]
00631E8A  85 C0                     TEST EAX,EAX
00631E8C  74 05                     JZ 0x00631e93
00631E8E  8B 52 1C                  MOV EDX,dword ptr [EDX + 0x1c]
00631E91  89 10                     MOV dword ptr [EAX],EDX
LAB_00631e93:
00631E93  5F                        POP EDI
00631E94  5E                        POP ESI
00631E95  B8 01 00 00 00            MOV EAX,0x1
00631E9A  5B                        POP EBX
00631E9B  8B E5                     MOV ESP,EBP
00631E9D  5D                        POP EBP
00631E9E  C2 1C 00                  RET 0x1c
LAB_00631ea1:
00631EA1  33 DB                     XOR EBX,EBX
00631EA3  85 FF                     TEST EDI,EDI
00631EA5  0F 8E 8B 00 00 00         JLE 0x00631f36
00631EAB  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
00631EAE  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
00631EB1  3B DF                     CMP EBX,EDI
LAB_00631eb3:
00631EB3  73 70                     JNC 0x00631f25
00631EB5  8B 56 08                  MOV EDX,dword ptr [ESI + 0x8]
00631EB8  8B 7E 1C                  MOV EDI,dword ptr [ESI + 0x1c]
00631EBB  0F AF D3                  IMUL EDX,EBX
00631EBE  03 D7                     ADD EDX,EDI
00631EC0  85 D2                     TEST EDX,EDX
00631EC2  74 61                     JZ 0x00631f25
00631EC4  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
00631EC7  8B 7A 08                  MOV EDI,dword ptr [EDX + 0x8]
00631ECA  3B FE                     CMP EDI,ESI
00631ECC  75 57                     JNZ 0x00631f25
00631ECE  8B 32                     MOV ESI,dword ptr [EDX]
00631ED0  81 FE BE 00 00 00         CMP ESI,0xbe
00631ED6  74 08                     JZ 0x00631ee0
00631ED8  81 FE A8 00 00 00         CMP ESI,0xa8
00631EDE  75 45                     JNZ 0x00631f25
LAB_00631ee0:
00631EE0  8B 72 1C                  MOV ESI,dword ptr [EDX + 0x1c]
00631EE3  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
00631EE6  85 C9                     TEST ECX,ECX
00631EE8  8B B6 66 02 00 00         MOV ESI,dword ptr [ESI + 0x266]
00631EEE  89 37                     MOV dword ptr [EDI],ESI
00631EF0  8B 72 1C                  MOV ESI,dword ptr [EDX + 0x1c]
00631EF3  8B 7D 14                  MOV EDI,dword ptr [EBP + 0x14]
00631EF6  8B B6 6A 02 00 00         MOV ESI,dword ptr [ESI + 0x26a]
00631EFC  89 37                     MOV dword ptr [EDI],ESI
00631EFE  8B 72 1C                  MOV ESI,dword ptr [EDX + 0x1c]
00631F01  8B 7D 18                  MOV EDI,dword ptr [EBP + 0x18]
00631F04  8B B6 6E 02 00 00         MOV ESI,dword ptr [ESI + 0x26e]
00631F0A  89 37                     MOV dword ptr [EDI],ESI
00631F0C  8B 72 1C                  MOV ESI,dword ptr [EDX + 0x1c]
00631F0F  8B B6 92 02 00 00         MOV ESI,dword ptr [ESI + 0x292]
00631F15  89 30                     MOV dword ptr [EAX],ESI
00631F17  74 05                     JZ 0x00631f1e
00631F19  8B 52 1C                  MOV EDX,dword ptr [EDX + 0x1c]
00631F1C  89 11                     MOV dword ptr [ECX],EDX
LAB_00631f1e:
00631F1E  C7 45 FC 01 00 00 00      MOV dword ptr [EBP + -0x4],0x1
LAB_00631f25:
00631F25  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
00631F28  43                        INC EBX
00631F29  8B 72 69                  MOV ESI,dword ptr [EDX + 0x69]
00631F2C  8B 7E 0C                  MOV EDI,dword ptr [ESI + 0xc]
00631F2F  3B DF                     CMP EBX,EDI
00631F31  7C 80                     JL 0x00631eb3
00631F33  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
LAB_00631f36:
00631F36  5F                        POP EDI
00631F37  5E                        POP ESI
00631F38  5B                        POP EBX
00631F39  8B E5                     MOV ESP,EBP
00631F3B  5D                        POP EBP
00631F3C  C2 1C 00                  RET 0x1c
