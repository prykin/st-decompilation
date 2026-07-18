PlayPanelTy::ShiftControls:
0053AA50  55                        PUSH EBP
0053AA51  8B EC                     MOV EBP,ESP
0053AA53  83 EC 50                  SUB ESP,0x50
0053AA56  8B D1                     MOV EDX,ECX
0053AA58  53                        PUSH EBX
0053AA59  56                        PUSH ESI
0053AA5A  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
0053AA5D  8B 42 5C                  MOV EAX,dword ptr [EDX + 0x5c]
0053AA60  57                        PUSH EDI
0053AA61  3B F0                     CMP ESI,EAX
0053AA63  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
0053AA66  0F 84 2B 01 00 00         JZ 0x0053ab97
0053AA6C  B9 08 00 00 00            MOV ECX,0x8
0053AA71  33 C0                     XOR EAX,EAX
0053AA73  8D 7A 18                  LEA EDI,[EDX + 0x18]
0053AA76  89 72 5C                  MOV dword ptr [EDX + 0x5c],ESI
0053AA79  F3 AB                     STOSD.REP ES:EDI
0053AA7B  8B 82 74 01 00 00         MOV EAX,dword ptr [EDX + 0x174]
0053AA81  C7 42 28 24 00 00 00      MOV dword ptr [EDX + 0x28],0x24
0053AA88  85 F6                     TEST ESI,ESI
0053AA8A  75 02                     JNZ 0x0053aa8e
0053AA8C  F7 D8                     NEG EAX
LAB_0053aa8e:
0053AA8E  66 89 42 2E               MOV word ptr [EDX + 0x2e],AX
0053AA92  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0053AA97  8D 55 B4                  LEA EDX,[EBP + -0x4c]
0053AA9A  8D 4D B0                  LEA ECX,[EBP + -0x50]
0053AA9D  6A 00                     PUSH 0x0
0053AA9F  52                        PUSH EDX
0053AAA0  89 45 B0                  MOV dword ptr [EBP + -0x50],EAX
0053AAA3  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0053AAA9  E8 42 2D 1F 00            CALL 0x0072d7f0
0053AAAE  8B F0                     MOV ESI,EAX
0053AAB0  83 C4 08                  ADD ESP,0x8
0053AAB3  85 F6                     TEST ESI,ESI
0053AAB5  0F 85 9D 00 00 00         JNZ 0x0053ab58
0053AABB  8B 75 F4                  MOV ESI,dword ptr [EBP + -0xc]
0053AABE  8B 86 7C 01 00 00         MOV EAX,dword ptr [ESI + 0x17c]
0053AAC4  85 C0                     TEST EAX,EAX
0053AAC6  74 0E                     JZ 0x0053aad6
0053AAC8  8D 4E 18                  LEA ECX,[ESI + 0x18]
0053AACB  51                        PUSH ECX
0053AACC  50                        PUSH EAX
0053AACD  6A 02                     PUSH 0x2
0053AACF  8B CE                     MOV ECX,ESI
0053AAD1  E8 AA B5 1A 00            CALL 0x006e6080
LAB_0053aad6:
0053AAD6  8D BE 81 01 00 00         LEA EDI,[ESI + 0x181]
0053AADC  C7 45 F8 08 00 00 00      MOV dword ptr [EBP + -0x8],0x8
0053AAE3  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
LAB_0053aae6:
0053AAE6  BB 02 00 00 00            MOV EBX,0x2
LAB_0053aaeb:
0053AAEB  8B 07                     MOV EAX,dword ptr [EDI]
0053AAED  85 C0                     TEST EAX,EAX
0053AAEF  74 0E                     JZ 0x0053aaff
0053AAF1  8D 56 18                  LEA EDX,[ESI + 0x18]
0053AAF4  8B CE                     MOV ECX,ESI
0053AAF6  52                        PUSH EDX
0053AAF7  50                        PUSH EAX
0053AAF8  6A 02                     PUSH 0x2
0053AAFA  E8 81 B5 1A 00            CALL 0x006e6080
LAB_0053aaff:
0053AAFF  83 C7 20                  ADD EDI,0x20
0053AB02  4B                        DEC EBX
0053AB03  75 E6                     JNZ 0x0053aaeb
0053AB05  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
0053AB08  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0053AB0B  83 C7 04                  ADD EDI,0x4
0053AB0E  48                        DEC EAX
0053AB0F  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
0053AB12  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0053AB15  75 CF                     JNZ 0x0053aae6
0053AB17  8B 86 C5 01 00 00         MOV EAX,dword ptr [ESI + 0x1c5]
0053AB1D  85 C0                     TEST EAX,EAX
0053AB1F  74 0E                     JZ 0x0053ab2f
0053AB21  8D 4E 18                  LEA ECX,[ESI + 0x18]
0053AB24  51                        PUSH ECX
0053AB25  50                        PUSH EAX
0053AB26  6A 02                     PUSH 0x2
0053AB28  8B CE                     MOV ECX,ESI
0053AB2A  E8 51 B5 1A 00            CALL 0x006e6080
LAB_0053ab2f:
0053AB2F  8B 86 C1 01 00 00         MOV EAX,dword ptr [ESI + 0x1c1]
0053AB35  85 C0                     TEST EAX,EAX
0053AB37  74 0E                     JZ 0x0053ab47
0053AB39  8D 56 18                  LEA EDX,[ESI + 0x18]
0053AB3C  8B CE                     MOV ECX,ESI
0053AB3E  52                        PUSH EDX
0053AB3F  50                        PUSH EAX
0053AB40  6A 02                     PUSH 0x2
0053AB42  E8 39 B5 1A 00            CALL 0x006e6080
LAB_0053ab47:
0053AB47  8B 45 B0                  MOV EAX,dword ptr [EBP + -0x50]
0053AB4A  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0053AB4F  5F                        POP EDI
0053AB50  5E                        POP ESI
0053AB51  5B                        POP EBX
0053AB52  8B E5                     MOV ESP,EBP
0053AB54  5D                        POP EBP
0053AB55  C2 04 00                  RET 0x4
LAB_0053ab58:
0053AB58  8B 4D B0                  MOV ECX,dword ptr [EBP + -0x50]
0053AB5B  68 68 76 7C 00            PUSH 0x7c7668
0053AB60  68 CC 4C 7A 00            PUSH 0x7a4ccc
0053AB65  56                        PUSH ESI
0053AB66  6A 00                     PUSH 0x0
0053AB68  68 FE 00 00 00            PUSH 0xfe
0053AB6D  68 74 75 7C 00            PUSH 0x7c7574
0053AB72  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0053AB78  E8 53 29 17 00            CALL 0x006ad4d0
0053AB7D  83 C4 18                  ADD ESP,0x18
0053AB80  85 C0                     TEST EAX,EAX
0053AB82  74 01                     JZ 0x0053ab85
0053AB84  CC                        INT3
LAB_0053ab85:
0053AB85  68 FE 00 00 00            PUSH 0xfe
0053AB8A  68 74 75 7C 00            PUSH 0x7c7574
0053AB8F  6A 00                     PUSH 0x0
0053AB91  56                        PUSH ESI
0053AB92  E8 A9 B2 16 00            CALL 0x006a5e40
LAB_0053ab97:
0053AB97  5F                        POP EDI
0053AB98  5E                        POP ESI
0053AB99  5B                        POP EBX
0053AB9A  8B E5                     MOV ESP,EBP
0053AB9C  5D                        POP EBP
0053AB9D  C2 04 00                  RET 0x4
