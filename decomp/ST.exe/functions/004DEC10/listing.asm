FUN_004dec10:
004DEC10  56                        PUSH ESI
004DEC11  8B F1                     MOV ESI,ECX
004DEC13  8B 86 D0 04 00 00         MOV EAX,dword ptr [ESI + 0x4d0]
004DEC19  83 F8 03                  CMP EAX,0x3
004DEC1C  0F 87 E2 01 00 00         JA 0x004dee04
switchD_004dec22::switchD:
004DEC22  FF 24 85 08 EE 4D 00      JMP dword ptr [EAX*0x4 + 0x4dee08]
switchD_004dec22::caseD_0:
004DEC29  6A 0E                     PUSH 0xe
004DEC2B  8D 8E D5 01 00 00         LEA ECX,[ESI + 0x1d5]
004DEC31  E8 79 56 F2 FF            CALL 0x004042af
004DEC36  8B 8E F5 01 00 00         MOV ECX,dword ptr [ESI + 0x1f5]
004DEC3C  3B 81 0C 02 00 00         CMP EAX,dword ptr [ECX + 0x20c]
004DEC42  0F 85 BC 01 00 00         JNZ 0x004dee04
004DEC48  6A 00                     PUSH 0x0
004DEC4A  8B CE                     MOV ECX,ESI
004DEC4C  C7 86 D0 04 00 00 01 00 00 00  MOV dword ptr [ESI + 0x4d0],0x1
004DEC56  E8 9C 40 F2 FF            CALL 0x00402cf7
004DEC5B  8B CE                     MOV ECX,ESI
004DEC5D  E8 E8 2E F2 FF            CALL 0x00401b4a
004DEC62  8B 16                     MOV EDX,dword ptr [ESI]
004DEC64  68 40 03 00 00            PUSH 0x340
004DEC69  6A 04                     PUSH 0x4
004DEC6B  8B CE                     MOV ECX,ESI
004DEC6D  FF 92 90 00 00 00         CALL dword ptr [EDX + 0x90]
004DEC73  33 C0                     XOR EAX,EAX
004DEC75  5E                        POP ESI
004DEC76  C3                        RET
switchD_004dec22::caseD_1:
004DEC77  8B 86 D4 04 00 00         MOV EAX,dword ptr [ESI + 0x4d4]
004DEC7D  85 C0                     TEST EAX,EAX
004DEC7F  0F 85 7F 01 00 00         JNZ 0x004dee04
004DEC85  6A 0E                     PUSH 0xe
004DEC87  8D 8E D5 01 00 00         LEA ECX,[ESI + 0x1d5]
004DEC8D  E8 1D 56 F2 FF            CALL 0x004042af
004DEC92  8B 8E F5 01 00 00         MOV ECX,dword ptr [ESI + 0x1f5]
004DEC98  3B 81 0C 02 00 00         CMP EAX,dword ptr [ECX + 0x20c]
004DEC9E  0F 85 60 01 00 00         JNZ 0x004dee04
004DECA4  6A 00                     PUSH 0x0
004DECA6  8B CE                     MOV ECX,ESI
004DECA8  C7 86 D0 04 00 00 03 00 00 00  MOV dword ptr [ESI + 0x4d0],0x3
004DECB2  E8 40 40 F2 FF            CALL 0x00402cf7
004DECB7  8B CE                     MOV ECX,ESI
004DECB9  E8 75 6D F2 FF            CALL 0x00405a33
004DECBE  8B 16                     MOV EDX,dword ptr [ESI]
004DECC0  68 41 03 00 00            PUSH 0x341
004DECC5  6A 04                     PUSH 0x4
004DECC7  8B CE                     MOV ECX,ESI
004DECC9  FF 92 90 00 00 00         CALL dword ptr [EDX + 0x90]
004DECCF  33 C0                     XOR EAX,EAX
004DECD1  5E                        POP ESI
004DECD2  C3                        RET
switchD_004dec22::caseD_2:
004DECD3  8B 46 18                  MOV EAX,dword ptr [ESI + 0x18]
004DECD6  8A 4E 24                  MOV CL,byte ptr [ESI + 0x24]
004DECD9  57                        PUSH EDI
004DECDA  50                        PUSH EAX
004DECDB  51                        PUSH ECX
004DECDC  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004DECE2  BF 2D 00 00 00            MOV EDI,0x2d
004DECE7  E8 AC 3F F2 FF            CALL 0x00402c98
004DECEC  85 C0                     TEST EAX,EAX
004DECEE  75 05                     JNZ 0x004decf5
004DECF0  BF B4 00 00 00            MOV EDI,0xb4
LAB_004decf5:
004DECF5  A1 38 2A 80 00            MOV EAX,[0x00802a38]
004DECFA  8B 96 D8 04 00 00         MOV EDX,dword ptr [ESI + 0x4d8]
004DED00  03 D7                     ADD EDX,EDI
004DED02  5F                        POP EDI
004DED03  39 90 E4 00 00 00         CMP dword ptr [EAX + 0xe4],EDX
004DED09  0F 82 F5 00 00 00         JC 0x004dee04
004DED0F  8B 96 D4 04 00 00         MOV EDX,dword ptr [ESI + 0x4d4]
004DED15  83 C2 32                  ADD EDX,0x32
004DED18  8B C2                     MOV EAX,EDX
004DED1A  89 96 D4 04 00 00         MOV dword ptr [ESI + 0x4d4],EDX
004DED20  3D 88 13 00 00            CMP EAX,0x1388
004DED25  7C 52                     JL 0x004ded79
004DED27  6A 00                     PUSH 0x0
004DED29  8B CE                     MOV ECX,ESI
004DED2B  C7 86 D4 04 00 00 88 13 00 00  MOV dword ptr [ESI + 0x4d4],0x1388
004DED35  C7 86 D0 04 00 00 00 00 00 00  MOV dword ptr [ESI + 0x4d0],0x0
004DED3F  E8 B3 3F F2 FF            CALL 0x00402cf7
004DED44  8B 16                     MOV EDX,dword ptr [ESI]
004DED46  8B CE                     MOV ECX,ESI
004DED48  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
004DED4B  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004DED51  50                        PUSH EAX
004DED52  8A 46 24                  MOV AL,byte ptr [ESI + 0x24]
004DED55  50                        PUSH EAX
004DED56  E8 B3 41 F2 FF            CALL 0x00402f0e
004DED5B  8B 4E 10                  MOV ECX,dword ptr [ESI + 0x10]
004DED5E  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
004DED61  33 D2                     XOR EDX,EDX
004DED63  8A 91 2D 11 00 00         MOV DL,byte ptr [ECX + 0x112d]
004DED69  3B C2                     CMP EAX,EDX
004DED6B  75 0C                     JNZ 0x004ded79
004DED6D  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004DED73  50                        PUSH EAX
004DED74  E8 14 5E F2 FF            CALL 0x00404b8d
LAB_004ded79:
004DED79  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
004DED7F  33 C0                     XOR EAX,EAX
004DED81  8B 91 E4 00 00 00         MOV EDX,dword ptr [ECX + 0xe4]
004DED87  89 96 D8 04 00 00         MOV dword ptr [ESI + 0x4d8],EDX
004DED8D  5E                        POP ESI
004DED8E  C3                        RET
switchD_004dec22::caseD_3:
004DED8F  6A 0E                     PUSH 0xe
004DED91  8D 8E D5 01 00 00         LEA ECX,[ESI + 0x1d5]
004DED97  E8 13 55 F2 FF            CALL 0x004042af
004DED9C  8B 8E F5 01 00 00         MOV ECX,dword ptr [ESI + 0x1f5]
004DEDA2  3B 81 0C 02 00 00         CMP EAX,dword ptr [ECX + 0x20c]
004DEDA8  75 5A                     JNZ 0x004dee04
004DEDAA  6A 00                     PUSH 0x0
004DEDAC  8B CE                     MOV ECX,ESI
004DEDAE  C7 86 D0 04 00 00 02 00 00 00  MOV dword ptr [ESI + 0x4d0],0x2
004DEDB8  E8 3A 3F F2 FF            CALL 0x00402cf7
004DEDBD  8B 15 38 2A 80 00         MOV EDX,dword ptr [0x00802a38]
004DEDC3  8B CE                     MOV ECX,ESI
004DEDC5  8B 82 E4 00 00 00         MOV EAX,dword ptr [EDX + 0xe4]
004DEDCB  8B 16                     MOV EDX,dword ptr [ESI]
004DEDCD  89 86 D8 04 00 00         MOV dword ptr [ESI + 0x4d8],EAX
004DEDD3  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
004DEDD6  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004DEDDC  50                        PUSH EAX
004DEDDD  8A 46 24                  MOV AL,byte ptr [ESI + 0x24]
004DEDE0  50                        PUSH EAX
004DEDE1  E8 53 70 F2 FF            CALL 0x00405e39
004DEDE6  8B 4E 10                  MOV ECX,dword ptr [ESI + 0x10]
004DEDE9  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
004DEDEC  33 D2                     XOR EDX,EDX
004DEDEE  8A 91 2D 11 00 00         MOV DL,byte ptr [ECX + 0x112d]
004DEDF4  3B C2                     CMP EAX,EDX
004DEDF6  75 0C                     JNZ 0x004dee04
004DEDF8  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004DEDFE  50                        PUSH EAX
004DEDFF  E8 89 5D F2 FF            CALL 0x00404b8d
switchD_004dec22::default:
004DEE04  33 C0                     XOR EAX,EAX
004DEE06  5E                        POP ESI
004DEE07  C3                        RET
