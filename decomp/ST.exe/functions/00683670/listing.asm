FUN_00683670:
00683670  A1 BC 89 84 00            MOV EAX,[0x008489bc]
00683675  8B 0D C0 89 84 00         MOV ECX,dword ptr [0x008489c0]
0068367B  85 C0                     TEST EAX,EAX
0068367D  74 04                     JZ 0x00683683
0068367F  85 C9                     TEST ECX,ECX
00683681  75 27                     JNZ 0x006836aa
LAB_00683683:
00683683  A1 B8 89 84 00            MOV EAX,[0x008489b8]
00683688  85 C0                     TEST EAX,EAX
0068368A  74 0B                     JZ 0x00683697
0068368C  85 C9                     TEST ECX,ECX
0068368E  74 07                     JZ 0x00683697
00683690  8B 80 06 01 00 00         MOV EAX,dword ptr [EAX + 0x106]
00683696  C3                        RET
LAB_00683697:
00683697  A1 B4 89 84 00            MOV EAX,[0x008489b4]
0068369C  85 C0                     TEST EAX,EAX
0068369E  74 08                     JZ 0x006836a8
006836A0  85 C9                     TEST ECX,ECX
006836A2  74 04                     JZ 0x006836a8
006836A4  8B 40 4E                  MOV EAX,dword ptr [EAX + 0x4e]
006836A7  C3                        RET
LAB_006836a8:
006836A8  33 C0                     XOR EAX,EAX
LAB_006836aa:
006836AA  C3                        RET
