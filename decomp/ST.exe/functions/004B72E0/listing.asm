FUN_004b72e0:
004B72E0  55                        PUSH EBP
004B72E1  8B EC                     MOV EBP,ESP
004B72E3  56                        PUSH ESI
004B72E4  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
004B72E7  33 C0                     XOR EAX,EAX
004B72E9  83 FE 32                  CMP ESI,0x32
004B72EC  7C 2A                     JL 0x004b7318
004B72EE  83 FE 74                  CMP ESI,0x74
004B72F1  7D 25                     JGE 0x004b7318
004B72F3  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004B72F6  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004B72FC  50                        PUSH EAX
004B72FD  E8 B5 D6 F4 FF            CALL 0x004049b7
004B7302  25 FF 00 00 00            AND EAX,0xff
004B7307  8D 0C 76                  LEA ECX,[ESI + ESI*0x2]
004B730A  03 C1                     ADD EAX,ECX
004B730C  5E                        POP ESI
004B730D  8B 04 85 04 0C 7E 00      MOV EAX,dword ptr [EAX*0x4 + 0x7e0c04]
004B7314  5D                        POP EBP
004B7315  C2 08 00                  RET 0x8
LAB_004b7318:
004B7318  83 FE 78                  CMP ESI,0x78
004B731B  75 05                     JNZ 0x004b7322
004B731D  B8 02 00 00 00            MOV EAX,0x2
LAB_004b7322:
004B7322  5E                        POP ESI
004B7323  5D                        POP EBP
004B7324  C2 08 00                  RET 0x8
