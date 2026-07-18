FUN_006e91d0:
006E91D0  55                        PUSH EBP
006E91D1  8B EC                     MOV EBP,ESP
006E91D3  56                        PUSH ESI
006E91D4  57                        PUSH EDI
006E91D5  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
006E91D8  8B F1                     MOV ESI,ECX
006E91DA  57                        PUSH EDI
006E91DB  E8 C0 FC FF FF            CALL 0x006e8ea0
006E91E0  85 C0                     TEST EAX,EAX
006E91E2  74 0A                     JZ 0x006e91ee
006E91E4  C7 86 34 01 00 00 01 00 00 00  MOV dword ptr [ESI + 0x134],0x1
LAB_006e91ee:
006E91EE  81 C6 94 02 00 00         ADD ESI,0x294
006E91F4  57                        PUSH EDI
006E91F5  56                        PUSH ESI
006E91F6  E8 C5 06 FD FF            CALL 0x006b98c0
006E91FB  57                        PUSH EDI
006E91FC  E8 8F CC FB FF            CALL 0x006a5e90
006E9201  5F                        POP EDI
006E9202  5E                        POP ESI
006E9203  5D                        POP EBP
006E9204  C2 04 00                  RET 0x4
