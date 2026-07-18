__umatherr:
00735DE0  55                        PUSH EBP
00735DE1  8B EC                     MOV EBP,ESP
00735DE3  83 EC 20                  SUB ESP,0x20
00735DE6  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00735DE9  50                        PUSH EAX
00735DEA  E8 D1 00 00 00            CALL 0x00735ec0
00735DEF  83 C4 04                  ADD ESP,0x4
00735DF2  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
00735DF5  83 7D E4 00               CMP dword ptr [EBP + -0x1c],0x0
00735DF9  74 5C                     JZ 0x00735e57
00735DFB  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00735DFE  89 4D E0                  MOV dword ptr [EBP + -0x20],ECX
00735E01  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
00735E04  89 55 E8                  MOV dword ptr [EBP + -0x18],EDX
00735E07  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
00735E0A  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
00735E0D  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
00735E10  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
00735E13  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
00735E16  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
00735E19  8B 45 20                  MOV EAX,dword ptr [EBP + 0x20]
00735E1C  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
00735E1F  8B 4D 24                  MOV ECX,dword ptr [EBP + 0x24]
00735E22  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
00735E25  68 FF FF 00 00            PUSH 0xffff
00735E2A  8B 55 28                  MOV EDX,dword ptr [EBP + 0x28]
00735E2D  52                        PUSH EDX
00735E2E  E8 3D 04 00 00            CALL 0x00736270
00735E33  83 C4 08                  ADD ESP,0x8
00735E36  8D 45 E0                  LEA EAX,[EBP + -0x20]
00735E39  50                        PUSH EAX
00735E3A  E8 71 A8 00 00            CALL 0x007406b0
00735E3F  83 C4 04                  ADD ESP,0x4
00735E42  85 C0                     TEST EAX,EAX
00735E44  75 0C                     JNZ 0x00735e52
00735E46  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00735E49  51                        PUSH ECX
00735E4A  E8 31 00 00 00            CALL 0x00735e80
00735E4F  83 C4 04                  ADD ESP,0x4
LAB_00735e52:
00735E52  DD 45 F8                  FLD double ptr [EBP + -0x8]
00735E55  EB 20                     JMP 0x00735e77
LAB_00735e57:
00735E57  68 FF FF 00 00            PUSH 0xffff
00735E5C  8B 55 28                  MOV EDX,dword ptr [EBP + 0x28]
00735E5F  52                        PUSH EDX
00735E60  E8 0B 04 00 00            CALL 0x00736270
00735E65  83 C4 08                  ADD ESP,0x8
00735E68  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00735E6B  50                        PUSH EAX
00735E6C  E8 0F 00 00 00            CALL 0x00735e80
00735E71  83 C4 04                  ADD ESP,0x4
00735E74  DD 45 20                  FLD double ptr [EBP + 0x20]
LAB_00735e77:
00735E77  8B E5                     MOV ESP,EBP
00735E79  5D                        POP EBP
00735E7A  C3                        RET
