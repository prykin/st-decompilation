FUN_006c6a90:
006C6A90  55                        PUSH EBP
006C6A91  8B EC                     MOV EBP,ESP
006C6A93  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006C6A96  83 39 FF                  CMP dword ptr [ECX],-0x1
006C6A99  75 0F                     JNZ 0x006c6aaa
006C6A9B  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006C6A9E  8B 51 08                  MOV EDX,dword ptr [ECX + 0x8]
006C6AA1  2B C2                     SUB EAX,EDX
006C6AA3  99                        CDQ
006C6AA4  2B C2                     SUB EAX,EDX
006C6AA6  D1 F8                     SAR EAX,0x1
006C6AA8  89 01                     MOV dword ptr [ECX],EAX
LAB_006c6aaa:
006C6AAA  83 39 00                  CMP dword ptr [ECX],0x0
006C6AAD  7D 06                     JGE 0x006c6ab5
006C6AAF  C7 01 00 00 00 00         MOV dword ptr [ECX],0x0
LAB_006c6ab5:
006C6AB5  83 79 04 FF               CMP dword ptr [ECX + 0x4],-0x1
006C6AB9  75 10                     JNZ 0x006c6acb
006C6ABB  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
006C6ABE  8B 51 0C                  MOV EDX,dword ptr [ECX + 0xc]
006C6AC1  2B C2                     SUB EAX,EDX
006C6AC3  99                        CDQ
006C6AC4  2B C2                     SUB EAX,EDX
006C6AC6  D1 F8                     SAR EAX,0x1
006C6AC8  89 41 04                  MOV dword ptr [ECX + 0x4],EAX
LAB_006c6acb:
006C6ACB  8B 41 04                  MOV EAX,dword ptr [ECX + 0x4]
006C6ACE  85 C0                     TEST EAX,EAX
006C6AD0  7D 07                     JGE 0x006c6ad9
006C6AD2  C7 41 04 00 00 00 00      MOV dword ptr [ECX + 0x4],0x0
LAB_006c6ad9:
006C6AD9  5D                        POP EBP
006C6ADA  C2 0C 00                  RET 0xc
