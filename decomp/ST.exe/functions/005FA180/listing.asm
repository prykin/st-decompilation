FUN_005fa180:
005FA180  A1 38 2A 80 00            MOV EAX,[0x00802a38]
005FA185  53                        PUSH EBX
005FA186  56                        PUSH ESI
005FA187  57                        PUSH EDI
005FA188  8B 80 E4 00 00 00         MOV EAX,dword ptr [EAX + 0xe4]
005FA18E  33 D2                     XOR EDX,EDX
005FA190  BF 05 00 00 00            MOV EDI,0x5
005FA195  8B F1                     MOV ESI,ECX
005FA197  F7 F7                     DIV EDI
005FA199  8B 8E D1 02 00 00         MOV ECX,dword ptr [ESI + 0x2d1]
005FA19F  85 D2                     TEST EDX,EDX
005FA1A1  0F 85 4E 01 00 00         JNZ 0x005fa2f5
005FA1A7  80 BE BB 02 00 00 02      CMP byte ptr [ESI + 0x2bb],0x2
005FA1AE  0F 85 84 00 00 00         JNZ 0x005fa238
005FA1B4  A1 24 67 80 00            MOV EAX,[0x00806724]
005FA1B9  8D BE D5 01 00 00         LEA EDI,[ESI + 0x1d5]
005FA1BF  0F BF 50 2C               MOVSX EDX,word ptr [EAX + 0x2c]
005FA1C3  8B 44 88 30               MOV EAX,dword ptr [EAX + ECX*0x4 + 0x30]
005FA1C7  52                        PUSH EDX
005FA1C8  50                        PUSH EAX
005FA1C9  8B CF                     MOV ECX,EDI
005FA1CB  E8 9D 6F E0 FF            CALL 0x0040116d
005FA1D0  8B 86 D1 02 00 00         MOV EAX,dword ptr [ESI + 0x2d1]
005FA1D6  48                        DEC EAX
005FA1D7  89 86 D1 02 00 00         MOV dword ptr [ESI + 0x2d1],EAX
005FA1DD  8B 15 24 67 80 00         MOV EDX,dword ptr [0x00806724]
005FA1E3  8B C8                     MOV ECX,EAX
005FA1E5  0F BF 42 23               MOVSX EAX,word ptr [EDX + 0x23]
005FA1E9  99                        CDQ
005FA1EA  2B C2                     SUB EAX,EDX
005FA1EC  D1 F8                     SAR EAX,0x1
005FA1EE  3B C8                     CMP ECX,EAX
005FA1F0  75 18                     JNZ 0x005fa20a
005FA1F2  8B CF                     MOV ECX,EDI
005FA1F4  E8 D4 B4 E0 FF            CALL 0x004056cd
005FA1F9  84 C0                     TEST AL,AL
005FA1FB  74 0D                     JZ 0x005fa20a
005FA1FD  8B CE                     MOV ECX,ESI
005FA1FF  E8 B5 78 E0 FF            CALL 0x00401ab9
005FA204  8B 07                     MOV EAX,dword ptr [EDI]
005FA206  8B CF                     MOV ECX,EDI
005FA208  FF 10                     CALL dword ptr [EAX]
LAB_005fa20a:
005FA20A  8B 9E D1 02 00 00         MOV EBX,dword ptr [ESI + 0x2d1]
005FA210  85 DB                     TEST EBX,EBX
005FA212  7D 1E                     JGE 0x005fa232
005FA214  C7 86 D1 02 00 00 00 00 00 00  MOV dword ptr [ESI + 0x2d1],0x0
005FA21E  8B 0D 24 67 80 00         MOV ECX,dword ptr [0x00806724]
005FA224  0F BF 51 2C               MOVSX EDX,word ptr [ECX + 0x2c]
005FA228  52                        PUSH EDX
005FA229  6A 00                     PUSH 0x0
005FA22B  8B CF                     MOV ECX,EDI
005FA22D  E8 3B 6F E0 FF            CALL 0x0040116d
LAB_005fa232:
005FA232  5F                        POP EDI
005FA233  8B C3                     MOV EAX,EBX
005FA235  5E                        POP ESI
005FA236  5B                        POP EBX
005FA237  C3                        RET
LAB_005fa238:
005FA238  A1 24 67 80 00            MOV EAX,[0x00806724]
005FA23D  8D 9E D5 01 00 00         LEA EBX,[ESI + 0x1d5]
005FA243  0F BF 50 2C               MOVSX EDX,word ptr [EAX + 0x2c]
005FA247  8B 44 88 30               MOV EAX,dword ptr [EAX + ECX*0x4 + 0x30]
005FA24B  52                        PUSH EDX
005FA24C  50                        PUSH EAX
005FA24D  8B CB                     MOV ECX,EBX
005FA24F  E8 19 6F E0 FF            CALL 0x0040116d
005FA254  8B 96 D1 02 00 00         MOV EDX,dword ptr [ESI + 0x2d1]
005FA25A  42                        INC EDX
005FA25B  89 96 D1 02 00 00         MOV dword ptr [ESI + 0x2d1],EDX
005FA261  8B 0D 24 67 80 00         MOV ECX,dword ptr [0x00806724]
005FA267  8B FA                     MOV EDI,EDX
005FA269  0F BF 41 23               MOVSX EAX,word ptr [ECX + 0x23]
005FA26D  3B F8                     CMP EDI,EAX
005FA26F  7C 4B                     JL 0x005fa2bc
005FA271  8B 46 18                  MOV EAX,dword ptr [ESI + 0x18]
005FA274  8B 8E 65 02 00 00         MOV ECX,dword ptr [ESI + 0x265]
005FA27A  8D 57 FF                  LEA EDX,[EDI + -0x1]
005FA27D  50                        PUSH EAX
005FA27E  8B 86 5D 02 00 00         MOV EAX,dword ptr [ESI + 0x25d]
005FA284  89 96 D1 02 00 00         MOV dword ptr [ESI + 0x2d1],EDX
005FA28A  8B 96 61 02 00 00         MOV EDX,dword ptr [ESI + 0x261]
005FA290  56                        PUSH ESI
005FA291  6A 00                     PUSH 0x0
005FA293  51                        PUSH ECX
005FA294  8B 0D 84 B2 7F 00         MOV ECX,dword ptr [0x007fb284]
005FA29A  52                        PUSH EDX
005FA29B  50                        PUSH EAX
005FA29C  E8 20 AC E0 FF            CALL 0x00404ec1
005FA2A1  8B CB                     MOV ECX,EBX
005FA2A3  E8 67 9A E0 FF            CALL 0x00403d0f
005FA2A8  8B CE                     MOV ECX,ESI
005FA2AA  C6 86 BB 02 00 00 00      MOV byte ptr [ESI + 0x2bb],0x0
005FA2B1  E8 96 A3 E0 FF            CALL 0x0040464c
005FA2B6  8B C7                     MOV EAX,EDI
005FA2B8  5F                        POP EDI
005FA2B9  5E                        POP ESI
005FA2BA  5B                        POP EBX
005FA2BB  C3                        RET
LAB_005fa2bc:
005FA2BC  99                        CDQ
005FA2BD  2B C2                     SUB EAX,EDX
005FA2BF  D1 F8                     SAR EAX,0x1
005FA2C1  3B F8                     CMP EDI,EAX
005FA2C3  75 2A                     JNZ 0x005fa2ef
005FA2C5  8B CB                     MOV ECX,EBX
005FA2C7  E8 C4 87 E0 FF            CALL 0x00402a90
005FA2CC  0F BF 4E 45               MOVSX ECX,word ptr [ESI + 0x45]
005FA2D0  0F BF 56 43               MOVSX EDX,word ptr [ESI + 0x43]
005FA2D4  0F BF 46 41               MOVSX EAX,word ptr [ESI + 0x41]
005FA2D8  6A 00                     PUSH 0x0
005FA2DA  51                        PUSH ECX
005FA2DB  52                        PUSH EDX
005FA2DC  50                        PUSH EAX
005FA2DD  6A 00                     PUSH 0x0
005FA2DF  8B CB                     MOV ECX,EBX
005FA2E1  E8 E6 AF E0 FF            CALL 0x004052cc
005FA2E6  50                        PUSH EAX
005FA2E7  E8 B9 AE E0 FF            CALL 0x004051a5
005FA2EC  83 C4 18                  ADD ESP,0x18
LAB_005fa2ef:
005FA2EF  8B C7                     MOV EAX,EDI
005FA2F1  5F                        POP EDI
005FA2F2  5E                        POP ESI
005FA2F3  5B                        POP EBX
005FA2F4  C3                        RET
LAB_005fa2f5:
005FA2F5  5F                        POP EDI
005FA2F6  5E                        POP ESI
005FA2F7  8B C1                     MOV EAX,ECX
005FA2F9  5B                        POP EBX
005FA2FA  C3                        RET
