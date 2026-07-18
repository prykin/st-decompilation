FUN_00719960:
00719960  55                        PUSH EBP
00719961  8B EC                     MOV EBP,ESP
00719963  83 EC 10                  SUB ESP,0x10
00719966  56                        PUSH ESI
00719967  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
0071996A  8B 06                     MOV EAX,dword ptr [ESI]
0071996C  85 C0                     TEST EAX,EAX
0071996E  75 0A                     JNZ 0x0071997a
00719970  B8 01 00 00 00            MOV EAX,0x1
00719975  5E                        POP ESI
00719976  8B E5                     MOV ESP,EBP
00719978  5D                        POP EBP
00719979  C3                        RET
LAB_0071997a:
0071997A  33 C9                     XOR ECX,ECX
0071997C  8D 55 F0                  LEA EDX,[EBP + -0x10]
0071997F  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
00719982  52                        PUSH EDX
00719983  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
00719986  68 00 01 00 00            PUSH 0x100
0071998B  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
0071998E  68 14 08 00 00            PUSH 0x814
00719993  50                        PUSH EAX
00719994  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
00719997  C7 45 F8 03 00 00 00      MOV dword ptr [EBP + -0x8],0x3
0071999E  FF 15 C0 BE 85 00         CALL dword ptr [0x0085bec0]
007199A4  85 C0                     TEST EAX,EAX
007199A6  74 14                     JZ 0x007199bc
007199A8  56                        PUSH ESI
007199A9  50                        PUSH EAX
007199AA  E8 E1 02 00 00            CALL 0x00719c90
007199AF  83 C4 08                  ADD ESP,0x8
007199B2  B8 01 00 00 00            MOV EAX,0x1
007199B7  5E                        POP ESI
007199B8  8B E5                     MOV ESP,EBP
007199BA  5D                        POP EBP
007199BB  C3                        RET
LAB_007199bc:
007199BC  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
007199BF  85 C0                     TEST EAX,EAX
007199C1  A3 38 70 85 00            MOV [0x00857038],EAX
007199C6  75 13                     JNZ 0x007199db
007199C8  56                        PUSH ESI
007199C9  E8 92 02 00 00            CALL 0x00719c60
007199CE  83 C4 04                  ADD ESP,0x4
007199D1  B8 01 00 00 00            MOV EAX,0x1
007199D6  5E                        POP ESI
007199D7  8B E5                     MOV ESP,EBP
007199D9  5D                        POP EBP
007199DA  C3                        RET
LAB_007199db:
007199DB  33 C0                     XOR EAX,EAX
007199DD  5E                        POP ESI
007199DE  8B E5                     MOV ESP,EBP
007199E0  5D                        POP EBP
007199E1  C3                        RET
