FUN_004ad5e0:
004AD5E0  8B 41 18                  MOV EAX,dword ptr [ECX + 0x18]
004AD5E3  6A 00                     PUSH 0x0
004AD5E5  6A 00                     PUSH 0x0
004AD5E7  C6 41 11 01               MOV byte ptr [ECX + 0x11],0x1
004AD5EB  8B 49 3C                  MOV ECX,dword ptr [ECX + 0x3c]
004AD5EE  6A 00                     PUSH 0x0
004AD5F0  50                        PUSH EAX
004AD5F1  E8 2A BF 23 00            CALL 0x006e9520
004AD5F6  C3                        RET
