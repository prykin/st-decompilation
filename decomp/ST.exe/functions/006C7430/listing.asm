FUN_006c7430:
006C7430  55                        PUSH EBP
006C7431  8B EC                     MOV EBP,ESP
006C7433  6A FF                     PUSH -0x1
006C7435  68 18 DA 79 00            PUSH 0x79da18
006C743A  68 64 D9 72 00            PUSH 0x72d964
006C743F  64 A1 00 00 00 00         MOV EAX,FS:[0x0]
006C7445  50                        PUSH EAX
006C7446  64 89 25 00 00 00 00      MOV dword ptr FS:[0x0],ESP
006C744D  83 EC 64                  SUB ESP,0x64
006C7450  53                        PUSH EBX
006C7451  56                        PUSH ESI
006C7452  57                        PUSH EDI
006C7453  89 65 E8                  MOV dword ptr [EBP + -0x18],ESP
006C7456  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006C7459  8B 48 62                  MOV ECX,dword ptr [EAX + 0x62]
006C745C  03 08                     ADD ECX,dword ptr [EAX]
006C745E  89 4D E4                  MOV dword ptr [EBP + -0x1c],ECX
006C7461  8B 78 6A                  MOV EDI,dword ptr [EAX + 0x6a]
006C7464  89 7D DC                  MOV dword ptr [EBP + -0x24],EDI
006C7467  8B 70 3A                  MOV ESI,dword ptr [EAX + 0x3a]
006C746A  8B 56 04                  MOV EDX,dword ptr [ESI + 0x4]
006C746D  03 F9                     ADD EDI,ECX
006C746F  3B FA                     CMP EDI,EDX
006C7471  7E 05                     JLE 0x006c7478
006C7473  2B D1                     SUB EDX,ECX
006C7475  89 55 DC                  MOV dword ptr [EBP + -0x24],EDX
LAB_006c7478:
006C7478  8B 48 66                  MOV ECX,dword ptr [EAX + 0x66]
006C747B  03 48 04                  ADD ECX,dword ptr [EAX + 0x4]
006C747E  89 4D E0                  MOV dword ptr [EBP + -0x20],ECX
006C7481  8B 78 6E                  MOV EDI,dword ptr [EAX + 0x6e]
006C7484  89 7D D8                  MOV dword ptr [EBP + -0x28],EDI
006C7487  8B 46 08                  MOV EAX,dword ptr [ESI + 0x8]
006C748A  99                        CDQ
006C748B  33 C2                     XOR EAX,EDX
006C748D  2B C2                     SUB EAX,EDX
006C748F  03 F9                     ADD EDI,ECX
006C7491  3B F8                     CMP EDI,EAX
006C7493  7E 05                     JLE 0x006c749a
006C7495  2B C1                     SUB EAX,ECX
006C7497  89 45 D8                  MOV dword ptr [EBP + -0x28],EAX
LAB_006c749a:
006C749A  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
006C749F  89 45 94                  MOV dword ptr [EBP + -0x6c],EAX
006C74A2  8D 4D 94                  LEA ECX,[EBP + -0x6c]
006C74A5  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
006C74AB  8D 55 98                  LEA EDX,[EBP + -0x68]
006C74AE  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006C74B1  50                        PUSH EAX
006C74B2  68 21 DA 72 00            PUSH 0x72da21
006C74B7  6A 02                     PUSH 0x2
006C74B9  52                        PUSH EDX
006C74BA  E8 31 63 06 00            CALL 0x0072d7f0
006C74BF  83 C4 10                  ADD ESP,0x10
006C74C2  89 65 E8                  MOV dword ptr [EBP + -0x18],ESP
006C74C5  85 C0                     TEST EAX,EAX
006C74C7  0F 85 84 00 00 00         JNZ 0x006c7551
006C74CD  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
006C74D0  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006C74D3  8B 48 72                  MOV ECX,dword ptr [EAX + 0x72]
006C74D6  85 C9                     TEST ECX,ECX
006C74D8  74 26                     JZ 0x006c7500
006C74DA  8B 55 D8                  MOV EDX,dword ptr [EBP + -0x28]
006C74DD  52                        PUSH EDX
006C74DE  8B 55 DC                  MOV EDX,dword ptr [EBP + -0x24]
006C74E1  52                        PUSH EDX
006C74E2  6A 00                     PUSH 0x0
006C74E4  6A 00                     PUSH 0x0
006C74E6  6A 00                     PUSH 0x0
006C74E8  51                        PUSH ECX
006C74E9  8B 4D E0                  MOV ECX,dword ptr [EBP + -0x20]
006C74EC  51                        PUSH ECX
006C74ED  8B 55 E4                  MOV EDX,dword ptr [EBP + -0x1c]
006C74F0  52                        PUSH EDX
006C74F1  8B 48 3E                  MOV ECX,dword ptr [EAX + 0x3e]
006C74F4  51                        PUSH ECX
006C74F5  8B 50 3A                  MOV EDX,dword ptr [EAX + 0x3a]
006C74F8  52                        PUSH EDX
006C74F9  E8 F2 E0 FE FF            CALL 0x006b55f0
006C74FE  EB 2E                     JMP 0x006c752e
LAB_006c7500:
006C7500  33 C9                     XOR ECX,ECX
006C7502  8A 48 11                  MOV CL,byte ptr [EAX + 0x11]
006C7505  51                        PUSH ECX
006C7506  8B 55 D8                  MOV EDX,dword ptr [EBP + -0x28]
006C7509  52                        PUSH EDX
006C750A  8B 4D DC                  MOV ECX,dword ptr [EBP + -0x24]
006C750D  51                        PUSH ECX
006C750E  8B 55 E0                  MOV EDX,dword ptr [EBP + -0x20]
006C7511  52                        PUSH EDX
006C7512  8B 4D E4                  MOV ECX,dword ptr [EBP + -0x1c]
006C7515  51                        PUSH ECX
006C7516  8B 50 3E                  MOV EDX,dword ptr [EAX + 0x3e]
006C7519  52                        PUSH EDX
006C751A  8B 40 3A                  MOV EAX,dword ptr [EAX + 0x3a]
006C751D  50                        PUSH EAX
006C751E  E8 4D CC FE FF            CALL 0x006b4170
006C7523  EB 09                     JMP 0x006c752e
LAB_006c752e:
006C752E  C7 45 FC FF FF FF FF      MOV dword ptr [EBP + -0x4],0xffffffff
006C7535  8B 4D 94                  MOV ECX,dword ptr [EBP + -0x6c]
006C7538  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
006C753E  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
006C7541  64 89 0D 00 00 00 00      MOV dword ptr FS:[0x0],ECX
006C7548  5F                        POP EDI
006C7549  5E                        POP ESI
006C754A  5B                        POP EBX
006C754B  8B E5                     MOV ESP,EBP
006C754D  5D                        POP EBP
006C754E  C2 04 00                  RET 0x4
LAB_006c7551:
006C7551  8B 55 94                  MOV EDX,dword ptr [EBP + -0x6c]
006C7554  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
006C755A  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
006C755D  64 89 0D 00 00 00 00      MOV dword ptr FS:[0x0],ECX
006C7564  5F                        POP EDI
006C7565  5E                        POP ESI
006C7566  5B                        POP EBX
006C7567  8B E5                     MOV ESP,EBP
006C7569  5D                        POP EBP
006C756A  C2 04 00                  RET 0x4
