FUN_0062f0d0:
0062F0D0  55                        PUSH EBP
0062F0D1  8B EC                     MOV EBP,ESP
0062F0D3  53                        PUSH EBX
0062F0D4  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
0062F0D7  56                        PUSH ESI
0062F0D8  57                        PUSH EDI
0062F0D9  8B F9                     MOV EDI,ECX
0062F0DB  8B 84 9F E5 01 00 00      MOV EAX,dword ptr [EDI + EBX*0x4 + 0x1e5]
0062F0E2  85 C0                     TEST EAX,EAX
0062F0E4  74 41                     JZ 0x0062f127
0062F0E6  8B 70 10                  MOV ESI,dword ptr [EAX + 0x10]
0062F0E9  85 F6                     TEST ESI,ESI
0062F0EB  74 3A                     JZ 0x0062f127
0062F0ED  6A 0E                     PUSH 0xe
0062F0EF  8B CE                     MOV ECX,ESI
0062F0F1  E8 B0 69 DD FF            CALL 0x00405aa6
0062F0F6  A1 38 2A 80 00            MOV EAX,[0x00802a38]
0062F0FB  8B 88 E4 00 00 00         MOV ECX,dword ptr [EAX + 0xe4]
0062F101  51                        PUSH ECX
0062F102  6A 0E                     PUSH 0xe
0062F104  8B CE                     MOV ECX,ESI
0062F106  E8 35 61 DD FF            CALL 0x00405240
0062F10B  8B 94 9F E5 01 00 00      MOV EDX,dword ptr [EDI + EBX*0x4 + 0x1e5]
0062F112  6A FF                     PUSH -0x1
0062F114  C6 42 3D 01               MOV byte ptr [EDX + 0x3d],0x1
0062F118  8B 46 18                  MOV EAX,dword ptr [ESI + 0x18]
0062F11B  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
0062F121  50                        PUSH EAX
0062F122  E8 B9 B2 0B 00            CALL 0x006ea3e0
LAB_0062f127:
0062F127  5F                        POP EDI
0062F128  5E                        POP ESI
0062F129  5B                        POP EBX
0062F12A  5D                        POP EBP
0062F12B  C2 04 00                  RET 0x4
