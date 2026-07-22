STParticleC::sub_00629F90:
00629F90  55                        PUSH EBP
00629F91  8B EC                     MOV EBP,ESP
00629F93  56                        PUSH ESI
00629F94  57                        PUSH EDI
00629F95  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
00629F98  8B F1                     MOV ESI,ECX
00629F9A  8B 47 42                  MOV EAX,dword ptr [EDI + 0x42]
00629F9D  89 86 D2 00 00 00         MOV dword ptr [ESI + 0xd2],EAX
00629FA3  8B 4F 20                  MOV ECX,dword ptr [EDI + 0x20]
00629FA6  89 4E 46                  MOV dword ptr [ESI + 0x46],ECX
00629FA9  8B 57 24                  MOV EDX,dword ptr [EDI + 0x24]
00629FAC  89 56 4A                  MOV dword ptr [ESI + 0x4a],EDX
00629FAF  8B 47 28                  MOV EAX,dword ptr [EDI + 0x28]
00629FB2  89 46 4E                  MOV dword ptr [ESI + 0x4e],EAX
00629FB5  8B 4F 20                  MOV ECX,dword ptr [EDI + 0x20]
00629FB8  89 4E 7A                  MOV dword ptr [ESI + 0x7a],ECX
00629FBB  8B 57 24                  MOV EDX,dword ptr [EDI + 0x24]
00629FBE  89 56 7E                  MOV dword ptr [ESI + 0x7e],EDX
00629FC1  8B 47 28                  MOV EAX,dword ptr [EDI + 0x28]
00629FC4  89 86 82 00 00 00         MOV dword ptr [ESI + 0x82],EAX
00629FCA  8B 4F 20                  MOV ECX,dword ptr [EDI + 0x20]
00629FCD  89 4E 52                  MOV dword ptr [ESI + 0x52],ECX
00629FD0  8B 57 24                  MOV EDX,dword ptr [EDI + 0x24]
00629FD3  89 56 56                  MOV dword ptr [ESI + 0x56],EDX
00629FD6  8B 47 28                  MOV EAX,dword ptr [EDI + 0x28]
00629FD9  89 46 5A                  MOV dword ptr [ESI + 0x5a],EAX
00629FDC  8A 46 40                  MOV AL,byte ptr [ESI + 0x40]
00629FDF  84 C0                     TEST AL,AL
00629FE1  74 0D                     JZ 0x00629ff0
00629FE3  8B CE                     MOV ECX,ESI
00629FE5  E8 EA 73 DD FF            CALL 0x004013d4
00629FEA  88 86 D6 00 00 00         MOV byte ptr [ESI + 0xd6],AL
LAB_00629ff0:
00629FF0  DB 47 2C                  FILD dword ptr [EDI + 0x2c]
00629FF3  D8 0D 64 D0 79 00         FMUL float ptr [0x0079d064]
00629FF9  D8 0D 60 D0 79 00         FMUL float ptr [0x0079d060]
00629FFF  D9 C0                     FLD ST0
0062A001  D9 FE                     FSIN
0062A003  D8 0D 90 C5 79 00         FMUL float ptr [0x0079c590]
0062A009  E8 7A 42 10 00            CALL 0x0072e288
0062A00E  D9 FF                     FCOS
0062A010  89 86 8A 00 00 00         MOV dword ptr [ESI + 0x8a],EAX
0062A016  D8 0D 90 C5 79 00         FMUL float ptr [0x0079c590]
0062A01C  E8 67 42 10 00            CALL 0x0072e288
0062A021  85 C0                     TEST EAX,EAX
0062A023  89 86 8E 00 00 00         MOV dword ptr [ESI + 0x8e],EAX
0062A029  7D 08                     JGE 0x0062a033
0062A02B  F7 D8                     NEG EAX
0062A02D  89 86 8E 00 00 00         MOV dword ptr [ESI + 0x8e],EAX
LAB_0062a033:
0062A033  DB 47 30                  FILD dword ptr [EDI + 0x30]
0062A036  D8 0D 64 D0 79 00         FMUL float ptr [0x0079d064]
0062A03C  D8 0D 60 D0 79 00         FMUL float ptr [0x0079d060]
0062A042  D9 C0                     FLD ST0
0062A044  D9 FE                     FSIN
0062A046  D8 0D 90 C5 79 00         FMUL float ptr [0x0079c590]
0062A04C  E8 37 42 10 00            CALL 0x0072e288
0062A051  D9 FF                     FCOS
0062A053  89 86 92 00 00 00         MOV dword ptr [ESI + 0x92],EAX
0062A059  D8 0D 90 C5 79 00         FMUL float ptr [0x0079c590]
0062A05F  E8 24 42 10 00            CALL 0x0072e288
0062A064  89 86 96 00 00 00         MOV dword ptr [ESI + 0x96],EAX
0062A06A  8B 4F 34                  MOV ECX,dword ptr [EDI + 0x34]
0062A06D  89 8E 9A 00 00 00         MOV dword ptr [ESI + 0x9a],ECX
0062A073  C7 86 A2 00 00 00 05 00 00 00  MOV dword ptr [ESI + 0xa2],0x5
0062A07D  8B 47 38                  MOV EAX,dword ptr [EDI + 0x38]
0062A080  85 C0                     TEST EAX,EAX
0062A082  74 08                     JZ 0x0062a08c
0062A084  89 86 A6 00 00 00         MOV dword ptr [ESI + 0xa6],EAX
0062A08A  EB 0A                     JMP 0x0062a096
LAB_0062a08c:
0062A08C  C7 86 A6 00 00 00 E8 03 00 00  MOV dword ptr [ESI + 0xa6],0x3e8
LAB_0062a096:
0062A096  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0062A099  8B 4E 46                  MOV ECX,dword ptr [ESI + 0x46]
0062A09C  89 86 AA 00 00 00         MOV dword ptr [ESI + 0xaa],EAX
0062A0A2  89 86 AE 00 00 00         MOV dword ptr [ESI + 0xae],EAX
0062A0A8  85 C9                     TEST ECX,ECX
0062A0AA  B8 79 19 8C 02            MOV EAX,0x28c1979
0062A0AF  7C 10                     JL 0x0062a0c1
0062A0B1  F7 E9                     IMUL ECX
0062A0B3  D1 FA                     SAR EDX,0x1
0062A0B5  8B C2                     MOV EAX,EDX
0062A0B7  C1 E8 1F                  SHR EAX,0x1f
0062A0BA  03 D0                     ADD EDX,EAX
0062A0BC  0F BF C2                  MOVSX EAX,DX
0062A0BF  EB 0F                     JMP 0x0062a0d0
LAB_0062a0c1:
0062A0C1  F7 E9                     IMUL ECX
0062A0C3  D1 FA                     SAR EDX,0x1
0062A0C5  8B CA                     MOV ECX,EDX
0062A0C7  C1 E9 1F                  SHR ECX,0x1f
0062A0CA  03 D1                     ADD EDX,ECX
0062A0CC  0F BF C2                  MOVSX EAX,DX
0062A0CF  48                        DEC EAX
LAB_0062a0d0:
0062A0D0  8B 4E 4A                  MOV ECX,dword ptr [ESI + 0x4a]
0062A0D3  89 46 5E                  MOV dword ptr [ESI + 0x5e],EAX
0062A0D6  85 C9                     TEST ECX,ECX
0062A0D8  B8 79 19 8C 02            MOV EAX,0x28c1979
0062A0DD  7C 10                     JL 0x0062a0ef
0062A0DF  F7 E9                     IMUL ECX
0062A0E1  D1 FA                     SAR EDX,0x1
0062A0E3  8B C2                     MOV EAX,EDX
0062A0E5  C1 E8 1F                  SHR EAX,0x1f
0062A0E8  03 D0                     ADD EDX,EAX
0062A0EA  0F BF C2                  MOVSX EAX,DX
0062A0ED  EB 0F                     JMP 0x0062a0fe
LAB_0062a0ef:
0062A0EF  F7 E9                     IMUL ECX
0062A0F1  D1 FA                     SAR EDX,0x1
0062A0F3  8B CA                     MOV ECX,EDX
0062A0F5  C1 E9 1F                  SHR ECX,0x1f
0062A0F8  03 D1                     ADD EDX,ECX
0062A0FA  0F BF C2                  MOVSX EAX,DX
0062A0FD  48                        DEC EAX
LAB_0062a0fe:
0062A0FE  8B 4E 4E                  MOV ECX,dword ptr [ESI + 0x4e]
0062A101  89 46 62                  MOV dword ptr [ESI + 0x62],EAX
0062A104  85 C9                     TEST ECX,ECX
0062A106  B8 1F 85 EB 51            MOV EAX,0x51eb851f
0062A10B  7C 11                     JL 0x0062a11e
0062A10D  F7 E9                     IMUL ECX
0062A10F  C1 FA 06                  SAR EDX,0x6
0062A112  8B C2                     MOV EAX,EDX
0062A114  C1 E8 1F                  SHR EAX,0x1f
0062A117  03 D0                     ADD EDX,EAX
0062A119  0F BF C2                  MOVSX EAX,DX
0062A11C  EB 10                     JMP 0x0062a12e
LAB_0062a11e:
0062A11E  F7 E9                     IMUL ECX
0062A120  C1 FA 06                  SAR EDX,0x6
0062A123  8B CA                     MOV ECX,EDX
0062A125  C1 E9 1F                  SHR ECX,0x1f
0062A128  03 D1                     ADD EDX,ECX
0062A12A  0F BF C2                  MOVSX EAX,DX
0062A12D  48                        DEC EAX
LAB_0062a12e:
0062A12E  89 46 66                  MOV dword ptr [ESI + 0x66],EAX
0062A131  8A 47 41                  MOV AL,byte ptr [EDI + 0x41]
0062A134  84 C0                     TEST AL,AL
0062A136  88 86 C0 00 00 00         MOV byte ptr [ESI + 0xc0],AL
0062A13C  0F 84 A8 00 00 00         JZ 0x0062a1ea
0062A142  8B 46 14                  MOV EAX,dword ptr [ESI + 0x14]
0062A145  C6 86 BE 00 00 00 1E      MOV byte ptr [ESI + 0xbe],0x1e
0062A14C  C1 E8 08                  SHR EAX,0x8
0062A14F  25 FF 00 00 00            AND EAX,0xff
0062A154  3D 80 00 00 00            CMP EAX,0x80
0062A159  0F 87 84 00 00 00         JA 0x0062a1e3
0062A15F  33 D2                     XOR EDX,EDX
0062A161  8A 90 10 A2 62 00         MOV DL,byte ptr [EAX + 0x62a210]
switchD_0062a167::switchD:
0062A167  FF 24 95 F4 A1 62 00      JMP dword ptr [EDX*0x4 + 0x62a1f4]
switchD_0062a167::caseD_0:
0062A16E  83 7F 1C 04               CMP dword ptr [EDI + 0x1c],0x4
0062A172  75 16                     JNZ 0x0062a18a
0062A174  33 C0                     XOR EAX,EAX
0062A176  8A 47 14                  MOV AL,byte ptr [EDI + 0x14]
0062A179  8A 0C C5 F0 0A 7D 00      MOV CL,byte ptr [EAX*0x8 + 0x7d0af0]
0062A180  D0 E9                     SHR CL,0x1
0062A182  88 8E BE 00 00 00         MOV byte ptr [ESI + 0xbe],CL
0062A188  EB 59                     JMP 0x0062a1e3
LAB_0062a18a:
0062A18A  33 D2                     XOR EDX,EDX
0062A18C  8A 57 14                  MOV DL,byte ptr [EDI + 0x14]
0062A18F  8A 04 D5 70 0A 7D 00      MOV AL,byte ptr [EDX*0x8 + 0x7d0a70]
0062A196  D0 E8                     SHR AL,0x1
0062A198  EB 43                     JMP 0x0062a1dd
switchD_0062a167::caseD_1:
0062A19A  33 C9                     XOR ECX,ECX
0062A19C  8A 4F 14                  MOV CL,byte ptr [EDI + 0x14]
0062A19F  8A 14 CD F0 0B 7D 00      MOV DL,byte ptr [ECX*0x8 + 0x7d0bf0]
0062A1A6  D0 EA                     SHR DL,0x1
0062A1A8  88 96 BE 00 00 00         MOV byte ptr [ESI + 0xbe],DL
0062A1AE  EB 33                     JMP 0x0062a1e3
switchD_0062a167::caseD_4:
0062A1B0  33 C0                     XOR EAX,EAX
0062A1B2  8A 46 14                  MOV AL,byte ptr [ESI + 0x14]
0062A1B5  8B 04 85 00 0A 7D 00      MOV EAX,dword ptr [EAX*0x4 + 0x7d0a00]
0062A1BC  EB 1A                     JMP 0x0062a1d8
switchD_0062a167::caseD_80:
0062A1BE  A1 B8 08 7D 00            MOV EAX,[0x007d08b8]
0062A1C3  EB 13                     JMP 0x0062a1d8
switchD_0062a167::caseD_10:
0062A1C5  33 C0                     XOR EAX,EAX
0062A1C7  8A 47 14                  MOV AL,byte ptr [EDI + 0x14]
0062A1CA  8B 04 C5 F0 0A 7D 00      MOV EAX,dword ptr [EAX*0x8 + 0x7d0af0]
0062A1D1  EB 05                     JMP 0x0062a1d8
switchD_0062a167::caseD_2:
0062A1D3  A1 D4 09 7D 00            MOV EAX,[0x007d09d4]
LAB_0062a1d8:
0062A1D8  99                        CDQ
0062A1D9  2B C2                     SUB EAX,EDX
0062A1DB  D1 F8                     SAR EAX,0x1
LAB_0062a1dd:
0062A1DD  88 86 BE 00 00 00         MOV byte ptr [ESI + 0xbe],AL
STParticleC::sub_00629F90::cf_common_exit_0062A1E3:
0062A1E3  80 86 BE 00 00 00 0A      ADD byte ptr [ESI + 0xbe],0xa
LAB_0062a1ea:
0062A1EA  5F                        POP EDI
0062A1EB  33 C0                     XOR EAX,EAX
0062A1ED  5E                        POP ESI
0062A1EE  5D                        POP EBP
0062A1EF  C2 08 00                  RET 0x8
