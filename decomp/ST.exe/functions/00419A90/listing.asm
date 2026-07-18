FUN_00419a90:
00419A90  55                        PUSH EBP
00419A91  8B EC                     MOV EBP,ESP
00419A93  83 EC 08                  SUB ESP,0x8
00419A96  56                        PUSH ESI
00419A97  8B F1                     MOV ESI,ECX
00419A99  83 BE E8 00 00 00 01      CMP dword ptr [ESI + 0xe8],0x1
00419AA0  75 19                     JNZ 0x00419abb
00419AA2  C7 86 E8 00 00 00 00 00 00 00  MOV dword ptr [ESI + 0xe8],0x0
00419AAC  E8 A1 BE FE FF            CALL 0x00405952
00419AB1  B8 01 00 00 00            MOV EAX,0x1
00419AB6  5E                        POP ESI
00419AB7  8B E5                     MOV ESP,EBP
00419AB9  5D                        POP EBP
00419ABA  C3                        RET
LAB_00419abb:
00419ABB  8D 45 FA                  LEA EAX,[EBP + -0x6]
00419ABE  8D 4D FC                  LEA ECX,[EBP + -0x4]
00419AC1  50                        PUSH EAX
00419AC2  8D 55 FE                  LEA EDX,[EBP + -0x2]
00419AC5  51                        PUSH ECX
00419AC6  52                        PUSH EDX
00419AC7  8B CE                     MOV ECX,ESI
00419AC9  E8 F7 7D FE FF            CALL 0x004018c5
00419ACE  8B CE                     MOV ECX,ESI
00419AD0  E8 95 8D FE FF            CALL 0x0040286a
00419AD5  84 C0                     TEST AL,AL
00419AD7  0F 85 96 00 00 00         JNZ 0x00419b73
00419ADD  8B CE                     MOV ECX,ESI
00419ADF  E8 EC A4 FE FF            CALL 0x00403fd0
00419AE4  84 C0                     TEST AL,AL
00419AE6  0F 85 87 00 00 00         JNZ 0x00419b73
00419AEC  66 8B 55 FE               MOV DX,word ptr [EBP + -0x2]
00419AF0  57                        PUSH EDI
00419AF1  66 85 D2                  TEST DX,DX
00419AF4  7C 65                     JL 0x00419b5b
00419AF6  66 8B 3D 40 B2 7F 00      MOV DI,word ptr [0x007fb240]
00419AFD  66 3B D7                  CMP DX,DI
00419B00  7D 59                     JGE 0x00419b5b
00419B02  66 8B 4D FC               MOV CX,word ptr [EBP + -0x4]
00419B06  66 85 C9                  TEST CX,CX
00419B09  7C 50                     JL 0x00419b5b
00419B0B  66 3B 0D 42 B2 7F 00      CMP CX,word ptr [0x007fb242]
00419B12  7D 47                     JGE 0x00419b5b
00419B14  66 8B 45 FA               MOV AX,word ptr [EBP + -0x6]
00419B18  66 85 C0                  TEST AX,AX
00419B1B  7C 3E                     JL 0x00419b5b
00419B1D  66 3B 05 44 B2 7F 00      CMP AX,word ptr [0x007fb244]
00419B24  7D 35                     JGE 0x00419b5b
00419B26  53                        PUSH EBX
00419B27  0F BF 1D 46 B2 7F 00      MOVSX EBX,word ptr [0x007fb246]
00419B2E  0F BF C0                  MOVSX EAX,AX
00419B31  0F AF D8                  IMUL EBX,EAX
00419B34  0F BF C7                  MOVSX EAX,DI
00419B37  0F BF C9                  MOVSX ECX,CX
00419B3A  0F AF C1                  IMUL EAX,ECX
00419B3D  0F BF D2                  MOVSX EDX,DX
00419B40  03 D8                     ADD EBX,EAX
00419B42  03 DA                     ADD EBX,EDX
00419B44  8B 15 48 B2 7F 00         MOV EDX,dword ptr [0x007fb248]
00419B4A  33 C0                     XOR EAX,EAX
00419B4C  8A 86 8E 00 00 00         MOV AL,byte ptr [ESI + 0x8e]
00419B52  8D 0C 58                  LEA ECX,[EAX + EBX*0x2]
00419B55  5B                        POP EBX
00419B56  8B 04 8A                  MOV EAX,dword ptr [EDX + ECX*0x4]
00419B59  EB 02                     JMP 0x00419b5d
LAB_00419b5b:
00419B5B  33 C0                     XOR EAX,EAX
LAB_00419b5d:
00419B5D  3B C6                     CMP EAX,ESI
00419B5F  5F                        POP EDI
00419B60  75 11                     JNZ 0x00419b73
00419B62  8B CE                     MOV ECX,ESI
00419B64  E8 E9 BD FE FF            CALL 0x00405952
00419B69  B8 01 00 00 00            MOV EAX,0x1
00419B6E  5E                        POP ESI
00419B6F  8B E5                     MOV ESP,EBP
00419B71  5D                        POP EBP
00419B72  C3                        RET
LAB_00419b73:
00419B73  8B CE                     MOV ECX,ESI
00419B75  E8 CA 9E FE FF            CALL 0x00403a44
00419B7A  83 F8 FF                  CMP EAX,-0x1
00419B7D  75 07                     JNZ 0x00419b86
00419B7F  0B C0                     OR EAX,EAX
00419B81  5E                        POP ESI
00419B82  8B E5                     MOV ESP,EBP
00419B84  5D                        POP EBP
00419B85  C3                        RET
LAB_00419b86:
00419B86  83 F8 02                  CMP EAX,0x2
00419B89  75 07                     JNZ 0x00419b92
00419B8B  8B CE                     MOV ECX,ESI
00419B8D  E8 C0 77 FE FF            CALL 0x00401352
LAB_00419b92:
00419B92  33 C0                     XOR EAX,EAX
00419B94  5E                        POP ESI
00419B95  8B E5                     MOV ESP,EBP
00419B97  5D                        POP EBP
00419B98  C3                        RET
