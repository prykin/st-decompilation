FUN_005de670:
005DE670  55                        PUSH EBP
005DE671  8B EC                     MOV EBP,ESP
005DE673  81 EC 74 04 00 00         SUB ESP,0x474
005DE679  53                        PUSH EBX
005DE67A  33 DB                     XOR EBX,EBX
005DE67C  8D 81 9A 06 00 00         LEA EAX,[ECX + 0x69a]
005DE682  89 4D E8                  MOV dword ptr [EBP + -0x18],ECX
005DE685  89 99 B2 06 00 00         MOV dword ptr [ECX + 0x6b2],EBX
005DE68B  89 99 AE 06 00 00         MOV dword ptr [ECX + 0x6ae],EBX
005DE691  89 99 9E 06 00 00         MOV dword ptr [ECX + 0x69e],EBX
005DE697  8B 08                     MOV ECX,dword ptr [EAX]
005DE699  56                        PUSH ESI
005DE69A  83 CE FF                  OR ESI,0xffffffff
005DE69D  3B CB                     CMP ECX,EBX
005DE69F  57                        PUSH EDI
005DE6A0  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
005DE6A3  89 5D F8                  MOV dword ptr [EBP + -0x8],EBX
005DE6A6  89 75 F0                  MOV dword ptr [EBP + -0x10],ESI
005DE6A9  89 75 F4                  MOV dword ptr [EBP + -0xc],ESI
005DE6AC  74 06                     JZ 0x005de6b4
005DE6AE  50                        PUSH EAX
005DE6AF  E8 AC C9 0C 00            CALL 0x006ab060
LAB_005de6b4:
005DE6B4  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
005DE6B9  8D 55 A0                  LEA EDX,[EBP + -0x60]
005DE6BC  8D 4D 9C                  LEA ECX,[EBP + -0x64]
005DE6BF  53                        PUSH EBX
005DE6C0  52                        PUSH EDX
005DE6C1  89 45 9C                  MOV dword ptr [EBP + -0x64],EAX
005DE6C4  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005DE6CA  E8 21 F1 14 00            CALL 0x0072d7f0
005DE6CF  83 C4 08                  ADD ESP,0x8
005DE6D2  3B C3                     CMP EAX,EBX
005DE6D4  0F 85 4D 03 00 00         JNZ 0x005dea27
005DE6DA  8D 85 98 FE FF FF         LEA EAX,[EBP + 0xfffffe98]
005DE6E0  53                        PUSH EBX
005DE6E1  8D 8D 90 FC FF FF         LEA ECX,[EBP + 0xfffffc90]
005DE6E7  50                        PUSH EAX
005DE6E8  8D 95 8C FB FF FF         LEA EDX,[EBP + 0xfffffb8c]
005DE6EE  51                        PUSH ECX
005DE6EF  52                        PUSH EDX
005DE6F0  68 16 ED 80 00            PUSH 0x80ed16
005DE6F5  E8 36 00 15 00            CALL 0x0072e730
005DE6FA  8D BD 98 FE FF FF         LEA EDI,[EBP + 0xfffffe98]
005DE700  8B CE                     MOV ECX,ESI
005DE702  33 C0                     XOR EAX,EAX
005DE704  8D 95 90 FC FF FF         LEA EDX,[EBP + 0xfffffc90]
005DE70A  F2 AE                     SCASB.REPNE ES:EDI
005DE70C  A1 C0 C1 79 00            MOV EAX,[0x0079c1c0]
005DE711  F7 D1                     NOT ECX
005DE713  89 4D EC                  MOV dword ptr [EBP + -0x14],ECX
005DE716  8D 8D 98 FE FF FF         LEA ECX,[EBP + 0xfffffe98]
005DE71C  50                        PUSH EAX
005DE71D  51                        PUSH ECX
005DE71E  8D 85 8C FB FF FF         LEA EAX,[EBP + 0xfffffb8c]
005DE724  52                        PUSH EDX
005DE725  8D 8D 94 FD FF FF         LEA ECX,[EBP + 0xfffffd94]
005DE72B  50                        PUSH EAX
005DE72C  51                        PUSH ECX
005DE72D  E8 DE 09 15 00            CALL 0x0072f110
005DE732  83 C4 28                  ADD ESP,0x28
005DE735  8B 3D 80 BC 85 00         MOV EDI,dword ptr [0x0085bc80]
005DE73B  8D 95 94 FD FF FF         LEA EDX,[EBP + 0xfffffd94]
005DE741  53                        PUSH EBX
005DE742  68 80 00 00 00            PUSH 0x80
005DE747  6A 03                     PUSH 0x3
005DE749  53                        PUSH EBX
005DE74A  6A 01                     PUSH 0x1
005DE74C  68 00 00 00 80            PUSH 0x80000000
005DE751  52                        PUSH EDX
005DE752  FF D7                     CALL EDI
005DE754  8B F0                     MOV ESI,EAX
005DE756  83 FE FF                  CMP ESI,-0x1
005DE759  89 75 F0                  MOV dword ptr [EBP + -0x10],ESI
005DE75C  75 16                     JNZ 0x005de774
005DE75E  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
005DE763  68 13 04 00 00            PUSH 0x413
005DE768  68 18 D7 7C 00            PUSH 0x7cd718
005DE76D  50                        PUSH EAX
005DE76E  56                        PUSH ESI
005DE76F  E8 CC 76 0C 00            CALL 0x006a5e40
LAB_005de774:
005DE774  6A 02                     PUSH 0x2
005DE776  53                        PUSH EBX
005DE777  53                        PUSH EBX
005DE778  56                        PUSH ESI
005DE779  FF 15 74 BC 85 00         CALL dword ptr [0x0085bc74]
005DE77F  8B 5D E8                  MOV EBX,dword ptr [EBP + -0x18]
005DE782  83 F8 FF                  CMP EAX,-0x1
005DE785  89 83 AE 06 00 00         MOV dword ptr [EBX + 0x6ae],EAX
005DE78B  75 17                     JNZ 0x005de7a4
005DE78D  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
005DE793  68 15 04 00 00            PUSH 0x415
005DE798  68 18 D7 7C 00            PUSH 0x7cd718
005DE79D  51                        PUSH ECX
005DE79E  50                        PUSH EAX
005DE79F  E8 9C 76 0C 00            CALL 0x006a5e40
LAB_005de7a4:
005DE7A4  8B 15 C4 C1 79 00         MOV EDX,dword ptr [0x0079c1c4]
005DE7AA  8D 85 98 FE FF FF         LEA EAX,[EBP + 0xfffffe98]
005DE7B0  52                        PUSH EDX
005DE7B1  8D 8D 90 FC FF FF         LEA ECX,[EBP + 0xfffffc90]
005DE7B7  50                        PUSH EAX
005DE7B8  8D 95 8C FB FF FF         LEA EDX,[EBP + 0xfffffb8c]
005DE7BE  51                        PUSH ECX
005DE7BF  8D 85 94 FD FF FF         LEA EAX,[EBP + 0xfffffd94]
005DE7C5  52                        PUSH EDX
005DE7C6  50                        PUSH EAX
005DE7C7  E8 44 09 15 00            CALL 0x0072f110
005DE7CC  83 C4 14                  ADD ESP,0x14
005DE7CF  8D 8D 94 FD FF FF         LEA ECX,[EBP + 0xfffffd94]
005DE7D5  6A 00                     PUSH 0x0
005DE7D7  68 80 00 00 00            PUSH 0x80
005DE7DC  6A 03                     PUSH 0x3
005DE7DE  6A 00                     PUSH 0x0
005DE7E0  6A 01                     PUSH 0x1
005DE7E2  68 00 00 00 80            PUSH 0x80000000
005DE7E7  51                        PUSH ECX
005DE7E8  FF D7                     CALL EDI
005DE7EA  8B F8                     MOV EDI,EAX
005DE7EC  83 FF FF                  CMP EDI,-0x1
005DE7EF  89 7D F4                  MOV dword ptr [EBP + -0xc],EDI
005DE7F2  75 17                     JNZ 0x005de80b
005DE7F4  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
005DE7FA  68 1A 04 00 00            PUSH 0x41a
005DE7FF  68 18 D7 7C 00            PUSH 0x7cd718
005DE804  52                        PUSH EDX
005DE805  50                        PUSH EAX
005DE806  E8 35 76 0C 00            CALL 0x006a5e40
LAB_005de80b:
005DE80B  6A 02                     PUSH 0x2
005DE80D  6A 00                     PUSH 0x0
005DE80F  6A 00                     PUSH 0x0
005DE811  57                        PUSH EDI
005DE812  FF 15 74 BC 85 00         CALL dword ptr [0x0085bc74]
005DE818  83 F8 FF                  CMP EAX,-0x1
005DE81B  89 83 B2 06 00 00         MOV dword ptr [EBX + 0x6b2],EAX
005DE821  75 17                     JNZ 0x005de83a
005DE823  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
005DE828  68 1C 04 00 00            PUSH 0x41c
005DE82D  68 18 D7 7C 00            PUSH 0x7cd718
005DE832  50                        PUSH EAX
005DE833  6A FF                     PUSH -0x1
005DE835  E8 06 76 0C 00            CALL 0x006a5e40
LAB_005de83a:
005DE83A  8B 8B AE 06 00 00         MOV ECX,dword ptr [EBX + 0x6ae]
005DE840  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
005DE843  8B BB B2 06 00 00         MOV EDI,dword ptr [EBX + 0x6b2]
005DE849  03 C8                     ADD ECX,EAX
005DE84B  03 CF                     ADD ECX,EDI
005DE84D  51                        PUSH ECX
005DE84E  E8 1D C4 0C 00            CALL 0x006aac70
005DE853  85 C0                     TEST EAX,EAX
005DE855  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
005DE858  75 1B                     JNZ 0x005de875
005DE85A  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
005DE860  68 1E 04 00 00            PUSH 0x41e
005DE865  68 18 D7 7C 00            PUSH 0x7cd718
005DE86A  52                        PUSH EDX
005DE86B  6A FF                     PUSH -0x1
005DE86D  E8 CE 75 0C 00            CALL 0x006a5e40
005DE872  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
LAB_005de875:
005DE875  8B BB AE 06 00 00         MOV EDI,dword ptr [EBX + 0x6ae]
005DE87B  8B 8B B2 06 00 00         MOV ECX,dword ptr [EBX + 0x6b2]
005DE881  03 F8                     ADD EDI,EAX
005DE883  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
005DE886  8B C7                     MOV EAX,EDI
005DE888  6A 00                     PUSH 0x0
005DE88A  6A 00                     PUSH 0x0
005DE88C  03 C1                     ADD EAX,ECX
005DE88E  6A 00                     PUSH 0x0
005DE890  56                        PUSH ESI
005DE891  89 45 E0                  MOV dword ptr [EBP + -0x20],EAX
005DE894  FF 15 74 BC 85 00         CALL dword ptr [0x0085bc74]
005DE89A  83 F8 FF                  CMP EAX,-0x1
005DE89D  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
005DE8A0  75 17                     JNZ 0x005de8b9
005DE8A2  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
005DE8A7  68 21 04 00 00            PUSH 0x421
005DE8AC  68 18 D7 7C 00            PUSH 0x7cd718
005DE8B1  50                        PUSH EAX
005DE8B2  6A FF                     PUSH -0x1
005DE8B4  E8 87 75 0C 00            CALL 0x006a5e40
LAB_005de8b9:
005DE8B9  8B 93 AE 06 00 00         MOV EDX,dword ptr [EBX + 0x6ae]
005DE8BF  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
005DE8C2  8D 4D FC                  LEA ECX,[EBP + -0x4]
005DE8C5  6A 00                     PUSH 0x0
005DE8C7  51                        PUSH ECX
005DE8C8  52                        PUSH EDX
005DE8C9  50                        PUSH EAX
005DE8CA  56                        PUSH ESI
005DE8CB  FF 15 68 BC 85 00         CALL dword ptr [0x0085bc68]
005DE8D1  85 C0                     TEST EAX,EAX
005DE8D3  74 0D                     JZ 0x005de8e2
005DE8D5  8B 8B AE 06 00 00         MOV ECX,dword ptr [EBX + 0x6ae]
005DE8DB  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
005DE8DE  3B C8                     CMP ECX,EAX
005DE8E0  74 18                     JZ 0x005de8fa
LAB_005de8e2:
005DE8E2  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
005DE8E8  68 22 04 00 00            PUSH 0x422
005DE8ED  68 18 D7 7C 00            PUSH 0x7cd718
005DE8F2  52                        PUSH EDX
005DE8F3  6A FF                     PUSH -0x1
005DE8F5  E8 46 75 0C 00            CALL 0x006a5e40
LAB_005de8fa:
005DE8FA  56                        PUSH ESI
005DE8FB  FF 15 C8 BB 85 00         CALL dword ptr [0x0085bbc8]
005DE901  8B 75 F4                  MOV ESI,dword ptr [EBP + -0xc]
005DE904  6A 00                     PUSH 0x0
005DE906  6A 00                     PUSH 0x0
005DE908  6A 00                     PUSH 0x0
005DE90A  56                        PUSH ESI
005DE90B  FF 15 74 BC 85 00         CALL dword ptr [0x0085bc74]
005DE911  83 F8 FF                  CMP EAX,-0x1
005DE914  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
005DE917  75 17                     JNZ 0x005de930
005DE919  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
005DE91E  68 25 04 00 00            PUSH 0x425
005DE923  68 18 D7 7C 00            PUSH 0x7cd718
005DE928  50                        PUSH EAX
005DE929  6A FF                     PUSH -0x1
005DE92B  E8 10 75 0C 00            CALL 0x006a5e40
LAB_005de930:
005DE930  8B 93 B2 06 00 00         MOV EDX,dword ptr [EBX + 0x6b2]
005DE936  8D 4D FC                  LEA ECX,[EBP + -0x4]
005DE939  6A 00                     PUSH 0x0
005DE93B  51                        PUSH ECX
005DE93C  52                        PUSH EDX
005DE93D  57                        PUSH EDI
005DE93E  56                        PUSH ESI
005DE93F  FF 15 68 BC 85 00         CALL dword ptr [0x0085bc68]
005DE945  85 C0                     TEST EAX,EAX
005DE947  74 0D                     JZ 0x005de956
005DE949  8B 83 B2 06 00 00         MOV EAX,dword ptr [EBX + 0x6b2]
005DE94F  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
005DE952  3B C1                     CMP EAX,ECX
005DE954  74 18                     JZ 0x005de96e
LAB_005de956:
005DE956  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
005DE95C  68 26 04 00 00            PUSH 0x426
005DE961  68 18 D7 7C 00            PUSH 0x7cd718
005DE966  51                        PUSH ECX
005DE967  6A FF                     PUSH -0x1
005DE969  E8 D2 74 0C 00            CALL 0x006a5e40
LAB_005de96e:
005DE96E  56                        PUSH ESI
005DE96F  FF 15 C8 BB 85 00         CALL dword ptr [0x0085bbc8]
005DE975  8D BD 98 FE FF FF         LEA EDI,[EBP + 0xfffffe98]
005DE97B  83 C9 FF                  OR ECX,0xffffffff
005DE97E  33 C0                     XOR EAX,EAX
005DE980  8D B5 98 FE FF FF         LEA ESI,[EBP + 0xfffffe98]
005DE986  F2 AE                     SCASB.REPNE ES:EDI
005DE988  8B 7D E0                  MOV EDI,dword ptr [EBP + -0x20]
005DE98B  F7 D1                     NOT ECX
005DE98D  8B D1                     MOV EDX,ECX
005DE98F  C1 E9 02                  SHR ECX,0x2
005DE992  F3 A5                     MOVSD.REP ES:EDI,ESI
005DE994  8B CA                     MOV ECX,EDX
005DE996  83 E1 03                  AND ECX,0x3
005DE999  F3 A4                     MOVSB.REP ES:EDI,ESI
005DE99B  8B 83 AE 06 00 00         MOV EAX,dword ptr [EBX + 0x6ae]
005DE9A1  8B 75 EC                  MOV ESI,dword ptr [EBP + -0x14]
005DE9A4  8B 8B B2 06 00 00         MOV ECX,dword ptr [EBX + 0x6b2]
005DE9AA  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
005DE9AD  03 C6                     ADD EAX,ESI
005DE9AF  89 93 9A 06 00 00         MOV dword ptr [EBX + 0x69a],EDX
005DE9B5  03 C8                     ADD ECX,EAX
005DE9B7  89 8B 9E 06 00 00         MOV dword ptr [EBX + 0x69e],ECX
005DE9BD  A1 64 17 81 00            MOV EAX,[0x00811764]
005DE9C2  85 C0                     TEST EAX,EAX
005DE9C4  74 1C                     JZ 0x005de9e2
005DE9C6  83 78 28 01               CMP dword ptr [EAX + 0x28],0x1
005DE9CA  75 16                     JNZ 0x005de9e2
005DE9CC  C7 83 A2 06 00 00 00 10 00 00  MOV dword ptr [EBX + 0x6a2],0x1000
005DE9D6  C7 83 AA 06 00 00 00 00 00 00  MOV dword ptr [EBX + 0x6aa],0x0
005DE9E0  EB 14                     JMP 0x005de9f6
LAB_005de9e2:
005DE9E2  C7 83 A2 06 00 00 00 04 00 00  MOV dword ptr [EBX + 0x6a2],0x400
005DE9EC  C7 83 AA 06 00 00 05 00 00 00  MOV dword ptr [EBX + 0x6aa],0x5
LAB_005de9f6:
005DE9F6  8B B3 A2 06 00 00         MOV ESI,dword ptr [EBX + 0x6a2]
005DE9FC  8B C1                     MOV EAX,ECX
005DE9FE  33 D2                     XOR EDX,EDX
005DEA00  F7 F6                     DIV ESI
005DEA02  8B C1                     MOV EAX,ECX
005DEA04  8B FA                     MOV EDI,EDX
005DEA06  F7 DF                     NEG EDI
005DEA08  1B FF                     SBB EDI,EDI
005DEA0A  33 D2                     XOR EDX,EDX
005DEA0C  F7 F6                     DIV ESI
005DEA0E  F7 DF                     NEG EDI
005DEA10  03 F8                     ADD EDI,EAX
005DEA12  8B 45 9C                  MOV EAX,dword ptr [EBP + -0x64]
005DEA15  89 BB A6 06 00 00         MOV dword ptr [EBX + 0x6a6],EDI
005DEA1B  A3 F8 8D 85 00            MOV [0x00858df8],EAX
005DEA20  5F                        POP EDI
005DEA21  5E                        POP ESI
005DEA22  5B                        POP EBX
005DEA23  8B E5                     MOV ESP,EBP
005DEA25  5D                        POP EBP
005DEA26  C3                        RET
LAB_005dea27:
005DEA27  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
005DEA2A  8B 4D 9C                  MOV ECX,dword ptr [EBP + -0x64]
005DEA2D  8B 3D C8 BB 85 00         MOV EDI,dword ptr [0x0085bbc8]
005DEA33  3B C6                     CMP EAX,ESI
005DEA35  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005DEA3B  74 03                     JZ 0x005dea40
005DEA3D  50                        PUSH EAX
005DEA3E  FF D7                     CALL EDI
LAB_005dea40:
005DEA40  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
005DEA43  3B C6                     CMP EAX,ESI
005DEA45  74 03                     JZ 0x005dea4a
005DEA47  50                        PUSH EAX
005DEA48  FF D7                     CALL EDI
LAB_005dea4a:
005DEA4A  39 5D F8                  CMP dword ptr [EBP + -0x8],EBX
005DEA4D  74 09                     JZ 0x005dea58
005DEA4F  8D 55 F8                  LEA EDX,[EBP + -0x8]
005DEA52  52                        PUSH EDX
005DEA53  E8 08 C6 0C 00            CALL 0x006ab060
LAB_005dea58:
005DEA58  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
005DEA5B  5F                        POP EDI
005DEA5C  5E                        POP ESI
005DEA5D  89 98 B2 06 00 00         MOV dword ptr [EAX + 0x6b2],EBX
005DEA63  89 98 AE 06 00 00         MOV dword ptr [EAX + 0x6ae],EBX
005DEA69  89 98 9E 06 00 00         MOV dword ptr [EAX + 0x69e],EBX
005DEA6F  5B                        POP EBX
005DEA70  8B E5                     MOV ESP,EBP
005DEA72  5D                        POP EBP
005DEA73  C3                        RET
