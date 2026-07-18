FUN_006775e0:
006775E0  55                        PUSH EBP
006775E1  8B EC                     MOV EBP,ESP
006775E3  83 EC 48                  SUB ESP,0x48
006775E6  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
006775EB  56                        PUSH ESI
006775EC  8D 55 BC                  LEA EDX,[EBP + -0x44]
006775EF  8D 4D B8                  LEA ECX,[EBP + -0x48]
006775F2  6A 00                     PUSH 0x0
006775F4  52                        PUSH EDX
006775F5  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
006775FC  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
006775FF  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00677605  E8 E6 61 0B 00            CALL 0x0072d7f0
0067760A  8B F0                     MOV ESI,EAX
0067760C  83 C4 08                  ADD ESP,0x8
0067760F  85 F6                     TEST ESI,ESI
00677611  75 6A                     JNZ 0x0067767d
00677613  6A 0A                     PUSH 0xa
00677615  6A 02                     PUSH 0x2
00677617  6A 0A                     PUSH 0xa
00677619  50                        PUSH EAX
0067761A  E8 71 6C 03 00            CALL 0x006ae290
0067761F  8B F0                     MOV ESI,EAX
00677621  8B 45 34                  MOV EAX,dword ptr [EBP + 0x34]
00677624  85 C0                     TEST EAX,EAX
00677626  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
00677629  B8 52 18 40 00            MOV EAX,0x401852
0067762E  75 05                     JNZ 0x00677635
00677630  B8 90 34 40 00            MOV EAX,0x403490
LAB_00677635:
00677635  8B 4D 2C                  MOV ECX,dword ptr [EBP + 0x2c]
00677638  8B 55 28                  MOV EDX,dword ptr [EBP + 0x28]
0067763B  6A 00                     PUSH 0x0
0067763D  56                        PUSH ESI
0067763E  50                        PUSH EAX
0067763F  8B 45 30                  MOV EAX,dword ptr [EBP + 0x30]
00677642  50                        PUSH EAX
00677643  8B 45 24                  MOV EAX,dword ptr [EBP + 0x24]
00677646  51                        PUSH ECX
00677647  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
0067764A  52                        PUSH EDX
0067764B  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
0067764E  50                        PUSH EAX
0067764F  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
00677652  51                        PUSH ECX
00677653  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
00677656  52                        PUSH EDX
00677657  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
0067765A  50                        PUSH EAX
0067765B  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0067765E  51                        PUSH ECX
0067765F  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00677662  52                        PUSH EDX
00677663  50                        PUSH EAX
00677664  51                        PUSH ECX
00677665  E8 8E 9C D8 FF            CALL 0x004012f8
0067766A  8B 55 B8                  MOV EDX,dword ptr [EBP + -0x48]
0067766D  83 C4 38                  ADD ESP,0x38
00677670  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00677676  8B C6                     MOV EAX,ESI
00677678  5E                        POP ESI
00677679  8B E5                     MOV ESP,EBP
0067767B  5D                        POP EBP
0067767C  C3                        RET
LAB_0067767d:
0067767D  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
00677680  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00677685  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00677688  85 C0                     TEST EAX,EAX
0067768A  74 06                     JZ 0x00677692
0067768C  50                        PUSH EAX
0067768D  E8 7E 6A 03 00            CALL 0x006ae110
LAB_00677692:
00677692  68 08 03 00 00            PUSH 0x308
00677697  68 58 2D 7D 00            PUSH 0x7d2d58
0067769C  6A 00                     PUSH 0x0
0067769E  56                        PUSH ESI
0067769F  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
006776A6  E8 95 E7 02 00            CALL 0x006a5e40
006776AB  33 C0                     XOR EAX,EAX
006776AD  5E                        POP ESI
006776AE  8B E5                     MOV ESP,EBP
006776B0  5D                        POP EBP
006776B1  C3                        RET
