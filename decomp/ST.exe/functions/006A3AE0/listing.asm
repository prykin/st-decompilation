FUN_006a3ae0:
006A3AE0  55                        PUSH EBP
006A3AE1  8B EC                     MOV EBP,ESP
006A3AE3  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006A3AE6  56                        PUSH ESI
006A3AE7  83 CE FF                  OR ESI,0xffffffff
006A3AEA  33 C0                     XOR EAX,EAX
006A3AEC  B9 F0 FA 7D 00            MOV ECX,0x7dfaf0
LAB_006a3af1:
006A3AF1  39 11                     CMP dword ptr [ECX],EDX
006A3AF3  74 0E                     JZ 0x006a3b03
006A3AF5  83 C1 04                  ADD ECX,0x4
006A3AF8  40                        INC EAX
006A3AF9  81 F9 30 FB 7D 00         CMP ECX,0x7dfb30
006A3AFF  7C F0                     JL 0x006a3af1
006A3B01  8B C6                     MOV EAX,ESI
LAB_006a3b03:
006A3B03  5E                        POP ESI
006A3B04  5D                        POP EBP
006A3B05  C3                        RET
