FUN_006c2cc0:
006C2CC0  55                        PUSH EBP
006C2CC1  8B EC                     MOV EBP,ESP
006C2CC3  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006C2CC6  85 C0                     TEST EAX,EAX
006C2CC8  74 2C                     JZ 0x006c2cf6
006C2CCA  83 38 00                  CMP dword ptr [EAX],0x0
006C2CCD  74 27                     JZ 0x006c2cf6
006C2CCF  F7 40 08 00 00 00 40      TEST dword ptr [EAX + 0x8],0x40000000
006C2CD6  74 1E                     JZ 0x006c2cf6
006C2CD8  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006C2CDB  85 C9                     TEST ECX,ECX
006C2CDD  74 05                     JZ 0x006c2ce4
006C2CDF  8B 50 3C                  MOV EDX,dword ptr [EAX + 0x3c]
006C2CE2  89 11                     MOV dword ptr [ECX],EDX
LAB_006c2ce4:
006C2CE4  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
006C2CE7  85 C9                     TEST ECX,ECX
006C2CE9  74 05                     JZ 0x006c2cf0
006C2CEB  8B 40 40                  MOV EAX,dword ptr [EAX + 0x40]
006C2CEE  89 01                     MOV dword ptr [ECX],EAX
LAB_006c2cf0:
006C2CF0  33 C0                     XOR EAX,EAX
006C2CF2  5D                        POP EBP
006C2CF3  C2 0C 00                  RET 0xc
LAB_006c2cf6:
006C2CF6  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006C2CF9  85 C0                     TEST EAX,EAX
006C2CFB  74 06                     JZ 0x006c2d03
006C2CFD  C7 00 00 00 00 00         MOV dword ptr [EAX],0x0
LAB_006c2d03:
006C2D03  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
006C2D06  85 C0                     TEST EAX,EAX
006C2D08  74 06                     JZ 0x006c2d10
006C2D0A  C7 00 00 00 00 00         MOV dword ptr [EAX],0x0
LAB_006c2d10:
006C2D10  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
006C2D16  68 E8 00 00 00            PUSH 0xe8
006C2D1B  68 64 DE 7E 00            PUSH 0x7ede64
006C2D20  51                        PUSH ECX
006C2D21  6A CC                     PUSH -0x34
006C2D23  E8 18 31 FE FF            CALL 0x006a5e40
006C2D28  5D                        POP EBP
006C2D29  C2 0C 00                  RET 0xc
