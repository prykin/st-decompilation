FUN_006b54f0:
006B54F0  55                        PUSH EBP
006B54F1  8B EC                     MOV EBP,ESP
006B54F3  57                        PUSH EDI
006B54F4  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
006B54F7  85 FF                     TEST EDI,EDI
006B54F9  75 13                     JNZ 0x006b550e
006B54FB  6A 18                     PUSH 0x18
006B54FD  E8 0E 57 FF FF            CALL 0x006aac10
006B5502  85 C0                     TEST EAX,EAX
006B5504  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
006B5507  74 59                     JZ 0x006b5562
006B5509  83 08 08                  OR dword ptr [EAX],0x8
006B550C  EB 09                     JMP 0x006b5517
LAB_006b550e:
006B550E  B9 06 00 00 00            MOV ECX,0x6
006B5513  33 C0                     XOR EAX,EAX
006B5515  F3 AB                     STOSD.REP ES:EDI
LAB_006b5517:
006B5517  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006B551A  85 C0                     TEST EAX,EAX
006B551C  74 44                     JZ 0x006b5562
006B551E  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006B5521  89 48 10                  MOV dword ptr [EAX + 0x10],ECX
006B5524  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006B5527  52                        PUSH EDX
006B5528  E8 53 FF FF FF            CALL 0x006b5480
006B552D  85 C0                     TEST EAX,EAX
006B552F  74 25                     JZ 0x006b5556
006B5531  8D 45 08                  LEA EAX,[EBP + 0x8]
006B5534  50                        PUSH EAX
006B5535  E8 26 5B FF FF            CALL 0x006ab060
006B553A  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
006B5540  6A 29                     PUSH 0x29
006B5542  68 50 DB 7E 00            PUSH 0x7edb50
006B5547  51                        PUSH ECX
006B5548  6A FE                     PUSH -0x2
006B554A  E8 F1 08 FF FF            CALL 0x006a5e40
006B554F  33 C0                     XOR EAX,EAX
006B5551  5F                        POP EDI
006B5552  5D                        POP EBP
006B5553  C2 0C 00                  RET 0xc
LAB_006b5556:
006B5556  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006B5559  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006B555C  89 50 10                  MOV dword ptr [EAX + 0x10],EDX
006B555F  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
LAB_006b5562:
006B5562  5F                        POP EDI
006B5563  5D                        POP EBP
006B5564  C2 0C 00                  RET 0xc
