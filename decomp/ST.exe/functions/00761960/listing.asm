FUN_00761960:
00761960  55                        PUSH EBP
00761961  8B EC                     MOV EBP,ESP
00761963  51                        PUSH ECX
00761964  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00761967  50                        PUSH EAX
00761968  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0076196B  51                        PUSH ECX
0076196C  FF 15 8C BC 85 00         CALL dword ptr [0x0085bc8c]
00761972  85 C0                     TEST EAX,EAX
00761974  75 0B                     JNZ 0x00761981
00761976  FF 15 CC BB 85 00         CALL dword ptr [0x0085bbcc]
0076197C  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0076197F  EB 07                     JMP 0x00761988
LAB_00761981:
00761981  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
LAB_00761988:
00761988  83 7D FC 00               CMP dword ptr [EBP + -0x4],0x0
0076198C  74 11                     JZ 0x0076199f
0076198E  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00761991  52                        PUSH EDX
00761992  E8 59 F2 FD FF            CALL 0x00740bf0
00761997  83 C4 04                  ADD ESP,0x4
0076199A  83 C8 FF                  OR EAX,0xffffffff
0076199D  EB 02                     JMP 0x007619a1
LAB_0076199f:
0076199F  33 C0                     XOR EAX,EAX
LAB_007619a1:
007619A1  8B E5                     MOV ESP,EBP
007619A3  5D                        POP EBP
007619A4  C3                        RET
