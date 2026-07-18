FUN_00730ea0:
00730EA0  55                        PUSH EBP
00730EA1  8B EC                     MOV EBP,ESP
00730EA3  51                        PUSH ECX
00730EA4  83 7D 08 00               CMP dword ptr [EBP + 0x8],0x0
00730EA8  7C 06                     JL 0x00730eb0
00730EAA  83 7D 08 03               CMP dword ptr [EBP + 0x8],0x3
00730EAE  7C 05                     JL 0x00730eb5
LAB_00730eb0:
00730EB0  83 C8 FF                  OR EAX,0xffffffff
00730EB3  EB 3E                     JMP 0x00730ef3
LAB_00730eb5:
00730EB5  83 7D 0C FF               CMP dword ptr [EBP + 0xc],-0x1
00730EB9  75 0C                     JNZ 0x00730ec7
00730EBB  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00730EBE  8B 04 85 A0 14 7F 00      MOV EAX,dword ptr [EAX*0x4 + 0x7f14a0]
00730EC5  EB 2C                     JMP 0x00730ef3
LAB_00730ec7:
00730EC7  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00730ECA  83 E1 F8                  AND ECX,0xfffffff8
00730ECD  85 C9                     TEST ECX,ECX
00730ECF  74 05                     JZ 0x00730ed6
00730ED1  83 C8 FF                  OR EAX,0xffffffff
00730ED4  EB 1D                     JMP 0x00730ef3
LAB_00730ed6:
00730ED6  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00730ED9  8B 04 95 A0 14 7F 00      MOV EAX,dword ptr [EDX*0x4 + 0x7f14a0]
00730EE0  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00730EE3  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00730EE6  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
00730EE9  89 14 8D A0 14 7F 00      MOV dword ptr [ECX*0x4 + 0x7f14a0],EDX
00730EF0  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
LAB_00730ef3:
00730EF3  8B E5                     MOV ESP,EBP
00730EF5  5D                        POP EBP
00730EF6  C3                        RET
