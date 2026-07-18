FUN_005fb1f0:
005FB1F0  55                        PUSH EBP
005FB1F1  8B EC                     MOV EBP,ESP
005FB1F3  83 EC 30                  SUB ESP,0x30
005FB1F6  53                        PUSH EBX
005FB1F7  56                        PUSH ESI
005FB1F8  57                        PUSH EDI
005FB1F9  8B F1                     MOV ESI,ECX
005FB1FB  0F BF 7D 08               MOVSX EDI,word ptr [EBP + 0x8]
005FB1FF  0F BF 4E 41               MOVSX ECX,word ptr [ESI + 0x41]
005FB203  8B C7                     MOV EAX,EDI
005FB205  83 CB FF                  OR EBX,0xffffffff
005FB208  2B C1                     SUB EAX,ECX
005FB20A  8B 0D A0 E7 7C 00         MOV ECX,dword ptr [0x007ce7a0]
005FB210  99                        CDQ
005FB211  33 C2                     XOR EAX,EDX
005FB213  2B C2                     SUB EAX,EDX
005FB215  3B C1                     CMP EAX,ECX
005FB217  0F 8D 5A 02 00 00         JGE 0x005fb477
005FB21D  0F BF 45 0C               MOVSX EAX,word ptr [EBP + 0xc]
005FB221  0F BF 56 43               MOVSX EDX,word ptr [ESI + 0x43]
005FB225  2B C2                     SUB EAX,EDX
005FB227  99                        CDQ
005FB228  33 C2                     XOR EAX,EDX
005FB22A  2B C2                     SUB EAX,EDX
005FB22C  3B C1                     CMP EAX,ECX
005FB22E  0F 8D 43 02 00 00         JGE 0x005fb477
005FB234  0F BF 45 10               MOVSX EAX,word ptr [EBP + 0x10]
005FB238  0F BF 4E 45               MOVSX ECX,word ptr [ESI + 0x45]
005FB23C  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
005FB23F  2B C1                     SUB EAX,ECX
005FB241  8B 0D A8 E7 7C 00         MOV ECX,dword ptr [0x007ce7a8]
005FB247  99                        CDQ
005FB248  33 C2                     XOR EAX,EDX
005FB24A  2B C2                     SUB EAX,EDX
005FB24C  3B C1                     CMP EAX,ECX
005FB24E  0F 8D 23 02 00 00         JGE 0x005fb477
005FB254  0F BF 56 6C               MOVSX EDX,word ptr [ESI + 0x6c]
005FB258  52                        PUSH EDX
005FB259  E8 FD 4C 0B 00            CALL 0x006aff5b
005FB25E  8B D8                     MOV EBX,EAX
005FB260  0F BF 46 6C               MOVSX EAX,word ptr [ESI + 0x6c]
005FB264  50                        PUSH EAX
005FB265  E8 E6 4C 0B 00            CALL 0x006aff50
005FB26A  0F BF 4D 0C               MOVSX ECX,word ptr [EBP + 0xc]
005FB26E  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
005FB271  83 C4 08                  ADD ESP,0x8
005FB274  0F BF 46 41               MOVSX EAX,word ptr [ESI + 0x41]
005FB278  2B F8                     SUB EDI,EAX
005FB27A  0F BF 46 43               MOVSX EAX,word ptr [ESI + 0x43]
005FB27E  2B C8                     SUB ECX,EAX
005FB280  8B D7                     MOV EDX,EDI
005FB282  0F AF 55 08               IMUL EDX,dword ptr [EBP + 0x8]
005FB286  0F AF FB                  IMUL EDI,EBX
005FB289  8B C1                     MOV EAX,ECX
005FB28B  0F AF 4D 08               IMUL ECX,dword ptr [EBP + 0x8]
005FB28F  0F AF C3                  IMUL EAX,EBX
005FB292  2B D0                     SUB EDX,EAX
005FB294  B8 AD 8B DB 68            MOV EAX,0x68db8bad
005FB299  F7 EA                     IMUL EDX
005FB29B  C1 FA 0C                  SAR EDX,0xc
005FB29E  8B C2                     MOV EAX,EDX
005FB2A0  03 CF                     ADD ECX,EDI
005FB2A2  C1 E8 1F                  SHR EAX,0x1f
005FB2A5  03 D0                     ADD EDX,EAX
005FB2A7  B8 AD 8B DB 68            MOV EAX,0x68db8bad
005FB2AC  89 55 DC                  MOV dword ptr [EBP + -0x24],EDX
005FB2AF  F7 E9                     IMUL ECX
005FB2B1  C1 FA 0C                  SAR EDX,0xc
005FB2B4  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
005FB2B7  8B CA                     MOV ECX,EDX
005FB2B9  C1 E9 1F                  SHR ECX,0x1f
005FB2BC  03 D1                     ADD EDX,ECX
005FB2BE  0F BF 4E 45               MOVSX ECX,word ptr [ESI + 0x45]
005FB2C2  2B C1                     SUB EAX,ECX
005FB2C4  8B 0D A8 E7 7C 00         MOV ECX,dword ptr [0x007ce7a8]
005FB2CA  0F AF C8                  IMUL ECX,EAX
005FB2CD  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
005FB2D0  0F AF C8                  IMUL ECX,EAX
005FB2D3  A1 A4 E7 7C 00            MOV EAX,[0x007ce7a4]
005FB2D8  89 55 E0                  MOV dword ptr [EBP + -0x20],EDX
005FB2DB  0F AF C2                  IMUL EAX,EDX
005FB2DE  0F AF C2                  IMUL EAX,EDX
005FB2E1  8B 15 A0 E7 7C 00         MOV EDX,dword ptr [0x007ce7a0]
005FB2E7  03 C8                     ADD ECX,EAX
005FB2E9  8B 45 DC                  MOV EAX,dword ptr [EBP + -0x24]
005FB2EC  0F AF D0                  IMUL EDX,EAX
005FB2EF  0F AF D0                  IMUL EDX,EAX
005FB2F2  A1 AC E7 7C 00            MOV EAX,[0x007ce7ac]
005FB2F7  03 CA                     ADD ECX,EDX
005FB2F9  3B C8                     CMP ECX,EAX
005FB2FB  0F 8D 6A 01 00 00         JGE 0x005fb46b
005FB301  0F BF 7D 14               MOVSX EDI,word ptr [EBP + 0x14]
005FB305  0F BF 46 41               MOVSX EAX,word ptr [ESI + 0x41]
005FB309  0F BF 4D 18               MOVSX ECX,word ptr [EBP + 0x18]
005FB30D  2B F8                     SUB EDI,EAX
005FB30F  0F BF 46 43               MOVSX EAX,word ptr [ESI + 0x43]
005FB313  2B C8                     SUB ECX,EAX
005FB315  8B D7                     MOV EDX,EDI
005FB317  0F AF 55 08               IMUL EDX,dword ptr [EBP + 0x8]
005FB31B  0F AF FB                  IMUL EDI,EBX
005FB31E  8B C1                     MOV EAX,ECX
005FB320  0F AF 4D 08               IMUL ECX,dword ptr [EBP + 0x8]
005FB324  0F AF C3                  IMUL EAX,EBX
005FB327  2B D0                     SUB EDX,EAX
005FB329  B8 AD 8B DB 68            MOV EAX,0x68db8bad
005FB32E  F7 EA                     IMUL EDX
005FB330  C1 FA 0C                  SAR EDX,0xc
005FB333  8B C2                     MOV EAX,EDX
005FB335  03 CF                     ADD ECX,EDI
005FB337  C1 E8 1F                  SHR EAX,0x1f
005FB33A  03 D0                     ADD EDX,EAX
005FB33C  B8 AD 8B DB 68            MOV EAX,0x68db8bad
005FB341  89 55 D0                  MOV dword ptr [EBP + -0x30],EDX
005FB344  F7 E9                     IMUL ECX
005FB346  0F BF 45 1C               MOVSX EAX,word ptr [EBP + 0x1c]
005FB34A  C1 FA 0C                  SAR EDX,0xc
005FB34D  8B CA                     MOV ECX,EDX
005FB34F  C1 E9 1F                  SHR ECX,0x1f
005FB352  03 D1                     ADD EDX,ECX
005FB354  0F BF 4E 45               MOVSX ECX,word ptr [ESI + 0x45]
005FB358  2B C1                     SUB EAX,ECX
005FB35A  8D 4D F4                  LEA ECX,[EBP + -0xc]
005FB35D  51                        PUSH ECX
005FB35E  8D 4D F8                  LEA ECX,[EBP + -0x8]
005FB361  51                        PUSH ECX
005FB362  8D 4D 10                  LEA ECX,[EBP + 0x10]
005FB365  51                        PUSH ECX
005FB366  8B 4D E4                  MOV ECX,dword ptr [EBP + -0x1c]
005FB369  68 A0 E7 7C 00            PUSH 0x7ce7a0
005FB36E  68 94 E7 7C 00            PUSH 0x7ce794
005FB373  51                        PUSH ECX
005FB374  8B 4D E0                  MOV ECX,dword ptr [EBP + -0x20]
005FB377  51                        PUSH ECX
005FB378  8B 4D DC                  MOV ECX,dword ptr [EBP + -0x24]
005FB37B  51                        PUSH ECX
005FB37C  50                        PUSH EAX
005FB37D  52                        PUSH EDX
005FB37E  8B 55 D0                  MOV EDX,dword ptr [EBP + -0x30]
005FB381  52                        PUSH EDX
005FB382  E8 23 9E E0 FF            CALL 0x004051aa
005FB387  8B 7D F8                  MOV EDI,dword ptr [EBP + -0x8]
005FB38A  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
005FB38D  0F AF 4D 08               IMUL ECX,dword ptr [EBP + 0x8]
005FB391  8B C7                     MOV EAX,EDI
005FB393  0F AF 7D 08               IMUL EDI,dword ptr [EBP + 0x8]
005FB397  0F AF C3                  IMUL EAX,EBX
005FB39A  03 C8                     ADD ECX,EAX
005FB39C  B8 AD 8B DB 68            MOV EAX,0x68db8bad
005FB3A1  F7 E9                     IMUL ECX
005FB3A3  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
005FB3A6  83 C4 2C                  ADD ESP,0x2c
005FB3A9  0F AF C3                  IMUL EAX,EBX
005FB3AC  C1 FA 0C                  SAR EDX,0xc
005FB3AF  8B CA                     MOV ECX,EDX
005FB3B1  2B F8                     SUB EDI,EAX
005FB3B3  C1 E9 1F                  SHR ECX,0x1f
005FB3B6  03 D1                     ADD EDX,ECX
005FB3B8  B8 AD 8B DB 68            MOV EAX,0x68db8bad
005FB3BD  89 55 14                  MOV dword ptr [EBP + 0x14],EDX
005FB3C0  F7 EF                     IMUL EDI
005FB3C2  C1 FA 0C                  SAR EDX,0xc
005FB3C5  8B C2                     MOV EAX,EDX
005FB3C7  8B 7D F4                  MOV EDI,dword ptr [EBP + -0xc]
005FB3CA  C1 E8 1F                  SHR EAX,0x1f
005FB3CD  03 D0                     ADD EDX,EAX
005FB3CF  8D 4D F0                  LEA ECX,[EBP + -0x10]
005FB3D2  89 55 0C                  MOV dword ptr [EBP + 0xc],EDX
005FB3D5  8D 55 EC                  LEA EDX,[EBP + -0x14]
005FB3D8  51                        PUSH ECX
005FB3D9  8D 45 E8                  LEA EAX,[EBP + -0x18]
005FB3DC  52                        PUSH EDX
005FB3DD  50                        PUSH EAX
005FB3DE  8B 8E 11 02 00 00         MOV ECX,dword ptr [ESI + 0x211]
005FB3E4  E8 47 21 0E 00            CALL 0x006dd530
005FB3E9  D9 45 F0                  FLD float ptr [EBP + -0x10]
005FB3EC  D8 0D 04 07 79 00         FMUL float ptr [0x00790704]
005FB3F2  E8 91 2E 13 00            CALL 0x0072e288
005FB3F7  0F BF 4E 45               MOVSX ECX,word ptr [ESI + 0x45]
005FB3FB  D9 45 EC                  FLD float ptr [EBP + -0x14]
005FB3FE  D8 0D 04 07 79 00         FMUL float ptr [0x00790704]
005FB404  0F BF D8                  MOVSX EBX,AX
005FB407  2B D9                     SUB EBX,ECX
005FB409  0F AF DF                  IMUL EBX,EDI
005FB40C  E8 77 2E 13 00            CALL 0x0072e288
005FB411  0F BF D0                  MOVSX EDX,AX
005FB414  D9 45 E8                  FLD float ptr [EBP + -0x18]
005FB417  D8 0D 04 07 79 00         FMUL float ptr [0x00790704]
005FB41D  0F BF 46 43               MOVSX EAX,word ptr [ESI + 0x43]
005FB421  2B D0                     SUB EDX,EAX
005FB423  0F AF 55 0C               IMUL EDX,dword ptr [EBP + 0xc]
005FB427  03 DA                     ADD EBX,EDX
005FB429  E8 5A 2E 13 00            CALL 0x0072e288
005FB42E  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
005FB431  0F BF D0                  MOVSX EDX,AX
005FB434  0F BF 46 41               MOVSX EAX,word ptr [ESI + 0x41]
005FB438  2B D0                     SUB EDX,EAX
005FB43A  33 C0                     XOR EAX,EAX
005FB43C  0F AF D1                  IMUL EDX,ECX
005FB43F  03 DA                     ADD EBX,EDX
005FB441  85 DB                     TEST EBX,EBX
005FB443  0F 9F C0                  SETG AL
005FB446  25 FF FF 00 00            AND EAX,0xffff
005FB44B  33 D2                     XOR EDX,EDX
005FB44D  8A 75 0C                  MOV DH,byte ptr [EBP + 0xc]
005FB450  81 E7 FF 00 00 00         AND EDI,0xff
005FB456  C1 E0 08                  SHL EAX,0x8
005FB459  0B C7                     OR EAX,EDI
005FB45B  8A D1                     MOV DL,CL
005FB45D  C1 E0 10                  SHL EAX,0x10
005FB460  5F                        POP EDI
005FB461  5E                        POP ESI
005FB462  0B C2                     OR EAX,EDX
005FB464  5B                        POP EBX
005FB465  8B E5                     MOV ESP,EBP
005FB467  5D                        POP EBP
005FB468  C2 18 00                  RET 0x18
LAB_005fb46b:
005FB46B  5F                        POP EDI
005FB46C  5E                        POP ESI
005FB46D  83 C8 FF                  OR EAX,0xffffffff
005FB470  5B                        POP EBX
005FB471  8B E5                     MOV ESP,EBP
005FB473  5D                        POP EBP
005FB474  C2 18 00                  RET 0x18
LAB_005fb477:
005FB477  5F                        POP EDI
005FB478  8B C3                     MOV EAX,EBX
005FB47A  5E                        POP ESI
005FB47B  5B                        POP EBX
005FB47C  8B E5                     MOV ESP,EBP
005FB47E  5D                        POP EBP
005FB47F  C2 18 00                  RET 0x18
