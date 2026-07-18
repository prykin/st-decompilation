FUN_0052b990:
0052B990  55                        PUSH EBP
0052B991  8B EC                     MOV EBP,ESP
0052B993  83 EC 08                  SUB ESP,0x8
0052B996  A0 4E 87 80 00            MOV AL,[0x0080874e]
0052B99B  53                        PUSH EBX
0052B99C  3C 03                     CMP AL,0x3
0052B99E  56                        PUSH ESI
0052B99F  0F 94 C0                  SETZ AL
0052B9A2  48                        DEC EAX
0052B9A3  8B F1                     MOV ESI,ECX
0052B9A5  24 F9                     AND AL,0xf9
0052B9A7  57                        PUSH EDI
0052B9A8  8B 4E 58                  MOV ECX,dword ptr [ESI + 0x58]
0052B9AB  8B 56 34                  MOV EDX,dword ptr [ESI + 0x34]
0052B9AE  83 C0 14                  ADD EAX,0x14
0052B9B1  88 45 F8                  MOV byte ptr [EBP + -0x8],AL
0052B9B4  8B 46 5C                  MOV EAX,dword ptr [ESI + 0x5c]
0052B9B7  50                        PUSH EAX
0052B9B8  8B 46 30                  MOV EAX,dword ptr [ESI + 0x30]
0052B9BB  51                        PUSH ECX
0052B9BC  8B 0D A8 75 80 00         MOV ECX,dword ptr [0x008075a8]
0052B9C2  52                        PUSH EDX
0052B9C3  50                        PUSH EAX
0052B9C4  51                        PUSH ECX
0052B9C5  E8 B6 A5 18 00            CALL 0x006b5f80
0052B9CA  8A 86 A4 00 00 00         MOV AL,byte ptr [ESI + 0xa4]
0052B9D0  84 C0                     TEST AL,AL
0052B9D2  0F 84 BF 00 00 00         JZ 0x0052ba97
0052B9D8  8A 86 A2 00 00 00         MOV AL,byte ptr [ESI + 0xa2]
0052B9DE  B3 01                     MOV BL,0x1
0052B9E0  3A C3                     CMP AL,BL
0052B9E2  88 5D FC                  MOV byte ptr [EBP + -0x4],BL
0052B9E5  72 4D                     JC 0x0052ba34
LAB_0052b9e7:
0052B9E7  8A 15 4E 87 80 00         MOV DL,byte ptr [0x0080874e]
0052B9ED  8B 86 82 00 00 00         MOV EAX,dword ptr [ESI + 0x82]
0052B9F3  80 EA 03                  SUB DL,0x3
0052B9F6  F6 DA                     NEG DL
0052B9F8  1B D2                     SBB EDX,EDX
0052B9FA  83 E2 02                  AND EDX,0x2
0052B9FD  42                        INC EDX
0052B9FE  52                        PUSH EDX
0052B9FF  50                        PUSH EAX
0052BA00  E8 9B F9 1D 00            CALL 0x0070b3a0
0052BA05  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0052BA08  8B 4E 34                  MOV ECX,dword ptr [ESI + 0x34]
0052BA0B  50                        PUSH EAX
0052BA0C  8B 46 30                  MOV EAX,dword ptr [ESI + 0x30]
0052BA0F  81 E2 FF 00 00 00         AND EDX,0xff
0052BA15  6A 01                     PUSH 0x1
0052BA17  51                        PUSH ECX
0052BA18  8D 4C 90 FC               LEA ECX,[EAX + EDX*0x4 + -0x4]
0052BA1C  51                        PUSH ECX
0052BA1D  E8 16 7D ED FF            CALL 0x00403738
0052BA22  8A 86 A2 00 00 00         MOV AL,byte ptr [ESI + 0xa2]
0052BA28  83 C4 18                  ADD ESP,0x18
0052BA2B  FE C3                     INC BL
0052BA2D  3A D8                     CMP BL,AL
0052BA2F  88 5D FC                  MOV byte ptr [EBP + -0x4],BL
0052BA32  76 B3                     JBE 0x0052b9e7
LAB_0052ba34:
0052BA34  8A 86 A2 00 00 00         MOV AL,byte ptr [ESI + 0xa2]
0052BA3A  8A 4D F8                  MOV CL,byte ptr [EBP + -0x8]
0052BA3D  FE C0                     INC AL
0052BA3F  3A C1                     CMP AL,CL
0052BA41  88 45 FC                  MOV byte ptr [EBP + -0x4],AL
0052BA44  0F 87 09 01 00 00         JA 0x0052bb53
0052BA4A  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0052BA4D  8B 7D F8                  MOV EDI,dword ptr [EBP + -0x8]
0052BA50  25 FF 00 00 00            AND EAX,0xff
0052BA55  81 E7 FF 00 00 00         AND EDI,0xff
0052BA5B  2B F8                     SUB EDI,EAX
0052BA5D  8D 1C 85 00 00 00 00      LEA EBX,[EAX*0x4 + 0x0]
0052BA64  47                        INC EDI
LAB_0052ba65:
0052BA65  8B 96 82 00 00 00         MOV EDX,dword ptr [ESI + 0x82]
0052BA6B  6A 00                     PUSH 0x0
0052BA6D  52                        PUSH EDX
0052BA6E  E8 2D F9 1D 00            CALL 0x0070b3a0
0052BA73  8B 4E 30                  MOV ECX,dword ptr [ESI + 0x30]
0052BA76  50                        PUSH EAX
0052BA77  8B 46 34                  MOV EAX,dword ptr [ESI + 0x34]
0052BA7A  6A 01                     PUSH 0x1
0052BA7C  8D 54 19 FC               LEA EDX,[ECX + EBX*0x1 + -0x4]
0052BA80  50                        PUSH EAX
0052BA81  52                        PUSH EDX
0052BA82  E8 B1 7C ED FF            CALL 0x00403738
0052BA87  83 C4 18                  ADD ESP,0x18
0052BA8A  83 C3 04                  ADD EBX,0x4
0052BA8D  4F                        DEC EDI
0052BA8E  75 D5                     JNZ 0x0052ba65
0052BA90  5F                        POP EDI
0052BA91  5E                        POP ESI
0052BA92  5B                        POP EBX
0052BA93  8B E5                     MOV ESP,EBP
0052BA95  5D                        POP EBP
0052BA96  C3                        RET
LAB_0052ba97:
0052BA97  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
0052BA9A  33 C0                     XOR EAX,EAX
0052BA9C  8A 86 A2 00 00 00         MOV AL,byte ptr [ESI + 0xa2]
0052BAA2  81 E3 FF 00 00 00         AND EBX,0xff
0052BAA8  8B CB                     MOV ECX,EBX
0052BAAA  C6 45 FC 01               MOV byte ptr [EBP + -0x4],0x1
0052BAAE  2B C8                     SUB ECX,EAX
0052BAB0  83 F9 01                  CMP ECX,0x1
0052BAB3  7C 4B                     JL 0x0052bb00
0052BAB5  BF 01 00 00 00            MOV EDI,0x1
LAB_0052baba:
0052BABA  8B 96 82 00 00 00         MOV EDX,dword ptr [ESI + 0x82]
0052BAC0  6A 00                     PUSH 0x0
0052BAC2  52                        PUSH EDX
0052BAC3  E8 D8 F8 1D 00            CALL 0x0070b3a0
0052BAC8  8B 4E 30                  MOV ECX,dword ptr [ESI + 0x30]
0052BACB  50                        PUSH EAX
0052BACC  8B 46 34                  MOV EAX,dword ptr [ESI + 0x34]
0052BACF  6A 01                     PUSH 0x1
0052BAD1  8D 54 B9 FC               LEA EDX,[ECX + EDI*0x4 + -0x4]
0052BAD5  50                        PUSH EAX
0052BAD6  52                        PUSH EDX
0052BAD7  E8 5C 7C ED FF            CALL 0x00403738
0052BADC  8A 4D FC                  MOV CL,byte ptr [EBP + -0x4]
0052BADF  83 C4 18                  ADD ESP,0x18
0052BAE2  FE C1                     INC CL
0052BAE4  33 C0                     XOR EAX,EAX
0052BAE6  8A 86 A2 00 00 00         MOV AL,byte ptr [ESI + 0xa2]
0052BAEC  88 4D FC                  MOV byte ptr [EBP + -0x4],CL
0052BAEF  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
0052BAF2  8B CB                     MOV ECX,EBX
0052BAF4  81 E7 FF 00 00 00         AND EDI,0xff
0052BAFA  2B C8                     SUB ECX,EAX
0052BAFC  3B F9                     CMP EDI,ECX
0052BAFE  7E BA                     JLE 0x0052baba
LAB_0052bb00:
0052BB00  8A 4D F8                  MOV CL,byte ptr [EBP + -0x8]
0052BB03  8A 96 A2 00 00 00         MOV DL,byte ptr [ESI + 0xa2]
0052BB09  8A C1                     MOV AL,CL
0052BB0B  2A C2                     SUB AL,DL
0052BB0D  FE C0                     INC AL
0052BB0F  3A C1                     CMP AL,CL
0052BB11  88 45 FC                  MOV byte ptr [EBP + -0x4],AL
0052BB14  77 3D                     JA 0x0052bb53
0052BB16  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0052BB19  25 FF 00 00 00            AND EAX,0xff
0052BB1E  2B D8                     SUB EBX,EAX
0052BB20  8D 3C 85 00 00 00 00      LEA EDI,[EAX*0x4 + 0x0]
0052BB27  43                        INC EBX
LAB_0052bb28:
0052BB28  8B 96 82 00 00 00         MOV EDX,dword ptr [ESI + 0x82]
0052BB2E  6A 04                     PUSH 0x4
0052BB30  52                        PUSH EDX
0052BB31  E8 6A F8 1D 00            CALL 0x0070b3a0
0052BB36  8B 4E 30                  MOV ECX,dword ptr [ESI + 0x30]
0052BB39  50                        PUSH EAX
0052BB3A  8B 46 34                  MOV EAX,dword ptr [ESI + 0x34]
0052BB3D  6A 01                     PUSH 0x1
0052BB3F  8D 54 39 FC               LEA EDX,[ECX + EDI*0x1 + -0x4]
0052BB43  50                        PUSH EAX
0052BB44  52                        PUSH EDX
0052BB45  E8 EE 7B ED FF            CALL 0x00403738
0052BB4A  83 C4 18                  ADD ESP,0x18
0052BB4D  83 C7 04                  ADD EDI,0x4
0052BB50  4B                        DEC EBX
0052BB51  75 D5                     JNZ 0x0052bb28
LAB_0052bb53:
0052BB53  5F                        POP EDI
0052BB54  5E                        POP ESI
0052BB55  5B                        POP EBX
0052BB56  8B E5                     MOV ESP,EBP
0052BB58  5D                        POP EBP
0052BB59  C3                        RET
