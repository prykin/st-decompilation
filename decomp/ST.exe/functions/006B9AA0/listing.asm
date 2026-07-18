FUN_006b9aa0:
006B9AA0  55                        PUSH EBP
006B9AA1  8B EC                     MOV EBP,ESP
006B9AA3  56                        PUSH ESI
006B9AA4  57                        PUSH EDI
006B9AA5  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
006B9AA8  8B 07                     MOV EAX,dword ptr [EDI]
006B9AAA  8B 08                     MOV ECX,dword ptr [EAX]
006B9AAC  8B 50 04                  MOV EDX,dword ptr [EAX + 0x4]
006B9AAF  3B D1                     CMP EDX,ECX
006B9AB1  7C 20                     JL 0x006b9ad3
006B9AB3  8D 71 0A                  LEA ESI,[ECX + 0xa]
006B9AB6  8D 0C 76                  LEA ECX,[ESI + ESI*0x2]
006B9AB9  8D 14 8D 08 00 00 00      LEA EDX,[ECX*0x4 + 0x8]
006B9AC0  52                        PUSH EDX
006B9AC1  50                        PUSH EAX
006B9AC2  E8 89 60 00 00            CALL 0x006bfb50
006B9AC7  85 C0                     TEST EAX,EAX
006B9AC9  75 06                     JNZ 0x006b9ad1
006B9ACB  5F                        POP EDI
006B9ACC  5E                        POP ESI
006B9ACD  5D                        POP EBP
006B9ACE  C2 08 00                  RET 0x8
LAB_006b9ad1:
006B9AD1  89 30                     MOV dword ptr [EAX],ESI
LAB_006b9ad3:
006B9AD3  8B 48 04                  MOV ECX,dword ptr [EAX + 0x4]
006B9AD6  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006B9AD9  8B 72 0C                  MOV ESI,dword ptr [EDX + 0xc]
006B9ADC  8D 0C 49                  LEA ECX,[ECX + ECX*0x2]
006B9ADF  89 74 88 08               MOV dword ptr [EAX + ECX*0x4 + 0x8],ESI
006B9AE3  8B 48 04                  MOV ECX,dword ptr [EAX + 0x4]
006B9AE6  8B 72 08                  MOV ESI,dword ptr [EDX + 0x8]
006B9AE9  41                        INC ECX
006B9AEA  8D 0C 49                  LEA ECX,[ECX + ECX*0x2]
006B9AED  89 34 88                  MOV dword ptr [EAX + ECX*0x4],ESI
006B9AF0  8B 48 04                  MOV ECX,dword ptr [EAX + 0x4]
006B9AF3  8B 52 54                  MOV EDX,dword ptr [EDX + 0x54]
006B9AF6  8D 0C 49                  LEA ECX,[ECX + ECX*0x2]
006B9AF9  89 54 88 10               MOV dword ptr [EAX + ECX*0x4 + 0x10],EDX
006B9AFD  8B 48 04                  MOV ECX,dword ptr [EAX + 0x4]
006B9B00  41                        INC ECX
006B9B01  89 48 04                  MOV dword ptr [EAX + 0x4],ECX
006B9B04  89 07                     MOV dword ptr [EDI],EAX
006B9B06  5F                        POP EDI
006B9B07  B8 01 00 00 00            MOV EAX,0x1
006B9B0C  5E                        POP ESI
006B9B0D  5D                        POP EBP
006B9B0E  C2 08 00                  RET 0x8
