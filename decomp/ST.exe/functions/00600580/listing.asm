FUN_00600580:
00600580  55                        PUSH EBP
00600581  8B EC                     MOV EBP,ESP
00600583  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00600586  B8 79 19 8C 02            MOV EAX,0x28c1979
0060058B  85 C9                     TEST ECX,ECX
0060058D  7C 13                     JL 0x006005a2
0060058F  F7 E9                     IMUL ECX
00600591  D1 FA                     SAR EDX,0x1
00600593  8B C2                     MOV EAX,EDX
00600595  C1 E8 1F                  SHR EAX,0x1f
00600598  03 D0                     ADD EDX,EAX
0060059A  0F BF CA                  MOVSX ECX,DX
0060059D  89 4D 08                  MOV dword ptr [EBP + 0x8],ECX
006005A0  EB 12                     JMP 0x006005b4
LAB_006005a2:
006005A2  F7 E9                     IMUL ECX
006005A4  D1 FA                     SAR EDX,0x1
006005A6  8B C2                     MOV EAX,EDX
006005A8  C1 E8 1F                  SHR EAX,0x1f
006005AB  03 D0                     ADD EDX,EAX
006005AD  0F BF C2                  MOVSX EAX,DX
006005B0  48                        DEC EAX
006005B1  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
LAB_006005b4:
006005B4  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006005B7  53                        PUSH EBX
006005B8  56                        PUSH ESI
006005B9  57                        PUSH EDI
006005BA  85 C9                     TEST ECX,ECX
006005BC  B8 79 19 8C 02            MOV EAX,0x28c1979
006005C1  7C 10                     JL 0x006005d3
006005C3  F7 E9                     IMUL ECX
006005C5  D1 FA                     SAR EDX,0x1
006005C7  8B CA                     MOV ECX,EDX
006005C9  C1 E9 1F                  SHR ECX,0x1f
006005CC  03 D1                     ADD EDX,ECX
006005CE  0F BF DA                  MOVSX EBX,DX
006005D1  EB 0F                     JMP 0x006005e2
LAB_006005d3:
006005D3  F7 E9                     IMUL ECX
006005D5  D1 FA                     SAR EDX,0x1
006005D7  8B C2                     MOV EAX,EDX
006005D9  C1 E8 1F                  SHR EAX,0x1f
006005DC  03 D0                     ADD EDX,EAX
006005DE  0F BF DA                  MOVSX EBX,DX
006005E1  4B                        DEC EBX
LAB_006005e2:
006005E2  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
006005E5  B8 1F 85 EB 51            MOV EAX,0x51eb851f
006005EA  85 C9                     TEST ECX,ECX
006005EC  7C 11                     JL 0x006005ff
006005EE  F7 E9                     IMUL ECX
006005F0  C1 FA 06                  SAR EDX,0x6
006005F3  8B CA                     MOV ECX,EDX
006005F5  C1 E9 1F                  SHR ECX,0x1f
006005F8  03 D1                     ADD EDX,ECX
006005FA  0F BF F2                  MOVSX ESI,DX
006005FD  EB 10                     JMP 0x0060060f
LAB_006005ff:
006005FF  F7 E9                     IMUL ECX
00600601  C1 FA 06                  SAR EDX,0x6
00600604  8B C2                     MOV EAX,EDX
00600606  C1 E8 1F                  SHR EAX,0x1f
00600609  03 D0                     ADD EDX,EAX
0060060B  0F BF F2                  MOVSX ESI,DX
0060060E  4E                        DEC ESI
LAB_0060060f:
0060060F  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
00600612  B8 79 19 8C 02            MOV EAX,0x28c1979
00600617  85 C9                     TEST ECX,ECX
00600619  7C 10                     JL 0x0060062b
0060061B  F7 E9                     IMUL ECX
0060061D  D1 FA                     SAR EDX,0x1
0060061F  8B CA                     MOV ECX,EDX
00600621  C1 E9 1F                  SHR ECX,0x1f
00600624  03 D1                     ADD EDX,ECX
00600626  0F BF FA                  MOVSX EDI,DX
00600629  EB 0F                     JMP 0x0060063a
LAB_0060062b:
0060062B  F7 E9                     IMUL ECX
0060062D  D1 FA                     SAR EDX,0x1
0060062F  8B C2                     MOV EAX,EDX
00600631  C1 E8 1F                  SHR EAX,0x1f
00600634  03 D0                     ADD EDX,EAX
00600636  0F BF FA                  MOVSX EDI,DX
00600639  4F                        DEC EDI
LAB_0060063a:
0060063A  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
0060063D  B8 79 19 8C 02            MOV EAX,0x28c1979
00600642  85 C9                     TEST ECX,ECX
00600644  7C 10                     JL 0x00600656
00600646  F7 E9                     IMUL ECX
00600648  D1 FA                     SAR EDX,0x1
0060064A  8B CA                     MOV ECX,EDX
0060064C  C1 E9 1F                  SHR ECX,0x1f
0060064F  03 D1                     ADD EDX,ECX
00600651  0F BF CA                  MOVSX ECX,DX
00600654  EB 0F                     JMP 0x00600665
LAB_00600656:
00600656  F7 E9                     IMUL ECX
00600658  D1 FA                     SAR EDX,0x1
0060065A  8B C2                     MOV EAX,EDX
0060065C  C1 E8 1F                  SHR EAX,0x1f
0060065F  03 D0                     ADD EDX,EAX
00600661  0F BF CA                  MOVSX ECX,DX
00600664  49                        DEC ECX
LAB_00600665:
00600665  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
00600668  B8 1F 85 EB 51            MOV EAX,0x51eb851f
0060066D  85 D2                     TEST EDX,EDX
0060066F  7C 11                     JL 0x00600682
00600671  F7 EA                     IMUL EDX
00600673  C1 FA 06                  SAR EDX,0x6
00600676  8B C2                     MOV EAX,EDX
00600678  C1 E8 1F                  SHR EAX,0x1f
0060067B  03 D0                     ADD EDX,EAX
0060067D  0F BF C2                  MOVSX EAX,DX
00600680  EB 10                     JMP 0x00600692
LAB_00600682:
00600682  F7 EA                     IMUL EDX
00600684  C1 FA 06                  SAR EDX,0x6
00600687  8B C2                     MOV EAX,EDX
00600689  C1 E8 1F                  SHR EAX,0x1f
0060068C  03 D0                     ADD EDX,EAX
0060068E  0F BF C2                  MOVSX EAX,DX
00600691  48                        DEC EAX
LAB_00600692:
00600692  2B F0                     SUB ESI,EAX
00600694  85 F6                     TEST ESI,ESI
00600696  7E 25                     JLE 0x006006bd
00600698  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0060069B  53                        PUSH EBX
0060069C  52                        PUSH EDX
0060069D  51                        PUSH ECX
0060069E  57                        PUSH EDI
0060069F  E8 2C C9 0A 00            CALL 0x006acfd0
006006A4  8B C8                     MOV ECX,EAX
006006A6  8B C6                     MOV EAX,ESI
006006A8  99                        CDQ
006006A9  33 C2                     XOR EAX,EDX
006006AB  2B C2                     SUB EAX,EDX
006006AD  3B C8                     CMP ECX,EAX
006006AF  7D 2C                     JGE 0x006006dd
006006B1  5F                        POP EDI
006006B2  5E                        POP ESI
006006B3  B8 01 00 00 00            MOV EAX,0x1
006006B8  5B                        POP EBX
006006B9  5D                        POP EBP
006006BA  C2 24 00                  RET 0x24
LAB_006006bd:
006006BD  83 F8 04                  CMP EAX,0x4
006006C0  75 1B                     JNZ 0x006006dd
006006C2  8B 55 20                  MOV EDX,dword ptr [EBP + 0x20]
006006C5  8B 45 24                  MOV EAX,dword ptr [EBP + 0x24]
006006C8  8B 4D 28                  MOV ECX,dword ptr [EBP + 0x28]
006006CB  C7 02 FF FF FF FF         MOV dword ptr [EDX],0xffffffff
006006D1  C7 00 FF FF FF FF         MOV dword ptr [EAX],0xffffffff
006006D7  C7 01 FF FF FF FF         MOV dword ptr [ECX],0xffffffff
LAB_006006dd:
006006DD  5F                        POP EDI
006006DE  5E                        POP ESI
006006DF  33 C0                     XOR EAX,EAX
006006E1  5B                        POP EBX
006006E2  5D                        POP EBP
006006E3  C2 24 00                  RET 0x24
