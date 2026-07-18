FUN_007111c0:
007111C0  55                        PUSH EBP
007111C1  8B EC                     MOV EBP,ESP
007111C3  51                        PUSH ECX
007111C4  53                        PUSH EBX
007111C5  56                        PUSH ESI
007111C6  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
007111C9  33 DB                     XOR EBX,EBX
007111CB  57                        PUSH EDI
007111CC  3B F3                     CMP ESI,EBX
007111CE  8B F9                     MOV EDI,ECX
007111D0  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
007111D3  75 0B                     JNZ 0x007111e0
007111D5  5F                        POP EDI
007111D6  5E                        POP ESI
007111D7  33 C0                     XOR EAX,EAX
007111D9  5B                        POP EBX
007111DA  8B E5                     MOV ESP,EBP
007111DC  5D                        POP EBP
007111DD  C2 04 00                  RET 0x4
LAB_007111e0:
007111E0  80 3E 00                  CMP byte ptr [ESI],0x0
007111E3  74 44                     JZ 0x00711229
LAB_007111e5:
007111E5  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
007111E8  85 C0                     TEST EAX,EAX
007111EA  74 48                     JZ 0x00711234
007111EC  56                        PUSH ESI
007111ED  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
007111F4  E8 C7 BB FF FF            CALL 0x0070cdc0
007111F9  83 C4 04                  ADD ESP,0x4
007111FC  85 C0                     TEST EAX,EAX
007111FE  7D 21                     JGE 0x00711221
LAB_00711200:
00711200  56                        PUSH ESI
00711201  8B CF                     MOV ECX,EDI
00711203  E8 A8 FD FF FF            CALL 0x00710fb0
00711208  8B 97 9A 00 00 00         MOV EDX,dword ptr [EDI + 0x9a]
0071120E  25 FF FF 00 00            AND EAX,0xffff
00711213  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
00711216  0F BF 44 4A 6C            MOVSX EAX,word ptr [EDX + ECX*0x2 + 0x6c]
0071121B  3B C3                     CMP EAX,EBX
0071121D  7E 02                     JLE 0x00711221
0071121F  8B D8                     MOV EBX,EAX
LAB_00711221:
00711221  8A 46 01                  MOV AL,byte ptr [ESI + 0x1]
00711224  46                        INC ESI
00711225  84 C0                     TEST AL,AL
00711227  75 BC                     JNZ 0x007111e5
LAB_00711229:
00711229  5F                        POP EDI
0071122A  8B C3                     MOV EAX,EBX
0071122C  5E                        POP ESI
0071122D  5B                        POP EBX
0071122E  8B E5                     MOV ESP,EBP
00711230  5D                        POP EBP
00711231  C2 04 00                  RET 0x4
LAB_00711234:
00711234  8D 87 9E 00 00 00         LEA EAX,[EDI + 0x9e]
0071123A  56                        PUSH ESI
0071123B  50                        PUSH EAX
0071123C  E8 4F BB FF FF            CALL 0x0070cd90
00711241  83 C4 08                  ADD ESP,0x8
00711244  85 C0                     TEST EAX,EAX
00711246  75 B8                     JNZ 0x00711200
00711248  8B 47 7E                  MOV EAX,dword ptr [EDI + 0x7e]
0071124B  85 C0                     TEST EAX,EAX
0071124D  74 B1                     JZ 0x00711200
0071124F  C7 45 FC 01 00 00 00      MOV dword ptr [EBP + -0x4],0x1
00711256  EB C9                     JMP 0x00711221
