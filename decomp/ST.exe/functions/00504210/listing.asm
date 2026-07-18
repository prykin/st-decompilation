FUN_00504210:
00504210  55                        PUSH EBP
00504211  8B EC                     MOV EBP,ESP
00504213  81 EC A8 00 00 00         SUB ESP,0xa8
00504219  A1 30 67 80 00            MOV EAX,[0x00806730]
0050421E  53                        PUSH EBX
0050421F  56                        PUSH ESI
00504220  3D 00 04 00 00            CMP EAX,0x400
00504225  57                        PUSH EDI
00504226  89 4D E0                  MOV dword ptr [EBP + -0x20],ECX
00504229  0F 8C DB 01 00 00         JL 0x0050440a
0050422F  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
00504234  8D 55 A0                  LEA EDX,[EBP + -0x60]
00504237  8D 4D 9C                  LEA ECX,[EBP + -0x64]
0050423A  6A 00                     PUSH 0x0
0050423C  52                        PUSH EDX
0050423D  89 45 9C                  MOV dword ptr [EBP + -0x64],EAX
00504240  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00504246  E8 A5 95 22 00            CALL 0x0072d7f0
0050424B  8B F0                     MOV ESI,EAX
0050424D  83 C4 08                  ADD ESP,0x8
00504250  85 F6                     TEST ESI,ESI
00504252  0F 85 7A 01 00 00         JNZ 0x005043d2
00504258  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0050425B  8B 5D E0                  MOV EBX,dword ptr [EBP + -0x20]
0050425E  8B C2                     MOV EAX,EDX
00504260  8D BD 58 FF FF FF         LEA EDI,[EBP + 0xffffff58]
00504266  25 FF 00 00 00            AND EAX,0xff
0050426B  80 C2 0E                  ADD DL,0xe
0050426E  8B C8                     MOV ECX,EAX
00504270  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
00504273  C1 E1 05                  SHL ECX,0x5
00504276  03 C8                     ADD ECX,EAX
00504278  8D 84 4B 87 0C 00 00      LEA EAX,[EBX + ECX*0x2 + 0xc87]
0050427F  B9 10 00 00 00            MOV ECX,0x10
00504284  8B F0                     MOV ESI,EAX
00504286  50                        PUSH EAX
00504287  F3 A5                     MOVSD.REP ES:EDI,ESI
00504289  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0050428F  52                        PUSH EDX
00504290  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
00504293  66 A5                     MOVSW ES:EDI,ESI
00504295  E8 22 F3 EF FF            CALL 0x004035bc
0050429A  A1 30 67 80 00            MOV EAX,[0x00806730]
0050429F  C6 45 E8 00               MOV byte ptr [EBP + -0x18],0x0
005042A3  3D 00 04 00 00            CMP EAX,0x400
005042A8  0F 95 C0                  SETNZ AL
005042AB  48                        DEC EAX
005042AC  24 FC                     AND AL,0xfc
005042AE  83 C0 06                  ADD EAX,0x6
005042B1  84 C0                     TEST AL,AL
005042B3  88 45 FF                  MOV byte ptr [EBP + -0x1],AL
005042B6  0F 86 04 01 00 00         JBE 0x005043c0
005042BC  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
005042BF  8B 7D EC                  MOV EDI,dword ptr [EBP + -0x14]
005042C2  8D B5 58 FF FF FF         LEA ESI,[EBP + 0xffffff58]
005042C8  89 7D F8                  MOV dword ptr [EBP + -0x8],EDI
005042CB  8D 14 49                  LEA EDX,[ECX + ECX*0x2]
005042CE  8D 0C 49                  LEA ECX,[ECX + ECX*0x2]
005042D1  89 75 E4                  MOV dword ptr [EBP + -0x1c],ESI
005042D4  8D 94 53 3B 0D 00 00      LEA EDX,[EBX + EDX*0x2 + 0xd3b]
005042DB  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
005042DE  8D 94 CB 53 0D 00 00      LEA EDX,[EBX + ECX*0x8 + 0xd53]
005042E5  89 55 F0                  MOV dword ptr [EBP + -0x10],EDX
LAB_005042e8:
005042E8  B9 0B 00 00 00            MOV ECX,0xb
005042ED  33 D2                     XOR EDX,EDX
005042EF  F3 A6                     CMPSB.REPE ES:EDI,ESI
005042F1  0F 84 97 00 00 00         JZ 0x0050438e
005042F7  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
005042FA  80 79 0C 01               CMP byte ptr [ECX + 0xc],0x1
005042FE  0F 85 8A 00 00 00         JNZ 0x0050438e
00504304  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
00504307  6A 00                     PUSH 0x0
00504309  6A 00                     PUSH 0x0
0050430B  6A 01                     PUSH 0x1
0050430D  6A 00                     PUSH 0x0
0050430F  6A 06                     PUSH 0x6
00504311  52                        PUSH EDX
00504312  8B CB                     MOV ECX,EBX
00504314  E8 9C E0 EF FF            CALL 0x004023b5
00504319  50                        PUSH EAX
0050431A  A1 94 67 80 00            MOV EAX,[0x00806794]
0050431F  6A 1F                     PUSH 0x1f
00504321  50                        PUSH EAX
00504322  E8 C9 57 20 00            CALL 0x00709af0
00504327  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
0050432A  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
0050432D  83 C4 20                  ADD ESP,0x20
00504330  89 41 B8                  MOV dword ptr [ECX + -0x48],EAX
00504333  C6 02 00                  MOV byte ptr [EDX],0x0
00504336  8B 43 38                  MOV EAX,dword ptr [EBX + 0x38]
00504339  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0050433C  89 01                     MOV dword ptr [ECX],EAX
0050433E  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
00504341  51                        PUSH ECX
00504342  52                        PUSH EDX
00504343  8B CB                     MOV ECX,EBX
00504345  E8 0D F8 EF FF            CALL 0x00403b57
0050434A  8A 45 08                  MOV AL,byte ptr [EBP + 0x8]
0050434D  84 C0                     TEST AL,AL
0050434F  0F 94 C0                  SETZ AL
00504352  83 C0 09                  ADD EAX,0x9
00504355  3C 0B                     CMP AL,0xb
00504357  88 45 EC                  MOV byte ptr [EBP + -0x14],AL
0050435A  73 2F                     JNC 0x0050438b
0050435C  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
0050435F  25 FF 00 00 00            AND EAX,0xff
00504364  8B 8C 83 48 01 00 00      MOV ECX,dword ptr [EBX + EAX*0x4 + 0x148]
0050436B  85 C9                     TEST ECX,ECX
0050436D  7C 1C                     JL 0x0050438b
0050436F  8B 94 83 94 00 00 00      MOV EDX,dword ptr [EBX + EAX*0x4 + 0x94]
00504376  8B 44 83 3C               MOV EAX,dword ptr [EBX + EAX*0x4 + 0x3c]
0050437A  52                        PUSH EDX
0050437B  50                        PUSH EAX
0050437C  6A FF                     PUSH -0x1
0050437E  51                        PUSH ECX
0050437F  8B 0D A8 75 80 00         MOV ECX,dword ptr [0x008075a8]
00504385  51                        PUSH ECX
00504386  E8 B5 F2 1A 00            CALL 0x006b3640
LAB_0050438b:
0050438B  8A 45 FF                  MOV AL,byte ptr [EBP + -0x1]
LAB_0050438e:
0050438E  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
00504391  8A 4D E8                  MOV CL,byte ptr [EBP + -0x18]
00504394  8B 75 E4                  MOV ESI,dword ptr [EBP + -0x1c]
00504397  8B 7D F8                  MOV EDI,dword ptr [EBP + -0x8]
0050439A  83 C2 04                  ADD EDX,0x4
0050439D  FE C1                     INC CL
0050439F  89 55 F0                  MOV dword ptr [EBP + -0x10],EDX
005043A2  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
005043A5  83 C6 0B                  ADD ESI,0xb
005043A8  83 C7 0B                  ADD EDI,0xb
005043AB  42                        INC EDX
005043AC  3A C8                     CMP CL,AL
005043AE  88 4D E8                  MOV byte ptr [EBP + -0x18],CL
005043B1  89 75 E4                  MOV dword ptr [EBP + -0x1c],ESI
005043B4  89 7D F8                  MOV dword ptr [EBP + -0x8],EDI
005043B7  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
005043BA  0F 82 28 FF FF FF         JC 0x005042e8
LAB_005043c0:
005043C0  8B 55 9C                  MOV EDX,dword ptr [EBP + -0x64]
005043C3  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
005043C9  5F                        POP EDI
005043CA  5E                        POP ESI
005043CB  5B                        POP EBX
005043CC  8B E5                     MOV ESP,EBP
005043CE  5D                        POP EBP
005043CF  C2 04 00                  RET 0x4
LAB_005043d2:
005043D2  8B 45 9C                  MOV EAX,dword ptr [EBP + -0x64]
005043D5  68 E0 26 7C 00            PUSH 0x7c26e0
005043DA  68 CC 4C 7A 00            PUSH 0x7a4ccc
005043DF  56                        PUSH ESI
005043E0  6A 00                     PUSH 0x0
005043E2  6A 2A                     PUSH 0x2a
005043E4  68 A0 26 7C 00            PUSH 0x7c26a0
005043E9  A3 F8 8D 85 00            MOV [0x00858df8],EAX
005043EE  E8 DD 90 1A 00            CALL 0x006ad4d0
005043F3  83 C4 18                  ADD ESP,0x18
005043F6  85 C0                     TEST EAX,EAX
005043F8  74 01                     JZ 0x005043fb
005043FA  CC                        INT3
LAB_005043fb:
005043FB  6A 2A                     PUSH 0x2a
005043FD  68 A0 26 7C 00            PUSH 0x7c26a0
00504402  6A 00                     PUSH 0x0
00504404  56                        PUSH ESI
00504405  E8 36 1A 1A 00            CALL 0x006a5e40
LAB_0050440a:
0050440A  5F                        POP EDI
0050440B  5E                        POP ESI
0050440C  5B                        POP EBX
0050440D  8B E5                     MOV ESP,EBP
0050440F  5D                        POP EBP
00504410  C2 04 00                  RET 0x4
