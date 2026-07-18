VisibleClassTy::SetZoneDes:
005597A0  55                        PUSH EBP
005597A1  8B EC                     MOV EBP,ESP
005597A3  83 EC 5C                  SUB ESP,0x5c
005597A6  53                        PUSH EBX
005597A7  56                        PUSH ESI
005597A8  57                        PUSH EDI
005597A9  8B F9                     MOV EDI,ECX
005597AB  89 7D F0                  MOV dword ptr [EBP + -0x10],EDI
005597AE  8B 87 14 01 00 00         MOV EAX,dword ptr [EDI + 0x114]
005597B4  85 C0                     TEST EAX,EAX
005597B6  0F 84 94 01 00 00         JZ 0x00559950
005597BC  8B 75 18                  MOV ESI,dword ptr [EBP + 0x18]
005597BF  85 F6                     TEST ESI,ESI
005597C1  0F 8C 89 01 00 00         JL 0x00559950
005597C7  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
005597CA  83 F8 08                  CMP EAX,0x8
005597CD  0F 83 7D 01 00 00         JNC 0x00559950
005597D3  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
005597D9  85 C9                     TEST ECX,ECX
005597DB  74 11                     JZ 0x005597ee
005597DD  8D 0C C0                  LEA ECX,[EAX + EAX*0x8]
005597E0  80 BC C9 E9 87 80 00 08   CMP byte ptr [ECX + ECX*0x8 + 0x8087e9],0x8
005597E8  0F 83 62 01 00 00         JNC 0x00559950
LAB_005597ee:
005597EE  8B 4C 87 54               MOV ECX,dword ptr [EDI + EAX*0x4 + 0x54]
005597F2  85 C9                     TEST ECX,ECX
005597F4  75 4C                     JNZ 0x00559842
005597F6  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
005597FB  8D 55 A8                  LEA EDX,[EBP + -0x58]
005597FE  8D 4D A4                  LEA ECX,[EBP + -0x5c]
00559801  6A 00                     PUSH 0x0
00559803  52                        PUSH EDX
00559804  89 45 A4                  MOV dword ptr [EBP + -0x5c],EAX
00559807  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0055980D  E8 DE 3F 1D 00            CALL 0x0072d7f0
00559812  83 C4 08                  ADD ESP,0x8
00559815  85 C0                     TEST EAX,EAX
00559817  0F 85 B9 00 00 00         JNZ 0x005598d6
0055981D  8B 7D F0                  MOV EDI,dword ptr [EBP + -0x10]
00559820  8B 47 24                  MOV EAX,dword ptr [EDI + 0x24]
00559823  0F AF 47 20               IMUL EAX,dword ptr [EDI + 0x20]
00559827  50                        PUSH EAX
00559828  E8 E3 13 15 00            CALL 0x006aac10
0055982D  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
00559830  8B 55 A4                  MOV EDX,dword ptr [EBP + -0x5c]
00559833  8B 75 18                  MOV ESI,dword ptr [EBP + 0x18]
00559836  89 44 8F 54               MOV dword ptr [EDI + ECX*0x4 + 0x54],EAX
0055983A  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00559840  8B C1                     MOV EAX,ECX
LAB_00559842:
00559842  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
00559845  8B 5D 0C                  MOV EBX,dword ptr [EBP + 0xc]
00559848  F6 C5 10                  TEST CH,0x10
0055984B  74 18                     JZ 0x00559865
0055984D  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
00559850  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00559853  52                        PUSH EDX
00559854  56                        PUSH ESI
00559855  50                        PUSH EAX
00559856  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
00559859  50                        PUSH EAX
0055985A  53                        PUSH EBX
0055985B  51                        PUSH ECX
0055985C  6A 02                     PUSH 0x2
0055985E  8B CF                     MOV ECX,EDI
00559860  E8 9D A2 EA FF            CALL 0x00403b02
LAB_00559865:
00559865  F6 45 20 04               TEST byte ptr [EBP + 0x20],0x4
00559869  0F 84 E1 00 00 00         JZ 0x00559950
0055986F  85 F6                     TEST ESI,ESI
00559871  7D 05                     JGE 0x00559878
00559873  33 F6                     XOR ESI,ESI
00559875  89 75 18                  MOV dword ptr [EBP + 0x18],ESI
LAB_00559878:
00559878  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0055987B  8D 54 36 01               LEA EDX,[ESI + ESI*0x1 + 0x1]
0055987F  2B C6                     SUB EAX,ESI
00559881  56                        PUSH ESI
00559882  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
00559885  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
00559888  2B DE                     SUB EBX,ESI
0055988A  E8 30 90 EA FF            CALL 0x004028bf
0055988F  8B C8                     MOV ECX,EAX
00559891  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00559894  83 C4 04                  ADD ESP,0x4
00559897  89 4D E8                  MOV dword ptr [EBP + -0x18],ECX
0055989A  85 C0                     TEST EAX,EAX
0055989C  0F 8E AE 00 00 00         JLE 0x00559950
005598A2  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
005598A5  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
LAB_005598a8:
005598A8  8B 75 EC                  MOV ESI,dword ptr [EBP + -0x14]
005598AB  33 C0                     XOR EAX,EAX
LAB_005598ad:
005598AD  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
005598B0  85 C9                     TEST ECX,ECX
005598B2  74 09                     JZ 0x005598bd
005598B4  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
005598B7  80 3C 01 00               CMP byte ptr [ECX + EAX*0x1],0x0
005598BB  74 70                     JZ 0x0055992d
LAB_005598bd:
005598BD  85 F6                     TEST ESI,ESI
005598BF  7C 4B                     JL 0x0055990c
005598C1  3B 77 20                  CMP ESI,dword ptr [EDI + 0x20]
005598C4  7D 46                     JGE 0x0055990c
005598C6  85 DB                     TEST EBX,EBX
005598C8  7C 42                     JL 0x0055990c
005598CA  3B 5F 24                  CMP EBX,dword ptr [EDI + 0x24]
005598CD  7D 3D                     JGE 0x0055990c
005598CF  B9 01 00 00 00            MOV ECX,0x1
005598D4  EB 38                     JMP 0x0055990e
LAB_005598d6:
005598D6  8B 4D A4                  MOV ECX,dword ptr [EBP + -0x5c]
005598D9  68 BC 93 7C 00            PUSH 0x7c93bc
005598DE  68 CC 4C 7A 00            PUSH 0x7a4ccc
005598E3  50                        PUSH EAX
005598E4  6A 00                     PUSH 0x0
005598E6  68 93 02 00 00            PUSH 0x293
005598EB  68 CC 92 7C 00            PUSH 0x7c92cc
005598F0  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005598F6  E8 D5 3B 15 00            CALL 0x006ad4d0
005598FB  83 C4 18                  ADD ESP,0x18
005598FE  85 C0                     TEST EAX,EAX
00559900  74 4E                     JZ 0x00559950
00559902  CC                        INT3
LAB_0055990c:
0055990C  33 C9                     XOR ECX,ECX
LAB_0055990e:
0055990E  85 C9                     TEST ECX,ECX
00559910  74 1B                     JZ 0x0055992d
00559912  8B 57 20                  MOV EDX,dword ptr [EDI + 0x20]
00559915  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
00559918  0F AF D3                  IMUL EDX,EBX
0055991B  03 54 8F 54               ADD EDX,dword ptr [EDI + ECX*0x4 + 0x54]
0055991F  8A 0C 32                  MOV CL,byte ptr [EDX + ESI*0x1]
00559922  03 D6                     ADD EDX,ESI
00559924  80 F9 FF                  CMP CL,0xff
00559927  73 04                     JNC 0x0055992d
00559929  FE C1                     INC CL
0055992B  88 0A                     MOV byte ptr [EDX],CL
LAB_0055992d:
0055992D  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
00559930  40                        INC EAX
00559931  46                        INC ESI
00559932  3B C1                     CMP EAX,ECX
00559934  0F 8C 73 FF FF FF         JL 0x005598ad
0055993A  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0055993D  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
00559940  03 D1                     ADD EDX,ECX
00559942  43                        INC EBX
00559943  48                        DEC EAX
00559944  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
00559947  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
0055994A  0F 85 58 FF FF FF         JNZ 0x005598a8
LAB_00559950:
00559950  5F                        POP EDI
00559951  5E                        POP ESI
00559952  5B                        POP EBX
00559953  8B E5                     MOV ESP,EBP
00559955  5D                        POP EBP
00559956  C2 1C 00                  RET 0x1c
