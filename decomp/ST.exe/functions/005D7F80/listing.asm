SIDTy::DoneSID:
005D7F80  55                        PUSH EBP
005D7F81  8B EC                     MOV EBP,ESP
005D7F83  83 EC 48                  SUB ESP,0x48
005D7F86  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
005D7F8B  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
005D7F8E  56                        PUSH ESI
005D7F8F  8D 55 BC                  LEA EDX,[EBP + -0x44]
005D7F92  8D 4D B8                  LEA ECX,[EBP + -0x48]
005D7F95  6A 00                     PUSH 0x0
005D7F97  52                        PUSH EDX
005D7F98  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
005D7F9B  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005D7FA1  E8 4A 58 15 00            CALL 0x0072d7f0
005D7FA6  8B F0                     MOV ESI,EAX
005D7FA8  83 C4 08                  ADD ESP,0x8
005D7FAB  85 F6                     TEST ESI,ESI
005D7FAD  0F 85 06 01 00 00         JNZ 0x005d80b9
005D7FB3  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
005D7FB6  8B CE                     MOV ECX,ESI
005D7FB8  E8 D1 C5 E2 FF            CALL 0x0040458e
005D7FBD  8B 86 D0 1C 00 00         MOV EAX,dword ptr [ESI + 0x1cd0]
005D7FC3  85 C0                     TEST EAX,EAX
005D7FC5  74 06                     JZ 0x005d7fcd
005D7FC7  50                        PUSH EAX
005D7FC8  E8 A3 D5 0D 00            CALL 0x006b5570
LAB_005d7fcd:
005D7FCD  8B 86 CC 1C 00 00         MOV EAX,dword ptr [ESI + 0x1ccc]
005D7FD3  C7 86 D0 1C 00 00 00 00 00 00  MOV dword ptr [ESI + 0x1cd0],0x0
005D7FDD  85 C0                     TEST EAX,EAX
005D7FDF  74 06                     JZ 0x005d7fe7
005D7FE1  50                        PUSH EAX
005D7FE2  E8 89 D5 0D 00            CALL 0x006b5570
LAB_005d7fe7:
005D7FE7  8D 8E 60 1A 00 00         LEA ECX,[ESI + 0x1a60]
005D7FED  C7 86 CC 1C 00 00 00 00 00 00  MOV dword ptr [ESI + 0x1ccc],0x0
005D7FF7  E8 B4 DA 13 00            CALL 0x00715ab0
005D7FFC  8D 8E 01 1B 00 00         LEA ECX,[ESI + 0x1b01]
005D8002  E8 A9 DA 13 00            CALL 0x00715ab0
005D8007  8D 8E 92 1B 00 00         LEA ECX,[ESI + 0x1b92]
005D800D  E8 9E DA 13 00            CALL 0x00715ab0
005D8012  8D 8E 23 1C 00 00         LEA ECX,[ESI + 0x1c23]
005D8018  E8 93 DA 13 00            CALL 0x00715ab0
005D801D  8B 86 B4 1C 00 00         MOV EAX,dword ptr [ESI + 0x1cb4]
005D8023  83 F8 FF                  CMP EAX,-0x1
005D8026  74 0C                     JZ 0x005d8034
005D8028  50                        PUSH EAX
005D8029  A1 A8 75 80 00            MOV EAX,[0x008075a8]
005D802E  50                        PUSH EAX
005D802F  E8 7C BB 0D 00            CALL 0x006b3bb0
LAB_005d8034:
005D8034  8B 8E B8 1C 00 00         MOV ECX,dword ptr [ESI + 0x1cb8]
005D803A  8D 86 B8 1C 00 00         LEA EAX,[ESI + 0x1cb8]
005D8040  85 C9                     TEST ECX,ECX
005D8042  C7 86 B4 1C 00 00 FF FF FF FF  MOV dword ptr [ESI + 0x1cb4],0xffffffff
005D804C  74 06                     JZ 0x005d8054
005D804E  50                        PUSH EAX
005D804F  E8 0C 30 0D 00            CALL 0x006ab060
LAB_005d8054:
005D8054  8B 8E C8 1C 00 00         MOV ECX,dword ptr [ESI + 0x1cc8]
005D805A  8D 86 C8 1C 00 00         LEA EAX,[ESI + 0x1cc8]
005D8060  85 C9                     TEST ECX,ECX
005D8062  74 06                     JZ 0x005d806a
005D8064  50                        PUSH EAX
005D8065  E8 F6 2F 0D 00            CALL 0x006ab060
LAB_005d806a:
005D806A  8B 8E BC 1C 00 00         MOV ECX,dword ptr [ESI + 0x1cbc]
005D8070  8D 86 BC 1C 00 00         LEA EAX,[ESI + 0x1cbc]
005D8076  85 C9                     TEST ECX,ECX
005D8078  74 06                     JZ 0x005d8080
005D807A  50                        PUSH EAX
005D807B  E8 E0 2F 0D 00            CALL 0x006ab060
LAB_005d8080:
005D8080  8B 8E C0 1C 00 00         MOV ECX,dword ptr [ESI + 0x1cc0]
005D8086  8D 86 C0 1C 00 00         LEA EAX,[ESI + 0x1cc0]
005D808C  85 C9                     TEST ECX,ECX
005D808E  74 06                     JZ 0x005d8096
005D8090  50                        PUSH EAX
005D8091  E8 CA 2F 0D 00            CALL 0x006ab060
LAB_005d8096:
005D8096  8B 46 4D                  MOV EAX,dword ptr [ESI + 0x4d]
005D8099  85 C0                     TEST EAX,EAX
005D809B  74 0E                     JZ 0x005d80ab
005D809D  83 C6 3D                  ADD ESI,0x3d
005D80A0  B9 20 76 80 00            MOV ECX,0x807620
005D80A5  56                        PUSH ESI
005D80A6  E8 A5 BA 10 00            CALL 0x006e3b50
LAB_005d80ab:
005D80AB  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
005D80AE  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005D80B4  5E                        POP ESI
005D80B5  8B E5                     MOV ESP,EBP
005D80B7  5D                        POP EBP
005D80B8  C3                        RET
LAB_005d80b9:
005D80B9  8B 55 B8                  MOV EDX,dword ptr [EBP + -0x48]
005D80BC  68 28 D6 7C 00            PUSH 0x7cd628
005D80C1  68 CC 4C 7A 00            PUSH 0x7a4ccc
005D80C6  56                        PUSH ESI
005D80C7  6A 00                     PUSH 0x0
005D80C9  6A 62                     PUSH 0x62
005D80CB  68 C4 D5 7C 00            PUSH 0x7cd5c4
005D80D0  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
005D80D6  E8 F5 53 0D 00            CALL 0x006ad4d0
005D80DB  83 C4 18                  ADD ESP,0x18
005D80DE  85 C0                     TEST EAX,EAX
005D80E0  74 01                     JZ 0x005d80e3
005D80E2  CC                        INT3
LAB_005d80e3:
005D80E3  6A 62                     PUSH 0x62
005D80E5  68 C4 D5 7C 00            PUSH 0x7cd5c4
005D80EA  6A 00                     PUSH 0x0
005D80EC  56                        PUSH ESI
005D80ED  E8 4E DD 0C 00            CALL 0x006a5e40
005D80F2  5E                        POP ESI
005D80F3  8B E5                     MOV ESP,EBP
005D80F5  5D                        POP EBP
005D80F6  C3                        RET
