FUN_004f1530:
004F1530  55                        PUSH EBP
004F1531  8B EC                     MOV EBP,ESP
004F1533  83 EC 44                  SUB ESP,0x44
004F1536  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
004F153B  56                        PUSH ESI
004F153C  8D 55 C0                  LEA EDX,[EBP + -0x40]
004F153F  8D 4D BC                  LEA ECX,[EBP + -0x44]
004F1542  6A 00                     PUSH 0x0
004F1544  52                        PUSH EDX
004F1545  89 45 BC                  MOV dword ptr [EBP + -0x44],EAX
004F1548  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
004F154E  E8 9D C2 23 00            CALL 0x0072d7f0
004F1553  8B F0                     MOV ESI,EAX
004F1555  83 C4 08                  ADD ESP,0x8
004F1558  85 F6                     TEST ESI,ESI
004F155A  75 3F                     JNZ 0x004f159b
004F155C  A1 B4 32 80 00            MOV EAX,[0x008032b4]
004F1561  68 FF 00 00 01            PUSH 0x10000ff
004F1566  68 00 00 00 01            PUSH 0x1000000
004F156B  50                        PUSH EAX
004F156C  8B 45 24                  MOV EAX,dword ptr [EBP + 0x24]
004F156F  8B 48 08                  MOV ECX,dword ptr [EAX + 0x8]
004F1572  8B 50 04                  MOV EDX,dword ptr [EAX + 0x4]
004F1575  51                        PUSH ECX
004F1576  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
004F1579  52                        PUSH EDX
004F157A  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
004F157D  56                        PUSH ESI
004F157E  56                        PUSH ESI
004F157F  56                        PUSH ESI
004F1580  50                        PUSH EAX
004F1581  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
004F1584  50                        PUSH EAX
004F1585  51                        PUSH ECX
004F1586  52                        PUSH EDX
004F1587  E8 54 33 1C 00            CALL 0x006b48e0
004F158C  8B 45 BC                  MOV EAX,dword ptr [EBP + -0x44]
004F158F  A3 F8 8D 85 00            MOV [0x00858df8],EAX
004F1594  5E                        POP ESI
004F1595  8B E5                     MOV ESP,EBP
004F1597  5D                        POP EBP
004F1598  C2 20 00                  RET 0x20
LAB_004f159b:
004F159B  8B 4D BC                  MOV ECX,dword ptr [EBP + -0x44]
004F159E  68 70 1A 7C 00            PUSH 0x7c1a70
004F15A3  68 CC 4C 7A 00            PUSH 0x7a4ccc
004F15A8  56                        PUSH ESI
004F15A9  6A 00                     PUSH 0x0
004F15AB  6A 1F                     PUSH 0x1f
004F15AD  68 4C 1A 7C 00            PUSH 0x7c1a4c
004F15B2  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
004F15B8  E8 13 BF 1B 00            CALL 0x006ad4d0
004F15BD  83 C4 18                  ADD ESP,0x18
004F15C0  85 C0                     TEST EAX,EAX
004F15C2  74 01                     JZ 0x004f15c5
004F15C4  CC                        INT3
LAB_004f15c5:
004F15C5  6A 1F                     PUSH 0x1f
004F15C7  68 4C 1A 7C 00            PUSH 0x7c1a4c
004F15CC  6A 00                     PUSH 0x0
004F15CE  56                        PUSH ESI
004F15CF  E8 6C 48 1B 00            CALL 0x006a5e40
004F15D4  5E                        POP ESI
004F15D5  8B E5                     MOV ESP,EBP
004F15D7  5D                        POP EBP
004F15D8  C2 20 00                  RET 0x20
