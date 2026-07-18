STGroupBoatC::ChangeMDNotify:
004A4D60  55                        PUSH EBP
004A4D61  8B EC                     MOV EBP,ESP
004A4D63  83 EC 4C                  SUB ESP,0x4c
004A4D66  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
004A4D6B  53                        PUSH EBX
004A4D6C  56                        PUSH ESI
004A4D6D  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
004A4D70  57                        PUSH EDI
004A4D71  8D 55 B8                  LEA EDX,[EBP + -0x48]
004A4D74  8D 4D B4                  LEA ECX,[EBP + -0x4c]
004A4D77  6A 00                     PUSH 0x0
004A4D79  52                        PUSH EDX
004A4D7A  89 45 B4                  MOV dword ptr [EBP + -0x4c],EAX
004A4D7D  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
004A4D83  E8 68 8A 28 00            CALL 0x0072d7f0
004A4D88  8B F0                     MOV ESI,EAX
004A4D8A  83 C4 08                  ADD ESP,0x8
004A4D8D  85 F6                     TEST ESI,ESI
004A4D8F  0F 85 C6 00 00 00         JNZ 0x004a4e5b
004A4D95  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
004A4D98  8B 7D F8                  MOV EDI,dword ptr [EBP + -0x8]
004A4D9B  B8 01 00 00 00            MOV EAX,0x1
004A4DA0  3B C8                     CMP ECX,EAX
004A4DA2  75 44                     JNZ 0x004a4de8
004A4DA4  39 87 9B 02 00 00         CMP dword ptr [EDI + 0x29b],EAX
004A4DAA  0F 85 99 00 00 00         JNZ 0x004a4e49
004A4DB0  8B 87 9F 02 00 00         MOV EAX,dword ptr [EDI + 0x29f]
004A4DB6  85 C0                     TEST EAX,EAX
004A4DB8  0F 84 8B 00 00 00         JZ 0x004a4e49
004A4DBE  8B 58 0C                  MOV EBX,dword ptr [EAX + 0xc]
004A4DC1  85 DB                     TEST EBX,EBX
004A4DC3  7E 1E                     JLE 0x004a4de3
LAB_004a4dc5:
004A4DC5  8B 8F 9F 02 00 00         MOV ECX,dword ptr [EDI + 0x29f]
004A4DCB  8D 45 FC                  LEA EAX,[EBP + -0x4]
004A4DCE  50                        PUSH EAX
004A4DCF  8B D6                     MOV EDX,ESI
004A4DD1  E8 9A 7E 20 00            CALL 0x006acc70
004A4DD6  66 81 7D FC FF FF         CMP word ptr [EBP + -0x4],0xffff
004A4DDC  74 05                     JZ 0x004a4de3
004A4DDE  46                        INC ESI
004A4DDF  3B F3                     CMP ESI,EBX
004A4DE1  7C E2                     JL 0x004a4dc5
LAB_004a4de3:
004A4DE3  8D 4D 0C                  LEA ECX,[EBP + 0xc]
004A4DE6  EB 3F                     JMP 0x004a4e27
LAB_004a4de8:
004A4DE8  8B 87 9F 02 00 00         MOV EAX,dword ptr [EDI + 0x29f]
004A4DEE  85 C0                     TEST EAX,EAX
004A4DF0  74 57                     JZ 0x004a4e49
004A4DF2  8B 58 0C                  MOV EBX,dword ptr [EAX + 0xc]
004A4DF5  33 F6                     XOR ESI,ESI
004A4DF7  85 DB                     TEST EBX,EBX
004A4DF9  7E 3A                     JLE 0x004a4e35
LAB_004a4dfb:
004A4DFB  8B 8F 9F 02 00 00         MOV ECX,dword ptr [EDI + 0x29f]
004A4E01  8D 55 FC                  LEA EDX,[EBP + -0x4]
004A4E04  52                        PUSH EDX
004A4E05  8B D6                     MOV EDX,ESI
004A4E07  E8 64 7E 20 00            CALL 0x006acc70
004A4E0C  66 8B 45 FC               MOV AX,word ptr [EBP + -0x4]
004A4E10  66 3B 45 0C               CMP AX,word ptr [EBP + 0xc]
004A4E14  74 07                     JZ 0x004a4e1d
004A4E16  46                        INC ESI
004A4E17  3B F3                     CMP ESI,EBX
004A4E19  7C E0                     JL 0x004a4dfb
004A4E1B  EB 18                     JMP 0x004a4e35
LAB_004a4e1d:
004A4E1D  C7 45 FC FF FF 00 00      MOV dword ptr [EBP + -0x4],0xffff
004A4E24  8D 4D FC                  LEA ECX,[EBP + -0x4]
LAB_004a4e27:
004A4E27  8B 97 9F 02 00 00         MOV EDX,dword ptr [EDI + 0x29f]
004A4E2D  51                        PUSH ECX
004A4E2E  56                        PUSH ESI
004A4E2F  52                        PUSH EDX
004A4E30  E8 0B 93 20 00            CALL 0x006ae140
LAB_004a4e35:
004A4E35  8B 47 29                  MOV EAX,dword ptr [EDI + 0x29]
004A4E38  8B 8F 9F 02 00 00         MOV ECX,dword ptr [EDI + 0x29f]
004A4E3E  50                        PUSH EAX
004A4E3F  51                        PUSH ECX
004A4E40  6A 00                     PUSH 0x0
004A4E42  8B CF                     MOV ECX,EDI
004A4E44  E8 08 E4 F5 FF            CALL 0x00403251
LAB_004a4e49:
004A4E49  8B 55 B4                  MOV EDX,dword ptr [EBP + -0x4c]
004A4E4C  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
004A4E52  5F                        POP EDI
004A4E53  5E                        POP ESI
004A4E54  5B                        POP EBX
004A4E55  8B E5                     MOV ESP,EBP
004A4E57  5D                        POP EBP
004A4E58  C2 08 00                  RET 0x8
LAB_004a4e5b:
004A4E5B  8B 45 B4                  MOV EAX,dword ptr [EBP + -0x4c]
004A4E5E  81 FE 09 00 FE AF         CMP ESI,0xaffe0009
004A4E64  A3 F8 8D 85 00            MOV [0x00858df8],EAX
004A4E69  74 36                     JZ 0x004a4ea1
004A4E6B  68 10 C3 7A 00            PUSH 0x7ac310
004A4E70  68 CC 4C 7A 00            PUSH 0x7a4ccc
004A4E75  56                        PUSH ESI
004A4E76  6A 00                     PUSH 0x0
004A4E78  68 94 12 00 00            PUSH 0x1294
004A4E7D  68 3C BE 7A 00            PUSH 0x7abe3c
004A4E82  E8 49 86 20 00            CALL 0x006ad4d0
004A4E87  83 C4 18                  ADD ESP,0x18
004A4E8A  85 C0                     TEST EAX,EAX
004A4E8C  74 01                     JZ 0x004a4e8f
004A4E8E  CC                        INT3
LAB_004a4e8f:
004A4E8F  68 95 12 00 00            PUSH 0x1295
004A4E94  68 3C BE 7A 00            PUSH 0x7abe3c
004A4E99  6A 00                     PUSH 0x0
004A4E9B  56                        PUSH ESI
004A4E9C  E8 9F 0F 20 00            CALL 0x006a5e40
LAB_004a4ea1:
004A4EA1  5F                        POP EDI
004A4EA2  5E                        POP ESI
004A4EA3  5B                        POP EBX
004A4EA4  8B E5                     MOV ESP,EBP
004A4EA6  5D                        POP EBP
004A4EA7  C2 08 00                  RET 0x8
