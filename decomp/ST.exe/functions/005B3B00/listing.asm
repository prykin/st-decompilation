MainMenuTy::LightPalette:
005B3B00  55                        PUSH EBP
005B3B01  8B EC                     MOV EBP,ESP
005B3B03  83 EC 48                  SUB ESP,0x48
005B3B06  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
005B3B0B  56                        PUSH ESI
005B3B0C  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
005B3B0F  57                        PUSH EDI
005B3B10  8D 55 BC                  LEA EDX,[EBP + -0x44]
005B3B13  8D 4D B8                  LEA ECX,[EBP + -0x48]
005B3B16  6A 00                     PUSH 0x0
005B3B18  52                        PUSH EDX
005B3B19  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
005B3B1C  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005B3B22  E8 C9 9C 17 00            CALL 0x0072d7f0
005B3B27  8B F0                     MOV ESI,EAX
005B3B29  83 C4 08                  ADD ESP,0x8
005B3B2C  85 F6                     TEST ESI,ESI
005B3B2E  75 73                     JNZ 0x005b3ba3
005B3B30  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
005B3B33  8B 86 D3 1A 00 00         MOV EAX,dword ptr [ESI + 0x1ad3]
005B3B39  85 C0                     TEST EAX,EAX
005B3B3B  74 57                     JZ 0x005b3b94
005B3B3D  8B 4E 61                  MOV ECX,dword ptr [ESI + 0x61]
005B3B40  8D 86 D7 1A 00 00         LEA EAX,[ESI + 0x1ad7]
005B3B46  50                        PUSH EAX
005B3B47  A1 9C 75 80 00            MOV EAX,[0x0080759c]
005B3B4C  51                        PUSH ECX
005B3B4D  8D 96 DB 1A 00 00         LEA EDX,[ESI + 0x1adb]
005B3B53  6A 01                     PUSH 0x1
005B3B55  52                        PUSH EDX
005B3B56  6A 05                     PUSH 0x5
005B3B58  8D BE DF 1A 00 00         LEA EDI,[ESI + 0x1adf]
005B3B5E  68 00 01 00 00            PUSH 0x100
005B3B63  6A 00                     PUSH 0x0
005B3B65  57                        PUSH EDI
005B3B66  50                        PUSH EAX
005B3B67  E8 D4 53 16 00            CALL 0x00718f40
005B3B6C  83 C4 24                  ADD ESP,0x24
005B3B6F  83 F8 FC                  CMP EAX,-0x4
005B3B72  75 20                     JNZ 0x005b3b94
005B3B74  8B 0D 9C 75 80 00         MOV ECX,dword ptr [0x0080759c]
005B3B7A  6A 00                     PUSH 0x0
005B3B7C  68 00 01 00 00            PUSH 0x100
005B3B81  6A 00                     PUSH 0x0
005B3B83  57                        PUSH EDI
005B3B84  51                        PUSH ECX
005B3B85  E8 96 CE 0F 00            CALL 0x006b0a20
005B3B8A  C7 86 D3 1A 00 00 00 00 00 00  MOV dword ptr [ESI + 0x1ad3],0x0
LAB_005b3b94:
005B3B94  8B 55 B8                  MOV EDX,dword ptr [EBP + -0x48]
005B3B97  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
005B3B9D  5F                        POP EDI
005B3B9E  5E                        POP ESI
005B3B9F  8B E5                     MOV ESP,EBP
005B3BA1  5D                        POP EBP
005B3BA2  C3                        RET
LAB_005b3ba3:
005B3BA3  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
005B3BA6  68 A0 C9 7C 00            PUSH 0x7cc9a0
005B3BAB  68 CC 4C 7A 00            PUSH 0x7a4ccc
005B3BB0  56                        PUSH ESI
005B3BB1  6A 00                     PUSH 0x0
005B3BB3  68 E8 00 00 00            PUSH 0xe8
005B3BB8  68 E8 C8 7C 00            PUSH 0x7cc8e8
005B3BBD  A3 F8 8D 85 00            MOV [0x00858df8],EAX
005B3BC2  E8 09 99 0F 00            CALL 0x006ad4d0
005B3BC7  83 C4 18                  ADD ESP,0x18
005B3BCA  85 C0                     TEST EAX,EAX
005B3BCC  74 01                     JZ 0x005b3bcf
005B3BCE  CC                        INT3
LAB_005b3bcf:
005B3BCF  68 E8 00 00 00            PUSH 0xe8
005B3BD4  68 E8 C8 7C 00            PUSH 0x7cc8e8
005B3BD9  6A 00                     PUSH 0x0
005B3BDB  56                        PUSH ESI
005B3BDC  E8 5F 22 0F 00            CALL 0x006a5e40
005B3BE1  5F                        POP EDI
005B3BE2  5E                        POP ESI
005B3BE3  8B E5                     MOV ESP,EBP
005B3BE5  5D                        POP EBP
005B3BE6  C3                        RET
