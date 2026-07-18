FUN_006c72f0:
006C72F0  55                        PUSH EBP
006C72F1  8B EC                     MOV EBP,ESP
006C72F3  6A FF                     PUSH -0x1
006C72F5  68 08 DA 79 00            PUSH 0x79da08
006C72FA  68 64 D9 72 00            PUSH 0x72d964
006C72FF  64 A1 00 00 00 00         MOV EAX,FS:[0x0]
006C7305  50                        PUSH EAX
006C7306  64 89 25 00 00 00 00      MOV dword ptr FS:[0x0],ESP
006C730D  83 EC 64                  SUB ESP,0x64
006C7310  53                        PUSH EBX
006C7311  56                        PUSH ESI
006C7312  57                        PUSH EDI
006C7313  89 65 E8                  MOV dword ptr [EBP + -0x18],ESP
006C7316  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
006C7319  8B 46 62                  MOV EAX,dword ptr [ESI + 0x62]
006C731C  03 06                     ADD EAX,dword ptr [ESI]
006C731E  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
006C7321  8B 5E 6A                  MOV EBX,dword ptr [ESI + 0x6a]
006C7324  89 5D DC                  MOV dword ptr [EBP + -0x24],EBX
006C7327  8B 56 3A                  MOV EDX,dword ptr [ESI + 0x3a]
006C732A  8B 4A 04                  MOV ECX,dword ptr [EDX + 0x4]
006C732D  8D 3C 03                  LEA EDI,[EBX + EAX*0x1]
006C7330  3B F9                     CMP EDI,ECX
006C7332  7E 07                     JLE 0x006c733b
006C7334  2B C8                     SUB ECX,EAX
006C7336  8B D9                     MOV EBX,ECX
006C7338  89 5D DC                  MOV dword ptr [EBP + -0x24],EBX
LAB_006c733b:
006C733B  8B 4E 66                  MOV ECX,dword ptr [ESI + 0x66]
006C733E  03 4E 04                  ADD ECX,dword ptr [ESI + 0x4]
006C7341  89 4D E0                  MOV dword ptr [EBP + -0x20],ECX
006C7344  8B 7E 6E                  MOV EDI,dword ptr [ESI + 0x6e]
006C7347  89 7D D8                  MOV dword ptr [EBP + -0x28],EDI
006C734A  8B 42 08                  MOV EAX,dword ptr [EDX + 0x8]
006C734D  99                        CDQ
006C734E  33 C2                     XOR EAX,EDX
006C7350  2B C2                     SUB EAX,EDX
006C7352  8D 14 0F                  LEA EDX,[EDI + ECX*0x1]
006C7355  3B D0                     CMP EDX,EAX
006C7357  7E 07                     JLE 0x006c7360
006C7359  2B C1                     SUB EAX,ECX
006C735B  8B F8                     MOV EDI,EAX
006C735D  89 7D D8                  MOV dword ptr [EBP + -0x28],EDI
LAB_006c7360:
006C7360  8D 46 72                  LEA EAX,[ESI + 0x72]
006C7363  50                        PUSH EAX
006C7364  E8 F7 3C FE FF            CALL 0x006ab060
006C7369  3B 5E 6A                  CMP EBX,dword ptr [ESI + 0x6a]
006C736C  0F 85 AB 00 00 00         JNZ 0x006c741d
006C7372  3B 7E 6E                  CMP EDI,dword ptr [ESI + 0x6e]
006C7375  0F 85 A2 00 00 00         JNZ 0x006c741d
006C737B  8B 0D F8 8D 85 00         MOV ECX,dword ptr [0x00858df8]
006C7381  89 4D 94                  MOV dword ptr [EBP + -0x6c],ECX
006C7384  8D 55 94                  LEA EDX,[EBP + -0x6c]
006C7387  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
006C738D  8D 45 98                  LEA EAX,[EBP + -0x68]
006C7390  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
006C7393  51                        PUSH ECX
006C7394  68 21 DA 72 00            PUSH 0x72da21
006C7399  6A 02                     PUSH 0x2
006C739B  50                        PUSH EAX
006C739C  E8 4F 64 06 00            CALL 0x0072d7f0
006C73A1  83 C4 10                  ADD ESP,0x10
006C73A4  89 65 E8                  MOV dword ptr [EBP + -0x18],ESP
006C73A7  33 C9                     XOR ECX,ECX
006C73A9  3B C1                     CMP EAX,ECX
006C73AB  75 62                     JNZ 0x006c740f
006C73AD  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
006C73B0  8B 55 D8                  MOV EDX,dword ptr [EBP + -0x28]
006C73B3  52                        PUSH EDX
006C73B4  8B 45 DC                  MOV EAX,dword ptr [EBP + -0x24]
006C73B7  50                        PUSH EAX
006C73B8  8B 55 E0                  MOV EDX,dword ptr [EBP + -0x20]
006C73BB  52                        PUSH EDX
006C73BC  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
006C73BF  50                        PUSH EAX
006C73C0  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
006C73C3  8B 56 3E                  MOV EDX,dword ptr [ESI + 0x3e]
006C73C6  52                        PUSH EDX
006C73C7  8B 46 3A                  MOV EAX,dword ptr [ESI + 0x3a]
006C73CA  50                        PUSH EAX
006C73CB  51                        PUSH ECX
006C73CC  51                        PUSH ECX
006C73CD  51                        PUSH ECX
006C73CE  51                        PUSH ECX
006C73CF  E8 1C E2 FE FF            CALL 0x006b55f0
006C73D4  89 46 72                  MOV dword ptr [ESI + 0x72],EAX
006C73D7  EB 13                     JMP 0x006c73ec
LAB_006c73ec:
006C73EC  C7 45 FC FF FF FF FF      MOV dword ptr [EBP + -0x4],0xffffffff
006C73F3  8B 55 94                  MOV EDX,dword ptr [EBP + -0x6c]
006C73F6  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
006C73FC  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
006C73FF  64 89 0D 00 00 00 00      MOV dword ptr FS:[0x0],ECX
006C7406  5F                        POP EDI
006C7407  5E                        POP ESI
006C7408  5B                        POP EBX
006C7409  8B E5                     MOV ESP,EBP
006C740B  5D                        POP EBP
006C740C  C2 04 00                  RET 0x4
LAB_006c740f:
006C740F  8B 45 94                  MOV EAX,dword ptr [EBP + -0x6c]
006C7412  A3 F8 8D 85 00            MOV [0x00858df8],EAX
006C7417  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006C741A  89 4A 72                  MOV dword ptr [EDX + 0x72],ECX
LAB_006c741d:
006C741D  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
006C7420  64 89 0D 00 00 00 00      MOV dword ptr FS:[0x0],ECX
006C7427  5F                        POP EDI
006C7428  5E                        POP ESI
006C7429  5B                        POP EBX
006C742A  8B E5                     MOV ESP,EBP
006C742C  5D                        POP EBP
006C742D  C2 04 00                  RET 0x4
