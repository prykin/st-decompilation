FUN_0040e0f0:
0040E0F0  55                        PUSH EBP
0040E0F1  8B EC                     MOV EBP,ESP
0040E0F3  6A FF                     PUSH -0x1
0040E0F5  68 30 00 79 00            PUSH 0x790030
0040E0FA  68 64 D9 72 00            PUSH 0x72d964
0040E0FF  64 A1 00 00 00 00         MOV EAX,FS:[0x0]
0040E105  50                        PUSH EAX
0040E106  64 89 25 00 00 00 00      MOV dword ptr FS:[0x0],ESP
0040E10D  81 EC AC 00 00 00         SUB ESP,0xac
0040E113  53                        PUSH EBX
0040E114  56                        PUSH ESI
0040E115  57                        PUSH EDI
0040E116  89 65 E8                  MOV dword ptr [EBP + -0x18],ESP
0040E119  C7 45 CC 00 00 00 00      MOV dword ptr [EBP + -0x34],0x0
0040E120  8B 1D 20 4D 7F 00         MOV EBX,dword ptr [0x007f4d20]
0040E126  81 FB C8 00 00 00         CMP EBX,0xc8
0040E12C  0F 8F FE 07 00 00         JG 0x0040e930
0040E132  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0040E135  85 D2                     TEST EDX,EDX
0040E137  0F 8C F3 07 00 00         JL 0x0040e930
0040E13D  8B 3D 2C 4D 7F 00         MOV EDI,dword ptr [0x007f4d2c]
0040E143  3B D7                     CMP EDX,EDI
0040E145  0F 8D E5 07 00 00         JGE 0x0040e930
0040E14B  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0040E14E  85 C9                     TEST ECX,ECX
0040E150  0F 8C DA 07 00 00         JL 0x0040e930
0040E156  A1 30 4D 7F 00            MOV EAX,[0x007f4d30]
0040E15B  3B C8                     CMP ECX,EAX
0040E15D  0F 8D CD 07 00 00         JGE 0x0040e930
0040E163  8B 75 10                  MOV ESI,dword ptr [EBP + 0x10]
0040E166  85 F6                     TEST ESI,ESI
0040E168  0F 8C C2 07 00 00         JL 0x0040e930
0040E16E  3B 35 34 4D 7F 00         CMP ESI,dword ptr [0x007f4d34]
0040E174  0F 8D B6 07 00 00         JGE 0x0040e930
0040E17A  0F AF C7                  IMUL EAX,EDI
0040E17D  89 45 D0                  MOV dword ptr [EBP + -0x30],EAX
0040E180  33 C0                     XOR EAX,EAX
0040E182  8B 3D 24 4D 7F 00         MOV EDI,dword ptr [0x007f4d24]
0040E188  85 FF                     TEST EDI,EDI
0040E18A  0F 9F C0                  SETG AL
0040E18D  89 45 D4                  MOV dword ptr [EBP + -0x2c],EAX
0040E190  C7 45 E0 00 00 00 00      MOV dword ptr [EBP + -0x20],0x0
0040E197  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
0040E19A  85 C0                     TEST EAX,EAX
0040E19C  7E 1C                     JLE 0x0040e1ba
0040E19E  8B 3D 38 4D 7F 00         MOV EDI,dword ptr [0x007f4d38]
0040E1A4  0F AF F8                  IMUL EDI,EAX
0040E1A7  C1 FF 10                  SAR EDI,0x10
0040E1AA  2B D7                     SUB EDX,EDI
0040E1AC  8B 3D 28 4D 7F 00         MOV EDI,dword ptr [0x007f4d28]
0040E1B2  0F AF F8                  IMUL EDI,EAX
0040E1B5  C1 FF 10                  SAR EDI,0x10
0040E1B8  03 CF                     ADD ECX,EDI
LAB_0040e1ba:
0040E1BA  C7 45 D8 00 00 00 00      MOV dword ptr [EBP + -0x28],0x0
0040E1C1  89 5D DC                  MOV dword ptr [EBP + -0x24],EBX
0040E1C4  8D 14 95 02 00 00 00      LEA EDX,[EDX*0x4 + 0x2]
0040E1CB  89 55 08                  MOV dword ptr [EBP + 0x8],EDX
0040E1CE  8D 04 8D 02 00 00 00      LEA EAX,[ECX*0x4 + 0x2]
0040E1D5  89 45 0C                  MOV dword ptr [EBP + 0xc],EAX
0040E1D8  89 75 B0                  MOV dword ptr [EBP + -0x50],ESI
0040E1DB  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
0040E1DE  8B 1C 8D 60 4B 7A 00      MOV EBX,dword ptr [ECX*0x4 + 0x7a4b60]
0040E1E5  89 5D E4                  MOV dword ptr [EBP + -0x1c],EBX
0040E1E8  8B C3                     MOV EAX,EBX
0040E1EA  99                        CDQ
0040E1EB  83 E2 07                  AND EDX,0x7
0040E1EE  03 C2                     ADD EAX,EDX
0040E1F0  C1 F8 03                  SAR EAX,0x3
0040E1F3  89 45 C4                  MOV dword ptr [EBP + -0x3c],EAX
0040E1F6  75 07                     JNZ 0x0040e1ff
0040E1F8  C7 45 C4 01 00 00 00      MOV dword ptr [EBP + -0x3c],0x1
LAB_0040e1ff:
0040E1FF  8B 15 28 4D 7F 00         MOV EDX,dword ptr [0x007f4d28]
0040E205  8D 3C 95 00 00 00 00      LEA EDI,[EDX*0x4 + 0x0]
0040E20C  A1 38 4D 7F 00            MOV EAX,[0x007f4d38]
0040E211  8D 34 85 00 00 00 00      LEA ESI,[EAX*0x4 + 0x0]
0040E218  8B C6                     MOV EAX,ESI
0040E21A  99                        CDQ
0040E21B  8B C8                     MOV ECX,EAX
0040E21D  33 CA                     XOR ECX,EDX
0040E21F  2B CA                     SUB ECX,EDX
0040E221  8B C7                     MOV EAX,EDI
0040E223  99                        CDQ
0040E224  33 C2                     XOR EAX,EDX
0040E226  2B C2                     SUB EAX,EDX
0040E228  3B C1                     CMP EAX,ECX
0040E22A  7C 28                     JL 0x0040e254
0040E22C  50                        PUSH EAX
0040E22D  56                        PUSH ESI
0040E22E  E8 DD D3 2C 00            CALL 0x006db610
0040E233  8B F0                     MOV ESI,EAX
0040E235  C1 E6 02                  SHL ESI,0x2
0040E238  89 75 A4                  MOV dword ptr [EBP + -0x5c],ESI
0040E23B  33 C9                     XOR ECX,ECX
0040E23D  85 FF                     TEST EDI,EDI
0040E23F  0F 9E C1                  SETLE CL
0040E242  49                        DEC ECX
0040E243  81 E1 00 00 08 00         AND ECX,0x80000
0040E249  81 C1 00 00 FC FF         ADD ECX,0xfffc0000
0040E24F  89 4D 90                  MOV dword ptr [EBP + -0x70],ECX
0040E252  EB 28                     JMP 0x0040e27c
LAB_0040e254:
0040E254  51                        PUSH ECX
0040E255  57                        PUSH EDI
0040E256  E8 B5 D3 2C 00            CALL 0x006db610
0040E25B  8B C8                     MOV ECX,EAX
0040E25D  C1 E1 02                  SHL ECX,0x2
0040E260  89 4D 90                  MOV dword ptr [EBP + -0x70],ECX
0040E263  33 D2                     XOR EDX,EDX
0040E265  85 F6                     TEST ESI,ESI
0040E267  0F 9E C2                  SETLE DL
0040E26A  4A                        DEC EDX
0040E26B  81 E2 00 00 08 00         AND EDX,0x80000
0040E271  81 C2 00 00 FC FF         ADD EDX,0xfffc0000
0040E277  8B F2                     MOV ESI,EDX
0040E279  89 75 A4                  MOV dword ptr [EBP + -0x5c],ESI
LAB_0040e27c:
0040E27C  8B C3                     MOV EAX,EBX
0040E27E  99                        CDQ
0040E27F  2B C2                     SUB EAX,EDX
0040E281  D1 F8                     SAR EAX,0x1
0040E283  F7 D8                     NEG EAX
0040E285  8B D0                     MOV EDX,EAX
0040E287  0F AF D1                  IMUL EDX,ECX
0040E28A  89 55 AC                  MOV dword ptr [EBP + -0x54],EDX
0040E28D  0F AF C6                  IMUL EAX,ESI
0040E290  89 45 98                  MOV dword ptr [EBP + -0x68],EAX
0040E293  C7 45 94 00 00 00 00      MOV dword ptr [EBP + -0x6c],0x0
0040E29A  8B 75 B0                  MOV ESI,dword ptr [EBP + -0x50]
LAB_0040e29d:
0040E29D  C7 45 A8 00 00 00 00      MOV dword ptr [EBP + -0x58],0x0
0040E2A4  3B 5D DC                  CMP EBX,dword ptr [EBP + -0x24]
0040E2A7  0F 8E 16 01 00 00         JLE 0x0040e3c3
0040E2AD  8B 45 D4                  MOV EAX,dword ptr [EBP + -0x2c]
0040E2B0  85 C0                     TEST EAX,EAX
0040E2B2  0F 84 0B 01 00 00         JZ 0x0040e3c3
0040E2B8  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
0040E2BB  85 C0                     TEST EAX,EAX
0040E2BD  75 4E                     JNZ 0x0040e30d
0040E2BF  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
0040E2C6  8B C3                     MOV EAX,EBX
0040E2C8  83 C0 03                  ADD EAX,0x3
0040E2CB  24 FC                     AND AL,0xfc
0040E2CD  E8 6E F7 31 00            CALL 0x0072da40
0040E2D2  89 65 E8                  MOV dword ptr [EBP + -0x18],ESP
0040E2D5  8B C4                     MOV EAX,ESP
0040E2D7  89 45 E0                  MOV dword ptr [EBP + -0x20],EAX
0040E2DA  C7 45 FC FF FF FF FF      MOV dword ptr [EBP + -0x4],0xffffffff
0040E2E1  EB 2A                     JMP 0x0040e30d
LAB_0040e30d:
0040E30D  8B CB                     MOV ECX,EBX
0040E30F  33 C0                     XOR EAX,EAX
0040E311  8B 7D E0                  MOV EDI,dword ptr [EBP + -0x20]
0040E314  8B D1                     MOV EDX,ECX
0040E316  C1 E9 02                  SHR ECX,0x2
0040E319  F3 AB                     STOSD.REP ES:EDI
0040E31B  8B CA                     MOV ECX,EDX
0040E31D  83 E1 03                  AND ECX,0x3
0040E320  F3 AA                     STOSB.REP ES:EDI
0040E322  33 FF                     XOR EDI,EDI
0040E324  85 DB                     TEST EBX,EBX
0040E326  0F 8E 94 00 00 00         JLE 0x0040e3c0
0040E32C  8B 45 98                  MOV EAX,dword ptr [EBP + -0x68]
0040E32F  05 00 80 00 00            ADD EAX,0x8000
0040E334  89 85 5C FF FF FF         MOV dword ptr [EBP + 0xffffff5c],EAX
0040E33A  8B 4D AC                  MOV ECX,dword ptr [EBP + -0x54]
0040E33D  8D B1 00 80 00 00         LEA ESI,[ECX + 0x8000]
LAB_0040e343:
0040E343  8B C6                     MOV EAX,ESI
0040E345  C1 F8 10                  SAR EAX,0x10
0040E348  03 45 08                  ADD EAX,dword ptr [EBP + 0x8]
0040E34B  C1 F8 02                  SAR EAX,0x2
0040E34E  89 45 BC                  MOV dword ptr [EBP + -0x44],EAX
0040E351  8B 8D 5C FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff5c]
0040E357  C1 F9 10                  SAR ECX,0x10
0040E35A  03 4D 0C                  ADD ECX,dword ptr [EBP + 0xc]
0040E35D  C1 F9 02                  SAR ECX,0x2
0040E360  89 4D B8                  MOV dword ptr [EBP + -0x48],ECX
0040E363  85 C0                     TEST EAX,EAX
0040E365  7C 48                     JL 0x0040e3af
0040E367  8B 15 2C 4D 7F 00         MOV EDX,dword ptr [0x007f4d2c]
0040E36D  3B C2                     CMP EAX,EDX
0040E36F  7D 3E                     JGE 0x0040e3af
0040E371  85 C9                     TEST ECX,ECX
0040E373  7C 3A                     JL 0x0040e3af
0040E375  3B 0D 30 4D 7F 00         CMP ECX,dword ptr [0x007f4d30]
0040E37B  7D 32                     JGE 0x0040e3af
0040E37D  0F AF D1                  IMUL EDX,ECX
0040E380  8B 4D B0                  MOV ECX,dword ptr [EBP + -0x50]
0040E383  0F AF 4D D0               IMUL ECX,dword ptr [EBP + -0x30]
0040E387  03 C2                     ADD EAX,EDX
0040E389  03 C8                     ADD ECX,EAX
0040E38B  89 4D 8C                  MOV dword ptr [EBP + -0x74],ECX
0040E38E  8B 55 8C                  MOV EDX,dword ptr [EBP + -0x74]
0040E391  8B 0D FC 4C 7F 00         MOV ECX,dword ptr [0x007f4cfc]
0040E397  80 F2 07                  XOR DL,0x7
0040E39A  33 C0                     XOR EAX,EAX
0040E39C  0F A3 11                  BT [ECX],EDX
0040E39F  D0 D0                     RCL AL,0x1
0040E3A1  85 C0                     TEST EAX,EAX
0040E3A3  74 0A                     JZ 0x0040e3af
0040E3A5  FF 45 A8                  INC dword ptr [EBP + -0x58]
0040E3A8  8B 55 E0                  MOV EDX,dword ptr [EBP + -0x20]
0040E3AB  C6 04 17 01               MOV byte ptr [EDI + EDX*0x1],0x1
LAB_0040e3af:
0040E3AF  03 75 90                  ADD ESI,dword ptr [EBP + -0x70]
0040E3B2  8B 45 A4                  MOV EAX,dword ptr [EBP + -0x5c]
0040E3B5  01 85 5C FF FF FF         ADD dword ptr [EBP + 0xffffff5c],EAX
0040E3BB  47                        INC EDI
0040E3BC  3B FB                     CMP EDI,EBX
0040E3BE  7C 83                     JL 0x0040e343
LAB_0040e3c0:
0040E3C0  8B 75 B0                  MOV ESI,dword ptr [EBP + -0x50]
LAB_0040e3c3:
0040E3C3  8B 45 A8                  MOV EAX,dword ptr [EBP + -0x58]
0040E3C6  3B D8                     CMP EBX,EAX
0040E3C8  0F 8E 59 03 00 00         JLE 0x0040e727
0040E3CE  8B 4D DC                  MOV ECX,dword ptr [EBP + -0x24]
0040E3D1  8D 14 08                  LEA EDX,[EAX + ECX*0x1]
0040E3D4  3B DA                     CMP EBX,EDX
0040E3D6  0F 8F 3B 01 00 00         JG 0x0040e517
0040E3DC  85 DB                     TEST EBX,EBX
0040E3DE  0F 8E 43 03 00 00         JLE 0x0040e727
0040E3E4  8B 7D D8                  MOV EDI,dword ptr [EBP + -0x28]
0040E3E7  8D 3C BF                  LEA EDI,[EDI + EDI*0x4]
0040E3EA  C1 E7 02                  SHL EDI,0x2
0040E3ED  8B 45 98                  MOV EAX,dword ptr [EBP + -0x68]
0040E3F0  8D 88 00 80 00 00         LEA ECX,[EAX + 0x8000]
0040E3F6  89 8D 58 FF FF FF         MOV dword ptr [EBP + 0xffffff58],ECX
0040E3FC  8B 55 AC                  MOV EDX,dword ptr [EBP + -0x54]
0040E3FF  8D 82 00 80 00 00         LEA EAX,[EDX + 0x8000]
0040E405  89 85 54 FF FF FF         MOV dword ptr [EBP + 0xffffff54],EAX
0040E40B  89 9D 50 FF FF FF         MOV dword ptr [EBP + 0xffffff50],EBX
LAB_0040e411:
0040E411  C1 F8 10                  SAR EAX,0x10
0040E414  03 45 08                  ADD EAX,dword ptr [EBP + 0x8]
0040E417  C1 F8 02                  SAR EAX,0x2
0040E41A  89 45 BC                  MOV dword ptr [EBP + -0x44],EAX
0040E41D  C1 F9 10                  SAR ECX,0x10
0040E420  03 4D 0C                  ADD ECX,dword ptr [EBP + 0xc]
0040E423  C1 F9 02                  SAR ECX,0x2
0040E426  89 4D B8                  MOV dword ptr [EBP + -0x48],ECX
0040E429  85 C0                     TEST EAX,EAX
0040E42B  8B 15 2C 4D 7F 00         MOV EDX,dword ptr [0x007f4d2c]
0040E431  7C 17                     JL 0x0040e44a
0040E433  3B C2                     CMP EAX,EDX
0040E435  7D 13                     JGE 0x0040e44a
0040E437  85 C9                     TEST ECX,ECX
0040E439  7C 0F                     JL 0x0040e44a
0040E43B  3B 0D 30 4D 7F 00         CMP ECX,dword ptr [0x007f4d30]
0040E441  7D 07                     JGE 0x0040e44a
0040E443  BB 01 00 00 00            MOV EBX,0x1
0040E448  EB 02                     JMP 0x0040e44c
LAB_0040e44a:
0040E44A  33 DB                     XOR EBX,EBX
LAB_0040e44c:
0040E44C  85 DB                     TEST EBX,EBX
0040E44E  74 28                     JZ 0x0040e478
0040E450  0F AF D1                  IMUL EDX,ECX
0040E453  0F AF 75 D0               IMUL ESI,dword ptr [EBP + -0x30]
0040E457  03 C2                     ADD EAX,EDX
0040E459  03 F0                     ADD ESI,EAX
0040E45B  89 75 84                  MOV dword ptr [EBP + -0x7c],ESI
0040E45E  8B 55 84                  MOV EDX,dword ptr [EBP + -0x7c]
0040E461  8B 0D FC 4C 7F 00         MOV ECX,dword ptr [0x007f4cfc]
0040E467  80 F2 07                  XOR DL,0x7
0040E46A  33 C0                     XOR EAX,EAX
0040E46C  0F A3 11                  BT [ECX],EDX
0040E46F  D0 D0                     RCL AL,0x1
0040E471  85 C0                     TEST EAX,EAX
0040E473  75 6D                     JNZ 0x0040e4e2
0040E475  8B 45 BC                  MOV EAX,dword ptr [EBP + -0x44]
LAB_0040e478:
0040E478  8B 0D 3C 4D 7F 00         MOV ECX,dword ptr [0x007f4d3c]
0040E47E  89 04 0F                  MOV dword ptr [EDI + ECX*0x1],EAX
0040E481  8B 15 3C 4D 7F 00         MOV EDX,dword ptr [0x007f4d3c]
0040E487  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
0040E48A  89 44 17 04               MOV dword ptr [EDI + EDX*0x1 + 0x4],EAX
0040E48E  8B 4D B0                  MOV ECX,dword ptr [EBP + -0x50]
0040E491  8B 15 3C 4D 7F 00         MOV EDX,dword ptr [0x007f4d3c]
0040E497  89 4C 17 08               MOV dword ptr [EDI + EDX*0x1 + 0x8],ECX
0040E49B  FF 45 D8                  INC dword ptr [EBP + -0x28]
0040E49E  83 C7 14                  ADD EDI,0x14
0040E4A1  FF 4D DC                  DEC dword ptr [EBP + -0x24]
0040E4A4  85 DB                     TEST EBX,EBX
0040E4A6  74 3A                     JZ 0x0040e4e2
0040E4A8  A1 2C 4D 7F 00            MOV EAX,[0x007f4d2c]
0040E4AD  0F AF 45 B8               IMUL EAX,dword ptr [EBP + -0x48]
0040E4B1  8B 4D B0                  MOV ECX,dword ptr [EBP + -0x50]
0040E4B4  0F AF 4D D0               IMUL ECX,dword ptr [EBP + -0x30]
0040E4B8  8B 55 BC                  MOV EDX,dword ptr [EBP + -0x44]
0040E4BB  03 D0                     ADD EDX,EAX
0040E4BD  03 CA                     ADD ECX,EDX
0040E4BF  89 8D 78 FF FF FF         MOV dword ptr [EBP + 0xffffff78],ECX
0040E4C5  A1 FC 4C 7F 00            MOV EAX,[0x007f4cfc]
0040E4CA  89 85 7C FF FF FF         MOV dword ptr [EBP + 0xffffff7c],EAX
0040E4D0  8B 8D 7C FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff7c]
0040E4D6  8B 95 78 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff78]
0040E4DC  80 F2 07                  XOR DL,0x7
0040E4DF  0F AB 11                  BTS [ECX],EDX
LAB_0040e4e2:
0040E4E2  8B 85 54 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff54]
0040E4E8  03 45 90                  ADD EAX,dword ptr [EBP + -0x70]
0040E4EB  89 85 54 FF FF FF         MOV dword ptr [EBP + 0xffffff54],EAX
0040E4F1  8B 8D 58 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff58]
0040E4F7  03 4D A4                  ADD ECX,dword ptr [EBP + -0x5c]
0040E4FA  89 8D 58 FF FF FF         MOV dword ptr [EBP + 0xffffff58],ECX
0040E500  FF 8D 50 FF FF FF         DEC dword ptr [EBP + 0xffffff50]
0040E506  8B 75 B0                  MOV ESI,dword ptr [EBP + -0x50]
0040E509  0F 85 02 FF FF FF         JNZ 0x0040e411
0040E50F  8B 5D E4                  MOV EBX,dword ptr [EBP + -0x1c]
0040E512  E9 10 02 00 00            JMP 0x0040e727
LAB_0040e517:
0040E517  85 C0                     TEST EAX,EAX
0040E519  0F 8E FC 00 00 00         JLE 0x0040e61b
0040E51F  6A 00                     PUSH 0x0
0040E521  8B 4D C4                  MOV ECX,dword ptr [EBP + -0x3c]
0040E524  51                        PUSH ECX
0040E525  53                        PUSH EBX
0040E526  8B 7D E0                  MOV EDI,dword ptr [EBP + -0x20]
0040E529  57                        PUSH EDI
0040E52A  E8 A1 0F 00 00            CALL 0x0040f4d0
0040E52F  8B 45 DC                  MOV EAX,dword ptr [EBP + -0x24]
0040E532  85 C0                     TEST EAX,EAX
0040E534  0F 8E D9 00 00 00         JLE 0x0040e613
0040E53A  8B 4D D8                  MOV ECX,dword ptr [EBP + -0x28]
0040E53D  8D 34 89                  LEA ESI,[ECX + ECX*0x4]
0040E540  C1 E6 02                  SHL ESI,0x2
0040E543  89 85 4C FF FF FF         MOV dword ptr [EBP + 0xffffff4c],EAX
0040E549  03 C8                     ADD ECX,EAX
0040E54B  89 4D D8                  MOV dword ptr [EBP + -0x28],ECX
LAB_0040e54e:
0040E54E  6A 00                     PUSH 0x0
0040E550  8B 55 C4                  MOV EDX,dword ptr [EBP + -0x3c]
0040E553  52                        PUSH EDX
0040E554  53                        PUSH EBX
0040E555  57                        PUSH EDI
0040E556  E8 E5 12 00 00            CALL 0x0040f840
0040E55B  8B C8                     MOV ECX,EAX
0040E55D  0F AF 4D 90               IMUL ECX,dword ptr [EBP + -0x70]
0040E561  8B 55 AC                  MOV EDX,dword ptr [EBP + -0x54]
0040E564  8D 8C 11 00 80 00 00      LEA ECX,[ECX + EDX*0x1 + 0x8000]
0040E56B  C1 F9 10                  SAR ECX,0x10
0040E56E  03 4D 08                  ADD ECX,dword ptr [EBP + 0x8]
0040E571  C1 F9 02                  SAR ECX,0x2
0040E574  89 4D BC                  MOV dword ptr [EBP + -0x44],ECX
0040E577  0F AF 45 A4               IMUL EAX,dword ptr [EBP + -0x5c]
0040E57B  8B 55 98                  MOV EDX,dword ptr [EBP + -0x68]
0040E57E  8D 84 10 00 80 00 00      LEA EAX,[EAX + EDX*0x1 + 0x8000]
0040E585  C1 F8 10                  SAR EAX,0x10
0040E588  03 45 0C                  ADD EAX,dword ptr [EBP + 0xc]
0040E58B  C1 F8 02                  SAR EAX,0x2
0040E58E  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
0040E591  8B 15 3C 4D 7F 00         MOV EDX,dword ptr [0x007f4d3c]
0040E597  89 0C 16                  MOV dword ptr [ESI + EDX*0x1],ECX
0040E59A  A1 3C 4D 7F 00            MOV EAX,[0x007f4d3c]
0040E59F  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
0040E5A2  89 4C 06 04               MOV dword ptr [ESI + EAX*0x1 + 0x4],ECX
0040E5A6  8B 55 B0                  MOV EDX,dword ptr [EBP + -0x50]
0040E5A9  A1 3C 4D 7F 00            MOV EAX,[0x007f4d3c]
0040E5AE  89 54 06 08               MOV dword ptr [ESI + EAX*0x1 + 0x8],EDX
0040E5B2  83 C6 14                  ADD ESI,0x14
0040E5B5  8B 45 BC                  MOV EAX,dword ptr [EBP + -0x44]
0040E5B8  85 C0                     TEST EAX,EAX
0040E5BA  7C 4B                     JL 0x0040e607
0040E5BC  8B 15 2C 4D 7F 00         MOV EDX,dword ptr [0x007f4d2c]
0040E5C2  3B C2                     CMP EAX,EDX
0040E5C4  7D 41                     JGE 0x0040e607
0040E5C6  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
0040E5C9  85 C9                     TEST ECX,ECX
0040E5CB  7C 3A                     JL 0x0040e607
0040E5CD  3B 0D 30 4D 7F 00         CMP ECX,dword ptr [0x007f4d30]
0040E5D3  7D 32                     JGE 0x0040e607
0040E5D5  0F AF D1                  IMUL EDX,ECX
0040E5D8  8B 4D B0                  MOV ECX,dword ptr [EBP + -0x50]
0040E5DB  0F AF 4D D0               IMUL ECX,dword ptr [EBP + -0x30]
0040E5DF  03 C2                     ADD EAX,EDX
0040E5E1  03 C8                     ADD ECX,EAX
0040E5E3  89 8D 70 FF FF FF         MOV dword ptr [EBP + 0xffffff70],ECX
0040E5E9  8B 15 FC 4C 7F 00         MOV EDX,dword ptr [0x007f4cfc]
0040E5EF  89 95 74 FF FF FF         MOV dword ptr [EBP + 0xffffff74],EDX
0040E5F5  8B 8D 74 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff74]
0040E5FB  8B 95 70 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff70]
0040E601  80 F2 07                  XOR DL,0x7
0040E604  0F AB 11                  BTS [ECX],EDX
LAB_0040e607:
0040E607  FF 8D 4C FF FF FF         DEC dword ptr [EBP + 0xffffff4c]
0040E60D  0F 85 3B FF FF FF         JNZ 0x0040e54e
LAB_0040e613:
0040E613  8B 75 B0                  MOV ESI,dword ptr [EBP + -0x50]
0040E616  E9 05 01 00 00            JMP 0x0040e720
LAB_0040e61b:
0040E61B  8B 4D AC                  MOV ECX,dword ptr [EBP + -0x54]
0040E61E  8B 55 90                  MOV EDX,dword ptr [EBP + -0x70]
0040E621  2B CA                     SUB ECX,EDX
0040E623  8B 7D 98                  MOV EDI,dword ptr [EBP + -0x68]
0040E626  2B 7D A4                  SUB EDI,dword ptr [EBP + -0x5c]
0040E629  8D 43 01                  LEA EAX,[EBX + 0x1]
0040E62C  8B 5D DC                  MOV EBX,dword ptr [EBP + -0x24]
0040E62F  43                        INC EBX
0040E630  0F AF C2                  IMUL EAX,EDX
0040E633  99                        CDQ
0040E634  F7 FB                     IDIV EBX
0040E636  89 45 90                  MOV dword ptr [EBP + -0x70],EAX
0040E639  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
0040E63C  40                        INC EAX
0040E63D  0F AF 45 A4               IMUL EAX,dword ptr [EBP + -0x5c]
0040E641  99                        CDQ
0040E642  F7 FB                     IDIV EBX
0040E644  89 45 A4                  MOV dword ptr [EBP + -0x5c],EAX
0040E647  8B 45 DC                  MOV EAX,dword ptr [EBP + -0x24]
0040E64A  85 C0                     TEST EAX,EAX
0040E64C  0F 8E CB 00 00 00         JLE 0x0040e71d
0040E652  8B 55 D8                  MOV EDX,dword ptr [EBP + -0x28]
0040E655  8D 34 92                  LEA ESI,[EDX + EDX*0x4]
0040E658  C1 E6 02                  SHL ESI,0x2
0040E65B  8D 9F 00 80 00 00         LEA EBX,[EDI + 0x8000]
0040E661  8D B9 00 80 00 00         LEA EDI,[ECX + 0x8000]
0040E667  89 85 48 FF FF FF         MOV dword ptr [EBP + 0xffffff48],EAX
0040E66D  03 D0                     ADD EDX,EAX
0040E66F  89 55 D8                  MOV dword ptr [EBP + -0x28],EDX
LAB_0040e672:
0040E672  03 7D 90                  ADD EDI,dword ptr [EBP + -0x70]
0040E675  03 5D A4                  ADD EBX,dword ptr [EBP + -0x5c]
0040E678  8B C7                     MOV EAX,EDI
0040E67A  C1 F8 10                  SAR EAX,0x10
0040E67D  03 45 08                  ADD EAX,dword ptr [EBP + 0x8]
0040E680  C1 F8 02                  SAR EAX,0x2
0040E683  89 45 BC                  MOV dword ptr [EBP + -0x44],EAX
0040E686  8B CB                     MOV ECX,EBX
0040E688  C1 F9 10                  SAR ECX,0x10
0040E68B  03 4D 0C                  ADD ECX,dword ptr [EBP + 0xc]
0040E68E  C1 F9 02                  SAR ECX,0x2
0040E691  89 4D B8                  MOV dword ptr [EBP + -0x48],ECX
0040E694  8B 15 3C 4D 7F 00         MOV EDX,dword ptr [0x007f4d3c]
0040E69A  89 04 16                  MOV dword ptr [ESI + EDX*0x1],EAX
0040E69D  A1 3C 4D 7F 00            MOV EAX,[0x007f4d3c]
0040E6A2  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
0040E6A5  89 4C 06 04               MOV dword ptr [ESI + EAX*0x1 + 0x4],ECX
0040E6A9  8B 55 B0                  MOV EDX,dword ptr [EBP + -0x50]
0040E6AC  A1 3C 4D 7F 00            MOV EAX,[0x007f4d3c]
0040E6B1  89 54 06 08               MOV dword ptr [ESI + EAX*0x1 + 0x8],EDX
0040E6B5  83 C6 14                  ADD ESI,0x14
0040E6B8  8B 45 BC                  MOV EAX,dword ptr [EBP + -0x44]
0040E6BB  85 C0                     TEST EAX,EAX
0040E6BD  7C 4F                     JL 0x0040e70e
0040E6BF  3B 05 2C 4D 7F 00         CMP EAX,dword ptr [0x007f4d2c]
0040E6C5  7D 47                     JGE 0x0040e70e
0040E6C7  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
0040E6CA  85 C9                     TEST ECX,ECX
0040E6CC  7C 40                     JL 0x0040e70e
0040E6CE  3B 0D 30 4D 7F 00         CMP ECX,dword ptr [0x007f4d30]
0040E6D4  7D 38                     JGE 0x0040e70e
0040E6D6  8B 15 2C 4D 7F 00         MOV EDX,dword ptr [0x007f4d2c]
0040E6DC  0F AF D1                  IMUL EDX,ECX
0040E6DF  8B 4D B0                  MOV ECX,dword ptr [EBP + -0x50]
0040E6E2  0F AF 4D D0               IMUL ECX,dword ptr [EBP + -0x30]
0040E6E6  03 C2                     ADD EAX,EDX
0040E6E8  03 C8                     ADD ECX,EAX
0040E6EA  89 8D 68 FF FF FF         MOV dword ptr [EBP + 0xffffff68],ECX
0040E6F0  8B 15 FC 4C 7F 00         MOV EDX,dword ptr [0x007f4cfc]
0040E6F6  89 95 6C FF FF FF         MOV dword ptr [EBP + 0xffffff6c],EDX
0040E6FC  8B 8D 6C FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff6c]
0040E702  8B 95 68 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff68]
0040E708  80 F2 07                  XOR DL,0x7
0040E70B  0F AB 11                  BTS [ECX],EDX
LAB_0040e70e:
0040E70E  FF 8D 48 FF FF FF         DEC dword ptr [EBP + 0xffffff48]
0040E714  0F 85 58 FF FF FF         JNZ 0x0040e672
0040E71A  8B 75 B0                  MOV ESI,dword ptr [EBP + -0x50]
LAB_0040e71d:
0040E71D  8B 5D E4                  MOV EBX,dword ptr [EBP + -0x1c]
LAB_0040e720:
0040E720  C7 45 DC 00 00 00 00      MOV dword ptr [EBP + -0x24],0x0
LAB_0040e727:
0040E727  8B 45 DC                  MOV EAX,dword ptr [EBP + -0x24]
0040E72A  85 C0                     TEST EAX,EAX
0040E72C  0F 8F 79 01 00 00         JG 0x0040e8ab
0040E732  C7 45 D8 00 00 00 00      MOV dword ptr [EBP + -0x28],0x0
0040E739  A1 20 4D 7F 00            MOV EAX,[0x007f4d20]
0040E73E  85 C0                     TEST EAX,EAX
0040E740  0F 8E 24 01 00 00         JLE 0x0040e86a
0040E746  33 F6                     XOR ESI,ESI
0040E748  8B 3D 3C 4D 7F 00         MOV EDI,dword ptr [0x007f4d3c]
0040E74E  8B 5D D0                  MOV EBX,dword ptr [EBP + -0x30]
LAB_0040e751:
0040E751  8B 04 3E                  MOV EAX,dword ptr [ESI + EDI*0x1]
0040E754  89 45 BC                  MOV dword ptr [EBP + -0x44],EAX
0040E757  8B 54 3E 04               MOV EDX,dword ptr [ESI + EDI*0x1 + 0x4]
0040E75B  89 55 B8                  MOV dword ptr [EBP + -0x48],EDX
0040E75E  8B 4C 3E 08               MOV ECX,dword ptr [ESI + EDI*0x1 + 0x8]
0040E762  89 4D B0                  MOV dword ptr [EBP + -0x50],ECX
0040E765  85 C0                     TEST EAX,EAX
0040E767  7C 39                     JL 0x0040e7a2
0040E769  3B 05 2C 4D 7F 00         CMP EAX,dword ptr [0x007f4d2c]
0040E76F  7D 31                     JGE 0x0040e7a2
0040E771  85 D2                     TEST EDX,EDX
0040E773  7C 2D                     JL 0x0040e7a2
0040E775  3B 15 30 4D 7F 00         CMP EDX,dword ptr [0x007f4d30]
0040E77B  7D 25                     JGE 0x0040e7a2
0040E77D  8B 1D 2C 4D 7F 00         MOV EBX,dword ptr [0x007f4d2c]
0040E783  0F AF DA                  IMUL EBX,EDX
0040E786  8B D3                     MOV EDX,EBX
0040E788  8B 5D D0                  MOV EBX,dword ptr [EBP + -0x30]
0040E78B  0F AF CB                  IMUL ECX,EBX
0040E78E  03 C2                     ADD EAX,EDX
0040E790  03 C8                     ADD ECX,EAX
0040E792  A1 F0 4C 7F 00            MOV EAX,[0x007f4cf0]
0040E797  66 83 3C 48 00            CMP word ptr [EAX + ECX*0x2],0x0
0040E79C  0F 84 B2 00 00 00         JZ 0x0040e854
LAB_0040e7a2:
0040E7A2  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
0040E7A5  C1 F9 02                  SAR ECX,0x2
0040E7A8  51                        PUSH ECX
0040E7A9  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0040E7AC  C1 FA 02                  SAR EDX,0x2
0040E7AF  52                        PUSH EDX
0040E7B0  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0040E7B3  C1 F8 02                  SAR EAX,0x2
0040E7B6  50                        PUSH EAX
0040E7B7  8B 0D 1C 4D 7F 00         MOV ECX,dword ptr [0x007f4d1c]
0040E7BD  C1 F9 02                  SAR ECX,0x2
0040E7C0  51                        PUSH ECX
0040E7C1  8B 15 10 4D 7F 00         MOV EDX,dword ptr [0x007f4d10]
0040E7C7  C1 FA 02                  SAR EDX,0x2
0040E7CA  52                        PUSH EDX
0040E7CB  A1 0C 4D 7F 00            MOV EAX,[0x007f4d0c]
0040E7D0  C1 F8 02                  SAR EAX,0x2
0040E7D3  50                        PUSH EAX
0040E7D4  8D 4D B0                  LEA ECX,[EBP + -0x50]
0040E7D7  51                        PUSH ECX
0040E7D8  8D 55 B8                  LEA EDX,[EBP + -0x48]
0040E7DB  52                        PUSH EDX
0040E7DC  8D 45 BC                  LEA EAX,[EBP + -0x44]
0040E7DF  50                        PUSH EAX
0040E7E0  E8 8B 0A 00 00            CALL 0x0040f270
0040E7E5  85 C0                     TEST EAX,EAX
0040E7E7  0F 85 B0 00 00 00         JNZ 0x0040e89d
0040E7ED  8B 0D 2C 4D 7F 00         MOV ECX,dword ptr [0x007f4d2c]
0040E7F3  0F AF 4D B8               IMUL ECX,dword ptr [EBP + -0x48]
0040E7F7  8B 55 B0                  MOV EDX,dword ptr [EBP + -0x50]
0040E7FA  0F AF D3                  IMUL EDX,EBX
0040E7FD  8B 45 BC                  MOV EAX,dword ptr [EBP + -0x44]
0040E800  03 C1                     ADD EAX,ECX
0040E802  03 D0                     ADD EDX,EAX
0040E804  89 95 60 FF FF FF         MOV dword ptr [EBP + 0xffffff60],EDX
0040E80A  8B 0D FC 4C 7F 00         MOV ECX,dword ptr [0x007f4cfc]
0040E810  89 8D 64 FF FF FF         MOV dword ptr [EBP + 0xffffff64],ECX
0040E816  8B 8D 64 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff64]
0040E81C  8B 95 60 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff60]
0040E822  80 F2 07                  XOR DL,0x7
0040E825  0F AB 11                  BTS [ECX],EDX
0040E828  8B 15 3C 4D 7F 00         MOV EDX,dword ptr [0x007f4d3c]
0040E82E  8B 45 BC                  MOV EAX,dword ptr [EBP + -0x44]
0040E831  89 04 16                  MOV dword ptr [ESI + EDX*0x1],EAX
0040E834  8B 0D 3C 4D 7F 00         MOV ECX,dword ptr [0x007f4d3c]
0040E83A  8B 55 B8                  MOV EDX,dword ptr [EBP + -0x48]
0040E83D  89 54 0E 04               MOV dword ptr [ESI + ECX*0x1 + 0x4],EDX
0040E841  8B 45 B0                  MOV EAX,dword ptr [EBP + -0x50]
0040E844  8B 0D 3C 4D 7F 00         MOV ECX,dword ptr [0x007f4d3c]
0040E84A  89 44 0E 08               MOV dword ptr [ESI + ECX*0x1 + 0x8],EAX
0040E84E  8B 3D 3C 4D 7F 00         MOV EDI,dword ptr [0x007f4d3c]
LAB_0040e854:
0040E854  8B 45 D8                  MOV EAX,dword ptr [EBP + -0x28]
0040E857  40                        INC EAX
0040E858  89 45 D8                  MOV dword ptr [EBP + -0x28],EAX
0040E85B  83 C6 14                  ADD ESI,0x14
0040E85E  3B 05 20 4D 7F 00         CMP EAX,dword ptr [0x007f4d20]
0040E864  0F 8C E7 FE FF FF         JL 0x0040e751
LAB_0040e86a:
0040E86A  E8 21 03 00 00            CALL 0x0040eb90
0040E86F  8B 75 CC                  MOV ESI,dword ptr [EBP + -0x34]
LAB_0040e872:
0040E872  85 F6                     TEST ESI,ESI
0040E874  74 2E                     JZ 0x0040e8a4
0040E876  83 FE FC                  CMP ESI,-0x4
0040E879  0F 84 B1 00 00 00         JZ 0x0040e930
0040E87F  68 35 09 00 00            PUSH 0x935
0040E884  68 A8 4C 7A 00            PUSH 0x7a4ca8
0040E889  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
0040E88F  52                        PUSH EDX
0040E890  56                        PUSH ESI
0040E891  E8 AA 75 29 00            CALL 0x006a5e40
0040E896  8B C6                     MOV EAX,ESI
0040E898  E9 98 00 00 00            JMP 0x0040e935
LAB_0040e89d:
0040E89D  BE FC FF FF FF            MOV ESI,0xfffffffc
0040E8A2  EB CE                     JMP 0x0040e872
LAB_0040e8a4:
0040E8A4  33 C0                     XOR EAX,EAX
0040E8A6  E9 8A 00 00 00            JMP 0x0040e935
LAB_0040e8ab:
0040E8AB  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
0040E8AE  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0040E8B1  8B 4D 94                  MOV ECX,dword ptr [EBP + -0x6c]
LAB_0040e8b4:
0040E8B4  41                        INC ECX
0040E8B5  83 F9 09                  CMP ECX,0x9
0040E8B8  7C 26                     JL 0x0040e8e0
0040E8BA  33 C9                     XOR ECX,ECX
0040E8BC  8B 75 10                  MOV ESI,dword ptr [EBP + 0x10]
0040E8BF  A1 38 4D 7F 00            MOV EAX,[0x007f4d38]
0040E8C4  C1 E0 02                  SHL EAX,0x2
0040E8C7  C1 F8 10                  SAR EAX,0x10
0040E8CA  2B D0                     SUB EDX,EAX
0040E8CC  A1 28 4D 7F 00            MOV EAX,[0x007f4d28]
0040E8D1  C1 E0 02                  SHL EAX,0x2
0040E8D4  C1 F8 10                  SAR EAX,0x10
0040E8D7  03 F8                     ADD EDI,EAX
0040E8D9  C7 45 D4 01 00 00 00      MOV dword ptr [EBP + -0x2c],0x1
LAB_0040e8e0:
0040E8E0  8D 41 FF                  LEA EAX,[ECX + -0x1]
0040E8E3  83 F8 07                  CMP EAX,0x7
0040E8E6  77 2B                     JA 0x0040e913
switchD_0040e8e8::switchD:
0040E8E8  FF 24 85 50 E9 40 00      JMP dword ptr [EAX*0x4 + 0x40e950]
switchD_0040e8e8::caseD_1:
0040E8EF  46                        INC ESI
0040E8F0  EB 21                     JMP 0x0040e913
switchD_0040e8e8::caseD_2:
0040E8F2  83 EE 02                  SUB ESI,0x2
0040E8F5  EB 1C                     JMP 0x0040e913
switchD_0040e8e8::caseD_3:
0040E8F7  83 C6 03                  ADD ESI,0x3
0040E8FA  EB 17                     JMP 0x0040e913
switchD_0040e8e8::caseD_4:
0040E8FC  83 EE 04                  SUB ESI,0x4
0040E8FF  EB 12                     JMP 0x0040e913
switchD_0040e8e8::caseD_5:
0040E901  83 C6 05                  ADD ESI,0x5
0040E904  EB 0D                     JMP 0x0040e913
switchD_0040e8e8::caseD_6:
0040E906  83 EE 06                  SUB ESI,0x6
0040E909  EB 08                     JMP 0x0040e913
switchD_0040e8e8::caseD_7:
0040E90B  83 C6 07                  ADD ESI,0x7
0040E90E  EB 03                     JMP 0x0040e913
switchD_0040e8e8::caseD_8:
0040E910  83 EE 08                  SUB ESI,0x8
switchD_0040e8e8::default:
0040E913  85 F6                     TEST ESI,ESI
0040E915  7C 9D                     JL 0x0040e8b4
0040E917  3B 35 34 4D 7F 00         CMP ESI,dword ptr [0x007f4d34]
0040E91D  7D 95                     JGE 0x0040e8b4
0040E91F  89 7D 0C                  MOV dword ptr [EBP + 0xc],EDI
0040E922  89 55 08                  MOV dword ptr [EBP + 0x8],EDX
0040E925  89 75 B0                  MOV dword ptr [EBP + -0x50],ESI
0040E928  89 4D 94                  MOV dword ptr [EBP + -0x6c],ECX
0040E92B  E9 6D F9 FF FF            JMP 0x0040e29d
LAB_0040e930:
0040E930  B8 FC FF FF FF            MOV EAX,0xfffffffc
LAB_0040e935:
0040E935  8D A5 38 FF FF FF         LEA ESP,[EBP + 0xffffff38]
0040E93B  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
0040E93E  64 89 0D 00 00 00 00      MOV dword ptr FS:[0x0],ECX
0040E945  5F                        POP EDI
0040E946  5E                        POP ESI
0040E947  5B                        POP EBX
0040E948  8B E5                     MOV ESP,EBP
0040E94A  5D                        POP EBP
0040E94B  C2 14 00                  RET 0x14
