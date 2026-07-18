FUN_00543600:
00543600  55                        PUSH EBP
00543601  8B EC                     MOV EBP,ESP
00543603  83 EC 4C                  SUB ESP,0x4c
00543606  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0054360B  56                        PUSH ESI
0054360C  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
0054360F  57                        PUSH EDI
00543610  8D 55 B8                  LEA EDX,[EBP + -0x48]
00543613  8D 4D B4                  LEA ECX,[EBP + -0x4c]
00543616  6A 00                     PUSH 0x0
00543618  52                        PUSH EDX
00543619  89 45 B4                  MOV dword ptr [EBP + -0x4c],EAX
0054361C  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00543622  E8 C9 A1 1E 00            CALL 0x0072d7f0
00543627  83 C4 08                  ADD ESP,0x8
0054362A  85 C0                     TEST EAX,EAX
0054362C  0F 85 45 01 00 00         JNZ 0x00543777
00543632  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
00543635  50                        PUSH EAX
00543636  50                        PUSH EAX
00543637  50                        PUSH EAX
00543638  6A 07                     PUSH 0x7
0054363A  50                        PUSH EAX
0054363B  A1 A8 75 80 00            MOV EAX,[0x008075a8]
00543640  8D 4E 18                  LEA ECX,[ESI + 0x18]
00543643  50                        PUSH EAX
00543644  E8 57 22 1D 00            CALL 0x007158a0
00543649  8B 0D 9C 75 80 00         MOV ECX,dword ptr [0x0080759c]
0054364F  6A 00                     PUSH 0x0
00543651  6A 00                     PUSH 0x0
00543653  6A 00                     PUSH 0x0
00543655  68 00 00 00 08            PUSH 0x8000000
0054365A  6A 00                     PUSH 0x0
0054365C  6A 00                     PUSH 0x0
0054365E  8D 96 AD 00 00 00         LEA EDX,[ESI + 0xad]
00543664  51                        PUSH ECX
00543665  52                        PUSH EDX
00543666  E8 65 52 17 00            CALL 0x006b88d0
0054366B  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0054366E  6A FF                     PUSH -0x1
00543670  6A FF                     PUSH -0x1
00543672  6A 00                     PUSH 0x0
00543674  6A 00                     PUSH 0x0
00543676  6A 32                     PUSH 0x32
00543678  68 D4 7D 7C 00            PUSH 0x7c7dd4
0054367D  50                        PUSH EAX
0054367E  8B CE                     MOV ECX,ESI
00543680  E8 EA 00 EC FF            CALL 0x0040376f
00543685  8B 0D 84 67 80 00         MOV ECX,dword ptr [0x00806784]
0054368B  6A 00                     PUSH 0x0
0054368D  6A 00                     PUSH 0x0
0054368F  6A 01                     PUSH 0x1
00543691  6A 00                     PUSH 0x0
00543693  6A FF                     PUSH -0x1
00543695  68 C8 7D 7C 00            PUSH 0x7c7dc8
0054369A  6A 0B                     PUSH 0xb
0054369C  51                        PUSH ECX
0054369D  E8 4E 64 1C 00            CALL 0x00709af0
005436A2  6A 00                     PUSH 0x0
005436A4  6A 00                     PUSH 0x0
005436A6  6A 01                     PUSH 0x1
005436A8  6A 00                     PUSH 0x0
005436AA  89 86 E3 04 00 00         MOV dword ptr [ESI + 0x4e3],EAX
005436B0  8B 15 84 67 80 00         MOV EDX,dword ptr [0x00806784]
005436B6  6A FF                     PUSH -0x1
005436B8  68 B8 7D 7C 00            PUSH 0x7c7db8
005436BD  6A 13                     PUSH 0x13
005436BF  52                        PUSH EDX
005436C0  E8 2B 64 1C 00            CALL 0x00709af0
005436C5  83 C4 40                  ADD ESP,0x40
005436C8  89 86 E7 04 00 00         MOV dword ptr [ESI + 0x4e7],EAX
005436CE  8B 0D 80 67 80 00         MOV ECX,dword ptr [0x00806780]
005436D4  6A 01                     PUSH 0x1
005436D6  6A 00                     PUSH 0x0
005436D8  68 A8 7D 7C 00            PUSH 0x7c7da8
005436DD  6A 01                     PUSH 0x1
005436DF  E8 FC E5 1A 00            CALL 0x006f1ce0
005436E4  8D 48 28                  LEA ECX,[EAX + 0x28]
005436E7  6A 01                     PUSH 0x1
005436E9  51                        PUSH ECX
005436EA  50                        PUSH EAX
005436EB  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
005436EE  E8 ED 18 17 00            CALL 0x006b4fe0
005436F3  50                        PUSH EAX
005436F4  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
005436F7  33 D2                     XOR EDX,EDX
005436F9  66 8B 50 0E               MOV DX,word ptr [EAX + 0xe]
005436FD  52                        PUSH EDX
005436FE  68 96 00 00 00            PUSH 0x96
00543703  68 20 03 00 00            PUSH 0x320
00543708  E8 B3 19 17 00            CALL 0x006b50c0
0054370D  8D 4D FC                  LEA ECX,[EBP + -0x4]
00543710  89 86 D2 04 00 00         MOV dword ptr [ESI + 0x4d2],EAX
00543716  51                        PUSH ECX
00543717  8B 0D 80 67 80 00         MOV ECX,dword ptr [0x00806780]
0054371D  E8 BE E9 1A 00            CALL 0x006f20e0
00543722  8B 96 D2 04 00 00         MOV EDX,dword ptr [ESI + 0x4d2]
00543728  8D BE D6 04 00 00         LEA EDI,[ESI + 0x4d6]
0054372E  A1 A8 75 80 00            MOV EAX,[0x008075a8]
00543733  52                        PUSH EDX
00543734  6A 00                     PUSH 0x0
00543736  6A 00                     PUSH 0x0
00543738  68 FF 47 40 00            PUSH 0x4047ff
0054373D  6A 01                     PUSH 0x1
0054373F  57                        PUSH EDI
00543740  50                        PUSH EAX
00543741  E8 EA EB 16 00            CALL 0x006b2330
00543746  8B 0F                     MOV ECX,dword ptr [EDI]
00543748  8B 15 A8 75 80 00         MOV EDX,dword ptr [0x008075a8]
0054374E  6A 01                     PUSH 0x1
00543750  51                        PUSH ECX
00543751  52                        PUSH EDX
00543752  E8 69 F1 16 00            CALL 0x006b28c0
00543757  8B 07                     MOV EAX,dword ptr [EDI]
00543759  8B 0D A8 75 80 00         MOV ECX,dword ptr [0x008075a8]
0054375F  50                        PUSH EAX
00543760  51                        PUSH ECX
00543761  E8 8A 03 17 00            CALL 0x006b3af0
00543766  8B 55 B4                  MOV EDX,dword ptr [EBP + -0x4c]
00543769  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0054376F  5F                        POP EDI
00543770  5E                        POP ESI
00543771  8B E5                     MOV ESP,EBP
00543773  5D                        POP EBP
00543774  C2 04 00                  RET 0x4
LAB_00543777:
00543777  8B 4D B4                  MOV ECX,dword ptr [EBP + -0x4c]
0054377A  68 88 7D 7C 00            PUSH 0x7c7d88
0054377F  68 CC 4C 7A 00            PUSH 0x7a4ccc
00543784  50                        PUSH EAX
00543785  6A 00                     PUSH 0x0
00543787  6A 65                     PUSH 0x65
00543789  68 60 7D 7C 00            PUSH 0x7c7d60
0054378E  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00543794  E8 37 9D 16 00            CALL 0x006ad4d0
00543799  83 C4 18                  ADD ESP,0x18
0054379C  85 C0                     TEST EAX,EAX
0054379E  74 01                     JZ 0x005437a1
005437A0  CC                        INT3
LAB_005437a1:
005437A1  6A 66                     PUSH 0x66
005437A3  68 60 7D 7C 00            PUSH 0x7c7d60
005437A8  6A 00                     PUSH 0x0
005437AA  6A CC                     PUSH -0x34
005437AC  E8 8F 26 16 00            CALL 0x006a5e40
005437B1  5F                        POP EDI
005437B2  5E                        POP ESI
005437B3  8B E5                     MOV ESP,EBP
005437B5  5D                        POP EBP
005437B6  C2 04 00                  RET 0x4
