FUN_00696d00:
00696D00  55                        PUSH EBP
00696D01  8B EC                     MOV EBP,ESP
00696D03  51                        PUSH ECX
00696D04  53                        PUSH EBX
00696D05  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
00696D08  33 D2                     XOR EDX,EDX
00696D0A  56                        PUSH ESI
00696D0B  85 DB                     TEST EBX,EBX
00696D0D  57                        PUSH EDI
00696D0E  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
00696D11  74 6F                     JZ 0x00696d82
00696D13  8B 43 19                  MOV EAX,dword ptr [EBX + 0x19]
00696D16  85 C0                     TEST EAX,EAX
00696D18  74 68                     JZ 0x00696d82
00696D1A  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
00696D1D  33 FF                     XOR EDI,EDI
00696D1F  85 C9                     TEST ECX,ECX
00696D21  7E 5F                     JLE 0x00696d82
00696D23  3B F9                     CMP EDI,ECX
LAB_00696d25:
00696D25  73 0D                     JNC 0x00696d34
00696D27  8B 70 08                  MOV ESI,dword ptr [EAX + 0x8]
00696D2A  8B 48 1C                  MOV ECX,dword ptr [EAX + 0x1c]
00696D2D  0F AF F7                  IMUL ESI,EDI
00696D30  03 F1                     ADD ESI,ECX
00696D32  EB 02                     JMP 0x00696d36
LAB_00696d34:
00696D34  33 F6                     XOR ESI,ESI
LAB_00696d36:
00696D36  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00696D39  8B 0B                     MOV ECX,dword ptr [EBX]
00696D3B  8B 16                     MOV EDX,dword ptr [ESI]
00696D3D  50                        PUSH EAX
00696D3E  51                        PUSH ECX
00696D3F  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00696D42  52                        PUSH EDX
00696D43  E8 6B D6 D6 FF            CALL 0x004043b3
00696D48  85 C0                     TEST EAX,EAX
00696D4A  74 16                     JZ 0x00696d62
00696D4C  8B 43 19                  MOV EAX,dword ptr [EBX + 0x19]
00696D4F  47                        INC EDI
00696D50  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
00696D53  3B F9                     CMP EDI,ECX
00696D55  7C CE                     JL 0x00696d25
LAB_00696d57:
00696D57  5F                        POP EDI
00696D58  5E                        POP ESI
00696D59  33 C0                     XOR EAX,EAX
00696D5B  5B                        POP EBX
00696D5C  8B E5                     MOV ESP,EBP
00696D5E  5D                        POP EBP
00696D5F  C2 08 00                  RET 0x8
LAB_00696d62:
00696D62  8B 36                     MOV ESI,dword ptr [ESI]
00696D64  85 F6                     TEST ESI,ESI
00696D66  7C EF                     JL 0x00696d57
00696D68  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00696D6B  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00696D6E  6A 00                     PUSH 0x0
00696D70  6A 00                     PUSH 0x0
00696D72  56                        PUSH ESI
00696D73  50                        PUSH EAX
00696D74  E8 2A B9 D6 FF            CALL 0x004026a3
00696D79  5F                        POP EDI
00696D7A  5E                        POP ESI
00696D7B  5B                        POP EBX
00696D7C  8B E5                     MOV ESP,EBP
00696D7E  5D                        POP EBP
00696D7F  C2 08 00                  RET 0x8
LAB_00696d82:
00696D82  5F                        POP EDI
00696D83  5E                        POP ESI
00696D84  8B C2                     MOV EAX,EDX
00696D86  5B                        POP EBX
00696D87  8B E5                     MOV ESP,EBP
00696D89  5D                        POP EBP
00696D8A  C2 08 00                  RET 0x8
