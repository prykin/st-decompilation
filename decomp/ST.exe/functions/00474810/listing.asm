FUN_00474810:
00474810  55                        PUSH EBP
00474811  8B EC                     MOV EBP,ESP
00474813  56                        PUSH ESI
00474814  57                        PUSH EDI
00474815  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
00474818  8B F1                     MOV ESI,ECX
0047481A  85 FF                     TEST EDI,EDI
0047481C  75 05                     JNZ 0x00474823
0047481E  E8 A7 DF F8 FF            CALL 0x004027ca
LAB_00474823:
00474823  8B 86 96 05 00 00         MOV EAX,dword ptr [ESI + 0x596]
00474829  85 C0                     TEST EAX,EAX
0047482B  75 0E                     JNZ 0x0047483b
0047482D  57                        PUSH EDI
0047482E  8B CE                     MOV ECX,ESI
00474830  E8 BB F5 F8 FF            CALL 0x00403df0
00474835  5F                        POP EDI
00474836  5E                        POP ESI
00474837  5D                        POP EBP
00474838  C2 04 00                  RET 0x4
LAB_0047483b:
0047483B  83 F8 01                  CMP EAX,0x1
0047483E  75 14                     JNZ 0x00474854
00474840  8B 06                     MOV EAX,dword ptr [ESI]
00474842  8B CE                     MOV ECX,ESI
00474844  FF 90 D8 00 00 00         CALL dword ptr [EAX + 0xd8]
0047484A  F7 D8                     NEG EAX
0047484C  5F                        POP EDI
0047484D  5E                        POP ESI
0047484E  1B C0                     SBB EAX,EAX
00474850  5D                        POP EBP
00474851  C2 04 00                  RET 0x4
LAB_00474854:
00474854  83 F8 02                  CMP EAX,0x2
00474857  75 78                     JNZ 0x004748d1
00474859  8B 96 8E 05 00 00         MOV EDX,dword ptr [ESI + 0x58e]
0047485F  8D 4D 08                  LEA ECX,[EBP + 0x8]
00474862  51                        PUSH ECX
00474863  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
00474869  52                        PUSH EDX
0047486A  E8 61 1A 27 00            CALL 0x006e62d0
0047486F  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00474872  85 C9                     TEST ECX,ECX
00474874  74 2D                     JZ 0x004748a3
00474876  8B 41 18                  MOV EAX,dword ptr [ECX + 0x18]
00474879  8B 96 8E 05 00 00         MOV EDX,dword ptr [ESI + 0x58e]
0047487F  3B C2                     CMP EAX,EDX
00474881  75 20                     JNZ 0x004748a3
00474883  8B 46 18                  MOV EAX,dword ptr [ESI + 0x18]
00474886  8B 11                     MOV EDX,dword ptr [ECX]
00474888  50                        PUSH EAX
00474889  FF 92 AC 00 00 00         CALL dword ptr [EDX + 0xac]
0047488F  8B 16                     MOV EDX,dword ptr [ESI]
00474891  8B CE                     MOV ECX,ESI
00474893  FF 92 D8 00 00 00         CALL dword ptr [EDX + 0xd8]
00474899  F7 D8                     NEG EAX
0047489B  5F                        POP EDI
0047489C  5E                        POP ESI
0047489D  1B C0                     SBB EAX,EAX
0047489F  5D                        POP EBP
004748A0  C2 04 00                  RET 0x4
LAB_004748a3:
004748A3  68 70 AE 7A 00            PUSH 0x7aae70
004748A8  68 CC 4C 7A 00            PUSH 0x7a4ccc
004748AD  6A 00                     PUSH 0x0
004748AF  6A 00                     PUSH 0x0
004748B1  68 2D 2F 00 00            PUSH 0x2f2d
004748B6  68 3C 9D 7A 00            PUSH 0x7a9d3c
004748BB  E8 10 8C 23 00            CALL 0x006ad4d0
004748C0  83 C4 18                  ADD ESP,0x18
004748C3  85 C0                     TEST EAX,EAX
004748C5  74 01                     JZ 0x004748c8
004748C7  CC                        INT3
LAB_004748c8:
004748C8  5F                        POP EDI
004748C9  83 C8 FF                  OR EAX,0xffffffff
004748CC  5E                        POP ESI
004748CD  5D                        POP EBP
004748CE  C2 04 00                  RET 0x4
LAB_004748d1:
004748D1  83 F8 03                  CMP EAX,0x3
004748D4  75 76                     JNZ 0x0047494c
004748D6  8B 86 9A 05 00 00         MOV EAX,dword ptr [ESI + 0x59a]
004748DC  85 C0                     TEST EAX,EAX
004748DE  74 46                     JZ 0x00474926
004748E0  83 F8 01                  CMP EAX,0x1
004748E3  74 41                     JZ 0x00474926
004748E5  83 F8 02                  CMP EAX,0x2
004748E8  74 3C                     JZ 0x00474926
004748EA  83 F8 03                  CMP EAX,0x3
004748ED  74 14                     JZ 0x00474903
004748EF  83 F8 04                  CMP EAX,0x4
004748F2  74 0F                     JZ 0x00474903
004748F4  6A 02                     PUSH 0x2
004748F6  8B CE                     MOV ECX,ESI
004748F8  E8 1F 05 F9 FF            CALL 0x00404e1c
004748FD  5F                        POP EDI
004748FE  5E                        POP ESI
004748FF  5D                        POP EBP
00474900  C2 04 00                  RET 0x4
LAB_00474903:
00474903  8B 06                     MOV EAX,dword ptr [ESI]
00474905  8B CE                     MOV ECX,ESI
00474907  C7 86 9A 05 00 00 05 00 00 00  MOV dword ptr [ESI + 0x59a],0x5
00474911  FF 90 D8 00 00 00         CALL dword ptr [EAX + 0xd8]
00474917  F7 D8                     NEG EAX
00474919  1B C0                     SBB EAX,EAX
0047491B  5F                        POP EDI
0047491C  24 FD                     AND AL,0xfd
0047491E  5E                        POP ESI
0047491F  83 C0 02                  ADD EAX,0x2
00474922  5D                        POP EBP
00474923  C2 04 00                  RET 0x4
LAB_00474926:
00474926  8B 8E ED 01 00 00         MOV ECX,dword ptr [ESI + 0x1ed]
0047492C  51                        PUSH ECX
0047492D  8B 8E 11 02 00 00         MOV ECX,dword ptr [ESI + 0x211]
00474933  E8 B8 59 27 00            CALL 0x006ea2f0
00474938  8B 16                     MOV EDX,dword ptr [ESI]
0047493A  8B CE                     MOV ECX,ESI
0047493C  FF 92 D8 00 00 00         CALL dword ptr [EDX + 0xd8]
00474942  F7 D8                     NEG EAX
00474944  5F                        POP EDI
00474945  5E                        POP ESI
00474946  1B C0                     SBB EAX,EAX
00474948  5D                        POP EBP
00474949  C2 04 00                  RET 0x4
LAB_0047494c:
0047494C  5F                        POP EDI
0047494D  B8 02 00 00 00            MOV EAX,0x2
00474952  5E                        POP ESI
00474953  5D                        POP EBP
00474954  C2 04 00                  RET 0x4
