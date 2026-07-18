FUN_007405a0:
007405A0  55                        PUSH EBP
007405A1  8B EC                     MOV EBP,ESP
007405A3  83 EC 0C                  SUB ESP,0xc
007405A6  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
007405A9  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
007405AC  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
007405AF  8B 51 0C                  MOV EDX,dword ptr [ECX + 0xc]
007405B2  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
007405B5  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
007405B8  C6 00 30                  MOV byte ptr [EAX],0x30
007405BB  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
007405BE  83 C1 01                  ADD ECX,0x1
007405C1  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
LAB_007405c4:
007405C4  83 7D 0C 00               CMP dword ptr [EBP + 0xc],0x0
007405C8  7E 41                     JLE 0x0074060b
007405CA  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
007405CD  0F BE 02                  MOVSX EAX,byte ptr [EDX]
007405D0  85 C0                     TEST EAX,EAX
007405D2  74 14                     JZ 0x007405e8
007405D4  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
007405D7  0F BE 11                  MOVSX EDX,byte ptr [ECX]
007405DA  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
007405DD  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
007405E0  83 C0 01                  ADD EAX,0x1
007405E3  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
007405E6  EB 07                     JMP 0x007405ef
LAB_007405e8:
007405E8  C7 45 F4 30 00 00 00      MOV dword ptr [EBP + -0xc],0x30
LAB_007405ef:
007405EF  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
007405F2  8A 55 F4                  MOV DL,byte ptr [EBP + -0xc]
007405F5  88 11                     MOV byte ptr [ECX],DL
007405F7  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
007405FA  83 C0 01                  ADD EAX,0x1
007405FD  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00740600  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00740603  83 E9 01                  SUB ECX,0x1
00740606  89 4D 0C                  MOV dword ptr [EBP + 0xc],ECX
00740609  EB B9                     JMP 0x007405c4
LAB_0074060b:
0074060B  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0074060E  C6 02 00                  MOV byte ptr [EDX],0x0
00740611  83 7D 0C 00               CMP dword ptr [EBP + 0xc],0x0
00740615  7C 3D                     JL 0x00740654
00740617  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0074061A  0F BE 08                  MOVSX ECX,byte ptr [EAX]
0074061D  83 F9 35                  CMP ECX,0x35
00740620  7C 32                     JL 0x00740654
00740622  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00740625  83 EA 01                  SUB EDX,0x1
00740628  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
LAB_0074062b:
0074062B  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0074062E  0F BE 08                  MOVSX ECX,byte ptr [EAX]
00740631  83 F9 39                  CMP ECX,0x39
00740634  75 11                     JNZ 0x00740647
00740636  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00740639  C6 02 30                  MOV byte ptr [EDX],0x30
0074063C  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0074063F  83 E8 01                  SUB EAX,0x1
00740642  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00740645  EB E4                     JMP 0x0074062b
LAB_00740647:
00740647  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0074064A  8A 11                     MOV DL,byte ptr [ECX]
0074064C  80 C2 01                  ADD DL,0x1
0074064F  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00740652  88 10                     MOV byte ptr [EAX],DL
LAB_00740654:
00740654  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00740657  0F BE 11                  MOVSX EDX,byte ptr [ECX]
0074065A  83 FA 31                  CMP EDX,0x31
0074065D  75 11                     JNZ 0x00740670
0074065F  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
00740662  8B 48 04                  MOV ECX,dword ptr [EAX + 0x4]
00740665  83 C1 01                  ADD ECX,0x1
00740668  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
0074066B  89 4A 04                  MOV dword ptr [EDX + 0x4],ECX
0074066E  EB 26                     JMP 0x00740696
LAB_00740670:
00740670  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00740673  83 C0 01                  ADD EAX,0x1
00740676  50                        PUSH EAX
00740677  E8 94 65 FF FF            CALL 0x00736c10
0074067C  83 C4 04                  ADD ESP,0x4
0074067F  83 C0 01                  ADD EAX,0x1
00740682  50                        PUSH EAX
00740683  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00740686  83 C1 01                  ADD ECX,0x1
00740689  51                        PUSH ECX
0074068A  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0074068D  52                        PUSH EDX
0074068E  E8 DD D3 FE FF            CALL 0x0072da70
00740693  83 C4 0C                  ADD ESP,0xc
LAB_00740696:
00740696  8B E5                     MOV ESP,EBP
00740698  5D                        POP EBP
00740699  C3                        RET
