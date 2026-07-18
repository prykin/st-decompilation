__cftof_g:
00735160  55                        PUSH EBP
00735161  8B EC                     MOV EBP,ESP
00735163  51                        PUSH ECX
00735164  C6 05 FC 71 85 00 01      MOV byte ptr [0x008571fc],0x1
0073516B  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
0073516E  50                        PUSH EAX
0073516F  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00735172  51                        PUSH ECX
00735173  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00735176  52                        PUSH EDX
00735177  E8 14 FD FF FF            CALL 0x00734e90
0073517C  83 C4 0C                  ADD ESP,0xc
0073517F  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00735182  C6 05 FC 71 85 00 00      MOV byte ptr [0x008571fc],0x0
00735189  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0073518C  8B E5                     MOV ESP,EBP
0073518E  5D                        POP EBP
0073518F  C3                        RET
