InfocPanelTy::PaintInfoc:
00520D10  55                        PUSH EBP
00520D11  8B EC                     MOV EBP,ESP
00520D13  83 EC 4C                  SUB ESP,0x4c
00520D16  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
00520D1B  53                        PUSH EBX
00520D1C  56                        PUSH ESI
00520D1D  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
00520D20  57                        PUSH EDI
00520D21  8D 55 B8                  LEA EDX,[EBP + -0x48]
00520D24  8D 4D B4                  LEA ECX,[EBP + -0x4c]
00520D27  6A 00                     PUSH 0x0
00520D29  52                        PUSH EDX
00520D2A  89 45 B4                  MOV dword ptr [EBP + -0x4c],EAX
00520D2D  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00520D33  E8 B8 CA 20 00            CALL 0x0072d7f0
00520D38  8B F0                     MOV ESI,EAX
00520D3A  83 C4 08                  ADD ESP,0x8
00520D3D  85 F6                     TEST ESI,ESI
00520D3F  0F 85 85 05 00 00         JNZ 0x005212ca
00520D45  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
00520D48  8A 83 D4 03 00 00         MOV AL,byte ptr [EBX + 0x3d4]
00520D4E  3C FF                     CMP AL,0xff
00520D50  74 14                     JZ 0x00520d66
00520D52  25 FF 00 00 00            AND EAX,0xff
00520D57  C1 E0 04                  SHL EAX,0x4
00520D5A  33 C9                     XOR ECX,ECX
00520D5C  66 8B 8C 18 34 02 00 00   MOV CX,word ptr [EAX + EBX*0x1 + 0x234]
00520D64  EB 02                     JMP 0x00520d68
LAB_00520d66:
00520D66  33 C9                     XOR ECX,ECX
LAB_00520d68:
00520D68  66 8B 83 A4 02 00 00      MOV AX,word ptr [EBX + 0x2a4]
00520D6F  6A 29                     PUSH 0x29
00520D71  6A 58                     PUSH 0x58
00520D73  50                        PUSH EAX
00520D74  51                        PUSH ECX
00520D75  8B CB                     MOV ECX,EBX
00520D77  E8 5B 30 EE FF            CALL 0x00403dd7
00520D7C  8A 83 D4 03 00 00         MOV AL,byte ptr [EBX + 0x3d4]
00520D82  3C FF                     CMP AL,0xff
00520D84  74 14                     JZ 0x00520d9a
00520D86  25 FF 00 00 00            AND EAX,0xff
00520D8B  C1 E0 04                  SHL EAX,0x4
00520D8E  33 C9                     XOR ECX,ECX
00520D90  66 8B 8C 18 38 02 00 00   MOV CX,word ptr [EAX + EBX*0x1 + 0x238]
00520D98  EB 02                     JMP 0x00520d9c
LAB_00520d9a:
00520D9A  33 C9                     XOR ECX,ECX
LAB_00520d9c:
00520D9C  66 8B 93 A8 02 00 00      MOV DX,word ptr [EBX + 0x2a8]
00520DA3  6A 29                     PUSH 0x29
00520DA5  68 8A 00 00 00            PUSH 0x8a
00520DAA  52                        PUSH EDX
00520DAB  51                        PUSH ECX
00520DAC  8B CB                     MOV ECX,EBX
00520DAE  E8 24 30 EE FF            CALL 0x00403dd7
00520DB3  8A 83 D4 03 00 00         MOV AL,byte ptr [EBX + 0x3d4]
00520DB9  3C FF                     CMP AL,0xff
00520DBB  74 14                     JZ 0x00520dd1
00520DBD  25 FF 00 00 00            AND EAX,0xff
00520DC2  C1 E0 04                  SHL EAX,0x4
00520DC5  33 C9                     XOR ECX,ECX
00520DC7  66 8B 8C 18 36 02 00 00   MOV CX,word ptr [EAX + EBX*0x1 + 0x236]
00520DCF  EB 02                     JMP 0x00520dd3
LAB_00520dd1:
00520DD1  33 C9                     XOR ECX,ECX
LAB_00520dd3:
00520DD3  66 8B 83 A6 02 00 00      MOV AX,word ptr [EBX + 0x2a6]
00520DDA  6A 29                     PUSH 0x29
00520DDC  68 BC 00 00 00            PUSH 0xbc
00520DE1  50                        PUSH EAX
00520DE2  51                        PUSH ECX
00520DE3  8B CB                     MOV ECX,EBX
00520DE5  E8 ED 2F EE FF            CALL 0x00403dd7
00520DEA  8A 83 D4 03 00 00         MOV AL,byte ptr [EBX + 0x3d4]
00520DF0  3C FF                     CMP AL,0xff
00520DF2  74 14                     JZ 0x00520e08
00520DF4  25 FF 00 00 00            AND EAX,0xff
00520DF9  C1 E0 04                  SHL EAX,0x4
00520DFC  33 C9                     XOR ECX,ECX
00520DFE  66 8B 8C 18 3A 02 00 00   MOV CX,word ptr [EAX + EBX*0x1 + 0x23a]
00520E06  EB 02                     JMP 0x00520e0a
LAB_00520e08:
00520E08  33 C9                     XOR ECX,ECX
LAB_00520e0a:
00520E0A  66 8B 93 AA 02 00 00      MOV DX,word ptr [EBX + 0x2aa]
00520E11  6A 29                     PUSH 0x29
00520E13  68 F0 00 00 00            PUSH 0xf0
00520E18  52                        PUSH EDX
00520E19  51                        PUSH ECX
00520E1A  8B CB                     MOV ECX,EBX
00520E1C  E8 B6 2F EE FF            CALL 0x00403dd7
00520E21  8A 83 D4 03 00 00         MOV AL,byte ptr [EBX + 0x3d4]
00520E27  3C FF                     CMP AL,0xff
00520E29  74 14                     JZ 0x00520e3f
00520E2B  25 FF 00 00 00            AND EAX,0xff
00520E30  C1 E0 04                  SHL EAX,0x4
00520E33  33 C9                     XOR ECX,ECX
00520E35  66 8B 8C 18 3C 02 00 00   MOV CX,word ptr [EAX + EBX*0x1 + 0x23c]
00520E3D  EB 02                     JMP 0x00520e41
LAB_00520e3f:
00520E3F  33 C9                     XOR ECX,ECX
LAB_00520e41:
00520E41  66 8B 83 AC 02 00 00      MOV AX,word ptr [EBX + 0x2ac]
00520E48  6A 50                     PUSH 0x50
00520E4A  6A 58                     PUSH 0x58
00520E4C  50                        PUSH EAX
00520E4D  51                        PUSH ECX
00520E4E  8B CB                     MOV ECX,EBX
00520E50  E8 82 2F EE FF            CALL 0x00403dd7
00520E55  8A 83 D4 03 00 00         MOV AL,byte ptr [EBX + 0x3d4]
00520E5B  3C FF                     CMP AL,0xff
00520E5D  74 13                     JZ 0x00520e72
00520E5F  25 FF 00 00 00            AND EAX,0xff
00520E64  83 C0 24                  ADD EAX,0x24
00520E67  C1 E0 04                  SHL EAX,0x4
00520E6A  33 C9                     XOR ECX,ECX
00520E6C  66 8B 0C 18               MOV CX,word ptr [EAX + EBX*0x1]
00520E70  EB 02                     JMP 0x00520e74
LAB_00520e72:
00520E72  33 C9                     XOR ECX,ECX
LAB_00520e74:
00520E74  66 8B 93 B0 02 00 00      MOV DX,word ptr [EBX + 0x2b0]
00520E7B  6A 50                     PUSH 0x50
00520E7D  68 8A 00 00 00            PUSH 0x8a
00520E82  52                        PUSH EDX
00520E83  51                        PUSH ECX
00520E84  8B CB                     MOV ECX,EBX
00520E86  E8 4C 2F EE FF            CALL 0x00403dd7
00520E8B  8A 83 D4 03 00 00         MOV AL,byte ptr [EBX + 0x3d4]
00520E91  3C FF                     CMP AL,0xff
00520E93  74 14                     JZ 0x00520ea9
00520E95  25 FF 00 00 00            AND EAX,0xff
00520E9A  C1 E0 04                  SHL EAX,0x4
00520E9D  33 C9                     XOR ECX,ECX
00520E9F  66 8B 8C 18 3E 02 00 00   MOV CX,word ptr [EAX + EBX*0x1 + 0x23e]
00520EA7  EB 02                     JMP 0x00520eab
LAB_00520ea9:
00520EA9  33 C9                     XOR ECX,ECX
LAB_00520eab:
00520EAB  66 8B 83 AE 02 00 00      MOV AX,word ptr [EBX + 0x2ae]
00520EB2  6A 50                     PUSH 0x50
00520EB4  68 BC 00 00 00            PUSH 0xbc
00520EB9  50                        PUSH EAX
00520EBA  51                        PUSH ECX
00520EBB  8B CB                     MOV ECX,EBX
00520EBD  E8 15 2F EE FF            CALL 0x00403dd7
00520EC2  8A 83 D4 03 00 00         MOV AL,byte ptr [EBX + 0x3d4]
00520EC8  3C FF                     CMP AL,0xff
00520ECA  74 14                     JZ 0x00520ee0
00520ECC  25 FF 00 00 00            AND EAX,0xff
00520ED1  C1 E0 04                  SHL EAX,0x4
00520ED4  33 C9                     XOR ECX,ECX
00520ED6  66 8B 8C 18 42 02 00 00   MOV CX,word ptr [EAX + EBX*0x1 + 0x242]
00520EDE  EB 02                     JMP 0x00520ee2
LAB_00520ee0:
00520EE0  33 C9                     XOR ECX,ECX
LAB_00520ee2:
00520EE2  66 8B 93 B2 02 00 00      MOV DX,word ptr [EBX + 0x2b2]
00520EE9  6A 50                     PUSH 0x50
00520EEB  68 F0 00 00 00            PUSH 0xf0
00520EF0  52                        PUSH EDX
00520EF1  51                        PUSH ECX
00520EF2  8B CB                     MOV ECX,EBX
00520EF4  E8 DE 2E EE FF            CALL 0x00403dd7
00520EF9  8A 83 D4 03 00 00         MOV AL,byte ptr [EBX + 0x3d4]
00520EFF  3C FF                     CMP AL,0xff
00520F01  74 2E                     JZ 0x00520f31
00520F03  25 FF 00 00 00            AND EAX,0xff
00520F08  C1 E0 04                  SHL EAX,0x4
00520F0B  8B 84 18 B4 01 00 00      MOV EAX,dword ptr [EAX + EBX*0x1 + 0x1b4]
00520F12  3D 10 27 00 00            CMP EAX,0x2710
00520F17  7D 18                     JGE 0x00520f31
00520F19  8D 8B 8D 01 00 00         LEA ECX,[EBX + 0x18d]
00520F1F  50                        PUSH EAX
00520F20  68 E4 1A 7C 00            PUSH 0x7c1ae4
00520F25  51                        PUSH ECX
00520F26  FF 15 E8 BD 85 00         CALL dword ptr [0x0085bde8]
00520F2C  83 C4 0C                  ADD ESP,0xc
00520F2F  EB 28                     JMP 0x00520f59
LAB_00520f31:
00520F31  BF F4 3F 7C 00            MOV EDI,0x7c3ff4
00520F36  83 C9 FF                  OR ECX,0xffffffff
00520F39  33 C0                     XOR EAX,EAX
00520F3B  8D 93 8D 01 00 00         LEA EDX,[EBX + 0x18d]
00520F41  F2 AE                     SCASB.REPNE ES:EDI
00520F43  F7 D1                     NOT ECX
00520F45  2B F9                     SUB EDI,ECX
00520F47  8B C1                     MOV EAX,ECX
00520F49  8B F7                     MOV ESI,EDI
00520F4B  8B FA                     MOV EDI,EDX
00520F4D  C1 E9 02                  SHR ECX,0x2
00520F50  F3 A5                     MOVSD.REP ES:EDI,ESI
00520F52  8B C8                     MOV ECX,EAX
00520F54  83 E1 03                  AND ECX,0x3
00520F57  F3 A4                     MOVSB.REP ES:EDI,ESI
LAB_00520f59:
00520F59  8B 4B 68                  MOV ECX,dword ptr [EBX + 0x68]
00520F5C  6A 0C                     PUSH 0xc
00520F5E  6A 23                     PUSH 0x23
00520F60  6A 71                     PUSH 0x71
00520F62  6A 54                     PUSH 0x54
00520F64  6A 00                     PUSH 0x0
00520F66  51                        PUSH ECX
00520F67  8B 8B D5 03 00 00         MOV ECX,dword ptr [EBX + 0x3d5]
00520F6D  E8 1E FB 1E 00            CALL 0x00710a90
00520F72  8A 15 4E 87 80 00         MOV DL,byte ptr [0x0080874e]
00520F78  8B 8B D5 03 00 00         MOV ECX,dword ptr [EBX + 0x3d5]
00520F7E  80 EA 03                  SUB DL,0x3
00520F81  8D B3 8D 01 00 00         LEA ESI,[EBX + 0x18d]
00520F87  F6 DA                     NEG DL
00520F89  1B D2                     SBB EDX,EDX
00520F8B  83 E2 FB                  AND EDX,0xfffffffb
00520F8E  83 C2 06                  ADD EDX,0x6
00520F91  52                        PUSH EDX
00520F92  6A FF                     PUSH -0x1
00520F94  6A FF                     PUSH -0x1
00520F96  56                        PUSH ESI
00520F97  E8 24 0A 1F 00            CALL 0x007119c0
00520F9C  8A 83 D4 03 00 00         MOV AL,byte ptr [EBX + 0x3d4]
00520FA2  3C FF                     CMP AL,0xff
00520FA4  74 28                     JZ 0x00520fce
00520FA6  25 FF 00 00 00            AND EAX,0xff
00520FAB  C1 E0 04                  SHL EAX,0x4
00520FAE  8B 84 18 B8 01 00 00      MOV EAX,dword ptr [EAX + EBX*0x1 + 0x1b8]
00520FB5  3D 40 42 0F 00            CMP EAX,0xf4240
00520FBA  7D 12                     JGE 0x00520fce
00520FBC  50                        PUSH EAX
00520FBD  68 FC 28 7C 00            PUSH 0x7c28fc
00520FC2  56                        PUSH ESI
00520FC3  FF 15 E8 BD 85 00         CALL dword ptr [0x0085bde8]
00520FC9  83 C4 0C                  ADD ESP,0xc
00520FCC  EB 26                     JMP 0x00520ff4
LAB_00520fce:
00520FCE  BF EC 3F 7C 00            MOV EDI,0x7c3fec
00520FD3  83 C9 FF                  OR ECX,0xffffffff
00520FD6  33 C0                     XOR EAX,EAX
00520FD8  F2 AE                     SCASB.REPNE ES:EDI
00520FDA  F7 D1                     NOT ECX
00520FDC  2B F9                     SUB EDI,ECX
00520FDE  8B C1                     MOV EAX,ECX
00520FE0  8B F7                     MOV ESI,EDI
00520FE2  8D BB 8D 01 00 00         LEA EDI,[EBX + 0x18d]
00520FE8  C1 E9 02                  SHR ECX,0x2
00520FEB  F3 A5                     MOVSD.REP ES:EDI,ESI
00520FED  8B C8                     MOV ECX,EAX
00520FEF  83 E1 03                  AND ECX,0x3
00520FF2  F3 A4                     MOVSB.REP ES:EDI,ESI
LAB_00520ff4:
00520FF4  8B 4B 68                  MOV ECX,dword ptr [EBX + 0x68]
00520FF7  6A 0C                     PUSH 0xc
00520FF9  6A 17                     PUSH 0x17
00520FFB  6A 71                     PUSH 0x71
00520FFD  6A 78                     PUSH 0x78
00520FFF  6A 00                     PUSH 0x0
00521001  51                        PUSH ECX
00521002  8B 8B D5 03 00 00         MOV ECX,dword ptr [EBX + 0x3d5]
00521008  E8 83 FA 1E 00            CALL 0x00710a90
0052100D  8A 15 4E 87 80 00         MOV DL,byte ptr [0x0080874e]
00521013  8B 8B D5 03 00 00         MOV ECX,dword ptr [EBX + 0x3d5]
00521019  80 EA 03                  SUB DL,0x3
0052101C  8D B3 8D 01 00 00         LEA ESI,[EBX + 0x18d]
00521022  F6 DA                     NEG DL
00521024  1B D2                     SBB EDX,EDX
00521026  83 E2 FC                  AND EDX,0xfffffffc
00521029  83 C2 04                  ADD EDX,0x4
0052102C  52                        PUSH EDX
0052102D  6A FF                     PUSH -0x1
0052102F  6A FF                     PUSH -0x1
00521031  56                        PUSH ESI
00521032  E8 89 09 1F 00            CALL 0x007119c0
00521037  8A 83 D4 03 00 00         MOV AL,byte ptr [EBX + 0x3d4]
0052103D  3C FF                     CMP AL,0xff
0052103F  74 28                     JZ 0x00521069
00521041  25 FF 00 00 00            AND EAX,0xff
00521046  C1 E0 04                  SHL EAX,0x4
00521049  8B 84 18 BC 01 00 00      MOV EAX,dword ptr [EAX + EBX*0x1 + 0x1bc]
00521050  3D 40 42 0F 00            CMP EAX,0xf4240
00521055  7D 12                     JGE 0x00521069
00521057  50                        PUSH EAX
00521058  68 FC 28 7C 00            PUSH 0x7c28fc
0052105D  56                        PUSH ESI
0052105E  FF 15 E8 BD 85 00         CALL dword ptr [0x0085bde8]
00521064  83 C4 0C                  ADD ESP,0xc
00521067  EB 26                     JMP 0x0052108f
LAB_00521069:
00521069  BF EC 3F 7C 00            MOV EDI,0x7c3fec
0052106E  83 C9 FF                  OR ECX,0xffffffff
00521071  33 C0                     XOR EAX,EAX
00521073  F2 AE                     SCASB.REPNE ES:EDI
00521075  F7 D1                     NOT ECX
00521077  2B F9                     SUB EDI,ECX
00521079  8B C1                     MOV EAX,ECX
0052107B  8B F7                     MOV ESI,EDI
0052107D  8D BB 8D 01 00 00         LEA EDI,[EBX + 0x18d]
00521083  C1 E9 02                  SHR ECX,0x2
00521086  F3 A5                     MOVSD.REP ES:EDI,ESI
00521088  8B C8                     MOV ECX,EAX
0052108A  83 E1 03                  AND ECX,0x3
0052108D  F3 A4                     MOVSB.REP ES:EDI,ESI
LAB_0052108f:
0052108F  8B 4B 68                  MOV ECX,dword ptr [EBX + 0x68]
00521092  6A 0C                     PUSH 0xc
00521094  6A 23                     PUSH 0x23
00521096  6A 71                     PUSH 0x71
00521098  68 A2 00 00 00            PUSH 0xa2
0052109D  6A 00                     PUSH 0x0
0052109F  51                        PUSH ECX
005210A0  8B 8B D5 03 00 00         MOV ECX,dword ptr [EBX + 0x3d5]
005210A6  E8 E5 F9 1E 00            CALL 0x00710a90
005210AB  8A 15 4E 87 80 00         MOV DL,byte ptr [0x0080874e]
005210B1  8B 8B D5 03 00 00         MOV ECX,dword ptr [EBX + 0x3d5]
005210B7  80 EA 03                  SUB DL,0x3
005210BA  8D 83 8D 01 00 00         LEA EAX,[EBX + 0x18d]
005210C0  F6 DA                     NEG DL
005210C2  1B D2                     SBB EDX,EDX
005210C4  83 E2 FD                  AND EDX,0xfffffffd
005210C7  83 C2 05                  ADD EDX,0x5
005210CA  52                        PUSH EDX
005210CB  6A FF                     PUSH -0x1
005210CD  6A FF                     PUSH -0x1
005210CF  50                        PUSH EAX
005210D0  E8 EB 08 1F 00            CALL 0x007119c0
005210D5  8A 83 D4 03 00 00         MOV AL,byte ptr [EBX + 0x3d4]
005210DB  3C FF                     CMP AL,0xff
005210DD  0F 84 A8 01 00 00         JZ 0x0052128b
005210E3  25 FF 00 00 00            AND EAX,0xff
005210E8  C6 45 FC 01               MOV byte ptr [EBP + -0x4],0x1
005210EC  83 C0 1C                  ADD EAX,0x1c
005210EF  C1 E0 04                  SHL EAX,0x4
005210F2  8B 04 18                  MOV EAX,dword ptr [EAX + EBX*0x1]
005210F5  85 C0                     TEST EAX,EAX
005210F7  0F 8E CC 00 00 00         JLE 0x005211c9
005210FD  83 F8 01                  CMP EAX,0x1
00521100  7C 5E                     JL 0x00521160
00521102  BE 01 00 00 00            MOV ESI,0x1
LAB_00521107:
00521107  A0 4E 87 80 00            MOV AL,[0x0080874e]
0052110C  8B 8B CC 03 00 00         MOV ECX,dword ptr [EBX + 0x3cc]
00521112  2C 03                     SUB AL,0x3
00521114  F6 D8                     NEG AL
00521116  1B C0                     SBB EAX,EAX
00521118  83 E0 02                  AND EAX,0x2
0052111B  40                        INC EAX
0052111C  50                        PUSH EAX
0052111D  51                        PUSH ECX
0052111E  E8 7D A2 1E 00            CALL 0x0070b3a0
00521123  50                        PUSH EAX
00521124  8B 43 68                  MOV EAX,dword ptr [EBX + 0x68]
00521127  6A 01                     PUSH 0x1
00521129  8D 14 B5 CA 00 00 00      LEA EDX,[ESI*0x4 + 0xca]
00521130  6A 71                     PUSH 0x71
00521132  52                        PUSH EDX
00521133  50                        PUSH EAX
00521134  E8 F0 20 EE FF            CALL 0x00403229
00521139  8A 4D FC                  MOV CL,byte ptr [EBP + -0x4]
0052113C  83 C4 1C                  ADD ESP,0x1c
0052113F  FE C1                     INC CL
00521141  88 4D FC                  MOV byte ptr [EBP + -0x4],CL
00521144  33 C9                     XOR ECX,ECX
00521146  8A 8B D4 03 00 00         MOV CL,byte ptr [EBX + 0x3d4]
0052114C  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
0052114F  83 C1 1C                  ADD ECX,0x1c
00521152  81 E6 FF 00 00 00         AND ESI,0xff
00521158  C1 E1 04                  SHL ECX,0x4
0052115B  3B 34 19                  CMP ESI,dword ptr [ECX + EBX*0x1]
0052115E  7E A7                     JLE 0x00521107
LAB_00521160:
00521160  33 D2                     XOR EDX,EDX
00521162  8A 93 D4 03 00 00         MOV DL,byte ptr [EBX + 0x3d4]
00521168  83 C2 1C                  ADD EDX,0x1c
0052116B  C1 E2 04                  SHL EDX,0x4
0052116E  8A 04 1A                  MOV AL,byte ptr [EDX + EBX*0x1]
00521171  FE C0                     INC AL
00521173  3C 14                     CMP AL,0x14
00521175  88 45 FC                  MOV byte ptr [EBP + -0x4],AL
00521178  0F 87 3D 01 00 00         JA 0x005212bb
0052117E  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00521181  BF 15 00 00 00            MOV EDI,0x15
00521186  25 FF 00 00 00            AND EAX,0xff
0052118B  2B F8                     SUB EDI,EAX
0052118D  8D 34 85 CA 00 00 00      LEA ESI,[EAX*0x4 + 0xca]
LAB_00521194:
00521194  8B 83 CC 03 00 00         MOV EAX,dword ptr [EBX + 0x3cc]
0052119A  6A 00                     PUSH 0x0
0052119C  50                        PUSH EAX
0052119D  E8 FE A1 1E 00            CALL 0x0070b3a0
005211A2  8B 4B 68                  MOV ECX,dword ptr [EBX + 0x68]
005211A5  50                        PUSH EAX
005211A6  6A 01                     PUSH 0x1
005211A8  6A 71                     PUSH 0x71
005211AA  56                        PUSH ESI
005211AB  51                        PUSH ECX
005211AC  E8 78 20 EE FF            CALL 0x00403229
005211B1  83 C4 1C                  ADD ESP,0x1c
005211B4  83 C6 04                  ADD ESI,0x4
005211B7  4F                        DEC EDI
005211B8  75 DA                     JNZ 0x00521194
005211BA  8B 45 B4                  MOV EAX,dword ptr [EBP + -0x4c]
005211BD  A3 F8 8D 85 00            MOV [0x00858df8],EAX
005211C2  5F                        POP EDI
005211C3  5E                        POP ESI
005211C4  5B                        POP EBX
005211C5  8B E5                     MOV ESP,EBP
005211C7  5D                        POP EBP
005211C8  C3                        RET
LAB_005211c9:
005211C9  83 C0 14                  ADD EAX,0x14
005211CC  83 F8 01                  CMP EAX,0x1
005211CF  7C 55                     JL 0x00521226
005211D1  BE 01 00 00 00            MOV ESI,0x1
LAB_005211d6:
005211D6  8B 93 CC 03 00 00         MOV EDX,dword ptr [EBX + 0x3cc]
005211DC  6A 00                     PUSH 0x0
005211DE  52                        PUSH EDX
005211DF  E8 BC A1 1E 00            CALL 0x0070b3a0
005211E4  8B 4B 68                  MOV ECX,dword ptr [EBX + 0x68]
005211E7  50                        PUSH EAX
005211E8  6A 01                     PUSH 0x1
005211EA  8D 04 B5 CA 00 00 00      LEA EAX,[ESI*0x4 + 0xca]
005211F1  6A 71                     PUSH 0x71
005211F3  50                        PUSH EAX
005211F4  51                        PUSH ECX
005211F5  E8 2F 20 EE FF            CALL 0x00403229
005211FA  8A 55 FC                  MOV DL,byte ptr [EBP + -0x4]
005211FD  83 C4 1C                  ADD ESP,0x1c
00521200  FE C2                     INC DL
00521202  88 55 FC                  MOV byte ptr [EBP + -0x4],DL
00521205  33 D2                     XOR EDX,EDX
00521207  8A 93 D4 03 00 00         MOV DL,byte ptr [EBX + 0x3d4]
0052120D  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
00521210  83 C2 1C                  ADD EDX,0x1c
00521213  81 E6 FF 00 00 00         AND ESI,0xff
00521219  C1 E2 04                  SHL EDX,0x4
0052121C  8B 04 1A                  MOV EAX,dword ptr [EDX + EBX*0x1]
0052121F  83 C0 14                  ADD EAX,0x14
00521222  3B F0                     CMP ESI,EAX
00521224  7E B0                     JLE 0x005211d6
LAB_00521226:
00521226  33 C9                     XOR ECX,ECX
00521228  8A 8B D4 03 00 00         MOV CL,byte ptr [EBX + 0x3d4]
0052122E  83 C1 1C                  ADD ECX,0x1c
00521231  C1 E1 04                  SHL ECX,0x4
00521234  8A 04 19                  MOV AL,byte ptr [ECX + EBX*0x1]
00521237  04 15                     ADD AL,0x15
00521239  3C 14                     CMP AL,0x14
0052123B  88 45 FC                  MOV byte ptr [EBP + -0x4],AL
0052123E  77 7B                     JA 0x005212bb
00521240  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00521243  BF 15 00 00 00            MOV EDI,0x15
00521248  25 FF 00 00 00            AND EAX,0xff
0052124D  2B F8                     SUB EDI,EAX
0052124F  8D 34 85 CA 00 00 00      LEA ESI,[EAX*0x4 + 0xca]
LAB_00521256:
00521256  8B 93 CC 03 00 00         MOV EDX,dword ptr [EBX + 0x3cc]
0052125C  6A 04                     PUSH 0x4
0052125E  52                        PUSH EDX
0052125F  E8 3C A1 1E 00            CALL 0x0070b3a0
00521264  50                        PUSH EAX
00521265  8B 43 68                  MOV EAX,dword ptr [EBX + 0x68]
00521268  6A 01                     PUSH 0x1
0052126A  6A 71                     PUSH 0x71
0052126C  56                        PUSH ESI
0052126D  50                        PUSH EAX
0052126E  E8 B6 1F EE FF            CALL 0x00403229
00521273  83 C4 1C                  ADD ESP,0x1c
00521276  83 C6 04                  ADD ESI,0x4
00521279  4F                        DEC EDI
0052127A  75 DA                     JNZ 0x00521256
0052127C  8B 45 B4                  MOV EAX,dword ptr [EBP + -0x4c]
0052127F  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00521284  5F                        POP EDI
00521285  5E                        POP ESI
00521286  5B                        POP EBX
00521287  8B E5                     MOV ESP,EBP
00521289  5D                        POP EBP
0052128A  C3                        RET
LAB_0052128b:
0052128B  BE CE 00 00 00            MOV ESI,0xce
00521290  BF 14 00 00 00            MOV EDI,0x14
LAB_00521295:
00521295  8B 8B CC 03 00 00         MOV ECX,dword ptr [EBX + 0x3cc]
0052129B  6A 00                     PUSH 0x0
0052129D  51                        PUSH ECX
0052129E  E8 FD A0 1E 00            CALL 0x0070b3a0
005212A3  8B 53 68                  MOV EDX,dword ptr [EBX + 0x68]
005212A6  50                        PUSH EAX
005212A7  6A 01                     PUSH 0x1
005212A9  6A 71                     PUSH 0x71
005212AB  56                        PUSH ESI
005212AC  52                        PUSH EDX
005212AD  E8 77 1F EE FF            CALL 0x00403229
005212B2  83 C4 1C                  ADD ESP,0x1c
005212B5  83 C6 04                  ADD ESI,0x4
005212B8  4F                        DEC EDI
005212B9  75 DA                     JNZ 0x00521295
LAB_005212bb:
005212BB  8B 45 B4                  MOV EAX,dword ptr [EBP + -0x4c]
005212BE  A3 F8 8D 85 00            MOV [0x00858df8],EAX
005212C3  5F                        POP EDI
005212C4  5E                        POP ESI
005212C5  5B                        POP EBX
005212C6  8B E5                     MOV ESP,EBP
005212C8  5D                        POP EBP
005212C9  C3                        RET
LAB_005212ca:
005212CA  8B 4D B4                  MOV ECX,dword ptr [EBP + -0x4c]
005212CD  68 CC 3F 7C 00            PUSH 0x7c3fcc
005212D2  68 CC 4C 7A 00            PUSH 0x7a4ccc
005212D7  56                        PUSH ESI
005212D8  6A 00                     PUSH 0x0
005212DA  68 DE 00 00 00            PUSH 0xde
005212DF  68 B0 3E 7C 00            PUSH 0x7c3eb0
005212E4  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005212EA  E8 E1 C1 18 00            CALL 0x006ad4d0
005212EF  83 C4 18                  ADD ESP,0x18
005212F2  85 C0                     TEST EAX,EAX
005212F4  74 01                     JZ 0x005212f7
005212F6  CC                        INT3
LAB_005212f7:
005212F7  68 DE 00 00 00            PUSH 0xde
005212FC  68 B0 3E 7C 00            PUSH 0x7c3eb0
00521301  6A 00                     PUSH 0x0
00521303  56                        PUSH ESI
00521304  E8 37 4B 18 00            CALL 0x006a5e40
00521309  5F                        POP EDI
0052130A  5E                        POP ESI
0052130B  5B                        POP EBX
0052130C  8B E5                     MOV ESP,EBP
0052130E  5D                        POP EBP
0052130F  C3                        RET
