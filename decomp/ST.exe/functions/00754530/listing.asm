FUN_00754530:
00754530  55                        PUSH EBP
00754531  8B EC                     MOV EBP,ESP
00754533  6A FF                     PUSH -0x1
00754535  68 78 1E 7A 00            PUSH 0x7a1e78
0075453A  68 64 D9 72 00            PUSH 0x72d964
0075453F  64 A1 00 00 00 00         MOV EAX,FS:[0x0]
00754545  50                        PUSH EAX
00754546  64 89 25 00 00 00 00      MOV dword ptr FS:[0x0],ESP
0075454D  81 EC 54 02 00 00         SUB ESP,0x254
00754553  53                        PUSH EBX
00754554  56                        PUSH ESI
00754555  57                        PUSH EDI
00754556  89 65 E8                  MOV dword ptr [EBP + -0x18],ESP
00754559  33 DB                     XOR EBX,EBX
0075455B  89 9D 1C FE FF FF         MOV dword ptr [EBP + 0xfffffe1c],EBX
00754561  89 9D 24 FE FF FF         MOV dword ptr [EBP + 0xfffffe24],EBX
00754567  89 9D 00 FE FF FF         MOV dword ptr [EBP + 0xfffffe00],EBX
0075456D  33 C0                     XOR EAX,EAX
0075456F  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00754572  66 8B 41 0E               MOV AX,word ptr [ECX + 0xe]
00754576  C1 E8 03                  SHR EAX,0x3
00754579  89 85 18 FE FF FF         MOV dword ptr [EBP + 0xfffffe18],EAX
0075457F  68 BE 01 00 00            PUSH 0x1be
00754584  6A 3D                     PUSH 0x3d
00754586  8D 95 28 FE FF FF         LEA EDX,[EBP + 0xfffffe28]
0075458C  52                        PUSH EDX
0075458D  E8 6E 1C 00 00            CALL 0x00756200
00754592  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
00754597  89 85 AC FD FF FF         MOV dword ptr [EBP + 0xfffffdac],EAX
0075459D  8D 8D AC FD FF FF         LEA ECX,[EBP + 0xfffffdac]
007545A3  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
007545A9  8D 95 B0 FD FF FF         LEA EDX,[EBP + 0xfffffdb0]
007545AF  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
007545B2  50                        PUSH EAX
007545B3  68 21 DA 72 00            PUSH 0x72da21
007545B8  6A 02                     PUSH 0x2
007545BA  52                        PUSH EDX
007545BB  E8 30 92 FD FF            CALL 0x0072d7f0
007545C0  83 C4 10                  ADD ESP,0x10
007545C3  89 65 E8                  MOV dword ptr [EBP + -0x18],ESP
007545C6  3B C3                     CMP EAX,EBX
007545C8  0F 85 9C 04 00 00         JNZ 0x00754a6a
007545CE  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
007545D1  51                        PUSH ECX
007545D2  8D 95 28 FE FF FF         LEA EDX,[EBP + 0xfffffe28]
007545D8  52                        PUSH EDX
007545D9  E8 A2 2C 00 00            CALL 0x00757280
007545DE  6A 01                     PUSH 0x1
007545E0  8D 85 28 FE FF FF         LEA EAX,[EBP + 0xfffffe28]
007545E6  50                        PUSH EAX
007545E7  E8 54 1D 00 00            CALL 0x00756340
007545EC  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
007545EF  51                        PUSH ECX
007545F0  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
007545F3  56                        PUSH ESI
007545F4  8D 95 28 FE FF FF         LEA EDX,[EBP + 0xfffffe28]
007545FA  52                        PUSH EDX
007545FB  E8 F0 04 00 00            CALL 0x00754af0
00754600  8D 85 28 FE FF FF         LEA EAX,[EBP + 0xfffffe28]
00754606  50                        PUSH EAX
00754607  E8 14 25 00 00            CALL 0x00756b20
0075460C  8B BD 9C FE FF FF         MOV EDI,dword ptr [EBP + 0xfffffe9c]
00754612  8B 95 90 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffe90]
00754618  0F AF FA                  IMUL EDI,EDX
0075461B  89 BD F0 FD FF FF         MOV dword ptr [EBP + 0xfffffdf0],EDI
00754621  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
00754624  3B CB                     CMP ECX,EBX
00754626  0F 85 29 01 00 00         JNZ 0x00754755
0075462C  89 BD 10 FE FF FF         MOV dword ptr [EBP + 0xfffffe10],EDI
00754632  8B 8D 18 FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffe18]
00754638  83 F9 01                  CMP ECX,0x1
0075463B  0F 85 9B 00 00 00         JNZ 0x007546dc
00754641  8B 76 20                  MOV ESI,dword ptr [ESI + 0x20]
00754644  3B F3                     CMP ESI,EBX
00754646  75 05                     JNZ 0x0075464d
00754648  BE 00 01 00 00            MOV ESI,0x100
LAB_0075464d:
0075464D  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
00754650  85 FF                     TEST EDI,EDI
00754652  74 61                     JZ 0x007546b5
00754654  6A 03                     PUSH 0x3
00754656  68 00 01 00 00            PUSH 0x100
0075465B  6A 01                     PUSH 0x1
0075465D  8D 8D 28 FE FF FF         LEA ECX,[EBP + 0xfffffe28]
00754663  51                        PUSH ECX
00754664  8B 95 28 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffe28]
0075466A  FF 52 08                  CALL dword ptr [EDX + 0x8]
0075466D  89 85 A8 FE FF FF         MOV dword ptr [EBP + 0xfffffea8],EAX
00754673  89 B5 A4 FE FF FF         MOV dword ptr [EBP + 0xfffffea4],ESI
00754679  33 C0                     XOR EAX,EAX
0075467B  85 F6                     TEST ESI,ESI
0075467D  7E 36                     JLE 0x007546b5
0075467F  8D 4F 01                  LEA ECX,[EDI + 0x1]
LAB_00754682:
00754682  8B 95 A8 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffea8]
00754688  8B 52 08                  MOV EDX,dword ptr [EDX + 0x8]
0075468B  8A 59 01                  MOV BL,byte ptr [ECX + 0x1]
0075468E  88 1C 02                  MOV byte ptr [EDX + EAX*0x1],BL
00754691  8B 95 A8 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffea8]
00754697  8B 52 04                  MOV EDX,dword ptr [EDX + 0x4]
0075469A  8A 19                     MOV BL,byte ptr [ECX]
0075469C  88 1C 02                  MOV byte ptr [EDX + EAX*0x1],BL
0075469F  8B 95 A8 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffea8]
007546A5  8B 12                     MOV EDX,dword ptr [EDX]
007546A7  8A 59 FF                  MOV BL,byte ptr [ECX + -0x1]
007546AA  88 1C 02                  MOV byte ptr [EDX + EAX*0x1],BL
007546AD  40                        INC EAX
007546AE  83 C1 04                  ADD ECX,0x4
007546B1  3B C6                     CMP EAX,ESI
007546B3  7C CD                     JL 0x00754682
LAB_007546b5:
007546B5  6A 01                     PUSH 0x1
007546B7  57                        PUSH EDI
007546B8  56                        PUSH ESI
007546B9  6A 08                     PUSH 0x8
007546BB  8B 85 94 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffe94]
007546C1  50                        PUSH EAX
007546C2  8B 8D 90 FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffe90]
007546C8  51                        PUSH ECX
007546C9  E8 F2 09 F6 FF            CALL 0x006b50c0
007546CE  89 85 00 FE FF FF         MOV dword ptr [EBP + 0xfffffe00],EAX
007546D4  8B BD F0 FD FF FF         MOV EDI,dword ptr [EBP + 0xfffffdf0]
007546DA  EB 44                     JMP 0x00754720
LAB_007546dc:
007546DC  B8 03 00 00 00            MOV EAX,0x3
007546E1  39 46 10                  CMP dword ptr [ESI + 0x10],EAX
007546E4  75 0B                     JNZ 0x007546f1
007546E6  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
007546E9  89 8D 24 FE FF FF         MOV dword ptr [EBP + 0xfffffe24],ECX
007546EF  EB 0B                     JMP 0x007546fc
LAB_007546f1:
007546F1  33 DB                     XOR EBX,EBX
007546F3  83 F9 02                  CMP ECX,0x2
007546F6  0F 95 C3                  SETNZ BL
007546F9  4B                        DEC EBX
007546FA  23 C3                     AND EAX,EBX
LAB_007546fc:
007546FC  6A 01                     PUSH 0x1
007546FE  8B 8D 24 FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffe24]
00754704  51                        PUSH ECX
00754705  50                        PUSH EAX
00754706  33 C0                     XOR EAX,EAX
00754708  66 8B 46 0E               MOV AX,word ptr [ESI + 0xe]
0075470C  50                        PUSH EAX
0075470D  8B 8D 94 FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffe94]
00754713  51                        PUSH ECX
00754714  52                        PUSH EDX
00754715  E8 A6 09 F6 FF            CALL 0x006b50c0
0075471A  89 85 00 FE FF FF         MOV dword ptr [EBP + 0xfffffe00],EAX
LAB_00754720:
00754720  50                        PUSH EAX
00754721  E8 7A 08 F6 FF            CALL 0x006b4fa0
00754726  8B C8                     MOV ECX,EAX
00754728  33 DB                     XOR EBX,EBX
0075472A  8B B5 00 FE FF FF         MOV ESI,dword ptr [EBP + 0xfffffe00]
00754730  66 8B 5E 0E               MOV BX,word ptr [ESI + 0xe]
00754734  0F AF 5E 04               IMUL EBX,dword ptr [ESI + 0x4]
00754738  83 C3 1F                  ADD EBX,0x1f
0075473B  C1 EB 03                  SHR EBX,0x3
0075473E  81 E3 FC FF FF 1F         AND EBX,0x1ffffffc
00754744  89 5D 14                  MOV dword ptr [EBP + 0x14],EBX
00754747  8B 95 94 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffe94]
0075474D  89 95 F8 FD FF FF         MOV dword ptr [EBP + 0xfffffdf8],EDX
00754753  EB 27                     JMP 0x0075477c
LAB_00754755:
00754755  89 B5 00 FE FF FF         MOV dword ptr [EBP + 0xfffffe00],ESI
0075475B  8B 46 04                  MOV EAX,dword ptr [ESI + 0x4]
0075475E  0F AF 85 18 FE FF FF      IMUL EAX,dword ptr [EBP + 0xfffffe18]
00754765  89 85 10 FE FF FF         MOV dword ptr [EBP + 0xfffffe10],EAX
0075476B  8B 46 08                  MOV EAX,dword ptr [ESI + 0x8]
0075476E  99                        CDQ
0075476F  33 C2                     XOR EAX,EDX
00754771  2B C2                     SUB EAX,EDX
00754773  89 85 F8 FD FF FF         MOV dword ptr [EBP + 0xfffffdf8],EAX
00754779  8B 5D 14                  MOV EBX,dword ptr [EBP + 0x14]
LAB_0075477c:
0075477C  8B 46 08                  MOV EAX,dword ptr [ESI + 0x8]
0075477F  85 C0                     TEST EAX,EAX
00754781  7E 19                     JLE 0x0075479c
00754783  8B C3                     MOV EAX,EBX
00754785  99                        CDQ
00754786  33 C2                     XOR EAX,EDX
00754788  2B C2                     SUB EAX,EDX
0075478A  8B 95 F8 FD FF FF         MOV EDX,dword ptr [EBP + 0xfffffdf8]
00754790  4A                        DEC EDX
00754791  0F AF C2                  IMUL EAX,EDX
00754794  03 C1                     ADD EAX,ECX
00754796  89 85 F4 FD FF FF         MOV dword ptr [EBP + 0xfffffdf4],EAX
LAB_0075479c:
0075479C  8D 85 28 FE FF FF         LEA EAX,[EBP + 0xfffffe28]
007547A2  50                        PUSH EAX
007547A3  E8 78 1F 00 00            CALL 0x00756720
007547A8  33 C0                     XOR EAX,EAX
007547AA  3B BD 10 FE FF FF         CMP EDI,dword ptr [EBP + 0xfffffe10]
007547B0  7F 08                     JG 0x007547ba
007547B2  89 BD 10 FE FF FF         MOV dword ptr [EBP + 0xfffffe10],EDI
007547B8  EB 05                     JMP 0x007547bf
LAB_007547ba:
007547BA  B8 01 00 00 00            MOV EAX,0x1
LAB_007547bf:
007547BF  8B 8D 18 FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffe18]
007547C5  83 F9 01                  CMP ECX,0x1
007547C8  74 05                     JZ 0x007547cf
007547CA  83 F9 03                  CMP ECX,0x3
007547CD  75 11                     JNZ 0x007547e0
LAB_007547cf:
007547CF  83 F9 03                  CMP ECX,0x3
007547D2  75 13                     JNZ 0x007547e7
007547D4  8B 8D 00 FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffe00]
007547DA  83 79 10 03               CMP dword ptr [ECX + 0x10],0x3
007547DE  75 07                     JNZ 0x007547e7
LAB_007547e0:
007547E0  BE 01 00 00 00            MOV ESI,0x1
007547E5  EB 02                     JMP 0x007547e9
LAB_007547e7:
007547E7  33 F6                     XOR ESI,ESI
LAB_007547e9:
007547E9  89 B5 FC FD FF FF         MOV dword ptr [EBP + 0xfffffdfc],ESI
007547EF  85 C0                     TEST EAX,EAX
007547F1  75 5B                     JNZ 0x0075484e
007547F3  85 F6                     TEST ESI,ESI
007547F5  75 57                     JNZ 0x0075484e
007547F7  8B 95 AC FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffeac]
007547FD  3B 95 94 FE FF FF         CMP EDX,dword ptr [EBP + 0xfffffe94]
00754803  0F 83 6E 01 00 00         JNC 0x00754977
LAB_00754809:
00754809  8B 85 F8 FD FF FF         MOV EAX,dword ptr [EBP + 0xfffffdf8]
0075480F  8B C8                     MOV ECX,EAX
00754811  48                        DEC EAX
00754812  89 85 F8 FD FF FF         MOV dword ptr [EBP + 0xfffffdf8],EAX
00754818  85 C9                     TEST ECX,ECX
0075481A  0F 84 57 01 00 00         JZ 0x00754977
00754820  6A 01                     PUSH 0x1
00754822  8D 95 F4 FD FF FF         LEA EDX,[EBP + 0xfffffdf4]
00754828  52                        PUSH EDX
00754829  8D 85 28 FE FF FF         LEA EAX,[EBP + 0xfffffe28]
0075482F  50                        PUSH EAX
00754830  E8 9B 20 00 00            CALL 0x007568d0
00754835  29 9D F4 FD FF FF         SUB dword ptr [EBP + 0xfffffdf4],EBX
0075483B  8B 8D AC FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffeac]
00754841  3B 8D 94 FE FF FF         CMP ECX,dword ptr [EBP + 0xfffffe94]
00754847  72 C0                     JC 0x00754809
00754849  E9 29 01 00 00            JMP 0x00754977
LAB_0075484e:
0075484E  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
00754855  8B 95 10 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffe10]
0075485B  8D 42 03                  LEA EAX,[EDX + 0x3]
0075485E  83 C0 03                  ADD EAX,0x3
00754861  24 FC                     AND AL,0xfc
00754863  E8 D8 91 FD FF            CALL 0x0072da40
00754868  89 65 E8                  MOV dword ptr [EBP + -0x18],ESP
0075486B  8B C4                     MOV EAX,ESP
0075486D  89 85 04 FE FF FF         MOV dword ptr [EBP + 0xfffffe04],EAX
00754873  C7 45 FC FF FF FF FF      MOV dword ptr [EBP + -0x4],0xffffffff
0075487A  EB 30                     JMP 0x007548ac
LAB_007548ac:
007548AC  85 F6                     TEST ESI,ESI
007548AE  75 74                     JNZ 0x00754924
007548B0  8B 8D AC FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffeac]
007548B6  3B 8D 94 FE FF FF         CMP ECX,dword ptr [EBP + 0xfffffe94]
007548BC  0F 83 B5 00 00 00         JNC 0x00754977
LAB_007548c2:
007548C2  8B 85 F8 FD FF FF         MOV EAX,dword ptr [EBP + 0xfffffdf8]
007548C8  8B D0                     MOV EDX,EAX
007548CA  48                        DEC EAX
007548CB  89 85 F8 FD FF FF         MOV dword ptr [EBP + 0xfffffdf8],EAX
007548D1  85 D2                     TEST EDX,EDX
007548D3  0F 84 9E 00 00 00         JZ 0x00754977
007548D9  6A 01                     PUSH 0x1
007548DB  8D 85 04 FE FF FF         LEA EAX,[EBP + 0xfffffe04]
007548E1  50                        PUSH EAX
007548E2  8D 8D 28 FE FF FF         LEA ECX,[EBP + 0xfffffe28]
007548E8  51                        PUSH ECX
007548E9  E8 E2 1F 00 00            CALL 0x007568d0
007548EE  8B 8D 10 FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffe10]
007548F4  8B B5 04 FE FF FF         MOV ESI,dword ptr [EBP + 0xfffffe04]
007548FA  8B BD F4 FD FF FF         MOV EDI,dword ptr [EBP + 0xfffffdf4]
00754900  8B D1                     MOV EDX,ECX
00754902  C1 E9 02                  SHR ECX,0x2
00754905  F3 A5                     MOVSD.REP ES:EDI,ESI
00754907  8B CA                     MOV ECX,EDX
00754909  83 E1 03                  AND ECX,0x3
0075490C  F3 A4                     MOVSB.REP ES:EDI,ESI
0075490E  29 9D F4 FD FF FF         SUB dword ptr [EBP + 0xfffffdf4],EBX
00754914  8B 85 AC FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffeac]
0075491A  3B 85 94 FE FF FF         CMP EAX,dword ptr [EBP + 0xfffffe94]
00754920  72 A0                     JC 0x007548c2
00754922  EB 53                     JMP 0x00754977
LAB_00754924:
00754924  83 BD 18 FE FF FF 02      CMP dword ptr [EBP + 0xfffffe18],0x2
0075492B  75 32                     JNZ 0x0075495f
0075492D  8B 8D 24 FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffe24]
00754933  51                        PUSH ECX
00754934  8B 95 F8 FD FF FF         MOV EDX,dword ptr [EBP + 0xfffffdf8]
0075493A  52                        PUSH EDX
0075493B  8B 85 10 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffe10]
00754941  50                        PUSH EAX
00754942  8D 8D 04 FE FF FF         LEA ECX,[EBP + 0xfffffe04]
00754948  51                        PUSH ECX
00754949  53                        PUSH EBX
0075494A  8B 95 F4 FD FF FF         MOV EDX,dword ptr [EBP + 0xfffffdf4]
00754950  52                        PUSH EDX
00754951  8D 85 28 FE FF FF         LEA EAX,[EBP + 0xfffffe28]
00754957  50                        PUSH EAX
00754958  E8 23 02 00 00            CALL 0x00754b80
0075495D  EB 18                     JMP 0x00754977
LAB_0075495f:
0075495F  68 09 01 00 00            PUSH 0x109
00754964  68 B8 2C 7F 00            PUSH 0x7f2cb8
00754969  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
0075496F  51                        PUSH ECX
00754970  6A D0                     PUSH -0x30
00754972  E8 C9 14 F5 FF            CALL 0x006a5e40
LAB_00754977:
00754977  B8 01 00 00 00            MOV EAX,0x1
0075497C  39 85 18 FE FF FF         CMP dword ptr [EBP + 0xfffffe18],EAX
00754982  0F 85 C1 00 00 00         JNZ 0x00754a49
00754988  39 85 4C FE FF FF         CMP dword ptr [EBP + 0xfffffe4c],EAX
0075498E  74 67                     JZ 0x007549f7
00754990  33 C0                     XOR EAX,EAX
00754992  8B 8D A4 FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffea4]
00754998  85 C9                     TEST ECX,ECX
0075499A  0F 8E A9 00 00 00         JLE 0x00754a49
LAB_007549a0:
007549A0  8B 95 A8 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffea8]
007549A6  8B 4A 08                  MOV ECX,dword ptr [EDX + 0x8]
007549A9  8A 14 01                  MOV DL,byte ptr [ECX + EAX*0x1]
007549AC  8B 8D 00 FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffe00]
007549B2  88 54 81 2A               MOV byte ptr [ECX + EAX*0x4 + 0x2a],DL
007549B6  8B 95 A8 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffea8]
007549BC  8B 4A 04                  MOV ECX,dword ptr [EDX + 0x4]
007549BF  8A 14 01                  MOV DL,byte ptr [ECX + EAX*0x1]
007549C2  8B 8D 00 FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffe00]
007549C8  88 54 81 29               MOV byte ptr [ECX + EAX*0x4 + 0x29],DL
007549CC  8B 95 A8 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffea8]
007549D2  8B 0A                     MOV ECX,dword ptr [EDX]
007549D4  8A 14 01                  MOV DL,byte ptr [ECX + EAX*0x1]
007549D7  8B 8D 00 FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffe00]
007549DD  88 54 81 28               MOV byte ptr [ECX + EAX*0x4 + 0x28],DL
007549E1  8B 95 00 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffe00]
007549E7  C6 44 82 2B 00            MOV byte ptr [EDX + EAX*0x4 + 0x2b],0x0
007549EC  40                        INC EAX
007549ED  3B 85 A4 FE FF FF         CMP EAX,dword ptr [EBP + 0xfffffea4]
007549F3  7C AB                     JL 0x007549a0
007549F5  EB 52                     JMP 0x00754a49
LAB_007549f7:
007549F7  33 C0                     XOR EAX,EAX
007549F9  8B 8D A4 FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffea4]
007549FF  85 C9                     TEST ECX,ECX
00754A01  7E 46                     JLE 0x00754a49
LAB_00754a03:
00754A03  8B 8D A8 FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffea8]
00754A09  8B 51 08                  MOV EDX,dword ptr [ECX + 0x8]
00754A0C  8A 0C 02                  MOV CL,byte ptr [EDX + EAX*0x1]
00754A0F  8B 95 00 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffe00]
00754A15  88 4C 82 28               MOV byte ptr [EDX + EAX*0x4 + 0x28],CL
00754A19  8B 8D 00 FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffe00]
00754A1F  8A 54 81 28               MOV DL,byte ptr [ECX + EAX*0x4 + 0x28]
00754A23  88 54 81 29               MOV byte ptr [ECX + EAX*0x4 + 0x29],DL
00754A27  8B 8D 00 FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffe00]
00754A2D  8A 54 81 29               MOV DL,byte ptr [ECX + EAX*0x4 + 0x29]
00754A31  88 54 81 2A               MOV byte ptr [ECX + EAX*0x4 + 0x2a],DL
00754A35  8B 8D 00 FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffe00]
00754A3B  C6 44 81 2B 00            MOV byte ptr [ECX + EAX*0x4 + 0x2b],0x0
00754A40  40                        INC EAX
00754A41  3B 85 A4 FE FF FF         CMP EAX,dword ptr [EBP + 0xfffffea4]
00754A47  7C BA                     JL 0x00754a03
LAB_00754a49:
00754A49  8D 95 28 FE FF FF         LEA EDX,[EBP + 0xfffffe28]
00754A4F  52                        PUSH EDX
00754A50  E8 FB 1B 00 00            CALL 0x00756650
00754A55  8B 85 AC FD FF FF         MOV EAX,dword ptr [EBP + 0xfffffdac]
00754A5B  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00754A60  8B B5 1C FE FF FF         MOV ESI,dword ptr [EBP + 0xfffffe1c]
00754A66  33 DB                     XOR EBX,EBX
00754A68  EB 14                     JMP 0x00754a7e
LAB_00754a6a:
00754A6A  8B 8D AC FD FF FF         MOV ECX,dword ptr [EBP + 0xfffffdac]
00754A70  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00754A76  8B F0                     MOV ESI,EAX
00754A78  89 B5 1C FE FF FF         MOV dword ptr [EBP + 0xfffffe1c],ESI
LAB_00754a7e:
00754A7E  3B F3                     CMP ESI,EBX
00754A80  74 11                     JZ 0x00754a93
00754A82  39 5D 10                  CMP dword ptr [EBP + 0x10],EBX
00754A85  75 0C                     JNZ 0x00754a93
00754A87  8D 95 00 FE FF FF         LEA EDX,[EBP + 0xfffffe00]
00754A8D  52                        PUSH EDX
00754A8E  E8 CD 65 F5 FF            CALL 0x006ab060
LAB_00754a93:
00754A93  8D 85 28 FE FF FF         LEA EAX,[EBP + 0xfffffe28]
00754A99  50                        PUSH EAX
00754A9A  E8 21 18 00 00            CALL 0x007562c0
00754A9F  3B F3                     CMP ESI,EBX
00754AA1  74 21                     JZ 0x00754ac4
00754AA3  68 36 01 00 00            PUSH 0x136
00754AA8  68 B8 2C 7F 00            PUSH 0x7f2cb8
00754AAD  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
00754AB3  51                        PUSH ECX
00754AB4  81 CE 00 00 FF 8F         OR ESI,0x8fff0000
00754ABA  56                        PUSH ESI
00754ABB  E8 80 13 F5 FF            CALL 0x006a5e40
00754AC0  33 C0                     XOR EAX,EAX
00754AC2  EB 06                     JMP 0x00754aca
LAB_00754ac4:
00754AC4  8B 85 00 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffe00]
LAB_00754aca:
00754ACA  8D A5 90 FD FF FF         LEA ESP,[EBP + 0xfffffd90]
00754AD0  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
00754AD3  64 89 0D 00 00 00 00      MOV dword ptr FS:[0x0],ECX
00754ADA  5F                        POP EDI
00754ADB  5E                        POP ESI
00754ADC  5B                        POP EBX
00754ADD  8B E5                     MOV ESP,EBP
00754ADF  5D                        POP EBP
00754AE0  C2 18 00                  RET 0x18
