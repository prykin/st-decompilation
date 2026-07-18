FUN_0071ab30:
0071AB30  55                        PUSH EBP
0071AB31  8B EC                     MOV EBP,ESP
0071AB33  83 EC 58                  SUB ESP,0x58
0071AB36  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0071AB3B  53                        PUSH EBX
0071AB3C  56                        PUSH ESI
0071AB3D  57                        PUSH EDI
0071AB3E  33 FF                     XOR EDI,EDI
0071AB40  8D 55 AC                  LEA EDX,[EBP + -0x54]
0071AB43  8D 4D A8                  LEA ECX,[EBP + -0x58]
0071AB46  57                        PUSH EDI
0071AB47  52                        PUSH EDX
0071AB48  89 7D F8                  MOV dword ptr [EBP + -0x8],EDI
0071AB4B  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
0071AB4E  89 45 A8                  MOV dword ptr [EBP + -0x58],EAX
0071AB51  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0071AB57  E8 94 2C 01 00            CALL 0x0072d7f0
0071AB5C  8B F0                     MOV ESI,EAX
0071AB5E  83 C4 08                  ADD ESP,0x8
0071AB61  3B F7                     CMP ESI,EDI
0071AB63  0F 85 80 00 00 00         JNZ 0x0071abe9
0071AB69  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
0071AB6C  8B 5D 0C                  MOV EBX,dword ptr [EBP + 0xc]
0071AB6F  3B F7                     CMP ESI,EDI
0071AB71  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
0071AB74  74 0F                     JZ 0x0071ab85
0071AB76  85 DB                     TEST EBX,EBX
0071AB78  74 0B                     JZ 0x0071ab85
0071AB7A  85 FF                     TEST EDI,EDI
0071AB7C  74 07                     JZ 0x0071ab85
0071AB7E  8B 46 14                  MOV EAX,dword ptr [ESI + 0x14]
0071AB81  85 C0                     TEST EAX,EAX
0071AB83  75 14                     JNZ 0x0071ab99
LAB_0071ab85:
0071AB85  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
0071AB8A  6A 39                     PUSH 0x39
0071AB8C  68 98 08 7F 00            PUSH 0x7f0898
0071AB91  50                        PUSH EAX
0071AB92  6A CC                     PUSH -0x34
0071AB94  E8 A7 B2 F8 FF            CALL 0x006a5e40
LAB_0071ab99:
0071AB99  8B 4E 08                  MOV ECX,dword ptr [ESI + 0x8]
0071AB9C  8D 55 F8                  LEA EDX,[EBP + -0x8]
0071AB9F  52                        PUSH EDX
0071ABA0  56                        PUSH ESI
0071ABA1  89 4D EC                  MOV dword ptr [EBP + -0x14],ECX
0071ABA4  E8 67 DD FA FF            CALL 0x006c8910
0071ABA9  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
0071ABAC  6A 00                     PUSH 0x0
0071ABAE  51                        PUSH ECX
0071ABAF  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0071ABB2  8D 55 EC                  LEA EDX,[EBP + -0x14]
0071ABB5  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0071ABB8  52                        PUSH EDX
0071ABB9  51                        PUSH ECX
0071ABBA  50                        PUSH EAX
0071ABBB  57                        PUSH EDI
0071ABBC  6A 17                     PUSH 0x17
0071ABBE  8B CB                     MOV ECX,EBX
0071ABC0  E8 2B 68 FD FF            CALL 0x006f13f0
0071ABC5  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0071ABC8  85 C0                     TEST EAX,EAX
0071ABCA  74 09                     JZ 0x0071abd5
0071ABCC  8D 55 FC                  LEA EDX,[EBP + -0x4]
0071ABCF  52                        PUSH EDX
0071ABD0  E8 8B 04 F9 FF            CALL 0x006ab060
LAB_0071abd5:
0071ABD5  8B 45 A8                  MOV EAX,dword ptr [EBP + -0x58]
0071ABD8  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0071ABDD  B8 01 00 00 00            MOV EAX,0x1
0071ABE2  5F                        POP EDI
0071ABE3  5E                        POP ESI
0071ABE4  5B                        POP EBX
0071ABE5  8B E5                     MOV ESP,EBP
0071ABE7  5D                        POP EBP
0071ABE8  C3                        RET
LAB_0071abe9:
0071ABE9  8B 4D A8                  MOV ECX,dword ptr [EBP + -0x58]
0071ABEC  68 B0 08 7F 00            PUSH 0x7f08b0
0071ABF1  68 CC 4C 7A 00            PUSH 0x7a4ccc
0071ABF6  56                        PUSH ESI
0071ABF7  57                        PUSH EDI
0071ABF8  6A 44                     PUSH 0x44
0071ABFA  68 98 08 7F 00            PUSH 0x7f0898
0071ABFF  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0071AC05  E8 C6 28 F9 FF            CALL 0x006ad4d0
0071AC0A  83 C4 18                  ADD ESP,0x18
0071AC0D  85 C0                     TEST EAX,EAX
0071AC0F  74 01                     JZ 0x0071ac12
0071AC11  CC                        INT3
LAB_0071ac12:
0071AC12  39 7D FC                  CMP dword ptr [EBP + -0x4],EDI
0071AC15  74 09                     JZ 0x0071ac20
0071AC17  8D 55 FC                  LEA EDX,[EBP + -0x4]
0071AC1A  52                        PUSH EDX
0071AC1B  E8 40 04 F9 FF            CALL 0x006ab060
LAB_0071ac20:
0071AC20  6A 48                     PUSH 0x48
0071AC22  68 98 08 7F 00            PUSH 0x7f0898
0071AC27  57                        PUSH EDI
0071AC28  56                        PUSH ESI
0071AC29  E8 12 B2 F8 FF            CALL 0x006a5e40
0071AC2E  5F                        POP EDI
0071AC2F  5E                        POP ESI
0071AC30  33 C0                     XOR EAX,EAX
0071AC32  5B                        POP EBX
0071AC33  8B E5                     MOV ESP,EBP
0071AC35  5D                        POP EBP
0071AC36  C3                        RET
