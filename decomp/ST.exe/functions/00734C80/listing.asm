__fassign:
00734C80  55                        PUSH EBP
00734C81  8B EC                     MOV EBP,ESP
00734C83  83 EC 0C                  SUB ESP,0xc
00734C86  83 7D 08 00               CMP dword ptr [EBP + 0x8],0x0
00734C8A  74 20                     JZ 0x00734cac
00734C8C  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
00734C8F  50                        PUSH EAX
00734C90  8D 4D F8                  LEA ECX,[EBP + -0x8]
00734C93  51                        PUSH ECX
00734C94  E8 47 B8 00 00            CALL 0x007404e0
00734C99  83 C4 08                  ADD ESP,0x8
00734C9C  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
00734C9F  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00734CA2  89 02                     MOV dword ptr [EDX],EAX
00734CA4  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00734CA7  89 4A 04                  MOV dword ptr [EDX + 0x4],ECX
00734CAA  EB 18                     JMP 0x00734cc4
LAB_00734cac:
00734CAC  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
00734CAF  52                        PUSH EDX
00734CB0  8D 45 F4                  LEA EAX,[EBP + -0xc]
00734CB3  50                        PUSH EAX
00734CB4  E8 A7 B8 00 00            CALL 0x00740560
00734CB9  83 C4 08                  ADD ESP,0x8
00734CBC  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00734CBF  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
00734CC2  89 11                     MOV dword ptr [ECX],EDX
LAB_00734cc4:
00734CC4  8B E5                     MOV ESP,EBP
00734CC6  5D                        POP EBP
00734CC7  C3                        RET
