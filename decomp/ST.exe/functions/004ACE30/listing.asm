STT3DSprC::sub_004ACE30:
004ACE30  55                        PUSH EBP
004ACE31  8B EC                     MOV EBP,ESP
004ACE33  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
004ACE36  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
004ACE39  50                        PUSH EAX
004ACE3A  8B 41 18                  MOV EAX,dword ptr [ECX + 0x18]
004ACE3D  8B 49 3C                  MOV ECX,dword ptr [ECX + 0x3c]
004ACE40  52                        PUSH EDX
004ACE41  50                        PUSH EAX
004ACE42  E8 09 C5 23 00            CALL 0x006e9350
004ACE47  5D                        POP EBP
004ACE48  C2 08 00                  RET 0x8
