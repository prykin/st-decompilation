PutDDXClip:
00540620  55                        PUSH EBP
00540621  8B EC                     MOV EBP,ESP
00540623  83 EC 44                  SUB ESP,0x44
00540626  A1 9C 75 80 00            MOV EAX,[0x0080759c]
0054062B  56                        PUSH ESI
0054062C  85 C0                     TEST EAX,EAX
0054062E  0F 84 E6 00 00 00         JZ 0x0054071a
00540634  8B 45 24                  MOV EAX,dword ptr [EBP + 0x24]
00540637  85 C0                     TEST EAX,EAX
00540639  0F 84 DB 00 00 00         JZ 0x0054071a
0054063F  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
00540644  8D 55 C0                  LEA EDX,[EBP + -0x40]
00540647  8D 4D BC                  LEA ECX,[EBP + -0x44]
0054064A  6A 00                     PUSH 0x0
0054064C  52                        PUSH EDX
0054064D  89 45 BC                  MOV dword ptr [EBP + -0x44],EAX
00540650  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00540656  E8 95 D1 1E 00            CALL 0x0072d7f0
0054065B  8B F0                     MOV ESI,EAX
0054065D  83 C4 08                  ADD ESP,0x8
00540660  85 F6                     TEST ESI,ESI
00540662  75 7D                     JNZ 0x005406e1
00540664  8B 45 20                  MOV EAX,dword ptr [EBP + 0x20]
00540667  25 FF 00 00 00            AND EAX,0xff
0054066C  48                        DEC EAX
0054066D  74 3B                     JZ 0x005406aa
0054066F  83 E8 05                  SUB EAX,0x5
00540672  75 5F                     JNZ 0x005406d3
00540674  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
00540677  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
0054067A  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
0054067D  50                        PUSH EAX
0054067E  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
00540681  51                        PUSH ECX
00540682  8B 4D 24                  MOV ECX,dword ptr [EBP + 0x24]
00540685  52                        PUSH EDX
00540686  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
00540689  50                        PUSH EAX
0054068A  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0054068D  51                        PUSH ECX
0054068E  8B 0D 9C 75 80 00         MOV ECX,dword ptr [0x0080759c]
00540694  52                        PUSH EDX
00540695  50                        PUSH EAX
00540696  51                        PUSH ECX
00540697  E8 44 7C 17 00            CALL 0x006b82e0
0054069C  8B 4D BC                  MOV ECX,dword ptr [EBP + -0x44]
0054069F  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005406A5  5E                        POP ESI
005406A6  8B E5                     MOV ESP,EBP
005406A8  5D                        POP EBP
005406A9  C3                        RET
LAB_005406aa:
005406AA  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
005406AD  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
005406B0  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
005406B3  52                        PUSH EDX
005406B4  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
005406B7  50                        PUSH EAX
005406B8  8B 45 24                  MOV EAX,dword ptr [EBP + 0x24]
005406BB  51                        PUSH ECX
005406BC  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
005406BF  52                        PUSH EDX
005406C0  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
005406C3  6A 00                     PUSH 0x0
005406C5  50                        PUSH EAX
005406C6  A1 9C 75 80 00            MOV EAX,[0x0080759c]
005406CB  51                        PUSH ECX
005406CC  52                        PUSH EDX
005406CD  50                        PUSH EAX
005406CE  E8 FD 3B 17 00            CALL 0x006b42d0
LAB_005406d3:
005406D3  8B 4D BC                  MOV ECX,dword ptr [EBP + -0x44]
005406D6  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005406DC  5E                        POP ESI
005406DD  8B E5                     MOV ESP,EBP
005406DF  5D                        POP EBP
005406E0  C3                        RET
LAB_005406e1:
005406E1  8B 55 BC                  MOV EDX,dword ptr [EBP + -0x44]
005406E4  68 6C 7B 7C 00            PUSH 0x7c7b6c
005406E9  68 CC 4C 7A 00            PUSH 0x7a4ccc
005406EE  56                        PUSH ESI
005406EF  6A 00                     PUSH 0x0
005406F1  6A 3A                     PUSH 0x3a
005406F3  68 2C 7B 7C 00            PUSH 0x7c7b2c
005406F8  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
005406FE  E8 CD CD 16 00            CALL 0x006ad4d0
00540703  83 C4 18                  ADD ESP,0x18
00540706  85 C0                     TEST EAX,EAX
00540708  74 01                     JZ 0x0054070b
0054070A  CC                        INT3
LAB_0054070b:
0054070B  6A 3A                     PUSH 0x3a
0054070D  68 2C 7B 7C 00            PUSH 0x7c7b2c
00540712  6A 00                     PUSH 0x0
00540714  56                        PUSH ESI
00540715  E8 26 57 16 00            CALL 0x006a5e40
LAB_0054071a:
0054071A  5E                        POP ESI
0054071B  8B E5                     MOV ESP,EBP
0054071D  5D                        POP EBP
0054071E  C3                        RET
