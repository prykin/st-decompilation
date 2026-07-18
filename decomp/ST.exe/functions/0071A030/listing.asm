FUN_0071a030:
0071A030  55                        PUSH EBP
0071A031  8B EC                     MOV EBP,ESP
0071A033  83 EC 50                  SUB ESP,0x50
0071A036  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0071A03B  53                        PUSH EBX
0071A03C  56                        PUSH ESI
0071A03D  57                        PUSH EDI
0071A03E  8D 55 B4                  LEA EDX,[EBP + -0x4c]
0071A041  8D 4D B0                  LEA ECX,[EBP + -0x50]
0071A044  6A 00                     PUSH 0x0
0071A046  52                        PUSH EDX
0071A047  89 45 B0                  MOV dword ptr [EBP + -0x50],EAX
0071A04A  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0071A050  E8 9B 37 01 00            CALL 0x0072d7f0
0071A055  8B F0                     MOV ESI,EAX
0071A057  83 C4 08                  ADD ESP,0x8
0071A05A  85 F6                     TEST ESI,ESI
0071A05C  75 60                     JNZ 0x0071a0be
0071A05E  8B 75 14                  MOV ESI,dword ptr [EBP + 0x14]
0071A061  8B 7D 18                  MOV EDI,dword ptr [EBP + 0x18]
0071A064  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
0071A067  85 F6                     TEST ESI,ESI
0071A069  74 08                     JZ 0x0071a073
0071A06B  85 DB                     TEST EBX,EBX
0071A06D  74 04                     JZ 0x0071a073
0071A06F  85 FF                     TEST EDI,EDI
0071A071  75 14                     JNZ 0x0071a087
LAB_0071a073:
0071A073  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
0071A078  6A 7B                     PUSH 0x7b
0071A07A  68 00 08 7F 00            PUSH 0x7f0800
0071A07F  50                        PUSH EAX
0071A080  6A FA                     PUSH -0x6
0071A082  E8 B9 BD F8 FF            CALL 0x006a5e40
LAB_0071a087:
0071A087  66 0F B6 4D 10            MOVZX CX,byte ptr [EBP + 0x10]
0071A08C  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
0071A08F  66 89 4D F4               MOV word ptr [EBP + -0xc],CX
0071A093  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0071A096  6A 00                     PUSH 0x0
0071A098  8D 45 F4                  LEA EAX,[EBP + -0xc]
0071A09B  52                        PUSH EDX
0071A09C  50                        PUSH EAX
0071A09D  51                        PUSH ECX
0071A09E  53                        PUSH EBX
0071A09F  57                        PUSH EDI
0071A0A0  6A 02                     PUSH 0x2
0071A0A2  8B CE                     MOV ECX,ESI
0071A0A4  E8 47 73 FD FF            CALL 0x006f13f0
0071A0A9  8B 55 B0                  MOV EDX,dword ptr [EBP + -0x50]
0071A0AC  B8 01 00 00 00            MOV EAX,0x1
0071A0B1  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0071A0B7  5F                        POP EDI
0071A0B8  5E                        POP ESI
0071A0B9  5B                        POP EBX
0071A0BA  8B E5                     MOV ESP,EBP
0071A0BC  5D                        POP EBP
0071A0BD  C3                        RET
LAB_0071a0be:
0071A0BE  8B 45 B0                  MOV EAX,dword ptr [EBP + -0x50]
0071A0C1  68 44 08 7F 00            PUSH 0x7f0844
0071A0C6  68 CC 4C 7A 00            PUSH 0x7a4ccc
0071A0CB  56                        PUSH ESI
0071A0CC  6A 00                     PUSH 0x0
0071A0CE  68 80 00 00 00            PUSH 0x80
0071A0D3  68 00 08 7F 00            PUSH 0x7f0800
0071A0D8  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0071A0DD  E8 EE 33 F9 FF            CALL 0x006ad4d0
0071A0E2  83 C4 18                  ADD ESP,0x18
0071A0E5  85 C0                     TEST EAX,EAX
0071A0E7  74 01                     JZ 0x0071a0ea
0071A0E9  CC                        INT3
LAB_0071a0ea:
0071A0EA  68 82 00 00 00            PUSH 0x82
0071A0EF  68 00 08 7F 00            PUSH 0x7f0800
0071A0F4  6A 00                     PUSH 0x0
0071A0F6  56                        PUSH ESI
0071A0F7  E8 44 BD F8 FF            CALL 0x006a5e40
0071A0FC  5F                        POP EDI
0071A0FD  5E                        POP ESI
0071A0FE  33 C0                     XOR EAX,EAX
0071A100  5B                        POP EBX
0071A101  8B E5                     MOV ESP,EBP
0071A103  5D                        POP EBP
0071A104  C3                        RET
