FUN_0053c490:
0053C490  55                        PUSH EBP
0053C491  8B EC                     MOV EBP,ESP
0053C493  56                        PUSH ESI
0053C494  8B F1                     MOV ESI,ECX
0053C496  57                        PUSH EDI
0053C497  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
0053C49A  3B 7E 5C                  CMP EDI,dword ptr [ESI + 0x5c]
0053C49D  74 35                     JZ 0x0053c4d4
0053C49F  57                        PUSH EDI
0053C4A0  E8 95 66 EC FF            CALL 0x00402b3a
0053C4A5  8B 86 74 01 00 00         MOV EAX,dword ptr [ESI + 0x174]
0053C4AB  C7 46 28 24 00 00 00      MOV dword ptr [ESI + 0x28],0x24
0053C4B2  85 FF                     TEST EDI,EDI
0053C4B4  74 02                     JZ 0x0053c4b8
0053C4B6  F7 D8                     NEG EAX
LAB_0053c4b8:
0053C4B8  66 89 46 2E               MOV word ptr [ESI + 0x2e],AX
0053C4BC  8B 86 82 02 00 00         MOV EAX,dword ptr [ESI + 0x282]
0053C4C2  85 C0                     TEST EAX,EAX
0053C4C4  74 0E                     JZ 0x0053c4d4
0053C4C6  8D 4E 18                  LEA ECX,[ESI + 0x18]
0053C4C9  51                        PUSH ECX
0053C4CA  50                        PUSH EAX
0053C4CB  6A 02                     PUSH 0x2
0053C4CD  8B CE                     MOV ECX,ESI
0053C4CF  E8 AC 9B 1A 00            CALL 0x006e6080
LAB_0053c4d4:
0053C4D4  5F                        POP EDI
0053C4D5  5E                        POP ESI
0053C4D6  5D                        POP EBP
0053C4D7  C2 04 00                  RET 0x4
