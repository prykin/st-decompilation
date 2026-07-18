FUN_006d9f30:
006D9F30  55                        PUSH EBP
006D9F31  8B EC                     MOV EBP,ESP
006D9F33  83 EC 20                  SUB ESP,0x20
006D9F36  53                        PUSH EBX
006D9F37  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
006D9F3A  56                        PUSH ESI
006D9F3B  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
006D9F3E  57                        PUSH EDI
006D9F3F  8B 7D 14                  MOV EDI,dword ptr [EBP + 0x14]
006D9F42  39 BE C4 01 00 00         CMP dword ptr [ESI + 0x1c4],EDI
006D9F48  7C 08                     JL 0x006d9f52
006D9F4A  39 96 C8 01 00 00         CMP dword ptr [ESI + 0x1c8],EDX
006D9F50  7D 75                     JGE 0x006d9fc7
LAB_006d9f52:
006D9F52  8B 86 CC 01 00 00         MOV EAX,dword ptr [ESI + 0x1cc]
006D9F58  8D 9E CC 01 00 00         LEA EBX,[ESI + 0x1cc]
006D9F5E  85 C0                     TEST EAX,EAX
006D9F60  74 09                     JZ 0x006d9f6b
006D9F62  8B 08                     MOV ECX,dword ptr [EAX]
006D9F64  50                        PUSH EAX
006D9F65  FF 51 08                  CALL dword ptr [ECX + 0x8]
006D9F68  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
LAB_006d9f6b:
006D9F6B  39 BE C4 01 00 00         CMP dword ptr [ESI + 0x1c4],EDI
006D9F71  7D 06                     JGE 0x006d9f79
006D9F73  89 BE C4 01 00 00         MOV dword ptr [ESI + 0x1c4],EDI
LAB_006d9f79:
006D9F79  39 96 C8 01 00 00         CMP dword ptr [ESI + 0x1c8],EDX
006D9F7F  7D 06                     JGE 0x006d9f87
006D9F81  89 96 C8 01 00 00         MOV dword ptr [ESI + 0x1c8],EDX
LAB_006d9f87:
006D9F87  8B 96 C8 01 00 00         MOV EDX,dword ptr [ESI + 0x1c8]
006D9F8D  8B 86 C4 01 00 00         MOV EAX,dword ptr [ESI + 0x1c4]
006D9F93  8B 0E                     MOV ECX,dword ptr [ESI]
006D9F95  68 00 08 00 00            PUSH 0x800
006D9F9A  6A FF                     PUSH -0x1
006D9F9C  52                        PUSH EDX
006D9F9D  50                        PUSH EAX
006D9F9E  53                        PUSH EBX
006D9F9F  51                        PUSH ECX
006D9FA0  E8 1B 17 FE FF            CALL 0x006bb6c0
006D9FA5  33 C9                     XOR ECX,ECX
006D9FA7  3B C1                     CMP EAX,ECX
006D9FA9  74 17                     JZ 0x006d9fc2
006D9FAB  89 8E C4 01 00 00         MOV dword ptr [ESI + 0x1c4],ECX
006D9FB1  89 8E C8 01 00 00         MOV dword ptr [ESI + 0x1c8],ECX
006D9FB7  5F                        POP EDI
006D9FB8  89 0B                     MOV dword ptr [EBX],ECX
006D9FBA  5E                        POP ESI
006D9FBB  5B                        POP EBX
006D9FBC  8B E5                     MOV ESP,EBP
006D9FBE  5D                        POP EBP
006D9FBF  C2 14 00                  RET 0x14
LAB_006d9fc2:
006D9FC2  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
006D9FC5  EB 02                     JMP 0x006d9fc9
LAB_006d9fc7:
006D9FC7  33 C9                     XOR ECX,ECX
LAB_006d9fc9:
006D9FC9  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006D9FCC  89 4D E0                  MOV dword ptr [EBP + -0x20],ECX
006D9FCF  89 4D E4                  MOV dword ptr [EBP + -0x1c],ECX
006D9FD2  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
006D9FD5  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
006D9FD8  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
006D9FDB  03 C7                     ADD EAX,EDI
006D9FDD  03 CA                     ADD ECX,EDX
006D9FDF  89 7D E8                  MOV dword ptr [EBP + -0x18],EDI
006D9FE2  89 55 EC                  MOV dword ptr [EBP + -0x14],EDX
006D9FE5  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
006D9FE8  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
006D9FEB  33 DB                     XOR EBX,EBX
LAB_006d9fed:
006D9FED  8B 86 CC 01 00 00         MOV EAX,dword ptr [ESI + 0x1cc]
006D9FF3  6A 00                     PUSH 0x0
006D9FF5  8D 4D F0                  LEA ECX,[EBP + -0x10]
006D9FF8  68 00 00 00 01            PUSH 0x1000000
006D9FFD  51                        PUSH ECX
006D9FFE  8B 0E                     MOV ECX,dword ptr [ESI]
006DA000  8B 10                     MOV EDX,dword ptr [EAX]
006DA002  8B 49 44                  MOV ECX,dword ptr [ECX + 0x44]
006DA005  51                        PUSH ECX
006DA006  8D 4D E0                  LEA ECX,[EBP + -0x20]
006DA009  51                        PUSH ECX
006DA00A  50                        PUSH EAX
006DA00B  FF 52 14                  CALL dword ptr [EDX + 0x14]
006DA00E  8B F8                     MOV EDI,EAX
006DA010  85 FF                     TEST EDI,EDI
006DA012  74 40                     JZ 0x006da054
006DA014  81 FF C2 01 76 88         CMP EDI,0x887601c2
006DA01A  75 16                     JNZ 0x006da032
006DA01C  8B 86 CC 01 00 00         MOV EAX,dword ptr [ESI + 0x1cc]
006DA022  50                        PUSH EAX
006DA023  8B 10                     MOV EDX,dword ptr [EAX]
006DA025  FF 52 6C                  CALL dword ptr [EDX + 0x6c]
006DA028  8B 06                     MOV EAX,dword ptr [ESI]
006DA02A  50                        PUSH EAX
006DA02B  E8 10 4C FF FF            CALL 0x006cec40
006DA030  EB 1C                     JMP 0x006da04e
LAB_006da032:
006DA032  81 FF A0 00 76 88         CMP EDI,0x887600a0
006DA038  74 08                     JZ 0x006da042
006DA03A  81 FF AE 01 76 88         CMP EDI,0x887601ae
006DA040  75 12                     JNZ 0x006da054
LAB_006da042:
006DA042  85 DB                     TEST EBX,EBX
006DA044  75 0E                     JNZ 0x006da054
006DA046  6A 02                     PUSH 0x2
006DA048  FF 15 6C BC 85 00         CALL dword ptr [0x0085bc6c]
LAB_006da04e:
006DA04E  43                        INC EBX
006DA04F  83 FB 02                  CMP EBX,0x2
006DA052  7C 99                     JL 0x006d9fed
LAB_006da054:
006DA054  81 FF A0 00 76 88         CMP EDI,0x887600a0
006DA05A  74 08                     JZ 0x006da064
006DA05C  81 FF AE 01 76 88         CMP EDI,0x887601ae
006DA062  75 0B                     JNZ 0x006da06f
LAB_006da064:
006DA064  5F                        POP EDI
006DA065  5E                        POP ESI
006DA066  33 C0                     XOR EAX,EAX
006DA068  5B                        POP EBX
006DA069  8B E5                     MOV ESP,EBP
006DA06B  5D                        POP EBP
006DA06C  C2 14 00                  RET 0x14
LAB_006da06f:
006DA06F  8B C7                     MOV EAX,EDI
006DA071  5F                        POP EDI
006DA072  5E                        POP ESI
006DA073  5B                        POP EBX
006DA074  8B E5                     MOV ESP,EBP
006DA076  5D                        POP EBP
006DA077  C2 14 00                  RET 0x14
