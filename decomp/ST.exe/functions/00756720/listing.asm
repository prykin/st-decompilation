FUN_00756720:
00756720  55                        PUSH EBP
00756721  8B EC                     MOV EBP,ESP
00756723  56                        PUSH ESI
00756724  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
00756727  81 7E 0C CA 00 00 00      CMP dword ptr [ESI + 0xc],0xca
0075672E  75 25                     JNZ 0x00756755
00756730  56                        PUSH ESI
00756731  E8 1A 07 00 00            CALL 0x00756e50
00756736  8B 46 38                  MOV EAX,dword ptr [ESI + 0x38]
00756739  85 C0                     TEST EAX,EAX
0075673B  74 11                     JZ 0x0075674e
0075673D  C7 46 0C CF 00 00 00      MOV dword ptr [ESI + 0xc],0xcf
00756744  B8 01 00 00 00            MOV EAX,0x1
00756749  5E                        POP ESI
0075674A  5D                        POP EBP
0075674B  C2 04 00                  RET 0x4
LAB_0075674e:
0075674E  C7 46 0C CB 00 00 00      MOV dword ptr [ESI + 0xc],0xcb
LAB_00756755:
00756755  8B 46 0C                  MOV EAX,dword ptr [ESI + 0xc]
00756758  3D CB 00 00 00            CMP EAX,0xcb
0075675D  75 79                     JNZ 0x007567d8
0075675F  8B 86 A2 01 00 00         MOV EAX,dword ptr [ESI + 0x1a2]
00756765  8B 48 10                  MOV ECX,dword ptr [EAX + 0x10]
00756768  85 C9                     TEST ECX,ECX
0075676A  74 55                     JZ 0x007567c1
LAB_0075676c:
0075676C  8B 46 04                  MOV EAX,dword ptr [ESI + 0x4]
0075676F  85 C0                     TEST EAX,EAX
00756771  74 03                     JZ 0x00756776
00756773  56                        PUSH ESI
00756774  FF 10                     CALL dword ptr [EAX]
LAB_00756776:
00756776  8B 8E A2 01 00 00         MOV ECX,dword ptr [ESI + 0x1a2]
0075677C  56                        PUSH ESI
0075677D  FF 11                     CALL dword ptr [ECX]
0075677F  85 C0                     TEST EAX,EAX
00756781  74 37                     JZ 0x007567ba
00756783  83 F8 02                  CMP EAX,0x2
00756786  74 39                     JZ 0x007567c1
00756788  8B 4E 04                  MOV ECX,dword ptr [ESI + 0x4]
0075678B  85 C9                     TEST ECX,ECX
0075678D  74 DD                     JZ 0x0075676c
0075678F  83 F8 03                  CMP EAX,0x3
00756792  74 05                     JZ 0x00756799
00756794  83 F8 01                  CMP EAX,0x1
00756797  75 D3                     JNZ 0x0075676c
LAB_00756799:
00756799  8B 41 04                  MOV EAX,dword ptr [ECX + 0x4]
0075679C  40                        INC EAX
0075679D  89 41 04                  MOV dword ptr [ECX + 0x4],EAX
007567A0  8B 46 04                  MOV EAX,dword ptr [ESI + 0x4]
007567A3  8B 48 08                  MOV ECX,dword ptr [EAX + 0x8]
007567A6  8B 50 04                  MOV EDX,dword ptr [EAX + 0x4]
007567A9  3B D1                     CMP EDX,ECX
007567AB  7C BF                     JL 0x0075676c
007567AD  8B 96 2E 01 00 00         MOV EDX,dword ptr [ESI + 0x12e]
007567B3  03 D1                     ADD EDX,ECX
007567B5  89 50 08                  MOV dword ptr [EAX + 0x8],EDX
007567B8  EB B2                     JMP 0x0075676c
LAB_007567ba:
007567BA  33 C0                     XOR EAX,EAX
007567BC  5E                        POP ESI
007567BD  5D                        POP EBP
007567BE  C2 04 00                  RET 0x4
LAB_007567c1:
007567C1  8B 86 88 00 00 00         MOV EAX,dword ptr [ESI + 0x88]
007567C7  56                        PUSH ESI
007567C8  89 86 90 00 00 00         MOV dword ptr [ESI + 0x90],EAX
007567CE  E8 2D 00 00 00            CALL 0x00756800
007567D3  5E                        POP ESI
007567D4  5D                        POP EBP
007567D5  C2 04 00                  RET 0x4
LAB_007567d8:
007567D8  3D CC 00 00 00            CMP EAX,0xcc
007567DD  74 15                     JZ 0x007567f4
007567DF  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
007567E5  6A 52                     PUSH 0x52
007567E7  68 50 2D 7F 00            PUSH 0x7f2d50
007567EC  51                        PUSH ECX
007567ED  6A 12                     PUSH 0x12
007567EF  E8 4C F6 F4 FF            CALL 0x006a5e40
LAB_007567f4:
007567F4  56                        PUSH ESI
007567F5  E8 06 00 00 00            CALL 0x00756800
007567FA  5E                        POP ESI
007567FB  5D                        POP EBP
007567FC  C2 04 00                  RET 0x4
