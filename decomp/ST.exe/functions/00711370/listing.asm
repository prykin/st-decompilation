FUN_00711370:
00711370  55                        PUSH EBP
00711371  8B EC                     MOV EBP,ESP
00711373  83 EC 08                  SUB ESP,0x8
00711376  53                        PUSH EBX
00711377  57                        PUSH EDI
00711378  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
0071137B  32 DB                     XOR BL,BL
0071137D  85 FF                     TEST EDI,EDI
0071137F  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
00711382  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
00711389  75 0A                     JNZ 0x00711395
0071138B  5F                        POP EDI
0071138C  33 C0                     XOR EAX,EAX
0071138E  5B                        POP EBX
0071138F  8B E5                     MOV ESP,EBP
00711391  5D                        POP EBP
00711392  C2 04 00                  RET 0x4
LAB_00711395:
00711395  80 3F 00                  CMP byte ptr [EDI],0x0
00711398  74 3A                     JZ 0x007113d4
0071139A  56                        PUSH ESI
LAB_0071139b:
0071139B  68 F4 8F 7C 00            PUSH 0x7c8ff4
007113A0  57                        PUSH EDI
007113A1  E8 EA F1 01 00            CALL 0x00730590
007113A6  8B F0                     MOV ESI,EAX
007113A8  83 C4 08                  ADD ESP,0x8
007113AB  85 F6                     TEST ESI,ESI
007113AD  74 05                     JZ 0x007113b4
007113AF  8A 1E                     MOV BL,byte ptr [ESI]
007113B1  C6 06 00                  MOV byte ptr [ESI],0x0
LAB_007113b4:
007113B4  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
007113B7  57                        PUSH EDI
007113B8  E8 53 FD FF FF            CALL 0x00711110
007113BD  3B 45 FC                  CMP EAX,dword ptr [EBP + -0x4]
007113C0  7E 03                     JLE 0x007113c5
007113C2  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
LAB_007113c5:
007113C5  85 F6                     TEST ESI,ESI
007113C7  74 0A                     JZ 0x007113d3
007113C9  8D 7E 01                  LEA EDI,[ESI + 0x1]
007113CC  88 1E                     MOV byte ptr [ESI],BL
007113CE  80 3F 00                  CMP byte ptr [EDI],0x0
007113D1  75 C8                     JNZ 0x0071139b
LAB_007113d3:
007113D3  5E                        POP ESI
LAB_007113d4:
007113D4  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
007113D7  5F                        POP EDI
007113D8  5B                        POP EBX
007113D9  8B E5                     MOV ESP,EBP
007113DB  5D                        POP EBP
007113DC  C2 04 00                  RET 0x4
