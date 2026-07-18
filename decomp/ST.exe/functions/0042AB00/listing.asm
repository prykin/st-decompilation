STAllPlayersC::GetGObjFromZone:
0042AB00  55                        PUSH EBP
0042AB01  8B EC                     MOV EBP,ESP
0042AB03  83 EC 48                  SUB ESP,0x48
0042AB06  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0042AB0B  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0042AB0E  56                        PUSH ESI
0042AB0F  8D 55 BC                  LEA EDX,[EBP + -0x44]
0042AB12  8D 4D B8                  LEA ECX,[EBP + -0x48]
0042AB15  6A 00                     PUSH 0x0
0042AB17  52                        PUSH EDX
0042AB18  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
0042AB1B  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0042AB21  E8 CA 2C 30 00            CALL 0x0072d7f0
0042AB26  8B F0                     MOV ESI,EAX
0042AB28  83 C4 08                  ADD ESP,0x8
0042AB2B  85 F6                     TEST ESI,ESI
0042AB2D  75 3E                     JNZ 0x0042ab6d
0042AB2F  50                        PUSH EAX
0042AB30  50                        PUSH EAX
0042AB31  50                        PUSH EAX
0042AB32  50                        PUSH EAX
0042AB33  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
0042AB36  50                        PUSH EAX
0042AB37  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
0042AB3A  50                        PUSH EAX
0042AB3B  50                        PUSH EAX
0042AB3C  50                        PUSH EAX
0042AB3D  8B 45 20                  MOV EAX,dword ptr [EBP + 0x20]
0042AB40  50                        PUSH EAX
0042AB41  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
0042AB44  56                        PUSH ESI
0042AB45  56                        PUSH ESI
0042AB46  51                        PUSH ECX
0042AB47  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
0042AB4A  52                        PUSH EDX
0042AB4B  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0042AB4E  50                        PUSH EAX
0042AB4F  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0042AB52  51                        PUSH ECX
0042AB53  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0042AB56  52                        PUSH EDX
0042AB57  50                        PUSH EAX
0042AB58  E8 9E 7D FD FF            CALL 0x004028fb
0042AB5D  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
0042AB60  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0042AB66  5E                        POP ESI
0042AB67  8B E5                     MOV ESP,EBP
0042AB69  5D                        POP EBP
0042AB6A  C2 1C 00                  RET 0x1c
LAB_0042ab6d:
0042AB6D  8B 55 B8                  MOV EDX,dword ptr [EBP + -0x48]
0042AB70  68 28 60 7A 00            PUSH 0x7a6028
0042AB75  68 CC 4C 7A 00            PUSH 0x7a4ccc
0042AB7A  56                        PUSH ESI
0042AB7B  6A 00                     PUSH 0x0
0042AB7D  6A 6A                     PUSH 0x6a
0042AB7F  68 04 60 7A 00            PUSH 0x7a6004
0042AB84  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0042AB8A  E8 41 29 28 00            CALL 0x006ad4d0
0042AB8F  83 C4 18                  ADD ESP,0x18
0042AB92  85 C0                     TEST EAX,EAX
0042AB94  74 01                     JZ 0x0042ab97
0042AB96  CC                        INT3
LAB_0042ab97:
0042AB97  6A 6B                     PUSH 0x6b
0042AB99  68 04 60 7A 00            PUSH 0x7a6004
0042AB9E  6A 00                     PUSH 0x0
0042ABA0  56                        PUSH ESI
0042ABA1  E8 9A B2 27 00            CALL 0x006a5e40
0042ABA6  5E                        POP ESI
0042ABA7  8B E5                     MOV ESP,EBP
0042ABA9  5D                        POP EBP
0042ABAA  C2 1C 00                  RET 0x1c
