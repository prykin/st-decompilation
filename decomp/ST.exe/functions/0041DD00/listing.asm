FUN_0041dd00:
0041DD00  55                        PUSH EBP
0041DD01  8B EC                     MOV EBP,ESP
0041DD03  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0041DD06  56                        PUSH ESI
0041DD07  8B F1                     MOV ESI,ECX
0041DD09  3B 86 1D 02 00 00         CMP EAX,dword ptr [ESI + 0x21d]
0041DD0F  0F 84 C0 05 00 00         JZ 0x0041e2d5
0041DD15  83 F8 01                  CMP EAX,0x1
0041DD18  89 86 1D 02 00 00         MOV dword ptr [ESI + 0x21d],EAX
0041DD1E  0F 85 E6 03 00 00         JNZ 0x0041e10a
0041DD24  8B CE                     MOV ECX,ESI
0041DD26  E8 F3 5A FE FF            CALL 0x0040381e
0041DD2B  8B 86 05 01 00 00         MOV EAX,dword ptr [ESI + 0x105]
0041DD31  85 C0                     TEST EAX,EAX
0041DD33  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
0041DD36  0F 8E 80 00 00 00         JLE 0x0041ddbc
0041DD3C  8B 4E 24                  MOV ECX,dword ptr [ESI + 0x24]
0041DD3F  33 C0                     XOR EAX,EAX
0041DD41  A0 4D 87 80 00            MOV AL,[0x0080874d]
0041DD46  3B C8                     CMP ECX,EAX
0041DD48  75 72                     JNZ 0x0041ddbc
0041DD4A  83 7E 20 14               CMP dword ptr [ESI + 0x20],0x14
0041DD4E  74 6C                     JZ 0x0041ddbc
0041DD50  8B 4E 18                  MOV ECX,dword ptr [ESI + 0x18]
0041DD53  33 D2                     XOR EDX,EDX
0041DD55  DB 45 08                  FILD dword ptr [EBP + 0x8]
0041DD58  66 8B 56 18               MOV DX,word ptr [ESI + 0x18]
0041DD5C  C1 E9 10                  SHR ECX,0x10
0041DD5F  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
0041DD65  0F BF 46 43               MOVSX EAX,word ptr [ESI + 0x43]
0041DD69  D8 05 F4 04 79 00         FADD float ptr [0x007904f4]
0041DD6F  81 E1 FF 00 00 00         AND ECX,0xff
0041DD75  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
0041DD78  C1 E1 10                  SHL ECX,0x10
0041DD7B  0B CA                     OR ECX,EDX
0041DD7D  51                        PUSH ECX
0041DD7E  6A 16                     PUSH 0x16
0041DD80  51                        PUSH ECX
0041DD81  D9 1C 24                  FSTP float ptr [ESP]
0041DD84  DB 45 08                  FILD dword ptr [EBP + 0x8]
0041DD87  51                        PUSH ECX
0041DD88  0F BF 4E 41               MOVSX ECX,word ptr [ESI + 0x41]
0041DD8C  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
0041DD92  89 4D 08                  MOV dword ptr [EBP + 0x8],ECX
0041DD95  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
0041DD9B  D9 1C 24                  FSTP float ptr [ESP]
0041DD9E  DB 45 08                  FILD dword ptr [EBP + 0x8]
0041DDA1  51                        PUSH ECX
0041DDA2  8B 8E 11 02 00 00         MOV ECX,dword ptr [ESI + 0x211]
0041DDA8  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
0041DDAE  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
0041DDB4  D9 1C 24                  FSTP float ptr [ESP]
0041DDB7  E8 54 89 2C 00            CALL 0x006e6710
LAB_0041ddbc:
0041DDBC  8B 86 09 01 00 00         MOV EAX,dword ptr [ESI + 0x109]
0041DDC2  85 C0                     TEST EAX,EAX
0041DDC4  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
0041DDC7  7E 7D                     JLE 0x0041de46
0041DDC9  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
0041DDCC  33 D2                     XOR EDX,EDX
0041DDCE  8A 15 4D 87 80 00         MOV DL,byte ptr [0x0080874d]
0041DDD4  3B C2                     CMP EAX,EDX
0041DDD6  75 6E                     JNZ 0x0041de46
0041DDD8  8B 46 18                  MOV EAX,dword ptr [ESI + 0x18]
0041DDDB  33 C9                     XOR ECX,ECX
0041DDDD  DB 45 08                  FILD dword ptr [EBP + 0x8]
0041DDE0  66 8B 4E 18               MOV CX,word ptr [ESI + 0x18]
0041DDE4  C1 E8 10                  SHR EAX,0x10
0041DDE7  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
0041DDED  25 FF 00 00 00            AND EAX,0xff
0041DDF2  0F BF 56 43               MOVSX EDX,word ptr [ESI + 0x43]
0041DDF6  D8 05 F4 04 79 00         FADD float ptr [0x007904f4]
0041DDFC  80 CC 01                  OR AH,0x1
0041DDFF  89 55 08                  MOV dword ptr [EBP + 0x8],EDX
0041DE02  C1 E0 10                  SHL EAX,0x10
0041DE05  0B C1                     OR EAX,ECX
0041DE07  50                        PUSH EAX
0041DE08  6A 10                     PUSH 0x10
0041DE0A  51                        PUSH ECX
0041DE0B  D9 1C 24                  FSTP float ptr [ESP]
0041DE0E  DB 45 08                  FILD dword ptr [EBP + 0x8]
0041DE11  0F BF 46 41               MOVSX EAX,word ptr [ESI + 0x41]
0041DE15  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
0041DE1B  51                        PUSH ECX
0041DE1C  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
0041DE1F  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
0041DE25  D9 1C 24                  FSTP float ptr [ESP]
0041DE28  DB 45 08                  FILD dword ptr [EBP + 0x8]
0041DE2B  51                        PUSH ECX
0041DE2C  8B 8E 11 02 00 00         MOV ECX,dword ptr [ESI + 0x211]
0041DE32  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
0041DE38  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
0041DE3E  D9 1C 24                  FSTP float ptr [ESP]
0041DE41  E8 CA 88 2C 00            CALL 0x006e6710
LAB_0041de46:
0041DE46  8B 86 0D 01 00 00         MOV EAX,dword ptr [ESI + 0x10d]
0041DE4C  85 C0                     TEST EAX,EAX
0041DE4E  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
0041DE51  7E 7E                     JLE 0x0041ded1
0041DE53  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
0041DE56  33 C9                     XOR ECX,ECX
0041DE58  8A 0D 4D 87 80 00         MOV CL,byte ptr [0x0080874d]
0041DE5E  3B C1                     CMP EAX,ECX
0041DE60  75 6F                     JNZ 0x0041ded1
0041DE62  8B 56 18                  MOV EDX,dword ptr [ESI + 0x18]
0041DE65  33 C0                     XOR EAX,EAX
0041DE67  DB 45 08                  FILD dword ptr [EBP + 0x8]
0041DE6A  66 8B 46 18               MOV AX,word ptr [ESI + 0x18]
0041DE6E  C1 EA 10                  SHR EDX,0x10
0041DE71  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
0041DE77  81 E2 FF 00 00 00         AND EDX,0xff
0041DE7D  80 CE 02                  OR DH,0x2
0041DE80  D8 05 F4 04 79 00         FADD float ptr [0x007904f4]
0041DE86  C1 E2 10                  SHL EDX,0x10
0041DE89  0B D0                     OR EDX,EAX
0041DE8B  52                        PUSH EDX
0041DE8C  6A 28                     PUSH 0x28
0041DE8E  51                        PUSH ECX
0041DE8F  0F BF 4E 43               MOVSX ECX,word ptr [ESI + 0x43]
0041DE93  D9 1C 24                  FSTP float ptr [ESP]
0041DE96  89 4D 08                  MOV dword ptr [EBP + 0x8],ECX
0041DE99  51                        PUSH ECX
0041DE9A  DB 45 08                  FILD dword ptr [EBP + 0x8]
0041DE9D  0F BF 56 41               MOVSX EDX,word ptr [ESI + 0x41]
0041DEA1  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
0041DEA7  89 55 08                  MOV dword ptr [EBP + 0x8],EDX
0041DEAA  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
0041DEB0  D9 1C 24                  FSTP float ptr [ESP]
0041DEB3  DB 45 08                  FILD dword ptr [EBP + 0x8]
0041DEB6  51                        PUSH ECX
0041DEB7  8B 8E 11 02 00 00         MOV ECX,dword ptr [ESI + 0x211]
0041DEBD  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
0041DEC3  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
0041DEC9  D9 1C 24                  FSTP float ptr [ESP]
0041DECC  E8 3F 88 2C 00            CALL 0x006e6710
LAB_0041ded1:
0041DED1  8B 86 11 01 00 00         MOV EAX,dword ptr [ESI + 0x111]
0041DED7  85 C0                     TEST EAX,EAX
0041DED9  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
0041DEDC  7E 7D                     JLE 0x0041df5b
0041DEDE  8B 4E 24                  MOV ECX,dword ptr [ESI + 0x24]
0041DEE1  33 C0                     XOR EAX,EAX
0041DEE3  A0 4D 87 80 00            MOV AL,[0x0080874d]
0041DEE8  3B C8                     CMP ECX,EAX
0041DEEA  75 6F                     JNZ 0x0041df5b
0041DEEC  8B 4E 18                  MOV ECX,dword ptr [ESI + 0x18]
0041DEEF  33 D2                     XOR EDX,EDX
0041DEF1  DB 45 08                  FILD dword ptr [EBP + 0x8]
0041DEF4  66 8B 56 18               MOV DX,word ptr [ESI + 0x18]
0041DEF8  C1 E9 10                  SHR ECX,0x10
0041DEFB  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
0041DF01  81 E1 FF 00 00 00         AND ECX,0xff
0041DF07  0F BF 46 43               MOVSX EAX,word ptr [ESI + 0x43]
0041DF0B  D8 05 F4 04 79 00         FADD float ptr [0x007904f4]
0041DF11  80 CD 03                  OR CH,0x3
0041DF14  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
0041DF17  C1 E1 10                  SHL ECX,0x10
0041DF1A  0B CA                     OR ECX,EDX
0041DF1C  51                        PUSH ECX
0041DF1D  6A 22                     PUSH 0x22
0041DF1F  51                        PUSH ECX
0041DF20  D9 1C 24                  FSTP float ptr [ESP]
0041DF23  DB 45 08                  FILD dword ptr [EBP + 0x8]
0041DF26  51                        PUSH ECX
0041DF27  0F BF 4E 41               MOVSX ECX,word ptr [ESI + 0x41]
0041DF2B  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
0041DF31  89 4D 08                  MOV dword ptr [EBP + 0x8],ECX
0041DF34  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
0041DF3A  D9 1C 24                  FSTP float ptr [ESP]
0041DF3D  DB 45 08                  FILD dword ptr [EBP + 0x8]
0041DF40  51                        PUSH ECX
0041DF41  8B 8E 11 02 00 00         MOV ECX,dword ptr [ESI + 0x211]
0041DF47  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
0041DF4D  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
0041DF53  D9 1C 24                  FSTP float ptr [ESP]
0041DF56  E8 B5 87 2C 00            CALL 0x006e6710
LAB_0041df5b:
0041DF5B  8B 16                     MOV EDX,dword ptr [ESI]
0041DF5D  8B CE                     MOV ECX,ESI
0041DF5F  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
0041DF62  83 C0 C4                  ADD EAX,-0x3c
0041DF65  83 F8 37                  CMP EAX,0x37
0041DF68  0F 87 67 03 00 00         JA 0x0041e2d5
0041DF6E  33 C9                     XOR ECX,ECX
0041DF70  8A 88 EC E2 41 00         MOV CL,byte ptr [EAX + 0x41e2ec]
switchD_0041df76::switchD:
0041DF76  FF 24 8D DC E2 41 00      JMP dword ptr [ECX*0x4 + 0x41e2dc]
switchD_0041df76::caseD_43:
0041DF7D  8B 56 18                  MOV EDX,dword ptr [ESI + 0x18]
0041DF80  8B 0D F0 50 79 00         MOV ECX,dword ptr [0x007950f0]
0041DF86  C1 EA 10                  SHR EDX,0x10
0041DF89  81 E2 FF 00 00 00         AND EDX,0xff
0041DF8F  33 C0                     XOR EAX,EAX
0041DF91  66 8B 46 18               MOV AX,word ptr [ESI + 0x18]
0041DF95  80 CE 04                  OR DH,0x4
0041DF98  C1 E2 10                  SHL EDX,0x10
0041DF9B  0B D0                     OR EDX,EAX
0041DF9D  B8 79 19 8C 02            MOV EAX,0x28c1979
0041DFA2  52                        PUSH EDX
0041DFA3  F7 E9                     IMUL ECX
0041DFA5  D1 FA                     SAR EDX,0x1
0041DFA7  8B CA                     MOV ECX,EDX
0041DFA9  6A 2E                     PUSH 0x2e
0041DFAB  C1 E9 1F                  SHR ECX,0x1f
0041DFAE  03 D1                     ADD EDX,ECX
0041DFB0  51                        PUSH ECX
0041DFB1  89 55 08                  MOV dword ptr [EBP + 0x8],EDX
0041DFB4  DB 45 08                  FILD dword ptr [EBP + 0x8]
0041DFB7  0F BF 56 43               MOVSX EDX,word ptr [ESI + 0x43]
0041DFBB  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
0041DFC1  89 55 08                  MOV dword ptr [EBP + 0x8],EDX
0041DFC4  0F BF 46 41               MOVSX EAX,word ptr [ESI + 0x41]
0041DFC8  D8 05 F4 04 79 00         FADD float ptr [0x007904f4]
0041DFCE  D9 1C 24                  FSTP float ptr [ESP]
0041DFD1  DB 45 08                  FILD dword ptr [EBP + 0x8]
0041DFD4  51                        PUSH ECX
0041DFD5  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
0041DFD8  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
0041DFDE  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
0041DFE4  D9 1C 24                  FSTP float ptr [ESP]
0041DFE7  DB 45 08                  FILD dword ptr [EBP + 0x8]
LAB_0041dfea:
0041DFEA  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
0041DFF0  51                        PUSH ECX
0041DFF1  8B 8E 11 02 00 00         MOV ECX,dword ptr [ESI + 0x211]
0041DFF7  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
0041DFFD  D9 1C 24                  FSTP float ptr [ESP]
0041E000  E8 0B 87 2C 00            CALL 0x006e6710
0041E005  5E                        POP ESI
0041E006  5D                        POP EBP
0041E007  C2 04 00                  RET 0x4
switchD_0041df76::caseD_3c:
0041E00A  8B 4E 24                  MOV ECX,dword ptr [ESI + 0x24]
0041E00D  6A 42                     PUSH 0x42
0041E00F  51                        PUSH ECX
0041E010  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0041E016  E8 50 38 FE FF            CALL 0x0040186b
0041E01B  85 C0                     TEST EAX,EAX
0041E01D  7F 2E                     JG 0x0041e04d
0041E01F  8B 56 24                  MOV EDX,dword ptr [ESI + 0x24]
0041E022  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0041E028  6A 43                     PUSH 0x43
0041E02A  52                        PUSH EDX
0041E02B  E8 3B 38 FE FF            CALL 0x0040186b
0041E030  85 C0                     TEST EAX,EAX
0041E032  7F 19                     JG 0x0041e04d
0041E034  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
0041E037  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0041E03D  6A 63                     PUSH 0x63
0041E03F  50                        PUSH EAX
0041E040  E8 26 38 FE FF            CALL 0x0040186b
0041E045  85 C0                     TEST EAX,EAX
0041E047  0F 8E 88 02 00 00         JLE 0x0041e2d5
LAB_0041e04d:
0041E04D  8B 4E 18                  MOV ECX,dword ptr [ESI + 0x18]
0041E050  33 D2                     XOR EDX,EDX
0041E052  0F BF 46 43               MOVSX EAX,word ptr [ESI + 0x43]
0041E056  66 8B 56 18               MOV DX,word ptr [ESI + 0x18]
0041E05A  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
0041E05D  DB 45 08                  FILD dword ptr [EBP + 0x8]
0041E060  C1 E9 10                  SHR ECX,0x10
0041E063  81 E1 FF 00 00 00         AND ECX,0xff
0041E069  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
0041E06F  80 CD 05                  OR CH,0x5
0041E072  C1 E1 10                  SHL ECX,0x10
0041E075  0B CA                     OR ECX,EDX
0041E077  51                        PUSH ECX
0041E078  6A 2E                     PUSH 0x2e
0041E07A  68 00 00 96 42            PUSH 0x42960000
0041E07F  51                        PUSH ECX
0041E080  0F BF 4E 41               MOVSX ECX,word ptr [ESI + 0x41]
0041E084  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
0041E08A  89 4D 08                  MOV dword ptr [EBP + 0x8],ECX
0041E08D  D9 1C 24                  FSTP float ptr [ESP]
0041E090  DB 45 08                  FILD dword ptr [EBP + 0x8]
0041E093  E9 52 FF FF FF            JMP 0x0041dfea
switchD_0041df76::caseD_73:
0041E098  8B 56 18                  MOV EDX,dword ptr [ESI + 0x18]
0041E09B  8B 0D B0 51 79 00         MOV ECX,dword ptr [0x007951b0]
0041E0A1  C1 EA 10                  SHR EDX,0x10
0041E0A4  81 E2 FF 00 00 00         AND EDX,0xff
0041E0AA  33 C0                     XOR EAX,EAX
0041E0AC  66 8B 46 18               MOV AX,word ptr [ESI + 0x18]
0041E0B0  80 CE 06                  OR DH,0x6
0041E0B3  C1 E2 10                  SHL EDX,0x10
0041E0B6  0B D0                     OR EDX,EAX
0041E0B8  B8 79 19 8C 02            MOV EAX,0x28c1979
0041E0BD  52                        PUSH EDX
0041E0BE  F7 E9                     IMUL ECX
0041E0C0  D1 FA                     SAR EDX,0x1
0041E0C2  8B CA                     MOV ECX,EDX
0041E0C4  6A 2E                     PUSH 0x2e
0041E0C6  C1 E9 1F                  SHR ECX,0x1f
0041E0C9  03 D1                     ADD EDX,ECX
0041E0CB  51                        PUSH ECX
0041E0CC  89 55 08                  MOV dword ptr [EBP + 0x8],EDX
0041E0CF  DB 45 08                  FILD dword ptr [EBP + 0x8]
0041E0D2  0F BF 56 43               MOVSX EDX,word ptr [ESI + 0x43]
0041E0D6  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
0041E0DC  89 55 08                  MOV dword ptr [EBP + 0x8],EDX
0041E0DF  0F BF 46 41               MOVSX EAX,word ptr [ESI + 0x41]
0041E0E3  D8 05 F4 04 79 00         FADD float ptr [0x007904f4]
0041E0E9  D9 1C 24                  FSTP float ptr [ESP]
0041E0EC  DB 45 08                  FILD dword ptr [EBP + 0x8]
0041E0EF  51                        PUSH ECX
0041E0F0  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
0041E0F3  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
0041E0F9  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
0041E0FF  D9 1C 24                  FSTP float ptr [ESP]
0041E102  DB 45 08                  FILD dword ptr [EBP + 0x8]
0041E105  E9 E0 FE FF FF            JMP 0x0041dfea
LAB_0041e10a:
0041E10A  57                        PUSH EDI
0041E10B  8D BE D5 01 00 00         LEA EDI,[ESI + 0x1d5]
0041E111  6A 00                     PUSH 0x0
0041E113  8B CF                     MOV ECX,EDI
0041E115  E8 70 68 FE FF            CALL 0x0040498a
0041E11A  6A 0F                     PUSH 0xf
0041E11C  8B CF                     MOV ECX,EDI
0041E11E  E8 67 68 FE FF            CALL 0x0040498a
0041E123  8B 86 05 01 00 00         MOV EAX,dword ptr [ESI + 0x105]
0041E129  5F                        POP EDI
0041E12A  85 C0                     TEST EAX,EAX
0041E12C  7E 50                     JLE 0x0041e17e
0041E12E  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
0041E131  33 C9                     XOR ECX,ECX
0041E133  8A 0D 4D 87 80 00         MOV CL,byte ptr [0x0080874d]
0041E139  3B C1                     CMP EAX,ECX
0041E13B  75 41                     JNZ 0x0041e17e
0041E13D  8B 16                     MOV EDX,dword ptr [ESI]
0041E13F  8B CE                     MOV ECX,ESI
0041E141  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
0041E144  83 F8 0B                  CMP EAX,0xb
0041E147  74 12                     JZ 0x0041e15b
0041E149  8B 06                     MOV EAX,dword ptr [ESI]
0041E14B  8B CE                     MOV ECX,ESI
0041E14D  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
0041E150  83 F8 23                  CMP EAX,0x23
0041E153  74 06                     JZ 0x0041e15b
0041E155  83 7E 20 14               CMP dword ptr [ESI + 0x20],0x14
0041E159  74 23                     JZ 0x0041e17e
LAB_0041e15b:
0041E15B  8B 4E 18                  MOV ECX,dword ptr [ESI + 0x18]
0041E15E  33 D2                     XOR EDX,EDX
0041E160  66 8B 56 18               MOV DX,word ptr [ESI + 0x18]
0041E164  C1 E9 10                  SHR ECX,0x10
0041E167  81 E1 FF 00 00 00         AND ECX,0xff
0041E16D  C1 E1 10                  SHL ECX,0x10
0041E170  0B CA                     OR ECX,EDX
0041E172  51                        PUSH ECX
0041E173  8B 8E 11 02 00 00         MOV ECX,dword ptr [ESI + 0x211]
0041E179  E8 02 86 2C 00            CALL 0x006e6780
LAB_0041e17e:
0041E17E  8B 86 09 01 00 00         MOV EAX,dword ptr [ESI + 0x109]
0041E184  85 C0                     TEST EAX,EAX
0041E186  7E 34                     JLE 0x0041e1bc
0041E188  8B 4E 24                  MOV ECX,dword ptr [ESI + 0x24]
0041E18B  33 C0                     XOR EAX,EAX
0041E18D  A0 4D 87 80 00            MOV AL,[0x0080874d]
0041E192  3B C8                     CMP ECX,EAX
0041E194  75 26                     JNZ 0x0041e1bc
0041E196  8B 4E 18                  MOV ECX,dword ptr [ESI + 0x18]
0041E199  33 D2                     XOR EDX,EDX
0041E19B  66 8B 56 18               MOV DX,word ptr [ESI + 0x18]
0041E19F  C1 E9 10                  SHR ECX,0x10
0041E1A2  81 E1 FF 00 00 00         AND ECX,0xff
0041E1A8  80 CD 01                  OR CH,0x1
0041E1AB  C1 E1 10                  SHL ECX,0x10
0041E1AE  0B CA                     OR ECX,EDX
0041E1B0  51                        PUSH ECX
0041E1B1  8B 8E 11 02 00 00         MOV ECX,dword ptr [ESI + 0x211]
0041E1B7  E8 C4 85 2C 00            CALL 0x006e6780
LAB_0041e1bc:
0041E1BC  8B 86 0D 01 00 00         MOV EAX,dword ptr [ESI + 0x10d]
0041E1C2  85 C0                     TEST EAX,EAX
0041E1C4  7E 34                     JLE 0x0041e1fa
0041E1C6  8B 4E 24                  MOV ECX,dword ptr [ESI + 0x24]
0041E1C9  33 C0                     XOR EAX,EAX
0041E1CB  A0 4D 87 80 00            MOV AL,[0x0080874d]
0041E1D0  3B C8                     CMP ECX,EAX
0041E1D2  75 26                     JNZ 0x0041e1fa
0041E1D4  8B 4E 18                  MOV ECX,dword ptr [ESI + 0x18]
0041E1D7  33 D2                     XOR EDX,EDX
0041E1D9  66 8B 56 18               MOV DX,word ptr [ESI + 0x18]
0041E1DD  C1 E9 10                  SHR ECX,0x10
0041E1E0  81 E1 FF 00 00 00         AND ECX,0xff
0041E1E6  80 CD 02                  OR CH,0x2
0041E1E9  C1 E1 10                  SHL ECX,0x10
0041E1EC  0B CA                     OR ECX,EDX
0041E1EE  51                        PUSH ECX
0041E1EF  8B 8E 11 02 00 00         MOV ECX,dword ptr [ESI + 0x211]
0041E1F5  E8 86 85 2C 00            CALL 0x006e6780
LAB_0041e1fa:
0041E1FA  8B 86 11 01 00 00         MOV EAX,dword ptr [ESI + 0x111]
0041E200  85 C0                     TEST EAX,EAX
0041E202  7E 34                     JLE 0x0041e238
0041E204  8B 4E 24                  MOV ECX,dword ptr [ESI + 0x24]
0041E207  33 C0                     XOR EAX,EAX
0041E209  A0 4D 87 80 00            MOV AL,[0x0080874d]
0041E20E  3B C8                     CMP ECX,EAX
0041E210  75 26                     JNZ 0x0041e238
0041E212  8B 4E 18                  MOV ECX,dword ptr [ESI + 0x18]
0041E215  33 D2                     XOR EDX,EDX
0041E217  66 8B 56 18               MOV DX,word ptr [ESI + 0x18]
0041E21B  C1 E9 10                  SHR ECX,0x10
0041E21E  81 E1 FF 00 00 00         AND ECX,0xff
0041E224  80 CD 03                  OR CH,0x3
0041E227  C1 E1 10                  SHL ECX,0x10
0041E22A  0B CA                     OR ECX,EDX
0041E22C  51                        PUSH ECX
0041E22D  8B 8E 11 02 00 00         MOV ECX,dword ptr [ESI + 0x211]
0041E233  E8 48 85 2C 00            CALL 0x006e6780
LAB_0041e238:
0041E238  8B 06                     MOV EAX,dword ptr [ESI]
0041E23A  8B CE                     MOV ECX,ESI
0041E23C  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
0041E23F  83 C0 C4                  ADD EAX,-0x3c
0041E242  83 F8 37                  CMP EAX,0x37
0041E245  0F 87 8A 00 00 00         JA 0x0041e2d5
0041E24B  33 C9                     XOR ECX,ECX
0041E24D  8A 88 34 E3 41 00         MOV CL,byte ptr [EAX + 0x41e334]
switchD_0041e253::switchD:
0041E253  FF 24 8D 24 E3 41 00      JMP dword ptr [ECX*0x4 + 0x41e324]
switchD_0041e253::caseD_43:
0041E25A  8B 56 18                  MOV EDX,dword ptr [ESI + 0x18]
0041E25D  8B 8E 11 02 00 00         MOV ECX,dword ptr [ESI + 0x211]
0041E263  C1 EA 10                  SHR EDX,0x10
0041E266  81 E2 FF 00 00 00         AND EDX,0xff
0041E26C  33 C0                     XOR EAX,EAX
0041E26E  66 8B 46 18               MOV AX,word ptr [ESI + 0x18]
0041E272  80 CE 04                  OR DH,0x4
0041E275  C1 E2 10                  SHL EDX,0x10
0041E278  0B D0                     OR EDX,EAX
0041E27A  52                        PUSH EDX
0041E27B  E8 00 85 2C 00            CALL 0x006e6780
0041E280  5E                        POP ESI
0041E281  5D                        POP EBP
0041E282  C2 04 00                  RET 0x4
switchD_0041e253::caseD_3c:
0041E285  8B 4E 18                  MOV ECX,dword ptr [ESI + 0x18]
0041E288  33 D2                     XOR EDX,EDX
0041E28A  66 8B 56 18               MOV DX,word ptr [ESI + 0x18]
0041E28E  C1 E9 10                  SHR ECX,0x10
0041E291  81 E1 FF 00 00 00         AND ECX,0xff
0041E297  80 CD 05                  OR CH,0x5
0041E29A  C1 E1 10                  SHL ECX,0x10
0041E29D  0B CA                     OR ECX,EDX
0041E29F  51                        PUSH ECX
0041E2A0  8B 8E 11 02 00 00         MOV ECX,dword ptr [ESI + 0x211]
0041E2A6  E8 D5 84 2C 00            CALL 0x006e6780
0041E2AB  5E                        POP ESI
0041E2AC  5D                        POP EBP
0041E2AD  C2 04 00                  RET 0x4
switchD_0041e253::caseD_73:
0041E2B0  8B 46 18                  MOV EAX,dword ptr [ESI + 0x18]
0041E2B3  33 C9                     XOR ECX,ECX
0041E2B5  66 8B 4E 18               MOV CX,word ptr [ESI + 0x18]
0041E2B9  C1 E8 10                  SHR EAX,0x10
0041E2BC  25 FF 00 00 00            AND EAX,0xff
0041E2C1  80 CC 06                  OR AH,0x6
0041E2C4  C1 E0 10                  SHL EAX,0x10
0041E2C7  0B C1                     OR EAX,ECX
0041E2C9  8B 8E 11 02 00 00         MOV ECX,dword ptr [ESI + 0x211]
0041E2CF  50                        PUSH EAX
0041E2D0  E8 AB 84 2C 00            CALL 0x006e6780
switchD_0041df76::caseD_3d:
0041E2D5  5E                        POP ESI
0041E2D6  5D                        POP EBP
0041E2D7  C2 04 00                  RET 0x4
