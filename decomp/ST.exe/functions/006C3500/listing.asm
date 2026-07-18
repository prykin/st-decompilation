FUN_006c3500:
006C3500  55                        PUSH EBP
006C3501  8B EC                     MOV EBP,ESP
006C3503  83 EC 7C                  SUB ESP,0x7c
006C3506  53                        PUSH EBX
006C3507  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
006C350A  56                        PUSH ESI
006C350B  8A 43 04                  MOV AL,byte ptr [EBX + 0x4]
006C350E  8B 53 28                  MOV EDX,dword ptr [EBX + 0x28]
006C3511  A8 01                     TEST AL,0x1
006C3513  74 4D                     JZ 0x006c3562
006C3515  8B 42 40                  MOV EAX,dword ptr [EDX + 0x40]
006C3518  8D 72 40                  LEA ESI,[EDX + 0x40]
006C351B  85 C0                     TEST EAX,EAX
006C351D  75 43                     JNZ 0x006c3562
006C351F  57                        PUSH EDI
006C3520  B9 1F 00 00 00            MOV ECX,0x1f
006C3525  33 C0                     XOR EAX,EAX
006C3527  8D 7D 84                  LEA EDI,[EBP + -0x7c]
006C352A  F3 AB                     STOSD.REP ES:EDI
006C352C  8B 43 2C                  MOV EAX,dword ptr [EBX + 0x2c]
006C352F  C7 45 84 7C 00 00 00      MOV dword ptr [EBP + -0x7c],0x7c
006C3536  25 40 48 00 00            AND EAX,0x4840
006C353B  C7 45 88 07 00 00 00      MOV dword ptr [EBP + -0x78],0x7
006C3542  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
006C3545  8B 4A 18                  MOV ECX,dword ptr [EDX + 0x18]
006C3548  89 4D 90                  MOV dword ptr [EBP + -0x70],ECX
006C354B  8B 42 1C                  MOV EAX,dword ptr [EDX + 0x1c]
006C354E  89 45 8C                  MOV dword ptr [EBP + -0x74],EAX
006C3551  8B 52 30                  MOV EDX,dword ptr [EDX + 0x30]
006C3554  6A 00                     PUSH 0x0
006C3556  8D 45 84                  LEA EAX,[EBP + -0x7c]
006C3559  8B 0A                     MOV ECX,dword ptr [EDX]
006C355B  56                        PUSH ESI
006C355C  50                        PUSH EAX
006C355D  52                        PUSH EDX
006C355E  FF 51 18                  CALL dword ptr [ECX + 0x18]
006C3561  5F                        POP EDI
LAB_006c3562:
006C3562  5E                        POP ESI
006C3563  5B                        POP EBX
006C3564  8B E5                     MOV ESP,EBP
006C3566  5D                        POP EBP
006C3567  C2 04 00                  RET 0x4
