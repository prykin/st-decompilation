FUN_004e8b10:
004E8B10  55                        PUSH EBP
004E8B11  8B EC                     MOV EBP,ESP
004E8B13  53                        PUSH EBX
004E8B14  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
004E8B17  56                        PUSH ESI
004E8B18  57                        PUSH EDI
004E8B19  33 FF                     XOR EDI,EDI
004E8B1B  83 FB 08                  CMP EBX,0x8
004E8B1E  8B F1                     MOV ESI,ECX
004E8B20  0F 83 28 01 00 00         JNC 0x004e8c4e
004E8B26  A1 38 2A 80 00            MOV EAX,[0x00802a38]
004E8B2B  85 C0                     TEST EAX,EAX
004E8B2D  74 11                     JZ 0x004e8b40
004E8B2F  8D 04 DB                  LEA EAX,[EBX + EBX*0x8]
004E8B32  80 BC C0 E9 87 80 00 08   CMP byte ptr [EAX + EAX*0x8 + 0x8087e9],0x8
004E8B3A  0F 83 0E 01 00 00         JNC 0x004e8c4e
LAB_004e8b40:
004E8B40  8B 06                     MOV EAX,dword ptr [ESI]
004E8B42  8B CE                     MOV ECX,ESI
004E8B44  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
004E8B47  83 F8 37                  CMP EAX,0x37
004E8B4A  75 13                     JNZ 0x004e8b5f
004E8B4C  3B 5E 24                  CMP EBX,dword ptr [ESI + 0x24]
004E8B4F  75 05                     JNZ 0x004e8b56
LAB_004e8b51:
004E8B51  BF 01 00 00 00            MOV EDI,0x1
LAB_004e8b56:
004E8B56  8B C7                     MOV EAX,EDI
004E8B58  5F                        POP EDI
004E8B59  5E                        POP ESI
004E8B5A  5B                        POP EBX
004E8B5B  5D                        POP EBP
004E8B5C  C2 08 00                  RET 0x8
LAB_004e8b5f:
004E8B5F  8B 16                     MOV EDX,dword ptr [ESI]
004E8B61  8B CE                     MOV ECX,ESI
004E8B63  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
004E8B66  83 F8 6C                  CMP EAX,0x6c
004E8B69  75 EB                     JNZ 0x004e8b56
004E8B6B  8B CE                     MOV ECX,ESI
004E8B6D  E8 EE B5 F1 FF            CALL 0x00404160
004E8B72  85 C0                     TEST EAX,EAX
004E8B74  74 E0                     JZ 0x004e8b56
004E8B76  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
004E8B79  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004E8B7F  6A 62                     PUSH 0x62
004E8B81  50                        PUSH EAX
004E8B82  E8 E4 8C F1 FF            CALL 0x0040186b
004E8B87  85 C0                     TEST EAX,EAX
004E8B89  74 C6                     JZ 0x004e8b51
004E8B8B  8A 0D 8F 8A 80 00         MOV CL,byte ptr [0x00808a8f]
004E8B91  8A 46 24                  MOV AL,byte ptr [ESI + 0x24]
004E8B94  84 C9                     TEST CL,CL
004E8B96  88 45 08                  MOV byte ptr [EBP + 0x8],AL
004E8B99  BA 01 00 00 00            MOV EDX,0x1
004E8B9E  74 2B                     JZ 0x004e8bcb
004E8BA0  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004E8BA3  81 E3 FF 00 00 00         AND EBX,0xff
004E8BA9  25 FF 00 00 00            AND EAX,0xff
004E8BAE  8D 0C DB                  LEA ECX,[EBX + EBX*0x8]
004E8BB1  33 DB                     XOR EBX,EBX
004E8BB3  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
004E8BB6  8A 84 C0 EA 87 80 00      MOV AL,byte ptr [EAX + EAX*0x8 + 0x8087ea]
004E8BBD  3A 84 C9 EA 87 80 00      CMP AL,byte ptr [ECX + ECX*0x8 + 0x8087ea]
004E8BC4  0F 95 C3                  SETNZ BL
004E8BC7  8B C3                     MOV EAX,EBX
004E8BC9  EB 70                     JMP 0x004e8c3b
LAB_004e8bcb:
004E8BCB  3A D8                     CMP BL,AL
004E8BCD  74 61                     JZ 0x004e8c30
004E8BCF  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004E8BD2  81 E3 FF 00 00 00         AND EBX,0xff
004E8BD8  25 FF 00 00 00            AND EAX,0xff
004E8BDD  8A 8C D8 4F 8A 80 00      MOV CL,byte ptr [EAX + EBX*0x8 + 0x808a4f]
004E8BE4  84 C9                     TEST CL,CL
004E8BE6  75 10                     JNZ 0x004e8bf8
004E8BE8  38 8C C3 4F 8A 80 00      CMP byte ptr [EBX + EAX*0x8 + 0x808a4f],CL
004E8BEF  75 07                     JNZ 0x004e8bf8
004E8BF1  B8 FE FF FF FF            MOV EAX,0xfffffffe
004E8BF6  EB 3A                     JMP 0x004e8c32
LAB_004e8bf8:
004E8BF8  3A CA                     CMP CL,DL
004E8BFA  75 0F                     JNZ 0x004e8c0b
004E8BFC  80 BC C3 4F 8A 80 00 00   CMP byte ptr [EBX + EAX*0x8 + 0x808a4f],0x0
004E8C04  75 05                     JNZ 0x004e8c0b
004E8C06  83 C8 FF                  OR EAX,0xffffffff
004E8C09  EB 27                     JMP 0x004e8c32
LAB_004e8c0b:
004E8C0B  84 C9                     TEST CL,CL
004E8C0D  75 0D                     JNZ 0x004e8c1c
004E8C0F  38 94 C3 4F 8A 80 00      CMP byte ptr [EBX + EAX*0x8 + 0x808a4f],DL
004E8C16  75 04                     JNZ 0x004e8c1c
004E8C18  8B C2                     MOV EAX,EDX
004E8C1A  EB 16                     JMP 0x004e8c32
LAB_004e8c1c:
004E8C1C  3A CA                     CMP CL,DL
004E8C1E  75 10                     JNZ 0x004e8c30
004E8C20  38 94 C3 4F 8A 80 00      CMP byte ptr [EBX + EAX*0x8 + 0x808a4f],DL
004E8C27  75 07                     JNZ 0x004e8c30
004E8C29  B8 02 00 00 00            MOV EAX,0x2
004E8C2E  EB 02                     JMP 0x004e8c32
LAB_004e8c30:
004E8C30  33 C0                     XOR EAX,EAX
LAB_004e8c32:
004E8C32  33 C9                     XOR ECX,ECX
004E8C34  85 C0                     TEST EAX,EAX
004E8C36  0F 9C C1                  SETL CL
004E8C39  8B C1                     MOV EAX,ECX
LAB_004e8c3b:
004E8C3B  85 C0                     TEST EAX,EAX
004E8C3D  0F 85 13 FF FF FF         JNZ 0x004e8b56
004E8C43  8B FA                     MOV EDI,EDX
004E8C45  8B C7                     MOV EAX,EDI
004E8C47  5F                        POP EDI
004E8C48  5E                        POP ESI
004E8C49  5B                        POP EBX
004E8C4A  5D                        POP EBP
004E8C4B  C2 08 00                  RET 0x8
LAB_004e8c4e:
004E8C4E  5F                        POP EDI
004E8C4F  5E                        POP ESI
004E8C50  33 C0                     XOR EAX,EAX
004E8C52  5B                        POP EBX
004E8C53  5D                        POP EBP
004E8C54  C2 08 00                  RET 0x8
