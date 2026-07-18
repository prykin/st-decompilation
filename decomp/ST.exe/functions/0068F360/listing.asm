FUN_0068f360:
0068F360  55                        PUSH EBP
0068F361  8B EC                     MOV EBP,ESP
0068F363  83 EC 58                  SUB ESP,0x58
0068F366  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0068F36B  53                        PUSH EBX
0068F36C  56                        PUSH ESI
0068F36D  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0068F370  57                        PUSH EDI
0068F371  8D 55 AC                  LEA EDX,[EBP + -0x54]
0068F374  8D 4D A8                  LEA ECX,[EBP + -0x58]
0068F377  6A 00                     PUSH 0x0
0068F379  52                        PUSH EDX
0068F37A  89 45 A8                  MOV dword ptr [EBP + -0x58],EAX
0068F37D  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0068F383  E8 68 E4 09 00            CALL 0x0072d7f0
0068F388  8B F0                     MOV ESI,EAX
0068F38A  83 C4 08                  ADD ESP,0x8
0068F38D  85 F6                     TEST ESI,ESI
0068F38F  0F 85 E1 01 00 00         JNZ 0x0068f576
0068F395  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
0068F398  85 F6                     TEST ESI,ESI
0068F39A  0F 84 C4 01 00 00         JZ 0x0068f564
0068F3A0  8B 46 0C                  MOV EAX,dword ptr [ESI + 0xc]
0068F3A3  85 C0                     TEST EAX,EAX
0068F3A5  0F 86 B9 01 00 00         JBE 0x0068f564
0068F3AB  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
0068F3AE  6A 01                     PUSH 0x1
0068F3B0  8B CF                     MOV ECX,EDI
0068F3B2  E8 D1 52 D7 FF            CALL 0x00404688
0068F3B7  6A 02                     PUSH 0x2
0068F3B9  8B CF                     MOV ECX,EDI
0068F3BB  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0068F3BE  E8 C5 52 D7 FF            CALL 0x00404688
0068F3C3  6A 04                     PUSH 0x4
0068F3C5  8B CF                     MOV ECX,EDI
0068F3C7  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
0068F3CA  E8 B9 52 D7 FF            CALL 0x00404688
0068F3CF  6A 10                     PUSH 0x10
0068F3D1  8B CF                     MOV ECX,EDI
0068F3D3  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
0068F3D6  E8 AD 52 D7 FF            CALL 0x00404688
0068F3DB  8B 5E 0C                  MOV EBX,dword ptr [ESI + 0xc]
0068F3DE  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
0068F3E1  4B                        DEC EBX
0068F3E2  0F 88 7C 01 00 00         JS 0x0068f564
0068F3E8  EB 03                     JMP 0x0068f3ed
LAB_0068f3ea:
0068F3EA  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
LAB_0068f3ed:
0068F3ED  3B 5E 0C                  CMP EBX,dword ptr [ESI + 0xc]
0068F3F0  73 0D                     JNC 0x0068f3ff
0068F3F2  8B 46 08                  MOV EAX,dword ptr [ESI + 0x8]
0068F3F5  8B 4E 1C                  MOV ECX,dword ptr [ESI + 0x1c]
0068F3F8  0F AF C3                  IMUL EAX,EBX
0068F3FB  03 C1                     ADD EAX,ECX
0068F3FD  EB 02                     JMP 0x0068f401
LAB_0068f3ff:
0068F3FF  33 C0                     XOR EAX,EAX
LAB_0068f401:
0068F401  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0068F407  66 8B 00                  MOV AX,word ptr [EAX]
0068F40A  85 C9                     TEST ECX,ECX
0068F40C  74 10                     JZ 0x0068f41e
0068F40E  6A 01                     PUSH 0x1
0068F410  50                        PUSH EAX
0068F411  8A 47 24                  MOV AL,byte ptr [EDI + 0x24]
0068F414  50                        PUSH EAX
0068F415  E8 A0 34 D7 FF            CALL 0x004028ba
0068F41A  8B F8                     MOV EDI,EAX
0068F41C  EB 02                     JMP 0x0068f420
LAB_0068f41e:
0068F41E  33 FF                     XOR EDI,EDI
LAB_0068f420:
0068F420  85 FF                     TEST EDI,EDI
0068F422  0F 84 35 01 00 00         JZ 0x0068f55d
0068F428  8B 17                     MOV EDX,dword ptr [EDI]
0068F42A  8B CF                     MOV ECX,EDI
0068F42C  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
0068F42F  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
0068F432  83 F8 78                  CMP EAX,0x78
0068F435  75 5B                     JNZ 0x0068f492
0068F437  85 D2                     TEST EDX,EDX
0068F439  7C 57                     JL 0x0068f492
0068F43B  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0068F43E  8B 88 A5 00 00 00         MOV ECX,dword ptr [EAX + 0xa5]
0068F444  85 C9                     TEST ECX,ECX
0068F446  74 1E                     JZ 0x0068f466
0068F448  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
0068F44B  3B D0                     CMP EDX,EAX
0068F44D  7D 17                     JGE 0x0068f466
0068F44F  73 0E                     JNC 0x0068f45f
0068F451  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
0068F454  0F AF C2                  IMUL EAX,EDX
0068F457  03 41 1C                  ADD EAX,dword ptr [ECX + 0x1c]
0068F45A  8B 40 04                  MOV EAX,dword ptr [EAX + 0x4]
0068F45D  EB 09                     JMP 0x0068f468
LAB_0068f45f:
0068F45F  33 C0                     XOR EAX,EAX
0068F461  8B 40 04                  MOV EAX,dword ptr [EAX + 0x4]
0068F464  EB 02                     JMP 0x0068f468
LAB_0068f466:
0068F466  33 C0                     XOR EAX,EAX
LAB_0068f468:
0068F468  8B 17                     MOV EDX,dword ptr [EDI]
0068F46A  33 F6                     XOR ESI,ESI
0068F46C  66 8B 70 7D               MOV SI,word ptr [EAX + 0x7d]
0068F470  8B CF                     MOV ECX,EDI
0068F472  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
0068F475  83 F8 78                  CMP EAX,0x78
0068F478  75 06                     JNZ 0x0068f480
0068F47A  89 B7 69 02 00 00         MOV dword ptr [EDI + 0x269],ESI
LAB_0068f480:
0068F480  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0068F483  53                        PUSH EBX
0068F484  50                        PUSH EAX
0068F485  E8 E6 17 02 00            CALL 0x006b0c70
0068F48A  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
0068F48D  E9 CB 00 00 00            JMP 0x0068f55d
LAB_0068f492:
0068F492  83 F8 32                  CMP EAX,0x32
0068F495  7C 0C                     JL 0x0068f4a3
0068F497  83 F8 74                  CMP EAX,0x74
0068F49A  7D 07                     JGE 0x0068f4a3
0068F49C  B9 01 00 00 00            MOV ECX,0x1
0068F4A1  EB 02                     JMP 0x0068f4a5
LAB_0068f4a3:
0068F4A3  33 C9                     XOR ECX,ECX
LAB_0068f4a5:
0068F4A5  85 C9                     TEST ECX,ECX
0068F4A7  75 60                     JNZ 0x0068f509
0068F4A9  83 F8 78                  CMP EAX,0x78
0068F4AC  74 5B                     JZ 0x0068f509
0068F4AE  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0068F4B1  0F BF 51 39               MOVSX EDX,word ptr [ECX + 0x39]
0068F4B5  8B CA                     MOV ECX,EDX
0068F4B7  49                        DEC ECX
0068F4B8  74 18                     JZ 0x0068f4d2
0068F4BA  49                        DEC ECX
0068F4BB  74 0E                     JZ 0x0068f4cb
0068F4BD  49                        DEC ECX
0068F4BE  74 04                     JZ 0x0068f4c4
0068F4C0  33 C9                     XOR ECX,ECX
0068F4C2  EB 13                     JMP 0x0068f4d7
LAB_0068f4c4:
0068F4C4  B9 1A 00 00 00            MOV ECX,0x1a
0068F4C9  EB 0C                     JMP 0x0068f4d7
LAB_0068f4cb:
0068F4CB  B9 14 00 00 00            MOV ECX,0x14
0068F4D0  EB 05                     JMP 0x0068f4d7
LAB_0068f4d2:
0068F4D2  B9 08 00 00 00            MOV ECX,0x8
LAB_0068f4d7:
0068F4D7  3B C1                     CMP EAX,ECX
0068F4D9  75 05                     JNZ 0x0068f4e0
0068F4DB  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
0068F4DE  EB 54                     JMP 0x0068f534
LAB_0068f4e0:
0068F4E0  8B CA                     MOV ECX,EDX
0068F4E2  49                        DEC ECX
0068F4E3  74 18                     JZ 0x0068f4fd
0068F4E5  49                        DEC ECX
0068F4E6  74 0E                     JZ 0x0068f4f6
0068F4E8  49                        DEC ECX
0068F4E9  74 04                     JZ 0x0068f4ef
0068F4EB  33 C9                     XOR ECX,ECX
0068F4ED  EB 13                     JMP 0x0068f502
LAB_0068f4ef:
0068F4EF  B9 19 00 00 00            MOV ECX,0x19
0068F4F4  EB 0C                     JMP 0x0068f502
LAB_0068f4f6:
0068F4F6  B9 18 00 00 00            MOV ECX,0x18
0068F4FB  EB 05                     JMP 0x0068f502
LAB_0068f4fd:
0068F4FD  B9 0C 00 00 00            MOV ECX,0xc
LAB_0068f502:
0068F502  3B C1                     CMP EAX,ECX
0068F504  75 2B                     JNZ 0x0068f531
0068F506  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
LAB_0068f509:
0068F509  85 D2                     TEST EDX,EDX
0068F50B  7C 50                     JL 0x0068f55d
0068F50D  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0068F510  8B 89 A5 00 00 00         MOV ECX,dword ptr [ECX + 0xa5]
LAB_0068f516:
0068F516  85 C9                     TEST ECX,ECX
0068F518  74 30                     JZ 0x0068f54a
0068F51A  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
0068F51D  3B D0                     CMP EDX,EAX
0068F51F  7D 29                     JGE 0x0068f54a
0068F521  73 20                     JNC 0x0068f543
0068F523  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
0068F526  0F AF C2                  IMUL EAX,EDX
0068F529  03 41 1C                  ADD EAX,dword ptr [ECX + 0x1c]
0068F52C  8B 40 04                  MOV EAX,dword ptr [EAX + 0x4]
0068F52F  EB 1B                     JMP 0x0068f54c
LAB_0068f531:
0068F531  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
LAB_0068f534:
0068F534  85 D2                     TEST EDX,EDX
0068F536  7C 25                     JL 0x0068f55d
0068F538  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0068F53B  8B 88 A5 00 00 00         MOV ECX,dword ptr [EAX + 0xa5]
0068F541  EB D3                     JMP 0x0068f516
LAB_0068f543:
0068F543  33 C0                     XOR EAX,EAX
0068F545  8B 40 04                  MOV EAX,dword ptr [EAX + 0x4]
0068F548  EB 02                     JMP 0x0068f54c
LAB_0068f54a:
0068F54A  33 C0                     XOR EAX,EAX
LAB_0068f54c:
0068F54C  6A 00                     PUSH 0x0
0068F54E  57                        PUSH EDI
0068F54F  8B C8                     MOV ECX,EAX
0068F551  E8 AA 4C D7 FF            CALL 0x00404200
0068F556  53                        PUSH EBX
0068F557  56                        PUSH ESI
0068F558  E8 13 17 02 00            CALL 0x006b0c70
LAB_0068f55d:
0068F55D  4B                        DEC EBX
0068F55E  0F 89 86 FE FF FF         JNS 0x0068f3ea
LAB_0068f564:
0068F564  8B 55 A8                  MOV EDX,dword ptr [EBP + -0x58]
0068F567  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0068F56D  5F                        POP EDI
0068F56E  5E                        POP ESI
0068F56F  5B                        POP EBX
0068F570  8B E5                     MOV ESP,EBP
0068F572  5D                        POP EBP
0068F573  C2 04 00                  RET 0x4
LAB_0068f576:
0068F576  8B 45 A8                  MOV EAX,dword ptr [EBP + -0x58]
0068F579  68 DC 57 7D 00            PUSH 0x7d57dc
0068F57E  68 CC 4C 7A 00            PUSH 0x7a4ccc
0068F583  56                        PUSH ESI
0068F584  6A 00                     PUSH 0x0
0068F586  68 76 02 00 00            PUSH 0x276
0068F58B  68 E0 56 7D 00            PUSH 0x7d56e0
0068F590  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0068F595  E8 36 DF 01 00            CALL 0x006ad4d0
0068F59A  83 C4 18                  ADD ESP,0x18
0068F59D  85 C0                     TEST EAX,EAX
0068F59F  74 01                     JZ 0x0068f5a2
0068F5A1  CC                        INT3
LAB_0068f5a2:
0068F5A2  68 77 02 00 00            PUSH 0x277
0068F5A7  68 E0 56 7D 00            PUSH 0x7d56e0
0068F5AC  6A 00                     PUSH 0x0
0068F5AE  56                        PUSH ESI
0068F5AF  E8 8C 68 01 00            CALL 0x006a5e40
0068F5B4  5F                        POP EDI
0068F5B5  5E                        POP ESI
0068F5B6  5B                        POP EBX
0068F5B7  8B E5                     MOV ESP,EBP
0068F5B9  5D                        POP EBP
0068F5BA  C2 04 00                  RET 0x4
