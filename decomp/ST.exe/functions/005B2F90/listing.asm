MainMenuTy::DoneMainMenu:
005B2F90  55                        PUSH EBP
005B2F91  8B EC                     MOV EBP,ESP
005B2F93  83 EC 48                  SUB ESP,0x48
005B2F96  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
005B2F9B  53                        PUSH EBX
005B2F9C  56                        PUSH ESI
005B2F9D  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
005B2FA0  57                        PUSH EDI
005B2FA1  8D 55 BC                  LEA EDX,[EBP + -0x44]
005B2FA4  8D 4D B8                  LEA ECX,[EBP + -0x48]
005B2FA7  6A 00                     PUSH 0x0
005B2FA9  52                        PUSH EDX
005B2FAA  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
005B2FAD  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005B2FB3  E8 38 A8 17 00            CALL 0x0072d7f0
005B2FB8  8B F0                     MOV ESI,EAX
005B2FBA  83 C4 08                  ADD ESP,0x8
005B2FBD  85 F6                     TEST ESI,ESI
005B2FBF  0F 85 F2 00 00 00         JNZ 0x005b30b7
005B2FC5  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
005B2FC8  8B CB                     MOV ECX,EBX
005B2FCA  E8 BF 15 E5 FF            CALL 0x0040458e
005B2FCF  A1 30 2A 80 00            MOV EAX,[0x00802a30]
005B2FD4  85 C0                     TEST EAX,EAX
005B2FD6  74 2A                     JZ 0x005b3002
005B2FD8  8B 88 A9 00 00 00         MOV ECX,dword ptr [EAX + 0xa9]
005B2FDE  85 C9                     TEST ECX,ECX
005B2FE0  74 14                     JZ 0x005b2ff6
005B2FE2  8B 48 1C                  MOV ECX,dword ptr [EAX + 0x1c]
005B2FE5  83 F9 FF                  CMP ECX,-0x1
005B2FE8  74 18                     JZ 0x005b3002
005B2FEA  8B 40 60                  MOV EAX,dword ptr [EAX + 0x60]
005B2FED  51                        PUSH ECX
005B2FEE  50                        PUSH EAX
005B2FEF  E8 FC 0A 10 00            CALL 0x006b3af0
005B2FF4  EB 0C                     JMP 0x005b3002
LAB_005b2ff6:
005B2FF6  8B 88 AD 00 00 00         MOV ECX,dword ptr [EAX + 0xad]
005B2FFC  51                        PUSH ECX
005B2FFD  E8 0E 5B 10 00            CALL 0x006b8b10
LAB_005b3002:
005B3002  8B 15 9C 75 80 00         MOV EDX,dword ptr [0x0080759c]
005B3008  6A 02                     PUSH 0x2
005B300A  6A 0A                     PUSH 0xa
005B300C  52                        PUSH EDX
005B300D  E8 31 ED E4 FF            CALL 0x00401d43
005B3012  A1 6C 17 81 00            MOV EAX,[0x0081176c]
005B3017  83 C4 0C                  ADD ESP,0xc
005B301A  83 C0 2C                  ADD EAX,0x2c
005B301D  83 38 00                  CMP dword ptr [EAX],0x0
005B3020  74 0C                     JZ 0x005b302e
005B3022  8B 0D 80 67 80 00         MOV ECX,dword ptr [0x00806780]
005B3028  50                        PUSH EAX
005B3029  E8 B2 F0 13 00            CALL 0x006f20e0
LAB_005b302e:
005B302E  8B 8B 5B 1A 00 00         MOV ECX,dword ptr [EBX + 0x1a5b]
005B3034  8B 89 E6 02 00 00         MOV ECX,dword ptr [ECX + 0x2e6]
005B303A  85 C9                     TEST ECX,ECX
005B303C  74 1B                     JZ 0x005b3059
005B303E  E8 EB 15 E5 FF            CALL 0x0040462e
005B3043  8B 93 5B 1A 00 00         MOV EDX,dword ptr [EBX + 0x1a5b]
005B3049  8B 82 E6 02 00 00         MOV EAX,dword ptr [EDX + 0x2e6]
005B304F  C7 80 AB 1C 00 00 00 00 00 00  MOV dword ptr [EAX + 0x1cab],0x0
LAB_005b3059:
005B3059  8D B3 A7 1A 00 00         LEA ESI,[EBX + 0x1aa7]
005B305F  BF 0A 00 00 00            MOV EDI,0xa
LAB_005b3064:
005B3064  8B 06                     MOV EAX,dword ptr [ESI]
005B3066  85 C0                     TEST EAX,EAX
005B3068  74 0C                     JZ 0x005b3076
005B306A  50                        PUSH EAX
005B306B  E8 00 1A 11 00            CALL 0x006c4a70
005B3070  C7 06 00 00 00 00         MOV dword ptr [ESI],0x0
LAB_005b3076:
005B3076  8B 4E D8                  MOV ECX,dword ptr [ESI + -0x28]
005B3079  8D 46 D8                  LEA EAX,[ESI + -0x28]
005B307C  85 C9                     TEST ECX,ECX
005B307E  74 0C                     JZ 0x005b308c
005B3080  8B 0D 80 67 80 00         MOV ECX,dword ptr [0x00806780]
005B3086  50                        PUSH EAX
005B3087  E8 54 F0 13 00            CALL 0x006f20e0
LAB_005b308c:
005B308C  83 C6 04                  ADD ESI,0x4
005B308F  4F                        DEC EDI
005B3090  75 D2                     JNZ 0x005b3064
005B3092  8B 43 4D                  MOV EAX,dword ptr [EBX + 0x4d]
005B3095  85 C0                     TEST EAX,EAX
005B3097  74 0E                     JZ 0x005b30a7
005B3099  83 C3 3D                  ADD EBX,0x3d
005B309C  B9 20 76 80 00            MOV ECX,0x807620
005B30A1  53                        PUSH EBX
005B30A2  E8 A9 0A 13 00            CALL 0x006e3b50
LAB_005b30a7:
005B30A7  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
005B30AA  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005B30B0  5F                        POP EDI
005B30B1  5E                        POP ESI
005B30B2  5B                        POP EBX
005B30B3  8B E5                     MOV ESP,EBP
005B30B5  5D                        POP EBP
005B30B6  C3                        RET
LAB_005b30b7:
005B30B7  8B 55 B8                  MOV EDX,dword ptr [EBP + -0x48]
005B30BA  68 40 C9 7C 00            PUSH 0x7cc940
005B30BF  68 CC 4C 7A 00            PUSH 0x7a4ccc
005B30C4  56                        PUSH ESI
005B30C5  6A 00                     PUSH 0x0
005B30C7  6A 63                     PUSH 0x63
005B30C9  68 E8 C8 7C 00            PUSH 0x7cc8e8
005B30CE  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
005B30D4  E8 F7 A3 0F 00            CALL 0x006ad4d0
005B30D9  83 C4 18                  ADD ESP,0x18
005B30DC  85 C0                     TEST EAX,EAX
005B30DE  74 01                     JZ 0x005b30e1
005B30E0  CC                        INT3
LAB_005b30e1:
005B30E1  6A 63                     PUSH 0x63
005B30E3  68 E8 C8 7C 00            PUSH 0x7cc8e8
005B30E8  6A 00                     PUSH 0x0
005B30EA  56                        PUSH ESI
005B30EB  E8 50 2D 0F 00            CALL 0x006a5e40
005B30F0  5F                        POP EDI
005B30F1  5E                        POP ESI
005B30F2  5B                        POP EBX
005B30F3  8B E5                     MOV ESP,EBP
005B30F5  5D                        POP EBP
005B30F6  C3                        RET
