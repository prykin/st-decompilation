___init_time:
00738C70  55                        PUSH EBP
00738C71  8B EC                     MOV EBP,ESP
00738C73  51                        PUSH ECX
00738C74  83 3D 1C 72 85 00 00      CMP dword ptr [0x0085721c],0x0
00738C7B  0F 84 90 00 00 00         JZ 0x00738d11
00738C81  6A 48                     PUSH 0x48
00738C83  68 C4 02 7A 00            PUSH 0x7a02c4
00738C88  6A 02                     PUSH 0x2
00738C8A  68 AC 00 00 00            PUSH 0xac
00738C8F  6A 01                     PUSH 0x1
00738C91  E8 B2 95 CC FF            CALL 0x00402248
00738C96  83 C4 14                  ADD ESP,0x14
00738C99  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00738C9C  83 7D FC 00               CMP dword ptr [EBP + -0x4],0x0
00738CA0  75 0A                     JNZ 0x00738cac
00738CA2  B8 01 00 00 00            MOV EAX,0x1
00738CA7  E9 9B 00 00 00            JMP 0x00738d47
LAB_00738cac:
00738CAC  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00738CAF  50                        PUSH EAX
00738CB0  E8 9B 00 00 00            CALL 0x00738d50
00738CB5  83 C4 04                  ADD ESP,0x4
00738CB8  85 C0                     TEST EAX,EAX
00738CBA  74 21                     JZ 0x00738cdd
00738CBC  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00738CBF  51                        PUSH ECX
00738CC0  E8 1B 06 00 00            CALL 0x007392e0
00738CC5  83 C4 04                  ADD ESP,0x4
00738CC8  6A 02                     PUSH 0x2
00738CCA  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00738CCD  52                        PUSH EDX
00738CCE  E8 39 B8 CC FF            CALL 0x0040450c
00738CD3  83 C4 08                  ADD ESP,0x8
00738CD6  B8 01 00 00 00            MOV EAX,0x1
00738CDB  EB 6A                     JMP 0x00738d47
LAB_00738cdd:
00738CDD  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00738CE0  A3 40 26 7F 00            MOV [0x007f2640],EAX
00738CE5  8B 0D 34 72 85 00         MOV ECX,dword ptr [0x00857234]
00738CEB  51                        PUSH ECX
00738CEC  E8 EF 05 00 00            CALL 0x007392e0
00738CF1  83 C4 04                  ADD ESP,0x4
00738CF4  6A 02                     PUSH 0x2
00738CF6  8B 15 34 72 85 00         MOV EDX,dword ptr [0x00857234]
00738CFC  52                        PUSH EDX
00738CFD  E8 0A B8 CC FF            CALL 0x0040450c
00738D02  83 C4 08                  ADD ESP,0x8
00738D05  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00738D08  A3 34 72 85 00            MOV [0x00857234],EAX
00738D0D  33 C0                     XOR EAX,EAX
00738D0F  EB 36                     JMP 0x00738d47
LAB_00738d11:
00738D11  C7 05 40 26 7F 00 48 26 7F 00  MOV dword ptr [0x007f2640],0x7f2648
00738D1B  8B 0D 34 72 85 00         MOV ECX,dword ptr [0x00857234]
00738D21  51                        PUSH ECX
00738D22  E8 B9 05 00 00            CALL 0x007392e0
00738D27  83 C4 04                  ADD ESP,0x4
00738D2A  6A 02                     PUSH 0x2
00738D2C  8B 15 34 72 85 00         MOV EDX,dword ptr [0x00857234]
00738D32  52                        PUSH EDX
00738D33  E8 D4 B7 CC FF            CALL 0x0040450c
00738D38  83 C4 08                  ADD ESP,0x8
00738D3B  C7 05 34 72 85 00 00 00 00 00  MOV dword ptr [0x00857234],0x0
00738D45  33 C0                     XOR EAX,EAX
LAB_00738d47:
00738D47  8B E5                     MOV ESP,EBP
00738D49  5D                        POP EBP
00738D4A  C3                        RET
