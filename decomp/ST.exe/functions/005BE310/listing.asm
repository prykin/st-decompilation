FUN_005be310:
005BE310  55                        PUSH EBP
005BE311  8B EC                     MOV EBP,ESP
005BE313  83 EC 48                  SUB ESP,0x48
005BE316  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
005BE31B  53                        PUSH EBX
005BE31C  56                        PUSH ESI
005BE31D  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
005BE320  57                        PUSH EDI
005BE321  8D 55 BC                  LEA EDX,[EBP + -0x44]
005BE324  8D 4D B8                  LEA ECX,[EBP + -0x48]
005BE327  6A 00                     PUSH 0x0
005BE329  52                        PUSH EDX
005BE32A  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
005BE32D  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005BE333  E8 B8 F4 16 00            CALL 0x0072d7f0
005BE338  8B F0                     MOV ESI,EAX
005BE33A  83 C4 08                  ADD ESP,0x8
005BE33D  85 F6                     TEST ESI,ESI
005BE33F  0F 85 88 01 00 00         JNZ 0x005be4cd
005BE345  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
005BE348  B9 08 00 00 00            MOV ECX,0x8
005BE34D  8D 56 1D                  LEA EDX,[ESI + 0x1d]
005BE350  8B FA                     MOV EDI,EDX
005BE352  52                        PUSH EDX
005BE353  F3 AB                     STOSD.REP ES:EDI
005BE355  8B 46 08                  MOV EAX,dword ptr [ESI + 0x8]
005BE358  6A 01                     PUSH 0x1
005BE35A  6A 03                     PUSH 0x3
005BE35C  8B CE                     MOV ECX,ESI
005BE35E  C7 46 2D 14 00 00 00      MOV dword ptr [ESI + 0x2d],0x14
005BE365  89 46 31                  MOV dword ptr [ESI + 0x31],EAX
005BE368  E8 93 7C 12 00            CALL 0x006e6000
005BE36D  8B 0D 9C 75 80 00         MOV ECX,dword ptr [0x0080759c]
005BE373  6A 02                     PUSH 0x2
005BE375  6A 0A                     PUSH 0xa
005BE377  51                        PUSH ECX
005BE378  E8 C6 39 E4 FF            CALL 0x00401d43
005BE37D  8B 0D 30 2A 80 00         MOV ECX,dword ptr [0x00802a30]
005BE383  83 C4 0C                  ADD ESP,0xc
005BE386  85 C9                     TEST ECX,ECX
005BE388  74 05                     JZ 0x005be38f
005BE38A  E8 C6 2C E4 FF            CALL 0x00401055
LAB_005be38f:
005BE38F  8D BE 47 03 00 00         LEA EDI,[ESI + 0x347]
005BE395  BB 03 00 00 00            MOV EBX,0x3
LAB_005be39a:
005BE39A  8B 07                     MOV EAX,dword ptr [EDI]
005BE39C  85 C0                     TEST EAX,EAX
005BE39E  74 0C                     JZ 0x005be3ac
005BE3A0  50                        PUSH EAX
005BE3A1  E8 6A FD 0E 00            CALL 0x006ae110
005BE3A6  C7 07 00 00 00 00         MOV dword ptr [EDI],0x0
LAB_005be3ac:
005BE3AC  83 C7 04                  ADD EDI,0x4
005BE3AF  4B                        DEC EBX
005BE3B0  75 E8                     JNZ 0x005be39a
005BE3B2  8B 8E 53 04 00 00         MOV ECX,dword ptr [ESI + 0x453]
005BE3B8  85 C9                     TEST ECX,ECX
005BE3BA  74 1E                     JZ 0x005be3da
005BE3BC  E8 C9 2E E4 FF            CALL 0x0040128a
005BE3C1  8B 96 53 04 00 00         MOV EDX,dword ptr [ESI + 0x453]
005BE3C7  52                        PUSH EDX
005BE3C8  E8 E3 FE 16 00            CALL 0x0072e2b0
005BE3CD  83 C4 04                  ADD ESP,0x4
005BE3D0  C7 86 53 04 00 00 00 00 00 00  MOV dword ptr [ESI + 0x453],0x0
LAB_005be3da:
005BE3DA  8B 8E 57 04 00 00         MOV ECX,dword ptr [ESI + 0x457]
005BE3E0  85 C9                     TEST ECX,ECX
005BE3E2  74 1E                     JZ 0x005be402
005BE3E4  E8 A1 2E E4 FF            CALL 0x0040128a
005BE3E9  8B 86 57 04 00 00         MOV EAX,dword ptr [ESI + 0x457]
005BE3EF  50                        PUSH EAX
005BE3F0  E8 BB FE 16 00            CALL 0x0072e2b0
005BE3F5  83 C4 04                  ADD ESP,0x4
005BE3F8  C7 86 57 04 00 00 00 00 00 00  MOV dword ptr [ESI + 0x457],0x0
LAB_005be402:
005BE402  8D 4E 5D                  LEA ECX,[ESI + 0x5d]
005BE405  51                        PUSH ECX
005BE406  8B 0D 80 67 80 00         MOV ECX,dword ptr [0x00806780]
005BE40C  E8 CF 3C 13 00            CALL 0x006f20e0
005BE411  8B 0D 80 67 80 00         MOV ECX,dword ptr [0x00806780]
005BE417  8D 56 6F                  LEA EDX,[ESI + 0x6f]
005BE41A  52                        PUSH EDX
005BE41B  E8 C0 3C 13 00            CALL 0x006f20e0
005BE420  8B 4E 77                  MOV ECX,dword ptr [ESI + 0x77]
005BE423  8D 46 77                  LEA EAX,[ESI + 0x77]
005BE426  33 FF                     XOR EDI,EDI
005BE428  3B CF                     CMP ECX,EDI
005BE42A  74 06                     JZ 0x005be432
005BE42C  50                        PUSH EAX
005BE42D  E8 2E CC 0E 00            CALL 0x006ab060
LAB_005be432:
005BE432  8B 4E 7B                  MOV ECX,dword ptr [ESI + 0x7b]
005BE435  8D 46 7B                  LEA EAX,[ESI + 0x7b]
005BE438  3B CF                     CMP ECX,EDI
005BE43A  74 06                     JZ 0x005be442
005BE43C  50                        PUSH EAX
005BE43D  E8 1E CC 0E 00            CALL 0x006ab060
LAB_005be442:
005BE442  8B 4E 73                  MOV ECX,dword ptr [ESI + 0x73]
005BE445  8D 46 73                  LEA EAX,[ESI + 0x73]
005BE448  3B CF                     CMP ECX,EDI
005BE44A  74 06                     JZ 0x005be452
005BE44C  50                        PUSH EAX
005BE44D  E8 0E CC 0E 00            CALL 0x006ab060
LAB_005be452:
005BE452  8B 86 83 00 00 00         MOV EAX,dword ptr [ESI + 0x83]
005BE458  3B C7                     CMP EAX,EDI
005BE45A  74 0F                     JZ 0x005be46b
005BE45C  50                        PUSH EAX
005BE45D  E8 FE 20 15 00            CALL 0x00710560
005BE462  83 C4 04                  ADD ESP,0x4
005BE465  89 BE 83 00 00 00         MOV dword ptr [ESI + 0x83],EDI
LAB_005be46b:
005BE46B  8B 86 87 00 00 00         MOV EAX,dword ptr [ESI + 0x87]
005BE471  3B C7                     CMP EAX,EDI
005BE473  74 17                     JZ 0x005be48c
005BE475  50                        PUSH EAX
005BE476  E8 E5 20 15 00            CALL 0x00710560
005BE47B  89 BE 87 00 00 00         MOV dword ptr [ESI + 0x87],EDI
005BE481  A1 6C 17 81 00            MOV EAX,[0x0081176c]
005BE486  83 C4 04                  ADD ESP,0x4
005BE489  89 78 38                  MOV dword ptr [EAX + 0x38],EDI
LAB_005be48c:
005BE48C  8B 86 8B 00 00 00         MOV EAX,dword ptr [ESI + 0x8b]
005BE492  3B C7                     CMP EAX,EDI
005BE494  74 0F                     JZ 0x005be4a5
005BE496  50                        PUSH EAX
005BE497  E8 C4 20 15 00            CALL 0x00710560
005BE49C  83 C4 04                  ADD ESP,0x4
005BE49F  89 BE 8B 00 00 00         MOV dword ptr [ESI + 0x8b],EDI
LAB_005be4a5:
005BE4A5  8B 46 4D                  MOV EAX,dword ptr [ESI + 0x4d]
005BE4A8  89 7E 7F                  MOV dword ptr [ESI + 0x7f],EDI
005BE4AB  3B C7                     CMP EAX,EDI
005BE4AD  74 0E                     JZ 0x005be4bd
005BE4AF  83 C6 3D                  ADD ESI,0x3d
005BE4B2  B9 20 76 80 00            MOV ECX,0x807620
005BE4B7  56                        PUSH ESI
005BE4B8  E8 93 56 12 00            CALL 0x006e3b50
LAB_005be4bd:
005BE4BD  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
005BE4C0  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005BE4C6  5F                        POP EDI
005BE4C7  5E                        POP ESI
005BE4C8  5B                        POP EBX
005BE4C9  8B E5                     MOV ESP,EBP
005BE4CB  5D                        POP EBP
005BE4CC  C3                        RET
LAB_005be4cd:
005BE4CD  8B 55 B8                  MOV EDX,dword ptr [EBP + -0x48]
005BE4D0  68 7C CF 7C 00            PUSH 0x7ccf7c
005BE4D5  68 CC 4C 7A 00            PUSH 0x7a4ccc
005BE4DA  56                        PUSH ESI
005BE4DB  6A 00                     PUSH 0x0
005BE4DD  68 E5 00 00 00            PUSH 0xe5
005BE4E2  68 C8 CE 7C 00            PUSH 0x7ccec8
005BE4E7  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
005BE4ED  E8 DE EF 0E 00            CALL 0x006ad4d0
005BE4F2  83 C4 18                  ADD ESP,0x18
005BE4F5  85 C0                     TEST EAX,EAX
005BE4F7  74 01                     JZ 0x005be4fa
005BE4F9  CC                        INT3
LAB_005be4fa:
005BE4FA  68 E5 00 00 00            PUSH 0xe5
005BE4FF  68 C8 CE 7C 00            PUSH 0x7ccec8
005BE504  6A 00                     PUSH 0x0
005BE506  56                        PUSH ESI
005BE507  E8 34 79 0E 00            CALL 0x006a5e40
005BE50C  5F                        POP EDI
005BE50D  5E                        POP ESI
005BE50E  5B                        POP EBX
005BE50F  8B E5                     MOV ESP,EBP
005BE511  5D                        POP EBP
005BE512  C3                        RET
