FUN_006c3630:
006C3630  55                        PUSH EBP
006C3631  8B EC                     MOV EBP,ESP
006C3633  53                        PUSH EBX
006C3634  56                        PUSH ESI
006C3635  57                        PUSH EDI
006C3636  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
006C3639  F7 47 04 00 00 00 80      TEST dword ptr [EDI + 0x4],0x80000000
006C3640  74 06                     JZ 0x006c3648
006C3642  57                        PUSH EDI
006C3643  E8 28 FF FF FF            CALL 0x006c3570
LAB_006c3648:
006C3648  8D 5F 54                  LEA EBX,[EDI + 0x54]
006C364B  53                        PUSH EBX
006C364C  68 F8 10 7A 00            PUSH 0x7a10f8
006C3651  6A 01                     PUSH 0x1
006C3653  6A 00                     PUSH 0x0
006C3655  68 E8 10 7A 00            PUSH 0x7a10e8
006C365A  FF 15 E4 C0 85 00         CALL dword ptr [0x0085c0e4]
006C3660  8B F0                     MOV ESI,EAX
006C3662  85 F6                     TEST ESI,ESI
006C3664  0F 8C A6 00 00 00         JL 0x006c3710
006C366A  8B 03                     MOV EAX,dword ptr [EBX]
006C366C  8D 5F 58                  LEA EBX,[EDI + 0x58]
006C366F  53                        PUSH EBX
006C3670  68 D8 10 7A 00            PUSH 0x7a10d8
006C3675  8B 08                     MOV ECX,dword ptr [EAX]
006C3677  50                        PUSH EAX
006C3678  FF 11                     CALL dword ptr [ECX]
006C367A  8B F0                     MOV ESI,EAX
006C367C  85 F6                     TEST ESI,ESI
006C367E  0F 85 8C 00 00 00         JNZ 0x006c3710
006C3684  8B 1B                     MOV EBX,dword ptr [EBX]
006C3686  8D 47 74                  LEA EAX,[EDI + 0x74]
006C3689  50                        PUSH EAX
006C368A  53                        PUSH EBX
006C368B  8B 13                     MOV EDX,dword ptr [EBX]
006C368D  FF 52 1C                  CALL dword ptr [EDX + 0x1c]
006C3690  8B F0                     MOV ESI,EAX
006C3692  85 F6                     TEST ESI,ESI
006C3694  7C 7A                     JL 0x006c3710
006C3696  8D 4F 48                  LEA ECX,[EDI + 0x48]
006C3699  57                        PUSH EDI
006C369A  8D 57 40                  LEA EDX,[EDI + 0x40]
006C369D  51                        PUSH ECX
006C369E  52                        PUSH EDX
006C369F  E8 4C 18 01 00            CALL 0x006d4ef0
006C36A4  8B F0                     MOV ESI,EAX
006C36A6  85 F6                     TEST ESI,ESI
006C36A8  75 66                     JNZ 0x006c3710
006C36AA  8D 47 4C                  LEA EAX,[EDI + 0x4c]
006C36AD  57                        PUSH EDI
006C36AE  8D 4F 44                  LEA ECX,[EDI + 0x44]
006C36B1  50                        PUSH EAX
006C36B2  51                        PUSH ECX
006C36B3  E8 B8 18 01 00            CALL 0x006d4f70
006C36B8  8B F0                     MOV ESI,EAX
006C36BA  85 F6                     TEST ESI,ESI
006C36BC  75 52                     JNZ 0x006c3710
006C36BE  8D 55 08                  LEA EDX,[EBP + 0x8]
006C36C1  52                        PUSH EDX
006C36C2  50                        PUSH EAX
006C36C3  57                        PUSH EDI
006C36C4  68 20 37 6C 00            PUSH 0x6c3720
006C36C9  50                        PUSH EAX
006C36CA  50                        PUSH EAX
006C36CB  FF 15 70 BB 85 00         CALL dword ptr [0x0085bb70]
006C36D1  85 C0                     TEST EAX,EAX
006C36D3  89 87 84 00 00 00         MOV dword ptr [EDI + 0x84],EAX
006C36D9  75 20                     JNZ 0x006c36fb
006C36DB  FF 15 CC BB 85 00         CALL dword ptr [0x0085bbcc]
006C36E1  8B F0                     MOV ESI,EAX
006C36E3  85 F6                     TEST ESI,ESI
006C36E5  75 29                     JNZ 0x006c3710
006C36E7  57                        PUSH EDI
006C36E8  BE 03 FF FF FF            MOV ESI,0xffffff03
006C36ED  E8 7E FE FF FF            CALL 0x006c3570
006C36F2  8B C6                     MOV EAX,ESI
006C36F4  5F                        POP EDI
006C36F5  5E                        POP ESI
006C36F6  5B                        POP EBX
006C36F7  5D                        POP EBP
006C36F8  C2 04 00                  RET 0x4
LAB_006c36fb:
006C36FB  8B 4F 04                  MOV ECX,dword ptr [EDI + 0x4]
006C36FE  33 C0                     XOR EAX,EAX
006C3700  81 C9 00 00 00 80         OR ECX,0x80000000
006C3706  89 4F 04                  MOV dword ptr [EDI + 0x4],ECX
006C3709  5F                        POP EDI
006C370A  5E                        POP ESI
006C370B  5B                        POP EBX
006C370C  5D                        POP EBP
006C370D  C2 04 00                  RET 0x4
LAB_006c3710:
006C3710  57                        PUSH EDI
006C3711  E8 5A FE FF FF            CALL 0x006c3570
006C3716  8B C6                     MOV EAX,ESI
006C3718  5F                        POP EDI
006C3719  5E                        POP ESI
006C371A  5B                        POP EBX
006C371B  5D                        POP EBP
006C371C  C2 04 00                  RET 0x4
