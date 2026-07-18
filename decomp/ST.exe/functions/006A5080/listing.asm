FUN_006a5080:
006A5080  55                        PUSH EBP
006A5081  8B EC                     MOV EBP,ESP
006A5083  56                        PUSH ESI
006A5084  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
006A5087  56                        PUSH ESI
006A5088  E8 E1 00 D6 FF            CALL 0x0040516e
006A508D  83 C4 04                  ADD ESP,0x4
006A5090  85 C0                     TEST EAX,EAX
006A5092  74 45                     JZ 0x006a50d9
006A5094  8B 4E F4                  MOV ECX,dword ptr [ESI + -0xc]
006A5097  8B C1                     MOV EAX,ECX
006A5099  25 FF FF 00 00            AND EAX,0xffff
006A509E  83 F8 04                  CMP EAX,0x4
006A50A1  74 30                     JZ 0x006a50d3
006A50A3  83 F9 01                  CMP ECX,0x1
006A50A6  74 2B                     JZ 0x006a50d3
006A50A8  83 F8 02                  CMP EAX,0x2
006A50AB  74 26                     JZ 0x006a50d3
006A50AD  83 F9 03                  CMP ECX,0x3
006A50B0  74 21                     JZ 0x006a50d3
006A50B2  68 58 C6 7E 00            PUSH 0x7ec658
006A50B7  6A 00                     PUSH 0x0
006A50B9  68 65 05 00 00            PUSH 0x565
006A50BE  68 D0 C1 7E 00            PUSH 0x7ec1d0
006A50C3  6A 02                     PUSH 0x2
006A50C5  E8 D6 BE 08 00            CALL 0x00730fa0
006A50CA  83 C4 14                  ADD ESP,0x14
006A50CD  83 F8 01                  CMP EAX,0x1
006A50D0  75 01                     JNZ 0x006a50d3
006A50D2  CC                        INT3
LAB_006a50d3:
006A50D3  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006A50D6  89 46 F4                  MOV dword ptr [ESI + -0xc],EAX
LAB_006a50d9:
006A50D9  5E                        POP ESI
006A50DA  5D                        POP EBP
006A50DB  C3                        RET
