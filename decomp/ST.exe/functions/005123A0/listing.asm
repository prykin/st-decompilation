FUN_005123a0:
005123A0  55                        PUSH EBP
005123A1  8B EC                     MOV EBP,ESP
005123A3  81 EC 1C 05 00 00         SUB ESP,0x51c
005123A9  53                        PUSH EBX
005123AA  56                        PUSH ESI
005123AB  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
005123AE  57                        PUSH EDI
005123AF  B9 35 01 00 00            MOV ECX,0x135
005123B4  33 C0                     XOR EAX,EAX
005123B6  8D BD E4 FA FF FF         LEA EDI,[EBP + 0xfffffae4]
005123BC  8D 55 BC                  LEA EDX,[EBP + -0x44]
005123BF  F3 AB                     STOSD.REP ES:EDI
005123C1  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
005123C6  33 FF                     XOR EDI,EDI
005123C8  8D 4D B8                  LEA ECX,[EBP + -0x48]
005123CB  57                        PUSH EDI
005123CC  52                        PUSH EDX
005123CD  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
005123D0  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005123D6  E8 15 B4 21 00            CALL 0x0072d7f0
005123DB  8B F0                     MOV ESI,EAX
005123DD  83 C4 08                  ADD ESP,0x8
005123E0  3B F7                     CMP ESI,EDI
005123E2  0F 85 07 03 00 00         JNZ 0x005126ef
005123E8  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
005123EB  8B 83 9C 01 00 00         MOV EAX,dword ptr [EBX + 0x19c]
005123F1  3B C7                     CMP EAX,EDI
005123F3  74 09                     JZ 0x005123fe
005123F5  8B 4B 0C                  MOV ECX,dword ptr [EBX + 0xc]
005123F8  50                        PUSH EAX
005123F9  E8 B2 32 1D 00            CALL 0x006e56b0
LAB_005123fe:
005123FE  8B 83 DC 01 00 00         MOV EAX,dword ptr [EBX + 0x1dc]
00512404  8B 4B 68                  MOV ECX,dword ptr [EBX + 0x68]
00512407  68 18 01 00 00            PUSH 0x118
0051240C  68 9C 01 00 00            PUSH 0x19c
00512411  6A 16                     PUSH 0x16
00512413  6A 21                     PUSH 0x21
00512415  57                        PUSH EDI
00512416  50                        PUSH EAX
00512417  6A 16                     PUSH 0x16
00512419  6A 21                     PUSH 0x21
0051241B  57                        PUSH EDI
0051241C  51                        PUSH ECX
0051241D  E8 CE 31 1A 00            CALL 0x006b55f0
00512422  8B 4B 3C                  MOV ECX,dword ptr [EBX + 0x3c]
00512425  89 BD E4 FA FF FF         MOV dword ptr [EBP + 0xfffffae4],EDI
0051242B  8D 51 21                  LEA EDX,[ECX + 0x21]
0051242E  89 95 EC FA FF FF         MOV dword ptr [EBP + 0xfffffaec],EDX
00512434  8B 53 5C                  MOV EDX,dword ptr [EBX + 0x5c]
00512437  3B D7                     CMP EDX,EDI
00512439  75 07                     JNZ 0x00512442
0051243B  8B 43 48                  MOV EAX,dword ptr [EBX + 0x48]
0051243E  F7 D8                     NEG EAX
00512440  EB 03                     JMP 0x00512445
LAB_00512442:
00512442  8B 43 44                  MOV EAX,dword ptr [EBX + 0x44]
LAB_00512445:
00512445  83 C0 16                  ADD EAX,0x16
00512448  C7 85 F4 FA FF FF 9C 01 00 00  MOV dword ptr [EBP + 0xfffffaf4],0x19c
00512452  89 85 F0 FA FF FF         MOV dword ptr [EBP + 0xfffffaf0],EAX
00512458  8A 83 A1 01 00 00         MOV AL,byte ptr [EBX + 0x1a1]
0051245E  84 C0                     TEST AL,AL
00512460  C7 85 F8 FA FF FF 18 01 00 00  MOV dword ptr [EBP + 0xfffffaf8],0x118
0051246A  75 08                     JNZ 0x00512474
0051246C  8B 83 B3 01 00 00         MOV EAX,dword ptr [EBX + 0x1b3]
00512472  EB 06                     JMP 0x0051247a
LAB_00512474:
00512474  8B 83 BB 01 00 00         MOV EAX,dword ptr [EBX + 0x1bb]
LAB_0051247a:
0051247A  8B 40 0C                  MOV EAX,dword ptr [EAX + 0xc]
0051247D  89 BD 00 FB FF FF         MOV dword ptr [EBP + 0xfffffb00],EDI
00512483  89 85 FC FA FF FF         MOV dword ptr [EBP + 0xfffffafc],EAX
00512489  8B 43 08                  MOV EAX,dword ptr [EBX + 0x8]
0051248C  89 BD 14 FC FF FF         MOV dword ptr [EBP + 0xfffffc14],EDI
00512492  BE 02 00 00 00            MOV ESI,0x2
00512497  BF 01 00 00 00            MOV EDI,0x1
0051249C  81 C1 C3 01 00 00         ADD ECX,0x1c3
005124A2  85 D2                     TEST EDX,EDX
005124A4  89 85 0C FB FF FF         MOV dword ptr [EBP + 0xfffffb0c],EAX
005124AA  89 B5 10 FB FF FF         MOV dword ptr [EBP + 0xfffffb10],ESI
005124B0  C7 85 14 FB FF FF 60 81 00 00  MOV dword ptr [EBP + 0xfffffb14],0x8160
005124BA  89 85 2C FB FF FF         MOV dword ptr [EBP + 0xfffffb2c],EAX
005124C0  89 B5 30 FB FF FF         MOV dword ptr [EBP + 0xfffffb30],ESI
005124C6  C7 85 34 FB FF FF 61 81 00 00  MOV dword ptr [EBP + 0xfffffb34],0x8161
005124D0  89 85 4C FB FF FF         MOV dword ptr [EBP + 0xfffffb4c],EAX
005124D6  89 B5 50 FB FF FF         MOV dword ptr [EBP + 0xfffffb50],ESI
005124DC  C7 85 54 FB FF FF 62 81 00 00  MOV dword ptr [EBP + 0xfffffb54],0x8162
005124E6  89 85 6C FB FF FF         MOV dword ptr [EBP + 0xfffffb6c],EAX
005124EC  89 B5 70 FB FF FF         MOV dword ptr [EBP + 0xfffffb70],ESI
005124F2  C7 85 74 FB FF FF 63 81 00 00  MOV dword ptr [EBP + 0xfffffb74],0x8163
005124FC  89 B5 10 FC FF FF         MOV dword ptr [EBP + 0xfffffc10],ESI
00512502  89 B5 18 FC FF FF         MOV dword ptr [EBP + 0xfffffc18],ESI
00512508  89 BD 1C FD FF FF         MOV dword ptr [EBP + 0xfffffd1c],EDI
0051250E  89 BD 20 FD FF FF         MOV dword ptr [EBP + 0xfffffd20],EDI
00512514  89 8D 1C FC FF FF         MOV dword ptr [EBP + 0xfffffc1c],ECX
0051251A  75 07                     JNZ 0x00512523
0051251C  8B 43 48                  MOV EAX,dword ptr [EBX + 0x48]
0051251F  F7 D8                     NEG EAX
00512521  EB 03                     JMP 0x00512526
LAB_00512523:
00512523  8B 43 44                  MOV EAX,dword ptr [EBX + 0x44]
LAB_00512526:
00512526  8B 0D 90 67 80 00         MOV ECX,dword ptr [0x00806790]
0051252C  57                        PUSH EDI
0051252D  6A 00                     PUSH 0x0
0051252F  83 C0 16                  ADD EAX,0x16
00512532  68 E0 39 7C 00            PUSH 0x7c39e0
00512537  51                        PUSH ECX
00512538  89 85 20 FC FF FF         MOV dword ptr [EBP + 0xfffffc20],EAX
0051253E  C7 85 24 FC FF FF 11 00 00 00  MOV dword ptr [EBP + 0xfffffc24],0x11
00512548  C7 85 28 FC FF FF 24 00 00 00  MOV dword ptr [EBP + 0xfffffc28],0x24
00512552  E8 19 85 1F 00            CALL 0x0070aa70
00512557  8B 15 90 67 80 00         MOV EDX,dword ptr [0x00806790]
0051255D  57                        PUSH EDI
0051255E  68 E0 39 7C 00            PUSH 0x7c39e0
00512563  6A 12                     PUSH 0x12
00512565  52                        PUSH EDX
00512566  89 85 38 FD FF FF         MOV dword ptr [EBP + 0xfffffd38],EAX
0051256C  E8 7F 81 1F 00            CALL 0x0070a6f0
00512571  89 85 3C FD FF FF         MOV dword ptr [EBP + 0xfffffd3c],EAX
00512577  8B 43 08                  MOV EAX,dword ptr [EBX + 0x8]
0051257A  89 85 74 FC FF FF         MOV dword ptr [EBP + 0xfffffc74],EAX
00512580  8B 43 5C                  MOV EAX,dword ptr [EBX + 0x5c]
00512583  89 B5 78 FC FF FF         MOV dword ptr [EBP + 0xfffffc78],ESI
00512589  89 B5 90 FD FF FF         MOV dword ptr [EBP + 0xfffffd90],ESI
0051258F  83 C4 20                  ADD ESP,0x20
00512592  B9 5F 00 00 00            MOV ECX,0x5f
00512597  8D B5 14 FC FF FF         LEA ESI,[EBP + 0xfffffc14]
0051259D  8D BD 94 FD FF FF         LEA EDI,[EBP + 0xfffffd94]
005125A3  C7 85 24 FD FF FF F4 01 00 00  MOV dword ptr [EBP + 0xfffffd24],0x1f4
005125AD  C7 85 28 FD FF FF 32 00 00 00  MOV dword ptr [EBP + 0xfffffd28],0x32
005125B7  C7 85 7C FC FF FF 64 81 00 00  MOV dword ptr [EBP + 0xfffffc7c],0x8164
005125C1  85 C0                     TEST EAX,EAX
005125C3  F3 A5                     MOVSD.REP ES:EDI,ESI
005125C5  75 07                     JNZ 0x005125ce
005125C7  8B 43 48                  MOV EAX,dword ptr [EBX + 0x48]
005125CA  F7 D8                     NEG EAX
005125CC  EB 03                     JMP 0x005125d1
LAB_005125ce:
005125CE  8B 43 44                  MOV EAX,dword ptr [EBX + 0x44]
LAB_005125d1:
005125D1  8B 0D 90 67 80 00         MOV ECX,dword ptr [0x00806790]
005125D7  BF 01 00 00 00            MOV EDI,0x1
005125DC  57                        PUSH EDI
005125DD  6A 00                     PUSH 0x0
005125DF  05 09 01 00 00            ADD EAX,0x109
005125E4  68 D4 39 7C 00            PUSH 0x7c39d4
005125E9  51                        PUSH ECX
005125EA  89 85 A0 FD FF FF         MOV dword ptr [EBP + 0xfffffda0],EAX
005125F0  E8 7B 84 1F 00            CALL 0x0070aa70
005125F5  8B 15 90 67 80 00         MOV EDX,dword ptr [0x00806790]
005125FB  57                        PUSH EDI
005125FC  68 D4 39 7C 00            PUSH 0x7c39d4
00512601  6A 12                     PUSH 0x12
00512603  52                        PUSH EDX
00512604  89 85 B8 FE FF FF         MOV dword ptr [EBP + 0xfffffeb8],EAX
0051260A  E8 E1 80 1F 00            CALL 0x0070a6f0
0051260F  89 85 BC FE FF FF         MOV dword ptr [EBP + 0xfffffebc],EAX
00512615  8B 43 3C                  MOV EAX,dword ptr [EBX + 0x3c]
00512618  05 C3 01 00 00            ADD EAX,0x1c3
0051261D  83 C4 20                  ADD ESP,0x20
00512620  89 85 20 FF FF FF         MOV dword ptr [EBP + 0xffffff20],EAX
00512626  8B 43 5C                  MOV EAX,dword ptr [EBX + 0x5c]
00512629  85 C0                     TEST EAX,EAX
0051262B  C7 85 FC FD FF FF 65 81 00 00  MOV dword ptr [EBP + 0xfffffdfc],0x8165
00512635  C7 85 10 FF FF FF 03 00 00 00  MOV dword ptr [EBP + 0xffffff10],0x3
0051263F  89 BD 14 FF FF FF         MOV dword ptr [EBP + 0xffffff14],EDI
00512645  C7 85 1C FF FF FF 00 00 00 00  MOV dword ptr [EBP + 0xffffff1c],0x0
0051264F  75 07                     JNZ 0x00512658
00512651  8B 43 48                  MOV EAX,dword ptr [EBX + 0x48]
00512654  F7 D8                     NEG EAX
00512656  EB 03                     JMP 0x0051265b
LAB_00512658:
00512658  8B 43 44                  MOV EAX,dword ptr [EBX + 0x44]
LAB_0051265b:
0051265B  8B 4B 08                  MOV ECX,dword ptr [EBX + 0x8]
0051265E  83 C0 3D                  ADD EAX,0x3d
00512661  89 85 24 FF FF FF         MOV dword ptr [EBP + 0xffffff24],EAX
00512667  89 8D 64 FF FF FF         MOV dword ptr [EBP + 0xffffff64],ECX
0051266D  8B 4B 0C                  MOV ECX,dword ptr [EBX + 0xc]
00512670  8D 85 E4 FA FF FF         LEA EAX,[EBP + 0xfffffae4]
00512676  6A 00                     PUSH 0x0
00512678  50                        PUSH EAX
00512679  8D B3 9C 01 00 00         LEA ESI,[EBX + 0x19c]
0051267F  C7 85 28 FF FF FF 11 00 00 00  MOV dword ptr [EBP + 0xffffff28],0x11
00512689  C7 85 2C FF FF FF C9 00 00 00  MOV dword ptr [EBP + 0xffffff2c],0xc9
00512693  C7 85 30 FF FF FF 15 00 00 00  MOV dword ptr [EBP + 0xffffff30],0x15
0051269D  C7 85 68 FF FF FF 02 00 00 00  MOV dword ptr [EBP + 0xffffff68],0x2
005126A7  C7 85 6C FF FF FF 66 81 00 00  MOV dword ptr [EBP + 0xffffff6c],0x8166
005126B1  89 7D A4                  MOV dword ptr [EBP + -0x5c],EDI
005126B4  89 7D A8                  MOV dword ptr [EBP + -0x58],EDI
005126B7  8B 11                     MOV EDX,dword ptr [ECX]
005126B9  6A 00                     PUSH 0x0
005126BB  56                        PUSH ESI
005126BC  6A 07                     PUSH 0x7
005126BE  FF 52 08                  CALL dword ptr [EDX + 0x8]
005126C1  8B 36                     MOV ESI,dword ptr [ESI]
005126C3  85 F6                     TEST ESI,ESI
005126C5  74 18                     JZ 0x005126df
005126C7  8D 4B 18                  LEA ECX,[EBX + 0x18]
005126CA  C7 43 28 20 00 00 00      MOV dword ptr [EBX + 0x28],0x20
005126D1  51                        PUSH ECX
005126D2  56                        PUSH ESI
005126D3  6A 02                     PUSH 0x2
005126D5  8B CB                     MOV ECX,EBX
005126D7  89 7B 2C                  MOV dword ptr [EBX + 0x2c],EDI
005126DA  E8 A1 39 1D 00            CALL 0x006e6080
LAB_005126df:
005126DF  8B 55 B8                  MOV EDX,dword ptr [EBP + -0x48]
005126E2  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
005126E8  5F                        POP EDI
005126E9  5E                        POP ESI
005126EA  5B                        POP EBX
005126EB  8B E5                     MOV ESP,EBP
005126ED  5D                        POP EBP
005126EE  C3                        RET
LAB_005126ef:
005126EF  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
005126F2  68 B8 39 7C 00            PUSH 0x7c39b8
005126F7  68 CC 4C 7A 00            PUSH 0x7a4ccc
005126FC  56                        PUSH ESI
005126FD  57                        PUSH EDI
005126FE  68 A5 01 00 00            PUSH 0x1a5
00512703  68 3C 38 7C 00            PUSH 0x7c383c
00512708  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0051270D  E8 BE AD 19 00            CALL 0x006ad4d0
00512712  83 C4 18                  ADD ESP,0x18
00512715  85 C0                     TEST EAX,EAX
00512717  74 01                     JZ 0x0051271a
00512719  CC                        INT3
LAB_0051271a:
0051271A  68 A5 01 00 00            PUSH 0x1a5
0051271F  68 3C 38 7C 00            PUSH 0x7c383c
00512724  57                        PUSH EDI
00512725  56                        PUSH ESI
00512726  E8 15 37 19 00            CALL 0x006a5e40
0051272B  5F                        POP EDI
0051272C  5E                        POP ESI
0051272D  5B                        POP EBX
0051272E  8B E5                     MOV ESP,EBP
00512730  5D                        POP EBP
00512731  C3                        RET
