FUN_004de7d0:
004DE7D0  55                        PUSH EBP
004DE7D1  8B EC                     MOV EBP,ESP
004DE7D3  8B 81 D0 04 00 00         MOV EAX,dword ptr [ECX + 0x4d0]
004DE7D9  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
004DE7DC  03 C2                     ADD EAX,EDX
004DE7DE  8B 15 90 61 7E 00         MOV EDX,dword ptr [0x007e6190]
004DE7E4  56                        PUSH ESI
004DE7E5  33 F6                     XOR ESI,ESI
004DE7E7  3B C2                     CMP EAX,EDX
004DE7E9  7D 1A                     JGE 0x004de805
004DE7EB  8B 49 24                  MOV ECX,dword ptr [ECX + 0x24]
004DE7EE  6A 19                     PUSH 0x19
004DE7F0  51                        PUSH ECX
004DE7F1  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004DE7F7  E8 6F 30 F2 FF            CALL 0x0040186b
004DE7FC  85 C0                     TEST EAX,EAX
004DE7FE  B8 01 00 00 00            MOV EAX,0x1
004DE803  75 02                     JNZ 0x004de807
LAB_004de805:
004DE805  8B C6                     MOV EAX,ESI
LAB_004de807:
004DE807  5E                        POP ESI
004DE808  5D                        POP EBP
004DE809  C2 10 00                  RET 0x10
