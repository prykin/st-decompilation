AiTactClassTy::InitDistrObj:
0068F7E0  55                        PUSH EBP
0068F7E1  8B EC                     MOV EBP,ESP
0068F7E3  83 EC 4C                  SUB ESP,0x4c
0068F7E6  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0068F7EB  56                        PUSH ESI
0068F7EC  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
0068F7EF  57                        PUSH EDI
0068F7F0  8D 55 B8                  LEA EDX,[EBP + -0x48]
0068F7F3  8D 4D B4                  LEA ECX,[EBP + -0x4c]
0068F7F6  6A 00                     PUSH 0x0
0068F7F8  52                        PUSH EDX
0068F7F9  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
0068F800  89 45 B4                  MOV dword ptr [EBP + -0x4c],EAX
0068F803  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0068F809  E8 E2 DF 09 00            CALL 0x0072d7f0
0068F80E  8B F0                     MOV ESI,EAX
0068F810  83 C4 08                  ADD ESP,0x8
0068F813  85 F6                     TEST ESI,ESI
0068F815  75 3D                     JNZ 0x0068f854
0068F817  8B 7D F8                  MOV EDI,dword ptr [EBP + -0x8]
0068F81A  8B 47 24                  MOV EAX,dword ptr [EDI + 0x24]
0068F81D  50                        PUSH EAX
0068F81E  E8 86 55 D7 FF            CALL 0x00404da9
0068F823  83 C4 04                  ADD ESP,0x4
0068F826  8B F0                     MOV ESI,EAX
0068F828  8B CF                     MOV ECX,EDI
0068F82A  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
0068F82D  56                        PUSH ESI
0068F82E  E8 D1 45 D7 FF            CALL 0x00403e04
0068F833  56                        PUSH ESI
0068F834  8B CF                     MOV ECX,EDI
0068F836  E8 B7 48 D7 FF            CALL 0x004040f2
0068F83B  85 F6                     TEST ESI,ESI
0068F83D  74 06                     JZ 0x0068f845
0068F83F  56                        PUSH ESI
0068F840  E8 CB E8 01 00            CALL 0x006ae110
LAB_0068f845:
0068F845  8B 4D B4                  MOV ECX,dword ptr [EBP + -0x4c]
0068F848  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0068F84E  5F                        POP EDI
0068F84F  5E                        POP ESI
0068F850  8B E5                     MOV ESP,EBP
0068F852  5D                        POP EBP
0068F853  C3                        RET
LAB_0068f854:
0068F854  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0068F857  8B 55 B4                  MOV EDX,dword ptr [EBP + -0x4c]
0068F85A  85 C0                     TEST EAX,EAX
0068F85C  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0068F862  74 0D                     JZ 0x0068f871
0068F864  50                        PUSH EAX
0068F865  E8 A6 E8 01 00            CALL 0x006ae110
0068F86A  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
LAB_0068f871:
0068F871  68 2C 58 7D 00            PUSH 0x7d582c
0068F876  68 CC 4C 7A 00            PUSH 0x7a4ccc
0068F87B  56                        PUSH ESI
0068F87C  6A 00                     PUSH 0x0
0068F87E  68 A8 02 00 00            PUSH 0x2a8
0068F883  68 E0 56 7D 00            PUSH 0x7d56e0
0068F888  E8 43 DC 01 00            CALL 0x006ad4d0
0068F88D  83 C4 18                  ADD ESP,0x18
0068F890  85 C0                     TEST EAX,EAX
0068F892  74 01                     JZ 0x0068f895
0068F894  CC                        INT3
LAB_0068f895:
0068F895  68 A9 02 00 00            PUSH 0x2a9
0068F89A  68 E0 56 7D 00            PUSH 0x7d56e0
0068F89F  6A 00                     PUSH 0x0
0068F8A1  56                        PUSH ESI
0068F8A2  E8 99 65 01 00            CALL 0x006a5e40
0068F8A7  5F                        POP EDI
0068F8A8  5E                        POP ESI
0068F8A9  8B E5                     MOV ESP,EBP
0068F8AB  5D                        POP EBP
0068F8AC  C3                        RET
