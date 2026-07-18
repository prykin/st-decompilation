FUN_0069f160:
0069F160  55                        PUSH EBP
0069F161  8B EC                     MOV EBP,ESP
0069F163  6A FF                     PUSH -0x1
0069F165  68 28 D8 79 00            PUSH 0x79d828
0069F16A  68 64 D9 72 00            PUSH 0x72d964
0069F16F  64 A1 00 00 00 00         MOV EAX,FS:[0x0]
0069F175  50                        PUSH EAX
0069F176  64 89 25 00 00 00 00      MOV dword ptr FS:[0x0],ESP
0069F17D  81 EC A0 00 00 00         SUB ESP,0xa0
0069F183  53                        PUSH EBX
0069F184  56                        PUSH ESI
0069F185  57                        PUSH EDI
0069F186  89 65 E8                  MOV dword ptr [EBP + -0x18],ESP
0069F189  89 8D 78 FF FF FF         MOV dword ptr [EBP + 0xffffff78],ECX
0069F18F  33 FF                     XOR EDI,EDI
0069F191  89 7D AC                  MOV dword ptr [EBP + -0x54],EDI
0069F194  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
0069F197  8D 58 01                  LEA EBX,[EAX + 0x1]
0069F19A  8B F3                     MOV ESI,EBX
0069F19C  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0069F19F  0F AF F0                  IMUL ESI,EAX
0069F1A2  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0069F1A5  0F AF F1                  IMUL ESI,ECX
0069F1A8  0F AF C1                  IMUL EAX,ECX
0069F1AB  89 45 94                  MOV dword ptr [EBP + -0x6c],EAX
0069F1AE  B8 64 00 00 00            MOV EAX,0x64
0069F1B3  39 45 14                  CMP dword ptr [EBP + 0x14],EAX
0069F1B6  7E 03                     JLE 0x0069f1bb
0069F1B8  89 45 14                  MOV dword ptr [EBP + 0x14],EAX
LAB_0069f1bb:
0069F1BB  E8 00 F5 08 00            CALL 0x0072e6c0
0069F1C0  A3 D0 3D 85 00            MOV [0x00853dd0],EAX
0069F1C5  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
0069F1C8  03 F6                     ADD ESI,ESI
0069F1CA  8B C6                     MOV EAX,ESI
0069F1CC  83 C0 03                  ADD EAX,0x3
0069F1CF  24 FC                     AND AL,0xfc
0069F1D1  E8 6A E8 08 00            CALL 0x0072da40
0069F1D6  89 65 E8                  MOV dword ptr [EBP + -0x18],ESP
0069F1D9  8B C4                     MOV EAX,ESP
0069F1DB  8B F8                     MOV EDI,EAX
0069F1DD  89 7D A0                  MOV dword ptr [EBP + -0x60],EDI
0069F1E0  8B C6                     MOV EAX,ESI
0069F1E2  83 C0 03                  ADD EAX,0x3
0069F1E5  24 FC                     AND AL,0xfc
0069F1E7  E8 54 E8 08 00            CALL 0x0072da40
0069F1EC  89 65 E8                  MOV dword ptr [EBP + -0x18],ESP
0069F1EF  8B C4                     MOV EAX,ESP
0069F1F1  89 45 A4                  MOV dword ptr [EBP + -0x5c],EAX
0069F1F4  C7 45 FC FF FF FF FF      MOV dword ptr [EBP + -0x4],0xffffffff
0069F1FB  8B CE                     MOV ECX,ESI
0069F1FD  33 C0                     XOR EAX,EAX
0069F1FF  8B D1                     MOV EDX,ECX
0069F201  C1 E9 02                  SHR ECX,0x2
0069F204  F3 AB                     STOSD.REP ES:EDI
0069F206  8B CA                     MOV ECX,EDX
0069F208  83 E1 03                  AND ECX,0x3
0069F20B  F3 AA                     STOSB.REP ES:EDI
0069F20D  53                        PUSH EBX
0069F20E  8B 45 A0                  MOV EAX,dword ptr [EBP + -0x60]
0069F211  50                        PUSH EAX
0069F212  8B 8D 78 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff78]
0069F218  E8 F0 6A D6 FF            CALL 0x00405d0d
0069F21D  8B CE                     MOV ECX,ESI
0069F21F  33 C0                     XOR EAX,EAX
0069F221  8B 7D A4                  MOV EDI,dword ptr [EBP + -0x5c]
0069F224  8B D1                     MOV EDX,ECX
0069F226  C1 E9 02                  SHR ECX,0x2
0069F229  F3 AB                     STOSD.REP ES:EDI
0069F22B  8B CA                     MOV ECX,EDX
0069F22D  83 E1 03                  AND ECX,0x3
0069F230  F3 AA                     STOSB.REP ES:EDI
0069F232  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
0069F235  53                        PUSH EBX
0069F236  8B 8D 78 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff78]
0069F23C  E8 0A 64 D6 FF            CALL 0x0040564b
0069F241  E8 7A F4 08 00            CALL 0x0072e6c0
0069F246  A3 D0 3D 85 00            MOV [0x00853dd0],EAX
0069F24B  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
0069F24E  83 F9 01                  CMP ECX,0x1
0069F251  0F 8E E6 00 00 00         JLE 0x0069f33d
0069F257  8B 55 94                  MOV EDX,dword ptr [EBP + -0x6c]
0069F25A  8B FA                     MOV EDI,EDX
0069F25C  89 BD 74 FF FF FF         MOV dword ptr [EBP + 0xffffff74],EDI
0069F262  8D 04 12                  LEA EAX,[EDX + EDX*0x1]
0069F265  8B F0                     MOV ESI,EAX
0069F267  89 B5 70 FF FF FF         MOV dword ptr [EBP + 0xffffff70],ESI
0069F26D  49                        DEC ECX
0069F26E  89 8D 6C FF FF FF         MOV dword ptr [EBP + 0xffffff6c],ECX
LAB_0069f274:
0069F274  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0069F277  85 C0                     TEST EAX,EAX
0069F279  0F 8C 93 00 00 00         JL 0x0069f312
0069F27F  89 BD 68 FF FF FF         MOV dword ptr [EBP + 0xffffff68],EDI
0069F285  89 B5 64 FF FF FF         MOV dword ptr [EBP + 0xffffff64],ESI
0069F28B  40                        INC EAX
0069F28C  89 85 60 FF FF FF         MOV dword ptr [EBP + 0xffffff60],EAX
LAB_0069f292:
0069F292  85 DB                     TEST EBX,EBX
0069F294  7C 55                     JL 0x0069f2eb
0069F296  8D 43 01                  LEA EAX,[EBX + 0x1]
0069F299  89 85 5C FF FF FF         MOV dword ptr [EBP + 0xffffff5c],EAX
LAB_0069f29f:
0069F29F  8B 4D A0                  MOV ECX,dword ptr [EBP + -0x60]
0069F2A2  66 83 3C 0E 00            CMP word ptr [ESI + ECX*0x1],0x0
0069F2A7  75 33                     JNZ 0x0069f2dc
0069F2A9  8D 55 B0                  LEA EDX,[EBP + -0x50]
0069F2AC  52                        PUSH EDX
0069F2AD  57                        PUSH EDI
0069F2AE  8B 8D 78 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff78]
0069F2B4  E8 D2 2D D6 FF            CALL 0x0040208b
0069F2B9  85 C0                     TEST EAX,EAX
0069F2BB  7E 1F                     JLE 0x0069f2dc
0069F2BD  8D 4D B0                  LEA ECX,[EBP + -0x50]
LAB_0069f2c0:
0069F2C0  8B 11                     MOV EDX,dword ptr [ECX]
0069F2C2  8B 5D A0                  MOV EBX,dword ptr [EBP + -0x60]
0069F2C5  66 83 3C 53 00            CMP word ptr [EBX + EDX*0x2],0x0
0069F2CA  74 07                     JZ 0x0069f2d3
0069F2CC  8B 55 A4                  MOV EDX,dword ptr [EBP + -0x5c]
0069F2CF  66 FF 04 16               INC word ptr [ESI + EDX*0x1]
LAB_0069f2d3:
0069F2D3  83 C1 04                  ADD ECX,0x4
0069F2D6  48                        DEC EAX
0069F2D7  75 E7                     JNZ 0x0069f2c0
0069F2D9  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
LAB_0069f2dc:
0069F2DC  83 C6 02                  ADD ESI,0x2
0069F2DF  47                        INC EDI
0069F2E0  FF 8D 5C FF FF FF         DEC dword ptr [EBP + 0xffffff5c]
0069F2E6  75 B7                     JNZ 0x0069f29f
0069F2E8  8B 55 94                  MOV EDX,dword ptr [EBP + -0x6c]
LAB_0069f2eb:
0069F2EB  8D 04 1B                  LEA EAX,[EBX + EBX*0x1]
0069F2EE  8B B5 64 FF FF FF         MOV ESI,dword ptr [EBP + 0xffffff64]
0069F2F4  03 F0                     ADD ESI,EAX
0069F2F6  89 B5 64 FF FF FF         MOV dword ptr [EBP + 0xffffff64],ESI
0069F2FC  8B BD 68 FF FF FF         MOV EDI,dword ptr [EBP + 0xffffff68]
0069F302  03 FB                     ADD EDI,EBX
0069F304  89 BD 68 FF FF FF         MOV dword ptr [EBP + 0xffffff68],EDI
0069F30A  FF 8D 60 FF FF FF         DEC dword ptr [EBP + 0xffffff60]
0069F310  75 80                     JNZ 0x0069f292
LAB_0069f312:
0069F312  8B BD 74 FF FF FF         MOV EDI,dword ptr [EBP + 0xffffff74]
0069F318  03 FA                     ADD EDI,EDX
0069F31A  89 BD 74 FF FF FF         MOV dword ptr [EBP + 0xffffff74],EDI
0069F320  8D 04 12                  LEA EAX,[EDX + EDX*0x1]
0069F323  8B B5 70 FF FF FF         MOV ESI,dword ptr [EBP + 0xffffff70]
0069F329  03 F0                     ADD ESI,EAX
0069F32B  89 B5 70 FF FF FF         MOV dword ptr [EBP + 0xffffff70],ESI
0069F331  FF 8D 6C FF FF FF         DEC dword ptr [EBP + 0xffffff6c]
0069F337  0F 85 37 FF FF FF         JNZ 0x0069f274
LAB_0069f33d:
0069F33D  E8 7E F3 08 00            CALL 0x0072e6c0
0069F342  A3 D0 3D 85 00            MOV [0x00853dd0],EAX
0069F347  33 D2                     XOR EDX,EDX
0069F349  89 55 90                  MOV dword ptr [EBP + -0x70],EDX
0069F34C  89 55 8C                  MOV dword ptr [EBP + -0x74],EDX
0069F34F  8B 85 78 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff78]
0069F355  8B 48 08                  MOV ECX,dword ptr [EAX + 0x8]
0069F358  8B 41 04                  MOV EAX,dword ptr [ECX + 0x4]
0069F35B  0F AF 01                  IMUL EAX,dword ptr [ECX]
0069F35E  C1 E0 02                  SHL EAX,0x2
0069F361  89 45 A8                  MOV dword ptr [EBP + -0x58],EAX
0069F364  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
0069F367  3B C2                     CMP EAX,EDX
0069F369  0F 8E 12 01 00 00         JLE 0x0069f481
0069F36F  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0069F372  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0069F375  C1 E0 02                  SHL EAX,0x2
0069F378  89 85 58 FF FF FF         MOV dword ptr [EBP + 0xffffff58],EAX
0069F37E  EB 09                     JMP 0x0069f389
LAB_0069f380:
0069F380  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
0069F383  8B 85 58 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff58]
LAB_0069f389:
0069F389  39 45 90                  CMP dword ptr [EBP + -0x70],EAX
0069F38C  0F 8D EF 00 00 00         JGE 0x0069f481
0069F392  E8 29 F3 08 00            CALL 0x0072e6c0
0069F397  99                        CDQ
0069F398  F7 7D 10                  IDIV dword ptr [EBP + 0x10]
0069F39B  8B FA                     MOV EDI,EDX
0069F39D  E8 1E F3 08 00            CALL 0x0072e6c0
0069F3A2  99                        CDQ
0069F3A3  F7 FB                     IDIV EBX
0069F3A5  8B DA                     MOV EBX,EDX
0069F3A7  E8 14 F3 08 00            CALL 0x0072e6c0
0069F3AC  99                        CDQ
0069F3AD  F7 7D 0C                  IDIV dword ptr [EBP + 0xc]
0069F3B0  89 55 D8                  MOV dword ptr [EBP + -0x28],EDX
0069F3B3  C7 45 9C 00 00 00 00      MOV dword ptr [EBP + -0x64],0x0
0069F3BA  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
0069F3BD  85 C0                     TEST EAX,EAX
0069F3BF  0F 8E AD 00 00 00         JLE 0x0069f472
0069F3C5  8B C2                     MOV EAX,EDX
0069F3C7  0F AF 45 08               IMUL EAX,dword ptr [EBP + 0x8]
0069F3CB  89 85 54 FF FF FF         MOV dword ptr [EBP + 0xffffff54],EAX
0069F3D1  EB 09                     JMP 0x0069f3dc
LAB_0069f3d3:
0069F3D3  8B 55 D8                  MOV EDX,dword ptr [EBP + -0x28]
0069F3D6  8B 85 54 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff54]
LAB_0069f3dc:
0069F3DC  8D 77 01                  LEA ESI,[EDI + 0x1]
0069F3DF  89 B5 50 FF FF FF         MOV dword ptr [EBP + 0xffffff50],ESI
0069F3E5  0F AF 75 94               IMUL ESI,dword ptr [EBP + -0x6c]
0069F3E9  03 F0                     ADD ESI,EAX
0069F3EB  03 F3                     ADD ESI,EBX
0069F3ED  8B 4D A0                  MOV ECX,dword ptr [EBP + -0x60]
0069F3F0  66 83 3C 71 00            CMP word ptr [ECX + ESI*0x2],0x0
0069F3F5  75 3F                     JNZ 0x0069f436
0069F3F7  8B 85 78 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff78]
0069F3FD  8B 48 08                  MOV ECX,dword ptr [EAX + 0x8]
0069F400  8B 01                     MOV EAX,dword ptr [ECX]
0069F402  0F AF C2                  IMUL EAX,EDX
0069F405  8B CF                     MOV ECX,EDI
0069F407  0F AF 4D A8               IMUL ECX,dword ptr [EBP + -0x58]
0069F40B  8B D3                     MOV EDX,EBX
0069F40D  03 D1                     ADD EDX,ECX
0069F40F  8D 04 42                  LEA EAX,[EDX + EAX*0x2]
0069F412  8B 0D D4 3D 85 00         MOV ECX,dword ptr [0x00853dd4]
0069F418  66 83 3C 41 00            CMP word ptr [ECX + EAX*0x2],0x0
0069F41D  75 17                     JNZ 0x0069f436
0069F41F  E8 9C F2 08 00            CALL 0x0072e6c0
0069F424  8B 55 A4                  MOV EDX,dword ptr [EBP + -0x5c]
0069F427  0F BF 0C 72               MOVSX ECX,word ptr [EDX + ESI*0x2]
0069F42B  83 C1 03                  ADD ECX,0x3
0069F42E  99                        CDQ
0069F42F  F7 F9                     IDIV ECX
0069F431  83 FA 02                  CMP EDX,0x2
0069F434  7D 1C                     JGE 0x0069f452
LAB_0069f436:
0069F436  8B BD 50 FF FF FF         MOV EDI,dword ptr [EBP + 0xffffff50]
0069F43C  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
0069F43F  3B F9                     CMP EDI,ECX
0069F441  7C 02                     JL 0x0069f445
0069F443  33 FF                     XOR EDI,EDI
LAB_0069f445:
0069F445  8B 45 9C                  MOV EAX,dword ptr [EBP + -0x64]
0069F448  40                        INC EAX
0069F449  89 45 9C                  MOV dword ptr [EBP + -0x64],EAX
0069F44C  3B C1                     CMP EAX,ECX
0069F44E  7C 83                     JL 0x0069f3d3
0069F450  EB 20                     JMP 0x0069f472
LAB_0069f452:
0069F452  57                        PUSH EDI
0069F453  8B 55 D8                  MOV EDX,dword ptr [EBP + -0x28]
0069F456  52                        PUSH EDX
0069F457  53                        PUSH EBX
0069F458  8B 8D 78 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff78]
0069F45E  E8 83 53 D6 FF            CALL 0x004047e6
0069F463  8B 45 A0                  MOV EAX,dword ptr [EBP + -0x60]
0069F466  66 C7 04 70 FF FF         MOV word ptr [EAX + ESI*0x2],0xffff
0069F46C  FF 45 AC                  INC dword ptr [EBP + -0x54]
0069F46F  FF 45 8C                  INC dword ptr [EBP + -0x74]
LAB_0069f472:
0069F472  FF 45 90                  INC dword ptr [EBP + -0x70]
0069F475  8B 4D 8C                  MOV ECX,dword ptr [EBP + -0x74]
0069F478  3B 4D 14                  CMP ECX,dword ptr [EBP + 0x14]
0069F47B  0F 8C FF FE FF FF         JL 0x0069f380
LAB_0069f481:
0069F481  E8 3A F2 08 00            CALL 0x0072e6c0
0069F486  A3 D0 3D 85 00            MOV [0x00853dd0],EAX
0069F48B  8B 45 AC                  MOV EAX,dword ptr [EBP + -0x54]
0069F48E  EB 2D                     JMP 0x0069f4bd
LAB_0069f4bd:
0069F4BD  8D A5 44 FF FF FF         LEA ESP,[EBP + 0xffffff44]
0069F4C3  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
0069F4C6  64 89 0D 00 00 00 00      MOV dword ptr FS:[0x0],ECX
0069F4CD  5F                        POP EDI
0069F4CE  5E                        POP ESI
0069F4CF  5B                        POP EBX
0069F4D0  8B E5                     MOV ESP,EBP
0069F4D2  5D                        POP EBP
0069F4D3  C2 10 00                  RET 0x10
