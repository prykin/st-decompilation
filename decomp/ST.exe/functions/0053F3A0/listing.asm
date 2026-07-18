ProdPanelTy::SwitchPanel:
0053F3A0  55                        PUSH EBP
0053F3A1  8B EC                     MOV EBP,ESP
0053F3A3  83 EC 48                  SUB ESP,0x48
0053F3A6  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0053F3AB  56                        PUSH ESI
0053F3AC  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0053F3AF  57                        PUSH EDI
0053F3B0  8D 55 BC                  LEA EDX,[EBP + -0x44]
0053F3B3  8D 4D B8                  LEA ECX,[EBP + -0x48]
0053F3B6  6A 00                     PUSH 0x0
0053F3B8  52                        PUSH EDX
0053F3B9  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
0053F3BC  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0053F3C2  E8 29 E4 1E 00            CALL 0x0072d7f0
0053F3C7  8B F0                     MOV ESI,EAX
0053F3C9  83 C4 08                  ADD ESP,0x8
0053F3CC  85 F6                     TEST ESI,ESI
0053F3CE  0F 85 A1 00 00 00         JNZ 0x0053f475
0053F3D4  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
0053F3D7  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
0053F3DA  66 8B 86 72 01 00 00      MOV AX,word ptr [ESI + 0x172]
0053F3E1  48                        DEC EAX
0053F3E2  74 5B                     JZ 0x0053f43f
0053F3E4  48                        DEC EAX
0053F3E5  74 13                     JZ 0x0053f3fa
0053F3E7  48                        DEC EAX
0053F3E8  74 61                     JZ 0x0053f44b
0053F3EA  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
0053F3ED  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0053F3F2  5F                        POP EDI
0053F3F3  5E                        POP ESI
0053F3F4  8B E5                     MOV ESP,EBP
0053F3F6  5D                        POP EBP
0053F3F7  C2 04 00                  RET 0x4
LAB_0053f3fa:
0053F3FA  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0053F3FD  85 C0                     TEST EAX,EAX
0053F3FF  74 64                     JZ 0x0053f465
0053F401  68 AF 00 00 00            PUSH 0xaf
0053F406  66 C7 86 72 01 00 00 03 00  MOV word ptr [ESI + 0x172],0x3
0053F40F  E8 1B 6A EC FF            CALL 0x00405e2f
0053F414  8B 0D 88 16 80 00         MOV ECX,dword ptr [0x00801688]
0053F41A  83 C4 04                  ADD ESP,0x4
0053F41D  85 C9                     TEST ECX,ECX
0053F41F  74 44                     JZ 0x0053f465
0053F421  8B 86 95 01 00 00         MOV EAX,dword ptr [ESI + 0x195]
0053F427  6A 00                     PUSH 0x0
0053F429  50                        PUSH EAX
0053F42A  E8 8D 69 EC FF            CALL 0x00405dbc
0053F42F  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
0053F432  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0053F437  5F                        POP EDI
0053F438  5E                        POP ESI
0053F439  8B E5                     MOV ESP,EBP
0053F43B  5D                        POP EBP
0053F43C  C2 04 00                  RET 0x4
LAB_0053f43f:
0053F43F  85 FF                     TEST EDI,EDI
0053F441  75 22                     JNZ 0x0053f465
0053F443  8B 16                     MOV EDX,dword ptr [ESI]
0053F445  57                        PUSH EDI
0053F446  8B CE                     MOV ECX,ESI
0053F448  FF 52 18                  CALL dword ptr [EDX + 0x18]
LAB_0053f44b:
0053F44B  85 FF                     TEST EDI,EDI
0053F44D  75 16                     JNZ 0x0053f465
0053F44F  68 B0 00 00 00            PUSH 0xb0
0053F454  66 C7 86 72 01 00 00 04 00  MOV word ptr [ESI + 0x172],0x4
0053F45D  E8 CD 69 EC FF            CALL 0x00405e2f
0053F462  83 C4 04                  ADD ESP,0x4
LAB_0053f465:
0053F465  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
0053F468  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0053F46D  5F                        POP EDI
0053F46E  5E                        POP ESI
0053F46F  8B E5                     MOV ESP,EBP
0053F471  5D                        POP EBP
0053F472  C2 04 00                  RET 0x4
LAB_0053f475:
0053F475  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
0053F478  68 40 7A 7C 00            PUSH 0x7c7a40
0053F47D  68 CC 4C 7A 00            PUSH 0x7a4ccc
0053F482  56                        PUSH ESI
0053F483  6A 00                     PUSH 0x0
0053F485  68 BF 01 00 00            PUSH 0x1bf
0053F48A  68 70 78 7C 00            PUSH 0x7c7870
0053F48F  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0053F495  E8 36 E0 16 00            CALL 0x006ad4d0
0053F49A  83 C4 18                  ADD ESP,0x18
0053F49D  85 C0                     TEST EAX,EAX
0053F49F  74 01                     JZ 0x0053f4a2
0053F4A1  CC                        INT3
LAB_0053f4a2:
0053F4A2  68 BF 01 00 00            PUSH 0x1bf
0053F4A7  68 70 78 7C 00            PUSH 0x7c7870
0053F4AC  6A 00                     PUSH 0x0
0053F4AE  56                        PUSH ESI
0053F4AF  E8 8C 69 16 00            CALL 0x006a5e40
0053F4B4  5F                        POP EDI
0053F4B5  5E                        POP ESI
0053F4B6  8B E5                     MOV ESP,EBP
0053F4B8  5D                        POP EBP
0053F4B9  C2 04 00                  RET 0x4
