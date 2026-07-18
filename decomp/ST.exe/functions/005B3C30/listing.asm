MainMenuTy::CloseButtons:
005B3C30  55                        PUSH EBP
005B3C31  8B EC                     MOV EBP,ESP
005B3C33  83 EC 48                  SUB ESP,0x48
005B3C36  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
005B3C3B  53                        PUSH EBX
005B3C3C  56                        PUSH ESI
005B3C3D  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
005B3C40  57                        PUSH EDI
005B3C41  8D 55 BC                  LEA EDX,[EBP + -0x44]
005B3C44  8D 4D B8                  LEA ECX,[EBP + -0x48]
005B3C47  6A 00                     PUSH 0x0
005B3C49  52                        PUSH EDX
005B3C4A  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
005B3C4D  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005B3C53  E8 98 9B 17 00            CALL 0x0072d7f0
005B3C58  8B F0                     MOV ESI,EAX
005B3C5A  83 C4 08                  ADD ESP,0x8
005B3C5D  85 F6                     TEST ESI,ESI
005B3C5F  75 6F                     JNZ 0x005b3cd0
005B3C61  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
005B3C64  8B CE                     MOV ECX,ESI
005B3C66  E8 EE F7 E4 FF            CALL 0x00403459
005B3C6B  8A 86 9A 00 00 00         MOV AL,byte ptr [ESI + 0x9a]
005B3C71  33 DB                     XOR EBX,EBX
005B3C73  84 C0                     TEST AL,AL
005B3C75  76 38                     JBE 0x005b3caf
005B3C77  BF 96 00 00 00            MOV EDI,0x96
005B3C7C  81 C6 23 01 00 00         ADD ESI,0x123
LAB_005b3c82:
005B3C82  FF 15 DC BE 85 00         CALL dword ptr [0x0085bedc]
005B3C88  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
005B3C8B  89 46 04                  MOV dword ptr [ESI + 0x4],EAX
005B3C8E  89 3E                     MOV dword ptr [ESI],EDI
005B3C90  33 C0                     XOR EAX,EAX
005B3C92  C6 46 98 01               MOV byte ptr [ESI + -0x68],0x1
005B3C96  8A 81 9A 00 00 00         MOV AL,byte ptr [ECX + 0x9a]
005B3C9C  43                        INC EBX
005B3C9D  81 C7 96 00 00 00         ADD EDI,0x96
005B3CA3  81 C6 FB 01 00 00         ADD ESI,0x1fb
005B3CA9  3B D8                     CMP EBX,EAX
005B3CAB  7C D5                     JL 0x005b3c82
005B3CAD  8B F1                     MOV ESI,ECX
LAB_005b3caf:
005B3CAF  6A FF                     PUSH -0x1
005B3CB1  6A 01                     PUSH 0x1
005B3CB3  6A 02                     PUSH 0x2
005B3CB5  8B CE                     MOV ECX,ESI
005B3CB7  C6 46 65 04               MOV byte ptr [ESI + 0x65],0x4
005B3CBB  E8 31 0F E5 FF            CALL 0x00404bf1
005B3CC0  8B 55 B8                  MOV EDX,dword ptr [EBP + -0x48]
005B3CC3  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
005B3CC9  5F                        POP EDI
005B3CCA  5E                        POP ESI
005B3CCB  5B                        POP EBX
005B3CCC  8B E5                     MOV ESP,EBP
005B3CCE  5D                        POP EBP
005B3CCF  C3                        RET
LAB_005b3cd0:
005B3CD0  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
005B3CD3  68 C0 C9 7C 00            PUSH 0x7cc9c0
005B3CD8  68 CC 4C 7A 00            PUSH 0x7a4ccc
005B3CDD  56                        PUSH ESI
005B3CDE  6A 00                     PUSH 0x0
005B3CE0  68 F7 00 00 00            PUSH 0xf7
005B3CE5  68 E8 C8 7C 00            PUSH 0x7cc8e8
005B3CEA  A3 F8 8D 85 00            MOV [0x00858df8],EAX
005B3CEF  E8 DC 97 0F 00            CALL 0x006ad4d0
005B3CF4  83 C4 18                  ADD ESP,0x18
005B3CF7  85 C0                     TEST EAX,EAX
005B3CF9  74 01                     JZ 0x005b3cfc
005B3CFB  CC                        INT3
LAB_005b3cfc:
005B3CFC  68 F7 00 00 00            PUSH 0xf7
005B3D01  68 E8 C8 7C 00            PUSH 0x7cc8e8
005B3D06  6A 00                     PUSH 0x0
005B3D08  56                        PUSH ESI
005B3D09  E8 32 21 0F 00            CALL 0x006a5e40
005B3D0E  5F                        POP EDI
005B3D0F  5E                        POP ESI
005B3D10  5B                        POP EBX
005B3D11  8B E5                     MOV ESP,EBP
005B3D13  5D                        POP EBP
005B3D14  C3                        RET
