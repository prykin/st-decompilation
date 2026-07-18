__mbsnbicoll:
00746120  55                        PUSH EBP
00746121  8B EC                     MOV EBP,ESP
00746123  51                        PUSH ECX
00746124  83 7D 10 00               CMP dword ptr [EBP + 0x10],0x0
00746128  75 04                     JNZ 0x0074612e
0074612A  33 C0                     XOR EAX,EAX
0074612C  EB 3D                     JMP 0x0074616b
LAB_0074612e:
0074612E  A1 E0 A2 85 00            MOV EAX,[0x0085a2e0]
00746133  50                        PUSH EAX
00746134  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
00746137  51                        PUSH ECX
00746138  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0074613B  52                        PUSH EDX
0074613C  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
0074613F  50                        PUSH EAX
00746140  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00746143  51                        PUSH ECX
00746144  6A 01                     PUSH 0x1
00746146  8B 15 84 A5 85 00         MOV EDX,dword ptr [0x0085a584]
0074614C  52                        PUSH EDX
0074614D  E8 CE 00 00 00            CALL 0x00746220
00746152  83 C4 1C                  ADD ESP,0x1c
00746155  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00746158  83 7D FC 00               CMP dword ptr [EBP + -0x4],0x0
0074615C  75 07                     JNZ 0x00746165
0074615E  B8 FF FF FF 7F            MOV EAX,0x7fffffff
00746163  EB 06                     JMP 0x0074616b
LAB_00746165:
00746165  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00746168  83 E8 02                  SUB EAX,0x2
LAB_0074616b:
0074616B  8B E5                     MOV ESP,EBP
0074616D  5D                        POP EBP
0074616E  C3                        RET
