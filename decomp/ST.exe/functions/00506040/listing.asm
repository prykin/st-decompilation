FUN_00506040:
00506040  56                        PUSH ESI
00506041  8B F1                     MOV ESI,ECX
00506043  57                        PUSH EDI
00506044  B9 46 00 00 00            MOV ECX,0x46
00506049  33 C0                     XOR EAX,EAX
0050604B  8D BE 4C 05 00 00         LEA EDI,[ESI + 0x54c]
00506051  F3 AB                     STOSD.REP ES:EDI
00506053  80 BE FA 0B 00 00 01      CMP byte ptr [ESI + 0xbfa],0x1
0050605A  0F 85 01 01 00 00         JNZ 0x00506161
00506060  80 3D 4E 87 80 00 03      CMP byte ptr [0x0080874e],0x3
00506067  0F 85 BD 00 00 00         JNZ 0x0050612a
0050606D  8B 46 50                  MOV EAX,dword ptr [ESI + 0x50]
00506070  8B 8E A8 00 00 00         MOV ECX,dword ptr [ESI + 0xa8]
00506076  8B 96 7C 07 00 00         MOV EDX,dword ptr [ESI + 0x77c]
0050607C  05 81 00 00 00            ADD EAX,0x81
00506081  83 C1 08                  ADD ECX,0x8
00506084  6A 01                     PUSH 0x1
00506086  52                        PUSH EDX
00506087  89 86 68 05 00 00         MOV dword ptr [ESI + 0x568],EAX
0050608D  89 8E 6C 05 00 00         MOV dword ptr [ESI + 0x56c],ECX
00506093  C7 86 70 05 00 00 64 00 00 00  MOV dword ptr [ESI + 0x570],0x64
0050609D  C7 86 74 05 00 00 3C 00 00 00  MOV dword ptr [ESI + 0x574],0x3c
005060A7  E8 F4 52 20 00            CALL 0x0070b3a0
005060AC  8B 4E 50                  MOV ECX,dword ptr [ESI + 0x50]
005060AF  8B 96 A8 00 00 00         MOV EDX,dword ptr [ESI + 0xa8]
005060B5  89 86 78 05 00 00         MOV dword ptr [ESI + 0x578],EAX
005060BB  8B 86 70 05 00 00         MOV EAX,dword ptr [ESI + 0x570]
005060C1  89 86 7C 05 00 00         MOV dword ptr [ESI + 0x57c],EAX
005060C7  8B 86 7C 07 00 00         MOV EAX,dword ptr [ESI + 0x77c]
005060CD  81 C1 C7 00 00 00         ADD ECX,0xc7
005060D3  83 C2 06                  ADD EDX,0x6
005060D6  6A 03                     PUSH 0x3
005060D8  50                        PUSH EAX
005060D9  C7 86 80 05 00 00 87 4E 00 00  MOV dword ptr [ESI + 0x580],0x4e87
005060E3  89 8E 84 05 00 00         MOV dword ptr [ESI + 0x584],ECX
005060E9  89 96 88 05 00 00         MOV dword ptr [ESI + 0x588],EDX
005060EF  C7 86 8C 05 00 00 20 00 00 00  MOV dword ptr [ESI + 0x58c],0x20
005060F9  C7 86 90 05 00 00 35 00 00 00  MOV dword ptr [ESI + 0x590],0x35
00506103  E8 98 52 20 00            CALL 0x0070b3a0
00506108  8B 8E 8C 05 00 00         MOV ECX,dword ptr [ESI + 0x58c]
0050610E  83 C4 10                  ADD ESP,0x10
00506111  89 86 94 05 00 00         MOV dword ptr [ESI + 0x594],EAX
00506117  89 8E 98 05 00 00         MOV dword ptr [ESI + 0x598],ECX
0050611D  C7 86 9C 05 00 00 F0 2E 00 00  MOV dword ptr [ESI + 0x59c],0x2ef0
00506127  5F                        POP EDI
00506128  5E                        POP ESI
00506129  C3                        RET
LAB_0050612a:
0050612A  8B 56 54                  MOV EDX,dword ptr [ESI + 0x54]
0050612D  8B 86 AC 00 00 00         MOV EAX,dword ptr [ESI + 0xac]
00506133  8B 8E 80 00 00 00         MOV ECX,dword ptr [ESI + 0x80]
00506139  89 96 68 05 00 00         MOV dword ptr [ESI + 0x568],EDX
0050613F  8B 96 D8 00 00 00         MOV EDX,dword ptr [ESI + 0xd8]
00506145  89 86 6C 05 00 00         MOV dword ptr [ESI + 0x56c],EAX
0050614B  89 8E 70 05 00 00         MOV dword ptr [ESI + 0x570],ECX
00506151  89 96 74 05 00 00         MOV dword ptr [ESI + 0x574],EDX
00506157  C7 86 80 05 00 00 87 4E 00 00  MOV dword ptr [ESI + 0x580],0x4e87
LAB_00506161:
00506161  5F                        POP EDI
00506162  5E                        POP ESI
00506163  C3                        RET
