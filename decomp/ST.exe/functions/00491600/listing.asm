FUN_00491600:
00491600  55                        PUSH EBP
00491601  8B EC                     MOV EBP,ESP
00491603  83 EC 20                  SUB ESP,0x20
00491606  56                        PUSH ESI
00491607  8B F1                     MOV ESI,ECX
00491609  8B 8E D1 01 00 00         MOV ECX,dword ptr [ESI + 0x1d1]
0049160F  8B 06                     MOV EAX,dword ptr [ESI]
00491611  83 C9 0D                  OR ECX,0xd
00491614  51                        PUSH ECX
00491615  8B CE                     MOV ECX,ESI
00491617  FF 90 00 01 00 00         CALL dword ptr [EAX + 0x100]
0049161D  8B 56 18                  MOV EDX,dword ptr [ESI + 0x18]
00491620  8A 86 8E 00 00 00         MOV AL,byte ptr [ESI + 0x8e]
00491626  66 8B 4E 5F               MOV CX,word ptr [ESI + 0x5f]
0049162A  52                        PUSH EDX
0049162B  66 8B 56 5D               MOV DX,word ptr [ESI + 0x5d]
0049162F  56                        PUSH ESI
00491630  50                        PUSH EAX
00491631  66 8B 46 5B               MOV AX,word ptr [ESI + 0x5b]
00491635  51                        PUSH ECX
00491636  8B 0D 84 B2 7F 00         MOV ECX,dword ptr [0x007fb284]
0049163C  52                        PUSH EDX
0049163D  50                        PUSH EAX
0049163E  E8 7E 38 F7 FF            CALL 0x00404ec1
00491643  C7 86 C0 05 00 00 03 00 00 00  MOV dword ptr [ESI + 0x5c0],0x3
0049164D  A1 BC 17 81 00            MOV EAX,[0x008117bc]
00491652  85 C0                     TEST EAX,EAX
00491654  74 78                     JZ 0x004916ce
00491656  8B 86 A6 05 00 00         MOV EAX,dword ptr [ESI + 0x5a6]
0049165C  66 8B 4E 24               MOV CX,word ptr [ESI + 0x24]
00491660  66 8B 56 32               MOV DX,word ptr [ESI + 0x32]
00491664  57                        PUSH EDI
00491665  8D BE A6 05 00 00         LEA EDI,[ESI + 0x5a6]
0049166B  C7 45 F0 D2 5D 00 00      MOV dword ptr [EBP + -0x10],0x5dd2
00491672  85 C0                     TEST EAX,EAX
00491674  66 89 4D F4               MOV word ptr [EBP + -0xc],CX
00491678  66 89 55 F6               MOV word ptr [EBP + -0xa],DX
0049167C  75 2F                     JNZ 0x004916ad
0049167E  8B 86 A2 05 00 00         MOV EAX,dword ptr [ESI + 0x5a2]
00491684  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
0049168A  57                        PUSH EDI
0049168B  50                        PUSH EAX
0049168C  E8 3F 4C 25 00            CALL 0x006e62d0
00491691  83 F8 FC                  CMP EAX,-0x4
00491694  75 17                     JNZ 0x004916ad
00491696  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
0049169C  68 08 50 00 00            PUSH 0x5008
004916A1  68 3C 9D 7A 00            PUSH 0x7a9d3c
004916A6  51                        PUSH ECX
004916A7  50                        PUSH EAX
004916A8  E8 93 47 21 00            CALL 0x006a5e40
LAB_004916ad:
004916AD  8B 3F                     MOV EDI,dword ptr [EDI]
004916AF  8B 0D BC 17 81 00         MOV ECX,dword ptr [0x008117bc]
004916B5  66 8B 57 24               MOV DX,word ptr [EDI + 0x24]
004916B9  66 89 55 F8               MOV word ptr [EBP + -0x8],DX
004916BD  66 8B 47 32               MOV AX,word ptr [EDI + 0x32]
004916C1  66 89 45 FA               MOV word ptr [EBP + -0x6],AX
004916C5  8B 11                     MOV EDX,dword ptr [ECX]
004916C7  8D 45 E0                  LEA EAX,[EBP + -0x20]
004916CA  50                        PUSH EAX
004916CB  FF 12                     CALL dword ptr [EDX]
004916CD  5F                        POP EDI
LAB_004916ce:
004916CE  5E                        POP ESI
004916CF  8B E5                     MOV ESP,EBP
004916D1  5D                        POP EBP
004916D2  C3                        RET
