STAllPlayersC::RegisterObject:
0042E210  55                        PUSH EBP
0042E211  8B EC                     MOV EBP,ESP
0042E213  81 EC 90 00 00 00         SUB ESP,0x90
0042E219  89 4D EC                  MOV dword ptr [EBP + -0x14],ECX
0042E21C  53                        PUSH EBX
0042E21D  0F BE 4D 08               MOVSX ECX,byte ptr [EBP + 0x8]
0042E221  56                        PUSH ESI
0042E222  57                        PUSH EDI
0042E223  8D 04 89                  LEA EAX,[ECX + ECX*0x4]
0042E226  6A 00                     PUSH 0x0
0042E228  8D 14 C1                  LEA EDX,[ECX + EAX*0x8]
0042E22B  8D 04 51                  LEA EAX,[ECX + EDX*0x2]
0042E22E  C1 E0 04                  SHL EAX,0x4
0042E231  03 C1                     ADD EAX,ECX
0042E233  D1 E0                     SHL EAX,0x1
0042E235  8B 88 25 4E 7F 00         MOV ECX,dword ptr [EAX + 0x7f4e25]
0042E23B  8B 90 29 4E 7F 00         MOV EDX,dword ptr [EAX + 0x7f4e29]
0042E241  8B 80 07 51 7F 00         MOV EAX,dword ptr [EAX + 0x7f5107]
0042E247  89 4D E8                  MOV dword ptr [EBP + -0x18],ECX
0042E24A  8B 0D F8 8D 85 00         MOV ECX,dword ptr [0x00858df8]
0042E250  89 45 E0                  MOV dword ptr [EBP + -0x20],EAX
0042E253  89 55 DC                  MOV dword ptr [EBP + -0x24],EDX
0042E256  8D 85 74 FF FF FF         LEA EAX,[EBP + 0xffffff74]
0042E25C  8D 95 70 FF FF FF         LEA EDX,[EBP + 0xffffff70]
0042E262  50                        PUSH EAX
0042E263  89 8D 70 FF FF FF         MOV dword ptr [EBP + 0xffffff70],ECX
0042E269  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0042E26F  E8 7C F5 2F 00            CALL 0x0072d7f0
0042E274  8B F0                     MOV ESI,EAX
0042E276  83 C4 08                  ADD ESP,0x8
0042E279  85 F6                     TEST ESI,ESI
0042E27B  0F 85 37 0A 00 00         JNZ 0x0042ecb8
0042E281  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
0042E284  85 C0                     TEST EAX,EAX
0042E286  75 1B                     JNZ 0x0042e2a3
0042E288  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
0042E28E  68 BD 05 00 00            PUSH 0x5bd
0042E293  68 04 60 7A 00            PUSH 0x7a6004
0042E298  51                        PUSH ECX
0042E299  68 04 00 FE AF            PUSH 0xaffe0004
0042E29E  E8 9D 7B 27 00            CALL 0x006a5e40
LAB_0042e2a3:
0042E2A3  8B 75 10                  MOV ESI,dword ptr [EBP + 0x10]
0042E2A6  8B 7D DC                  MOV EDI,dword ptr [EBP + -0x24]
0042E2A9  66 81 FE FF FF            CMP SI,0xffff
0042E2AE  74 38                     JZ 0x0042e2e8
0042E2B0  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
0042E2B3  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
0042E2B6  56                        PUSH ESI
0042E2B7  53                        PUSH EBX
0042E2B8  E8 49 63 FD FF            CALL 0x00404606
0042E2BD  83 F8 01                  CMP EAX,0x1
0042E2C0  75 1B                     JNZ 0x0042e2dd
0042E2C2  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
0042E2C8  68 C0 05 00 00            PUSH 0x5c0
0042E2CD  68 04 60 7A 00            PUSH 0x7a6004
0042E2D2  52                        PUSH EDX
0042E2D3  68 06 00 FE AF            PUSH 0xaffe0006
0042E2D8  E8 63 7B 27 00            CALL 0x006a5e40
LAB_0042e2dd:
0042E2DD  81 E6 FF FF 00 00         AND ESI,0xffff
0042E2E3  89 75 E4                  MOV dword ptr [EBP + -0x1c],ESI
0042E2E6  EB 09                     JMP 0x0042e2f1
LAB_0042e2e8:
0042E2E8  8B 77 0C                  MOV ESI,dword ptr [EDI + 0xc]
0042E2EB  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
0042E2EE  89 75 E4                  MOV dword ptr [EBP + -0x1c],ESI
LAB_0042e2f1:
0042E2F1  8D 45 14                  LEA EAX,[EBP + 0x14]
0042E2F4  50                        PUSH EAX
0042E2F5  56                        PUSH ESI
0042E2F6  57                        PUSH EDI
0042E2F7  E8 44 FE 27 00            CALL 0x006ae140
0042E2FC  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
0042E2FF  56                        PUSH ESI
0042E300  E8 E3 30 FD FF            CALL 0x004013e8
0042E305  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
0042E308  BE 14 00 00 00            MOV ESI,0x14
0042E30D  39 71 20                  CMP dword ptr [ECX + 0x20],ESI
0042E310  0F 85 D5 00 00 00         JNZ 0x0042e3eb
0042E316  8B 11                     MOV EDX,dword ptr [ECX]
0042E318  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
0042E31B  83 C0 41                  ADD EAX,0x41
0042E31E  8B C8                     MOV ECX,EAX
0042E320  81 E1 1F 00 00 80         AND ECX,0x8000001f
0042E326  79 05                     JNS 0x0042e32d
0042E328  49                        DEC ECX
0042E329  83 C9 E0                  OR ECX,0xffffffe0
0042E32C  41                        INC ECX
LAB_0042e32d:
0042E32D  BA 01 00 00 00            MOV EDX,0x1
0042E332  D3 E2                     SHL EDX,CL
0042E334  C1 E8 05                  SHR EAX,0x5
0042E337  85 14 85 80 14 80 00      TEST dword ptr [EAX*0x4 + 0x801480],EDX
0042E33E  74 1D                     JZ 0x0042e35d
0042E340  0F BE C3                  MOVSX EAX,BL
0042E343  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
0042E346  8D 14 C8                  LEA EDX,[EAX + ECX*0x8]
0042E349  8D 0C 50                  LEA ECX,[EAX + EDX*0x2]
0042E34C  C1 E1 04                  SHL ECX,0x4
0042E34F  03 C8                     ADD ECX,EAX
0042E351  8D 04 4D 4B 4E 7F 00      LEA EAX,[ECX*0x2 + 0x7f4e4b]
0042E358  E9 8C 00 00 00            JMP 0x0042e3e9
LAB_0042e35d:
0042E35D  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
0042E360  8B 11                     MOV EDX,dword ptr [ECX]
0042E362  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
0042E365  83 C0 41                  ADD EAX,0x41
0042E368  8B C8                     MOV ECX,EAX
0042E36A  81 E1 1F 00 00 80         AND ECX,0x8000001f
0042E370  79 05                     JNS 0x0042e377
0042E372  49                        DEC ECX
0042E373  83 C9 E0                  OR ECX,0xffffffe0
0042E376  41                        INC ECX
LAB_0042e377:
0042E377  BA 01 00 00 00            MOV EDX,0x1
0042E37C  D3 E2                     SHL EDX,CL
0042E37E  C1 E8 05                  SHR EAX,0x5
0042E381  85 14 85 10 0F 80 00      TEST dword ptr [EAX*0x4 + 0x800f10],EDX
0042E388  74 1A                     JZ 0x0042e3a4
0042E38A  0F BE C3                  MOVSX EAX,BL
0042E38D  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
0042E390  8D 14 C8                  LEA EDX,[EAX + ECX*0x8]
0042E393  8D 0C 50                  LEA ECX,[EAX + EDX*0x2]
0042E396  C1 E1 04                  SHL ECX,0x4
0042E399  03 C8                     ADD ECX,EAX
0042E39B  8D 04 4D 4F 4E 7F 00      LEA EAX,[ECX*0x2 + 0x7f4e4f]
0042E3A2  EB 45                     JMP 0x0042e3e9
LAB_0042e3a4:
0042E3A4  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
0042E3A7  8B 11                     MOV EDX,dword ptr [ECX]
0042E3A9  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
0042E3AC  83 C0 41                  ADD EAX,0x41
0042E3AF  8B C8                     MOV ECX,EAX
0042E3B1  81 E1 1F 00 00 80         AND ECX,0x8000001f
0042E3B7  79 05                     JNS 0x0042e3be
0042E3B9  49                        DEC ECX
0042E3BA  83 C9 E0                  OR ECX,0xffffffe0
0042E3BD  41                        INC ECX
LAB_0042e3be:
0042E3BE  BA 01 00 00 00            MOV EDX,0x1
0042E3C3  D3 E2                     SHL EDX,CL
0042E3C5  C1 E8 05                  SHR EAX,0x5
0042E3C8  85 14 85 50 14 80 00      TEST dword ptr [EAX*0x4 + 0x801450],EDX
0042E3CF  74 1A                     JZ 0x0042e3eb
0042E3D1  0F BE C3                  MOVSX EAX,BL
0042E3D4  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
0042E3D7  8D 14 C8                  LEA EDX,[EAX + ECX*0x8]
0042E3DA  8D 0C 50                  LEA ECX,[EAX + EDX*0x2]
0042E3DD  C1 E1 04                  SHL ECX,0x4
0042E3E0  03 C8                     ADD ECX,EAX
0042E3E2  8D 04 4D 53 4E 7F 00      LEA EAX,[ECX*0x2 + 0x7f4e53]
LAB_0042e3e9:
0042E3E9  FF 00                     INC dword ptr [EAX]
LAB_0042e3eb:
0042E3EB  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
0042E3EE  81 79 20 E8 03 00 00      CMP dword ptr [ECX + 0x20],0x3e8
0042E3F5  0F 85 02 01 00 00         JNZ 0x0042e4fd
0042E3FB  8B 11                     MOV EDX,dword ptr [ECX]
0042E3FD  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
0042E400  83 E8 32                  SUB EAX,0x32
0042E403  8B C8                     MOV ECX,EAX
0042E405  81 E1 1F 00 00 80         AND ECX,0x8000001f
0042E40B  79 05                     JNS 0x0042e412
0042E40D  49                        DEC ECX
0042E40E  83 C9 E0                  OR ECX,0xffffffe0
0042E411  41                        INC ECX
LAB_0042e412:
0042E412  BA 01 00 00 00            MOV EDX,0x1
0042E417  D3 E2                     SHL EDX,CL
0042E419  C1 E8 05                  SHR EAX,0x5
0042E41C  85 14 85 90 0F 80 00      TEST dword ptr [EAX*0x4 + 0x800f90],EDX
0042E423  74 1D                     JZ 0x0042e442
0042E425  0F BE C3                  MOVSX EAX,BL
0042E428  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
0042E42B  8D 14 C8                  LEA EDX,[EAX + ECX*0x8]
0042E42E  8D 0C 50                  LEA ECX,[EAX + EDX*0x2]
0042E431  C1 E1 04                  SHL ECX,0x4
0042E434  03 C8                     ADD ECX,EAX
0042E436  8D 04 4D 5B 4E 7F 00      LEA EAX,[ECX*0x2 + 0x7f4e5b]
0042E43D  E9 B9 00 00 00            JMP 0x0042e4fb
LAB_0042e442:
0042E442  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
0042E445  8B 11                     MOV EDX,dword ptr [ECX]
0042E447  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
0042E44A  83 E8 32                  SUB EAX,0x32
0042E44D  8B C8                     MOV ECX,EAX
0042E44F  81 E1 1F 00 00 80         AND ECX,0x8000001f
0042E455  79 05                     JNS 0x0042e45c
0042E457  49                        DEC ECX
0042E458  83 C9 E0                  OR ECX,0xffffffe0
0042E45B  41                        INC ECX
LAB_0042e45c:
0042E45C  BA 01 00 00 00            MOV EDX,0x1
0042E461  D3 E2                     SHL EDX,CL
0042E463  C1 E8 05                  SHR EAX,0x5
0042E466  85 14 85 60 13 80 00      TEST dword ptr [EAX*0x4 + 0x801360],EDX
0042E46D  74 1A                     JZ 0x0042e489
0042E46F  0F BE C3                  MOVSX EAX,BL
0042E472  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
0042E475  8D 14 C8                  LEA EDX,[EAX + ECX*0x8]
0042E478  8D 0C 50                  LEA ECX,[EAX + EDX*0x2]
0042E47B  C1 E1 04                  SHL ECX,0x4
0042E47E  03 C8                     ADD ECX,EAX
0042E480  8D 04 4D 5F 4E 7F 00      LEA EAX,[ECX*0x2 + 0x7f4e5f]
0042E487  EB 72                     JMP 0x0042e4fb
LAB_0042e489:
0042E489  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
0042E48C  8B 11                     MOV EDX,dword ptr [ECX]
0042E48E  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
0042E491  83 E8 32                  SUB EAX,0x32
0042E494  8B C8                     MOV ECX,EAX
0042E496  81 E1 1F 00 00 80         AND ECX,0x8000001f
0042E49C  79 05                     JNS 0x0042e4a3
0042E49E  49                        DEC ECX
0042E49F  83 C9 E0                  OR ECX,0xffffffe0
0042E4A2  41                        INC ECX
LAB_0042e4a3:
0042E4A3  BA 01 00 00 00            MOV EDX,0x1
0042E4A8  D3 E2                     SHL EDX,CL
0042E4AA  C1 E8 05                  SHR EAX,0x5
0042E4AD  85 14 85 A0 14 80 00      TEST dword ptr [EAX*0x4 + 0x8014a0],EDX
0042E4B4  75 2D                     JNZ 0x0042e4e3
0042E4B6  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
0042E4B9  8B 01                     MOV EAX,dword ptr [ECX]
0042E4BB  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
0042E4BE  83 E8 32                  SUB EAX,0x32
0042E4C1  8B C8                     MOV ECX,EAX
0042E4C3  81 E1 1F 00 00 80         AND ECX,0x8000001f
0042E4C9  79 05                     JNS 0x0042e4d0
0042E4CB  49                        DEC ECX
0042E4CC  83 C9 E0                  OR ECX,0xffffffe0
0042E4CF  41                        INC ECX
LAB_0042e4d0:
0042E4D0  BA 01 00 00 00            MOV EDX,0x1
0042E4D5  D3 E2                     SHL EDX,CL
0042E4D7  C1 E8 05                  SHR EAX,0x5
0042E4DA  85 14 85 80 0F 80 00      TEST dword ptr [EAX*0x4 + 0x800f80],EDX
0042E4E1  74 1A                     JZ 0x0042e4fd
LAB_0042e4e3:
0042E4E3  0F BE C3                  MOVSX EAX,BL
0042E4E6  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
0042E4E9  8D 14 C8                  LEA EDX,[EAX + ECX*0x8]
0042E4EC  8D 0C 50                  LEA ECX,[EAX + EDX*0x2]
0042E4EF  C1 E1 04                  SHL ECX,0x4
0042E4F2  03 C8                     ADD ECX,EAX
0042E4F4  8D 04 4D 63 4E 7F 00      LEA EAX,[ECX*0x2 + 0x7f4e63]
LAB_0042e4fb:
0042E4FB  FF 00                     INC dword ptr [EAX]
LAB_0042e4fd:
0042E4FD  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
0042E500  8B 7D 18                  MOV EDI,dword ptr [EBP + 0x18]
0042E503  39 72 20                  CMP dword ptr [EDX + 0x20],ESI
0042E506  0F 85 C7 02 00 00         JNZ 0x0042e7d3
0042E50C  0F BE C3                  MOVSX EAX,BL
0042E50F  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
0042E512  8D 14 C8                  LEA EDX,[EAX + ECX*0x8]
0042E515  8B 0D D4 16 80 00         MOV ECX,dword ptr [0x008016d4]
0042E51B  8D 34 50                  LEA ESI,[EAX + EDX*0x2]
0042E51E  C1 E6 04                  SHL ESI,0x4
0042E521  03 F0                     ADD ESI,EAX
0042E523  D1 E6                     SHL ESI,0x1
0042E525  66 FF 86 2D 4E 7F 00      INC word ptr [ESI + 0x7f4e2d]
0042E52C  66 8B 86 2D 4E 7F 00      MOV AX,word ptr [ESI + 0x7f4e2d]
0042E533  85 C9                     TEST ECX,ECX
0042E535  74 0C                     JZ 0x0042e543
0042E537  25 FF FF 00 00            AND EAX,0xffff
0042E53C  50                        PUSH EAX
0042E53D  53                        PUSH EBX
0042E53E  E8 DA 30 FD FF            CALL 0x0040161d
LAB_0042e543:
0042E543  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
0042E546  8B 01                     MOV EAX,dword ptr [ECX]
0042E548  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
0042E54B  83 F8 19                  CMP EAX,0x19
0042E54E  0F 84 7F 02 00 00         JZ 0x0042e7d3
0042E554  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
0042E557  8B 11                     MOV EDX,dword ptr [ECX]
0042E559  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
0042E55C  83 C0 41                  ADD EAX,0x41
0042E55F  8B C8                     MOV ECX,EAX
0042E561  81 E1 1F 00 00 80         AND ECX,0x8000001f
0042E567  79 05                     JNS 0x0042e56e
0042E569  49                        DEC ECX
0042E56A  83 C9 E0                  OR ECX,0xffffffe0
0042E56D  41                        INC ECX
LAB_0042e56e:
0042E56E  BA 01 00 00 00            MOV EDX,0x1
0042E573  D3 E2                     SHL EDX,CL
0042E575  C1 E8 05                  SHR EAX,0x5
0042E578  85 14 85 00 10 80 00      TEST dword ptr [EAX*0x4 + 0x801000],EDX
0042E57F  74 20                     JZ 0x0042e5a1
0042E581  8B 8E 6B 4E 7F 00         MOV ECX,dword ptr [ESI + 0x7f4e6b]
0042E587  41                        INC ECX
0042E588  85 FF                     TEST EDI,EDI
0042E58A  89 8E 6B 4E 7F 00         MOV dword ptr [ESI + 0x7f4e6b],ECX
0042E590  0F 85 3D 02 00 00         JNZ 0x0042e7d3
0042E596  FF 86 6F 4E 7F 00         INC dword ptr [ESI + 0x7f4e6f]
0042E59C  E9 32 02 00 00            JMP 0x0042e7d3
LAB_0042e5a1:
0042E5A1  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
0042E5A4  8B 01                     MOV EAX,dword ptr [ECX]
0042E5A6  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
0042E5A9  83 C0 41                  ADD EAX,0x41
0042E5AC  8B C8                     MOV ECX,EAX
0042E5AE  81 E1 1F 00 00 80         AND ECX,0x8000001f
0042E5B4  79 05                     JNS 0x0042e5bb
0042E5B6  49                        DEC ECX
0042E5B7  83 C9 E0                  OR ECX,0xffffffe0
0042E5BA  41                        INC ECX
LAB_0042e5bb:
0042E5BB  BA 01 00 00 00            MOV EDX,0x1
0042E5C0  D3 E2                     SHL EDX,CL
0042E5C2  C1 E8 05                  SHR EAX,0x5
0042E5C5  85 14 85 10 10 80 00      TEST dword ptr [EAX*0x4 + 0x801010],EDX
0042E5CC  74 20                     JZ 0x0042e5ee
0042E5CE  8B 8E 7B 4E 7F 00         MOV ECX,dword ptr [ESI + 0x7f4e7b]
0042E5D4  41                        INC ECX
0042E5D5  85 FF                     TEST EDI,EDI
0042E5D7  89 8E 7B 4E 7F 00         MOV dword ptr [ESI + 0x7f4e7b],ECX
0042E5DD  0F 85 F0 01 00 00         JNZ 0x0042e7d3
0042E5E3  FF 86 7F 4E 7F 00         INC dword ptr [ESI + 0x7f4e7f]
0042E5E9  E9 E5 01 00 00            JMP 0x0042e7d3
LAB_0042e5ee:
0042E5EE  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
0042E5F1  8B 01                     MOV EAX,dword ptr [ECX]
0042E5F3  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
0042E5F6  83 C0 41                  ADD EAX,0x41
0042E5F9  8B C8                     MOV ECX,EAX
0042E5FB  81 E1 1F 00 00 80         AND ECX,0x8000001f
0042E601  79 05                     JNS 0x0042e608
0042E603  49                        DEC ECX
0042E604  83 C9 E0                  OR ECX,0xffffffe0
0042E607  41                        INC ECX
LAB_0042e608:
0042E608  BA 01 00 00 00            MOV EDX,0x1
0042E60D  D3 E2                     SHL EDX,CL
0042E60F  C1 E8 05                  SHR EAX,0x5
0042E612  85 14 85 00 0F 80 00      TEST dword ptr [EAX*0x4 + 0x800f00],EDX
0042E619  74 20                     JZ 0x0042e63b
0042E61B  8B 8E 8B 4E 7F 00         MOV ECX,dword ptr [ESI + 0x7f4e8b]
0042E621  41                        INC ECX
0042E622  85 FF                     TEST EDI,EDI
0042E624  89 8E 8B 4E 7F 00         MOV dword ptr [ESI + 0x7f4e8b],ECX
0042E62A  0F 85 A3 01 00 00         JNZ 0x0042e7d3
0042E630  FF 86 8F 4E 7F 00         INC dword ptr [ESI + 0x7f4e8f]
0042E636  E9 98 01 00 00            JMP 0x0042e7d3
LAB_0042e63b:
0042E63B  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
0042E63E  8B 01                     MOV EAX,dword ptr [ECX]
0042E640  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
0042E643  83 C0 41                  ADD EAX,0x41
0042E646  8B C8                     MOV ECX,EAX
0042E648  81 E1 1F 00 00 80         AND ECX,0x8000001f
0042E64E  79 05                     JNS 0x0042e655
0042E650  49                        DEC ECX
0042E651  83 C9 E0                  OR ECX,0xffffffe0
0042E654  41                        INC ECX
LAB_0042e655:
0042E655  BA 01 00 00 00            MOV EDX,0x1
0042E65A  D3 E2                     SHL EDX,CL
0042E65C  C1 E8 05                  SHR EAX,0x5
0042E65F  85 14 85 70 13 80 00      TEST dword ptr [EAX*0x4 + 0x801370],EDX
0042E666  74 20                     JZ 0x0042e688
0042E668  8B 8E 9B 4E 7F 00         MOV ECX,dword ptr [ESI + 0x7f4e9b]
0042E66E  41                        INC ECX
0042E66F  85 FF                     TEST EDI,EDI
0042E671  89 8E 9B 4E 7F 00         MOV dword ptr [ESI + 0x7f4e9b],ECX
0042E677  0F 85 56 01 00 00         JNZ 0x0042e7d3
0042E67D  FF 86 9F 4E 7F 00         INC dword ptr [ESI + 0x7f4e9f]
0042E683  E9 4B 01 00 00            JMP 0x0042e7d3
LAB_0042e688:
0042E688  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
0042E68B  8B 01                     MOV EAX,dword ptr [ECX]
0042E68D  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
0042E690  83 C0 41                  ADD EAX,0x41
0042E693  8B C8                     MOV ECX,EAX
0042E695  81 E1 1F 00 00 80         AND ECX,0x8000001f
0042E69B  79 05                     JNS 0x0042e6a2
0042E69D  49                        DEC ECX
0042E69E  83 C9 E0                  OR ECX,0xffffffe0
0042E6A1  41                        INC ECX
LAB_0042e6a2:
0042E6A2  BA 01 00 00 00            MOV EDX,0x1
0042E6A7  D3 E2                     SHL EDX,CL
0042E6A9  C1 E8 05                  SHR EAX,0x5
0042E6AC  85 14 85 A0 0F 80 00      TEST dword ptr [EAX*0x4 + 0x800fa0],EDX
0042E6B3  74 20                     JZ 0x0042e6d5
0042E6B5  8B 8E AB 4E 7F 00         MOV ECX,dword ptr [ESI + 0x7f4eab]
0042E6BB  41                        INC ECX
0042E6BC  85 FF                     TEST EDI,EDI
0042E6BE  89 8E AB 4E 7F 00         MOV dword ptr [ESI + 0x7f4eab],ECX
0042E6C4  0F 85 09 01 00 00         JNZ 0x0042e7d3
0042E6CA  FF 86 AF 4E 7F 00         INC dword ptr [ESI + 0x7f4eaf]
0042E6D0  E9 FE 00 00 00            JMP 0x0042e7d3
LAB_0042e6d5:
0042E6D5  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
0042E6D8  8B 01                     MOV EAX,dword ptr [ECX]
0042E6DA  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
0042E6DD  83 C0 41                  ADD EAX,0x41
0042E6E0  8B C8                     MOV ECX,EAX
0042E6E2  81 E1 1F 00 00 80         AND ECX,0x8000001f
0042E6E8  79 05                     JNS 0x0042e6ef
0042E6EA  49                        DEC ECX
0042E6EB  83 C9 E0                  OR ECX,0xffffffe0
0042E6EE  41                        INC ECX
LAB_0042e6ef:
0042E6EF  BA 01 00 00 00            MOV EDX,0x1
0042E6F4  D3 E2                     SHL EDX,CL
0042E6F6  C1 E8 05                  SHR EAX,0x5
0042E6F9  85 14 85 F0 0F 80 00      TEST dword ptr [EAX*0x4 + 0x800ff0],EDX
0042E700  74 20                     JZ 0x0042e722
0042E702  8B 8E BB 4E 7F 00         MOV ECX,dword ptr [ESI + 0x7f4ebb]
0042E708  41                        INC ECX
0042E709  85 FF                     TEST EDI,EDI
0042E70B  89 8E BB 4E 7F 00         MOV dword ptr [ESI + 0x7f4ebb],ECX
0042E711  0F 85 BC 00 00 00         JNZ 0x0042e7d3
0042E717  FF 86 BF 4E 7F 00         INC dword ptr [ESI + 0x7f4ebf]
0042E71D  E9 B1 00 00 00            JMP 0x0042e7d3
LAB_0042e722:
0042E722  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
0042E725  8B 01                     MOV EAX,dword ptr [ECX]
0042E727  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
0042E72A  83 C0 41                  ADD EAX,0x41
0042E72D  8B C8                     MOV ECX,EAX
0042E72F  81 E1 1F 00 00 80         AND ECX,0x8000001f
0042E735  79 05                     JNS 0x0042e73c
0042E737  49                        DEC ECX
0042E738  83 C9 E0                  OR ECX,0xffffffe0
0042E73B  41                        INC ECX
LAB_0042e73c:
0042E73C  BA 01 00 00 00            MOV EDX,0x1
0042E741  D3 E2                     SHL EDX,CL
0042E743  C1 E8 05                  SHR EAX,0x5
0042E746  85 14 85 60 14 80 00      TEST dword ptr [EAX*0x4 + 0x801460],EDX
0042E74D  74 19                     JZ 0x0042e768
0042E74F  8B 8E CB 4E 7F 00         MOV ECX,dword ptr [ESI + 0x7f4ecb]
0042E755  41                        INC ECX
0042E756  85 FF                     TEST EDI,EDI
0042E758  89 8E CB 4E 7F 00         MOV dword ptr [ESI + 0x7f4ecb],ECX
0042E75E  75 73                     JNZ 0x0042e7d3
0042E760  FF 86 CF 4E 7F 00         INC dword ptr [ESI + 0x7f4ecf]
0042E766  EB 6B                     JMP 0x0042e7d3
LAB_0042e768:
0042E768  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
0042E76B  8B 01                     MOV EAX,dword ptr [ECX]
0042E76D  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
0042E770  83 C0 41                  ADD EAX,0x41
0042E773  8B C8                     MOV ECX,EAX
0042E775  81 E1 1F 00 00 80         AND ECX,0x8000001f
0042E77B  79 05                     JNS 0x0042e782
0042E77D  49                        DEC ECX
0042E77E  83 C9 E0                  OR ECX,0xffffffe0
0042E781  41                        INC ECX
LAB_0042e782:
0042E782  BA 01 00 00 00            MOV EDX,0x1
0042E787  D3 E2                     SHL EDX,CL
0042E789  C1 E8 05                  SHR EAX,0x5
0042E78C  85 14 85 E0 0F 80 00      TEST dword ptr [EAX*0x4 + 0x800fe0],EDX
0042E793  74 19                     JZ 0x0042e7ae
0042E795  8B 8E DB 4E 7F 00         MOV ECX,dword ptr [ESI + 0x7f4edb]
0042E79B  41                        INC ECX
0042E79C  85 FF                     TEST EDI,EDI
0042E79E  89 8E DB 4E 7F 00         MOV dword ptr [ESI + 0x7f4edb],ECX
0042E7A4  75 2D                     JNZ 0x0042e7d3
0042E7A6  FF 86 DF 4E 7F 00         INC dword ptr [ESI + 0x7f4edf]
0042E7AC  EB 25                     JMP 0x0042e7d3
LAB_0042e7ae:
0042E7AE  68 EC 65 7A 00            PUSH 0x7a65ec
0042E7B3  68 CC 4C 7A 00            PUSH 0x7a4ccc
0042E7B8  6A 00                     PUSH 0x0
0042E7BA  6A 00                     PUSH 0x0
0042E7BC  68 13 06 00 00            PUSH 0x613
0042E7C1  68 04 60 7A 00            PUSH 0x7a6004
0042E7C6  E8 05 ED 27 00            CALL 0x006ad4d0
0042E7CB  83 C4 18                  ADD ESP,0x18
0042E7CE  85 C0                     TEST EAX,EAX
0042E7D0  74 01                     JZ 0x0042e7d3
0042E7D2  CC                        INT3
LAB_0042e7d3:
0042E7D3  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
0042E7D6  81 78 20 E8 03 00 00      CMP dword ptr [EAX + 0x20],0x3e8
0042E7DD  0F 85 23 03 00 00         JNZ 0x0042eb06
0042E7E3  0F BE C3                  MOVSX EAX,BL
0042E7E6  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
0042E7E9  8D 14 C8                  LEA EDX,[EAX + ECX*0x8]
0042E7EC  8B 0D D4 16 80 00         MOV ECX,dword ptr [0x008016d4]
0042E7F2  8D 34 50                  LEA ESI,[EAX + EDX*0x2]
0042E7F5  C1 E6 04                  SHL ESI,0x4
0042E7F8  03 F0                     ADD ESI,EAX
0042E7FA  D1 E6                     SHL ESI,0x1
0042E7FC  66 FF 86 2D 4E 7F 00      INC word ptr [ESI + 0x7f4e2d]
0042E803  66 8B 86 2D 4E 7F 00      MOV AX,word ptr [ESI + 0x7f4e2d]
0042E80A  85 C9                     TEST ECX,ECX
0042E80C  74 0C                     JZ 0x0042e81a
0042E80E  25 FF FF 00 00            AND EAX,0xffff
0042E813  50                        PUSH EAX
0042E814  53                        PUSH EBX
0042E815  E8 03 2E FD FF            CALL 0x0040161d
LAB_0042e81a:
0042E81A  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
0042E81D  8B 01                     MOV EAX,dword ptr [ECX]
0042E81F  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
0042E822  83 F8 33                  CMP EAX,0x33
0042E825  74 0D                     JZ 0x0042e834
0042E827  83 F8 62                  CMP EAX,0x62
0042E82A  75 0E                     JNZ 0x0042e83a
0042E82C  FF 86 7F 4F 7F 00         INC dword ptr [ESI + 0x7f4f7f]
0042E832  EB 06                     JMP 0x0042e83a
LAB_0042e834:
0042E834  FF 86 7B 4F 7F 00         INC dword ptr [ESI + 0x7f4f7b]
LAB_0042e83a:
0042E83A  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
0042E83D  8B 11                     MOV EDX,dword ptr [ECX]
0042E83F  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
0042E842  83 E8 32                  SUB EAX,0x32
0042E845  8B C8                     MOV ECX,EAX
0042E847  81 E1 1F 00 00 80         AND ECX,0x8000001f
0042E84D  79 05                     JNS 0x0042e854
0042E84F  49                        DEC ECX
0042E850  83 C9 E0                  OR ECX,0xffffffe0
0042E853  41                        INC ECX
LAB_0042e854:
0042E854  BA 01 00 00 00            MOV EDX,0x1
0042E859  D3 E2                     SHL EDX,CL
0042E85B  C1 E8 05                  SHR EAX,0x5
0042E85E  85 14 85 20 14 80 00      TEST dword ptr [EAX*0x4 + 0x801420],EDX
0042E865  74 20                     JZ 0x0042e887
0042E867  8B 8E EB 4E 7F 00         MOV ECX,dword ptr [ESI + 0x7f4eeb]
0042E86D  41                        INC ECX
0042E86E  85 FF                     TEST EDI,EDI
0042E870  89 8E EB 4E 7F 00         MOV dword ptr [ESI + 0x7f4eeb],ECX
0042E876  0F 85 8A 02 00 00         JNZ 0x0042eb06
0042E87C  FF 86 EF 4E 7F 00         INC dword ptr [ESI + 0x7f4eef]
0042E882  E9 7F 02 00 00            JMP 0x0042eb06
LAB_0042e887:
0042E887  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
0042E88A  8B 01                     MOV EAX,dword ptr [ECX]
0042E88C  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
0042E88F  83 E8 32                  SUB EAX,0x32
0042E892  8B C8                     MOV ECX,EAX
0042E894  81 E1 1F 00 00 80         AND ECX,0x8000001f
0042E89A  79 05                     JNS 0x0042e8a1
0042E89C  49                        DEC ECX
0042E89D  83 C9 E0                  OR ECX,0xffffffe0
0042E8A0  41                        INC ECX
LAB_0042e8a1:
0042E8A1  BA 01 00 00 00            MOV EDX,0x1
0042E8A6  D3 E2                     SHL EDX,CL
0042E8A8  C1 E8 05                  SHR EAX,0x5
0042E8AB  85 14 85 E0 13 80 00      TEST dword ptr [EAX*0x4 + 0x8013e0],EDX
0042E8B2  74 20                     JZ 0x0042e8d4
0042E8B4  8B 8E FB 4E 7F 00         MOV ECX,dword ptr [ESI + 0x7f4efb]
0042E8BA  41                        INC ECX
0042E8BB  85 FF                     TEST EDI,EDI
0042E8BD  89 8E FB 4E 7F 00         MOV dword ptr [ESI + 0x7f4efb],ECX
0042E8C3  0F 85 3D 02 00 00         JNZ 0x0042eb06
0042E8C9  FF 86 FF 4E 7F 00         INC dword ptr [ESI + 0x7f4eff]
0042E8CF  E9 32 02 00 00            JMP 0x0042eb06
LAB_0042e8d4:
0042E8D4  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
0042E8D7  8B 01                     MOV EAX,dword ptr [ECX]
0042E8D9  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
0042E8DC  83 E8 32                  SUB EAX,0x32
0042E8DF  8B C8                     MOV ECX,EAX
0042E8E1  81 E1 1F 00 00 80         AND ECX,0x8000001f
0042E8E7  79 05                     JNS 0x0042e8ee
0042E8E9  49                        DEC ECX
0042E8EA  83 C9 E0                  OR ECX,0xffffffe0
0042E8ED  41                        INC ECX
LAB_0042e8ee:
0042E8EE  BA 01 00 00 00            MOV EDX,0x1
0042E8F3  D3 E2                     SHL EDX,CL
0042E8F5  C1 E8 05                  SHR EAX,0x5
0042E8F8  85 14 85 E0 0E 80 00      TEST dword ptr [EAX*0x4 + 0x800ee0],EDX
0042E8FF  74 20                     JZ 0x0042e921
0042E901  8B 8E 0B 4F 7F 00         MOV ECX,dword ptr [ESI + 0x7f4f0b]
0042E907  41                        INC ECX
0042E908  85 FF                     TEST EDI,EDI
0042E90A  89 8E 0B 4F 7F 00         MOV dword ptr [ESI + 0x7f4f0b],ECX
0042E910  0F 85 F0 01 00 00         JNZ 0x0042eb06
0042E916  FF 86 0F 4F 7F 00         INC dword ptr [ESI + 0x7f4f0f]
0042E91C  E9 E5 01 00 00            JMP 0x0042eb06
LAB_0042e921:
0042E921  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
0042E924  8B 01                     MOV EAX,dword ptr [ECX]
0042E926  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
0042E929  83 E8 32                  SUB EAX,0x32
0042E92C  8B C8                     MOV ECX,EAX
0042E92E  81 E1 1F 00 00 80         AND ECX,0x8000001f
0042E934  79 05                     JNS 0x0042e93b
0042E936  49                        DEC ECX
0042E937  83 C9 E0                  OR ECX,0xffffffe0
0042E93A  41                        INC ECX
LAB_0042e93b:
0042E93B  BA 01 00 00 00            MOV EDX,0x1
0042E940  D3 E2                     SHL EDX,CL
0042E942  C1 E8 05                  SHR EAX,0x5
0042E945  85 14 85 90 14 80 00      TEST dword ptr [EAX*0x4 + 0x801490],EDX
0042E94C  74 20                     JZ 0x0042e96e
0042E94E  8B 8E 1B 4F 7F 00         MOV ECX,dword ptr [ESI + 0x7f4f1b]
0042E954  41                        INC ECX
0042E955  85 FF                     TEST EDI,EDI
0042E957  89 8E 1B 4F 7F 00         MOV dword ptr [ESI + 0x7f4f1b],ECX
0042E95D  0F 85 A3 01 00 00         JNZ 0x0042eb06
0042E963  FF 86 1F 4F 7F 00         INC dword ptr [ESI + 0x7f4f1f]
0042E969  E9 98 01 00 00            JMP 0x0042eb06
LAB_0042e96e:
0042E96E  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
0042E971  8B 01                     MOV EAX,dword ptr [ECX]
0042E973  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
0042E976  83 E8 32                  SUB EAX,0x32
0042E979  8B C8                     MOV ECX,EAX
0042E97B  81 E1 1F 00 00 80         AND ECX,0x8000001f
0042E981  79 05                     JNS 0x0042e988
0042E983  49                        DEC ECX
0042E984  83 C9 E0                  OR ECX,0xffffffe0
0042E987  41                        INC ECX
LAB_0042e988:
0042E988  BA 01 00 00 00            MOV EDX,0x1
0042E98D  D3 E2                     SHL EDX,CL
0042E98F  C1 E8 05                  SHR EAX,0x5
0042E992  85 14 85 20 0F 80 00      TEST dword ptr [EAX*0x4 + 0x800f20],EDX
0042E999  74 20                     JZ 0x0042e9bb
0042E99B  8B 8E 2B 4F 7F 00         MOV ECX,dword ptr [ESI + 0x7f4f2b]
0042E9A1  41                        INC ECX
0042E9A2  85 FF                     TEST EDI,EDI
0042E9A4  89 8E 2B 4F 7F 00         MOV dword ptr [ESI + 0x7f4f2b],ECX
0042E9AA  0F 85 56 01 00 00         JNZ 0x0042eb06
0042E9B0  FF 86 2F 4F 7F 00         INC dword ptr [ESI + 0x7f4f2f]
0042E9B6  E9 4B 01 00 00            JMP 0x0042eb06
LAB_0042e9bb:
0042E9BB  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
0042E9BE  8B 01                     MOV EAX,dword ptr [ECX]
0042E9C0  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
0042E9C3  83 E8 32                  SUB EAX,0x32
0042E9C6  8B C8                     MOV ECX,EAX
0042E9C8  81 E1 1F 00 00 80         AND ECX,0x8000001f
0042E9CE  79 05                     JNS 0x0042e9d5
0042E9D0  49                        DEC ECX
0042E9D1  83 C9 E0                  OR ECX,0xffffffe0
0042E9D4  41                        INC ECX
LAB_0042e9d5:
0042E9D5  BA 01 00 00 00            MOV EDX,0x1
0042E9DA  D3 E2                     SHL EDX,CL
0042E9DC  C1 E8 05                  SHR EAX,0x5
0042E9DF  85 14 85 F0 0E 80 00      TEST dword ptr [EAX*0x4 + 0x800ef0],EDX
0042E9E6  74 20                     JZ 0x0042ea08
0042E9E8  8B 8E 3B 4F 7F 00         MOV ECX,dword ptr [ESI + 0x7f4f3b]
0042E9EE  41                        INC ECX
0042E9EF  85 FF                     TEST EDI,EDI
0042E9F1  89 8E 3B 4F 7F 00         MOV dword ptr [ESI + 0x7f4f3b],ECX
0042E9F7  0F 85 09 01 00 00         JNZ 0x0042eb06
0042E9FD  FF 86 3F 4F 7F 00         INC dword ptr [ESI + 0x7f4f3f]
0042EA03  E9 FE 00 00 00            JMP 0x0042eb06
LAB_0042ea08:
0042EA08  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
0042EA0B  8B 01                     MOV EAX,dword ptr [ECX]
0042EA0D  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
0042EA10  83 E8 32                  SUB EAX,0x32
0042EA13  8B C8                     MOV ECX,EAX
0042EA15  81 E1 1F 00 00 80         AND ECX,0x8000001f
0042EA1B  79 05                     JNS 0x0042ea22
0042EA1D  49                        DEC ECX
0042EA1E  83 C9 E0                  OR ECX,0xffffffe0
0042EA21  41                        INC ECX
LAB_0042ea22:
0042EA22  BA 01 00 00 00            MOV EDX,0x1
0042EA27  D3 E2                     SHL EDX,CL
0042EA29  C1 E8 05                  SHR EAX,0x5
0042EA2C  85 14 85 30 14 80 00      TEST dword ptr [EAX*0x4 + 0x801430],EDX
0042EA33  74 20                     JZ 0x0042ea55
0042EA35  8B 8E 4B 4F 7F 00         MOV ECX,dword ptr [ESI + 0x7f4f4b]
0042EA3B  41                        INC ECX
0042EA3C  85 FF                     TEST EDI,EDI
0042EA3E  89 8E 4B 4F 7F 00         MOV dword ptr [ESI + 0x7f4f4b],ECX
0042EA44  0F 85 BC 00 00 00         JNZ 0x0042eb06
0042EA4A  FF 86 4F 4F 7F 00         INC dword ptr [ESI + 0x7f4f4f]
0042EA50  E9 B1 00 00 00            JMP 0x0042eb06
LAB_0042ea55:
0042EA55  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
0042EA58  8B 01                     MOV EAX,dword ptr [ECX]
0042EA5A  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
0042EA5D  83 E8 32                  SUB EAX,0x32
0042EA60  8B C8                     MOV ECX,EAX
0042EA62  81 E1 1F 00 00 80         AND ECX,0x8000001f
0042EA68  79 05                     JNS 0x0042ea6f
0042EA6A  49                        DEC ECX
0042EA6B  83 C9 E0                  OR ECX,0xffffffe0
0042EA6E  41                        INC ECX
LAB_0042ea6f:
0042EA6F  BA 01 00 00 00            MOV EDX,0x1
0042EA74  D3 E2                     SHL EDX,CL
0042EA76  C1 E8 05                  SHR EAX,0x5
0042EA79  85 14 85 40 14 80 00      TEST dword ptr [EAX*0x4 + 0x801440],EDX
0042EA80  74 19                     JZ 0x0042ea9b
0042EA82  8B 8E 5B 4F 7F 00         MOV ECX,dword ptr [ESI + 0x7f4f5b]
0042EA88  41                        INC ECX
0042EA89  85 FF                     TEST EDI,EDI
0042EA8B  89 8E 5B 4F 7F 00         MOV dword ptr [ESI + 0x7f4f5b],ECX
0042EA91  75 73                     JNZ 0x0042eb06
0042EA93  FF 86 5F 4F 7F 00         INC dword ptr [ESI + 0x7f4f5f]
0042EA99  EB 6B                     JMP 0x0042eb06
LAB_0042ea9b:
0042EA9B  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
0042EA9E  8B 01                     MOV EAX,dword ptr [ECX]
0042EAA0  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
0042EAA3  83 E8 32                  SUB EAX,0x32
0042EAA6  8B C8                     MOV ECX,EAX
0042EAA8  81 E1 1F 00 00 80         AND ECX,0x8000001f
0042EAAE  79 05                     JNS 0x0042eab5
0042EAB0  49                        DEC ECX
0042EAB1  83 C9 E0                  OR ECX,0xffffffe0
0042EAB4  41                        INC ECX
LAB_0042eab5:
0042EAB5  BA 01 00 00 00            MOV EDX,0x1
0042EABA  D3 E2                     SHL EDX,CL
0042EABC  C1 E8 05                  SHR EAX,0x5
0042EABF  85 14 85 60 0F 80 00      TEST dword ptr [EAX*0x4 + 0x800f60],EDX
0042EAC6  74 19                     JZ 0x0042eae1
0042EAC8  8B 8E 6B 4F 7F 00         MOV ECX,dword ptr [ESI + 0x7f4f6b]
0042EACE  41                        INC ECX
0042EACF  85 FF                     TEST EDI,EDI
0042EAD1  89 8E 6B 4F 7F 00         MOV dword ptr [ESI + 0x7f4f6b],ECX
0042EAD7  75 2D                     JNZ 0x0042eb06
0042EAD9  FF 86 6F 4F 7F 00         INC dword ptr [ESI + 0x7f4f6f]
0042EADF  EB 25                     JMP 0x0042eb06
LAB_0042eae1:
0042EAE1  68 B0 65 7A 00            PUSH 0x7a65b0
0042EAE6  68 CC 4C 7A 00            PUSH 0x7a4ccc
0042EAEB  6A 00                     PUSH 0x0
0042EAED  6A 00                     PUSH 0x0
0042EAEF  68 53 06 00 00            PUSH 0x653
0042EAF4  68 04 60 7A 00            PUSH 0x7a6004
0042EAF9  E8 D2 E9 27 00            CALL 0x006ad4d0
0042EAFE  83 C4 18                  ADD ESP,0x18
0042EB01  85 C0                     TEST EAX,EAX
0042EB03  74 01                     JZ 0x0042eb06
0042EB05  CC                        INT3
LAB_0042eb06:
0042EB06  8B 5D 0C                  MOV EBX,dword ptr [EBP + 0xc]
0042EB09  66 81 FB FE FF            CMP BX,0xfffe
0042EB0E  74 2E                     JZ 0x0042eb3e
0042EB10  66 81 FB FF FF            CMP BX,0xffff
0042EB15  74 20                     JZ 0x0042eb37
0042EB17  85 FF                     TEST EDI,EDI
0042EB19  75 1C                     JNZ 0x0042eb37
0042EB1B  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0042EB1E  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
0042EB21  53                        PUSH EBX
0042EB22  50                        PUSH EAX
0042EB23  E8 D1 71 FD FF            CALL 0x00405cf9
0042EB28  85 C0                     TEST EAX,EAX
0042EB2A  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0042EB2D  75 08                     JNZ 0x0042eb37
0042EB2F  BB FE FF 00 00            MOV EBX,0xfffe
0042EB34  89 5D 0C                  MOV dword ptr [EBP + 0xc],EBX
LAB_0042eb37:
0042EB37  66 81 FB FE FF            CMP BX,0xfffe
0042EB3C  75 7D                     JNZ 0x0042ebbb
LAB_0042eb3e:
0042EB3E  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
0042EB41  8B 71 0C                  MOV ESI,dword ptr [ECX + 0xc]
0042EB44  85 F6                     TEST ESI,ESI
0042EB46  89 75 F0                  MOV dword ptr [EBP + -0x10],ESI
0042EB49  76 24                     JBE 0x0042eb6f
0042EB4B  8D 7E FF                  LEA EDI,[ESI + -0x1]
0042EB4E  85 FF                     TEST EDI,EDI
0042EB50  7C 1D                     JL 0x0042eb6f
LAB_0042eb52:
0042EB52  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
0042EB55  8D 55 F8                  LEA EDX,[EBP + -0x8]
0042EB58  52                        PUSH EDX
0042EB59  8B D7                     MOV EDX,EDI
0042EB5B  E8 10 E1 27 00            CALL 0x006acc70
0042EB60  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0042EB63  85 C0                     TEST EAX,EAX
0042EB65  75 05                     JNZ 0x0042eb6c
0042EB67  8B F7                     MOV ESI,EDI
0042EB69  89 75 F0                  MOV dword ptr [EBP + -0x10],ESI
LAB_0042eb6c:
0042EB6C  4F                        DEC EDI
0042EB6D  79 E3                     JNS 0x0042eb52
LAB_0042eb6f:
0042EB6F  0F BE 45 08               MOVSX EAX,byte ptr [EBP + 0x8]
0042EB73  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
0042EB76  33 C0                     XOR EAX,EAX
0042EB78  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
0042EB7E  89 45 CC                  MOV dword ptr [EBP + -0x34],EAX
0042EB81  89 45 D0                  MOV dword ptr [EBP + -0x30],EAX
0042EB84  89 45 D4                  MOV dword ptr [EBP + -0x2c],EAX
0042EB87  50                        PUSH EAX
0042EB88  8D 45 B4                  LEA EAX,[EBP + -0x4c]
0042EB8B  50                        PUSH EAX
0042EB8C  8D 45 F8                  LEA EAX,[EBP + -0x8]
0042EB8F  50                        PUSH EAX
0042EB90  8D 45 F4                  LEA EAX,[EBP + -0xc]
0042EB93  89 75 C8                  MOV dword ptr [EBP + -0x38],ESI
0042EB96  C7 45 C0 01 00 00 00      MOV dword ptr [EBP + -0x40],0x1
0042EB9D  8B 11                     MOV EDX,dword ptr [ECX]
0042EB9F  50                        PUSH EAX
0042EBA0  68 FF 10 00 00            PUSH 0x10ff
0042EBA5  FF 52 08                  CALL dword ptr [EDX + 0x8]
0042EBA8  8B 55 E8                  MOV EDX,dword ptr [EBP + -0x18]
0042EBAB  8D 4D F8                  LEA ECX,[EBP + -0x8]
0042EBAE  51                        PUSH ECX
0042EBAF  56                        PUSH ESI
0042EBB0  52                        PUSH EDX
0042EBB1  E8 8A F5 27 00            CALL 0x006ae140
0042EBB6  8B 7D 18                  MOV EDI,dword ptr [EBP + 0x18]
0042EBB9  EB 03                     JMP 0x0042ebbe
LAB_0042ebbb:
0042EBBB  8B 75 F0                  MOV ESI,dword ptr [EBP + -0x10]
LAB_0042ebbe:
0042EBBE  66 81 FB FE FF            CMP BX,0xfffe
0042EBC3  74 22                     JZ 0x0042ebe7
0042EBC5  66 81 FB FF FF            CMP BX,0xffff
0042EBCA  74 22                     JZ 0x0042ebee
0042EBCC  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0042EBCF  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
0042EBD2  53                        PUSH EBX
0042EBD3  50                        PUSH EAX
0042EBD4  E8 20 71 FD FF            CALL 0x00405cf9
0042EBD9  8B F3                     MOV ESI,EBX
0042EBDB  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0042EBDE  81 E6 FF FF 00 00         AND ESI,0xffff
0042EBE4  89 75 F0                  MOV dword ptr [EBP + -0x10],ESI
LAB_0042ebe7:
0042EBE7  66 81 FB FF FF            CMP BX,0xffff
0042EBEC  75 08                     JNZ 0x0042ebf6
LAB_0042ebee:
0042EBEE  BE FF FF 00 00            MOV ESI,0xffff
0042EBF3  89 75 F0                  MOV dword ptr [EBP + -0x10],ESI
LAB_0042ebf6:
0042EBF6  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
0042EBF9  56                        PUSH ESI
0042EBFA  E8 BF 47 FD FF            CALL 0x004033be
0042EBFF  85 FF                     TEST EDI,EDI
0042EC01  74 06                     JZ 0x0042ec09
0042EC03  83 7D 1C 01               CMP dword ptr [EBP + 0x1c],0x1
0042EC07  75 24                     JNZ 0x0042ec2d
LAB_0042ec09:
0042EC09  66 81 FB FF FF            CMP BX,0xffff
0042EC0E  74 1D                     JZ 0x0042ec2d
0042EC10  66 81 FB FE FF            CMP BX,0xfffe
0042EC15  75 08                     JNZ 0x0042ec1f
0042EC17  8B 4D E4                  MOV ECX,dword ptr [EBP + -0x1c]
0042EC1A  6A 00                     PUSH 0x0
0042EC1C  51                        PUSH ECX
0042EC1D  EB 06                     JMP 0x0042ec25
LAB_0042ec1f:
0042EC1F  8B 55 E4                  MOV EDX,dword ptr [EBP + -0x1c]
0042EC22  6A 01                     PUSH 0x1
0042EC24  52                        PUSH EDX
LAB_0042ec25:
0042EC25  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0042EC28  E8 E1 47 FD FF            CALL 0x0040340e
LAB_0042ec2d:
0042EC2D  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
0042EC30  8B 01                     MOV EAX,dword ptr [ECX]
0042EC32  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
0042EC35  83 F8 1D                  CMP EAX,0x1d
0042EC38  75 67                     JNZ 0x0042eca1
0042EC3A  8B 5D E0                  MOV EBX,dword ptr [EBP + -0x20]
0042EC3D  85 DB                     TEST EBX,EBX
0042EC3F  75 2A                     JNZ 0x0042ec6b
0042EC41  6A 01                     PUSH 0x1
0042EC43  6A 02                     PUSH 0x2
0042EC45  6A 01                     PUSH 0x1
0042EC47  53                        PUSH EBX
0042EC48  E8 43 F6 27 00            CALL 0x006ae290
0042EC4D  0F BE 4D 08               MOVSX ECX,byte ptr [EBP + 0x8]
0042EC51  8B D8                     MOV EBX,EAX
0042EC53  8D 14 89                  LEA EDX,[ECX + ECX*0x4]
0042EC56  89 5D E0                  MOV dword ptr [EBP + -0x20],EBX
0042EC59  8D 14 D1                  LEA EDX,[ECX + EDX*0x8]
0042EC5C  8D 14 51                  LEA EDX,[ECX + EDX*0x2]
0042EC5F  C1 E2 04                  SHL EDX,0x4
0042EC62  03 D1                     ADD EDX,ECX
0042EC64  89 04 55 07 51 7F 00      MOV dword ptr [EDX*0x2 + 0x7f5107],EAX
LAB_0042ec6b:
0042EC6B  8B 7B 0C                  MOV EDI,dword ptr [EBX + 0xc]
0042EC6E  85 FF                     TEST EDI,EDI
0042EC70  76 21                     JBE 0x0042ec93
0042EC72  8D 77 FF                  LEA ESI,[EDI + -0x1]
0042EC75  85 F6                     TEST ESI,ESI
0042EC77  7C 1A                     JL 0x0042ec93
LAB_0042ec79:
0042EC79  8D 45 FE                  LEA EAX,[EBP + -0x2]
0042EC7C  8B D6                     MOV EDX,ESI
0042EC7E  50                        PUSH EAX
0042EC7F  8B CB                     MOV ECX,EBX
0042EC81  E8 EA DF 27 00            CALL 0x006acc70
0042EC86  66 81 7D FE FF FF         CMP word ptr [EBP + -0x2],0xffff
0042EC8C  75 02                     JNZ 0x0042ec90
0042EC8E  8B FE                     MOV EDI,ESI
LAB_0042ec90:
0042EC90  4E                        DEC ESI
0042EC91  79 E6                     JNS 0x0042ec79
LAB_0042ec93:
0042EC93  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
0042EC96  83 C1 32                  ADD ECX,0x32
0042EC99  51                        PUSH ECX
0042EC9A  57                        PUSH EDI
0042EC9B  53                        PUSH EBX
0042EC9C  E8 9F F4 27 00            CALL 0x006ae140
LAB_0042eca1:
0042ECA1  8B 95 70 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff70]
0042ECA7  33 C0                     XOR EAX,EAX
0042ECA9  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0042ECAF  5F                        POP EDI
0042ECB0  5E                        POP ESI
0042ECB1  5B                        POP EBX
0042ECB2  8B E5                     MOV ESP,EBP
0042ECB4  5D                        POP EBP
0042ECB5  C2 18 00                  RET 0x18
LAB_0042ecb8:
0042ECB8  8B 85 70 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff70]
0042ECBE  68 8C 65 7A 00            PUSH 0x7a658c
0042ECC3  68 CC 4C 7A 00            PUSH 0x7a4ccc
0042ECC8  56                        PUSH ESI
0042ECC9  6A 00                     PUSH 0x0
0042ECCB  68 7E 06 00 00            PUSH 0x67e
0042ECD0  68 04 60 7A 00            PUSH 0x7a6004
0042ECD5  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0042ECDA  E8 F1 E7 27 00            CALL 0x006ad4d0
0042ECDF  83 C4 18                  ADD ESP,0x18
0042ECE2  85 C0                     TEST EAX,EAX
0042ECE4  74 01                     JZ 0x0042ece7
0042ECE6  CC                        INT3
LAB_0042ece7:
0042ECE7  68 7F 06 00 00            PUSH 0x67f
0042ECEC  68 04 60 7A 00            PUSH 0x7a6004
0042ECF1  6A 00                     PUSH 0x0
0042ECF3  56                        PUSH ESI
0042ECF4  E8 47 71 27 00            CALL 0x006a5e40
0042ECF9  5F                        POP EDI
0042ECFA  5E                        POP ESI
0042ECFB  83 C8 FF                  OR EAX,0xffffffff
0042ECFE  5B                        POP EBX
0042ECFF  8B E5                     MOV ESP,EBP
0042ED01  5D                        POP EBP
0042ED02  C2 18 00                  RET 0x18
