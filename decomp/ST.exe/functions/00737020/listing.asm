FUN_00737020:
00737020  55                        PUSH EBP
00737021  8B EC                     MOV EBP,ESP
00737023  83 EC 08                  SUB ESP,0x8
00737026  C7 45 F8 00 00 00 00      MOV dword ptr [EBP + -0x8],0x0
0073702D  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
00737034  EB 09                     JMP 0x0073703f
LAB_00737036:
00737036  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00737039  83 C0 01                  ADD EAX,0x1
0073703C  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
LAB_0073703f:
0073703F  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00737042  3B 0D 80 A1 85 00         CMP ECX,dword ptr [0x0085a180]
00737048  7D 7C                     JGE 0x007370c6
0073704A  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0073704D  A1 40 8E 85 00            MOV EAX,[0x00858e40]
00737052  83 3C 90 00               CMP dword ptr [EAX + EDX*0x4],0x0
00737056  74 2B                     JZ 0x00737083
00737058  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0073705B  8B 15 40 8E 85 00         MOV EDX,dword ptr [0x00858e40]
00737061  8B 04 8A                  MOV EAX,dword ptr [EDX + ECX*0x4]
00737064  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
00737067  81 E1 83 00 00 00         AND ECX,0x83
0073706D  85 C9                     TEST ECX,ECX
0073706F  75 10                     JNZ 0x00737081
00737071  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00737074  A1 40 8E 85 00            MOV EAX,[0x00858e40]
00737079  8B 0C 90                  MOV ECX,dword ptr [EAX + EDX*0x4]
0073707C  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
0073707F  EB 45                     JMP 0x007370c6
LAB_00737081:
00737081  EB 3E                     JMP 0x007370c1
LAB_00737083:
00737083  6A 55                     PUSH 0x55
00737085  68 80 02 7A 00            PUSH 0x7a0280
0073708A  6A 02                     PUSH 0x2
0073708C  6A 20                     PUSH 0x20
0073708E  E8 71 A0 CC FF            CALL 0x00401104
00737093  83 C4 10                  ADD ESP,0x10
00737096  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00737099  8B 0D 40 8E 85 00         MOV ECX,dword ptr [0x00858e40]
0073709F  89 04 91                  MOV dword ptr [ECX + EDX*0x4],EAX
007370A2  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
007370A5  A1 40 8E 85 00            MOV EAX,[0x00858e40]
007370AA  83 3C 90 00               CMP dword ptr [EAX + EDX*0x4],0x0
007370AE  74 0F                     JZ 0x007370bf
007370B0  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
007370B3  8B 15 40 8E 85 00         MOV EDX,dword ptr [0x00858e40]
007370B9  8B 04 8A                  MOV EAX,dword ptr [EDX + ECX*0x4]
007370BC  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
LAB_007370bf:
007370BF  EB 05                     JMP 0x007370c6
LAB_007370c1:
007370C1  E9 70 FF FF FF            JMP 0x00737036
LAB_007370c6:
007370C6  83 7D F8 00               CMP dword ptr [EBP + -0x8],0x0
007370CA  74 3B                     JZ 0x00737107
007370CC  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
007370CF  C7 41 04 00 00 00 00      MOV dword ptr [ECX + 0x4],0x0
007370D6  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
007370D9  C7 42 0C 00 00 00 00      MOV dword ptr [EDX + 0xc],0x0
007370E0  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
007370E3  C7 40 08 00 00 00 00      MOV dword ptr [EAX + 0x8],0x0
007370EA  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
007370ED  C7 01 00 00 00 00         MOV dword ptr [ECX],0x0
007370F3  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
007370F6  C7 42 1C 00 00 00 00      MOV dword ptr [EDX + 0x1c],0x0
007370FD  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00737100  C7 40 10 FF FF FF FF      MOV dword ptr [EAX + 0x10],0xffffffff
LAB_00737107:
00737107  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0073710A  8B E5                     MOV ESP,EBP
0073710C  5D                        POP EBP
0073710D  C3                        RET
