AiBossClassTy::InitData:
00647DC0  55                        PUSH EBP
00647DC1  8B EC                     MOV EBP,ESP
00647DC3  83 EC 48                  SUB ESP,0x48
00647DC6  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
00647DCB  56                        PUSH ESI
00647DCC  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
00647DCF  57                        PUSH EDI
00647DD0  8D 55 BC                  LEA EDX,[EBP + -0x44]
00647DD3  8D 4D B8                  LEA ECX,[EBP + -0x48]
00647DD6  6A 00                     PUSH 0x0
00647DD8  52                        PUSH EDX
00647DD9  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
00647DDC  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00647DE2  E8 09 5A 0E 00            CALL 0x0072d7f0
00647DE7  8B F0                     MOV ESI,EAX
00647DE9  83 C4 08                  ADD ESP,0x8
00647DEC  85 F6                     TEST ESI,ESI
00647DEE  75 4E                     JNZ 0x00647e3e
00647DF0  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00647DF3  85 C0                     TEST EAX,EAX
00647DF5  74 08                     JZ 0x00647dff
00647DF7  8D B8 D3 05 00 00         LEA EDI,[EAX + 0x5d3]
00647DFD  EB 02                     JMP 0x00647e01
LAB_00647dff:
00647DFF  33 FF                     XOR EDI,EDI
LAB_00647e01:
00647E01  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00647E04  B9 21 00 00 00            MOV ECX,0x21
00647E09  8B F2                     MOV ESI,EDX
00647E0B  F3 A5                     MOVSD.REP ES:EDI,ESI
00647E0D  A4                        MOVSB ES:EDI,ESI
00647E0E  8B 88 19 06 00 00         MOV ECX,dword ptr [EAX + 0x619]
00647E14  C6 80 D8 05 00 00 01      MOV byte ptr [EAX + 0x5d8],0x1
00647E1B  8D 8C 11 84 00 00 00      LEA ECX,[ECX + EDX*0x1 + 0x84]
00647E22  51                        PUSH ECX
00647E23  8D 48 1C                  LEA ECX,[EAX + 0x1c]
00647E26  E8 86 D6 DB FF            CALL 0x004054b1
00647E2B  8B 55 B8                  MOV EDX,dword ptr [EBP + -0x48]
00647E2E  33 C0                     XOR EAX,EAX
00647E30  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00647E36  5F                        POP EDI
00647E37  5E                        POP ESI
00647E38  8B E5                     MOV ESP,EBP
00647E3A  5D                        POP EBP
00647E3B  C2 04 00                  RET 0x4
LAB_00647e3e:
00647E3E  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
00647E41  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00647E44  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00647E49  E8 DA 96 DB FF            CALL 0x00401528
00647E4E  68 70 27 7D 00            PUSH 0x7d2770
00647E53  68 CC 4C 7A 00            PUSH 0x7a4ccc
00647E58  56                        PUSH ESI
00647E59  6A 00                     PUSH 0x0
00647E5B  6A 29                     PUSH 0x29
00647E5D  68 50 27 7D 00            PUSH 0x7d2750
00647E62  E8 69 56 06 00            CALL 0x006ad4d0
00647E67  83 C4 18                  ADD ESP,0x18
00647E6A  85 C0                     TEST EAX,EAX
00647E6C  74 01                     JZ 0x00647e6f
00647E6E  CC                        INT3
LAB_00647e6f:
00647E6F  6A 2A                     PUSH 0x2a
00647E71  68 50 27 7D 00            PUSH 0x7d2750
00647E76  6A 00                     PUSH 0x0
00647E78  56                        PUSH ESI
00647E79  E8 C2 DF 05 00            CALL 0x006a5e40
00647E7E  8B C6                     MOV EAX,ESI
00647E80  5F                        POP EDI
00647E81  5E                        POP ESI
00647E82  8B E5                     MOV ESP,EBP
00647E84  5D                        POP EBP
00647E85  C2 04 00                  RET 0x4
