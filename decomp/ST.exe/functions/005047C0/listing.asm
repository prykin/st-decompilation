CPanelTy::PaintPerRes:
005047C0  55                        PUSH EBP
005047C1  8B EC                     MOV EBP,ESP
005047C3  83 EC 50                  SUB ESP,0x50
005047C6  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
005047CB  53                        PUSH EBX
005047CC  56                        PUSH ESI
005047CD  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
005047D0  57                        PUSH EDI
005047D1  8D 55 B4                  LEA EDX,[EBP + -0x4c]
005047D4  8D 4D B0                  LEA ECX,[EBP + -0x50]
005047D7  6A 00                     PUSH 0x0
005047D9  52                        PUSH EDX
005047DA  89 45 B0                  MOV dword ptr [EBP + -0x50],EAX
005047DD  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005047E3  E8 08 90 22 00            CALL 0x0072d7f0
005047E8  8B F0                     MOV ESI,EAX
005047EA  83 C4 08                  ADD ESP,0x8
005047ED  85 F6                     TEST ESI,ESI
005047EF  0F 85 05 01 00 00         JNZ 0x005048fa
005047F5  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
005047F8  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
005047FB  68 14 27 00 00            PUSH 0x2714
00504800  8A 86 33 0C 00 00         MOV AL,byte ptr [ESI + 0xc33]
00504806  8B 8E 94 01 00 00         MOV ECX,dword ptr [ESI + 0x194]
0050480C  8D 7B 39                  LEA EDI,[EBX + 0x39]
0050480F  50                        PUSH EAX
00504810  6A 65                     PUSH 0x65
00504812  57                        PUSH EDI
00504813  51                        PUSH ECX
00504814  8B CE                     MOV ECX,ESI
00504816  E8 62 04 F0 FF            CALL 0x00404c7d
0050481B  66 8B 96 1C 0C 00 00      MOV DX,word ptr [ESI + 0xc1c]
00504822  8B 86 94 01 00 00         MOV EAX,dword ptr [ESI + 0x194]
00504828  6A 00                     PUSH 0x0
0050482A  6A 03                     PUSH 0x3
0050482C  68 FF FF 00 00            PUSH 0xffff
00504831  52                        PUSH EDX
00504832  6A 70                     PUSH 0x70
00504834  57                        PUSH EDI
00504835  50                        PUSH EAX
00504836  8B CE                     MOV ECX,ESI
00504838  E8 50 12 F0 FF            CALL 0x00405a8d
0050483D  33 C0                     XOR EAX,EAX
0050483F  C6 45 FC 00               MOV byte ptr [EBP + -0x4],0x0
00504843  8A 86 33 0C 00 00         MOV AL,byte ptr [ESI + 0xc33]
00504849  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
0050484C  B8 1F 85 EB 51            MOV EAX,0x51eb851f
00504851  C1 E1 03                  SHL ECX,0x3
00504854  F7 E9                     IMUL ECX
00504856  C1 FA 05                  SAR EDX,0x5
00504859  8B CA                     MOV ECX,EDX
0050485B  C1 E9 1F                  SHR ECX,0x1f
0050485E  03 D1                     ADD EDX,ECX
00504860  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
00504863  74 41                     JZ 0x005048a6
00504865  33 FF                     XOR EDI,EDI
LAB_00504867:
00504867  8B 96 B6 02 00 00         MOV EDX,dword ptr [ESI + 0x2b6]
0050486D  6A 03                     PUSH 0x3
0050486F  52                        PUSH EDX
00504870  E8 2B 6B 20 00            CALL 0x0070b3a0
00504875  8B 8E 94 01 00 00         MOV ECX,dword ptr [ESI + 0x194]
0050487B  50                        PUSH EAX
0050487C  6A 01                     PUSH 0x1
0050487E  8D 44 BB 0B               LEA EAX,[EBX + EDI*0x4 + 0xb]
00504882  6A 5C                     PUSH 0x5c
00504884  50                        PUSH EAX
00504885  51                        PUSH ECX
00504886  E8 9E E9 EF FF            CALL 0x00403229
0050488B  8A 55 FC                  MOV DL,byte ptr [EBP + -0x4]
0050488E  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
00504891  83 C4 1C                  ADD ESP,0x1c
00504894  FE C2                     INC DL
00504896  88 55 FC                  MOV byte ptr [EBP + -0x4],DL
00504899  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
0050489C  81 E7 FF 00 00 00         AND EDI,0xff
005048A2  3B F8                     CMP EDI,EAX
005048A4  72 C1                     JC 0x00504867
LAB_005048a6:
005048A6  80 7D FC 28               CMP byte ptr [EBP + -0x4],0x28
005048AA  73 3C                     JNC 0x005048e8
005048AC  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
005048AF  25 FF 00 00 00            AND EAX,0xff
005048B4  8D 7C 83 0B               LEA EDI,[EBX + EAX*0x4 + 0xb]
005048B8  BB 28 00 00 00            MOV EBX,0x28
005048BD  2B D8                     SUB EBX,EAX
LAB_005048bf:
005048BF  8B 96 B6 02 00 00         MOV EDX,dword ptr [ESI + 0x2b6]
005048C5  6A 00                     PUSH 0x0
005048C7  52                        PUSH EDX
005048C8  E8 D3 6A 20 00            CALL 0x0070b3a0
005048CD  50                        PUSH EAX
005048CE  8B 86 94 01 00 00         MOV EAX,dword ptr [ESI + 0x194]
005048D4  6A 01                     PUSH 0x1
005048D6  6A 5C                     PUSH 0x5c
005048D8  57                        PUSH EDI
005048D9  50                        PUSH EAX
005048DA  E8 4A E9 EF FF            CALL 0x00403229
005048DF  83 C4 1C                  ADD ESP,0x1c
005048E2  83 C7 04                  ADD EDI,0x4
005048E5  4B                        DEC EBX
005048E6  75 D7                     JNZ 0x005048bf
LAB_005048e8:
005048E8  8B 4D B0                  MOV ECX,dword ptr [EBP + -0x50]
005048EB  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005048F1  5F                        POP EDI
005048F2  5E                        POP ESI
005048F3  5B                        POP EBX
005048F4  8B E5                     MOV ESP,EBP
005048F6  5D                        POP EBP
005048F7  C2 04 00                  RET 0x4
LAB_005048fa:
005048FA  8B 55 B0                  MOV EDX,dword ptr [EBP + -0x50]
005048FD  68 5C 27 7C 00            PUSH 0x7c275c
00504902  68 CC 4C 7A 00            PUSH 0x7a4ccc
00504907  56                        PUSH ESI
00504908  6A 00                     PUSH 0x0
0050490A  6A 57                     PUSH 0x57
0050490C  68 00 27 7C 00            PUSH 0x7c2700
00504911  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00504917  E8 B4 8B 1A 00            CALL 0x006ad4d0
0050491C  83 C4 18                  ADD ESP,0x18
0050491F  85 C0                     TEST EAX,EAX
00504921  74 01                     JZ 0x00504924
00504923  CC                        INT3
LAB_00504924:
00504924  6A 57                     PUSH 0x57
00504926  68 00 27 7C 00            PUSH 0x7c2700
0050492B  6A 00                     PUSH 0x0
0050492D  56                        PUSH ESI
0050492E  E8 0D 15 1A 00            CALL 0x006a5e40
00504933  5F                        POP EDI
00504934  5E                        POP ESI
00504935  5B                        POP EBX
00504936  8B E5                     MOV ESP,EBP
00504938  5D                        POP EBP
00504939  C2 04 00                  RET 0x4
