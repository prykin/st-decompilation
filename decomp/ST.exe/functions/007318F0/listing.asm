FUN_007318f0:
007318F0  55                        PUSH EBP
007318F1  8B EC                     MOV EBP,ESP
007318F3  51                        PUSH ECX
007318F4  C7 45 FC FE FF FF FF      MOV dword ptr [EBP + -0x4],0xfffffffe
007318FB  E8 D0 17 00 00            CALL 0x007330d0
00731900  85 C0                     TEST EAX,EAX
00731902  7D 07                     JGE 0x0073190b
00731904  C7 45 FC FC FF FF FF      MOV dword ptr [EBP + -0x4],0xfffffffc
LAB_0073190b:
0073190B  6A 00                     PUSH 0x0
0073190D  6A 00                     PUSH 0x0
0073190F  A1 C4 A5 85 00            MOV EAX,[0x0085a5c4]
00731914  50                        PUSH EAX
00731915  FF 15 9C BB 85 00         CALL dword ptr [0x0085bb9c]
0073191B  85 C0                     TEST EAX,EAX
0073191D  75 28                     JNZ 0x00731947
0073191F  FF 15 CC BB 85 00         CALL dword ptr [0x0085bbcc]
00731925  83 F8 78                  CMP EAX,0x78
00731928  75 16                     JNZ 0x00731940
0073192A  C7 05 4C 71 85 00 78 00 00 00  MOV dword ptr [0x0085714c],0x78
00731934  C7 05 48 71 85 00 28 00 00 00  MOV dword ptr [0x00857148],0x28
0073193E  EB 07                     JMP 0x00731947
LAB_00731940:
00731940  C7 45 FC FC FF FF FF      MOV dword ptr [EBP + -0x4],0xfffffffc
LAB_00731947:
00731947  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0073194A  8B E5                     MOV ESP,EBP
0073194C  5D                        POP EBP
0073194D  C3                        RET
