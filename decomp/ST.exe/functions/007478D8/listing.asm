FUN_007478d8:
007478D8  C7 01 28 11 7A 00         MOV dword ptr [ECX],0x7a1128
007478DE  8B 49 08                  MOV ECX,dword ptr [ECX + 0x8]
007478E1  8D 41 0C                  LEA EAX,[ECX + 0xc]
007478E4  50                        PUSH EAX
007478E5  8B 08                     MOV ECX,dword ptr [EAX]
007478E7  FF 51 08                  CALL dword ptr [ECX + 0x8]
007478EA  C3                        RET
