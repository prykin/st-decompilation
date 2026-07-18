FUN_006048e0:
006048E0  53                        PUSH EBX
006048E1  56                        PUSH ESI
006048E2  57                        PUSH EDI
006048E3  8B F9                     MOV EDI,ECX
006048E5  33 DB                     XOR EBX,EBX
006048E7  8B 87 15 02 00 00         MOV EAX,dword ptr [EDI + 0x215]
006048ED  85 C0                     TEST EAX,EAX
006048EF  74 4E                     JZ 0x0060493f
006048F1  8B 40 0C                  MOV EAX,dword ptr [EAX + 0xc]
006048F4  85 C0                     TEST EAX,EAX
006048F6  7E 47                     JLE 0x0060493f
006048F8  8D 70 FF                  LEA ESI,[EAX + -0x1]
006048FB  85 F6                     TEST ESI,ESI
006048FD  7C 40                     JL 0x0060493f
LAB_006048ff:
006048FF  8B 8F 15 02 00 00         MOV ECX,dword ptr [EDI + 0x215]
00604905  3B 71 0C                  CMP ESI,dword ptr [ECX + 0xc]
00604908  73 0D                     JNC 0x00604917
0060490A  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
0060490D  8B 51 1C                  MOV EDX,dword ptr [ECX + 0x1c]
00604910  0F AF C6                  IMUL EAX,ESI
00604913  03 C2                     ADD EAX,EDX
00604915  EB 02                     JMP 0x00604919
LAB_00604917:
00604917  33 C0                     XOR EAX,EAX
LAB_00604919:
00604919  83 78 10 0A               CMP dword ptr [EAX + 0x10],0xa
0060491D  75 10                     JNZ 0x0060492f
0060491F  8B 40 14                  MOV EAX,dword ptr [EAX + 0x14]
00604922  8B CF                     MOV ECX,EDI
00604924  50                        PUSH EAX
00604925  E8 0D 03 E0 FF            CALL 0x00404c37
0060492A  85 C0                     TEST EAX,EAX
0060492C  74 01                     JZ 0x0060492f
0060492E  43                        INC EBX
LAB_0060492f:
0060492F  8B 8F 15 02 00 00         MOV ECX,dword ptr [EDI + 0x215]
00604935  56                        PUSH ESI
00604936  51                        PUSH ECX
00604937  E8 34 C3 0A 00            CALL 0x006b0c70
0060493C  4E                        DEC ESI
0060493D  79 C0                     JNS 0x006048ff
LAB_0060493f:
0060493F  5F                        POP EDI
00604940  8B C3                     MOV EAX,EBX
00604942  5E                        POP ESI
00604943  5B                        POP EBX
00604944  C3                        RET
