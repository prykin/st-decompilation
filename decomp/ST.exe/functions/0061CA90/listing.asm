FUN_0061ca90:
0061CA90  55                        PUSH EBP
0061CA91  8B EC                     MOV EBP,ESP
0061CA93  81 EC FC 07 00 00         SUB ESP,0x7fc
0061CA99  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
0061CA9C  89 4D C0                  MOV dword ptr [EBP + -0x40],ECX
0061CA9F  85 C0                     TEST EAX,EAX
0061CAA1  C7 45 CC 00 00 00 00      MOV dword ptr [EBP + -0x34],0x0
0061CAA8  75 08                     JNZ 0x0061cab2
0061CAAA  33 C0                     XOR EAX,EAX
0061CAAC  8B E5                     MOV ESP,EBP
0061CAAE  5D                        POP EBP
0061CAAF  C2 10 00                  RET 0x10
LAB_0061cab2:
0061CAB2  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0061CAB5  53                        PUSH EBX
0061CAB6  56                        PUSH ESI
0061CAB7  57                        PUSH EDI
0061CAB8  85 C9                     TEST ECX,ECX
0061CABA  B8 79 19 8C 02            MOV EAX,0x28c1979
0061CABF  7C 10                     JL 0x0061cad1
0061CAC1  F7 E9                     IMUL ECX
0061CAC3  D1 FA                     SAR EDX,0x1
0061CAC5  8B C2                     MOV EAX,EDX
0061CAC7  C1 E8 1F                  SHR EAX,0x1f
0061CACA  03 D0                     ADD EDX,EAX
0061CACC  0F BF F2                  MOVSX ESI,DX
0061CACF  EB 0F                     JMP 0x0061cae0
LAB_0061cad1:
0061CAD1  F7 E9                     IMUL ECX
0061CAD3  D1 FA                     SAR EDX,0x1
0061CAD5  8B CA                     MOV ECX,EDX
0061CAD7  C1 E9 1F                  SHR ECX,0x1f
0061CADA  03 D1                     ADD EDX,ECX
0061CADC  0F BF F2                  MOVSX ESI,DX
0061CADF  4E                        DEC ESI
LAB_0061cae0:
0061CAE0  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0061CAE3  B8 79 19 8C 02            MOV EAX,0x28c1979
0061CAE8  85 C9                     TEST ECX,ECX
0061CAEA  7C 10                     JL 0x0061cafc
0061CAEC  F7 E9                     IMUL ECX
0061CAEE  D1 FA                     SAR EDX,0x1
0061CAF0  8B C2                     MOV EAX,EDX
0061CAF2  C1 E8 1F                  SHR EAX,0x1f
0061CAF5  03 D0                     ADD EDX,EAX
0061CAF7  0F BF CA                  MOVSX ECX,DX
0061CAFA  EB 0F                     JMP 0x0061cb0b
LAB_0061cafc:
0061CAFC  F7 E9                     IMUL ECX
0061CAFE  D1 FA                     SAR EDX,0x1
0061CB00  8B CA                     MOV ECX,EDX
0061CB02  C1 E9 1F                  SHR ECX,0x1f
0061CB05  03 D1                     ADD EDX,ECX
0061CB07  0F BF CA                  MOVSX ECX,DX
0061CB0A  49                        DEC ECX
LAB_0061cb0b:
0061CB0B  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
0061CB0E  B8 1F 85 EB 51            MOV EAX,0x51eb851f
0061CB13  85 D2                     TEST EDX,EDX
0061CB15  7C 11                     JL 0x0061cb28
0061CB17  F7 EA                     IMUL EDX
0061CB19  C1 FA 06                  SAR EDX,0x6
0061CB1C  8B C2                     MOV EAX,EDX
0061CB1E  C1 E8 1F                  SHR EAX,0x1f
0061CB21  03 D0                     ADD EDX,EAX
0061CB23  0F BF C2                  MOVSX EAX,DX
0061CB26  EB 10                     JMP 0x0061cb38
LAB_0061cb28:
0061CB28  F7 EA                     IMUL EDX
0061CB2A  C1 FA 06                  SAR EDX,0x6
0061CB2D  8B C2                     MOV EAX,EDX
0061CB2F  C1 E8 1F                  SHR EAX,0x1f
0061CB32  03 D0                     ADD EDX,EAX
0061CB34  0F BF C2                  MOVSX EAX,DX
0061CB37  48                        DEC EAX
LAB_0061cb38:
0061CB38  85 F6                     TEST ESI,ESI
0061CB3A  0F 8C 54 03 00 00         JL 0x0061ce94
0061CB40  85 C9                     TEST ECX,ECX
0061CB42  0F 8C 4C 03 00 00         JL 0x0061ce94
0061CB48  85 C0                     TEST EAX,EAX
0061CB4A  0F 8C 44 03 00 00         JL 0x0061ce94
0061CB50  66 8B 1D 40 B2 7F 00      MOV BX,word ptr [0x007fb240]
0061CB57  0F BF FB                  MOVSX EDI,BX
0061CB5A  3B F7                     CMP ESI,EDI
0061CB5C  0F 8D 32 03 00 00         JGE 0x0061ce94
0061CB62  0F BF 15 42 B2 7F 00      MOVSX EDX,word ptr [0x007fb242]
0061CB69  3B CA                     CMP ECX,EDX
0061CB6B  0F 8D 23 03 00 00         JGE 0x0061ce94
0061CB71  83 F8 05                  CMP EAX,0x5
0061CB74  0F 8D 1A 03 00 00         JGE 0x0061ce94
0061CB7A  8D 41 FF                  LEA EAX,[ECX + -0x1]
0061CB7D  85 C0                     TEST EAX,EAX
0061CB7F  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
0061CB82  7D 07                     JGE 0x0061cb8b
0061CB84  C7 45 E4 00 00 00 00      MOV dword ptr [EBP + -0x1c],0x0
LAB_0061cb8b:
0061CB8B  8D 46 FF                  LEA EAX,[ESI + -0x1]
0061CB8E  85 C0                     TEST EAX,EAX
0061CB90  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
0061CB93  7D 07                     JGE 0x0061cb9c
0061CB95  C7 45 EC 00 00 00 00      MOV dword ptr [EBP + -0x14],0x0
LAB_0061cb9c:
0061CB9C  83 C1 02                  ADD ECX,0x2
0061CB9F  3B CA                     CMP ECX,EDX
0061CBA1  89 4D D8                  MOV dword ptr [EBP + -0x28],ECX
0061CBA4  7E 03                     JLE 0x0061cba9
0061CBA6  89 55 D8                  MOV dword ptr [EBP + -0x28],EDX
LAB_0061cba9:
0061CBA9  83 C6 02                  ADD ESI,0x2
0061CBAC  3B F7                     CMP ESI,EDI
0061CBAE  89 75 E8                  MOV dword ptr [EBP + -0x18],ESI
0061CBB1  7E 03                     JLE 0x0061cbb6
0061CBB3  89 7D E8                  MOV dword ptr [EBP + -0x18],EDI
LAB_0061cbb6:
0061CBB6  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
0061CBB9  8B 7D D8                  MOV EDI,dword ptr [EBP + -0x28]
0061CBBC  33 D2                     XOR EDX,EDX
0061CBBE  33 F6                     XOR ESI,ESI
0061CBC0  89 75 F8                  MOV dword ptr [EBP + -0x8],ESI
0061CBC3  89 55 D0                  MOV dword ptr [EBP + -0x30],EDX
0061CBC6  C7 45 C8 94 88 01 00      MOV dword ptr [EBP + -0x38],0x18894
0061CBCD  89 55 F0                  MOV dword ptr [EBP + -0x10],EDX
LAB_0061cbd0:
0061CBD0  8B 4D E4                  MOV ECX,dword ptr [EBP + -0x1c]
0061CBD3  3B CF                     CMP ECX,EDI
0061CBD5  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
0061CBD8  0F 8D 84 02 00 00         JGE 0x0061ce62
LAB_0061cbde:
0061CBDE  3B 45 E8                  CMP EAX,dword ptr [EBP + -0x18]
0061CBE1  89 45 DC                  MOV dword ptr [EBP + -0x24],EAX
0061CBE4  0F 8D 6C 02 00 00         JGE 0x0061ce56
0061CBEA  8D 3C B6                  LEA EDI,[ESI + ESI*0x4]
0061CBED  8D 34 7E                  LEA ESI,[ESI + EDI*0x2]
0061CBF0  8D B4 B5 04 F8 FF FF      LEA ESI,[EBP + ESI*0x4 + 0xfffff804]
0061CBF7  EB 0D                     JMP 0x0061cc06
LAB_0061cbf9:
0061CBF9  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
0061CBFC  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
0061CBFF  66 8B 1D 40 B2 7F 00      MOV BX,word ptr [0x007fb240]
LAB_0061cc06:
0061CC06  66 85 C0                  TEST AX,AX
0061CC09  0F 8C 1F 02 00 00         JL 0x0061ce2e
0061CC0F  66 3B C3                  CMP AX,BX
0061CC12  0F 8D 16 02 00 00         JGE 0x0061ce2e
0061CC18  66 85 C9                  TEST CX,CX
0061CC1B  0F 8C 0D 02 00 00         JL 0x0061ce2e
0061CC21  66 3B 0D 42 B2 7F 00      CMP CX,word ptr [0x007fb242]
0061CC28  0F 8D 00 02 00 00         JGE 0x0061ce2e
0061CC2E  66 85 D2                  TEST DX,DX
0061CC31  0F 8C F7 01 00 00         JL 0x0061ce2e
0061CC37  66 3B 15 44 B2 7F 00      CMP DX,word ptr [0x007fb244]
0061CC3E  0F 8D EA 01 00 00         JGE 0x0061ce2e
0061CC44  0F BF C9                  MOVSX ECX,CX
0061CC47  0F BF FB                  MOVSX EDI,BX
0061CC4A  0F AF CF                  IMUL ECX,EDI
0061CC4D  0F BF 3D 46 B2 7F 00      MOVSX EDI,word ptr [0x007fb246]
0061CC54  0F BF D2                  MOVSX EDX,DX
0061CC57  0F AF D7                  IMUL EDX,EDI
0061CC5A  0F BF C0                  MOVSX EAX,AX
0061CC5D  03 CA                     ADD ECX,EDX
0061CC5F  8B 15 48 B2 7F 00         MOV EDX,dword ptr [0x007fb248]
0061CC65  03 C8                     ADD ECX,EAX
0061CC67  8B 1C CA                  MOV EBX,dword ptr [EDX + ECX*0x8]
0061CC6A  85 DB                     TEST EBX,EBX
0061CC6C  0F 84 BC 01 00 00         JZ 0x0061ce2e
0061CC72  8B 03                     MOV EAX,dword ptr [EBX]
0061CC74  8B CB                     MOV ECX,EBX
0061CC76  FF 90 F0 00 00 00         CALL dword ptr [EAX + 0xf0]
0061CC7C  85 C0                     TEST EAX,EAX
0061CC7E  0F 84 AA 01 00 00         JZ 0x0061ce2e
0061CC84  8B 43 24                  MOV EAX,dword ptr [EBX + 0x24]
0061CC87  83 F8 08                  CMP EAX,0x8
0061CC8A  0F 83 9E 01 00 00         JNC 0x0061ce2e
0061CC90  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
0061CC96  85 C9                     TEST ECX,ECX
0061CC98  74 11                     JZ 0x0061ccab
0061CC9A  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
0061CC9D  80 BC C0 E9 87 80 00 08   CMP byte ptr [EAX + EAX*0x8 + 0x8087e9],0x8
0061CCA5  0F 83 83 01 00 00         JNC 0x0061ce2e
LAB_0061ccab:
0061CCAB  8B 4D C0                  MOV ECX,dword ptr [EBP + -0x40]
0061CCAE  8A 15 8F 8A 80 00         MOV DL,byte ptr [0x00808a8f]
0061CCB4  8A 43 24                  MOV AL,byte ptr [EBX + 0x24]
0061CCB7  8A 49 51                  MOV CL,byte ptr [ECX + 0x51]
0061CCBA  88 45 D4                  MOV byte ptr [EBP + -0x2c],AL
0061CCBD  84 D2                     TEST DL,DL
0061CCBF  88 4D C4                  MOV byte ptr [EBP + -0x3c],CL
0061CCC2  74 2B                     JZ 0x0061ccef
0061CCC4  8B 45 C4                  MOV EAX,dword ptr [EBP + -0x3c]
0061CCC7  25 FF 00 00 00            AND EAX,0xff
0061CCCC  8D 0C C0                  LEA ECX,[EAX + EAX*0x8]
0061CCCF  8B 45 D4                  MOV EAX,dword ptr [EBP + -0x2c]
0061CCD2  25 FF 00 00 00            AND EAX,0xff
0061CCD7  8A 94 C9 EA 87 80 00      MOV DL,byte ptr [ECX + ECX*0x8 + 0x8087ea]
0061CCDE  8D 3C C0                  LEA EDI,[EAX + EAX*0x8]
0061CCE1  33 C0                     XOR EAX,EAX
0061CCE3  3A 94 FF EA 87 80 00      CMP DL,byte ptr [EDI + EDI*0x8 + 0x8087ea]
0061CCEA  0F 95 C0                  SETNZ AL
0061CCED  EB 7D                     JMP 0x0061cd6c
LAB_0061ccef:
0061CCEF  3A C1                     CMP AL,CL
0061CCF1  74 6E                     JZ 0x0061cd61
0061CCF3  8B 45 D4                  MOV EAX,dword ptr [EBP + -0x2c]
0061CCF6  8B 7D C4                  MOV EDI,dword ptr [EBP + -0x3c]
0061CCF9  25 FF 00 00 00            AND EAX,0xff
0061CCFE  81 E7 FF 00 00 00         AND EDI,0xff
0061CD04  8A 8C C7 4F 8A 80 00      MOV CL,byte ptr [EDI + EAX*0x8 + 0x808a4f]
0061CD0B  84 C9                     TEST CL,CL
0061CD0D  75 12                     JNZ 0x0061cd21
0061CD0F  8A 94 F8 4F 8A 80 00      MOV DL,byte ptr [EAX + EDI*0x8 + 0x808a4f]
0061CD16  84 D2                     TEST DL,DL
0061CD18  75 07                     JNZ 0x0061cd21
0061CD1A  B8 FE FF FF FF            MOV EAX,0xfffffffe
0061CD1F  EB 42                     JMP 0x0061cd63
LAB_0061cd21:
0061CD21  80 F9 01                  CMP CL,0x1
0061CD24  75 10                     JNZ 0x0061cd36
0061CD26  8A 94 F8 4F 8A 80 00      MOV DL,byte ptr [EAX + EDI*0x8 + 0x808a4f]
0061CD2D  84 D2                     TEST DL,DL
0061CD2F  75 05                     JNZ 0x0061cd36
0061CD31  83 C8 FF                  OR EAX,0xffffffff
0061CD34  EB 2D                     JMP 0x0061cd63
LAB_0061cd36:
0061CD36  84 C9                     TEST CL,CL
0061CD38  75 11                     JNZ 0x0061cd4b
0061CD3A  80 BC F8 4F 8A 80 00 01   CMP byte ptr [EAX + EDI*0x8 + 0x808a4f],0x1
0061CD42  75 07                     JNZ 0x0061cd4b
0061CD44  B8 01 00 00 00            MOV EAX,0x1
0061CD49  EB 18                     JMP 0x0061cd63
LAB_0061cd4b:
0061CD4B  80 F9 01                  CMP CL,0x1
0061CD4E  75 11                     JNZ 0x0061cd61
0061CD50  80 BC F8 4F 8A 80 00 01   CMP byte ptr [EAX + EDI*0x8 + 0x808a4f],0x1
0061CD58  75 07                     JNZ 0x0061cd61
0061CD5A  B8 02 00 00 00            MOV EAX,0x2
0061CD5F  EB 02                     JMP 0x0061cd63
LAB_0061cd61:
0061CD61  33 C0                     XOR EAX,EAX
LAB_0061cd63:
0061CD63  33 C9                     XOR ECX,ECX
0061CD65  85 C0                     TEST EAX,EAX
0061CD67  0F 9C C1                  SETL CL
0061CD6A  8B C1                     MOV EAX,ECX
LAB_0061cd6c:
0061CD6C  85 C0                     TEST EAX,EAX
0061CD6E  0F 84 BA 00 00 00         JZ 0x0061ce2e
0061CD74  8B 13                     MOV EDX,dword ptr [EBX]
0061CD76  8B CB                     MOV ECX,EBX
0061CD78  FF 92 F8 00 00 00         CALL dword ptr [EDX + 0xf8]
0061CD7E  85 C0                     TEST EAX,EAX
0061CD80  0F 84 A8 00 00 00         JZ 0x0061ce2e
0061CD86  8D 45 E2                  LEA EAX,[EBP + -0x1e]
0061CD89  8D 4D 12                  LEA ECX,[EBP + 0x12]
0061CD8C  50                        PUSH EAX
0061CD8D  8D 55 FE                  LEA EDX,[EBP + -0x2]
0061CD90  51                        PUSH ECX
0061CD91  52                        PUSH EDX
0061CD92  8B CB                     MOV ECX,EBX
0061CD94  E8 4A 64 DE FF            CALL 0x004031e3
0061CD99  66 8B 53 32               MOV DX,word ptr [EBX + 0x32]
0061CD9D  B9 0B 00 00 00            MOV ECX,0xb
0061CDA2  33 C0                     XOR EAX,EAX
0061CDA4  8B FE                     MOV EDI,ESI
0061CDA6  F3 AB                     STOSD.REP ES:EDI
0061CDA8  8B 43 24                  MOV EAX,dword ptr [EBX + 0x24]
0061CDAB  8B 4B 18                  MOV ECX,dword ptr [EBX + 0x18]
0061CDAE  89 06                     MOV dword ptr [ESI],EAX
0061CDB0  66 8B 45 DC               MOV AX,word ptr [EBP + -0x24]
0061CDB4  89 4E 26                  MOV dword ptr [ESI + 0x26],ECX
0061CDB7  66 8B 4D F4               MOV CX,word ptr [EBP + -0xc]
0061CDBB  66 89 56 2A               MOV word ptr [ESI + 0x2a],DX
0061CDBF  66 8B 55 F0               MOV DX,word ptr [EBP + -0x10]
0061CDC3  89 5E 1A                  MOV dword ptr [ESI + 0x1a],EBX
0061CDC6  66 89 46 14               MOV word ptr [ESI + 0x14],AX
0061CDCA  0F BF 45 FE               MOVSX EAX,word ptr [EBP + -0x2]
0061CDCE  66 89 4E 16               MOV word ptr [ESI + 0x16],CX
0061CDD2  66 89 56 18               MOV word ptr [ESI + 0x18],DX
0061CDD6  0F BF 4D 12               MOVSX ECX,word ptr [EBP + 0x12]
0061CDDA  0F BF 55 E2               MOVSX EDX,word ptr [EBP + -0x1e]
0061CDDE  89 46 08                  MOV dword ptr [ESI + 0x8],EAX
0061CDE1  8B 03                     MOV EAX,dword ptr [EBX]
0061CDE3  89 4E 0C                  MOV dword ptr [ESI + 0xc],ECX
0061CDE6  8B CB                     MOV ECX,EBX
0061CDE8  89 56 10                  MOV dword ptr [ESI + 0x10],EDX
0061CDEB  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
0061CDEE  0F BF 4D 12               MOVSX ECX,word ptr [EBP + 0x12]
0061CDF2  0F BF 55 FE               MOVSX EDX,word ptr [EBP + -0x2]
0061CDF6  89 46 04                  MOV dword ptr [ESI + 0x4],EAX
0061CDF9  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0061CDFC  51                        PUSH ECX
0061CDFD  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0061CE00  52                        PUSH EDX
0061CE01  50                        PUSH EAX
0061CE02  51                        PUSH ECX
0061CE03  E8 D0 00 09 00            CALL 0x006aced8
0061CE08  8B 4D C8                  MOV ECX,dword ptr [EBP + -0x38]
0061CE0B  89 46 1E                  MOV dword ptr [ESI + 0x1e],EAX
0061CE0E  89 46 22                  MOV dword ptr [ESI + 0x22],EAX
0061CE11  8B 46 1E                  MOV EAX,dword ptr [ESI + 0x1e]
0061CE14  83 C4 10                  ADD ESP,0x10
0061CE17  3B C1                     CMP EAX,ECX
0061CE19  7D 09                     JGE 0x0061ce24
0061CE1B  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
0061CE1E  89 45 C8                  MOV dword ptr [EBP + -0x38],EAX
0061CE21  89 55 D0                  MOV dword ptr [EBP + -0x30],EDX
LAB_0061ce24:
0061CE24  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0061CE27  41                        INC ECX
0061CE28  83 C6 2C                  ADD ESI,0x2c
0061CE2B  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
LAB_0061ce2e:
0061CE2E  8B 45 DC                  MOV EAX,dword ptr [EBP + -0x24]
0061CE31  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
0061CE34  40                        INC EAX
0061CE35  3B C1                     CMP EAX,ECX
0061CE37  89 45 DC                  MOV dword ptr [EBP + -0x24],EAX
0061CE3A  0F 8C B9 FD FF FF         JL 0x0061cbf9
0061CE40  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
0061CE43  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
0061CE46  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
0061CE49  66 8B 1D 40 B2 7F 00      MOV BX,word ptr [0x007fb240]
0061CE50  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
0061CE53  8B 7D D8                  MOV EDI,dword ptr [EBP + -0x28]
LAB_0061ce56:
0061CE56  41                        INC ECX
0061CE57  3B CF                     CMP ECX,EDI
0061CE59  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
0061CE5C  0F 8C 7C FD FF FF         JL 0x0061cbde
LAB_0061ce62:
0061CE62  42                        INC EDX
0061CE63  83 FA 05                  CMP EDX,0x5
0061CE66  89 55 F0                  MOV dword ptr [EBP + -0x10],EDX
0061CE69  0F 8C 61 FD FF FF         JL 0x0061cbd0
0061CE6F  85 F6                     TEST ESI,ESI
0061CE71  7E 21                     JLE 0x0061ce94
0061CE73  8B 45 D0                  MOV EAX,dword ptr [EBP + -0x30]
0061CE76  8B 7D 14                  MOV EDI,dword ptr [EBP + 0x14]
0061CE79  B9 0B 00 00 00            MOV ECX,0xb
0061CE7E  C7 45 CC 01 00 00 00      MOV dword ptr [EBP + -0x34],0x1
0061CE85  8D 14 80                  LEA EDX,[EAX + EAX*0x4]
0061CE88  8D 04 50                  LEA EAX,[EAX + EDX*0x2]
0061CE8B  8D B4 85 04 F8 FF FF      LEA ESI,[EBP + EAX*0x4 + 0xfffff804]
0061CE92  F3 A5                     MOVSD.REP ES:EDI,ESI
LAB_0061ce94:
0061CE94  8B 45 CC                  MOV EAX,dword ptr [EBP + -0x34]
0061CE97  5F                        POP EDI
0061CE98  5E                        POP ESI
0061CE99  5B                        POP EBX
0061CE9A  8B E5                     MOV ESP,EBP
0061CE9C  5D                        POP EBP
0061CE9D  C2 10 00                  RET 0x10
