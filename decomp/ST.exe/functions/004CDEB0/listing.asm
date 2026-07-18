FUN_004cdeb0:
004CDEB0  55                        PUSH EBP
004CDEB1  8B EC                     MOV EBP,ESP
004CDEB3  8B 81 24 05 00 00         MOV EAX,dword ptr [ECX + 0x524]
004CDEB9  83 F8 14                  CMP EAX,0x14
004CDEBC  7D 17                     JGE 0x004cded5
004CDEBE  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
004CDEC1  89 94 81 D0 04 00 00      MOV dword ptr [ECX + EAX*0x4 + 0x4d0],EDX
004CDEC8  8B 81 24 05 00 00         MOV EAX,dword ptr [ECX + 0x524]
004CDECE  40                        INC EAX
004CDECF  89 81 24 05 00 00         MOV dword ptr [ECX + 0x524],EAX
LAB_004cded5:
004CDED5  33 C0                     XOR EAX,EAX
004CDED7  5D                        POP EBP
004CDED8  C2 04 00                  RET 0x4
