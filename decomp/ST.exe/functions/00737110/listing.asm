FUN_00737110:
00737110  55                        PUSH EBP
00737111  8B EC                     MOV EBP,ESP
00737113  51                        PUSH ECX
00737114  56                        PUSH ESI
00737115  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00737118  3B 05 DC A2 85 00         CMP EAX,dword ptr [0x0085a2dc]
0073711E  73 1F                     JNC 0x0073713f
00737120  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00737123  C1 F9 05                  SAR ECX,0x5
00737126  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00737129  83 E2 1F                  AND EDX,0x1f
0073712C  8B 04 8D A0 A1 85 00      MOV EAX,dword ptr [ECX*0x4 + 0x85a1a0]
00737133  0F BE 4C D0 04            MOVSX ECX,byte ptr [EAX + EDX*0x8 + 0x4]
00737138  83 E1 01                  AND ECX,0x1
0073713B  85 C9                     TEST ECX,ECX
0073713D  75 1C                     JNZ 0x0073715b
LAB_0073713f:
0073713F  C7 05 48 71 85 00 09 00 00 00  MOV dword ptr [0x00857148],0x9
00737149  C7 05 4C 71 85 00 00 00 00 00  MOV dword ptr [0x0085714c],0x0
00737153  83 C8 FF                  OR EAX,0xffffffff
00737156  E9 9D 00 00 00            JMP 0x007371f8
LAB_0073715b:
0073715B  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0073715E  52                        PUSH EDX
0073715F  E8 CC 9D 00 00            CALL 0x00740f30
00737164  83 C4 04                  ADD ESP,0x4
00737167  83 F8 FF                  CMP EAX,-0x1
0073716A  74 3D                     JZ 0x007371a9
0073716C  83 7D 08 01               CMP dword ptr [EBP + 0x8],0x1
00737170  74 06                     JZ 0x00737178
00737172  83 7D 08 02               CMP dword ptr [EBP + 0x8],0x2
00737176  75 1A                     JNZ 0x00737192
LAB_00737178:
00737178  6A 01                     PUSH 0x1
0073717A  E8 B1 9D 00 00            CALL 0x00740f30
0073717F  83 C4 04                  ADD ESP,0x4
00737182  8B F0                     MOV ESI,EAX
00737184  6A 02                     PUSH 0x2
00737186  E8 A5 9D 00 00            CALL 0x00740f30
0073718B  83 C4 04                  ADD ESP,0x4
0073718E  3B F0                     CMP ESI,EAX
00737190  74 17                     JZ 0x007371a9
LAB_00737192:
00737192  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00737195  50                        PUSH EAX
00737196  E8 95 9D 00 00            CALL 0x00740f30
0073719B  83 C4 04                  ADD ESP,0x4
0073719E  50                        PUSH EAX
0073719F  FF 15 C8 BB 85 00         CALL dword ptr [0x0085bbc8]
007371A5  85 C0                     TEST EAX,EAX
007371A7  74 09                     JZ 0x007371b2
LAB_007371a9:
007371A9  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
007371B0  EB 09                     JMP 0x007371bb
LAB_007371b2:
007371B2  FF 15 CC BB 85 00         CALL dword ptr [0x0085bbcc]
007371B8  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
LAB_007371bb:
007371BB  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
007371BE  51                        PUSH ECX
007371BF  E8 9C 9C 00 00            CALL 0x00740e60
007371C4  83 C4 04                  ADD ESP,0x4
007371C7  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
007371CA  C1 FA 05                  SAR EDX,0x5
007371CD  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
007371D0  83 E0 1F                  AND EAX,0x1f
007371D3  8B 0C 95 A0 A1 85 00      MOV ECX,dword ptr [EDX*0x4 + 0x85a1a0]
007371DA  C6 44 C1 04 00            MOV byte ptr [ECX + EAX*0x8 + 0x4],0x0
007371DF  83 7D FC 00               CMP dword ptr [EBP + -0x4],0x0
007371E3  74 11                     JZ 0x007371f6
007371E5  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
007371E8  52                        PUSH EDX
007371E9  E8 02 9A 00 00            CALL 0x00740bf0
007371EE  83 C4 04                  ADD ESP,0x4
007371F1  83 C8 FF                  OR EAX,0xffffffff
007371F4  EB 02                     JMP 0x007371f8
LAB_007371f6:
007371F6  33 C0                     XOR EAX,EAX
LAB_007371f8:
007371F8  5E                        POP ESI
007371F9  8B E5                     MOV ESP,EBP
007371FB  5D                        POP EBP
007371FC  C3                        RET
