FUN_007098a0:
007098A0  55                        PUSH EBP
007098A1  8B EC                     MOV EBP,ESP
007098A3  51                        PUSH ECX
007098A4  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
007098A7  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
007098AA  33 C0                     XOR EAX,EAX
007098AC  53                        PUSH EBX
007098AD  89 01                     MOV dword ptr [ECX],EAX
007098AF  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
007098B2  C7 02 FF FF FF FF         MOV dword ptr [EDX],0xffffffff
007098B8  56                        PUSH ESI
007098B9  8B 51 04                  MOV EDX,dword ptr [ECX + 0x4]
007098BC  57                        PUSH EDI
007098BD  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
007098C0  89 42 04                  MOV dword ptr [EDX + 0x4],EAX
LAB_007098c3:
007098C3  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
007098C6  8B 40 04                  MOV EAX,dword ptr [EAX + 0x4]
007098C9  8B 48 04                  MOV ECX,dword ptr [EAX + 0x4]
007098CC  8B 50 0C                  MOV EDX,dword ptr [EAX + 0xc]
007098CF  3B CA                     CMP ECX,EDX
007098D1  0F 83 AA 00 00 00         JNC 0x00709981
007098D7  8B 78 08                  MOV EDI,dword ptr [EAX + 0x8]
007098DA  8B 50 1C                  MOV EDX,dword ptr [EAX + 0x1c]
007098DD  0F AF F9                  IMUL EDI,ECX
007098E0  8D 49 01                  LEA ECX,[ECX + 0x1]
007098E3  03 FA                     ADD EDI,EDX
007098E5  89 48 04                  MOV dword ptr [EAX + 0x4],ECX
007098E8  0F 84 93 00 00 00         JZ 0x00709981
007098EE  8A 17                     MOV DL,byte ptr [EDI]
007098F0  8A 45 0C                  MOV AL,byte ptr [EBP + 0xc]
007098F3  3A D0                     CMP DL,AL
007098F5  75 47                     JNZ 0x0070993e
007098F7  8B 75 10                  MOV ESI,dword ptr [EBP + 0x10]
007098FA  8D 47 01                  LEA EAX,[EDI + 0x1]
LAB_007098fd:
007098FD  8A 18                     MOV BL,byte ptr [EAX]
007098FF  8A CB                     MOV CL,BL
00709901  3A 1E                     CMP BL,byte ptr [ESI]
00709903  75 1C                     JNZ 0x00709921
00709905  84 C9                     TEST CL,CL
00709907  74 14                     JZ 0x0070991d
00709909  8A 58 01                  MOV BL,byte ptr [EAX + 0x1]
0070990C  8A CB                     MOV CL,BL
0070990E  3A 5E 01                  CMP BL,byte ptr [ESI + 0x1]
00709911  75 0E                     JNZ 0x00709921
00709913  83 C0 02                  ADD EAX,0x2
00709916  83 C6 02                  ADD ESI,0x2
00709919  84 C9                     TEST CL,CL
0070991B  75 E0                     JNZ 0x007098fd
LAB_0070991d:
0070991D  33 C0                     XOR EAX,EAX
0070991F  EB 05                     JMP 0x00709926
LAB_00709921:
00709921  1B C0                     SBB EAX,EAX
00709923  83 D8 FF                  SBB EAX,-0x1
LAB_00709926:
00709926  85 C0                     TEST EAX,EAX
00709928  75 14                     JNZ 0x0070993e
0070992A  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
0070992D  8B 47 21                  MOV EAX,dword ptr [EDI + 0x21]
00709930  3B C8                     CMP ECX,EAX
00709932  74 0F                     JZ 0x00709943
00709934  80 FA 08                  CMP DL,0x8
00709937  74 05                     JZ 0x0070993e
00709939  80 FA 1F                  CMP DL,0x1f
0070993C  75 05                     JNZ 0x00709943
LAB_0070993e:
0070993E  FF 45 FC                  INC dword ptr [EBP + -0x4]
00709941  EB 80                     JMP 0x007098c3
LAB_00709943:
00709943  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
00709946  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00709949  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0070994C  89 10                     MOV dword ptr [EAX],EDX
0070994E  8B 49 04                  MOV ECX,dword ptr [ECX + 0x4]
00709951  3B 51 0C                  CMP EDX,dword ptr [ECX + 0xc]
00709954  73 1A                     JNC 0x00709970
00709956  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
00709959  0F AF C2                  IMUL EAX,EDX
0070995C  8B 51 1C                  MOV EDX,dword ptr [ECX + 0x1c]
0070995F  03 C2                     ADD EAX,EDX
00709961  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
00709964  89 02                     MOV dword ptr [EDX],EAX
00709966  8B 47 29                  MOV EAX,dword ptr [EDI + 0x29]
00709969  5F                        POP EDI
0070996A  5E                        POP ESI
0070996B  5B                        POP EBX
0070996C  8B E5                     MOV ESP,EBP
0070996E  5D                        POP EBP
0070996F  C3                        RET
LAB_00709970:
00709970  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
00709973  33 C0                     XOR EAX,EAX
00709975  89 02                     MOV dword ptr [EDX],EAX
00709977  8B 47 29                  MOV EAX,dword ptr [EDI + 0x29]
0070997A  5F                        POP EDI
0070997B  5E                        POP ESI
0070997C  5B                        POP EBX
0070997D  8B E5                     MOV ESP,EBP
0070997F  5D                        POP EBP
00709980  C3                        RET
LAB_00709981:
00709981  5F                        POP EDI
00709982  5E                        POP ESI
00709983  33 C0                     XOR EAX,EAX
00709985  5B                        POP EBX
00709986  8B E5                     MOV ESP,EBP
00709988  5D                        POP EBP
00709989  C3                        RET
