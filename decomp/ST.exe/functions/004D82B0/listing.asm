FUN_004d82b0:
004D82B0  55                        PUSH EBP
004D82B1  8B EC                     MOV EBP,ESP
004D82B3  8B 15 40 A1 7F 00         MOV EDX,dword ptr [0x007fa140]
004D82B9  B8 1F 85 EB 51            MOV EAX,0x51eb851f
004D82BE  F7 EA                     IMUL EDX
004D82C0  C1 FA 05                  SAR EDX,0x5
004D82C3  8B C2                     MOV EAX,EDX
004D82C5  C1 E8 1F                  SHR EAX,0x1f
004D82C8  03 D0                     ADD EDX,EAX
004D82CA  A1 3C A1 7F 00            MOV EAX,[0x007fa13c]
004D82CF  3B C2                     CMP EAX,EDX
004D82D1  7C 24                     JL 0x004d82f7
004D82D3  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
004D82D6  85 D2                     TEST EDX,EDX
004D82D8  74 1D                     JZ 0x004d82f7
004D82DA  2B C2                     SUB EAX,EDX
004D82DC  A3 3C A1 7F 00            MOV [0x007fa13c],EAX
004D82E1  79 0A                     JNS 0x004d82ed
004D82E3  C7 05 3C A1 7F 00 00 00 00 00  MOV dword ptr [0x007fa13c],0x0
LAB_004d82ed:
004D82ED  E8 20 C6 F2 FF            CALL 0x00404912
004D82F2  A1 3C A1 7F 00            MOV EAX,[0x007fa13c]
LAB_004d82f7:
004D82F7  5D                        POP EBP
004D82F8  C2 04 00                  RET 0x4
