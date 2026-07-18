FUN_00639c90:
00639C90  55                        PUSH EBP
00639C91  8B EC                     MOV EBP,ESP
00639C93  83 EC 18                  SUB ESP,0x18
00639C96  53                        PUSH EBX
00639C97  56                        PUSH ESI
00639C98  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
00639C9B  57                        PUSH EDI
00639C9C  8B D9                     MOV EBX,ECX
00639C9E  56                        PUSH ESI
00639C9F  E8 63 B2 DC FF            CALL 0x00404f07
00639CA4  3D FF FF 00 00            CMP EAX,0xffff
00639CA9  75 09                     JNZ 0x00639cb4
00639CAB  5F                        POP EDI
00639CAC  5E                        POP ESI
00639CAD  5B                        POP EBX
00639CAE  8B E5                     MOV ESP,EBP
00639CB0  5D                        POP EBP
00639CB1  C2 04 00                  RET 0x4
LAB_00639cb4:
00639CB4  8B 46 10                  MOV EAX,dword ptr [ESI + 0x10]
00639CB7  BF 03 00 00 00            MOV EDI,0x3
00639CBC  3B C7                     CMP EAX,EDI
00639CBE  0F 87 B6 1A 00 00         JA 0x0063b77a
00639CC4  0F 84 51 1A 00 00         JZ 0x0063b71b
00639CCA  83 E8 00                  SUB EAX,0x0
00639CCD  0F 84 58 01 00 00         JZ 0x00639e2b
00639CD3  83 E8 02                  SUB EAX,0x2
00639CD6  0F 85 4C 1B 00 00         JNZ 0x0063b828
00639CDC  8B 76 14                  MOV ESI,dword ptr [ESI + 0x14]
00639CDF  83 7E 0C 02               CMP dword ptr [ESI + 0xc],0x2
00639CE3  0F 84 1F 01 00 00         JZ 0x00639e08
00639CE9  B9 0D 00 00 00            MOV ECX,0xd
00639CEE  8D BB 31 02 00 00         LEA EDI,[EBX + 0x231]
00639CF4  F3 A5                     MOVSD.REP ES:EDI,ESI
00639CF6  A1 38 2A 80 00            MOV EAX,[0x00802a38]
00639CFB  8B 88 E4 00 00 00         MOV ECX,dword ptr [EAX + 0xe4]
00639D01  51                        PUSH ECX
00639D02  8B CB                     MOV ECX,EBX
00639D04  E8 BF AF DC FF            CALL 0x00404cc8
00639D09  8B 83 45 02 00 00         MOV EAX,dword ptr [EBX + 0x245]
00639D0F  83 F8 01                  CMP EAX,0x1
00639D12  76 4E                     JBE 0x00639d62
00639D14  83 F8 02                  CMP EAX,0x2
00639D17  0F 85 8E 00 00 00         JNZ 0x00639dab
00639D1D  8B 15 74 67 80 00         MOV EDX,dword ptr [0x00806774]
00639D23  6A 1D                     PUSH 0x1d
00639D25  8D B3 D5 01 00 00         LEA ESI,[EBX + 0x1d5]
00639D2B  68 38 1F 7D 00            PUSH 0x7d1f38
00639D30  52                        PUSH EDX
00639D31  6A 0D                     PUSH 0xd
00639D33  8B CE                     MOV ECX,ESI
00639D35  E8 49 A4 DC FF            CALL 0x00404183
00639D3A  85 C0                     TEST EAX,EAX
00639D3C  74 0E                     JZ 0x00639d4c
00639D3E  5F                        POP EDI
00639D3F  5E                        POP ESI
00639D40  B8 FF FF 00 00            MOV EAX,0xffff
00639D45  5B                        POP EBX
00639D46  8B E5                     MOV ESP,EBP
00639D48  5D                        POP EBP
00639D49  C2 04 00                  RET 0x4
LAB_00639d4c:
00639D4C  6A 00                     PUSH 0x0
00639D4E  6A 09                     PUSH 0x9
00639D50  6A 00                     PUSH 0x0
00639D52  6A 0D                     PUSH 0xd
00639D54  8B CE                     MOV ECX,ESI
00639D56  E8 5F 81 DC FF            CALL 0x00401eba
00639D5B  68 9A 04 00 00            PUSH 0x49a
00639D60  EB 42                     JMP 0x00639da4
LAB_00639d62:
00639D62  A1 74 67 80 00            MOV EAX,[0x00806774]
00639D67  6A 1D                     PUSH 0x1d
00639D69  8D B3 D5 01 00 00         LEA ESI,[EBX + 0x1d5]
00639D6F  68 30 1F 7D 00            PUSH 0x7d1f30
00639D74  50                        PUSH EAX
00639D75  6A 0D                     PUSH 0xd
00639D77  8B CE                     MOV ECX,ESI
00639D79  E8 05 A4 DC FF            CALL 0x00404183
00639D7E  85 C0                     TEST EAX,EAX
00639D80  74 0E                     JZ 0x00639d90
00639D82  5F                        POP EDI
00639D83  5E                        POP ESI
00639D84  B8 FF FF 00 00            MOV EAX,0xffff
00639D89  5B                        POP EBX
00639D8A  8B E5                     MOV ESP,EBP
00639D8C  5D                        POP EBP
00639D8D  C2 04 00                  RET 0x4
LAB_00639d90:
00639D90  6A 00                     PUSH 0x0
00639D92  6A 3B                     PUSH 0x3b
00639D94  6A 28                     PUSH 0x28
00639D96  6A 0D                     PUSH 0xd
00639D98  8B CE                     MOV ECX,ESI
00639D9A  E8 1B 81 DC FF            CALL 0x00401eba
00639D9F  68 61 04 00 00            PUSH 0x461
LAB_00639da4:
00639DA4  8B CB                     MOV ECX,EBX
00639DA6  E8 EC 99 DC FF            CALL 0x00403797
LAB_00639dab:
00639DAB  66 8B 8B 6E 02 00 00      MOV CX,word ptr [EBX + 0x26e]
00639DB2  66 8B 93 6A 02 00 00      MOV DX,word ptr [EBX + 0x26a]
00639DB9  66 8B 83 66 02 00 00      MOV AX,word ptr [EBX + 0x266]
00639DC0  51                        PUSH ECX
00639DC1  52                        PUSH EDX
00639DC2  50                        PUSH EAX
00639DC3  8B CB                     MOV ECX,EBX
00639DC5  E8 3D 93 DC FF            CALL 0x00403107
00639DCA  8D B3 D5 01 00 00         LEA ESI,[EBX + 0x1d5]
00639DD0  6A 0D                     PUSH 0xd
00639DD2  8B CE                     MOV ECX,ESI
00639DD4  E8 FD A0 DC FF            CALL 0x00403ed6
00639DD9  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
00639DDF  8B 91 E4 00 00 00         MOV EDX,dword ptr [ECX + 0xe4]
00639DE5  8B CE                     MOV ECX,ESI
00639DE7  52                        PUSH EDX
00639DE8  6A 0D                     PUSH 0xd
00639DEA  E8 51 B4 DC FF            CALL 0x00405240
00639DEF  C6 83 9F 02 00 00 01      MOV byte ptr [EBX + 0x29f],0x1
00639DF6  5F                        POP EDI
00639DF7  C6 83 65 02 00 00 01      MOV byte ptr [EBX + 0x265],0x1
00639DFE  5E                        POP ESI
00639DFF  33 C0                     XOR EAX,EAX
00639E01  5B                        POP EBX
00639E02  8B E5                     MOV ESP,EBP
00639E04  5D                        POP EBP
00639E05  C2 04 00                  RET 0x4
LAB_00639e08:
00639E08  56                        PUSH ESI
00639E09  8B CB                     MOV ECX,EBX
00639E0B  E8 01 89 DC FF            CALL 0x00402711
00639E10  B9 0B 00 00 00            MOV ECX,0xb
00639E15  33 C0                     XOR EAX,EAX
00639E17  8D BB 83 03 00 00         LEA EDI,[EBX + 0x383]
00639E1D  F3 AB                     STOSD.REP ES:EDI
00639E1F  AA                        STOSB ES:EDI
00639E20  5F                        POP EDI
00639E21  5E                        POP ESI
00639E22  33 C0                     XOR EAX,EAX
00639E24  5B                        POP EBX
00639E25  8B E5                     MOV ESP,EBP
00639E27  5D                        POP EBP
00639E28  C2 04 00                  RET 0x4
LAB_00639e2b:
00639E2B  33 C0                     XOR EAX,EAX
00639E2D  8A 83 65 02 00 00         MOV AL,byte ptr [EBX + 0x265]
00639E33  48                        DEC EAX
00639E34  83 F8 0C                  CMP EAX,0xc
00639E37  0F 87 EB 19 00 00         JA 0x0063b828
switchD_00639e3d::switchD:
00639E3D  FF 24 85 34 B8 63 00      JMP dword ptr [EAX*0x4 + 0x63b834]
switchD_00639e3d::caseD_1:
00639E44  A1 38 2A 80 00            MOV EAX,[0x00802a38]
00639E49  8B 88 E4 00 00 00         MOV ECX,dword ptr [EAX + 0xe4]
00639E4F  51                        PUSH ECX
00639E50  8B CB                     MOV ECX,EBX
00639E52  E8 96 89 DC FF            CALL 0x004027ed
00639E57  85 C0                     TEST EAX,EAX
00639E59  0F 8E 40 01 00 00         JLE 0x00639f9f
00639E5F  83 F8 02                  CMP EAX,0x2
00639E62  0F 85 01 01 00 00         JNZ 0x00639f69
00639E68  8B 15 74 67 80 00         MOV EDX,dword ptr [0x00806774]
00639E6E  6A 1D                     PUSH 0x1d
00639E70  8D B3 D5 01 00 00         LEA ESI,[EBX + 0x1d5]
00639E76  68 40 1F 7D 00            PUSH 0x7d1f40
00639E7B  52                        PUSH EDX
00639E7C  6A 0D                     PUSH 0xd
00639E7E  8B CE                     MOV ECX,ESI
00639E80  E8 FE A2 DC FF            CALL 0x00404183
00639E85  85 C0                     TEST EAX,EAX
00639E87  74 0E                     JZ 0x00639e97
00639E89  5F                        POP EDI
00639E8A  5E                        POP ESI
00639E8B  B8 FF FF 00 00            MOV EAX,0xffff
00639E90  5B                        POP EBX
00639E91  8B E5                     MOV ESP,EBP
00639E93  5D                        POP EBP
00639E94  C2 04 00                  RET 0x4
LAB_00639e97:
00639E97  A1 64 67 80 00            MOV EAX,[0x00806764]
00639E9C  6A 1D                     PUSH 0x1d
00639E9E  68 48 1F 7D 00            PUSH 0x7d1f48
00639EA3  50                        PUSH EAX
00639EA4  6A 0F                     PUSH 0xf
00639EA6  8B CE                     MOV ECX,ESI
00639EA8  E8 D6 A2 DC FF            CALL 0x00404183
00639EAD  85 C0                     TEST EAX,EAX
00639EAF  74 0E                     JZ 0x00639ebf
00639EB1  5F                        POP EDI
00639EB2  5E                        POP ESI
00639EB3  B8 FF FF 00 00            MOV EAX,0xffff
00639EB8  5B                        POP EBX
00639EB9  8B E5                     MOV ESP,EBP
00639EBB  5D                        POP EBP
00639EBC  C2 04 00                  RET 0x4
LAB_00639ebf:
00639EBF  6A 0F                     PUSH 0xf
00639EC1  8B CE                     MOV ECX,ESI
00639EC3  E8 0C 84 DC FF            CALL 0x004022d4
00639EC8  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
00639ECE  8B 91 E4 00 00 00         MOV EDX,dword ptr [ECX + 0xe4]
00639ED4  8B CE                     MOV ECX,ESI
00639ED6  52                        PUSH EDX
00639ED7  6A 0D                     PUSH 0xd
00639ED9  E8 62 B3 DC FF            CALL 0x00405240
00639EDE  6A 01                     PUSH 0x1
00639EE0  6A 00                     PUSH 0x0
00639EE2  C6 83 9F 02 00 00 01      MOV byte ptr [EBX + 0x29f],0x1
00639EE9  8B 83 6E 02 00 00         MOV EAX,dword ptr [EBX + 0x26e]
00639EEF  8B 8B 6A 02 00 00         MOV ECX,dword ptr [EBX + 0x26a]
00639EF5  8B 93 66 02 00 00         MOV EDX,dword ptr [EBX + 0x266]
00639EFB  6A 00                     PUSH 0x0
00639EFD  53                        PUSH EBX
00639EFE  6A 00                     PUSH 0x0
00639F00  50                        PUSH EAX
00639F01  51                        PUSH ECX
00639F02  52                        PUSH EDX
00639F03  E8 8D 8B DC FF            CALL 0x00402a95
00639F08  66 8B 83 6E 02 00 00      MOV AX,word ptr [EBX + 0x26e]
00639F0F  66 8B 8B 6A 02 00 00      MOV CX,word ptr [EBX + 0x26a]
00639F16  66 8B 93 66 02 00 00      MOV DX,word ptr [EBX + 0x266]
00639F1D  83 C4 20                  ADD ESP,0x20
00639F20  50                        PUSH EAX
00639F21  51                        PUSH ECX
00639F22  52                        PUSH EDX
00639F23  8B CB                     MOV ECX,EBX
00639F25  E8 DD 91 DC FF            CALL 0x00403107
00639F2A  8B 83 97 03 00 00         MOV EAX,dword ptr [EBX + 0x397]
00639F30  85 C0                     TEST EAX,EAX
00639F32  74 23                     JZ 0x00639f57
00639F34  8B 8B 9F 03 00 00         MOV ECX,dword ptr [EBX + 0x39f]
00639F3A  85 C9                     TEST ECX,ECX
00639F3C  75 19                     JNZ 0x00639f57
00639F3E  8B 80 ED 01 00 00         MOV EAX,dword ptr [EAX + 0x1ed]
00639F44  8B 8B ED 01 00 00         MOV ECX,dword ptr [EBX + 0x1ed]
00639F4A  50                        PUSH EAX
00639F4B  51                        PUSH ECX
00639F4C  8B 8B 11 02 00 00         MOV ECX,dword ptr [EBX + 0x211]
00639F52  E8 09 05 0B 00            CALL 0x006ea460
LAB_00639f57:
00639F57  5F                        POP EDI
00639F58  C6 83 65 02 00 00 08      MOV byte ptr [EBX + 0x265],0x8
00639F5F  5E                        POP ESI
00639F60  33 C0                     XOR EAX,EAX
00639F62  5B                        POP EBX
00639F63  8B E5                     MOV ESP,EBP
00639F65  5D                        POP EBP
00639F66  C2 04 00                  RET 0x4
LAB_00639f69:
00639F69  8D 8B D5 01 00 00         LEA ECX,[EBX + 0x1d5]
00639F6F  E8 9B 9D DC FF            CALL 0x00403d0f
00639F74  C6 83 9F 02 00 00 00      MOV byte ptr [EBX + 0x29f],0x0
00639F7B  8B 15 38 2A 80 00         MOV EDX,dword ptr [0x00802a38]
00639F81  5F                        POP EDI
00639F82  5E                        POP ESI
00639F83  8B 82 E4 00 00 00         MOV EAX,dword ptr [EDX + 0xe4]
00639F89  89 83 8E 02 00 00         MOV dword ptr [EBX + 0x28e],EAX
00639F8F  C6 83 65 02 00 00 02      MOV byte ptr [EBX + 0x265],0x2
00639F96  33 C0                     XOR EAX,EAX
00639F98  5B                        POP EBX
00639F99  8B E5                     MOV ESP,EBP
00639F9B  5D                        POP EBP
00639F9C  C2 04 00                  RET 0x4
LAB_00639f9f:
00639F9F  66 8B 8B 6E 02 00 00      MOV CX,word ptr [EBX + 0x26e]
00639FA6  66 8B 93 6A 02 00 00      MOV DX,word ptr [EBX + 0x26a]
00639FAD  66 8B 83 66 02 00 00      MOV AX,word ptr [EBX + 0x266]
00639FB4  51                        PUSH ECX
00639FB5  52                        PUSH EDX
00639FB6  50                        PUSH EAX
00639FB7  8B CB                     MOV ECX,EBX
00639FB9  E8 49 91 DC FF            CALL 0x00403107
00639FBE  8B 83 45 02 00 00         MOV EAX,dword ptr [EBX + 0x245]
00639FC4  83 F8 01                  CMP EAX,0x1
00639FC7  76 0A                     JBE 0x00639fd3
00639FC9  83 F8 02                  CMP EAX,0x2
00639FCC  B9 50 00 00 00            MOV ECX,0x50
00639FD1  74 05                     JZ 0x00639fd8
LAB_00639fd3:
00639FD3  B9 78 00 00 00            MOV ECX,0x78
LAB_00639fd8:
00639FD8  8B 53 1C                  MOV EDX,dword ptr [EBX + 0x1c]
00639FDB  6A 00                     PUSH 0x0
00639FDD  69 D2 6D 4E C6 41         IMUL EDX,EDX,0x41c64e6d
00639FE3  6A 00                     PUSH 0x0
00639FE5  6A FF                     PUSH -0x1
00639FE7  8D 82 39 30 00 00         LEA EAX,[EDX + 0x3039]
00639FED  6A 00                     PUSH 0x0
00639FEF  89 43 1C                  MOV dword ptr [EBX + 0x1c],EAX
00639FF2  8B 93 6E 02 00 00         MOV EDX,dword ptr [EBX + 0x26e]
00639FF8  6A 00                     PUSH 0x0
00639FFA  6A 00                     PUSH 0x0
00639FFC  6A 00                     PUSH 0x0
00639FFE  6A 00                     PUSH 0x0
0063A000  2B D1                     SUB EDX,ECX
0063A002  8B 8B 6A 02 00 00         MOV ECX,dword ptr [EBX + 0x26a]
0063A008  6A 00                     PUSH 0x0
0063A00A  52                        PUSH EDX
0063A00B  8B 93 66 02 00 00         MOV EDX,dword ptr [EBX + 0x266]
0063A011  51                        PUSH ECX
0063A012  8B 0D 7C 2A 80 00         MOV ECX,dword ptr [0x00802a7c]
0063A018  52                        PUSH EDX
0063A019  C1 E8 10                  SHR EAX,0x10
0063A01C  83 E0 01                  AND EAX,0x1
0063A01F  50                        PUSH EAX
0063A020  6A 01                     PUSH 0x1
0063A022  6A 00                     PUSH 0x0
0063A024  E8 0A 74 DC FF            CALL 0x00401433
0063A029  8B 03                     MOV EAX,dword ptr [EBX]
0063A02B  8B CB                     MOV ECX,EBX
0063A02D  FF 90 D8 00 00 00         CALL dword ptr [EAX + 0xd8]
0063A033  8B 35 88 2A 80 00         MOV ESI,dword ptr [0x00802a88]
0063A039  85 F6                     TEST ESI,ESI
0063A03B  0F 84 E7 17 00 00         JZ 0x0063b828
0063A041  8B 8B 6E 02 00 00         MOV ECX,dword ptr [EBX + 0x26e]
0063A047  B8 1F 85 EB 51            MOV EAX,0x51eb851f
0063A04C  85 C9                     TEST ECX,ECX
0063A04E  7C 14                     JL 0x0063a064
0063A050  F7 E9                     IMUL ECX
0063A052  C1 FA 06                  SAR EDX,0x6
0063A055  8B CA                     MOV ECX,EDX
0063A057  C1 E9 1F                  SHR ECX,0x1f
0063A05A  03 D1                     ADD EDX,ECX
0063A05C  0F BF D2                  MOVSX EDX,DX
0063A05F  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
0063A062  EB 13                     JMP 0x0063a077
LAB_0063a064:
0063A064  F7 E9                     IMUL ECX
0063A066  C1 FA 06                  SAR EDX,0x6
0063A069  8B C2                     MOV EAX,EDX
0063A06B  C1 E8 1F                  SHR EAX,0x1f
0063A06E  03 D0                     ADD EDX,EAX
0063A070  0F BF C2                  MOVSX EAX,DX
0063A073  48                        DEC EAX
0063A074  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
LAB_0063a077:
0063A077  8B 8B 6A 02 00 00         MOV ECX,dword ptr [EBX + 0x26a]
0063A07D  B8 79 19 8C 02            MOV EAX,0x28c1979
0063A082  85 C9                     TEST ECX,ECX
0063A084  7C 10                     JL 0x0063a096
0063A086  F7 E9                     IMUL ECX
0063A088  D1 FA                     SAR EDX,0x1
0063A08A  8B CA                     MOV ECX,EDX
0063A08C  C1 E9 1F                  SHR ECX,0x1f
0063A08F  03 D1                     ADD EDX,ECX
0063A091  0F BF FA                  MOVSX EDI,DX
0063A094  EB 0F                     JMP 0x0063a0a5
LAB_0063a096:
0063A096  F7 E9                     IMUL ECX
0063A098  D1 FA                     SAR EDX,0x1
0063A09A  8B C2                     MOV EAX,EDX
0063A09C  C1 E8 1F                  SHR EAX,0x1f
0063A09F  03 D0                     ADD EDX,EAX
0063A0A1  0F BF FA                  MOVSX EDI,DX
0063A0A4  4F                        DEC EDI
LAB_0063a0a5:
0063A0A5  8B 8B 66 02 00 00         MOV ECX,dword ptr [EBX + 0x266]
0063A0AB  B8 79 19 8C 02            MOV EAX,0x28c1979
0063A0B0  85 C9                     TEST ECX,ECX
0063A0B2  7C 10                     JL 0x0063a0c4
0063A0B4  F7 E9                     IMUL ECX
0063A0B6  D1 FA                     SAR EDX,0x1
0063A0B8  8B CA                     MOV ECX,EDX
0063A0BA  C1 E9 1F                  SHR ECX,0x1f
0063A0BD  03 D1                     ADD EDX,ECX
0063A0BF  0F BF C2                  MOVSX EAX,DX
0063A0C2  EB 0F                     JMP 0x0063a0d3
LAB_0063a0c4:
0063A0C4  F7 E9                     IMUL ECX
0063A0C6  D1 FA                     SAR EDX,0x1
0063A0C8  8B C2                     MOV EAX,EDX
0063A0CA  C1 E8 1F                  SHR EAX,0x1f
0063A0CD  03 D0                     ADD EDX,EAX
0063A0CF  0F BF C2                  MOVSX EAX,DX
0063A0D2  48                        DEC EAX
LAB_0063a0d3:
0063A0D3  80 3D 4D 87 80 00 FF      CMP byte ptr [0x0080874d],0xff
0063A0DA  74 68                     JZ 0x0063a144
0063A0DC  8B 8E F8 00 00 00         MOV ECX,dword ptr [ESI + 0xf8]
0063A0E2  85 C9                     TEST ECX,ECX
0063A0E4  74 5E                     JZ 0x0063a144
0063A0E6  8D 4D E8                  LEA ECX,[EBP + -0x18]
0063A0E9  8D 55 EC                  LEA EDX,[EBP + -0x14]
0063A0EC  51                        PUSH ECX
0063A0ED  52                        PUSH EDX
0063A0EE  57                        PUSH EDI
0063A0EF  50                        PUSH EAX
0063A0F0  8B 86 0C 01 00 00         MOV EAX,dword ptr [ESI + 0x10c]
0063A0F6  8B CE                     MOV ECX,ESI
0063A0F8  50                        PUSH EAX
0063A0F9  E8 55 9E DC FF            CALL 0x00403f53
0063A0FE  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0063A101  85 C0                     TEST EAX,EAX
0063A103  7C 3F                     JL 0x0063a144
0063A105  83 F8 05                  CMP EAX,0x5
0063A108  7D 3A                     JGE 0x0063a144
0063A10A  8B 7D EC                  MOV EDI,dword ptr [EBP + -0x14]
0063A10D  85 FF                     TEST EDI,EDI
0063A10F  7C 33                     JL 0x0063a144
0063A111  8B 4E 30                  MOV ECX,dword ptr [ESI + 0x30]
0063A114  3B F9                     CMP EDI,ECX
0063A116  7D 2C                     JGE 0x0063a144
0063A118  8B 14 85 D0 AE 79 00      MOV EDX,dword ptr [EAX*0x4 + 0x79aed0]
0063A11F  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
0063A122  03 C2                     ADD EAX,EDX
0063A124  85 C0                     TEST EAX,EAX
0063A126  7C 1C                     JL 0x0063a144
0063A128  3B 46 34                  CMP EAX,dword ptr [ESI + 0x34]
0063A12B  7D 17                     JGE 0x0063a144
0063A12D  8B 76 4C                  MOV ESI,dword ptr [ESI + 0x4c]
0063A130  85 F6                     TEST ESI,ESI
0063A132  74 10                     JZ 0x0063a144
0063A134  0F AF C1                  IMUL EAX,ECX
0063A137  03 C6                     ADD EAX,ESI
0063A139  33 C9                     XOR ECX,ECX
0063A13B  8A 0C 38                  MOV CL,byte ptr [EAX + EDI*0x1]
0063A13E  8B C1                     MOV EAX,ECX
0063A140  85 C0                     TEST EAX,EAX
0063A142  74 2D                     JZ 0x0063a171
LAB_0063a144:
0063A144  8A 83 9F 02 00 00         MOV AL,byte ptr [EBX + 0x29f]
0063A14A  84 C0                     TEST AL,AL
0063A14C  0F 85 D6 16 00 00         JNZ 0x0063b828
0063A152  6A 00                     PUSH 0x0
0063A154  8D 8B D5 01 00 00         LEA ECX,[EBX + 0x1d5]
0063A15A  E8 23 88 DC FF            CALL 0x00402982
0063A15F  5F                        POP EDI
0063A160  C6 83 9F 02 00 00 01      MOV byte ptr [EBX + 0x29f],0x1
0063A167  5E                        POP ESI
0063A168  33 C0                     XOR EAX,EAX
0063A16A  5B                        POP EBX
0063A16B  8B E5                     MOV ESP,EBP
0063A16D  5D                        POP EBP
0063A16E  C2 04 00                  RET 0x4
LAB_0063a171:
0063A171  8A 83 9F 02 00 00         MOV AL,byte ptr [EBX + 0x29f]
0063A177  84 C0                     TEST AL,AL
0063A179  0F 84 A9 16 00 00         JZ 0x0063b828
0063A17F  8D 8B D5 01 00 00         LEA ECX,[EBX + 0x1d5]
0063A185  E8 85 9B DC FF            CALL 0x00403d0f
0063A18A  5F                        POP EDI
0063A18B  C6 83 9F 02 00 00 00      MOV byte ptr [EBX + 0x29f],0x0
0063A192  5E                        POP ESI
0063A193  33 C0                     XOR EAX,EAX
0063A195  5B                        POP EBX
0063A196  8B E5                     MOV ESP,EBP
0063A198  5D                        POP EBP
0063A199  C2 04 00                  RET 0x4
switchD_00639e3d::caseD_2:
0063A19C  8B 15 38 2A 80 00         MOV EDX,dword ptr [0x00802a38]
0063A1A2  8B 82 E4 00 00 00         MOV EAX,dword ptr [EDX + 0xe4]
0063A1A8  8B 93 8E 02 00 00         MOV EDX,dword ptr [EBX + 0x28e]
0063A1AE  2B C2                     SUB EAX,EDX
0063A1B0  83 F8 1E                  CMP EAX,0x1e
0063A1B3  0F 86 6F 16 00 00         JBE 0x0063b828
0063A1B9  66 8B 83 53 02 00 00      MOV AX,word ptr [EBX + 0x253]
0063A1C0  66 8B 8B 55 02 00 00      MOV CX,word ptr [EBX + 0x255]
0063A1C7  66 89 8B 4F 02 00 00      MOV word ptr [EBX + 0x24f],CX
0063A1CE  66 C7 83 51 02 00 00 33 13  MOV word ptr [EBX + 0x251],0x1333
0063A1D7  0F BF D0                  MOVSX EDX,AX
0063A1DA  0F BF C9                  MOVSX ECX,CX
0063A1DD  66 89 83 4D 02 00 00      MOV word ptr [EBX + 0x24d],AX
0063A1E4  89 93 66 02 00 00         MOV dword ptr [EBX + 0x266],EDX
0063A1EA  89 8B 6A 02 00 00         MOV dword ptr [EBX + 0x26a],ECX
0063A1F0  8B 93 66 02 00 00         MOV EDX,dword ptr [EBX + 0x266]
0063A1F6  85 D2                     TEST EDX,EDX
0063A1F8  B8 79 19 8C 02            MOV EAX,0x28c1979
0063A1FD  7C 10                     JL 0x0063a20f
0063A1FF  F7 EA                     IMUL EDX
0063A201  D1 FA                     SAR EDX,0x1
0063A203  8B C2                     MOV EAX,EDX
0063A205  C1 E8 1F                  SHR EAX,0x1f
0063A208  03 D0                     ADD EDX,EAX
0063A20A  0F BF C2                  MOVSX EAX,DX
0063A20D  EB 0F                     JMP 0x0063a21e
LAB_0063a20f:
0063A20F  F7 EA                     IMUL EDX
0063A211  D1 FA                     SAR EDX,0x1
0063A213  8B C2                     MOV EAX,EDX
0063A215  C1 E8 1F                  SHR EAX,0x1f
0063A218  03 D0                     ADD EDX,EAX
0063A21A  0F BF C2                  MOVSX EAX,DX
0063A21D  48                        DEC EAX
LAB_0063a21e:
0063A21E  89 83 86 02 00 00         MOV dword ptr [EBX + 0x286],EAX
0063A224  B8 79 19 8C 02            MOV EAX,0x28c1979
0063A229  85 C9                     TEST ECX,ECX
0063A22B  7C 10                     JL 0x0063a23d
0063A22D  F7 E9                     IMUL ECX
0063A22F  D1 FA                     SAR EDX,0x1
0063A231  8B CA                     MOV ECX,EDX
0063A233  C1 E9 1F                  SHR ECX,0x1f
0063A236  03 D1                     ADD EDX,ECX
0063A238  0F BF C2                  MOVSX EAX,DX
0063A23B  EB 0F                     JMP 0x0063a24c
LAB_0063a23d:
0063A23D  F7 E9                     IMUL ECX
0063A23F  D1 FA                     SAR EDX,0x1
0063A241  8B C2                     MOV EAX,EDX
0063A243  C1 E8 1F                  SHR EAX,0x1f
0063A246  03 D0                     ADD EDX,EAX
0063A248  0F BF C2                  MOVSX EAX,DX
0063A24B  48                        DEC EAX
LAB_0063a24c:
0063A24C  89 83 8A 02 00 00         MOV dword ptr [EBX + 0x28a],EAX
0063A252  8B 83 45 02 00 00         MOV EAX,dword ptr [EBX + 0x245]
0063A258  83 F8 01                  CMP EAX,0x1
0063A25B  76 0D                     JBE 0x0063a26a
0063A25D  83 F8 02                  CMP EAX,0x2
0063A260  75 1B                     JNZ 0x0063a27d
0063A262  6A 00                     PUSH 0x0
0063A264  6A 0A                     PUSH 0xa
0063A266  6A 0A                     PUSH 0xa
0063A268  EB 06                     JMP 0x0063a270
LAB_0063a26a:
0063A26A  6A 00                     PUSH 0x0
0063A26C  6A 00                     PUSH 0x0
0063A26E  6A 00                     PUSH 0x0
LAB_0063a270:
0063A270  6A 0D                     PUSH 0xd
0063A272  8D 8B D5 01 00 00         LEA ECX,[EBX + 0x1d5]
0063A278  E8 3D 7C DC FF            CALL 0x00401eba
LAB_0063a27d:
0063A27D  C6 83 9E 02 00 00 04      MOV byte ptr [EBX + 0x29e],0x4
0063A284  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
0063A28A  8D B3 D5 01 00 00         LEA ESI,[EBX + 0x1d5]
0063A290  8B 91 E4 00 00 00         MOV EDX,dword ptr [ECX + 0xe4]
0063A296  8B CE                     MOV ECX,ESI
0063A298  52                        PUSH EDX
0063A299  6A 0D                     PUSH 0xd
0063A29B  E8 A0 AF DC FF            CALL 0x00405240
0063A2A0  6A 00                     PUSH 0x0
0063A2A2  8B CE                     MOV ECX,ESI
0063A2A4  E8 D9 86 DC FF            CALL 0x00402982
0063A2A9  C6 83 9F 02 00 00 01      MOV byte ptr [EBX + 0x29f],0x1
0063A2B0  A1 38 2A 80 00            MOV EAX,[0x00802a38]
0063A2B5  8B 88 E4 00 00 00         MOV ECX,dword ptr [EAX + 0xe4]
0063A2BB  89 8B 8E 02 00 00         MOV dword ptr [EBX + 0x28e],ECX
0063A2C1  66 8B 93 6E 02 00 00      MOV DX,word ptr [EBX + 0x26e]
0063A2C8  66 8B 83 6A 02 00 00      MOV AX,word ptr [EBX + 0x26a]
0063A2CF  66 8B 8B 66 02 00 00      MOV CX,word ptr [EBX + 0x266]
0063A2D6  52                        PUSH EDX
0063A2D7  50                        PUSH EAX
0063A2D8  51                        PUSH ECX
0063A2D9  8B CB                     MOV ECX,EBX
0063A2DB  E8 27 8E DC FF            CALL 0x00403107
0063A2E0  8B 13                     MOV EDX,dword ptr [EBX]
0063A2E2  8B CB                     MOV ECX,EBX
0063A2E4  FF 92 D8 00 00 00         CALL dword ptr [EDX + 0xd8]
0063A2EA  8B 35 88 2A 80 00         MOV ESI,dword ptr [0x00802a88]
0063A2F0  85 F6                     TEST ESI,ESI
0063A2F2  0F 84 3F 01 00 00         JZ 0x0063a437
0063A2F8  8B 8B 6E 02 00 00         MOV ECX,dword ptr [EBX + 0x26e]
0063A2FE  B8 1F 85 EB 51            MOV EAX,0x51eb851f
0063A303  85 C9                     TEST ECX,ECX
0063A305  7C 14                     JL 0x0063a31b
0063A307  F7 E9                     IMUL ECX
0063A309  C1 FA 06                  SAR EDX,0x6
0063A30C  8B C2                     MOV EAX,EDX
0063A30E  C1 E8 1F                  SHR EAX,0x1f
0063A311  03 D0                     ADD EDX,EAX
0063A313  0F BF CA                  MOVSX ECX,DX
0063A316  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
0063A319  EB 13                     JMP 0x0063a32e
LAB_0063a31b:
0063A31B  F7 E9                     IMUL ECX
0063A31D  C1 FA 06                  SAR EDX,0x6
0063A320  8B C2                     MOV EAX,EDX
0063A322  C1 E8 1F                  SHR EAX,0x1f
0063A325  03 D0                     ADD EDX,EAX
0063A327  0F BF C2                  MOVSX EAX,DX
0063A32A  48                        DEC EAX
0063A32B  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
LAB_0063a32e:
0063A32E  8B 8B 6A 02 00 00         MOV ECX,dword ptr [EBX + 0x26a]
0063A334  B8 79 19 8C 02            MOV EAX,0x28c1979
0063A339  85 C9                     TEST ECX,ECX
0063A33B  7C 10                     JL 0x0063a34d
0063A33D  F7 E9                     IMUL ECX
0063A33F  D1 FA                     SAR EDX,0x1
0063A341  8B CA                     MOV ECX,EDX
0063A343  C1 E9 1F                  SHR ECX,0x1f
0063A346  03 D1                     ADD EDX,ECX
0063A348  0F BF FA                  MOVSX EDI,DX
0063A34B  EB 0F                     JMP 0x0063a35c
LAB_0063a34d:
0063A34D  F7 E9                     IMUL ECX
0063A34F  D1 FA                     SAR EDX,0x1
0063A351  8B C2                     MOV EAX,EDX
0063A353  C1 E8 1F                  SHR EAX,0x1f
0063A356  03 D0                     ADD EDX,EAX
0063A358  0F BF FA                  MOVSX EDI,DX
0063A35B  4F                        DEC EDI
LAB_0063a35c:
0063A35C  8B 8B 66 02 00 00         MOV ECX,dword ptr [EBX + 0x266]
0063A362  B8 79 19 8C 02            MOV EAX,0x28c1979
0063A367  85 C9                     TEST ECX,ECX
0063A369  7C 10                     JL 0x0063a37b
0063A36B  F7 E9                     IMUL ECX
0063A36D  D1 FA                     SAR EDX,0x1
0063A36F  8B CA                     MOV ECX,EDX
0063A371  C1 E9 1F                  SHR ECX,0x1f
0063A374  03 D1                     ADD EDX,ECX
0063A376  0F BF C2                  MOVSX EAX,DX
0063A379  EB 0F                     JMP 0x0063a38a
LAB_0063a37b:
0063A37B  F7 E9                     IMUL ECX
0063A37D  D1 FA                     SAR EDX,0x1
0063A37F  8B C2                     MOV EAX,EDX
0063A381  C1 E8 1F                  SHR EAX,0x1f
0063A384  03 D0                     ADD EDX,EAX
0063A386  0F BF C2                  MOVSX EAX,DX
0063A389  48                        DEC EAX
LAB_0063a38a:
0063A38A  80 3D 4D 87 80 00 FF      CMP byte ptr [0x0080874d],0xff
0063A391  74 68                     JZ 0x0063a3fb
0063A393  8B 8E F8 00 00 00         MOV ECX,dword ptr [ESI + 0xf8]
0063A399  85 C9                     TEST ECX,ECX
0063A39B  74 5E                     JZ 0x0063a3fb
0063A39D  8D 4D EC                  LEA ECX,[EBP + -0x14]
0063A3A0  8D 55 E8                  LEA EDX,[EBP + -0x18]
0063A3A3  51                        PUSH ECX
0063A3A4  52                        PUSH EDX
0063A3A5  57                        PUSH EDI
0063A3A6  50                        PUSH EAX
0063A3A7  8B 86 0C 01 00 00         MOV EAX,dword ptr [ESI + 0x10c]
0063A3AD  8B CE                     MOV ECX,ESI
0063A3AF  50                        PUSH EAX
0063A3B0  E8 9E 9B DC FF            CALL 0x00403f53
0063A3B5  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0063A3B8  85 C0                     TEST EAX,EAX
0063A3BA  7C 3F                     JL 0x0063a3fb
0063A3BC  83 F8 05                  CMP EAX,0x5
0063A3BF  7D 3A                     JGE 0x0063a3fb
0063A3C1  8B 7D E8                  MOV EDI,dword ptr [EBP + -0x18]
0063A3C4  85 FF                     TEST EDI,EDI
0063A3C6  7C 33                     JL 0x0063a3fb
0063A3C8  8B 4E 30                  MOV ECX,dword ptr [ESI + 0x30]
0063A3CB  3B F9                     CMP EDI,ECX
0063A3CD  7D 2C                     JGE 0x0063a3fb
0063A3CF  8B 14 85 D0 AE 79 00      MOV EDX,dword ptr [EAX*0x4 + 0x79aed0]
0063A3D6  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
0063A3D9  03 C2                     ADD EAX,EDX
0063A3DB  85 C0                     TEST EAX,EAX
0063A3DD  7C 1C                     JL 0x0063a3fb
0063A3DF  3B 46 34                  CMP EAX,dword ptr [ESI + 0x34]
0063A3E2  7D 17                     JGE 0x0063a3fb
0063A3E4  8B 76 4C                  MOV ESI,dword ptr [ESI + 0x4c]
0063A3E7  85 F6                     TEST ESI,ESI
0063A3E9  74 10                     JZ 0x0063a3fb
0063A3EB  0F AF C1                  IMUL EAX,ECX
0063A3EE  03 C6                     ADD EAX,ESI
0063A3F0  33 C9                     XOR ECX,ECX
0063A3F2  8A 0C 38                  MOV CL,byte ptr [EAX + EDI*0x1]
0063A3F5  8B C1                     MOV EAX,ECX
0063A3F7  85 C0                     TEST EAX,EAX
0063A3F9  74 20                     JZ 0x0063a41b
LAB_0063a3fb:
0063A3FB  8A 83 9F 02 00 00         MOV AL,byte ptr [EBX + 0x29f]
0063A401  84 C0                     TEST AL,AL
0063A403  75 32                     JNZ 0x0063a437
0063A405  6A 00                     PUSH 0x0
0063A407  8D 8B D5 01 00 00         LEA ECX,[EBX + 0x1d5]
0063A40D  E8 70 85 DC FF            CALL 0x00402982
0063A412  C6 83 9F 02 00 00 01      MOV byte ptr [EBX + 0x29f],0x1
0063A419  EB 1C                     JMP 0x0063a437
LAB_0063a41b:
0063A41B  8A 83 9F 02 00 00         MOV AL,byte ptr [EBX + 0x29f]
0063A421  84 C0                     TEST AL,AL
0063A423  74 12                     JZ 0x0063a437
0063A425  8D 8B D5 01 00 00         LEA ECX,[EBX + 0x1d5]
0063A42B  E8 DF 98 DC FF            CALL 0x00403d0f
0063A430  C6 83 9F 02 00 00 00      MOV byte ptr [EBX + 0x29f],0x0
LAB_0063a437:
0063A437  5F                        POP EDI
0063A438  C6 83 65 02 00 00 03      MOV byte ptr [EBX + 0x265],0x3
0063A43F  C7 83 92 02 00 00 13 00 00 00  MOV dword ptr [EBX + 0x292],0x13
0063A449  5E                        POP ESI
0063A44A  33 C0                     XOR EAX,EAX
0063A44C  5B                        POP EBX
0063A44D  8B E5                     MOV ESP,EBP
0063A44F  5D                        POP EBP
0063A450  C2 04 00                  RET 0x4
switchD_00639e3d::caseD_3:
0063A453  8B 15 38 2A 80 00         MOV EDX,dword ptr [0x00802a38]
0063A459  8B CB                     MOV ECX,EBX
0063A45B  8B 82 E4 00 00 00         MOV EAX,dword ptr [EDX + 0xe4]
0063A461  50                        PUSH EAX
0063A462  E8 AC 76 DC FF            CALL 0x00401b13
0063A467  83 CF FF                  OR EDI,0xffffffff
0063A46A  85 C0                     TEST EAX,EAX
0063A46C  0F 8E FA 00 00 00         JLE 0x0063a56c
0063A472  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
0063A478  8B 91 E4 00 00 00         MOV EDX,dword ptr [ECX + 0xe4]
0063A47E  89 93 8E 02 00 00         MOV dword ptr [EBX + 0x28e],EDX
0063A484  C6 83 65 02 00 00 04      MOV byte ptr [EBX + 0x265],0x4
0063A48B  8B 0D 88 2A 80 00         MOV ECX,dword ptr [0x00802a88]
0063A491  85 C9                     TEST ECX,ECX
0063A493  74 73                     JZ 0x0063a508
0063A495  8B 93 6A 02 00 00         MOV EDX,dword ptr [EBX + 0x26a]
0063A49B  B8 79 19 8C 02            MOV EAX,0x28c1979
0063A4A0  85 D2                     TEST EDX,EDX
0063A4A2  7C 10                     JL 0x0063a4b4
0063A4A4  F7 EA                     IMUL EDX
0063A4A6  D1 FA                     SAR EDX,0x1
0063A4A8  8B C2                     MOV EAX,EDX
0063A4AA  C1 E8 1F                  SHR EAX,0x1f
0063A4AD  03 D0                     ADD EDX,EAX
0063A4AF  0F BF F2                  MOVSX ESI,DX
0063A4B2  EB 0F                     JMP 0x0063a4c3
LAB_0063a4b4:
0063A4B4  F7 EA                     IMUL EDX
0063A4B6  D1 FA                     SAR EDX,0x1
0063A4B8  8B C2                     MOV EAX,EDX
0063A4BA  C1 E8 1F                  SHR EAX,0x1f
0063A4BD  03 D0                     ADD EDX,EAX
0063A4BF  0F BF F2                  MOVSX ESI,DX
0063A4C2  4E                        DEC ESI
LAB_0063a4c3:
0063A4C3  8B 93 66 02 00 00         MOV EDX,dword ptr [EBX + 0x266]
0063A4C9  B8 79 19 8C 02            MOV EAX,0x28c1979
0063A4CE  85 D2                     TEST EDX,EDX
0063A4D0  7C 10                     JL 0x0063a4e2
0063A4D2  F7 EA                     IMUL EDX
0063A4D4  D1 FA                     SAR EDX,0x1
0063A4D6  8B C2                     MOV EAX,EDX
0063A4D8  C1 E8 1F                  SHR EAX,0x1f
0063A4DB  03 D0                     ADD EDX,EAX
0063A4DD  0F BF C2                  MOVSX EAX,DX
0063A4E0  EB 0F                     JMP 0x0063a4f1
LAB_0063a4e2:
0063A4E2  F7 EA                     IMUL EDX
0063A4E4  D1 FA                     SAR EDX,0x1
0063A4E6  8B C2                     MOV EAX,EDX
0063A4E8  C1 E8 1F                  SHR EAX,0x1f
0063A4EB  03 D0                     ADD EDX,EAX
0063A4ED  0F BF C2                  MOVSX EAX,DX
0063A4F0  48                        DEC EAX
LAB_0063a4f1:
0063A4F1  8B 93 59 02 00 00         MOV EDX,dword ptr [EBX + 0x259]
0063A4F7  68 71 02 00 00            PUSH 0x271
0063A4FC  6A 05                     PUSH 0x5
0063A4FE  52                        PUSH EDX
0063A4FF  6A 00                     PUSH 0x0
0063A501  56                        PUSH ESI
0063A502  50                        PUSH EAX
0063A503  E8 CA 7A DC FF            CALL 0x00401fd2
LAB_0063a508:
0063A508  66 8B 83 63 02 00 00      MOV AX,word ptr [EBX + 0x263]
0063A50F  66 3B C7                  CMP AX,DI
0063A512  74 1B                     JZ 0x0063a52f
0063A514  0F BF 8B 55 02 00 00      MOVSX ECX,word ptr [EBX + 0x255]
0063A51B  0F BF 93 53 02 00 00      MOVSX EDX,word ptr [EBX + 0x253]
0063A522  0F BF C0                  MOVSX EAX,AX
0063A525  50                        PUSH EAX
0063A526  51                        PUSH ECX
0063A527  52                        PUSH EDX
0063A528  8B CB                     MOV ECX,EBX
0063A52A  E8 D8 81 DC FF            CALL 0x00402707
LAB_0063a52f:
0063A52F  66 8B 83 6E 02 00 00      MOV AX,word ptr [EBX + 0x26e]
0063A536  C7 83 92 02 00 00 41 00 00 00  MOV dword ptr [EBX + 0x292],0x41
0063A540  66 89 83 51 02 00 00      MOV word ptr [EBX + 0x251],AX
0063A547  8B 83 45 02 00 00         MOV EAX,dword ptr [EBX + 0x245]
0063A54D  83 F8 01                  CMP EAX,0x1
0063A550  74 09                     JZ 0x0063a55b
0063A552  85 C0                     TEST EAX,EAX
0063A554  74 05                     JZ 0x0063a55b
0063A556  83 F8 02                  CMP EAX,0x2
0063A559  75 11                     JNZ 0x0063a56c
LAB_0063a55b:
0063A55B  C6 83 65 02 00 00 05      MOV byte ptr [EBX + 0x265],0x5
0063A562  C7 83 92 02 00 00 13 00 00 00  MOV dword ptr [EBX + 0x292],0x13
LAB_0063a56c:
0063A56C  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
0063A572  F6 81 E4 00 00 00 01      TEST byte ptr [ECX + 0xe4],0x1
0063A579  75 7D                     JNZ 0x0063a5f8
0063A57B  8B 53 1C                  MOV EDX,dword ptr [EBX + 0x1c]
0063A57E  6A 00                     PUSH 0x0
0063A580  69 D2 6D 4E C6 41         IMUL EDX,EDX,0x41c64e6d
0063A586  81 C2 39 30 00 00         ADD EDX,0x3039
0063A58C  6A 00                     PUSH 0x0
0063A58E  8B C2                     MOV EAX,EDX
0063A590  89 53 1C                  MOV dword ptr [EBX + 0x1c],EDX
0063A593  69 C0 6D 4E C6 41         IMUL EAX,EAX,0x41c64e6d
0063A599  05 39 30 00 00            ADD EAX,0x3039
0063A59E  57                        PUSH EDI
0063A59F  8B C8                     MOV ECX,EAX
0063A5A1  89 43 1C                  MOV dword ptr [EBX + 0x1c],EAX
0063A5A4  69 C9 6D 4E C6 41         IMUL ECX,ECX,0x41c64e6d
0063A5AA  6A 00                     PUSH 0x0
0063A5AC  6A 00                     PUSH 0x0
0063A5AE  8D 81 39 30 00 00         LEA EAX,[ECX + 0x3039]
0063A5B4  6A 00                     PUSH 0x0
0063A5B6  8B D0                     MOV EDX,EAX
0063A5B8  8B C8                     MOV ECX,EAX
0063A5BA  C1 EA 10                  SHR EDX,0x10
0063A5BD  83 E2 01                  AND EDX,0x1
0063A5C0  6A 00                     PUSH 0x0
0063A5C2  C1 E9 10                  SHR ECX,0x10
0063A5C5  89 43 1C                  MOV dword ptr [EBX + 0x1c],EAX
0063A5C8  52                        PUSH EDX
0063A5C9  8B 93 6E 02 00 00         MOV EDX,dword ptr [EBX + 0x26e]
0063A5CF  83 E1 01                  AND ECX,0x1
0063A5D2  51                        PUSH ECX
0063A5D3  8B 8B 6A 02 00 00         MOV ECX,dword ptr [EBX + 0x26a]
0063A5D9  52                        PUSH EDX
0063A5DA  8B 93 66 02 00 00         MOV EDX,dword ptr [EBX + 0x266]
0063A5E0  C1 E8 10                  SHR EAX,0x10
0063A5E3  51                        PUSH ECX
0063A5E4  8B 0D 7C 2A 80 00         MOV ECX,dword ptr [0x00802a7c]
0063A5EA  83 E0 01                  AND EAX,0x1
0063A5ED  52                        PUSH EDX
0063A5EE  50                        PUSH EAX
0063A5EF  6A 01                     PUSH 0x1
0063A5F1  6A 01                     PUSH 0x1
0063A5F3  E8 3B 6E DC FF            CALL 0x00401433
LAB_0063a5f8:
0063A5F8  66 8B 83 6E 02 00 00      MOV AX,word ptr [EBX + 0x26e]
0063A5FF  66 8B 8B 6A 02 00 00      MOV CX,word ptr [EBX + 0x26a]
0063A606  66 8B 93 66 02 00 00      MOV DX,word ptr [EBX + 0x266]
0063A60D  50                        PUSH EAX
0063A60E  51                        PUSH ECX
0063A60F  52                        PUSH EDX
0063A610  8B CB                     MOV ECX,EBX
0063A612  E8 F0 8A DC FF            CALL 0x00403107
0063A617  8B 03                     MOV EAX,dword ptr [EBX]
0063A619  8B CB                     MOV ECX,EBX
0063A61B  FF 90 D8 00 00 00         CALL dword ptr [EAX + 0xd8]
0063A621  8B 35 88 2A 80 00         MOV ESI,dword ptr [0x00802a88]
0063A627  85 F6                     TEST ESI,ESI
0063A629  0F 84 F9 11 00 00         JZ 0x0063b828
0063A62F  8B 8B 6E 02 00 00         MOV ECX,dword ptr [EBX + 0x26e]
0063A635  B8 1F 85 EB 51            MOV EAX,0x51eb851f
0063A63A  85 C9                     TEST ECX,ECX
0063A63C  7C 14                     JL 0x0063a652
0063A63E  F7 E9                     IMUL ECX
0063A640  C1 FA 06                  SAR EDX,0x6
0063A643  8B CA                     MOV ECX,EDX
0063A645  C1 E9 1F                  SHR ECX,0x1f
0063A648  03 D1                     ADD EDX,ECX
0063A64A  0F BF D2                  MOVSX EDX,DX
0063A64D  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
0063A650  EB 13                     JMP 0x0063a665
LAB_0063a652:
0063A652  F7 E9                     IMUL ECX
0063A654  C1 FA 06                  SAR EDX,0x6
0063A657  8B C2                     MOV EAX,EDX
0063A659  C1 E8 1F                  SHR EAX,0x1f
0063A65C  03 D0                     ADD EDX,EAX
0063A65E  0F BF C2                  MOVSX EAX,DX
0063A661  48                        DEC EAX
0063A662  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
LAB_0063a665:
0063A665  8B 8B 6A 02 00 00         MOV ECX,dword ptr [EBX + 0x26a]
0063A66B  B8 79 19 8C 02            MOV EAX,0x28c1979
0063A670  85 C9                     TEST ECX,ECX
0063A672  7C 10                     JL 0x0063a684
0063A674  F7 E9                     IMUL ECX
0063A676  D1 FA                     SAR EDX,0x1
0063A678  8B CA                     MOV ECX,EDX
0063A67A  C1 E9 1F                  SHR ECX,0x1f
0063A67D  03 D1                     ADD EDX,ECX
0063A67F  0F BF FA                  MOVSX EDI,DX
0063A682  EB 0F                     JMP 0x0063a693
LAB_0063a684:
0063A684  F7 E9                     IMUL ECX
0063A686  D1 FA                     SAR EDX,0x1
0063A688  8B C2                     MOV EAX,EDX
0063A68A  C1 E8 1F                  SHR EAX,0x1f
0063A68D  03 D0                     ADD EDX,EAX
0063A68F  0F BF FA                  MOVSX EDI,DX
0063A692  4F                        DEC EDI
LAB_0063a693:
0063A693  8B 8B 66 02 00 00         MOV ECX,dword ptr [EBX + 0x266]
0063A699  B8 79 19 8C 02            MOV EAX,0x28c1979
0063A69E  85 C9                     TEST ECX,ECX
0063A6A0  7C 10                     JL 0x0063a6b2
0063A6A2  F7 E9                     IMUL ECX
0063A6A4  D1 FA                     SAR EDX,0x1
0063A6A6  8B CA                     MOV ECX,EDX
0063A6A8  C1 E9 1F                  SHR ECX,0x1f
0063A6AB  03 D1                     ADD EDX,ECX
0063A6AD  0F BF C2                  MOVSX EAX,DX
0063A6B0  EB 0F                     JMP 0x0063a6c1
LAB_0063a6b2:
0063A6B2  F7 E9                     IMUL ECX
0063A6B4  D1 FA                     SAR EDX,0x1
0063A6B6  8B C2                     MOV EAX,EDX
0063A6B8  C1 E8 1F                  SHR EAX,0x1f
0063A6BB  03 D0                     ADD EDX,EAX
0063A6BD  0F BF C2                  MOVSX EAX,DX
0063A6C0  48                        DEC EAX
LAB_0063a6c1:
0063A6C1  80 3D 4D 87 80 00 FF      CMP byte ptr [0x0080874d],0xff
0063A6C8  0F 84 76 FA FF FF         JZ 0x0063a144
0063A6CE  8B 8E F8 00 00 00         MOV ECX,dword ptr [ESI + 0xf8]
0063A6D4  85 C9                     TEST ECX,ECX
0063A6D6  0F 84 68 FA FF FF         JZ 0x0063a144
0063A6DC  8D 4D EC                  LEA ECX,[EBP + -0x14]
0063A6DF  8D 55 E8                  LEA EDX,[EBP + -0x18]
0063A6E2  51                        PUSH ECX
0063A6E3  52                        PUSH EDX
0063A6E4  57                        PUSH EDI
0063A6E5  50                        PUSH EAX
0063A6E6  8B 86 0C 01 00 00         MOV EAX,dword ptr [ESI + 0x10c]
0063A6EC  8B CE                     MOV ECX,ESI
0063A6EE  50                        PUSH EAX
0063A6EF  E8 5F 98 DC FF            CALL 0x00403f53
0063A6F4  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0063A6F7  85 C0                     TEST EAX,EAX
0063A6F9  0F 8C 45 FA FF FF         JL 0x0063a144
0063A6FF  83 F8 05                  CMP EAX,0x5
0063A702  0F 8D 3C FA FF FF         JGE 0x0063a144
0063A708  8B 55 E8                  MOV EDX,dword ptr [EBP + -0x18]
0063A70B  85 D2                     TEST EDX,EDX
0063A70D  0F 8C 31 FA FF FF         JL 0x0063a144
0063A713  8B 4E 30                  MOV ECX,dword ptr [ESI + 0x30]
0063A716  3B D1                     CMP EDX,ECX
0063A718  0F 8D 26 FA FF FF         JGE 0x0063a144
0063A71E  8B 04 85 D0 AE 79 00      MOV EAX,dword ptr [EAX*0x4 + 0x79aed0]
0063A725  8B 7D EC                  MOV EDI,dword ptr [EBP + -0x14]
LAB_0063a728:
0063A728  03 C7                     ADD EAX,EDI
0063A72A  85 C0                     TEST EAX,EAX
0063A72C  0F 8C 12 FA FF FF         JL 0x0063a144
0063A732  3B 46 34                  CMP EAX,dword ptr [ESI + 0x34]
0063A735  0F 8D 09 FA FF FF         JGE 0x0063a144
0063A73B  8B 76 4C                  MOV ESI,dword ptr [ESI + 0x4c]
0063A73E  85 F6                     TEST ESI,ESI
0063A740  0F 84 FE F9 FF FF         JZ 0x0063a144
0063A746  0F AF C1                  IMUL EAX,ECX
0063A749  03 C2                     ADD EAX,EDX
0063A74B  33 C9                     XOR ECX,ECX
0063A74D  8A 0C 30                  MOV CL,byte ptr [EAX + ESI*0x1]
0063A750  8B C1                     MOV EAX,ECX
0063A752  85 C0                     TEST EAX,EAX
0063A754  0F 84 17 FA FF FF         JZ 0x0063a171
0063A75A  E9 E5 F9 FF FF            JMP 0x0063a144
switchD_00639e3d::caseD_5:
0063A75F  8B 15 38 2A 80 00         MOV EDX,dword ptr [0x00802a38]
0063A765  8B CB                     MOV ECX,EBX
0063A767  8B 82 E4 00 00 00         MOV EAX,dword ptr [EDX + 0xe4]
0063A76D  50                        PUSH EAX
0063A76E  E8 DB B5 DC FF            CALL 0x00405d4e
0063A773  85 C0                     TEST EAX,EAX
0063A775  0F 85 06 02 00 00         JNZ 0x0063a981
0063A77B  66 8B 8B 6E 02 00 00      MOV CX,word ptr [EBX + 0x26e]
0063A782  66 8B 93 6A 02 00 00      MOV DX,word ptr [EBX + 0x26a]
0063A789  66 8B 83 66 02 00 00      MOV AX,word ptr [EBX + 0x266]
0063A790  51                        PUSH ECX
0063A791  52                        PUSH EDX
0063A792  50                        PUSH EAX
0063A793  8B CB                     MOV ECX,EBX
0063A795  E8 6D 89 DC FF            CALL 0x00403107
0063A79A  8B 13                     MOV EDX,dword ptr [EBX]
0063A79C  8B CB                     MOV ECX,EBX
0063A79E  FF 92 D8 00 00 00         CALL dword ptr [EDX + 0xd8]
0063A7A4  8B 35 88 2A 80 00         MOV ESI,dword ptr [0x00802a88]
0063A7AA  85 F6                     TEST ESI,ESI
0063A7AC  0F 84 3F 01 00 00         JZ 0x0063a8f1
0063A7B2  8B 8B 6E 02 00 00         MOV ECX,dword ptr [EBX + 0x26e]
0063A7B8  B8 1F 85 EB 51            MOV EAX,0x51eb851f
0063A7BD  85 C9                     TEST ECX,ECX
0063A7BF  7C 14                     JL 0x0063a7d5
0063A7C1  F7 E9                     IMUL ECX
0063A7C3  C1 FA 06                  SAR EDX,0x6
0063A7C6  8B C2                     MOV EAX,EDX
0063A7C8  C1 E8 1F                  SHR EAX,0x1f
0063A7CB  03 D0                     ADD EDX,EAX
0063A7CD  0F BF CA                  MOVSX ECX,DX
0063A7D0  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
0063A7D3  EB 13                     JMP 0x0063a7e8
LAB_0063a7d5:
0063A7D5  F7 E9                     IMUL ECX
0063A7D7  C1 FA 06                  SAR EDX,0x6
0063A7DA  8B C2                     MOV EAX,EDX
0063A7DC  C1 E8 1F                  SHR EAX,0x1f
0063A7DF  03 D0                     ADD EDX,EAX
0063A7E1  0F BF C2                  MOVSX EAX,DX
0063A7E4  48                        DEC EAX
0063A7E5  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
LAB_0063a7e8:
0063A7E8  8B 8B 6A 02 00 00         MOV ECX,dword ptr [EBX + 0x26a]
0063A7EE  B8 79 19 8C 02            MOV EAX,0x28c1979
0063A7F3  85 C9                     TEST ECX,ECX
0063A7F5  7C 10                     JL 0x0063a807
0063A7F7  F7 E9                     IMUL ECX
0063A7F9  D1 FA                     SAR EDX,0x1
0063A7FB  8B CA                     MOV ECX,EDX
0063A7FD  C1 E9 1F                  SHR ECX,0x1f
0063A800  03 D1                     ADD EDX,ECX
0063A802  0F BF FA                  MOVSX EDI,DX
0063A805  EB 0F                     JMP 0x0063a816
LAB_0063a807:
0063A807  F7 E9                     IMUL ECX
0063A809  D1 FA                     SAR EDX,0x1
0063A80B  8B C2                     MOV EAX,EDX
0063A80D  C1 E8 1F                  SHR EAX,0x1f
0063A810  03 D0                     ADD EDX,EAX
0063A812  0F BF FA                  MOVSX EDI,DX
0063A815  4F                        DEC EDI
LAB_0063a816:
0063A816  8B 8B 66 02 00 00         MOV ECX,dword ptr [EBX + 0x266]
0063A81C  B8 79 19 8C 02            MOV EAX,0x28c1979
0063A821  85 C9                     TEST ECX,ECX
0063A823  7C 10                     JL 0x0063a835
0063A825  F7 E9                     IMUL ECX
0063A827  D1 FA                     SAR EDX,0x1
0063A829  8B CA                     MOV ECX,EDX
0063A82B  C1 E9 1F                  SHR ECX,0x1f
0063A82E  03 D1                     ADD EDX,ECX
0063A830  0F BF C2                  MOVSX EAX,DX
0063A833  EB 0F                     JMP 0x0063a844
LAB_0063a835:
0063A835  F7 E9                     IMUL ECX
0063A837  D1 FA                     SAR EDX,0x1
0063A839  8B C2                     MOV EAX,EDX
0063A83B  C1 E8 1F                  SHR EAX,0x1f
0063A83E  03 D0                     ADD EDX,EAX
0063A840  0F BF C2                  MOVSX EAX,DX
0063A843  48                        DEC EAX
LAB_0063a844:
0063A844  80 3D 4D 87 80 00 FF      CMP byte ptr [0x0080874d],0xff
0063A84B  74 68                     JZ 0x0063a8b5
0063A84D  8B 8E F8 00 00 00         MOV ECX,dword ptr [ESI + 0xf8]
0063A853  85 C9                     TEST ECX,ECX
0063A855  74 5E                     JZ 0x0063a8b5
0063A857  8D 4D EC                  LEA ECX,[EBP + -0x14]
0063A85A  8D 55 E8                  LEA EDX,[EBP + -0x18]
0063A85D  51                        PUSH ECX
0063A85E  52                        PUSH EDX
0063A85F  57                        PUSH EDI
0063A860  50                        PUSH EAX
0063A861  8B 86 0C 01 00 00         MOV EAX,dword ptr [ESI + 0x10c]
0063A867  8B CE                     MOV ECX,ESI
0063A869  50                        PUSH EAX
0063A86A  E8 E4 96 DC FF            CALL 0x00403f53
0063A86F  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0063A872  85 C0                     TEST EAX,EAX
0063A874  7C 3F                     JL 0x0063a8b5
0063A876  83 F8 05                  CMP EAX,0x5
0063A879  7D 3A                     JGE 0x0063a8b5
0063A87B  8B 55 E8                  MOV EDX,dword ptr [EBP + -0x18]
0063A87E  85 D2                     TEST EDX,EDX
0063A880  7C 33                     JL 0x0063a8b5
0063A882  8B 4E 30                  MOV ECX,dword ptr [ESI + 0x30]
0063A885  3B D1                     CMP EDX,ECX
0063A887  7D 2C                     JGE 0x0063a8b5
0063A889  8B 04 85 D0 AE 79 00      MOV EAX,dword ptr [EAX*0x4 + 0x79aed0]
0063A890  8B 7D EC                  MOV EDI,dword ptr [EBP + -0x14]
0063A893  03 C7                     ADD EAX,EDI
0063A895  85 C0                     TEST EAX,EAX
0063A897  7C 1C                     JL 0x0063a8b5
0063A899  3B 46 34                  CMP EAX,dword ptr [ESI + 0x34]
0063A89C  7D 17                     JGE 0x0063a8b5
0063A89E  8B 76 4C                  MOV ESI,dword ptr [ESI + 0x4c]
0063A8A1  85 F6                     TEST ESI,ESI
0063A8A3  74 10                     JZ 0x0063a8b5
0063A8A5  0F AF C1                  IMUL EAX,ECX
0063A8A8  03 C2                     ADD EAX,EDX
0063A8AA  33 C9                     XOR ECX,ECX
0063A8AC  8A 0C 30                  MOV CL,byte ptr [EAX + ESI*0x1]
0063A8AF  8B C1                     MOV EAX,ECX
0063A8B1  85 C0                     TEST EAX,EAX
0063A8B3  74 20                     JZ 0x0063a8d5
LAB_0063a8b5:
0063A8B5  8A 83 9F 02 00 00         MOV AL,byte ptr [EBX + 0x29f]
0063A8BB  84 C0                     TEST AL,AL
0063A8BD  75 32                     JNZ 0x0063a8f1
0063A8BF  6A 00                     PUSH 0x0
0063A8C1  8D 8B D5 01 00 00         LEA ECX,[EBX + 0x1d5]
0063A8C7  E8 B6 80 DC FF            CALL 0x00402982
0063A8CC  C6 83 9F 02 00 00 01      MOV byte ptr [EBX + 0x29f],0x1
0063A8D3  EB 1C                     JMP 0x0063a8f1
LAB_0063a8d5:
0063A8D5  8A 83 9F 02 00 00         MOV AL,byte ptr [EBX + 0x29f]
0063A8DB  84 C0                     TEST AL,AL
0063A8DD  74 12                     JZ 0x0063a8f1
0063A8DF  8D 8B D5 01 00 00         LEA ECX,[EBX + 0x1d5]
0063A8E5  E8 25 94 DC FF            CALL 0x00403d0f
0063A8EA  C6 83 9F 02 00 00 00      MOV byte ptr [EBX + 0x29f],0x0
LAB_0063a8f1:
0063A8F1  8B 53 1C                  MOV EDX,dword ptr [EBX + 0x1c]
0063A8F4  6A 00                     PUSH 0x0
0063A8F6  69 D2 6D 4E C6 41         IMUL EDX,EDX,0x41c64e6d
0063A8FC  81 C2 39 30 00 00         ADD EDX,0x3039
0063A902  6A 00                     PUSH 0x0
0063A904  8B C2                     MOV EAX,EDX
0063A906  89 53 1C                  MOV dword ptr [EBX + 0x1c],EDX
0063A909  69 C0 6D 4E C6 41         IMUL EAX,EAX,0x41c64e6d
0063A90F  05 39 30 00 00            ADD EAX,0x3039
0063A914  6A FF                     PUSH -0x1
0063A916  8B C8                     MOV ECX,EAX
0063A918  89 43 1C                  MOV dword ptr [EBX + 0x1c],EAX
0063A91B  69 C9 6D 4E C6 41         IMUL ECX,ECX,0x41c64e6d
0063A921  6A 00                     PUSH 0x0
0063A923  6A 00                     PUSH 0x0
0063A925  8D 81 39 30 00 00         LEA EAX,[ECX + 0x3039]
0063A92B  6A 00                     PUSH 0x0
0063A92D  8B D0                     MOV EDX,EAX
0063A92F  8B C8                     MOV ECX,EAX
0063A931  C1 EA 10                  SHR EDX,0x10
0063A934  83 E2 01                  AND EDX,0x1
0063A937  6A 00                     PUSH 0x0
0063A939  C1 E9 10                  SHR ECX,0x10
0063A93C  89 43 1C                  MOV dword ptr [EBX + 0x1c],EAX
0063A93F  52                        PUSH EDX
0063A940  8B 93 6E 02 00 00         MOV EDX,dword ptr [EBX + 0x26e]
0063A946  83 E1 01                  AND ECX,0x1
0063A949  51                        PUSH ECX
0063A94A  8B 8B 6A 02 00 00         MOV ECX,dword ptr [EBX + 0x26a]
0063A950  52                        PUSH EDX
0063A951  8B 93 66 02 00 00         MOV EDX,dword ptr [EBX + 0x266]
0063A957  C1 E8 10                  SHR EAX,0x10
0063A95A  51                        PUSH ECX
0063A95B  8B 0D 7C 2A 80 00         MOV ECX,dword ptr [0x00802a7c]
0063A961  83 E0 01                  AND EAX,0x1
0063A964  52                        PUSH EDX
0063A965  50                        PUSH EAX
0063A966  6A 01                     PUSH 0x1
0063A968  6A 01                     PUSH 0x1
0063A96A  E8 C4 6A DC FF            CALL 0x00401433
0063A96F  8B CB                     MOV ECX,EBX
0063A971  E8 4A 88 DC FF            CALL 0x004031c0
0063A976  5F                        POP EDI
0063A977  5E                        POP ESI
0063A978  33 C0                     XOR EAX,EAX
0063A97A  5B                        POP EBX
0063A97B  8B E5                     MOV ESP,EBP
0063A97D  5D                        POP EBP
0063A97E  C2 04 00                  RET 0x4
LAB_0063a981:
0063A981  8B 83 7A 02 00 00         MOV EAX,dword ptr [EBX + 0x27a]
0063A987  6A 0D                     PUSH 0xd
0063A989  83 C0 64                  ADD EAX,0x64
0063A98C  8D 8B D5 01 00 00         LEA ECX,[EBX + 0x1d5]
0063A992  89 83 6E 02 00 00         MOV dword ptr [EBX + 0x26e],EAX
0063A998  E8 C7 98 DC FF            CALL 0x00404264
0063A99D  8B 83 45 02 00 00         MOV EAX,dword ptr [EBX + 0x245]
0063A9A3  83 F8 01                  CMP EAX,0x1
0063A9A6  0F 86 B4 00 00 00         JBE 0x0063aa60
0063A9AC  83 F8 02                  CMP EAX,0x2
0063A9AF  0F 85 73 0E 00 00         JNZ 0x0063b828
0063A9B5  6A 01                     PUSH 0x1
0063A9B7  8B CB                     MOV ECX,EBX
0063A9B9  E8 F7 A6 DC FF            CALL 0x004050b5
0063A9BE  85 C0                     TEST EAX,EAX
0063A9C0  74 0E                     JZ 0x0063a9d0
0063A9C2  5F                        POP EDI
0063A9C3  5E                        POP ESI
0063A9C4  B8 FF FF 00 00            MOV EAX,0xffff
0063A9C9  5B                        POP EBX
0063A9CA  8B E5                     MOV ESP,EBP
0063A9CC  5D                        POP EBP
0063A9CD  C2 04 00                  RET 0x4
LAB_0063a9d0:
0063A9D0  68 68 01 00 00            PUSH 0x168
0063A9D5  8B CB                     MOV ECX,EBX
0063A9D7  E8 C5 B0 DC FF            CALL 0x00405aa1
0063A9DC  85 C0                     TEST EAX,EAX
0063A9DE  7C 30                     JL 0x0063aa10
0063A9E0  8B 8B 6E 02 00 00         MOV ECX,dword ptr [EBX + 0x26e]
0063A9E6  8B 93 6A 02 00 00         MOV EDX,dword ptr [EBX + 0x26a]
0063A9EC  8B 83 66 02 00 00         MOV EAX,dword ptr [EBX + 0x266]
0063A9F2  6A 0B                     PUSH 0xb
0063A9F4  51                        PUSH ECX
0063A9F5  52                        PUSH EDX
0063A9F6  50                        PUSH EAX
0063A9F7  8B CB                     MOV ECX,EBX
0063A9F9  E8 F5 72 DC FF            CALL 0x00401cf3
0063A9FE  6A 0B                     PUSH 0xb
0063AA00  8B CB                     MOV ECX,EBX
0063AA02  E8 49 8E DC FF            CALL 0x00403850
0063AA07  6A 01                     PUSH 0x1
0063AA09  8B CB                     MOV ECX,EBX
0063AA0B  E8 C8 74 DC FF            CALL 0x00401ed8
LAB_0063aa10:
0063AA10  8B 83 3A 03 00 00         MOV EAX,dword ptr [EBX + 0x33a]
0063AA16  85 C0                     TEST EAX,EAX
0063AA18  7C 28                     JL 0x0063aa42
0063AA1A  8A 8B 46 03 00 00         MOV CL,byte ptr [EBX + 0x346]
0063AA20  84 C9                     TEST CL,CL
0063AA22  75 1E                     JNZ 0x0063aa42
0063AA24  8B 8B 11 02 00 00         MOV ECX,dword ptr [EBX + 0x211]
0063AA2A  6A 00                     PUSH 0x0
0063AA2C  50                        PUSH EAX
0063AA2D  E8 6E 00 0B 00            CALL 0x006eaaa0
0063AA32  6A 01                     PUSH 0x1
0063AA34  8B CB                     MOV ECX,EBX
0063AA36  C6 83 46 03 00 00 01      MOV byte ptr [EBX + 0x346],0x1
0063AA3D  E8 D4 72 DC FF            CALL 0x00401d16
LAB_0063aa42:
0063AA42  68 9B 04 00 00            PUSH 0x49b
0063AA47  8B CB                     MOV ECX,EBX
0063AA49  C6 83 65 02 00 00 0A      MOV byte ptr [EBX + 0x265],0xa
0063AA50  E8 42 8D DC FF            CALL 0x00403797
0063AA55  5F                        POP EDI
0063AA56  5E                        POP ESI
0063AA57  33 C0                     XOR EAX,EAX
0063AA59  5B                        POP EBX
0063AA5A  8B E5                     MOV ESP,EBP
0063AA5C  5D                        POP EBP
0063AA5D  C2 04 00                  RET 0x4
LAB_0063aa60:
0063AA60  6A 01                     PUSH 0x1
0063AA62  8B CB                     MOV ECX,EBX
0063AA64  E8 0F 84 DC FF            CALL 0x00402e78
0063AA69  85 C0                     TEST EAX,EAX
0063AA6B  74 0E                     JZ 0x0063aa7b
0063AA6D  5F                        POP EDI
0063AA6E  5E                        POP ESI
0063AA6F  B8 FF FF 00 00            MOV EAX,0xffff
0063AA74  5B                        POP EBX
0063AA75  8B E5                     MOV ESP,EBP
0063AA77  5D                        POP EBP
0063AA78  C2 04 00                  RET 0x4
LAB_0063aa7b:
0063AA7B  68 F4 01 00 00            PUSH 0x1f4
0063AA80  8B CB                     MOV ECX,EBX
0063AA82  E8 1A B0 DC FF            CALL 0x00405aa1
0063AA87  85 C0                     TEST EAX,EAX
0063AA89  7C 30                     JL 0x0063aabb
0063AA8B  8B 8B 6E 02 00 00         MOV ECX,dword ptr [EBX + 0x26e]
0063AA91  8B 93 6A 02 00 00         MOV EDX,dword ptr [EBX + 0x26a]
0063AA97  8B 83 66 02 00 00         MOV EAX,dword ptr [EBX + 0x266]
0063AA9D  6A 0A                     PUSH 0xa
0063AA9F  51                        PUSH ECX
0063AAA0  52                        PUSH EDX
0063AAA1  50                        PUSH EAX
0063AAA2  8B CB                     MOV ECX,EBX
0063AAA4  E8 4A 72 DC FF            CALL 0x00401cf3
0063AAA9  6A 0A                     PUSH 0xa
0063AAAB  8B CB                     MOV ECX,EBX
0063AAAD  E8 9E 8D DC FF            CALL 0x00403850
0063AAB2  6A 01                     PUSH 0x1
0063AAB4  8B CB                     MOV ECX,EBX
0063AAB6  E8 1D 74 DC FF            CALL 0x00401ed8
LAB_0063aabb:
0063AABB  5F                        POP EDI
0063AABC  C6 83 65 02 00 00 09      MOV byte ptr [EBX + 0x265],0x9
0063AAC3  5E                        POP ESI
0063AAC4  33 C0                     XOR EAX,EAX
0063AAC6  5B                        POP EBX
0063AAC7  8B E5                     MOV ESP,EBP
0063AAC9  5D                        POP EBP
0063AACA  C2 04 00                  RET 0x4
switchD_00639e3d::caseD_9:
0063AACD  8B 8B 4B 03 00 00         MOV ECX,dword ptr [EBX + 0x34b]
0063AAD3  85 C9                     TEST ECX,ECX
0063AAD5  0F 84 EB 01 00 00         JZ 0x0063acc6
0063AADB  8B 83 4F 03 00 00         MOV EAX,dword ptr [EBX + 0x34f]
0063AAE1  83 F8 02                  CMP EAX,0x2
0063AAE4  7D 6D                     JGE 0x0063ab53
0063AAE6  DB 83 6E 02 00 00         FILD dword ptr [EBX + 0x26e]
0063AAEC  51                        PUSH ECX
0063AAED  8B 04 85 D4 1F 7D 00      MOV EAX,dword ptr [EAX*0x4 + 0x7d1fd4]
0063AAF4  C1 E0 08                  SHL EAX,0x8
0063AAF7  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
0063AAFD  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
0063AB03  D8 05 FC 04 79 00         FADD float ptr [0x007904fc]
0063AB09  D9 1C 24                  FSTP float ptr [ESP]
0063AB0C  DB 83 6A 02 00 00         FILD dword ptr [EBX + 0x26a]
0063AB12  51                        PUSH ECX
0063AB13  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
0063AB19  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
0063AB1F  D9 1C 24                  FSTP float ptr [ESP]
0063AB22  DB 83 66 02 00 00         FILD dword ptr [EBX + 0x266]
0063AB28  51                        PUSH ECX
0063AB29  8B 49 21                  MOV ECX,dword ptr [ECX + 0x21]
0063AB2C  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
0063AB32  8B 11                     MOV EDX,dword ptr [ECX]
0063AB34  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
0063AB3A  D9 1C 24                  FSTP float ptr [ESP]
0063AB3D  68 F7 00 00 00            PUSH 0xf7
0063AB42  68 08 01 00 00            PUSH 0x108
0063AB47  52                        PUSH EDX
0063AB48  8B 15 CC 32 80 00         MOV EDX,dword ptr [0x008032cc]
0063AB4E  03 C2                     ADD EAX,EDX
0063AB50  50                        PUSH EAX
0063AB51  EB 1F                     JMP 0x0063ab72
LAB_0063ab53:
0063AB53  8B 0C 85 D4 1F 7D 00      MOV ECX,dword ptr [EAX*0x4 + 0x7d1fd4]
0063AB5A  8B 15 CC 32 80 00         MOV EDX,dword ptr [0x008032cc]
0063AB60  6A 00                     PUSH 0x0
0063AB62  6A 00                     PUSH 0x0
0063AB64  6A 00                     PUSH 0x0
0063AB66  6A 00                     PUSH 0x0
0063AB68  C1 E1 08                  SHL ECX,0x8
0063AB6B  6A 00                     PUSH 0x0
0063AB6D  03 CA                     ADD ECX,EDX
0063AB6F  6A 00                     PUSH 0x0
0063AB71  51                        PUSH ECX
LAB_0063ab72:
0063AB72  8B 8B 11 02 00 00         MOV ECX,dword ptr [EBX + 0x211]
0063AB78  E8 C3 01 0B 00            CALL 0x006ead40
0063AB7D  83 BB 4F 03 00 00 02      CMP dword ptr [EBX + 0x34f],0x2
0063AB84  75 78                     JNZ 0x0063abfe
0063AB86  8B 8B 6A 02 00 00         MOV ECX,dword ptr [EBX + 0x26a]
0063AB8C  B8 79 19 8C 02            MOV EAX,0x28c1979
0063AB91  85 C9                     TEST ECX,ECX
0063AB93  7C 10                     JL 0x0063aba5
0063AB95  F7 E9                     IMUL ECX
0063AB97  D1 FA                     SAR EDX,0x1
0063AB99  8B C2                     MOV EAX,EDX
0063AB9B  C1 E8 1F                  SHR EAX,0x1f
0063AB9E  03 D0                     ADD EDX,EAX
0063ABA0  0F BF CA                  MOVSX ECX,DX
0063ABA3  EB 0F                     JMP 0x0063abb4
LAB_0063aba5:
0063ABA5  F7 E9                     IMUL ECX
0063ABA7  D1 FA                     SAR EDX,0x1
0063ABA9  8B CA                     MOV ECX,EDX
0063ABAB  C1 E9 1F                  SHR ECX,0x1f
0063ABAE  03 D1                     ADD EDX,ECX
0063ABB0  0F BF CA                  MOVSX ECX,DX
0063ABB3  49                        DEC ECX
LAB_0063abb4:
0063ABB4  8B 93 66 02 00 00         MOV EDX,dword ptr [EBX + 0x266]
0063ABBA  B8 79 19 8C 02            MOV EAX,0x28c1979
0063ABBF  85 D2                     TEST EDX,EDX
0063ABC1  7C 10                     JL 0x0063abd3
0063ABC3  F7 EA                     IMUL EDX
0063ABC5  D1 FA                     SAR EDX,0x1
0063ABC7  8B C2                     MOV EAX,EDX
0063ABC9  C1 E8 1F                  SHR EAX,0x1f
0063ABCC  03 D0                     ADD EDX,EAX
0063ABCE  0F BF C2                  MOVSX EAX,DX
0063ABD1  EB 0F                     JMP 0x0063abe2
LAB_0063abd3:
0063ABD3  F7 EA                     IMUL EDX
0063ABD5  D1 FA                     SAR EDX,0x1
0063ABD7  8B C2                     MOV EAX,EDX
0063ABD9  C1 E8 1F                  SHR EAX,0x1f
0063ABDC  03 D0                     ADD EDX,EAX
0063ABDE  0F BF C2                  MOVSX EAX,DX
0063ABE1  48                        DEC EAX
LAB_0063abe2:
0063ABE2  68 A0 0F 00 00            PUSH 0xfa0
0063ABE7  6A 02                     PUSH 0x2
0063ABE9  51                        PUSH ECX
0063ABEA  50                        PUSH EAX
0063ABEB  8B CB                     MOV ECX,EBX
0063ABED  E8 B2 79 DC FF            CALL 0x004025a4
0063ABF2  68 62 04 00 00            PUSH 0x462
0063ABF7  8B CB                     MOV ECX,EBX
0063ABF9  E8 99 8B DC FF            CALL 0x00403797
LAB_0063abfe:
0063ABFE  39 BB 4F 03 00 00         CMP dword ptr [EBX + 0x34f],EDI
0063AC04  75 18                     JNZ 0x0063ac1e
0063AC06  8B 83 3A 03 00 00         MOV EAX,dword ptr [EBX + 0x33a]
0063AC0C  85 C0                     TEST EAX,EAX
0063AC0E  7C 0E                     JL 0x0063ac1e
0063AC10  8B 8B 11 02 00 00         MOV ECX,dword ptr [EBX + 0x211]
0063AC16  6A 00                     PUSH 0x0
0063AC18  50                        PUSH EAX
0063AC19  E8 82 FE 0A 00            CALL 0x006eaaa0
LAB_0063ac1e:
0063AC1E  8B 8B 4F 03 00 00         MOV ECX,dword ptr [EBX + 0x34f]
0063AC24  41                        INC ECX
0063AC25  8B C1                     MOV EAX,ECX
0063AC27  89 8B 4F 03 00 00         MOV dword ptr [EBX + 0x34f],ECX
0063AC2D  83 F8 07                  CMP EAX,0x7
0063AC30  75 14                     JNZ 0x0063ac46
0063AC32  8B 0D A8 75 80 00         MOV ECX,dword ptr [0x008075a8]
0063AC38  68 F8 1F 7D 00            PUSH 0x7d1ff8
0063AC3D  57                        PUSH EDI
0063AC3E  6A 02                     PUSH 0x2
0063AC40  51                        PUSH ECX
0063AC41  E8 6A D7 08 00            CALL 0x006c83b0
LAB_0063ac46:
0063AC46  83 BB 4F 03 00 00 08      CMP dword ptr [EBX + 0x34f],0x8
0063AC4D  7E 6B                     JLE 0x0063acba
0063AC4F  DB 83 6E 02 00 00         FILD dword ptr [EBX + 0x26e]
0063AC55  51                        PUSH ECX
0063AC56  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
0063AC5C  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
0063AC62  D8 05 FC 04 79 00         FADD float ptr [0x007904fc]
0063AC68  D9 1C 24                  FSTP float ptr [ESP]
0063AC6B  DB 83 6A 02 00 00         FILD dword ptr [EBX + 0x26a]
0063AC71  51                        PUSH ECX
0063AC72  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
0063AC78  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
0063AC7E  D9 1C 24                  FSTP float ptr [ESP]
0063AC81  DB 83 66 02 00 00         FILD dword ptr [EBX + 0x266]
0063AC87  51                        PUSH ECX
0063AC88  8B 8B 11 02 00 00         MOV ECX,dword ptr [EBX + 0x211]
0063AC8E  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
0063AC94  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
0063AC9A  D9 1C 24                  FSTP float ptr [ESP]
0063AC9D  68 F7 00 00 00            PUSH 0xf7
0063ACA2  68 08 01 00 00            PUSH 0x108
0063ACA7  6A 00                     PUSH 0x0
0063ACA9  6A 00                     PUSH 0x0
0063ACAB  E8 90 00 0B 00            CALL 0x006ead40
0063ACB0  C7 83 4B 03 00 00 00 00 00 00  MOV dword ptr [EBX + 0x34b],0x0
LAB_0063acba:
0063ACBA  39 BB 4F 03 00 00         CMP dword ptr [EBX + 0x34f],EDI
0063ACC0  0F 8C 62 0B 00 00         JL 0x0063b828
LAB_0063acc6:
0063ACC6  8B 83 3A 03 00 00         MOV EAX,dword ptr [EBX + 0x33a]
0063ACCC  83 CF FF                  OR EDI,0xffffffff
0063ACCF  85 C0                     TEST EAX,EAX
0063ACD1  7C 4B                     JL 0x0063ad1e
0063ACD3  8B 15 38 2A 80 00         MOV EDX,dword ptr [0x00802a38]
0063ACD9  F6 82 E4 00 00 00 01      TEST byte ptr [EDX + 0xe4],0x1
0063ACE0  75 3C                     JNZ 0x0063ad1e
0063ACE2  8B B3 3E 03 00 00         MOV ESI,dword ptr [EBX + 0x33e]
0063ACE8  8B 93 42 03 00 00         MOV EDX,dword ptr [EBX + 0x342]
0063ACEE  46                        INC ESI
0063ACEF  8B CE                     MOV ECX,ESI
0063ACF1  89 B3 3E 03 00 00         MOV dword ptr [EBX + 0x33e],ESI
0063ACF7  3B CA                     CMP ECX,EDX
0063ACF9  7C 14                     JL 0x0063ad0f
0063ACFB  8B 8B 11 02 00 00         MOV ECX,dword ptr [EBX + 0x211]
0063AD01  50                        PUSH EAX
0063AD02  E8 99 DE 0A 00            CALL 0x006e8ba0
0063AD07  89 BB 3A 03 00 00         MOV dword ptr [EBX + 0x33a],EDI
0063AD0D  EB 0F                     JMP 0x0063ad1e
LAB_0063ad0f:
0063AD0F  51                        PUSH ECX
0063AD10  8B 8B 11 02 00 00         MOV ECX,dword ptr [EBX + 0x211]
0063AD16  6A 00                     PUSH 0x0
0063AD18  50                        PUSH EAX
0063AD19  E8 52 F5 0A 00            CALL 0x006ea270
LAB_0063ad1e:
0063AD1E  8B 83 53 03 00 00         MOV EAX,dword ptr [EBX + 0x353]
0063AD24  85 C0                     TEST EAX,EAX
0063AD26  7C 4B                     JL 0x0063ad73
0063AD28  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
0063AD2E  F6 81 E4 00 00 00 01      TEST byte ptr [ECX + 0xe4],0x1
0063AD35  75 3C                     JNZ 0x0063ad73
0063AD37  8B B3 57 03 00 00         MOV ESI,dword ptr [EBX + 0x357]
0063AD3D  8B 93 5B 03 00 00         MOV EDX,dword ptr [EBX + 0x35b]
0063AD43  46                        INC ESI
0063AD44  8B CE                     MOV ECX,ESI
0063AD46  89 B3 57 03 00 00         MOV dword ptr [EBX + 0x357],ESI
0063AD4C  3B CA                     CMP ECX,EDX
0063AD4E  7C 14                     JL 0x0063ad64
0063AD50  8B 8B 11 02 00 00         MOV ECX,dword ptr [EBX + 0x211]
0063AD56  50                        PUSH EAX
0063AD57  E8 44 DE 0A 00            CALL 0x006e8ba0
0063AD5C  89 BB 53 03 00 00         MOV dword ptr [EBX + 0x353],EDI
0063AD62  EB 0F                     JMP 0x0063ad73
LAB_0063ad64:
0063AD64  51                        PUSH ECX
0063AD65  8B 8B 11 02 00 00         MOV ECX,dword ptr [EBX + 0x211]
0063AD6B  6A 00                     PUSH 0x0
0063AD6D  50                        PUSH EAX
0063AD6E  E8 FD F4 0A 00            CALL 0x006ea270
LAB_0063ad73:
0063AD73  39 BB 53 03 00 00         CMP dword ptr [EBX + 0x353],EDI
0063AD79  75 1A                     JNZ 0x0063ad95
0063AD7B  39 BB 3A 03 00 00         CMP dword ptr [EBX + 0x33a],EDI
0063AD81  75 12                     JNZ 0x0063ad95
0063AD83  5F                        POP EDI
0063AD84  C6 83 65 02 00 00 0D      MOV byte ptr [EBX + 0x265],0xd
0063AD8B  5E                        POP ESI
0063AD8C  33 C0                     XOR EAX,EAX
0063AD8E  5B                        POP EBX
0063AD8F  8B E5                     MOV ESP,EBP
0063AD91  5D                        POP EBP
0063AD92  C2 04 00                  RET 0x4
LAB_0063ad95:
0063AD95  8B 83 36 03 00 00         MOV EAX,dword ptr [EBX + 0x336]
0063AD9B  85 C0                     TEST EAX,EAX
0063AD9D  0F 84 85 0A 00 00         JZ 0x0063b828
0063ADA3  6A 0A                     PUSH 0xa
0063ADA5  8B CB                     MOV ECX,EBX
0063ADA7  E8 AF 7A DC FF            CALL 0x0040285b
0063ADAC  8B CB                     MOV ECX,EBX
0063ADAE  E8 58 89 DC FF            CALL 0x0040370b
0063ADB3  8B 83 C0 02 00 00         MOV EAX,dword ptr [EBX + 0x2c0]
0063ADB9  8D 14 80                  LEA EDX,[EAX + EAX*0x4]
0063ADBC  8B 83 B0 02 00 00         MOV EAX,dword ptr [EBX + 0x2b0]
0063ADC2  D1 E2                     SHL EDX,0x1
0063ADC4  3B D0                     CMP EDX,EAX
0063ADC6  0F 8E 5C 0A 00 00         JLE 0x0063b828
0063ADCC  8B CB                     MOV ECX,EBX
0063ADCE  E8 CD A8 DC FF            CALL 0x004056a0
0063ADD3  5F                        POP EDI
0063ADD4  5E                        POP ESI
0063ADD5  33 C0                     XOR EAX,EAX
0063ADD7  5B                        POP EBX
0063ADD8  8B E5                     MOV ESP,EBP
0063ADDA  5D                        POP EBP
0063ADDB  C2 04 00                  RET 0x4
switchD_00639e3d::caseD_a:
0063ADDE  8B 83 63 03 00 00         MOV EAX,dword ptr [EBX + 0x363]
0063ADE4  C6 45 F8 00               MOV byte ptr [EBP + -0x8],0x0
0063ADE8  85 C0                     TEST EAX,EAX
0063ADEA  0F 8C B3 00 00 00         JL 0x0063aea3
0063ADF0  8B 83 67 03 00 00         MOV EAX,dword ptr [EBX + 0x367]
0063ADF6  85 C0                     TEST EAX,EAX
0063ADF8  75 5D                     JNZ 0x0063ae57
0063ADFA  8B 8B 11 02 00 00         MOV ECX,dword ptr [EBX + 0x211]
0063AE00  8B 93 A8 02 00 00         MOV EDX,dword ptr [EBX + 0x2a8]
0063AE06  B8 79 19 8C 02            MOV EAX,0x28c1979
0063AE0B  C6 45 F8 01               MOV byte ptr [EBP + -0x8],0x1
0063AE0F  8B B1 80 03 00 00         MOV ESI,dword ptr [ECX + 0x380]
0063AE15  0F AF D6                  IMUL EDX,ESI
0063AE18  F7 EA                     IMUL EDX
0063AE1A  D1 FA                     SAR EDX,0x1
0063AE1C  8B C2                     MOV EAX,EDX
0063AE1E  C1 E8 1F                  SHR EAX,0x1f
0063AE21  03 D0                     ADD EDX,EAX
0063AE23  B8 79 19 8C 02            MOV EAX,0x28c1979
0063AE28  52                        PUSH EDX
0063AE29  8B 93 A4 02 00 00         MOV EDX,dword ptr [EBX + 0x2a4]
0063AE2F  0F AF D6                  IMUL EDX,ESI
0063AE32  F7 EA                     IMUL EDX
0063AE34  D1 FA                     SAR EDX,0x1
0063AE36  8B C2                     MOV EAX,EDX
0063AE38  C1 E8 1F                  SHR EAX,0x1f
0063AE3B  03 D0                     ADD EDX,EAX
0063AE3D  52                        PUSH EDX
0063AE3E  E8 CD 83 0A 00            CALL 0x006e3210
0063AE43  D8 0D 04 07 79 00         FMUL float ptr [0x00790704]
0063AE49  E8 3A 34 0F 00            CALL 0x0072e288
0063AE4E  0F BF C8                  MOVSX ECX,AX
0063AE51  83 C1 2D                  ADD ECX,0x2d
0063AE54  89 4D 08                  MOV dword ptr [EBP + 0x8],ECX
LAB_0063ae57:
0063AE57  8B 93 67 03 00 00         MOV EDX,dword ptr [EBX + 0x367]
0063AE5D  8B 8B 6B 03 00 00         MOV ECX,dword ptr [EBX + 0x36b]
0063AE63  42                        INC EDX
0063AE64  8B C2                     MOV EAX,EDX
0063AE66  89 93 67 03 00 00         MOV dword ptr [EBX + 0x367],EDX
0063AE6C  3B C1                     CMP EAX,ECX
0063AE6E  7C 1E                     JL 0x0063ae8e
0063AE70  8B 93 63 03 00 00         MOV EDX,dword ptr [EBX + 0x363]
0063AE76  8B 8B 11 02 00 00         MOV ECX,dword ptr [EBX + 0x211]
0063AE7C  52                        PUSH EDX
0063AE7D  E8 1E DD 0A 00            CALL 0x006e8ba0
0063AE82  C7 83 63 03 00 00 FF FF FF FF  MOV dword ptr [EBX + 0x363],0xffffffff
0063AE8C  EB 15                     JMP 0x0063aea3
LAB_0063ae8e:
0063AE8E  8B 8B 11 02 00 00         MOV ECX,dword ptr [EBX + 0x211]
0063AE94  50                        PUSH EAX
0063AE95  8B 83 63 03 00 00         MOV EAX,dword ptr [EBX + 0x363]
0063AE9B  6A 00                     PUSH 0x0
0063AE9D  50                        PUSH EAX
0063AE9E  E8 CD F3 0A 00            CALL 0x006ea270
LAB_0063aea3:
0063AEA3  8B CB                     MOV ECX,EBX
0063AEA5  E8 5F 8F DC FF            CALL 0x00403e09
0063AEAA  85 C0                     TEST EAX,EAX
0063AEAC  75 1F                     JNZ 0x0063aecd
0063AEAE  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0063AEB1  51                        PUSH ECX
0063AEB2  8B CB                     MOV ECX,EBX
0063AEB4  E8 CD A8 DC FF            CALL 0x00405786
0063AEB9  6A 00                     PUSH 0x0
0063AEBB  8B CB                     MOV ECX,EBX
0063AEBD  E8 54 6E DC FF            CALL 0x00401d16
0063AEC2  5F                        POP EDI
0063AEC3  5E                        POP ESI
0063AEC4  33 C0                     XOR EAX,EAX
0063AEC6  5B                        POP EBX
0063AEC7  8B E5                     MOV ESP,EBP
0063AEC9  5D                        POP EBP
0063AECA  C2 04 00                  RET 0x4
LAB_0063aecd:
0063AECD  7D 1B                     JGE 0x0063aeea
0063AECF  6A 00                     PUSH 0x0
0063AED1  8B CB                     MOV ECX,EBX
0063AED3  C6 83 65 02 00 00 0D      MOV byte ptr [EBX + 0x265],0xd
0063AEDA  E8 37 6E DC FF            CALL 0x00401d16
0063AEDF  5F                        POP EDI
0063AEE0  5E                        POP ESI
0063AEE1  33 C0                     XOR EAX,EAX
0063AEE3  5B                        POP EBX
0063AEE4  8B E5                     MOV ESP,EBP
0063AEE6  5D                        POP EBP
0063AEE7  C2 04 00                  RET 0x4
LAB_0063aeea:
0063AEEA  8B 93 6E 02 00 00         MOV EDX,dword ptr [EBX + 0x26e]
0063AEF0  8B 83 6A 02 00 00         MOV EAX,dword ptr [EBX + 0x26a]
0063AEF6  8B 8B 66 02 00 00         MOV ECX,dword ptr [EBX + 0x266]
0063AEFC  6A 0C                     PUSH 0xc
0063AEFE  52                        PUSH EDX
0063AEFF  50                        PUSH EAX
0063AF00  51                        PUSH ECX
0063AF01  8B CB                     MOV ECX,EBX
0063AF03  E8 EB 6D DC FF            CALL 0x00401cf3
0063AF08  6A 0C                     PUSH 0xc
0063AF0A  8B CB                     MOV ECX,EBX
0063AF0C  E8 3F 89 DC FF            CALL 0x00403850
0063AF11  6A 00                     PUSH 0x0
0063AF13  8B CB                     MOV ECX,EBX
0063AF15  E8 BE 6F DC FF            CALL 0x00401ed8
0063AF1A  8B 83 7F 03 00 00         MOV EAX,dword ptr [EBX + 0x37f]
0063AF20  85 C0                     TEST EAX,EAX
0063AF22  74 5C                     JZ 0x0063af80
0063AF24  8B 15 38 2A 80 00         MOV EDX,dword ptr [0x00802a38]
0063AF2A  F6 82 E4 00 00 00 01      TEST byte ptr [EDX + 0xe4],0x1
0063AF31  75 46                     JNZ 0x0063af79
0063AF33  8A 50 15                  MOV DL,byte ptr [EAX + 0x15]
0063AF36  FE CA                     DEC DL
0063AF38  88 50 15                  MOV byte ptr [EAX + 0x15],DL
0063AF3B  8B 83 7F 03 00 00         MOV EAX,dword ptr [EBX + 0x37f]
0063AF41  8B 30                     MOV ESI,dword ptr [EAX]
0063AF43  85 F6                     TEST ESI,ESI
0063AF45  7C 39                     JL 0x0063af80
0063AF47  33 C9                     XOR ECX,ECX
0063AF49  8A 48 15                  MOV CL,byte ptr [EAX + 0x15]
0063AF4C  A1 B8 32 80 00            MOV EAX,[0x008032b8]
0063AF51  C1 E1 08                  SHL ECX,0x8
0063AF54  03 C8                     ADD ECX,EAX
0063AF56  51                        PUSH ECX
0063AF57  8B 8B 11 02 00 00         MOV ECX,dword ptr [EBX + 0x211]
0063AF5D  56                        PUSH ESI
0063AF5E  E8 BD E7 0A 00            CALL 0x006e9720
0063AF63  8B 93 7F 03 00 00         MOV EDX,dword ptr [EBX + 0x37f]
0063AF69  8B 8B 11 02 00 00         MOV ECX,dword ptr [EBX + 0x211]
0063AF6F  8B 02                     MOV EAX,dword ptr [EDX]
0063AF71  50                        PUSH EAX
0063AF72  E8 59 E7 0A 00            CALL 0x006e96d0
0063AF77  EB 07                     JMP 0x0063af80
LAB_0063af79:
0063AF79  8B CB                     MOV ECX,EBX
0063AF7B  E8 6C A1 DC FF            CALL 0x004050ec
LAB_0063af80:
0063AF80  8B 83 4B 03 00 00         MOV EAX,dword ptr [EBX + 0x34b]
0063AF86  85 C0                     TEST EAX,EAX
0063AF88  74 7D                     JZ 0x0063b007
0063AF8A  8B 8B 4F 03 00 00         MOV ECX,dword ptr [EBX + 0x34f]
0063AF90  D9 83 32 03 00 00         FLD float ptr [EBX + 0x332]
0063AF96  D8 05 FC 04 79 00         FADD float ptr [0x007904fc]
0063AF9C  41                        INC ECX
0063AF9D  51                        PUSH ECX
0063AF9E  89 8B 4F 03 00 00         MOV dword ptr [EBX + 0x34f],ECX
0063AFA4  8B 50 21                  MOV EDX,dword ptr [EAX + 0x21]
0063AFA7  8B 35 CC 32 80 00         MOV ESI,dword ptr [0x008032cc]
0063AFAD  D9 1C 24                  FSTP float ptr [ESP]
0063AFB0  DB 83 A8 02 00 00         FILD dword ptr [EBX + 0x2a8]
0063AFB6  51                        PUSH ECX
0063AFB7  8B 02                     MOV EAX,dword ptr [EDX]
0063AFB9  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
0063AFBF  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
0063AFC5  D9 1C 24                  FSTP float ptr [ESP]
0063AFC8  DB 83 A4 02 00 00         FILD dword ptr [EBX + 0x2a4]
0063AFCE  51                        PUSH ECX
0063AFCF  8B 0C 8D D4 1F 7D 00      MOV ECX,dword ptr [ECX*0x4 + 0x7d1fd4]
0063AFD6  C1 E1 08                  SHL ECX,0x8
0063AFD9  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
0063AFDF  03 CE                     ADD ECX,ESI
0063AFE1  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
0063AFE7  D9 1C 24                  FSTP float ptr [ESP]
0063AFEA  68 F7 00 00 00            PUSH 0xf7
0063AFEF  68 08 01 00 00            PUSH 0x108
0063AFF4  50                        PUSH EAX
0063AFF5  51                        PUSH ECX
0063AFF6  8B 8B 11 02 00 00         MOV ECX,dword ptr [EBX + 0x211]
0063AFFC  E8 3F FD 0A 00            CALL 0x006ead40
0063B001  FF 83 4F 03 00 00         INC dword ptr [EBX + 0x34f]
LAB_0063b007:
0063B007  6A 00                     PUSH 0x0
0063B009  8B CB                     MOV ECX,EBX
0063B00B  C6 83 65 02 00 00 0B      MOV byte ptr [EBX + 0x265],0xb
0063B012  E8 FF 6C DC FF            CALL 0x00401d16
0063B017  5F                        POP EDI
0063B018  5E                        POP ESI
0063B019  33 C0                     XOR EAX,EAX
0063B01B  5B                        POP EBX
0063B01C  8B E5                     MOV ESP,EBP
0063B01E  5D                        POP EBP
0063B01F  C2 04 00                  RET 0x4
switchD_00639e3d::caseD_b:
0063B022  8B 8B 4B 03 00 00         MOV ECX,dword ptr [EBX + 0x34b]
0063B028  85 C9                     TEST ECX,ECX
0063B02A  0F 84 26 01 00 00         JZ 0x0063b156
0063B030  8B 83 4F 03 00 00         MOV EAX,dword ptr [EBX + 0x34f]
0063B036  83 F8 02                  CMP EAX,0x2
0063B039  7D 61                     JGE 0x0063b09c
0063B03B  D9 83 32 03 00 00         FLD float ptr [EBX + 0x332]
0063B041  D8 05 FC 04 79 00         FADD float ptr [0x007904fc]
0063B047  51                        PUSH ECX
0063B048  8B 51 21                  MOV EDX,dword ptr [ECX + 0x21]
0063B04B  D9 1C 24                  FSTP float ptr [ESP]
0063B04E  DB 83 A8 02 00 00         FILD dword ptr [EBX + 0x2a8]
0063B054  51                        PUSH ECX
0063B055  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
0063B05B  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
0063B061  D9 1C 24                  FSTP float ptr [ESP]
0063B064  DB 83 A4 02 00 00         FILD dword ptr [EBX + 0x2a4]
0063B06A  51                        PUSH ECX
0063B06B  8B 0A                     MOV ECX,dword ptr [EDX]
0063B06D  8B 14 85 D4 1F 7D 00      MOV EDX,dword ptr [EAX*0x4 + 0x7d1fd4]
0063B074  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
0063B07A  C1 E2 08                  SHL EDX,0x8
0063B07D  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
0063B083  D9 1C 24                  FSTP float ptr [ESP]
0063B086  68 F7 00 00 00            PUSH 0xf7
0063B08B  68 08 01 00 00            PUSH 0x108
0063B090  51                        PUSH ECX
0063B091  8B 0D CC 32 80 00         MOV ECX,dword ptr [0x008032cc]
0063B097  03 D1                     ADD EDX,ECX
0063B099  52                        PUSH EDX
0063B09A  EB 1F                     JMP 0x0063b0bb
LAB_0063b09c:
0063B09C  8B 04 85 D4 1F 7D 00      MOV EAX,dword ptr [EAX*0x4 + 0x7d1fd4]
0063B0A3  8B 15 CC 32 80 00         MOV EDX,dword ptr [0x008032cc]
0063B0A9  6A 00                     PUSH 0x0
0063B0AB  6A 00                     PUSH 0x0
0063B0AD  6A 00                     PUSH 0x0
0063B0AF  6A 00                     PUSH 0x0
0063B0B1  C1 E0 08                  SHL EAX,0x8
0063B0B4  6A 00                     PUSH 0x0
0063B0B6  03 C2                     ADD EAX,EDX
0063B0B8  6A 00                     PUSH 0x0
0063B0BA  50                        PUSH EAX
LAB_0063b0bb:
0063B0BB  8B 8B 11 02 00 00         MOV ECX,dword ptr [EBX + 0x211]
0063B0C1  E8 7A FC 0A 00            CALL 0x006ead40
0063B0C6  8B 8B 4F 03 00 00         MOV ECX,dword ptr [EBX + 0x34f]
0063B0CC  41                        INC ECX
0063B0CD  8B C1                     MOV EAX,ECX
0063B0CF  89 8B 4F 03 00 00         MOV dword ptr [EBX + 0x34f],ECX
0063B0D5  83 F8 07                  CMP EAX,0x7
0063B0D8  75 14                     JNZ 0x0063b0ee
0063B0DA  8B 0D A8 75 80 00         MOV ECX,dword ptr [0x008075a8]
0063B0E0  68 F8 1F 7D 00            PUSH 0x7d1ff8
0063B0E5  57                        PUSH EDI
0063B0E6  6A 02                     PUSH 0x2
0063B0E8  51                        PUSH ECX
0063B0E9  E8 C2 D2 08 00            CALL 0x006c83b0
LAB_0063b0ee:
0063B0EE  83 BB 4F 03 00 00 08      CMP dword ptr [EBX + 0x34f],0x8
0063B0F5  7E 5F                     JLE 0x0063b156
0063B0F7  D9 83 32 03 00 00         FLD float ptr [EBX + 0x332]
0063B0FD  D8 05 FC 04 79 00         FADD float ptr [0x007904fc]
0063B103  51                        PUSH ECX
0063B104  D9 1C 24                  FSTP float ptr [ESP]
0063B107  DB 83 A8 02 00 00         FILD dword ptr [EBX + 0x2a8]
0063B10D  51                        PUSH ECX
0063B10E  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
0063B114  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
0063B11A  D9 1C 24                  FSTP float ptr [ESP]
0063B11D  DB 83 A4 02 00 00         FILD dword ptr [EBX + 0x2a4]
0063B123  51                        PUSH ECX
0063B124  8B 8B 11 02 00 00         MOV ECX,dword ptr [EBX + 0x211]
0063B12A  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
0063B130  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
0063B136  D9 1C 24                  FSTP float ptr [ESP]
0063B139  68 F7 00 00 00            PUSH 0xf7
0063B13E  68 08 01 00 00            PUSH 0x108
0063B143  6A 00                     PUSH 0x0
0063B145  6A 00                     PUSH 0x0
0063B147  E8 F4 FB 0A 00            CALL 0x006ead40
0063B14C  C7 83 4B 03 00 00 00 00 00 00  MOV dword ptr [EBX + 0x34b],0x0
LAB_0063b156:
0063B156  8B 83 7F 03 00 00         MOV EAX,dword ptr [EBX + 0x37f]
0063B15C  85 C0                     TEST EAX,EAX
0063B15E  74 5C                     JZ 0x0063b1bc
0063B160  8B 15 38 2A 80 00         MOV EDX,dword ptr [0x00802a38]
0063B166  F6 82 E4 00 00 00 01      TEST byte ptr [EDX + 0xe4],0x1
0063B16D  75 46                     JNZ 0x0063b1b5
0063B16F  8A 50 15                  MOV DL,byte ptr [EAX + 0x15]
0063B172  FE CA                     DEC DL
0063B174  88 50 15                  MOV byte ptr [EAX + 0x15],DL
0063B177  8B 83 7F 03 00 00         MOV EAX,dword ptr [EBX + 0x37f]
0063B17D  8B 30                     MOV ESI,dword ptr [EAX]
0063B17F  85 F6                     TEST ESI,ESI
0063B181  7C 39                     JL 0x0063b1bc
0063B183  33 C9                     XOR ECX,ECX
0063B185  8A 48 15                  MOV CL,byte ptr [EAX + 0x15]
0063B188  A1 B8 32 80 00            MOV EAX,[0x008032b8]
0063B18D  C1 E1 08                  SHL ECX,0x8
0063B190  03 C8                     ADD ECX,EAX
0063B192  51                        PUSH ECX
0063B193  8B 8B 11 02 00 00         MOV ECX,dword ptr [EBX + 0x211]
0063B199  56                        PUSH ESI
0063B19A  E8 81 E5 0A 00            CALL 0x006e9720
0063B19F  8B 93 7F 03 00 00         MOV EDX,dword ptr [EBX + 0x37f]
0063B1A5  8B 8B 11 02 00 00         MOV ECX,dword ptr [EBX + 0x211]
0063B1AB  8B 02                     MOV EAX,dword ptr [EDX]
0063B1AD  50                        PUSH EAX
0063B1AE  E8 1D E5 0A 00            CALL 0x006e96d0
0063B1B3  EB 07                     JMP 0x0063b1bc
LAB_0063b1b5:
0063B1B5  8B CB                     MOV ECX,EBX
0063B1B7  E8 30 9F DC FF            CALL 0x004050ec
LAB_0063b1bc:
0063B1BC  6A 0C                     PUSH 0xc
0063B1BE  8B CB                     MOV ECX,EBX
0063B1C0  E8 96 76 DC FF            CALL 0x0040285b
0063B1C5  8B CB                     MOV ECX,EBX
0063B1C7  E8 3F 85 DC FF            CALL 0x0040370b
0063B1CC  8B 8B B8 02 00 00         MOV ECX,dword ptr [EBX + 0x2b8]
0063B1D2  8B 83 B0 02 00 00         MOV EAX,dword ptr [EBX + 0x2b0]
0063B1D8  3B C8                     CMP ECX,EAX
0063B1DA  7D 0E                     JGE 0x0063b1ea
0063B1DC  8B CB                     MOV ECX,EBX
0063B1DE  E8 BD A4 DC FF            CALL 0x004056a0
0063B1E3  C6 83 65 02 00 00 0D      MOV byte ptr [EBX + 0x265],0xd
LAB_0063b1ea:
0063B1EA  6A 00                     PUSH 0x0
0063B1EC  8B CB                     MOV ECX,EBX
0063B1EE  E8 23 6B DC FF            CALL 0x00401d16
0063B1F3  5F                        POP EDI
0063B1F4  5E                        POP ESI
0063B1F5  33 C0                     XOR EAX,EAX
0063B1F7  5B                        POP EBX
0063B1F8  8B E5                     MOV ESP,EBP
0063B1FA  5D                        POP EBP
0063B1FB  C2 04 00                  RET 0x4
switchD_00639e3d::caseD_4:
0063B1FE  8B 15 38 2A 80 00         MOV EDX,dword ptr [0x00802a38]
0063B204  8B CB                     MOV ECX,EBX
0063B206  8B 82 E4 00 00 00         MOV EAX,dword ptr [EDX + 0xe4]
0063B20C  50                        PUSH EAX
0063B20D  E8 B7 71 DC FF            CALL 0x004023c9
0063B212  85 C0                     TEST EAX,EAX
0063B214  0F 8F 0E 06 00 00         JG 0x0063b828
0063B21A  66 8B 8B 6E 02 00 00      MOV CX,word ptr [EBX + 0x26e]
0063B221  66 8B 93 6A 02 00 00      MOV DX,word ptr [EBX + 0x26a]
0063B228  66 8B 83 66 02 00 00      MOV AX,word ptr [EBX + 0x266]
0063B22F  51                        PUSH ECX
0063B230  52                        PUSH EDX
0063B231  50                        PUSH EAX
0063B232  8B CB                     MOV ECX,EBX
0063B234  E8 CE 7E DC FF            CALL 0x00403107
0063B239  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
0063B23F  F6 81 E4 00 00 00 01      TEST byte ptr [ECX + 0xe4],0x1
0063B246  75 7E                     JNZ 0x0063b2c6
0063B248  8B 53 1C                  MOV EDX,dword ptr [EBX + 0x1c]
0063B24B  6A 00                     PUSH 0x0
0063B24D  69 D2 6D 4E C6 41         IMUL EDX,EDX,0x41c64e6d
0063B253  81 C2 39 30 00 00         ADD EDX,0x3039
0063B259  6A 00                     PUSH 0x0
0063B25B  8B C2                     MOV EAX,EDX
0063B25D  89 53 1C                  MOV dword ptr [EBX + 0x1c],EDX
0063B260  69 C0 6D 4E C6 41         IMUL EAX,EAX,0x41c64e6d
0063B266  05 39 30 00 00            ADD EAX,0x3039
0063B26B  6A FF                     PUSH -0x1
0063B26D  8B C8                     MOV ECX,EAX
0063B26F  89 43 1C                  MOV dword ptr [EBX + 0x1c],EAX
0063B272  69 C9 6D 4E C6 41         IMUL ECX,ECX,0x41c64e6d
0063B278  6A 00                     PUSH 0x0
0063B27A  6A 00                     PUSH 0x0
0063B27C  8D 81 39 30 00 00         LEA EAX,[ECX + 0x3039]
0063B282  6A 00                     PUSH 0x0
0063B284  8B D0                     MOV EDX,EAX
0063B286  8B C8                     MOV ECX,EAX
0063B288  C1 EA 10                  SHR EDX,0x10
0063B28B  83 E2 01                  AND EDX,0x1
0063B28E  6A 00                     PUSH 0x0
0063B290  C1 E9 10                  SHR ECX,0x10
0063B293  89 43 1C                  MOV dword ptr [EBX + 0x1c],EAX
0063B296  52                        PUSH EDX
0063B297  8B 93 6E 02 00 00         MOV EDX,dword ptr [EBX + 0x26e]
0063B29D  83 E1 01                  AND ECX,0x1
0063B2A0  51                        PUSH ECX
0063B2A1  8B 8B 6A 02 00 00         MOV ECX,dword ptr [EBX + 0x26a]
0063B2A7  52                        PUSH EDX
0063B2A8  8B 93 66 02 00 00         MOV EDX,dword ptr [EBX + 0x266]
0063B2AE  C1 E8 10                  SHR EAX,0x10
0063B2B1  51                        PUSH ECX
0063B2B2  8B 0D 7C 2A 80 00         MOV ECX,dword ptr [0x00802a7c]
0063B2B8  83 E0 01                  AND EAX,0x1
0063B2BB  52                        PUSH EDX
0063B2BC  50                        PUSH EAX
0063B2BD  6A 01                     PUSH 0x1
0063B2BF  6A 01                     PUSH 0x1
0063B2C1  E8 6D 61 DC FF            CALL 0x00401433
LAB_0063b2c6:
0063B2C6  8B 03                     MOV EAX,dword ptr [EBX]
0063B2C8  8B CB                     MOV ECX,EBX
0063B2CA  FF 90 D8 00 00 00         CALL dword ptr [EAX + 0xd8]
0063B2D0  8B 35 88 2A 80 00         MOV ESI,dword ptr [0x00802a88]
0063B2D6  85 F6                     TEST ESI,ESI
0063B2D8  0F 84 4A 05 00 00         JZ 0x0063b828
0063B2DE  8B 8B 6E 02 00 00         MOV ECX,dword ptr [EBX + 0x26e]
0063B2E4  B8 1F 85 EB 51            MOV EAX,0x51eb851f
0063B2E9  85 C9                     TEST ECX,ECX
0063B2EB  7C 14                     JL 0x0063b301
0063B2ED  F7 E9                     IMUL ECX
0063B2EF  C1 FA 06                  SAR EDX,0x6
0063B2F2  8B CA                     MOV ECX,EDX
0063B2F4  C1 E9 1F                  SHR ECX,0x1f
0063B2F7  03 D1                     ADD EDX,ECX
0063B2F9  0F BF D2                  MOVSX EDX,DX
0063B2FC  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
0063B2FF  EB 13                     JMP 0x0063b314
LAB_0063b301:
0063B301  F7 E9                     IMUL ECX
0063B303  C1 FA 06                  SAR EDX,0x6
0063B306  8B C2                     MOV EAX,EDX
0063B308  C1 E8 1F                  SHR EAX,0x1f
0063B30B  03 D0                     ADD EDX,EAX
0063B30D  0F BF C2                  MOVSX EAX,DX
0063B310  48                        DEC EAX
0063B311  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
LAB_0063b314:
0063B314  8B 8B 6A 02 00 00         MOV ECX,dword ptr [EBX + 0x26a]
0063B31A  B8 79 19 8C 02            MOV EAX,0x28c1979
0063B31F  85 C9                     TEST ECX,ECX
0063B321  7C 10                     JL 0x0063b333
0063B323  F7 E9                     IMUL ECX
0063B325  D1 FA                     SAR EDX,0x1
0063B327  8B CA                     MOV ECX,EDX
0063B329  C1 E9 1F                  SHR ECX,0x1f
0063B32C  03 D1                     ADD EDX,ECX
0063B32E  0F BF FA                  MOVSX EDI,DX
0063B331  EB 0F                     JMP 0x0063b342
LAB_0063b333:
0063B333  F7 E9                     IMUL ECX
0063B335  D1 FA                     SAR EDX,0x1
0063B337  8B C2                     MOV EAX,EDX
0063B339  C1 E8 1F                  SHR EAX,0x1f
0063B33C  03 D0                     ADD EDX,EAX
0063B33E  0F BF FA                  MOVSX EDI,DX
0063B341  4F                        DEC EDI
LAB_0063b342:
0063B342  8B 8B 66 02 00 00         MOV ECX,dword ptr [EBX + 0x266]
0063B348  B8 79 19 8C 02            MOV EAX,0x28c1979
0063B34D  85 C9                     TEST ECX,ECX
0063B34F  7C 10                     JL 0x0063b361
0063B351  F7 E9                     IMUL ECX
0063B353  D1 FA                     SAR EDX,0x1
0063B355  8B CA                     MOV ECX,EDX
0063B357  C1 E9 1F                  SHR ECX,0x1f
0063B35A  03 D1                     ADD EDX,ECX
0063B35C  0F BF C2                  MOVSX EAX,DX
0063B35F  EB 0F                     JMP 0x0063b370
LAB_0063b361:
0063B361  F7 E9                     IMUL ECX
0063B363  D1 FA                     SAR EDX,0x1
0063B365  8B C2                     MOV EAX,EDX
0063B367  C1 E8 1F                  SHR EAX,0x1f
0063B36A  03 D0                     ADD EDX,EAX
0063B36C  0F BF C2                  MOVSX EAX,DX
0063B36F  48                        DEC EAX
LAB_0063b370:
0063B370  80 3D 4D 87 80 00 FF      CMP byte ptr [0x0080874d],0xff
0063B377  0F 84 C7 ED FF FF         JZ 0x0063a144
0063B37D  8B 8E F8 00 00 00         MOV ECX,dword ptr [ESI + 0xf8]
0063B383  85 C9                     TEST ECX,ECX
0063B385  0F 84 B9 ED FF FF         JZ 0x0063a144
0063B38B  8D 4D EC                  LEA ECX,[EBP + -0x14]
0063B38E  8D 55 E8                  LEA EDX,[EBP + -0x18]
0063B391  51                        PUSH ECX
0063B392  52                        PUSH EDX
0063B393  57                        PUSH EDI
0063B394  50                        PUSH EAX
0063B395  8B 86 0C 01 00 00         MOV EAX,dword ptr [ESI + 0x10c]
0063B39B  8B CE                     MOV ECX,ESI
0063B39D  50                        PUSH EAX
0063B39E  E8 B0 8B DC FF            CALL 0x00403f53
0063B3A3  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0063B3A6  85 C0                     TEST EAX,EAX
0063B3A8  0F 8C 96 ED FF FF         JL 0x0063a144
0063B3AE  83 F8 05                  CMP EAX,0x5
0063B3B1  0F 8D 8D ED FF FF         JGE 0x0063a144
0063B3B7  8B 55 E8                  MOV EDX,dword ptr [EBP + -0x18]
0063B3BA  85 D2                     TEST EDX,EDX
0063B3BC  0F 8C 82 ED FF FF         JL 0x0063a144
0063B3C2  8B 4E 30                  MOV ECX,dword ptr [ESI + 0x30]
0063B3C5  3B D1                     CMP EDX,ECX
0063B3C7  0F 8D 77 ED FF FF         JGE 0x0063a144
0063B3CD  8B 04 85 D0 AE 79 00      MOV EAX,dword ptr [EAX*0x4 + 0x79aed0]
0063B3D4  8B 7D EC                  MOV EDI,dword ptr [EBP + -0x14]
0063B3D7  E9 4C F3 FF FF            JMP 0x0063a728
switchD_00639e3d::caseD_6:
0063B3DC  8B 15 38 2A 80 00         MOV EDX,dword ptr [0x00802a38]
0063B3E2  8B CB                     MOV ECX,EBX
0063B3E4  8B 82 E4 00 00 00         MOV EAX,dword ptr [EDX + 0xe4]
0063B3EA  50                        PUSH EAX
0063B3EB  E8 D9 6F DC FF            CALL 0x004023c9
0063B3F0  83 F8 04                  CMP EAX,0x4
0063B3F3  75 5A                     JNZ 0x0063b44f
0063B3F5  6A 00                     PUSH 0x0
0063B3F7  8D B3 D5 01 00 00         LEA ESI,[EBX + 0x1d5]
0063B3FD  6A 13                     PUSH 0x13
0063B3FF  6A 10                     PUSH 0x10
0063B401  6A 0D                     PUSH 0xd
0063B403  8B CE                     MOV ECX,ESI
0063B405  E8 B0 6A DC FF            CALL 0x00401eba
0063B40A  6A 0D                     PUSH 0xd
0063B40C  8B CE                     MOV ECX,ESI
0063B40E  E8 C3 8A DC FF            CALL 0x00403ed6
0063B413  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
0063B419  8B 91 E4 00 00 00         MOV EDX,dword ptr [ECX + 0xe4]
0063B41F  8B CE                     MOV ECX,ESI
0063B421  52                        PUSH EDX
0063B422  6A 0D                     PUSH 0xd
0063B424  E8 17 9E DC FF            CALL 0x00405240
0063B429  C6 83 9F 02 00 00 01      MOV byte ptr [EBX + 0x29f],0x1
0063B430  C6 83 9E 02 00 00 03      MOV byte ptr [EBX + 0x29e],0x3
0063B437  C6 83 65 02 00 00 07      MOV byte ptr [EBX + 0x265],0x7
0063B43E  A1 38 2A 80 00            MOV EAX,[0x00802a38]
0063B443  8B 88 E4 00 00 00         MOV ECX,dword ptr [EAX + 0xe4]
0063B449  89 8B 8E 02 00 00         MOV dword ptr [EBX + 0x28e],ECX
LAB_0063b44f:
0063B44F  8D 8B D5 01 00 00         LEA ECX,[EBX + 0x1d5]
0063B455  6A 0D                     PUSH 0xd
0063B457  E8 53 8E DC FF            CALL 0x004042af
0063B45C  8B C8                     MOV ECX,EAX
0063B45E  BE 07 00 00 00            MOV ESI,0x7
0063B463  99                        CDQ
0063B464  F7 FE                     IDIV ESI
0063B466  85 D2                     TEST EDX,EDX
0063B468  75 1B                     JNZ 0x0063b485
0063B46A  B8 93 24 49 92            MOV EAX,0x92492493
0063B46F  F7 E9                     IMUL ECX
0063B471  03 D1                     ADD EDX,ECX
0063B473  8B CB                     MOV ECX,EBX
0063B475  C1 FA 02                  SAR EDX,0x2
0063B478  8B C2                     MOV EAX,EDX
0063B47A  C1 E8 1F                  SHR EAX,0x1f
0063B47D  03 D0                     ADD EDX,EAX
0063B47F  52                        PUSH EDX
0063B480  E8 47 8F DC FF            CALL 0x004043cc
LAB_0063b485:
0063B485  66 8B 8B 6E 02 00 00      MOV CX,word ptr [EBX + 0x26e]
0063B48C  66 8B 93 6A 02 00 00      MOV DX,word ptr [EBX + 0x26a]
0063B493  66 8B 83 66 02 00 00      MOV AX,word ptr [EBX + 0x266]
0063B49A  51                        PUSH ECX
0063B49B  52                        PUSH EDX
0063B49C  50                        PUSH EAX
0063B49D  8B CB                     MOV ECX,EBX
0063B49F  E8 63 7C DC FF            CALL 0x00403107
0063B4A4  8B 13                     MOV EDX,dword ptr [EBX]
0063B4A6  8B CB                     MOV ECX,EBX
0063B4A8  FF 92 D8 00 00 00         CALL dword ptr [EDX + 0xd8]
0063B4AE  8B 35 88 2A 80 00         MOV ESI,dword ptr [0x00802a88]
0063B4B4  85 F6                     TEST ESI,ESI
0063B4B6  0F 84 6C 03 00 00         JZ 0x0063b828
0063B4BC  8B 8B 6E 02 00 00         MOV ECX,dword ptr [EBX + 0x26e]
0063B4C2  B8 1F 85 EB 51            MOV EAX,0x51eb851f
0063B4C7  85 C9                     TEST ECX,ECX
0063B4C9  7C 14                     JL 0x0063b4df
0063B4CB  F7 E9                     IMUL ECX
0063B4CD  C1 FA 06                  SAR EDX,0x6
0063B4D0  8B C2                     MOV EAX,EDX
0063B4D2  C1 E8 1F                  SHR EAX,0x1f
0063B4D5  03 D0                     ADD EDX,EAX
0063B4D7  0F BF CA                  MOVSX ECX,DX
0063B4DA  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
0063B4DD  EB 13                     JMP 0x0063b4f2
LAB_0063b4df:
0063B4DF  F7 E9                     IMUL ECX
0063B4E1  C1 FA 06                  SAR EDX,0x6
0063B4E4  8B C2                     MOV EAX,EDX
0063B4E6  C1 E8 1F                  SHR EAX,0x1f
0063B4E9  03 D0                     ADD EDX,EAX
0063B4EB  0F BF C2                  MOVSX EAX,DX
0063B4EE  48                        DEC EAX
0063B4EF  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
LAB_0063b4f2:
0063B4F2  8B 8B 6A 02 00 00         MOV ECX,dword ptr [EBX + 0x26a]
0063B4F8  B8 79 19 8C 02            MOV EAX,0x28c1979
0063B4FD  85 C9                     TEST ECX,ECX
0063B4FF  7C 10                     JL 0x0063b511
0063B501  F7 E9                     IMUL ECX
0063B503  D1 FA                     SAR EDX,0x1
0063B505  8B CA                     MOV ECX,EDX
0063B507  C1 E9 1F                  SHR ECX,0x1f
0063B50A  03 D1                     ADD EDX,ECX
0063B50C  0F BF FA                  MOVSX EDI,DX
0063B50F  EB 0F                     JMP 0x0063b520
LAB_0063b511:
0063B511  F7 E9                     IMUL ECX
0063B513  D1 FA                     SAR EDX,0x1
0063B515  8B C2                     MOV EAX,EDX
0063B517  C1 E8 1F                  SHR EAX,0x1f
0063B51A  03 D0                     ADD EDX,EAX
0063B51C  0F BF FA                  MOVSX EDI,DX
0063B51F  4F                        DEC EDI
LAB_0063b520:
0063B520  8B 8B 66 02 00 00         MOV ECX,dword ptr [EBX + 0x266]
0063B526  B8 79 19 8C 02            MOV EAX,0x28c1979
0063B52B  85 C9                     TEST ECX,ECX
0063B52D  7C 10                     JL 0x0063b53f
0063B52F  F7 E9                     IMUL ECX
0063B531  D1 FA                     SAR EDX,0x1
0063B533  8B CA                     MOV ECX,EDX
0063B535  C1 E9 1F                  SHR ECX,0x1f
0063B538  03 D1                     ADD EDX,ECX
0063B53A  0F BF C2                  MOVSX EAX,DX
0063B53D  EB 0F                     JMP 0x0063b54e
LAB_0063b53f:
0063B53F  F7 E9                     IMUL ECX
0063B541  D1 FA                     SAR EDX,0x1
0063B543  8B C2                     MOV EAX,EDX
0063B545  C1 E8 1F                  SHR EAX,0x1f
0063B548  03 D0                     ADD EDX,EAX
0063B54A  0F BF C2                  MOVSX EAX,DX
0063B54D  48                        DEC EAX
LAB_0063b54e:
0063B54E  80 3D 4D 87 80 00 FF      CMP byte ptr [0x0080874d],0xff
0063B555  0F 84 E9 EB FF FF         JZ 0x0063a144
0063B55B  8B 8E F8 00 00 00         MOV ECX,dword ptr [ESI + 0xf8]
0063B561  85 C9                     TEST ECX,ECX
0063B563  0F 84 DB EB FF FF         JZ 0x0063a144
0063B569  8D 4D EC                  LEA ECX,[EBP + -0x14]
0063B56C  8D 55 E8                  LEA EDX,[EBP + -0x18]
0063B56F  51                        PUSH ECX
0063B570  52                        PUSH EDX
0063B571  57                        PUSH EDI
0063B572  50                        PUSH EAX
0063B573  8B 86 0C 01 00 00         MOV EAX,dword ptr [ESI + 0x10c]
0063B579  8B CE                     MOV ECX,ESI
0063B57B  50                        PUSH EAX
0063B57C  E8 D2 89 DC FF            CALL 0x00403f53
0063B581  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0063B584  85 C0                     TEST EAX,EAX
0063B586  0F 8C B8 EB FF FF         JL 0x0063a144
0063B58C  83 F8 05                  CMP EAX,0x5
0063B58F  0F 8D AF EB FF FF         JGE 0x0063a144
0063B595  8B 55 E8                  MOV EDX,dword ptr [EBP + -0x18]
0063B598  85 D2                     TEST EDX,EDX
0063B59A  0F 8C A4 EB FF FF         JL 0x0063a144
0063B5A0  8B 4E 30                  MOV ECX,dword ptr [ESI + 0x30]
0063B5A3  3B D1                     CMP EDX,ECX
0063B5A5  0F 8D 99 EB FF FF         JGE 0x0063a144
0063B5AB  8B 04 85 D0 AE 79 00      MOV EAX,dword ptr [EAX*0x4 + 0x79aed0]
0063B5B2  8B 7D EC                  MOV EDI,dword ptr [EBP + -0x14]
0063B5B5  E9 6E F1 FF FF            JMP 0x0063a728
switchD_00639e3d::caseD_7:
0063B5BA  8B 15 74 67 80 00         MOV EDX,dword ptr [0x00806774]
0063B5C0  6A 1D                     PUSH 0x1d
0063B5C2  8D B3 D5 01 00 00         LEA ESI,[EBX + 0x1d5]
0063B5C8  68 40 1F 7D 00            PUSH 0x7d1f40
0063B5CD  52                        PUSH EDX
0063B5CE  6A 0D                     PUSH 0xd
0063B5D0  8B CE                     MOV ECX,ESI
0063B5D2  E8 AC 8B DC FF            CALL 0x00404183
0063B5D7  85 C0                     TEST EAX,EAX
0063B5D9  74 0E                     JZ 0x0063b5e9
0063B5DB  5F                        POP EDI
0063B5DC  5E                        POP ESI
0063B5DD  B8 FF FF 00 00            MOV EAX,0xffff
0063B5E2  5B                        POP EBX
0063B5E3  8B E5                     MOV ESP,EBP
0063B5E5  5D                        POP EBP
0063B5E6  C2 04 00                  RET 0x4
LAB_0063b5e9:
0063B5E9  A1 64 67 80 00            MOV EAX,[0x00806764]
0063B5EE  6A 1D                     PUSH 0x1d
0063B5F0  68 48 1F 7D 00            PUSH 0x7d1f48
0063B5F5  50                        PUSH EAX
0063B5F6  6A 0F                     PUSH 0xf
0063B5F8  8B CE                     MOV ECX,ESI
0063B5FA  E8 84 8B DC FF            CALL 0x00404183
0063B5FF  85 C0                     TEST EAX,EAX
0063B601  74 0E                     JZ 0x0063b611
0063B603  5F                        POP EDI
0063B604  5E                        POP ESI
0063B605  B8 FF FF 00 00            MOV EAX,0xffff
0063B60A  5B                        POP EBX
0063B60B  8B E5                     MOV ESP,EBP
0063B60D  5D                        POP EBP
0063B60E  C2 04 00                  RET 0x4
LAB_0063b611:
0063B611  6A 0F                     PUSH 0xf
0063B613  8B CE                     MOV ECX,ESI
0063B615  E8 BA 6C DC FF            CALL 0x004022d4
0063B61A  6A 0D                     PUSH 0xd
0063B61C  8B CE                     MOV ECX,ESI
0063B61E  E8 B1 6C DC FF            CALL 0x004022d4
0063B623  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
0063B629  8B 91 E4 00 00 00         MOV EDX,dword ptr [ECX + 0xe4]
0063B62F  8B CE                     MOV ECX,ESI
0063B631  52                        PUSH EDX
0063B632  6A 0D                     PUSH 0xd
0063B634  E8 07 9C DC FF            CALL 0x00405240
0063B639  C6 83 9F 02 00 00 01      MOV byte ptr [EBX + 0x29f],0x1
0063B640  66 8B 83 6E 02 00 00      MOV AX,word ptr [EBX + 0x26e]
0063B647  66 8B 8B 6A 02 00 00      MOV CX,word ptr [EBX + 0x26a]
0063B64E  66 8B 93 66 02 00 00      MOV DX,word ptr [EBX + 0x266]
0063B655  50                        PUSH EAX
0063B656  51                        PUSH ECX
0063B657  52                        PUSH EDX
0063B658  8B CB                     MOV ECX,EBX
0063B65A  E8 A8 7A DC FF            CALL 0x00403107
0063B65F  C6 83 65 02 00 00 08      MOV byte ptr [EBX + 0x265],0x8
0063B666  66 8B 83 6E 02 00 00      MOV AX,word ptr [EBX + 0x26e]
0063B66D  66 8B 8B 6A 02 00 00      MOV CX,word ptr [EBX + 0x26a]
0063B674  66 8B 93 66 02 00 00      MOV DX,word ptr [EBX + 0x266]
0063B67B  50                        PUSH EAX
0063B67C  51                        PUSH ECX
0063B67D  52                        PUSH EDX
0063B67E  8B CB                     MOV ECX,EBX
0063B680  E8 82 7A DC FF            CALL 0x00403107
0063B685  8B 03                     MOV EAX,dword ptr [EBX]
0063B687  8B CB                     MOV ECX,EBX
0063B689  FF 90 D8 00 00 00         CALL dword ptr [EAX + 0xd8]
0063B68F  5F                        POP EDI
0063B690  5E                        POP ESI
0063B691  33 C0                     XOR EAX,EAX
0063B693  5B                        POP EBX
0063B694  8B E5                     MOV ESP,EBP
0063B696  5D                        POP EBP
0063B697  C2 04 00                  RET 0x4
switchD_00639e3d::caseD_8:
0063B69A  8D B3 D5 01 00 00         LEA ESI,[EBX + 0x1d5]
0063B6A0  6A 0D                     PUSH 0xd
0063B6A2  8B CE                     MOV ECX,ESI
0063B6A4  E8 06 8C DC FF            CALL 0x004042af
0063B6A9  83 F8 17                  CMP EAX,0x17
0063B6AC  75 16                     JNZ 0x0063b6c4
0063B6AE  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
0063B6B4  8B 91 E4 00 00 00         MOV EDX,dword ptr [ECX + 0xe4]
0063B6BA  8B CE                     MOV ECX,ESI
0063B6BC  52                        PUSH EDX
0063B6BD  6A 0F                     PUSH 0xf
0063B6BF  E8 7C 9B DC FF            CALL 0x00405240
LAB_0063b6c4:
0063B6C4  6A 0D                     PUSH 0xd
0063B6C6  8B CE                     MOV ECX,ESI
0063B6C8  E8 DF 6B DC FF            CALL 0x004022ac
0063B6CD  8B F8                     MOV EDI,EAX
0063B6CF  6A 0D                     PUSH 0xd
0063B6D1  8B CE                     MOV ECX,ESI
0063B6D3  4F                        DEC EDI
0063B6D4  E8 D6 8B DC FF            CALL 0x004042af
0063B6D9  3B F8                     CMP EDI,EAX
0063B6DB  75 09                     JNZ 0x0063b6e6
0063B6DD  6A 0D                     PUSH 0xd
0063B6DF  8B CE                     MOV ECX,ESI
0063B6E1  E8 7E 8B DC FF            CALL 0x00404264
LAB_0063b6e6:
0063B6E6  6A 0F                     PUSH 0xf
0063B6E8  8B CE                     MOV ECX,ESI
0063B6EA  E8 BD 6B DC FF            CALL 0x004022ac
0063B6EF  8B F8                     MOV EDI,EAX
0063B6F1  6A 0F                     PUSH 0xf
0063B6F3  8B CE                     MOV ECX,ESI
0063B6F5  4F                        DEC EDI
0063B6F6  E8 B4 8B DC FF            CALL 0x004042af
0063B6FB  3B F8                     CMP EDI,EAX
0063B6FD  75 07                     JNZ 0x0063b706
0063B6FF  C6 83 65 02 00 00 0D      MOV byte ptr [EBX + 0x265],0xd
LAB_0063b706:
0063B706  8B 03                     MOV EAX,dword ptr [EBX]
0063B708  8B CB                     MOV ECX,EBX
0063B70A  FF 90 D8 00 00 00         CALL dword ptr [EAX + 0xd8]
0063B710  5F                        POP EDI
0063B711  5E                        POP ESI
0063B712  33 C0                     XOR EAX,EAX
0063B714  5B                        POP EBX
0063B715  8B E5                     MOV ESP,EBP
0063B717  5D                        POP EBP
0063B718  C2 04 00                  RET 0x4
LAB_0063b71b:
0063B71B  8D 8B D5 01 00 00         LEA ECX,[EBX + 0x1d5]
0063B721  E8 AF 6A DC FF            CALL 0x004021d5
0063B726  8B 83 3A 03 00 00         MOV EAX,dword ptr [EBX + 0x33a]
0063B72C  83 CF FF                  OR EDI,0xffffffff
0063B72F  85 C0                     TEST EAX,EAX
0063B731  7C 12                     JL 0x0063b745
0063B733  8B 8B 11 02 00 00         MOV ECX,dword ptr [EBX + 0x211]
0063B739  50                        PUSH EAX
0063B73A  E8 61 D4 0A 00            CALL 0x006e8ba0
0063B73F  89 BB 3A 03 00 00         MOV dword ptr [EBX + 0x33a],EDI
LAB_0063b745:
0063B745  8B 83 53 03 00 00         MOV EAX,dword ptr [EBX + 0x353]
0063B74B  85 C0                     TEST EAX,EAX
0063B74D  7C 12                     JL 0x0063b761
0063B74F  8B 8B 11 02 00 00         MOV ECX,dword ptr [EBX + 0x211]
0063B755  50                        PUSH EAX
0063B756  E8 45 D4 0A 00            CALL 0x006e8ba0
0063B75B  89 BB 53 03 00 00         MOV dword ptr [EBX + 0x353],EDI
LAB_0063b761:
0063B761  8B CB                     MOV ECX,EBX
0063B763  E8 38 9F DC FF            CALL 0x004056a0
0063B768  8B CB                     MOV ECX,EBX
0063B76A  E8 7D 99 DC FF            CALL 0x004050ec
0063B76F  5F                        POP EDI
0063B770  5E                        POP ESI
0063B771  33 C0                     XOR EAX,EAX
0063B773  5B                        POP EBX
0063B774  8B E5                     MOV ESP,EBP
0063B776  5D                        POP EBP
0063B777  C2 04 00                  RET 0x4
LAB_0063b77a:
0063B77A  2D 0F 01 00 00            SUB EAX,0x10f
0063B77F  74 26                     JZ 0x0063b7a7
0063B781  83 E8 19                  SUB EAX,0x19
0063B784  0F 85 9E 00 00 00         JNZ 0x0063b828
0063B78A  8D 8B D5 01 00 00         LEA ECX,[EBX + 0x1d5]
0063B790  E8 7A 85 DC FF            CALL 0x00403d0f
switchD_00639e3d::caseD_d:
0063B795  8B CB                     MOV ECX,EBX
0063B797  E8 6C A0 DC FF            CALL 0x00405808
0063B79C  5F                        POP EDI
0063B79D  5E                        POP ESI
0063B79E  33 C0                     XOR EAX,EAX
0063B7A0  5B                        POP EBX
0063B7A1  8B E5                     MOV ESP,EBP
0063B7A3  5D                        POP EBP
0063B7A4  C2 04 00                  RET 0x4
LAB_0063b7a7:
0063B7A7  8D 4D F4                  LEA ECX,[EBP + -0xc]
0063B7AA  51                        PUSH ECX
0063B7AB  8B CB                     MOV ECX,EBX
0063B7AD  E8 84 9A DC FF            CALL 0x00405236
0063B7B2  8D 55 08                  LEA EDX,[EBP + 0x8]
0063B7B5  8D 8B D5 01 00 00         LEA ECX,[EBX + 0x1d5]
0063B7BB  52                        PUSH EDX
0063B7BC  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0063B7BF  E8 10 61 DC FF            CALL 0x004018d4
0063B7C4  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
0063B7C7  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0063B7CA  85 C0                     TEST EAX,EAX
0063B7CC  74 2F                     JZ 0x0063b7fd
0063B7CE  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
0063B7D1  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0063B7D4  03 C8                     ADD ECX,EAX
0063B7D6  51                        PUSH ECX
0063B7D7  52                        PUSH EDX
0063B7D8  E8 73 17 07 00            CALL 0x006acf50
0063B7DD  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
0063B7E0  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0063B7E3  8B 75 F0                  MOV ESI,dword ptr [EBP + -0x10]
0063B7E6  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0063B7E9  8D 3C 02                  LEA EDI,[EDX + EAX*0x1]
0063B7EC  8B C1                     MOV EAX,ECX
0063B7EE  C1 E9 02                  SHR ECX,0x2
0063B7F1  F3 A5                     MOVSD.REP ES:EDI,ESI
0063B7F3  8B C8                     MOV ECX,EAX
0063B7F5  83 E1 03                  AND ECX,0x3
0063B7F8  F3 A4                     MOVSB.REP ES:EDI,ESI
0063B7FA  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
LAB_0063b7fd:
0063B7FD  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
0063B800  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0063B803  03 C8                     ADD ECX,EAX
0063B805  8B 43 18                  MOV EAX,dword ptr [EBX + 0x18]
0063B808  51                        PUSH ECX
0063B809  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
0063B80F  52                        PUSH EDX
0063B810  50                        PUSH EAX
0063B811  E8 E3 6D DC FF            CALL 0x004025f9
0063B816  8D 4D FC                  LEA ECX,[EBP + -0x4]
0063B819  51                        PUSH ECX
0063B81A  E8 41 F8 06 00            CALL 0x006ab060
0063B81F  8D 55 F0                  LEA EDX,[EBP + -0x10]
0063B822  52                        PUSH EDX
0063B823  E8 38 F8 06 00            CALL 0x006ab060
switchD_00639e3d::caseD_c:
0063B828  5F                        POP EDI
0063B829  5E                        POP ESI
0063B82A  33 C0                     XOR EAX,EAX
0063B82C  5B                        POP EBX
0063B82D  8B E5                     MOV ESP,EBP
0063B82F  5D                        POP EBP
0063B830  C2 04 00                  RET 0x4
