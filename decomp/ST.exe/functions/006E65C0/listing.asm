FUN_006e65c0:
006E65C0  55                        PUSH EBP
006E65C1  8B EC                     MOV EBP,ESP
006E65C3  56                        PUSH ESI
006E65C4  8B F1                     MOV ESI,ECX
006E65C6  6A 1C                     PUSH 0x1c
006E65C8  E8 43 46 FC FF            CALL 0x006aac10
006E65CD  85 C0                     TEST EAX,EAX
006E65CF  75 0A                     JNZ 0x006e65db
006E65D1  B8 FE FF FF FF            MOV EAX,0xfffffffe
006E65D6  5E                        POP ESI
006E65D7  5D                        POP EBP
006E65D8  C2 1C 00                  RET 0x1c
LAB_006e65db:
006E65DB  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006E65DE  8A 55 0C                  MOV DL,byte ptr [EBP + 0xc]
006E65E1  89 48 18                  MOV dword ptr [EAX + 0x18],ECX
006E65E4  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
006E65E7  88 50 17                  MOV byte ptr [EAX + 0x17],DL
006E65EA  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
006E65ED  89 48 04                  MOV dword ptr [EAX + 0x4],ECX
006E65F0  66 8B 4D 18               MOV CX,word ptr [EBP + 0x18]
006E65F4  89 50 08                  MOV dword ptr [EAX + 0x8],EDX
006E65F7  66 8B 55 1C               MOV DX,word ptr [EBP + 0x1c]
006E65FB  66 89 48 0E               MOV word ptr [EAX + 0xe],CX
006E65FF  66 8B 4D 20               MOV CX,word ptr [EBP + 0x20]
006E6603  81 C6 42 04 00 00         ADD ESI,0x442
006E6609  50                        PUSH EAX
006E660A  56                        PUSH ESI
006E660B  66 89 50 10               MOV word ptr [EAX + 0x10],DX
006E660F  66 89 48 12               MOV word ptr [EAX + 0x12],CX
006E6613  E8 F8 32 FD FF            CALL 0x006b9910
006E6618  33 C0                     XOR EAX,EAX
006E661A  5E                        POP ESI
006E661B  5D                        POP EBP
006E661C  C2 1C 00                  RET 0x1c
