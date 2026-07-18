FUN_006e3680:
006E3680  55                        PUSH EBP
006E3681  8B EC                     MOV EBP,ESP
006E3683  53                        PUSH EBX
006E3684  56                        PUSH ESI
006E3685  57                        PUSH EDI
006E3686  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
006E3689  8B D9                     MOV EBX,ECX
006E368B  C7 47 04 00 00 00 00      MOV dword ptr [EDI + 0x4],0x0
LAB_006e3692:
006E3692  8B 47 04                  MOV EAX,dword ptr [EDI + 0x4]
006E3695  8B 4F 0C                  MOV ECX,dword ptr [EDI + 0xc]
006E3698  3B C1                     CMP EAX,ECX
006E369A  73 34                     JNC 0x006e36d0
006E369C  8B 77 08                  MOV ESI,dword ptr [EDI + 0x8]
006E369F  8B 4F 1C                  MOV ECX,dword ptr [EDI + 0x1c]
006E36A2  0F AF F0                  IMUL ESI,EAX
006E36A5  8D 40 01                  LEA EAX,[EAX + 0x1]
006E36A8  03 F1                     ADD ESI,ECX
006E36AA  89 47 04                  MOV dword ptr [EDI + 0x4],EAX
006E36AD  74 21                     JZ 0x006e36d0
006E36AF  8B 46 08                  MOV EAX,dword ptr [ESI + 0x8]
006E36B2  85 C0                     TEST EAX,EAX
006E36B4  74 DC                     JZ 0x006e3692
006E36B6  50                        PUSH EAX
006E36B7  8B CB                     MOV ECX,EBX
006E36B9  E8 C2 FF FF FF            CALL 0x006e3680
006E36BE  8B 46 08                  MOV EAX,dword ptr [ESI + 0x8]
006E36C1  50                        PUSH EAX
006E36C2  E8 49 AA FC FF            CALL 0x006ae110
006E36C7  C7 46 08 00 00 00 00      MOV dword ptr [ESI + 0x8],0x0
006E36CE  EB C2                     JMP 0x006e3692
LAB_006e36d0:
006E36D0  5F                        POP EDI
006E36D1  5E                        POP ESI
006E36D2  5B                        POP EBX
006E36D3  5D                        POP EBP
006E36D4  C2 04 00                  RET 0x4
