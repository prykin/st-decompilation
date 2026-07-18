FUN_00567180:
00567180  55                        PUSH EBP
00567181  8B EC                     MOV EBP,ESP
00567183  83 EC 48                  SUB ESP,0x48
00567186  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0056718B  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0056718E  8D 55 BC                  LEA EDX,[EBP + -0x44]
00567191  8D 4D B8                  LEA ECX,[EBP + -0x48]
00567194  6A 00                     PUSH 0x0
00567196  52                        PUSH EDX
00567197  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
0056719A  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005671A0  E8 4B 66 1C 00            CALL 0x0072d7f0
005671A5  83 C4 08                  ADD ESP,0x8
005671A8  85 C0                     TEST EAX,EAX
005671AA  75 31                     JNZ 0x005671dd
005671AC  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
005671AF  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
005671B2  6A 01                     PUSH 0x1
005671B4  51                        PUSH ECX
005671B5  C7 80 8B 0F 00 00 01 00 00 00  MOV dword ptr [EAX + 0xf8b],0x1
005671BF  E8 6C A3 15 00            CALL 0x006c1530
005671C4  68 00 00 20 41            PUSH 0x41200000
005671C9  E8 72 AF 15 00            CALL 0x006c2140
005671CE  8B 55 B8                  MOV EDX,dword ptr [EBP + -0x48]
005671D1  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
005671D7  8B E5                     MOV ESP,EBP
005671D9  5D                        POP EBP
005671DA  C2 04 00                  RET 0x4
LAB_005671dd:
005671DD  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
005671E0  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
005671E3  A3 F8 8D 85 00            MOV [0x00858df8],EAX
005671E8  C7 81 8B 0F 00 00 00 00 00 00  MOV dword ptr [ECX + 0xf8b],0x0
005671F2  8B E5                     MOV ESP,EBP
005671F4  5D                        POP EBP
005671F5  C2 04 00                  RET 0x4
