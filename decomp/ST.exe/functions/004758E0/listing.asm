FUN_004758e0:
004758E0  55                        PUSH EBP
004758E1  8B EC                     MOV EBP,ESP
004758E3  83 EC 2C                  SUB ESP,0x2c
004758E6  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004758E9  53                        PUSH EBX
004758EA  56                        PUSH ESI
004758EB  33 F6                     XOR ESI,ESI
004758ED  3B C6                     CMP EAX,ESI
004758EF  57                        PUSH EDI
004758F0  8B D9                     MOV EBX,ECX
004758F2  0F 84 7D 05 00 00         JZ 0x00475e75
004758F8  83 F8 01                  CMP EAX,0x1
004758FB  0F 84 74 05 00 00         JZ 0x00475e75
00475901  8B 83 D6 05 00 00         MOV EAX,dword ptr [EBX + 0x5d6]
00475907  83 F8 05                  CMP EAX,0x5
0047590A  0F 85 DF 00 00 00         JNZ 0x004759ef
00475910  6A 02                     PUSH 0x2
00475912  E8 1D E2 F8 FF            CALL 0x00403b34
00475917  83 F8 FF                  CMP EAX,-0x1
0047591A  0F 84 A0 00 00 00         JZ 0x004759c0
00475920  3B C6                     CMP EAX,ESI
00475922  0F 84 84 00 00 00         JZ 0x004759ac
00475928  83 F8 03                  CMP EAX,0x3
0047592B  0F 85 81 00 00 00         JNZ 0x004759b2
00475931  66 8B 4B 5D               MOV CX,word ptr [EBX + 0x5d]
00475935  66 8B 53 5B               MOV DX,word ptr [EBX + 0x5b]
00475939  8D B3 D4 05 00 00         LEA ESI,[EBX + 0x5d4]
0047593F  8D BB D2 05 00 00         LEA EDI,[EBX + 0x5d2]
00475945  8D 83 D0 05 00 00         LEA EAX,[EBX + 0x5d0]
0047594B  56                        PUSH ESI
0047594C  57                        PUSH EDI
0047594D  50                        PUSH EAX
0047594E  66 8B 43 5F               MOV AX,word ptr [EBX + 0x5f]
00475952  6A 00                     PUSH 0x0
00475954  50                        PUSH EAX
00475955  66 8B 83 CE 05 00 00      MOV AX,word ptr [EBX + 0x5ce]
0047595C  51                        PUSH ECX
0047595D  66 8B 8B CC 05 00 00      MOV CX,word ptr [EBX + 0x5cc]
00475964  52                        PUSH EDX
00475965  66 8B 93 CA 05 00 00      MOV DX,word ptr [EBX + 0x5ca]
0047596C  50                        PUSH EAX
0047596D  51                        PUSH ECX
0047596E  52                        PUSH EDX
0047596F  8B CB                     MOV ECX,EBX
00475971  E8 92 EF F8 FF            CALL 0x00404908
00475976  85 C0                     TEST EAX,EAX
00475978  0F 84 DB 05 00 00         JZ 0x00475f59
0047597E  0F BF 06                  MOVSX EAX,word ptr [ESI]
00475981  0F BF 0F                  MOVSX ECX,word ptr [EDI]
00475984  0F BF 93 D0 05 00 00      MOVSX EDX,word ptr [EBX + 0x5d0]
0047598B  50                        PUSH EAX
0047598C  51                        PUSH ECX
0047598D  52                        PUSH EDX
0047598E  8B CB                     MOV ECX,EBX
00475990  E8 D6 F5 F8 FF            CALL 0x00404f6b
00475995  6A 00                     PUSH 0x0
00475997  8B CB                     MOV ECX,EBX
00475999  E8 96 E1 F8 FF            CALL 0x00403b34
0047599E  B8 02 00 00 00            MOV EAX,0x2
004759A3  5F                        POP EDI
004759A4  5E                        POP ESI
004759A5  5B                        POP EBX
004759A6  8B E5                     MOV ESP,EBP
004759A8  5D                        POP EBP
004759A9  C2 04 00                  RET 0x4
LAB_004759ac:
004759AC  89 B3 D6 05 00 00         MOV dword ptr [EBX + 0x5d6],ESI
LAB_004759b2:
004759B2  B8 02 00 00 00            MOV EAX,0x2
004759B7  5F                        POP EDI
004759B8  5E                        POP ESI
004759B9  5B                        POP EBX
004759BA  8B E5                     MOV ESP,EBP
004759BC  5D                        POP EBP
004759BD  C2 04 00                  RET 0x4
LAB_004759c0:
004759C0  68 A8 B0 7A 00            PUSH 0x7ab0a8
004759C5  68 CC 4C 7A 00            PUSH 0x7a4ccc
004759CA  56                        PUSH ESI
004759CB  56                        PUSH ESI
004759CC  68 79 30 00 00            PUSH 0x3079
004759D1  68 3C 9D 7A 00            PUSH 0x7a9d3c
004759D6  E8 F5 7A 23 00            CALL 0x006ad4d0
004759DB  83 C4 18                  ADD ESP,0x18
004759DE  85 C0                     TEST EAX,EAX
004759E0  74 01                     JZ 0x004759e3
004759E2  CC                        INT3
LAB_004759e3:
004759E3  83 C8 FF                  OR EAX,0xffffffff
004759E6  5F                        POP EDI
004759E7  5E                        POP ESI
004759E8  5B                        POP EBX
004759E9  8B E5                     MOV ESP,EBP
004759EB  5D                        POP EBP
004759EC  C2 04 00                  RET 0x4
LAB_004759ef:
004759EF  3B C6                     CMP EAX,ESI
004759F1  0F 85 CA 01 00 00         JNZ 0x00475bc1
004759F7  66 8B 4B 5D               MOV CX,word ptr [EBX + 0x5d]
004759FB  66 8B 53 5B               MOV DX,word ptr [EBX + 0x5b]
004759FF  8D B3 D4 05 00 00         LEA ESI,[EBX + 0x5d4]
00475A05  8D BB D2 05 00 00         LEA EDI,[EBX + 0x5d2]
00475A0B  8D 83 D0 05 00 00         LEA EAX,[EBX + 0x5d0]
00475A11  56                        PUSH ESI
00475A12  57                        PUSH EDI
00475A13  50                        PUSH EAX
00475A14  66 8B 43 5F               MOV AX,word ptr [EBX + 0x5f]
00475A18  50                        PUSH EAX
00475A19  51                        PUSH ECX
00475A1A  52                        PUSH EDX
00475A1B  8B CB                     MOV ECX,EBX
00475A1D  E8 49 E6 F8 FF            CALL 0x0040406b
00475A22  85 C0                     TEST EAX,EAX
00475A24  75 17                     JNZ 0x00475a3d
00475A26  8B 03                     MOV EAX,dword ptr [EBX]
00475A28  8B CB                     MOV ECX,EBX
00475A2A  FF 90 D8 00 00 00         CALL dword ptr [EAX + 0xd8]
00475A30  F7 D8                     NEG EAX
00475A32  1B C0                     SBB EAX,EAX
00475A34  5F                        POP EDI
00475A35  5E                        POP ESI
00475A36  5B                        POP EBX
00475A37  8B E5                     MOV ESP,EBP
00475A39  5D                        POP EBP
00475A3A  C2 04 00                  RET 0x4
LAB_00475a3d:
00475A3D  66 8B 06                  MOV AX,word ptr [ESI]
00475A40  66 8B 0F                  MOV CX,word ptr [EDI]
00475A43  66 69 C0 C8 00            IMUL AX,AX,0xc8
00475A48  66 69 C9 C9 00            IMUL CX,CX,0xc9
00475A4D  83 C0 64                  ADD EAX,0x64
00475A50  8B 13                     MOV EDX,dword ptr [EBX]
00475A52  50                        PUSH EAX
00475A53  66 8B 83 D0 05 00 00      MOV AX,word ptr [EBX + 0x5d0]
00475A5A  66 69 C0 C9 00            IMUL AX,AX,0xc9
00475A5F  83 C1 64                  ADD ECX,0x64
00475A62  83 C0 64                  ADD EAX,0x64
00475A65  51                        PUSH ECX
00475A66  66 8B 4B 45               MOV CX,word ptr [EBX + 0x45]
00475A6A  50                        PUSH EAX
00475A6B  66 8B 43 43               MOV AX,word ptr [EBX + 0x43]
00475A6F  51                        PUSH ECX
00475A70  66 8B 4B 41               MOV CX,word ptr [EBX + 0x41]
00475A74  50                        PUSH EAX
00475A75  51                        PUSH ECX
00475A76  8B CB                     MOV ECX,EBX
00475A78  FF 52 10                  CALL dword ptr [EDX + 0x10]
00475A7B  50                        PUSH EAX
00475A7C  8B CB                     MOV ECX,EBX
00475A7E  66 89 83 DA 05 00 00      MOV word ptr [EBX + 0x5da],AX
00475A85  E8 28 D6 F8 FF            CALL 0x004030b2
00475A8A  50                        PUSH EAX
00475A8B  8B CB                     MOV ECX,EBX
00475A8D  E8 6A C8 F8 FF            CALL 0x004022fc
00475A92  83 F8 FF                  CMP EAX,-0x1
00475A95  0F 84 F5 00 00 00         JZ 0x00475b90
00475A9B  85 C0                     TEST EAX,EAX
00475A9D  0F 85 D1 00 00 00         JNZ 0x00475b74
00475AA3  8B 83 CA 07 00 00         MOV EAX,dword ptr [EBX + 0x7ca]
00475AA9  8D 55 F8                  LEA EDX,[EBP + -0x8]
00475AAC  C7 83 D6 05 00 00 01 00 00 00  MOV dword ptr [EBX + 0x5d6],0x1
00475AB6  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
00475ABC  52                        PUSH EDX
00475ABD  50                        PUSH EAX
00475ABE  E8 0D 08 27 00            CALL 0x006e62d0
00475AC3  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00475AC6  8D 73 34                  LEA ESI,[EBX + 0x34]
00475AC9  8A 48 62                  MOV CL,byte ptr [EAX + 0x62]
00475ACC  8A 50 61                  MOV DL,byte ptr [EAX + 0x61]
00475ACF  88 4D 0B                  MOV byte ptr [EBP + 0xb],CL
00475AD2  8A 48 63                  MOV CL,byte ptr [EAX + 0x63]
00475AD5  88 4D FF                  MOV byte ptr [EBP + -0x1],CL
00475AD8  8D 78 34                  LEA EDI,[EAX + 0x34]
00475ADB  B9 17 00 00 00            MOV ECX,0x17
00475AE0  F3 A5                     MOVSD.REP ES:EDI,ESI
00475AE2  66 A5                     MOVSW ES:EDI,ESI
00475AE4  A4                        MOVSB ES:EDI,ESI
00475AE5  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00475AE8  88 50 61                  MOV byte ptr [EAX + 0x61],DL
00475AEB  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
00475AEE  8A 55 0B                  MOV DL,byte ptr [EBP + 0xb]
00475AF1  88 51 62                  MOV byte ptr [ECX + 0x62],DL
00475AF4  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00475AF7  8A 4D FF                  MOV CL,byte ptr [EBP + -0x1]
00475AFA  88 48 63                  MOV byte ptr [EAX + 0x63],CL
00475AFD  8B CB                     MOV ECX,EBX
00475AFF  E8 48 EB F8 FF            CALL 0x0040464c
00475B04  8B 53 18                  MOV EDX,dword ptr [EBX + 0x18]
00475B07  66 8B 43 5F               MOV AX,word ptr [EBX + 0x5f]
00475B0B  66 8B 4B 5D               MOV CX,word ptr [EBX + 0x5d]
00475B0F  52                        PUSH EDX
00475B10  66 8B 53 5B               MOV DX,word ptr [EBX + 0x5b]
00475B14  33 F6                     XOR ESI,ESI
00475B16  53                        PUSH EBX
00475B17  56                        PUSH ESI
00475B18  50                        PUSH EAX
00475B19  51                        PUSH ECX
00475B1A  8B 0D 84 B2 7F 00         MOV ECX,dword ptr [0x007fb284]
00475B20  52                        PUSH EDX
00475B21  E8 9B F3 F8 FF            CALL 0x00404ec1
00475B26  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
00475B29  8B 01                     MOV EAX,dword ptr [ECX]
00475B2B  FF 90 B8 00 00 00         CALL dword ptr [EAX + 0xb8]
00475B31  8B 4B 18                  MOV ECX,dword ptr [EBX + 0x18]
00475B34  66 8B 93 D4 05 00 00      MOV DX,word ptr [EBX + 0x5d4]
00475B3B  66 8B 83 D2 05 00 00      MOV AX,word ptr [EBX + 0x5d2]
00475B42  51                        PUSH ECX
00475B43  66 8B 8B D0 05 00 00      MOV CX,word ptr [EBX + 0x5d0]
00475B4A  53                        PUSH EBX
00475B4B  56                        PUSH ESI
00475B4C  52                        PUSH EDX
00475B4D  50                        PUSH EAX
00475B4E  51                        PUSH ECX
00475B4F  8B 0D 84 B2 7F 00         MOV ECX,dword ptr [0x007fb284]
00475B55  E8 CB B7 F8 FF            CALL 0x00401325
00475B5A  8B 93 0A 07 00 00         MOV EDX,dword ptr [EBX + 0x70a]
00475B60  8B CB                     MOV ECX,EBX
00475B62  52                        PUSH EDX
00475B63  E8 39 C8 F8 FF            CALL 0x004023a1
00475B68  89 B3 CA 07 00 00         MOV dword ptr [EBX + 0x7ca],ESI
00475B6E  89 B3 C6 07 00 00         MOV dword ptr [EBX + 0x7c6],ESI
LAB_00475b74:
00475B74  8B 03                     MOV EAX,dword ptr [EBX]
00475B76  8B CB                     MOV ECX,EBX
00475B78  FF 90 D8 00 00 00         CALL dword ptr [EAX + 0xd8]
00475B7E  F7 D8                     NEG EAX
00475B80  1B C0                     SBB EAX,EAX
00475B82  24 FD                     AND AL,0xfd
00475B84  83 C0 02                  ADD EAX,0x2
00475B87  5F                        POP EDI
00475B88  5E                        POP ESI
00475B89  5B                        POP EBX
00475B8A  8B E5                     MOV ESP,EBP
00475B8C  5D                        POP EBP
00475B8D  C2 04 00                  RET 0x4
LAB_00475b90:
00475B90  68 80 B0 7A 00            PUSH 0x7ab080
00475B95  68 CC 4C 7A 00            PUSH 0x7a4ccc
00475B9A  6A 00                     PUSH 0x0
00475B9C  6A 00                     PUSH 0x0
00475B9E  68 9B 30 00 00            PUSH 0x309b
00475BA3  68 3C 9D 7A 00            PUSH 0x7a9d3c
00475BA8  E8 23 79 23 00            CALL 0x006ad4d0
00475BAD  83 C4 18                  ADD ESP,0x18
00475BB0  85 C0                     TEST EAX,EAX
00475BB2  74 01                     JZ 0x00475bb5
00475BB4  CC                        INT3
LAB_00475bb5:
00475BB5  83 C8 FF                  OR EAX,0xffffffff
00475BB8  5F                        POP EDI
00475BB9  5E                        POP ESI
00475BBA  5B                        POP EBX
00475BBB  8B E5                     MOV ESP,EBP
00475BBD  5D                        POP EBP
00475BBE  C2 04 00                  RET 0x4
LAB_00475bc1:
00475BC1  83 F8 01                  CMP EAX,0x1
00475BC4  75 54                     JNZ 0x00475c1a
00475BC6  8A 4B 61                  MOV CL,byte ptr [EBX + 0x61]
00475BC9  66 8B 93 D4 05 00 00      MOV DX,word ptr [EBX + 0x5d4]
00475BD0  66 8B 83 D2 05 00 00      MOV AX,word ptr [EBX + 0x5d2]
00475BD7  51                        PUSH ECX
00475BD8  66 8B 8B D0 05 00 00      MOV CX,word ptr [EBX + 0x5d0]
00475BDF  66 69 D2 C8 00            IMUL DX,DX,0xc8
00475BE4  66 69 C0 C9 00            IMUL AX,AX,0xc9
00475BE9  66 69 C9 C9 00            IMUL CX,CX,0xc9
00475BEE  83 C2 64                  ADD EDX,0x64
00475BF1  83 C0 64                  ADD EAX,0x64
00475BF4  52                        PUSH EDX
00475BF5  66 8B 53 45               MOV DX,word ptr [EBX + 0x45]
00475BF9  83 C1 64                  ADD ECX,0x64
00475BFC  50                        PUSH EAX
00475BFD  66 8B 43 43               MOV AX,word ptr [EBX + 0x43]
00475C01  51                        PUSH ECX
00475C02  66 8B 4B 41               MOV CX,word ptr [EBX + 0x41]
00475C06  52                        PUSH EDX
00475C07  50                        PUSH EAX
00475C08  51                        PUSH ECX
00475C09  8B CB                     MOV ECX,EBX
00475C0B  E8 45 C8 F8 FF            CALL 0x00402455
00475C10  C7 83 D6 05 00 00 02 00 00 00  MOV dword ptr [EBX + 0x5d6],0x2
LAB_00475c1a:
00475C1A  83 BB D6 05 00 00 02      CMP dword ptr [EBX + 0x5d6],0x2
00475C21  0F 85 32 02 00 00         JNZ 0x00475e59
00475C27  8D 55 F0                  LEA EDX,[EBP + -0x10]
00475C2A  8D 45 EC                  LEA EAX,[EBP + -0x14]
00475C2D  52                        PUSH EDX
00475C2E  50                        PUSH EAX
00475C2F  8B CB                     MOV ECX,EBX
00475C31  E8 11 CC F8 FF            CALL 0x00402847
00475C36  8A 8B BF 02 00 00         MOV CL,byte ptr [EBX + 0x2bf]
00475C3C  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
00475C3F  84 C9                     TEST CL,CL
00475C41  89 75 F4                  MOV dword ptr [EBP + -0xc],ESI
00475C44  0F 86 AC 01 00 00         JBE 0x00475df6
00475C4A  8D 8B B3 02 00 00         LEA ECX,[EBX + 0x2b3]
00475C50  89 4D 08                  MOV dword ptr [EBP + 0x8],ECX
LAB_00475c53:
00475C53  66 8B 53 6C               MOV DX,word ptr [EBX + 0x6c]
00475C57  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00475C5A  52                        PUSH EDX
00475C5B  8B 10                     MOV EDX,dword ptr [EAX]
00475C5D  83 EC 08                  SUB ESP,0x8
00475C60  8B CC                     MOV ECX,ESP
00475C62  66 8B 40 04               MOV AX,word ptr [EAX + 0x4]
00475C66  89 11                     MOV dword ptr [ECX],EDX
00475C68  66 89 41 04               MOV word ptr [ECX + 0x4],AX
00475C6C  8D 4D D4                  LEA ECX,[EBP + -0x2c]
00475C6F  51                        PUSH ECX
00475C70  8B CB                     MOV ECX,EBX
00475C72  E8 B5 D7 F8 FF            CALL 0x0040342c
00475C77  8B 10                     MOV EDX,dword ptr [EAX]
00475C79  89 55 DC                  MOV dword ptr [EBP + -0x24],EDX
00475C7C  66 8B 40 04               MOV AX,word ptr [EAX + 0x4]
00475C80  66 89 45 E0               MOV word ptr [EBP + -0x20],AX
00475C84  A1 2C 73 80 00            MOV EAX,[0x0080732c]
00475C89  83 F8 01                  CMP EAX,0x1
00475C8C  0F 85 98 00 00 00         JNZ 0x00475d2a
00475C92  8B 4B 1C                  MOV ECX,dword ptr [EBX + 0x1c]
00475C95  6A 00                     PUSH 0x0
00475C97  69 C9 6D 4E C6 41         IMUL ECX,ECX,0x41c64e6d
00475C9D  6A 00                     PUSH 0x0
00475C9F  6A FF                     PUSH -0x1
00475CA1  8D B1 39 30 00 00         LEA ESI,[ECX + 0x3039]
00475CA7  6A 00                     PUSH 0x0
00475CA9  8B D6                     MOV EDX,ESI
00475CAB  89 73 1C                  MOV dword ptr [EBX + 0x1c],ESI
00475CAE  69 D2 6D 4E C6 41         IMUL EDX,EDX,0x41c64e6d
00475CB4  6A 00                     PUSH 0x0
00475CB6  6A 00                     PUSH 0x0
00475CB8  8D BA 39 30 00 00         LEA EDI,[EDX + 0x3039]
00475CBE  6A 00                     PUSH 0x0
00475CC0  8B C7                     MOV EAX,EDI
00475CC2  89 7B 1C                  MOV dword ptr [EBX + 0x1c],EDI
00475CC5  69 C0 6D 4E C6 41         IMUL EAX,EAX,0x41c64e6d
00475CCB  05 39 30 00 00            ADD EAX,0x3039
00475CD0  6A 00                     PUSH 0x0
00475CD2  89 43 1C                  MOV dword ptr [EBX + 0x1c],EAX
00475CD5  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
00475CD8  D9 43 70                  FLD float ptr [EBX + 0x70]
00475CDB  D8 0D 04 07 79 00         FMUL float ptr [0x00790704]
00475CE1  6A 00                     PUSH 0x0
00475CE3  E8 A0 85 2B 00            CALL 0x0072e288
00475CE8  0F BF C8                  MOVSX ECX,AX
00475CEB  8B C6                     MOV EAX,ESI
00475CED  33 D2                     XOR EDX,EDX
00475CEF  C1 E8 10                  SHR EAX,0x10
00475CF2  BE 07 00 00 00            MOV ESI,0x7
00475CF7  F7 F6                     DIV ESI
00475CF9  0F BF 45 E0               MOVSX EAX,word ptr [EBP + -0x20]
00475CFD  03 CA                     ADD ECX,EDX
00475CFF  0F BF 53 45               MOVSX EDX,word ptr [EBX + 0x45]
00475D03  03 CA                     ADD ECX,EDX
00475D05  33 D2                     XOR EDX,EDX
00475D07  8D 4C 01 FD               LEA ECX,[ECX + EAX*0x1 + -0x3]
00475D0B  8B C7                     MOV EAX,EDI
00475D0D  51                        PUSH ECX
00475D0E  8B CE                     MOV ECX,ESI
00475D10  C1 E8 10                  SHR EAX,0x10
00475D13  F7 F1                     DIV ECX
00475D15  0F BF 43 43               MOVSX EAX,word ptr [EBX + 0x43]
00475D19  0F BF 4D DE               MOVSX ECX,word ptr [EBP + -0x22]
00475D1D  03 D0                     ADD EDX,EAX
00475D1F  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
00475D22  2B D1                     SUB EDX,ECX
00475D24  83 EA 03                  SUB EDX,0x3
00475D27  52                        PUSH EDX
00475D28  EB 7D                     JMP 0x00475da7
LAB_00475d2a:
00475D2A  8B 43 1C                  MOV EAX,dword ptr [EBX + 0x1c]
00475D2D  BE 07 00 00 00            MOV ESI,0x7
00475D32  69 C0 6D 4E C6 41         IMUL EAX,EAX,0x41c64e6d
00475D38  05 39 30 00 00            ADD EAX,0x3039
00475D3D  6A 00                     PUSH 0x0
00475D3F  8B C8                     MOV ECX,EAX
00475D41  89 43 1C                  MOV dword ptr [EBX + 0x1c],EAX
00475D44  69 C9 6D 4E C6 41         IMUL ECX,ECX,0x41c64e6d
00475D4A  81 C1 39 30 00 00         ADD ECX,0x3039
00475D50  6A 00                     PUSH 0x0
00475D52  8B D1                     MOV EDX,ECX
00475D54  89 4B 1C                  MOV dword ptr [EBX + 0x1c],ECX
00475D57  69 D2 6D 4E C6 41         IMUL EDX,EDX,0x41c64e6d
00475D5D  C1 E8 10                  SHR EAX,0x10
00475D60  8D BA 39 30 00 00         LEA EDI,[EDX + 0x3039]
00475D66  33 D2                     XOR EDX,EDX
00475D68  F7 F6                     DIV ESI
00475D6A  89 7B 1C                  MOV dword ptr [EBX + 0x1c],EDI
00475D6D  6A FF                     PUSH -0x1
00475D6F  0F BF 43 45               MOVSX EAX,word ptr [EBX + 0x45]
00475D73  6A 00                     PUSH 0x0
00475D75  6A 00                     PUSH 0x0
00475D77  6A 00                     PUSH 0x0
00475D79  6A 00                     PUSH 0x0
00475D7B  6A 00                     PUSH 0x0
00475D7D  6A 00                     PUSH 0x0
00475D7F  03 D0                     ADD EDX,EAX
00475D81  0F BF 45 E0               MOVSX EAX,word ptr [EBP + -0x20]
00475D85  8D 54 02 FD               LEA EDX,[EDX + EAX*0x1 + -0x3]
00475D89  8B C1                     MOV EAX,ECX
00475D8B  52                        PUSH EDX
00475D8C  33 D2                     XOR EDX,EDX
00475D8E  C1 E8 10                  SHR EAX,0x10
00475D91  8B CE                     MOV ECX,ESI
00475D93  F7 F1                     DIV ECX
00475D95  0F BF 43 43               MOVSX EAX,word ptr [EBX + 0x43]
00475D99  0F BF 4D DE               MOVSX ECX,word ptr [EBP + -0x22]
00475D9D  03 D0                     ADD EDX,EAX
00475D9F  8B C7                     MOV EAX,EDI
00475DA1  2B D1                     SUB EDX,ECX
00475DA3  83 EA 03                  SUB EDX,0x3
00475DA6  52                        PUSH EDX
LAB_00475da7:
00475DA7  C1 E8 10                  SHR EAX,0x10
00475DAA  33 D2                     XOR EDX,EDX
00475DAC  B9 07 00 00 00            MOV ECX,0x7
00475DB1  F7 F1                     DIV ECX
00475DB3  0F BF 43 41               MOVSX EAX,word ptr [EBX + 0x41]
00475DB7  0F BF 4D DC               MOVSX ECX,word ptr [EBP + -0x24]
00475DBB  03 D0                     ADD EDX,EAX
00475DBD  8D 54 0A FD               LEA EDX,[EDX + ECX*0x1 + -0x3]
00475DC1  8B 0D 7C 2A 80 00         MOV ECX,dword ptr [0x00802a7c]
00475DC7  52                        PUSH EDX
00475DC8  6A 07                     PUSH 0x7
00475DCA  6A 02                     PUSH 0x2
00475DCC  6A 01                     PUSH 0x1
00475DCE  E8 60 B6 F8 FF            CALL 0x00401433
00475DD3  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
00475DD6  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
00475DD9  33 C9                     XOR ECX,ECX
00475DDB  40                        INC EAX
00475DDC  8A 8B BF 02 00 00         MOV CL,byte ptr [EBX + 0x2bf]
00475DE2  83 C6 06                  ADD ESI,0x6
00475DE5  3B C1                     CMP EAX,ECX
00475DE7  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
00475DEA  89 75 08                  MOV dword ptr [EBP + 0x8],ESI
00475DED  0F 8C 60 FE FF FF         JL 0x00475c53
00475DF3  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
LAB_00475df6:
00475DF6  83 F8 FF                  CMP EAX,-0x1
00475DF9  74 2D                     JZ 0x00475e28
00475DFB  85 C0                     TEST EAX,EAX
00475DFD  75 5A                     JNZ 0x00475e59
00475DFF  8B 93 ED 01 00 00         MOV EDX,dword ptr [EBX + 0x1ed]
00475E05  8B 8B 11 02 00 00         MOV ECX,dword ptr [EBX + 0x211]
00475E0B  52                        PUSH EDX
00475E0C  E8 DF 44 27 00            CALL 0x006ea2f0
00475E11  8B 03                     MOV EAX,dword ptr [EBX]
00475E13  8B CB                     MOV ECX,EBX
00475E15  FF 90 D8 00 00 00         CALL dword ptr [EAX + 0xd8]
00475E1B  F7 D8                     NEG EAX
00475E1D  1B C0                     SBB EAX,EAX
00475E1F  5F                        POP EDI
00475E20  5E                        POP ESI
00475E21  5B                        POP EBX
00475E22  8B E5                     MOV ESP,EBP
00475E24  5D                        POP EBP
00475E25  C2 04 00                  RET 0x4
LAB_00475e28:
00475E28  68 5C B0 7A 00            PUSH 0x7ab05c
00475E2D  68 CC 4C 7A 00            PUSH 0x7a4ccc
00475E32  6A 00                     PUSH 0x0
00475E34  6A 00                     PUSH 0x0
00475E36  68 D2 30 00 00            PUSH 0x30d2
00475E3B  68 3C 9D 7A 00            PUSH 0x7a9d3c
00475E40  E8 8B 76 23 00            CALL 0x006ad4d0
00475E45  83 C4 18                  ADD ESP,0x18
00475E48  85 C0                     TEST EAX,EAX
00475E4A  74 01                     JZ 0x00475e4d
00475E4C  CC                        INT3
LAB_00475e4d:
00475E4D  83 C8 FF                  OR EAX,0xffffffff
00475E50  5F                        POP EDI
00475E51  5E                        POP ESI
00475E52  5B                        POP EBX
00475E53  8B E5                     MOV ESP,EBP
00475E55  5D                        POP EBP
00475E56  C2 04 00                  RET 0x4
LAB_00475e59:
00475E59  8B 13                     MOV EDX,dword ptr [EBX]
00475E5B  8B CB                     MOV ECX,EBX
00475E5D  FF 92 D8 00 00 00         CALL dword ptr [EDX + 0xd8]
00475E63  F7 D8                     NEG EAX
00475E65  1B C0                     SBB EAX,EAX
00475E67  24 FD                     AND AL,0xfd
00475E69  83 C0 02                  ADD EAX,0x2
00475E6C  5F                        POP EDI
00475E6D  5E                        POP ESI
00475E6E  5B                        POP EBX
00475E6F  8B E5                     MOV ESP,EBP
00475E71  5D                        POP EBP
00475E72  C2 04 00                  RET 0x4
LAB_00475e75:
00475E75  B9 17 00 00 00            MOV ECX,0x17
00475E7A  33 C0                     XOR EAX,EAX
00475E7C  8D BB CC 02 00 00         LEA EDI,[EBX + 0x2cc]
00475E82  F3 AB                     STOSD.REP ES:EDI
00475E84  8B 83 CA 07 00 00         MOV EAX,dword ptr [EBX + 0x7ca]
00475E8A  89 B3 C4 02 00 00         MOV dword ptr [EBX + 0x2c4],ESI
00475E90  3B C6                     CMP EAX,ESI
00475E92  0F 84 C1 00 00 00         JZ 0x00475f59
00475E98  66 8B 83 CE 03 00 00      MOV AX,word ptr [EBX + 0x3ce]
00475E9F  66 8B 8B D0 03 00 00      MOV CX,word ptr [EBX + 0x3d0]
00475EA6  66 8B 93 D2 03 00 00      MOV DX,word ptr [EBX + 0x3d2]
00475EAD  66 3D FF FF               CMP AX,0xffff
00475EB1  66 89 83 CA 05 00 00      MOV word ptr [EBX + 0x5ca],AX
00475EB8  66 89 8B CC 05 00 00      MOV word ptr [EBX + 0x5cc],CX
00475EBF  66 89 93 CE 05 00 00      MOV word ptr [EBX + 0x5ce],DX
00475EC6  75 1E                     JNZ 0x00475ee6
00475EC8  66 3B C8                  CMP CX,AX
00475ECB  75 19                     JNZ 0x00475ee6
00475ECD  66 3B D0                  CMP DX,AX
00475ED0  75 14                     JNZ 0x00475ee6
00475ED2  89 B3 D6 05 00 00         MOV dword ptr [EBX + 0x5d6],ESI
00475ED8  B8 02 00 00 00            MOV EAX,0x2
00475EDD  5F                        POP EDI
00475EDE  5E                        POP ESI
00475EDF  5B                        POP EBX
00475EE0  8B E5                     MOV ESP,EBP
00475EE2  5D                        POP EBP
00475EE3  C2 04 00                  RET 0x4
LAB_00475ee6:
00475EE6  8D B3 D4 05 00 00         LEA ESI,[EBX + 0x5d4]
00475EEC  8D BB D2 05 00 00         LEA EDI,[EBX + 0x5d2]
00475EF2  8D 93 D0 05 00 00         LEA EDX,[EBX + 0x5d0]
00475EF8  56                        PUSH ESI
00475EF9  57                        PUSH EDI
00475EFA  52                        PUSH EDX
00475EFB  66 8B 53 5F               MOV DX,word ptr [EBX + 0x5f]
00475EFF  6A 00                     PUSH 0x0
00475F01  52                        PUSH EDX
00475F02  66 8B 53 5D               MOV DX,word ptr [EBX + 0x5d]
00475F06  52                        PUSH EDX
00475F07  66 8B 53 5B               MOV DX,word ptr [EBX + 0x5b]
00475F0B  52                        PUSH EDX
00475F0C  66 8B 93 D2 03 00 00      MOV DX,word ptr [EBX + 0x3d2]
00475F13  52                        PUSH EDX
00475F14  51                        PUSH ECX
00475F15  50                        PUSH EAX
00475F16  8B CB                     MOV ECX,EBX
00475F18  E8 EB E9 F8 FF            CALL 0x00404908
00475F1D  85 C0                     TEST EAX,EAX
00475F1F  74 38                     JZ 0x00475f59
00475F21  0F BF 06                  MOVSX EAX,word ptr [ESI]
00475F24  0F BF 0F                  MOVSX ECX,word ptr [EDI]
00475F27  0F BF 93 D0 05 00 00      MOVSX EDX,word ptr [EBX + 0x5d0]
00475F2E  50                        PUSH EAX
00475F2F  51                        PUSH ECX
00475F30  52                        PUSH EDX
00475F31  8B CB                     MOV ECX,EBX
00475F33  C7 83 D6 05 00 00 05 00 00 00  MOV dword ptr [EBX + 0x5d6],0x5
00475F3D  E8 29 F0 F8 FF            CALL 0x00404f6b
00475F42  6A 00                     PUSH 0x0
00475F44  8B CB                     MOV ECX,EBX
00475F46  E8 E9 DB F8 FF            CALL 0x00403b34
00475F4B  B8 02 00 00 00            MOV EAX,0x2
00475F50  5F                        POP EDI
00475F51  5E                        POP ESI
00475F52  5B                        POP EBX
00475F53  8B E5                     MOV ESP,EBP
00475F55  5D                        POP EBP
00475F56  C2 04 00                  RET 0x4
LAB_00475f59:
00475F59  5F                        POP EDI
00475F5A  5E                        POP ESI
00475F5B  33 C0                     XOR EAX,EAX
00475F5D  5B                        POP EBX
00475F5E  8B E5                     MOV ESP,EBP
00475F60  5D                        POP EBP
00475F61  C2 04 00                  RET 0x4
