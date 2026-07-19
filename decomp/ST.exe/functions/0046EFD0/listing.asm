STBoatC::BackUnLoadRC:
0046EFD0  55                        PUSH EBP
0046EFD1  8B EC                     MOV EBP,ESP
0046EFD3  51                        PUSH ECX
0046EFD4  56                        PUSH ESI
0046EFD5  8B F1                     MOV ESI,ECX
0046EFD7  57                        PUSH EDI
0046EFD8  8B 86 4C 05 00 00         MOV EAX,dword ptr [ESI + 0x54c]
0046EFDE  C7 86 B7 00 00 00 00 00 00 00  MOV dword ptr [ESI + 0xb7],0x0
0046EFE8  83 F8 07                  CMP EAX,0x7
0046EFEB  0F 87 44 04 00 00         JA 0x0046f435
switchD_0046eff1::switchD:
0046EFF1  FF 24 85 68 F4 46 00      JMP dword ptr [EAX*0x4 + 0x46f468]
switchD_0046eff1::caseD_0:
0046EFF8  8B 86 44 05 00 00         MOV EAX,dword ptr [ESI + 0x544]
0046EFFE  85 C0                     TEST EAX,EAX
0046F000  75 22                     JNZ 0x0046f024
switchD_0046eff1::caseD_7:
0046F002  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0046F005  8B CE                     MOV ECX,ESI
0046F007  50                        PUSH EAX
0046F008  E8 E3 4D F9 FF            CALL 0x00403df0
LAB_0046f00d:
0046F00D  8B F8                     MOV EDI,EAX
0046F00F  85 FF                     TEST EDI,EDI
0046F011  75 07                     JNZ 0x0046f01a
0046F013  8B CE                     MOV ECX,ESI
0046F015  E8 F1 4B F9 FF            CALL 0x00403c0b
LAB_0046f01a:
0046F01A  8B C7                     MOV EAX,EDI
0046F01C  5F                        POP EDI
0046F01D  5E                        POP ESI
0046F01E  8B E5                     MOV ESP,EBP
0046F020  5D                        POP EBP
0046F021  C2 04 00                  RET 0x4
LAB_0046f024:
0046F024  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0046F027  51                        PUSH ECX
0046F028  8B CE                     MOV ECX,ESI
0046F02A  E8 0B 59 F9 FF            CALL 0x0040493a
0046F02F  5F                        POP EDI
0046F030  5E                        POP ESI
0046F031  8B E5                     MOV ESP,EBP
0046F033  5D                        POP EBP
0046F034  C2 04 00                  RET 0x4
switchD_0046eff1::caseD_2:
0046F037  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0046F03A  8B CE                     MOV ECX,ESI
0046F03C  52                        PUSH EDX
0046F03D  E8 F8 58 F9 FF            CALL 0x0040493a
0046F042  EB C9                     JMP 0x0046f00d
switchD_0046eff1::caseD_4:
0046F044  8B 86 50 05 00 00         MOV EAX,dword ptr [ESI + 0x550]
0046F04A  85 C0                     TEST EAX,EAX
0046F04C  0F 84 FD 01 00 00         JZ 0x0046f24f
0046F052  83 F8 01                  CMP EAX,0x1
0046F055  0F 84 F4 01 00 00         JZ 0x0046f24f
0046F05B  83 F8 02                  CMP EAX,0x2
0046F05E  0F 84 EB 01 00 00         JZ 0x0046f24f
0046F064  83 F8 03                  CMP EAX,0x3
0046F067  75 57                     JNZ 0x0046f0c0
0046F069  66 8B 86 40 05 00 00      MOV AX,word ptr [ESI + 0x540]
0046F070  66 8B 8E 3E 05 00 00      MOV CX,word ptr [ESI + 0x53e]
0046F077  66 69 C0 C8 00            IMUL AX,AX,0xc8
0046F07C  66 69 C9 C9 00            IMUL CX,CX,0xc9
0046F081  83 C0 64                  ADD EAX,0x64
0046F084  8B 16                     MOV EDX,dword ptr [ESI]
0046F086  50                        PUSH EAX
0046F087  66 8B 86 3C 05 00 00      MOV AX,word ptr [ESI + 0x53c]
0046F08E  66 69 C0 C9 00            IMUL AX,AX,0xc9
0046F093  83 C1 64                  ADD ECX,0x64
0046F096  83 C0 64                  ADD EAX,0x64
0046F099  51                        PUSH ECX
0046F09A  66 8B 4E 45               MOV CX,word ptr [ESI + 0x45]
0046F09E  50                        PUSH EAX
0046F09F  66 8B 46 43               MOV AX,word ptr [ESI + 0x43]
0046F0A3  51                        PUSH ECX
0046F0A4  66 8B 4E 41               MOV CX,word ptr [ESI + 0x41]
0046F0A8  50                        PUSH EAX
0046F0A9  51                        PUSH ECX
0046F0AA  8B CE                     MOV ECX,ESI
0046F0AC  FF 52 10                  CALL dword ptr [EDX + 0x10]
0046F0AF  66 89 86 42 05 00 00      MOV word ptr [ESI + 0x542],AX
0046F0B6  C7 86 50 05 00 00 04 00 00 00  MOV dword ptr [ESI + 0x550],0x4
LAB_0046f0c0:
0046F0C0  8B 86 50 05 00 00         MOV EAX,dword ptr [ESI + 0x550]
0046F0C6  83 F8 04                  CMP EAX,0x4
0046F0C9  0F 85 92 00 00 00         JNZ 0x0046f161
0046F0CF  66 8B 96 42 05 00 00      MOV DX,word ptr [ESI + 0x542]
0046F0D6  8B CE                     MOV ECX,ESI
0046F0D8  52                        PUSH EDX
0046F0D9  E8 D4 3F F9 FF            CALL 0x004030b2
0046F0DE  50                        PUSH EAX
0046F0DF  8B CE                     MOV ECX,ESI
0046F0E1  E8 16 32 F9 FF            CALL 0x004022fc
0046F0E6  83 F8 FF                  CMP EAX,-0x1
0046F0E9  74 29                     JZ 0x0046f114
0046F0EB  85 C0                     TEST EAX,EAX
0046F0ED  75 0A                     JNZ 0x0046f0f9
0046F0EF  C7 86 50 05 00 00 05 00 00 00  MOV dword ptr [ESI + 0x550],0x5
STBoatC::BackUnLoadRC::cf_common_exit_0046F0F9:
0046F0F9  8B 06                     MOV EAX,dword ptr [ESI]
0046F0FB  8B CE                     MOV ECX,ESI
0046F0FD  FF 90 D8 00 00 00         CALL dword ptr [EAX + 0xd8]
0046F103  F7 D8                     NEG EAX
0046F105  1B C0                     SBB EAX,EAX
0046F107  5F                        POP EDI
0046F108  24 FD                     AND AL,0xfd
0046F10A  5E                        POP ESI
0046F10B  83 C0 02                  ADD EAX,0x2
0046F10E  8B E5                     MOV ESP,EBP
0046F110  5D                        POP EBP
0046F111  C2 04 00                  RET 0x4
LAB_0046f114:
0046F114  68 C0 AA 7A 00            PUSH 0x7aaac0
0046F119  68 CC 4C 7A 00            PUSH 0x7a4ccc
0046F11E  6A 00                     PUSH 0x0
0046F120  6A 00                     PUSH 0x0
0046F122  68 29 28 00 00            PUSH 0x2829
0046F127  68 3C 9D 7A 00            PUSH 0x7a9d3c
0046F12C  E8 9F E3 23 00            CALL 0x006ad4d0
0046F131  83 C4 18                  ADD ESP,0x18
0046F134  85 C0                     TEST EAX,EAX
0046F136  74 01                     JZ 0x0046f139
0046F138  CC                        INT3
LAB_0046f139:
0046F139  68 2A 28 00 00            PUSH 0x282a
STBoatC::BackUnLoadRC::cf_error_exit_0046F13E:
0046F13E  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
0046F144  68 3C 9D 7A 00            PUSH 0x7a9d3c
0046F149  51                        PUSH ECX
0046F14A  68 FF FF 00 00            PUSH 0xffff
0046F14F  E8 EC 6C 23 00            CALL 0x006a5e40
0046F154  5F                        POP EDI
0046F155  B8 FF FF 00 00            MOV EAX,0xffff
0046F15A  5E                        POP ESI
0046F15B  8B E5                     MOV ESP,EBP
0046F15D  5D                        POP EBP
0046F15E  C2 04 00                  RET 0x4
LAB_0046f161:
0046F161  83 F8 05                  CMP EAX,0x5
0046F164  BF 06 00 00 00            MOV EDI,0x6
0046F169  75 50                     JNZ 0x0046f1bb
0046F16B  8A 56 61                  MOV DL,byte ptr [ESI + 0x61]
0046F16E  66 8B 86 40 05 00 00      MOV AX,word ptr [ESI + 0x540]
0046F175  66 8B 8E 3E 05 00 00      MOV CX,word ptr [ESI + 0x53e]
0046F17C  52                        PUSH EDX
0046F17D  66 8B 96 3C 05 00 00      MOV DX,word ptr [ESI + 0x53c]
0046F184  66 69 C0 C8 00            IMUL AX,AX,0xc8
0046F189  66 69 C9 C9 00            IMUL CX,CX,0xc9
0046F18E  66 69 D2 C9 00            IMUL DX,DX,0xc9
0046F193  83 C0 64                  ADD EAX,0x64
0046F196  83 C1 64                  ADD ECX,0x64
0046F199  50                        PUSH EAX
0046F19A  66 8B 46 45               MOV AX,word ptr [ESI + 0x45]
0046F19E  83 C2 64                  ADD EDX,0x64
0046F1A1  51                        PUSH ECX
0046F1A2  66 8B 4E 43               MOV CX,word ptr [ESI + 0x43]
0046F1A6  52                        PUSH EDX
0046F1A7  66 8B 56 41               MOV DX,word ptr [ESI + 0x41]
0046F1AB  50                        PUSH EAX
0046F1AC  51                        PUSH ECX
0046F1AD  52                        PUSH EDX
0046F1AE  8B CE                     MOV ECX,ESI
0046F1B0  E8 A0 32 F9 FF            CALL 0x00402455
0046F1B5  89 BE 50 05 00 00         MOV dword ptr [ESI + 0x550],EDI
LAB_0046f1bb:
0046F1BB  39 BE 50 05 00 00         CMP dword ptr [ESI + 0x550],EDI
0046F1C1  75 7F                     JNZ 0x0046f242
0046F1C3  8D 45 08                  LEA EAX,[EBP + 0x8]
0046F1C6  8D 4D FC                  LEA ECX,[EBP + -0x4]
0046F1C9  50                        PUSH EAX
0046F1CA  51                        PUSH ECX
0046F1CB  8B CE                     MOV ECX,ESI
0046F1CD  E8 75 36 F9 FF            CALL 0x00402847
0046F1D2  83 F8 FF                  CMP EAX,-0x1
0046F1D5  74 3C                     JZ 0x0046f213
0046F1D7  85 C0                     TEST EAX,EAX
0046F1D9  74 1B                     JZ 0x0046f1f6
0046F1DB  8B 16                     MOV EDX,dword ptr [ESI]
0046F1DD  8B CE                     MOV ECX,ESI
0046F1DF  FF 92 D8 00 00 00         CALL dword ptr [EDX + 0xd8]
0046F1E5  F7 D8                     NEG EAX
0046F1E7  1B C0                     SBB EAX,EAX
0046F1E9  5F                        POP EDI
0046F1EA  24 FD                     AND AL,0xfd
0046F1EC  5E                        POP ESI
0046F1ED  83 C0 02                  ADD EAX,0x2
0046F1F0  8B E5                     MOV ESP,EBP
0046F1F2  5D                        POP EBP
0046F1F3  C2 04 00                  RET 0x4
LAB_0046f1f6:
0046F1F6  8B CE                     MOV ECX,ESI
0046F1F8  E8 0E 4A F9 FF            CALL 0x00403c0b
LAB_0046f1fd:
0046F1FD  8B 06                     MOV EAX,dword ptr [ESI]
0046F1FF  8B CE                     MOV ECX,ESI
0046F201  FF 90 D8 00 00 00         CALL dword ptr [EAX + 0xd8]
0046F207  F7 D8                     NEG EAX
0046F209  5F                        POP EDI
0046F20A  5E                        POP ESI
0046F20B  1B C0                     SBB EAX,EAX
0046F20D  8B E5                     MOV ESP,EBP
0046F20F  5D                        POP EBP
0046F210  C2 04 00                  RET 0x4
LAB_0046f213:
0046F213  68 8C AA 7A 00            PUSH 0x7aaa8c
0046F218  68 CC 4C 7A 00            PUSH 0x7a4ccc
0046F21D  6A 00                     PUSH 0x0
0046F21F  6A 00                     PUSH 0x0
0046F221  68 3D 28 00 00            PUSH 0x283d
0046F226  68 3C 9D 7A 00            PUSH 0x7a9d3c
0046F22B  E8 A0 E2 23 00            CALL 0x006ad4d0
0046F230  83 C4 18                  ADD ESP,0x18
0046F233  85 C0                     TEST EAX,EAX
0046F235  74 01                     JZ 0x0046f238
0046F237  CC                        INT3
LAB_0046f238:
0046F238  68 3E 28 00 00            PUSH 0x283e
0046F23D  E9 FC FE FF FF            JMP 0x0046f13e
LAB_0046f242:
0046F242  5F                        POP EDI
0046F243  B8 02 00 00 00            MOV EAX,0x2
0046F248  5E                        POP ESI
0046F249  8B E5                     MOV ESP,EBP
0046F24B  5D                        POP EBP
0046F24C  C2 04 00                  RET 0x4
LAB_0046f24f:
0046F24F  8B CE                     MOV ECX,ESI
0046F251  E8 B5 49 F9 FF            CALL 0x00403c0b
0046F256  8B 16                     MOV EDX,dword ptr [ESI]
0046F258  8B CE                     MOV ECX,ESI
0046F25A  FF 92 D8 00 00 00         CALL dword ptr [EDX + 0xd8]
0046F260  F7 D8                     NEG EAX
0046F262  5F                        POP EDI
0046F263  5E                        POP ESI
0046F264  1B C0                     SBB EAX,EAX
0046F266  8B E5                     MOV ESP,EBP
0046F268  5D                        POP EBP
0046F269  C2 04 00                  RET 0x4
switchD_0046eff1::caseD_5:
0046F26C  8B CE                     MOV ECX,ESI
0046F26E  E8 98 49 F9 FF            CALL 0x00403c0b
0046F273  8B 8E 48 05 00 00         MOV ECX,dword ptr [ESI + 0x548]
0046F279  41                        INC ECX
0046F27A  8B C1                     MOV EAX,ECX
0046F27C  89 8E 48 05 00 00         MOV dword ptr [ESI + 0x548],ECX
0046F282  83 F8 46                  CMP EAX,0x46
0046F285  0F 8E 6E FE FF FF         JLE 0x0046f0f9
0046F28B  C7 86 48 05 00 00 00 00 00 00  MOV dword ptr [ESI + 0x548],0x0
0046F295  C7 86 4C 05 00 00 06 00 00 00  MOV dword ptr [ESI + 0x54c],0x6
switchD_0046eff1::caseD_6:
0046F29F  8B 86 50 05 00 00         MOV EAX,dword ptr [ESI + 0x550]
0046F2A5  85 C0                     TEST EAX,EAX
0046F2A7  75 57                     JNZ 0x0046f300
0046F2A9  66 8B 86 40 05 00 00      MOV AX,word ptr [ESI + 0x540]
0046F2B0  66 8B 8E 3E 05 00 00      MOV CX,word ptr [ESI + 0x53e]
0046F2B7  66 69 C0 C8 00            IMUL AX,AX,0xc8
0046F2BC  66 69 C9 C9 00            IMUL CX,CX,0xc9
0046F2C1  83 C0 64                  ADD EAX,0x64
0046F2C4  8B 16                     MOV EDX,dword ptr [ESI]
0046F2C6  50                        PUSH EAX
0046F2C7  66 8B 86 3C 05 00 00      MOV AX,word ptr [ESI + 0x53c]
0046F2CE  66 69 C0 C9 00            IMUL AX,AX,0xc9
0046F2D3  83 C1 64                  ADD ECX,0x64
0046F2D6  83 C0 64                  ADD EAX,0x64
0046F2D9  51                        PUSH ECX
0046F2DA  66 8B 4E 45               MOV CX,word ptr [ESI + 0x45]
0046F2DE  50                        PUSH EAX
0046F2DF  66 8B 46 43               MOV AX,word ptr [ESI + 0x43]
0046F2E3  51                        PUSH ECX
0046F2E4  66 8B 4E 41               MOV CX,word ptr [ESI + 0x41]
0046F2E8  50                        PUSH EAX
0046F2E9  51                        PUSH ECX
0046F2EA  8B CE                     MOV ECX,ESI
0046F2EC  FF 52 10                  CALL dword ptr [EDX + 0x10]
0046F2EF  66 89 86 42 05 00 00      MOV word ptr [ESI + 0x542],AX
0046F2F6  C7 86 50 05 00 00 01 00 00 00  MOV dword ptr [ESI + 0x550],0x1
LAB_0046f300:
0046F300  8B 86 50 05 00 00         MOV EAX,dword ptr [ESI + 0x550]
0046F306  83 F8 01                  CMP EAX,0x1
0046F309  75 62                     JNZ 0x0046f36d
0046F30B  66 8B 96 42 05 00 00      MOV DX,word ptr [ESI + 0x542]
0046F312  8B CE                     MOV ECX,ESI
0046F314  52                        PUSH EDX
0046F315  E8 98 3D F9 FF            CALL 0x004030b2
0046F31A  50                        PUSH EAX
0046F31B  8B CE                     MOV ECX,ESI
0046F31D  E8 DA 2F F9 FF            CALL 0x004022fc
0046F322  83 F8 FF                  CMP EAX,-0x1
0046F325  74 17                     JZ 0x0046f33e
0046F327  85 C0                     TEST EAX,EAX
0046F329  0F 85 CA FD FF FF         JNZ 0x0046f0f9
0046F32F  C7 86 50 05 00 00 02 00 00 00  MOV dword ptr [ESI + 0x550],0x2
0046F339  E9 BB FD FF FF            JMP 0x0046f0f9
LAB_0046f33e:
0046F33E  68 5C AA 7A 00            PUSH 0x7aaa5c
0046F343  68 CC 4C 7A 00            PUSH 0x7a4ccc
0046F348  6A 00                     PUSH 0x0
0046F34A  6A 00                     PUSH 0x0
0046F34C  68 64 28 00 00            PUSH 0x2864
0046F351  68 3C 9D 7A 00            PUSH 0x7a9d3c
0046F356  E8 75 E1 23 00            CALL 0x006ad4d0
0046F35B  83 C4 18                  ADD ESP,0x18
0046F35E  85 C0                     TEST EAX,EAX
0046F360  74 01                     JZ 0x0046f363
0046F362  CC                        INT3
LAB_0046f363:
0046F363  68 65 28 00 00            PUSH 0x2865
0046F368  E9 D1 FD FF FF            JMP 0x0046f13e
LAB_0046f36d:
0046F36D  83 F8 02                  CMP EAX,0x2
0046F370  BF 03 00 00 00            MOV EDI,0x3
0046F375  75 50                     JNZ 0x0046f3c7
0046F377  8A 56 61                  MOV DL,byte ptr [ESI + 0x61]
0046F37A  66 8B 86 40 05 00 00      MOV AX,word ptr [ESI + 0x540]
0046F381  66 8B 8E 3E 05 00 00      MOV CX,word ptr [ESI + 0x53e]
0046F388  52                        PUSH EDX
0046F389  66 8B 96 3C 05 00 00      MOV DX,word ptr [ESI + 0x53c]
0046F390  66 69 C0 C8 00            IMUL AX,AX,0xc8
0046F395  66 69 C9 C9 00            IMUL CX,CX,0xc9
0046F39A  66 69 D2 C9 00            IMUL DX,DX,0xc9
0046F39F  83 C0 64                  ADD EAX,0x64
0046F3A2  83 C1 64                  ADD ECX,0x64
0046F3A5  50                        PUSH EAX
0046F3A6  66 8B 46 45               MOV AX,word ptr [ESI + 0x45]
0046F3AA  83 C2 64                  ADD EDX,0x64
0046F3AD  51                        PUSH ECX
0046F3AE  66 8B 4E 43               MOV CX,word ptr [ESI + 0x43]
0046F3B2  52                        PUSH EDX
0046F3B3  66 8B 56 41               MOV DX,word ptr [ESI + 0x41]
0046F3B7  50                        PUSH EAX
0046F3B8  51                        PUSH ECX
0046F3B9  52                        PUSH EDX
0046F3BA  8B CE                     MOV ECX,ESI
0046F3BC  E8 94 30 F9 FF            CALL 0x00402455
0046F3C1  89 BE 50 05 00 00         MOV dword ptr [ESI + 0x550],EDI
LAB_0046f3c7:
0046F3C7  39 BE 50 05 00 00         CMP dword ptr [ESI + 0x550],EDI
0046F3CD  75 66                     JNZ 0x0046f435
0046F3CF  8D 45 08                  LEA EAX,[EBP + 0x8]
0046F3D2  8D 4D FC                  LEA ECX,[EBP + -0x4]
0046F3D5  50                        PUSH EAX
0046F3D6  51                        PUSH ECX
0046F3D7  8B CE                     MOV ECX,ESI
0046F3D9  E8 69 34 F9 FF            CALL 0x00402847
0046F3DE  83 F8 FF                  CMP EAX,-0x1
0046F3E1  74 23                     JZ 0x0046f406
0046F3E3  85 C0                     TEST EAX,EAX
0046F3E5  0F 84 12 FE FF FF         JZ 0x0046f1fd
0046F3EB  8B 16                     MOV EDX,dword ptr [ESI]
0046F3ED  8B CE                     MOV ECX,ESI
0046F3EF  FF 92 D8 00 00 00         CALL dword ptr [EDX + 0xd8]
0046F3F5  F7 D8                     NEG EAX
0046F3F7  1B C0                     SBB EAX,EAX
0046F3F9  5F                        POP EDI
0046F3FA  24 FD                     AND AL,0xfd
0046F3FC  5E                        POP ESI
0046F3FD  83 C0 02                  ADD EAX,0x2
0046F400  8B E5                     MOV ESP,EBP
0046F402  5D                        POP EBP
0046F403  C2 04 00                  RET 0x4
LAB_0046f406:
0046F406  68 28 AA 7A 00            PUSH 0x7aaa28
0046F40B  68 CC 4C 7A 00            PUSH 0x7a4ccc
0046F410  6A 00                     PUSH 0x0
0046F412  6A 00                     PUSH 0x0
0046F414  68 7C 28 00 00            PUSH 0x287c
0046F419  68 3C 9D 7A 00            PUSH 0x7a9d3c
0046F41E  E8 AD E0 23 00            CALL 0x006ad4d0
0046F423  83 C4 18                  ADD ESP,0x18
0046F426  85 C0                     TEST EAX,EAX
0046F428  74 01                     JZ 0x0046f42b
0046F42A  CC                        INT3
LAB_0046f42b:
0046F42B  68 7D 28 00 00            PUSH 0x287d
0046F430  E9 09 FD FF FF            JMP 0x0046f13e
switchD_0046eff1::default:
0046F435  68 0C AA 7A 00            PUSH 0x7aaa0c
0046F43A  68 CC 4C 7A 00            PUSH 0x7a4ccc
0046F43F  6A 00                     PUSH 0x0
0046F441  6A 00                     PUSH 0x0
0046F443  68 8A 28 00 00            PUSH 0x288a
0046F448  68 3C 9D 7A 00            PUSH 0x7a9d3c
0046F44D  E8 7E E0 23 00            CALL 0x006ad4d0
0046F452  83 C4 18                  ADD ESP,0x18
0046F455  85 C0                     TEST EAX,EAX
0046F457  74 01                     JZ 0x0046f45a
0046F459  CC                        INT3
LAB_0046f45a:
0046F45A  5F                        POP EDI
0046F45B  83 C8 FF                  OR EAX,0xffffffff
0046F45E  5E                        POP ESI
0046F45F  8B E5                     MOV ESP,EBP
0046F461  5D                        POP EBP
0046F462  C2 04 00                  RET 0x4
