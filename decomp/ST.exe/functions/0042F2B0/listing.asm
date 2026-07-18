STAllPlayersC::UnRegisterObject:
0042F2B0  55                        PUSH EBP
0042F2B1  8B EC                     MOV EBP,ESP
0042F2B3  83 EC 64                  SUB ESP,0x64
0042F2B6  89 4D EC                  MOV dword ptr [EBP + -0x14],ECX
0042F2B9  53                        PUSH EBX
0042F2BA  0F BE 4D 08               MOVSX ECX,byte ptr [EBP + 0x8]
0042F2BE  56                        PUSH ESI
0042F2BF  57                        PUSH EDI
0042F2C0  8D 04 89                  LEA EAX,[ECX + ECX*0x4]
0042F2C3  6A 00                     PUSH 0x0
0042F2C5  C7 45 F8 00 00 00 00      MOV dword ptr [EBP + -0x8],0x0
0042F2CC  8D 14 C1                  LEA EDX,[ECX + EAX*0x8]
0042F2CF  8D 04 51                  LEA EAX,[ECX + EDX*0x2]
0042F2D2  C1 E0 04                  SHL EAX,0x4
0042F2D5  03 C1                     ADD EAX,ECX
0042F2D7  D1 E0                     SHL EAX,0x1
0042F2D9  8B 88 29 4E 7F 00         MOV ECX,dword ptr [EAX + 0x7f4e29]
0042F2DF  8B 90 25 4E 7F 00         MOV EDX,dword ptr [EAX + 0x7f4e25]
0042F2E5  8B 80 07 51 7F 00         MOV EAX,dword ptr [EAX + 0x7f5107]
0042F2EB  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
0042F2EE  8B 0D F8 8D 85 00         MOV ECX,dword ptr [0x00858df8]
0042F2F4  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
0042F2F7  89 55 E8                  MOV dword ptr [EBP + -0x18],EDX
0042F2FA  8D 45 A0                  LEA EAX,[EBP + -0x60]
0042F2FD  8D 55 9C                  LEA EDX,[EBP + -0x64]
0042F300  50                        PUSH EAX
0042F301  89 4D 9C                  MOV dword ptr [EBP + -0x64],ECX
0042F304  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0042F30A  E8 E1 E4 2F 00            CALL 0x0072d7f0
0042F30F  8B F0                     MOV ESI,EAX
0042F311  83 C4 08                  ADD ESP,0x8
0042F314  85 F6                     TEST ESI,ESI
0042F316  0F 85 70 0D 00 00         JNZ 0x0043008c
0042F31C  66 81 7D 10 FF FF         CMP word ptr [EBP + 0x10],0xffff
0042F322  75 1B                     JNZ 0x0042f33f
0042F324  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
0042F32A  68 CD 06 00 00            PUSH 0x6cd
0042F32F  68 04 60 7A 00            PUSH 0x7a6004
0042F334  51                        PUSH ECX
0042F335  68 09 00 FE AF            PUSH 0xaffe0009
0042F33A  E8 01 6B 27 00            CALL 0x006a5e40
LAB_0042f33f:
0042F33F  8B 5D 14                  MOV EBX,dword ptr [EBP + 0x14]
0042F342  BE 14 00 00 00            MOV ESI,0x14
0042F347  39 73 20                  CMP dword ptr [EBX + 0x20],ESI
0042F34A  0F 85 DF 00 00 00         JNZ 0x0042f42f
0042F350  8B 13                     MOV EDX,dword ptr [EBX]
0042F352  8B CB                     MOV ECX,EBX
0042F354  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
0042F357  83 C0 41                  ADD EAX,0x41
0042F35A  8B C8                     MOV ECX,EAX
0042F35C  81 E1 1F 00 00 80         AND ECX,0x8000001f
0042F362  79 05                     JNS 0x0042f369
0042F364  49                        DEC ECX
0042F365  83 C9 E0                  OR ECX,0xffffffe0
0042F368  41                        INC ECX
LAB_0042f369:
0042F369  BA 01 00 00 00            MOV EDX,0x1
0042F36E  D3 E2                     SHL EDX,CL
0042F370  C1 E8 05                  SHR EAX,0x5
0042F373  85 14 85 80 14 80 00      TEST dword ptr [EAX*0x4 + 0x801480],EDX
0042F37A  74 1F                     JZ 0x0042f39b
0042F37C  0F BE 4D 08               MOVSX ECX,byte ptr [EBP + 0x8]
0042F380  8D 04 89                  LEA EAX,[ECX + ECX*0x4]
0042F383  8D 14 C1                  LEA EDX,[ECX + EAX*0x8]
0042F386  8D 04 51                  LEA EAX,[ECX + EDX*0x2]
0042F389  C1 E0 04                  SHL EAX,0x4
0042F38C  03 C1                     ADD EAX,ECX
0042F38E  D1 E0                     SHL EAX,0x1
0042F390  FF 88 4B 4E 7F 00         DEC dword ptr [EAX + 0x7f4e4b]
0042F396  E9 8E 00 00 00            JMP 0x0042f429
LAB_0042f39b:
0042F39B  8B 03                     MOV EAX,dword ptr [EBX]
0042F39D  8B CB                     MOV ECX,EBX
0042F39F  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
0042F3A2  83 C0 41                  ADD EAX,0x41
0042F3A5  8B C8                     MOV ECX,EAX
0042F3A7  81 E1 1F 00 00 80         AND ECX,0x8000001f
0042F3AD  79 05                     JNS 0x0042f3b4
0042F3AF  49                        DEC ECX
0042F3B0  83 C9 E0                  OR ECX,0xffffffe0
0042F3B3  41                        INC ECX
LAB_0042f3b4:
0042F3B4  BA 01 00 00 00            MOV EDX,0x1
0042F3B9  D3 E2                     SHL EDX,CL
0042F3BB  C1 E8 05                  SHR EAX,0x5
0042F3BE  85 14 85 10 0F 80 00      TEST dword ptr [EAX*0x4 + 0x800f10],EDX
0042F3C5  74 1C                     JZ 0x0042f3e3
0042F3C7  0F BE 4D 08               MOVSX ECX,byte ptr [EBP + 0x8]
0042F3CB  8D 04 89                  LEA EAX,[ECX + ECX*0x4]
0042F3CE  8D 14 C1                  LEA EDX,[ECX + EAX*0x8]
0042F3D1  8D 04 51                  LEA EAX,[ECX + EDX*0x2]
0042F3D4  C1 E0 04                  SHL EAX,0x4
0042F3D7  03 C1                     ADD EAX,ECX
0042F3D9  D1 E0                     SHL EAX,0x1
0042F3DB  FF 88 4F 4E 7F 00         DEC dword ptr [EAX + 0x7f4e4f]
0042F3E1  EB 46                     JMP 0x0042f429
LAB_0042f3e3:
0042F3E3  8B 03                     MOV EAX,dword ptr [EBX]
0042F3E5  8B CB                     MOV ECX,EBX
0042F3E7  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
0042F3EA  83 C0 41                  ADD EAX,0x41
0042F3ED  8B C8                     MOV ECX,EAX
0042F3EF  81 E1 1F 00 00 80         AND ECX,0x8000001f
0042F3F5  79 05                     JNS 0x0042f3fc
0042F3F7  49                        DEC ECX
0042F3F8  83 C9 E0                  OR ECX,0xffffffe0
0042F3FB  41                        INC ECX
LAB_0042f3fc:
0042F3FC  BA 01 00 00 00            MOV EDX,0x1
0042F401  D3 E2                     SHL EDX,CL
0042F403  C1 E8 05                  SHR EAX,0x5
0042F406  85 14 85 50 14 80 00      TEST dword ptr [EAX*0x4 + 0x801450],EDX
0042F40D  74 20                     JZ 0x0042f42f
0042F40F  0F BE 4D 08               MOVSX ECX,byte ptr [EBP + 0x8]
0042F413  8D 04 89                  LEA EAX,[ECX + ECX*0x4]
0042F416  8D 14 C1                  LEA EDX,[ECX + EAX*0x8]
0042F419  8D 04 51                  LEA EAX,[ECX + EDX*0x2]
0042F41C  C1 E0 04                  SHL EAX,0x4
0042F41F  03 C1                     ADD EAX,ECX
0042F421  D1 E0                     SHL EAX,0x1
0042F423  FF 88 53 4E 7F 00         DEC dword ptr [EAX + 0x7f4e53]
LAB_0042f429:
0042F429  FF 80 57 4E 7F 00         INC dword ptr [EAX + 0x7f4e57]
LAB_0042f42f:
0042F42F  81 7B 20 E8 03 00 00      CMP dword ptr [EBX + 0x20],0x3e8
0042F436  0F 85 0B 01 00 00         JNZ 0x0042f547
0042F43C  8B 03                     MOV EAX,dword ptr [EBX]
0042F43E  8B CB                     MOV ECX,EBX
0042F440  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
0042F443  83 E8 32                  SUB EAX,0x32
0042F446  8B C8                     MOV ECX,EAX
0042F448  81 E1 1F 00 00 80         AND ECX,0x8000001f
0042F44E  79 05                     JNS 0x0042f455
0042F450  49                        DEC ECX
0042F451  83 C9 E0                  OR ECX,0xffffffe0
0042F454  41                        INC ECX
LAB_0042f455:
0042F455  BA 01 00 00 00            MOV EDX,0x1
0042F45A  D3 E2                     SHL EDX,CL
0042F45C  C1 E8 05                  SHR EAX,0x5
0042F45F  85 14 85 90 0F 80 00      TEST dword ptr [EAX*0x4 + 0x800f90],EDX
0042F466  74 1F                     JZ 0x0042f487
0042F468  0F BE 4D 08               MOVSX ECX,byte ptr [EBP + 0x8]
0042F46C  8D 04 89                  LEA EAX,[ECX + ECX*0x4]
0042F46F  8D 14 C1                  LEA EDX,[ECX + EAX*0x8]
0042F472  8D 04 51                  LEA EAX,[ECX + EDX*0x2]
0042F475  C1 E0 04                  SHL EAX,0x4
0042F478  03 C1                     ADD EAX,ECX
0042F47A  D1 E0                     SHL EAX,0x1
0042F47C  FF 88 5B 4E 7F 00         DEC dword ptr [EAX + 0x7f4e5b]
0042F482  E9 BA 00 00 00            JMP 0x0042f541
LAB_0042f487:
0042F487  8B 03                     MOV EAX,dword ptr [EBX]
0042F489  8B CB                     MOV ECX,EBX
0042F48B  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
0042F48E  83 E8 32                  SUB EAX,0x32
0042F491  8B C8                     MOV ECX,EAX
0042F493  81 E1 1F 00 00 80         AND ECX,0x8000001f
0042F499  79 05                     JNS 0x0042f4a0
0042F49B  49                        DEC ECX
0042F49C  83 C9 E0                  OR ECX,0xffffffe0
0042F49F  41                        INC ECX
LAB_0042f4a0:
0042F4A0  BA 01 00 00 00            MOV EDX,0x1
0042F4A5  D3 E2                     SHL EDX,CL
0042F4A7  C1 E8 05                  SHR EAX,0x5
0042F4AA  85 14 85 60 13 80 00      TEST dword ptr [EAX*0x4 + 0x801360],EDX
0042F4B1  74 1C                     JZ 0x0042f4cf
0042F4B3  0F BE 4D 08               MOVSX ECX,byte ptr [EBP + 0x8]
0042F4B7  8D 04 89                  LEA EAX,[ECX + ECX*0x4]
0042F4BA  8D 14 C1                  LEA EDX,[ECX + EAX*0x8]
0042F4BD  8D 04 51                  LEA EAX,[ECX + EDX*0x2]
0042F4C0  C1 E0 04                  SHL EAX,0x4
0042F4C3  03 C1                     ADD EAX,ECX
0042F4C5  D1 E0                     SHL EAX,0x1
0042F4C7  FF 88 5F 4E 7F 00         DEC dword ptr [EAX + 0x7f4e5f]
0042F4CD  EB 72                     JMP 0x0042f541
LAB_0042f4cf:
0042F4CF  8B 03                     MOV EAX,dword ptr [EBX]
0042F4D1  8B CB                     MOV ECX,EBX
0042F4D3  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
0042F4D6  83 E8 32                  SUB EAX,0x32
0042F4D9  8B C8                     MOV ECX,EAX
0042F4DB  81 E1 1F 00 00 80         AND ECX,0x8000001f
0042F4E1  79 05                     JNS 0x0042f4e8
0042F4E3  49                        DEC ECX
0042F4E4  83 C9 E0                  OR ECX,0xffffffe0
0042F4E7  41                        INC ECX
LAB_0042f4e8:
0042F4E8  BA 01 00 00 00            MOV EDX,0x1
0042F4ED  D3 E2                     SHL EDX,CL
0042F4EF  C1 E8 05                  SHR EAX,0x5
0042F4F2  85 14 85 A0 14 80 00      TEST dword ptr [EAX*0x4 + 0x8014a0],EDX
0042F4F9  75 2C                     JNZ 0x0042f527
0042F4FB  8B 03                     MOV EAX,dword ptr [EBX]
0042F4FD  8B CB                     MOV ECX,EBX
0042F4FF  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
0042F502  83 E8 32                  SUB EAX,0x32
0042F505  8B C8                     MOV ECX,EAX
0042F507  81 E1 1F 00 00 80         AND ECX,0x8000001f
0042F50D  79 05                     JNS 0x0042f514
0042F50F  49                        DEC ECX
0042F510  83 C9 E0                  OR ECX,0xffffffe0
0042F513  41                        INC ECX
LAB_0042f514:
0042F514  BA 01 00 00 00            MOV EDX,0x1
0042F519  D3 E2                     SHL EDX,CL
0042F51B  C1 E8 05                  SHR EAX,0x5
0042F51E  85 14 85 80 0F 80 00      TEST dword ptr [EAX*0x4 + 0x800f80],EDX
0042F525  74 20                     JZ 0x0042f547
LAB_0042f527:
0042F527  0F BE 4D 08               MOVSX ECX,byte ptr [EBP + 0x8]
0042F52B  8D 04 89                  LEA EAX,[ECX + ECX*0x4]
0042F52E  8D 14 C1                  LEA EDX,[ECX + EAX*0x8]
0042F531  8D 04 51                  LEA EAX,[ECX + EDX*0x2]
0042F534  C1 E0 04                  SHL EAX,0x4
0042F537  03 C1                     ADD EAX,ECX
0042F539  D1 E0                     SHL EAX,0x1
0042F53B  FF 88 63 4E 7F 00         DEC dword ptr [EAX + 0x7f4e63]
LAB_0042f541:
0042F541  FF 80 67 4E 7F 00         INC dword ptr [EAX + 0x7f4e67]
LAB_0042f547:
0042F547  8B 43 20                  MOV EAX,dword ptr [EBX + 0x20]
0042F54A  3B C6                     CMP EAX,ESI
0042F54C  8B 75 18                  MOV ESI,dword ptr [EBP + 0x18]
0042F54F  0F 85 74 04 00 00         JNZ 0x0042f9c9
0042F555  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0042F558  0F BE C2                  MOVSX EAX,DL
0042F55B  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
0042F55E  8D 0C C8                  LEA ECX,[EAX + ECX*0x8]
0042F561  8D 3C 48                  LEA EDI,[EAX + ECX*0x2]
0042F564  8B 0D D4 16 80 00         MOV ECX,dword ptr [0x008016d4]
0042F56A  C1 E7 04                  SHL EDI,0x4
0042F56D  03 F8                     ADD EDI,EAX
0042F56F  D1 E7                     SHL EDI,0x1
0042F571  66 FF 8F 2D 4E 7F 00      DEC word ptr [EDI + 0x7f4e2d]
0042F578  66 8B 87 2D 4E 7F 00      MOV AX,word ptr [EDI + 0x7f4e2d]
0042F57F  85 C9                     TEST ECX,ECX
0042F581  74 0C                     JZ 0x0042f58f
0042F583  25 FF FF 00 00            AND EAX,0xffff
0042F588  50                        PUSH EAX
0042F589  52                        PUSH EDX
0042F58A  E8 8E 20 FD FF            CALL 0x0040161d
LAB_0042f58f:
0042F58F  8B 13                     MOV EDX,dword ptr [EBX]
0042F591  8B CB                     MOV ECX,EBX
0042F593  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
0042F596  83 F8 19                  CMP EAX,0x19
0042F599  0F 84 2A 04 00 00         JZ 0x0042f9c9
0042F59F  8B 03                     MOV EAX,dword ptr [EBX]
0042F5A1  8B CB                     MOV ECX,EBX
0042F5A3  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
0042F5A6  83 C0 41                  ADD EAX,0x41
0042F5A9  8B C8                     MOV ECX,EAX
0042F5AB  81 E1 1F 00 00 80         AND ECX,0x8000001f
0042F5B1  79 05                     JNS 0x0042f5b8
0042F5B3  49                        DEC ECX
0042F5B4  83 C9 E0                  OR ECX,0xffffffe0
0042F5B7  41                        INC ECX
LAB_0042f5b8:
0042F5B8  BA 01 00 00 00            MOV EDX,0x1
0042F5BD  D3 E2                     SHL EDX,CL
0042F5BF  C1 E8 05                  SHR EAX,0x5
0042F5C2  85 14 85 00 10 80 00      TEST dword ptr [EAX*0x4 + 0x801000],EDX
0042F5C9  74 56                     JZ 0x0042f621
0042F5CB  8B 8F 6B 4E 7F 00         MOV ECX,dword ptr [EDI + 0x7f4e6b]
0042F5D1  49                        DEC ECX
0042F5D2  81 FE FE 00 00 00         CMP ESI,0xfe
0042F5D8  89 8F 6B 4E 7F 00         MOV dword ptr [EDI + 0x7f4e6b],ECX
0042F5DE  0F 84 E5 03 00 00         JZ 0x0042f9c9
0042F5E4  8B 8F 73 4E 7F 00         MOV ECX,dword ptr [EDI + 0x7f4e73]
0042F5EA  41                        INC ECX
0042F5EB  81 FE FF 00 00 00         CMP ESI,0xff
0042F5F1  89 8F 73 4E 7F 00         MOV dword ptr [EDI + 0x7f4e73],ECX
0042F5F7  0F 84 CC 03 00 00         JZ 0x0042f9c9
0042F5FD  8D 04 B6                  LEA EAX,[ESI + ESI*0x4]
0042F600  8D 0C C6                  LEA ECX,[ESI + EAX*0x8]
0042F603  8D 14 4E                  LEA EDX,[ESI + ECX*0x2]
0042F606  C1 E2 04                  SHL EDX,0x4
0042F609  03 D6                     ADD EDX,ESI
0042F60B  8B 0C 55 77 4E 7F 00      MOV ECX,dword ptr [EDX*0x2 + 0x7f4e77]
0042F612  8D 04 55 77 4E 7F 00      LEA EAX,[EDX*0x2 + 0x7f4e77]
0042F619  41                        INC ECX
0042F61A  89 08                     MOV dword ptr [EAX],ECX
0042F61C  E9 A8 03 00 00            JMP 0x0042f9c9
LAB_0042f621:
0042F621  8B 03                     MOV EAX,dword ptr [EBX]
0042F623  8B CB                     MOV ECX,EBX
0042F625  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
0042F628  83 C0 41                  ADD EAX,0x41
0042F62B  8B C8                     MOV ECX,EAX
0042F62D  81 E1 1F 00 00 80         AND ECX,0x8000001f
0042F633  79 05                     JNS 0x0042f63a
0042F635  49                        DEC ECX
0042F636  83 C9 E0                  OR ECX,0xffffffe0
0042F639  41                        INC ECX
LAB_0042f63a:
0042F63A  BA 01 00 00 00            MOV EDX,0x1
0042F63F  D3 E2                     SHL EDX,CL
0042F641  C1 E8 05                  SHR EAX,0x5
0042F644  85 14 85 10 10 80 00      TEST dword ptr [EAX*0x4 + 0x801010],EDX
0042F64B  74 56                     JZ 0x0042f6a3
0042F64D  8B 8F 7B 4E 7F 00         MOV ECX,dword ptr [EDI + 0x7f4e7b]
0042F653  49                        DEC ECX
0042F654  81 FE FE 00 00 00         CMP ESI,0xfe
0042F65A  89 8F 7B 4E 7F 00         MOV dword ptr [EDI + 0x7f4e7b],ECX
0042F660  0F 84 63 03 00 00         JZ 0x0042f9c9
0042F666  8B 8F 83 4E 7F 00         MOV ECX,dword ptr [EDI + 0x7f4e83]
0042F66C  41                        INC ECX
0042F66D  81 FE FF 00 00 00         CMP ESI,0xff
0042F673  89 8F 83 4E 7F 00         MOV dword ptr [EDI + 0x7f4e83],ECX
0042F679  0F 84 4A 03 00 00         JZ 0x0042f9c9
0042F67F  8D 04 B6                  LEA EAX,[ESI + ESI*0x4]
0042F682  8D 0C C6                  LEA ECX,[ESI + EAX*0x8]
0042F685  8D 14 4E                  LEA EDX,[ESI + ECX*0x2]
0042F688  C1 E2 04                  SHL EDX,0x4
0042F68B  03 D6                     ADD EDX,ESI
0042F68D  8B 0C 55 87 4E 7F 00      MOV ECX,dword ptr [EDX*0x2 + 0x7f4e87]
0042F694  8D 04 55 87 4E 7F 00      LEA EAX,[EDX*0x2 + 0x7f4e87]
0042F69B  41                        INC ECX
0042F69C  89 08                     MOV dword ptr [EAX],ECX
0042F69E  E9 26 03 00 00            JMP 0x0042f9c9
LAB_0042f6a3:
0042F6A3  8B 03                     MOV EAX,dword ptr [EBX]
0042F6A5  8B CB                     MOV ECX,EBX
0042F6A7  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
0042F6AA  83 C0 41                  ADD EAX,0x41
0042F6AD  8B C8                     MOV ECX,EAX
0042F6AF  81 E1 1F 00 00 80         AND ECX,0x8000001f
0042F6B5  79 05                     JNS 0x0042f6bc
0042F6B7  49                        DEC ECX
0042F6B8  83 C9 E0                  OR ECX,0xffffffe0
0042F6BB  41                        INC ECX
LAB_0042f6bc:
0042F6BC  BA 01 00 00 00            MOV EDX,0x1
0042F6C1  D3 E2                     SHL EDX,CL
0042F6C3  C1 E8 05                  SHR EAX,0x5
0042F6C6  85 14 85 00 0F 80 00      TEST dword ptr [EAX*0x4 + 0x800f00],EDX
0042F6CD  74 56                     JZ 0x0042f725
0042F6CF  8B 8F 8B 4E 7F 00         MOV ECX,dword ptr [EDI + 0x7f4e8b]
0042F6D5  49                        DEC ECX
0042F6D6  81 FE FE 00 00 00         CMP ESI,0xfe
0042F6DC  89 8F 8B 4E 7F 00         MOV dword ptr [EDI + 0x7f4e8b],ECX
0042F6E2  0F 84 E1 02 00 00         JZ 0x0042f9c9
0042F6E8  8B 8F 93 4E 7F 00         MOV ECX,dword ptr [EDI + 0x7f4e93]
0042F6EE  41                        INC ECX
0042F6EF  81 FE FF 00 00 00         CMP ESI,0xff
0042F6F5  89 8F 93 4E 7F 00         MOV dword ptr [EDI + 0x7f4e93],ECX
0042F6FB  0F 84 C8 02 00 00         JZ 0x0042f9c9
0042F701  8D 04 B6                  LEA EAX,[ESI + ESI*0x4]
0042F704  8D 0C C6                  LEA ECX,[ESI + EAX*0x8]
0042F707  8D 14 4E                  LEA EDX,[ESI + ECX*0x2]
0042F70A  C1 E2 04                  SHL EDX,0x4
0042F70D  03 D6                     ADD EDX,ESI
0042F70F  8B 0C 55 97 4E 7F 00      MOV ECX,dword ptr [EDX*0x2 + 0x7f4e97]
0042F716  8D 04 55 97 4E 7F 00      LEA EAX,[EDX*0x2 + 0x7f4e97]
0042F71D  41                        INC ECX
0042F71E  89 08                     MOV dword ptr [EAX],ECX
0042F720  E9 A4 02 00 00            JMP 0x0042f9c9
LAB_0042f725:
0042F725  8B 03                     MOV EAX,dword ptr [EBX]
0042F727  8B CB                     MOV ECX,EBX
0042F729  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
0042F72C  83 C0 41                  ADD EAX,0x41
0042F72F  8B C8                     MOV ECX,EAX
0042F731  81 E1 1F 00 00 80         AND ECX,0x8000001f
0042F737  79 05                     JNS 0x0042f73e
0042F739  49                        DEC ECX
0042F73A  83 C9 E0                  OR ECX,0xffffffe0
0042F73D  41                        INC ECX
LAB_0042f73e:
0042F73E  BA 01 00 00 00            MOV EDX,0x1
0042F743  D3 E2                     SHL EDX,CL
0042F745  C1 E8 05                  SHR EAX,0x5
0042F748  85 14 85 70 13 80 00      TEST dword ptr [EAX*0x4 + 0x801370],EDX
0042F74F  74 56                     JZ 0x0042f7a7
0042F751  8B 8F 9B 4E 7F 00         MOV ECX,dword ptr [EDI + 0x7f4e9b]
0042F757  49                        DEC ECX
0042F758  81 FE FE 00 00 00         CMP ESI,0xfe
0042F75E  89 8F 9B 4E 7F 00         MOV dword ptr [EDI + 0x7f4e9b],ECX
0042F764  0F 84 5F 02 00 00         JZ 0x0042f9c9
0042F76A  8B 8F A3 4E 7F 00         MOV ECX,dword ptr [EDI + 0x7f4ea3]
0042F770  41                        INC ECX
0042F771  81 FE FF 00 00 00         CMP ESI,0xff
0042F777  89 8F A3 4E 7F 00         MOV dword ptr [EDI + 0x7f4ea3],ECX
0042F77D  0F 84 46 02 00 00         JZ 0x0042f9c9
0042F783  8D 04 B6                  LEA EAX,[ESI + ESI*0x4]
0042F786  8D 0C C6                  LEA ECX,[ESI + EAX*0x8]
0042F789  8D 14 4E                  LEA EDX,[ESI + ECX*0x2]
0042F78C  C1 E2 04                  SHL EDX,0x4
0042F78F  03 D6                     ADD EDX,ESI
0042F791  8B 0C 55 A7 4E 7F 00      MOV ECX,dword ptr [EDX*0x2 + 0x7f4ea7]
0042F798  8D 04 55 A7 4E 7F 00      LEA EAX,[EDX*0x2 + 0x7f4ea7]
0042F79F  41                        INC ECX
0042F7A0  89 08                     MOV dword ptr [EAX],ECX
0042F7A2  E9 22 02 00 00            JMP 0x0042f9c9
LAB_0042f7a7:
0042F7A7  8B 03                     MOV EAX,dword ptr [EBX]
0042F7A9  8B CB                     MOV ECX,EBX
0042F7AB  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
0042F7AE  83 C0 41                  ADD EAX,0x41
0042F7B1  8B C8                     MOV ECX,EAX
0042F7B3  81 E1 1F 00 00 80         AND ECX,0x8000001f
0042F7B9  79 05                     JNS 0x0042f7c0
0042F7BB  49                        DEC ECX
0042F7BC  83 C9 E0                  OR ECX,0xffffffe0
0042F7BF  41                        INC ECX
LAB_0042f7c0:
0042F7C0  BA 01 00 00 00            MOV EDX,0x1
0042F7C5  D3 E2                     SHL EDX,CL
0042F7C7  C1 E8 05                  SHR EAX,0x5
0042F7CA  85 14 85 A0 0F 80 00      TEST dword ptr [EAX*0x4 + 0x800fa0],EDX
0042F7D1  74 56                     JZ 0x0042f829
0042F7D3  8B 8F AB 4E 7F 00         MOV ECX,dword ptr [EDI + 0x7f4eab]
0042F7D9  49                        DEC ECX
0042F7DA  81 FE FE 00 00 00         CMP ESI,0xfe
0042F7E0  89 8F AB 4E 7F 00         MOV dword ptr [EDI + 0x7f4eab],ECX
0042F7E6  0F 84 DD 01 00 00         JZ 0x0042f9c9
0042F7EC  8B 8F B3 4E 7F 00         MOV ECX,dword ptr [EDI + 0x7f4eb3]
0042F7F2  41                        INC ECX
0042F7F3  81 FE FF 00 00 00         CMP ESI,0xff
0042F7F9  89 8F B3 4E 7F 00         MOV dword ptr [EDI + 0x7f4eb3],ECX
0042F7FF  0F 84 C4 01 00 00         JZ 0x0042f9c9
0042F805  8D 04 B6                  LEA EAX,[ESI + ESI*0x4]
0042F808  8D 0C C6                  LEA ECX,[ESI + EAX*0x8]
0042F80B  8D 14 4E                  LEA EDX,[ESI + ECX*0x2]
0042F80E  C1 E2 04                  SHL EDX,0x4
0042F811  03 D6                     ADD EDX,ESI
0042F813  8B 0C 55 B7 4E 7F 00      MOV ECX,dword ptr [EDX*0x2 + 0x7f4eb7]
0042F81A  8D 04 55 B7 4E 7F 00      LEA EAX,[EDX*0x2 + 0x7f4eb7]
0042F821  41                        INC ECX
0042F822  89 08                     MOV dword ptr [EAX],ECX
0042F824  E9 A0 01 00 00            JMP 0x0042f9c9
LAB_0042f829:
0042F829  8B 03                     MOV EAX,dword ptr [EBX]
0042F82B  8B CB                     MOV ECX,EBX
0042F82D  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
0042F830  83 C0 41                  ADD EAX,0x41
0042F833  8B C8                     MOV ECX,EAX
0042F835  81 E1 1F 00 00 80         AND ECX,0x8000001f
0042F83B  79 05                     JNS 0x0042f842
0042F83D  49                        DEC ECX
0042F83E  83 C9 E0                  OR ECX,0xffffffe0
0042F841  41                        INC ECX
LAB_0042f842:
0042F842  BA 01 00 00 00            MOV EDX,0x1
0042F847  D3 E2                     SHL EDX,CL
0042F849  C1 E8 05                  SHR EAX,0x5
0042F84C  85 14 85 F0 0F 80 00      TEST dword ptr [EAX*0x4 + 0x800ff0],EDX
0042F853  74 56                     JZ 0x0042f8ab
0042F855  8B 8F BB 4E 7F 00         MOV ECX,dword ptr [EDI + 0x7f4ebb]
0042F85B  49                        DEC ECX
0042F85C  81 FE FE 00 00 00         CMP ESI,0xfe
0042F862  89 8F BB 4E 7F 00         MOV dword ptr [EDI + 0x7f4ebb],ECX
0042F868  0F 84 5B 01 00 00         JZ 0x0042f9c9
0042F86E  8B 8F C3 4E 7F 00         MOV ECX,dword ptr [EDI + 0x7f4ec3]
0042F874  41                        INC ECX
0042F875  81 FE FF 00 00 00         CMP ESI,0xff
0042F87B  89 8F C3 4E 7F 00         MOV dword ptr [EDI + 0x7f4ec3],ECX
0042F881  0F 84 42 01 00 00         JZ 0x0042f9c9
0042F887  8D 04 B6                  LEA EAX,[ESI + ESI*0x4]
0042F88A  8D 0C C6                  LEA ECX,[ESI + EAX*0x8]
0042F88D  8D 14 4E                  LEA EDX,[ESI + ECX*0x2]
0042F890  C1 E2 04                  SHL EDX,0x4
0042F893  03 D6                     ADD EDX,ESI
0042F895  8B 0C 55 C7 4E 7F 00      MOV ECX,dword ptr [EDX*0x2 + 0x7f4ec7]
0042F89C  8D 04 55 C7 4E 7F 00      LEA EAX,[EDX*0x2 + 0x7f4ec7]
0042F8A3  41                        INC ECX
0042F8A4  89 08                     MOV dword ptr [EAX],ECX
0042F8A6  E9 1E 01 00 00            JMP 0x0042f9c9
LAB_0042f8ab:
0042F8AB  8B 03                     MOV EAX,dword ptr [EBX]
0042F8AD  8B CB                     MOV ECX,EBX
0042F8AF  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
0042F8B2  83 C0 41                  ADD EAX,0x41
0042F8B5  8B C8                     MOV ECX,EAX
0042F8B7  81 E1 1F 00 00 80         AND ECX,0x8000001f
0042F8BD  79 05                     JNS 0x0042f8c4
0042F8BF  49                        DEC ECX
0042F8C0  83 C9 E0                  OR ECX,0xffffffe0
0042F8C3  41                        INC ECX
LAB_0042f8c4:
0042F8C4  BA 01 00 00 00            MOV EDX,0x1
0042F8C9  D3 E2                     SHL EDX,CL
0042F8CB  C1 E8 05                  SHR EAX,0x5
0042F8CE  85 14 85 60 14 80 00      TEST dword ptr [EAX*0x4 + 0x801460],EDX
0042F8D5  74 56                     JZ 0x0042f92d
0042F8D7  8B 8F CB 4E 7F 00         MOV ECX,dword ptr [EDI + 0x7f4ecb]
0042F8DD  49                        DEC ECX
0042F8DE  81 FE FE 00 00 00         CMP ESI,0xfe
0042F8E4  89 8F CB 4E 7F 00         MOV dword ptr [EDI + 0x7f4ecb],ECX
0042F8EA  0F 84 D9 00 00 00         JZ 0x0042f9c9
0042F8F0  8B 8F D3 4E 7F 00         MOV ECX,dword ptr [EDI + 0x7f4ed3]
0042F8F6  41                        INC ECX
0042F8F7  81 FE FF 00 00 00         CMP ESI,0xff
0042F8FD  89 8F D3 4E 7F 00         MOV dword ptr [EDI + 0x7f4ed3],ECX
0042F903  0F 84 C0 00 00 00         JZ 0x0042f9c9
0042F909  8D 04 B6                  LEA EAX,[ESI + ESI*0x4]
0042F90C  8D 0C C6                  LEA ECX,[ESI + EAX*0x8]
0042F90F  8D 14 4E                  LEA EDX,[ESI + ECX*0x2]
0042F912  C1 E2 04                  SHL EDX,0x4
0042F915  03 D6                     ADD EDX,ESI
0042F917  8B 0C 55 D7 4E 7F 00      MOV ECX,dword ptr [EDX*0x2 + 0x7f4ed7]
0042F91E  8D 04 55 D7 4E 7F 00      LEA EAX,[EDX*0x2 + 0x7f4ed7]
0042F925  41                        INC ECX
0042F926  89 08                     MOV dword ptr [EAX],ECX
0042F928  E9 9C 00 00 00            JMP 0x0042f9c9
LAB_0042f92d:
0042F92D  8B 03                     MOV EAX,dword ptr [EBX]
0042F92F  8B CB                     MOV ECX,EBX
0042F931  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
0042F934  83 C0 41                  ADD EAX,0x41
0042F937  8B C8                     MOV ECX,EAX
0042F939  81 E1 1F 00 00 80         AND ECX,0x8000001f
0042F93F  79 05                     JNS 0x0042f946
0042F941  49                        DEC ECX
0042F942  83 C9 E0                  OR ECX,0xffffffe0
0042F945  41                        INC ECX
LAB_0042f946:
0042F946  BA 01 00 00 00            MOV EDX,0x1
0042F94B  D3 E2                     SHL EDX,CL
0042F94D  C1 E8 05                  SHR EAX,0x5
0042F950  85 14 85 E0 0F 80 00      TEST dword ptr [EAX*0x4 + 0x800fe0],EDX
0042F957  74 4B                     JZ 0x0042f9a4
0042F959  8B 8F DB 4E 7F 00         MOV ECX,dword ptr [EDI + 0x7f4edb]
0042F95F  49                        DEC ECX
0042F960  81 FE FE 00 00 00         CMP ESI,0xfe
0042F966  89 8F DB 4E 7F 00         MOV dword ptr [EDI + 0x7f4edb],ECX
0042F96C  74 5B                     JZ 0x0042f9c9
0042F96E  8B 8F E3 4E 7F 00         MOV ECX,dword ptr [EDI + 0x7f4ee3]
0042F974  41                        INC ECX
0042F975  81 FE FF 00 00 00         CMP ESI,0xff
0042F97B  89 8F E3 4E 7F 00         MOV dword ptr [EDI + 0x7f4ee3],ECX
0042F981  74 46                     JZ 0x0042f9c9
0042F983  8D 04 B6                  LEA EAX,[ESI + ESI*0x4]
0042F986  8D 0C C6                  LEA ECX,[ESI + EAX*0x8]
0042F989  8D 14 4E                  LEA EDX,[ESI + ECX*0x2]
0042F98C  C1 E2 04                  SHL EDX,0x4
0042F98F  03 D6                     ADD EDX,ESI
0042F991  8B 0C 55 E7 4E 7F 00      MOV ECX,dword ptr [EDX*0x2 + 0x7f4ee7]
0042F998  8D 04 55 E7 4E 7F 00      LEA EAX,[EDX*0x2 + 0x7f4ee7]
0042F99F  41                        INC ECX
0042F9A0  89 08                     MOV dword ptr [EAX],ECX
0042F9A2  EB 25                     JMP 0x0042f9c9
LAB_0042f9a4:
0042F9A4  68 DC 66 7A 00            PUSH 0x7a66dc
0042F9A9  68 CC 4C 7A 00            PUSH 0x7a4ccc
0042F9AE  6A 00                     PUSH 0x0
0042F9B0  6A 00                     PUSH 0x0
0042F9B2  68 3C 07 00 00            PUSH 0x73c
0042F9B7  68 04 60 7A 00            PUSH 0x7a6004
0042F9BC  E8 0F DB 27 00            CALL 0x006ad4d0
0042F9C1  83 C4 18                  ADD ESP,0x18
0042F9C4  85 C0                     TEST EAX,EAX
0042F9C6  74 01                     JZ 0x0042f9c9
0042F9C8  CC                        INT3
LAB_0042f9c9:
0042F9C9  81 7B 20 E8 03 00 00      CMP dword ptr [EBX + 0x20],0x3e8
0042F9D0  0F 85 05 05 00 00         JNZ 0x0042fedb
0042F9D6  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0042F9D9  0F BE C2                  MOVSX EAX,DL
0042F9DC  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
0042F9DF  8D 0C C8                  LEA ECX,[EAX + ECX*0x8]
0042F9E2  8D 3C 48                  LEA EDI,[EAX + ECX*0x2]
0042F9E5  8B 0D D4 16 80 00         MOV ECX,dword ptr [0x008016d4]
0042F9EB  C1 E7 04                  SHL EDI,0x4
0042F9EE  03 F8                     ADD EDI,EAX
0042F9F0  D1 E7                     SHL EDI,0x1
0042F9F2  66 FF 8F 2D 4E 7F 00      DEC word ptr [EDI + 0x7f4e2d]
0042F9F9  66 8B 87 2D 4E 7F 00      MOV AX,word ptr [EDI + 0x7f4e2d]
0042FA00  85 C9                     TEST ECX,ECX
0042FA02  74 0C                     JZ 0x0042fa10
0042FA04  25 FF FF 00 00            AND EAX,0xffff
0042FA09  50                        PUSH EAX
0042FA0A  52                        PUSH EDX
0042FA0B  E8 0D 1C FD FF            CALL 0x0040161d
LAB_0042fa10:
0042FA10  8B 13                     MOV EDX,dword ptr [EBX]
0042FA12  8B CB                     MOV ECX,EBX
0042FA14  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
0042FA17  83 F8 33                  CMP EAX,0x33
0042FA1A  74 0D                     JZ 0x0042fa29
0042FA1C  83 F8 62                  CMP EAX,0x62
0042FA1F  75 0E                     JNZ 0x0042fa2f
0042FA21  FF 8F 7F 4F 7F 00         DEC dword ptr [EDI + 0x7f4f7f]
0042FA27  EB 06                     JMP 0x0042fa2f
LAB_0042fa29:
0042FA29  FF 8F 7B 4F 7F 00         DEC dword ptr [EDI + 0x7f4f7b]
LAB_0042fa2f:
0042FA2F  8B 03                     MOV EAX,dword ptr [EBX]
0042FA31  8B CB                     MOV ECX,EBX
0042FA33  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
0042FA36  83 E8 32                  SUB EAX,0x32
0042FA39  8B C8                     MOV ECX,EAX
0042FA3B  81 E1 1F 00 00 80         AND ECX,0x8000001f
0042FA41  79 05                     JNS 0x0042fa48
0042FA43  49                        DEC ECX
0042FA44  83 C9 E0                  OR ECX,0xffffffe0
0042FA47  41                        INC ECX
LAB_0042fa48:
0042FA48  BA 01 00 00 00            MOV EDX,0x1
0042FA4D  D3 E2                     SHL EDX,CL
0042FA4F  C1 E8 05                  SHR EAX,0x5
0042FA52  85 14 85 20 14 80 00      TEST dword ptr [EAX*0x4 + 0x801420],EDX
0042FA59  74 56                     JZ 0x0042fab1
0042FA5B  8B 8F EB 4E 7F 00         MOV ECX,dword ptr [EDI + 0x7f4eeb]
0042FA61  49                        DEC ECX
0042FA62  81 FE FE 00 00 00         CMP ESI,0xfe
0042FA68  89 8F EB 4E 7F 00         MOV dword ptr [EDI + 0x7f4eeb],ECX
0042FA6E  0F 84 67 04 00 00         JZ 0x0042fedb
0042FA74  8B 8F F3 4E 7F 00         MOV ECX,dword ptr [EDI + 0x7f4ef3]
0042FA7A  41                        INC ECX
0042FA7B  81 FE FF 00 00 00         CMP ESI,0xff
0042FA81  89 8F F3 4E 7F 00         MOV dword ptr [EDI + 0x7f4ef3],ECX
0042FA87  0F 84 4E 04 00 00         JZ 0x0042fedb
0042FA8D  8D 04 B6                  LEA EAX,[ESI + ESI*0x4]
0042FA90  8D 0C C6                  LEA ECX,[ESI + EAX*0x8]
0042FA93  8D 14 4E                  LEA EDX,[ESI + ECX*0x2]
0042FA96  C1 E2 04                  SHL EDX,0x4
0042FA99  03 D6                     ADD EDX,ESI
0042FA9B  8B 0C 55 F7 4E 7F 00      MOV ECX,dword ptr [EDX*0x2 + 0x7f4ef7]
0042FAA2  8D 04 55 F7 4E 7F 00      LEA EAX,[EDX*0x2 + 0x7f4ef7]
0042FAA9  41                        INC ECX
0042FAAA  89 08                     MOV dword ptr [EAX],ECX
0042FAAC  E9 2A 04 00 00            JMP 0x0042fedb
LAB_0042fab1:
0042FAB1  8B 03                     MOV EAX,dword ptr [EBX]
0042FAB3  8B CB                     MOV ECX,EBX
0042FAB5  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
0042FAB8  83 E8 32                  SUB EAX,0x32
0042FABB  8B C8                     MOV ECX,EAX
0042FABD  81 E1 1F 00 00 80         AND ECX,0x8000001f
0042FAC3  79 05                     JNS 0x0042faca
0042FAC5  49                        DEC ECX
0042FAC6  83 C9 E0                  OR ECX,0xffffffe0
0042FAC9  41                        INC ECX
LAB_0042faca:
0042FACA  BA 01 00 00 00            MOV EDX,0x1
0042FACF  D3 E2                     SHL EDX,CL
0042FAD1  C1 E8 05                  SHR EAX,0x5
0042FAD4  85 14 85 E0 13 80 00      TEST dword ptr [EAX*0x4 + 0x8013e0],EDX
0042FADB  74 56                     JZ 0x0042fb33
0042FADD  8B 8F FB 4E 7F 00         MOV ECX,dword ptr [EDI + 0x7f4efb]
0042FAE3  49                        DEC ECX
0042FAE4  81 FE FE 00 00 00         CMP ESI,0xfe
0042FAEA  89 8F FB 4E 7F 00         MOV dword ptr [EDI + 0x7f4efb],ECX
0042FAF0  0F 84 E5 03 00 00         JZ 0x0042fedb
0042FAF6  8B 8F 03 4F 7F 00         MOV ECX,dword ptr [EDI + 0x7f4f03]
0042FAFC  41                        INC ECX
0042FAFD  81 FE FF 00 00 00         CMP ESI,0xff
0042FB03  89 8F 03 4F 7F 00         MOV dword ptr [EDI + 0x7f4f03],ECX
0042FB09  0F 84 CC 03 00 00         JZ 0x0042fedb
0042FB0F  8D 04 B6                  LEA EAX,[ESI + ESI*0x4]
0042FB12  8D 0C C6                  LEA ECX,[ESI + EAX*0x8]
0042FB15  8D 14 4E                  LEA EDX,[ESI + ECX*0x2]
0042FB18  C1 E2 04                  SHL EDX,0x4
0042FB1B  03 D6                     ADD EDX,ESI
0042FB1D  8B 0C 55 07 4F 7F 00      MOV ECX,dword ptr [EDX*0x2 + 0x7f4f07]
0042FB24  8D 04 55 07 4F 7F 00      LEA EAX,[EDX*0x2 + 0x7f4f07]
0042FB2B  41                        INC ECX
0042FB2C  89 08                     MOV dword ptr [EAX],ECX
0042FB2E  E9 A8 03 00 00            JMP 0x0042fedb
LAB_0042fb33:
0042FB33  8B 03                     MOV EAX,dword ptr [EBX]
0042FB35  8B CB                     MOV ECX,EBX
0042FB37  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
0042FB3A  83 E8 32                  SUB EAX,0x32
0042FB3D  8B C8                     MOV ECX,EAX
0042FB3F  81 E1 1F 00 00 80         AND ECX,0x8000001f
0042FB45  79 05                     JNS 0x0042fb4c
0042FB47  49                        DEC ECX
0042FB48  83 C9 E0                  OR ECX,0xffffffe0
0042FB4B  41                        INC ECX
LAB_0042fb4c:
0042FB4C  BA 01 00 00 00            MOV EDX,0x1
0042FB51  D3 E2                     SHL EDX,CL
0042FB53  C1 E8 05                  SHR EAX,0x5
0042FB56  85 14 85 E0 0E 80 00      TEST dword ptr [EAX*0x4 + 0x800ee0],EDX
0042FB5D  74 56                     JZ 0x0042fbb5
0042FB5F  8B 8F 0B 4F 7F 00         MOV ECX,dword ptr [EDI + 0x7f4f0b]
0042FB65  49                        DEC ECX
0042FB66  81 FE FE 00 00 00         CMP ESI,0xfe
0042FB6C  89 8F 0B 4F 7F 00         MOV dword ptr [EDI + 0x7f4f0b],ECX
0042FB72  0F 84 63 03 00 00         JZ 0x0042fedb
0042FB78  8B 8F 13 4F 7F 00         MOV ECX,dword ptr [EDI + 0x7f4f13]
0042FB7E  41                        INC ECX
0042FB7F  81 FE FF 00 00 00         CMP ESI,0xff
0042FB85  89 8F 13 4F 7F 00         MOV dword ptr [EDI + 0x7f4f13],ECX
0042FB8B  0F 84 4A 03 00 00         JZ 0x0042fedb
0042FB91  8D 04 B6                  LEA EAX,[ESI + ESI*0x4]
0042FB94  8D 0C C6                  LEA ECX,[ESI + EAX*0x8]
0042FB97  8D 14 4E                  LEA EDX,[ESI + ECX*0x2]
0042FB9A  C1 E2 04                  SHL EDX,0x4
0042FB9D  03 D6                     ADD EDX,ESI
0042FB9F  8B 0C 55 17 4F 7F 00      MOV ECX,dword ptr [EDX*0x2 + 0x7f4f17]
0042FBA6  8D 04 55 17 4F 7F 00      LEA EAX,[EDX*0x2 + 0x7f4f17]
0042FBAD  41                        INC ECX
0042FBAE  89 08                     MOV dword ptr [EAX],ECX
0042FBB0  E9 26 03 00 00            JMP 0x0042fedb
LAB_0042fbb5:
0042FBB5  8B 03                     MOV EAX,dword ptr [EBX]
0042FBB7  8B CB                     MOV ECX,EBX
0042FBB9  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
0042FBBC  83 E8 32                  SUB EAX,0x32
0042FBBF  8B C8                     MOV ECX,EAX
0042FBC1  81 E1 1F 00 00 80         AND ECX,0x8000001f
0042FBC7  79 05                     JNS 0x0042fbce
0042FBC9  49                        DEC ECX
0042FBCA  83 C9 E0                  OR ECX,0xffffffe0
0042FBCD  41                        INC ECX
LAB_0042fbce:
0042FBCE  BA 01 00 00 00            MOV EDX,0x1
0042FBD3  D3 E2                     SHL EDX,CL
0042FBD5  C1 E8 05                  SHR EAX,0x5
0042FBD8  85 14 85 90 14 80 00      TEST dword ptr [EAX*0x4 + 0x801490],EDX
0042FBDF  74 56                     JZ 0x0042fc37
0042FBE1  8B 8F 1B 4F 7F 00         MOV ECX,dword ptr [EDI + 0x7f4f1b]
0042FBE7  49                        DEC ECX
0042FBE8  81 FE FE 00 00 00         CMP ESI,0xfe
0042FBEE  89 8F 1B 4F 7F 00         MOV dword ptr [EDI + 0x7f4f1b],ECX
0042FBF4  0F 84 E1 02 00 00         JZ 0x0042fedb
0042FBFA  8B 8F 23 4F 7F 00         MOV ECX,dword ptr [EDI + 0x7f4f23]
0042FC00  41                        INC ECX
0042FC01  81 FE FF 00 00 00         CMP ESI,0xff
0042FC07  89 8F 23 4F 7F 00         MOV dword ptr [EDI + 0x7f4f23],ECX
0042FC0D  0F 84 C8 02 00 00         JZ 0x0042fedb
0042FC13  8D 04 B6                  LEA EAX,[ESI + ESI*0x4]
0042FC16  8D 0C C6                  LEA ECX,[ESI + EAX*0x8]
0042FC19  8D 14 4E                  LEA EDX,[ESI + ECX*0x2]
0042FC1C  C1 E2 04                  SHL EDX,0x4
0042FC1F  03 D6                     ADD EDX,ESI
0042FC21  8B 0C 55 27 4F 7F 00      MOV ECX,dword ptr [EDX*0x2 + 0x7f4f27]
0042FC28  8D 04 55 27 4F 7F 00      LEA EAX,[EDX*0x2 + 0x7f4f27]
0042FC2F  41                        INC ECX
0042FC30  89 08                     MOV dword ptr [EAX],ECX
0042FC32  E9 A4 02 00 00            JMP 0x0042fedb
LAB_0042fc37:
0042FC37  8B 03                     MOV EAX,dword ptr [EBX]
0042FC39  8B CB                     MOV ECX,EBX
0042FC3B  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
0042FC3E  83 E8 32                  SUB EAX,0x32
0042FC41  8B C8                     MOV ECX,EAX
0042FC43  81 E1 1F 00 00 80         AND ECX,0x8000001f
0042FC49  79 05                     JNS 0x0042fc50
0042FC4B  49                        DEC ECX
0042FC4C  83 C9 E0                  OR ECX,0xffffffe0
0042FC4F  41                        INC ECX
LAB_0042fc50:
0042FC50  BA 01 00 00 00            MOV EDX,0x1
0042FC55  D3 E2                     SHL EDX,CL
0042FC57  C1 E8 05                  SHR EAX,0x5
0042FC5A  85 14 85 20 0F 80 00      TEST dword ptr [EAX*0x4 + 0x800f20],EDX
0042FC61  74 56                     JZ 0x0042fcb9
0042FC63  8B 8F 2B 4F 7F 00         MOV ECX,dword ptr [EDI + 0x7f4f2b]
0042FC69  49                        DEC ECX
0042FC6A  81 FE FE 00 00 00         CMP ESI,0xfe
0042FC70  89 8F 2B 4F 7F 00         MOV dword ptr [EDI + 0x7f4f2b],ECX
0042FC76  0F 84 5F 02 00 00         JZ 0x0042fedb
0042FC7C  8B 8F 33 4F 7F 00         MOV ECX,dword ptr [EDI + 0x7f4f33]
0042FC82  41                        INC ECX
0042FC83  81 FE FF 00 00 00         CMP ESI,0xff
0042FC89  89 8F 33 4F 7F 00         MOV dword ptr [EDI + 0x7f4f33],ECX
0042FC8F  0F 84 46 02 00 00         JZ 0x0042fedb
0042FC95  8D 04 B6                  LEA EAX,[ESI + ESI*0x4]
0042FC98  8D 0C C6                  LEA ECX,[ESI + EAX*0x8]
0042FC9B  8D 14 4E                  LEA EDX,[ESI + ECX*0x2]
0042FC9E  C1 E2 04                  SHL EDX,0x4
0042FCA1  03 D6                     ADD EDX,ESI
0042FCA3  8B 0C 55 37 4F 7F 00      MOV ECX,dword ptr [EDX*0x2 + 0x7f4f37]
0042FCAA  8D 04 55 37 4F 7F 00      LEA EAX,[EDX*0x2 + 0x7f4f37]
0042FCB1  41                        INC ECX
0042FCB2  89 08                     MOV dword ptr [EAX],ECX
0042FCB4  E9 22 02 00 00            JMP 0x0042fedb
LAB_0042fcb9:
0042FCB9  8B 03                     MOV EAX,dword ptr [EBX]
0042FCBB  8B CB                     MOV ECX,EBX
0042FCBD  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
0042FCC0  83 E8 32                  SUB EAX,0x32
0042FCC3  8B C8                     MOV ECX,EAX
0042FCC5  81 E1 1F 00 00 80         AND ECX,0x8000001f
0042FCCB  79 05                     JNS 0x0042fcd2
0042FCCD  49                        DEC ECX
0042FCCE  83 C9 E0                  OR ECX,0xffffffe0
0042FCD1  41                        INC ECX
LAB_0042fcd2:
0042FCD2  BA 01 00 00 00            MOV EDX,0x1
0042FCD7  D3 E2                     SHL EDX,CL
0042FCD9  C1 E8 05                  SHR EAX,0x5
0042FCDC  85 14 85 F0 0E 80 00      TEST dword ptr [EAX*0x4 + 0x800ef0],EDX
0042FCE3  74 56                     JZ 0x0042fd3b
0042FCE5  8B 8F 3B 4F 7F 00         MOV ECX,dword ptr [EDI + 0x7f4f3b]
0042FCEB  49                        DEC ECX
0042FCEC  81 FE FE 00 00 00         CMP ESI,0xfe
0042FCF2  89 8F 3B 4F 7F 00         MOV dword ptr [EDI + 0x7f4f3b],ECX
0042FCF8  0F 84 DD 01 00 00         JZ 0x0042fedb
0042FCFE  8B 8F 43 4F 7F 00         MOV ECX,dword ptr [EDI + 0x7f4f43]
0042FD04  41                        INC ECX
0042FD05  81 FE FF 00 00 00         CMP ESI,0xff
0042FD0B  89 8F 43 4F 7F 00         MOV dword ptr [EDI + 0x7f4f43],ECX
0042FD11  0F 84 C4 01 00 00         JZ 0x0042fedb
0042FD17  8D 04 B6                  LEA EAX,[ESI + ESI*0x4]
0042FD1A  8D 0C C6                  LEA ECX,[ESI + EAX*0x8]
0042FD1D  8D 14 4E                  LEA EDX,[ESI + ECX*0x2]
0042FD20  C1 E2 04                  SHL EDX,0x4
0042FD23  03 D6                     ADD EDX,ESI
0042FD25  8B 0C 55 47 4F 7F 00      MOV ECX,dword ptr [EDX*0x2 + 0x7f4f47]
0042FD2C  8D 04 55 47 4F 7F 00      LEA EAX,[EDX*0x2 + 0x7f4f47]
0042FD33  41                        INC ECX
0042FD34  89 08                     MOV dword ptr [EAX],ECX
0042FD36  E9 A0 01 00 00            JMP 0x0042fedb
LAB_0042fd3b:
0042FD3B  8B 03                     MOV EAX,dword ptr [EBX]
0042FD3D  8B CB                     MOV ECX,EBX
0042FD3F  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
0042FD42  83 E8 32                  SUB EAX,0x32
0042FD45  8B C8                     MOV ECX,EAX
0042FD47  81 E1 1F 00 00 80         AND ECX,0x8000001f
0042FD4D  79 05                     JNS 0x0042fd54
0042FD4F  49                        DEC ECX
0042FD50  83 C9 E0                  OR ECX,0xffffffe0
0042FD53  41                        INC ECX
LAB_0042fd54:
0042FD54  BA 01 00 00 00            MOV EDX,0x1
0042FD59  D3 E2                     SHL EDX,CL
0042FD5B  C1 E8 05                  SHR EAX,0x5
0042FD5E  85 14 85 30 14 80 00      TEST dword ptr [EAX*0x4 + 0x801430],EDX
0042FD65  74 56                     JZ 0x0042fdbd
0042FD67  8B 8F 4B 4F 7F 00         MOV ECX,dword ptr [EDI + 0x7f4f4b]
0042FD6D  49                        DEC ECX
0042FD6E  81 FE FE 00 00 00         CMP ESI,0xfe
0042FD74  89 8F 4B 4F 7F 00         MOV dword ptr [EDI + 0x7f4f4b],ECX
0042FD7A  0F 84 5B 01 00 00         JZ 0x0042fedb
0042FD80  8B 8F 53 4F 7F 00         MOV ECX,dword ptr [EDI + 0x7f4f53]
0042FD86  41                        INC ECX
0042FD87  81 FE FF 00 00 00         CMP ESI,0xff
0042FD8D  89 8F 53 4F 7F 00         MOV dword ptr [EDI + 0x7f4f53],ECX
0042FD93  0F 84 42 01 00 00         JZ 0x0042fedb
0042FD99  8D 04 B6                  LEA EAX,[ESI + ESI*0x4]
0042FD9C  8D 0C C6                  LEA ECX,[ESI + EAX*0x8]
0042FD9F  8D 14 4E                  LEA EDX,[ESI + ECX*0x2]
0042FDA2  C1 E2 04                  SHL EDX,0x4
0042FDA5  03 D6                     ADD EDX,ESI
0042FDA7  8B 0C 55 57 4F 7F 00      MOV ECX,dword ptr [EDX*0x2 + 0x7f4f57]
0042FDAE  8D 04 55 57 4F 7F 00      LEA EAX,[EDX*0x2 + 0x7f4f57]
0042FDB5  41                        INC ECX
0042FDB6  89 08                     MOV dword ptr [EAX],ECX
0042FDB8  E9 1E 01 00 00            JMP 0x0042fedb
LAB_0042fdbd:
0042FDBD  8B 03                     MOV EAX,dword ptr [EBX]
0042FDBF  8B CB                     MOV ECX,EBX
0042FDC1  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
0042FDC4  83 E8 32                  SUB EAX,0x32
0042FDC7  8B C8                     MOV ECX,EAX
0042FDC9  81 E1 1F 00 00 80         AND ECX,0x8000001f
0042FDCF  79 05                     JNS 0x0042fdd6
0042FDD1  49                        DEC ECX
0042FDD2  83 C9 E0                  OR ECX,0xffffffe0
0042FDD5  41                        INC ECX
LAB_0042fdd6:
0042FDD6  BA 01 00 00 00            MOV EDX,0x1
0042FDDB  D3 E2                     SHL EDX,CL
0042FDDD  C1 E8 05                  SHR EAX,0x5
0042FDE0  85 14 85 40 14 80 00      TEST dword ptr [EAX*0x4 + 0x801440],EDX
0042FDE7  74 56                     JZ 0x0042fe3f
0042FDE9  8B 8F 5B 4F 7F 00         MOV ECX,dword ptr [EDI + 0x7f4f5b]
0042FDEF  49                        DEC ECX
0042FDF0  81 FE FE 00 00 00         CMP ESI,0xfe
0042FDF6  89 8F 5B 4F 7F 00         MOV dword ptr [EDI + 0x7f4f5b],ECX
0042FDFC  0F 84 D9 00 00 00         JZ 0x0042fedb
0042FE02  8B 8F 63 4F 7F 00         MOV ECX,dword ptr [EDI + 0x7f4f63]
0042FE08  41                        INC ECX
0042FE09  81 FE FF 00 00 00         CMP ESI,0xff
0042FE0F  89 8F 63 4F 7F 00         MOV dword ptr [EDI + 0x7f4f63],ECX
0042FE15  0F 84 C0 00 00 00         JZ 0x0042fedb
0042FE1B  8D 04 B6                  LEA EAX,[ESI + ESI*0x4]
0042FE1E  8D 0C C6                  LEA ECX,[ESI + EAX*0x8]
0042FE21  8D 14 4E                  LEA EDX,[ESI + ECX*0x2]
0042FE24  C1 E2 04                  SHL EDX,0x4
0042FE27  03 D6                     ADD EDX,ESI
0042FE29  8B 0C 55 67 4F 7F 00      MOV ECX,dword ptr [EDX*0x2 + 0x7f4f67]
0042FE30  8D 04 55 67 4F 7F 00      LEA EAX,[EDX*0x2 + 0x7f4f67]
0042FE37  41                        INC ECX
0042FE38  89 08                     MOV dword ptr [EAX],ECX
0042FE3A  E9 9C 00 00 00            JMP 0x0042fedb
LAB_0042fe3f:
0042FE3F  8B 03                     MOV EAX,dword ptr [EBX]
0042FE41  8B CB                     MOV ECX,EBX
0042FE43  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
0042FE46  83 E8 32                  SUB EAX,0x32
0042FE49  8B C8                     MOV ECX,EAX
0042FE4B  81 E1 1F 00 00 80         AND ECX,0x8000001f
0042FE51  79 05                     JNS 0x0042fe58
0042FE53  49                        DEC ECX
0042FE54  83 C9 E0                  OR ECX,0xffffffe0
0042FE57  41                        INC ECX
LAB_0042fe58:
0042FE58  BA 01 00 00 00            MOV EDX,0x1
0042FE5D  D3 E2                     SHL EDX,CL
0042FE5F  C1 E8 05                  SHR EAX,0x5
0042FE62  85 14 85 60 0F 80 00      TEST dword ptr [EAX*0x4 + 0x800f60],EDX
0042FE69  74 4B                     JZ 0x0042feb6
0042FE6B  8B 8F 6B 4F 7F 00         MOV ECX,dword ptr [EDI + 0x7f4f6b]
0042FE71  49                        DEC ECX
0042FE72  81 FE FE 00 00 00         CMP ESI,0xfe
0042FE78  89 8F 6B 4F 7F 00         MOV dword ptr [EDI + 0x7f4f6b],ECX
0042FE7E  74 5B                     JZ 0x0042fedb
0042FE80  8B 8F 73 4F 7F 00         MOV ECX,dword ptr [EDI + 0x7f4f73]
0042FE86  41                        INC ECX
0042FE87  81 FE FF 00 00 00         CMP ESI,0xff
0042FE8D  89 8F 73 4F 7F 00         MOV dword ptr [EDI + 0x7f4f73],ECX
0042FE93  74 46                     JZ 0x0042fedb
0042FE95  8D 04 B6                  LEA EAX,[ESI + ESI*0x4]
0042FE98  8D 0C C6                  LEA ECX,[ESI + EAX*0x8]
0042FE9B  8D 14 4E                  LEA EDX,[ESI + ECX*0x2]
0042FE9E  C1 E2 04                  SHL EDX,0x4
0042FEA1  03 D6                     ADD EDX,ESI
0042FEA3  8B 0C 55 77 4F 7F 00      MOV ECX,dword ptr [EDX*0x2 + 0x7f4f77]
0042FEAA  8D 04 55 77 4F 7F 00      LEA EAX,[EDX*0x2 + 0x7f4f77]
0042FEB1  41                        INC ECX
0042FEB2  89 08                     MOV dword ptr [EAX],ECX
0042FEB4  EB 25                     JMP 0x0042fedb
LAB_0042feb6:
0042FEB6  68 9C 66 7A 00            PUSH 0x7a669c
0042FEBB  68 CC 4C 7A 00            PUSH 0x7a4ccc
0042FEC0  6A 00                     PUSH 0x0
0042FEC2  6A 00                     PUSH 0x0
0042FEC4  68 97 07 00 00            PUSH 0x797
0042FEC9  68 04 60 7A 00            PUSH 0x7a6004
0042FECE  E8 FD D5 27 00            CALL 0x006ad4d0
0042FED3  83 C4 18                  ADD ESP,0x18
0042FED6  85 C0                     TEST EAX,EAX
0042FED8  74 01                     JZ 0x0042fedb
0042FEDA  CC                        INT3
LAB_0042fedb:
0042FEDB  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
0042FEDE  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0042FEE1  8B 75 EC                  MOV ESI,dword ptr [EBP + -0x14]
0042FEE4  6A 01                     PUSH 0x1
0042FEE6  57                        PUSH EDI
0042FEE7  50                        PUSH EAX
0042FEE8  8B CE                     MOV ECX,ESI
0042FEEA  E8 CB 29 FD FF            CALL 0x004028ba
0042FEEF  3B C3                     CMP EAX,EBX
0042FEF1  74 1B                     JZ 0x0042ff0e
0042FEF3  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
0042FEF9  68 A3 07 00 00            PUSH 0x7a3
0042FEFE  68 04 60 7A 00            PUSH 0x7a6004
0042FF03  51                        PUSH ECX
0042FF04  68 07 00 FE AF            PUSH 0xaffe0007
0042FF09  E8 32 5F 27 00            CALL 0x006a5e40
LAB_0042ff0e:
0042FF0E  66 81 7D 0C FF FF         CMP word ptr [EBP + 0xc],0xffff
0042FF14  74 59                     JZ 0x0042ff6f
0042FF16  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0042FF19  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0042FF1C  52                        PUSH EDX
0042FF1D  50                        PUSH EAX
0042FF1E  8B CE                     MOV ECX,ESI
0042FF20  E8 D4 5D FD FF            CALL 0x00405cf9
0042FF25  85 C0                     TEST EAX,EAX
0042FF27  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
0042FF2A  75 1B                     JNZ 0x0042ff47
0042FF2C  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
0042FF32  68 A5 07 00 00            PUSH 0x7a5
0042FF37  68 04 60 7A 00            PUSH 0x7a6004
0042FF3C  51                        PUSH ECX
0042FF3D  68 04 00 FE AF            PUSH 0xaffe0004
0042FF42  E8 F9 5E 27 00            CALL 0x006a5e40
LAB_0042ff47:
0042FF47  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
0042FF4A  57                        PUSH EDI
0042FF4B  E8 4F 30 FD FF            CALL 0x00402f9f
0042FF50  85 C0                     TEST EAX,EAX
0042FF52  75 1B                     JNZ 0x0042ff6f
0042FF54  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
0042FF5A  68 A6 07 00 00            PUSH 0x7a6
0042FF5F  68 04 60 7A 00            PUSH 0x7a6004
0042FF64  52                        PUSH EDX
0042FF65  68 03 00 FE AF            PUSH 0xaffe0003
0042FF6A  E8 D1 5E 27 00            CALL 0x006a5e40
LAB_0042ff6f:
0042FF6F  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0042FF72  57                        PUSH EDI
0042FF73  50                        PUSH EAX
0042FF74  8B CE                     MOV ECX,ESI
0042FF76  E8 D8 26 FD FF            CALL 0x00402653
0042FF7B  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0042FF7E  8B 53 20                  MOV EDX,dword ptr [EBX + 0x20]
0042FF81  A0 4D 87 80 00            MOV AL,[0x0080874d]
0042FF86  57                        PUSH EDI
0042FF87  51                        PUSH ECX
0042FF88  52                        PUSH EDX
0042FF89  50                        PUSH EAX
0042FF8A  8B CE                     MOV ECX,ESI
0042FF8C  E8 12 22 FD FF            CALL 0x004021a3
0042FF91  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0042FF94  8B 53 20                  MOV EDX,dword ptr [EBX + 0x20]
0042FF97  57                        PUSH EDI
0042FF98  51                        PUSH ECX
0042FF99  52                        PUSH EDX
0042FF9A  8B CE                     MOV ECX,ESI
0042FF9C  E8 A2 36 FD FF            CALL 0x00403643
0042FFA1  66 81 7D 0C FF FF         CMP word ptr [EBP + 0xc],0xffff
0042FFA7  74 59                     JZ 0x00430002
0042FFA9  8B 75 F4                  MOV ESI,dword ptr [EBP + -0xc]
0042FFAC  57                        PUSH EDI
0042FFAD  8B CE                     MOV ECX,ESI
0042FFAF  8B 06                     MOV EAX,dword ptr [ESI]
0042FFB1  FF 50 04                  CALL dword ptr [EAX + 0x4]
0042FFB4  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
0042FFB7  8B D7                     MOV EDX,EDI
0042FFB9  8D 4D F8                  LEA ECX,[EBP + -0x8]
0042FFBC  81 E2 FF FF 00 00         AND EDX,0xffff
0042FFC2  51                        PUSH ECX
0042FFC3  52                        PUSH EDX
0042FFC4  50                        PUSH EAX
0042FFC5  E8 76 E1 27 00            CALL 0x006ae140
0042FFCA  8B CE                     MOV ECX,ESI
0042FFCC  E8 64 17 FD FF            CALL 0x00401735
0042FFD1  66 85 C0                  TEST AX,AX
0042FFD4  75 42                     JNZ 0x00430018
0042FFD6  8B CE                     MOV ECX,ESI
0042FFD8  E8 75 54 FD FF            CALL 0x00405452
0042FFDD  85 C0                     TEST EAX,EAX
0042FFDF  75 37                     JNZ 0x00430018
0042FFE1  8B 4E 08                  MOV ECX,dword ptr [ESI + 0x8]
0042FFE4  51                        PUSH ECX
0042FFE5  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
0042FFEB  E8 3C 43 FD FF            CALL 0x0040432c
0042FFF0  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0042FFF3  8D 55 F8                  LEA EDX,[EBP + -0x8]
0042FFF6  25 FF FF 00 00            AND EAX,0xffff
0042FFFB  52                        PUSH EDX
0042FFFC  50                        PUSH EAX
0042FFFD  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
00430000  EB 10                     JMP 0x00430012
LAB_00430002:
00430002  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
00430005  8B D7                     MOV EDX,EDI
00430007  8D 4D F8                  LEA ECX,[EBP + -0x8]
0043000A  81 E2 FF FF 00 00         AND EDX,0xffff
00430010  51                        PUSH ECX
00430011  52                        PUSH EDX
LAB_00430012:
00430012  50                        PUSH EAX
00430013  E8 28 E1 27 00            CALL 0x006ae140
LAB_00430018:
00430018  8B 13                     MOV EDX,dword ptr [EBX]
0043001A  8B CB                     MOV ECX,EBX
0043001C  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
0043001F  83 F8 1D                  CMP EAX,0x1d
00430022  75 54                     JNZ 0x00430078
00430024  8B 5D E4                  MOV EBX,dword ptr [EBP + -0x1c]
00430027  85 DB                     TEST EBX,EBX
00430029  74 4D                     JZ 0x00430078
0043002B  8B 43 0C                  MOV EAX,dword ptr [EBX + 0xc]
0043002E  33 F6                     XOR ESI,ESI
00430030  85 C0                     TEST EAX,EAX
00430032  89 45 E0                  MOV dword ptr [EBP + -0x20],EAX
00430035  7E 41                     JLE 0x00430078
LAB_00430037:
00430037  8D 45 FC                  LEA EAX,[EBP + -0x4]
0043003A  8B D6                     MOV EDX,ESI
0043003C  50                        PUSH EAX
0043003D  8B CB                     MOV ECX,EBX
0043003F  E8 2C CC 27 00            CALL 0x006acc70
00430044  66 39 7D FC               CMP word ptr [EBP + -0x4],DI
00430048  74 1C                     JZ 0x00430066
0043004A  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
0043004D  46                        INC ESI
0043004E  3B F0                     CMP ESI,EAX
00430050  7C E5                     JL 0x00430037
00430052  8B 55 9C                  MOV EDX,dword ptr [EBP + -0x64]
00430055  33 C0                     XOR EAX,EAX
00430057  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0043005D  5F                        POP EDI
0043005E  5E                        POP ESI
0043005F  5B                        POP EBX
00430060  8B E5                     MOV ESP,EBP
00430062  5D                        POP EBP
00430063  C2 14 00                  RET 0x14
LAB_00430066:
00430066  8D 4D FC                  LEA ECX,[EBP + -0x4]
00430069  C7 45 FC FF FF 00 00      MOV dword ptr [EBP + -0x4],0xffff
00430070  51                        PUSH ECX
00430071  56                        PUSH ESI
00430072  53                        PUSH EBX
00430073  E8 C8 E0 27 00            CALL 0x006ae140
LAB_00430078:
00430078  8B 55 9C                  MOV EDX,dword ptr [EBP + -0x64]
0043007B  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
LAB_00430081:
00430081  33 C0                     XOR EAX,EAX
00430083  5F                        POP EDI
00430084  5E                        POP ESI
00430085  5B                        POP EBX
00430086  8B E5                     MOV ESP,EBP
00430088  5D                        POP EBP
00430089  C2 14 00                  RET 0x14
LAB_0043008c:
0043008C  8B 45 9C                  MOV EAX,dword ptr [EBP + -0x64]
0043008F  81 FE 09 00 FE AF         CMP ESI,0xaffe0009
00430095  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0043009A  74 E5                     JZ 0x00430081
0043009C  68 74 66 7A 00            PUSH 0x7a6674
004300A1  68 CC 4C 7A 00            PUSH 0x7a4ccc
004300A6  56                        PUSH ESI
004300A7  6A 00                     PUSH 0x0
004300A9  68 CD 07 00 00            PUSH 0x7cd
004300AE  68 04 60 7A 00            PUSH 0x7a6004
004300B3  E8 18 D4 27 00            CALL 0x006ad4d0
004300B8  83 C4 18                  ADD ESP,0x18
004300BB  85 C0                     TEST EAX,EAX
004300BD  74 01                     JZ 0x004300c0
004300BF  CC                        INT3
LAB_004300c0:
004300C0  68 CE 07 00 00            PUSH 0x7ce
004300C5  68 04 60 7A 00            PUSH 0x7a6004
004300CA  6A 00                     PUSH 0x0
004300CC  56                        PUSH ESI
004300CD  E8 6E 5D 27 00            CALL 0x006a5e40
004300D2  5F                        POP EDI
004300D3  5E                        POP ESI
004300D4  83 C8 FF                  OR EAX,0xffffffff
004300D7  5B                        POP EBX
004300D8  8B E5                     MOV ESP,EBP
004300DA  5D                        POP EBP
004300DB  C2 14 00                  RET 0x14
