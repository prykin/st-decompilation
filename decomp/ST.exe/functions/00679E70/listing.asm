FUN_00679e70:
00679E70  55                        PUSH EBP
00679E71  8B EC                     MOV EBP,ESP
00679E73  53                        PUSH EBX
00679E74  56                        PUSH ESI
00679E75  57                        PUSH EDI
00679E76  8B F9                     MOV EDI,ECX
00679E78  33 F6                     XOR ESI,ESI
00679E7A  8B 8F 95 06 00 00         MOV ECX,dword ptr [EDI + 0x695]
00679E80  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
00679E83  85 C0                     TEST EAX,EAX
00679E85  7E 47                     JLE 0x00679ece
00679E87  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
LAB_00679e8a:
00679E8A  85 C9                     TEST ECX,ECX
00679E8C  74 32                     JZ 0x00679ec0
00679E8E  85 F6                     TEST ESI,ESI
00679E90  7C 2E                     JL 0x00679ec0
00679E92  3B F0                     CMP ESI,EAX
00679E94  7D 2A                     JGE 0x00679ec0
00679E96  73 0D                     JNC 0x00679ea5
00679E98  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
00679E9B  8B 51 1C                  MOV EDX,dword ptr [ECX + 0x1c]
00679E9E  0F AF C6                  IMUL EAX,ESI
00679EA1  03 C2                     ADD EAX,EDX
00679EA3  EB 02                     JMP 0x00679ea7
LAB_00679ea5:
00679EA5  33 C0                     XOR EAX,EAX
LAB_00679ea7:
00679EA7  8B 48 04                  MOV ECX,dword ptr [EAX + 0x4]
00679EAA  85 C9                     TEST ECX,ECX
00679EAC  74 12                     JZ 0x00679ec0
00679EAE  8B 00                     MOV EAX,dword ptr [EAX]
00679EB0  85 C0                     TEST EAX,EAX
00679EB2  74 0C                     JZ 0x00679ec0
00679EB4  53                        PUSH EBX
00679EB5  8B C8                     MOV ECX,EAX
00679EB7  E8 67 BC D8 FF            CALL 0x00405b23
00679EBC  85 C0                     TEST EAX,EAX
00679EBE  75 10                     JNZ 0x00679ed0
LAB_00679ec0:
00679EC0  8B 8F 95 06 00 00         MOV ECX,dword ptr [EDI + 0x695]
00679EC6  46                        INC ESI
00679EC7  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
00679ECA  3B F0                     CMP ESI,EAX
00679ECC  7C BC                     JL 0x00679e8a
LAB_00679ece:
00679ECE  33 C0                     XOR EAX,EAX
LAB_00679ed0:
00679ED0  5F                        POP EDI
00679ED1  5E                        POP ESI
00679ED2  5B                        POP EBX
00679ED3  5D                        POP EBP
00679ED4  C2 04 00                  RET 0x4
