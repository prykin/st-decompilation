FUN_0055c830:
0055C830  55                        PUSH EBP
0055C831  8B EC                     MOV EBP,ESP
0055C833  81 EC 84 06 00 00         SUB ESP,0x684
0055C839  53                        PUSH EBX
0055C83A  8B D9                     MOV EBX,ECX
0055C83C  56                        PUSH ESI
0055C83D  57                        PUSH EDI
0055C83E  8A 43 08                  MOV AL,byte ptr [EBX + 0x8]
0055C841  84 C0                     TEST AL,AL
0055C843  0F 84 B1 07 00 00         JZ 0x0055cffa
0055C849  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
0055C84C  8D 46 FF                  LEA EAX,[ESI + -0x1]
0055C84F  3D FE 00 00 00            CMP EAX,0xfe
0055C854  0F 87 A0 07 00 00         JA 0x0055cffa
0055C85A  33 C9                     XOR ECX,ECX
0055C85C  8A 88 3C D0 55 00         MOV CL,byte ptr [EAX + 0x55d03c]
switchD_0055c862::switchD:
0055C862  FF 24 8D 04 D0 55 00      JMP dword ptr [ECX*0x4 + 0x55d004]
switchD_0055c862::caseD_4:
0055C869  8B 15 18 76 80 00         MOV EDX,dword ptr [0x00807618]
0055C86F  83 EE 04                  SUB ESI,0x4
0055C872  F7 DE                     NEG ESI
0055C874  1B F6                     SBB ESI,ESI
0055C876  52                        PUSH EDX
0055C877  83 E6 02                  AND ESI,0x2
0055C87A  81 C6 75 25 00 00         ADD ESI,0x2575
0055C880  56                        PUSH ESI
0055C881  E8 BA 38 15 00            CALL 0x006b0140
0055C886  8B F0                     MOV ESI,EAX
0055C888  83 C9 FF                  OR ECX,0xffffffff
0055C88B  8B FE                     MOV EDI,ESI
0055C88D  33 C0                     XOR EAX,EAX
0055C88F  F2 AE                     SCASB.REPNE ES:EDI
0055C891  8B 7D 14                  MOV EDI,dword ptr [EBP + 0x14]
0055C894  F7 D1                     NOT ECX
0055C896  49                        DEC ECX
0055C897  8B D1                     MOV EDX,ECX
0055C899  83 C9 FF                  OR ECX,0xffffffff
0055C89C  F2 AE                     SCASB.REPNE ES:EDI
0055C89E  F7 D1                     NOT ECX
0055C8A0  49                        DEC ECX
0055C8A1  8D 44 0A 06               LEA EAX,[EDX + ECX*0x1 + 0x6]
0055C8A5  50                        PUSH EAX
0055C8A6  E8 C5 E3 14 00            CALL 0x006aac70
0055C8AB  85 C0                     TEST EAX,EAX
0055C8AD  89 45 0C                  MOV dword ptr [EBP + 0xc],EAX
0055C8B0  0F 84 44 07 00 00         JZ 0x0055cffa
0055C8B6  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
0055C8B9  51                        PUSH ECX
0055C8BA  56                        PUSH ESI
0055C8BB  68 1C 41 7C 00            PUSH 0x7c411c
0055C8C0  50                        PUSH EAX
0055C8C1  FF 15 E8 BD 85 00         CALL dword ptr [0x0085bde8]
0055C8C7  8A 43 09                  MOV AL,byte ptr [EBX + 0x9]
0055C8CA  83 C4 10                  ADD ESP,0x10
0055C8CD  84 C0                     TEST AL,AL
0055C8CF  74 21                     JZ 0x0055c8f2
0055C8D1  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
0055C8D4  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0055C8D7  52                        PUSH EDX
0055C8D8  50                        PUSH EAX
0055C8D9  8B CB                     MOV ECX,EBX
0055C8DB  E8 51 7F EA FF            CALL 0x00404831
0055C8E0  8D 45 0C                  LEA EAX,[EBP + 0xc]
0055C8E3  50                        PUSH EAX
0055C8E4  E8 77 E7 14 00            CALL 0x006ab060
0055C8E9  5F                        POP EDI
0055C8EA  5E                        POP ESI
0055C8EB  5B                        POP EBX
0055C8EC  8B E5                     MOV ESP,EBP
0055C8EE  5D                        POP EBP
0055C8EF  C2 14 00                  RET 0x14
LAB_0055c8f2:
0055C8F2  8B 0D 4C 17 81 00         MOV ECX,dword ptr [0x0081174c]
0055C8F8  85 C9                     TEST ECX,ECX
0055C8FA  74 23                     JZ 0x0055c91f
0055C8FC  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
0055C8FF  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0055C902  6A 00                     PUSH 0x0
0055C904  52                        PUSH EDX
0055C905  50                        PUSH EAX
0055C906  6A 09                     PUSH 0x9
0055C908  E8 6F 6B EA FF            CALL 0x0040347c
0055C90D  8D 45 0C                  LEA EAX,[EBP + 0xc]
0055C910  50                        PUSH EAX
0055C911  E8 4A E7 14 00            CALL 0x006ab060
0055C916  5F                        POP EDI
0055C917  5E                        POP ESI
0055C918  5B                        POP EBX
0055C919  8B E5                     MOV ESP,EBP
0055C91B  5D                        POP EBP
0055C91C  C2 14 00                  RET 0x14
LAB_0055c91f:
0055C91F  A1 6C 17 81 00            MOV EAX,[0x0081176c]
0055C924  85 C0                     TEST EAX,EAX
0055C926  74 5A                     JZ 0x0055c982
0055C928  B9 14 01 00 00            MOV ECX,0x114
0055C92D  33 C0                     XOR EAX,EAX
0055C92F  8D BD 7C FB FF FF         LEA EDI,[EBP + 0xfffffb7c]
0055C935  6A 40                     PUSH 0x40
0055C937  F3 AB                     STOSD.REP ES:EDI
0055C939  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0055C93C  8D 95 7C FB FF FF         LEA EDX,[EBP + 0xfffffb7c]
0055C942  51                        PUSH ECX
0055C943  52                        PUSH EDX
0055C944  AA                        STOSB ES:EDI
0055C945  E8 F6 19 1D 00            CALL 0x0072e340
0055C94A  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
0055C94D  68 10 04 00 00            PUSH 0x410
0055C952  8D 8D BC FB FF FF         LEA ECX,[EBP + 0xfffffbbc]
0055C958  50                        PUSH EAX
0055C959  51                        PUSH ECX
0055C95A  C6 85 BB FB FF FF 00      MOV byte ptr [EBP + 0xfffffbbb],0x0
0055C961  E8 DA 19 1D 00            CALL 0x0072e340
0055C966  8B 0D 6C 17 81 00         MOV ECX,dword ptr [0x0081176c]
0055C96C  83 C4 18                  ADD ESP,0x18
0055C96F  8D 95 7C FB FF FF         LEA EDX,[EBP + 0xfffffb7c]
0055C975  C6 85 BF FC FF FF 00      MOV byte ptr [EBP + 0xfffffcbf],0x0
0055C97C  52                        PUSH EDX
0055C97D  E8 3A 62 EA FF            CALL 0x00402bbc
LAB_0055c982:
0055C982  8D 45 0C                  LEA EAX,[EBP + 0xc]
0055C985  50                        PUSH EAX
0055C986  E8 D5 E6 14 00            CALL 0x006ab060
0055C98B  5F                        POP EDI
0055C98C  5E                        POP ESI
0055C98D  5B                        POP EBX
0055C98E  8B E5                     MOV ESP,EBP
0055C990  5D                        POP EBP
0055C991  C2 14 00                  RET 0x14
switchD_0055c862::caseD_5:
0055C994  8B 7D 14                  MOV EDI,dword ptr [EBP + 0x14]
0055C997  8D 4B 2C                  LEA ECX,[EBX + 0x2c]
0055C99A  8B F1                     MOV ESI,ECX
LAB_0055c99c:
0055C99C  8A 16                     MOV DL,byte ptr [ESI]
0055C99E  8A C2                     MOV AL,DL
0055C9A0  3A 17                     CMP DL,byte ptr [EDI]
0055C9A2  75 1C                     JNZ 0x0055c9c0
0055C9A4  84 C0                     TEST AL,AL
0055C9A6  74 14                     JZ 0x0055c9bc
0055C9A8  8A 56 01                  MOV DL,byte ptr [ESI + 0x1]
0055C9AB  8A C2                     MOV AL,DL
0055C9AD  3A 57 01                  CMP DL,byte ptr [EDI + 0x1]
0055C9B0  75 0E                     JNZ 0x0055c9c0
0055C9B2  83 C6 02                  ADD ESI,0x2
0055C9B5  83 C7 02                  ADD EDI,0x2
0055C9B8  84 C0                     TEST AL,AL
0055C9BA  75 E0                     JNZ 0x0055c99c
LAB_0055c9bc:
0055C9BC  33 C0                     XOR EAX,EAX
0055C9BE  EB 05                     JMP 0x0055c9c5
LAB_0055c9c0:
0055C9C0  1B C0                     SBB EAX,EAX
0055C9C2  83 D8 FF                  SBB EAX,-0x1
LAB_0055c9c5:
0055C9C5  85 C0                     TEST EAX,EAX
0055C9C7  74 22                     JZ 0x0055c9eb
0055C9C9  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
0055C9CC  6A 10                     PUSH 0x10
0055C9CE  50                        PUSH EAX
0055C9CF  51                        PUSH ECX
0055C9D0  E8 6B 19 1D 00            CALL 0x0072e340
0055C9D5  8A 4B 2B                  MOV CL,byte ptr [EBX + 0x2b]
0055C9D8  83 C4 0C                  ADD ESP,0xc
0055C9DB  80 F9 07                  CMP CL,0x7
0055C9DE  C6 43 3B 00               MOV byte ptr [EBX + 0x3b],0x0
0055C9E2  0F 94 C1                  SETZ CL
0055C9E5  83 C1 07                  ADD ECX,0x7
0055C9E8  88 4B 2B                  MOV byte ptr [EBX + 0x2b],CL
LAB_0055c9eb:
0055C9EB  8A 43 09                  MOV AL,byte ptr [EBX + 0x9]
0055C9EE  84 C0                     TEST AL,AL
0055C9F0  0F 85 04 06 00 00         JNZ 0x0055cffa
0055C9F6  8B 0D 4C 17 81 00         MOV ECX,dword ptr [0x0081174c]
0055C9FC  85 C9                     TEST ECX,ECX
0055C9FE  0F 84 F6 05 00 00         JZ 0x0055cffa
0055CA04  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
0055CA07  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
0055CA0A  6A 05                     PUSH 0x5
0055CA0C  52                        PUSH EDX
0055CA0D  8A 53 2B                  MOV DL,byte ptr [EBX + 0x2b]
0055CA10  50                        PUSH EAX
0055CA11  52                        PUSH EDX
0055CA12  E8 65 6A EA FF            CALL 0x0040347c
0055CA17  5F                        POP EDI
0055CA18  5E                        POP ESI
0055CA19  5B                        POP EBX
0055CA1A  8B E5                     MOV ESP,EBP
0055CA1C  5D                        POP EBP
0055CA1D  C2 14 00                  RET 0x14
switchD_0055c862::caseD_12:
0055CA20  8A 43 09                  MOV AL,byte ptr [EBX + 0x9]
0055CA23  84 C0                     TEST AL,AL
0055CA25  74 18                     JZ 0x0055ca3f
0055CA27  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
0055CA2A  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
0055CA2D  50                        PUSH EAX
0055CA2E  51                        PUSH ECX
0055CA2F  8B CB                     MOV ECX,EBX
0055CA31  E8 FB 7D EA FF            CALL 0x00404831
0055CA36  5F                        POP EDI
0055CA37  5E                        POP ESI
0055CA38  5B                        POP EBX
0055CA39  8B E5                     MOV ESP,EBP
0055CA3B  5D                        POP EBP
0055CA3C  C2 14 00                  RET 0x14
LAB_0055ca3f:
0055CA3F  8B 0D 4C 17 81 00         MOV ECX,dword ptr [0x0081174c]
0055CA45  85 C9                     TEST ECX,ECX
0055CA47  74 1A                     JZ 0x0055ca63
0055CA49  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
0055CA4C  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
0055CA4F  6A 05                     PUSH 0x5
0055CA51  52                        PUSH EDX
0055CA52  50                        PUSH EAX
0055CA53  6A 02                     PUSH 0x2
0055CA55  E8 22 6A EA FF            CALL 0x0040347c
0055CA5A  5F                        POP EDI
0055CA5B  5E                        POP ESI
0055CA5C  5B                        POP EBX
0055CA5D  8B E5                     MOV ESP,EBP
0055CA5F  5D                        POP EBP
0055CA60  C2 14 00                  RET 0x14
LAB_0055ca63:
0055CA63  A1 6C 17 81 00            MOV EAX,[0x0081176c]
0055CA68  85 C0                     TEST EAX,EAX
0055CA6A  0F 84 8A 05 00 00         JZ 0x0055cffa
0055CA70  B9 14 01 00 00            MOV ECX,0x114
0055CA75  33 C0                     XOR EAX,EAX
0055CA77  8D BD 7C FB FF FF         LEA EDI,[EBP + 0xfffffb7c]
0055CA7D  6A 40                     PUSH 0x40
0055CA7F  F3 AB                     STOSD.REP ES:EDI
0055CA81  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
0055CA84  8D 95 7C FB FF FF         LEA EDX,[EBP + 0xfffffb7c]
0055CA8A  51                        PUSH ECX
0055CA8B  52                        PUSH EDX
0055CA8C  AA                        STOSB ES:EDI
0055CA8D  E8 AE 18 1D 00            CALL 0x0072e340
0055CA92  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
0055CA95  68 10 04 00 00            PUSH 0x410
0055CA9A  8D 8D BC FB FF FF         LEA ECX,[EBP + 0xfffffbbc]
0055CAA0  50                        PUSH EAX
0055CAA1  51                        PUSH ECX
0055CAA2  C6 85 BB FB FF FF 00      MOV byte ptr [EBP + 0xfffffbbb],0x0
0055CAA9  E8 92 18 1D 00            CALL 0x0072e340
0055CAAE  8B 0D 6C 17 81 00         MOV ECX,dword ptr [0x0081176c]
0055CAB4  83 C4 18                  ADD ESP,0x18
0055CAB7  8D 95 7C FB FF FF         LEA EDX,[EBP + 0xfffffb7c]
0055CABD  C6 85 BF FC FF FF 00      MOV byte ptr [EBP + 0xfffffcbf],0x0
0055CAC4  52                        PUSH EDX
0055CAC5  E8 F2 60 EA FF            CALL 0x00402bbc
0055CACA  5F                        POP EDI
0055CACB  5E                        POP ESI
0055CACC  5B                        POP EBX
0055CACD  8B E5                     MOV ESP,EBP
0055CACF  5D                        POP EBP
0055CAD0  C2 14 00                  RET 0x14
switchD_0055c862::caseD_10:
0055CAD3  8A 43 09                  MOV AL,byte ptr [EBX + 0x9]
0055CAD6  84 C0                     TEST AL,AL
0055CAD8  74 18                     JZ 0x0055caf2
0055CADA  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
0055CADD  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
0055CAE0  50                        PUSH EAX
0055CAE1  51                        PUSH ECX
0055CAE2  8B CB                     MOV ECX,EBX
0055CAE4  E8 48 7D EA FF            CALL 0x00404831
0055CAE9  5F                        POP EDI
0055CAEA  5E                        POP ESI
0055CAEB  5B                        POP EBX
0055CAEC  8B E5                     MOV ESP,EBP
0055CAEE  5D                        POP EBP
0055CAEF  C2 14 00                  RET 0x14
LAB_0055caf2:
0055CAF2  8B 0D 4C 17 81 00         MOV ECX,dword ptr [0x0081174c]
0055CAF8  85 C9                     TEST ECX,ECX
0055CAFA  74 1A                     JZ 0x0055cb16
0055CAFC  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
0055CAFF  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
0055CB02  6A 05                     PUSH 0x5
0055CB04  52                        PUSH EDX
0055CB05  50                        PUSH EAX
0055CB06  6A 06                     PUSH 0x6
0055CB08  E8 6F 69 EA FF            CALL 0x0040347c
0055CB0D  5F                        POP EDI
0055CB0E  5E                        POP ESI
0055CB0F  5B                        POP EBX
0055CB10  8B E5                     MOV ESP,EBP
0055CB12  5D                        POP EBP
0055CB13  C2 14 00                  RET 0x14
LAB_0055cb16:
0055CB16  A1 6C 17 81 00            MOV EAX,[0x0081176c]
0055CB1B  85 C0                     TEST EAX,EAX
0055CB1D  0F 84 D7 04 00 00         JZ 0x0055cffa
0055CB23  B9 14 01 00 00            MOV ECX,0x114
0055CB28  33 C0                     XOR EAX,EAX
0055CB2A  8D BD 7C FB FF FF         LEA EDI,[EBP + 0xfffffb7c]
0055CB30  6A 40                     PUSH 0x40
0055CB32  F3 AB                     STOSD.REP ES:EDI
0055CB34  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
0055CB37  8D 95 7C FB FF FF         LEA EDX,[EBP + 0xfffffb7c]
0055CB3D  51                        PUSH ECX
0055CB3E  52                        PUSH EDX
0055CB3F  AA                        STOSB ES:EDI
0055CB40  E8 FB 17 1D 00            CALL 0x0072e340
0055CB45  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
0055CB48  68 10 04 00 00            PUSH 0x410
0055CB4D  8D 8D BC FB FF FF         LEA ECX,[EBP + 0xfffffbbc]
0055CB53  50                        PUSH EAX
0055CB54  51                        PUSH ECX
0055CB55  C6 85 BB FB FF FF 00      MOV byte ptr [EBP + 0xfffffbbb],0x0
0055CB5C  E8 DF 17 1D 00            CALL 0x0072e340
0055CB61  8B 0D 6C 17 81 00         MOV ECX,dword ptr [0x0081176c]
0055CB67  83 C4 18                  ADD ESP,0x18
0055CB6A  8D 95 7C FB FF FF         LEA EDX,[EBP + 0xfffffb7c]
0055CB70  C6 85 BF FC FF FF 00      MOV byte ptr [EBP + 0xfffffcbf],0x0
0055CB77  52                        PUSH EDX
0055CB78  E8 3F 60 EA FF            CALL 0x00402bbc
0055CB7D  5F                        POP EDI
0055CB7E  5E                        POP ESI
0055CB7F  5B                        POP EBX
0055CB80  8B E5                     MOV ESP,EBP
0055CB82  5D                        POP EBP
0055CB83  C2 14 00                  RET 0x14
switchD_0055c862::caseD_17:
0055CB86  8A 43 09                  MOV AL,byte ptr [EBX + 0x9]
0055CB89  84 C0                     TEST AL,AL
0055CB8B  0F 85 69 04 00 00         JNZ 0x0055cffa
0055CB91  8B 0D 4C 17 81 00         MOV ECX,dword ptr [0x0081174c]
0055CB97  85 C9                     TEST ECX,ECX
0055CB99  0F 84 5B 04 00 00         JZ 0x0055cffa
0055CB9F  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
0055CBA2  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
0055CBA5  6A 05                     PUSH 0x5
0055CBA7  50                        PUSH EAX
0055CBA8  52                        PUSH EDX
0055CBA9  6A 07                     PUSH 0x7
0055CBAB  E8 CC 68 EA FF            CALL 0x0040347c
0055CBB0  5F                        POP EDI
0055CBB1  5E                        POP ESI
0055CBB2  5B                        POP EBX
0055CBB3  8B E5                     MOV ESP,EBP
0055CBB5  5D                        POP EBP
0055CBB6  C2 14 00                  RET 0x14
switchD_0055c862::caseD_ff:
0055CBB9  8A 43 09                  MOV AL,byte ptr [EBX + 0x9]
0055CBBC  84 C0                     TEST AL,AL
0055CBBE  0F 85 36 04 00 00         JNZ 0x0055cffa
0055CBC4  8B 0D 4C 17 81 00         MOV ECX,dword ptr [0x0081174c]
0055CBCA  85 C9                     TEST ECX,ECX
0055CBCC  0F 84 28 04 00 00         JZ 0x0055cffa
0055CBD2  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
0055CBD5  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
0055CBD8  6A 05                     PUSH 0x5
0055CBDA  50                        PUSH EAX
0055CBDB  52                        PUSH EDX
0055CBDC  6A 04                     PUSH 0x4
0055CBDE  E8 99 68 EA FF            CALL 0x0040347c
0055CBE3  5F                        POP EDI
0055CBE4  5E                        POP ESI
0055CBE5  5B                        POP EBX
0055CBE6  8B E5                     MOV ESP,EBP
0055CBE8  5D                        POP EBP
0055CBE9  C2 14 00                  RET 0x14
switchD_0055c862::caseD_6:
0055CBEC  A1 18 76 80 00            MOV EAX,[0x00807618]
0055CBF1  50                        PUSH EAX
0055CBF2  68 76 25 00 00            PUSH 0x2576
0055CBF7  E8 44 35 15 00            CALL 0x006b0140
0055CBFC  8B F8                     MOV EDI,EAX
0055CBFE  83 C9 FF                  OR ECX,0xffffffff
0055CC01  33 C0                     XOR EAX,EAX
0055CC03  8B 75 14                  MOV ESI,dword ptr [EBP + 0x14]
0055CC06  F2 AE                     SCASB.REPNE ES:EDI
0055CC08  F7 D1                     NOT ECX
0055CC0A  49                        DEC ECX
0055CC0B  8B FE                     MOV EDI,ESI
0055CC0D  8B D1                     MOV EDX,ECX
0055CC0F  83 C9 FF                  OR ECX,0xffffffff
0055CC12  F2 AE                     SCASB.REPNE ES:EDI
0055CC14  F7 D1                     NOT ECX
0055CC16  49                        DEC ECX
0055CC17  8D 44 0A 06               LEA EAX,[EDX + ECX*0x1 + 0x6]
0055CC1B  50                        PUSH EAX
0055CC1C  E8 4F E0 14 00            CALL 0x006aac70
0055CC21  85 C0                     TEST EAX,EAX
0055CC23  89 45 0C                  MOV dword ptr [EBP + 0xc],EAX
0055CC26  0F 84 CE 03 00 00         JZ 0x0055cffa
0055CC2C  8B 0D 18 76 80 00         MOV ECX,dword ptr [0x00807618]
0055CC32  56                        PUSH ESI
0055CC33  51                        PUSH ECX
0055CC34  68 76 25 00 00            PUSH 0x2576
0055CC39  E8 02 35 15 00            CALL 0x006b0140
0055CC3E  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0055CC41  50                        PUSH EAX
0055CC42  68 1C 41 7C 00            PUSH 0x7c411c
0055CC47  52                        PUSH EDX
0055CC48  FF 15 E8 BD 85 00         CALL dword ptr [0x0085bde8]
0055CC4E  8A 43 09                  MOV AL,byte ptr [EBX + 0x9]
0055CC51  83 C4 10                  ADD ESP,0x10
0055CC54  84 C0                     TEST AL,AL
0055CC56  74 21                     JZ 0x0055cc79
0055CC58  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
0055CC5B  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0055CC5E  50                        PUSH EAX
0055CC5F  51                        PUSH ECX
0055CC60  8B CB                     MOV ECX,EBX
0055CC62  E8 CA 7B EA FF            CALL 0x00404831
0055CC67  8D 45 0C                  LEA EAX,[EBP + 0xc]
0055CC6A  50                        PUSH EAX
0055CC6B  E8 F0 E3 14 00            CALL 0x006ab060
0055CC70  5F                        POP EDI
0055CC71  5E                        POP ESI
0055CC72  5B                        POP EBX
0055CC73  8B E5                     MOV ESP,EBP
0055CC75  5D                        POP EBP
0055CC76  C2 14 00                  RET 0x14
LAB_0055cc79:
0055CC79  8B 0D 4C 17 81 00         MOV ECX,dword ptr [0x0081174c]
0055CC7F  85 C9                     TEST ECX,ECX
0055CC81  74 23                     JZ 0x0055cca6
0055CC83  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
0055CC86  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0055CC89  6A 05                     PUSH 0x5
0055CC8B  52                        PUSH EDX
0055CC8C  50                        PUSH EAX
0055CC8D  6A 04                     PUSH 0x4
0055CC8F  E8 E8 67 EA FF            CALL 0x0040347c
0055CC94  8D 45 0C                  LEA EAX,[EBP + 0xc]
0055CC97  50                        PUSH EAX
0055CC98  E8 C3 E3 14 00            CALL 0x006ab060
0055CC9D  5F                        POP EDI
0055CC9E  5E                        POP ESI
0055CC9F  5B                        POP EBX
0055CCA0  8B E5                     MOV ESP,EBP
0055CCA2  5D                        POP EBP
0055CCA3  C2 14 00                  RET 0x14
LAB_0055cca6:
0055CCA6  A1 6C 17 81 00            MOV EAX,[0x0081176c]
0055CCAB  85 C0                     TEST EAX,EAX
0055CCAD  74 5A                     JZ 0x0055cd09
0055CCAF  B9 14 01 00 00            MOV ECX,0x114
0055CCB4  33 C0                     XOR EAX,EAX
0055CCB6  8D BD 7C FB FF FF         LEA EDI,[EBP + 0xfffffb7c]
0055CCBC  6A 40                     PUSH 0x40
0055CCBE  F3 AB                     STOSD.REP ES:EDI
0055CCC0  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0055CCC3  8D 95 7C FB FF FF         LEA EDX,[EBP + 0xfffffb7c]
0055CCC9  51                        PUSH ECX
0055CCCA  52                        PUSH EDX
0055CCCB  AA                        STOSB ES:EDI
0055CCCC  E8 6F 16 1D 00            CALL 0x0072e340
0055CCD1  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
0055CCD4  68 10 04 00 00            PUSH 0x410
0055CCD9  8D 8D BC FB FF FF         LEA ECX,[EBP + 0xfffffbbc]
0055CCDF  50                        PUSH EAX
0055CCE0  51                        PUSH ECX
0055CCE1  C6 85 BB FB FF FF 00      MOV byte ptr [EBP + 0xfffffbbb],0x0
0055CCE8  E8 53 16 1D 00            CALL 0x0072e340
0055CCED  8B 0D 6C 17 81 00         MOV ECX,dword ptr [0x0081176c]
0055CCF3  83 C4 18                  ADD ESP,0x18
0055CCF6  8D 95 7C FB FF FF         LEA EDX,[EBP + 0xfffffb7c]
0055CCFC  C6 85 BF FC FF FF 00      MOV byte ptr [EBP + 0xfffffcbf],0x0
0055CD03  52                        PUSH EDX
0055CD04  E8 B3 5E EA FF            CALL 0x00402bbc
LAB_0055cd09:
0055CD09  8D 45 0C                  LEA EAX,[EBP + 0xc]
0055CD0C  50                        PUSH EAX
0055CD0D  E8 4E E3 14 00            CALL 0x006ab060
0055CD12  5F                        POP EDI
0055CD13  5E                        POP ESI
0055CD14  5B                        POP EBX
0055CD15  8B E5                     MOV ESP,EBP
0055CD17  5D                        POP EBP
0055CD18  C2 14 00                  RET 0x14
switchD_0055c862::caseD_13:
0055CD1B  8A 43 09                  MOV AL,byte ptr [EBX + 0x9]
0055CD1E  84 C0                     TEST AL,AL
0055CD20  74 16                     JZ 0x0055cd38
0055CD22  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
0055CD25  51                        PUSH ECX
0055CD26  6A 00                     PUSH 0x0
0055CD28  8B CB                     MOV ECX,EBX
0055CD2A  E8 02 7B EA FF            CALL 0x00404831
0055CD2F  5F                        POP EDI
0055CD30  5E                        POP ESI
0055CD31  5B                        POP EBX
0055CD32  8B E5                     MOV ESP,EBP
0055CD34  5D                        POP EBP
0055CD35  C2 14 00                  RET 0x14
LAB_0055cd38:
0055CD38  8B 0D 4C 17 81 00         MOV ECX,dword ptr [0x0081174c]
0055CD3E  85 C9                     TEST ECX,ECX
0055CD40  74 1B                     JZ 0x0055cd5d
0055CD42  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
0055CD45  6A 05                     PUSH 0x5
0055CD47  52                        PUSH EDX
0055CD48  68 A0 16 80 00            PUSH 0x8016a0
0055CD4D  6A 03                     PUSH 0x3
0055CD4F  E8 28 67 EA FF            CALL 0x0040347c
0055CD54  5F                        POP EDI
0055CD55  5E                        POP ESI
0055CD56  5B                        POP EBX
0055CD57  8B E5                     MOV ESP,EBP
0055CD59  5D                        POP EBP
0055CD5A  C2 14 00                  RET 0x14
LAB_0055cd5d:
0055CD5D  A1 6C 17 81 00            MOV EAX,[0x0081176c]
0055CD62  85 C0                     TEST EAX,EAX
0055CD64  0F 84 90 02 00 00         JZ 0x0055cffa
0055CD6A  B9 14 01 00 00            MOV ECX,0x114
0055CD6F  33 C0                     XOR EAX,EAX
0055CD71  8D BD 7C FB FF FF         LEA EDI,[EBP + 0xfffffb7c]
0055CD77  8D 95 7C FB FF FF         LEA EDX,[EBP + 0xfffffb7c]
0055CD7D  F3 AB                     STOSD.REP ES:EDI
0055CD7F  AA                        STOSB ES:EDI
0055CD80  BF A0 16 80 00            MOV EDI,0x8016a0
0055CD85  83 C9 FF                  OR ECX,0xffffffff
0055CD88  33 C0                     XOR EAX,EAX
0055CD8A  68 10 04 00 00            PUSH 0x410
0055CD8F  F2 AE                     SCASB.REPNE ES:EDI
0055CD91  F7 D1                     NOT ECX
0055CD93  2B F9                     SUB EDI,ECX
0055CD95  8B C1                     MOV EAX,ECX
0055CD97  8B F7                     MOV ESI,EDI
0055CD99  8B FA                     MOV EDI,EDX
0055CD9B  8D 95 BC FB FF FF         LEA EDX,[EBP + 0xfffffbbc]
0055CDA1  C1 E9 02                  SHR ECX,0x2
0055CDA4  F3 A5                     MOVSD.REP ES:EDI,ESI
0055CDA6  8B C8                     MOV ECX,EAX
0055CDA8  83 E1 03                  AND ECX,0x3
0055CDAB  F3 A4                     MOVSB.REP ES:EDI,ESI
0055CDAD  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
0055CDB0  51                        PUSH ECX
0055CDB1  52                        PUSH EDX
0055CDB2  E8 89 15 1D 00            CALL 0x0072e340
0055CDB7  8B 0D 6C 17 81 00         MOV ECX,dword ptr [0x0081176c]
0055CDBD  83 C4 0C                  ADD ESP,0xc
0055CDC0  8D 85 7C FB FF FF         LEA EAX,[EBP + 0xfffffb7c]
0055CDC6  C6 85 BF FC FF FF 00      MOV byte ptr [EBP + 0xfffffcbf],0x0
0055CDCD  50                        PUSH EAX
0055CDCE  E8 E9 5D EA FF            CALL 0x00402bbc
0055CDD3  5F                        POP EDI
0055CDD4  5E                        POP ESI
0055CDD5  5B                        POP EBX
0055CDD6  8B E5                     MOV ESP,EBP
0055CDD8  5D                        POP EBP
0055CDD9  C2 14 00                  RET 0x14
switchD_0055c862::caseD_7:
0055CDDC  8A 43 09                  MOV AL,byte ptr [EBX + 0x9]
0055CDDF  84 C0                     TEST AL,AL
0055CDE1  0F 85 13 02 00 00         JNZ 0x0055cffa
0055CDE7  8B 0D 4C 17 81 00         MOV ECX,dword ptr [0x0081174c]
0055CDED  85 C9                     TEST ECX,ECX
0055CDEF  0F 84 05 02 00 00         JZ 0x0055cffa
0055CDF5  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
0055CDF8  6A 05                     PUSH 0x5
0055CDFA  52                        PUSH EDX
0055CDFB  68 A0 16 80 00            PUSH 0x8016a0
0055CE00  6A 01                     PUSH 0x1
0055CE02  E8 75 66 EA FF            CALL 0x0040347c
0055CE07  8B 0D 4C 17 81 00         MOV ECX,dword ptr [0x0081174c]
0055CE0D  E8 72 5E EA FF            CALL 0x00402c84
0055CE12  5F                        POP EDI
0055CE13  5E                        POP ESI
0055CE14  5B                        POP EBX
0055CE15  8B E5                     MOV ESP,EBP
0055CE17  5D                        POP EBP
0055CE18  C2 14 00                  RET 0x14
switchD_0055c862::caseD_1:
0055CE1B  8A 43 09                  MOV AL,byte ptr [EBX + 0x9]
0055CE1E  84 C0                     TEST AL,AL
0055CE20  0F 85 D4 01 00 00         JNZ 0x0055cffa
0055CE26  A1 4C 17 81 00            MOV EAX,[0x0081174c]
0055CE2B  85 C0                     TEST EAX,EAX
0055CE2D  0F 84 C7 01 00 00         JZ 0x0055cffa
0055CE33  8B 5D 14                  MOV EBX,dword ptr [EBP + 0x14]
0055CE36  6A 10                     PUSH 0x10
0055CE38  8D 45 D0                  LEA EAX,[EBP + -0x30]
0055CE3B  53                        PUSH EBX
0055CE3C  50                        PUSH EAX
0055CE3D  E8 FE 14 1D 00            CALL 0x0072e340
0055CE42  8D 4D F1                  LEA ECX,[EBP + -0xf]
0055CE45  8D 55 ED                  LEA EDX,[EBP + -0x13]
0055CE48  51                        PUSH ECX
0055CE49  8D 45 E9                  LEA EAX,[EBP + -0x17]
0055CE4C  52                        PUSH EDX
0055CE4D  8D 4D E5                  LEA ECX,[EBP + -0x1b]
0055CE50  50                        PUSH EAX
0055CE51  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
0055CE54  8D 55 E0                  LEA EDX,[EBP + -0x20]
0055CE57  51                        PUSH ECX
0055CE58  52                        PUSH EDX
0055CE59  68 D0 94 7C 00            PUSH 0x7c94d0
0055CE5E  50                        PUSH EAX
0055CE5F  C6 45 DF 00               MOV byte ptr [EBP + -0x21],0x0
0055CE63  E8 18 20 1D 00            CALL 0x0072ee80
0055CE68  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0055CE6B  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
0055CE6E  83 C4 28                  ADD ESP,0x28
0055CE71  8D 45 D0                  LEA EAX,[EBP + -0x30]
0055CE74  89 4D F5                  MOV dword ptr [EBP + -0xb],ECX
0055CE77  8B 0D 4C 17 81 00         MOV ECX,dword ptr [0x0081174c]
0055CE7D  50                        PUSH EAX
0055CE7E  89 55 F9                  MOV dword ptr [EBP + -0x7],EDX
0055CE81  E8 E3 73 EA FF            CALL 0x00404269
0055CE86  8B FB                     MOV EDI,EBX
0055CE88  83 C9 FF                  OR ECX,0xffffffff
0055CE8B  33 C0                     XOR EAX,EAX
0055CE8D  F2 AE                     SCASB.REPNE ES:EDI
0055CE8F  F7 D1                     NOT ECX
0055CE91  83 F9 64                  CMP ECX,0x64
0055CE94  0F 83 60 01 00 00         JNC 0x0055cffa
0055CE9A  A0 60 73 80 00            MOV AL,[0x00807360]
0055CE9F  84 C0                     TEST AL,AL
0055CEA1  0F 84 53 01 00 00         JZ 0x0055cffa
0055CEA7  83 FE 02                  CMP ESI,0x2
0055CEAA  0F 85 4A 01 00 00         JNZ 0x0055cffa
0055CEB0  8B 0D 18 76 80 00         MOV ECX,dword ptr [0x00807618]
0055CEB6  51                        PUSH ECX
0055CEB7  68 9A 25 00 00            PUSH 0x259a
0055CEBC  E8 7F 32 15 00            CALL 0x006b0140
0055CEC1  50                        PUSH EAX
0055CEC2  53                        PUSH EBX
0055CEC3  8D 95 7C F9 FF FF         LEA EDX,[EBP + 0xfffff97c]
0055CEC9  68 1C 41 7C 00            PUSH 0x7c411c
0055CECE  52                        PUSH EDX
0055CECF  FF 15 E8 BD 85 00         CALL dword ptr [0x0085bde8]
0055CED5  83 C4 10                  ADD ESP,0x10
0055CED8  8D 85 7C F9 FF FF         LEA EAX,[EBP + 0xfffff97c]
0055CEDE  6A 05                     PUSH 0x5
0055CEE0  50                        PUSH EAX
0055CEE1  E9 8E 00 00 00            JMP 0x0055cf74
switchD_0055c862::caseD_3:
0055CEE6  8A 43 09                  MOV AL,byte ptr [EBX + 0x9]
0055CEE9  84 C0                     TEST AL,AL
0055CEEB  0F 85 09 01 00 00         JNZ 0x0055cffa
0055CEF1  A1 4C 17 81 00            MOV EAX,[0x0081174c]
0055CEF6  85 C0                     TEST EAX,EAX
0055CEF8  0F 84 FC 00 00 00         JZ 0x0055cffa
0055CEFE  8B 75 14                  MOV ESI,dword ptr [EBP + 0x14]
0055CF01  6A 10                     PUSH 0x10
0055CF03  8D 4D D0                  LEA ECX,[EBP + -0x30]
0055CF06  56                        PUSH ESI
0055CF07  51                        PUSH ECX
0055CF08  E8 33 14 1D 00            CALL 0x0072e340
0055CF0D  8B 0D 4C 17 81 00         MOV ECX,dword ptr [0x0081174c]
0055CF13  83 C4 0C                  ADD ESP,0xc
0055CF16  8D 55 D0                  LEA EDX,[EBP + -0x30]
0055CF19  C6 45 DF 00               MOV byte ptr [EBP + -0x21],0x0
0055CF1D  52                        PUSH EDX
0055CF1E  E8 C1 6B EA FF            CALL 0x00403ae4
0055CF23  8B FE                     MOV EDI,ESI
0055CF25  83 C9 FF                  OR ECX,0xffffffff
0055CF28  33 C0                     XOR EAX,EAX
0055CF2A  F2 AE                     SCASB.REPNE ES:EDI
0055CF2C  F7 D1                     NOT ECX
0055CF2E  83 F9 64                  CMP ECX,0x64
0055CF31  0F 83 C3 00 00 00         JNC 0x0055cffa
0055CF37  A0 60 73 80 00            MOV AL,[0x00807360]
0055CF3C  84 C0                     TEST AL,AL
0055CF3E  0F 84 B6 00 00 00         JZ 0x0055cffa
0055CF44  A1 18 76 80 00            MOV EAX,[0x00807618]
0055CF49  50                        PUSH EAX
0055CF4A  68 9B 25 00 00            PUSH 0x259b
0055CF4F  E8 EC 31 15 00            CALL 0x006b0140
0055CF54  50                        PUSH EAX
0055CF55  56                        PUSH ESI
0055CF56  8D 8D 7C F9 FF FF         LEA ECX,[EBP + 0xfffff97c]
0055CF5C  68 1C 41 7C 00            PUSH 0x7c411c
0055CF61  51                        PUSH ECX
0055CF62  FF 15 E8 BD 85 00         CALL dword ptr [0x0085bde8]
0055CF68  83 C4 10                  ADD ESP,0x10
0055CF6B  8D 95 7C F9 FF FF         LEA EDX,[EBP + 0xfffff97c]
0055CF71  6A 05                     PUSH 0x5
0055CF73  52                        PUSH EDX
LAB_0055cf74:
0055CF74  8B 0D 4C 17 81 00         MOV ECX,dword ptr [0x0081174c]
0055CF7A  68 A0 16 80 00            PUSH 0x8016a0
0055CF7F  6A 01                     PUSH 0x1
0055CF81  E8 F6 64 EA FF            CALL 0x0040347c
0055CF86  5F                        POP EDI
0055CF87  5E                        POP ESI
0055CF88  5B                        POP EBX
0055CF89  8B E5                     MOV ESP,EBP
0055CF8B  5D                        POP EBP
0055CF8C  C2 14 00                  RET 0x14
switchD_0055c862::caseD_9:
0055CF8F  8A 43 09                  MOV AL,byte ptr [EBX + 0x9]
0055CF92  84 C0                     TEST AL,AL
0055CF94  75 64                     JNZ 0x0055cffa
0055CF96  A1 4C 17 81 00            MOV EAX,[0x0081174c]
0055CF9B  85 C0                     TEST EAX,EAX
0055CF9D  74 5B                     JZ 0x0055cffa
0055CF9F  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
0055CFA2  6A 10                     PUSH 0x10
0055CFA4  8D 4D D0                  LEA ECX,[EBP + -0x30]
0055CFA7  50                        PUSH EAX
0055CFA8  51                        PUSH ECX
0055CFA9  E8 92 13 1D 00            CALL 0x0072e340
0055CFAE  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0055CFB1  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
0055CFB4  83 C4 0C                  ADD ESP,0xc
0055CFB7  8D 4D D0                  LEA ECX,[EBP + -0x30]
0055CFBA  C6 45 DF 00               MOV byte ptr [EBP + -0x21],0x0
0055CFBE  89 55 F5                  MOV dword ptr [EBP + -0xb],EDX
0055CFC1  51                        PUSH ECX
0055CFC2  8B 0D 4C 17 81 00         MOV ECX,dword ptr [0x0081174c]
0055CFC8  89 45 F9                  MOV dword ptr [EBP + -0x7],EAX
0055CFCB  E8 A5 7A EA FF            CALL 0x00404a75
0055CFD0  5F                        POP EDI
0055CFD1  5E                        POP ESI
0055CFD2  5B                        POP EBX
0055CFD3  8B E5                     MOV ESP,EBP
0055CFD5  5D                        POP EBP
0055CFD6  C2 14 00                  RET 0x14
switchD_0055c862::caseD_d:
0055CFD9  A1 4C 17 81 00            MOV EAX,[0x0081174c]
0055CFDE  85 C0                     TEST EAX,EAX
0055CFE0  74 18                     JZ 0x0055cffa
0055CFE2  C7 43 1B 56 61 00 00      MOV dword ptr [EBX + 0x1b],0x6156
0055CFE9  89 73 1F                  MOV dword ptr [EBX + 0x1f],ESI
0055CFEC  8B 0D 4C 17 81 00         MOV ECX,dword ptr [0x0081174c]
0055CFF2  83 C3 0B                  ADD EBX,0xb
0055CFF5  53                        PUSH EBX
0055CFF6  8B 11                     MOV EDX,dword ptr [ECX]
0055CFF8  FF 12                     CALL dword ptr [EDX]
switchD_0055c862::caseD_8:
0055CFFA  5F                        POP EDI
0055CFFB  5E                        POP ESI
0055CFFC  5B                        POP EBX
0055CFFD  8B E5                     MOV ESP,EBP
0055CFFF  5D                        POP EBP
0055D000  C2 14 00                  RET 0x14
