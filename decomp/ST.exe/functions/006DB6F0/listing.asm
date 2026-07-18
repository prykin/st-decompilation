FUN_006db6f0:
006DB6F0  55                        PUSH EBP
006DB6F1  8B EC                     MOV EBP,ESP
006DB6F3  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006DB6F6  33 C9                     XOR ECX,ECX
006DB6F8  85 C0                     TEST EAX,EAX
006DB6FA  7D 07                     JGE 0x006db703
006DB6FC  B9 01 00 00 00            MOV ECX,0x1
006DB701  F7 D8                     NEG EAX
LAB_006db703:
006DB703  3D B4 00 00 00            CMP EAX,0xb4
006DB708  7C 0C                     JL 0x006db716
006DB70A  56                        PUSH ESI
006DB70B  BE B4 00 00 00            MOV ESI,0xb4
006DB710  99                        CDQ
006DB711  F7 FE                     IDIV ESI
006DB713  5E                        POP ESI
006DB714  8B C2                     MOV EAX,EDX
LAB_006db716:
006DB716  83 F8 5A                  CMP EAX,0x5a
006DB719  7E 10                     JLE 0x006db72b
006DB71B  C1 E0 02                  SHL EAX,0x2
006DB71E  BA 54 E8 7E 00            MOV EDX,0x7ee854
006DB723  2B D0                     SUB EDX,EAX
006DB725  8B 02                     MOV EAX,dword ptr [EDX]
006DB727  F7 D8                     NEG EAX
006DB729  EB 07                     JMP 0x006db732
LAB_006db72b:
006DB72B  8B 04 85 84 E5 7E 00      MOV EAX,dword ptr [EAX*0x4 + 0x7ee584]
LAB_006db732:
006DB732  83 F9 01                  CMP ECX,0x1
006DB735  75 02                     JNZ 0x006db739
006DB737  F7 D8                     NEG EAX
LAB_006db739:
006DB739  5D                        POP EBP
006DB73A  C2 04 00                  RET 0x4
