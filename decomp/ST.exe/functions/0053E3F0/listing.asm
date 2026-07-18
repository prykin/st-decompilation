FUN_0053e3f0:
0053E3F0  55                        PUSH EBP
0053E3F1  8B EC                     MOV EBP,ESP
0053E3F3  83 EC 48                  SUB ESP,0x48
0053E3F6  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0053E3FB  53                        PUSH EBX
0053E3FC  56                        PUSH ESI
0053E3FD  57                        PUSH EDI
0053E3FE  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0053E401  33 FF                     XOR EDI,EDI
0053E403  8D 55 BC                  LEA EDX,[EBP + -0x44]
0053E406  8D 4D B8                  LEA ECX,[EBP + -0x48]
0053E409  57                        PUSH EDI
0053E40A  52                        PUSH EDX
0053E40B  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
0053E40E  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0053E414  E8 D7 F3 1E 00            CALL 0x0072d7f0
0053E419  8B F0                     MOV ESI,EAX
0053E41B  83 C4 08                  ADD ESP,0x8
0053E41E  3B F7                     CMP ESI,EDI
0053E420  0F 85 47 01 00 00         JNZ 0x0053e56d
0053E426  A1 30 67 80 00            MOV EAX,[0x00806730]
0053E42B  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
0053E42E  05 E0 FC FF FF            ADD EAX,0xfffffce0
0053E433  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0053E436  99                        CDQ
0053E437  2B C2                     SUB EAX,EDX
0053E439  8B 56 3C                  MOV EDX,dword ptr [ESI + 0x3c]
0053E43C  D1 F8                     SAR EAX,0x1
0053E43E  03 D0                     ADD EDX,EAX
0053E440  6A 01                     PUSH 0x1
0053E442  57                        PUSH EDI
0053E443  89 56 3C                  MOV dword ptr [ESI + 0x3c],EDX
0053E446  51                        PUSH ECX
0053E447  8B 0D 90 67 80 00         MOV ECX,dword ptr [0x00806790]
0053E44D  6A 01                     PUSH 0x1
0053E44F  E8 8C 38 1B 00            CALL 0x006f1ce0
0053E454  89 86 85 01 00 00         MOV dword ptr [ESI + 0x185],EAX
0053E45A  8B 15 28 2A 80 00         MOV EDX,dword ptr [0x00802a28]
0053E460  8B 42 28                  MOV EAX,dword ptr [EDX + 0x28]
0053E463  50                        PUSH EAX
0053E464  68 9D 01 00 00            PUSH 0x19d
0053E469  E8 92 FA 1C 00            CALL 0x0070df00
0053E46E  89 86 89 01 00 00         MOV dword ptr [ESI + 0x189],EAX
0053E474  89 78 58                  MOV dword ptr [EAX + 0x58],EDI
0053E477  89 78 5C                  MOV dword ptr [EAX + 0x5c],EDI
0053E47A  8B 46 68                  MOV EAX,dword ptr [ESI + 0x68]
0053E47D  83 C4 08                  ADD ESP,0x8
0053E480  8B 58 14                  MOV EBX,dword ptr [EAX + 0x14]
0053E483  3B DF                     CMP EBX,EDI
0053E485  75 1A                     JNZ 0x0053e4a1
0053E487  33 DB                     XOR EBX,EBX
0053E489  66 8B 58 0E               MOV BX,word ptr [EAX + 0xe]
0053E48D  0F AF 58 04               IMUL EBX,dword ptr [EAX + 0x4]
0053E491  83 C3 1F                  ADD EBX,0x1f
0053E494  C1 EB 03                  SHR EBX,0x3
0053E497  81 E3 FC FF FF 1F         AND EBX,0x1ffffffc
0053E49D  0F AF 58 08               IMUL EBX,dword ptr [EAX + 0x8]
LAB_0053e4a1:
0053E4A1  50                        PUSH EAX
0053E4A2  E8 F9 6A 17 00            CALL 0x006b4fa0
0053E4A7  8B CB                     MOV ECX,EBX
0053E4A9  8B F8                     MOV EDI,EAX
0053E4AB  8B D1                     MOV EDX,ECX
0053E4AD  83 C8 FF                  OR EAX,0xffffffff
0053E4B0  C1 E9 02                  SHR ECX,0x2
0053E4B3  F3 AB                     STOSD.REP ES:EDI
0053E4B5  8B CA                     MOV ECX,EDX
0053E4B7  83 E1 03                  AND ECX,0x3
0053E4BA  F3 AA                     STOSB.REP ES:EDI
0053E4BC  8B 86 85 01 00 00         MOV EAX,dword ptr [ESI + 0x185]
0053E4C2  8B 4E 68                  MOV ECX,dword ptr [ESI + 0x68]
0053E4C5  50                        PUSH EAX
0053E4C6  6A 01                     PUSH 0x1
0053E4C8  6A 00                     PUSH 0x0
0053E4CA  6A 00                     PUSH 0x0
0053E4CC  51                        PUSH ECX
0053E4CD  E8 57 4D EC FF            CALL 0x00403229
0053E4D2  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
0053E4D5  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
0053E4D8  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
0053E4DB  83 C4 14                  ADD ESP,0x14
0053E4DE  52                        PUSH EDX
0053E4DF  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0053E4E2  50                        PUSH EAX
0053E4E3  8B 46 68                  MOV EAX,dword ptr [ESI + 0x68]
0053E4E6  51                        PUSH ECX
0053E4E7  8B 8E 89 01 00 00         MOV ECX,dword ptr [ESI + 0x189]
0053E4ED  52                        PUSH EDX
0053E4EE  6A 00                     PUSH 0x0
0053E4F0  50                        PUSH EAX
0053E4F1  E8 9A 25 1D 00            CALL 0x00710a90
0053E4F6  8B 0D 18 76 80 00         MOV ECX,dword ptr [0x00807618]
0053E4FC  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
0053E4FF  6A 00                     PUSH 0x0
0053E501  6A FF                     PUSH -0x1
0053E503  6A FE                     PUSH -0x2
0053E505  51                        PUSH ECX
0053E506  52                        PUSH EDX
0053E507  E8 34 1C 17 00            CALL 0x006b0140
0053E50C  8B 8E 89 01 00 00         MOV ECX,dword ptr [ESI + 0x189]
0053E512  50                        PUSH EAX
0053E513  E8 A8 34 1D 00            CALL 0x007119c0
0053E518  6A 01                     PUSH 0x1
0053E51A  8B 3E                     MOV EDI,dword ptr [ESI]
0053E51C  6A 00                     PUSH 0x0
0053E51E  6A 00                     PUSH 0x0
0053E520  6A 00                     PUSH 0x0
0053E522  6A 00                     PUSH 0x0
0053E524  68 00 C0 00 00            PUSH 0xc000
0053E529  68 FF BF 00 00            PUSH 0xbfff
0053E52E  6A 00                     PUSH 0x0
0053E530  68 94 38 7C 00            PUSH 0x7c3894
0053E535  E8 42 72 EC FF            CALL 0x0040577c
0053E53A  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
0053E53D  83 C4 08                  ADD ESP,0x8
0053E540  50                        PUSH EAX
0053E541  8B 45 24                  MOV EAX,dword ptr [EBP + 0x24]
0053E544  6A 01                     PUSH 0x1
0053E546  6A 01                     PUSH 0x1
0053E548  6A 00                     PUSH 0x0
0053E54A  50                        PUSH EAX
0053E54B  51                        PUSH ECX
0053E54C  6A 01                     PUSH 0x1
0053E54E  6A 00                     PUSH 0x0
0053E550  8B CE                     MOV ECX,ESI
0053E552  FF 57 04                  CALL dword ptr [EDI + 0x4]
0053E555  8B 55 B8                  MOV EDX,dword ptr [EBP + -0x48]
0053E558  89 86 7C 01 00 00         MOV dword ptr [ESI + 0x17c],EAX
0053E55E  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0053E564  5F                        POP EDI
0053E565  5E                        POP ESI
0053E566  5B                        POP EBX
0053E567  8B E5                     MOV ESP,EBP
0053E569  5D                        POP EBP
0053E56A  C2 20 00                  RET 0x20
LAB_0053e56d:
0053E56D  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
0053E570  68 2C 79 7C 00            PUSH 0x7c792c
0053E575  68 CC 4C 7A 00            PUSH 0x7a4ccc
0053E57A  56                        PUSH ESI
0053E57B  57                        PUSH EDI
0053E57C  68 EB 00 00 00            PUSH 0xeb
0053E581  68 70 78 7C 00            PUSH 0x7c7870
0053E586  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0053E58B  E8 40 EF 16 00            CALL 0x006ad4d0
0053E590  83 C4 18                  ADD ESP,0x18
0053E593  85 C0                     TEST EAX,EAX
0053E595  74 01                     JZ 0x0053e598
0053E597  CC                        INT3
LAB_0053e598:
0053E598  68 EB 00 00 00            PUSH 0xeb
0053E59D  68 70 78 7C 00            PUSH 0x7c7870
0053E5A2  57                        PUSH EDI
0053E5A3  56                        PUSH ESI
0053E5A4  E8 97 78 16 00            CALL 0x006a5e40
0053E5A9  5F                        POP EDI
0053E5AA  5E                        POP ESI
0053E5AB  5B                        POP EBX
0053E5AC  8B E5                     MOV ESP,EBP
0053E5AE  5D                        POP EBP
0053E5AF  C2 20 00                  RET 0x20
