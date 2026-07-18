FUN_006b9a40:
006B9A40  55                        PUSH EBP
006B9A41  8B EC                     MOV EBP,ESP
006B9A43  56                        PUSH ESI
006B9A44  68 70 01 00 00            PUSH 0x170
006B9A49  E8 22 61 00 00            CALL 0x006bfb70
006B9A4E  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
006B9A51  85 C0                     TEST EAX,EAX
006B9A53  89 06                     MOV dword ptr [ESI],EAX
006B9A55  75 0A                     JNZ 0x006b9a61
006B9A57  B8 FE FF FF FF            MOV EAX,0xfffffffe
006B9A5C  5E                        POP ESI
006B9A5D  5D                        POP EBP
006B9A5E  C2 08 00                  RET 0x8
LAB_006b9a61:
006B9A61  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006B9A64  C7 00 1E 00 00 00         MOV dword ptr [EAX],0x1e
006B9A6A  8B 06                     MOV EAX,dword ptr [ESI]
006B9A6C  57                        PUSH EDI
006B9A6D  68 A0 9A 6B 00            PUSH 0x6b9aa0
006B9A72  56                        PUSH ESI
006B9A73  C7 40 04 00 00 00 00      MOV dword ptr [EAX + 0x4],0x0
006B9A7A  8B 41 30                  MOV EAX,dword ptr [ECX + 0x30]
006B9A7D  6A 00                     PUSH 0x0
006B9A7F  6A 00                     PUSH 0x0
006B9A81  8B 10                     MOV EDX,dword ptr [EAX]
006B9A83  50                        PUSH EAX
006B9A84  FF 52 20                  CALL dword ptr [EDX + 0x20]
006B9A87  8B F8                     MOV EDI,EAX
006B9A89  85 FF                     TEST EDI,EDI
006B9A8B  74 06                     JZ 0x006b9a93
006B9A8D  56                        PUSH ESI
006B9A8E  E8 CD 15 FF FF            CALL 0x006ab060
LAB_006b9a93:
006B9A93  8B C7                     MOV EAX,EDI
006B9A95  5F                        POP EDI
006B9A96  5E                        POP ESI
006B9A97  5D                        POP EBP
006B9A98  C2 08 00                  RET 0x8
