OptPanelTy::GetMessage:
00533D10  55                        PUSH EBP
00533D11  8B EC                     MOV EBP,ESP
00533D13  81 EC 64 02 00 00         SUB ESP,0x264
00533D19  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
00533D1E  53                        PUSH EBX
00533D1F  56                        PUSH ESI
00533D20  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
00533D23  33 F6                     XOR ESI,ESI
00533D25  57                        PUSH EDI
00533D26  8D 95 7C FF FF FF         LEA EDX,[EBP + 0xffffff7c]
00533D2C  8D 8D 78 FF FF FF         LEA ECX,[EBP + 0xffffff78]
00533D32  56                        PUSH ESI
00533D33  52                        PUSH EDX
00533D34  89 85 78 FF FF FF         MOV dword ptr [EBP + 0xffffff78],EAX
00533D3A  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00533D40  E8 AB 9A 1F 00            CALL 0x0072d7f0
00533D45  8B F8                     MOV EDI,EAX
00533D47  83 C4 08                  ADD ESP,0x8
00533D4A  3B FE                     CMP EDI,ESI
00533D4C  0F 85 7C 32 00 00         JNZ 0x00536fce
00533D52  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
00533D55  8B 5D F4                  MOV EBX,dword ptr [EBP + -0xc]
00533D58  8B 47 10                  MOV EAX,dword ptr [EDI + 0x10]
00533D5B  83 E8 02                  SUB EAX,0x2
00533D5E  75 07                     JNZ 0x00533d67
00533D60  8B CB                     MOV ECX,EBX
00533D62  E8 D3 FC EC FF            CALL 0x00403a3a
LAB_00533d67:
00533D67  57                        PUSH EDI
00533D68  8B CB                     MOV ECX,EBX
00533D6A  E8 89 DA EC FF            CALL 0x004017f8
00533D6F  8B 47 10                  MOV EAX,dword ptr [EDI + 0x10]
00533D72  05 FF 3F FF FF            ADD EAX,0xffff3fff
00533D77  3D AD 00 00 00            CMP EAX,0xad
00533D7C  77 35                     JA 0x00533db3
00533D7E  33 C9                     XOR ECX,ECX
00533D80  8A 88 24 70 53 00         MOV CL,byte ptr [EAX + 0x537024]
switchD_00533d86::switchD:
00533D86  FF 24 8D 1C 70 53 00      JMP dword ptr [ECX*0x4 + 0x53701c]
switchD_00533d86::caseD_c001:
00533D8D  8B 47 1C                  MOV EAX,dword ptr [EDI + 0x1c]
00533D90  3B C6                     CMP EAX,ESI
00533D92  74 1F                     JZ 0x00533db3
00533D94  8B 40 04                  MOV EAX,dword ptr [EAX + 0x4]
00533D97  83 F8 02                  CMP EAX,0x2
00533D9A  74 0A                     JZ 0x00533da6
00533D9C  83 F8 03                  CMP EAX,0x3
00533D9F  76 12                     JBE 0x00533db3
00533DA1  83 F8 05                  CMP EAX,0x5
00533DA4  77 0D                     JA 0x00533db3
LAB_00533da6:
00533DA6  68 AE 00 00 00            PUSH 0xae
00533DAB  E8 7F 20 ED FF            CALL 0x00405e2f
00533DB0  83 C4 04                  ADD ESP,0x4
switchD_00533d86::caseD_c002:
00533DB3  8B 47 10                  MOV EAX,dword ptr [EDI + 0x10]
00533DB6  3D 06 C0 00 00            CMP EAX,0xc006
00533DBB  0F 87 01 0A 00 00         JA 0x005347c2
00533DC1  0F 84 E0 09 00 00         JZ 0x005347a7
00533DC7  3D 64 81 00 00            CMP EAX,0x8164
00533DCC  0F 87 3E 08 00 00         JA 0x00534610
00533DD2  0F 84 2B 08 00 00         JZ 0x00534603
00533DD8  3D 60 81 00 00            CMP EAX,0x8160
00533DDD  0F 87 DD 03 00 00         JA 0x005341c0
00533DE3  0F 84 B4 03 00 00         JZ 0x0053419d
00533DE9  83 F8 03                  CMP EAX,0x3
00533DEC  0F 87 9B 02 00 00         JA 0x0053408d
00533DF2  0F 84 77 02 00 00         JZ 0x0053406f
00533DF8  2B C6                     SUB EAX,ESI
00533DFA  74 27                     JZ 0x00533e23
00533DFC  83 E8 02                  SUB EAX,0x2
00533DFF  0F 85 B2 31 00 00         JNZ 0x00536fb7
00533E05  8B CB                     MOV ECX,EBX
00533E07  E8 DD 1A ED FF            CALL 0x004058e9
00533E0C  8B 8D 78 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff78]
00533E12  33 C0                     XOR EAX,EAX
00533E14  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00533E1A  5F                        POP EDI
00533E1B  5E                        POP ESI
00533E1C  5B                        POP EBX
00533E1D  8B E5                     MOV ESP,EBP
00533E1F  5D                        POP EBP
00533E20  C2 04 00                  RET 0x4
LAB_00533e23:
00533E23  8A 83 A4 01 00 00         MOV AL,byte ptr [EBX + 0x1a4]
00533E29  3C 03                     CMP AL,0x3
00533E2B  72 6E                     JC 0x00533e9b
00533E2D  3C 04                     CMP AL,0x4
00533E2F  76 04                     JBE 0x00533e35
00533E31  3C 07                     CMP AL,0x7
00533E33  75 66                     JNZ 0x00533e9b
LAB_00533e35:
00533E35  8B 83 DD 01 00 00         MOV EAX,dword ptr [EBX + 0x1dd]
00533E3B  3B C6                     CMP EAX,ESI
00533E3D  74 5C                     JZ 0x00533e9b
00533E3F  56                        PUSH ESI
00533E40  50                        PUSH EAX
00533E41  FF 15 E0 BC 85 00         CALL dword ptr [0x0085bce0]
00533E47  85 C0                     TEST EAX,EAX
00533E49  75 50                     JNZ 0x00533e9b
00533E4B  8B 93 DD 01 00 00         MOV EDX,dword ptr [EBX + 0x1dd]
00533E51  52                        PUSH EDX
00533E52  FF 15 E4 BC 85 00         CALL dword ptr [0x0085bce4]
00533E58  80 BB A4 01 00 00 07      CMP byte ptr [EBX + 0x1a4],0x7
00533E5F  74 0E                     JZ 0x00533e6f
00533E61  8B 83 E1 01 00 00         MOV EAX,dword ptr [EBX + 0x1e1]
00533E67  8B CB                     MOV ECX,EBX
00533E69  50                        PUSH EAX
00533E6A  E8 4D 01 ED FF            CALL 0x00403fbc
LAB_00533e6f:
00533E6F  C7 43 28 05 00 00 00      MOV dword ptr [EBX + 0x28],0x5
00533E76  8D BB B5 01 00 00         LEA EDI,[EBX + 0x1b5]
00533E7C  BE 0A 00 00 00            MOV ESI,0xa
LAB_00533e81:
00533E81  8B 07                     MOV EAX,dword ptr [EDI]
00533E83  85 C0                     TEST EAX,EAX
00533E85  74 0E                     JZ 0x00533e95
00533E87  8D 4B 18                  LEA ECX,[EBX + 0x18]
00533E8A  51                        PUSH ECX
00533E8B  50                        PUSH EAX
00533E8C  6A 02                     PUSH 0x2
00533E8E  8B CB                     MOV ECX,EBX
00533E90  E8 EB 21 1B 00            CALL 0x006e6080
LAB_00533e95:
00533E95  83 C7 04                  ADD EDI,0x4
00533E98  4E                        DEC ESI
00533E99  75 E6                     JNZ 0x00533e81
LAB_00533e9b:
00533E9B  33 C0                     XOR EAX,EAX
00533E9D  66 8B 83 72 01 00 00      MOV AX,word ptr [EBX + 0x172]
00533EA4  83 E8 03                  SUB EAX,0x3
00533EA7  0F 84 26 01 00 00         JZ 0x00533fd3
00533EAD  48                        DEC EAX
00533EAE  0F 85 62 01 00 00         JNZ 0x00534016
00533EB4  8B 43 50                  MOV EAX,dword ptr [EBX + 0x50]
00533EB7  8B 73 48                  MOV ESI,dword ptr [EBX + 0x48]
00533EBA  8B 4B 44                  MOV ECX,dword ptr [EBX + 0x44]
00533EBD  2B C6                     SUB EAX,ESI
00533EBF  3B C8                     CMP ECX,EAX
00533EC1  7E 06                     JLE 0x00533ec9
00533EC3  83 C1 E2                  ADD ECX,-0x1e
00533EC6  89 4B 44                  MOV dword ptr [EBX + 0x44],ECX
LAB_00533ec9:
00533EC9  39 43 44                  CMP dword ptr [EBX + 0x44],EAX
00533ECC  0F 8F EA 00 00 00         JG 0x00533fbc
00533ED2  33 FF                     XOR EDI,EDI
00533ED4  33 D2                     XOR EDX,EDX
00533ED6  89 3D 8C 87 80 00         MOV dword ptr [0x0080878c],EDI
00533EDC  8B 83 9C 01 00 00         MOV EAX,dword ptr [EBX + 0x19c]
00533EE2  89 55 C8                  MOV dword ptr [EBP + -0x38],EDX
00533EE5  BE 01 00 00 00            MOV ESI,0x1
00533EEA  89 55 CC                  MOV dword ptr [EBP + -0x34],EDX
00533EED  3D 02 61 00 00            CMP EAX,0x6102
00533EF2  89 55 D0                  MOV dword ptr [EBP + -0x30],EDX
00533EF5  89 75 C8                  MOV dword ptr [EBP + -0x38],ESI
00533EF8  74 14                     JZ 0x00533f0e
00533EFA  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
00533F00  6A FF                     PUSH -0x1
00533F02  8D 45 C8                  LEA EAX,[EBP + -0x38]
00533F05  56                        PUSH ESI
00533F06  50                        PUSH EAX
00533F07  6A 05                     PUSH 0x5
00533F09  E8 25 FD EC FF            CALL 0x00403c33
LAB_00533f0e:
00533F0E  8B 4B 50                  MOV ECX,dword ptr [EBX + 0x50]
00533F11  8B 53 48                  MOV EDX,dword ptr [EBX + 0x48]
00533F14  8B 83 A0 01 00 00         MOV EAX,dword ptr [EBX + 0x1a0]
00533F1A  2B CA                     SUB ECX,EDX
00533F1C  3B C7                     CMP EAX,EDI
00533F1E  89 4B 44                  MOV dword ptr [EBX + 0x44],ECX
00533F21  66 C7 83 72 01 00 00 02 00  MOV word ptr [EBX + 0x172],0x2
00533F2A  74 14                     JZ 0x00533f40
00533F2C  8B CB                     MOV ECX,EBX
00533F2E  C6 83 A4 01 00 00 01      MOV byte ptr [EBX + 0x1a4],0x1
00533F35  E8 17 E9 EC FF            CALL 0x00402851
00533F3A  89 BB A0 01 00 00         MOV dword ptr [EBX + 0x1a0],EDI
LAB_00533f40:
00533F40  39 BB 9C 01 00 00         CMP dword ptr [EBX + 0x19c],EDI
00533F46  74 74                     JZ 0x00533fbc
00533F48  80 BB A4 01 00 00 05      CMP byte ptr [EBX + 0x1a4],0x5
00533F4F  75 30                     JNZ 0x00533f81
00533F51  33 C0                     XOR EAX,EAX
00533F53  8A 83 AB 01 00 00         MOV AL,byte ptr [EBX + 0x1ab]
00533F59  83 E8 02                  SUB EAX,0x2
00533F5C  75 23                     JNZ 0x00533f81
00533F5E  33 C0                     XOR EAX,EAX
00533F60  89 35 2E F3 80 00         MOV dword ptr [0x0080f32e],ESI
00533F66  A0 83 87 80 00            MOV AL,[0x00808783]
00533F6B  48                        DEC EAX
00533F6C  74 0C                     JZ 0x00533f7a
00533F6E  48                        DEC EAX
00533F6F  75 10                     JNZ 0x00533f81
00533F71  C6 05 A0 87 80 00 0A      MOV byte ptr [0x008087a0],0xa
00533F78  EB 07                     JMP 0x00533f81
LAB_00533f7a:
00533F7A  C6 05 A0 87 80 00 09      MOV byte ptr [0x008087a0],0x9
LAB_00533f81:
00533F81  8D 53 18                  LEA EDX,[EBX + 0x18]
00533F84  B9 08 00 00 00            MOV ECX,0x8
00533F89  33 C0                     XOR EAX,EAX
00533F8B  8B FA                     MOV EDI,EDX
00533F8D  F3 AB                     STOSD.REP ES:EDI
00533F8F  8B 83 9C 01 00 00         MOV EAX,dword ptr [EBX + 0x19c]
00533F95  89 73 24                  MOV dword ptr [EBX + 0x24],ESI
00533F98  3D 0A 61 00 00            CMP EAX,0x610a
00533F9D  89 43 28                  MOV dword ptr [EBX + 0x28],EAX
00533FA0  75 07                     JNZ 0x00533fa9
00533FA2  C7 43 2C 06 00 00 00      MOV dword ptr [EBX + 0x2c],0x6
LAB_00533fa9:
00533FA9  8B 4B 10                  MOV ECX,dword ptr [EBX + 0x10]
00533FAC  52                        PUSH EDX
00533FAD  E8 9E FB 1A 00            CALL 0x006e3b50
00533FB2  C7 83 9C 01 00 00 00 00 00 00  MOV dword ptr [EBX + 0x19c],0x0
LAB_00533fbc:
00533FBC  8B 53 44                  MOV EDX,dword ptr [EBX + 0x44]
00533FBF  8B 43 3C                  MOV EAX,dword ptr [EBX + 0x3c]
00533FC2  8B 4B 60                  MOV ECX,dword ptr [EBX + 0x60]
00533FC5  52                        PUSH EDX
00533FC6  8B 15 A8 75 80 00         MOV EDX,dword ptr [0x008075a8]
00533FCC  50                        PUSH EAX
00533FCD  6A FF                     PUSH -0x1
00533FCF  51                        PUSH ECX
00533FD0  52                        PUSH EDX
00533FD1  EB 3E                     JMP 0x00534011
LAB_00533fd3:
00533FD3  8B 4B 44                  MOV ECX,dword ptr [EBX + 0x44]
00533FD6  8B 43 50                  MOV EAX,dword ptr [EBX + 0x50]
00533FD9  3B C8                     CMP ECX,EAX
00533FDB  7D 06                     JGE 0x00533fe3
00533FDD  83 C1 1E                  ADD ECX,0x1e
00533FE0  89 4B 44                  MOV dword ptr [EBX + 0x44],ECX
LAB_00533fe3:
00533FE3  39 43 44                  CMP dword ptr [EBX + 0x44],EAX
00533FE6  7C 15                     JL 0x00533ffd
00533FE8  6A 01                     PUSH 0x1
00533FEA  8B CB                     MOV ECX,EBX
00533FEC  89 43 44                  MOV dword ptr [EBX + 0x44],EAX
00533FEF  66 C7 83 72 01 00 00 01 00  MOV word ptr [EBX + 0x172],0x1
00533FF8  E8 1D 1A ED FF            CALL 0x00405a1a
LAB_00533ffd:
00533FFD  8B 43 44                  MOV EAX,dword ptr [EBX + 0x44]
00534000  8B 4B 3C                  MOV ECX,dword ptr [EBX + 0x3c]
00534003  8B 53 60                  MOV EDX,dword ptr [EBX + 0x60]
00534006  50                        PUSH EAX
00534007  A1 A8 75 80 00            MOV EAX,[0x008075a8]
0053400C  51                        PUSH ECX
0053400D  6A FF                     PUSH -0x1
0053400F  52                        PUSH EDX
00534010  50                        PUSH EAX
LAB_00534011:
00534011  E8 2A F6 17 00            CALL 0x006b3640
LAB_00534016:
00534016  8B 43 38                  MOV EAX,dword ptr [EBX + 0x38]
00534019  8B B3 01 03 00 00         MOV ESI,dword ptr [EBX + 0x301]
0053401F  8B C8                     MOV ECX,EAX
00534021  2B CE                     SUB ECX,ESI
00534023  81 F9 D0 07 00 00         CMP ECX,0x7d0
00534029  0F 86 88 2F 00 00         JBE 0x00536fb7
0053402F  B9 58 76 80 00            MOV ECX,0x807658
00534034  89 83 01 03 00 00         MOV dword ptr [EBX + 0x301],EAX
0053403A  E8 36 D3 EC FF            CALL 0x00401375
0053403F  85 C0                     TEST EAX,EAX
00534041  0F 85 70 2F 00 00         JNZ 0x00536fb7
00534047  8B 15 78 6D 85 00         MOV EDX,dword ptr [0x00856d78]
0053404D  B9 20 76 80 00            MOV ECX,0x807620
00534052  52                        PUSH EDX
00534053  E8 FA 04 ED FF            CALL 0x00404552
00534058  8B 8D 78 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff78]
0053405E  33 C0                     XOR EAX,EAX
00534060  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00534066  5F                        POP EDI
00534067  5E                        POP ESI
00534068  5B                        POP EBX
00534069  8B E5                     MOV ESP,EBP
0053406B  5D                        POP EBP
0053406C  C2 04 00                  RET 0x4
LAB_0053406f:
0053406F  8B CB                     MOV ECX,EBX
00534071  E8 11 F8 EC FF            CALL 0x00403887
00534076  8B 8D 78 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff78]
0053407C  33 C0                     XOR EAX,EAX
0053407E  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00534084  5F                        POP EDI
00534085  5E                        POP ESI
00534086  5B                        POP EBX
00534087  8B E5                     MOV ESP,EBP
00534089  5D                        POP EBP
0053408A  C2 04 00                  RET 0x4
LAB_0053408d:
0053408D  3D 32 63 00 00            CMP EAX,0x6332
00534092  0F 85 1F 2F 00 00         JNZ 0x00536fb7
00534098  8B 47 1C                  MOV EAX,dword ptr [EDI + 0x1c]
0053409B  8B B3 7C 01 00 00         MOV ESI,dword ptr [EBX + 0x17c]
005340A1  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
005340A4  8B 86 A0 00 00 00         MOV EAX,dword ptr [ESI + 0xa0]
005340AA  85 C0                     TEST EAX,EAX
005340AC  74 09                     JZ 0x005340b7
005340AE  56                        PUSH ESI
005340AF  E8 DC C6 1D 00            CALL 0x00710790
005340B4  83 C4 04                  ADD ESP,0x4
LAB_005340b7:
005340B7  A0 4E 87 80 00            MOV AL,[0x0080874e]
005340BC  33 D2                     XOR EDX,EDX
005340BE  3C 03                     CMP AL,0x3
005340C0  8B 43 68                  MOV EAX,dword ptr [EBX + 0x68]
005340C3  0F 95 C2                  SETNZ DL
005340C6  4A                        DEC EDX
005340C7  8B 8E 8A 00 00 00         MOV ECX,dword ptr [ESI + 0x8a]
005340CD  83 E2 73                  AND EDX,0x73
005340D0  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
005340D3  52                        PUSH EDX
005340D4  6A 6F                     PUSH 0x6f
005340D6  68 CA 00 00 00            PUSH 0xca
005340DB  6A 1A                     PUSH 0x1a
005340DD  6A 26                     PUSH 0x26
005340DF  6A 00                     PUSH 0x0
005340E1  50                        PUSH EAX
005340E2  E8 89 00 18 00            CALL 0x006b4170
005340E7  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
005340EA  33 C0                     XOR EAX,EAX
005340EC  66 8B 47 16               MOV AX,word ptr [EDI + 0x16]
005340F0  8B 91 E0 01 00 00         MOV EDX,dword ptr [ECX + 0x1e0]
005340F6  8B F0                     MOV ESI,EAX
005340F8  03 D0                     ADD EDX,EAX
005340FA  3B F2                     CMP ESI,EDX
005340FC  7D 6E                     JGE 0x0053416c
LAB_005340fe:
005340FE  8B 8B F9 02 00 00         MOV ECX,dword ptr [EBX + 0x2f9]
00534104  3B 71 08                  CMP ESI,dword ptr [ECX + 0x8]
00534107  7D 08                     JGE 0x00534111
00534109  8B 49 14                  MOV ECX,dword ptr [ECX + 0x14]
0053410C  8B 0C B1                  MOV ECX,dword ptr [ECX + ESI*0x4]
0053410F  EB 02                     JMP 0x00534113
LAB_00534111:
00534111  33 C9                     XOR ECX,ECX
LAB_00534113:
00534113  85 C9                     TEST ECX,ECX
00534115  89 4D E8                  MOV dword ptr [EBP + -0x18],ECX
00534118  74 3C                     JZ 0x00534156
0053411A  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0053411D  8B D6                     MOV EDX,ESI
0053411F  2B D0                     SUB EDX,EAX
00534121  8B 43 68                  MOV EAX,dword ptr [EBX + 0x68]
00534124  0F AF D1                  IMUL EDX,ECX
00534127  51                        PUSH ECX
00534128  8B 8B 7C 01 00 00         MOV ECX,dword ptr [EBX + 0x17c]
0053412E  83 C2 1B                  ADD EDX,0x1b
00534131  68 CA 00 00 00            PUSH 0xca
00534136  52                        PUSH EDX
00534137  6A 26                     PUSH 0x26
00534139  6A 00                     PUSH 0x0
0053413B  50                        PUSH EAX
0053413C  E8 4F C9 1D 00            CALL 0x00710a90
00534141  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
00534144  6A 00                     PUSH 0x0
00534146  6A FF                     PUSH -0x1
00534148  6A 00                     PUSH 0x0
0053414A  51                        PUSH ECX
0053414B  8B 8B 7C 01 00 00         MOV ECX,dword ptr [EBX + 0x17c]
00534151  E8 6A D8 1D 00            CALL 0x007119c0
LAB_00534156:
00534156  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
00534159  33 C0                     XOR EAX,EAX
0053415B  66 8B 47 16               MOV AX,word ptr [EDI + 0x16]
0053415F  46                        INC ESI
00534160  8B 8A E0 01 00 00         MOV ECX,dword ptr [EDX + 0x1e0]
00534166  03 C8                     ADD ECX,EAX
00534168  3B F1                     CMP ESI,ECX
0053416A  7C 92                     JL 0x005340fe
LAB_0053416c:
0053416C  8B 53 44                  MOV EDX,dword ptr [EBX + 0x44]
0053416F  8B 43 3C                  MOV EAX,dword ptr [EBX + 0x3c]
00534172  8B 4B 60                  MOV ECX,dword ptr [EBX + 0x60]
00534175  52                        PUSH EDX
00534176  8B 15 A8 75 80 00         MOV EDX,dword ptr [0x008075a8]
0053417C  50                        PUSH EAX
0053417D  6A FF                     PUSH -0x1
0053417F  51                        PUSH ECX
00534180  52                        PUSH EDX
00534181  E8 BA F4 17 00            CALL 0x006b3640
00534186  8B 8D 78 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff78]
0053418C  33 C0                     XOR EAX,EAX
0053418E  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00534194  5F                        POP EDI
00534195  5E                        POP ESI
00534196  5B                        POP EBX
00534197  8B E5                     MOV ESP,EBP
00534199  5D                        POP EBP
0053419A  C2 04 00                  RET 0x4
LAB_0053419d:
0053419D  8B 83 E5 01 00 00         MOV EAX,dword ptr [EBX + 0x1e5]
005341A3  8B 48 08                  MOV ECX,dword ptr [EAX + 0x8]
005341A6  33 C0                     XOR EAX,EAX
005341A8  89 4F 18                  MOV dword ptr [EDI + 0x18],ECX
005341AB  8B 8D 78 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff78]
005341B1  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005341B7  5F                        POP EDI
005341B8  5E                        POP ESI
005341B9  5B                        POP EBX
005341BA  8B E5                     MOV ESP,EBP
005341BC  5D                        POP EBP
005341BD  C2 04 00                  RET 0x4
LAB_005341c0:
005341C0  2D 61 81 00 00            SUB EAX,0x8161
005341C5  0F 84 D5 02 00 00         JZ 0x005344a0
005341CB  48                        DEC EAX
005341CC  0F 84 89 02 00 00         JZ 0x0053445b
005341D2  48                        DEC EAX
005341D3  0F 85 DE 2D 00 00         JNZ 0x00536fb7
005341D9  33 C0                     XOR EAX,EAX
005341DB  8A 83 A4 01 00 00         MOV AL,byte ptr [EBX + 0x1a4]
005341E1  83 E8 03                  SUB EAX,0x3
005341E4  0F 84 10 02 00 00         JZ 0x005343fa
005341EA  48                        DEC EAX
005341EB  0F 84 08 01 00 00         JZ 0x005342f9
005341F1  83 E8 0A                  SUB EAX,0xa
005341F4  0F 85 BD 2D 00 00         JNZ 0x00536fb7
005341FA  8B 83 E5 01 00 00         MOV EAX,dword ptr [EBX + 0x1e5]
00534200  8B 48 14                  MOV ECX,dword ptr [EAX + 0x14]
00534203  3B CE                     CMP ECX,ESI
00534205  74 04                     JZ 0x0053420b
00534207  8B F1                     MOV ESI,ECX
00534209  EB 1A                     JMP 0x00534225
LAB_0053420b:
0053420B  33 F6                     XOR ESI,ESI
0053420D  66 8B 70 0E               MOV SI,word ptr [EAX + 0xe]
00534211  0F AF 70 04               IMUL ESI,dword ptr [EAX + 0x4]
00534215  83 C6 1F                  ADD ESI,0x1f
00534218  C1 EE 03                  SHR ESI,0x3
0053421B  81 E6 FC FF FF 1F         AND ESI,0x1ffffffc
00534221  0F AF 70 08               IMUL ESI,dword ptr [EAX + 0x8]
LAB_00534225:
00534225  8A 0D 4E 87 80 00         MOV CL,byte ptr [0x0080874e]
0053422B  33 D2                     XOR EDX,EDX
0053422D  80 F9 03                  CMP CL,0x3
00534230  50                        PUSH EAX
00534231  0F 95 C2                  SETNZ DL
00534234  4A                        DEC EDX
00534235  83 E2 73                  AND EDX,0x73
00534238  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
0053423B  E8 60 0D 18 00            CALL 0x006b4fa0
00534240  8B F8                     MOV EDI,EAX
00534242  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00534245  8A D0                     MOV DL,AL
00534247  8B CE                     MOV ECX,ESI
00534249  8A F2                     MOV DH,DL
0053424B  6A 00                     PUSH 0x0
0053424D  8B C2                     MOV EAX,EDX
0053424F  6A 00                     PUSH 0x0
00534251  C1 E0 10                  SHL EAX,0x10
00534254  66 8B C2                  MOV AX,DX
00534257  6A 00                     PUSH 0x0
00534259  C1 E9 02                  SHR ECX,0x2
0053425C  F3 AB                     STOSD.REP ES:EDI
0053425E  8B CE                     MOV ECX,ESI
00534260  6A 00                     PUSH 0x0
00534262  83 E1 03                  AND ECX,0x3
00534265  6A 00                     PUSH 0x0
00534267  F3 AA                     STOSB.REP ES:EDI
00534269  8B 8B E5 01 00 00         MOV ECX,dword ptr [EBX + 0x1e5]
0053426F  51                        PUSH ECX
00534270  8B 8B 7C 01 00 00         MOV ECX,dword ptr [EBX + 0x17c]
00534276  E8 15 C8 1D 00            CALL 0x00710a90
0053427B  33 D2                     XOR EDX,EDX
0053427D  68 3A F3 80 00            PUSH 0x80f33a
00534282  8A 15 4D 87 80 00         MOV DL,byte ptr [0x0080874d]
00534288  52                        PUSH EDX
00534289  E8 9E 0F ED FF            CALL 0x0040522c
0053428E  83 C4 08                  ADD ESP,0x8
00534291  85 C0                     TEST EAX,EAX
00534293  6A 00                     PUSH 0x0
00534295  6A FF                     PUSH -0x1
00534297  6A 00                     PUSH 0x0
00534299  74 07                     JZ 0x005342a2
0053429B  68 3A F3 80 00            PUSH 0x80f33a
005342A0  EB 11                     JMP 0x005342b3
LAB_005342a2:
005342A2  A1 18 76 80 00            MOV EAX,[0x00807618]
005342A7  50                        PUSH EAX
005342A8  68 11 27 00 00            PUSH 0x2711
005342AD  E8 8E BE 17 00            CALL 0x006b0140
005342B2  50                        PUSH EAX
LAB_005342b3:
005342B3  8B 8B 7C 01 00 00         MOV ECX,dword ptr [EBX + 0x17c]
005342B9  E8 02 D7 1D 00            CALL 0x007119c0
005342BE  8B 83 E5 01 00 00         MOV EAX,dword ptr [EBX + 0x1e5]
005342C4  8B 48 08                  MOV ECX,dword ptr [EAX + 0x8]
005342C7  8B 50 04                  MOV EDX,dword ptr [EAX + 0x4]
005342CA  51                        PUSH ECX
005342CB  52                        PUSH EDX
005342CC  6A 00                     PUSH 0x0
005342CE  6A 00                     PUSH 0x0
005342D0  6A 00                     PUSH 0x0
005342D2  50                        PUSH EAX
005342D3  8B 43 68                  MOV EAX,dword ptr [EBX + 0x68]
005342D6  6A 1C                     PUSH 0x1c
005342D8  6A 26                     PUSH 0x26
005342DA  6A 00                     PUSH 0x0
005342DC  50                        PUSH EAX
005342DD  E8 0E 13 18 00            CALL 0x006b55f0
005342E2  8B 8D 78 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff78]
005342E8  33 C0                     XOR EAX,EAX
005342EA  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005342F0  5F                        POP EDI
005342F1  5E                        POP ESI
005342F2  5B                        POP EBX
005342F3  8B E5                     MOV ESP,EBP
005342F5  5D                        POP EBP
005342F6  C2 04 00                  RET 0x4
LAB_005342f9:
005342F9  8B 83 E5 01 00 00         MOV EAX,dword ptr [EBX + 0x1e5]
005342FF  8B 48 14                  MOV ECX,dword ptr [EAX + 0x14]
00534302  3B CE                     CMP ECX,ESI
00534304  74 04                     JZ 0x0053430a
00534306  8B F1                     MOV ESI,ECX
00534308  EB 1A                     JMP 0x00534324
LAB_0053430a:
0053430A  33 F6                     XOR ESI,ESI
0053430C  66 8B 70 0E               MOV SI,word ptr [EAX + 0xe]
00534310  0F AF 70 04               IMUL ESI,dword ptr [EAX + 0x4]
00534314  83 C6 1F                  ADD ESI,0x1f
00534317  C1 EE 03                  SHR ESI,0x3
0053431A  81 E6 FC FF FF 1F         AND ESI,0x1ffffffc
00534320  0F AF 70 08               IMUL ESI,dword ptr [EAX + 0x8]
LAB_00534324:
00534324  8A 0D 4E 87 80 00         MOV CL,byte ptr [0x0080874e]
0053432A  33 D2                     XOR EDX,EDX
0053432C  80 F9 03                  CMP CL,0x3
0053432F  50                        PUSH EAX
00534330  0F 95 C2                  SETNZ DL
00534333  4A                        DEC EDX
00534334  83 E2 73                  AND EDX,0x73
00534337  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
0053433A  E8 61 0C 18 00            CALL 0x006b4fa0
0053433F  8B F8                     MOV EDI,EAX
00534341  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00534344  8A D0                     MOV DL,AL
00534346  8B CE                     MOV ECX,ESI
00534348  8A F2                     MOV DH,DL
0053434A  8B C2                     MOV EAX,EDX
0053434C  C1 E0 10                  SHL EAX,0x10
0053434F  66 8B C2                  MOV AX,DX
00534352  C1 E9 02                  SHR ECX,0x2
00534355  F3 AB                     STOSD.REP ES:EDI
00534357  8B CE                     MOV ECX,ESI
00534359  83 E1 03                  AND ECX,0x3
0053435C  F3 AA                     STOSB.REP ES:EDI
0053435E  8B 93 B5 01 00 00         MOV EDX,dword ptr [EBX + 0x1b5]
00534364  8D 4B 18                  LEA ECX,[EBX + 0x18]
00534367  51                        PUSH ECX
00534368  52                        PUSH EDX
00534369  6A 02                     PUSH 0x2
0053436B  8B CB                     MOV ECX,EBX
0053436D  C7 43 28 26 00 00 00      MOV dword ptr [EBX + 0x28],0x26
00534374  E8 07 1D 1B 00            CALL 0x006e6080
00534379  8B 83 E5 01 00 00         MOV EAX,dword ptr [EBX + 0x1e5]
0053437F  8B 8B 7C 01 00 00         MOV ECX,dword ptr [EBX + 0x17c]
00534385  6A 00                     PUSH 0x0
00534387  6A 00                     PUSH 0x0
00534389  6A 00                     PUSH 0x0
0053438B  6A 00                     PUSH 0x0
0053438D  6A 00                     PUSH 0x0
0053438F  50                        PUSH EAX
00534390  E8 FB C6 1D 00            CALL 0x00710a90
00534395  8B 83 E9 01 00 00         MOV EAX,dword ptr [EBX + 0x1e9]
0053439B  8B 4B 2C                  MOV ECX,dword ptr [EBX + 0x2c]
0053439E  3B 48 08                  CMP ECX,dword ptr [EAX + 0x8]
005343A1  7D 08                     JGE 0x005343ab
005343A3  8B 50 14                  MOV EDX,dword ptr [EAX + 0x14]
005343A6  8B 0C 8A                  MOV ECX,dword ptr [EDX + ECX*0x4]
005343A9  EB 02                     JMP 0x005343ad
LAB_005343ab:
005343AB  33 C9                     XOR ECX,ECX
LAB_005343ad:
005343AD  6A 00                     PUSH 0x0
005343AF  6A FF                     PUSH -0x1
005343B1  6A 00                     PUSH 0x0
005343B3  51                        PUSH ECX
005343B4  8B 8B 7C 01 00 00         MOV ECX,dword ptr [EBX + 0x17c]
005343BA  E8 01 D6 1D 00            CALL 0x007119c0
005343BF  8B 83 E5 01 00 00         MOV EAX,dword ptr [EBX + 0x1e5]
005343C5  8B 48 08                  MOV ECX,dword ptr [EAX + 0x8]
005343C8  8B 50 04                  MOV EDX,dword ptr [EAX + 0x4]
005343CB  51                        PUSH ECX
005343CC  52                        PUSH EDX
005343CD  6A 00                     PUSH 0x0
005343CF  6A 00                     PUSH 0x0
005343D1  6A 00                     PUSH 0x0
005343D3  50                        PUSH EAX
005343D4  8B 43 68                  MOV EAX,dword ptr [EBX + 0x68]
005343D7  6A 1C                     PUSH 0x1c
005343D9  6A 26                     PUSH 0x26
005343DB  6A 00                     PUSH 0x0
005343DD  50                        PUSH EAX
005343DE  E8 0D 12 18 00            CALL 0x006b55f0
005343E3  8B 8D 78 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff78]
005343E9  33 C0                     XOR EAX,EAX
005343EB  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005343F1  5F                        POP EDI
005343F2  5E                        POP ESI
005343F3  5B                        POP EBX
005343F4  8B E5                     MOV ESP,EBP
005343F6  5D                        POP EBP
005343F7  C2 04 00                  RET 0x4
LAB_005343fa:
005343FA  8B 83 E9 01 00 00         MOV EAX,dword ptr [EBX + 0x1e9]
00534400  8B 7F 14                  MOV EDI,dword ptr [EDI + 0x14]
00534403  3B 78 08                  CMP EDI,dword ptr [EAX + 0x8]
00534406  7D 08                     JGE 0x00534410
00534408  8B 48 14                  MOV ECX,dword ptr [EAX + 0x14]
0053440B  8B 3C B9                  MOV EDI,dword ptr [ECX + EDI*0x4]
0053440E  EB 02                     JMP 0x00534412
LAB_00534410:
00534410  33 FF                     XOR EDI,EDI
LAB_00534412:
00534412  8B 93 F1 01 00 00         MOV EDX,dword ptr [EBX + 0x1f1]
00534418  57                        PUSH EDI
00534419  56                        PUSH ESI
0053441A  52                        PUSH EDX
0053441B  E8 00 1C 18 00            CALL 0x006b6020
00534420  8B 93 B9 01 00 00         MOV EDX,dword ptr [EBX + 0x1b9]
00534426  8B 83 F1 01 00 00         MOV EAX,dword ptr [EBX + 0x1f1]
0053442C  8D 4B 18                  LEA ECX,[EBX + 0x18]
0053442F  C7 43 28 33 00 00 00      MOV dword ptr [EBX + 0x28],0x33
00534436  51                        PUSH ECX
00534437  52                        PUSH EDX
00534438  6A 02                     PUSH 0x2
0053443A  8B CB                     MOV ECX,EBX
0053443C  89 43 2C                  MOV dword ptr [EBX + 0x2c],EAX
0053443F  E8 3C 1C 1B 00            CALL 0x006e6080
00534444  8B 8D 78 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff78]
0053444A  33 C0                     XOR EAX,EAX
0053444C  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00534452  5F                        POP EDI
00534453  5E                        POP ESI
00534454  5B                        POP EBX
00534455  8B E5                     MOV ESP,EBP
00534457  5D                        POP EBP
00534458  C2 04 00                  RET 0x4
LAB_0053445b:
0053445B  8A 83 A4 01 00 00         MOV AL,byte ptr [EBX + 0x1a4]
00534461  3C 03                     CMP AL,0x3
00534463  0F 82 4E 2B 00 00         JC 0x00536fb7
00534469  3C 04                     CMP AL,0x4
0053446B  76 08                     JBE 0x00534475
0053446D  3C 0E                     CMP AL,0xe
0053446F  0F 85 42 2B 00 00         JNZ 0x00536fb7
switchD_00535190::caseD_3:
00534475  8B 03                     MOV EAX,dword ptr [EBX]
00534477  8D 4B 18                  LEA ECX,[EBX + 0x18]
0053447A  51                        PUSH ECX
0053447B  8B CB                     MOV ECX,EBX
0053447D  C7 43 28 A1 C0 00 00      MOV dword ptr [EBX + 0x28],0xc0a1
00534484  89 73 34                  MOV dword ptr [EBX + 0x34],ESI
00534487  FF 10                     CALL dword ptr [EAX]
00534489  8B 8D 78 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff78]
0053448F  33 C0                     XOR EAX,EAX
00534491  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00534497  5F                        POP EDI
00534498  5E                        POP ESI
00534499  5B                        POP EBX
0053449A  8B E5                     MOV ESP,EBP
0053449C  5D                        POP EBP
0053449D  C2 04 00                  RET 0x4
LAB_005344a0:
005344A0  8B 83 E5 01 00 00         MOV EAX,dword ptr [EBX + 0x1e5]
005344A6  8B 48 14                  MOV ECX,dword ptr [EAX + 0x14]
005344A9  3B CE                     CMP ECX,ESI
005344AB  74 04                     JZ 0x005344b1
005344AD  8B F1                     MOV ESI,ECX
005344AF  EB 1A                     JMP 0x005344cb
LAB_005344b1:
005344B1  33 F6                     XOR ESI,ESI
005344B3  66 8B 70 0E               MOV SI,word ptr [EAX + 0xe]
005344B7  0F AF 70 04               IMUL ESI,dword ptr [EAX + 0x4]
005344BB  83 C6 1F                  ADD ESI,0x1f
005344BE  C1 EE 03                  SHR ESI,0x3
005344C1  81 E6 FC FF FF 1F         AND ESI,0x1ffffffc
005344C7  0F AF 70 08               IMUL ESI,dword ptr [EAX + 0x8]
LAB_005344cb:
005344CB  8A 0D 4E 87 80 00         MOV CL,byte ptr [0x0080874e]
005344D1  33 D2                     XOR EDX,EDX
005344D3  80 F9 03                  CMP CL,0x3
005344D6  50                        PUSH EAX
005344D7  0F 95 C2                  SETNZ DL
005344DA  4A                        DEC EDX
005344DB  83 E2 73                  AND EDX,0x73
005344DE  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
005344E1  E8 BA 0A 18 00            CALL 0x006b4fa0
005344E6  8B F8                     MOV EDI,EAX
005344E8  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
005344EB  8A D0                     MOV DL,AL
005344ED  8B CE                     MOV ECX,ESI
005344EF  8A F2                     MOV DH,DL
005344F1  6A 00                     PUSH 0x0
005344F3  8B C2                     MOV EAX,EDX
005344F5  6A 00                     PUSH 0x0
005344F7  C1 E0 10                  SHL EAX,0x10
005344FA  66 8B C2                  MOV AX,DX
005344FD  6A 00                     PUSH 0x0
005344FF  C1 E9 02                  SHR ECX,0x2
00534502  F3 AB                     STOSD.REP ES:EDI
00534504  8B CE                     MOV ECX,ESI
00534506  6A 00                     PUSH 0x0
00534508  83 E1 03                  AND ECX,0x3
0053450B  6A 00                     PUSH 0x0
0053450D  F3 AA                     STOSB.REP ES:EDI
0053450F  8B 8B E5 01 00 00         MOV ECX,dword ptr [EBX + 0x1e5]
00534515  51                        PUSH ECX
00534516  8B 8B 7C 01 00 00         MOV ECX,dword ptr [EBX + 0x17c]
0053451C  E8 6F C5 1D 00            CALL 0x00710a90
00534521  80 BB A4 01 00 00 0E      CMP byte ptr [EBX + 0x1a4],0xe
00534528  74 36                     JZ 0x00534560
0053452A  8B 8B E9 01 00 00         MOV ECX,dword ptr [EBX + 0x1e9]
00534530  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
00534533  33 C0                     XOR EAX,EAX
00534535  66 8B 46 14               MOV AX,word ptr [ESI + 0x14]
00534539  8B 51 08                  MOV EDX,dword ptr [ECX + 0x8]
0053453C  3B C2                     CMP EAX,EDX
0053453E  7D 12                     JGE 0x00534552
00534540  8B 51 14                  MOV EDX,dword ptr [ECX + 0x14]
00534543  33 C9                     XOR ECX,ECX
00534545  66 39 4E 16               CMP word ptr [ESI + 0x16],CX
00534549  8B 04 82                  MOV EAX,dword ptr [EDX + EAX*0x4]
0053454C  0F 94 C1                  SETZ CL
0053454F  51                        PUSH ECX
00534550  EB 3B                     JMP 0x0053458d
LAB_00534552:
00534552  33 C9                     XOR ECX,ECX
00534554  33 C0                     XOR EAX,EAX
00534556  66 39 4E 16               CMP word ptr [ESI + 0x16],CX
0053455A  0F 94 C1                  SETZ CL
0053455D  51                        PUSH ECX
0053455E  EB 2D                     JMP 0x0053458d
LAB_00534560:
00534560  8B 93 FD 02 00 00         MOV EDX,dword ptr [EBX + 0x2fd]
00534566  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
00534569  33 C9                     XOR ECX,ECX
0053456B  66 8B 4E 14               MOV CX,word ptr [ESI + 0x14]
0053456F  8B 42 0C                  MOV EAX,dword ptr [EDX + 0xc]
00534572  3B C8                     CMP ECX,EAX
00534574  73 0B                     JNC 0x00534581
00534576  8B 42 08                  MOV EAX,dword ptr [EDX + 0x8]
00534579  0F AF C1                  IMUL EAX,ECX
0053457C  03 42 1C                  ADD EAX,dword ptr [EDX + 0x1c]
0053457F  EB 02                     JMP 0x00534583
LAB_00534581:
00534581  33 C0                     XOR EAX,EAX
LAB_00534583:
00534583  33 D2                     XOR EDX,EDX
00534585  66 39 56 16               CMP word ptr [ESI + 0x16],DX
00534589  0F 94 C2                  SETZ DL
0053458C  52                        PUSH EDX
LAB_0053458d:
0053458D  8B 8B 7C 01 00 00         MOV ECX,dword ptr [EBX + 0x17c]
00534593  6A FF                     PUSH -0x1
00534595  6A 02                     PUSH 0x2
00534597  50                        PUSH EAX
00534598  E8 23 D4 1D 00            CALL 0x007119c0
0053459D  8B 83 E5 01 00 00         MOV EAX,dword ptr [EBX + 0x1e5]
005345A3  33 D2                     XOR EDX,EDX
005345A5  66 8B 56 1A               MOV DX,word ptr [ESI + 0x1a]
005345A9  8B 48 08                  MOV ECX,dword ptr [EAX + 0x8]
005345AC  83 C2 31                  ADD EDX,0x31
005345AF  51                        PUSH ECX
005345B0  68 C8 00 00 00            PUSH 0xc8
005345B5  6A 00                     PUSH 0x0
005345B7  6A 00                     PUSH 0x0
005345B9  6A 00                     PUSH 0x0
005345BB  8B 4B 68                  MOV ECX,dword ptr [EBX + 0x68]
005345BE  50                        PUSH EAX
005345BF  33 C0                     XOR EAX,EAX
005345C1  66 8B 46 18               MOV AX,word ptr [ESI + 0x18]
005345C5  52                        PUSH EDX
005345C6  83 C0 26                  ADD EAX,0x26
005345C9  50                        PUSH EAX
005345CA  6A 00                     PUSH 0x0
005345CC  51                        PUSH ECX
005345CD  E8 1E 10 18 00            CALL 0x006b55f0
005345D2  8B 53 44                  MOV EDX,dword ptr [EBX + 0x44]
005345D5  8B 43 3C                  MOV EAX,dword ptr [EBX + 0x3c]
005345D8  8B 4B 60                  MOV ECX,dword ptr [EBX + 0x60]
005345DB  52                        PUSH EDX
005345DC  8B 15 A8 75 80 00         MOV EDX,dword ptr [0x008075a8]
005345E2  50                        PUSH EAX
005345E3  6A FF                     PUSH -0x1
005345E5  51                        PUSH ECX
005345E6  52                        PUSH EDX
005345E7  E8 54 F0 17 00            CALL 0x006b3640
005345EC  8B 8D 78 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff78]
005345F2  33 C0                     XOR EAX,EAX
005345F4  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005345FA  5F                        POP EDI
005345FB  5E                        POP ESI
005345FC  5B                        POP EBX
005345FD  8B E5                     MOV ESP,EBP
005345FF  5D                        POP EBP
00534600  C2 04 00                  RET 0x4
LAB_00534603:
00534603  68 88 1E 40 00            PUSH 0x401e88
00534608  56                        PUSH ESI
00534609  68 40 3E 7C 00            PUSH 0x7c3e40
0053460E  EB 39                     JMP 0x00534649
LAB_00534610:
00534610  3D 02 C0 00 00            CMP EAX,0xc002
00534615  0F 87 F9 00 00 00         JA 0x00534714
0053461B  0F 84 E9 00 00 00         JZ 0x0053470a
00534621  3D 06 A1 00 00            CMP EAX,0xa106
00534626  0F 87 88 00 00 00         JA 0x005346b4
0053462C  3D 05 A1 00 00            CMP EAX,0xa105
00534631  73 40                     JNC 0x00534673
00534633  3D 65 81 00 00            CMP EAX,0x8165
00534638  0F 85 79 29 00 00         JNZ 0x00536fb7
0053463E  68 88 1E 40 00            PUSH 0x401e88
00534643  56                        PUSH ESI
00534644  68 34 3E 7C 00            PUSH 0x7c3e34
LAB_00534649:
00534649  E8 2E 11 ED FF            CALL 0x0040577c
0053464E  83 C4 08                  ADD ESP,0x8
00534651  50                        PUSH EAX
00534652  6A 06                     PUSH 0x6
LAB_00534654:
00534654  57                        PUSH EDI
00534655  8B CB                     MOV ECX,EBX
00534657  E8 39 EE EC FF            CALL 0x00403495
0053465C  8B 8D 78 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff78]
00534662  33 C0                     XOR EAX,EAX
00534664  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0053466A  5F                        POP EDI
0053466B  5E                        POP ESI
0053466C  5B                        POP EBX
0053466D  8B E5                     MOV ESP,EBP
0053466F  5D                        POP EBP
00534670  C2 04 00                  RET 0x4
LAB_00534673:
00534673  80 BB A4 01 00 00 05      CMP byte ptr [EBX + 0x1a4],0x5
0053467A  0F 85 37 29 00 00         JNZ 0x00536fb7
00534680  33 C9                     XOR ECX,ECX
00534682  3D 05 A1 00 00            CMP EAX,0xa105
00534687  0F 95 C1                  SETNZ CL
0053468A  81 C1 9F C0 00 00         ADD ECX,0xc09f
00534690  89 77 1C                  MOV dword ptr [EDI + 0x1c],ESI
00534693  89 4F 10                  MOV dword ptr [EDI + 0x10],ECX
00534696  8B 13                     MOV EDX,dword ptr [EBX]
00534698  57                        PUSH EDI
00534699  8B CB                     MOV ECX,EBX
0053469B  FF 12                     CALL dword ptr [EDX]
0053469D  8B 8D 78 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff78]
005346A3  33 C0                     XOR EAX,EAX
005346A5  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005346AB  5F                        POP EDI
005346AC  5E                        POP ESI
005346AD  5B                        POP EBX
005346AE  8B E5                     MOV ESP,EBP
005346B0  5D                        POP EBP
005346B1  C2 04 00                  RET 0x4
LAB_005346b4:
005346B4  3D 01 C0 00 00            CMP EAX,0xc001
005346B9  0F 85 F8 28 00 00         JNZ 0x00536fb7
005346BF  80 BB A4 01 00 00 05      CMP byte ptr [EBX + 0x1a4],0x5
005346C6  75 0F                     JNZ 0x005346d7
005346C8  80 BB AB 01 00 00 07      CMP byte ptr [EBX + 0x1ab],0x7
005346CF  75 06                     JNZ 0x005346d7
005346D1  89 35 88 87 80 00         MOV dword ptr [0x00808788],ESI
LAB_005346d7:
005346D7  C7 83 A0 01 00 00 01 00 00 00  MOV dword ptr [EBX + 0x1a0],0x1
005346E1  C7 47 10 01 A1 00 00      MOV dword ptr [EDI + 0x10],0xa101
005346E8  8B 0D 30 2A 80 00         MOV ECX,dword ptr [0x00802a30]
005346EE  57                        PUSH EDI
005346EF  8B 01                     MOV EAX,dword ptr [ECX]
005346F1  FF 10                     CALL dword ptr [EAX]
005346F3  8B 8D 78 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff78]
005346F9  33 C0                     XOR EAX,EAX
005346FB  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00534701  5F                        POP EDI
00534702  5E                        POP ESI
00534703  5B                        POP EBX
00534704  8B E5                     MOV ESP,EBP
00534706  5D                        POP EBP
00534707  C2 04 00                  RET 0x4
LAB_0053470a:
0053470A  68 4E 27 00 00            PUSH 0x274e
0053470F  E9 A1 26 00 00            JMP 0x00536db5
LAB_00534714:
00534714  2D 03 C0 00 00            SUB EAX,0xc003
00534719  74 2F                     JZ 0x0053474a
0053471B  48                        DEC EAX
0053471C  74 22                     JZ 0x00534740
0053471E  48                        DEC EAX
0053471F  0F 85 92 28 00 00         JNZ 0x00536fb7
00534725  68 88 1E 40 00            PUSH 0x401e88
0053472A  56                        PUSH ESI
0053472B  68 60 73 7C 00            PUSH 0x7c7360
00534730  E8 47 10 ED FF            CALL 0x0040577c
00534735  83 C4 08                  ADD ESP,0x8
00534738  50                        PUSH EAX
00534739  6A 01                     PUSH 0x1
0053473B  E9 14 FF FF FF            JMP 0x00534654
LAB_00534740:
00534740  68 4F 27 00 00            PUSH 0x274f
00534745  E9 6B 26 00 00            JMP 0x00536db5
LAB_0053474a:
0053474A  80 BB A4 01 00 00 05      CMP byte ptr [EBX + 0x1a4],0x5
00534751  75 0F                     JNZ 0x00534762
00534753  80 BB AB 01 00 00 07      CMP byte ptr [EBX + 0x1ab],0x7
0053475A  75 06                     JNZ 0x00534762
0053475C  89 35 88 87 80 00         MOV dword ptr [0x00808788],ESI
LAB_00534762:
00534762  8A 83 A9 01 00 00         MOV AL,byte ptr [EBX + 0x1a9]
00534768  84 C0                     TEST AL,AL
0053476A  0F 84 47 28 00 00         JZ 0x00536fb7
00534770  8A 8B AA 01 00 00         MOV CL,byte ptr [EBX + 0x1aa]
00534776  88 83 A4 01 00 00         MOV byte ptr [EBX + 0x1a4],AL
0053477C  88 8B A9 01 00 00         MOV byte ptr [EBX + 0x1a9],CL
00534782  8B CB                     MOV ECX,EBX
00534784  C6 83 AA 01 00 00 00      MOV byte ptr [EBX + 0x1aa],0x0
0053478B  E8 C1 E0 EC FF            CALL 0x00402851
00534790  8B 8D 78 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff78]
00534796  33 C0                     XOR EAX,EAX
00534798  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0053479E  5F                        POP EDI
0053479F  5E                        POP ESI
005347A0  5B                        POP EBX
005347A1  8B E5                     MOV ESP,EBP
005347A3  5D                        POP EBP
005347A4  C2 04 00                  RET 0x4
LAB_005347a7:
005347A7  68 88 1E 40 00            PUSH 0x401e88
005347AC  56                        PUSH ESI
005347AD  68 8C 71 7C 00            PUSH 0x7c718c
005347B2  E8 C5 0F ED FF            CALL 0x0040577c
005347B7  83 C4 08                  ADD ESP,0x8
005347BA  50                        PUSH EAX
005347BB  6A 01                     PUSH 0x1
005347BD  E9 92 FE FF FF            JMP 0x00534654
LAB_005347c2:
005347C2  05 61 3F FF FF            ADD EAX,0xffff3f61
005347C7  83 F8 16                  CMP EAX,0x16
005347CA  0F 87 E7 27 00 00         JA 0x00536fb7
switchD_005347d0::switchD:
005347D0  FF 24 85 D4 70 53 00      JMP dword ptr [EAX*0x4 + 0x5370d4]
switchD_005347d0::caseD_c09f:
005347D7  8A 83 A4 01 00 00         MOV AL,byte ptr [EBX + 0x1a4]
005347DD  8B D0                     MOV EDX,EAX
005347DF  81 E2 FF 00 00 00         AND EDX,0xff
005347E5  8D 4A FF                  LEA ECX,[EDX + -0x1]
005347E8  83 F9 0C                  CMP ECX,0xc
005347EB  0F 87 C6 27 00 00         JA 0x00536fb7
switchD_005347f1::switchD:
005347F1  FF 24 8D 30 71 53 00      JMP dword ptr [ECX*0x4 + 0x537130]
switchD_005347f1::caseD_1:
005347F8  8B CB                     MOV ECX,EBX
005347FA  88 83 A9 01 00 00         MOV byte ptr [EBX + 0x1a9],AL
00534800  C6 83 A4 01 00 00 03      MOV byte ptr [EBX + 0x1a4],0x3
00534807  E8 45 E0 EC FF            CALL 0x00402851
0053480C  8B 8D 78 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff78]
00534812  33 C0                     XOR EAX,EAX
00534814  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0053481A  5F                        POP EDI
0053481B  5E                        POP ESI
0053481C  5B                        POP EBX
0053481D  8B E5                     MOV ESP,EBP
0053481F  5D                        POP EBP
00534820  C2 04 00                  RET 0x4
switchD_005347f1::caseD_5:
00534823  33 C0                     XOR EAX,EAX
00534825  8A 83 AB 01 00 00         MOV AL,byte ptr [EBX + 0x1ab]
0053482B  48                        DEC EAX
0053482C  83 F8 06                  CMP EAX,0x6
0053482F  0F 87 82 27 00 00         JA 0x00536fb7
switchD_00534835::switchD:
00534835  FF 24 85 64 71 53 00      JMP dword ptr [EAX*0x4 + 0x537164]
switchD_00534835::caseD_5:
0053483C  68 FF 00 00 00            PUSH 0xff
00534841  8B CB                     MOV ECX,EBX
00534843  E8 FA 11 ED FF            CALL 0x00405a42
00534848  C7 83 9C 01 00 00 02 71 00 00  MOV dword ptr [EBX + 0x19c],0x7102
00534852  A0 83 87 80 00            MOV AL,[0x00808783]
00534857  3C 03                     CMP AL,0x3
00534859  0F 85 58 27 00 00         JNZ 0x00536fb7
0053485F  8B 8D 78 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff78]
00534865  C7 05 0A C5 80 00 01 00 00 00  MOV dword ptr [0x0080c50a],0x1
0053486F  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00534875  33 C0                     XOR EAX,EAX
00534877  5F                        POP EDI
00534878  5E                        POP ESI
00534879  5B                        POP EBX
0053487A  8B E5                     MOV ESP,EBP
0053487C  5D                        POP EBP
0053487D  C2 04 00                  RET 0x4
switchD_00534835::caseD_4:
00534880  68 FF 00 00 00            PUSH 0xff
00534885  8B CB                     MOV ECX,EBX
00534887  E8 B6 11 ED FF            CALL 0x00405a42
0053488C  C7 83 9C 01 00 00 02 61 00 00  MOV dword ptr [EBX + 0x19c],0x6102
00534896  A0 83 87 80 00            MOV AL,[0x00808783]
0053489B  3C 03                     CMP AL,0x3
0053489D  75 0A                     JNZ 0x005348a9
0053489F  C7 05 0A C5 80 00 01 00 00 00  MOV dword ptr [0x0080c50a],0x1
LAB_005348a9:
005348A9  A0 A0 67 80 00            MOV AL,[0x008067a0]
005348AE  84 C0                     TEST AL,AL
005348B0  0F 84 01 27 00 00         JZ 0x00536fb7
005348B6  A1 38 2A 80 00            MOV EAX,[0x00802a38]
005348BB  3B C6                     CMP EAX,ESI
005348BD  0F 84 AC 09 00 00         JZ 0x0053526f
005348C3  8B 88 E4 00 00 00         MOV ECX,dword ptr [EAX + 0xe4]
005348C9  8B 50 34                  MOV EDX,dword ptr [EAX + 0x34]
005348CC  2B CA                     SUB ECX,EDX
005348CE  81 F9 70 17 00 00         CMP ECX,0x1770
005348D4  1B D2                     SBB EDX,EDX
005348D6  F7 DA                     NEG EDX
005348D8  83 C2 02                  ADD EDX,0x2
005348DB  52                        PUSH EDX
005348DC  E9 90 09 00 00            JMP 0x00535271
switchD_00534835::caseD_3:
005348E1  68 1E EF 80 00            PUSH 0x80ef1e
005348E6  68 80 76 80 00            PUSH 0x807680
005348EB  68 E4 6E 7C 00            PUSH 0x7c6ee4
005348F0  68 1A EE 80 00            PUSH 0x80ee1a
005348F5  FF 15 E8 BD 85 00         CALL dword ptr [0x0085bde8]
005348FB  83 C4 10                  ADD ESP,0x10
005348FE  8B CB                     MOV ECX,EBX
00534900  68 FF 00 00 00            PUSH 0xff
00534905  E8 38 11 ED FF            CALL 0x00405a42
0053490A  BF 1A EE 80 00            MOV EDI,0x80ee1a
0053490F  83 C9 FF                  OR ECX,0xffffffff
00534912  33 C0                     XOR EAX,EAX
00534914  C7 83 9C 01 00 00 00 61 00 00  MOV dword ptr [EBX + 0x19c],0x6100
0053491E  F2 AE                     SCASB.REPNE ES:EDI
00534920  F7 D1                     NOT ECX
00534922  2B F9                     SUB EDI,ECX
00534924  6A 00                     PUSH 0x0
00534926  8B C1                     MOV EAX,ECX
00534928  8B F7                     MOV ESI,EDI
0053492A  BF 16 ED 80 00            MOV EDI,0x80ed16
0053492F  C1 E9 02                  SHR ECX,0x2
00534932  F3 A5                     MOVSD.REP ES:EDI,ESI
00534934  8B C8                     MOV ECX,EAX
00534936  83 E1 03                  AND ECX,0x3
00534939  F3 A4                     MOVSB.REP ES:EDI,ESI
0053493B  B9 20 76 80 00            MOV ECX,0x807620
00534940  E8 07 02 ED FF            CALL 0x00404b4c
00534945  B9 66 06 00 00            MOV ECX,0x666
0053494A  BE 4F A1 80 00            MOV ESI,0x80a14f
0053494F  BF B6 87 80 00            MOV EDI,0x8087b6
00534954  F3 A5                     MOVSD.REP ES:EDI,ESI
00534956  A4                        MOVSB ES:EDI,ESI
00534957  B9 00 01 00 00            MOV ECX,0x100
0053495C  BE EC BA 80 00            MOV ESI,0x80baec
00534961  BF 3B E4 80 00            MOV EDI,0x80e43b
00534966  F3 A5                     MOVSD.REP ES:EDI,ESI
00534968  A1 12 ED 80 00            MOV EAX,[0x0080ed12]
0053496D  85 C0                     TEST EAX,EAX
0053496F  74 0A                     JZ 0x0053497b
00534971  68 12 ED 80 00            PUSH 0x80ed12
00534976  E8 E5 66 17 00            CALL 0x006ab060
LAB_0053497b:
0053497B  68 DB 08 00 00            PUSH 0x8db
00534980  E8 EB 62 17 00            CALL 0x006aac70
00534985  B9 36 02 00 00            MOV ECX,0x236
0053498A  BE E8 BA 80 00            MOV ESI,0x80bae8
0053498F  8B F8                     MOV EDI,EAX
00534991  A3 12 ED 80 00            MOV [0x0080ed12],EAX
00534996  F3 A5                     MOVSD.REP ES:EDI,ESI
00534998  66 A5                     MOVSW ES:EDI,ESI
0053499A  A4                        MOVSB ES:EDI,ESI
0053499B  8B 8D 78 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff78]
005349A1  C7 05 9C 87 80 00 00 00 00 00  MOV dword ptr [0x0080879c],0x0
005349AB  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005349B1  33 C0                     XOR EAX,EAX
005349B3  5F                        POP EDI
005349B4  5E                        POP ESI
005349B5  5B                        POP EBX
005349B6  8B E5                     MOV ESP,EBP
005349B8  5D                        POP EBP
005349B9  C2 04 00                  RET 0x4
switchD_00534835::caseD_6:
005349BC  83 C9 FF                  OR ECX,0xffffffff
005349BF  BF 80 76 80 00            MOV EDI,0x807680
005349C4  33 C0                     XOR EAX,EAX
005349C6  8D 53 6C                  LEA EDX,[EBX + 0x6c]
005349C9  F2 AE                     SCASB.REPNE ES:EDI
005349CB  F7 D1                     NOT ECX
005349CD  2B F9                     SUB EDI,ECX
005349CF  8B C1                     MOV EAX,ECX
005349D1  8B F7                     MOV ESI,EDI
005349D3  8B FA                     MOV EDI,EDX
005349D5  C1 E9 02                  SHR ECX,0x2
005349D8  F3 A5                     MOVSD.REP ES:EDI,ESI
005349DA  8B C8                     MOV ECX,EAX
005349DC  33 C0                     XOR EAX,EAX
005349DE  83 E1 03                  AND ECX,0x3
005349E1  F3 A4                     MOVSB.REP ES:EDI,ESI
005349E3  8B 3D EC AC 79 00         MOV EDI,dword ptr [0x0079acec]
005349E9  83 C9 FF                  OR ECX,0xffffffff
005349EC  F2 AE                     SCASB.REPNE ES:EDI
005349EE  F7 D1                     NOT ECX
005349F0  2B F9                     SUB EDI,ECX
005349F2  8B C1                     MOV EAX,ECX
005349F4  8B F7                     MOV ESI,EDI
005349F6  8B FA                     MOV EDI,EDX
005349F8  8B D0                     MOV EDX,EAX
005349FA  83 C9 FF                  OR ECX,0xffffffff
005349FD  33 C0                     XOR EAX,EAX
005349FF  F2 AE                     SCASB.REPNE ES:EDI
00534A01  8B CA                     MOV ECX,EDX
00534A03  4F                        DEC EDI
00534A04  C1 E9 02                  SHR ECX,0x2
00534A07  F3 A5                     MOVSD.REP ES:EDI,ESI
00534A09  8B CA                     MOV ECX,EDX
00534A0B  83 E1 03                  AND ECX,0x3
00534A0E  F3 A4                     MOVSB.REP ES:EDI,ESI
00534A10  BF DD 7D 80 00            MOV EDI,0x807ddd
00534A15  83 C9 FF                  OR ECX,0xffffffff
00534A18  F2 AE                     SCASB.REPNE ES:EDI
00534A1A  F7 D1                     NOT ECX
00534A1C  2B F9                     SUB EDI,ECX
00534A1E  8B F7                     MOV ESI,EDI
00534A20  8B D1                     MOV EDX,ECX
00534A22  8D 7B 6C                  LEA EDI,[EBX + 0x6c]
00534A25  83 C9 FF                  OR ECX,0xffffffff
00534A28  F2 AE                     SCASB.REPNE ES:EDI
00534A2A  8B CA                     MOV ECX,EDX
00534A2C  4F                        DEC EDI
00534A2D  C1 E9 02                  SHR ECX,0x2
00534A30  F3 A5                     MOVSD.REP ES:EDI,ESI
00534A32  8B CA                     MOV ECX,EDX
00534A34  8D 43 6C                  LEA EAX,[EBX + 0x6c]
00534A37  83 E1 03                  AND ECX,0x3
00534A3A  50                        PUSH EAX
00534A3B  F3 A4                     MOVSB.REP ES:EDI,ESI
00534A3D  50                        PUSH EAX
00534A3E  E8 3D 38 18 00            CALL 0x006b8280
00534A43  8B 3D 00 AD 79 00         MOV EDI,dword ptr [0x0079ad00]
00534A49  83 C9 FF                  OR ECX,0xffffffff
00534A4C  33 C0                     XOR EAX,EAX
00534A4E  F2 AE                     SCASB.REPNE ES:EDI
00534A50  F7 D1                     NOT ECX
00534A52  2B F9                     SUB EDI,ECX
00534A54  8B F7                     MOV ESI,EDI
00534A56  8B D1                     MOV EDX,ECX
00534A58  8D 7B 6C                  LEA EDI,[EBX + 0x6c]
00534A5B  83 C9 FF                  OR ECX,0xffffffff
00534A5E  F2 AE                     SCASB.REPNE ES:EDI
00534A60  8B CA                     MOV ECX,EDX
00534A62  4F                        DEC EDI
00534A63  C1 E9 02                  SHR ECX,0x2
00534A66  F3 A5                     MOVSD.REP ES:EDI,ESI
00534A68  8B CA                     MOV ECX,EDX
00534A6A  83 E1 03                  AND ECX,0x3
00534A6D  F3 A4                     MOVSB.REP ES:EDI,ESI
00534A6F  8D BB F5 01 00 00         LEA EDI,[EBX + 0x1f5]
00534A75  83 C9 FF                  OR ECX,0xffffffff
00534A78  F2 AE                     SCASB.REPNE ES:EDI
00534A7A  F7 D1                     NOT ECX
00534A7C  2B F9                     SUB EDI,ECX
00534A7E  8B F7                     MOV ESI,EDI
00534A80  8B D1                     MOV EDX,ECX
00534A82  8D 7B 6C                  LEA EDI,[EBX + 0x6c]
00534A85  83 C9 FF                  OR ECX,0xffffffff
00534A88  F2 AE                     SCASB.REPNE ES:EDI
00534A8A  8B CA                     MOV ECX,EDX
00534A8C  4F                        DEC EDI
00534A8D  C1 E9 02                  SHR ECX,0x2
00534A90  F3 A5                     MOVSD.REP ES:EDI,ESI
00534A92  8B CA                     MOV ECX,EDX
00534A94  83 E1 03                  AND ECX,0x3
00534A97  F3 A4                     MOVSB.REP ES:EDI,ESI
00534A99  8B 3D F4 AC 79 00         MOV EDI,dword ptr [0x0079acf4]
00534A9F  83 C9 FF                  OR ECX,0xffffffff
00534AA2  F2 AE                     SCASB.REPNE ES:EDI
00534AA4  F7 D1                     NOT ECX
00534AA6  2B F9                     SUB EDI,ECX
00534AA8  8B F7                     MOV ESI,EDI
00534AAA  8B D1                     MOV EDX,ECX
00534AAC  8D 7B 6C                  LEA EDI,[EBX + 0x6c]
00534AAF  83 C9 FF                  OR ECX,0xffffffff
00534AB2  F2 AE                     SCASB.REPNE ES:EDI
00534AB4  8B CA                     MOV ECX,EDX
00534AB6  4F                        DEC EDI
00534AB7  C1 E9 02                  SHR ECX,0x2
00534ABA  F3 A5                     MOVSD.REP ES:EDI,ESI
00534ABC  8B CA                     MOV ECX,EDX
00534ABE  8D 43 6C                  LEA EAX,[EBX + 0x6c]
00534AC1  83 E1 03                  AND ECX,0x3
00534AC4  50                        PUSH EAX
00534AC5  F3 A4                     MOVSB.REP ES:EDI,ESI
00534AC7  FF 15 E8 BC 85 00         CALL dword ptr [0x0085bce8]
00534ACD  83 C9 FF                  OR ECX,0xffffffff
00534AD0  BF 80 76 80 00            MOV EDI,0x807680
00534AD5  33 C0                     XOR EAX,EAX
00534AD7  8D 53 6C                  LEA EDX,[EBX + 0x6c]
00534ADA  F2 AE                     SCASB.REPNE ES:EDI
00534ADC  F7 D1                     NOT ECX
00534ADE  2B F9                     SUB EDI,ECX
00534AE0  8B C1                     MOV EAX,ECX
00534AE2  8B F7                     MOV ESI,EDI
00534AE4  8B FA                     MOV EDI,EDX
00534AE6  C1 E9 02                  SHR ECX,0x2
00534AE9  F3 A5                     MOVSD.REP ES:EDI,ESI
00534AEB  8B C8                     MOV ECX,EAX
00534AED  33 C0                     XOR EAX,EAX
00534AEF  83 E1 03                  AND ECX,0x3
00534AF2  F3 A4                     MOVSB.REP ES:EDI,ESI
00534AF4  8B 3D EC AC 79 00         MOV EDI,dword ptr [0x0079acec]
00534AFA  83 C9 FF                  OR ECX,0xffffffff
00534AFD  F2 AE                     SCASB.REPNE ES:EDI
00534AFF  F7 D1                     NOT ECX
00534B01  2B F9                     SUB EDI,ECX
00534B03  8B C1                     MOV EAX,ECX
00534B05  8B F7                     MOV ESI,EDI
00534B07  8B FA                     MOV EDI,EDX
00534B09  8B D0                     MOV EDX,EAX
00534B0B  83 C9 FF                  OR ECX,0xffffffff
00534B0E  33 C0                     XOR EAX,EAX
00534B10  F2 AE                     SCASB.REPNE ES:EDI
00534B12  8B CA                     MOV ECX,EDX
00534B14  4F                        DEC EDI
00534B15  C1 E9 02                  SHR ECX,0x2
00534B18  F3 A5                     MOVSD.REP ES:EDI,ESI
00534B1A  8B CA                     MOV ECX,EDX
00534B1C  83 E1 03                  AND ECX,0x3
00534B1F  F3 A4                     MOVSB.REP ES:EDI,ESI
00534B21  BF DD 7D 80 00            MOV EDI,0x807ddd
00534B26  83 C9 FF                  OR ECX,0xffffffff
00534B29  F2 AE                     SCASB.REPNE ES:EDI
00534B2B  F7 D1                     NOT ECX
00534B2D  2B F9                     SUB EDI,ECX
00534B2F  8B F7                     MOV ESI,EDI
00534B31  8B D1                     MOV EDX,ECX
00534B33  8D 7B 6C                  LEA EDI,[EBX + 0x6c]
00534B36  83 C9 FF                  OR ECX,0xffffffff
00534B39  F2 AE                     SCASB.REPNE ES:EDI
00534B3B  8B CA                     MOV ECX,EDX
00534B3D  4F                        DEC EDI
00534B3E  C1 E9 02                  SHR ECX,0x2
00534B41  F3 A5                     MOVSD.REP ES:EDI,ESI
00534B43  8B CA                     MOV ECX,EDX
00534B45  8D 43 6C                  LEA EAX,[EBX + 0x6c]
00534B48  83 E1 03                  AND ECX,0x3
00534B4B  50                        PUSH EAX
00534B4C  F3 A4                     MOVSB.REP ES:EDI,ESI
00534B4E  50                        PUSH EAX
00534B4F  E8 2C 37 18 00            CALL 0x006b8280
00534B54  8B 3D 00 AD 79 00         MOV EDI,dword ptr [0x0079ad00]
00534B5A  83 C9 FF                  OR ECX,0xffffffff
00534B5D  33 C0                     XOR EAX,EAX
00534B5F  F2 AE                     SCASB.REPNE ES:EDI
00534B61  F7 D1                     NOT ECX
00534B63  2B F9                     SUB EDI,ECX
00534B65  8B D1                     MOV EDX,ECX
00534B67  8B F7                     MOV ESI,EDI
00534B69  83 C9 FF                  OR ECX,0xffffffff
00534B6C  8D 7B 6C                  LEA EDI,[EBX + 0x6c]
00534B6F  F2 AE                     SCASB.REPNE ES:EDI
00534B71  8B CA                     MOV ECX,EDX
00534B73  4F                        DEC EDI
00534B74  C1 E9 02                  SHR ECX,0x2
00534B77  F3 A5                     MOVSD.REP ES:EDI,ESI
00534B79  8B CA                     MOV ECX,EDX
00534B7B  83 E1 03                  AND ECX,0x3
00534B7E  F3 A4                     MOVSB.REP ES:EDI,ESI
00534B80  8D BB F5 01 00 00         LEA EDI,[EBX + 0x1f5]
00534B86  83 C9 FF                  OR ECX,0xffffffff
00534B89  F2 AE                     SCASB.REPNE ES:EDI
00534B8B  F7 D1                     NOT ECX
00534B8D  2B F9                     SUB EDI,ECX
00534B8F  8B F7                     MOV ESI,EDI
00534B91  8B D1                     MOV EDX,ECX
00534B93  8D 7B 6C                  LEA EDI,[EBX + 0x6c]
00534B96  83 C9 FF                  OR ECX,0xffffffff
00534B99  F2 AE                     SCASB.REPNE ES:EDI
00534B9B  8B CA                     MOV ECX,EDX
00534B9D  4F                        DEC EDI
00534B9E  C1 E9 02                  SHR ECX,0x2
00534BA1  F3 A5                     MOVSD.REP ES:EDI,ESI
00534BA3  8B CA                     MOV ECX,EDX
00534BA5  83 E1 03                  AND ECX,0x3
00534BA8  F3 A4                     MOVSB.REP ES:EDI,ESI
00534BAA  8B 3D F8 AC 79 00         MOV EDI,dword ptr [0x0079acf8]
00534BB0  83 C9 FF                  OR ECX,0xffffffff
00534BB3  F2 AE                     SCASB.REPNE ES:EDI
00534BB5  F7 D1                     NOT ECX
00534BB7  2B F9                     SUB EDI,ECX
00534BB9  8B F7                     MOV ESI,EDI
00534BBB  8B D1                     MOV EDX,ECX
00534BBD  8D 7B 6C                  LEA EDI,[EBX + 0x6c]
00534BC0  83 C9 FF                  OR ECX,0xffffffff
00534BC3  F2 AE                     SCASB.REPNE ES:EDI
00534BC5  8B CA                     MOV ECX,EDX
00534BC7  4F                        DEC EDI
00534BC8  C1 E9 02                  SHR ECX,0x2
00534BCB  F3 A5                     MOVSD.REP ES:EDI,ESI
00534BCD  8B CA                     MOV ECX,EDX
00534BCF  8D 43 6C                  LEA EAX,[EBX + 0x6c]
00534BD2  83 E1 03                  AND ECX,0x3
00534BD5  50                        PUSH EAX
00534BD6  F3 A4                     MOVSB.REP ES:EDI,ESI
00534BD8  FF 15 E8 BC 85 00         CALL dword ptr [0x0085bce8]
00534BDE  8A 8B AA 01 00 00         MOV CL,byte ptr [EBX + 0x1aa]
00534BE4  8A 83 A9 01 00 00         MOV AL,byte ptr [EBX + 0x1a9]
00534BEA  88 8B A9 01 00 00         MOV byte ptr [EBX + 0x1a9],CL
00534BF0  8B CB                     MOV ECX,EBX
00534BF2  88 83 A4 01 00 00         MOV byte ptr [EBX + 0x1a4],AL
00534BF8  E8 54 DC EC FF            CALL 0x00402851
00534BFD  8B 8D 78 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff78]
00534C03  33 C0                     XOR EAX,EAX
00534C05  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00534C0B  5F                        POP EDI
00534C0C  5E                        POP ESI
00534C0D  5B                        POP EBX
00534C0E  8B E5                     MOV ESP,EBP
00534C10  5D                        POP EBP
00534C11  C2 04 00                  RET 0x4
switchD_00534835::caseD_2:
00534C14  83 C9 FF                  OR ECX,0xffffffff
00534C17  BF 80 76 80 00            MOV EDI,0x807680
00534C1C  33 C0                     XOR EAX,EAX
00534C1E  68 1A EE 80 00            PUSH 0x80ee1a
00534C23  F2 AE                     SCASB.REPNE ES:EDI
00534C25  F7 D1                     NOT ECX
00534C27  2B F9                     SUB EDI,ECX
00534C29  68 1A EE 80 00            PUSH 0x80ee1a
00534C2E  8B D1                     MOV EDX,ECX
00534C30  8B F7                     MOV ESI,EDI
00534C32  BF 1A EE 80 00            MOV EDI,0x80ee1a
00534C37  C1 E9 02                  SHR ECX,0x2
00534C3A  F3 A5                     MOVSD.REP ES:EDI,ESI
00534C3C  8B CA                     MOV ECX,EDX
00534C3E  83 E1 03                  AND ECX,0x3
00534C41  F3 A4                     MOVSB.REP ES:EDI,ESI
00534C43  8B 3D EC AC 79 00         MOV EDI,dword ptr [0x0079acec]
00534C49  83 C9 FF                  OR ECX,0xffffffff
00534C4C  F2 AE                     SCASB.REPNE ES:EDI
00534C4E  F7 D1                     NOT ECX
00534C50  2B F9                     SUB EDI,ECX
00534C52  8B F7                     MOV ESI,EDI
00534C54  8B D1                     MOV EDX,ECX
00534C56  BF 1A EE 80 00            MOV EDI,0x80ee1a
00534C5B  83 C9 FF                  OR ECX,0xffffffff
00534C5E  F2 AE                     SCASB.REPNE ES:EDI
00534C60  8B CA                     MOV ECX,EDX
00534C62  4F                        DEC EDI
00534C63  C1 E9 02                  SHR ECX,0x2
00534C66  F3 A5                     MOVSD.REP ES:EDI,ESI
00534C68  8B CA                     MOV ECX,EDX
00534C6A  83 E1 03                  AND ECX,0x3
00534C6D  F3 A4                     MOVSB.REP ES:EDI,ESI
00534C6F  BF DD 7D 80 00            MOV EDI,0x807ddd
00534C74  83 C9 FF                  OR ECX,0xffffffff
00534C77  F2 AE                     SCASB.REPNE ES:EDI
00534C79  F7 D1                     NOT ECX
00534C7B  2B F9                     SUB EDI,ECX
00534C7D  8B F7                     MOV ESI,EDI
00534C7F  8B D1                     MOV EDX,ECX
00534C81  BF 1A EE 80 00            MOV EDI,0x80ee1a
00534C86  83 C9 FF                  OR ECX,0xffffffff
00534C89  F2 AE                     SCASB.REPNE ES:EDI
00534C8B  8B CA                     MOV ECX,EDX
00534C8D  4F                        DEC EDI
00534C8E  C1 E9 02                  SHR ECX,0x2
00534C91  F3 A5                     MOVSD.REP ES:EDI,ESI
00534C93  8B CA                     MOV ECX,EDX
00534C95  83 E1 03                  AND ECX,0x3
00534C98  F3 A4                     MOVSB.REP ES:EDI,ESI
00534C9A  E8 E1 35 18 00            CALL 0x006b8280
00534C9F  8B 3D 00 AD 79 00         MOV EDI,dword ptr [0x0079ad00]
00534CA5  83 C9 FF                  OR ECX,0xffffffff
00534CA8  33 C0                     XOR EAX,EAX
00534CAA  F2 AE                     SCASB.REPNE ES:EDI
00534CAC  F7 D1                     NOT ECX
00534CAE  2B F9                     SUB EDI,ECX
00534CB0  8B F7                     MOV ESI,EDI
00534CB2  8B D1                     MOV EDX,ECX
00534CB4  BF 1A EE 80 00            MOV EDI,0x80ee1a
00534CB9  83 C9 FF                  OR ECX,0xffffffff
00534CBC  F2 AE                     SCASB.REPNE ES:EDI
00534CBE  8B CA                     MOV ECX,EDX
00534CC0  4F                        DEC EDI
00534CC1  C1 E9 02                  SHR ECX,0x2
00534CC4  F3 A5                     MOVSD.REP ES:EDI,ESI
00534CC6  8B CA                     MOV ECX,EDX
00534CC8  83 E1 03                  AND ECX,0x3
00534CCB  F3 A4                     MOVSB.REP ES:EDI,ESI
00534CCD  8D BB F5 01 00 00         LEA EDI,[EBX + 0x1f5]
00534CD3  83 C9 FF                  OR ECX,0xffffffff
00534CD6  F2 AE                     SCASB.REPNE ES:EDI
00534CD8  F7 D1                     NOT ECX
00534CDA  2B F9                     SUB EDI,ECX
00534CDC  8B F7                     MOV ESI,EDI
00534CDE  8B D1                     MOV EDX,ECX
00534CE0  BF 1A EE 80 00            MOV EDI,0x80ee1a
00534CE5  83 C9 FF                  OR ECX,0xffffffff
00534CE8  F2 AE                     SCASB.REPNE ES:EDI
00534CEA  4F                        DEC EDI
00534CEB  8B CA                     MOV ECX,EDX
00534CED  C1 E9 02                  SHR ECX,0x2
00534CF0  F3 A5                     MOVSD.REP ES:EDI,ESI
00534CF2  8B CA                     MOV ECX,EDX
00534CF4  68 FF 00 00 00            PUSH 0xff
00534CF9  83 E1 03                  AND ECX,0x3
00534CFC  F3 A4                     MOVSB.REP ES:EDI,ESI
00534CFE  8B CB                     MOV ECX,EBX
00534D00  E8 3D 0D ED FF            CALL 0x00405a42
00534D05  8B 8D 78 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff78]
00534D0B  C7 83 9C 01 00 00 00 61 00 00  MOV dword ptr [EBX + 0x19c],0x6100
00534D15  C7 05 9C 87 80 00 01 00 00 00  MOV dword ptr [0x0080879c],0x1
00534D1F  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00534D25  33 C0                     XOR EAX,EAX
00534D27  5F                        POP EDI
00534D28  5E                        POP ESI
00534D29  5B                        POP EBX
00534D2A  8B E5                     MOV ESP,EBP
00534D2C  5D                        POP EBP
00534D2D  C2 04 00                  RET 0x4
switchD_00534835::caseD_7:
00534D30  C7 43 28 FF 44 00 00      MOV dword ptr [EBX + 0x28],0x44ff
00534D37  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
00534D3D  8D 7B 18                  LEA EDI,[EBX + 0x18]
00534D40  8B 01                     MOV EAX,dword ptr [ECX]
00534D42  57                        PUSH EDI
00534D43  FF 50 20                  CALL dword ptr [EAX + 0x20]
00534D46  8B 13                     MOV EDX,dword ptr [EBX]
00534D48  57                        PUSH EDI
00534D49  8B CB                     MOV ECX,EBX
00534D4B  C7 43 28 01 C0 00 00      MOV dword ptr [EBX + 0x28],0xc001
00534D52  89 73 34                  MOV dword ptr [EBX + 0x34],ESI
00534D55  FF 12                     CALL dword ptr [EDX]
00534D57  8B 8D 78 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff78]
00534D5D  33 C0                     XOR EAX,EAX
00534D5F  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00534D65  5F                        POP EDI
00534D66  5E                        POP ESI
00534D67  5B                        POP EBX
00534D68  8B E5                     MOV ESP,EBP
00534D6A  5D                        POP EBP
00534D6B  C2 04 00                  RET 0x4
switchD_005347f1::caseD_9:
00534D6E  8B 0D 1A 73 80 00         MOV ECX,dword ptr [0x0080731a]
00534D74  33 C0                     XOR EAX,EAX
00534D76  3B CE                     CMP ECX,ESI
00534D78  8B 8D 78 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff78]
00534D7E  0F 94 C0                  SETZ AL
00534D81  A3 1A 73 80 00            MOV [0x0080731a],EAX
00534D86  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00534D8C  33 C0                     XOR EAX,EAX
00534D8E  5F                        POP EDI
00534D8F  5E                        POP ESI
00534D90  5B                        POP EBX
00534D91  8B E5                     MOV ESP,EBP
00534D93  5D                        POP EBP
00534D94  C2 04 00                  RET 0x4
switchD_005347f1::caseD_d:
00534D97  8B 4F 14                  MOV ECX,dword ptr [EDI + 0x14]
00534D9A  8D 43 18                  LEA EAX,[EBX + 0x18]
00534D9D  50                        PUSH EAX
00534D9E  8A 11                     MOV DL,byte ptr [ECX]
00534DA0  8B 8B B9 01 00 00         MOV ECX,dword ptr [EBX + 0x1b9]
00534DA6  FE CA                     DEC DL
00534DA8  51                        PUSH ECX
00534DA9  6A 02                     PUSH 0x2
00534DAB  8B CB                     MOV ECX,EBX
00534DAD  88 93 05 03 00 00         MOV byte ptr [EBX + 0x305],DL
00534DB3  C7 43 28 20 00 00 00      MOV dword ptr [EBX + 0x28],0x20
00534DBA  C7 43 2C 01 00 00 00      MOV dword ptr [EBX + 0x2c],0x1
00534DC1  E8 BA 12 1B 00            CALL 0x006e6080
00534DC6  8B 8D 78 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff78]
00534DCC  33 C0                     XOR EAX,EAX
00534DCE  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00534DD4  5F                        POP EDI
00534DD5  5E                        POP ESI
00534DD6  5B                        POP EBX
00534DD7  8B E5                     MOV ESP,EBP
00534DD9  5D                        POP EBP
00534DDA  C2 04 00                  RET 0x4
switchD_005347f1::caseD_8:
00534DDD  8B 57 14                  MOV EDX,dword ptr [EDI + 0x14]
00534DE0  8A 0D 7E 87 80 00         MOV CL,byte ptr [0x0080877e]
00534DE6  B0 04                     MOV AL,0x4
00534DE8  2A 02                     SUB AL,byte ptr [EDX]
00534DEA  84 C9                     TEST CL,CL
00534DEC  A2 3B 73 80 00            MOV [0x0080733b],AL
00534DF1  74 12                     JZ 0x00534e05
00534DF3  33 C9                     XOR ECX,ECX
00534DF5  8A C8                     MOV CL,AL
00534DF7  8D 04 49                  LEA EAX,[ECX + ECX*0x2]
00534DFA  C1 E0 03                  SHL EAX,0x3
00534DFD  8B 90 E8 2A 7C 00         MOV EDX,dword ptr [EAX + 0x7c2ae8]
00534E03  EB 10                     JMP 0x00534e15
LAB_00534e05:
00534E05  33 C9                     XOR ECX,ECX
00534E07  8A C8                     MOV CL,AL
00534E09  8D 04 49                  LEA EAX,[ECX + ECX*0x2]
00534E0C  C1 E0 03                  SHL EAX,0x3
00534E0F  8B 90 F4 2A 7C 00         MOV EDX,dword ptr [EAX + 0x7c2af4]
LAB_00534e15:
00534E15  89 15 54 76 80 00         MOV dword ptr [0x00807654],EDX
00534E1B  8A 15 83 87 80 00         MOV DL,byte ptr [0x00808783]
00534E21  80 FA 03                  CMP DL,0x3
00534E24  75 36                     JNZ 0x00534e5c
00534E26  6A FF                     PUSH -0x1
00534E28  8D 45 BC                  LEA EAX,[EBP + -0x44]
00534E2B  6A 01                     PUSH 0x1
00534E2D  89 4D C0                  MOV dword ptr [EBP + -0x40],ECX
00534E30  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
00534E36  50                        PUSH EAX
00534E37  6A 05                     PUSH 0x5
00534E39  C7 45 BC 04 00 00 00      MOV dword ptr [EBP + -0x44],0x4
00534E40  E8 EE ED EC FF            CALL 0x00403c33
00534E45  8B 8D 78 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff78]
00534E4B  33 C0                     XOR EAX,EAX
00534E4D  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00534E53  5F                        POP EDI
00534E54  5E                        POP ESI
00534E55  5B                        POP EBX
00534E56  8B E5                     MOV ESP,EBP
00534E58  5D                        POP EBP
00534E59  C2 04 00                  RET 0x4
LAB_00534e5c:
00534E5C  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
00534E62  3B CE                     CMP ECX,ESI
00534E64  0F 84 4D 21 00 00         JZ 0x00536fb7
00534E6A  8B 90 E4 2A 7C 00         MOV EDX,dword ptr [EAX + 0x7c2ae4]
00534E70  8B 80 F0 2A 7C 00         MOV EAX,dword ptr [EAX + 0x7c2af0]
00534E76  52                        PUSH EDX
00534E77  50                        PUSH EAX
00534E78  E8 C3 37 1B 00            CALL 0x006e8640
00534E7D  8B 8D 78 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff78]
00534E83  33 C0                     XOR EAX,EAX
00534E85  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00534E8B  5F                        POP EDI
00534E8C  5E                        POP ESI
00534E8D  5B                        POP EBX
00534E8E  8B E5                     MOV ESP,EBP
00534E90  5D                        POP EBP
00534E91  C2 04 00                  RET 0x4
switchD_005347f1::caseD_2:
00534E94  8A 8B A9 01 00 00         MOV CL,byte ptr [EBX + 0x1a9]
00534E9A  88 83 A9 01 00 00         MOV byte ptr [EBX + 0x1a9],AL
00534EA0  88 8B AA 01 00 00         MOV byte ptr [EBX + 0x1aa],CL
00534EA6  8B CB                     MOV ECX,EBX
00534EA8  C6 83 A4 01 00 00 07      MOV byte ptr [EBX + 0x1a4],0x7
00534EAF  E8 9D D9 EC FF            CALL 0x00402851
00534EB4  8B 8D 78 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff78]
00534EBA  33 C0                     XOR EAX,EAX
00534EBC  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00534EC2  5F                        POP EDI
00534EC3  5E                        POP ESI
00534EC4  5B                        POP EBX
00534EC5  8B E5                     MOV ESP,EBP
00534EC7  5D                        POP EBP
00534EC8  C2 04 00                  RET 0x4
switchD_005347f1::caseD_6:
00534ECB  8A 0D 01 73 80 00         MOV CL,byte ptr [0x00807301]
00534ED1  6A 01                     PUSH 0x1
00534ED3  80 F1 01                  XOR CL,0x1
00534ED6  88 0D 01 73 80 00         MOV byte ptr [0x00807301],CL
00534EDC  B9 58 76 80 00            MOV ECX,0x807658
00534EE1  E8 29 02 ED FF            CALL 0x0040510f
00534EE6  8B 8D 78 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff78]
00534EEC  33 C0                     XOR EAX,EAX
00534EEE  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00534EF4  5F                        POP EDI
00534EF5  5E                        POP ESI
00534EF6  5B                        POP EBX
00534EF7  8B E5                     MOV ESP,EBP
00534EF9  5D                        POP EBP
00534EFA  C2 04 00                  RET 0x4
switchD_005347f1::caseD_7:
00534EFD  B9 20 76 80 00            MOV ECX,0x807620
00534F02  E8 7F EF EC FF            CALL 0x00403e86
00534F07  8B 57 14                  MOV EDX,dword ptr [EDI + 0x14]
00534F0A  8B 02                     MOV EAX,dword ptr [EDX]
00534F0C  48                        DEC EAX
00534F0D  74 18                     JZ 0x00534f27
00534F0F  48                        DEC EAX
00534F10  74 0C                     JZ 0x00534f1e
00534F12  48                        DEC EAX
00534F13  75 19                     JNZ 0x00534f2e
00534F15  C6 05 00 73 80 00 02      MOV byte ptr [0x00807300],0x2
00534F1C  EB 10                     JMP 0x00534f2e
LAB_00534f1e:
00534F1E  C6 05 00 73 80 00 08      MOV byte ptr [0x00807300],0x8
00534F25  EB 07                     JMP 0x00534f2e
LAB_00534f27:
00534F27  C6 05 00 73 80 00 01      MOV byte ptr [0x00807300],0x1
LAB_00534f2e:
00534F2E  A1 00 73 80 00            MOV EAX,[0x00807300]
00534F33  25 FF 00 00 00            AND EAX,0xff
00534F38  48                        DEC EAX
00534F39  83 F8 07                  CMP EAX,0x7
00534F3C  0F 87 BA 01 00 00         JA 0x005350fc
switchD_00534f42::switchD:
00534F42  FF 24 85 80 71 53 00      JMP dword ptr [EAX*0x4 + 0x537180]
switchD_00534f42::caseD_1:
00534F49  33 FF                     XOR EDI,EDI
00534F4B  89 7D F8                  MOV dword ptr [EBP + -0x8],EDI
00534F4E  E9 AC 01 00 00            JMP 0x005350ff
switchD_00534f42::caseD_2:
00534F53  8B 0D F8 8D 85 00         MOV ECX,dword ptr [0x00858df8]
00534F59  8D 85 38 FF FF FF         LEA EAX,[EBP + 0xffffff38]
00534F5F  8D 95 34 FF FF FF         LEA EDX,[EBP + 0xffffff34]
00534F65  56                        PUSH ESI
00534F66  50                        PUSH EAX
00534F67  89 8D 34 FF FF FF         MOV dword ptr [EBP + 0xffffff34],ECX
00534F6D  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00534F73  E8 78 88 1F 00            CALL 0x0072d7f0
00534F78  83 C4 08                  ADD ESP,0x8
00534F7B  3B C6                     CMP EAX,ESI
00534F7D  75 4D                     JNZ 0x00534fcc
00534F7F  A1 58 76 80 00            MOV EAX,[0x00807658]
00534F84  8B 3D 5C 76 80 00         MOV EDI,dword ptr [0x0080765c]
00534F8A  3B C6                     CMP EAX,ESI
00534F8C  74 0B                     JZ 0x00534f99
00534F8E  8B 87 80 00 00 00         MOV EAX,dword ptr [EDI + 0x80]
00534F94  83 E0 01                  AND EAX,0x1
00534F97  EB 02                     JMP 0x00534f9b
LAB_00534f99:
00534F99  33 C0                     XOR EAX,EAX
LAB_00534f9b:
00534F9B  3B C6                     CMP EAX,ESI
00534F9D  74 16                     JZ 0x00534fb5
00534F9F  8D 4D DC                  LEA ECX,[EBP + -0x24]
00534FA2  8D 55 D4                  LEA EDX,[EBP + -0x2c]
00534FA5  51                        PUSH ECX
00534FA6  52                        PUSH EDX
00534FA7  6A 03                     PUSH 0x3
00534FA9  57                        PUSH EDI
00534FAA  E8 51 2E 18 00            CALL 0x006b7e00
00534FAF  8B 3D 5C 76 80 00         MOV EDI,dword ptr [0x0080765c]
LAB_00534fb5:
00534FB5  8B 4D DC                  MOV ECX,dword ptr [EBP + -0x24]
00534FB8  8B 55 D4                  MOV EDX,dword ptr [EBP + -0x2c]
00534FBB  8B 85 34 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff34]
00534FC1  03 D1                     ADD EDX,ECX
00534FC3  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00534FC8  D1 EA                     SHR EDX,0x1
00534FCA  EB 13                     JMP 0x00534fdf
LAB_00534fcc:
00534FCC  8B 85 34 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff34]
00534FD2  8B 3D 5C 76 80 00         MOV EDI,dword ptr [0x0080765c]
00534FD8  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00534FDD  33 D2                     XOR EDX,EDX
LAB_00534fdf:
00534FDF  39 35 58 76 80 00         CMP dword ptr [0x00807658],ESI
00534FE5  74 0B                     JZ 0x00534ff2
00534FE7  8B 87 80 00 00 00         MOV EAX,dword ptr [EDI + 0x80]
00534FED  83 E0 01                  AND EAX,0x1
00534FF0  EB 02                     JMP 0x00534ff4
LAB_00534ff2:
00534FF2  33 C0                     XOR EAX,EAX
LAB_00534ff4:
00534FF4  3B C6                     CMP EAX,ESI
00534FF6  0F 84 BE 00 00 00         JZ 0x005350ba
00534FFC  8B 8F 94 00 00 00         MOV ECX,dword ptr [EDI + 0x94]
00535002  8B B7 90 00 00 00         MOV ESI,dword ptr [EDI + 0x90]
00535008  2B CE                     SUB ECX,ESI
0053500A  41                        INC ECX
0053500B  E9 AC 00 00 00            JMP 0x005350bc
switchD_00534f42::caseD_4:
00535010  8B 0D F8 8D 85 00         MOV ECX,dword ptr [0x00858df8]
00535016  8D 85 E4 FD FF FF         LEA EAX,[EBP + 0xfffffde4]
0053501C  8D 95 E0 FD FF FF         LEA EDX,[EBP + 0xfffffde0]
00535022  56                        PUSH ESI
00535023  50                        PUSH EAX
00535024  89 8D E0 FD FF FF         MOV dword ptr [EBP + 0xfffffde0],ECX
0053502A  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00535030  E8 BB 87 1F 00            CALL 0x0072d7f0
00535035  83 C4 08                  ADD ESP,0x8
00535038  3B C6                     CMP EAX,ESI
0053503A  75 4A                     JNZ 0x00535086
0053503C  A1 58 76 80 00            MOV EAX,[0x00807658]
00535041  8B 3D 5C 76 80 00         MOV EDI,dword ptr [0x0080765c]
00535047  3B C6                     CMP EAX,ESI
00535049  74 08                     JZ 0x00535053
0053504B  8B 47 68                  MOV EAX,dword ptr [EDI + 0x68]
0053504E  83 E0 01                  AND EAX,0x1
00535051  EB 02                     JMP 0x00535055
LAB_00535053:
00535053  33 C0                     XOR EAX,EAX
LAB_00535055:
00535055  3B C6                     CMP EAX,ESI
00535057  74 16                     JZ 0x0053506f
00535059  8D 4D D8                  LEA ECX,[EBP + -0x28]
0053505C  8D 55 E0                  LEA EDX,[EBP + -0x20]
0053505F  51                        PUSH ECX
00535060  52                        PUSH EDX
00535061  6A 02                     PUSH 0x2
00535063  57                        PUSH EDI
00535064  E8 97 2D 18 00            CALL 0x006b7e00
00535069  8B 3D 5C 76 80 00         MOV EDI,dword ptr [0x0080765c]
LAB_0053506f:
0053506F  8B 4D D8                  MOV ECX,dword ptr [EBP + -0x28]
00535072  8B 55 E0                  MOV EDX,dword ptr [EBP + -0x20]
00535075  8B 85 E0 FD FF FF         MOV EAX,dword ptr [EBP + 0xfffffde0]
0053507B  03 D1                     ADD EDX,ECX
0053507D  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00535082  D1 EA                     SHR EDX,0x1
00535084  EB 13                     JMP 0x00535099
LAB_00535086:
00535086  8B 85 E0 FD FF FF         MOV EAX,dword ptr [EBP + 0xfffffde0]
0053508C  8B 3D 5C 76 80 00         MOV EDI,dword ptr [0x0080765c]
00535092  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00535097  33 D2                     XOR EDX,EDX
LAB_00535099:
00535099  39 35 58 76 80 00         CMP dword ptr [0x00807658],ESI
0053509F  74 08                     JZ 0x005350a9
005350A1  8B 47 68                  MOV EAX,dword ptr [EDI + 0x68]
005350A4  83 E0 01                  AND EAX,0x1
005350A7  EB 02                     JMP 0x005350ab
LAB_005350a9:
005350A9  33 C0                     XOR EAX,EAX
LAB_005350ab:
005350AB  3B C6                     CMP EAX,ESI
005350AD  74 0B                     JZ 0x005350ba
005350AF  8B 4F 7C                  MOV ECX,dword ptr [EDI + 0x7c]
005350B2  8B 77 78                  MOV ESI,dword ptr [EDI + 0x78]
005350B5  2B CE                     SUB ECX,ESI
005350B7  41                        INC ECX
005350B8  EB 02                     JMP 0x005350bc
LAB_005350ba:
005350BA  33 C9                     XOR ECX,ECX
LAB_005350bc:
005350BC  8B C2                     MOV EAX,EDX
005350BE  8B 5D F4                  MOV EBX,dword ptr [EBP + -0xc]
005350C1  C1 E0 05                  SHL EAX,0x5
005350C4  2B C2                     SUB EAX,EDX
005350C6  33 D2                     XOR EDX,EDX
005350C8  F7 F1                     DIV ECX
005350CA  8B F8                     MOV EDI,EAX
005350CC  89 7D F8                  MOV dword ptr [EBP + -0x8],EDI
005350CF  EB 2E                     JMP 0x005350ff
switchD_00534f42::caseD_8:
005350D1  8B 0D 0A 73 80 00         MOV ECX,dword ptr [0x0080730a]
005350D7  8D 81 A0 0F 00 00         LEA EAX,[ECX + 0xfa0]
005350DD  8B C8                     MOV ECX,EAX
005350DF  C1 E1 05                  SHL ECX,0x5
005350E2  2B C8                     SUB ECX,EAX
005350E4  B8 D3 05 85 41            MOV EAX,0x418505d3
005350E9  F7 E9                     IMUL ECX
005350EB  C1 FA 0A                  SAR EDX,0xa
005350EE  8B C2                     MOV EAX,EDX
005350F0  C1 E8 1F                  SHR EAX,0x1f
005350F3  03 D0                     ADD EDX,EAX
005350F5  8B FA                     MOV EDI,EDX
005350F7  89 7D F8                  MOV dword ptr [EBP + -0x8],EDI
005350FA  EB 03                     JMP 0x005350ff
switchD_00534f42::caseD_3:
005350FC  8B 7D F8                  MOV EDI,dword ptr [EBP + -0x8]
LAB_005350ff:
005350FF  57                        PUSH EDI
00535100  6A 00                     PUSH 0x0
00535102  8B CB                     MOV ECX,EBX
00535104  E8 EA 0C ED FF            CALL 0x00405df3
00535109  8B 8B C5 01 00 00         MOV ECX,dword ptr [EBX + 0x1c5]
0053510F  8D 73 18                  LEA ESI,[EBX + 0x18]
00535112  56                        PUSH ESI
00535113  51                        PUSH ECX
00535114  6A 02                     PUSH 0x2
00535116  8B CB                     MOV ECX,EBX
00535118  C7 43 28 22 00 00 00      MOV dword ptr [EBX + 0x28],0x22
0053511F  89 7B 2C                  MOV dword ptr [EBX + 0x2c],EDI
00535122  E8 59 0F 1B 00            CALL 0x006e6080
00535127  C7 43 28 20 00 00 00      MOV dword ptr [EBX + 0x28],0x20
0053512E  A0 00 73 80 00            MOV AL,[0x00807300]
00535133  33 D2                     XOR EDX,EDX
00535135  3C 01                     CMP AL,0x1
00535137  8B 83 C5 01 00 00         MOV EAX,dword ptr [EBX + 0x1c5]
0053513D  56                        PUSH ESI
0053513E  0F 95 C2                  SETNZ DL
00535141  50                        PUSH EAX
00535142  6A 02                     PUSH 0x2
00535144  8B CB                     MOV ECX,EBX
00535146  89 53 2C                  MOV dword ptr [EBX + 0x2c],EDX
00535149  E8 32 0F 1B 00            CALL 0x006e6080
0053514E  8B 0D 78 6D 85 00         MOV ECX,dword ptr [0x00856d78]
00535154  51                        PUSH ECX
00535155  B9 20 76 80 00            MOV ECX,0x807620
0053515A  E8 F3 F3 EC FF            CALL 0x00404552
0053515F  8B 8D 78 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff78]
00535165  33 C0                     XOR EAX,EAX
00535167  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0053516D  5F                        POP EDI
0053516E  5E                        POP ESI
0053516F  5B                        POP EBX
00535170  8B E5                     MOV ESP,EBP
00535172  5D                        POP EBP
00535173  C2 04 00                  RET 0x4
switchD_005347d0::caseD_c0a0:
00535176  8A 83 A4 01 00 00         MOV AL,byte ptr [EBX + 0x1a4]
0053517C  8B D0                     MOV EDX,EAX
0053517E  81 E2 FF 00 00 00         AND EDX,0xff
00535184  8D 4A FF                  LEA ECX,[EDX + -0x1]
00535187  83 F9 0C                  CMP ECX,0xc
0053518A  0F 87 27 1E 00 00         JA 0x00536fb7
switchD_00535190::switchD:
00535190  FF 24 8D A0 71 53 00      JMP dword ptr [ECX*0x4 + 0x5371a0]
switchD_00535190::caseD_1:
00535197  8B CB                     MOV ECX,EBX
00535199  88 83 A9 01 00 00         MOV byte ptr [EBX + 0x1a9],AL
0053519F  C6 83 A4 01 00 00 04      MOV byte ptr [EBX + 0x1a4],0x4
005351A6  E8 A6 D6 EC FF            CALL 0x00402851
005351AB  8B 8D 78 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff78]
005351B1  33 C0                     XOR EAX,EAX
005351B3  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005351B9  5F                        POP EDI
005351BA  5E                        POP ESI
005351BB  5B                        POP EBX
005351BC  8B E5                     MOV ESP,EBP
005351BE  5D                        POP EBP
005351BF  C2 04 00                  RET 0x4
switchD_00535190::caseD_5:
005351C2  8A 8B A9 01 00 00         MOV CL,byte ptr [EBX + 0x1a9]
005351C8  84 C9                     TEST CL,CL
005351CA  74 30                     JZ 0x005351fc
005351CC  8A 83 AA 01 00 00         MOV AL,byte ptr [EBX + 0x1aa]
005351D2  88 8B A4 01 00 00         MOV byte ptr [EBX + 0x1a4],CL
005351D8  8B CB                     MOV ECX,EBX
005351DA  88 83 A9 01 00 00         MOV byte ptr [EBX + 0x1a9],AL
005351E0  E8 6C D6 EC FF            CALL 0x00402851
005351E5  8B 8D 78 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff78]
005351EB  33 C0                     XOR EAX,EAX
005351ED  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005351F3  5F                        POP EDI
005351F4  5E                        POP ESI
005351F5  5B                        POP EBX
005351F6  8B E5                     MOV ESP,EBP
005351F8  5D                        POP EBP
005351F9  C2 04 00                  RET 0x4
LAB_005351fc:
005351FC  3C 05                     CMP AL,0x5
005351FE  75 44                     JNZ 0x00535244
00535200  8B CB                     MOV ECX,EBX
00535202  C6 83 A4 01 00 00 01      MOV byte ptr [EBX + 0x1a4],0x1
00535209  E8 43 D6 EC FF            CALL 0x00402851
0053520E  68 FF 00 00 00            PUSH 0xff
00535213  8B CB                     MOV ECX,EBX
00535215  E8 28 08 ED FF            CALL 0x00405a42
0053521A  80 BB AB 01 00 00 07      CMP byte ptr [EBX + 0x1ab],0x7
00535221  0F 85 90 1D 00 00         JNZ 0x00536fb7
00535227  8B 8D 78 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff78]
0053522D  89 35 88 87 80 00         MOV dword ptr [0x00808788],ESI
00535233  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00535239  33 C0                     XOR EAX,EAX
0053523B  5F                        POP EDI
0053523C  5E                        POP ESI
0053523D  5B                        POP EBX
0053523E  8B E5                     MOV ESP,EBP
00535240  5D                        POP EBP
00535241  C2 04 00                  RET 0x4
LAB_00535244:
00535244  68 FF 00 00 00            PUSH 0xff
00535249  8B CB                     MOV ECX,EBX
0053524B  E8 F2 07 ED FF            CALL 0x00405a42
00535250  8A 83 AB 01 00 00         MOV AL,byte ptr [EBX + 0x1ab]
00535256  3C 0A                     CMP AL,0xa
00535258  0F 82 59 1D 00 00         JC 0x00536fb7
0053525E  3C 0B                     CMP AL,0xb
00535260  0F 87 51 1D 00 00         JA 0x00536fb7
00535266  A0 A0 67 80 00            MOV AL,[0x008067a0]
0053526B  84 C0                     TEST AL,AL
0053526D  74 2E                     JZ 0x0053529d
LAB_0053526f:
0053526F  6A 04                     PUSH 0x4
LAB_00535271:
00535271  B9 90 2A 80 00            MOV ECX,0x802a90
00535276  FF 15 60 C0 85 00         CALL dword ptr [0x0085c060]
0053527C  8B 8D 78 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff78]
00535282  C7 83 9C 01 00 00 0A 61 00 00  MOV dword ptr [EBX + 0x19c],0x610a
0053528C  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00535292  33 C0                     XOR EAX,EAX
00535294  5F                        POP EDI
00535295  5E                        POP ESI
00535296  5B                        POP EBX
00535297  8B E5                     MOV ESP,EBP
00535299  5D                        POP EBP
0053529A  C2 04 00                  RET 0x4
LAB_0053529d:
0053529D  8B 8D 78 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff78]
005352A3  C7 83 9C 01 00 00 02 61 00 00  MOV dword ptr [EBX + 0x19c],0x6102
005352AD  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005352B3  33 C0                     XOR EAX,EAX
005352B5  5F                        POP EDI
005352B6  5E                        POP ESI
005352B7  5B                        POP EBX
005352B8  8B E5                     MOV ESP,EBP
005352BA  5D                        POP EBP
005352BB  C2 04 00                  RET 0x4
switchD_00535190::caseD_9:
005352BE  A1 22 73 80 00            MOV EAX,[0x00807322]
005352C3  33 C9                     XOR ECX,ECX
005352C5  3B C6                     CMP EAX,ESI
005352C7  0F 94 C1                  SETZ CL
005352CA  89 0D 22 73 80 00         MOV dword ptr [0x00807322],ECX
005352D0  8B 8D 78 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff78]
005352D6  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005352DC  33 C0                     XOR EAX,EAX
005352DE  5F                        POP EDI
005352DF  5E                        POP ESI
005352E0  5B                        POP EBX
005352E1  8B E5                     MOV ESP,EBP
005352E3  5D                        POP EBP
005352E4  C2 04 00                  RET 0x4
switchD_00535190::caseD_8:
005352E7  8B 57 14                  MOV EDX,dword ptr [EDI + 0x14]
005352EA  B0 03                     MOV AL,0x3
005352EC  8A 0A                     MOV CL,byte ptr [EDX]
005352EE  2A C1                     SUB AL,CL
005352F0  8B 8D 78 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff78]
005352F6  A2 3A 73 80 00            MOV [0x0080733a],AL
005352FB  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00535301  33 C0                     XOR EAX,EAX
00535303  5F                        POP EDI
00535304  5E                        POP ESI
00535305  5B                        POP EBX
00535306  8B E5                     MOV ESP,EBP
00535308  5D                        POP EBP
00535309  C2 04 00                  RET 0x4
switchD_00535190::caseD_d:
0053530C  8A 8B 05 03 00 00         MOV CL,byte ptr [EBX + 0x305]
00535312  68 FF 00 00 00            PUSH 0xff
00535317  88 0D 48 73 80 00         MOV byte ptr [0x00807348],CL
0053531D  8B CB                     MOV ECX,EBX
0053531F  E8 1E 07 ED FF            CALL 0x00405a42
00535324  8B 8D 78 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff78]
0053532A  C7 83 9C 01 00 00 07 61 00 00  MOV dword ptr [EBX + 0x19c],0x6107
00535334  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0053533A  33 C0                     XOR EAX,EAX
0053533C  5F                        POP EDI
0053533D  5E                        POP ESI
0053533E  5B                        POP EBX
0053533F  8B E5                     MOV ESP,EBP
00535341  5D                        POP EBP
00535342  C2 04 00                  RET 0x4
switchD_00535190::caseD_2:
00535345  8A 93 A9 01 00 00         MOV DL,byte ptr [EBX + 0x1a9]
0053534B  8B CB                     MOV ECX,EBX
0053534D  88 93 AA 01 00 00         MOV byte ptr [EBX + 0x1aa],DL
00535353  88 83 A9 01 00 00         MOV byte ptr [EBX + 0x1a9],AL
00535359  C6 83 A4 01 00 00 06      MOV byte ptr [EBX + 0x1a4],0x6
00535360  E8 EC D4 EC FF            CALL 0x00402851
00535365  8B 8D 78 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff78]
0053536B  33 C0                     XOR EAX,EAX
0053536D  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00535373  5F                        POP EDI
00535374  5E                        POP ESI
00535375  5B                        POP EBX
00535376  8B E5                     MOV ESP,EBP
00535378  5D                        POP EBP
00535379  C2 04 00                  RET 0x4
switchD_00535190::caseD_6:
0053537C  8A 0D 01 73 80 00         MOV CL,byte ptr [0x00807301]
00535382  6A 02                     PUSH 0x2
00535384  80 F1 02                  XOR CL,0x2
00535387  88 0D 01 73 80 00         MOV byte ptr [0x00807301],CL
0053538D  B9 58 76 80 00            MOV ECX,0x807658
00535392  E8 78 FD EC FF            CALL 0x0040510f
00535397  8B 8D 78 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff78]
0053539D  33 C0                     XOR EAX,EAX
0053539F  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005353A5  5F                        POP EDI
005353A6  5E                        POP ESI
005353A7  5B                        POP EBX
005353A8  8B E5                     MOV ESP,EBP
005353AA  5D                        POP EBP
005353AB  C2 04 00                  RET 0x4
switchD_005347d0::caseD_c0a1:
005353AE  8A 83 A4 01 00 00         MOV AL,byte ptr [EBX + 0x1a4]
005353B4  8B D0                     MOV EDX,EAX
005353B6  81 E2 FF 00 00 00         AND EDX,0xff
005353BC  8D 4A FF                  LEA ECX,[EDX + -0x1]
005353BF  83 F9 0D                  CMP ECX,0xd
005353C2  0F 87 EF 1B 00 00         JA 0x00536fb7
switchD_005353c8::switchD:
005353C8  FF 24 8D D4 71 53 00      JMP dword ptr [ECX*0x4 + 0x5371d4]
switchD_005353c8::caseD_1:
005353CF  8B CB                     MOV ECX,EBX
005353D1  C7 83 A5 01 00 00 83 3E 00 00  MOV dword ptr [EBX + 0x1a5],0x3e83
005353DB  88 83 A9 01 00 00         MOV byte ptr [EBX + 0x1a9],AL
005353E1  C6 83 AB 01 00 00 03      MOV byte ptr [EBX + 0x1ab],0x3
005353E8  C6 83 A4 01 00 00 05      MOV byte ptr [EBX + 0x1a4],0x5
005353EF  E8 5D D4 EC FF            CALL 0x00402851
005353F4  8B 8D 78 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff78]
005353FA  33 C0                     XOR EAX,EAX
005353FC  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00535402  5F                        POP EDI
00535403  5E                        POP ESI
00535404  5B                        POP EBX
00535405  8B E5                     MOV ESP,EBP
00535407  5D                        POP EBP
00535408  C2 04 00                  RET 0x4
switchD_005353c8::caseD_2:
0053540B  8A 8B A9 01 00 00         MOV CL,byte ptr [EBX + 0x1a9]
00535411  88 83 A9 01 00 00         MOV byte ptr [EBX + 0x1a9],AL
00535417  88 8B AA 01 00 00         MOV byte ptr [EBX + 0x1aa],CL
0053541D  8B CB                     MOV ECX,EBX
0053541F  C6 83 A4 01 00 00 08      MOV byte ptr [EBX + 0x1a4],0x8
00535426  E8 26 D4 EC FF            CALL 0x00402851
0053542B  8B 8D 78 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff78]
00535431  33 C0                     XOR EAX,EAX
00535433  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00535439  5F                        POP EDI
0053543A  5E                        POP ESI
0053543B  5B                        POP EBX
0053543C  8B E5                     MOV ESP,EBP
0053543E  5D                        POP EBP
0053543F  C2 04 00                  RET 0x4
switchD_005353c8::caseD_9:
00535442  A1 1E 73 80 00            MOV EAX,[0x0080731e]
00535447  8B 8D 78 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff78]
0053544D  33 D2                     XOR EDX,EDX
0053544F  3B C6                     CMP EAX,ESI
00535451  0F 94 C2                  SETZ DL
00535454  89 15 1E 73 80 00         MOV dword ptr [0x0080731e],EDX
0053545A  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00535460  33 C0                     XOR EAX,EAX
00535462  5F                        POP EDI
00535463  5E                        POP ESI
00535464  5B                        POP EBX
00535465  8B E5                     MOV ESP,EBP
00535467  5D                        POP EBP
00535468  C2 04 00                  RET 0x4
switchD_005353c8::caseD_d:
0053546B  8B 0D 42 73 80 00         MOV ECX,dword ptr [0x00807342]
00535471  33 C0                     XOR EAX,EAX
00535473  3B CE                     CMP ECX,ESI
00535475  8B 0D D8 16 80 00         MOV ECX,dword ptr [0x008016d8]
0053547B  0F 94 C0                  SETZ AL
0053547E  3B CE                     CMP ECX,ESI
00535480  A3 42 73 80 00            MOV [0x00807342],EAX
00535485  0F 84 2C 1B 00 00         JZ 0x00536fb7
0053548B  E8 56 CB EC FF            CALL 0x00401fe6
00535490  8B 8D 78 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff78]
00535496  33 C0                     XOR EAX,EAX
00535498  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0053549E  5F                        POP EDI
0053549F  5E                        POP ESI
005354A0  5B                        POP EBX
005354A1  8B E5                     MOV ESP,EBP
005354A3  5D                        POP EBP
005354A4  C2 04 00                  RET 0x4
switchD_005353c8::caseD_6:
005354A7  8A 0D 01 73 80 00         MOV CL,byte ptr [0x00807301]
005354AD  6A 04                     PUSH 0x4
005354AF  80 F1 04                  XOR CL,0x4
005354B2  88 0D 01 73 80 00         MOV byte ptr [0x00807301],CL
005354B8  B9 58 76 80 00            MOV ECX,0x807658
005354BD  E8 4D FC EC FF            CALL 0x0040510f
005354C2  56                        PUSH ESI
005354C3  56                        PUSH ESI
005354C4  68 B7 04 00 00            PUSH 0x4b7
005354C9  56                        PUSH ESI
005354CA  6A 01                     PUSH 0x1
005354CC  B9 58 76 80 00            MOV ECX,0x807658
005354D1  E8 02 F7 EC FF            CALL 0x00404bd8
005354D6  8B 8D 78 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff78]
005354DC  33 C0                     XOR EAX,EAX
005354DE  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005354E4  5F                        POP EDI
005354E5  5E                        POP ESI
005354E6  5B                        POP EBX
005354E7  8B E5                     MOV ESP,EBP
005354E9  5D                        POP EBP
005354EA  C2 04 00                  RET 0x4
switchD_005353c8::caseD_3:
005354ED  8B 93 B9 01 00 00         MOV EDX,dword ptr [EBX + 0x1b9]
005354F3  8D 4B 18                  LEA ECX,[EBX + 0x18]
005354F6  51                        PUSH ECX
005354F7  52                        PUSH EDX
005354F8  6A 02                     PUSH 0x2
005354FA  8B CB                     MOV ECX,EBX
005354FC  C7 43 28 32 00 00 00      MOV dword ptr [EBX + 0x28],0x32
00535503  E8 78 0B 1B 00            CALL 0x006e6080
00535508  8B 83 F1 01 00 00         MOV EAX,dword ptr [EBX + 0x1f1]
0053550E  39 70 08                  CMP dword ptr [EAX + 0x8],ESI
00535511  7E 07                     JLE 0x0053551a
00535513  8B 40 14                  MOV EAX,dword ptr [EAX + 0x14]
00535516  8B 38                     MOV EDI,dword ptr [EAX]
00535518  EB 02                     JMP 0x0053551c
LAB_0053551a:
0053551A  33 FF                     XOR EDI,EDI
LAB_0053551c:
0053551C  83 C9 FF                  OR ECX,0xffffffff
0053551F  33 C0                     XOR EAX,EAX
00535521  F2 AE                     SCASB.REPNE ES:EDI
00535523  F7 D1                     NOT ECX
00535525  2B F9                     SUB EDI,ECX
00535527  8D 93 F5 01 00 00         LEA EDX,[EBX + 0x1f5]
0053552D  8B C1                     MOV EAX,ECX
0053552F  8B F7                     MOV ESI,EDI
00535531  8B FA                     MOV EDI,EDX
00535533  C1 E9 02                  SHR ECX,0x2
00535536  F3 A5                     MOVSD.REP ES:EDI,ESI
00535538  8B C8                     MOV ECX,EAX
0053553A  83 E1 03                  AND ECX,0x3
0053553D  F3 A4                     MOVSB.REP ES:EDI,ESI
0053553F  BF A0 16 80 00            MOV EDI,0x8016a0
00535544  8B F2                     MOV ESI,EDX
LAB_00535546:
00535546  8A 0E                     MOV CL,byte ptr [ESI]
00535548  8A C1                     MOV AL,CL
0053554A  3A 0F                     CMP CL,byte ptr [EDI]
0053554C  75 1C                     JNZ 0x0053556a
0053554E  84 C0                     TEST AL,AL
00535550  74 14                     JZ 0x00535566
00535552  8A 4E 01                  MOV CL,byte ptr [ESI + 0x1]
00535555  8A C1                     MOV AL,CL
00535557  3A 4F 01                  CMP CL,byte ptr [EDI + 0x1]
0053555A  75 0E                     JNZ 0x0053556a
0053555C  83 C6 02                  ADD ESI,0x2
0053555F  83 C7 02                  ADD EDI,0x2
00535562  84 C0                     TEST AL,AL
00535564  75 E0                     JNZ 0x00535546
LAB_00535566:
00535566  33 C0                     XOR EAX,EAX
00535568  EB 05                     JMP 0x0053556f
LAB_0053556a:
0053556A  1B C0                     SBB EAX,EAX
0053556C  83 D8 FF                  SBB EAX,-0x1
LAB_0053556f:
0053556F  85 C0                     TEST EAX,EAX
00535571  75 47                     JNZ 0x005355ba
00535573  8A 93 A9 01 00 00         MOV DL,byte ptr [EBX + 0x1a9]
00535579  8A 83 A4 01 00 00         MOV AL,byte ptr [EBX + 0x1a4]
0053557F  8B CB                     MOV ECX,EBX
00535581  C7 83 A5 01 00 00 4B 3F 00 00  MOV dword ptr [EBX + 0x1a5],0x3f4b
0053558B  88 93 AA 01 00 00         MOV byte ptr [EBX + 0x1aa],DL
00535591  88 83 A9 01 00 00         MOV byte ptr [EBX + 0x1a9],AL
00535597  C6 83 A4 01 00 00 0B      MOV byte ptr [EBX + 0x1a4],0xb
0053559E  E8 AE D2 EC FF            CALL 0x00402851
005355A3  8B 8D 78 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff78]
005355A9  33 C0                     XOR EAX,EAX
005355AB  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005355B1  5F                        POP EDI
005355B2  5E                        POP ESI
005355B3  5B                        POP EBX
005355B4  8B E5                     MOV ESP,EBP
005355B6  5D                        POP EBP
005355B7  C2 04 00                  RET 0x4
LAB_005355ba:
005355BA  52                        PUSH EDX
005355BB  8B CB                     MOV ECX,EBX
005355BD  E8 B2 D2 EC FF            CALL 0x00402874
005355C2  85 C0                     TEST EAX,EAX
005355C4  74 4E                     JZ 0x00535614
005355C6  8A 8B A9 01 00 00         MOV CL,byte ptr [EBX + 0x1a9]
005355CC  8A 93 A4 01 00 00         MOV DL,byte ptr [EBX + 0x1a4]
005355D2  88 8B AA 01 00 00         MOV byte ptr [EBX + 0x1aa],CL
005355D8  8B CB                     MOV ECX,EBX
005355DA  C7 83 A5 01 00 00 49 3F 00 00  MOV dword ptr [EBX + 0x1a5],0x3f49
005355E4  88 93 A9 01 00 00         MOV byte ptr [EBX + 0x1a9],DL
005355EA  C6 83 A4 01 00 00 05      MOV byte ptr [EBX + 0x1a4],0x5
005355F1  C6 83 AB 01 00 00 01      MOV byte ptr [EBX + 0x1ab],0x1
005355F8  E8 54 D2 EC FF            CALL 0x00402851
005355FD  8B 8D 78 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff78]
00535603  33 C0                     XOR EAX,EAX
00535605  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0053560B  5F                        POP EDI
0053560C  5E                        POP ESI
0053560D  5B                        POP EBX
0053560E  8B E5                     MOV ESP,EBP
00535610  5D                        POP EBP
00535611  C2 04 00                  RET 0x4
switchD_00534835::caseD_1:
00535614  8B CB                     MOV ECX,EBX
00535616  E8 E2 02 ED FF            CALL 0x004058fd
0053561B  8B 8D 78 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff78]
00535621  33 C0                     XOR EAX,EAX
00535623  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00535629  5F                        POP EDI
0053562A  5E                        POP ESI
0053562B  5B                        POP EBX
0053562C  8B E5                     MOV ESP,EBP
0053562E  5D                        POP EBP
0053562F  C2 04 00                  RET 0x4
switchD_005353c8::caseD_4:
00535632  8B 8B B5 01 00 00         MOV ECX,dword ptr [EBX + 0x1b5]
00535638  8D 43 18                  LEA EAX,[EBX + 0x18]
0053563B  50                        PUSH EAX
0053563C  51                        PUSH ECX
0053563D  6A 02                     PUSH 0x2
0053563F  8B CB                     MOV ECX,EBX
00535641  C7 43 28 26 00 00 00      MOV dword ptr [EBX + 0x28],0x26
00535648  E8 33 0A 1B 00            CALL 0x006e6080
0053564D  8B 83 E9 01 00 00         MOV EAX,dword ptr [EBX + 0x1e9]
00535653  8B 4B 2C                  MOV ECX,dword ptr [EBX + 0x2c]
00535656  3B 48 08                  CMP ECX,dword ptr [EAX + 0x8]
00535659  7D 08                     JGE 0x00535663
0053565B  8B 50 14                  MOV EDX,dword ptr [EAX + 0x14]
0053565E  8B 0C 8A                  MOV ECX,dword ptr [EDX + ECX*0x4]
00535661  EB 02                     JMP 0x00535665
LAB_00535663:
00535663  33 C9                     XOR ECX,ECX
LAB_00535665:
00535665  8B F9                     MOV EDI,ECX
00535667  83 C9 FF                  OR ECX,0xffffffff
0053566A  33 C0                     XOR EAX,EAX
0053566C  8D 93 F5 01 00 00         LEA EDX,[EBX + 0x1f5]
00535672  F2 AE                     SCASB.REPNE ES:EDI
00535674  F7 D1                     NOT ECX
00535676  2B F9                     SUB EDI,ECX
00535678  8B C1                     MOV EAX,ECX
0053567A  8B F7                     MOV ESI,EDI
0053567C  8B FA                     MOV EDI,EDX
0053567E  C1 E9 02                  SHR ECX,0x2
00535681  F3 A5                     MOVSD.REP ES:EDI,ESI
00535683  8B C8                     MOV ECX,EAX
00535685  83 E1 03                  AND ECX,0x3
00535688  F3 A4                     MOVSB.REP ES:EDI,ESI
0053568A  8B 4B 2C                  MOV ECX,dword ptr [EBX + 0x2c]
0053568D  8A 93 A9 01 00 00         MOV DL,byte ptr [EBX + 0x1a9]
00535693  89 8B E1 01 00 00         MOV dword ptr [EBX + 0x1e1],ECX
00535699  8A 83 A4 01 00 00         MOV AL,byte ptr [EBX + 0x1a4]
0053569F  8B CB                     MOV ECX,EBX
005356A1  C7 83 A5 01 00 00 48 3F 00 00  MOV dword ptr [EBX + 0x1a5],0x3f48
005356AB  88 93 AA 01 00 00         MOV byte ptr [EBX + 0x1aa],DL
005356B1  88 83 A9 01 00 00         MOV byte ptr [EBX + 0x1a9],AL
005356B7  C6 83 AB 01 00 00 02      MOV byte ptr [EBX + 0x1ab],0x2
005356BE  C6 83 A4 01 00 00 05      MOV byte ptr [EBX + 0x1a4],0x5
005356C5  E8 87 D1 EC FF            CALL 0x00402851
005356CA  8B 8D 78 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff78]
005356D0  33 C0                     XOR EAX,EAX
005356D2  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005356D8  5F                        POP EDI
005356D9  5E                        POP ESI
005356DA  5B                        POP EBX
005356DB  8B E5                     MOV ESP,EBP
005356DD  5D                        POP EBP
005356DE  C2 04 00                  RET 0x4
switchD_005353c8::caseD_e:
005356E1  8B 93 B5 01 00 00         MOV EDX,dword ptr [EBX + 0x1b5]
005356E7  8D 4B 18                  LEA ECX,[EBX + 0x18]
005356EA  51                        PUSH ECX
005356EB  52                        PUSH EDX
005356EC  6A 02                     PUSH 0x2
005356EE  8B CB                     MOV ECX,EBX
005356F0  89 75 F8                  MOV dword ptr [EBP + -0x8],ESI
005356F3  89 75 F0                  MOV dword ptr [EBP + -0x10],ESI
005356F6  89 75 E4                  MOV dword ptr [EBP + -0x1c],ESI
005356F9  C7 45 FC 01 00 00 00      MOV dword ptr [EBP + -0x4],0x1
00535700  89 75 E8                  MOV dword ptr [EBP + -0x18],ESI
00535703  C7 43 28 26 00 00 00      MOV dword ptr [EBX + 0x28],0x26
0053570A  E8 71 09 1B 00            CALL 0x006e6080
0053570F  8B 83 FD 02 00 00         MOV EAX,dword ptr [EBX + 0x2fd]
00535715  8B 53 2C                  MOV EDX,dword ptr [EBX + 0x2c]
00535718  3B 50 0C                  CMP EDX,dword ptr [EAX + 0xc]
0053571B  73 0B                     JNC 0x00535728
0053571D  8B 48 08                  MOV ECX,dword ptr [EAX + 0x8]
00535720  0F AF CA                  IMUL ECX,EDX
00535723  03 48 1C                  ADD ECX,dword ptr [EAX + 0x1c]
00535726  EB 02                     JMP 0x0053572a
LAB_00535728:
00535728  33 C9                     XOR ECX,ECX
LAB_0053572a:
0053572A  39 71 6C                  CMP dword ptr [ECX + 0x6c],ESI
0053572D  74 48                     JZ 0x00535777
0053572F  6A 02                     PUSH 0x2
00535731  E8 DA 54 17 00            CALL 0x006aac10
00535736  3B C6                     CMP EAX,ESI
00535738  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
0053573B  0F 84 C3 01 00 00         JZ 0x00535904
00535741  C6 00 00                  MOV byte ptr [EAX],0x0
00535744  8A 0D 4D 87 80 00         MOV CL,byte ptr [0x0080874d]
0053574A  88 48 01                  MOV byte ptr [EAX + 0x1],CL
0053574D  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
00535750  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
00535756  6A 02                     PUSH 0x2
00535758  6A 01                     PUSH 0x1
0053575A  52                        PUSH EDX
0053575B  6A 32                     PUSH 0x32
0053575D  E8 D1 E4 EC FF            CALL 0x00403c33
00535762  8D 45 F0                  LEA EAX,[EBP + -0x10]
00535765  50                        PUSH EAX
00535766  E8 F5 58 17 00            CALL 0x006ab060
0053576B  C7 45 E8 01 00 00 00      MOV dword ptr [EBP + -0x18],0x1
00535772  E9 8D 01 00 00            JMP 0x00535904
LAB_00535777:
00535777  8B 0D A0 87 80 00         MOV ECX,dword ptr [0x008087a0]
0053577D  81 E1 FF 00 00 00         AND ECX,0xff
00535783  8D 41 FF                  LEA EAX,[ECX + -0x1]
00535786  83 F8 12                  CMP EAX,0x12
00535789  77 53                     JA 0x005357de
0053578B  33 D2                     XOR EDX,EDX
0053578D  8A 90 18 72 53 00         MOV DL,byte ptr [EAX + 0x537218]
switchD_00535793::switchD:
00535793  FF 24 95 0C 72 53 00      JMP dword ptr [EDX*0x4 + 0x53720c]
switchD_00535793::caseD_1:
0053579A  A1 FC AC 79 00            MOV EAX,[0x0079acfc]
0053579F  8B 0D F0 AC 79 00         MOV ECX,dword ptr [0x0079acf0]
005357A5  50                        PUSH EAX
005357A6  51                        PUSH ECX
005357A7  68 80 76 80 00            PUSH 0x807680
005357AC  68 DC 6E 7C 00            PUSH 0x7c6edc
005357B1  68 3A F3 80 00            PUSH 0x80f33a
005357B6  FF 15 E8 BD 85 00         CALL dword ptr [0x0085bde8]
005357BC  83 C4 14                  ADD ESP,0x14
005357BF  EB 1D                     JMP 0x005357de
switchD_00535793::caseD_2:
005357C1  68 1E EF 80 00            PUSH 0x80ef1e
005357C6  68 80 76 80 00            PUSH 0x807680
005357CB  68 E4 6E 7C 00            PUSH 0x7c6ee4
005357D0  68 3A F3 80 00            PUSH 0x80f33a
005357D5  FF 15 E8 BD 85 00         CALL dword ptr [0x0085bde8]
005357DB  83 C4 10                  ADD ESP,0x10
switchD_00535793::caseD_9:
005357DE  8B 15 F8 8D 85 00         MOV EDX,dword ptr [0x00858df8]
005357E4  8D 8D 6C FE FF FF         LEA ECX,[EBP + 0xfffffe6c]
005357EA  8D 85 68 FE FF FF         LEA EAX,[EBP + 0xfffffe68]
005357F0  56                        PUSH ESI
005357F1  51                        PUSH ECX
005357F2  89 95 68 FE FF FF         MOV dword ptr [EBP + 0xfffffe68],EDX
005357F8  A3 F8 8D 85 00            MOV [0x00858df8],EAX
005357FD  E8 EE 7F 1F 00            CALL 0x0072d7f0
00535802  8B 5D F4                  MOV EBX,dword ptr [EBP + -0xc]
00535805  83 C4 08                  ADD ESP,0x8
00535808  3B C6                     CMP EAX,ESI
0053580A  0F 85 BD 00 00 00         JNZ 0x005358cd
00535810  56                        PUSH ESI
00535811  56                        PUSH ESI
00535812  56                        PUSH ESI
00535813  68 3A F3 80 00            PUSH 0x80f33a
00535818  68 45 03 00 00            PUSH 0x345
0053581D  E8 9E B6 1B 00            CALL 0x006f0ec0
00535822  8B 8B FD 02 00 00         MOV ECX,dword ptr [EBX + 0x2fd]
00535828  8B 53 2C                  MOV EDX,dword ptr [EBX + 0x2c]
0053582B  8B F8                     MOV EDI,EAX
0053582D  83 C4 14                  ADD ESP,0x14
00535830  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
00535833  89 7D F8                  MOV dword ptr [EBP + -0x8],EDI
00535836  3B D0                     CMP EDX,EAX
00535838  73 0B                     JNC 0x00535845
0053583A  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
0053583D  0F AF C2                  IMUL EAX,EDX
00535840  03 41 1C                  ADD EAX,dword ptr [ECX + 0x1c]
00535843  EB 02                     JMP 0x00535847
LAB_00535845:
00535845  33 C0                     XOR EAX,EAX
LAB_00535847:
00535847  8D 55 EC                  LEA EDX,[EBP + -0x14]
0053584A  6A 01                     PUSH 0x1
0053584C  83 C0 4C                  ADD EAX,0x4c
0053584F  52                        PUSH EDX
00535850  50                        PUSH EAX
00535851  57                        PUSH EDI
00535852  E8 56 BA EC FF            CALL 0x004012ad
00535857  83 C4 10                  ADD ESP,0x10
0053585A  3B C6                     CMP EAX,ESI
0053585C  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
0053585F  74 5E                     JZ 0x005358bf
00535861  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
00535864  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
00535867  8D 0C 78                  LEA ECX,[EAX + EDI*0x2]
0053586A  51                        PUSH ECX
0053586B  E8 A0 53 17 00            CALL 0x006aac10
00535870  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
00535873  C6 00 01                  MOV byte ptr [EAX],0x1
00535876  8A 15 4D 87 80 00         MOV DL,byte ptr [0x0080874d]
0053587C  03 C7                     ADD EAX,EDI
0053587E  03 F8                     ADD EDI,EAX
00535880  88 10                     MOV byte ptr [EAX],DL
00535882  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
00535885  8B 75 E4                  MOV ESI,dword ptr [EBP + -0x1c]
00535888  8B C1                     MOV EAX,ECX
0053588A  C1 E9 02                  SHR ECX,0x2
0053588D  F3 A5                     MOVSD.REP ES:EDI,ESI
0053588F  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00535892  8B C8                     MOV ECX,EAX
00535894  83 E1 03                  AND ECX,0x3
00535897  F3 A4                     MOVSB.REP ES:EDI,ESI
00535899  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
0053589C  8D 04 51                  LEA EAX,[ECX + EDX*0x2]
0053589F  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
005358A2  50                        PUSH EAX
005358A3  6A 01                     PUSH 0x1
005358A5  51                        PUSH ECX
005358A6  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
005358AC  6A 32                     PUSH 0x32
005358AE  E8 80 E3 EC FF            CALL 0x00403c33
005358B3  8B 7D F8                  MOV EDI,dword ptr [EBP + -0x8]
005358B6  C7 45 E8 01 00 00 00      MOV dword ptr [EBP + -0x18],0x1
005358BD  33 F6                     XOR ESI,ESI
LAB_005358bf:
005358BF  8B 95 68 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffe68]
005358C5  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
005358CB  EB 0E                     JMP 0x005358db
LAB_005358cd:
005358CD  8B 85 68 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffe68]
005358D3  8B 7D F8                  MOV EDI,dword ptr [EBP + -0x8]
005358D6  A3 F8 8D 85 00            MOV [0x00858df8],EAX
LAB_005358db:
005358DB  3B FE                     CMP EDI,ESI
005358DD  74 09                     JZ 0x005358e8
005358DF  57                        PUSH EDI
005358E0  E8 8B B8 1B 00            CALL 0x006f1170
005358E5  83 C4 04                  ADD ESP,0x4
LAB_005358e8:
005358E8  39 75 E4                  CMP dword ptr [EBP + -0x1c],ESI
005358EB  74 09                     JZ 0x005358f6
005358ED  8D 4D E4                  LEA ECX,[EBP + -0x1c]
005358F0  51                        PUSH ECX
005358F1  E8 6A 57 17 00            CALL 0x006ab060
LAB_005358f6:
005358F6  39 75 F0                  CMP dword ptr [EBP + -0x10],ESI
005358F9  74 09                     JZ 0x00535904
005358FB  8D 55 F0                  LEA EDX,[EBP + -0x10]
005358FE  52                        PUSH EDX
005358FF  E8 5C 57 17 00            CALL 0x006ab060
LAB_00535904:
00535904  39 75 E8                  CMP dword ptr [EBP + -0x18],ESI
00535907  0F 84 AA 16 00 00         JZ 0x00536fb7
0053590D  8B 03                     MOV EAX,dword ptr [EBX]
0053590F  8D 4B 18                  LEA ECX,[EBX + 0x18]
00535912  51                        PUSH ECX
00535913  8B CB                     MOV ECX,EBX
00535915  C7 43 28 01 C0 00 00      MOV dword ptr [EBX + 0x28],0xc001
0053591C  89 73 34                  MOV dword ptr [EBX + 0x34],ESI
0053591F  FF 10                     CALL dword ptr [EAX]
00535921  8B 8D 78 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff78]
00535927  33 C0                     XOR EAX,EAX
00535929  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0053592F  5F                        POP EDI
00535930  5E                        POP ESI
00535931  5B                        POP EBX
00535932  8B E5                     MOV ESP,EBP
00535934  5D                        POP EBP
00535935  C2 04 00                  RET 0x4
switchD_005347d0::caseD_c0a2:
00535938  8A 8B A4 01 00 00         MOV CL,byte ptr [EBX + 0x1a4]
0053593E  8B D1                     MOV EDX,ECX
00535940  81 E2 FF 00 00 00         AND EDX,0xff
00535946  8D 42 FF                  LEA EAX,[EDX + -0x1]
00535949  83 F8 0C                  CMP EAX,0xc
0053594C  0F 87 65 16 00 00         JA 0x00536fb7
switchD_00535952::switchD:
00535952  FF 24 85 2C 72 53 00      JMP dword ptr [EAX*0x4 + 0x53722c]
switchD_00535952::caseD_1:
00535959  A0 A0 67 80 00            MOV AL,[0x008067a0]
0053595E  84 C0                     TEST AL,AL
00535960  74 1F                     JZ 0x00535981
00535962  A1 38 2A 80 00            MOV EAX,[0x00802a38]
00535967  8B 90 E4 00 00 00         MOV EDX,dword ptr [EAX + 0xe4]
0053596D  8B 78 34                  MOV EDI,dword ptr [EAX + 0x34]
00535970  2B D7                     SUB EDX,EDI
00535972  81 FA 70 17 00 00         CMP EDX,0x1770
00535978  1B C0                     SBB EAX,EAX
0053597A  05 96 3E 00 00            ADD EAX,0x3e96
0053597F  EB 05                     JMP 0x00535986
LAB_00535981:
00535981  B8 84 3E 00 00            MOV EAX,0x3e84
LAB_00535986:
00535986  88 8B A9 01 00 00         MOV byte ptr [EBX + 0x1a9],CL
0053598C  8B CB                     MOV ECX,EBX
0053598E  89 83 A5 01 00 00         MOV dword ptr [EBX + 0x1a5],EAX
00535994  C6 83 AB 01 00 00 04      MOV byte ptr [EBX + 0x1ab],0x4
0053599B  C6 83 A4 01 00 00 05      MOV byte ptr [EBX + 0x1a4],0x5
005359A2  E8 AA CE EC FF            CALL 0x00402851
005359A7  8B 8D 78 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff78]
005359AD  33 C0                     XOR EAX,EAX
005359AF  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005359B5  5F                        POP EDI
005359B6  5E                        POP ESI
005359B7  5B                        POP EBX
005359B8  8B E5                     MOV ESP,EBP
005359BA  5D                        POP EBP
005359BB  C2 04 00                  RET 0x4
switchD_00535952::caseD_2:
005359BE  8A 83 A9 01 00 00         MOV AL,byte ptr [EBX + 0x1a9]
005359C4  88 8B A9 01 00 00         MOV byte ptr [EBX + 0x1a9],CL
005359CA  8B CB                     MOV ECX,EBX
005359CC  88 83 AA 01 00 00         MOV byte ptr [EBX + 0x1aa],AL
005359D2  C6 83 A4 01 00 00 09      MOV byte ptr [EBX + 0x1a4],0x9
005359D9  E8 73 CE EC FF            CALL 0x00402851
005359DE  8B 8D 78 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff78]
005359E4  33 C0                     XOR EAX,EAX
005359E6  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005359EC  5F                        POP EDI
005359ED  5E                        POP ESI
005359EE  5B                        POP EBX
005359EF  8B E5                     MOV ESP,EBP
005359F1  5D                        POP EBP
005359F2  C2 04 00                  RET 0x4
switchD_00535952::caseD_9:
005359F5  8A 0D 26 73 80 00         MOV CL,byte ptr [0x00807326]
005359FB  84 C9                     TEST CL,CL
005359FD  0F 94 C0                  SETZ AL
00535A00  33 C9                     XOR ECX,ECX
00535A02  A2 26 73 80 00            MOV [0x00807326],AL
00535A07  8A C8                     MOV CL,AL
00535A09  51                        PUSH ECX
00535A0A  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00535A10  E8 5F C4 EC FF            CALL 0x00401e74
00535A15  8B 8D 78 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff78]
00535A1B  33 C0                     XOR EAX,EAX
00535A1D  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00535A23  5F                        POP EDI
00535A24  5E                        POP ESI
00535A25  5B                        POP EBX
00535A26  8B E5                     MOV ESP,EBP
00535A28  5D                        POP EBP
00535A29  C2 04 00                  RET 0x4
switchD_00535952::caseD_d:
00535A2C  8A 47 14                  MOV AL,byte ptr [EDI + 0x14]
00535A2F  B2 05                     MOV DL,0x5
00535A31  FE C0                     INC AL
00535A33  F6 EA                     IMUL DL
00535A35  A2 46 73 80 00            MOV [0x00807346],AL
00535A3A  8B 83 8C 01 00 00         MOV EAX,dword ptr [EBX + 0x18c]
00535A40  8B 4B 68                  MOV ECX,dword ptr [EBX + 0x68]
00535A43  50                        PUSH EAX
00535A44  6A 01                     PUSH 0x1
00535A46  6A 6F                     PUSH 0x6f
00535A48  68 AA 00 00 00            PUSH 0xaa
00535A4D  51                        PUSH ECX
00535A4E  E8 D6 D7 EC FF            CALL 0x00403229
00535A53  33 D2                     XOR EDX,EDX
00535A55  8D 7B 6C                  LEA EDI,[EBX + 0x6c]
00535A58  8A 15 46 73 80 00         MOV DL,byte ptr [0x00807346]
00535A5E  52                        PUSH EDX
00535A5F  68 90 18 7C 00            PUSH 0x7c1890
00535A64  57                        PUSH EDI
00535A65  FF 15 E8 BD 85 00         CALL dword ptr [0x0085bde8]
00535A6B  8B 83 8C 01 00 00         MOV EAX,dword ptr [EBX + 0x18c]
00535A71  83 C4 20                  ADD ESP,0x20
00535A74  8B 48 08                  MOV ECX,dword ptr [EAX + 0x8]
00535A77  8B 50 04                  MOV EDX,dword ptr [EAX + 0x4]
00535A7A  8B 43 68                  MOV EAX,dword ptr [EBX + 0x68]
00535A7D  51                        PUSH ECX
00535A7E  8B 8B 7C 01 00 00         MOV ECX,dword ptr [EBX + 0x17c]
00535A84  52                        PUSH EDX
00535A85  6A 6F                     PUSH 0x6f
00535A87  68 AA 00 00 00            PUSH 0xaa
00535A8C  56                        PUSH ESI
00535A8D  50                        PUSH EAX
00535A8E  E8 FD AF 1D 00            CALL 0x00710a90
00535A93  8B 8B 7C 01 00 00         MOV ECX,dword ptr [EBX + 0x17c]
00535A99  6A FF                     PUSH -0x1
00535A9B  6A FF                     PUSH -0x1
00535A9D  56                        PUSH ESI
00535A9E  6A FF                     PUSH -0x1
00535AA0  6A FE                     PUSH -0x2
00535AA2  57                        PUSH EDI
00535AA3  E8 C8 C0 1D 00            CALL 0x00711b70
00535AA8  8B 0D D8 16 80 00         MOV ECX,dword ptr [0x008016d8]
00535AAE  3B CE                     CMP ECX,ESI
00535AB0  0F 84 01 15 00 00         JZ 0x00536fb7
00535AB6  E8 79 B8 EC FF            CALL 0x00401334
00535ABB  8B 8D 78 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff78]
00535AC1  33 C0                     XOR EAX,EAX
00535AC3  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00535AC9  5F                        POP EDI
00535ACA  5E                        POP ESI
00535ACB  5B                        POP EBX
00535ACC  8B E5                     MOV ESP,EBP
00535ACE  5D                        POP EBP
00535ACF  C2 04 00                  RET 0x4
switchD_00535952::caseD_8:
00535AD2  8B 4F 14                  MOV ECX,dword ptr [EDI + 0x14]
00535AD5  8A 11                     MOV DL,byte ptr [ECX]
00535AD7  8B 8D 78 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff78]
00535ADD  FE CA                     DEC DL
00535ADF  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00535AE5  88 15 49 73 80 00         MOV byte ptr [0x00807349],DL
00535AEB  33 C0                     XOR EAX,EAX
00535AED  5F                        POP EDI
00535AEE  5E                        POP ESI
00535AEF  5B                        POP EBX
00535AF0  8B E5                     MOV ESP,EBP
00535AF2  5D                        POP EBP
00535AF3  C2 04 00                  RET 0x4
switchD_00535952::caseD_6:
00535AF6  8A 0D 01 73 80 00         MOV CL,byte ptr [0x00807301]
00535AFC  6A 08                     PUSH 0x8
00535AFE  80 F1 08                  XOR CL,0x8
00535B01  88 0D 01 73 80 00         MOV byte ptr [0x00807301],CL
00535B07  B9 58 76 80 00            MOV ECX,0x807658
00535B0C  E8 FE F5 EC FF            CALL 0x0040510f
00535B11  8B 8D 78 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff78]
00535B17  33 C0                     XOR EAX,EAX
00535B19  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00535B1F  5F                        POP EDI
00535B20  5E                        POP ESI
00535B21  5B                        POP EBX
00535B22  8B E5                     MOV ESP,EBP
00535B24  5D                        POP EBP
00535B25  C2 04 00                  RET 0x4
switchD_00535952::caseD_3:
00535B28  8B 8B B5 01 00 00         MOV ECX,dword ptr [EBX + 0x1b5]
00535B2E  8D 43 18                  LEA EAX,[EBX + 0x18]
00535B31  50                        PUSH EAX
00535B32  51                        PUSH ECX
00535B33  6A 02                     PUSH 0x2
00535B35  8B CB                     MOV ECX,EBX
00535B37  C7 43 28 26 00 00 00      MOV dword ptr [EBX + 0x28],0x26
00535B3E  E8 3D 05 1B 00            CALL 0x006e6080
00535B43  8B 83 E9 01 00 00         MOV EAX,dword ptr [EBX + 0x1e9]
00535B49  8B 4B 2C                  MOV ECX,dword ptr [EBX + 0x2c]
00535B4C  3B 48 08                  CMP ECX,dword ptr [EAX + 0x8]
00535B4F  7D 08                     JGE 0x00535b59
00535B51  8B 50 14                  MOV EDX,dword ptr [EAX + 0x14]
00535B54  8B 0C 8A                  MOV ECX,dword ptr [EDX + ECX*0x4]
00535B57  EB 02                     JMP 0x00535b5b
LAB_00535b59:
00535B59  33 C9                     XOR ECX,ECX
LAB_00535b5b:
00535B5B  8B F9                     MOV EDI,ECX
00535B5D  83 C9 FF                  OR ECX,0xffffffff
00535B60  33 C0                     XOR EAX,EAX
00535B62  8D 93 F5 01 00 00         LEA EDX,[EBX + 0x1f5]
00535B68  F2 AE                     SCASB.REPNE ES:EDI
00535B6A  F7 D1                     NOT ECX
00535B6C  2B F9                     SUB EDI,ECX
00535B6E  8B C1                     MOV EAX,ECX
00535B70  8B F7                     MOV ESI,EDI
00535B72  8B FA                     MOV EDI,EDX
00535B74  C1 E9 02                  SHR ECX,0x2
00535B77  F3 A5                     MOVSD.REP ES:EDI,ESI
00535B79  8B C8                     MOV ECX,EAX
00535B7B  83 E1 03                  AND ECX,0x3
00535B7E  F3 A4                     MOVSB.REP ES:EDI,ESI
00535B80  8B 4B 2C                  MOV ECX,dword ptr [EBX + 0x2c]
00535B83  8A 93 A9 01 00 00         MOV DL,byte ptr [EBX + 0x1a9]
00535B89  89 8B E1 01 00 00         MOV dword ptr [EBX + 0x1e1],ECX
00535B8F  8A 83 A4 01 00 00         MOV AL,byte ptr [EBX + 0x1a4]
00535B95  8B CB                     MOV ECX,EBX
00535B97  C7 83 A5 01 00 00 4A 3F 00 00  MOV dword ptr [EBX + 0x1a5],0x3f4a
00535BA1  88 93 AA 01 00 00         MOV byte ptr [EBX + 0x1aa],DL
00535BA7  88 83 A9 01 00 00         MOV byte ptr [EBX + 0x1a9],AL
00535BAD  C6 83 AB 01 00 00 06      MOV byte ptr [EBX + 0x1ab],0x6
00535BB4  C6 83 A4 01 00 00 05      MOV byte ptr [EBX + 0x1a4],0x5
00535BBB  E8 91 CC EC FF            CALL 0x00402851
00535BC0  8B 8D 78 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff78]
00535BC6  33 C0                     XOR EAX,EAX
00535BC8  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00535BCE  5F                        POP EDI
00535BCF  5E                        POP ESI
00535BD0  5B                        POP EBX
00535BD1  8B E5                     MOV ESP,EBP
00535BD3  5D                        POP EBP
00535BD4  C2 04 00                  RET 0x4
switchD_005347d0::caseD_c0a3:
00535BD7  8A 83 A4 01 00 00         MOV AL,byte ptr [EBX + 0x1a4]
00535BDD  8B C8                     MOV ECX,EAX
00535BDF  81 E1 FF 00 00 00         AND ECX,0xff
00535BE5  8D 71 FF                  LEA ESI,[ECX + -0x1]
00535BE8  83 FE 0C                  CMP ESI,0xc
00535BEB  0F 87 C6 13 00 00         JA 0x00536fb7
00535BF1  33 D2                     XOR EDX,EDX
00535BF3  8A 96 7C 72 53 00         MOV DL,byte ptr [ESI + 0x53727c]
switchD_00535bf9::switchD:
00535BF9  FF 24 95 60 72 53 00      JMP dword ptr [EDX*0x4 + 0x537260]
switchD_00535bf9::caseD_1:
00535C00  8B CB                     MOV ECX,EBX
00535C02  C7 83 A5 01 00 00 85 3E 00 00  MOV dword ptr [EBX + 0x1a5],0x3e85
00535C0C  88 83 A9 01 00 00         MOV byte ptr [EBX + 0x1a9],AL
00535C12  C6 83 AB 01 00 00 05      MOV byte ptr [EBX + 0x1ab],0x5
00535C19  C6 83 A4 01 00 00 05      MOV byte ptr [EBX + 0x1a4],0x5
00535C20  E8 2C CC EC FF            CALL 0x00402851
00535C25  8B 8D 78 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff78]
00535C2B  33 C0                     XOR EAX,EAX
00535C2D  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00535C33  5F                        POP EDI
00535C34  5E                        POP ESI
00535C35  5B                        POP EBX
00535C36  8B E5                     MOV ESP,EBP
00535C38  5D                        POP EBP
00535C39  C2 04 00                  RET 0x4
switchD_00535bf9::caseD_2:
00535C3C  8A 8B A9 01 00 00         MOV CL,byte ptr [EBX + 0x1a9]
00535C42  88 83 A9 01 00 00         MOV byte ptr [EBX + 0x1a9],AL
00535C48  88 8B AA 01 00 00         MOV byte ptr [EBX + 0x1aa],CL
00535C4E  8B CB                     MOV ECX,EBX
00535C50  C6 83 A4 01 00 00 0D      MOV byte ptr [EBX + 0x1a4],0xd
00535C57  E8 F5 CB EC FF            CALL 0x00402851
00535C5C  8B 8D 78 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff78]
00535C62  33 C0                     XOR EAX,EAX
00535C64  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00535C6A  5F                        POP EDI
00535C6B  5E                        POP ESI
00535C6C  5B                        POP EBX
00535C6D  8B E5                     MOV ESP,EBP
00535C6F  5D                        POP EBP
00535C70  C2 04 00                  RET 0x4
switchD_00535bf9::caseD_d:
00535C73  8A 57 14                  MOV DL,byte ptr [EDI + 0x14]
00535C76  88 15 47 73 80 00         MOV byte ptr [0x00807347],DL
00535C7C  8B 83 8C 01 00 00         MOV EAX,dword ptr [EBX + 0x18c]
00535C82  8B 4B 68                  MOV ECX,dword ptr [EBX + 0x68]
00535C85  50                        PUSH EAX
00535C86  6A 01                     PUSH 0x1
00535C88  68 81 00 00 00            PUSH 0x81
00535C8D  68 AA 00 00 00            PUSH 0xaa
00535C92  51                        PUSH ECX
00535C93  E8 91 D5 EC FF            CALL 0x00403229
00535C98  33 D2                     XOR EDX,EDX
00535C9A  8D 7B 6C                  LEA EDI,[EBX + 0x6c]
00535C9D  8A 15 47 73 80 00         MOV DL,byte ptr [0x00807347]
00535CA3  42                        INC EDX
00535CA4  52                        PUSH EDX
00535CA5  68 90 18 7C 00            PUSH 0x7c1890
00535CAA  57                        PUSH EDI
00535CAB  FF 15 E8 BD 85 00         CALL dword ptr [0x0085bde8]
00535CB1  8B 83 8C 01 00 00         MOV EAX,dword ptr [EBX + 0x18c]
00535CB7  83 C4 20                  ADD ESP,0x20
00535CBA  8B 48 08                  MOV ECX,dword ptr [EAX + 0x8]
00535CBD  8B 50 04                  MOV EDX,dword ptr [EAX + 0x4]
00535CC0  8B 43 68                  MOV EAX,dword ptr [EBX + 0x68]
00535CC3  51                        PUSH ECX
00535CC4  8B 8B 7C 01 00 00         MOV ECX,dword ptr [EBX + 0x17c]
00535CCA  52                        PUSH EDX
00535CCB  68 81 00 00 00            PUSH 0x81
00535CD0  68 AA 00 00 00            PUSH 0xaa
00535CD5  6A 00                     PUSH 0x0
00535CD7  50                        PUSH EAX
00535CD8  E8 B3 AD 1D 00            CALL 0x00710a90
00535CDD  8B 8B 7C 01 00 00         MOV ECX,dword ptr [EBX + 0x17c]
00535CE3  6A FF                     PUSH -0x1
00535CE5  6A FF                     PUSH -0x1
00535CE7  6A 00                     PUSH 0x0
00535CE9  6A FF                     PUSH -0x1
00535CEB  6A FE                     PUSH -0x2
00535CED  57                        PUSH EDI
00535CEE  E8 7D BE 1D 00            CALL 0x00711b70
00535CF3  8B 8D 78 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff78]
00535CF9  33 C0                     XOR EAX,EAX
00535CFB  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00535D01  5F                        POP EDI
00535D02  5E                        POP ESI
00535D03  5B                        POP EBX
00535D04  8B E5                     MOV ESP,EBP
00535D06  5D                        POP EBP
00535D07  C2 04 00                  RET 0x4
switchD_00535bf9::caseD_9:
00535D0A  8B 15 28 73 80 00         MOV EDX,dword ptr [0x00807328]
00535D10  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
00535D16  33 C0                     XOR EAX,EAX
00535D18  85 D2                     TEST EDX,EDX
00535D1A  0F 94 C0                  SETZ AL
00535D1D  85 C0                     TEST EAX,EAX
00535D1F  A3 28 73 80 00            MOV [0x00807328],EAX
00535D24  74 1C                     JZ 0x00535d42
00535D26  E8 45 7E 1A 00            CALL 0x006ddb70
00535D2B  8B 8D 78 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff78]
00535D31  33 C0                     XOR EAX,EAX
00535D33  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00535D39  5F                        POP EDI
00535D3A  5E                        POP ESI
00535D3B  5B                        POP EBX
00535D3C  8B E5                     MOV ESP,EBP
00535D3E  5D                        POP EBP
00535D3F  C2 04 00                  RET 0x4
LAB_00535d42:
00535D42  E8 69 7E 1A 00            CALL 0x006ddbb0
00535D47  8B 8D 78 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff78]
00535D4D  33 C0                     XOR EAX,EAX
00535D4F  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00535D55  5F                        POP EDI
00535D56  5E                        POP ESI
00535D57  5B                        POP EBX
00535D58  8B E5                     MOV ESP,EBP
00535D5A  5D                        POP EBP
00535D5B  C2 04 00                  RET 0x4
switchD_00535bf9::caseD_6:
00535D5E  8B 47 14                  MOV EAX,dword ptr [EDI + 0x14]
00535D61  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
00535D64  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
00535D67  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
00535D6A  B8 89 88 88 88            MOV EAX,0x88888889
00535D6F  C1 E1 05                  SHL ECX,0x5
00535D72  F7 E1                     MUL ECX
00535D74  C1 EA 04                  SHR EDX,0x4
00535D77  81 EA A0 0F 00 00         SUB EDX,0xfa0
00535D7D  B9 58 76 80 00            MOV ECX,0x807658
00535D82  52                        PUSH EDX
00535D83  89 15 0E 73 80 00         MOV dword ptr [0x0080730e],EDX
00535D89  E8 0F 01 ED FF            CALL 0x00405e9d
00535D8E  8A 57 14                  MOV DL,byte ptr [EDI + 0x14]
00535D91  8B CB                     MOV ECX,EBX
00535D93  52                        PUSH EDX
00535D94  6A 00                     PUSH 0x0
00535D96  E8 58 00 ED FF            CALL 0x00405df3
00535D9B  8B 8D 78 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff78]
00535DA1  33 C0                     XOR EAX,EAX
00535DA3  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00535DA9  5F                        POP EDI
00535DAA  5E                        POP ESI
00535DAB  5B                        POP EBX
00535DAC  8B E5                     MOV ESP,EBP
00535DAE  5D                        POP EBP
00535DAF  C2 04 00                  RET 0x4
switchD_00535bf9::caseD_7:
00535DB2  A1 00 73 80 00            MOV EAX,[0x00807300]
00535DB7  25 FF 00 00 00            AND EAX,0xff
00535DBC  83 E8 02                  SUB EAX,0x2
00535DBF  0F 84 54 01 00 00         JZ 0x00535f19
00535DC5  83 E8 02                  SUB EAX,0x2
00535DC8  74 5D                     JZ 0x00535e27
00535DCA  83 E8 04                  SUB EAX,0x4
00535DCD  0F 85 E4 11 00 00         JNZ 0x00536fb7
00535DD3  8B 47 14                  MOV EAX,dword ptr [EDI + 0x14]
00535DD6  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
00535DD9  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
00535DDC  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
00535DDF  B8 89 88 88 88            MOV EAX,0x88888889
00535DE4  C1 E1 05                  SHL ECX,0x5
00535DE7  F7 E1                     MUL ECX
00535DE9  C1 EA 04                  SHR EDX,0x4
00535DEC  81 EA A0 0F 00 00         SUB EDX,0xfa0
00535DF2  B9 58 76 80 00            MOV ECX,0x807658
00535DF7  52                        PUSH EDX
00535DF8  89 15 0A 73 80 00         MOV dword ptr [0x0080730a],EDX
00535DFE  E8 19 B9 EC FF            CALL 0x0040171c
00535E03  8A 57 14                  MOV DL,byte ptr [EDI + 0x14]
00535E06  8B CB                     MOV ECX,EBX
00535E08  52                        PUSH EDX
00535E09  6A 00                     PUSH 0x0
00535E0B  E8 E3 FF EC FF            CALL 0x00405df3
00535E10  8B 8D 78 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff78]
00535E16  33 C0                     XOR EAX,EAX
00535E18  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00535E1E  5F                        POP EDI
00535E1F  5E                        POP ESI
00535E20  5B                        POP EBX
00535E21  8B E5                     MOV ESP,EBP
00535E23  5D                        POP EBP
00535E24  C2 04 00                  RET 0x4
LAB_00535e27:
00535E27  8B 15 58 76 80 00         MOV EDX,dword ptr [0x00807658]
00535E2D  8B 0D 5C 76 80 00         MOV ECX,dword ptr [0x0080765c]
00535E33  85 D2                     TEST EDX,EDX
00535E35  74 08                     JZ 0x00535e3f
00535E37  8B 41 68                  MOV EAX,dword ptr [ECX + 0x68]
00535E3A  83 E0 01                  AND EAX,0x1
00535E3D  EB 02                     JMP 0x00535e41
LAB_00535e3f:
00535E3F  33 C0                     XOR EAX,EAX
LAB_00535e41:
00535E41  85 C0                     TEST EAX,EAX
00535E43  0F 84 6E 11 00 00         JZ 0x00536fb7
00535E49  85 D2                     TEST EDX,EDX
00535E4B  74 08                     JZ 0x00535e55
00535E4D  8B 41 68                  MOV EAX,dword ptr [ECX + 0x68]
00535E50  83 E0 01                  AND EAX,0x1
00535E53  EB 02                     JMP 0x00535e57
LAB_00535e55:
00535E55  33 C0                     XOR EAX,EAX
LAB_00535e57:
00535E57  85 C0                     TEST EAX,EAX
00535E59  74 0B                     JZ 0x00535e66
00535E5B  8B 41 7C                  MOV EAX,dword ptr [ECX + 0x7c]
00535E5E  8B 51 78                  MOV EDX,dword ptr [ECX + 0x78]
00535E61  2B C2                     SUB EAX,EDX
00535E63  40                        INC EAX
00535E64  EB 02                     JMP 0x00535e68
LAB_00535e66:
00535E66  33 C0                     XOR EAX,EAX
LAB_00535e68:
00535E68  8D 48 FF                  LEA ECX,[EAX + -0x1]
00535E6B  B8 89 88 88 88            MOV EAX,0x88888889
00535E70  0F AF 4F 14               IMUL ECX,dword ptr [EDI + 0x14]
00535E74  F7 E1                     MUL ECX
00535E76  C1 EA 04                  SHR EDX,0x4
00535E79  89 15 06 73 80 00         MOV dword ptr [0x00807306],EDX
00535E7F  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
00535E82  8B 15 F8 8D 85 00         MOV EDX,dword ptr [0x00858df8]
00535E88  8D 8D F4 FE FF FF         LEA ECX,[EBP + 0xfffffef4]
00535E8E  8D 85 F0 FE FF FF         LEA EAX,[EBP + 0xfffffef0]
00535E94  6A 00                     PUSH 0x0
00535E96  51                        PUSH ECX
00535E97  89 95 F0 FE FF FF         MOV dword ptr [EBP + 0xfffffef0],EDX
00535E9D  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00535EA2  E8 49 79 1F 00            CALL 0x0072d7f0
00535EA7  83 C4 08                  ADD ESP,0x8
00535EAA  85 C0                     TEST EAX,EAX
00535EAC  75 38                     JNZ 0x00535ee6
00535EAE  A1 58 76 80 00            MOV EAX,[0x00807658]
00535EB3  8B 0D 5C 76 80 00         MOV ECX,dword ptr [0x0080765c]
00535EB9  85 C0                     TEST EAX,EAX
00535EBB  74 08                     JZ 0x00535ec5
00535EBD  8B 41 68                  MOV EAX,dword ptr [ECX + 0x68]
00535EC0  83 E0 01                  AND EAX,0x1
00535EC3  EB 02                     JMP 0x00535ec7
LAB_00535ec5:
00535EC5  33 C0                     XOR EAX,EAX
LAB_00535ec7:
00535EC7  85 C0                     TEST EAX,EAX
00535EC9  74 0D                     JZ 0x00535ed8
00535ECB  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00535ECE  50                        PUSH EAX
00535ECF  50                        PUSH EAX
00535ED0  6A 02                     PUSH 0x2
00535ED2  51                        PUSH ECX
00535ED3  E8 28 20 18 00            CALL 0x006b7f00
LAB_00535ed8:
00535ED8  8B 95 F0 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffef0]
00535EDE  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00535EE4  EB 0B                     JMP 0x00535ef1
LAB_00535ee6:
00535EE6  8B 85 F0 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffef0]
LAB_00535eec:
00535EEC  A3 F8 8D 85 00            MOV [0x00858df8],EAX
LAB_00535ef1:
00535EF1  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00535EF4  8A 51 14                  MOV DL,byte ptr [ECX + 0x14]
00535EF7  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
00535EFA  52                        PUSH EDX
00535EFB  6A 00                     PUSH 0x0
00535EFD  E8 F1 FE EC FF            CALL 0x00405df3
00535F02  8B 8D 78 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff78]
00535F08  33 C0                     XOR EAX,EAX
00535F0A  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00535F10  5F                        POP EDI
00535F11  5E                        POP ESI
00535F12  5B                        POP EBX
00535F13  8B E5                     MOV ESP,EBP
00535F15  5D                        POP EBP
00535F16  C2 04 00                  RET 0x4
LAB_00535f19:
00535F19  8B 15 58 76 80 00         MOV EDX,dword ptr [0x00807658]
00535F1F  8B 0D 5C 76 80 00         MOV ECX,dword ptr [0x0080765c]
00535F25  85 D2                     TEST EDX,EDX
00535F27  74 0B                     JZ 0x00535f34
00535F29  8B 81 80 00 00 00         MOV EAX,dword ptr [ECX + 0x80]
00535F2F  83 E0 01                  AND EAX,0x1
00535F32  EB 02                     JMP 0x00535f36
LAB_00535f34:
00535F34  33 C0                     XOR EAX,EAX
LAB_00535f36:
00535F36  85 C0                     TEST EAX,EAX
00535F38  0F 84 79 10 00 00         JZ 0x00536fb7
00535F3E  85 D2                     TEST EDX,EDX
00535F40  74 0B                     JZ 0x00535f4d
00535F42  8B 81 80 00 00 00         MOV EAX,dword ptr [ECX + 0x80]
00535F48  83 E0 01                  AND EAX,0x1
00535F4B  EB 02                     JMP 0x00535f4f
LAB_00535f4d:
00535F4D  33 C0                     XOR EAX,EAX
LAB_00535f4f:
00535F4F  85 C0                     TEST EAX,EAX
00535F51  74 11                     JZ 0x00535f64
00535F53  8B 81 94 00 00 00         MOV EAX,dword ptr [ECX + 0x94]
00535F59  8B 91 90 00 00 00         MOV EDX,dword ptr [ECX + 0x90]
00535F5F  2B C2                     SUB EAX,EDX
00535F61  40                        INC EAX
00535F62  EB 02                     JMP 0x00535f66
LAB_00535f64:
00535F64  33 C0                     XOR EAX,EAX
LAB_00535f66:
00535F66  8D 48 FF                  LEA ECX,[EAX + -0x1]
00535F69  B8 89 88 88 88            MOV EAX,0x88888889
00535F6E  0F AF 4F 14               IMUL ECX,dword ptr [EDI + 0x14]
00535F72  F7 E1                     MUL ECX
00535F74  C1 EA 04                  SHR EDX,0x4
00535F77  89 15 02 73 80 00         MOV dword ptr [0x00807302],EDX
00535F7D  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
00535F80  8B 15 F8 8D 85 00         MOV EDX,dword ptr [0x00858df8]
00535F86  8D 8D B0 FE FF FF         LEA ECX,[EBP + 0xfffffeb0]
00535F8C  8D 85 AC FE FF FF         LEA EAX,[EBP + 0xfffffeac]
00535F92  6A 00                     PUSH 0x0
00535F94  51                        PUSH ECX
00535F95  89 95 AC FE FF FF         MOV dword ptr [EBP + 0xfffffeac],EDX
00535F9B  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00535FA0  E8 4B 78 1F 00            CALL 0x0072d7f0
00535FA5  83 C4 08                  ADD ESP,0x8
00535FA8  85 C0                     TEST EAX,EAX
00535FAA  75 3E                     JNZ 0x00535fea
00535FAC  A1 58 76 80 00            MOV EAX,[0x00807658]
00535FB1  8B 0D 5C 76 80 00         MOV ECX,dword ptr [0x0080765c]
00535FB7  85 C0                     TEST EAX,EAX
00535FB9  74 0B                     JZ 0x00535fc6
00535FBB  8B 81 80 00 00 00         MOV EAX,dword ptr [ECX + 0x80]
00535FC1  83 E0 01                  AND EAX,0x1
00535FC4  EB 02                     JMP 0x00535fc8
LAB_00535fc6:
00535FC6  33 C0                     XOR EAX,EAX
LAB_00535fc8:
00535FC8  85 C0                     TEST EAX,EAX
00535FCA  74 0D                     JZ 0x00535fd9
00535FCC  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00535FCF  50                        PUSH EAX
00535FD0  50                        PUSH EAX
00535FD1  6A 03                     PUSH 0x3
00535FD3  51                        PUSH ECX
00535FD4  E8 27 1F 18 00            CALL 0x006b7f00
LAB_00535fd9:
00535FD9  8B 95 AC FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffeac]
00535FDF  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00535FE5  E9 07 FF FF FF            JMP 0x00535ef1
LAB_00535fea:
00535FEA  8B 85 AC FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffeac]
00535FF0  E9 F7 FE FF FF            JMP 0x00535eec
switchD_005347d0::caseD_c0a4:
00535FF5  8A 8B A4 01 00 00         MOV CL,byte ptr [EBX + 0x1a4]
00535FFB  8B C1                     MOV EAX,ECX
00535FFD  25 FF 00 00 00            AND EAX,0xff
00536002  48                        DEC EAX
00536003  74 61                     JZ 0x00536066
00536005  83 E8 08                  SUB EAX,0x8
00536008  0F 85 A9 0F 00 00         JNZ 0x00536fb7
0053600E  8B 0D 2C 73 80 00         MOV ECX,dword ptr [0x0080732c]
00536014  33 C0                     XOR EAX,EAX
00536016  3B CE                     CMP ECX,ESI
00536018  8D 4B 18                  LEA ECX,[EBX + 0x18]
0053601B  0F 94 C0                  SETZ AL
0053601E  51                        PUSH ECX
0053601F  56                        PUSH ESI
00536020  A3 2C 73 80 00            MOV [0x0080732c],EAX
00536025  6A 0F                     PUSH 0xf
00536027  8B CB                     MOV ECX,EBX
00536029  C7 43 28 0F 44 00 00      MOV dword ptr [EBX + 0x28],0x440f
00536030  E8 CB FF 1A 00            CALL 0x006e6000
00536035  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
0053603B  3B CE                     CMP ECX,ESI
0053603D  0F 84 74 0F 00 00         JZ 0x00536fb7
00536043  8B 15 2C 73 80 00         MOV EDX,dword ptr [0x0080732c]
00536049  52                        PUSH EDX
0053604A  E8 E1 25 1B 00            CALL 0x006e8630
0053604F  8B 8D 78 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff78]
00536055  33 C0                     XOR EAX,EAX
00536057  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0053605D  5F                        POP EDI
0053605E  5E                        POP ESI
0053605F  5B                        POP EBX
00536060  8B E5                     MOV ESP,EBP
00536062  5D                        POP EBP
00536063  C2 04 00                  RET 0x4
LAB_00536066:
00536066  88 8B A9 01 00 00         MOV byte ptr [EBX + 0x1a9],CL
0053606C  8B CB                     MOV ECX,EBX
0053606E  C6 83 A4 01 00 00 0C      MOV byte ptr [EBX + 0x1a4],0xc
00536075  E8 D7 C7 EC FF            CALL 0x00402851
0053607A  8B 8D 78 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff78]
00536080  33 C0                     XOR EAX,EAX
00536082  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00536088  5F                        POP EDI
00536089  5E                        POP ESI
0053608A  5B                        POP EBX
0053608B  8B E5                     MOV ESP,EBP
0053608D  5D                        POP EBP
0053608E  C2 04 00                  RET 0x4
switchD_005347d0::caseD_c0a5:
00536091  8A 83 A4 01 00 00         MOV AL,byte ptr [EBX + 0x1a4]
00536097  3C 01                     CMP AL,0x1
00536099  0F 84 01 01 00 00         JZ 0x005361a0
0053609F  3C 05                     CMP AL,0x5
005360A1  0F 86 10 0F 00 00         JBE 0x00536fb7
005360A7  3C 07                     CMP AL,0x7
005360A9  0F 87 08 0F 00 00         JA 0x00536fb7
005360AF  8B 15 58 76 80 00         MOV EDX,dword ptr [0x00807658]
005360B5  8B 0D 5C 76 80 00         MOV ECX,dword ptr [0x0080765c]
005360BB  3B D6                     CMP EDX,ESI
005360BD  74 08                     JZ 0x005360c7
005360BF  8B 41 50                  MOV EAX,dword ptr [ECX + 0x50]
005360C2  83 E0 01                  AND EAX,0x1
005360C5  EB 02                     JMP 0x005360c9
LAB_005360c7:
005360C7  33 C0                     XOR EAX,EAX
LAB_005360c9:
005360C9  3B C6                     CMP EAX,ESI
005360CB  0F 84 E6 0E 00 00         JZ 0x00536fb7
005360D1  3B D6                     CMP EDX,ESI
005360D3  74 08                     JZ 0x005360dd
005360D5  8B 41 50                  MOV EAX,dword ptr [ECX + 0x50]
005360D8  83 E0 01                  AND EAX,0x1
005360DB  EB 02                     JMP 0x005360df
LAB_005360dd:
005360DD  33 C0                     XOR EAX,EAX
LAB_005360df:
005360DF  3B C6                     CMP EAX,ESI
005360E1  74 0B                     JZ 0x005360ee
005360E3  8B 41 64                  MOV EAX,dword ptr [ECX + 0x64]
005360E6  8B 51 60                  MOV EDX,dword ptr [ECX + 0x60]
005360E9  2B C2                     SUB EAX,EDX
005360EB  40                        INC EAX
005360EC  EB 02                     JMP 0x005360f0
LAB_005360ee:
005360EE  33 C0                     XOR EAX,EAX
LAB_005360f0:
005360F0  8D 48 FF                  LEA ECX,[EAX + -0x1]
005360F3  B8 89 88 88 88            MOV EAX,0x88888889
005360F8  0F AF 4F 14               IMUL ECX,dword ptr [EDI + 0x14]
005360FC  F7 E1                     MUL ECX
005360FE  C1 EA 04                  SHR EDX,0x4
00536101  89 15 12 73 80 00         MOV dword ptr [0x00807312],EDX
00536107  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
0053610A  8B 15 F8 8D 85 00         MOV EDX,dword ptr [0x00858df8]
00536110  8D 8D 28 FE FF FF         LEA ECX,[EBP + 0xfffffe28]
00536116  8D 85 24 FE FF FF         LEA EAX,[EBP + 0xfffffe24]
0053611C  56                        PUSH ESI
0053611D  51                        PUSH ECX
0053611E  89 95 24 FE FF FF         MOV dword ptr [EBP + 0xfffffe24],EDX
00536124  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00536129  E8 C2 76 1F 00            CALL 0x0072d7f0
0053612E  83 C4 08                  ADD ESP,0x8
00536131  3B C6                     CMP EAX,ESI
00536133  75 38                     JNZ 0x0053616d
00536135  A1 58 76 80 00            MOV EAX,[0x00807658]
0053613A  8B 0D 5C 76 80 00         MOV ECX,dword ptr [0x0080765c]
00536140  3B C6                     CMP EAX,ESI
00536142  74 08                     JZ 0x0053614c
00536144  8B 41 50                  MOV EAX,dword ptr [ECX + 0x50]
00536147  83 E0 01                  AND EAX,0x1
0053614A  EB 02                     JMP 0x0053614e
LAB_0053614c:
0053614C  33 C0                     XOR EAX,EAX
LAB_0053614e:
0053614E  3B C6                     CMP EAX,ESI
00536150  74 0D                     JZ 0x0053615f
00536152  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00536155  50                        PUSH EAX
00536156  50                        PUSH EAX
00536157  6A 01                     PUSH 0x1
00536159  51                        PUSH ECX
0053615A  E8 A1 1D 18 00            CALL 0x006b7f00
LAB_0053615f:
0053615F  8B 95 24 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffe24]
00536165  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0053616B  EB 0B                     JMP 0x00536178
LAB_0053616d:
0053616D  8B 85 24 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffe24]
00536173  A3 F8 8D 85 00            MOV [0x00858df8],EAX
LAB_00536178:
00536178  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0053617B  8A 51 14                  MOV DL,byte ptr [ECX + 0x14]
0053617E  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
00536181  52                        PUSH EDX
00536182  6A 02                     PUSH 0x2
00536184  E8 6A FC EC FF            CALL 0x00405df3
00536189  8B 8D 78 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff78]
0053618F  33 C0                     XOR EAX,EAX
00536191  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00536197  5F                        POP EDI
00536198  5E                        POP ESI
00536199  5B                        POP EBX
0053619A  8B E5                     MOV ESP,EBP
0053619C  5D                        POP EBP
0053619D  C2 04 00                  RET 0x4
LAB_005361a0:
005361A0  8B CB                     MOV ECX,EBX
005361A2  C6 83 A9 01 00 00 01      MOV byte ptr [EBX + 0x1a9],0x1
005361A9  C6 83 A4 01 00 00 02      MOV byte ptr [EBX + 0x1a4],0x2
005361B0  E8 9C C6 EC FF            CALL 0x00402851
005361B5  8B 8D 78 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff78]
005361BB  33 C0                     XOR EAX,EAX
005361BD  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005361C3  5F                        POP EDI
005361C4  5E                        POP ESI
005361C5  5B                        POP EBX
005361C6  8B E5                     MOV ESP,EBP
005361C8  5D                        POP EBP
005361C9  C2 04 00                  RET 0x4
switchD_005347d0::caseD_c0a6:
005361CC  8A 9B A4 01 00 00         MOV BL,byte ptr [EBX + 0x1a4]
005361D2  80 FB 06                  CMP BL,0x6
005361D5  0F 82 DC 0D 00 00         JC 0x00536fb7
005361DB  80 FB 07                  CMP BL,0x7
005361DE  0F 87 D3 0D 00 00         JA 0x00536fb7
005361E4  8B 15 58 76 80 00         MOV EDX,dword ptr [0x00807658]
005361EA  8B 0D 5C 76 80 00         MOV ECX,dword ptr [0x0080765c]
005361F0  3B D6                     CMP EDX,ESI
005361F2  74 08                     JZ 0x005361fc
005361F4  8B 41 38                  MOV EAX,dword ptr [ECX + 0x38]
005361F7  83 E0 01                  AND EAX,0x1
005361FA  EB 02                     JMP 0x005361fe
LAB_005361fc:
005361FC  33 C0                     XOR EAX,EAX
LAB_005361fe:
005361FE  3B C6                     CMP EAX,ESI
00536200  0F 84 B1 0D 00 00         JZ 0x00536fb7
00536206  3B D6                     CMP EDX,ESI
00536208  74 08                     JZ 0x00536212
0053620A  8B 41 38                  MOV EAX,dword ptr [ECX + 0x38]
0053620D  83 E0 01                  AND EAX,0x1
00536210  EB 02                     JMP 0x00536214
LAB_00536212:
00536212  33 C0                     XOR EAX,EAX
LAB_00536214:
00536214  3B C6                     CMP EAX,ESI
00536216  74 0B                     JZ 0x00536223
00536218  8B 41 4C                  MOV EAX,dword ptr [ECX + 0x4c]
0053621B  8B 51 48                  MOV EDX,dword ptr [ECX + 0x48]
0053621E  2B C2                     SUB EAX,EDX
00536220  40                        INC EAX
00536221  EB 02                     JMP 0x00536225
LAB_00536223:
00536223  33 C0                     XOR EAX,EAX
LAB_00536225:
00536225  8D 48 FF                  LEA ECX,[EAX + -0x1]
00536228  B8 89 88 88 88            MOV EAX,0x88888889
0053622D  0F AF 4F 14               IMUL ECX,dword ptr [EDI + 0x14]
00536231  F7 E1                     MUL ECX
00536233  C1 EA 04                  SHR EDX,0x4
00536236  89 15 16 73 80 00         MOV dword ptr [0x00807316],EDX
0053623C  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
0053623F  8B 15 F8 8D 85 00         MOV EDX,dword ptr [0x00858df8]
00536245  8D 8D A0 FD FF FF         LEA ECX,[EBP + 0xfffffda0]
0053624B  8D 85 9C FD FF FF         LEA EAX,[EBP + 0xfffffd9c]
00536251  56                        PUSH ESI
00536252  51                        PUSH ECX
00536253  89 95 9C FD FF FF         MOV dword ptr [EBP + 0xfffffd9c],EDX
00536259  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0053625E  E8 8D 75 1F 00            CALL 0x0072d7f0
00536263  83 C4 08                  ADD ESP,0x8
00536266  3B C6                     CMP EAX,ESI
00536268  75 37                     JNZ 0x005362a1
0053626A  A1 58 76 80 00            MOV EAX,[0x00807658]
0053626F  8B 0D 5C 76 80 00         MOV ECX,dword ptr [0x0080765c]
00536275  3B C6                     CMP EAX,ESI
00536277  74 08                     JZ 0x00536281
00536279  8B 41 38                  MOV EAX,dword ptr [ECX + 0x38]
0053627C  83 E0 01                  AND EAX,0x1
0053627F  EB 02                     JMP 0x00536283
LAB_00536281:
00536281  33 C0                     XOR EAX,EAX
LAB_00536283:
00536283  3B C6                     CMP EAX,ESI
00536285  74 0C                     JZ 0x00536293
00536287  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0053628A  50                        PUSH EAX
0053628B  50                        PUSH EAX
0053628C  56                        PUSH ESI
0053628D  51                        PUSH ECX
0053628E  E8 6D 1C 18 00            CALL 0x006b7f00
LAB_00536293:
00536293  8B 95 9C FD FF FF         MOV EDX,dword ptr [EBP + 0xfffffd9c]
00536299  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0053629F  EB 0B                     JMP 0x005362ac
LAB_005362a1:
005362A1  8B 85 9C FD FF FF         MOV EAX,dword ptr [EBP + 0xfffffd9c]
005362A7  A3 F8 8D 85 00            MOV [0x00858df8],EAX
LAB_005362ac:
005362AC  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
005362AF  8A 51 14                  MOV DL,byte ptr [ECX + 0x14]
005362B2  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
005362B5  52                        PUSH EDX
005362B6  6A 03                     PUSH 0x3
005362B8  E8 36 FB EC FF            CALL 0x00405df3
005362BD  8B 8D 78 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff78]
005362C3  33 C0                     XOR EAX,EAX
005362C5  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005362CB  5F                        POP EDI
005362CC  5E                        POP ESI
005362CD  5B                        POP EBX
005362CE  8B E5                     MOV ESP,EBP
005362D0  5D                        POP EBP
005362D1  C2 04 00                  RET 0x4
switchD_005347d0::caseD_c0af:
005362D4  33 C0                     XOR EAX,EAX
005362D6  8A 83 A4 01 00 00         MOV AL,byte ptr [EBX + 0x1a4]
005362DC  48                        DEC EAX
005362DD  83 F8 0C                  CMP EAX,0xc
005362E0  0F 87 D1 0C 00 00         JA 0x00536fb7
switchD_005362e6::switchD:
005362E6  FF 24 85 8C 72 53 00      JMP dword ptr [EAX*0x4 + 0x53728c]
switchD_005362e6::caseD_1:
005362ED  A0 4E 87 80 00            MOV AL,[0x0080874e]
005362F2  3C 03                     CMP AL,0x3
005362F4  75 10                     JNZ 0x00536306
005362F6  B8 92 46 40 00            MOV EAX,0x404692
005362FB  50                        PUSH EAX
005362FC  68 81 3E 00 00            PUSH 0x3e81
00536301  E9 85 0C 00 00            JMP 0x00536f8b
LAB_00536306:
00536306  3C 01                     CMP AL,0x1
00536308  B8 95 4D 40 00            MOV EAX,0x404d95
0053630D  74 05                     JZ 0x00536314
0053630F  B8 D1 39 40 00            MOV EAX,0x4039d1
LAB_00536314:
00536314  50                        PUSH EAX
00536315  68 81 3E 00 00            PUSH 0x3e81
0053631A  E9 6C 0C 00 00            JMP 0x00536f8b
switchD_005362e6::caseD_5:
0053631F  68 3E 27 00 00            PUSH 0x273e
00536324  E9 8C 0A 00 00            JMP 0x00536db5
switchD_005362e6::caseD_2:
00536329  A0 4E 87 80 00            MOV AL,[0x0080874e]
0053632E  3C 03                     CMP AL,0x3
00536330  75 17                     JNZ 0x00536349
00536332  8B 8B 80 01 00 00         MOV ECX,dword ptr [EBX + 0x180]
00536338  B8 92 46 40 00            MOV EAX,0x404692
0053633D  50                        PUSH EAX
0053633E  68 8B 3E 00 00            PUSH 0x3e8b
00536343  51                        PUSH ECX
00536344  E9 49 0C 00 00            JMP 0x00536f92
LAB_00536349:
00536349  3C 01                     CMP AL,0x1
0053634B  B8 95 4D 40 00            MOV EAX,0x404d95
00536350  74 05                     JZ 0x00536357
00536352  B8 D1 39 40 00            MOV EAX,0x4039d1
LAB_00536357:
00536357  8B 8B 80 01 00 00         MOV ECX,dword ptr [EBX + 0x180]
0053635D  50                        PUSH EAX
0053635E  68 8B 3E 00 00            PUSH 0x3e8b
00536363  51                        PUSH ECX
00536364  E9 29 0C 00 00            JMP 0x00536f92
switchD_005362e6::caseD_9:
00536369  A0 4E 87 80 00            MOV AL,[0x0080874e]
0053636E  3C 03                     CMP AL,0x3
00536370  75 16                     JNZ 0x00536388
00536372  B8 E9 3F 40 00            MOV EAX,0x403fe9
00536377  56                        PUSH ESI
00536378  50                        PUSH EAX
00536379  68 5B 23 40 00            PUSH 0x40235b
0053637E  68 F4 3E 00 00            PUSH 0x3ef4
00536383  E9 60 0B 00 00            JMP 0x00536ee8
LAB_00536388:
00536388  3C 01                     CMP AL,0x1
0053638A  B8 6A 14 40 00            MOV EAX,0x40146a
0053638F  74 05                     JZ 0x00536396
00536391  B8 1C 21 40 00            MOV EAX,0x40211c
LAB_00536396:
00536396  56                        PUSH ESI
00536397  50                        PUSH EAX
00536398  68 5B 23 40 00            PUSH 0x40235b
0053639D  68 F4 3E 00 00            PUSH 0x3ef4
005363A2  E9 41 0B 00 00            JMP 0x00536ee8
switchD_005362e6::caseD_8:
005363A7  8B 57 14                  MOV EDX,dword ptr [EDI + 0x14]
005363AA  8B 02                     MOV EAX,dword ptr [EDX]
005363AC  48                        DEC EAX
005363AD  0F 84 BC 00 00 00         JZ 0x0053646f
005363B3  48                        DEC EAX
005363B4  74 60                     JZ 0x00536416
005363B6  48                        DEC EAX
005363B7  0F 85 FA 0B 00 00         JNZ 0x00536fb7
005363BD  A0 4E 87 80 00            MOV AL,[0x0080874e]
005363C2  3C 03                     CMP AL,0x3
005363C4  75 07                     JNZ 0x005363cd
005363C6  B8 7C 5C 40 00            MOV EAX,0x405c7c
005363CB  EB 0E                     JMP 0x005363db
LAB_005363cd:
005363CD  3C 01                     CMP AL,0x1
005363CF  B8 19 29 40 00            MOV EAX,0x402919
005363D4  74 05                     JZ 0x005363db
005363D6  B8 87 5B 40 00            MOV EAX,0x405b87
LAB_005363db:
005363DB  6A 01                     PUSH 0x1
005363DD  50                        PUSH EAX
005363DE  68 5A 33 40 00            PUSH 0x40335a
005363E3  68 F2 3E 00 00            PUSH 0x3ef2
005363E8  56                        PUSH ESI
005363E9  68 50 73 7C 00            PUSH 0x7c7350
005363EE  E8 89 F3 EC FF            CALL 0x0040577c
005363F3  83 C4 08                  ADD ESP,0x8
005363F6  8B CB                     MOV ECX,EBX
005363F8  50                        PUSH EAX
005363F9  57                        PUSH EDI
005363FA  E8 0D EB EC FF            CALL 0x00404f0c
005363FF  8B 8D 78 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff78]
00536405  33 C0                     XOR EAX,EAX
00536407  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0053640D  5F                        POP EDI
0053640E  5E                        POP ESI
0053640F  5B                        POP EBX
00536410  8B E5                     MOV ESP,EBP
00536412  5D                        POP EBP
00536413  C2 04 00                  RET 0x4
LAB_00536416:
00536416  A0 4E 87 80 00            MOV AL,[0x0080874e]
0053641B  3C 03                     CMP AL,0x3
0053641D  75 07                     JNZ 0x00536426
0053641F  B8 7C 5C 40 00            MOV EAX,0x405c7c
00536424  EB 0E                     JMP 0x00536434
LAB_00536426:
00536426  3C 01                     CMP AL,0x1
00536428  B8 19 29 40 00            MOV EAX,0x402919
0053642D  74 05                     JZ 0x00536434
LAB_0053642f:
0053642F  B8 87 5B 40 00            MOV EAX,0x405b87
LAB_00536434:
00536434  6A 01                     PUSH 0x1
00536436  50                        PUSH EAX
00536437  68 5A 33 40 00            PUSH 0x40335a
0053643C  68 F0 3E 00 00            PUSH 0x3ef0
OptPanelTy::GetMessage::cf_common_exit_00536441:
00536441  56                        PUSH ESI
00536442  68 50 73 7C 00            PUSH 0x7c7350
00536447  E8 30 F3 EC FF            CALL 0x0040577c
0053644C  83 C4 08                  ADD ESP,0x8
0053644F  8B CB                     MOV ECX,EBX
00536451  50                        PUSH EAX
00536452  57                        PUSH EDI
00536453  E8 B4 EA EC FF            CALL 0x00404f0c
00536458  8B 8D 78 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff78]
0053645E  33 C0                     XOR EAX,EAX
00536460  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00536466  5F                        POP EDI
00536467  5E                        POP ESI
00536468  5B                        POP EBX
00536469  8B E5                     MOV ESP,EBP
0053646B  5D                        POP EBP
0053646C  C2 04 00                  RET 0x4
LAB_0053646f:
0053646F  A0 4E 87 80 00            MOV AL,[0x0080874e]
00536474  3C 03                     CMP AL,0x3
00536476  75 07                     JNZ 0x0053647f
00536478  B8 7C 5C 40 00            MOV EAX,0x405c7c
0053647D  EB 0E                     JMP 0x0053648d
LAB_0053647f:
0053647F  3C 01                     CMP AL,0x1
00536481  B8 19 29 40 00            MOV EAX,0x402919
00536486  74 05                     JZ 0x0053648d
00536488  B8 87 5B 40 00            MOV EAX,0x405b87
LAB_0053648d:
0053648D  6A 01                     PUSH 0x1
0053648F  50                        PUSH EAX
00536490  68 5A 33 40 00            PUSH 0x40335a
00536495  68 F1 3E 00 00            PUSH 0x3ef1
0053649A  56                        PUSH ESI
0053649B  68 50 73 7C 00            PUSH 0x7c7350
005364A0  E8 D7 F2 EC FF            CALL 0x0040577c
005364A5  83 C4 08                  ADD ESP,0x8
005364A8  8B CB                     MOV ECX,EBX
005364AA  50                        PUSH EAX
005364AB  57                        PUSH EDI
005364AC  E8 5B EA EC FF            CALL 0x00404f0c
005364B1  8B 8D 78 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff78]
005364B7  33 C0                     XOR EAX,EAX
005364B9  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005364BF  5F                        POP EDI
005364C0  5E                        POP ESI
005364C1  5B                        POP EBX
005364C2  8B E5                     MOV ESP,EBP
005364C4  5D                        POP EBP
005364C5  C2 04 00                  RET 0x4
switchD_005362e6::caseD_d:
005364C8  8B 47 14                  MOV EAX,dword ptr [EDI + 0x14]
005364CB  8B 00                     MOV EAX,dword ptr [EAX]
005364CD  48                        DEC EAX
005364CE  0F 84 BC 00 00 00         JZ 0x00536590
005364D4  48                        DEC EAX
005364D5  74 60                     JZ 0x00536537
005364D7  48                        DEC EAX
005364D8  0F 85 D9 0A 00 00         JNZ 0x00536fb7
005364DE  A0 4E 87 80 00            MOV AL,[0x0080874e]
005364E3  3C 03                     CMP AL,0x3
005364E5  75 07                     JNZ 0x005364ee
005364E7  B8 7C 5C 40 00            MOV EAX,0x405c7c
005364EC  EB 0E                     JMP 0x005364fc
LAB_005364ee:
005364EE  3C 01                     CMP AL,0x1
005364F0  B8 19 29 40 00            MOV EAX,0x402919
005364F5  74 05                     JZ 0x005364fc
005364F7  B8 87 5B 40 00            MOV EAX,0x405b87
LAB_005364fc:
005364FC  6A 01                     PUSH 0x1
005364FE  50                        PUSH EAX
005364FF  68 5A 33 40 00            PUSH 0x40335a
00536504  68 92 3E 00 00            PUSH 0x3e92
00536509  56                        PUSH ESI
0053650A  68 50 73 7C 00            PUSH 0x7c7350
0053650F  E8 68 F2 EC FF            CALL 0x0040577c
00536514  83 C4 08                  ADD ESP,0x8
00536517  8B CB                     MOV ECX,EBX
00536519  50                        PUSH EAX
0053651A  57                        PUSH EDI
0053651B  E8 EC E9 EC FF            CALL 0x00404f0c
00536520  8B 8D 78 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff78]
00536526  33 C0                     XOR EAX,EAX
00536528  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0053652E  5F                        POP EDI
0053652F  5E                        POP ESI
00536530  5B                        POP EBX
00536531  8B E5                     MOV ESP,EBP
00536533  5D                        POP EBP
00536534  C2 04 00                  RET 0x4
LAB_00536537:
00536537  A0 4E 87 80 00            MOV AL,[0x0080874e]
0053653C  3C 03                     CMP AL,0x3
0053653E  75 07                     JNZ 0x00536547
00536540  B8 7C 5C 40 00            MOV EAX,0x405c7c
00536545  EB 0E                     JMP 0x00536555
LAB_00536547:
00536547  3C 01                     CMP AL,0x1
00536549  B8 19 29 40 00            MOV EAX,0x402919
0053654E  74 05                     JZ 0x00536555
00536550  B8 87 5B 40 00            MOV EAX,0x405b87
LAB_00536555:
00536555  6A 01                     PUSH 0x1
00536557  50                        PUSH EAX
00536558  68 5A 33 40 00            PUSH 0x40335a
0053655D  68 91 3E 00 00            PUSH 0x3e91
00536562  56                        PUSH ESI
00536563  68 50 73 7C 00            PUSH 0x7c7350
00536568  E8 0F F2 EC FF            CALL 0x0040577c
0053656D  83 C4 08                  ADD ESP,0x8
00536570  8B CB                     MOV ECX,EBX
00536572  50                        PUSH EAX
00536573  57                        PUSH EDI
00536574  E8 93 E9 EC FF            CALL 0x00404f0c
00536579  8B 8D 78 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff78]
0053657F  33 C0                     XOR EAX,EAX
00536581  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00536587  5F                        POP EDI
00536588  5E                        POP ESI
00536589  5B                        POP EBX
0053658A  8B E5                     MOV ESP,EBP
0053658C  5D                        POP EBP
0053658D  C2 04 00                  RET 0x4
LAB_00536590:
00536590  A0 4E 87 80 00            MOV AL,[0x0080874e]
00536595  3C 03                     CMP AL,0x3
00536597  75 07                     JNZ 0x005365a0
00536599  B8 7C 5C 40 00            MOV EAX,0x405c7c
0053659E  EB 0E                     JMP 0x005365ae
LAB_005365a0:
005365A0  3C 01                     CMP AL,0x1
005365A2  B8 19 29 40 00            MOV EAX,0x402919
005365A7  74 05                     JZ 0x005365ae
005365A9  B8 87 5B 40 00            MOV EAX,0x405b87
LAB_005365ae:
005365AE  6A 01                     PUSH 0x1
005365B0  50                        PUSH EAX
005365B1  68 5A 33 40 00            PUSH 0x40335a
005365B6  68 90 3E 00 00            PUSH 0x3e90
005365BB  56                        PUSH ESI
005365BC  68 50 73 7C 00            PUSH 0x7c7350
005365C1  E8 B6 F1 EC FF            CALL 0x0040577c
005365C6  83 C4 08                  ADD ESP,0x8
005365C9  8B CB                     MOV ECX,EBX
005365CB  50                        PUSH EAX
005365CC  57                        PUSH EDI
005365CD  E8 3A E9 EC FF            CALL 0x00404f0c
005365D2  8B 8D 78 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff78]
005365D8  33 C0                     XOR EAX,EAX
005365DA  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005365E0  5F                        POP EDI
005365E1  5E                        POP ESI
005365E2  5B                        POP EBX
005365E3  8B E5                     MOV ESP,EBP
005365E5  5D                        POP EBP
005365E6  C2 04 00                  RET 0x4
switchD_005362e6::caseD_6:
005365E9  A0 4E 87 80 00            MOV AL,[0x0080874e]
005365EE  3C 03                     CMP AL,0x3
005365F0  75 16                     JNZ 0x00536608
005365F2  B8 E9 3F 40 00            MOV EAX,0x403fe9
005365F7  56                        PUSH ESI
005365F8  50                        PUSH EAX
005365F9  68 5B 23 40 00            PUSH 0x40235b
005365FE  68 FC 3E 00 00            PUSH 0x3efc
00536603  E9 E0 08 00 00            JMP 0x00536ee8
LAB_00536608:
00536608  3C 01                     CMP AL,0x1
0053660A  B8 6A 14 40 00            MOV EAX,0x40146a
0053660F  74 05                     JZ 0x00536616
00536611  B8 1C 21 40 00            MOV EAX,0x40211c
LAB_00536616:
00536616  56                        PUSH ESI
00536617  50                        PUSH EAX
00536618  68 5B 23 40 00            PUSH 0x40235b
0053661D  68 FC 3E 00 00            PUSH 0x3efc
00536622  E9 C1 08 00 00            JMP 0x00536ee8
switchD_005362e6::caseD_7:
00536627  8B 4F 14                  MOV ECX,dword ptr [EDI + 0x14]
0053662A  8B 01                     MOV EAX,dword ptr [ECX]
0053662C  48                        DEC EAX
0053662D  0F 84 8A 00 00 00         JZ 0x005366bd
00536633  48                        DEC EAX
00536634  74 47                     JZ 0x0053667d
00536636  48                        DEC EAX
00536637  0F 85 7A 09 00 00         JNZ 0x00536fb7
0053663D  A0 4E 87 80 00            MOV AL,[0x0080874e]
00536642  3C 03                     CMP AL,0x3
00536644  75 17                     JNZ 0x0053665d
00536646  B8 7C 5C 40 00            MOV EAX,0x405c7c
0053664B  6A 01                     PUSH 0x1
0053664D  50                        PUSH EAX
0053664E  68 5A 33 40 00            PUSH 0x40335a
00536653  68 E6 3E 00 00            PUSH 0x3ee6
00536658  E9 8B 08 00 00            JMP 0x00536ee8
LAB_0053665d:
0053665D  3C 01                     CMP AL,0x1
0053665F  B8 19 29 40 00            MOV EAX,0x402919
00536664  74 05                     JZ 0x0053666b
00536666  B8 87 5B 40 00            MOV EAX,0x405b87
LAB_0053666b:
0053666B  6A 01                     PUSH 0x1
0053666D  50                        PUSH EAX
0053666E  68 5A 33 40 00            PUSH 0x40335a
00536673  68 E6 3E 00 00            PUSH 0x3ee6
00536678  E9 6B 08 00 00            JMP 0x00536ee8
LAB_0053667d:
0053667D  A0 4E 87 80 00            MOV AL,[0x0080874e]
00536682  3C 03                     CMP AL,0x3
00536684  75 17                     JNZ 0x0053669d
00536686  B8 7C 5C 40 00            MOV EAX,0x405c7c
0053668B  6A 01                     PUSH 0x1
0053668D  50                        PUSH EAX
0053668E  68 5A 33 40 00            PUSH 0x40335a
00536693  68 E5 3E 00 00            PUSH 0x3ee5
00536698  E9 4B 08 00 00            JMP 0x00536ee8
LAB_0053669d:
0053669D  3C 01                     CMP AL,0x1
0053669F  B8 19 29 40 00            MOV EAX,0x402919
005366A4  74 05                     JZ 0x005366ab
005366A6  B8 87 5B 40 00            MOV EAX,0x405b87
LAB_005366ab:
005366AB  6A 01                     PUSH 0x1
005366AD  50                        PUSH EAX
005366AE  68 5A 33 40 00            PUSH 0x40335a
005366B3  68 E5 3E 00 00            PUSH 0x3ee5
005366B8  E9 2B 08 00 00            JMP 0x00536ee8
LAB_005366bd:
005366BD  A0 4E 87 80 00            MOV AL,[0x0080874e]
005366C2  3C 03                     CMP AL,0x3
005366C4  75 17                     JNZ 0x005366dd
005366C6  B8 7C 5C 40 00            MOV EAX,0x405c7c
005366CB  6A 01                     PUSH 0x1
005366CD  50                        PUSH EAX
005366CE  68 5A 33 40 00            PUSH 0x40335a
005366D3  68 E7 3E 00 00            PUSH 0x3ee7
005366D8  E9 0B 08 00 00            JMP 0x00536ee8
LAB_005366dd:
005366DD  3C 01                     CMP AL,0x1
005366DF  B8 19 29 40 00            MOV EAX,0x402919
005366E4  74 05                     JZ 0x005366eb
005366E6  B8 87 5B 40 00            MOV EAX,0x405b87
LAB_005366eb:
005366EB  6A 01                     PUSH 0x1
005366ED  50                        PUSH EAX
005366EE  68 5A 33 40 00            PUSH 0x40335a
005366F3  68 E7 3E 00 00            PUSH 0x3ee7
005366F8  E9 EB 07 00 00            JMP 0x00536ee8
switchD_005347d0::caseD_c0b0:
005366FD  33 C0                     XOR EAX,EAX
005366FF  8A 83 A4 01 00 00         MOV AL,byte ptr [EBX + 0x1a4]
00536705  48                        DEC EAX
00536706  83 F8 0C                  CMP EAX,0xc
00536709  0F 87 A8 08 00 00         JA 0x00536fb7
switchD_0053670f::switchD:
0053670F  FF 24 85 C0 72 53 00      JMP dword ptr [EAX*0x4 + 0x5372c0]
switchD_0053670f::caseD_1:
00536716  A0 4E 87 80 00            MOV AL,[0x0080874e]
0053671B  3C 03                     CMP AL,0x3
0053671D  75 17                     JNZ 0x00536736
0053671F  8B 93 80 01 00 00         MOV EDX,dword ptr [EBX + 0x180]
00536725  B8 92 46 40 00            MOV EAX,0x404692
0053672A  50                        PUSH EAX
0053672B  68 82 3E 00 00            PUSH 0x3e82
00536730  52                        PUSH EDX
00536731  E9 5C 08 00 00            JMP 0x00536f92
LAB_00536736:
00536736  3C 01                     CMP AL,0x1
00536738  B8 95 4D 40 00            MOV EAX,0x404d95
0053673D  74 05                     JZ 0x00536744
0053673F  B8 D1 39 40 00            MOV EAX,0x4039d1
LAB_00536744:
00536744  8B 93 80 01 00 00         MOV EDX,dword ptr [EBX + 0x180]
0053674A  50                        PUSH EAX
0053674B  68 82 3E 00 00            PUSH 0x3e82
00536750  52                        PUSH EDX
00536751  E9 3C 08 00 00            JMP 0x00536f92
switchD_00536a2b::caseD_3:
00536756  68 51 27 00 00            PUSH 0x2751
0053675B  E9 55 06 00 00            JMP 0x00536db5
switchD_0053670f::caseD_5:
00536760  68 3F 27 00 00            PUSH 0x273f
00536765  E9 4B 06 00 00            JMP 0x00536db5
switchD_0053670f::caseD_2:
0053676A  A0 4E 87 80 00            MOV AL,[0x0080874e]
0053676F  3C 03                     CMP AL,0x3
00536771  75 10                     JNZ 0x00536783
00536773  B8 92 46 40 00            MOV EAX,0x404692
00536778  50                        PUSH EAX
00536779  68 8A 3E 00 00            PUSH 0x3e8a
0053677E  E9 08 08 00 00            JMP 0x00536f8b
LAB_00536783:
00536783  3C 01                     CMP AL,0x1
00536785  B8 95 4D 40 00            MOV EAX,0x404d95
0053678A  74 05                     JZ 0x00536791
0053678C  B8 D1 39 40 00            MOV EAX,0x4039d1
LAB_00536791:
00536791  50                        PUSH EAX
00536792  68 8A 3E 00 00            PUSH 0x3e8a
00536797  E9 EF 07 00 00            JMP 0x00536f8b
switchD_0053670f::caseD_9:
0053679C  A0 4E 87 80 00            MOV AL,[0x0080874e]
005367A1  3C 03                     CMP AL,0x3
005367A3  75 16                     JNZ 0x005367bb
005367A5  B8 E9 3F 40 00            MOV EAX,0x403fe9
005367AA  56                        PUSH ESI
005367AB  50                        PUSH EAX
005367AC  68 5B 23 40 00            PUSH 0x40235b
005367B1  68 F5 3E 00 00            PUSH 0x3ef5
005367B6  E9 2D 07 00 00            JMP 0x00536ee8
LAB_005367bb:
005367BB  3C 01                     CMP AL,0x1
005367BD  B8 6A 14 40 00            MOV EAX,0x40146a
005367C2  74 05                     JZ 0x005367c9
005367C4  B8 1C 21 40 00            MOV EAX,0x40211c
LAB_005367c9:
005367C9  56                        PUSH ESI
005367CA  50                        PUSH EAX
005367CB  68 5B 23 40 00            PUSH 0x40235b
005367D0  68 F5 3E 00 00            PUSH 0x3ef5
005367D5  E9 0E 07 00 00            JMP 0x00536ee8
switchD_0053670f::caseD_d:
005367DA  A0 4E 87 80 00            MOV AL,[0x0080874e]
005367DF  3C 03                     CMP AL,0x3
005367E1  75 17                     JNZ 0x005367fa
005367E3  8B 8B 80 01 00 00         MOV ECX,dword ptr [EBX + 0x180]
005367E9  B8 92 46 40 00            MOV EAX,0x404692
005367EE  50                        PUSH EAX
005367EF  68 93 3E 00 00            PUSH 0x3e93
005367F4  51                        PUSH ECX
005367F5  E9 98 07 00 00            JMP 0x00536f92
LAB_005367fa:
005367FA  3C 01                     CMP AL,0x1
005367FC  B8 95 4D 40 00            MOV EAX,0x404d95
00536801  74 05                     JZ 0x00536808
00536803  B8 D1 39 40 00            MOV EAX,0x4039d1
LAB_00536808:
00536808  8B 8B 80 01 00 00         MOV ECX,dword ptr [EBX + 0x180]
0053680E  50                        PUSH EAX
0053680F  68 93 3E 00 00            PUSH 0x3e93
00536814  51                        PUSH ECX
00536815  E9 78 07 00 00            JMP 0x00536f92
switchD_0053670f::caseD_8:
0053681A  8B 57 14                  MOV EDX,dword ptr [EDI + 0x14]
0053681D  8B 02                     MOV EAX,dword ptr [EDX]
0053681F  48                        DEC EAX
00536820  74 53                     JZ 0x00536875
00536822  48                        DEC EAX
00536823  74 2B                     JZ 0x00536850
00536825  48                        DEC EAX
00536826  0F 85 8B 07 00 00         JNZ 0x00536fb7
0053682C  A0 4E 87 80 00            MOV AL,[0x0080874e]
00536831  3C 03                     CMP AL,0x3
00536833  0F 85 19 05 00 00         JNZ 0x00536d52
00536839  B8 7C 5C 40 00            MOV EAX,0x405c7c
0053683E  6A 01                     PUSH 0x1
00536840  50                        PUSH EAX
00536841  68 5A 33 40 00            PUSH 0x40335a
00536846  68 F2 3E 00 00            PUSH 0x3ef2
0053684B  E9 F1 FB FF FF            JMP 0x00536441
LAB_00536850:
00536850  A0 4E 87 80 00            MOV AL,[0x0080874e]
00536855  3C 03                     CMP AL,0x3
00536857  75 0A                     JNZ 0x00536863
00536859  B8 7C 5C 40 00            MOV EAX,0x405c7c
0053685E  E9 D1 FB FF FF            JMP 0x00536434
LAB_00536863:
00536863  3C 01                     CMP AL,0x1
00536865  B8 19 29 40 00            MOV EAX,0x402919
0053686A  0F 84 C4 FB FF FF         JZ 0x00536434
00536870  E9 BA FB FF FF            JMP 0x0053642f
LAB_00536875:
00536875  A0 4E 87 80 00            MOV AL,[0x0080874e]
0053687A  3C 03                     CMP AL,0x3
0053687C  75 17                     JNZ 0x00536895
0053687E  B8 7C 5C 40 00            MOV EAX,0x405c7c
00536883  6A 01                     PUSH 0x1
00536885  50                        PUSH EAX
00536886  68 5A 33 40 00            PUSH 0x40335a
0053688B  68 F1 3E 00 00            PUSH 0x3ef1
00536890  E9 AC FB FF FF            JMP 0x00536441
LAB_00536895:
00536895  3C 01                     CMP AL,0x1
00536897  B8 19 29 40 00            MOV EAX,0x402919
0053689C  74 05                     JZ 0x005368a3
0053689E  B8 87 5B 40 00            MOV EAX,0x405b87
LAB_005368a3:
005368A3  6A 01                     PUSH 0x1
005368A5  50                        PUSH EAX
005368A6  68 5A 33 40 00            PUSH 0x40335a
005368AB  68 F1 3E 00 00            PUSH 0x3ef1
005368B0  E9 8C FB FF FF            JMP 0x00536441
switchD_0053670f::caseD_6:
005368B5  A0 4E 87 80 00            MOV AL,[0x0080874e]
005368BA  3C 03                     CMP AL,0x3
005368BC  75 16                     JNZ 0x005368d4
005368BE  B8 E9 3F 40 00            MOV EAX,0x403fe9
005368C3  56                        PUSH ESI
005368C4  50                        PUSH EAX
005368C5  68 5B 23 40 00            PUSH 0x40235b
005368CA  68 FD 3E 00 00            PUSH 0x3efd
005368CF  E9 14 06 00 00            JMP 0x00536ee8
LAB_005368d4:
005368D4  3C 01                     CMP AL,0x1
005368D6  B8 6A 14 40 00            MOV EAX,0x40146a
005368DB  74 05                     JZ 0x005368e2
005368DD  B8 1C 21 40 00            MOV EAX,0x40211c
LAB_005368e2:
005368E2  56                        PUSH ESI
005368E3  50                        PUSH EAX
005368E4  68 5B 23 40 00            PUSH 0x40235b
005368E9  68 FD 3E 00 00            PUSH 0x3efd
005368EE  E9 F5 05 00 00            JMP 0x00536ee8
switchD_0053670f::caseD_3:
005368F3  8B 83 E5 01 00 00         MOV EAX,dword ptr [EBX + 0x1e5]
005368F9  8B 48 14                  MOV ECX,dword ptr [EAX + 0x14]
005368FC  3B CE                     CMP ECX,ESI
005368FE  74 04                     JZ 0x00536904
00536900  8B F1                     MOV ESI,ECX
00536902  EB 1A                     JMP 0x0053691e
LAB_00536904:
00536904  33 F6                     XOR ESI,ESI
00536906  66 8B 70 0E               MOV SI,word ptr [EAX + 0xe]
0053690A  0F AF 70 04               IMUL ESI,dword ptr [EAX + 0x4]
0053690E  83 C6 1F                  ADD ESI,0x1f
00536911  C1 EE 03                  SHR ESI,0x3
00536914  81 E6 FC FF FF 1F         AND ESI,0x1ffffffc
0053691A  0F AF 70 08               IMUL ESI,dword ptr [EAX + 0x8]
LAB_0053691e:
0053691E  8A 0D 4E 87 80 00         MOV CL,byte ptr [0x0080874e]
00536924  33 D2                     XOR EDX,EDX
00536926  80 F9 03                  CMP CL,0x3
00536929  50                        PUSH EAX
0053692A  0F 95 C2                  SETNZ DL
0053692D  4A                        DEC EDX
0053692E  83 E2 73                  AND EDX,0x73
00536931  89 55 E0                  MOV dword ptr [EBP + -0x20],EDX
00536934  E8 67 E6 17 00            CALL 0x006b4fa0
00536939  8B F8                     MOV EDI,EAX
0053693B  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
0053693E  8A D0                     MOV DL,AL
00536940  8B CE                     MOV ECX,ESI
00536942  8A F2                     MOV DH,DL
00536944  6A 00                     PUSH 0x0
00536946  8B C2                     MOV EAX,EDX
00536948  6A 00                     PUSH 0x0
0053694A  C1 E0 10                  SHL EAX,0x10
0053694D  66 8B C2                  MOV AX,DX
00536950  6A 00                     PUSH 0x0
00536952  C1 E9 02                  SHR ECX,0x2
00536955  F3 AB                     STOSD.REP ES:EDI
00536957  8B CE                     MOV ECX,ESI
00536959  6A 00                     PUSH 0x0
0053695B  83 E1 03                  AND ECX,0x3
0053695E  6A 00                     PUSH 0x0
00536960  F3 AA                     STOSB.REP ES:EDI
00536962  8B 8B E5 01 00 00         MOV ECX,dword ptr [EBX + 0x1e5]
00536968  51                        PUSH ECX
00536969  8B 8B 7C 01 00 00         MOV ECX,dword ptr [EBX + 0x17c]
0053696F  E8 1C A1 1D 00            CALL 0x00710a90
00536974  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
00536977  8B 8B 7C 01 00 00         MOV ECX,dword ptr [EBX + 0x17c]
0053697D  6A 00                     PUSH 0x0
0053697F  6A FF                     PUSH -0x1
00536981  8B 56 14                  MOV EDX,dword ptr [ESI + 0x14]
00536984  6A 00                     PUSH 0x0
00536986  8B 02                     MOV EAX,dword ptr [EDX]
00536988  50                        PUSH EAX
00536989  E8 32 B0 1D 00            CALL 0x007119c0
0053698E  66 8B 4E 18               MOV CX,word ptr [ESI + 0x18]
00536992  66 81 F9 FF FF            CMP CX,0xffff
00536997  75 06                     JNZ 0x0053699f
00536999  66 39 4E 1A               CMP word ptr [ESI + 0x1a],CX
0053699D  74 25                     JZ 0x005369c4
LAB_0053699f:
0053699F  33 C0                     XOR EAX,EAX
005369A1  6A 0D                     PUSH 0xd
005369A3  66 8B 46 1A               MOV AX,word ptr [ESI + 0x1a]
005369A7  81 E1 FF FF 00 00         AND ECX,0xffff
005369AD  6A 6C                     PUSH 0x6c
005369AF  8D 50 0A                  LEA EDX,[EAX + 0xa]
005369B2  52                        PUSH EDX
005369B3  51                        PUSH ECX
005369B4  50                        PUSH EAX
005369B5  8B 83 E5 01 00 00         MOV EAX,dword ptr [EBX + 0x1e5]
005369BB  51                        PUSH ECX
005369BC  6A 00                     PUSH 0x0
005369BE  50                        PUSH EAX
005369BF  E8 4C F1 17 00            CALL 0x006b5b10
LAB_005369c4:
005369C4  8B 83 E5 01 00 00         MOV EAX,dword ptr [EBX + 0x1e5]
005369CA  8B 48 08                  MOV ECX,dword ptr [EAX + 0x8]
005369CD  8B 50 04                  MOV EDX,dword ptr [EAX + 0x4]
005369D0  51                        PUSH ECX
005369D1  52                        PUSH EDX
005369D2  6A 00                     PUSH 0x0
005369D4  6A 00                     PUSH 0x0
005369D6  6A 00                     PUSH 0x0
005369D8  50                        PUSH EAX
005369D9  8B 43 68                  MOV EAX,dword ptr [EBX + 0x68]
005369DC  6A 1C                     PUSH 0x1c
005369DE  6A 26                     PUSH 0x26
005369E0  6A 00                     PUSH 0x0
005369E2  50                        PUSH EAX
005369E3  E8 08 EC 17 00            CALL 0x006b55f0
005369E8  8B 4B 44                  MOV ECX,dword ptr [EBX + 0x44]
005369EB  8B 53 3C                  MOV EDX,dword ptr [EBX + 0x3c]
005369EE  8B 43 60                  MOV EAX,dword ptr [EBX + 0x60]
005369F1  51                        PUSH ECX
005369F2  8B 0D A8 75 80 00         MOV ECX,dword ptr [0x008075a8]
005369F8  52                        PUSH EDX
005369F9  6A FF                     PUSH -0x1
005369FB  50                        PUSH EAX
005369FC  51                        PUSH ECX
005369FD  E8 3E CC 17 00            CALL 0x006b3640
00536A02  8B 8D 78 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff78]
00536A08  33 C0                     XOR EAX,EAX
00536A0A  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00536A10  5F                        POP EDI
00536A11  5E                        POP ESI
00536A12  5B                        POP EBX
00536A13  8B E5                     MOV ESP,EBP
00536A15  5D                        POP EBP
00536A16  C2 04 00                  RET 0x4
switchD_005347d0::caseD_c0b1:
00536A19  33 C0                     XOR EAX,EAX
00536A1B  8A 83 A4 01 00 00         MOV AL,byte ptr [EBX + 0x1a4]
00536A21  48                        DEC EAX
00536A22  83 F8 0D                  CMP EAX,0xd
00536A25  0F 87 8C 05 00 00         JA 0x00536fb7
switchD_00536a2b::switchD:
00536A2B  FF 24 85 F4 72 53 00      JMP dword ptr [EAX*0x4 + 0x5372f4]
switchD_00536a2b::caseD_1:
00536A32  A0 4E 87 80 00            MOV AL,[0x0080874e]
00536A37  3C 03                     CMP AL,0x3
00536A39  75 17                     JNZ 0x00536a52
00536A3B  8B 93 80 01 00 00         MOV EDX,dword ptr [EBX + 0x180]
00536A41  B8 92 46 40 00            MOV EAX,0x404692
00536A46  50                        PUSH EAX
00536A47  68 83 3E 00 00            PUSH 0x3e83
00536A4C  52                        PUSH EDX
00536A4D  E9 40 05 00 00            JMP 0x00536f92
LAB_00536a52:
00536A52  3C 01                     CMP AL,0x1
00536A54  B8 95 4D 40 00            MOV EAX,0x404d95
00536A59  74 05                     JZ 0x00536a60
00536A5B  B8 D1 39 40 00            MOV EAX,0x4039d1
LAB_00536a60:
00536A60  8B 93 80 01 00 00         MOV EDX,dword ptr [EBX + 0x180]
00536A66  50                        PUSH EAX
00536A67  68 83 3E 00 00            PUSH 0x3e83
00536A6C  52                        PUSH EDX
00536A6D  E9 20 05 00 00            JMP 0x00536f92
switchD_00536a2b::caseD_2:
00536A72  A0 4E 87 80 00            MOV AL,[0x0080874e]
00536A77  3C 03                     CMP AL,0x3
00536A79  75 10                     JNZ 0x00536a8b
00536A7B  B8 92 46 40 00            MOV EAX,0x404692
00536A80  50                        PUSH EAX
00536A81  68 8C 3E 00 00            PUSH 0x3e8c
00536A86  E9 00 05 00 00            JMP 0x00536f8b
LAB_00536a8b:
00536A8B  3C 01                     CMP AL,0x1
00536A8D  B8 95 4D 40 00            MOV EAX,0x404d95
00536A92  74 05                     JZ 0x00536a99
00536A94  B8 D1 39 40 00            MOV EAX,0x4039d1
LAB_00536a99:
00536A99  50                        PUSH EAX
00536A9A  68 8C 3E 00 00            PUSH 0x3e8c
00536A9F  E9 E7 04 00 00            JMP 0x00536f8b
switchD_00536a2b::caseD_9:
00536AA4  A0 4E 87 80 00            MOV AL,[0x0080874e]
00536AA9  3C 03                     CMP AL,0x3
00536AAB  75 16                     JNZ 0x00536ac3
00536AAD  B8 E9 3F 40 00            MOV EAX,0x403fe9
00536AB2  56                        PUSH ESI
00536AB3  50                        PUSH EAX
00536AB4  68 5B 23 40 00            PUSH 0x40235b
00536AB9  68 F6 3E 00 00            PUSH 0x3ef6
00536ABE  E9 25 04 00 00            JMP 0x00536ee8
LAB_00536ac3:
00536AC3  3C 01                     CMP AL,0x1
00536AC5  B8 6A 14 40 00            MOV EAX,0x40146a
00536ACA  74 05                     JZ 0x00536ad1
00536ACC  B8 1C 21 40 00            MOV EAX,0x40211c
LAB_00536ad1:
00536AD1  56                        PUSH ESI
00536AD2  50                        PUSH EAX
00536AD3  68 5B 23 40 00            PUSH 0x40235b
00536AD8  68 F6 3E 00 00            PUSH 0x3ef6
00536ADD  E9 06 04 00 00            JMP 0x00536ee8
switchD_00536a2b::caseD_d:
00536AE2  A0 4E 87 80 00            MOV AL,[0x0080874e]
00536AE7  3C 03                     CMP AL,0x3
00536AE9  75 16                     JNZ 0x00536b01
00536AEB  B8 E9 3F 40 00            MOV EAX,0x403fe9
00536AF0  56                        PUSH ESI
00536AF1  50                        PUSH EAX
00536AF2  68 5B 23 40 00            PUSH 0x40235b
00536AF7  68 F8 3E 00 00            PUSH 0x3ef8
00536AFC  E9 E7 03 00 00            JMP 0x00536ee8
LAB_00536b01:
00536B01  3C 01                     CMP AL,0x1
00536B03  B8 6A 14 40 00            MOV EAX,0x40146a
00536B08  74 05                     JZ 0x00536b0f
00536B0A  B8 1C 21 40 00            MOV EAX,0x40211c
LAB_00536b0f:
00536B0F  56                        PUSH ESI
00536B10  50                        PUSH EAX
00536B11  68 5B 23 40 00            PUSH 0x40235b
00536B16  68 F8 3E 00 00            PUSH 0x3ef8
00536B1B  E9 C8 03 00 00            JMP 0x00536ee8
switchD_00536a2b::caseD_8:
00536B20  8B 4F 14                  MOV ECX,dword ptr [EDI + 0x14]
00536B23  8B 01                     MOV EAX,dword ptr [ECX]
00536B25  48                        DEC EAX
00536B26  74 47                     JZ 0x00536b6f
00536B28  48                        DEC EAX
00536B29  0F 85 88 04 00 00         JNZ 0x00536fb7
00536B2F  A0 4E 87 80 00            MOV AL,[0x0080874e]
00536B34  3C 03                     CMP AL,0x3
00536B36  75 17                     JNZ 0x00536b4f
00536B38  B8 7C 5C 40 00            MOV EAX,0x405c7c
00536B3D  6A 01                     PUSH 0x1
00536B3F  50                        PUSH EAX
00536B40  68 5A 33 40 00            PUSH 0x40335a
00536B45  68 03 3F 00 00            PUSH 0x3f03
00536B4A  E9 F2 F8 FF FF            JMP 0x00536441
LAB_00536b4f:
00536B4F  3C 01                     CMP AL,0x1
00536B51  B8 19 29 40 00            MOV EAX,0x402919
00536B56  74 05                     JZ 0x00536b5d
00536B58  B8 87 5B 40 00            MOV EAX,0x405b87
LAB_00536b5d:
00536B5D  6A 01                     PUSH 0x1
00536B5F  50                        PUSH EAX
00536B60  68 5A 33 40 00            PUSH 0x40335a
00536B65  68 03 3F 00 00            PUSH 0x3f03
00536B6A  E9 D2 F8 FF FF            JMP 0x00536441
LAB_00536b6f:
00536B6F  A0 4E 87 80 00            MOV AL,[0x0080874e]
00536B74  3C 03                     CMP AL,0x3
00536B76  75 17                     JNZ 0x00536b8f
00536B78  B8 7C 5C 40 00            MOV EAX,0x405c7c
00536B7D  6A 01                     PUSH 0x1
00536B7F  50                        PUSH EAX
00536B80  68 5A 33 40 00            PUSH 0x40335a
00536B85  68 02 3F 00 00            PUSH 0x3f02
00536B8A  E9 B2 F8 FF FF            JMP 0x00536441
LAB_00536b8f:
00536B8F  3C 01                     CMP AL,0x1
00536B91  B8 19 29 40 00            MOV EAX,0x402919
00536B96  74 05                     JZ 0x00536b9d
00536B98  B8 87 5B 40 00            MOV EAX,0x405b87
LAB_00536b9d:
00536B9D  6A 01                     PUSH 0x1
00536B9F  50                        PUSH EAX
00536BA0  68 5A 33 40 00            PUSH 0x40335a
00536BA5  68 02 3F 00 00            PUSH 0x3f02
00536BAA  E9 92 F8 FF FF            JMP 0x00536441
switchD_00536a2b::caseD_6:
00536BAF  A0 4E 87 80 00            MOV AL,[0x0080874e]
00536BB4  3C 03                     CMP AL,0x3
00536BB6  75 16                     JNZ 0x00536bce
00536BB8  B8 E9 3F 40 00            MOV EAX,0x403fe9
00536BBD  56                        PUSH ESI
00536BBE  50                        PUSH EAX
00536BBF  68 5B 23 40 00            PUSH 0x40235b
00536BC4  68 FE 3E 00 00            PUSH 0x3efe
00536BC9  E9 1A 03 00 00            JMP 0x00536ee8
LAB_00536bce:
00536BCE  3C 01                     CMP AL,0x1
00536BD0  B8 6A 14 40 00            MOV EAX,0x40146a
00536BD5  74 05                     JZ 0x00536bdc
00536BD7  B8 1C 21 40 00            MOV EAX,0x40211c
LAB_00536bdc:
00536BDC  56                        PUSH ESI
00536BDD  50                        PUSH EAX
00536BDE  68 5B 23 40 00            PUSH 0x40235b
00536BE3  68 FE 3E 00 00            PUSH 0x3efe
00536BE8  E9 FB 02 00 00            JMP 0x00536ee8
switchD_00536a2b::caseD_e:
00536BED  68 52 27 00 00            PUSH 0x2752
00536BF2  E9 BE 01 00 00            JMP 0x00536db5
switchD_005347d0::caseD_c0b2:
00536BF7  33 C0                     XOR EAX,EAX
00536BF9  8A 83 A4 01 00 00         MOV AL,byte ptr [EBX + 0x1a4]
00536BFF  48                        DEC EAX
00536C00  83 F8 08                  CMP EAX,0x8
00536C03  0F 87 AE 03 00 00         JA 0x00536fb7
switchD_00536c09::switchD:
00536C09  FF 24 85 2C 73 53 00      JMP dword ptr [EAX*0x4 + 0x53732c]
switchD_00536c09::caseD_1:
00536C10  A0 4E 87 80 00            MOV AL,[0x0080874e]
00536C15  3C 03                     CMP AL,0x3
00536C17  75 07                     JNZ 0x00536c20
00536C19  B9 92 46 40 00            MOV ECX,0x404692
00536C1E  EB 0E                     JMP 0x00536c2e
LAB_00536c20:
00536C20  3C 01                     CMP AL,0x1
00536C22  B9 95 4D 40 00            MOV ECX,0x404d95
00536C27  74 05                     JZ 0x00536c2e
00536C29  B9 D1 39 40 00            MOV ECX,0x4039d1
LAB_00536c2e:
00536C2E  A0 A0 67 80 00            MOV AL,[0x008067a0]
00536C33  84 C0                     TEST AL,AL
00536C35  74 22                     JZ 0x00536c59
00536C37  A1 38 2A 80 00            MOV EAX,[0x00802a38]
00536C3C  51                        PUSH ECX
00536C3D  8B 90 E4 00 00 00         MOV EDX,dword ptr [EAX + 0xe4]
00536C43  2B 50 34                  SUB EDX,dword ptr [EAX + 0x34]
00536C46  81 FA 70 17 00 00         CMP EDX,0x1770
00536C4C  1B C0                     SBB EAX,EAX
00536C4E  05 96 3E 00 00            ADD EAX,0x3e96
00536C53  50                        PUSH EAX
00536C54  E9 32 03 00 00            JMP 0x00536f8b
LAB_00536c59:
00536C59  B8 84 3E 00 00            MOV EAX,0x3e84
00536C5E  51                        PUSH ECX
00536C5F  50                        PUSH EAX
00536C60  E9 26 03 00 00            JMP 0x00536f8b
switchD_00536c09::caseD_2:
00536C65  A0 4E 87 80 00            MOV AL,[0x0080874e]
00536C6A  3C 03                     CMP AL,0x3
00536C6C  75 17                     JNZ 0x00536c85
00536C6E  8B 8B 80 01 00 00         MOV ECX,dword ptr [EBX + 0x180]
00536C74  B8 92 46 40 00            MOV EAX,0x404692
00536C79  50                        PUSH EAX
00536C7A  68 8D 3E 00 00            PUSH 0x3e8d
00536C7F  51                        PUSH ECX
00536C80  E9 0D 03 00 00            JMP 0x00536f92
LAB_00536c85:
00536C85  3C 01                     CMP AL,0x1
00536C87  B8 95 4D 40 00            MOV EAX,0x404d95
00536C8C  74 05                     JZ 0x00536c93
00536C8E  B8 D1 39 40 00            MOV EAX,0x4039d1
LAB_00536c93:
00536C93  8B 8B 80 01 00 00         MOV ECX,dword ptr [EBX + 0x180]
00536C99  50                        PUSH EAX
00536C9A  68 8D 3E 00 00            PUSH 0x3e8d
00536C9F  51                        PUSH ECX
00536CA0  E9 ED 02 00 00            JMP 0x00536f92
switchD_00536c09::caseD_9:
00536CA5  A0 4E 87 80 00            MOV AL,[0x0080874e]
00536CAA  3C 03                     CMP AL,0x3
00536CAC  75 16                     JNZ 0x00536cc4
00536CAE  B8 E9 3F 40 00            MOV EAX,0x403fe9
00536CB3  56                        PUSH ESI
00536CB4  50                        PUSH EAX
00536CB5  68 5B 23 40 00            PUSH 0x40235b
00536CBA  68 F7 3E 00 00            PUSH 0x3ef7
00536CBF  E9 24 02 00 00            JMP 0x00536ee8
LAB_00536cc4:
00536CC4  3C 01                     CMP AL,0x1
00536CC6  B8 6A 14 40 00            MOV EAX,0x40146a
00536CCB  74 05                     JZ 0x00536cd2
00536CCD  B8 1C 21 40 00            MOV EAX,0x40211c
LAB_00536cd2:
00536CD2  56                        PUSH ESI
00536CD3  50                        PUSH EAX
00536CD4  68 5B 23 40 00            PUSH 0x40235b
00536CD9  68 F7 3E 00 00            PUSH 0x3ef7
00536CDE  E9 05 02 00 00            JMP 0x00536ee8
switchD_00536c09::caseD_8:
00536CE3  8B 57 14                  MOV EDX,dword ptr [EDI + 0x14]
00536CE6  8B 02                     MOV EAX,dword ptr [EDX]
00536CE8  48                        DEC EAX
00536CE9  74 47                     JZ 0x00536d32
00536CEB  48                        DEC EAX
00536CEC  0F 85 C5 02 00 00         JNZ 0x00536fb7
00536CF2  A0 4E 87 80 00            MOV AL,[0x0080874e]
00536CF7  3C 03                     CMP AL,0x3
00536CF9  75 17                     JNZ 0x00536d12
00536CFB  B8 7C 5C 40 00            MOV EAX,0x405c7c
00536D00  6A 01                     PUSH 0x1
00536D02  50                        PUSH EAX
00536D03  68 5A 33 40 00            PUSH 0x40335a
00536D08  68 06 3F 00 00            PUSH 0x3f06
00536D0D  E9 2F F7 FF FF            JMP 0x00536441
LAB_00536d12:
00536D12  3C 01                     CMP AL,0x1
00536D14  B8 19 29 40 00            MOV EAX,0x402919
00536D19  74 05                     JZ 0x00536d20
00536D1B  B8 87 5B 40 00            MOV EAX,0x405b87
LAB_00536d20:
00536D20  6A 01                     PUSH 0x1
00536D22  50                        PUSH EAX
00536D23  68 5A 33 40 00            PUSH 0x40335a
00536D28  68 06 3F 00 00            PUSH 0x3f06
00536D2D  E9 0F F7 FF FF            JMP 0x00536441
LAB_00536d32:
00536D32  A0 4E 87 80 00            MOV AL,[0x0080874e]
00536D37  3C 03                     CMP AL,0x3
00536D39  75 17                     JNZ 0x00536d52
00536D3B  B8 7C 5C 40 00            MOV EAX,0x405c7c
00536D40  6A 01                     PUSH 0x1
00536D42  50                        PUSH EAX
00536D43  68 5A 33 40 00            PUSH 0x40335a
00536D48  68 F2 3E 00 00            PUSH 0x3ef2
00536D4D  E9 EF F6 FF FF            JMP 0x00536441
LAB_00536d52:
00536D52  3C 01                     CMP AL,0x1
00536D54  B8 19 29 40 00            MOV EAX,0x402919
00536D59  74 05                     JZ 0x00536d60
00536D5B  B8 87 5B 40 00            MOV EAX,0x405b87
LAB_00536d60:
00536D60  6A 01                     PUSH 0x1
00536D62  50                        PUSH EAX
00536D63  68 5A 33 40 00            PUSH 0x40335a
00536D68  68 F2 3E 00 00            PUSH 0x3ef2
00536D6D  E9 CF F6 FF FF            JMP 0x00536441
switchD_00536c09::caseD_6:
00536D72  A0 4E 87 80 00            MOV AL,[0x0080874e]
00536D77  3C 03                     CMP AL,0x3
00536D79  75 16                     JNZ 0x00536d91
00536D7B  B8 E9 3F 40 00            MOV EAX,0x403fe9
00536D80  56                        PUSH ESI
00536D81  50                        PUSH EAX
00536D82  68 5B 23 40 00            PUSH 0x40235b
00536D87  68 FF 3E 00 00            PUSH 0x3eff
00536D8C  E9 57 01 00 00            JMP 0x00536ee8
LAB_00536d91:
00536D91  3C 01                     CMP AL,0x1
00536D93  B8 6A 14 40 00            MOV EAX,0x40146a
00536D98  74 05                     JZ 0x00536d9f
00536D9A  B8 1C 21 40 00            MOV EAX,0x40211c
LAB_00536d9f:
00536D9F  56                        PUSH ESI
00536DA0  50                        PUSH EAX
00536DA1  68 5B 23 40 00            PUSH 0x40235b
00536DA6  68 FF 3E 00 00            PUSH 0x3eff
00536DAB  E9 38 01 00 00            JMP 0x00536ee8
switchD_00536c09::caseD_3:
00536DB0  68 50 27 00 00            PUSH 0x2750
OptPanelTy::GetMessage::cf_common_exit_00536DB5:
00536DB5  56                        PUSH ESI
00536DB6  68 94 38 7C 00            PUSH 0x7c3894
00536DBB  E8 BC E9 EC FF            CALL 0x0040577c
00536DC0  83 C4 08                  ADD ESP,0x8
00536DC3  8B CB                     MOV ECX,EBX
00536DC5  50                        PUSH EAX
00536DC6  57                        PUSH EDI
00536DC7  E8 3C C7 EC FF            CALL 0x00403508
00536DCC  8B 8D 78 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff78]
00536DD2  33 C0                     XOR EAX,EAX
00536DD4  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00536DDA  5F                        POP EDI
00536DDB  5E                        POP ESI
00536DDC  5B                        POP EBX
00536DDD  8B E5                     MOV ESP,EBP
00536DDF  5D                        POP EBP
00536DE0  C2 04 00                  RET 0x4
switchD_005347d0::caseD_c0b3:
00536DE3  33 C0                     XOR EAX,EAX
00536DE5  8A 83 A4 01 00 00         MOV AL,byte ptr [EBX + 0x1a4]
00536DEB  48                        DEC EAX
00536DEC  74 7C                     JZ 0x00536e6a
00536DEE  48                        DEC EAX
00536DEF  74 47                     JZ 0x00536e38
00536DF1  83 E8 07                  SUB EAX,0x7
00536DF4  0F 85 BD 01 00 00         JNZ 0x00536fb7
00536DFA  A0 4E 87 80 00            MOV AL,[0x0080874e]
00536DFF  3C 03                     CMP AL,0x3
00536E01  75 16                     JNZ 0x00536e19
00536E03  B8 E9 3F 40 00            MOV EAX,0x403fe9
00536E08  56                        PUSH ESI
00536E09  50                        PUSH EAX
00536E0A  68 5B 23 40 00            PUSH 0x40235b
00536E0F  68 04 3F 00 00            PUSH 0x3f04
00536E14  E9 CF 00 00 00            JMP 0x00536ee8
LAB_00536e19:
00536E19  3C 01                     CMP AL,0x1
00536E1B  B8 6A 14 40 00            MOV EAX,0x40146a
00536E20  74 05                     JZ 0x00536e27
00536E22  B8 1C 21 40 00            MOV EAX,0x40211c
LAB_00536e27:
00536E27  56                        PUSH ESI
00536E28  50                        PUSH EAX
00536E29  68 5B 23 40 00            PUSH 0x40235b
00536E2E  68 04 3F 00 00            PUSH 0x3f04
00536E33  E9 B0 00 00 00            JMP 0x00536ee8
LAB_00536e38:
00536E38  A0 4E 87 80 00            MOV AL,[0x0080874e]
00536E3D  3C 03                     CMP AL,0x3
00536E3F  75 10                     JNZ 0x00536e51
00536E41  B8 92 46 40 00            MOV EAX,0x404692
00536E46  50                        PUSH EAX
00536E47  68 8F 3E 00 00            PUSH 0x3e8f
00536E4C  E9 3A 01 00 00            JMP 0x00536f8b
LAB_00536e51:
00536E51  3C 01                     CMP AL,0x1
00536E53  B8 95 4D 40 00            MOV EAX,0x404d95
00536E58  74 05                     JZ 0x00536e5f
00536E5A  B8 D1 39 40 00            MOV EAX,0x4039d1
LAB_00536e5f:
00536E5F  50                        PUSH EAX
00536E60  68 8F 3E 00 00            PUSH 0x3e8f
00536E65  E9 21 01 00 00            JMP 0x00536f8b
LAB_00536e6a:
00536E6A  A0 4E 87 80 00            MOV AL,[0x0080874e]
00536E6F  3C 03                     CMP AL,0x3
00536E71  75 17                     JNZ 0x00536e8a
00536E73  8B 8B 80 01 00 00         MOV ECX,dword ptr [EBX + 0x180]
00536E79  B8 92 46 40 00            MOV EAX,0x404692
00536E7E  50                        PUSH EAX
00536E7F  68 85 3E 00 00            PUSH 0x3e85
00536E84  51                        PUSH ECX
00536E85  E9 08 01 00 00            JMP 0x00536f92
LAB_00536e8a:
00536E8A  3C 01                     CMP AL,0x1
00536E8C  B8 95 4D 40 00            MOV EAX,0x404d95
00536E91  74 05                     JZ 0x00536e98
00536E93  B8 D1 39 40 00            MOV EAX,0x4039d1
LAB_00536e98:
00536E98  8B 8B 80 01 00 00         MOV ECX,dword ptr [EBX + 0x180]
00536E9E  50                        PUSH EAX
00536E9F  68 85 3E 00 00            PUSH 0x3e85
00536EA4  51                        PUSH ECX
00536EA5  E9 E8 00 00 00            JMP 0x00536f92
switchD_005347d0::caseD_c0b4:
00536EAA  33 C0                     XOR EAX,EAX
00536EAC  8A 83 A4 01 00 00         MOV AL,byte ptr [EBX + 0x1a4]
00536EB2  48                        DEC EAX
00536EB3  74 6D                     JZ 0x00536f22
00536EB5  83 E8 08                  SUB EAX,0x8
00536EB8  0F 85 F9 00 00 00         JNZ 0x00536fb7
00536EBE  A0 4E 87 80 00            MOV AL,[0x0080874e]
00536EC3  3C 03                     CMP AL,0x3
00536EC5  75 07                     JNZ 0x00536ece
00536EC7  B8 E9 3F 40 00            MOV EAX,0x403fe9
00536ECC  EB 0E                     JMP 0x00536edc
LAB_00536ece:
00536ECE  3C 01                     CMP AL,0x1
00536ED0  B8 6A 14 40 00            MOV EAX,0x40146a
00536ED5  74 05                     JZ 0x00536edc
00536ED7  B8 1C 21 40 00            MOV EAX,0x40211c
LAB_00536edc:
00536EDC  56                        PUSH ESI
00536EDD  50                        PUSH EAX
00536EDE  68 5B 23 40 00            PUSH 0x40235b
00536EE3  68 05 3F 00 00            PUSH 0x3f05
OptPanelTy::GetMessage::cf_common_exit_00536EE8:
00536EE8  56                        PUSH ESI
00536EE9  6A 01                     PUSH 0x1
00536EEB  56                        PUSH ESI
00536EEC  68 64 72 7C 00            PUSH 0x7c7264
00536EF1  E8 86 E8 EC FF            CALL 0x0040577c
00536EF6  83 C4 08                  ADD ESP,0x8
00536EF9  50                        PUSH EAX
00536EFA  E8 01 BD 1B 00            CALL 0x006f2c00
00536EFF  83 C4 0C                  ADD ESP,0xc
00536F02  8B CB                     MOV ECX,EBX
00536F04  50                        PUSH EAX
00536F05  57                        PUSH EDI
00536F06  E8 01 E0 EC FF            CALL 0x00404f0c
00536F0B  8B 8D 78 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff78]
00536F11  33 C0                     XOR EAX,EAX
00536F13  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00536F19  5F                        POP EDI
00536F1A  5E                        POP ESI
00536F1B  5B                        POP EBX
00536F1C  8B E5                     MOV ESP,EBP
00536F1E  5D                        POP EBP
00536F1F  C2 04 00                  RET 0x4
LAB_00536f22:
00536F22  A0 4E 87 80 00            MOV AL,[0x0080874e]
00536F27  3C 03                     CMP AL,0x3
00536F29  75 14                     JNZ 0x00536f3f
00536F2B  8B 93 80 01 00 00         MOV EDX,dword ptr [EBX + 0x180]
00536F31  B8 92 46 40 00            MOV EAX,0x404692
00536F36  50                        PUSH EAX
00536F37  68 86 3E 00 00            PUSH 0x3e86
00536F3C  52                        PUSH EDX
00536F3D  EB 53                     JMP 0x00536f92
LAB_00536f3f:
00536F3F  3C 01                     CMP AL,0x1
00536F41  B8 95 4D 40 00            MOV EAX,0x404d95
00536F46  74 05                     JZ 0x00536f4d
00536F48  B8 D1 39 40 00            MOV EAX,0x4039d1
LAB_00536f4d:
00536F4D  8B 93 80 01 00 00         MOV EDX,dword ptr [EBX + 0x180]
00536F53  50                        PUSH EAX
00536F54  68 86 3E 00 00            PUSH 0x3e86
00536F59  52                        PUSH EDX
00536F5A  EB 36                     JMP 0x00536f92
switchD_005347d0::caseD_c0b5:
00536F5C  33 C0                     XOR EAX,EAX
00536F5E  8A 83 A4 01 00 00         MOV AL,byte ptr [EBX + 0x1a4]
00536F64  48                        DEC EAX
00536F65  75 50                     JNZ 0x00536fb7
00536F67  A0 4E 87 80 00            MOV AL,[0x0080874e]
00536F6C  3C 03                     CMP AL,0x3
00536F6E  75 07                     JNZ 0x00536f77
00536F70  B8 92 46 40 00            MOV EAX,0x404692
00536F75  EB 0E                     JMP 0x00536f85
LAB_00536f77:
00536F77  3C 01                     CMP AL,0x1
00536F79  B8 95 4D 40 00            MOV EAX,0x404d95
00536F7E  74 05                     JZ 0x00536f85
00536F80  B8 D1 39 40 00            MOV EAX,0x4039d1
LAB_00536f85:
00536F85  50                        PUSH EAX
00536F86  68 87 3E 00 00            PUSH 0x3e87
OptPanelTy::GetMessage::cf_common_exit_00536F8B:
00536F8B  8B 83 80 01 00 00         MOV EAX,dword ptr [EBX + 0x180]
00536F91  50                        PUSH EAX
OptPanelTy::GetMessage::cf_common_exit_00536F92:
00536F92  56                        PUSH ESI
00536F93  6A 01                     PUSH 0x1
00536F95  56                        PUSH ESI
00536F96  68 64 72 7C 00            PUSH 0x7c7264
00536F9B  E8 DC E7 EC FF            CALL 0x0040577c
00536FA0  83 C4 08                  ADD ESP,0x8
00536FA3  50                        PUSH EAX
00536FA4  E8 57 BC 1B 00            CALL 0x006f2c00
00536FA9  83 C4 0C                  ADD ESP,0xc
00536FAC  8B CB                     MOV ECX,EBX
00536FAE  50                        PUSH EAX
00536FAF  6A 01                     PUSH 0x1
00536FB1  57                        PUSH EDI
00536FB2  E8 EA AE EC FF            CALL 0x00401ea1
OptPanelTy::GetMessage::cf_common_exit_00536FB7:
00536FB7  8B 8D 78 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff78]
00536FBD  33 C0                     XOR EAX,EAX
00536FBF  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00536FC5  5F                        POP EDI
00536FC6  5E                        POP ESI
00536FC7  5B                        POP EBX
00536FC8  8B E5                     MOV ESP,EBP
00536FCA  5D                        POP EBP
00536FCB  C2 04 00                  RET 0x4
LAB_00536fce:
00536FCE  8B 95 78 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff78]
00536FD4  68 34 73 7C 00            PUSH 0x7c7334
00536FD9  68 CC 4C 7A 00            PUSH 0x7a4ccc
00536FDE  57                        PUSH EDI
00536FDF  56                        PUSH ESI
00536FE0  68 F4 07 00 00            PUSH 0x7f4
00536FE5  68 A0 70 7C 00            PUSH 0x7c70a0
00536FEA  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00536FF0  E8 DB 64 17 00            CALL 0x006ad4d0
00536FF5  83 C4 18                  ADD ESP,0x18
00536FF8  85 C0                     TEST EAX,EAX
00536FFA  74 01                     JZ 0x00536ffd
00536FFC  CC                        INT3
LAB_00536ffd:
00536FFD  68 F4 07 00 00            PUSH 0x7f4
00537002  68 A0 70 7C 00            PUSH 0x7c70a0
00537007  56                        PUSH ESI
00537008  57                        PUSH EDI
00537009  E8 32 EE 16 00            CALL 0x006a5e40
0053700E  5F                        POP EDI
0053700F  5E                        POP ESI
00537010  B8 FF FF 00 00            MOV EAX,0xffff
00537015  5B                        POP EBX
00537016  8B E5                     MOV ESP,EBP
00537018  5D                        POP EBP
00537019  C2 04 00                  RET 0x4
