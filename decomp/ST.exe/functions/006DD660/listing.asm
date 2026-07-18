FUN_006dd660:
006DD660  55                        PUSH EBP
006DD661  8B EC                     MOV EBP,ESP
006DD663  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006DD666  56                        PUSH ESI
006DD667  85 D2                     TEST EDX,EDX
006DD669  57                        PUSH EDI
006DD66A  7C 53                     JL 0x006dd6bf
006DD66C  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006DD66F  85 C0                     TEST EAX,EAX
006DD671  7C 4C                     JL 0x006dd6bf
006DD673  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
006DD676  85 FF                     TEST EDI,EDI
006DD678  7E 45                     JLE 0x006dd6bf
006DD67A  8B 75 14                  MOV ESI,dword ptr [EBP + 0x14]
006DD67D  85 F6                     TEST ESI,ESI
006DD67F  7E 3E                     JLE 0x006dd6bf
006DD681  89 41 34                  MOV dword ptr [ECX + 0x34],EAX
006DD684  03 C6                     ADD EAX,ESI
006DD686  89 51 30                  MOV dword ptr [ECX + 0x30],EDX
006DD689  03 D7                     ADD EDX,EDI
006DD68B  89 41 3C                  MOV dword ptr [ECX + 0x3c],EAX
006DD68E  8B 81 94 00 00 00         MOV EAX,dword ptr [ECX + 0x94]
006DD694  89 51 38                  MOV dword ptr [ECX + 0x38],EDX
006DD697  8B 91 90 00 00 00         MOV EDX,dword ptr [ECX + 0x90]
006DD69D  50                        PUSH EAX
006DD69E  8B 81 8C 00 00 00         MOV EAX,dword ptr [ECX + 0x8c]
006DD6A4  52                        PUSH EDX
006DD6A5  8B 91 88 00 00 00         MOV EDX,dword ptr [ECX + 0x88]
006DD6AB  50                        PUSH EAX
006DD6AC  8B 81 A8 00 00 00         MOV EAX,dword ptr [ECX + 0xa8]
006DD6B2  52                        PUSH EDX
006DD6B3  50                        PUSH EAX
006DD6B4  E8 97 F9 FF FF            CALL 0x006dd050
006DD6B9  5F                        POP EDI
006DD6BA  5E                        POP ESI
006DD6BB  5D                        POP EBP
006DD6BC  C2 10 00                  RET 0x10
LAB_006dd6bf:
006DD6BF  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
006DD6C5  68 DA 03 00 00            PUSH 0x3da
006DD6CA  68 58 E7 7E 00            PUSH 0x7ee758
006DD6CF  51                        PUSH ECX
006DD6D0  6A CC                     PUSH -0x34
006DD6D2  E8 69 87 FC FF            CALL 0x006a5e40
006DD6D7  5F                        POP EDI
006DD6D8  5E                        POP ESI
006DD6D9  5D                        POP EBP
006DD6DA  C2 10 00                  RET 0x10
