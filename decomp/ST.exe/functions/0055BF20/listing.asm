FUN_0055bf20:
0055BF20  55                        PUSH EBP
0055BF21  8B EC                     MOV EBP,ESP
0055BF23  81 EC 90 00 00 00         SUB ESP,0x90
0055BF29  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0055BF2C  56                        PUSH ESI
0055BF2D  89 41 3C                  MOV dword ptr [ECX + 0x3c],EAX
0055BF30  57                        PUSH EDI
0055BF31  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
0055BF34  8B 0D F8 8D 85 00         MOV ECX,dword ptr [0x00858df8]
0055BF3A  8D 45 B8                  LEA EAX,[EBP + -0x48]
0055BF3D  8D 55 B4                  LEA EDX,[EBP + -0x4c]
0055BF40  6A 00                     PUSH 0x0
0055BF42  50                        PUSH EAX
0055BF43  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
0055BF4A  89 4D B4                  MOV dword ptr [EBP + -0x4c],ECX
0055BF4D  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0055BF53  E8 98 18 1D 00            CALL 0x0072d7f0
0055BF58  83 C4 08                  ADD ESP,0x8
0055BF5B  85 C0                     TEST EAX,EAX
0055BF5D  75 1E                     JNZ 0x0055bf7d
0055BF5F  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
0055BF62  8B 3D 44 C0 85 00         MOV EDI,dword ptr [0x0085c044]
0055BF68  8B CE                     MOV ECX,ESI
0055BF6A  FF D7                     CALL EDI
0055BF6C  85 C0                     TEST EAX,EAX
0055BF6E  74 0D                     JZ 0x0055bf7d
0055BF70  8B CE                     MOV ECX,ESI
0055BF72  FF D7                     CALL EDI
0055BF74  50                        PUSH EAX
0055BF75  E8 E6 02 16 00            CALL 0x006bc260
0055BF7A  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
LAB_0055bf7d:
0055BF7D  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0055BF80  8B 45 B4                  MOV EAX,dword ptr [EBP + -0x4c]
0055BF83  85 C9                     TEST ECX,ECX
0055BF85  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0055BF8A  74 7C                     JZ 0x0055c008
0055BF8C  8D 95 74 FF FF FF         LEA EDX,[EBP + 0xffffff74]
0055BF92  8D 8D 70 FF FF FF         LEA ECX,[EBP + 0xffffff70]
0055BF98  6A 00                     PUSH 0x0
0055BF9A  52                        PUSH EDX
0055BF9B  89 85 70 FF FF FF         MOV dword ptr [EBP + 0xffffff70],EAX
0055BFA1  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0055BFA7  E8 44 18 1D 00            CALL 0x0072d7f0
0055BFAC  83 C4 08                  ADD ESP,0x8
0055BFAF  85 C0                     TEST EAX,EAX
0055BFB1  75 41                     JNZ 0x0055bff4
0055BFB3  8B 7D F8                  MOV EDI,dword ptr [EBP + -0x8]
0055BFB6  8B 47 40                  MOV EAX,dword ptr [EDI + 0x40]
0055BFB9  8D 77 40                  LEA ESI,[EDI + 0x40]
0055BFBC  85 C0                     TEST EAX,EAX
0055BFBE  74 06                     JZ 0x0055bfc6
0055BFC0  56                        PUSH ESI
0055BFC1  E8 9A F0 14 00            CALL 0x006ab060
LAB_0055bfc6:
0055BFC6  8B 47 3C                  MOV EAX,dword ptr [EDI + 0x3c]
0055BFC9  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0055BFCC  50                        PUSH EAX
0055BFCD  6A 00                     PUSH 0x0
0055BFCF  51                        PUSH ECX
0055BFD0  E8 CB FF 15 00            CALL 0x006bbfa0
0055BFD5  8B 95 70 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff70]
0055BFDB  8D 4D FC                  LEA ECX,[EBP + -0x4]
0055BFDE  89 06                     MOV dword ptr [ESI],EAX
0055BFE0  51                        PUSH ECX
0055BFE1  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0055BFE7  E8 74 F0 14 00            CALL 0x006ab060
0055BFEC  5F                        POP EDI
0055BFED  5E                        POP ESI
0055BFEE  8B E5                     MOV ESP,EBP
0055BFF0  5D                        POP EBP
0055BFF1  C2 04 00                  RET 0x4
LAB_0055bff4:
0055BFF4  8B 85 70 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff70]
0055BFFA  8D 4D FC                  LEA ECX,[EBP + -0x4]
0055BFFD  51                        PUSH ECX
0055BFFE  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0055C003  E8 58 F0 14 00            CALL 0x006ab060
LAB_0055c008:
0055C008  5F                        POP EDI
0055C009  5E                        POP ESI
0055C00A  8B E5                     MOV ESP,EBP
0055C00C  5D                        POP EBP
0055C00D  C2 04 00                  RET 0x4
