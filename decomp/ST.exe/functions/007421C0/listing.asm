FID_conflict:_store_number:
007421C0  55                        PUSH EBP
007421C1  8B EC                     MOV EBP,ESP
007421C3  83 EC 0C                  SUB ESP,0xc
007421C6  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
007421C9  8B 08                     MOV ECX,dword ptr [EAX]
007421CB  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
007421CE  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
007421D1  83 3A 01                  CMP dword ptr [EDX],0x1
007421D4  76 45                     JBE 0x0074221b
LAB_007421d6:
007421D6  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
007421D9  99                        CDQ
007421DA  B9 0A 00 00 00            MOV ECX,0xa
007421DF  F7 F9                     IDIV ECX
007421E1  83 C2 30                  ADD EDX,0x30
007421E4  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
007421E7  88 10                     MOV byte ptr [EAX],DL
007421E9  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
007421EC  83 C1 01                  ADD ECX,0x1
007421EF  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
007421F2  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
007421F5  8B 02                     MOV EAX,dword ptr [EDX]
007421F7  83 E8 01                  SUB EAX,0x1
007421FA  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
007421FD  89 01                     MOV dword ptr [ECX],EAX
007421FF  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00742202  99                        CDQ
00742203  B9 0A 00 00 00            MOV ECX,0xa
00742208  F7 F9                     IDIV ECX
0074220A  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
0074220D  83 7D 08 00               CMP dword ptr [EBP + 0x8],0x0
00742211  7E 08                     JLE 0x0074221b
00742213  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
00742216  83 3A 01                  CMP dword ptr [EDX],0x1
00742219  77 BB                     JA 0x007421d6
LAB_0074221b:
0074221B  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0074221E  8B 08                     MOV ECX,dword ptr [EAX]
00742220  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
00742223  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
00742226  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00742229  89 02                     MOV dword ptr [EDX],EAX
0074222B  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0074222E  83 E9 01                  SUB ECX,0x1
00742231  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
LAB_00742234:
00742234  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00742237  8A 02                     MOV AL,byte ptr [EDX]
00742239  88 45 F4                  MOV byte ptr [EBP + -0xc],AL
0074223C  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0074223F  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
00742242  8A 02                     MOV AL,byte ptr [EDX]
00742244  88 01                     MOV byte ptr [ECX],AL
00742246  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00742249  83 E9 01                  SUB ECX,0x1
0074224C  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0074224F  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
00742252  8A 45 F4                  MOV AL,byte ptr [EBP + -0xc]
00742255  88 02                     MOV byte ptr [EDX],AL
00742257  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0074225A  83 C1 01                  ADD ECX,0x1
0074225D  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
00742260  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
00742263  3B 55 FC                  CMP EDX,dword ptr [EBP + -0x4]
00742266  72 CC                     JC 0x00742234
00742268  8B E5                     MOV ESP,EBP
0074226A  5D                        POP EBP
0074226B  C3                        RET
