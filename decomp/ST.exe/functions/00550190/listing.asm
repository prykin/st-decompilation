FUN_00550190:
00550190  8B 81 E4 00 00 00         MOV EAX,dword ptr [ECX + 0xe4]
00550196  8B 51 34                  MOV EDX,dword ptr [ECX + 0x34]
00550199  40                        INC EAX
0055019A  C7 41 28 01 00 00 00      MOV dword ptr [ECX + 0x28],0x1
005501A1  89 81 E4 00 00 00         MOV dword ptr [ECX + 0xe4],EAX
005501A7  2B C2                     SUB EAX,EDX
005501A9  3D 70 17 00 00            CMP EAX,0x1770
005501AE  75 0F                     JNZ 0x005501bf
005501B0  8B 0D DC 16 80 00         MOV ECX,dword ptr [0x008016dc]
005501B6  85 C9                     TEST ECX,ECX
005501B8  74 05                     JZ 0x005501bf
005501BA  E9 4E 1F EB FF            JMP 0x0040210d
LAB_005501bf:
005501BF  C3                        RET
