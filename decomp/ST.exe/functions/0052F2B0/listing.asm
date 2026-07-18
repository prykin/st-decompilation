OptPanelTy::SwitchOptPanel:
0052F2B0  55                        PUSH EBP
0052F2B1  8B EC                     MOV EBP,ESP
0052F2B3  83 EC 58                  SUB ESP,0x58
0052F2B6  8B 81 9C 01 00 00         MOV EAX,dword ptr [ECX + 0x19c]
0052F2BC  53                        PUSH EBX
0052F2BD  33 DB                     XOR EBX,EBX
0052F2BF  56                        PUSH ESI
0052F2C0  3B C3                     CMP EAX,EBX
0052F2C2  57                        PUSH EDI
0052F2C3  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
0052F2C6  0F 85 95 03 00 00         JNZ 0x0052f661
0052F2CC  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0052F2D1  8D 55 AC                  LEA EDX,[EBP + -0x54]
0052F2D4  8D 4D A8                  LEA ECX,[EBP + -0x58]
0052F2D7  53                        PUSH EBX
0052F2D8  52                        PUSH EDX
0052F2D9  89 45 A8                  MOV dword ptr [EBP + -0x58],EAX
0052F2DC  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0052F2E2  E8 09 E5 1F 00            CALL 0x0072d7f0
0052F2E7  8B F0                     MOV ESI,EAX
0052F2E9  83 C4 08                  ADD ESP,0x8
0052F2EC  3B F3                     CMP ESI,EBX
0052F2EE  0F 85 30 03 00 00         JNZ 0x0052f624
0052F2F4  8B 7D F8                  MOV EDI,dword ptr [EBP + -0x8]
0052F2F7  66 8B 8F 72 01 00 00      MOV CX,word ptr [EDI + 0x172]
0052F2FE  8B C1                     MOV EAX,ECX
0052F300  25 FF FF 00 00            AND EAX,0xffff
0052F305  48                        DEC EAX
0052F306  83 F8 03                  CMP EAX,0x3
0052F309  0F 87 04 03 00 00         JA 0x0052f613
switchD_0052f30f::switchD:
0052F30F  FF 24 85 6C F6 52 00      JMP dword ptr [EAX*0x4 + 0x52f66c]
switchD_0052f30f::caseD_1:
0052F316  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0052F319  8B C2                     MOV EAX,EDX
0052F31B  25 FF 00 00 00            AND EAX,0xff
0052F320  48                        DEC EAX
0052F321  83 F8 0D                  CMP EAX,0xd
0052F324  77 4E                     JA 0x0052f374
0052F326  33 DB                     XOR EBX,EBX
0052F328  8A 98 88 F6 52 00         MOV BL,byte ptr [EAX + 0x52f688]
switchD_0052f32e::switchD:
0052F32E  FF 24 9D 7C F6 52 00      JMP dword ptr [EBX*0x4 + 0x52f67c]
switchD_0052f32e::caseD_2:
0052F335  C6 87 A9 01 00 00 01      MOV byte ptr [EDI + 0x1a9],0x1
switchD_0052f32e::caseD_1:
0052F33C  80 FA 01                  CMP DL,0x1
0052F33F  75 07                     JNZ 0x0052f348
0052F341  C6 87 A9 01 00 00 00      MOV byte ptr [EDI + 0x1a9],0x0
LAB_0052f348:
0052F348  3A 97 A4 01 00 00         CMP DL,byte ptr [EDI + 0x1a4]
0052F34E  0F 84 BF 02 00 00         JZ 0x0052f613
0052F354  8B CF                     MOV ECX,EDI
0052F356  88 97 A4 01 00 00         MOV byte ptr [EDI + 0x1a4],DL
0052F35C  E8 F0 34 ED FF            CALL 0x00402851
0052F361  8B 45 A8                  MOV EAX,dword ptr [EBP + -0x58]
0052F364  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0052F369  5F                        POP EDI
0052F36A  5E                        POP ESI
0052F36B  5B                        POP EBX
0052F36C  8B E5                     MOV ESP,EBP
0052F36E  5D                        POP EBP
0052F36F  C2 04 00                  RET 0x4
switchD_0052f32e::caseD_3:
0052F372  33 DB                     XOR EBX,EBX
switchD_0052f32e::default:
0052F374  66 83 F9 01               CMP CX,0x1
0052F378  75 08                     JNZ 0x0052f382
0052F37A  53                        PUSH EBX
0052F37B  8B CF                     MOV ECX,EDI
0052F37D  E8 98 66 ED FF            CALL 0x00405a1a
LAB_0052f382:
0052F382  66 C7 87 72 01 00 00 04 00  MOV word ptr [EDI + 0x172],0x4
0052F38B  8B 0D 88 16 80 00         MOV ECX,dword ptr [0x00801688]
0052F391  3B CB                     CMP ECX,EBX
0052F393  89 1D 88 87 80 00         MOV dword ptr [0x00808788],EBX
0052F399  74 11                     JZ 0x0052f3ac
0052F39B  66 83 B9 3F 02 00 00 01   CMP word ptr [ECX + 0x23f],0x1
0052F3A3  75 07                     JNZ 0x0052f3ac
0052F3A5  6A 01                     PUSH 0x1
0052F3A7  E8 26 3B ED FF            CALL 0x00402ed2
LAB_0052f3ac:
0052F3AC  68 B0 00 00 00            PUSH 0xb0
0052F3B1  E9 55 02 00 00            JMP 0x0052f60b
switchD_0052f30f::caseD_2:
0052F3B6  8B 0D E8 16 80 00         MOV ECX,dword ptr [0x008016e8]
0052F3BC  33 F6                     XOR ESI,ESI
0052F3BE  3B CB                     CMP ECX,EBX
0052F3C0  74 0B                     JZ 0x0052f3cd
0052F3C2  53                        PUSH EBX
0052F3C3  E8 AB 26 ED FF            CALL 0x00401a73
0052F3C8  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0052F3CB  EB 03                     JMP 0x0052f3d0
LAB_0052f3cd:
0052F3CD  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
LAB_0052f3d0:
0052F3D0  3B C3                     CMP EAX,EBX
0052F3D2  74 05                     JZ 0x0052f3d9
0052F3D4  BE 01 00 00 00            MOV ESI,0x1
LAB_0052f3d9:
0052F3D9  8B 0D 7C 16 80 00         MOV ECX,dword ptr [0x0080167c]
0052F3DF  3B CB                     CMP ECX,EBX
0052F3E1  74 09                     JZ 0x0052f3ec
0052F3E3  53                        PUSH EBX
0052F3E4  E8 8A 26 ED FF            CALL 0x00401a73
0052F3E9  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
LAB_0052f3ec:
0052F3EC  3B C3                     CMP EAX,EBX
0052F3EE  74 05                     JZ 0x0052f3f5
0052F3F0  BE 01 00 00 00            MOV ESI,0x1
LAB_0052f3f5:
0052F3F5  8B 0D 84 16 80 00         MOV ECX,dword ptr [0x00801684]
0052F3FB  3B CB                     CMP ECX,EBX
0052F3FD  74 09                     JZ 0x0052f408
0052F3FF  53                        PUSH EBX
0052F400  E8 6E 26 ED FF            CALL 0x00401a73
0052F405  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
LAB_0052f408:
0052F408  3B C3                     CMP EAX,EBX
0052F40A  74 05                     JZ 0x0052f411
0052F40C  BE 01 00 00 00            MOV ESI,0x1
LAB_0052f411:
0052F411  8B 0D 98 16 80 00         MOV ECX,dword ptr [0x00801698]
0052F417  3B CB                     CMP ECX,EBX
0052F419  74 09                     JZ 0x0052f424
0052F41B  8B 11                     MOV EDX,dword ptr [ECX]
0052F41D  53                        PUSH EBX
0052F41E  FF 52 1C                  CALL dword ptr [EDX + 0x1c]
0052F421  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
LAB_0052f424:
0052F424  3B C3                     CMP EAX,EBX
0052F426  74 05                     JZ 0x0052f42d
0052F428  BE 01 00 00 00            MOV ESI,0x1
LAB_0052f42d:
0052F42D  8B 0D 44 2A 80 00         MOV ECX,dword ptr [0x00802a44]
0052F433  3B CB                     CMP ECX,EBX
0052F435  74 0A                     JZ 0x0052f441
0052F437  53                        PUSH EBX
0052F438  53                        PUSH EBX
0052F439  E8 B9 56 ED FF            CALL 0x00404af7
0052F43E  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
LAB_0052f441:
0052F441  3B C3                     CMP EAX,EBX
0052F443  74 05                     JZ 0x0052f44a
0052F445  BE 01 00 00 00            MOV ESI,0x1
LAB_0052f44a:
0052F44A  8B 0D 78 16 80 00         MOV ECX,dword ptr [0x00801678]
0052F450  3B CB                     CMP ECX,EBX
0052F452  74 09                     JZ 0x0052f45d
0052F454  8B 01                     MOV EAX,dword ptr [ECX]
0052F456  53                        PUSH EBX
0052F457  FF 50 1C                  CALL dword ptr [EAX + 0x1c]
0052F45A  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
LAB_0052f45d:
0052F45D  3B C3                     CMP EAX,EBX
0052F45F  74 05                     JZ 0x0052f466
0052F461  BE 01 00 00 00            MOV ESI,0x1
LAB_0052f466:
0052F466  8B 0D EC 16 80 00         MOV ECX,dword ptr [0x008016ec]
0052F46C  3B CB                     CMP ECX,EBX
0052F46E  74 09                     JZ 0x0052f479
0052F470  8B 11                     MOV EDX,dword ptr [ECX]
0052F472  53                        PUSH EBX
0052F473  FF 52 1C                  CALL dword ptr [EDX + 0x1c]
0052F476  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
LAB_0052f479:
0052F479  3B C3                     CMP EAX,EBX
0052F47B  74 05                     JZ 0x0052f482
0052F47D  BE 01 00 00 00            MOV ESI,0x1
LAB_0052f482:
0052F482  8B 0D 48 2A 80 00         MOV ECX,dword ptr [0x00802a48]
0052F488  3B CB                     CMP ECX,EBX
0052F48A  74 09                     JZ 0x0052f495
0052F48C  8B 01                     MOV EAX,dword ptr [ECX]
0052F48E  53                        PUSH EBX
0052F48F  FF 50 1C                  CALL dword ptr [EAX + 0x1c]
0052F492  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
LAB_0052f495:
0052F495  3B C3                     CMP EAX,EBX
0052F497  74 05                     JZ 0x0052f49e
0052F499  BE 01 00 00 00            MOV ESI,0x1
LAB_0052f49e:
0052F49E  8B 0D 8C 16 80 00         MOV ECX,dword ptr [0x0080168c]
0052F4A4  3B CB                     CMP ECX,EBX
0052F4A6  74 09                     JZ 0x0052f4b1
0052F4A8  8B 11                     MOV EDX,dword ptr [ECX]
0052F4AA  53                        PUSH EBX
0052F4AB  FF 52 1C                  CALL dword ptr [EDX + 0x1c]
0052F4AE  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
LAB_0052f4b1:
0052F4B1  3B C3                     CMP EAX,EBX
0052F4B3  74 05                     JZ 0x0052f4ba
0052F4B5  BE 01 00 00 00            MOV ESI,0x1
LAB_0052f4ba:
0052F4BA  8B 0D 80 16 80 00         MOV ECX,dword ptr [0x00801680]
0052F4C0  3B CB                     CMP ECX,EBX
0052F4C2  74 09                     JZ 0x0052f4cd
0052F4C4  53                        PUSH EBX
0052F4C5  E8 A9 25 ED FF            CALL 0x00401a73
0052F4CA  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
LAB_0052f4cd:
0052F4CD  3B C3                     CMP EAX,EBX
0052F4CF  74 05                     JZ 0x0052f4d6
0052F4D1  BE 01 00 00 00            MOV ESI,0x1
LAB_0052f4d6:
0052F4D6  8B 0D 90 16 80 00         MOV ECX,dword ptr [0x00801690]
0052F4DC  3B CB                     CMP ECX,EBX
0052F4DE  74 09                     JZ 0x0052f4e9
0052F4E0  8B 01                     MOV EAX,dword ptr [ECX]
0052F4E2  53                        PUSH EBX
0052F4E3  FF 50 18                  CALL dword ptr [EAX + 0x18]
0052F4E6  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
LAB_0052f4e9:
0052F4E9  3B C3                     CMP EAX,EBX
0052F4EB  74 05                     JZ 0x0052f4f2
0052F4ED  BE 01 00 00 00            MOV ESI,0x1
LAB_0052f4f2:
0052F4F2  8B 0D E4 16 80 00         MOV ECX,dword ptr [0x008016e4]
0052F4F8  3B CB                     CMP ECX,EBX
0052F4FA  74 09                     JZ 0x0052f505
0052F4FC  53                        PUSH EBX
0052F4FD  E8 5D 4D ED FF            CALL 0x0040425f
0052F502  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
LAB_0052f505:
0052F505  3B C3                     CMP EAX,EBX
0052F507  74 05                     JZ 0x0052f50e
0052F509  BE 01 00 00 00            MOV ESI,0x1
LAB_0052f50e:
0052F50E  3B F3                     CMP ESI,EBX
0052F510  74 0A                     JZ 0x0052f51c
0052F512  80 7D 08 0F               CMP byte ptr [EBP + 0x8],0xf
0052F516  0F 84 F7 00 00 00         JZ 0x0052f613
LAB_0052f51c:
0052F51C  33 C9                     XOR ECX,ECX
0052F51E  33 D2                     XOR EDX,EDX
0052F520  89 4D EC                  MOV dword ptr [EBP + -0x14],ECX
0052F523  6A FF                     PUSH -0x1
0052F525  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
0052F528  8D 45 EC                  LEA EAX,[EBP + -0x14]
0052F52B  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
0052F52E  8A 0D 83 87 80 00         MOV CL,byte ptr [0x00808783]
0052F534  80 F9 03                  CMP CL,0x3
0052F537  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
0052F53D  6A 01                     PUSH 0x1
0052F53F  50                        PUSH EAX
0052F540  0F 95 C2                  SETNZ DL
0052F543  6A 05                     PUSH 0x5
0052F545  C7 45 EC 01 00 00 00      MOV dword ptr [EBP + -0x14],0x1
0052F54C  89 55 F0                  MOV dword ptr [EBP + -0x10],EDX
0052F54F  E8 DF 46 ED FF            CALL 0x00403c33
0052F554  8B 0D 88 16 80 00         MOV ECX,dword ptr [0x00801688]
0052F55A  C7 05 8C 87 80 00 01 00 00 00  MOV dword ptr [0x0080878c],0x1
0052F564  3B CB                     CMP ECX,EBX
0052F566  74 06                     JZ 0x0052f56e
0052F568  53                        PUSH EBX
0052F569  E8 64 39 ED FF            CALL 0x00402ed2
LAB_0052f56e:
0052F56E  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0052F571  8B D1                     MOV EDX,ECX
0052F573  81 E2 FF 00 00 00         AND EDX,0xff
0052F579  8D 42 FF                  LEA EAX,[EDX + -0x1]
0052F57C  83 F8 0D                  CMP EAX,0xd
0052F57F  77 39                     JA 0x0052f5ba
0052F581  33 D2                     XOR EDX,EDX
0052F583  8A 90 A4 F6 52 00         MOV DL,byte ptr [EAX + 0x52f6a4]
switchD_0052f589::switchD:
0052F589  FF 24 95 98 F6 52 00      JMP dword ptr [EDX*0x4 + 0x52f698]
switchD_0052f589::caseD_2:
0052F590  C6 87 A9 01 00 00 01      MOV byte ptr [EDI + 0x1a9],0x1
switchD_0052f589::caseD_1:
0052F597  80 F9 01                  CMP CL,0x1
0052F59A  75 06                     JNZ 0x0052f5a2
0052F59C  88 9F A9 01 00 00         MOV byte ptr [EDI + 0x1a9],BL
LAB_0052f5a2:
0052F5A2  3A 8F A4 01 00 00         CMP CL,byte ptr [EDI + 0x1a4]
0052F5A8  74 10                     JZ 0x0052f5ba
0052F5AA  88 8F A4 01 00 00         MOV byte ptr [EDI + 0x1a4],CL
0052F5B0  8B CF                     MOV ECX,EDI
0052F5B2  E8 9A 32 ED FF            CALL 0x00402851
switchD_0052f30f::caseD_4:
0052F5B7  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
switchD_0052f589::caseD_3:
0052F5BA  8B C1                     MOV EAX,ECX
0052F5BC  25 FF 00 00 00            AND EAX,0xff
0052F5C1  48                        DEC EAX
0052F5C2  83 F8 0D                  CMP EAX,0xd
0052F5C5  77 36                     JA 0x0052f5fd
0052F5C7  33 D2                     XOR EDX,EDX
0052F5C9  8A 90 C0 F6 52 00         MOV DL,byte ptr [EAX + 0x52f6c0]
switchD_0052f5cf::switchD:
0052F5CF  FF 24 95 B4 F6 52 00      JMP dword ptr [EDX*0x4 + 0x52f6b4]
switchD_0052f5cf::caseD_2:
0052F5D6  C6 87 A9 01 00 00 01      MOV byte ptr [EDI + 0x1a9],0x1
switchD_0052f5cf::caseD_1:
0052F5DD  80 F9 01                  CMP CL,0x1
0052F5E0  75 06                     JNZ 0x0052f5e8
0052F5E2  88 9F A9 01 00 00         MOV byte ptr [EDI + 0x1a9],BL
LAB_0052f5e8:
0052F5E8  3A 8F A4 01 00 00         CMP CL,byte ptr [EDI + 0x1a4]
0052F5EE  74 0D                     JZ 0x0052f5fd
0052F5F0  88 8F A4 01 00 00         MOV byte ptr [EDI + 0x1a4],CL
0052F5F6  8B CF                     MOV ECX,EDI
0052F5F8  E8 54 32 ED FF            CALL 0x00402851
switchD_0052f5cf::caseD_3:
0052F5FD  66 C7 87 72 01 00 00 03 00  MOV word ptr [EDI + 0x172],0x3
0052F606  68 AF 00 00 00            PUSH 0xaf
LAB_0052f60b:
0052F60B  E8 1F 68 ED FF            CALL 0x00405e2f
0052F610  83 C4 04                  ADD ESP,0x4
switchD_0052f30f::default:
0052F613  8B 45 A8                  MOV EAX,dword ptr [EBP + -0x58]
0052F616  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0052F61B  5F                        POP EDI
0052F61C  5E                        POP ESI
0052F61D  5B                        POP EBX
0052F61E  8B E5                     MOV ESP,EBP
0052F620  5D                        POP EBP
0052F621  C2 04 00                  RET 0x4
LAB_0052f624:
0052F624  8B 4D A8                  MOV ECX,dword ptr [EBP + -0x58]
0052F627  68 E0 71 7C 00            PUSH 0x7c71e0
0052F62C  68 CC 4C 7A 00            PUSH 0x7a4ccc
0052F631  56                        PUSH ESI
0052F632  53                        PUSH EBX
0052F633  68 25 01 00 00            PUSH 0x125
0052F638  68 A0 70 7C 00            PUSH 0x7c70a0
0052F63D  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0052F643  E8 88 DE 17 00            CALL 0x006ad4d0
0052F648  83 C4 18                  ADD ESP,0x18
0052F64B  85 C0                     TEST EAX,EAX
0052F64D  74 01                     JZ 0x0052f650
0052F64F  CC                        INT3
LAB_0052f650:
0052F650  68 25 01 00 00            PUSH 0x125
0052F655  68 A0 70 7C 00            PUSH 0x7c70a0
0052F65A  53                        PUSH EBX
0052F65B  56                        PUSH ESI
0052F65C  E8 DF 67 17 00            CALL 0x006a5e40
LAB_0052f661:
0052F661  5F                        POP EDI
0052F662  5E                        POP ESI
0052F663  5B                        POP EBX
0052F664  8B E5                     MOV ESP,EBP
0052F666  5D                        POP EBP
0052F667  C2 04 00                  RET 0x4
