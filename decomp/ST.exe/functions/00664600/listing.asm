FUN_00664600:
00664600  55                        PUSH EBP
00664601  8B EC                     MOV EBP,ESP
00664603  56                        PUSH ESI
00664604  8B F1                     MOV ESI,ECX
00664606  8B 8E 17 02 00 00         MOV ECX,dword ptr [ESI + 0x217]
0066460C  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
0066460F  85 C0                     TEST EAX,EAX
00664611  74 20                     JZ 0x00664633
00664613  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00664616  3B D0                     CMP EDX,EAX
00664618  7D 19                     JGE 0x00664633
0066461A  85 D2                     TEST EDX,EDX
0066461C  7C 15                     JL 0x00664633
0066461E  52                        PUSH EDX
0066461F  51                        PUSH ECX
00664620  E8 4B C6 04 00            CALL 0x006b0c70
00664625  8B 86 17 02 00 00         MOV EAX,dword ptr [ESI + 0x217]
0066462B  5E                        POP ESI
0066462C  8B 40 0C                  MOV EAX,dword ptr [EAX + 0xc]
0066462F  5D                        POP EBP
00664630  C2 04 00                  RET 0x4
LAB_00664633:
00664633  83 C8 FF                  OR EAX,0xffffffff
00664636  5E                        POP ESI
00664637  5D                        POP EBP
00664638  C2 04 00                  RET 0x4
