mfPlaGetClust:
007256A0  55                        PUSH EBP
007256A1  8B EC                     MOV EBP,ESP
007256A3  83 EC 50                  SUB ESP,0x50
007256A6  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
007256AB  56                        PUSH ESI
007256AC  8D 55 B4                  LEA EDX,[EBP + -0x4c]
007256AF  8D 4D B0                  LEA ECX,[EBP + -0x50]
007256B2  6A 00                     PUSH 0x0
007256B4  52                        PUSH EDX
007256B5  89 45 B0                  MOV dword ptr [EBP + -0x50],EAX
007256B8  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
007256BE  E8 2D 81 00 00            CALL 0x0072d7f0
007256C3  8B F0                     MOV ESI,EAX
007256C5  83 C4 08                  ADD ESP,0x8
007256C8  85 F6                     TEST ESI,ESI
007256CA  75 3E                     JNZ 0x0072570a
007256CC  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
007256CF  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
007256D2  8D 4D F4                  LEA ECX,[EBP + -0xc]
007256D5  50                        PUSH EAX
007256D6  51                        PUSH ECX
007256D7  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
007256DA  52                        PUSH EDX
007256DB  6A 0D                     PUSH 0xd
007256DD  E8 2E CC FC FF            CALL 0x006f2310
007256E2  85 C0                     TEST EAX,EAX
007256E4  75 12                     JNZ 0x007256f8
007256E6  8B 45 B0                  MOV EAX,dword ptr [EBP + -0x50]
007256E9  A3 F8 8D 85 00            MOV [0x00858df8],EAX
007256EE  B8 FC FF FF FF            MOV EAX,0xfffffffc
007256F3  5E                        POP ESI
007256F4  8B E5                     MOV ESP,EBP
007256F6  5D                        POP EBP
007256F7  C3                        RET
LAB_007256f8:
007256F8  8B 4D B0                  MOV ECX,dword ptr [EBP + -0x50]
007256FB  0F BF 45 F4               MOVSX EAX,word ptr [EBP + -0xc]
007256FF  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00725705  5E                        POP ESI
00725706  8B E5                     MOV ESP,EBP
00725708  5D                        POP EBP
00725709  C3                        RET
LAB_0072570a:
0072570A  8B 55 B0                  MOV EDX,dword ptr [EBP + -0x50]
0072570D  68 58 0C 7F 00            PUSH 0x7f0c58
00725712  68 CC 4C 7A 00            PUSH 0x7a4ccc
00725717  56                        PUSH ESI
00725718  6A 00                     PUSH 0x0
0072571A  6A 46                     PUSH 0x46
0072571C  68 44 0C 7F 00            PUSH 0x7f0c44
00725721  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00725727  E8 A4 7D F8 FF            CALL 0x006ad4d0
0072572C  83 C4 18                  ADD ESP,0x18
0072572F  85 C0                     TEST EAX,EAX
00725731  74 01                     JZ 0x00725734
00725733  CC                        INT3
LAB_00725734:
00725734  6A 48                     PUSH 0x48
00725736  68 44 0C 7F 00            PUSH 0x7f0c44
0072573B  6A 00                     PUSH 0x0
0072573D  56                        PUSH ESI
0072573E  E8 FD 06 F8 FF            CALL 0x006a5e40
00725743  85 F6                     TEST ESI,ESI
00725745  7D 07                     JGE 0x0072574e
00725747  8B C6                     MOV EAX,ESI
00725749  5E                        POP ESI
0072574A  8B E5                     MOV ESP,EBP
0072574C  5D                        POP EBP
0072574D  C3                        RET
LAB_0072574e:
0072574E  83 C8 FF                  OR EAX,0xffffffff
00725751  5E                        POP ESI
00725752  8B E5                     MOV ESP,EBP
00725754  5D                        POP EBP
00725755  C3                        RET
