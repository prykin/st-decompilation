FUN_0064e780:
0064E780  55                        PUSH EBP
0064E781  8B EC                     MOV EBP,ESP
0064E783  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0064E786  66 83 38 01               CMP word ptr [EAX],0x1
0064E78A  7D 0E                     JGE 0x0064e79a
0064E78C  C7 40 08 00 00 00 00      MOV dword ptr [EAX + 0x8],0x0
LAB_0064e793:
0064E793  B8 01 00 00 00            MOV EAX,0x1
0064E798  5D                        POP EBP
0064E799  C3                        RET
LAB_0064e79a:
0064E79A  80 B8 D0 00 00 00 08      CMP byte ptr [EAX + 0xd0],0x8
0064E7A1  74 F0                     JZ 0x0064e793
0064E7A3  33 C0                     XOR EAX,EAX
0064E7A5  5D                        POP EBP
0064E7A6  C3                        RET
