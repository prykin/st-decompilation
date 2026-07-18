_longjmp:
007338AC  8B 5C 24 04               MOV EBX,dword ptr [ESP + 0x4]
007338B0  8B 2B                     MOV EBP,dword ptr [EBX]
007338B2  8B 73 18                  MOV ESI,dword ptr [EBX + 0x18]
007338B5  64 3B 35 00 00 00 00      CMP ESI,dword ptr FS:[0x0]
007338BC  74 09                     JZ 0x007338c7
007338BE  56                        PUSH ESI
007338BF  E8 A8 9F FF FF            CALL 0x0072d86c
007338C4  83 C4 04                  ADD ESP,0x4
LAB_007338c7:
007338C7  83 FE 00                  CMP ESI,0x0
007338CA  74 30                     JZ 0x007338fc
007338CC  8D 43 20                  LEA EAX,[EBX + 0x20]
007338CF  50                        PUSH EAX
007338D0  E8 5B A9 00 00            CALL 0x0073e230
007338D5  0B C0                     OR EAX,EAX
007338D7  74 16                     JZ 0x007338ef
007338D9  8B 43 20                  MOV EAX,dword ptr [EBX + 0x20]
007338DC  3D 30 32 43 56            CMP EAX,0x56433230
007338E1  75 0C                     JNZ 0x007338ef
007338E3  8B 43 24                  MOV EAX,dword ptr [EBX + 0x24]
007338E6  0B C0                     OR EAX,EAX
007338E8  74 12                     JZ 0x007338fc
007338EA  53                        PUSH EBX
007338EB  FF D0                     CALL EAX
007338ED  EB 0D                     JMP 0x007338fc
LAB_007338ef:
007338EF  8B 43 1C                  MOV EAX,dword ptr [EBX + 0x1c]
007338F2  50                        PUSH EAX
007338F3  56                        PUSH ESI
007338F4  E8 B5 9F FF FF            CALL 0x0072d8ae
007338F9  83 C4 08                  ADD ESP,0x8
LAB_007338fc:
007338FC  6A 00                     PUSH 0x0
007338FE  8B 43 14                  MOV EAX,dword ptr [EBX + 0x14]
00733901  E8 3C A0 FF FF            CALL 0x0072d942
00733906  8B D3                     MOV EDX,EBX
00733908  8B 5A 04                  MOV EBX,dword ptr [EDX + 0x4]
0073390B  8B 7A 08                  MOV EDI,dword ptr [EDX + 0x8]
0073390E  8B 72 0C                  MOV ESI,dword ptr [EDX + 0xc]
00733911  8B 44 24 08               MOV EAX,dword ptr [ESP + 0x8]
00733915  83 F8 01                  CMP EAX,0x1
00733918  83 D0 00                  ADC EAX,0x0
0073391B  8B 62 10                  MOV ESP,dword ptr [EDX + 0x10]
0073391E  83 C4 04                  ADD ESP,0x4
00733921  FF 62 14                  JMP dword ptr [EDX + 0x14]
