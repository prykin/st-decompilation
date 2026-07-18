FUN_006c76b0:
006C76B0  55                        PUSH EBP
006C76B1  8B EC                     MOV EBP,ESP
006C76B3  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006C76B6  83 39 FF                  CMP dword ptr [ECX],-0x1
006C76B9  75 0F                     JNZ 0x006c76ca
006C76BB  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006C76BE  8B 51 08                  MOV EDX,dword ptr [ECX + 0x8]
006C76C1  2B C2                     SUB EAX,EDX
006C76C3  99                        CDQ
006C76C4  2B C2                     SUB EAX,EDX
006C76C6  D1 F8                     SAR EAX,0x1
006C76C8  89 01                     MOV dword ptr [ECX],EAX
LAB_006c76ca:
006C76CA  83 39 00                  CMP dword ptr [ECX],0x0
006C76CD  7D 06                     JGE 0x006c76d5
006C76CF  C7 01 00 00 00 00         MOV dword ptr [ECX],0x0
LAB_006c76d5:
006C76D5  83 79 04 FF               CMP dword ptr [ECX + 0x4],-0x1
006C76D9  75 10                     JNZ 0x006c76eb
006C76DB  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
006C76DE  8B 51 0C                  MOV EDX,dword ptr [ECX + 0xc]
006C76E1  2B C2                     SUB EAX,EDX
006C76E3  99                        CDQ
006C76E4  2B C2                     SUB EAX,EDX
006C76E6  D1 F8                     SAR EAX,0x1
006C76E8  89 41 04                  MOV dword ptr [ECX + 0x4],EAX
LAB_006c76eb:
006C76EB  8B 41 04                  MOV EAX,dword ptr [ECX + 0x4]
006C76EE  85 C0                     TEST EAX,EAX
006C76F0  7D 07                     JGE 0x006c76f9
006C76F2  C7 41 04 00 00 00 00      MOV dword ptr [ECX + 0x4],0x0
LAB_006c76f9:
006C76F9  5D                        POP EBP
006C76FA  C2 0C 00                  RET 0xc
