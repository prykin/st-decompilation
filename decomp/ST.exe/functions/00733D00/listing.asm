siglookup:
00733D00  55                        PUSH EBP
00733D01  8B EC                     MOV EBP,ESP
00733D03  51                        PUSH ECX
00733D04  C7 45 FC 70 1F 7F 00      MOV dword ptr [EBP + -0x4],0x7f1f70
LAB_00733d0b:
00733D0B  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00733D0E  8B 48 04                  MOV ECX,dword ptr [EAX + 0x4]
00733D11  3B 4D 08                  CMP ECX,dword ptr [EBP + 0x8]
00733D14  74 1D                     JZ 0x00733d33
00733D16  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00733D19  83 C2 0C                  ADD EDX,0xc
00733D1C  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
00733D1F  A1 F0 1F 7F 00            MOV EAX,[0x007f1ff0]
00733D24  6B C0 0C                  IMUL EAX,EAX,0xc
00733D27  05 70 1F 7F 00            ADD EAX,0x7f1f70
00733D2C  39 45 FC                  CMP dword ptr [EBP + -0x4],EAX
00733D2F  73 02                     JNC 0x00733d33
00733D31  EB D8                     JMP 0x00733d0b
LAB_00733d33:
00733D33  8B 0D F0 1F 7F 00         MOV ECX,dword ptr [0x007f1ff0]
00733D39  6B C9 0C                  IMUL ECX,ECX,0xc
00733D3C  81 C1 70 1F 7F 00         ADD ECX,0x7f1f70
00733D42  39 4D FC                  CMP dword ptr [EBP + -0x4],ECX
00733D45  73 10                     JNC 0x00733d57
00733D47  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00733D4A  8B 42 04                  MOV EAX,dword ptr [EDX + 0x4]
00733D4D  3B 45 08                  CMP EAX,dword ptr [EBP + 0x8]
00733D50  75 05                     JNZ 0x00733d57
00733D52  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00733D55  EB 02                     JMP 0x00733d59
LAB_00733d57:
00733D57  33 C0                     XOR EAX,EAX
LAB_00733d59:
00733D59  8B E5                     MOV ESP,EBP
00733D5B  5D                        POP EBP
00733D5C  C3                        RET
