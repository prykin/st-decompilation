FUN_00742110:
00742110  55                        PUSH EBP
00742111  8B EC                     MOV EBP,ESP
00742113  51                        PUSH ECX
00742114  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
0074211B  83 3D 3C 8E 85 00 00      CMP dword ptr [0x00858e3c],0x0
00742122  74 16                     JZ 0x0074213a
00742124  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
00742127  50                        PUSH EAX
00742128  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
0074212B  51                        PUSH ECX
0074212C  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0074212F  52                        PUSH EDX
00742130  E8 8B 00 00 00            CALL 0x007421c0
00742135  83 C4 0C                  ADD ESP,0xc
00742138  EB 7F                     JMP 0x007421b9
LAB_0074213a:
0074213A  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
0074213D  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00742140  3B 08                     CMP ECX,dword ptr [EAX]
00742142  73 6C                     JNC 0x007421b0
00742144  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
00742147  83 EA 01                  SUB EDX,0x1
0074214A  89 55 0C                  MOV dword ptr [EBP + 0xc],EDX
0074214D  EB 09                     JMP 0x00742158
LAB_0074214f:
0074214F  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00742152  83 E8 01                  SUB EAX,0x1
00742155  89 45 0C                  MOV dword ptr [EBP + 0xc],EAX
LAB_00742158:
00742158  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0074215B  83 C1 01                  ADD ECX,0x1
0074215E  85 C9                     TEST ECX,ECX
00742160  74 32                     JZ 0x00742194
00742162  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00742165  99                        CDQ
00742166  B9 0A 00 00 00            MOV ECX,0xa
0074216B  F7 F9                     IDIV ECX
0074216D  83 C2 30                  ADD EDX,0x30
00742170  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
00742173  8B 08                     MOV ECX,dword ptr [EAX]
00742175  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00742178  88 14 01                  MOV byte ptr [ECX + EAX*0x1],DL
0074217B  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0074217E  99                        CDQ
0074217F  B9 0A 00 00 00            MOV ECX,0xa
00742184  F7 F9                     IDIV ECX
00742186  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
00742189  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0074218C  83 C2 01                  ADD EDX,0x1
0074218F  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
00742192  EB BB                     JMP 0x0074214f
LAB_00742194:
00742194  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
00742197  8B 08                     MOV ECX,dword ptr [EAX]
00742199  03 4D FC                  ADD ECX,dword ptr [EBP + -0x4]
0074219C  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
0074219F  89 0A                     MOV dword ptr [EDX],ECX
007421A1  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
007421A4  8B 08                     MOV ECX,dword ptr [EAX]
007421A6  2B 4D FC                  SUB ECX,dword ptr [EBP + -0x4]
007421A9  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
007421AC  89 0A                     MOV dword ptr [EDX],ECX
007421AE  EB 09                     JMP 0x007421b9
LAB_007421b0:
007421B0  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
007421B3  C7 00 00 00 00 00         MOV dword ptr [EAX],0x0
LAB_007421b9:
007421B9  8B E5                     MOV ESP,EBP
007421BB  5D                        POP EBP
007421BC  C3                        RET
