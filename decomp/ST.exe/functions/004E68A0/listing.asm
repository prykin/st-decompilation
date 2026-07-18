FUN_004e68a0:
004E68A0  55                        PUSH EBP
004E68A1  8B EC                     MOV EBP,ESP
004E68A3  83 EC 08                  SUB ESP,0x8
004E68A6  53                        PUSH EBX
004E68A7  56                        PUSH ESI
004E68A8  8B F1                     MOV ESI,ECX
004E68AA  57                        PUSH EDI
004E68AB  8B 7D 14                  MOV EDI,dword ptr [EBP + 0x14]
004E68AE  B9 07 00 00 00            MOV ECX,0x7
004E68B3  33 C0                     XOR EAX,EAX
004E68B5  89 75 F8                  MOV dword ptr [EBP + -0x8],ESI
004E68B8  F3 AB                     STOSD.REP ES:EDI
004E68BA  66 AB                     STOSW ES:EDI
004E68BC  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
004E68BF  8B CE                     MOV ECX,ESI
004E68C1  57                        PUSH EDI
004E68C2  E8 F0 E0 F1 FF            CALL 0x004049b7
004E68C7  25 FF 00 00 00            AND EAX,0xff
004E68CC  8B CE                     MOV ECX,ESI
004E68CE  48                        DEC EAX
004E68CF  8B D8                     MOV EBX,EAX
004E68D1  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
004E68D4  50                        PUSH EAX
004E68D5  57                        PUSH EDI
004E68D6  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
004E68D9  E8 B8 CA F1 FF            CALL 0x00403396
004E68DE  85 C0                     TEST EAX,EAX
004E68E0  0F 85 2F 01 00 00         JNZ 0x004e6a15
004E68E6  8B 34 9D C8 0D 7C 00      MOV ESI,dword ptr [EBX*0x4 + 0x7c0dc8]
004E68ED  8B 0E                     MOV ECX,dword ptr [ESI]
004E68EF  85 C9                     TEST ECX,ECX
004E68F1  0F 84 1E 01 00 00         JZ 0x004e6a15
004E68F7  8B D6                     MOV EDX,ESI
LAB_004e68f9:
004E68F9  3B 4D 0C                  CMP ECX,dword ptr [EBP + 0xc]
004E68FC  75 0C                     JNZ 0x004e690a
004E68FE  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
004E6901  33 C9                     XOR ECX,ECX
004E6903  8A 4A 04                  MOV CL,byte ptr [EDX + 0x4]
004E6906  3B CF                     CMP ECX,EDI
004E6908  74 14                     JZ 0x004e691e
LAB_004e690a:
004E690A  8B 4A 19                  MOV ECX,dword ptr [EDX + 0x19]
004E690D  83 C2 19                  ADD EDX,0x19
004E6910  40                        INC EAX
004E6911  85 C9                     TEST ECX,ECX
004E6913  75 E4                     JNZ 0x004e68f9
004E6915  5F                        POP EDI
004E6916  5E                        POP ESI
004E6917  5B                        POP EBX
004E6918  8B E5                     MOV ESP,EBP
004E691A  5D                        POP EBP
004E691B  C2 10 00                  RET 0x10
LAB_004e691e:
004E691E  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
004E6921  C7 45 10 00 00 00 00      MOV dword ptr [EBP + 0x10],0x0
004E6928  8D 14 8E                  LEA EDX,[ESI + ECX*0x4]
004E692B  8B 74 11 05               MOV ESI,dword ptr [ECX + EDX*0x1 + 0x5]
004E692F  85 F6                     TEST ESI,ESI
004E6931  0F 84 DE 00 00 00         JZ 0x004e6a15
004E6937  8D 34 80                  LEA ESI,[EAX + EAX*0x4]
004E693A  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
004E693D  83 C0 05                  ADD EAX,0x5
004E6940  8D 74 B6 05               LEA ESI,[ESI + ESI*0x4 + 0x5]
004E6944  89 45 0C                  MOV dword ptr [EBP + 0xc],EAX
004E6947  EB 03                     JMP 0x004e694c
LAB_004e6949:
004E6949  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
LAB_004e694c:
004E694C  83 7D 10 04               CMP dword ptr [EBP + 0x10],0x4
004E6950  0F 8D BF 00 00 00         JGE 0x004e6a15
004E6956  8B 1C 9D C8 0D 7C 00      MOV EBX,dword ptr [EBX*0x4 + 0x7c0dc8]
004E695D  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004E6960  33 C9                     XOR ECX,ECX
004E6962  8A 4C 1E 04               MOV CL,byte ptr [ESI + EBX*0x1 + 0x4]
004E6966  8B 14 1E                  MOV EDX,dword ptr [ESI + EBX*0x1]
004E6969  8B F9                     MOV EDI,ECX
004E696B  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
004E696E  52                        PUSH EDX
004E696F  50                        PUSH EAX
004E6970  E8 F6 AE F1 FF            CALL 0x0040186b
004E6975  3B C7                     CMP EAX,EDI
004E6977  7D 7E                     JGE 0x004e69f7
004E6979  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
004E697C  33 C9                     XOR ECX,ECX
004E697E  66 8B 0C 1E               MOV CX,word ptr [ESI + EBX*0x1]
004E6982  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
004E6985  C1 E7 10                  SHL EDI,0x10
004E6988  0B CF                     OR ECX,EDI
004E698A  8B 7D F8                  MOV EDI,dword ptr [EBP + -0x8]
004E698D  89 4A FB                  MOV dword ptr [EDX + -0x5],ECX
004E6990  53                        PUSH EBX
004E6991  8B CF                     MOV ECX,EDI
004E6993  E8 1F E0 F1 FF            CALL 0x004049b7
004E6998  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
004E699B  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
004E699E  88 41 FF                  MOV byte ptr [ECX + -0x1],AL
004E69A1  8B 04 95 C8 0D 7C 00      MOV EAX,dword ptr [EDX*0x4 + 0x7c0dc8]
004E69A8  8B 0C 06                  MOV ECX,dword ptr [ESI + EAX*0x1]
004E69AB  51                        PUSH ECX
004E69AC  53                        PUSH EBX
004E69AD  8B CF                     MOV ECX,EDI
004E69AF  E8 E2 C9 F1 FF            CALL 0x00403396
004E69B4  85 C0                     TEST EAX,EAX
004E69B6  74 32                     JZ 0x004e69ea
004E69B8  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
004E69BB  8B 04 95 C8 0D 7C 00      MOV EAX,dword ptr [EDX*0x4 + 0x7c0dc8]
004E69C2  8B 0C 06                  MOV ECX,dword ptr [ESI + EAX*0x1]
004E69C5  51                        PUSH ECX
004E69C6  53                        PUSH EBX
004E69C7  8B CF                     MOV ECX,EDI
004E69C9  E8 9D AE F1 FF            CALL 0x0040186b
004E69CE  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
004E69D1  8B 0C 95 C8 0D 7C 00      MOV ECX,dword ptr [EDX*0x4 + 0x7c0dc8]
004E69D8  33 D2                     XOR EDX,EDX
004E69DA  8A 54 0E 04               MOV DL,byte ptr [ESI + ECX*0x1 + 0x4]
004E69DE  4A                        DEC EDX
004E69DF  3B C2                     CMP EAX,EDX
004E69E1  75 07                     JNZ 0x004e69ea
004E69E3  B8 01 00 00 00            MOV EAX,0x1
004E69E8  EB 02                     JMP 0x004e69ec
LAB_004e69ea:
004E69EA  33 C0                     XOR EAX,EAX
LAB_004e69ec:
004E69EC  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
004E69EF  88 01                     MOV byte ptr [ECX],AL
004E69F1  83 C1 06                  ADD ECX,0x6
004E69F4  89 4D 0C                  MOV dword ptr [EBP + 0xc],ECX
LAB_004e69f7:
004E69F7  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
004E69FA  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
004E69FD  83 C6 05                  ADD ESI,0x5
004E6A00  47                        INC EDI
004E6A01  8B 04 85 C8 0D 7C 00      MOV EAX,dword ptr [EAX*0x4 + 0x7c0dc8]
004E6A08  89 7D 10                  MOV dword ptr [EBP + 0x10],EDI
004E6A0B  83 3C 06 00               CMP dword ptr [ESI + EAX*0x1],0x0
004E6A0F  0F 85 34 FF FF FF         JNZ 0x004e6949
LAB_004e6a15:
004E6A15  5F                        POP EDI
004E6A16  5E                        POP ESI
004E6A17  5B                        POP EBX
004E6A18  8B E5                     MOV ESP,EBP
004E6A1A  5D                        POP EBP
004E6A1B  C2 10 00                  RET 0x10
