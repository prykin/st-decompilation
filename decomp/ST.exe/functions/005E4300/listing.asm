MTaskTy::PaintBut:
005E4300  55                        PUSH EBP
005E4301  8B EC                     MOV EBP,ESP
005E4303  83 EC 58                  SUB ESP,0x58
005E4306  53                        PUSH EBX
005E4307  56                        PUSH ESI
005E4308  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
005E430B  57                        PUSH EDI
005E430C  85 F6                     TEST ESI,ESI
005E430E  89 4D EC                  MOV dword ptr [EBP + -0x14],ECX
005E4311  0F 84 C4 01 00 00         JZ 0x005e44db
005E4317  8B 06                     MOV EAX,dword ptr [ESI]
005E4319  8B 48 04                  MOV ECX,dword ptr [EAX + 0x4]
005E431C  8B 40 08                  MOV EAX,dword ptr [EAX + 0x8]
005E431F  3B C8                     CMP ECX,EAX
005E4321  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
005E4324  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
005E4327  7D 02                     JGE 0x005e432b
005E4329  8B C1                     MOV EAX,ECX
LAB_005e432b:
005E432B  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
005E432E  99                        CDQ
005E432F  2B C2                     SUB EAX,EDX
005E4331  D1 F8                     SAR EAX,0x1
005E4333  3B C8                     CMP ECX,EAX
005E4335  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
005E4338  7F 03                     JG 0x005e433d
005E433A  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
LAB_005e433d:
005E433D  80 7E 0A 01               CMP byte ptr [ESI + 0xa],0x1
005E4341  75 13                     JNZ 0x005e4356
005E4343  66 83 7D 18 03            CMP word ptr [EBP + 0x18],0x3
005E4348  0F 95 C0                  SETNZ AL
005E434B  48                        DEC EAX
005E434C  24 FE                     AND AL,0xfe
005E434E  83 C0 2C                  ADD EAX,0x2c
005E4351  88 45 FC                  MOV byte ptr [EBP + -0x4],AL
005E4354  EB 12                     JMP 0x005e4368
LAB_005e4356:
005E4356  66 83 7D 18 03            CMP word ptr [EBP + 0x18],0x3
005E435B  0F 95 C1                  SETNZ CL
005E435E  49                        DEC ECX
005E435F  83 E1 FE                  AND ECX,0xfffffffe
005E4362  83 C1 18                  ADD ECX,0x18
005E4365  88 4D FC                  MOV byte ptr [EBP + -0x4],CL
LAB_005e4368:
005E4368  8B 15 F8 8D 85 00         MOV EDX,dword ptr [0x00858df8]
005E436E  8D 4D AC                  LEA ECX,[EBP + -0x54]
005E4371  8D 45 A8                  LEA EAX,[EBP + -0x58]
005E4374  6A 00                     PUSH 0x0
005E4376  51                        PUSH ECX
005E4377  89 55 A8                  MOV dword ptr [EBP + -0x58],EDX
005E437A  A3 F8 8D 85 00            MOV [0x00858df8],EAX
005E437F  E8 6C 94 14 00            CALL 0x0072d7f0
005E4384  8B F0                     MOV ESI,EAX
005E4386  83 C4 08                  ADD ESP,0x8
005E4389  85 F6                     TEST ESI,ESI
005E438B  0F 85 0C 01 00 00         JNZ 0x005e449d
005E4391  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
005E4394  8B 06                     MOV EAX,dword ptr [ESI]
005E4396  8B 58 14                  MOV EBX,dword ptr [EAX + 0x14]
005E4399  85 DB                     TEST EBX,EBX
005E439B  75 18                     JNZ 0x005e43b5
005E439D  66 8B 58 0E               MOV BX,word ptr [EAX + 0xe]
005E43A1  0F AF 58 04               IMUL EBX,dword ptr [EAX + 0x4]
005E43A5  83 C3 1F                  ADD EBX,0x1f
005E43A8  C1 EB 03                  SHR EBX,0x3
005E43AB  81 E3 FC FF FF 1F         AND EBX,0x1ffffffc
005E43B1  0F AF 58 08               IMUL EBX,dword ptr [EAX + 0x8]
LAB_005e43b5:
005E43B5  50                        PUSH EAX
005E43B6  E8 E5 0B 0D 00            CALL 0x006b4fa0
005E43BB  8B CB                     MOV ECX,EBX
005E43BD  8B F8                     MOV EDI,EAX
005E43BF  8B D1                     MOV EDX,ECX
005E43C1  83 C8 FF                  OR EAX,0xffffffff
005E43C4  C1 E9 02                  SHR ECX,0x2
005E43C7  F3 AB                     STOSD.REP ES:EDI
005E43C9  8B 5D F0                  MOV EBX,dword ptr [EBP + -0x10]
005E43CC  8B CA                     MOV ECX,EDX
005E43CE  83 E1 03                  AND ECX,0x3
005E43D1  6A 00                     PUSH 0x0
005E43D3  F3 AA                     STOSB.REP ES:EDI
005E43D5  8B 7D F4                  MOV EDI,dword ptr [EBP + -0xc]
005E43D8  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
005E43DB  8B 0E                     MOV ECX,dword ptr [ESI]
005E43DD  57                        PUSH EDI
005E43DE  53                        PUSH EBX
005E43DF  50                        PUSH EAX
005E43E0  6A 00                     PUSH 0x0
005E43E2  6A 00                     PUSH 0x0
005E43E4  6A 00                     PUSH 0x0
005E43E6  51                        PUSH ECX
005E43E7  E8 24 32 0E 00            CALL 0x006c7610
005E43EC  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
005E43EF  85 C0                     TEST EAX,EAX
005E43F1  74 1E                     JZ 0x005e4411
005E43F3  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
005E43F6  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
005E43F9  52                        PUSH EDX
005E43FA  8B 16                     MOV EDX,dword ptr [ESI]
005E43FC  8D 43 FC                  LEA EAX,[EBX + -0x4]
005E43FF  57                        PUSH EDI
005E4400  83 C1 FC                  ADD ECX,-0x4
005E4403  50                        PUSH EAX
005E4404  51                        PUSH ECX
005E4405  6A 02                     PUSH 0x2
005E4407  6A 02                     PUSH 0x2
005E4409  6A 00                     PUSH 0x0
005E440B  52                        PUSH EDX
005E440C  E8 5F 31 0E 00            CALL 0x006c7570
LAB_005e4411:
005E4411  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
005E4414  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
005E4417  8B 16                     MOV EDX,dword ptr [ESI]
005E4419  50                        PUSH EAX
005E441A  57                        PUSH EDI
005E441B  53                        PUSH EBX
005E441C  51                        PUSH ECX
005E441D  6A 00                     PUSH 0x0
005E441F  6A 00                     PUSH 0x0
005E4421  6A 00                     PUSH 0x0
005E4423  52                        PUSH EDX
005E4424  E8 47 31 0E 00            CALL 0x006c7570
005E4429  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
005E442C  85 FF                     TEST EDI,EDI
005E442E  74 5B                     JZ 0x005e448b
005E4430  8B 5D EC                  MOV EBX,dword ptr [EBP + -0x14]
005E4433  8B 06                     MOV EAX,dword ptr [ESI]
005E4435  6A 00                     PUSH 0x0
005E4437  6A 00                     PUSH 0x0
005E4439  8B 8B 89 00 00 00         MOV ECX,dword ptr [EBX + 0x89]
005E443F  6A 00                     PUSH 0x0
005E4441  6A 00                     PUSH 0x0
005E4443  6A 00                     PUSH 0x0
005E4445  50                        PUSH EAX
005E4446  E8 45 C6 12 00            CALL 0x00710a90
005E444B  66 83 7D 18 03            CMP word ptr [EBP + 0x18],0x3
005E4450  8A 46 08                  MOV AL,byte ptr [ESI + 0x8]
005E4453  75 0D                     JNZ 0x005e4462
005E4455  FE C8                     DEC AL
005E4457  F6 D8                     NEG AL
005E4459  1B C0                     SBB EAX,EAX
005E445B  24 FE                     AND AL,0xfe
005E445D  83 C0 03                  ADD EAX,0x3
005E4460  EB 0B                     JMP 0x005e446d
LAB_005e4462:
005E4462  FE C8                     DEC AL
005E4464  F6 D8                     NEG AL
005E4466  1B C0                     SBB EAX,EAX
005E4468  24 FE                     AND AL,0xfe
005E446A  83 C0 02                  ADD EAX,0x2
LAB_005e446d:
005E446D  8B 0D 18 76 80 00         MOV ECX,dword ptr [0x00807618]
005E4473  50                        PUSH EAX
005E4474  6A FF                     PUSH -0x1
005E4476  6A FF                     PUSH -0x1
005E4478  51                        PUSH ECX
005E4479  57                        PUSH EDI
005E447A  E8 C1 BC 0C 00            CALL 0x006b0140
005E447F  8B 8B 89 00 00 00         MOV ECX,dword ptr [EBX + 0x89]
005E4485  50                        PUSH EAX
005E4486  E8 35 D5 12 00            CALL 0x007119c0
LAB_005e448b:
005E448B  8B 55 A8                  MOV EDX,dword ptr [EBP + -0x58]
005E448E  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
005E4494  5F                        POP EDI
005E4495  5E                        POP ESI
005E4496  5B                        POP EBX
005E4497  8B E5                     MOV ESP,EBP
005E4499  5D                        POP EBP
005E449A  C2 14 00                  RET 0x14
LAB_005e449d:
005E449D  8B 45 A8                  MOV EAX,dword ptr [EBP + -0x58]
005E44A0  68 8C DC 7C 00            PUSH 0x7cdc8c
005E44A5  68 CC 4C 7A 00            PUSH 0x7a4ccc
005E44AA  56                        PUSH ESI
005E44AB  6A 00                     PUSH 0x0
005E44AD  68 B9 04 00 00            PUSH 0x4b9
005E44B2  68 94 D9 7C 00            PUSH 0x7cd994
005E44B7  A3 F8 8D 85 00            MOV [0x00858df8],EAX
005E44BC  E8 0F 90 0C 00            CALL 0x006ad4d0
005E44C1  83 C4 18                  ADD ESP,0x18
005E44C4  85 C0                     TEST EAX,EAX
005E44C6  74 01                     JZ 0x005e44c9
005E44C8  CC                        INT3
LAB_005e44c9:
005E44C9  68 B9 04 00 00            PUSH 0x4b9
005E44CE  68 94 D9 7C 00            PUSH 0x7cd994
005E44D3  6A 00                     PUSH 0x0
005E44D5  56                        PUSH ESI
005E44D6  E8 65 19 0C 00            CALL 0x006a5e40
LAB_005e44db:
005E44DB  5F                        POP EDI
005E44DC  5E                        POP ESI
005E44DD  5B                        POP EBX
005E44DE  8B E5                     MOV ESP,EBP
005E44E0  5D                        POP EBP
005E44E1  C2 14 00                  RET 0x14
