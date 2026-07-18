FUN_007158a0:
007158A0  55                        PUSH EBP
007158A1  8B EC                     MOV EBP,ESP
007158A3  83 EC 48                  SUB ESP,0x48
007158A6  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
007158AB  53                        PUSH EBX
007158AC  56                        PUSH ESI
007158AD  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
007158B0  57                        PUSH EDI
007158B1  8D 55 BC                  LEA EDX,[EBP + -0x44]
007158B4  8D 4D B8                  LEA ECX,[EBP + -0x48]
007158B7  6A 00                     PUSH 0x0
007158B9  52                        PUSH EDX
007158BA  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
007158BD  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
007158C3  E8 28 7F 01 00            CALL 0x0072d7f0
007158C8  8B F0                     MOV ESI,EAX
007158CA  83 C4 08                  ADD ESP,0x8
007158CD  85 F6                     TEST ESI,ESI
007158CF  0F 85 F5 00 00 00         JNZ 0x007159ca
007158D5  8B 5D 10                  MOV EBX,dword ptr [EBP + 0x10]
007158D8  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
007158DB  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
007158DE  8B C3                     MOV EAX,EBX
007158E0  25 FF 00 00 00            AND EAX,0xff
007158E5  83 C0 F9                  ADD EAX,-0x7
007158E8  83 F8 7A                  CMP EAX,0x7a
007158EB  0F 87 B1 00 00 00         JA 0x007159a2
007158F1  33 C9                     XOR ECX,ECX
007158F3  8A 88 28 5A 71 00         MOV CL,byte ptr [EAX + 0x715a28]
switchD_007158f9::switchD:
007158F9  FF 24 8D 14 5A 71 00      JMP dword ptr [ECX*0x4 + 0x715a14]
switchD_007158f9::caseD_7:
00715900  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
00715903  6A 00                     PUSH 0x0
00715905  6A FF                     PUSH -0x1
00715907  6A FF                     PUSH -0x1
00715909  68 00 00 00 08            PUSH 0x8000000
0071590E  6A 00                     PUSH 0x0
00715910  6A 00                     PUSH 0x0
00715912  8D 46 04                  LEA EAX,[ESI + 0x4]
00715915  52                        PUSH EDX
00715916  50                        PUSH EAX
00715917  57                        PUSH EDI
00715918  E8 C3 C8 F9 FF            CALL 0x006b21e0
0071591D  E9 80 00 00 00            JMP 0x007159a2
switchD_007158f9::caseD_8:
00715922  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00715925  6A FF                     PUSH -0x1
00715927  6A FF                     PUSH -0x1
00715929  6A 00                     PUSH 0x0
0071592B  6A 00                     PUSH 0x0
0071592D  6A 00                     PUSH 0x0
0071592F  8D 56 04                  LEA EDX,[ESI + 0x4]
00715932  51                        PUSH ECX
00715933  52                        PUSH EDX
00715934  57                        PUSH EDI
00715935  E8 E6 C8 F9 FF            CALL 0x006b2220
0071593A  EB 66                     JMP 0x007159a2
switchD_007158f9::caseD_81:
0071593C  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
0071593F  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
00715942  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
00715945  50                        PUSH EAX
00715946  51                        PUSH ECX
00715947  8D 46 04                  LEA EAX,[ESI + 0x4]
0071594A  52                        PUSH EDX
0071594B  50                        PUSH EAX
0071594C  57                        PUSH EDI
0071594D  E8 4E 53 01 00            CALL 0x0072aca0
00715952  EB 4E                     JMP 0x007159a2
switchD_007158f9::caseD_80:
00715954  8D 46 2C                  LEA EAX,[ESI + 0x2c]
00715957  33 C9                     XOR ECX,ECX
00715959  8B D0                     MOV EDX,EAX
0071595B  89 0A                     MOV dword ptr [EDX],ECX
0071595D  89 4A 04                  MOV dword ptr [EDX + 0x4],ECX
00715960  89 4A 08                  MOV dword ptr [EDX + 0x8],ECX
00715963  89 4A 0C                  MOV dword ptr [EDX + 0xc],ECX
00715966  89 4A 10                  MOV dword ptr [EDX + 0x10],ECX
00715969  B9 01 00 00 00            MOV ECX,0x1
0071596E  89 4E 24                  MOV dword ptr [ESI + 0x24],ECX
00715971  89 4E 28                  MOV dword ptr [ESI + 0x28],ECX
00715974  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
00715977  85 C9                     TEST ECX,ECX
00715979  74 0B                     JZ 0x00715986
0071597B  8B 11                     MOV EDX,dword ptr [ECX]
0071597D  89 56 24                  MOV dword ptr [ESI + 0x24],EDX
00715980  8B 49 04                  MOV ECX,dword ptr [ECX + 0x4]
00715983  89 4E 28                  MOV dword ptr [ESI + 0x28],ECX
LAB_00715986:
00715986  8B 56 28                  MOV EDX,dword ptr [ESI + 0x28]
00715989  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0071598C  50                        PUSH EAX
0071598D  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
00715990  52                        PUSH EDX
00715991  50                        PUSH EAX
00715992  68 10 2E 75 00            PUSH 0x752e10
00715997  8D 56 04                  LEA EDX,[ESI + 0x4]
0071599A  51                        PUSH ECX
0071599B  52                        PUSH EDX
0071599C  57                        PUSH EDI
0071599D  E8 8E C9 F9 FF            CALL 0x006b2330
switchD_007158f9::caseD_9:
007159A2  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
007159A5  88 5E 4C                  MOV byte ptr [ESI + 0x4c],BL
007159A8  80 EB 81                  SUB BL,0x81
007159AB  89 7E 48                  MOV dword ptr [ESI + 0x48],EDI
007159AE  F6 DB                     NEG BL
007159B0  1B DB                     SBB EBX,EBX
007159B2  23 D8                     AND EBX,EAX
007159B4  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
007159B7  89 5E 5D                  MOV dword ptr [ESI + 0x5d],EBX
007159BA  A3 F8 8D 85 00            MOV [0x00858df8],EAX
007159BF  33 C0                     XOR EAX,EAX
007159C1  5F                        POP EDI
007159C2  5E                        POP ESI
007159C3  5B                        POP EBX
007159C4  8B E5                     MOV ESP,EBP
007159C6  5D                        POP EBP
007159C7  C2 18 00                  RET 0x18
LAB_007159ca:
007159CA  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
007159CD  68 6C 04 7F 00            PUSH 0x7f046c
007159D2  68 CC 4C 7A 00            PUSH 0x7a4ccc
007159D7  56                        PUSH ESI
007159D8  6A 00                     PUSH 0x0
007159DA  6A 50                     PUSH 0x50
007159DC  68 54 04 7F 00            PUSH 0x7f0454
007159E1  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
007159E7  E8 E4 7A F9 FF            CALL 0x006ad4d0
007159EC  83 C4 18                  ADD ESP,0x18
007159EF  85 C0                     TEST EAX,EAX
007159F1  74 01                     JZ 0x007159f4
007159F3  CC                        INT3
LAB_007159f4:
007159F4  6A 52                     PUSH 0x52
007159F6  68 54 04 7F 00            PUSH 0x7f0454
007159FB  6A 00                     PUSH 0x0
007159FD  56                        PUSH ESI
007159FE  E8 3D 04 F9 FF            CALL 0x006a5e40
00715A03  5F                        POP EDI
00715A04  5E                        POP ESI
00715A05  B8 18 FC FF FF            MOV EAX,0xfffffc18
00715A0A  5B                        POP EBX
00715A0B  8B E5                     MOV ESP,EBP
00715A0D  5D                        POP EBP
00715A0E  C2 18 00                  RET 0x18
