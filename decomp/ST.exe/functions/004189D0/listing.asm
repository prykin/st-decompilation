FUN_004189d0:
004189D0  55                        PUSH EBP
004189D1  8B EC                     MOV EBP,ESP
004189D3  83 EC 0C                  SUB ESP,0xc
004189D6  56                        PUSH ESI
004189D7  8B F1                     MOV ESI,ECX
004189D9  83 BE E8 00 00 00 01      CMP dword ptr [ESI + 0xe8],0x1
004189E0  75 0C                     JNZ 0x004189ee
004189E2  E8 66 A7 FE FF            CALL 0x0040314d
004189E7  33 C0                     XOR EAX,EAX
004189E9  5E                        POP ESI
004189EA  8B E5                     MOV ESP,EBP
004189EC  5D                        POP EBP
004189ED  C3                        RET
LAB_004189ee:
004189EE  E8 51 B0 FE FF            CALL 0x00403a44
004189F3  83 F8 01                  CMP EAX,0x1
004189F6  75 07                     JNZ 0x004189ff
004189F8  33 C0                     XOR EAX,EAX
004189FA  5E                        POP ESI
004189FB  8B E5                     MOV ESP,EBP
004189FD  5D                        POP EBP
004189FE  C3                        RET
LAB_004189ff:
004189FF  83 F8 02                  CMP EAX,0x2
00418A02  0F 85 07 01 00 00         JNZ 0x00418b0f
00418A08  8D 45 FC                  LEA EAX,[EBP + -0x4]
00418A0B  8D 4D F8                  LEA ECX,[EBP + -0x8]
00418A0E  50                        PUSH EAX
00418A0F  8D 55 F4                  LEA EDX,[EBP + -0xc]
00418A12  51                        PUSH ECX
00418A13  52                        PUSH EDX
00418A14  8B CE                     MOV ECX,ESI
00418A16  E8 1B CD FE FF            CALL 0x00405736
00418A1B  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00418A1E  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
00418A21  8B 06                     MOV EAX,dword ptr [ESI]
00418A23  51                        PUSH ECX
00418A24  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
00418A27  52                        PUSH EDX
00418A28  51                        PUSH ECX
00418A29  8B CE                     MOV ECX,ESI
00418A2B  FF 50 18                  CALL dword ptr [EAX + 0x18]
00418A2E  83 F8 01                  CMP EAX,0x1
00418A31  0F 85 85 00 00 00         JNZ 0x00418abc
00418A37  8B CE                     MOV ECX,ESI
00418A39  E8 0E BC FE FF            CALL 0x0040464c
00418A3E  8B 56 18                  MOV EDX,dword ptr [ESI + 0x18]
00418A41  8A 86 8E 00 00 00         MOV AL,byte ptr [ESI + 0x8e]
00418A47  66 8B 4E 5F               MOV CX,word ptr [ESI + 0x5f]
00418A4B  52                        PUSH EDX
00418A4C  66 8B 56 5D               MOV DX,word ptr [ESI + 0x5d]
00418A50  56                        PUSH ESI
00418A51  50                        PUSH EAX
00418A52  66 8B 46 5B               MOV AX,word ptr [ESI + 0x5b]
00418A56  51                        PUSH ECX
00418A57  66 C7 86 FA 00 00 00 00 00  MOV word ptr [ESI + 0xfa],0x0
00418A60  8B 0D 84 B2 7F 00         MOV ECX,dword ptr [0x007fb284]
00418A66  52                        PUSH EDX
00418A67  50                        PUSH EAX
00418A68  E8 54 C4 FE FF            CALL 0x00404ec1
00418A6D  85 C0                     TEST EAX,EAX
00418A6F  0F 85 02 01 00 00         JNZ 0x00418b77
00418A75  8B 4E 18                  MOV ECX,dword ptr [ESI + 0x18]
00418A78  8A 96 8E 00 00 00         MOV DL,byte ptr [ESI + 0x8e]
00418A7E  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00418A81  51                        PUSH ECX
00418A82  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
00418A85  56                        PUSH ESI
00418A86  52                        PUSH EDX
00418A87  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
00418A8A  50                        PUSH EAX
00418A8B  51                        PUSH ECX
00418A8C  8B 0D 84 B2 7F 00         MOV ECX,dword ptr [0x007fb284]
00418A92  52                        PUSH EDX
00418A93  E8 8D 88 FE FF            CALL 0x00401325
00418A98  85 C0                     TEST EAX,EAX
00418A9A  0F 85 D7 00 00 00         JNZ 0x00418b77
00418AA0  8B 86 01 01 00 00         MOV EAX,dword ptr [ESI + 0x101]
00418AA6  8B CE                     MOV ECX,ESI
00418AA8  50                        PUSH EAX
00418AA9  E8 F3 98 FE FF            CALL 0x004023a1
00418AAE  8B CE                     MOV ECX,ESI
00418AB0  E8 9D 88 FE FF            CALL 0x00401352
00418AB5  33 C0                     XOR EAX,EAX
00418AB7  5E                        POP ESI
00418AB8  8B E5                     MOV ESP,EBP
00418ABA  5D                        POP EBP
00418ABB  C3                        RET
LAB_00418abc:
00418ABC  66 FF 86 FA 00 00 00      INC word ptr [ESI + 0xfa]
00418AC3  66 8B 86 FA 00 00 00      MOV AX,word ptr [ESI + 0xfa]
00418ACA  66 3B 86 F8 00 00 00      CMP AX,word ptr [ESI + 0xf8]
00418AD1  0F 8E 49 01 00 00         JLE 0x00418c20
00418AD7  0F BF 4D F4               MOVSX ECX,word ptr [EBP + -0xc]
00418ADB  0F BF 55 F8               MOVSX EDX,word ptr [EBP + -0x8]
00418ADF  0F BF 45 FC               MOVSX EAX,word ptr [EBP + -0x4]
00418AE3  89 8E D7 00 00 00         MOV dword ptr [ESI + 0xd7],ECX
00418AE9  8B CE                     MOV ECX,ESI
00418AEB  89 96 DB 00 00 00         MOV dword ptr [ESI + 0xdb],EDX
00418AF1  89 86 DF 00 00 00         MOV dword ptr [ESI + 0xdf],EAX
00418AF7  66 C7 86 FA 00 00 00 00 00  MOV word ptr [ESI + 0xfa],0x0
00418B00  E8 4D CE FE FF            CALL 0x00405952
00418B05  B8 02 00 00 00            MOV EAX,0x2
00418B0A  5E                        POP ESI
00418B0B  8B E5                     MOV ESP,EBP
00418B0D  5D                        POP EBP
00418B0E  C3                        RET
LAB_00418b0f:
00418B0F  83 F8 03                  CMP EAX,0x3
00418B12  0F 85 0F 01 00 00         JNZ 0x00418c27
00418B18  8D 4D FC                  LEA ECX,[EBP + -0x4]
00418B1B  8D 55 F8                  LEA EDX,[EBP + -0x8]
00418B1E  51                        PUSH ECX
00418B1F  8D 45 F4                  LEA EAX,[EBP + -0xc]
00418B22  52                        PUSH EDX
00418B23  50                        PUSH EAX
00418B24  8B CE                     MOV ECX,ESI
00418B26  E8 0B CC FE FF            CALL 0x00405736
00418B2B  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00418B2E  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
00418B31  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
00418B34  51                        PUSH ECX
00418B35  66 8B 4E 4B               MOV CX,word ptr [ESI + 0x4b]
00418B39  52                        PUSH EDX
00418B3A  66 8B 56 49               MOV DX,word ptr [ESI + 0x49]
00418B3E  50                        PUSH EAX
00418B3F  66 8B 46 47               MOV AX,word ptr [ESI + 0x47]
00418B43  51                        PUSH ECX
00418B44  52                        PUSH EDX
00418B45  50                        PUSH EAX
00418B46  8B CE                     MOV ECX,ESI
00418B48  E8 CB CB FE FF            CALL 0x00405718
00418B4D  83 F8 FF                  CMP EAX,-0x1
00418B50  75 2D                     JNZ 0x00418b7f
00418B52  68 30 4E 7A 00            PUSH 0x7a4e30
00418B57  68 CC 4C 7A 00            PUSH 0x7a4ccc
00418B5C  6A 00                     PUSH 0x0
00418B5E  6A 00                     PUSH 0x0
00418B60  68 3F 03 00 00            PUSH 0x33f
00418B65  68 0C 4E 7A 00            PUSH 0x7a4e0c
00418B6A  E8 61 49 29 00            CALL 0x006ad4d0
00418B6F  83 C4 18                  ADD ESP,0x18
00418B72  85 C0                     TEST EAX,EAX
00418B74  74 01                     JZ 0x00418b77
00418B76  CC                        INT3
LAB_00418b77:
00418B77  83 C8 FF                  OR EAX,0xffffffff
00418B7A  5E                        POP ESI
00418B7B  8B E5                     MOV ESP,EBP
00418B7D  5D                        POP EBP
00418B7E  C3                        RET
LAB_00418b7f:
00418B7F  83 F8 01                  CMP EAX,0x1
00418B82  75 63                     JNZ 0x00418be7
00418B84  8B 8E 9B 00 00 00         MOV ECX,dword ptr [ESI + 0x9b]
00418B8A  8B 96 97 00 00 00         MOV EDX,dword ptr [ESI + 0x97]
00418B90  8D 04 CA                  LEA EAX,[EDX + ECX*0x8]
00418B93  66 8B 4C CA F8            MOV CX,word ptr [EDX + ECX*0x8 + -0x8]
00418B98  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
00418B9B  66 8B 50 FA               MOV DX,word ptr [EAX + -0x6]
00418B9F  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
00418BA2  66 8B 40 FC               MOV AX,word ptr [EAX + -0x4]
00418BA6  8B CE                     MOV ECX,ESI
00418BA8  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00418BAB  C7 86 E4 00 00 00 00 00 00 00  MOV dword ptr [ESI + 0xe4],0x0
00418BB5  C6 86 E3 00 00 00 00      MOV byte ptr [ESI + 0xe3],0x0
00418BBC  E8 91 CD FE FF            CALL 0x00405952
00418BC1  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00418BC4  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
00418BC7  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
00418BCA  51                        PUSH ECX
00418BCB  52                        PUSH EDX
00418BCC  50                        PUSH EAX
00418BCD  8B CE                     MOV ECX,ESI
00418BCF  E8 44 B7 FE FF            CALL 0x00404318
00418BD4  83 F8 FF                  CMP EAX,-0x1
00418BD7  74 9E                     JZ 0x00418b77
00418BD9  85 C0                     TEST EAX,EAX
00418BDB  74 43                     JZ 0x00418c20
00418BDD  83 F8 02                  CMP EAX,0x2
00418BE0  75 05                     JNZ 0x00418be7
00418BE2  5E                        POP ESI
00418BE3  8B E5                     MOV ESP,EBP
00418BE5  5D                        POP EBP
00418BE6  C3                        RET
LAB_00418be7:
00418BE7  8B 8E D3 00 00 00         MOV ECX,dword ptr [ESI + 0xd3]
00418BED  8B 96 97 00 00 00         MOV EDX,dword ptr [ESI + 0x97]
00418BF3  66 8B 44 CA 06            MOV AX,word ptr [EDX + ECX*0x8 + 0x6]
00418BF8  8B C8                     MOV ECX,EAX
00418BFA  81 E1 FF 0F 00 00         AND ECX,0xfff
00418C00  66 81 F9 FE 0F            CMP CX,0xffe
00418C05  74 12                     JZ 0x00418c19
00418C07  66 8B 4E 6C               MOV CX,word ptr [ESI + 0x6c]
00418C0B  66 3B C1                  CMP AX,CX
00418C0E  74 09                     JZ 0x00418c19
00418C10  50                        PUSH EAX
00418C11  51                        PUSH ECX
00418C12  8B CE                     MOV ECX,ESI
00418C14  E8 D0 95 FE FF            CALL 0x004021e9
LAB_00418c19:
00418C19  8B CE                     MOV ECX,ESI
00418C1B  E8 32 87 FE FF            CALL 0x00401352
LAB_00418c20:
00418C20  33 C0                     XOR EAX,EAX
00418C22  5E                        POP ESI
00418C23  8B E5                     MOV ESP,EBP
00418C25  5D                        POP EBP
00418C26  C3                        RET
LAB_00418c27:
00418C27  85 C0                     TEST EAX,EAX
00418C29  0F 85 48 FF FF FF         JNZ 0x00418b77
00418C2F  8B CE                     MOV ECX,ESI
00418C31  E8 1C CD FE FF            CALL 0x00405952
00418C36  B8 01 00 00 00            MOV EAX,0x1
00418C3B  5E                        POP ESI
00418C3C  8B E5                     MOV ESP,EBP
00418C3E  5D                        POP EBP
00418C3F  C3                        RET
