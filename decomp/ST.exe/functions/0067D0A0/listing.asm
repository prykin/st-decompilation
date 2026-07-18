FUN_0067d0a0:
0067D0A0  55                        PUSH EBP
0067D0A1  8B EC                     MOV EBP,ESP
0067D0A3  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0067D0A6  53                        PUSH EBX
0067D0A7  56                        PUSH ESI
0067D0A8  57                        PUSH EDI
0067D0A9  8D 98 C2 00 00 00         LEA EBX,[EAX + 0xc2]
0067D0AF  8B 80 C2 00 00 00         MOV EAX,dword ptr [EAX + 0xc2]
0067D0B5  85 C0                     TEST EAX,EAX
0067D0B7  74 48                     JZ 0x0067d101
0067D0B9  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
0067D0BC  33 FF                     XOR EDI,EDI
0067D0BE  85 C9                     TEST ECX,ECX
0067D0C0  7E 3F                     JLE 0x0067d101
0067D0C2  3B F9                     CMP EDI,ECX
LAB_0067d0c4:
0067D0C4  73 0D                     JNC 0x0067d0d3
0067D0C6  8B 70 08                  MOV ESI,dword ptr [EAX + 0x8]
0067D0C9  8B 48 1C                  MOV ECX,dword ptr [EAX + 0x1c]
0067D0CC  0F AF F7                  IMUL ESI,EDI
0067D0CF  03 F1                     ADD ESI,ECX
0067D0D1  EB 02                     JMP 0x0067d0d5
LAB_0067d0d3:
0067D0D3  33 F6                     XOR ESI,ESI
LAB_0067d0d5:
0067D0D5  8B 06                     MOV EAX,dword ptr [ESI]
0067D0D7  85 C0                     TEST EAX,EAX
0067D0D9  74 1C                     JZ 0x0067d0f7
0067D0DB  8B 4E 04                  MOV ECX,dword ptr [ESI + 0x4]
0067D0DE  85 C9                     TEST ECX,ECX
0067D0E0  75 15                     JNZ 0x0067d0f7
0067D0E2  8D 4D 08                  LEA ECX,[EBP + 0x8]
0067D0E5  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
0067D0E8  51                        PUSH ECX
0067D0E9  E8 12 5D D8 FF            CALL 0x00402e00
0067D0EE  83 C4 04                  ADD ESP,0x4
0067D0F1  C7 06 00 00 00 00         MOV dword ptr [ESI],0x0
LAB_0067d0f7:
0067D0F7  8B 03                     MOV EAX,dword ptr [EBX]
0067D0F9  47                        INC EDI
0067D0FA  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
0067D0FD  3B F9                     CMP EDI,ECX
0067D0FF  7C C3                     JL 0x0067d0c4
LAB_0067d101:
0067D101  8B F3                     MOV ESI,EBX
0067D103  BF 05 00 00 00            MOV EDI,0x5
LAB_0067d108:
0067D108  8B 06                     MOV EAX,dword ptr [ESI]
0067D10A  85 C0                     TEST EAX,EAX
0067D10C  74 0C                     JZ 0x0067d11a
0067D10E  50                        PUSH EAX
0067D10F  E8 FC 0F 03 00            CALL 0x006ae110
0067D114  C7 06 00 00 00 00         MOV dword ptr [ESI],0x0
LAB_0067d11a:
0067D11A  83 C6 0C                  ADD ESI,0xc
0067D11D  4F                        DEC EDI
0067D11E  75 E8                     JNZ 0x0067d108
0067D120  5F                        POP EDI
0067D121  5E                        POP ESI
0067D122  5B                        POP EBX
0067D123  5D                        POP EBP
0067D124  C3                        RET
