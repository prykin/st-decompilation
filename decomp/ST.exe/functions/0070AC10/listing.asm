mfPcxLoadToDib:
0070AC10  55                        PUSH EBP
0070AC11  8B EC                     MOV EBP,ESP
0070AC13  83 EC 50                  SUB ESP,0x50
0070AC16  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0070AC1B  53                        PUSH EBX
0070AC1C  56                        PUSH ESI
0070AC1D  57                        PUSH EDI
0070AC1E  33 FF                     XOR EDI,EDI
0070AC20  8D 55 B4                  LEA EDX,[EBP + -0x4c]
0070AC23  8D 4D B0                  LEA ECX,[EBP + -0x50]
0070AC26  57                        PUSH EDI
0070AC27  52                        PUSH EDX
0070AC28  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
0070AC2B  89 7D F8                  MOV dword ptr [EBP + -0x8],EDI
0070AC2E  89 7D F4                  MOV dword ptr [EBP + -0xc],EDI
0070AC31  89 45 B0                  MOV dword ptr [EBP + -0x50],EAX
0070AC34  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0070AC3A  E8 B1 2B 02 00            CALL 0x0072d7f0
0070AC3F  8B F0                     MOV ESI,EAX
0070AC41  83 C4 08                  ADD ESP,0x8
0070AC44  3B F7                     CMP ESI,EDI
0070AC46  75 7D                     JNZ 0x0070acc5
0070AC48  8B 75 10                  MOV ESI,dword ptr [EBP + 0x10]
0070AC4B  8B 5D 0C                  MOV EBX,dword ptr [EBP + 0xc]
0070AC4E  56                        PUSH ESI
0070AC4F  57                        PUSH EDI
0070AC50  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
0070AC53  53                        PUSH EBX
0070AC54  57                        PUSH EDI
0070AC55  E8 96 FF FF FF            CALL 0x0070abf0
0070AC5A  83 C4 10                  ADD ESP,0x10
0070AC5D  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0070AC60  85 C0                     TEST EAX,EAX
0070AC62  75 11                     JNZ 0x0070ac75
0070AC64  8B 45 B0                  MOV EAX,dword ptr [EBP + -0x50]
0070AC67  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0070AC6C  33 C0                     XOR EAX,EAX
0070AC6E  5F                        POP EDI
0070AC6F  5E                        POP ESI
0070AC70  5B                        POP EBX
0070AC71  8B E5                     MOV ESP,EBP
0070AC73  5D                        POP EBP
0070AC74  C3                        RET
LAB_0070ac75:
0070AC75  56                        PUSH ESI
0070AC76  53                        PUSH EBX
0070AC77  6A 04                     PUSH 0x4
0070AC79  57                        PUSH EDI
0070AC7A  E8 D1 F9 FF FF            CALL 0x0070a650
0070AC7F  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0070AC82  83 C4 10                  ADD ESP,0x10
0070AC85  50                        PUSH EAX
0070AC86  51                        PUSH ECX
0070AC87  E8 C4 CF FB FF            CALL 0x006c7c50
0070AC8C  8B F0                     MOV ESI,EAX
0070AC8E  6A 00                     PUSH 0x0
0070AC90  6A 00                     PUSH 0x0
0070AC92  56                        PUSH ESI
0070AC93  89 75 F4                  MOV dword ptr [EBP + -0xc],ESI
0070AC96  E8 05 CD FB FF            CALL 0x006c79a0
0070AC9B  85 F6                     TEST ESI,ESI
0070AC9D  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0070ACA0  74 06                     JZ 0x0070aca8
0070ACA2  56                        PUSH ESI
0070ACA3  E8 D8 CC FB FF            CALL 0x006c7980
LAB_0070aca8:
0070ACA8  8D 55 FC                  LEA EDX,[EBP + -0x4]
0070ACAB  8B CF                     MOV ECX,EDI
0070ACAD  52                        PUSH EDX
0070ACAE  E8 2D 74 FE FF            CALL 0x006f20e0
0070ACB3  8B 45 B0                  MOV EAX,dword ptr [EBP + -0x50]
0070ACB6  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0070ACBB  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0070ACBE  5F                        POP EDI
0070ACBF  5E                        POP ESI
0070ACC0  5B                        POP EBX
0070ACC1  8B E5                     MOV ESP,EBP
0070ACC3  5D                        POP EBP
0070ACC4  C3                        RET
LAB_0070acc5:
0070ACC5  8B 4D B0                  MOV ECX,dword ptr [EBP + -0x50]
0070ACC8  68 60 00 7F 00            PUSH 0x7f0060
0070ACCD  68 CC 4C 7A 00            PUSH 0x7a4ccc
0070ACD2  56                        PUSH ESI
0070ACD3  57                        PUSH EDI
0070ACD4  68 4B 01 00 00            PUSH 0x14b
0070ACD9  68 E0 FF 7E 00            PUSH 0x7effe0
0070ACDE  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0070ACE4  E8 E7 27 FA FF            CALL 0x006ad4d0
0070ACE9  83 C4 18                  ADD ESP,0x18
0070ACEC  85 C0                     TEST EAX,EAX
0070ACEE  74 01                     JZ 0x0070acf1
0070ACF0  CC                        INT3
LAB_0070acf1:
0070ACF1  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0070ACF4  3B C7                     CMP EAX,EDI
0070ACF6  74 06                     JZ 0x0070acfe
0070ACF8  50                        PUSH EAX
0070ACF9  E8 82 CC FB FF            CALL 0x006c7980
LAB_0070acfe:
0070ACFE  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0070AD01  8D 55 FC                  LEA EDX,[EBP + -0x4]
0070AD04  52                        PUSH EDX
0070AD05  E8 D6 73 FE FF            CALL 0x006f20e0
0070AD0A  39 7D F8                  CMP dword ptr [EBP + -0x8],EDI
0070AD0D  74 09                     JZ 0x0070ad18
0070AD0F  8D 45 F8                  LEA EAX,[EBP + -0x8]
0070AD12  50                        PUSH EAX
0070AD13  E8 48 03 FA FF            CALL 0x006ab060
LAB_0070ad18:
0070AD18  68 51 01 00 00            PUSH 0x151
0070AD1D  68 E0 FF 7E 00            PUSH 0x7effe0
0070AD22  57                        PUSH EDI
0070AD23  56                        PUSH ESI
0070AD24  E8 17 B1 F9 FF            CALL 0x006a5e40
0070AD29  5F                        POP EDI
0070AD2A  5E                        POP ESI
0070AD2B  33 C0                     XOR EAX,EAX
0070AD2D  5B                        POP EBX
0070AD2E  8B E5                     MOV ESP,EBP
0070AD30  5D                        POP EBP
0070AD31  C3                        RET
