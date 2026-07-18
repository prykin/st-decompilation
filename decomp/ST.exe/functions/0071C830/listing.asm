FUN_0071c830:
0071C830  8B 41 24                  MOV EAX,dword ptr [ECX + 0x24]
0071C833  56                        PUSH ESI
0071C834  85 C0                     TEST EAX,EAX
0071C836  57                        PUSH EDI
0071C837  74 33                     JZ 0x0071c86c
0071C839  C7 41 70 01 00 00 00      MOV dword ptr [ECX + 0x70],0x1
0071C840  C7 40 04 00 00 00 00      MOV dword ptr [EAX + 0x4],0x0
LAB_0071c847:
0071C847  8B 41 24                  MOV EAX,dword ptr [ECX + 0x24]
0071C84A  8B 70 04                  MOV ESI,dword ptr [EAX + 0x4]
0071C84D  8B 50 0C                  MOV EDX,dword ptr [EAX + 0xc]
0071C850  3B F2                     CMP ESI,EDX
0071C852  73 18                     JNC 0x0071c86c
0071C854  8B 50 08                  MOV EDX,dword ptr [EAX + 0x8]
0071C857  8B 78 1C                  MOV EDI,dword ptr [EAX + 0x1c]
0071C85A  0F AF D6                  IMUL EDX,ESI
0071C85D  8D 76 01                  LEA ESI,[ESI + 0x1]
0071C860  03 D7                     ADD EDX,EDI
0071C862  89 70 04                  MOV dword ptr [EAX + 0x4],ESI
0071C865  74 05                     JZ 0x0071c86c
0071C867  FF 42 60                  INC dword ptr [EDX + 0x60]
0071C86A  EB DB                     JMP 0x0071c847
LAB_0071c86c:
0071C86C  5F                        POP EDI
0071C86D  5E                        POP ESI
0071C86E  C3                        RET
