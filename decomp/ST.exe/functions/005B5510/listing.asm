MMObjTy::CreateSprBut:
005B5510  55                        PUSH EBP
005B5511  8B EC                     MOV EBP,ESP
005B5513  81 EC C8 01 00 00         SUB ESP,0x1c8
005B5519  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
005B551E  56                        PUSH ESI
005B551F  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
005B5522  57                        PUSH EDI
005B5523  8D 55 B8                  LEA EDX,[EBP + -0x48]
005B5526  8D 4D B4                  LEA ECX,[EBP + -0x4c]
005B5529  6A 00                     PUSH 0x0
005B552B  52                        PUSH EDX
005B552C  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
005B5533  89 45 B4                  MOV dword ptr [EBP + -0x4c],EAX
005B5536  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005B553C  E8 AF 82 17 00            CALL 0x0072d7f0
005B5541  8B F0                     MOV ESI,EAX
005B5543  83 C4 08                  ADD ESP,0x8
005B5546  85 F6                     TEST ESI,ESI
005B5548  0F 85 A4 00 00 00         JNZ 0x005b55f2
005B554E  B9 5F 00 00 00            MOV ECX,0x5f
005B5553  8D BD 38 FE FF FF         LEA EDI,[EBP + 0xfffffe38]
005B5559  F3 AB                     STOSD.REP ES:EDI
005B555B  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
005B555E  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
005B5561  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
005B5564  8B 75 20                  MOV ESI,dword ptr [EBP + 0x20]
005B5567  89 8D 38 FE FF FF         MOV dword ptr [EBP + 0xfffffe38],ECX
005B556D  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
005B5570  89 85 3C FE FF FF         MOV dword ptr [EBP + 0xfffffe3c],EAX
005B5576  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
005B5579  89 8D 48 FE FF FF         MOV dword ptr [EBP + 0xfffffe48],ECX
005B557F  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
005B5582  89 95 40 FE FF FF         MOV dword ptr [EBP + 0xfffffe40],EDX
005B5588  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
005B558B  89 85 44 FE FF FF         MOV dword ptr [EBP + 0xfffffe44],EAX
005B5591  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
005B5594  8B 49 0C                  MOV ECX,dword ptr [ECX + 0xc]
005B5597  89 B5 60 FE FF FF         MOV dword ptr [EBP + 0xfffffe60],ESI
005B559D  8D B5 38 FE FF FF         LEA ESI,[EBP + 0xfffffe38]
005B55A3  89 95 4C FE FF FF         MOV dword ptr [EBP + 0xfffffe4c],EDX
005B55A9  89 85 58 FE FF FF         MOV dword ptr [EBP + 0xfffffe58],EAX
005B55AF  89 85 98 FE FF FF         MOV dword ptr [EBP + 0xfffffe98],EAX
005B55B5  8B 45 24                  MOV EAX,dword ptr [EBP + 0x24]
005B55B8  6A 00                     PUSH 0x0
005B55BA  BA 02 00 00 00            MOV EDX,0x2
005B55BF  56                        PUSH ESI
005B55C0  8D 75 FC                  LEA ESI,[EBP + -0x4]
005B55C3  89 95 5C FE FF FF         MOV dword ptr [EBP + 0xfffffe5c],EDX
005B55C9  89 95 9C FE FF FF         MOV dword ptr [EBP + 0xfffffe9c],EDX
005B55CF  89 85 A0 FE FF FF         MOV dword ptr [EBP + 0xfffffea0],EAX
005B55D5  8B 01                     MOV EAX,dword ptr [ECX]
005B55D7  6A 00                     PUSH 0x0
005B55D9  56                        PUSH ESI
005B55DA  52                        PUSH EDX
005B55DB  FF 50 08                  CALL dword ptr [EAX + 0x8]
005B55DE  8B 4D B4                  MOV ECX,dword ptr [EBP + -0x4c]
005B55E1  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
005B55E4  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005B55EA  5F                        POP EDI
005B55EB  5E                        POP ESI
005B55EC  8B E5                     MOV ESP,EBP
005B55EE  5D                        POP EBP
005B55EF  C2 20 00                  RET 0x20
LAB_005b55f2:
005B55F2  8B 55 B4                  MOV EDX,dword ptr [EBP + -0x4c]
005B55F5  68 78 CA 7C 00            PUSH 0x7cca78
005B55FA  68 CC 4C 7A 00            PUSH 0x7a4ccc
005B55FF  56                        PUSH ESI
005B5600  6A 00                     PUSH 0x0
005B5602  6A 47                     PUSH 0x47
005B5604  68 38 CA 7C 00            PUSH 0x7cca38
005B5609  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
005B560F  E8 BC 7E 0F 00            CALL 0x006ad4d0
005B5614  83 C4 18                  ADD ESP,0x18
005B5617  85 C0                     TEST EAX,EAX
005B5619  74 01                     JZ 0x005b561c
005B561B  CC                        INT3
LAB_005b561c:
005B561C  6A 47                     PUSH 0x47
005B561E  68 38 CA 7C 00            PUSH 0x7cca38
005B5623  6A 00                     PUSH 0x0
005B5625  56                        PUSH ESI
005B5626  E8 15 08 0F 00            CALL 0x006a5e40
005B562B  5F                        POP EDI
005B562C  33 C0                     XOR EAX,EAX
005B562E  5E                        POP ESI
005B562F  8B E5                     MOV ESP,EBP
005B5631  5D                        POP EBP
005B5632  C2 20 00                  RET 0x20
