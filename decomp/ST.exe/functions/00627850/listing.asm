FUN_00627850:
00627850  55                        PUSH EBP
00627851  8B EC                     MOV EBP,ESP
00627853  83 EC 58                  SUB ESP,0x58
00627856  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
00627859  53                        PUSH EBX
0062785A  56                        PUSH ESI
0062785B  57                        PUSH EDI
0062785C  85 C9                     TEST ECX,ECX
0062785E  B8 79 19 8C 02            MOV EAX,0x28c1979
00627863  7C 13                     JL 0x00627878
00627865  F7 E9                     IMUL ECX
00627867  D1 FA                     SAR EDX,0x1
00627869  8B C2                     MOV EAX,EDX
0062786B  C1 E8 1F                  SHR EAX,0x1f
0062786E  03 D0                     ADD EDX,EAX
00627870  0F BF F2                  MOVSX ESI,DX
00627873  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
00627876  EB 14                     JMP 0x0062788c
LAB_00627878:
00627878  F7 E9                     IMUL ECX
0062787A  D1 FA                     SAR EDX,0x1
0062787C  8B CA                     MOV ECX,EDX
0062787E  C1 E9 1F                  SHR ECX,0x1f
00627881  03 D1                     ADD EDX,ECX
00627883  0F BF C2                  MOVSX EAX,DX
00627886  48                        DEC EAX
00627887  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0062788A  8B F0                     MOV ESI,EAX
LAB_0062788c:
0062788C  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
0062788F  B8 79 19 8C 02            MOV EAX,0x28c1979
00627894  85 C9                     TEST ECX,ECX
00627896  7C 10                     JL 0x006278a8
00627898  F7 E9                     IMUL ECX
0062789A  D1 FA                     SAR EDX,0x1
0062789C  8B C2                     MOV EAX,EDX
0062789E  C1 E8 1F                  SHR EAX,0x1f
006278A1  03 D0                     ADD EDX,EAX
006278A3  0F BF DA                  MOVSX EBX,DX
006278A6  EB 0F                     JMP 0x006278b7
LAB_006278a8:
006278A8  F7 E9                     IMUL ECX
006278AA  D1 FA                     SAR EDX,0x1
006278AC  8B CA                     MOV ECX,EDX
006278AE  C1 E9 1F                  SHR ECX,0x1f
006278B1  03 D1                     ADD EDX,ECX
006278B3  0F BF DA                  MOVSX EBX,DX
006278B6  4B                        DEC EBX
LAB_006278b7:
006278B7  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
006278BA  B8 1F 85 EB 51            MOV EAX,0x51eb851f
006278BF  85 C9                     TEST ECX,ECX
006278C1  7C 14                     JL 0x006278d7
006278C3  F7 E9                     IMUL ECX
006278C5  C1 FA 06                  SAR EDX,0x6
006278C8  8B C2                     MOV EAX,EDX
006278CA  C1 E8 1F                  SHR EAX,0x1f
006278CD  03 D0                     ADD EDX,EAX
006278CF  0F BF CA                  MOVSX ECX,DX
006278D2  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
006278D5  EB 13                     JMP 0x006278ea
LAB_006278d7:
006278D7  F7 E9                     IMUL ECX
006278D9  C1 FA 06                  SAR EDX,0x6
006278DC  8B C2                     MOV EAX,EDX
006278DE  C1 E8 1F                  SHR EAX,0x1f
006278E1  03 D0                     ADD EDX,EAX
006278E3  0F BF C2                  MOVSX EAX,DX
006278E6  48                        DEC EAX
006278E7  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
LAB_006278ea:
006278EA  B9 13 00 00 00            MOV ECX,0x13
006278EF  33 C0                     XOR EAX,EAX
006278F1  8D 7D A8                  LEA EDI,[EBP + -0x58]
006278F4  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006278F7  F3 AB                     STOSD.REP ES:EDI
006278F9  66 AB                     STOSW ES:EDI
006278FB  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006278FE  AA                        STOSB ES:EDI
006278FF  B8 01 00 00 00            MOV EAX,0x1
00627904  89 55 EB                  MOV dword ptr [EBP + -0x15],EDX
00627907  8B 55 24                  MOV EDX,dword ptr [EBP + 0x24]
0062790A  89 45 B0                  MOV dword ptr [EBP + -0x50],EAX
0062790D  89 45 B4                  MOV dword ptr [EBP + -0x4c],EAX
00627910  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
00627913  89 55 E7                  MOV dword ptr [EBP + -0x19],EDX
00627916  8B 55 28                  MOV EDX,dword ptr [EBP + 0x28]
00627919  89 4D AC                  MOV dword ptr [EBP + -0x54],ECX
0062791C  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0062791F  89 45 EF                  MOV dword ptr [EBP + -0x11],EAX
00627922  8B 45 2C                  MOV EAX,dword ptr [EBP + 0x2c]
00627925  85 D2                     TEST EDX,EDX
00627927  C7 45 A8 AE 01 00 00      MOV dword ptr [EBP + -0x58],0x1ae
0062792E  89 4D BC                  MOV dword ptr [EBP + -0x44],ECX
00627931  89 45 F3                  MOV dword ptr [EBP + -0xd],EAX
00627934  74 4B                     JZ 0x00627981
00627936  8B FA                     MOV EDI,EDX
00627938  83 C9 FF                  OR ECX,0xffffffff
0062793B  33 C0                     XOR EAX,EAX
0062793D  F2 AE                     SCASB.REPNE ES:EDI
0062793F  F7 D1                     NOT ECX
00627941  49                        DEC ECX
00627942  83 F9 0E                  CMP ECX,0xe
00627945  77 27                     JA 0x0062796e
00627947  8B FA                     MOV EDI,EDX
00627949  83 C9 FF                  OR ECX,0xffffffff
0062794C  F2 AE                     SCASB.REPNE ES:EDI
0062794E  8D 75 D8                  LEA ESI,[EBP + -0x28]
00627951  F7 D1                     NOT ECX
00627953  2B F9                     SUB EDI,ECX
00627955  8B C6                     MOV EAX,ESI
00627957  8B D1                     MOV EDX,ECX
00627959  8B F7                     MOV ESI,EDI
0062795B  8B F8                     MOV EDI,EAX
0062795D  C1 E9 02                  SHR ECX,0x2
00627960  F3 A5                     MOVSD.REP ES:EDI,ESI
00627962  8B CA                     MOV ECX,EDX
00627964  83 E1 03                  AND ECX,0x3
00627967  F3 A4                     MOVSB.REP ES:EDI,ESI
00627969  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
0062796C  EB 13                     JMP 0x00627981
LAB_0062796e:
0062796E  6A 0E                     PUSH 0xe
00627970  8D 4D D8                  LEA ECX,[EBP + -0x28]
00627973  52                        PUSH EDX
00627974  51                        PUSH ECX
00627975  E8 C6 69 10 00            CALL 0x0072e340
0062797A  83 C4 0C                  ADD ESP,0xc
0062797D  C6 45 E6 00               MOV byte ptr [EBP + -0x1a],0x0
LAB_00627981:
00627981  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
00627984  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
00627987  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
0062798A  89 45 C4                  MOV dword ptr [EBP + -0x3c],EAX
0062798D  8D 04 B6                  LEA EAX,[ESI + ESI*0x4]
00627990  89 55 C0                  MOV dword ptr [EBP + -0x40],EDX
00627993  89 4D C8                  MOV dword ptr [EBP + -0x38],ECX
00627996  6A 00                     PUSH 0x0
00627998  8D 14 80                  LEA EDX,[EAX + EAX*0x4]
0062799B  8D 44 D6 64               LEA EAX,[ESI + EDX*0x8 + 0x64]
0062799F  0F BF C8                  MOVSX ECX,AX
006279A2  8D 04 9B                  LEA EAX,[EBX + EBX*0x4]
006279A5  89 4D CC                  MOV dword ptr [EBP + -0x34],ECX
006279A8  8D 14 80                  LEA EDX,[EAX + EAX*0x4]
006279AB  8D 44 D3 64               LEA EAX,[EBX + EDX*0x8 + 0x64]
006279AF  0F BF C8                  MOVSX ECX,AX
006279B2  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
006279B5  89 4D D0                  MOV dword ptr [EBP + -0x30],ECX
006279B8  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
006279BB  8D 14 80                  LEA EDX,[EAX + EAX*0x4]
006279BE  8D 04 D5 64 00 00 00      LEA EAX,[EDX*0x8 + 0x64]
006279C5  0F BF C8                  MOVSX ECX,AX
006279C8  89 4D D4                  MOV dword ptr [EBP + -0x2c],ECX
006279CB  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
006279D1  8D 45 A8                  LEA EAX,[EBP + -0x58]
006279D4  8B 11                     MOV EDX,dword ptr [ECX]
006279D6  50                        PUSH EAX
006279D7  6A 00                     PUSH 0x0
006279D9  6A 00                     PUSH 0x0
006279DB  68 58 01 00 00            PUSH 0x158
006279E0  FF 52 08                  CALL dword ptr [EDX + 0x8]
006279E3  5F                        POP EDI
006279E4  5E                        POP ESI
006279E5  5B                        POP EBX
006279E6  8B E5                     MOV ESP,EBP
006279E8  5D                        POP EBP
006279E9  C3                        RET
