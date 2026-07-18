__cftoe_g:
00735120  55                        PUSH EBP
00735121  8B EC                     MOV EBP,ESP
00735123  51                        PUSH ECX
00735124  C6 05 FC 71 85 00 01      MOV byte ptr [0x008571fc],0x1
0073512B  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
0073512E  50                        PUSH EAX
0073512F  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
00735132  51                        PUSH ECX
00735133  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
00735136  52                        PUSH EDX
00735137  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0073513A  50                        PUSH EAX
0073513B  E8 90 FB FF FF            CALL 0x00734cd0
00735140  83 C4 10                  ADD ESP,0x10
00735143  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00735146  C6 05 FC 71 85 00 00      MOV byte ptr [0x008571fc],0x0
0073514D  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00735150  8B E5                     MOV ESP,EBP
00735152  5D                        POP EBP
00735153  C3                        RET
