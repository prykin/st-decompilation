EditorClassTy::SendToSliders:
00721BF0  55                        PUSH EBP
00721BF1  8B EC                     MOV EBP,ESP
00721BF3  83 EC 68                  SUB ESP,0x68
00721BF6  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
00721BFB  56                        PUSH ESI
00721BFC  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
00721BFF  57                        PUSH EDI
00721C00  8D 55 9C                  LEA EDX,[EBP + -0x64]
00721C03  8D 4D 98                  LEA ECX,[EBP + -0x68]
00721C06  6A 00                     PUSH 0x0
00721C08  52                        PUSH EDX
00721C09  89 45 98                  MOV dword ptr [EBP + -0x68],EAX
00721C0C  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00721C12  E8 D9 BB 00 00            CALL 0x0072d7f0
00721C17  8B F0                     MOV ESI,EAX
00721C19  83 C4 08                  ADD ESP,0x8
00721C1C  85 F6                     TEST ESI,ESI
00721C1E  75 5F                     JNZ 0x00721c7f
00721C20  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
00721C23  8B 46 0C                  MOV EAX,dword ptr [ESI + 0xc]
00721C26  25 FF FF FF 00            AND EAX,0xffffff
00721C2B  83 F8 02                  CMP EAX,0x2
00721C2E  75 3D                     JNZ 0x00721c6d
00721C30  B9 08 00 00 00            MOV ECX,0x8
00721C35  8D 7D DC                  LEA EDI,[EBP + -0x24]
00721C38  F3 A5                     MOVSD.REP ES:EDI,ESI
00721C3A  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
00721C3D  8B 86 FC 01 00 00         MOV EAX,dword ptr [ESI + 0x1fc]
00721C43  85 C0                     TEST EAX,EAX
00721C45  74 0E                     JZ 0x00721c55
00721C47  8D 4D DC                  LEA ECX,[EBP + -0x24]
00721C4A  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
00721C4D  51                        PUSH ECX
00721C4E  8B CE                     MOV ECX,ESI
00721C50  E8 0B 44 FC FF            CALL 0x006e6060
LAB_00721c55:
00721C55  8B 86 00 02 00 00         MOV EAX,dword ptr [ESI + 0x200]
00721C5B  85 C0                     TEST EAX,EAX
00721C5D  74 0E                     JZ 0x00721c6d
00721C5F  8D 55 DC                  LEA EDX,[EBP + -0x24]
00721C62  8B CE                     MOV ECX,ESI
00721C64  52                        PUSH EDX
00721C65  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
00721C68  E8 F3 43 FC FF            CALL 0x006e6060
LAB_00721c6d:
00721C6D  8B 45 98                  MOV EAX,dword ptr [EBP + -0x68]
00721C70  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00721C75  33 C0                     XOR EAX,EAX
00721C77  5F                        POP EDI
00721C78  5E                        POP ESI
00721C79  8B E5                     MOV ESP,EBP
00721C7B  5D                        POP EBP
00721C7C  C2 04 00                  RET 0x4
LAB_00721c7f:
00721C7F  8B 4D 98                  MOV ECX,dword ptr [EBP + -0x68]
00721C82  68 40 0B 7F 00            PUSH 0x7f0b40
00721C87  68 CC 4C 7A 00            PUSH 0x7a4ccc
00721C8C  56                        PUSH ESI
00721C8D  6A 00                     PUSH 0x0
00721C8F  68 93 01 00 00            PUSH 0x193
00721C94  68 08 0B 7F 00            PUSH 0x7f0b08
00721C99  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00721C9F  E8 2C B8 F8 FF            CALL 0x006ad4d0
00721CA4  83 C4 18                  ADD ESP,0x18
00721CA7  85 C0                     TEST EAX,EAX
00721CA9  74 01                     JZ 0x00721cac
00721CAB  CC                        INT3
LAB_00721cac:
00721CAC  68 94 01 00 00            PUSH 0x194
00721CB1  68 08 0B 7F 00            PUSH 0x7f0b08
00721CB6  6A 00                     PUSH 0x0
00721CB8  56                        PUSH ESI
00721CB9  E8 82 41 F8 FF            CALL 0x006a5e40
00721CBE  8B C6                     MOV EAX,ESI
00721CC0  5F                        POP EDI
00721CC1  5E                        POP ESI
00721CC2  8B E5                     MOV ESP,EBP
00721CC4  5D                        POP EBP
00721CC5  C2 04 00                  RET 0x4
