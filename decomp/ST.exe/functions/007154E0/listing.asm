FUN_007154e0:
007154E0  55                        PUSH EBP
007154E1  8B EC                     MOV EBP,ESP
007154E3  83 EC 4C                  SUB ESP,0x4c
007154E6  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
007154EB  53                        PUSH EBX
007154EC  56                        PUSH ESI
007154ED  33 DB                     XOR EBX,EBX
007154EF  57                        PUSH EDI
007154F0  8D 55 B8                  LEA EDX,[EBP + -0x48]
007154F3  8D 4D B4                  LEA ECX,[EBP + -0x4c]
007154F6  53                        PUSH EBX
007154F7  52                        PUSH EDX
007154F8  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
007154FB  89 5D F8                  MOV dword ptr [EBP + -0x8],EBX
007154FE  89 45 B4                  MOV dword ptr [EBP + -0x4c],EAX
00715501  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00715507  E8 E4 82 01 00            CALL 0x0072d7f0
0071550C  8B F0                     MOV ESI,EAX
0071550E  83 C4 08                  ADD ESP,0x8
00715511  3B F3                     CMP ESI,EBX
00715513  0F 85 B8 00 00 00         JNZ 0x007155d1
00715519  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
0071551C  B0 80                     MOV AL,0x80
0071551E  8A 0E                     MOV CL,byte ptr [ESI]
00715520  3A C1                     CMP AL,CL
00715522  1B FF                     SBB EDI,EDI
00715524  F7 DF                     NEG EDI
00715526  89 7D F8                  MOV dword ptr [EBP + -0x8],EDI
00715529  74 6B                     JZ 0x00715596
0071552B  8B 4E 05                  MOV ECX,dword ptr [ESI + 0x5]
0071552E  51                        PUSH ECX
0071552F  E8 DC 56 F9 FF            CALL 0x006aac10
00715534  8D 56 09                  LEA EDX,[ESI + 0x9]
00715537  50                        PUSH EAX
00715538  52                        PUSH EDX
00715539  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0071553C  E8 8F C4 03 00            CALL 0x007519d0
00715541  8B D8                     MOV EBX,EAX
00715543  8B 46 05                  MOV EAX,dword ptr [ESI + 0x5]
00715546  83 C4 08                  ADD ESP,0x8
00715549  3B D8                     CMP EBX,EAX
0071554B  74 14                     JZ 0x00715561
0071554D  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
00715552  6A 6A                     PUSH 0x6a
00715554  68 3C 04 7F 00            PUSH 0x7f043c
00715559  50                        PUSH EAX
0071555A  6A CD                     PUSH -0x33
0071555C  E8 DF 08 F9 FF            CALL 0x006a5e40
LAB_00715561:
00715561  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
00715564  85 C0                     TEST EAX,EAX
00715566  74 07                     JZ 0x0071556f
00715568  8A 0E                     MOV CL,byte ptr [ESI]
0071556A  80 C1 80                  ADD CL,0x80
0071556D  88 08                     MOV byte ptr [EAX],CL
LAB_0071556f:
0071556F  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
00715572  85 C0                     TEST EAX,EAX
00715574  74 02                     JZ 0x00715578
00715576  89 18                     MOV dword ptr [EAX],EBX
LAB_00715578:
00715578  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
0071557B  85 C0                     TEST EAX,EAX
0071557D  74 02                     JZ 0x00715581
0071557F  89 38                     MOV dword ptr [EAX],EDI
LAB_00715581:
00715581  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
LAB_00715584:
00715584  8B 55 B4                  MOV EDX,dword ptr [EBP + -0x4c]
00715587  8B C6                     MOV EAX,ESI
00715589  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0071558F  5F                        POP EDI
00715590  5E                        POP ESI
00715591  5B                        POP EBX
00715592  8B E5                     MOV ESP,EBP
00715594  5D                        POP EBP
00715595  C3                        RET
LAB_00715596:
00715596  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00715599  83 F8 05                  CMP EAX,0x5
0071559C  76 03                     JBE 0x007155a1
0071559E  83 C6 05                  ADD ESI,0x5
LAB_007155a1:
007155A1  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
007155A4  3B D3                     CMP EDX,EBX
007155A6  74 02                     JZ 0x007155aa
007155A8  88 0A                     MOV byte ptr [EDX],CL
LAB_007155aa:
007155AA  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
007155AD  3B CB                     CMP ECX,EBX
007155AF  74 05                     JZ 0x007155b6
007155B1  83 C0 FB                  ADD EAX,-0x5
007155B4  89 01                     MOV dword ptr [ECX],EAX
LAB_007155b6:
007155B6  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
007155B9  3B CB                     CMP ECX,EBX
007155BB  74 C7                     JZ 0x00715584
007155BD  8B 55 B4                  MOV EDX,dword ptr [EBP + -0x4c]
007155C0  89 19                     MOV dword ptr [ECX],EBX
007155C2  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
007155C8  8B C6                     MOV EAX,ESI
007155CA  5F                        POP EDI
007155CB  5E                        POP ESI
007155CC  5B                        POP EBX
007155CD  8B E5                     MOV ESP,EBP
007155CF  5D                        POP EBP
007155D0  C3                        RET
LAB_007155d1:
007155D1  8B 45 B4                  MOV EAX,dword ptr [EBP + -0x4c]
007155D4  68 2C 04 7F 00            PUSH 0x7f042c
007155D9  68 CC 4C 7A 00            PUSH 0x7a4ccc
007155DE  56                        PUSH ESI
007155DF  53                        PUSH EBX
007155E0  6A 7E                     PUSH 0x7e
007155E2  68 3C 04 7F 00            PUSH 0x7f043c
007155E7  A3 F8 8D 85 00            MOV [0x00858df8],EAX
007155EC  E8 DF 7E F9 FF            CALL 0x006ad4d0
007155F1  83 C4 18                  ADD ESP,0x18
007155F4  85 C0                     TEST EAX,EAX
007155F6  74 01                     JZ 0x007155f9
007155F8  CC                        INT3
LAB_007155f9:
007155F9  39 5D FC                  CMP dword ptr [EBP + -0x4],EBX
007155FC  74 0E                     JZ 0x0071560c
007155FE  39 5D F8                  CMP dword ptr [EBP + -0x8],EBX
00715601  74 09                     JZ 0x0071560c
00715603  8D 4D FC                  LEA ECX,[EBP + -0x4]
00715606  51                        PUSH ECX
00715607  E8 54 5A F9 FF            CALL 0x006ab060
LAB_0071560c:
0071560C  68 82 00 00 00            PUSH 0x82
00715611  68 3C 04 7F 00            PUSH 0x7f043c
00715616  53                        PUSH EBX
00715617  56                        PUSH ESI
00715618  E8 23 08 F9 FF            CALL 0x006a5e40
0071561D  5F                        POP EDI
0071561E  5E                        POP ESI
0071561F  33 C0                     XOR EAX,EAX
00715621  5B                        POP EBX
00715622  8B E5                     MOV ESP,EBP
00715624  5D                        POP EBP
00715625  C3                        RET
