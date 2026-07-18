FUN_0062ca20:
0062CA20  55                        PUSH EBP
0062CA21  8B EC                     MOV EBP,ESP
0062CA23  53                        PUSH EBX
0062CA24  56                        PUSH ESI
0062CA25  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
0062CA28  33 C0                     XOR EAX,EAX
0062CA2A  85 F6                     TEST ESI,ESI
0062CA2C  BB 6D 00 00 00            MOV EBX,0x6d
0062CA31  74 25                     JZ 0x0062ca58
0062CA33  53                        PUSH EBX
0062CA34  E8 37 E2 07 00            CALL 0x006aac70
0062CA39  85 C0                     TEST EAX,EAX
0062CA3B  75 02                     JNZ 0x0062ca3f
0062CA3D  33 DB                     XOR EBX,EBX
LAB_0062ca3f:
0062CA3F  8B CB                     MOV ECX,EBX
0062CA41  57                        PUSH EDI
0062CA42  8B D1                     MOV EDX,ECX
0062CA44  8B F8                     MOV EDI,EAX
0062CA46  C1 E9 02                  SHR ECX,0x2
0062CA49  F3 A5                     MOVSD.REP ES:EDI,ESI
0062CA4B  8B CA                     MOV ECX,EDX
0062CA4D  83 E1 03                  AND ECX,0x3
0062CA50  F3 A4                     MOVSB.REP ES:EDI,ESI
0062CA52  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0062CA55  5F                        POP EDI
0062CA56  89 19                     MOV dword ptr [ECX],EBX
LAB_0062ca58:
0062CA58  5E                        POP ESI
0062CA59  5B                        POP EBX
0062CA5A  5D                        POP EBP
0062CA5B  C3                        RET
