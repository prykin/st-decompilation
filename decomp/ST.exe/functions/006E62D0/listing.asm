FUN_006e62d0:
006E62D0  55                        PUSH EBP
006E62D1  8B EC                     MOV EBP,ESP
006E62D3  8B 51 10                  MOV EDX,dword ptr [ECX + 0x10]
006E62D6  53                        PUSH EBX
006E62D7  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
006E62DA  56                        PUSH ESI
006E62DB  57                        PUSH EDI
006E62DC  B8 FC FF FF FF            MOV EAX,0xfffffffc
006E62E1  C7 42 04 00 00 00 00      MOV dword ptr [EDX + 0x4],0x0
LAB_006e62e8:
006E62E8  8B 51 10                  MOV EDX,dword ptr [ECX + 0x10]
006E62EB  8B 7A 04                  MOV EDI,dword ptr [EDX + 0x4]
006E62EE  8B 72 0C                  MOV ESI,dword ptr [EDX + 0xc]
006E62F1  3B FE                     CMP EDI,ESI
006E62F3  73 26                     JNC 0x006e631b
006E62F5  8B 72 08                  MOV ESI,dword ptr [EDX + 0x8]
006E62F8  0F AF F7                  IMUL ESI,EDI
006E62FB  03 72 1C                  ADD ESI,dword ptr [EDX + 0x1c]
006E62FE  8D 7F 01                  LEA EDI,[EDI + 0x1]
006E6301  89 7A 04                  MOV dword ptr [EDX + 0x4],EDI
006E6304  74 15                     JZ 0x006e631b
006E6306  8B 56 04                  MOV EDX,dword ptr [ESI + 0x4]
006E6309  39 5A 18                  CMP dword ptr [EDX + 0x18],EBX
006E630C  75 DA                     JNZ 0x006e62e8
006E630E  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006E6311  85 C0                     TEST EAX,EAX
006E6313  74 04                     JZ 0x006e6319
006E6315  8B CA                     MOV ECX,EDX
006E6317  89 08                     MOV dword ptr [EAX],ECX
LAB_006e6319:
006E6319  33 C0                     XOR EAX,EAX
LAB_006e631b:
006E631B  5F                        POP EDI
006E631C  5E                        POP ESI
006E631D  5B                        POP EBX
006E631E  5D                        POP EBP
006E631F  C2 08 00                  RET 0x8
