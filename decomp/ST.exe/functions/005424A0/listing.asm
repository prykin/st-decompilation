InterSystemC::CreateInterfObjects:
005424A0  55                        PUSH EBP
005424A1  8B EC                     MOV EBP,ESP
005424A3  81 EC C4 01 00 00         SUB ESP,0x1c4
005424A9  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
005424AE  53                        PUSH EBX
005424AF  56                        PUSH ESI
005424B0  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
005424B3  33 DB                     XOR EBX,EBX
005424B5  57                        PUSH EDI
005424B6  8D 95 40 FE FF FF         LEA EDX,[EBP + 0xfffffe40]
005424BC  8D 8D 3C FE FF FF         LEA ECX,[EBP + 0xfffffe3c]
005424C2  53                        PUSH EBX
005424C3  52                        PUSH EDX
005424C4  89 85 3C FE FF FF         MOV dword ptr [EBP + 0xfffffe3c],EAX
005424CA  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005424D0  E8 1B B3 1E 00            CALL 0x0072d7f0
005424D5  8B F0                     MOV ESI,EAX
005424D7  83 C4 08                  ADD ESP,0x8
005424DA  3B F3                     CMP ESI,EBX
005424DC  0F 85 7C 06 00 00         JNZ 0x00542b5e
005424E2  33 C0                     XOR EAX,EAX
005424E4  A0 4E 87 80 00            MOV AL,[0x0080874e]
005424E9  48                        DEC EAX
005424EA  74 30                     JZ 0x0054251c
005424EC  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
005424EF  48                        DEC EAX
005424F0  74 15                     JZ 0x00542507
005424F2  A0 D9 7D 80 00            MOV AL,[0x00807dd9]
005424F7  8B 0D 9C 67 80 00         MOV ECX,dword ptr [0x0080679c]
005424FD  50                        PUSH EAX
005424FE  53                        PUSH EBX
005424FF  51                        PUSH ECX
00542500  E8 85 F2 EB FF            CALL 0x0040178a
00542505  EB 2C                     JMP 0x00542533
LAB_00542507:
00542507  8A 15 D9 7D 80 00         MOV DL,byte ptr [0x00807dd9]
0054250D  A1 9C 67 80 00            MOV EAX,[0x0080679c]
00542512  52                        PUSH EDX
00542513  53                        PUSH EBX
00542514  50                        PUSH EAX
00542515  E8 31 22 EC FF            CALL 0x0040474b
0054251A  EB 17                     JMP 0x00542533
LAB_0054251c:
0054251C  8A 0D D9 7D 80 00         MOV CL,byte ptr [0x00807dd9]
00542522  8B 15 9C 67 80 00         MOV EDX,dword ptr [0x0080679c]
00542528  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
0054252B  51                        PUSH ECX
0054252C  53                        PUSH EBX
0054252D  52                        PUSH EDX
0054252E  E8 04 18 EC FF            CALL 0x00403d37
LAB_00542533:
00542533  BF 01 00 00 00            MOV EDI,0x1
00542538  89 46 24                  MOV dword ptr [ESI + 0x24],EAX
0054253B  83 C4 0C                  ADD ESP,0xc
0054253E  89 78 58                  MOV dword ptr [EAX + 0x58],EDI
00542541  89 58 5C                  MOV dword ptr [EAX + 0x5c],EBX
00542544  A0 D9 7D 80 00            MOV AL,[0x00807dd9]
00542549  8B 0D 9C 67 80 00         MOV ECX,dword ptr [0x0080679c]
0054254F  50                        PUSH EAX
00542550  53                        PUSH EBX
00542551  51                        PUSH ECX
00542552  E8 9A 21 EC FF            CALL 0x004046f1
00542557  89 46 28                  MOV dword ptr [ESI + 0x28],EAX
0054255A  89 58 58                  MOV dword ptr [EAX + 0x58],EBX
0054255D  89 58 5C                  MOV dword ptr [EAX + 0x5c],EBX
00542560  8A 15 D9 7D 80 00         MOV DL,byte ptr [0x00807dd9]
00542566  A1 9C 67 80 00            MOV EAX,[0x0080679c]
0054256B  52                        PUSH EDX
0054256C  53                        PUSH EBX
0054256D  50                        PUSH EAX
0054256E  E8 08 01 EC FF            CALL 0x0040267b
00542573  89 46 2C                  MOV dword ptr [ESI + 0x2c],EAX
00542576  89 78 58                  MOV dword ptr [EAX + 0x58],EDI
00542579  89 58 5C                  MOV dword ptr [EAX + 0x5c],EBX
0054257C  8A 0D D9 7D 80 00         MOV CL,byte ptr [0x00807dd9]
00542582  8B 15 9C 67 80 00         MOV EDX,dword ptr [0x0080679c]
00542588  51                        PUSH ECX
00542589  53                        PUSH EBX
0054258A  52                        PUSH EDX
0054258B  E8 6F FF EB FF            CALL 0x004024ff
00542590  89 46 30                  MOV dword ptr [ESI + 0x30],EAX
00542593  53                        PUSH EBX
00542594  89 78 58                  MOV dword ptr [EAX + 0x58],EDI
00542597  89 58 5C                  MOV dword ptr [EAX + 0x5c],EBX
0054259A  E8 27 FC EB FF            CALL 0x004021c6
0054259F  B9 5F 00 00 00            MOV ECX,0x5f
005425A4  33 C0                     XOR EAX,EAX
005425A6  8D BD 80 FE FF FF         LEA EDI,[EBP + 0xfffffe80]
005425AC  83 C4 28                  ADD ESP,0x28
005425AF  F3 AB                     STOSD.REP ES:EDI
005425B1  BF 01 00 00 00            MOV EDI,0x1
005425B6  53                        PUSH EBX
005425B7  53                        PUSH EBX
005425B8  57                        PUSH EDI
005425B9  53                        PUSH EBX
005425BA  6A FF                     PUSH -0x1
005425BC  53                        PUSH EBX
005425BD  57                        PUSH EDI
005425BE  53                        PUSH EBX
005425BF  68 48 7C 7C 00            PUSH 0x7c7c48
005425C4  89 BD 84 FE FF FF         MOV dword ptr [EBP + 0xfffffe84],EDI
005425CA  89 BD 80 FE FF FF         MOV dword ptr [EBP + 0xfffffe80],EDI
005425D0  E8 A7 31 EC FF            CALL 0x0040577c
005425D5  83 C4 08                  ADD ESP,0x8
005425D8  50                        PUSH EAX
005425D9  E8 22 06 1B 00            CALL 0x006f2c00
005425DE  83 C4 0C                  ADD ESP,0xc
005425E1  50                        PUSH EAX
005425E2  A1 94 67 80 00            MOV EAX,[0x00806794]
005425E7  57                        PUSH EDI
005425E8  50                        PUSH EAX
005425E9  E8 02 75 1C 00            CALL 0x00709af0
005425EE  8B F8                     MOV EDI,EAX
005425F0  A0 4E 87 80 00            MOV AL,[0x0080874e]
005425F5  8A C8                     MOV CL,AL
005425F7  83 C4 20                  ADD ESP,0x20
005425FA  80 E9 03                  SUB CL,0x3
005425FD  F6 D9                     NEG CL
005425FF  1B C9                     SBB ECX,ECX
00542601  83 E1 05                  AND ECX,0x5
00542604  83 C1 26                  ADD ECX,0x26
00542607  89 8D 88 FE FF FF         MOV dword ptr [EBP + 0xfffffe88],ECX
0054260D  8B 57 04                  MOV EDX,dword ptr [EDI + 0x4]
00542610  33 C9                     XOR ECX,ECX
00542612  3C 03                     CMP AL,0x3
00542614  8B 46 14                  MOV EAX,dword ptr [ESI + 0x14]
00542617  89 95 90 FE FF FF         MOV dword ptr [EBP + 0xfffffe90],EDX
0054261D  0F 95 C1                  SETNZ CL
00542620  83 C1 07                  ADD ECX,0x7
00542623  89 8D 8C FE FF FF         MOV dword ptr [EBP + 0xfffffe8c],ECX
00542629  8B 57 08                  MOV EDX,dword ptr [EDI + 0x8]
0054262C  89 95 94 FE FF FF         MOV dword ptr [EBP + 0xfffffe94],EDX
00542632  89 85 E0 FE FF FF         MOV dword ptr [EBP + 0xfffffee0],EAX
00542638  89 85 A0 FE FF FF         MOV dword ptr [EBP + 0xfffffea0],EAX
0054263E  B8 01 01 00 00            MOV EAX,0x101
00542643  BF 01 00 00 00            MOV EDI,0x1
00542648  89 85 24 FF FF FF         MOV dword ptr [EBP + 0xffffff24],EAX
0054264E  89 85 00 FF FF FF         MOV dword ptr [EBP + 0xffffff00],EAX
00542654  B8 03 00 00 00            MOV EAX,0x3
00542659  8D 95 80 FE FF FF         LEA EDX,[EBP + 0xfffffe80]
0054265F  89 85 28 FF FF FF         MOV dword ptr [EBP + 0xffffff28],EAX
00542665  89 85 04 FF FF FF         MOV dword ptr [EBP + 0xffffff04],EAX
0054266B  57                        PUSH EDI
0054266C  B8 17 27 00 00            MOV EAX,0x2717
00542671  52                        PUSH EDX
00542672  B9 02 00 00 00            MOV ECX,0x2
00542677  53                        PUSH EBX
00542678  89 85 34 FF FF FF         MOV dword ptr [EBP + 0xffffff34],EAX
0054267E  89 85 10 FF FF FF         MOV dword ptr [EBP + 0xffffff10],EAX
00542684  8B 06                     MOV EAX,dword ptr [ESI]
00542686  53                        PUSH EBX
00542687  66 89 8D 32 FF FF FF      MOV word ptr [EBP + 0xffffff32],CX
0054268E  66 89 8D 0E FF FF FF      MOV word ptr [EBP + 0xffffff0e],CX
00542695  51                        PUSH ECX
00542696  8B CE                     MOV ECX,ESI
00542698  89 9D E4 FE FF FF         MOV dword ptr [EBP + 0xfffffee4],EBX
0054269E  89 9D A4 FE FF FF         MOV dword ptr [EBP + 0xfffffea4],EBX
005426A4  C7 85 A8 FE FF FF FF B8 00 00  MOV dword ptr [EBP + 0xfffffea8],0xb8ff
005426AE  C7 85 E8 FE FF FF 00 B9 00 00  MOV dword ptr [EBP + 0xfffffee8],0xb900
005426B8  C7 85 08 FF FF FF 01 42 00 00  MOV dword ptr [EBP + 0xffffff08],0x4201
005426C2  C7 85 2C FF FF FF 02 42 00 00  MOV dword ptr [EBP + 0xffffff2c],0x4202
005426CC  66 89 9D 30 FF FF FF      MOV word ptr [EBP + 0xffffff30],BX
005426D3  66 89 9D 0C FF FF FF      MOV word ptr [EBP + 0xffffff0c],BX
005426DA  89 9D 18 FF FF FF         MOV dword ptr [EBP + 0xffffff18],EBX
005426E0  89 BD 3C FF FF FF         MOV dword ptr [EBP + 0xffffff3c],EDI
005426E6  FF 50 08                  CALL dword ptr [EAX + 0x8]
005426E9  33 C0                     XOR EAX,EAX
005426EB  A0 4D 87 80 00            MOV AL,[0x0080874d]
005426F0  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
005426F3  38 9C C0 C7 87 80 00      CMP byte ptr [EAX + EAX*0x8 + 0x8087c7],BL
005426FA  75 0C                     JNZ 0x00542708
005426FC  38 1D 4F 87 80 00         CMP byte ptr [0x0080874f],BL
00542702  75 04                     JNZ 0x00542708
00542704  8B C7                     MOV EAX,EDI
00542706  EB 02                     JMP 0x0054270a
LAB_00542708:
00542708  33 C0                     XOR EAX,EAX
LAB_0054270a:
0054270A  3B C3                     CMP EAX,EBX
0054270C  74 11                     JZ 0x0054271f
0054270E  80 3D 83 87 80 00 03      CMP byte ptr [0x00808783],0x3
00542715  75 0E                     JNZ 0x00542725
00542717  38 1D A9 8A 80 00         CMP byte ptr [0x00808aa9],BL
0054271D  75 06                     JNZ 0x00542725
LAB_0054271f:
0054271F  89 9D 80 FE FF FF         MOV dword ptr [EBP + 0xfffffe80],EBX
LAB_00542725:
00542725  A0 4E 87 80 00            MOV AL,[0x0080874e]
0054272A  8B 16                     MOV EDX,dword ptr [ESI]
0054272C  2C 03                     SUB AL,0x3
0054272E  57                        PUSH EDI
0054272F  F6 D8                     NEG AL
00542731  1B C0                     SBB EAX,EAX
00542733  8B CE                     MOV ECX,ESI
00542735  83 E0 04                  AND EAX,0x4
00542738  C7 85 A8 FE FF FF 05 B9 00 00  MOV dword ptr [EBP + 0xfffffea8],0xb905
00542742  83 C0 7C                  ADD EAX,0x7c
00542745  C7 85 E8 FE FF FF 06 B9 00 00  MOV dword ptr [EBP + 0xfffffee8],0xb906
0054274F  89 85 88 FE FF FF         MOV dword ptr [EBP + 0xfffffe88],EAX
00542755  B8 1A 27 00 00            MOV EAX,0x271a
0054275A  89 85 34 FF FF FF         MOV dword ptr [EBP + 0xffffff34],EAX
00542760  89 85 10 FF FF FF         MOV dword ptr [EBP + 0xffffff10],EAX
00542766  8D 85 80 FE FF FF         LEA EAX,[EBP + 0xfffffe80]
0054276C  50                        PUSH EAX
0054276D  53                        PUSH EBX
0054276E  53                        PUSH EBX
0054276F  6A 02                     PUSH 0x2
00542771  FF 52 08                  CALL dword ptr [EDX + 0x8]
00542774  8A 0D 4E 87 80 00         MOV CL,byte ptr [0x0080874e]
0054277A  8B 16                     MOV EDX,dword ptr [ESI]
0054277C  80 E9 03                  SUB CL,0x3
0054277F  B8 18 27 00 00            MOV EAX,0x2718
00542784  F6 D9                     NEG CL
00542786  1B C9                     SBB ECX,ECX
00542788  89 85 34 FF FF FF         MOV dword ptr [EBP + 0xffffff34],EAX
0054278E  89 85 10 FF FF FF         MOV dword ptr [EBP + 0xffffff10],EAX
00542794  83 E1 03                  AND ECX,0x3
00542797  8D 85 80 FE FF FF         LEA EAX,[EBP + 0xfffffe80]
0054279D  57                        PUSH EDI
0054279E  81 C1 D2 00 00 00         ADD ECX,0xd2
005427A4  50                        PUSH EAX
005427A5  53                        PUSH EBX
005427A6  89 8D 88 FE FF FF         MOV dword ptr [EBP + 0xfffffe88],ECX
005427AC  53                        PUSH EBX
005427AD  6A 02                     PUSH 0x2
005427AF  8B CE                     MOV ECX,ESI
005427B1  89 BD 80 FE FF FF         MOV dword ptr [EBP + 0xfffffe80],EDI
005427B7  C7 85 A8 FE FF FF 01 B9 00 00  MOV dword ptr [EBP + 0xfffffea8],0xb901
005427C1  C7 85 E8 FE FF FF 02 B9 00 00  MOV dword ptr [EBP + 0xfffffee8],0xb902
005427CB  FF 52 08                  CALL dword ptr [EDX + 0x8]
005427CE  33 C0                     XOR EAX,EAX
005427D0  A0 4D 87 80 00            MOV AL,[0x0080874d]
005427D5  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
005427D8  38 9C C0 C7 87 80 00      CMP byte ptr [EAX + EAX*0x8 + 0x8087c7],BL
005427DF  75 0C                     JNZ 0x005427ed
005427E1  38 1D 4F 87 80 00         CMP byte ptr [0x0080874f],BL
005427E7  75 04                     JNZ 0x005427ed
005427E9  8B C7                     MOV EAX,EDI
005427EB  EB 02                     JMP 0x005427ef
LAB_005427ed:
005427ED  33 C0                     XOR EAX,EAX
LAB_005427ef:
005427EF  8A 15 4E 87 80 00         MOV DL,byte ptr [0x0080874e]
005427F5  33 C9                     XOR ECX,ECX
005427F7  3B C3                     CMP EAX,EBX
005427F9  B8 19 27 00 00            MOV EAX,0x2719
005427FE  0F 95 C1                  SETNZ CL
00542801  80 EA 03                  SUB DL,0x3
00542804  89 8D 80 FE FF FF         MOV dword ptr [EBP + 0xfffffe80],ECX
0054280A  F6 DA                     NEG DL
0054280C  1B D2                     SBB EDX,EDX
0054280E  8D 8D 80 FE FF FF         LEA ECX,[EBP + 0xfffffe80]
00542814  57                        PUSH EDI
00542815  83 E2 02                  AND EDX,0x2
00542818  51                        PUSH ECX
00542819  89 85 34 FF FF FF         MOV dword ptr [EBP + 0xffffff34],EAX
0054281F  89 85 10 FF FF FF         MOV dword ptr [EBP + 0xffffff10],EAX
00542825  8B 06                     MOV EAX,dword ptr [ESI]
00542827  53                        PUSH EBX
00542828  81 C2 28 01 00 00         ADD EDX,0x128
0054282E  53                        PUSH EBX
0054282F  6A 02                     PUSH 0x2
00542831  8B CE                     MOV ECX,ESI
00542833  89 95 88 FE FF FF         MOV dword ptr [EBP + 0xfffffe88],EDX
00542839  C7 85 A8 FE FF FF 03 B9 00 00  MOV dword ptr [EBP + 0xfffffea8],0xb903
00542843  C7 85 E8 FE FF FF 04 B9 00 00  MOV dword ptr [EBP + 0xfffffee8],0xb904
0054284D  FF 50 08                  CALL dword ptr [EAX + 0x8]
00542850  A1 34 67 80 00            MOV EAX,[0x00806734]
00542855  8B 15 30 67 80 00         MOV EDX,dword ptr [0x00806730]
0054285B  83 C0 E6                  ADD EAX,-0x1a
0054285E  83 C2 CE                  ADD EDX,-0x32
00542861  89 85 8C FE FF FF         MOV dword ptr [EBP + 0xfffffe8c],EAX
00542867  A0 4E 87 80 00            MOV AL,[0x0080874e]
0054286C  3C 03                     CMP AL,0x3
0054286E  89 BD 80 FE FF FF         MOV dword ptr [EBP + 0xfffffe80],EDI
00542874  89 95 88 FE FF FF         MOV dword ptr [EBP + 0xfffffe88],EDX
0054287A  C7 85 90 FE FF FF 28 00 00 00  MOV dword ptr [EBP + 0xfffffe90],0x28
00542884  C7 85 94 FE FF FF 12 00 00 00  MOV dword ptr [EBP + 0xfffffe94],0x12
0054288E  75 30                     JNZ 0x005428c0
00542890  8B 0D 90 67 80 00         MOV ECX,dword ptr [0x00806790]
00542896  57                        PUSH EDI
00542897  53                        PUSH EBX
00542898  68 38 7C 7C 00            PUSH 0x7c7c38
0054289D  51                        PUSH ECX
0054289E  E8 CD 81 1C 00            CALL 0x0070aa70
005428A3  8B 15 90 67 80 00         MOV EDX,dword ptr [0x00806790]
005428A9  57                        PUSH EDI
005428AA  68 38 7C 7C 00            PUSH 0x7c7c38
005428AF  6A 12                     PUSH 0x12
005428B1  52                        PUSH EDX
005428B2  89 45 A4                  MOV dword ptr [EBP + -0x5c],EAX
005428B5  E8 36 7E 1C 00            CALL 0x0070a6f0
005428BA  83 C4 20                  ADD ESP,0x20
005428BD  89 45 A8                  MOV dword ptr [EBP + -0x58],EAX
LAB_005428c0:
005428C0  8D 8D 80 FE FF FF         LEA ECX,[EBP + 0xfffffe80]
005428C6  B8 39 27 00 00            MOV EAX,0x2739
005428CB  57                        PUSH EDI
005428CC  51                        PUSH ECX
005428CD  89 85 34 FF FF FF         MOV dword ptr [EBP + 0xffffff34],EAX
005428D3  89 85 10 FF FF FF         MOV dword ptr [EBP + 0xffffff10],EAX
005428D9  8B 06                     MOV EAX,dword ptr [ESI]
005428DB  53                        PUSH EBX
005428DC  53                        PUSH EBX
005428DD  6A 02                     PUSH 0x2
005428DF  8B CE                     MOV ECX,ESI
005428E1  C7 85 A8 FE FF FF 07 B9 00 00  MOV dword ptr [EBP + 0xfffffea8],0xb907
005428EB  C7 85 E8 FE FF FF 08 B9 00 00  MOV dword ptr [EBP + 0xfffffee8],0xb908
005428F5  FF 50 08                  CALL dword ptr [EAX + 0x8]
005428F8  53                        PUSH EBX
005428F9  E8 C8 F8 EB FF            CALL 0x004021c6
005428FE  8B 16                     MOV EDX,dword ptr [ESI]
00542900  83 C4 04                  ADD ESP,0x4
00542903  8B CE                     MOV ECX,ESI
00542905  57                        PUSH EDI
00542906  53                        PUSH EBX
00542907  53                        PUSH EBX
00542908  53                        PUSH EBX
00542909  68 1F 01 00 00            PUSH 0x11f
0054290E  FF 52 08                  CALL dword ptr [EDX + 0x8]
00542911  53                        PUSH EBX
00542912  E8 AF F8 EB FF            CALL 0x004021c6
00542917  8B 06                     MOV EAX,dword ptr [ESI]
00542919  83 C4 04                  ADD ESP,0x4
0054291C  8B CE                     MOV ECX,ESI
0054291E  57                        PUSH EDI
0054291F  53                        PUSH EBX
00542920  53                        PUSH EBX
00542921  53                        PUSH EBX
00542922  68 20 01 00 00            PUSH 0x120
00542927  FF 50 08                  CALL dword ptr [EAX + 0x8]
0054292A  53                        PUSH EBX
0054292B  E8 96 F8 EB FF            CALL 0x004021c6
00542930  8B 16                     MOV EDX,dword ptr [ESI]
00542932  83 C4 04                  ADD ESP,0x4
00542935  8B CE                     MOV ECX,ESI
00542937  57                        PUSH EDI
00542938  53                        PUSH EBX
00542939  53                        PUSH EBX
0054293A  53                        PUSH EBX
0054293B  68 22 01 00 00            PUSH 0x122
00542940  FF 52 08                  CALL dword ptr [EDX + 0x8]
00542943  53                        PUSH EBX
00542944  E8 7D F8 EB FF            CALL 0x004021c6
00542949  8B 06                     MOV EAX,dword ptr [ESI]
0054294B  83 C4 04                  ADD ESP,0x4
0054294E  8B CE                     MOV ECX,ESI
00542950  57                        PUSH EDI
00542951  53                        PUSH EBX
00542952  53                        PUSH EBX
00542953  53                        PUSH EBX
00542954  68 23 01 00 00            PUSH 0x123
00542959  FF 50 08                  CALL dword ptr [EAX + 0x8]
0054295C  53                        PUSH EBX
0054295D  E8 64 F8 EB FF            CALL 0x004021c6
00542962  8B 16                     MOV EDX,dword ptr [ESI]
00542964  83 C4 04                  ADD ESP,0x4
00542967  8B CE                     MOV ECX,ESI
00542969  57                        PUSH EDI
0054296A  53                        PUSH EBX
0054296B  53                        PUSH EBX
0054296C  53                        PUSH EBX
0054296D  68 25 01 00 00            PUSH 0x125
00542972  FF 52 08                  CALL dword ptr [EDX + 0x8]
00542975  53                        PUSH EBX
00542976  E8 4B F8 EB FF            CALL 0x004021c6
0054297B  8B 06                     MOV EAX,dword ptr [ESI]
0054297D  83 C4 04                  ADD ESP,0x4
00542980  8B CE                     MOV ECX,ESI
00542982  57                        PUSH EDI
00542983  53                        PUSH EBX
00542984  53                        PUSH EBX
00542985  53                        PUSH EBX
00542986  68 27 01 00 00            PUSH 0x127
0054298B  FF 50 08                  CALL dword ptr [EAX + 0x8]
0054298E  53                        PUSH EBX
0054298F  E8 32 F8 EB FF            CALL 0x004021c6
00542994  8B 16                     MOV EDX,dword ptr [ESI]
00542996  83 C4 04                  ADD ESP,0x4
00542999  8B CE                     MOV ECX,ESI
0054299B  57                        PUSH EDI
0054299C  53                        PUSH EBX
0054299D  53                        PUSH EBX
0054299E  53                        PUSH EBX
0054299F  68 28 01 00 00            PUSH 0x128
005429A4  FF 52 08                  CALL dword ptr [EDX + 0x8]
005429A7  53                        PUSH EBX
005429A8  E8 19 F8 EB FF            CALL 0x004021c6
005429AD  8B 06                     MOV EAX,dword ptr [ESI]
005429AF  83 C4 04                  ADD ESP,0x4
005429B2  8B CE                     MOV ECX,ESI
005429B4  57                        PUSH EDI
005429B5  53                        PUSH EBX
005429B6  53                        PUSH EBX
005429B7  53                        PUSH EBX
005429B8  68 2A 01 00 00            PUSH 0x12a
005429BD  FF 50 08                  CALL dword ptr [EAX + 0x8]
005429C0  53                        PUSH EBX
005429C1  E8 00 F8 EB FF            CALL 0x004021c6
005429C6  A0 4E 87 80 00            MOV AL,[0x0080874e]
005429CB  83 C4 04                  ADD ESP,0x4
005429CE  3C 03                     CMP AL,0x3
005429D0  75 20                     JNZ 0x005429f2
005429D2  8B 16                     MOV EDX,dword ptr [ESI]
005429D4  57                        PUSH EDI
005429D5  53                        PUSH EBX
005429D6  53                        PUSH EBX
005429D7  53                        PUSH EBX
005429D8  68 51 01 00 00            PUSH 0x151
005429DD  8B CE                     MOV ECX,ESI
005429DF  FF 52 08                  CALL dword ptr [EDX + 0x8]
005429E2  8B 06                     MOV EAX,dword ptr [ESI]
005429E4  57                        PUSH EDI
005429E5  53                        PUSH EBX
005429E6  53                        PUSH EBX
005429E7  53                        PUSH EBX
005429E8  68 59 01 00 00            PUSH 0x159
005429ED  8B CE                     MOV ECX,ESI
005429EF  FF 50 08                  CALL dword ptr [EAX + 0x8]
LAB_005429f2:
005429F2  8B 16                     MOV EDX,dword ptr [ESI]
005429F4  57                        PUSH EDI
005429F5  53                        PUSH EBX
005429F6  53                        PUSH EBX
005429F7  53                        PUSH EBX
005429F8  68 49 01 00 00            PUSH 0x149
005429FD  8B CE                     MOV ECX,ESI
005429FF  FF 52 08                  CALL dword ptr [EDX + 0x8]
00542A02  53                        PUSH EBX
00542A03  E8 BE F7 EB FF            CALL 0x004021c6
00542A08  8B 06                     MOV EAX,dword ptr [ESI]
00542A0A  83 C4 04                  ADD ESP,0x4
00542A0D  8B CE                     MOV ECX,ESI
00542A0F  57                        PUSH EDI
00542A10  53                        PUSH EBX
00542A11  53                        PUSH EBX
00542A12  53                        PUSH EBX
00542A13  68 48 01 00 00            PUSH 0x148
00542A18  FF 50 08                  CALL dword ptr [EAX + 0x8]
00542A1B  53                        PUSH EBX
00542A1C  E8 A5 F7 EB FF            CALL 0x004021c6
00542A21  8B 16                     MOV EDX,dword ptr [ESI]
00542A23  83 C4 04                  ADD ESP,0x4
00542A26  8B CE                     MOV ECX,ESI
00542A28  57                        PUSH EDI
00542A29  53                        PUSH EBX
00542A2A  53                        PUSH EBX
00542A2B  53                        PUSH EBX
00542A2C  68 4A 01 00 00            PUSH 0x14a
00542A31  FF 52 08                  CALL dword ptr [EDX + 0x8]
00542A34  53                        PUSH EBX
00542A35  E8 8C F7 EB FF            CALL 0x004021c6
00542A3A  8B 06                     MOV EAX,dword ptr [ESI]
00542A3C  83 C4 04                  ADD ESP,0x4
00542A3F  8B CE                     MOV ECX,ESI
00542A41  57                        PUSH EDI
00542A42  53                        PUSH EBX
00542A43  53                        PUSH EBX
00542A44  53                        PUSH EBX
00542A45  68 53 01 00 00            PUSH 0x153
00542A4A  FF 50 08                  CALL dword ptr [EAX + 0x8]
00542A4D  53                        PUSH EBX
00542A4E  E8 73 F7 EB FF            CALL 0x004021c6
00542A53  8B 16                     MOV EDX,dword ptr [ESI]
00542A55  83 C4 04                  ADD ESP,0x4
00542A58  8B CE                     MOV ECX,ESI
00542A5A  57                        PUSH EDI
00542A5B  53                        PUSH EBX
00542A5C  53                        PUSH EBX
00542A5D  53                        PUSH EBX
00542A5E  68 55 01 00 00            PUSH 0x155
00542A63  FF 52 08                  CALL dword ptr [EDX + 0x8]
00542A66  53                        PUSH EBX
00542A67  E8 5A F7 EB FF            CALL 0x004021c6
00542A6C  8B 06                     MOV EAX,dword ptr [ESI]
00542A6E  83 C4 04                  ADD ESP,0x4
00542A71  8B CE                     MOV ECX,ESI
00542A73  57                        PUSH EDI
00542A74  53                        PUSH EBX
00542A75  53                        PUSH EBX
00542A76  53                        PUSH EBX
00542A77  68 54 01 00 00            PUSH 0x154
00542A7C  FF 50 08                  CALL dword ptr [EAX + 0x8]
00542A7F  53                        PUSH EBX
00542A80  E8 41 F7 EB FF            CALL 0x004021c6
00542A85  8B 16                     MOV EDX,dword ptr [ESI]
00542A87  83 C4 04                  ADD ESP,0x4
00542A8A  8B CE                     MOV ECX,ESI
00542A8C  57                        PUSH EDI
00542A8D  53                        PUSH EBX
00542A8E  53                        PUSH EBX
00542A8F  53                        PUSH EBX
00542A90  68 56 01 00 00            PUSH 0x156
00542A95  FF 52 08                  CALL dword ptr [EDX + 0x8]
00542A98  53                        PUSH EBX
00542A99  E8 28 F7 EB FF            CALL 0x004021c6
00542A9E  8B 06                     MOV EAX,dword ptr [ESI]
00542AA0  83 C4 04                  ADD ESP,0x4
00542AA3  57                        PUSH EDI
00542AA4  53                        PUSH EBX
00542AA5  53                        PUSH EBX
00542AA6  53                        PUSH EBX
00542AA7  68 2B 01 00 00            PUSH 0x12b
00542AAC  8B CE                     MOV ECX,ESI
00542AAE  FF 50 08                  CALL dword ptr [EAX + 0x8]
00542AB1  53                        PUSH EBX
00542AB2  E8 0F F7 EB FF            CALL 0x004021c6
00542AB7  8B 16                     MOV EDX,dword ptr [ESI]
00542AB9  83 C4 04                  ADD ESP,0x4
00542ABC  8B CE                     MOV ECX,ESI
00542ABE  57                        PUSH EDI
00542ABF  53                        PUSH EBX
00542AC0  53                        PUSH EBX
00542AC1  53                        PUSH EBX
00542AC2  68 2E 01 00 00            PUSH 0x12e
00542AC7  FF 52 08                  CALL dword ptr [EDX + 0x8]
00542ACA  53                        PUSH EBX
00542ACB  E8 F6 F6 EB FF            CALL 0x004021c6
00542AD0  8B 06                     MOV EAX,dword ptr [ESI]
00542AD2  83 C4 04                  ADD ESP,0x4
00542AD5  8B CE                     MOV ECX,ESI
00542AD7  57                        PUSH EDI
00542AD8  53                        PUSH EBX
00542AD9  53                        PUSH EBX
00542ADA  53                        PUSH EBX
00542ADB  68 4B 01 00 00            PUSH 0x14b
00542AE0  FF 50 08                  CALL dword ptr [EAX + 0x8]
00542AE3  53                        PUSH EBX
00542AE4  E8 DD F6 EB FF            CALL 0x004021c6
00542AE9  8B 16                     MOV EDX,dword ptr [ESI]
00542AEB  83 C4 04                  ADD ESP,0x4
00542AEE  8B CE                     MOV ECX,ESI
00542AF0  53                        PUSH EBX
00542AF1  68 01 02 00 00            PUSH 0x201
00542AF6  FF 52 10                  CALL dword ptr [EDX + 0x10]
00542AF9  53                        PUSH EBX
00542AFA  E8 C7 F6 EB FF            CALL 0x004021c6
00542AFF  8B 0D 90 16 80 00         MOV ECX,dword ptr [0x00801690]
00542B05  83 C4 04                  ADD ESP,0x4
00542B08  3B CB                     CMP ECX,EBX
00542B0A  74 05                     JZ 0x00542b11
00542B0C  E8 11 18 EC FF            CALL 0x00404322
LAB_00542b11:
00542B11  53                        PUSH EBX
00542B12  E8 AF F6 EB FF            CALL 0x004021c6
00542B17  A0 7E 87 80 00            MOV AL,[0x0080877e]
00542B1C  83 C4 04                  ADD ESP,0x4
00542B1F  3A C3                     CMP AL,BL
00542B21  75 26                     JNZ 0x00542b49
00542B23  39 1D D8 16 80 00         CMP dword ptr [0x008016d8],EBX
00542B29  74 1E                     JZ 0x00542b49
00542B2B  A1 18 76 80 00            MOV EAX,[0x00807618]
00542B30  6A 08                     PUSH 0x8
00542B32  50                        PUSH EAX
00542B33  68 75 42 00 00            PUSH 0x4275
00542B38  E8 03 D6 16 00            CALL 0x006b0140
00542B3D  8B 0D D8 16 80 00         MOV ECX,dword ptr [0x008016d8]
00542B43  50                        PUSH EAX
00542B44  E8 8F E9 EB FF            CALL 0x004014d8
LAB_00542b49:
00542B49  8B 8D 3C FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffe3c]
00542B4F  33 C0                     XOR EAX,EAX
00542B51  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00542B57  5F                        POP EDI
00542B58  5E                        POP ESI
00542B59  5B                        POP EBX
00542B5A  8B E5                     MOV ESP,EBP
00542B5C  5D                        POP EBP
00542B5D  C3                        RET
LAB_00542b5e:
00542B5E  8B 95 3C FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffe3c]
00542B64  68 10 7C 7C 00            PUSH 0x7c7c10
00542B69  68 CC 4C 7A 00            PUSH 0x7a4ccc
00542B6E  56                        PUSH ESI
00542B6F  53                        PUSH EBX
00542B70  68 B3 00 00 00            PUSH 0xb3
00542B75  68 E8 7B 7C 00            PUSH 0x7c7be8
00542B7A  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00542B80  E8 4B A9 16 00            CALL 0x006ad4d0
00542B85  83 C4 18                  ADD ESP,0x18
00542B88  85 C0                     TEST EAX,EAX
00542B8A  74 01                     JZ 0x00542b8d
00542B8C  CC                        INT3
LAB_00542b8d:
00542B8D  68 B3 00 00 00            PUSH 0xb3
00542B92  68 E8 7B 7C 00            PUSH 0x7c7be8
00542B97  53                        PUSH EBX
00542B98  56                        PUSH ESI
00542B99  E8 A2 32 16 00            CALL 0x006a5e40
00542B9E  5F                        POP EDI
00542B9F  5E                        POP ESI
00542BA0  B8 FC FF FF FF            MOV EAX,0xfffffffc
00542BA5  5B                        POP EBX
00542BA6  8B E5                     MOV ESP,EBP
00542BA8  5D                        POP EBP
00542BA9  C3                        RET
