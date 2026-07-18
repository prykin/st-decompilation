FUN_00728170:
00728170  55                        PUSH EBP
00728171  8B EC                     MOV EBP,ESP
00728173  83 EC 08                  SUB ESP,0x8
00728176  53                        PUSH EBX
00728177  56                        PUSH ESI
00728178  57                        PUSH EDI
00728179  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
0072817C  8B 77 24                  MOV ESI,dword ptr [EDI + 0x24]
0072817F  3B 35 DC 70 85 00         CMP ESI,dword ptr [0x008570dc]
00728185  0F 8E 16 01 00 00         JLE 0x007282a1
0072818B  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
0072818E  8B 53 24                  MOV EDX,dword ptr [EBX + 0x24]
00728191  3B 15 5C 70 85 00         CMP EDX,dword ptr [0x0085705c]
00728197  0F 8D 04 01 00 00         JGE 0x007282a1
0072819D  C1 FE 10                  SAR ESI,0x10
007281A0  C1 FA 10                  SAR EDX,0x10
007281A3  2B F2                     SUB ESI,EDX
007281A5  0F 8E F6 00 00 00         JLE 0x007282a1
007281AB  8B 43 1C                  MOV EAX,dword ptr [EBX + 0x1c]
007281AE  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
007281B1  8B 77 24                  MOV ESI,dword ptr [EDI + 0x24]
007281B4  8B 53 24                  MOV EDX,dword ptr [EBX + 0x24]
007281B7  81 E6 00 00 FF FF         AND ESI,0xffff0000
007281BD  81 E2 00 00 FF FF         AND EDX,0xffff0000
007281C3  2B F2                     SUB ESI,EDX
007281C5  8B 57 1C                  MOV EDX,dword ptr [EDI + 0x1c]
007281C8  2B 55 F8                  SUB EDX,dword ptr [EBP + -0x8]
007281CB  2B C0                     SUB EAX,EAX
007281CD  0F AC D0 10               SHRD EAX,EDX,0x10
007281D1  C1 FA 10                  SAR EDX,0x10
007281D4  F7 FE                     IDIV ESI
007281D6  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
007281D9  8B 4F 24                  MOV ECX,dword ptr [EDI + 0x24]
007281DC  81 E1 00 00 FF FF         AND ECX,0xffff0000
007281E2  3B 0D 5C 70 85 00         CMP ECX,dword ptr [0x0085705c]
007281E8  7C 06                     JL 0x007281f0
007281EA  8B 0D 5C 70 85 00         MOV ECX,dword ptr [0x0085705c]
LAB_007281f0:
007281F0  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
007281F3  8B 7E 24                  MOV EDI,dword ptr [ESI + 0x24]
007281F6  81 E7 00 00 FF FF         AND EDI,0xffff0000
007281FC  3B 3D DC 70 85 00         CMP EDI,dword ptr [0x008570dc]
00728202  7D 1A                     JGE 0x0072821e
00728204  F7 DF                     NEG EDI
00728206  03 3D DC 70 85 00         ADD EDI,dword ptr [0x008570dc]
0072820C  57                        PUSH EDI
0072820D  FF 75 FC                  PUSH dword ptr [EBP + -0x4]
00728210  E8 DB 33 FB FF            CALL 0x006db5f0
00728215  01 45 F8                  ADD dword ptr [EBP + -0x8],EAX
00728218  8B 3D DC 70 85 00         MOV EDI,dword ptr [0x008570dc]
LAB_0072821e:
0072821E  2B CF                     SUB ECX,EDI
00728220  7E 7F                     JLE 0x007282a1
00728222  C1 E9 10                  SHR ECX,0x10
00728225  C1 EF 10                  SHR EDI,0x10
00728228  A1 90 70 85 00            MOV EAX,[0x00857090]
0072822D  F7 25 98 70 85 00         MUL dword ptr [0x00857098]
00728233  03 F8                     ADD EDI,EAX
00728235  8B DF                     MOV EBX,EDI
00728237  03 3D 8C 70 85 00         ADD EDI,dword ptr [0x0085708c]
0072823D  8D 1C 5D 00 00 00 00      LEA EBX,[EBX*0x2 + 0x0]
00728244  A0 F8 70 85 00            MOV AL,[0x008570f8]
00728249  03 1D 7C 70 85 00         ADD EBX,dword ptr [0x0085707c]
0072824F  51                        PUSH ECX
00728250  F3 AA                     STOSB.REP ES:EDI
00728252  59                        POP ECX
00728253  8B FB                     MOV EDI,EBX
00728255  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
00728258  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
0072825B  F7 C7 02 00 00 00         TEST EDI,0x2
00728261  74 10                     JZ 0x00728273
00728263  8B C2                     MOV EAX,EDX
00728265  C1 E8 10                  SHR EAX,0x10
00728268  66 89 07                  MOV word ptr [EDI],AX
0072826B  83 C7 02                  ADD EDI,0x2
0072826E  03 D3                     ADD EDX,EBX
00728270  49                        DEC ECX
00728271  7E 2E                     JLE 0x007282a1
LAB_00728273:
00728273  83 E9 02                  SUB ECX,0x2
00728276  7C 1E                     JL 0x00728296
LAB_00728278:
00728278  8B C2                     MOV EAX,EDX
0072827A  03 D3                     ADD EDX,EBX
0072827C  83 C7 04                  ADD EDI,0x4
0072827F  8B F2                     MOV ESI,EDX
00728281  C1 E8 10                  SHR EAX,0x10
00728284  81 E6 00 00 FF FF         AND ESI,0xffff0000
0072828A  03 D3                     ADD EDX,EBX
0072828C  0B C6                     OR EAX,ESI
0072828E  83 E9 02                  SUB ECX,0x2
00728291  89 47 FC                  MOV dword ptr [EDI + -0x4],EAX
00728294  7D E2                     JGE 0x00728278
LAB_00728296:
00728296  F6 C1 01                  TEST CL,0x1
00728299  74 06                     JZ 0x007282a1
0072829B  C1 EA 10                  SHR EDX,0x10
0072829E  66 89 17                  MOV word ptr [EDI],DX
LAB_007282a1:
007282A1  5F                        POP EDI
007282A2  5E                        POP ESI
007282A3  5B                        POP EBX
007282A4  8B E5                     MOV ESP,EBP
007282A6  5D                        POP EBP
007282A7  C3                        RET
