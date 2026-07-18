FUN_005717e0:
005717E0  55                        PUSH EBP
005717E1  8B EC                     MOV EBP,ESP
005717E3  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
005717E6  85 C0                     TEST EAX,EAX
005717E8  75 04                     JNZ 0x005717ee
005717EA  5D                        POP EBP
005717EB  C2 04 00                  RET 0x4
LAB_005717ee:
005717EE  8A 10                     MOV DL,byte ptr [EAX]
005717F0  33 C9                     XOR ECX,ECX
005717F2  80 FA 2F                  CMP DL,0x2f
005717F5  0F 94 C1                  SETZ CL
005717F8  8B C1                     MOV EAX,ECX
005717FA  5D                        POP EBP
005717FB  C2 04 00                  RET 0x4
