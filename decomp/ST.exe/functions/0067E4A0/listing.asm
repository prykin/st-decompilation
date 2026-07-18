FUN_0067e4a0:
0067E4A0  55                        PUSH EBP
0067E4A1  8B EC                     MOV EBP,ESP
0067E4A3  83 EC 44                  SUB ESP,0x44
0067E4A6  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0067E4AB  56                        PUSH ESI
0067E4AC  8D 55 C0                  LEA EDX,[EBP + -0x40]
0067E4AF  8D 4D BC                  LEA ECX,[EBP + -0x44]
0067E4B2  6A 00                     PUSH 0x0
0067E4B4  52                        PUSH EDX
0067E4B5  89 45 BC                  MOV dword ptr [EBP + -0x44],EAX
0067E4B8  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0067E4BE  E8 2D F3 0A 00            CALL 0x0072d7f0
0067E4C3  8B F0                     MOV ESI,EAX
0067E4C5  83 C4 08                  ADD ESP,0x8
0067E4C8  85 F6                     TEST ESI,ESI
0067E4CA  75 32                     JNZ 0x0067e4fe
0067E4CC  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0067E4CF  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0067E4D2  8B 15 2C D7 79 00         MOV EDX,dword ptr [0x0079d72c]
0067E4D8  50                        PUSH EAX
0067E4D9  6A 03                     PUSH 0x3
0067E4DB  51                        PUSH ECX
0067E4DC  6A 01                     PUSH 0x1
0067E4DE  52                        PUSH EDX
0067E4DF  E8 1C 47 07 00            CALL 0x006f2c00
0067E4E4  83 C4 0C                  ADD ESP,0xc
0067E4E7  50                        PUSH EAX
0067E4E8  E8 13 47 07 00            CALL 0x006f2c00
0067E4ED  8B 4D BC                  MOV ECX,dword ptr [EBP + -0x44]
0067E4F0  83 C4 0C                  ADD ESP,0xc
0067E4F3  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0067E4F9  5E                        POP ESI
0067E4FA  8B E5                     MOV ESP,EBP
0067E4FC  5D                        POP EBP
0067E4FD  C3                        RET
LAB_0067e4fe:
0067E4FE  8B 55 BC                  MOV EDX,dword ptr [EBP + -0x44]
0067E501  68 9C 30 7D 00            PUSH 0x7d309c
0067E506  68 CC 4C 7A 00            PUSH 0x7a4ccc
0067E50B  56                        PUSH ESI
0067E50C  6A 00                     PUSH 0x0
0067E50E  68 D9 01 00 00            PUSH 0x1d9
0067E513  68 A4 2F 7D 00            PUSH 0x7d2fa4
0067E518  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0067E51E  E8 AD EF 02 00            CALL 0x006ad4d0
0067E523  83 C4 18                  ADD ESP,0x18
0067E526  85 C0                     TEST EAX,EAX
0067E528  74 01                     JZ 0x0067e52b
0067E52A  CC                        INT3
LAB_0067e52b:
0067E52B  68 DA 01 00 00            PUSH 0x1da
0067E530  68 A4 2F 7D 00            PUSH 0x7d2fa4
0067E535  6A 00                     PUSH 0x0
0067E537  56                        PUSH ESI
0067E538  E8 03 79 02 00            CALL 0x006a5e40
0067E53D  33 C0                     XOR EAX,EAX
0067E53F  5E                        POP ESI
0067E540  8B E5                     MOV ESP,EBP
0067E542  5D                        POP EBP
0067E543  C3                        RET
