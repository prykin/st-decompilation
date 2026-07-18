FUN_0071c870:
0071C870  8B 41 24                  MOV EAX,dword ptr [ECX + 0x24]
0071C873  56                        PUSH ESI
0071C874  85 C0                     TEST EAX,EAX
0071C876  57                        PUSH EDI
0071C877  74 3B                     JZ 0x0071c8b4
0071C879  C7 41 70 01 00 00 00      MOV dword ptr [ECX + 0x70],0x1
0071C880  C7 40 04 00 00 00 00      MOV dword ptr [EAX + 0x4],0x0
LAB_0071c887:
0071C887  8B 51 24                  MOV EDX,dword ptr [ECX + 0x24]
0071C88A  8B 72 04                  MOV ESI,dword ptr [EDX + 0x4]
0071C88D  8B 42 0C                  MOV EAX,dword ptr [EDX + 0xc]
0071C890  3B F0                     CMP ESI,EAX
0071C892  73 20                     JNC 0x0071c8b4
0071C894  8B 42 08                  MOV EAX,dword ptr [EDX + 0x8]
0071C897  8B 7A 1C                  MOV EDI,dword ptr [EDX + 0x1c]
0071C89A  0F AF C6                  IMUL EAX,ESI
0071C89D  8D 76 01                  LEA ESI,[ESI + 0x1]
0071C8A0  03 C7                     ADD EAX,EDI
0071C8A2  89 72 04                  MOV dword ptr [EDX + 0x4],ESI
0071C8A5  74 0D                     JZ 0x0071c8b4
0071C8A7  8B 50 60                  MOV EDX,dword ptr [EAX + 0x60]
0071C8AA  85 D2                     TEST EDX,EDX
0071C8AC  74 D9                     JZ 0x0071c887
0071C8AE  4A                        DEC EDX
0071C8AF  89 50 60                  MOV dword ptr [EAX + 0x60],EDX
0071C8B2  EB D3                     JMP 0x0071c887
LAB_0071c8b4:
0071C8B4  5F                        POP EDI
0071C8B5  5E                        POP ESI
0071C8B6  C3                        RET
