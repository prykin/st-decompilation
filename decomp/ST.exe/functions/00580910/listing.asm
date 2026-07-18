FUN_00580910:
00580910  55                        PUSH EBP
00580911  8B EC                     MOV EBP,ESP
00580913  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
00580916  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
00580919  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
0058091C  53                        PUSH EBX
0058091D  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
00580920  C7 02 00 00 00 00         MOV dword ptr [EDX],0x0
00580926  56                        PUSH ESI
00580927  57                        PUSH EDI
00580928  C6 03 00                  MOV byte ptr [EBX],0x0
0058092B  C6 00 1D                  MOV byte ptr [EAX],0x1d
0058092E  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
00580931  C7 01 00 00 00 00         MOV dword ptr [ECX],0x0
00580937  83 F8 0E                  CMP EAX,0xe
0058093A  74 05                     JZ 0x00580941
0058093C  83 F8 0C                  CMP EAX,0xc
0058093F  75 50                     JNZ 0x00580991
LAB_00580941:
00580941  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00580944  05 24 FF FF FF            ADD EAX,0xffffff24
00580949  83 F8 04                  CMP EAX,0x4
0058094C  77 43                     JA 0x00580991
switchD_0058094e::switchD:
0058094E  FF 24 85 98 09 58 00      JMP dword ptr [EAX*0x4 + 0x580998]
switchD_0058094e::caseD_dd:
00580955  BF B4 B2 7C 00            MOV EDI,0x7cb2b4
0058095A  EB 10                     JMP 0x0058096c
switchD_0058094e::caseD_dc:
0058095C  5F                        POP EDI
0058095D  5E                        POP ESI
0058095E  C7 02 00 00 00 00         MOV dword ptr [EDX],0x0
00580964  5B                        POP EBX
00580965  5D                        POP EBP
00580966  C3                        RET
switchD_0058094e::caseD_de:
00580967  BF A8 B2 7C 00            MOV EDI,0x7cb2a8
LAB_0058096c:
0058096C  83 C9 FF                  OR ECX,0xffffffff
0058096F  33 C0                     XOR EAX,EAX
00580971  F2 AE                     SCASB.REPNE ES:EDI
00580973  F7 D1                     NOT ECX
00580975  2B F9                     SUB EDI,ECX
00580977  8B C1                     MOV EAX,ECX
00580979  8B F7                     MOV ESI,EDI
0058097B  8B FB                     MOV EDI,EBX
0058097D  C1 E9 02                  SHR ECX,0x2
00580980  F3 A5                     MOVSD.REP ES:EDI,ESI
00580982  8B C8                     MOV ECX,EAX
00580984  83 E1 03                  AND ECX,0x3
00580987  F3 A4                     MOVSB.REP ES:EDI,ESI
00580989  8B 0D 74 67 80 00         MOV ECX,dword ptr [0x00806774]
0058098F  89 0A                     MOV dword ptr [EDX],ECX
switchD_0058094e::caseD_df:
00580991  5F                        POP EDI
00580992  5E                        POP ESI
00580993  5B                        POP EBX
00580994  5D                        POP EBP
00580995  C3                        RET
