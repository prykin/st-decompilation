FUN_004ce640:
004CE640  8B 81 31 02 00 00         MOV EAX,dword ptr [ECX + 0x231]
004CE646  83 F8 01                  CMP EAX,0x1
004CE649  74 05                     JZ 0x004ce650
004CE64B  83 F8 03                  CMP EAX,0x3
004CE64E  75 07                     JNZ 0x004ce657
LAB_004ce650:
004CE650  6A 01                     PUSH 0x1
004CE652  E8 5B 4F F3 FF            CALL 0x004035b2
LAB_004ce657:
004CE657  33 C0                     XOR EAX,EAX
004CE659  C3                        RET
