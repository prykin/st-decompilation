FUN_006bc260:
006BC260  55                        PUSH EBP
006BC261  8B EC                     MOV EBP,ESP
006BC263  83 EC 60                  SUB ESP,0x60
006BC266  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006BC269  56                        PUSH ESI
006BC26A  57                        PUSH EDI
006BC26B  6A 00                     PUSH 0x0
006BC26D  68 80 00 00 00            PUSH 0x80
006BC272  6A 03                     PUSH 0x3
006BC274  6A 00                     PUSH 0x0
006BC276  6A 00                     PUSH 0x0
006BC278  68 00 00 00 80            PUSH 0x80000000
006BC27D  50                        PUSH EAX
006BC27E  C7 45 F8 00 00 00 00      MOV dword ptr [EBP + -0x8],0x0
006BC285  BE 03 FF FF FF            MOV ESI,0xffffff03
006BC28A  FF 15 80 BC 85 00         CALL dword ptr [0x0085bc80]
006BC290  8B F8                     MOV EDI,EAX
006BC292  83 FF FF                  CMP EDI,-0x1
006BC295  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
006BC298  74 75                     JZ 0x006bc30f
006BC29A  8D 4D F4                  LEA ECX,[EBP + -0xc]
006BC29D  6A 00                     PUSH 0x0
006BC29F  51                        PUSH ECX
006BC2A0  8D 55 E4                  LEA EDX,[EBP + -0x1c]
006BC2A3  6A 0E                     PUSH 0xe
006BC2A5  52                        PUSH EDX
006BC2A6  57                        PUSH EDI
006BC2A7  FF 15 68 BC 85 00         CALL dword ptr [0x0085bc68]
006BC2AD  85 C0                     TEST EAX,EAX
006BC2AF  74 5E                     JZ 0x006bc30f
006BC2B1  83 7D F4 0E               CMP dword ptr [EBP + -0xc],0xe
006BC2B5  75 53                     JNZ 0x006bc30a
006BC2B7  66 81 7D E4 42 4D         CMP word ptr [EBP + -0x1c],0x4d42
006BC2BD  75 4B                     JNZ 0x006bc30a
006BC2BF  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
006BC2C4  8D 55 A4                  LEA EDX,[EBP + -0x5c]
006BC2C7  8D 4D A0                  LEA ECX,[EBP + -0x60]
006BC2CA  6A 00                     PUSH 0x0
006BC2CC  52                        PUSH EDX
006BC2CD  89 45 A0                  MOV dword ptr [EBP + -0x60],EAX
006BC2D0  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
006BC2D6  E8 15 15 07 00            CALL 0x0072d7f0
006BC2DB  83 C4 08                  ADD ESP,0x8
006BC2DE  85 C0                     TEST EAX,EAX
006BC2E0  75 18                     JNZ 0x006bc2fa
006BC2E2  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
006BC2E5  57                        PUSH EDI
006BC2E6  E8 D5 77 01 00            CALL 0x006d3ac0
006BC2EB  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
006BC2EE  8B 45 A0                  MOV EAX,dword ptr [EBP + -0x60]
006BC2F1  33 F6                     XOR ESI,ESI
006BC2F3  A3 F8 8D 85 00            MOV [0x00858df8],EAX
006BC2F8  EB 15                     JMP 0x006bc30f
LAB_006bc2fa:
006BC2FA  8B 4D A0                  MOV ECX,dword ptr [EBP + -0x60]
006BC2FD  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
006BC300  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
006BC306  8B F0                     MOV ESI,EAX
006BC308  EB 05                     JMP 0x006bc30f
LAB_006bc30a:
006BC30A  BE FB FF FF FF            MOV ESI,0xfffffffb
LAB_006bc30f:
006BC30F  81 FE 03 FF FF FF         CMP ESI,0xffffff03
006BC315  75 08                     JNZ 0x006bc31f
006BC317  FF 15 CC BB 85 00         CALL dword ptr [0x0085bbcc]
006BC31D  8B F0                     MOV ESI,EAX
LAB_006bc31f:
006BC31F  57                        PUSH EDI
006BC320  FF 15 C8 BB 85 00         CALL dword ptr [0x0085bbc8]
006BC326  85 F6                     TEST ESI,ESI
006BC328  74 1E                     JZ 0x006bc348
006BC32A  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
006BC330  6A 2C                     PUSH 0x2c
006BC332  68 74 DC 7E 00            PUSH 0x7edc74
006BC337  52                        PUSH EDX
006BC338  56                        PUSH ESI
006BC339  E8 02 9B FE FF            CALL 0x006a5e40
006BC33E  33 C0                     XOR EAX,EAX
006BC340  5F                        POP EDI
006BC341  5E                        POP ESI
006BC342  8B E5                     MOV ESP,EBP
006BC344  5D                        POP EBP
006BC345  C2 04 00                  RET 0x4
LAB_006bc348:
006BC348  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
006BC34B  5F                        POP EDI
006BC34C  5E                        POP ESI
006BC34D  8B E5                     MOV ESP,EBP
006BC34F  5D                        POP EBP
006BC350  C2 04 00                  RET 0x4
