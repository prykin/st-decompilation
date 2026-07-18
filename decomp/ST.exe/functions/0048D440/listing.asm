FUN_0048d440:
0048D440  53                        PUSH EBX
0048D441  56                        PUSH ESI
0048D442  8B F1                     MOV ESI,ECX
0048D444  57                        PUSH EDI
0048D445  66 8B 46 30               MOV AX,word ptr [ESI + 0x30]
0048D449  8A 4E 24                  MOV CL,byte ptr [ESI + 0x24]
0048D44C  50                        PUSH EAX
0048D44D  51                        PUSH ECX
0048D44E  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0048D454  E8 A0 88 F7 FF            CALL 0x00405cf9
0048D459  8B D8                     MOV EBX,EAX
0048D45B  8B 86 A1 04 00 00         MOV EAX,dword ptr [ESI + 0x4a1]
0048D461  83 C9 FF                  OR ECX,0xffffffff
0048D464  3B C1                     CMP EAX,ECX
0048D466  75 37                     JNZ 0x0048d49f
0048D468  39 8E AB 04 00 00         CMP dword ptr [ESI + 0x4ab],ECX
0048D46E  75 06                     JNZ 0x0048d476
0048D470  5F                        POP EDI
0048D471  5E                        POP ESI
0048D472  33 C0                     XOR EAX,EAX
0048D474  5B                        POP EBX
0048D475  C3                        RET
LAB_0048d476:
0048D476  3B C1                     CMP EAX,ECX
0048D478  75 25                     JNZ 0x0048d49f
0048D47A  8B 96 DA 07 00 00         MOV EDX,dword ptr [ESI + 0x7da]
0048D480  8B 9E D6 07 00 00         MOV EBX,dword ptr [ESI + 0x7d6]
0048D486  8B BE D2 07 00 00         MOV EDI,dword ptr [ESI + 0x7d2]
0048D48C  03 D3                     ADD EDX,EBX
0048D48E  03 D7                     ADD EDX,EDI
0048D490  33 C0                     XOR EAX,EAX
0048D492  85 D2                     TEST EDX,EDX
0048D494  0F 9E C0                  SETLE AL
0048D497  48                        DEC EAX
0048D498  5F                        POP EDI
0048D499  5E                        POP ESI
0048D49A  83 E0 07                  AND EAX,0x7
0048D49D  5B                        POP EBX
0048D49E  C3                        RET
LAB_0048d49f:
0048D49F  39 8E AB 04 00 00         CMP dword ptr [ESI + 0x4ab],ECX
0048D4A5  75 24                     JNZ 0x0048d4cb
0048D4A7  8B 86 DA 07 00 00         MOV EAX,dword ptr [ESI + 0x7da]
0048D4AD  8B 9E D6 07 00 00         MOV EBX,dword ptr [ESI + 0x7d6]
0048D4B3  8B BE D2 07 00 00         MOV EDI,dword ptr [ESI + 0x7d2]
0048D4B9  03 C3                     ADD EAX,EBX
0048D4BB  03 C7                     ADD EAX,EDI
0048D4BD  33 C9                     XOR ECX,ECX
0048D4BF  83 F8 28                  CMP EAX,0x28
0048D4C2  5F                        POP EDI
0048D4C3  0F 9C C1                  SETL CL
0048D4C6  5E                        POP ESI
0048D4C7  8B C1                     MOV EAX,ECX
0048D4C9  5B                        POP EBX
0048D4CA  C3                        RET
LAB_0048d4cb:
0048D4CB  0F BF 96 9F 04 00 00      MOVSX EDX,word ptr [ESI + 0x49f]
0048D4D2  0F BF 86 9D 04 00 00      MOVSX EAX,word ptr [ESI + 0x49d]
0048D4D9  0F BF 8E 9B 04 00 00      MOVSX ECX,word ptr [ESI + 0x49b]
0048D4E0  42                        INC EDX
0048D4E1  6A 00                     PUSH 0x0
0048D4E3  52                        PUSH EDX
0048D4E4  33 D2                     XOR EDX,EDX
0048D4E6  66 8B 56 32               MOV DX,word ptr [ESI + 0x32]
0048D4EA  50                        PUSH EAX
0048D4EB  51                        PUSH ECX
0048D4EC  52                        PUSH EDX
0048D4ED  8B CB                     MOV ECX,EBX
0048D4EF  E8 86 6B F7 FF            CALL 0x0040407a
0048D4F4  0F BF 8E A7 04 00 00      MOVSX ECX,word ptr [ESI + 0x4a7]
0048D4FB  0F BF 96 A5 04 00 00      MOVSX EDX,word ptr [ESI + 0x4a5]
0048D502  8B F8                     MOV EDI,EAX
0048D504  6A 00                     PUSH 0x0
0048D506  0F BF 86 A9 04 00 00      MOVSX EAX,word ptr [ESI + 0x4a9]
0048D50D  40                        INC EAX
0048D50E  50                        PUSH EAX
0048D50F  33 C0                     XOR EAX,EAX
0048D511  66 8B 46 32               MOV AX,word ptr [ESI + 0x32]
0048D515  51                        PUSH ECX
0048D516  52                        PUSH EDX
0048D517  50                        PUSH EAX
0048D518  8B CB                     MOV ECX,EBX
0048D51A  E8 5B 6B F7 FF            CALL 0x0040407a
0048D51F  83 FF FC                  CMP EDI,-0x4
0048D522  74 5F                     JZ 0x0048d583
0048D524  83 F8 FC                  CMP EAX,-0x4
0048D527  0F 84 86 00 00 00         JZ 0x0048d5b3
0048D52D  8D 0C 38                  LEA ECX,[EAX + EDI*0x1]
0048D530  8D 04 BF                  LEA EAX,[EDI + EDI*0x4]
0048D533  BF 64 00 00 00            MOV EDI,0x64
0048D538  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0048D53B  C1 E0 02                  SHL EAX,0x2
0048D53E  99                        CDQ
0048D53F  F7 F9                     IDIV ECX
0048D541  8B 96 D6 07 00 00         MOV EDX,dword ptr [ESI + 0x7d6]
0048D547  8B 8E D2 07 00 00         MOV ECX,dword ptr [ESI + 0x7d2]
0048D54D  2B F8                     SUB EDI,EAX
0048D54F  8B 86 DA 07 00 00         MOV EAX,dword ptr [ESI + 0x7da]
0048D555  03 C2                     ADD EAX,EDX
0048D557  03 C1                     ADD EAX,ECX
0048D559  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0048D55C  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
0048D55F  B8 67 66 66 66            MOV EAX,0x66666667
0048D564  C1 E1 02                  SHL ECX,0x2
0048D567  F7 E9                     IMUL ECX
0048D569  C1 FA 04                  SAR EDX,0x4
0048D56C  8B C2                     MOV EAX,EDX
0048D56E  C1 E8 1F                  SHR EAX,0x1f
0048D571  03 D0                     ADD EDX,EAX
0048D573  33 C0                     XOR EAX,EAX
0048D575  3B D7                     CMP EDX,EDI
0048D577  5F                        POP EDI
0048D578  0F 9E C0                  SETLE AL
0048D57B  48                        DEC EAX
0048D57C  5E                        POP ESI
0048D57D  83 E0 06                  AND EAX,0x6
0048D580  5B                        POP EBX
0048D581  40                        INC EAX
0048D582  C3                        RET
LAB_0048d583:
0048D583  83 F8 FC                  CMP EAX,-0x4
0048D586  75 06                     JNZ 0x0048d58e
0048D588  5F                        POP EDI
0048D589  5E                        POP ESI
0048D58A  33 C0                     XOR EAX,EAX
0048D58C  5B                        POP EBX
0048D58D  C3                        RET
LAB_0048d58e:
0048D58E  8B 8E DA 07 00 00         MOV ECX,dword ptr [ESI + 0x7da]
0048D594  8B 9E D6 07 00 00         MOV EBX,dword ptr [ESI + 0x7d6]
0048D59A  8B BE D2 07 00 00         MOV EDI,dword ptr [ESI + 0x7d2]
0048D5A0  03 CB                     ADD ECX,EBX
0048D5A2  03 CF                     ADD ECX,EDI
0048D5A4  33 C0                     XOR EAX,EAX
0048D5A6  85 C9                     TEST ECX,ECX
0048D5A8  0F 9E C0                  SETLE AL
0048D5AB  48                        DEC EAX
0048D5AC  5F                        POP EDI
0048D5AD  5E                        POP ESI
0048D5AE  83 E0 07                  AND EAX,0x7
0048D5B1  5B                        POP EBX
0048D5B2  C3                        RET
LAB_0048d5b3:
0048D5B3  8B 96 DA 07 00 00         MOV EDX,dword ptr [ESI + 0x7da]
0048D5B9  8B 9E D6 07 00 00         MOV EBX,dword ptr [ESI + 0x7d6]
0048D5BF  8B BE D2 07 00 00         MOV EDI,dword ptr [ESI + 0x7d2]
0048D5C5  03 D3                     ADD EDX,EBX
0048D5C7  03 D7                     ADD EDX,EDI
0048D5C9  33 C0                     XOR EAX,EAX
0048D5CB  83 FA 28                  CMP EDX,0x28
0048D5CE  5F                        POP EDI
0048D5CF  5E                        POP ESI
0048D5D0  5B                        POP EBX
0048D5D1  0F 9C C0                  SETL AL
0048D5D4  C3                        RET
