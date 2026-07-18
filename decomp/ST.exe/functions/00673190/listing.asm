FUN_00673190:
00673190  55                        PUSH EBP
00673191  8B EC                     MOV EBP,ESP
00673193  A1 14 19 81 00            MOV EAX,[0x00811914]
00673198  85 C0                     TEST EAX,EAX
0067319A  7E 20                     JLE 0x006731bc
0067319C  8B 15 5C 75 85 00         MOV EDX,dword ptr [0x0085755c]
006731A2  8A 4D 08                  MOV CL,byte ptr [EBP + 0x8]
006731A5  48                        DEC EAX
006731A6  A3 14 19 81 00            MOV [0x00811914],EAX
006731AB  88 0C 02                  MOV byte ptr [EDX + EAX*0x1],CL
006731AE  C7 05 50 19 81 00 00 00 00 00  MOV dword ptr [0x00811950],0x0
006731B8  5D                        POP EBP
006731B9  C2 04 00                  RET 0x4
LAB_006731bc:
006731BC  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006731BF  A3 50 19 81 00            MOV [0x00811950],EAX
006731C4  5D                        POP EBP
006731C5  C2 04 00                  RET 0x4
