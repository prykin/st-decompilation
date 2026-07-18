FUN_006e89b0:
006E89B0  55                        PUSH EBP
006E89B1  8B EC                     MOV EBP,ESP
006E89B3  56                        PUSH ESI
006E89B4  57                        PUSH EDI
006E89B5  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
006E89B8  6A 00                     PUSH 0x0
006E89BA  6A 00                     PUSH 0x0
006E89BC  6A 00                     PUSH 0x0
006E89BE  6A 00                     PUSH 0x0
006E89C0  6A 00                     PUSH 0x0
006E89C2  6A 00                     PUSH 0x0
006E89C4  6A 00                     PUSH 0x0
006E89C6  8B F1                     MOV ESI,ECX
006E89C8  57                        PUSH EDI
006E89C9  E8 92 FC FF FF            CALL 0x006e8660
006E89CE  85 C0                     TEST EAX,EAX
006E89D0  0F 85 BE 00 00 00         JNZ 0x006e8a94
006E89D6  8B 0F                     MOV ECX,dword ptr [EDI]
006E89D8  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
006E89DB  8B D7                     MOV EDX,EDI
006E89DD  8D 04 49                  LEA EAX,[ECX + ECX*0x2]
006E89E0  C1 E0 03                  SHL EAX,0x3
006E89E3  2B C1                     SUB EAX,ECX
006E89E5  8B 8E 1C 03 00 00         MOV ECX,dword ptr [ESI + 0x31c]
006E89EB  C1 E2 04                  SHL EDX,0x4
006E89EE  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
006E89F1  83 C2 25                  ADD EDX,0x25
006E89F4  52                        PUSH EDX
006E89F5  8D 34 81                  LEA ESI,[ECX + EAX*0x4]
006E89F8  E8 73 22 FC FF            CALL 0x006aac70
006E89FD  85 C0                     TEST EAX,EAX
006E89FF  89 86 A0 00 00 00         MOV dword ptr [ESI + 0xa0],EAX
006E8A05  75 0B                     JNZ 0x006e8a12
006E8A07  5F                        POP EDI
006E8A08  B8 FE FF FF FF            MOV EAX,0xfffffffe
006E8A0D  5E                        POP ESI
006E8A0E  5D                        POP EBP
006E8A0F  C2 2C 00                  RET 0x2c
LAB_006e8a12:
006E8A12  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006E8A15  89 08                     MOV dword ptr [EAX],ECX
006E8A17  8B 96 A0 00 00 00         MOV EDX,dword ptr [ESI + 0xa0]
006E8A1D  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006E8A20  89 7A 04                  MOV dword ptr [EDX + 0x4],EDI
006E8A23  8B 86 A0 00 00 00         MOV EAX,dword ptr [ESI + 0xa0]
006E8A29  89 48 08                  MOV dword ptr [EAX + 0x8],ECX
006E8A2C  8B 96 A0 00 00 00         MOV EDX,dword ptr [ESI + 0xa0]
006E8A32  8B 45 20                  MOV EAX,dword ptr [EBP + 0x20]
006E8A35  89 42 0C                  MOV dword ptr [EDX + 0xc],EAX
006E8A38  8B 8E A0 00 00 00         MOV ECX,dword ptr [ESI + 0xa0]
006E8A3E  8B 55 24                  MOV EDX,dword ptr [EBP + 0x24]
006E8A41  89 51 10                  MOV dword ptr [ECX + 0x10],EDX
006E8A44  8B 86 A0 00 00 00         MOV EAX,dword ptr [ESI + 0xa0]
006E8A4A  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
006E8A4D  89 48 14                  MOV dword ptr [EAX + 0x14],ECX
006E8A50  8B 96 A0 00 00 00         MOV EDX,dword ptr [ESI + 0xa0]
006E8A56  8A 45 18                  MOV AL,byte ptr [EBP + 0x18]
006E8A59  B9 68 01 00 00            MOV ECX,0x168
006E8A5E  88 42 18                  MOV byte ptr [EDX + 0x18],AL
006E8A61  8B 55 28                  MOV EDX,dword ptr [EBP + 0x28]
006E8A64  2B CA                     SUB ECX,EDX
006E8A66  8B 96 A0 00 00 00         MOV EDX,dword ptr [ESI + 0xa0]
006E8A6C  89 4A 19                  MOV dword ptr [EDX + 0x19],ECX
006E8A6F  8B 86 A0 00 00 00         MOV EAX,dword ptr [ESI + 0xa0]
006E8A75  8B 4D 2C                  MOV ECX,dword ptr [EBP + 0x2c]
006E8A78  89 48 1D                  MOV dword ptr [EAX + 0x1d],ECX
006E8A7B  8B 96 A0 00 00 00         MOV EDX,dword ptr [ESI + 0xa0]
006E8A81  8B 45 30                  MOV EAX,dword ptr [EBP + 0x30]
006E8A84  89 42 21                  MOV dword ptr [EDX + 0x21],EAX
006E8A87  8B 46 04                  MOV EAX,dword ptr [ESI + 0x4]
006E8A8A  0D 05 20 00 00            OR EAX,0x2005
006E8A8F  89 46 04                  MOV dword ptr [ESI + 0x4],EAX
006E8A92  33 C0                     XOR EAX,EAX
LAB_006e8a94:
006E8A94  5F                        POP EDI
006E8A95  5E                        POP ESI
006E8A96  5D                        POP EBP
006E8A97  C2 2C 00                  RET 0x2c
