FUN_006178c0:
006178C0  55                        PUSH EBP
006178C1  8B EC                     MOV EBP,ESP
006178C3  83 EC 08                  SUB ESP,0x8
006178C6  8B 41 5E                  MOV EAX,dword ptr [ECX + 0x5e]
006178C9  53                        PUSH EBX
006178CA  85 C0                     TEST EAX,EAX
006178CC  57                        PUSH EDI
006178CD  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
006178D0  BB 01 00 00 00            MOV EBX,0x1
006178D5  0F 84 A8 00 00 00         JZ 0x00617983
006178DB  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
006178DE  33 FF                     XOR EDI,EDI
006178E0  85 C9                     TEST ECX,ECX
006178E2  0F 8E 9B 00 00 00         JLE 0x00617983
006178E8  56                        PUSH ESI
006178E9  3B F9                     CMP EDI,ECX
LAB_006178eb:
006178EB  73 61                     JNC 0x0061794e
006178ED  8B 70 08                  MOV ESI,dword ptr [EAX + 0x8]
006178F0  8B 48 1C                  MOV ECX,dword ptr [EAX + 0x1c]
006178F3  0F AF F7                  IMUL ESI,EDI
006178F6  03 F1                     ADD ESI,ECX
006178F8  85 F6                     TEST ESI,ESI
006178FA  74 52                     JZ 0x0061794e
006178FC  8B 46 18                  MOV EAX,dword ptr [ESI + 0x18]
006178FF  85 C0                     TEST EAX,EAX
00617901  74 44                     JZ 0x00617947
00617903  8B 4E 1C                  MOV ECX,dword ptr [ESI + 0x1c]
00617906  8D 45 FC                  LEA EAX,[EBP + -0x4]
00617909  50                        PUSH EAX
0061790A  51                        PUSH ECX
0061790B  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
00617911  E8 BA E9 0C 00            CALL 0x006e62d0
00617916  83 F8 FC                  CMP EAX,-0x4
00617919  74 25                     JZ 0x00617940
0061791B  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0061791E  8B 4E 18                  MOV ECX,dword ptr [ESI + 0x18]
00617921  3B C8                     CMP ECX,EAX
00617923  75 14                     JNZ 0x00617939
00617925  8B 90 8B 00 00 00         MOV EDX,dword ptr [EAX + 0x8b]
0061792B  8B 46 20                  MOV EAX,dword ptr [ESI + 0x20]
0061792E  3B D0                     CMP EDX,EAX
00617930  74 1F                     JZ 0x00617951
00617932  BB FB FF FF FF            MOV EBX,0xfffffffb
00617937  EB 18                     JMP 0x00617951
LAB_00617939:
00617939  BB FC FF FF FF            MOV EBX,0xfffffffc
0061793E  EB 11                     JMP 0x00617951
LAB_00617940:
00617940  BB FD FF FF FF            MOV EBX,0xfffffffd
00617945  EB 0A                     JMP 0x00617951
LAB_00617947:
00617947  BB FE FF FF FF            MOV EBX,0xfffffffe
0061794C  EB 03                     JMP 0x00617951
LAB_0061794e:
0061794E  83 CB FF                  OR EBX,0xffffffff
LAB_00617951:
00617951  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00617954  47                        INC EDI
00617955  8B 40 5E                  MOV EAX,dword ptr [EAX + 0x5e]
00617958  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
0061795B  3B F9                     CMP EDI,ECX
0061795D  7C 8C                     JL 0x006178eb
0061795F  85 DB                     TEST EBX,EBX
00617961  5E                        POP ESI
00617962  75 1F                     JNZ 0x00617983
00617964  53                        PUSH EBX
00617965  68 A0 00 7D 00            PUSH 0x7d00a0
0061796A  53                        PUSH EBX
0061796B  53                        PUSH EBX
0061796C  68 8A 00 00 00            PUSH 0x8a
00617971  68 5C 00 7D 00            PUSH 0x7d005c
00617976  E8 55 5B 09 00            CALL 0x006ad4d0
0061797B  83 C4 18                  ADD ESP,0x18
0061797E  85 C0                     TEST EAX,EAX
00617980  74 01                     JZ 0x00617983
00617982  CC                        INT3
LAB_00617983:
00617983  5F                        POP EDI
00617984  5B                        POP EBX
00617985  8B E5                     MOV ESP,EBP
00617987  5D                        POP EBP
00617988  C3                        RET
