FUN_004df370:
004DF370  55                        PUSH EBP
004DF371  8B EC                     MOV EBP,ESP
004DF373  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004DF376  85 C0                     TEST EAX,EAX
004DF378  89 81 D8 04 00 00         MOV dword ptr [ECX + 0x4d8],EAX
004DF37E  7F 13                     JG 0x004df393
004DF380  83 B9 D0 04 00 00 01      CMP dword ptr [ECX + 0x4d0],0x1
004DF387  75 0A                     JNZ 0x004df393
004DF389  C7 81 D8 04 00 00 00 00 00 00  MOV dword ptr [ECX + 0x4d8],0x0
LAB_004df393:
004DF393  33 C0                     XOR EAX,EAX
004DF395  5D                        POP EBP
004DF396  C2 04 00                  RET 0x4
