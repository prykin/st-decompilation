FUN_005efcd0:
005EFCD0  55                        PUSH EBP
005EFCD1  8B EC                     MOV EBP,ESP
005EFCD3  51                        PUSH ECX
005EFCD4  53                        PUSH EBX
005EFCD5  56                        PUSH ESI
005EFCD6  8B F1                     MOV ESI,ECX
005EFCD8  57                        PUSH EDI
005EFCD9  0F BF 46 47               MOVSX EAX,word ptr [ESI + 0x47]
005EFCDD  0F BF 56 49               MOVSX EDX,word ptr [ESI + 0x49]
005EFCE1  0F BF 4E 4B               MOVSX ECX,word ptr [ESI + 0x4b]
005EFCE5  66 85 C0                  TEST AX,AX
005EFCE8  C6 86 4E 02 00 00 00      MOV byte ptr [ESI + 0x24e],0x0
005EFCEF  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
005EFCF2  7C 59                     JL 0x005efd4d
005EFCF4  66 3B 05 40 B2 7F 00      CMP AX,word ptr [0x007fb240]
005EFCFB  7D 50                     JGE 0x005efd4d
005EFCFD  66 85 D2                  TEST DX,DX
005EFD00  7C 4B                     JL 0x005efd4d
005EFD02  66 3B 15 42 B2 7F 00      CMP DX,word ptr [0x007fb242]
005EFD09  7D 42                     JGE 0x005efd4d
005EFD0B  66 85 C9                  TEST CX,CX
005EFD0E  7C 3D                     JL 0x005efd4d
005EFD10  66 3B 0D 44 B2 7F 00      CMP CX,word ptr [0x007fb244]
005EFD17  7D 34                     JGE 0x005efd4d
005EFD19  0F BF 3D 46 B2 7F 00      MOVSX EDI,word ptr [0x007fb246]
005EFD20  0F BF D9                  MOVSX EBX,CX
005EFD23  0F AF FB                  IMUL EDI,EBX
005EFD26  0F BF 1D 40 B2 7F 00      MOVSX EBX,word ptr [0x007fb240]
005EFD2D  0F BF D2                  MOVSX EDX,DX
005EFD30  0F AF DA                  IMUL EBX,EDX
005EFD33  0F BF D0                  MOVSX EDX,AX
005EFD36  03 FB                     ADD EDI,EBX
005EFD38  03 FA                     ADD EDI,EDX
005EFD3A  8B 15 48 B2 7F 00         MOV EDX,dword ptr [0x007fb248]
005EFD40  83 3C FA 00               CMP dword ptr [EDX + EDI*0x8],0x0
005EFD44  0F 85 32 01 00 00         JNZ 0x005efe7c
005EFD4A  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
LAB_005efd4d:
005EFD4D  8B 7E 18                  MOV EDI,dword ptr [ESI + 0x18]
005EFD50  57                        PUSH EDI
005EFD51  56                        PUSH ESI
005EFD52  6A 00                     PUSH 0x0
005EFD54  51                        PUSH ECX
005EFD55  8B 0D 84 B2 7F 00         MOV ECX,dword ptr [0x007fb284]
005EFD5B  52                        PUSH EDX
005EFD5C  50                        PUSH EAX
005EFD5D  E8 C3 15 E1 FF            CALL 0x00401325
005EFD62  85 C0                     TEST EAX,EAX
005EFD64  0F 85 12 01 00 00         JNZ 0x005efe7c
005EFD6A  8A 86 52 02 00 00         MOV AL,byte ptr [ESI + 0x252]
005EFD70  8B CE                     MOV ECX,ESI
005EFD72  FE C0                     INC AL
005EFD74  88 86 52 02 00 00         MOV byte ptr [ESI + 0x252],AL
005EFD7A  E8 85 31 E1 FF            CALL 0x00402f04
005EFD7F  66 8B 56 4B               MOV DX,word ptr [ESI + 0x4b]
005EFD83  8B 9E C2 02 00 00         MOV EBX,dword ptr [ESI + 0x2c2]
005EFD89  66 8B 4E 47               MOV CX,word ptr [ESI + 0x47]
005EFD8D  66 8B 46 49               MOV AX,word ptr [ESI + 0x49]
005EFD91  8B BE BE 02 00 00         MOV EDI,dword ptr [ESI + 0x2be]
005EFD97  66 89 96 46 02 00 00      MOV word ptr [ESI + 0x246],DX
005EFD9E  66 89 56 5F               MOV word ptr [ESI + 0x5f],DX
005EFDA2  89 9E 7B 02 00 00         MOV dword ptr [ESI + 0x27b],EBX
005EFDA8  8B 9E C6 02 00 00         MOV EBX,dword ptr [ESI + 0x2c6]
005EFDAE  33 D2                     XOR EDX,EDX
005EFDB0  39 96 A7 02 00 00         CMP dword ptr [ESI + 0x2a7],EDX
005EFDB6  66 89 8E 42 02 00 00      MOV word ptr [ESI + 0x242],CX
005EFDBD  66 89 86 44 02 00 00      MOV word ptr [ESI + 0x244],AX
005EFDC4  89 BE 77 02 00 00         MOV dword ptr [ESI + 0x277],EDI
005EFDCA  89 9E 7F 02 00 00         MOV dword ptr [ESI + 0x27f],EBX
005EFDD0  66 89 4E 5B               MOV word ptr [ESI + 0x5b],CX
005EFDD4  66 89 46 5D               MOV word ptr [ESI + 0x5d],AX
005EFDD8  74 13                     JZ 0x005efded
005EFDDA  89 96 A7 02 00 00         MOV dword ptr [ESI + 0x2a7],EDX
005EFDE0  66 89 96 AB 02 00 00      MOV word ptr [ESI + 0x2ab],DX
005EFDE7  88 96 4F 02 00 00         MOV byte ptr [ESI + 0x24f],DL
LAB_005efded:
005EFDED  8D 14 89                  LEA EDX,[ECX + ECX*0x4]
005EFDF0  8D 14 92                  LEA EDX,[EDX + EDX*0x4]
005EFDF3  8D 4C D1 64               LEA ECX,[ECX + EDX*0x8 + 0x64]
005EFDF7  0F BF D1                  MOVSX EDX,CX
005EFDFA  3B FA                     CMP EDI,EDX
005EFDFC  75 3D                     JNZ 0x005efe3b
005EFDFE  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
005EFE01  8B BE C2 02 00 00         MOV EDI,dword ptr [ESI + 0x2c2]
005EFE07  8D 0C 89                  LEA ECX,[ECX + ECX*0x4]
005EFE0A  8D 4C C8 64               LEA ECX,[EAX + ECX*0x8 + 0x64]
005EFE0E  0F BF C9                  MOVSX ECX,CX
005EFE11  3B F9                     CMP EDI,ECX
005EFE13  75 26                     JNZ 0x005efe3b
005EFE15  8B 15 38 2A 80 00         MOV EDX,dword ptr [0x00802a38]
005EFE1B  5F                        POP EDI
005EFE1C  8B 82 E4 00 00 00         MOV EAX,dword ptr [EDX + 0xe4]
005EFE22  C7 86 3A 02 00 00 00 00 00 00  MOV dword ptr [ESI + 0x23a],0x0
005EFE2C  83 C0 0A                  ADD EAX,0xa
005EFE2F  89 86 8F 02 00 00         MOV dword ptr [ESI + 0x28f],EAX
005EFE35  5E                        POP ESI
005EFE36  5B                        POP EBX
005EFE37  8B E5                     MOV ESP,EBP
005EFE39  5D                        POP EBP
005EFE3A  C3                        RET
LAB_005efe3b:
005EFE3B  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
005EFE41  6A 1E                     PUSH 0x1e
005EFE43  6A 01                     PUSH 0x1
005EFE45  8B 89 E4 00 00 00         MOV ECX,dword ptr [ECX + 0xe4]
005EFE4B  83 C1 0A                  ADD ECX,0xa
005EFE4E  89 8E 8F 02 00 00         MOV dword ptr [ESI + 0x28f],ECX
005EFE54  8B 8E BA 02 00 00         MOV ECX,dword ptr [ESI + 0x2ba]
005EFE5A  51                        PUSH ECX
005EFE5B  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
005EFE5E  53                        PUSH EBX
005EFE5F  8D 0C 89                  LEA ECX,[ECX + ECX*0x4]
005EFE62  8D 44 C8 64               LEA EAX,[EAX + ECX*0x8 + 0x64]
005EFE66  0F BF C8                  MOVSX ECX,AX
005EFE69  51                        PUSH ECX
005EFE6A  52                        PUSH EDX
005EFE6B  8B CE                     MOV ECX,ESI
005EFE6D  E8 54 41 E1 FF            CALL 0x00403fc6
005EFE72  C7 86 3A 02 00 00 02 00 00 00  MOV dword ptr [ESI + 0x23a],0x2
LAB_005efe7c:
005EFE7C  5F                        POP EDI
005EFE7D  5E                        POP ESI
005EFE7E  5B                        POP EBX
005EFE7F  8B E5                     MOV ESP,EBP
005EFE81  5D                        POP EBP
005EFE82  C3                        RET
