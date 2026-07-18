SpecPanelTy::SwitchPanel:
0053E760  55                        PUSH EBP
0053E761  8B EC                     MOV EBP,ESP
0053E763  83 EC 48                  SUB ESP,0x48
0053E766  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0053E76B  56                        PUSH ESI
0053E76C  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0053E76F  57                        PUSH EDI
0053E770  8D 55 BC                  LEA EDX,[EBP + -0x44]
0053E773  8D 4D B8                  LEA ECX,[EBP + -0x48]
0053E776  6A 00                     PUSH 0x0
0053E778  52                        PUSH EDX
0053E779  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
0053E77C  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0053E782  E8 69 F0 1E 00            CALL 0x0072d7f0
0053E787  8B F0                     MOV ESI,EAX
0053E789  83 C4 08                  ADD ESP,0x8
0053E78C  85 F6                     TEST ESI,ESI
0053E78E  0F 85 DA 00 00 00         JNZ 0x0053e86e
0053E794  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
0053E797  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
0053E79A  66 8B 86 72 01 00 00      MOV AX,word ptr [ESI + 0x172]
0053E7A1  48                        DEC EAX
0053E7A2  74 63                     JZ 0x0053e807
0053E7A4  48                        DEC EAX
0053E7A5  74 17                     JZ 0x0053e7be
0053E7A7  48                        DEC EAX
0053E7A8  0F 84 96 00 00 00         JZ 0x0053e844
0053E7AE  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
0053E7B1  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0053E7B6  5F                        POP EDI
0053E7B7  5E                        POP ESI
0053E7B8  8B E5                     MOV ESP,EBP
0053E7BA  5D                        POP EBP
0053E7BB  C2 04 00                  RET 0x4
LAB_0053e7be:
0053E7BE  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0053E7C1  85 C0                     TEST EAX,EAX
0053E7C3  0F 84 95 00 00 00         JZ 0x0053e85e
0053E7C9  68 AF 00 00 00            PUSH 0xaf
0053E7CE  66 C7 86 72 01 00 00 03 00  MOV word ptr [ESI + 0x172],0x3
0053E7D7  E8 53 76 EC FF            CALL 0x00405e2f
0053E7DC  8B 0D 88 16 80 00         MOV ECX,dword ptr [0x00801688]
0053E7E2  83 C4 04                  ADD ESP,0x4
0053E7E5  85 C9                     TEST ECX,ECX
0053E7E7  74 75                     JZ 0x0053e85e
0053E7E9  8B 86 80 01 00 00         MOV EAX,dword ptr [ESI + 0x180]
0053E7EF  6A 00                     PUSH 0x0
0053E7F1  50                        PUSH EAX
0053E7F2  E8 C5 75 EC FF            CALL 0x00405dbc
0053E7F7  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
0053E7FA  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0053E7FF  5F                        POP EDI
0053E800  5E                        POP ESI
0053E801  8B E5                     MOV ESP,EBP
0053E803  5D                        POP EBP
0053E804  C2 04 00                  RET 0x4
LAB_0053e807:
0053E807  85 FF                     TEST EDI,EDI
0053E809  75 53                     JNZ 0x0053e85e
0053E80B  8B 86 78 01 00 00         MOV EAX,dword ptr [ESI + 0x178]
0053E811  85 C0                     TEST EAX,EAX
0053E813  74 26                     JZ 0x0053e83b
0053E815  C7 46 28 02 42 00 00      MOV dword ptr [ESI + 0x28],0x4202
0053E81C  66 89 7E 2C               MOV word ptr [ESI + 0x2c],DI
0053E820  66 C7 46 2E 02 00         MOV word ptr [ESI + 0x2e],0x2
0053E826  89 46 30                  MOV dword ptr [ESI + 0x30],EAX
0053E829  8B 0D 30 2A 80 00         MOV ECX,dword ptr [0x00802a30]
0053E82F  85 C9                     TEST ECX,ECX
0053E831  74 08                     JZ 0x0053e83b
0053E833  8B 11                     MOV EDX,dword ptr [ECX]
0053E835  8D 46 18                  LEA EAX,[ESI + 0x18]
0053E838  50                        PUSH EAX
0053E839  FF 12                     CALL dword ptr [EDX]
LAB_0053e83b:
0053E83B  8B 16                     MOV EDX,dword ptr [ESI]
0053E83D  6A 00                     PUSH 0x0
0053E83F  8B CE                     MOV ECX,ESI
0053E841  FF 52 18                  CALL dword ptr [EDX + 0x18]
LAB_0053e844:
0053E844  85 FF                     TEST EDI,EDI
0053E846  75 16                     JNZ 0x0053e85e
0053E848  68 B0 00 00 00            PUSH 0xb0
0053E84D  66 C7 86 72 01 00 00 04 00  MOV word ptr [ESI + 0x172],0x4
0053E856  E8 D4 75 EC FF            CALL 0x00405e2f
0053E85B  83 C4 04                  ADD ESP,0x4
LAB_0053e85e:
0053E85E  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
0053E861  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0053E866  5F                        POP EDI
0053E867  5E                        POP ESI
0053E868  8B E5                     MOV ESP,EBP
0053E86A  5D                        POP EBP
0053E86B  C2 04 00                  RET 0x4
LAB_0053e86e:
0053E86E  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
0053E871  68 64 79 7C 00            PUSH 0x7c7964
0053E876  68 CC 4C 7A 00            PUSH 0x7a4ccc
0053E87B  56                        PUSH ESI
0053E87C  6A 00                     PUSH 0x0
0053E87E  68 13 01 00 00            PUSH 0x113
0053E883  68 70 78 7C 00            PUSH 0x7c7870
0053E888  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0053E88E  E8 3D EC 16 00            CALL 0x006ad4d0
0053E893  83 C4 18                  ADD ESP,0x18
0053E896  85 C0                     TEST EAX,EAX
0053E898  74 01                     JZ 0x0053e89b
0053E89A  CC                        INT3
LAB_0053e89b:
0053E89B  68 13 01 00 00            PUSH 0x113
0053E8A0  68 70 78 7C 00            PUSH 0x7c7870
0053E8A5  6A 00                     PUSH 0x0
0053E8A7  56                        PUSH ESI
0053E8A8  E8 93 75 16 00            CALL 0x006a5e40
0053E8AD  5F                        POP EDI
0053E8AE  5E                        POP ESI
0053E8AF  8B E5                     MOV ESP,EBP
0053E8B1  5D                        POP EBP
0053E8B2  C2 04 00                  RET 0x4
