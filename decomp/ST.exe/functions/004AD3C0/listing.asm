STT3DSprC::sub_004AD3C0:
004AD3C0  55                        PUSH EBP
004AD3C1  8B EC                     MOV EBP,ESP
004AD3C3  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004AD3C6  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
004AD3C9  89 41 24                  MOV dword ptr [ECX + 0x24],EAX
004AD3CC  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
004AD3CF  89 51 28                  MOV dword ptr [ECX + 0x28],EDX
004AD3D2  89 41 2C                  MOV dword ptr [ECX + 0x2c],EAX
004AD3D5  8B D0                     MOV EDX,EAX
004AD3D7  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
004AD3DA  52                        PUSH EDX
004AD3DB  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
004AD3DE  50                        PUSH EAX
004AD3DF  8B 41 18                  MOV EAX,dword ptr [ECX + 0x18]
004AD3E2  8B 49 3C                  MOV ECX,dword ptr [ECX + 0x3c]
004AD3E5  52                        PUSH EDX
004AD3E6  50                        PUSH EAX
004AD3E7  E8 74 D5 23 00            CALL 0x006ea960
004AD3EC  5D                        POP EBP
004AD3ED  C2 0C 00                  RET 0xc
