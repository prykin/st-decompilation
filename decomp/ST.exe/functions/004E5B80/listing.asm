FUN_004e5b80:
004E5B80  55                        PUSH EBP
004E5B81  8B EC                     MOV EBP,ESP
004E5B83  53                        PUSH EBX
004E5B84  56                        PUSH ESI
004E5B85  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
004E5B88  57                        PUSH EDI
004E5B89  85 F6                     TEST ESI,ESI
004E5B8B  8B D9                     MOV EBX,ECX
004E5B8D  7C 73                     JL 0x004e5c02
004E5B8F  83 FE 08                  CMP ESI,0x8
004E5B92  7D 6E                     JGE 0x004e5c02
004E5B94  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
004E5B97  83 FF 01                  CMP EDI,0x1
004E5B9A  7C 66                     JL 0x004e5c02
004E5B9C  81 FF 9B 00 00 00         CMP EDI,0x9b
004E5BA2  7D 5E                     JGE 0x004e5c02
004E5BA4  57                        PUSH EDI
004E5BA5  56                        PUSH ESI
004E5BA6  E8 74 C2 F1 FF            CALL 0x00401e1f
004E5BAB  85 C0                     TEST EAX,EAX
004E5BAD  75 53                     JNZ 0x004e5c02
004E5BAF  80 BF D8 8F 79 00 01      CMP byte ptr [EDI + 0x798fd8],0x1
004E5BB6  74 38                     JZ 0x004e5bf0
004E5BB8  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
004E5BBB  83 F8 01                  CMP EAX,0x1
004E5BBE  7E 30                     JLE 0x004e5bf0
004E5BC0  8D 0C B6                  LEA ECX,[ESI + ESI*0x4]
004E5BC3  33 DB                     XOR EBX,EBX
004E5BC5  8D 14 CE                  LEA EDX,[ESI + ECX*0x8]
004E5BC8  8D 0C 56                  LEA ECX,[ESI + EDX*0x2]
004E5BCB  8D 50 FF                  LEA EDX,[EAX + -0x1]
004E5BCE  C1 E1 04                  SHL ECX,0x4
004E5BD1  03 CE                     ADD ECX,ESI
004E5BD3  8A 9C 4F 5B 55 7F 00      MOV BL,byte ptr [EDI + ECX*0x2 + 0x7f555b]
004E5BDA  8D 8C 4F 5B 55 7F 00      LEA ECX,[EDI + ECX*0x2 + 0x7f555b]
004E5BE1  3B D3                     CMP EDX,EBX
004E5BE3  7D 1D                     JGE 0x004e5c02
004E5BE5  FE C8                     DEC AL
004E5BE7  5F                        POP EDI
004E5BE8  5E                        POP ESI
004E5BE9  88 01                     MOV byte ptr [ECX],AL
004E5BEB  5B                        POP EBX
004E5BEC  5D                        POP EBP
004E5BED  C2 0C 00                  RET 0xc
LAB_004e5bf0:
004E5BF0  57                        PUSH EDI
004E5BF1  56                        PUSH ESI
004E5BF2  8B CB                     MOV ECX,EBX
004E5BF4  E8 FF F7 F1 FF            CALL 0x004053f8
004E5BF9  57                        PUSH EDI
004E5BFA  56                        PUSH ESI
004E5BFB  8B CB                     MOV ECX,EBX
004E5BFD  E8 B4 DF F1 FF            CALL 0x00403bb6
LAB_004e5c02:
004E5C02  5F                        POP EDI
004E5C03  5E                        POP ESI
004E5C04  5B                        POP EBX
004E5C05  5D                        POP EBP
004E5C06  C2 0C 00                  RET 0xc
