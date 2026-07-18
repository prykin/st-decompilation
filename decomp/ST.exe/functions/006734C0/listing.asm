FUN_006734c0:
006734C0  55                        PUSH EBP
006734C1  8B EC                     MOV EBP,ESP
006734C3  83 EC 0C                  SUB ESP,0xc
006734C6  A1 5C 75 85 00            MOV EAX,[0x0085755c]
006734CB  8B 0D 60 75 85 00         MOV ECX,dword ptr [0x00857560]
006734D1  8B 15 4C 19 81 00         MOV EDX,dword ptr [0x0081194c]
006734D7  68 00 04 00 00            PUSH 0x400
006734DC  50                        PUSH EAX
006734DD  51                        PUSH ECX
006734DE  FF 52 08                  CALL dword ptr [EDX + 0x8]
006734E1  85 C0                     TEST EAX,EAX
006734E3  7D 05                     JGE 0x006734ea
006734E5  83 F8 FF                  CMP EAX,-0x1
006734E8  75 05                     JNZ 0x006734ef
LAB_006734ea:
006734EA  A3 58 75 85 00            MOV [0x00857558],EAX
LAB_006734ef:
006734EF  85 C0                     TEST EAX,EAX
006734F1  56                        PUSH ESI
006734F2  0F 8C 29 01 00 00         JL 0x00673621
006734F8  8B 35 08 19 81 00         MOV ESI,dword ptr [0x00811908]
006734FE  33 C0                     XOR EAX,EAX
00673500  85 F6                     TEST ESI,ESI
00673502  0F 84 19 01 00 00         JZ 0x00673621
00673508  8B 0D 24 2D 7D 00         MOV ECX,dword ptr [0x007d2d24]
0067350E  F6 C5 04                  TEST CH,0x4
00673511  0F 84 0A 01 00 00         JZ 0x00673621
00673517  8B 0D 58 75 85 00         MOV ECX,dword ptr [0x00857558]
0067351D  85 C9                     TEST ECX,ECX
0067351F  0F 8E FC 00 00 00         JLE 0x00673621
00673525  53                        PUSH EBX
00673526  57                        PUSH EDI
00673527  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
0067352A  EB 03                     JMP 0x0067352f
LAB_0067352c:
0067352C  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
LAB_0067352f:
0067352F  8B 46 04                  MOV EAX,dword ptr [ESI + 0x4]
00673532  8B 0D 5C 75 85 00         MOV ECX,dword ptr [0x0085755c]
00673538  50                        PUSH EAX
00673539  51                        PUSH ECX
0067353A  E8 51 D0 0B 00            CALL 0x00730590
0067353F  8B D8                     MOV EBX,EAX
00673541  83 C4 08                  ADD ESP,0x8
00673544  85 DB                     TEST EBX,EBX
00673546  0F 84 C4 00 00 00         JZ 0x00673610
0067354C  8B 7E 04                  MOV EDI,dword ptr [ESI + 0x4]
0067354F  83 C9 FF                  OR ECX,0xffffffff
00673552  33 C0                     XOR EAX,EAX
00673554  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00673557  F2 AE                     SCASB.REPNE ES:EDI
00673559  8B 7A 08                  MOV EDI,dword ptr [EDX + 0x8]
0067355C  F7 D1                     NOT ECX
0067355E  49                        DEC ECX
0067355F  8B F1                     MOV ESI,ECX
00673561  83 C9 FF                  OR ECX,0xffffffff
00673564  F2 AE                     SCASB.REPNE ES:EDI
00673566  F7 D1                     NOT ECX
00673568  49                        DEC ECX
00673569  89 75 F4                  MOV dword ptr [EBP + -0xc],ESI
0067356C  8B F9                     MOV EDI,ECX
0067356E  89 7D F8                  MOV dword ptr [EBP + -0x8],EDI
00673571  EB 06                     JMP 0x00673579
LAB_00673573:
00673573  8B 75 F4                  MOV ESI,dword ptr [EBP + -0xc]
00673576  8B 7D F8                  MOV EDI,dword ptr [EBP + -0x8]
LAB_00673579:
00673579  8B 0D 58 75 85 00         MOV ECX,dword ptr [0x00857558]
0067357F  8B C1                     MOV EAX,ECX
00673581  2B C6                     SUB EAX,ESI
00673583  03 C7                     ADD EAX,EDI
00673585  3D 00 04 00 00            CMP EAX,0x400
0067358A  7E 1E                     JLE 0x006735aa
0067358C  8B 0D 5C 75 85 00         MOV ECX,dword ptr [0x0085755c]
00673592  50                        PUSH EAX
00673593  51                        PUSH ECX
00673594  2B D9                     SUB EBX,ECX
00673596  E8 B5 99 03 00            CALL 0x006acf50
0067359B  8B 0D 58 75 85 00         MOV ECX,dword ptr [0x00857558]
006735A1  A3 5C 75 85 00            MOV [0x0085755c],EAX
006735A6  03 D8                     ADD EBX,EAX
006735A8  EB 05                     JMP 0x006735af
LAB_006735aa:
006735AA  A1 5C 75 85 00            MOV EAX,[0x0085755c]
LAB_006735af:
006735AF  2B CE                     SUB ECX,ESI
006735B1  03 F3                     ADD ESI,EBX
006735B3  2B CB                     SUB ECX,EBX
006735B5  8D 14 1F                  LEA EDX,[EDI + EBX*0x1]
006735B8  8D 4C 01 01               LEA ECX,[ECX + EAX*0x1 + 0x1]
006735BC  51                        PUSH ECX
006735BD  56                        PUSH ESI
006735BE  52                        PUSH EDX
006735BF  E8 AC A4 0B 00            CALL 0x0072da70
006735C4  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006735C7  8B CF                     MOV ECX,EDI
006735C9  8B D1                     MOV EDX,ECX
006735CB  8B FB                     MOV EDI,EBX
006735CD  8B 70 08                  MOV ESI,dword ptr [EAX + 0x8]
006735D0  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
006735D3  C1 E9 02                  SHR ECX,0x2
006735D6  F3 A5                     MOVSD.REP ES:EDI,ESI
006735D8  8B CA                     MOV ECX,EDX
006735DA  83 E1 03                  AND ECX,0x3
006735DD  F3 A4                     MOVSB.REP ES:EDI,ESI
006735DF  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
006735E2  8B 3D 58 75 85 00         MOV EDI,dword ptr [0x00857558]
006735E8  2B C1                     SUB EAX,ECX
006735EA  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
006735ED  03 F8                     ADD EDI,EAX
006735EF  43                        INC EBX
006735F0  89 3D 58 75 85 00         MOV dword ptr [0x00857558],EDI
006735F6  8B 51 04                  MOV EDX,dword ptr [ECX + 0x4]
006735F9  52                        PUSH EDX
006735FA  53                        PUSH EBX
006735FB  E8 90 CF 0B 00            CALL 0x00730590
00673600  8B D8                     MOV EBX,EAX
00673602  83 C4 14                  ADD ESP,0x14
00673605  85 DB                     TEST EBX,EBX
00673607  0F 85 66 FF FF FF         JNZ 0x00673573
0067360D  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
LAB_00673610:
00673610  8B 36                     MOV ESI,dword ptr [ESI]
00673612  85 F6                     TEST ESI,ESI
00673614  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
00673617  0F 85 0F FF FF FF         JNZ 0x0067352c
0067361D  5F                        POP EDI
0067361E  33 C0                     XOR EAX,EAX
00673620  5B                        POP EBX
LAB_00673621:
00673621  5E                        POP ESI
00673622  8B E5                     MOV ESP,EBP
00673624  5D                        POP EBP
00673625  C3                        RET
