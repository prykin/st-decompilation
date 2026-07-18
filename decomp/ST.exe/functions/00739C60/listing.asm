fix_grouping:
00739C60  55                        PUSH EBP
00739C61  8B EC                     MOV EBP,ESP
00739C63  51                        PUSH ECX
LAB_00739c64:
00739C64  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00739C67  0F BE 08                  MOVSX ECX,byte ptr [EAX]
00739C6A  85 C9                     TEST ECX,ECX
00739C6C  74 6B                     JZ 0x00739cd9
00739C6E  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00739C71  0F BE 02                  MOVSX EAX,byte ptr [EDX]
00739C74  83 F8 30                  CMP EAX,0x30
00739C77  7C 24                     JL 0x00739c9d
00739C79  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00739C7C  0F BE 11                  MOVSX EDX,byte ptr [ECX]
00739C7F  83 FA 39                  CMP EDX,0x39
00739C82  7F 19                     JG 0x00739c9d
00739C84  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00739C87  0F BE 08                  MOVSX ECX,byte ptr [EAX]
00739C8A  83 E9 30                  SUB ECX,0x30
00739C8D  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00739C90  88 0A                     MOV byte ptr [EDX],CL
00739C92  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00739C95  83 C0 01                  ADD EAX,0x1
00739C98  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
00739C9B  EB 3A                     JMP 0x00739cd7
LAB_00739c9d:
00739C9D  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00739CA0  0F BE 11                  MOVSX EDX,byte ptr [ECX]
00739CA3  83 FA 3B                  CMP EDX,0x3b
00739CA6  75 26                     JNZ 0x00739cce
00739CA8  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00739CAB  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
LAB_00739cae:
00739CAE  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00739CB1  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00739CB4  8A 42 01                  MOV AL,byte ptr [EDX + 0x1]
00739CB7  88 01                     MOV byte ptr [ECX],AL
00739CB9  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00739CBC  83 C1 01                  ADD ECX,0x1
00739CBF  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
00739CC2  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00739CC5  0F BE 02                  MOVSX EAX,byte ptr [EDX]
00739CC8  85 C0                     TEST EAX,EAX
00739CCA  75 E2                     JNZ 0x00739cae
00739CCC  EB 09                     JMP 0x00739cd7
LAB_00739cce:
00739CCE  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00739CD1  83 C1 01                  ADD ECX,0x1
00739CD4  89 4D 08                  MOV dword ptr [EBP + 0x8],ECX
LAB_00739cd7:
00739CD7  EB 8B                     JMP 0x00739c64
LAB_00739cd9:
00739CD9  8B E5                     MOV ESP,EBP
00739CDB  5D                        POP EBP
00739CDC  C3                        RET
