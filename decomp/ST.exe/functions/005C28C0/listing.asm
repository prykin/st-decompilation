StartSystemTy::OutBmpProc:
005C28C0  55                        PUSH EBP
005C28C1  8B EC                     MOV EBP,ESP
005C28C3  83 EC 44                  SUB ESP,0x44
005C28C6  8B 45 24                  MOV EAX,dword ptr [EBP + 0x24]
005C28C9  56                        PUSH ESI
005C28CA  85 C0                     TEST EAX,EAX
005C28CC  0F 84 9D 00 00 00         JZ 0x005c296f
005C28D2  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
005C28D7  8D 55 C0                  LEA EDX,[EBP + -0x40]
005C28DA  8D 4D BC                  LEA ECX,[EBP + -0x44]
005C28DD  6A 00                     PUSH 0x0
005C28DF  52                        PUSH EDX
005C28E0  89 45 BC                  MOV dword ptr [EBP + -0x44],EAX
005C28E3  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005C28E9  E8 02 AF 16 00            CALL 0x0072d7f0
005C28EE  8B F0                     MOV ESI,EAX
005C28F0  83 C4 08                  ADD ESP,0x8
005C28F3  85 F6                     TEST ESI,ESI
005C28F5  75 3F                     JNZ 0x005c2936
005C28F7  A1 A4 32 80 00            MOV EAX,[0x008032a4]
005C28FC  68 FF 00 00 01            PUSH 0x10000ff
005C2901  68 67 00 00 01            PUSH 0x1000067
005C2906  50                        PUSH EAX
005C2907  8B 45 24                  MOV EAX,dword ptr [EBP + 0x24]
005C290A  8B 48 08                  MOV ECX,dword ptr [EAX + 0x8]
005C290D  8B 50 04                  MOV EDX,dword ptr [EAX + 0x4]
005C2910  51                        PUSH ECX
005C2911  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
005C2914  52                        PUSH EDX
005C2915  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
005C2918  56                        PUSH ESI
005C2919  56                        PUSH ESI
005C291A  56                        PUSH ESI
005C291B  50                        PUSH EAX
005C291C  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
005C291F  50                        PUSH EAX
005C2920  51                        PUSH ECX
005C2921  52                        PUSH EDX
005C2922  E8 B9 1F 0F 00            CALL 0x006b48e0
005C2927  8B 45 BC                  MOV EAX,dword ptr [EBP + -0x44]
005C292A  A3 F8 8D 85 00            MOV [0x00858df8],EAX
005C292F  5E                        POP ESI
005C2930  8B E5                     MOV ESP,EBP
005C2932  5D                        POP EBP
005C2933  C2 20 00                  RET 0x20
LAB_005c2936:
005C2936  8B 4D BC                  MOV ECX,dword ptr [EBP + -0x44]
005C2939  68 10 D1 7C 00            PUSH 0x7cd110
005C293E  68 CC 4C 7A 00            PUSH 0x7a4ccc
005C2943  56                        PUSH ESI
005C2944  6A 00                     PUSH 0x0
005C2946  6A 48                     PUSH 0x48
005C2948  68 E8 D0 7C 00            PUSH 0x7cd0e8
005C294D  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005C2953  E8 78 AB 0E 00            CALL 0x006ad4d0
005C2958  83 C4 18                  ADD ESP,0x18
005C295B  85 C0                     TEST EAX,EAX
005C295D  74 01                     JZ 0x005c2960
005C295F  CC                        INT3
LAB_005c2960:
005C2960  6A 48                     PUSH 0x48
005C2962  68 E8 D0 7C 00            PUSH 0x7cd0e8
005C2967  6A 00                     PUSH 0x0
005C2969  56                        PUSH ESI
005C296A  E8 D1 34 0E 00            CALL 0x006a5e40
LAB_005c296f:
005C296F  5E                        POP ESI
005C2970  8B E5                     MOV ESP,EBP
005C2972  5D                        POP EBP
005C2973  C2 20 00                  RET 0x20
