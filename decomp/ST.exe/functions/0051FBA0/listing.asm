HelpStringTy::GetMessage:
0051FBA0  55                        PUSH EBP
0051FBA1  8B EC                     MOV EBP,ESP
0051FBA3  83 EC 48                  SUB ESP,0x48
0051FBA6  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0051FBAB  53                        PUSH EBX
0051FBAC  56                        PUSH ESI
0051FBAD  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0051FBB0  33 DB                     XOR EBX,EBX
0051FBB2  57                        PUSH EDI
0051FBB3  8D 55 BC                  LEA EDX,[EBP + -0x44]
0051FBB6  8D 4D B8                  LEA ECX,[EBP + -0x48]
0051FBB9  53                        PUSH EBX
0051FBBA  52                        PUSH EDX
0051FBBB  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
0051FBBE  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0051FBC4  E8 27 DC 20 00            CALL 0x0072d7f0
0051FBC9  8B F0                     MOV ESI,EAX
0051FBCB  83 C4 08                  ADD ESP,0x8
0051FBCE  3B F3                     CMP ESI,EBX
0051FBD0  0F 85 70 01 00 00         JNZ 0x0051fd46
0051FBD6  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0051FBD9  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
0051FBDC  8B 40 10                  MOV EAX,dword ptr [EAX + 0x10]
0051FBDF  83 F8 05                  CMP EAX,0x5
0051FBE2  0F 87 42 01 00 00         JA 0x0051fd2a
switchD_0051fbe8::switchD:
0051FBE8  FF 24 85 8C FD 51 00      JMP dword ptr [EAX*0x4 + 0x51fd8c]
switchD_0051fbe8::caseD_2:
0051FBEF  8B 0D 28 2A 80 00         MOV ECX,dword ptr [0x00802a28]
0051FBF5  8B 51 30                  MOV EDX,dword ptr [ECX + 0x30]
0051FBF8  52                        PUSH EDX
0051FBF9  68 9D 01 00 00            PUSH 0x19d
0051FBFE  E8 FD E2 1E 00            CALL 0x0070df00
0051FC03  89 86 1E 01 00 00         MOV dword ptr [ESI + 0x11e],EAX
0051FC09  89 58 58                  MOV dword ptr [EAX + 0x58],EBX
0051FC0C  89 58 5C                  MOV dword ptr [EAX + 0x5c],EBX
0051FC0F  A1 9C 67 80 00            MOV EAX,[0x0080679c]
0051FC14  83 C4 08                  ADD ESP,0x8
0051FC17  8D 48 28                  LEA ECX,[EAX + 0x28]
0051FC1A  6A 01                     PUSH 0x1
0051FC1C  51                        PUSH ECX
0051FC1D  50                        PUSH EAX
0051FC1E  E8 BD 53 19 00            CALL 0x006b4fe0
0051FC23  8A 0D 4E 87 80 00         MOV CL,byte ptr [0x0080874e]
0051FC29  50                        PUSH EAX
0051FC2A  A1 9C 67 80 00            MOV EAX,[0x0080679c]
0051FC2F  80 E9 03                  SUB CL,0x3
0051FC32  33 D2                     XOR EDX,EDX
0051FC34  66 8B 50 0E               MOV DX,word ptr [EAX + 0xe]
0051FC38  F6 D9                     NEG CL
0051FC3A  1B C9                     SBB ECX,ECX
0051FC3C  52                        PUSH EDX
0051FC3D  8B 15 30 67 80 00         MOV EDX,dword ptr [0x00806730]
0051FC43  83 E1 F6                  AND ECX,0xfffffff6
0051FC46  83 C1 1E                  ADD ECX,0x1e
0051FC49  6A 12                     PUSH 0x12
0051FC4B  2B D1                     SUB EDX,ECX
0051FC4D  81 EA 87 00 00 00         SUB EDX,0x87
0051FC53  52                        PUSH EDX
0051FC54  E8 67 54 19 00            CALL 0x006b50c0
0051FC59  89 86 2A 01 00 00         MOV dword ptr [ESI + 0x12a],EAX
0051FC5F  8B 48 14                  MOV ECX,dword ptr [EAX + 0x14]
0051FC62  3B CB                     CMP ECX,EBX
0051FC64  74 04                     JZ 0x0051fc6a
0051FC66  8B D9                     MOV EBX,ECX
0051FC68  EB 1A                     JMP 0x0051fc84
LAB_0051fc6a:
0051FC6A  33 DB                     XOR EBX,EBX
0051FC6C  66 8B 58 0E               MOV BX,word ptr [EAX + 0xe]
0051FC70  0F AF 58 04               IMUL EBX,dword ptr [EAX + 0x4]
0051FC74  83 C3 1F                  ADD EBX,0x1f
0051FC77  C1 EB 03                  SHR EBX,0x3
0051FC7A  81 E3 FC FF FF 1F         AND EBX,0x1ffffffc
0051FC80  0F AF 58 08               IMUL EBX,dword ptr [EAX + 0x8]
LAB_0051fc84:
0051FC84  50                        PUSH EAX
0051FC85  E8 16 53 19 00            CALL 0x006b4fa0
0051FC8A  8B CB                     MOV ECX,EBX
0051FC8C  8B F8                     MOV EDI,EAX
0051FC8E  8B D1                     MOV EDX,ECX
0051FC90  33 C0                     XOR EAX,EAX
0051FC92  C1 E9 02                  SHR ECX,0x2
0051FC95  F3 AB                     STOSD.REP ES:EDI
0051FC97  8B CA                     MOV ECX,EDX
0051FC99  83 E1 03                  AND ECX,0x3
0051FC9C  F3 AA                     STOSB.REP ES:EDI
0051FC9E  89 35 94 16 80 00         MOV dword ptr [0x00801694],ESI
0051FCA4  E9 81 00 00 00            JMP 0x0051fd2a
switchD_0051fbe8::caseD_3:
0051FCA9  89 1D 94 16 80 00         MOV dword ptr [0x00801694],EBX
0051FCAF  8B 86 1E 01 00 00         MOV EAX,dword ptr [ESI + 0x11e]
0051FCB5  3B C3                     CMP EAX,EBX
0051FCB7  74 0F                     JZ 0x0051fcc8
0051FCB9  50                        PUSH EAX
0051FCBA  E8 A1 08 1F 00            CALL 0x00710560
0051FCBF  83 C4 04                  ADD ESP,0x4
0051FCC2  89 9E 1E 01 00 00         MOV dword ptr [ESI + 0x11e],EBX
LAB_0051fcc8:
0051FCC8  8B 8E 2A 01 00 00         MOV ECX,dword ptr [ESI + 0x12a]
0051FCCE  8D 86 2A 01 00 00         LEA EAX,[ESI + 0x12a]
0051FCD4  3B CB                     CMP ECX,EBX
0051FCD6  74 52                     JZ 0x0051fd2a
0051FCD8  50                        PUSH EAX
0051FCD9  E8 82 B3 18 00            CALL 0x006ab060
0051FCDE  EB 4A                     JMP 0x0051fd2a
switchD_0051fbe8::caseD_5:
0051FCE0  8B CE                     MOV ECX,ESI
0051FCE2  E8 13 19 EE FF            CALL 0x004015fa
0051FCE7  EB 41                     JMP 0x0051fd2a
switchD_0051fbe8::caseD_0:
0051FCE9  39 9E 2E 01 00 00         CMP dword ptr [ESI + 0x12e],EBX
0051FCEF  74 39                     JZ 0x0051fd2a
0051FCF1  8B 4E 10                  MOV ECX,dword ptr [ESI + 0x10]
0051FCF4  E8 B7 54 1C 00            CALL 0x006e51b0
0051FCF9  8B 96 22 01 00 00         MOV EDX,dword ptr [ESI + 0x122]
0051FCFF  8B 8E 26 01 00 00         MOV ECX,dword ptr [ESI + 0x126]
0051FD05  2B C2                     SUB EAX,EDX
0051FD07  3B C1                     CMP EAX,ECX
0051FD09  72 1F                     JC 0x0051fd2a
0051FD0B  B9 41 00 00 00            MOV ECX,0x41
0051FD10  33 C0                     XOR EAX,EAX
0051FD12  8D 7E 18                  LEA EDI,[ESI + 0x18]
0051FD15  F3 AB                     STOSD.REP ES:EDI
0051FD17  8B CE                     MOV ECX,ESI
0051FD19  E8 DC 18 EE FF            CALL 0x004015fa
0051FD1E  88 9E 1C 01 00 00         MOV byte ptr [ESI + 0x11c],BL
0051FD24  89 9E 2E 01 00 00         MOV dword ptr [ESI + 0x12e],EBX
switchD_0051fbe8::caseD_1:
0051FD2A  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0051FD2D  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
0051FD30  51                        PUSH ECX
0051FD31  8B CE                     MOV ECX,ESI
0051FD33  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0051FD38  E8 93 62 1C 00            CALL 0x006e5fd0
0051FD3D  5F                        POP EDI
0051FD3E  5E                        POP ESI
0051FD3F  5B                        POP EBX
0051FD40  8B E5                     MOV ESP,EBP
0051FD42  5D                        POP EBP
0051FD43  C2 04 00                  RET 0x4
LAB_0051fd46:
0051FD46  8B 55 B8                  MOV EDX,dword ptr [EBP + -0x48]
0051FD49  68 90 3E 7C 00            PUSH 0x7c3e90
0051FD4E  68 CC 4C 7A 00            PUSH 0x7a4ccc
0051FD53  56                        PUSH ESI
0051FD54  53                        PUSH EBX
0051FD55  6A 4D                     PUSH 0x4d
0051FD57  68 4C 3E 7C 00            PUSH 0x7c3e4c
0051FD5C  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0051FD62  E8 69 D7 18 00            CALL 0x006ad4d0
0051FD67  83 C4 18                  ADD ESP,0x18
0051FD6A  85 C0                     TEST EAX,EAX
0051FD6C  74 01                     JZ 0x0051fd6f
0051FD6E  CC                        INT3
LAB_0051fd6f:
0051FD6F  6A 4D                     PUSH 0x4d
0051FD71  68 4C 3E 7C 00            PUSH 0x7c3e4c
0051FD76  53                        PUSH EBX
0051FD77  56                        PUSH ESI
0051FD78  E8 C3 60 18 00            CALL 0x006a5e40
0051FD7D  5F                        POP EDI
0051FD7E  5E                        POP ESI
0051FD7F  B8 FF FF 00 00            MOV EAX,0xffff
0051FD84  5B                        POP EBX
0051FD85  8B E5                     MOV ESP,EBP
0051FD87  5D                        POP EBP
0051FD88  C2 04 00                  RET 0x4
