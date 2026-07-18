FUN_004248a0:
004248A0  55                        PUSH EBP
004248A1  8B EC                     MOV EBP,ESP
004248A3  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004248A6  8B 51 29                  MOV EDX,dword ptr [ECX + 0x29]
004248A9  50                        PUSH EAX
004248AA  8A 41 24                  MOV AL,byte ptr [ECX + 0x24]
004248AD  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004248B3  52                        PUSH EDX
004248B4  50                        PUSH EAX
004248B5  E8 41 F4 FD FF            CALL 0x00403cfb
004248BA  5D                        POP EBP
004248BB  C2 04 00                  RET 0x4
