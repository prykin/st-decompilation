FUN_005fcd40:
005FCD40  55                        PUSH EBP
005FCD41  8B EC                     MOV EBP,ESP
005FCD43  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
005FCD46  48                        DEC EAX
005FCD47  74 18                     JZ 0x005fcd61
005FCD49  48                        DEC EAX
005FCD4A  74 0C                     JZ 0x005fcd58
005FCD4C  48                        DEC EAX
005FCD4D  75 12                     JNZ 0x005fcd61
005FCD4F  B8 02 00 00 00            MOV EAX,0x2
005FCD54  5D                        POP EBP
005FCD55  C2 04 00                  RET 0x4
LAB_005fcd58:
005FCD58  B8 01 00 00 00            MOV EAX,0x1
005FCD5D  5D                        POP EBP
005FCD5E  C2 04 00                  RET 0x4
LAB_005fcd61:
005FCD61  33 C0                     XOR EAX,EAX
005FCD63  5D                        POP EBP
005FCD64  C2 04 00                  RET 0x4
