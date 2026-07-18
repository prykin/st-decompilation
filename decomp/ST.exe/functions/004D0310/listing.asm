FUN_004d0310:
004D0310  55                        PUSH EBP
004D0311  8B EC                     MOV EBP,ESP
004D0313  83 EC 44                  SUB ESP,0x44
004D0316  53                        PUSH EBX
004D0317  56                        PUSH ESI
004D0318  8B F1                     MOV ESI,ECX
004D031A  57                        PUSH EDI
004D031B  B9 10 00 00 00            MOV ECX,0x10
004D0320  33 C0                     XOR EAX,EAX
004D0322  8D 7D BC                  LEA EDI,[EBP + -0x44]
004D0325  8B 15 7C 67 80 00         MOV EDX,dword ptr [0x0080677c]
004D032B  F3 AB                     STOSD.REP ES:EDI
004D032D  8B 86 69 03 00 00         MOV EAX,dword ptr [ESI + 0x369]
004D0333  6A 1D                     PUSH 0x1d
004D0335  33 DB                     XOR EBX,EBX
004D0337  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
004D033A  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
004D033D  8D 0C 45 42 93 7A 00      LEA ECX,[EAX*0x2 + 0x7a9342]
004D0344  51                        PUSH ECX
004D0345  8B 8E FF 05 00 00         MOV ECX,dword ptr [ESI + 0x5ff]
004D034B  52                        PUSH EDX
004D034C  6A 0E                     PUSH 0xe
004D034E  E8 30 3E F3 FF            CALL 0x00404183
004D0353  85 C0                     TEST EAX,EAX
004D0355  74 17                     JZ 0x004d036e
004D0357  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
004D035D  68 98 02 00 00            PUSH 0x298
004D0362  68 9C F3 7B 00            PUSH 0x7bf39c
004D0367  51                        PUSH ECX
004D0368  50                        PUSH EAX
004D0369  E8 D2 5A 1D 00            CALL 0x006a5e40
LAB_004d036e:
004D036E  8B 86 79 03 00 00         MOV EAX,dword ptr [ESI + 0x379]
004D0374  3D FF 00 00 00            CMP EAX,0xff
004D0379  75 03                     JNZ 0x004d037e
004D037B  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
LAB_004d037e:
004D037E  50                        PUSH EAX
004D037F  8B 86 69 03 00 00         MOV EAX,dword ptr [ESI + 0x369]
004D0385  8D 4D BC                  LEA ECX,[EBP + -0x44]
004D0388  8D 14 40                  LEA EDX,[EAX + EAX*0x2]
004D038B  8D 04 55 42 93 7A 00      LEA EAX,[EDX*0x2 + 0x7a9342]
004D0392  50                        PUSH EAX
004D0393  68 08 C9 7A 00            PUSH 0x7ac908
004D0398  51                        PUSH ECX
004D0399  FF 15 E8 BD 85 00         CALL dword ptr [0x0085bde8]
004D039F  A1 7C 67 80 00            MOV EAX,[0x0080677c]
004D03A4  8B 8E FF 05 00 00         MOV ECX,dword ptr [ESI + 0x5ff]
004D03AA  83 C4 10                  ADD ESP,0x10
004D03AD  8D 55 BC                  LEA EDX,[EBP + -0x44]
004D03B0  6A 1D                     PUSH 0x1d
004D03B2  52                        PUSH EDX
004D03B3  50                        PUSH EAX
004D03B4  6A 0C                     PUSH 0xc
004D03B6  E8 C8 3D F3 FF            CALL 0x00404183
004D03BB  85 C0                     TEST EAX,EAX
004D03BD  74 17                     JZ 0x004d03d6
004D03BF  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
004D03C5  68 9A 02 00 00            PUSH 0x29a
004D03CA  68 9C F3 7B 00            PUSH 0x7bf39c
004D03CF  51                        PUSH ECX
004D03D0  50                        PUSH EAX
004D03D1  E8 6A 5A 1D 00            CALL 0x006a5e40
LAB_004d03d6:
004D03D6  8B 86 69 03 00 00         MOV EAX,dword ptr [ESI + 0x369]
004D03DC  83 C9 FF                  OR ECX,0xffffffff
004D03DF  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
004D03E2  8D 14 45 42 94 7A 00      LEA EDX,[EAX*0x2 + 0x7a9442]
004D03E9  33 C0                     XOR EAX,EAX
004D03EB  8B FA                     MOV EDI,EDX
004D03ED  F2 AE                     SCASB.REPNE ES:EDI
004D03EF  F7 D1                     NOT ECX
004D03F1  49                        DEC ECX
004D03F2  74 27                     JZ 0x004d041b
004D03F4  8B 8E FF 05 00 00         MOV ECX,dword ptr [ESI + 0x5ff]
004D03FA  6A 1D                     PUSH 0x1d
004D03FC  52                        PUSH EDX
004D03FD  8B 15 7C 67 80 00         MOV EDX,dword ptr [0x0080677c]
004D0403  52                        PUSH EDX
004D0404  6A 0D                     PUSH 0xd
004D0406  E8 78 3D F3 FF            CALL 0x00404183
004D040B  85 C0                     TEST EAX,EAX
004D040D  74 19                     JZ 0x004d0428
004D040F  5F                        POP EDI
004D0410  5E                        POP ESI
004D0411  B8 FF FF 00 00            MOV EAX,0xffff
004D0416  5B                        POP EBX
004D0417  8B E5                     MOV ESP,EBP
004D0419  5D                        POP EBP
004D041A  C3                        RET
LAB_004d041b:
004D041B  8B 8E FF 05 00 00         MOV ECX,dword ptr [ESI + 0x5ff]
004D0421  6A 0D                     PUSH 0xd
004D0423  E8 3C 3E F3 FF            CALL 0x00404264
LAB_004d0428:
004D0428  6A 0A                     PUSH 0xa
004D042A  8D 8E D5 01 00 00         LEA ECX,[ESI + 0x1d5]
004D0430  E8 97 4E F3 FF            CALL 0x004052cc
004D0435  8B 8E FF 05 00 00         MOV ECX,dword ptr [ESI + 0x5ff]
004D043B  50                        PUSH EAX
004D043C  E8 8B 4E F3 FF            CALL 0x004052cc
004D0441  8B 8E 11 02 00 00         MOV ECX,dword ptr [ESI + 0x211]
004D0447  50                        PUSH EAX
004D0448  E8 F3 9E 21 00            CALL 0x006ea340
004D044D  8B 0D A0 B2 7F 00         MOV ECX,dword ptr [0x007fb2a0]
004D0453  E8 C4 53 F3 FF            CALL 0x0040581c
004D0458  83 F8 03                  CMP EAX,0x3
004D045B  77 69                     JA 0x004d04c6
switchD_004d045d::switchD:
004D045D  FF 24 85 A8 05 4D 00      JMP dword ptr [EAX*0x4 + 0x4d05a8]
switchD_004d045d::caseD_0:
004D0464  8B 86 69 03 00 00         MOV EAX,dword ptr [ESI + 0x369]
004D046A  8B 0D 38 94 7A 00         MOV ECX,dword ptr [0x007a9438]
004D0470  C1 E0 04                  SHL EAX,0x4
004D0473  8B 98 B8 90 7A 00         MOV EBX,dword ptr [EAX + 0x7a90b8]
004D0479  EB 48                     JMP 0x004d04c3
switchD_004d045d::caseD_1:
004D047B  8B 96 69 03 00 00         MOV EDX,dword ptr [ESI + 0x369]
004D0481  A1 3C 94 7A 00            MOV EAX,[0x007a943c]
004D0486  C1 E2 04                  SHL EDX,0x4
004D0489  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
004D048C  8B 9A BC 90 7A 00         MOV EBX,dword ptr [EDX + 0x7a90bc]
004D0492  EB 32                     JMP 0x004d04c6
switchD_004d045d::caseD_2:
004D0494  8B 8E 69 03 00 00         MOV ECX,dword ptr [ESI + 0x369]
004D049A  8B 15 40 94 7A 00         MOV EDX,dword ptr [0x007a9440]
004D04A0  C1 E1 04                  SHL ECX,0x4
004D04A3  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
004D04A6  8B 99 C0 90 7A 00         MOV EBX,dword ptr [ECX + 0x7a90c0]
004D04AC  EB 18                     JMP 0x004d04c6
switchD_004d045d::caseD_3:
004D04AE  8B 86 69 03 00 00         MOV EAX,dword ptr [ESI + 0x369]
004D04B4  8B 0D 44 94 7A 00         MOV ECX,dword ptr [0x007a9444]
004D04BA  C1 E0 04                  SHL EAX,0x4
004D04BD  8B 98 C4 90 7A 00         MOV EBX,dword ptr [EAX + 0x7a90c4]
LAB_004d04c3:
004D04C3  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
switchD_004d045d::default:
004D04C6  8B 8E FF 05 00 00         MOV ECX,dword ptr [ESI + 0x5ff]
004D04CC  6A 00                     PUSH 0x0
004D04CE  E8 AF 24 F3 FF            CALL 0x00402982
004D04D3  8B 8E FF 05 00 00         MOV ECX,dword ptr [ESI + 0x5ff]
004D04D9  6A 00                     PUSH 0x0
004D04DB  53                        PUSH EBX
004D04DC  53                        PUSH EBX
004D04DD  6A 0E                     PUSH 0xe
004D04DF  E8 D6 19 F3 FF            CALL 0x00401eba
004D04E4  8B 8E FF 05 00 00         MOV ECX,dword ptr [ESI + 0x5ff]
004D04EA  6A 00                     PUSH 0x0
004D04EC  53                        PUSH EBX
004D04ED  53                        PUSH EBX
004D04EE  6A 0C                     PUSH 0xc
004D04F0  E8 C5 19 F3 FF            CALL 0x00401eba
004D04F5  8B 8E FF 05 00 00         MOV ECX,dword ptr [ESI + 0x5ff]
004D04FB  53                        PUSH EBX
004D04FC  6A 0E                     PUSH 0xe
004D04FE  E8 61 0B F3 FF            CALL 0x00401064
004D0503  8B 8E FF 05 00 00         MOV ECX,dword ptr [ESI + 0x5ff]
004D0509  53                        PUSH EBX
004D050A  6A 0C                     PUSH 0xc
004D050C  E8 53 0B F3 FF            CALL 0x00401064
004D0511  8B 15 38 2A 80 00         MOV EDX,dword ptr [0x00802a38]
004D0517  8B 8E FF 05 00 00         MOV ECX,dword ptr [ESI + 0x5ff]
004D051D  8B 82 E4 00 00 00         MOV EAX,dword ptr [EDX + 0xe4]
004D0523  50                        PUSH EAX
004D0524  6A 0E                     PUSH 0xe
004D0526  E8 15 4D F3 FF            CALL 0x00405240
004D052B  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
004D0531  8B 91 E4 00 00 00         MOV EDX,dword ptr [ECX + 0xe4]
004D0537  8B 8E FF 05 00 00         MOV ECX,dword ptr [ESI + 0x5ff]
004D053D  52                        PUSH EDX
004D053E  6A 0C                     PUSH 0xc
004D0540  E8 FB 4C F3 FF            CALL 0x00405240
004D0545  8B 86 69 03 00 00         MOV EAX,dword ptr [ESI + 0x369]
004D054B  83 C9 FF                  OR ECX,0xffffffff
004D054E  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
004D0551  8D 3C 45 42 94 7A 00      LEA EDI,[EAX*0x2 + 0x7a9442]
004D0558  33 C0                     XOR EAX,EAX
004D055A  F2 AE                     SCASB.REPNE ES:EDI
004D055C  F7 D1                     NOT ECX
004D055E  49                        DEC ECX
004D055F  74 3B                     JZ 0x004d059c
004D0561  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
004D0564  8B 8E FF 05 00 00         MOV ECX,dword ptr [ESI + 0x5ff]
004D056A  50                        PUSH EAX
004D056B  57                        PUSH EDI
004D056C  57                        PUSH EDI
004D056D  6A 0D                     PUSH 0xd
004D056F  E8 46 19 F3 FF            CALL 0x00401eba
004D0574  8B 8E FF 05 00 00         MOV ECX,dword ptr [ESI + 0x5ff]
004D057A  57                        PUSH EDI
004D057B  6A 0D                     PUSH 0xd
004D057D  E8 E2 0A F3 FF            CALL 0x00401064
004D0582  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
004D0588  8B 91 E4 00 00 00         MOV EDX,dword ptr [ECX + 0xe4]
004D058E  8B 8E FF 05 00 00         MOV ECX,dword ptr [ESI + 0x5ff]
004D0594  52                        PUSH EDX
004D0595  6A 0D                     PUSH 0xd
004D0597  E8 A4 4C F3 FF            CALL 0x00405240
LAB_004d059c:
004D059C  5F                        POP EDI
004D059D  5E                        POP ESI
004D059E  33 C0                     XOR EAX,EAX
004D05A0  5B                        POP EBX
004D05A1  8B E5                     MOV ESP,EBP
004D05A3  5D                        POP EBP
004D05A4  C3                        RET
