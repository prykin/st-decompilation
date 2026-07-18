FUN_0052eb50:
0052EB50  55                        PUSH EBP
0052EB51  8B EC                     MOV EBP,ESP
0052EB53  81 EC 28 04 00 00         SUB ESP,0x428
0052EB59  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0052EB5E  53                        PUSH EBX
0052EB5F  56                        PUSH ESI
0052EB60  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
0052EB63  57                        PUSH EDI
0052EB64  8D 55 B4                  LEA EDX,[EBP + -0x4c]
0052EB67  8D 4D B0                  LEA ECX,[EBP + -0x50]
0052EB6A  6A 00                     PUSH 0x0
0052EB6C  52                        PUSH EDX
0052EB6D  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
0052EB74  89 45 B0                  MOV dword ptr [EBP + -0x50],EAX
0052EB77  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0052EB7D  E8 6E EC 1F 00            CALL 0x0072d7f0
0052EB82  8B F0                     MOV ESI,EAX
0052EB84  83 C4 08                  ADD ESP,0x8
0052EB87  85 F6                     TEST ESI,ESI
0052EB89  0F 85 7E 01 00 00         JNZ 0x0052ed0d
0052EB8F  8B 75 24                  MOV ESI,dword ptr [EBP + 0x24]
0052EB92  8B 55 20                  MOV EDX,dword ptr [EBP + 0x20]
0052EB95  8B 5D F4                  MOV EBX,dword ptr [EBP + -0xc]
0052EB98  B9 F6 00 00 00            MOV ECX,0xf6
0052EB9D  8D BD D8 FB FF FF         LEA EDI,[EBP + 0xfffffbd8]
0052EBA3  F3 AB                     STOSD.REP ES:EDI
0052EBA5  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
0052EBA8  BF 01 00 00 00            MOV EDI,0x1
0052EBAD  57                        PUSH EDI
0052EBAE  6A 00                     PUSH 0x0
0052EBB0  85 F6                     TEST ESI,ESI
0052EBB2  6A 00                     PUSH 0x0
0052EBB4  89 4D 98                  MOV dword ptr [EBP + -0x68],ECX
0052EBB7  8B 4B 08                  MOV ECX,dword ptr [EBX + 0x8]
0052EBBA  89 55 9C                  MOV dword ptr [EBP + -0x64],EDX
0052EBBD  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
0052EBC0  57                        PUSH EDI
0052EBC1  0F 95 C0                  SETNZ AL
0052EBC4  BE 02 00 00 00            MOV ESI,0x2
0052EBC9  6A 00                     PUSH 0x0
0052EBCB  68 8C 71 7C 00            PUSH 0x7c718c
0052EBD0  89 85 D8 FB FF FF         MOV dword ptr [EBP + 0xfffffbd8],EAX
0052EBD6  89 4D 80                  MOV dword ptr [EBP + -0x80],ECX
0052EBD9  89 75 84                  MOV dword ptr [EBP + -0x7c],ESI
0052EBDC  89 55 88                  MOV dword ptr [EBP + -0x78],EDX
0052EBDF  89 B5 5C FD FF FF         MOV dword ptr [EBP + 0xfffffd5c],ESI
0052EBE5  89 B5 DC FB FF FF         MOV dword ptr [EBP + 0xfffffbdc],ESI
0052EBEB  89 BD EC FC FF FF         MOV dword ptr [EBP + 0xfffffcec],EDI
0052EBF1  89 BD E8 FC FF FF         MOV dword ptr [EBP + 0xfffffce8],EDI
0052EBF7  89 85 E0 FB FF FF         MOV dword ptr [EBP + 0xfffffbe0],EAX
0052EBFD  89 B5 E4 FB FF FF         MOV dword ptr [EBP + 0xfffffbe4],ESI
0052EC03  E8 74 6B ED FF            CALL 0x0040577c
0052EC08  83 C4 08                  ADD ESP,0x8
0052EC0B  50                        PUSH EAX
0052EC0C  E8 EF 3F 1C 00            CALL 0x006f2c00
0052EC11  8B 0D 90 67 80 00         MOV ECX,dword ptr [0x00806790]
0052EC17  83 C4 0C                  ADD ESP,0xc
0052EC1A  50                        PUSH EAX
0052EC1B  57                        PUSH EDI
0052EC1C  E8 BF 30 1C 00            CALL 0x006f1ce0
0052EC21  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0052EC24  8B 48 04                  MOV ECX,dword ptr [EAX + 0x4]
0052EC27  89 8D F0 FB FF FF         MOV dword ptr [EBP + 0xfffffbf0],ECX
0052EC2D  8B 50 08                  MOV EDX,dword ptr [EAX + 0x8]
0052EC30  8B 0D 90 67 80 00         MOV ECX,dword ptr [0x00806790]
0052EC36  8D 45 F8                  LEA EAX,[EBP + -0x8]
0052EC39  50                        PUSH EAX
0052EC3A  89 95 F4 FB FF FF         MOV dword ptr [EBP + 0xfffffbf4],EDX
0052EC40  E8 9B 34 1C 00            CALL 0x006f20e0
0052EC45  8B 43 3C                  MOV EAX,dword ptr [EBX + 0x3c]
0052EC48  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
0052EC4B  8D 14 08                  LEA EDX,[EAX + ECX*0x1]
0052EC4E  89 95 E8 FB FF FF         MOV dword ptr [EBP + 0xfffffbe8],EDX
0052EC54  8B 53 5C                  MOV EDX,dword ptr [EBX + 0x5c]
0052EC57  85 D2                     TEST EDX,EDX
0052EC59  75 07                     JNZ 0x0052ec62
0052EC5B  8B 4B 48                  MOV ECX,dword ptr [EBX + 0x48]
0052EC5E  F7 D9                     NEG ECX
0052EC60  EB 03                     JMP 0x0052ec65
LAB_0052ec62:
0052EC62  8B 4B 44                  MOV ECX,dword ptr [EBX + 0x44]
LAB_0052ec65:
0052EC65  8B 7D 14                  MOV EDI,dword ptr [EBP + 0x14]
0052EC68  89 B5 44 FC FF FF         MOV dword ptr [EBP + 0xfffffc44],ESI
0052EC6E  03 CF                     ADD ECX,EDI
0052EC70  8D B5 E0 FB FF FF         LEA ESI,[EBP + 0xfffffbe0]
0052EC76  89 8D EC FB FF FF         MOV dword ptr [EBP + 0xfffffbec],ECX
0052EC7C  8B 4B 08                  MOV ECX,dword ptr [EBX + 0x8]
0052EC7F  89 8D 40 FC FF FF         MOV dword ptr [EBP + 0xfffffc40],ECX
0052EC85  B9 5F 00 00 00            MOV ECX,0x5f
0052EC8A  8D BD 60 FD FF FF         LEA EDI,[EBP + 0xfffffd60]
0052EC90  C7 85 48 FC FF FF 05 C0 00 00  MOV dword ptr [EBP + 0xfffffc48],0xc005
0052EC9A  C7 85 F0 FC FF FF F4 01 00 00  MOV dword ptr [EBP + 0xfffffcf0],0x1f4
0052ECA4  C7 85 F4 FC FF FF 32 00 00 00  MOV dword ptr [EBP + 0xfffffcf4],0x32
0052ECAE  F3 A5                     MOVSD.REP ES:EDI,ESI
0052ECB0  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0052ECB3  03 C1                     ADD EAX,ECX
0052ECB5  85 D2                     TEST EDX,EDX
0052ECB7  89 85 68 FD FF FF         MOV dword ptr [EBP + 0xfffffd68],EAX
0052ECBD  75 07                     JNZ 0x0052ecc6
0052ECBF  8B 43 48                  MOV EAX,dword ptr [EBX + 0x48]
0052ECC2  F7 D8                     NEG EAX
0052ECC4  EB 03                     JMP 0x0052ecc9
LAB_0052ecc6:
0052ECC6  8B 43 44                  MOV EAX,dword ptr [EBX + 0x44]
LAB_0052ecc9:
0052ECC9  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0052ECCC  8B 5B 0C                  MOV EBX,dword ptr [EBX + 0xc]
0052ECCF  8D 8D D8 FB FF FF         LEA ECX,[EBP + 0xfffffbd8]
0052ECD5  03 C2                     ADD EAX,EDX
0052ECD7  6A 00                     PUSH 0x0
0052ECD9  51                        PUSH ECX
0052ECDA  8D 55 FC                  LEA EDX,[EBP + -0x4]
0052ECDD  89 85 6C FD FF FF         MOV dword ptr [EBP + 0xfffffd6c],EAX
0052ECE3  C7 85 C8 FD FF FF 06 C0 00 00  MOV dword ptr [EBP + 0xfffffdc8],0xc006
0052ECED  8B 03                     MOV EAX,dword ptr [EBX]
0052ECEF  6A 00                     PUSH 0x0
0052ECF1  52                        PUSH EDX
0052ECF2  6A 04                     PUSH 0x4
0052ECF4  8B CB                     MOV ECX,EBX
0052ECF6  FF 50 08                  CALL dword ptr [EAX + 0x8]
0052ECF9  8B 45 B0                  MOV EAX,dword ptr [EBP + -0x50]
0052ECFC  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0052ED01  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0052ED04  5F                        POP EDI
0052ED05  5E                        POP ESI
0052ED06  5B                        POP EBX
0052ED07  8B E5                     MOV ESP,EBP
0052ED09  5D                        POP EBP
0052ED0A  C2 20 00                  RET 0x20
LAB_0052ed0d:
0052ED0D  8B 4D B0                  MOV ECX,dword ptr [EBP + -0x50]
0052ED10  68 6C 71 7C 00            PUSH 0x7c716c
0052ED15  68 CC 4C 7A 00            PUSH 0x7a4ccc
0052ED1A  56                        PUSH ESI
0052ED1B  6A 00                     PUSH 0x0
0052ED1D  68 A0 00 00 00            PUSH 0xa0
0052ED22  68 A0 70 7C 00            PUSH 0x7c70a0
0052ED27  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0052ED2D  E8 9E E7 17 00            CALL 0x006ad4d0
0052ED32  83 C4 18                  ADD ESP,0x18
0052ED35  85 C0                     TEST EAX,EAX
0052ED37  74 01                     JZ 0x0052ed3a
0052ED39  CC                        INT3
LAB_0052ed3a:
0052ED3A  68 A0 00 00 00            PUSH 0xa0
0052ED3F  68 A0 70 7C 00            PUSH 0x7c70a0
0052ED44  6A 00                     PUSH 0x0
0052ED46  56                        PUSH ESI
0052ED47  E8 F4 70 17 00            CALL 0x006a5e40
0052ED4C  5F                        POP EDI
0052ED4D  5E                        POP ESI
0052ED4E  83 C8 FF                  OR EAX,0xffffffff
0052ED51  5B                        POP EBX
0052ED52  8B E5                     MOV ESP,EBP
0052ED54  5D                        POP EBP
0052ED55  C2 20 00                  RET 0x20
