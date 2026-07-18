FID_conflict:__getenv_lk:
00746050  55                        PUSH EBP
00746051  8B EC                     MOV EBP,ESP
00746053  83 EC 08                  SUB ESP,0x8
00746056  A1 70 71 85 00            MOV EAX,[0x00857170]
0074605B  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0074605E  83 3D DC A5 85 00 00      CMP dword ptr [0x0085a5dc],0x0
00746065  75 07                     JNZ 0x0074606e
00746067  33 C0                     XOR EAX,EAX
00746069  E9 A4 00 00 00            JMP 0x00746112
LAB_0074606e:
0074606E  83 7D F8 00               CMP dword ptr [EBP + -0x8],0x0
00746072  75 22                     JNZ 0x00746096
00746074  83 3D 78 71 85 00 00      CMP dword ptr [0x00857178],0x0
0074607B  74 19                     JZ 0x00746096
0074607D  E8 EE 00 00 00            CALL 0x00746170
00746082  85 C0                     TEST EAX,EAX
00746084  74 07                     JZ 0x0074608d
00746086  33 C0                     XOR EAX,EAX
00746088  E9 85 00 00 00            JMP 0x00746112
LAB_0074608d:
0074608D  8B 0D 70 71 85 00         MOV ECX,dword ptr [0x00857170]
00746093  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
LAB_00746096:
00746096  83 7D F8 00               CMP dword ptr [EBP + -0x8],0x0
0074609A  74 74                     JZ 0x00746110
0074609C  83 7D 08 00               CMP dword ptr [EBP + 0x8],0x0
007460A0  74 6E                     JZ 0x00746110
007460A2  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
007460A5  52                        PUSH EDX
007460A6  E8 65 0B FF FF            CALL 0x00736c10
007460AB  83 C4 04                  ADD ESP,0x4
007460AE  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
LAB_007460b1:
007460B1  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
007460B4  83 38 00                  CMP dword ptr [EAX],0x0
007460B7  74 57                     JZ 0x00746110
007460B9  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
007460BC  8B 11                     MOV EDX,dword ptr [ECX]
007460BE  52                        PUSH EDX
007460BF  E8 4C 0B FF FF            CALL 0x00736c10
007460C4  83 C4 04                  ADD ESP,0x4
007460C7  3B 45 FC                  CMP EAX,dword ptr [EBP + -0x4]
007460CA  76 39                     JBE 0x00746105
007460CC  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
007460CF  8B 08                     MOV ECX,dword ptr [EAX]
007460D1  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
007460D4  0F BE 04 11               MOVSX EAX,byte ptr [ECX + EDX*0x1]
007460D8  83 F8 3D                  CMP EAX,0x3d
007460DB  75 28                     JNZ 0x00746105
007460DD  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
007460E0  51                        PUSH ECX
007460E1  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
007460E4  52                        PUSH EDX
007460E5  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
007460E8  8B 08                     MOV ECX,dword ptr [EAX]
007460EA  51                        PUSH ECX
007460EB  E8 30 00 00 00            CALL 0x00746120
007460F0  83 C4 0C                  ADD ESP,0xc
007460F3  85 C0                     TEST EAX,EAX
007460F5  75 0E                     JNZ 0x00746105
007460F7  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
007460FA  8B 02                     MOV EAX,dword ptr [EDX]
007460FC  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
007460FF  8D 44 08 01               LEA EAX,[EAX + ECX*0x1 + 0x1]
00746103  EB 0D                     JMP 0x00746112
LAB_00746105:
00746105  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
00746108  83 C2 04                  ADD EDX,0x4
0074610B  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
0074610E  EB A1                     JMP 0x007460b1
LAB_00746110:
00746110  33 C0                     XOR EAX,EAX
LAB_00746112:
00746112  8B E5                     MOV ESP,EBP
00746114  5D                        POP EBP
00746115  C3                        RET
