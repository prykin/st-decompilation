FUN_00417a20:
00417A20  55                        PUSH EBP
00417A21  8B EC                     MOV EBP,ESP
00417A23  53                        PUSH EBX
00417A24  8B 5D 14                  MOV EBX,dword ptr [EBP + 0x14]
00417A27  56                        PUSH ESI
00417A28  8B F1                     MOV ESI,ECX
00417A2A  57                        PUSH EDI
00417A2B  8B 46 2C                  MOV EAX,dword ptr [ESI + 0x2c]
00417A2E  85 C0                     TEST EAX,EAX
00417A30  0F 85 97 00 00 00         JNZ 0x00417acd
00417A36  83 FB 01                  CMP EBX,0x1
00417A39  75 26                     JNZ 0x00417a61
00417A3B  8B 46 18                  MOV EAX,dword ptr [ESI + 0x18]
00417A3E  8A 8E 8E 00 00 00         MOV CL,byte ptr [ESI + 0x8e]
00417A44  66 8B 56 5F               MOV DX,word ptr [ESI + 0x5f]
00417A48  50                        PUSH EAX
00417A49  66 8B 46 5D               MOV AX,word ptr [ESI + 0x5d]
00417A4D  56                        PUSH ESI
00417A4E  51                        PUSH ECX
00417A4F  66 8B 4E 5B               MOV CX,word ptr [ESI + 0x5b]
00417A53  52                        PUSH EDX
00417A54  50                        PUSH EAX
00417A55  51                        PUSH ECX
00417A56  8B 0D 84 B2 7F 00         MOV ECX,dword ptr [0x007fb284]
00417A5C  E8 60 D4 FE FF            CALL 0x00404ec1
LAB_00417a61:
00417A61  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00417A64  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
00417A67  83 FB 01                  CMP EBX,0x1
00417A6A  66 89 46 47               MOV word ptr [ESI + 0x47],AX
00417A6E  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
00417A71  66 89 7E 4B               MOV word ptr [ESI + 0x4b],DI
00417A75  8D 14 89                  LEA EDX,[ECX + ECX*0x4]
00417A78  8D 4C D0 64               LEA ECX,[EAX + EDX*0x8 + 0x64]
00417A7C  66 89 4E 41               MOV word ptr [ESI + 0x41],CX
00417A80  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00417A83  66 89 4E 49               MOV word ptr [ESI + 0x49],CX
00417A87  8D 14 89                  LEA EDX,[ECX + ECX*0x4]
00417A8A  8D 14 92                  LEA EDX,[EDX + EDX*0x4]
00417A8D  8D 54 D1 64               LEA EDX,[ECX + EDX*0x8 + 0x64]
00417A91  66 89 56 43               MOV word ptr [ESI + 0x43],DX
00417A95  8D 14 BF                  LEA EDX,[EDI + EDI*0x4]
00417A98  8D 14 92                  LEA EDX,[EDX + EDX*0x4]
00417A9B  8D 14 D5 64 00 00 00      LEA EDX,[EDX*0x8 + 0x64]
00417AA2  66 89 56 45               MOV word ptr [ESI + 0x45],DX
00417AA6  0F 85 DA 01 00 00         JNZ 0x00417c86
00417AAC  8B 56 18                  MOV EDX,dword ptr [ESI + 0x18]
00417AAF  52                        PUSH EDX
00417AB0  8A 96 8E 00 00 00         MOV DL,byte ptr [ESI + 0x8e]
00417AB6  56                        PUSH ESI
00417AB7  52                        PUSH EDX
00417AB8  57                        PUSH EDI
00417AB9  51                        PUSH ECX
00417ABA  8B 0D 84 B2 7F 00         MOV ECX,dword ptr [0x007fb284]
00417AC0  50                        PUSH EAX
00417AC1  E8 5F 98 FE FF            CALL 0x00401325
00417AC6  5F                        POP EDI
00417AC7  5E                        POP ESI
00417AC8  5B                        POP EBX
00417AC9  5D                        POP EBP
00417ACA  C2 10 00                  RET 0x10
LAB_00417acd:
00417ACD  83 FB 01                  CMP EBX,0x1
00417AD0  0F 85 A0 00 00 00         JNZ 0x00417b76
00417AD6  8B 46 18                  MOV EAX,dword ptr [ESI + 0x18]
00417AD9  8A 8E 8E 00 00 00         MOV CL,byte ptr [ESI + 0x8e]
00417ADF  66 8B 56 5F               MOV DX,word ptr [ESI + 0x5f]
00417AE3  50                        PUSH EAX
00417AE4  66 8B 46 5D               MOV AX,word ptr [ESI + 0x5d]
00417AE8  56                        PUSH ESI
00417AE9  51                        PUSH ECX
00417AEA  66 8B 4E 5B               MOV CX,word ptr [ESI + 0x5b]
00417AEE  52                        PUSH EDX
00417AEF  50                        PUSH EAX
00417AF0  51                        PUSH ECX
00417AF1  8B 0D 84 B2 7F 00         MOV ECX,dword ptr [0x007fb284]
00417AF7  E8 C5 D3 FE FF            CALL 0x00404ec1
00417AFC  8B 56 18                  MOV EDX,dword ptr [ESI + 0x18]
00417AFF  8A 86 8E 00 00 00         MOV AL,byte ptr [ESI + 0x8e]
00417B05  66 8B 4E 5F               MOV CX,word ptr [ESI + 0x5f]
00417B09  52                        PUSH EDX
00417B0A  66 8B 56 5D               MOV DX,word ptr [ESI + 0x5d]
00417B0E  56                        PUSH ESI
00417B0F  50                        PUSH EAX
00417B10  66 8B 46 5B               MOV AX,word ptr [ESI + 0x5b]
00417B14  51                        PUSH ECX
00417B15  8B 0D 84 B2 7F 00         MOV ECX,dword ptr [0x007fb284]
00417B1B  66 40                     INC AX
00417B1D  52                        PUSH EDX
00417B1E  50                        PUSH EAX
00417B1F  E8 9D D3 FE FF            CALL 0x00404ec1
00417B24  8B 4E 18                  MOV ECX,dword ptr [ESI + 0x18]
00417B27  8A 96 8E 00 00 00         MOV DL,byte ptr [ESI + 0x8e]
00417B2D  66 8B 46 5F               MOV AX,word ptr [ESI + 0x5f]
00417B31  51                        PUSH ECX
00417B32  66 8B 4E 5D               MOV CX,word ptr [ESI + 0x5d]
00417B36  56                        PUSH ESI
00417B37  52                        PUSH EDX
00417B38  66 8B 56 5B               MOV DX,word ptr [ESI + 0x5b]
00417B3C  66 41                     INC CX
00417B3E  50                        PUSH EAX
00417B3F  51                        PUSH ECX
00417B40  8B 0D 84 B2 7F 00         MOV ECX,dword ptr [0x007fb284]
00417B46  52                        PUSH EDX
00417B47  E8 75 D3 FE FF            CALL 0x00404ec1
00417B4C  8B 46 18                  MOV EAX,dword ptr [ESI + 0x18]
00417B4F  8A 8E 8E 00 00 00         MOV CL,byte ptr [ESI + 0x8e]
00417B55  66 8B 56 5F               MOV DX,word ptr [ESI + 0x5f]
00417B59  50                        PUSH EAX
00417B5A  66 8B 46 5D               MOV AX,word ptr [ESI + 0x5d]
00417B5E  56                        PUSH ESI
00417B5F  51                        PUSH ECX
00417B60  66 8B 4E 5B               MOV CX,word ptr [ESI + 0x5b]
00417B64  66 40                     INC AX
00417B66  52                        PUSH EDX
00417B67  66 41                     INC CX
00417B69  50                        PUSH EAX
00417B6A  51                        PUSH ECX
00417B6B  8B 0D 84 B2 7F 00         MOV ECX,dword ptr [0x007fb284]
00417B71  E8 4B D3 FE FF            CALL 0x00404ec1
LAB_00417b76:
00417B76  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00417B79  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
00417B7C  83 FB 01                  CMP EBX,0x1
00417B7F  66 89 46 47               MOV word ptr [ESI + 0x47],AX
00417B83  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
00417B86  66 89 7E 4B               MOV word ptr [ESI + 0x4b],DI
00417B8A  8D 14 89                  LEA EDX,[ECX + ECX*0x4]
00417B8D  8D 4C D0 64               LEA ECX,[EAX + EDX*0x8 + 0x64]
00417B91  66 89 4E 41               MOV word ptr [ESI + 0x41],CX
00417B95  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00417B98  66 89 4E 49               MOV word ptr [ESI + 0x49],CX
00417B9C  8D 14 89                  LEA EDX,[ECX + ECX*0x4]
00417B9F  8D 14 92                  LEA EDX,[EDX + EDX*0x4]
00417BA2  8D 54 D1 64               LEA EDX,[ECX + EDX*0x8 + 0x64]
00417BA6  66 89 56 43               MOV word ptr [ESI + 0x43],DX
00417BAA  8D 14 BF                  LEA EDX,[EDI + EDI*0x4]
00417BAD  8D 14 92                  LEA EDX,[EDX + EDX*0x4]
00417BB0  8D 14 D5 64 00 00 00      LEA EDX,[EDX*0x8 + 0x64]
00417BB7  66 89 56 45               MOV word ptr [ESI + 0x45],DX
00417BBB  0F 85 C5 00 00 00         JNZ 0x00417c86
00417BC1  8B 56 18                  MOV EDX,dword ptr [ESI + 0x18]
00417BC4  52                        PUSH EDX
00417BC5  8A 96 8E 00 00 00         MOV DL,byte ptr [ESI + 0x8e]
00417BCB  56                        PUSH ESI
00417BCC  52                        PUSH EDX
00417BCD  57                        PUSH EDI
00417BCE  51                        PUSH ECX
00417BCF  8B 0D 84 B2 7F 00         MOV ECX,dword ptr [0x007fb284]
00417BD5  50                        PUSH EAX
00417BD6  E8 4A 97 FE FF            CALL 0x00401325
00417BDB  85 C0                     TEST EAX,EAX
00417BDD  74 0A                     JZ 0x00417be9
00417BDF  5F                        POP EDI
00417BE0  5E                        POP ESI
00417BE1  83 C8 FF                  OR EAX,0xffffffff
00417BE4  5B                        POP EBX
00417BE5  5D                        POP EBP
00417BE6  C2 10 00                  RET 0x10
LAB_00417be9:
00417BE9  8B 46 18                  MOV EAX,dword ptr [ESI + 0x18]
00417BEC  8A 8E 8E 00 00 00         MOV CL,byte ptr [ESI + 0x8e]
00417BF2  66 8B 56 4B               MOV DX,word ptr [ESI + 0x4b]
00417BF6  50                        PUSH EAX
00417BF7  66 8B 46 49               MOV AX,word ptr [ESI + 0x49]
00417BFB  56                        PUSH ESI
00417BFC  51                        PUSH ECX
00417BFD  66 8B 4E 47               MOV CX,word ptr [ESI + 0x47]
00417C01  52                        PUSH EDX
00417C02  66 41                     INC CX
00417C04  50                        PUSH EAX
00417C05  51                        PUSH ECX
00417C06  8B 0D 84 B2 7F 00         MOV ECX,dword ptr [0x007fb284]
00417C0C  E8 14 97 FE FF            CALL 0x00401325
00417C11  85 C0                     TEST EAX,EAX
00417C13  74 0A                     JZ 0x00417c1f
00417C15  5F                        POP EDI
00417C16  5E                        POP ESI
00417C17  83 C8 FF                  OR EAX,0xffffffff
00417C1A  5B                        POP EBX
00417C1B  5D                        POP EBP
00417C1C  C2 10 00                  RET 0x10
LAB_00417c1f:
00417C1F  8B 56 18                  MOV EDX,dword ptr [ESI + 0x18]
00417C22  8A 86 8E 00 00 00         MOV AL,byte ptr [ESI + 0x8e]
00417C28  66 8B 4E 4B               MOV CX,word ptr [ESI + 0x4b]
00417C2C  52                        PUSH EDX
00417C2D  66 8B 56 49               MOV DX,word ptr [ESI + 0x49]
00417C31  56                        PUSH ESI
00417C32  50                        PUSH EAX
00417C33  66 8B 46 47               MOV AX,word ptr [ESI + 0x47]
00417C37  66 42                     INC DX
00417C39  51                        PUSH ECX
00417C3A  8B 0D 84 B2 7F 00         MOV ECX,dword ptr [0x007fb284]
00417C40  52                        PUSH EDX
00417C41  50                        PUSH EAX
00417C42  E8 DE 96 FE FF            CALL 0x00401325
00417C47  85 C0                     TEST EAX,EAX
00417C49  74 0A                     JZ 0x00417c55
00417C4B  5F                        POP EDI
00417C4C  5E                        POP ESI
00417C4D  83 C8 FF                  OR EAX,0xffffffff
00417C50  5B                        POP EBX
00417C51  5D                        POP EBP
00417C52  C2 10 00                  RET 0x10
LAB_00417c55:
00417C55  8B 4E 18                  MOV ECX,dword ptr [ESI + 0x18]
00417C58  8A 96 8E 00 00 00         MOV DL,byte ptr [ESI + 0x8e]
00417C5E  66 8B 46 4B               MOV AX,word ptr [ESI + 0x4b]
00417C62  51                        PUSH ECX
00417C63  66 8B 4E 49               MOV CX,word ptr [ESI + 0x49]
00417C67  56                        PUSH ESI
00417C68  52                        PUSH EDX
00417C69  66 8B 56 47               MOV DX,word ptr [ESI + 0x47]
00417C6D  66 41                     INC CX
00417C6F  50                        PUSH EAX
00417C70  66 42                     INC DX
00417C72  51                        PUSH ECX
00417C73  8B 0D 84 B2 7F 00         MOV ECX,dword ptr [0x007fb284]
00417C79  52                        PUSH EDX
00417C7A  E8 A6 96 FE FF            CALL 0x00401325
00417C7F  5F                        POP EDI
00417C80  5E                        POP ESI
00417C81  5B                        POP EBX
00417C82  5D                        POP EBP
00417C83  C2 10 00                  RET 0x10
LAB_00417c86:
00417C86  5F                        POP EDI
00417C87  5E                        POP ESI
00417C88  33 C0                     XOR EAX,EAX
00417C8A  5B                        POP EBX
00417C8B  5D                        POP EBP
00417C8C  C2 10 00                  RET 0x10
