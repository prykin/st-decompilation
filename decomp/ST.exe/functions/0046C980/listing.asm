STBoatC::BackBuild:
0046C980  55                        PUSH EBP
0046C981  8B EC                     MOV EBP,ESP
0046C983  51                        PUSH ECX
0046C984  56                        PUSH ESI
0046C985  8B F1                     MOV ESI,ECX
0046C987  57                        PUSH EDI
0046C988  8B 86 08 05 00 00         MOV EAX,dword ptr [ESI + 0x508]
0046C98E  83 F8 07                  CMP EAX,0x7
0046C991  0F 87 12 04 00 00         JA 0x0046cda9
switchD_0046c997::switchD:
0046C997  FF 24 85 DC CD 46 00      JMP dword ptr [EAX*0x4 + 0x46cddc]
switchD_0046c997::caseD_5:
0046C99E  8B 86 02 05 00 00         MOV EAX,dword ptr [ESI + 0x502]
0046C9A4  85 C0                     TEST EAX,EAX
0046C9A6  75 16                     JNZ 0x0046c9be
0046C9A8  8B 06                     MOV EAX,dword ptr [ESI]
0046C9AA  8B CE                     MOV ECX,ESI
0046C9AC  FF 90 D8 00 00 00         CALL dword ptr [EAX + 0xd8]
0046C9B2  F7 D8                     NEG EAX
0046C9B4  5F                        POP EDI
0046C9B5  5E                        POP ESI
0046C9B6  1B C0                     SBB EAX,EAX
0046C9B8  8B E5                     MOV ESP,EBP
0046C9BA  5D                        POP EBP
0046C9BB  C2 04 00                  RET 0x4
LAB_0046c9be:
0046C9BE  C7 86 08 05 00 00 06 00 00 00  MOV dword ptr [ESI + 0x508],0x6
LAB_0046c9c8:
0046C9C8  8B 16                     MOV EDX,dword ptr [ESI]
0046C9CA  8B CE                     MOV ECX,ESI
0046C9CC  FF 92 D8 00 00 00         CALL dword ptr [EDX + 0xd8]
0046C9D2  F7 D8                     NEG EAX
0046C9D4  1B C0                     SBB EAX,EAX
0046C9D6  5F                        POP EDI
0046C9D7  24 FD                     AND AL,0xfd
0046C9D9  5E                        POP ESI
0046C9DA  83 C0 02                  ADD EAX,0x2
0046C9DD  8B E5                     MOV ESP,EBP
0046C9DF  5D                        POP EBP
0046C9E0  C2 04 00                  RET 0x4
switchD_0046c997::caseD_0:
0046C9E3  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0046C9E6  8B CE                     MOV ECX,ESI
0046C9E8  50                        PUSH EAX
0046C9E9  E8 02 74 F9 FF            CALL 0x00403df0
0046C9EE  5F                        POP EDI
0046C9EF  5E                        POP ESI
0046C9F0  0F BF C0                  MOVSX EAX,AX
0046C9F3  8B E5                     MOV ESP,EBP
0046C9F5  5D                        POP EBP
0046C9F6  C2 04 00                  RET 0x4
switchD_0046c997::caseD_2:
0046C9F9  8B 86 0C 05 00 00         MOV EAX,dword ptr [ESI + 0x50c]
0046C9FF  85 C0                     TEST EAX,EAX
0046CA01  0F 84 FD 01 00 00         JZ 0x0046cc04
0046CA07  83 F8 01                  CMP EAX,0x1
0046CA0A  0F 84 F4 01 00 00         JZ 0x0046cc04
0046CA10  83 F8 02                  CMP EAX,0x2
0046CA13  0F 84 EB 01 00 00         JZ 0x0046cc04
0046CA19  83 F8 03                  CMP EAX,0x3
0046CA1C  BF 04 00 00 00            MOV EDI,0x4
0046CA21  75 53                     JNZ 0x0046ca76
0046CA23  66 8B 86 00 05 00 00      MOV AX,word ptr [ESI + 0x500]
0046CA2A  66 8B 8E FE 04 00 00      MOV CX,word ptr [ESI + 0x4fe]
0046CA31  66 69 C0 C8 00            IMUL AX,AX,0xc8
0046CA36  66 69 C9 C9 00            IMUL CX,CX,0xc9
0046CA3B  83 C0 64                  ADD EAX,0x64
0046CA3E  8B 16                     MOV EDX,dword ptr [ESI]
0046CA40  50                        PUSH EAX
0046CA41  66 8B 86 FC 04 00 00      MOV AX,word ptr [ESI + 0x4fc]
0046CA48  66 69 C0 C9 00            IMUL AX,AX,0xc9
0046CA4D  83 C1 64                  ADD ECX,0x64
0046CA50  83 C0 64                  ADD EAX,0x64
0046CA53  51                        PUSH ECX
0046CA54  66 8B 4E 45               MOV CX,word ptr [ESI + 0x45]
0046CA58  50                        PUSH EAX
0046CA59  66 8B 46 43               MOV AX,word ptr [ESI + 0x43]
0046CA5D  51                        PUSH ECX
0046CA5E  66 8B 4E 41               MOV CX,word ptr [ESI + 0x41]
0046CA62  50                        PUSH EAX
0046CA63  51                        PUSH ECX
0046CA64  8B CE                     MOV ECX,ESI
0046CA66  FF 52 10                  CALL dword ptr [EDX + 0x10]
0046CA69  66 89 86 06 05 00 00      MOV word ptr [ESI + 0x506],AX
0046CA70  89 BE 0C 05 00 00         MOV dword ptr [ESI + 0x50c],EDI
LAB_0046ca76:
0046CA76  39 BE 0C 05 00 00         CMP dword ptr [ESI + 0x50c],EDI
0046CA7C  0F 85 95 00 00 00         JNZ 0x0046cb17
0046CA82  66 8B 96 06 05 00 00      MOV DX,word ptr [ESI + 0x506]
0046CA89  8B CE                     MOV ECX,ESI
0046CA8B  52                        PUSH EDX
0046CA8C  E8 21 66 F9 FF            CALL 0x004030b2
0046CA91  50                        PUSH EAX
0046CA92  8B CE                     MOV ECX,ESI
0046CA94  E8 63 58 F9 FF            CALL 0x004022fc
0046CA99  0F BF C0                  MOVSX EAX,AX
0046CA9C  83 F8 FF                  CMP EAX,-0x1
0046CA9F  74 29                     JZ 0x0046caca
0046CAA1  85 C0                     TEST EAX,EAX
0046CAA3  75 72                     JNZ 0x0046cb17
0046CAA5  8B 06                     MOV EAX,dword ptr [ESI]
0046CAA7  8B CE                     MOV ECX,ESI
0046CAA9  C7 86 0C 05 00 00 05 00 00 00  MOV dword ptr [ESI + 0x50c],0x5
0046CAB3  FF 90 D8 00 00 00         CALL dword ptr [EAX + 0xd8]
0046CAB9  F7 D8                     NEG EAX
0046CABB  1B C0                     SBB EAX,EAX
0046CABD  5F                        POP EDI
0046CABE  24 FD                     AND AL,0xfd
0046CAC0  5E                        POP ESI
0046CAC1  83 C0 02                  ADD EAX,0x2
0046CAC4  8B E5                     MOV ESP,EBP
0046CAC6  5D                        POP EBP
0046CAC7  C2 04 00                  RET 0x4
LAB_0046caca:
0046CACA  68 D4 A7 7A 00            PUSH 0x7aa7d4
0046CACF  68 CC 4C 7A 00            PUSH 0x7a4ccc
0046CAD4  6A 00                     PUSH 0x0
0046CAD6  6A 00                     PUSH 0x0
0046CAD8  68 3E 25 00 00            PUSH 0x253e
0046CADD  68 3C 9D 7A 00            PUSH 0x7a9d3c
0046CAE2  E8 E9 09 24 00            CALL 0x006ad4d0
0046CAE7  83 C4 18                  ADD ESP,0x18
0046CAEA  85 C0                     TEST EAX,EAX
0046CAEC  74 01                     JZ 0x0046caef
0046CAEE  CC                        INT3
LAB_0046caef:
0046CAEF  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
0046CAF5  68 3F 25 00 00            PUSH 0x253f
0046CAFA  68 3C 9D 7A 00            PUSH 0x7a9d3c
0046CAFF  51                        PUSH ECX
0046CB00  68 FF FF 00 00            PUSH 0xffff
0046CB05  E8 36 93 23 00            CALL 0x006a5e40
0046CB0A  5F                        POP EDI
0046CB0B  B8 FF FF 00 00            MOV EAX,0xffff
0046CB10  5E                        POP ESI
0046CB11  8B E5                     MOV ESP,EBP
0046CB13  5D                        POP EBP
0046CB14  C2 04 00                  RET 0x4
LAB_0046cb17:
0046CB17  8B 86 0C 05 00 00         MOV EAX,dword ptr [ESI + 0x50c]
0046CB1D  BF 06 00 00 00            MOV EDI,0x6
0046CB22  83 F8 05                  CMP EAX,0x5
0046CB25  75 50                     JNZ 0x0046cb77
0046CB27  8A 56 61                  MOV DL,byte ptr [ESI + 0x61]
0046CB2A  66 8B 86 00 05 00 00      MOV AX,word ptr [ESI + 0x500]
0046CB31  66 8B 8E FE 04 00 00      MOV CX,word ptr [ESI + 0x4fe]
0046CB38  52                        PUSH EDX
0046CB39  66 8B 96 FC 04 00 00      MOV DX,word ptr [ESI + 0x4fc]
0046CB40  66 69 C0 C8 00            IMUL AX,AX,0xc8
0046CB45  66 69 C9 C9 00            IMUL CX,CX,0xc9
0046CB4A  66 69 D2 C9 00            IMUL DX,DX,0xc9
0046CB4F  83 C0 64                  ADD EAX,0x64
0046CB52  83 C1 64                  ADD ECX,0x64
0046CB55  50                        PUSH EAX
0046CB56  66 8B 46 45               MOV AX,word ptr [ESI + 0x45]
0046CB5A  83 C2 64                  ADD EDX,0x64
0046CB5D  51                        PUSH ECX
0046CB5E  66 8B 4E 43               MOV CX,word ptr [ESI + 0x43]
0046CB62  52                        PUSH EDX
0046CB63  66 8B 56 41               MOV DX,word ptr [ESI + 0x41]
0046CB67  50                        PUSH EAX
0046CB68  51                        PUSH ECX
0046CB69  52                        PUSH EDX
0046CB6A  8B CE                     MOV ECX,ESI
0046CB6C  E8 E4 58 F9 FF            CALL 0x00402455
0046CB71  89 BE 0C 05 00 00         MOV dword ptr [ESI + 0x50c],EDI
LAB_0046cb77:
0046CB77  39 BE 0C 05 00 00         CMP dword ptr [ESI + 0x50c],EDI
0046CB7D  0F 85 45 FE FF FF         JNZ 0x0046c9c8
0046CB83  8D 45 08                  LEA EAX,[EBP + 0x8]
0046CB86  8D 4D FC                  LEA ECX,[EBP + -0x4]
0046CB89  50                        PUSH EAX
0046CB8A  51                        PUSH ECX
0046CB8B  8B CE                     MOV ECX,ESI
0046CB8D  E8 B5 5C F9 FF            CALL 0x00402847
0046CB92  0F BF C0                  MOVSX EAX,AX
0046CB95  83 F8 FF                  CMP EAX,-0x1
0046CB98  74 1E                     JZ 0x0046cbb8
0046CB9A  85 C0                     TEST EAX,EAX
0046CB9C  0F 85 26 FE FF FF         JNZ 0x0046c9c8
0046CBA2  8B 16                     MOV EDX,dword ptr [ESI]
0046CBA4  8B CE                     MOV ECX,ESI
0046CBA6  FF 92 D8 00 00 00         CALL dword ptr [EDX + 0xd8]
0046CBAC  F7 D8                     NEG EAX
0046CBAE  5F                        POP EDI
0046CBAF  5E                        POP ESI
0046CBB0  1B C0                     SBB EAX,EAX
0046CBB2  8B E5                     MOV ESP,EBP
0046CBB4  5D                        POP EBP
0046CBB5  C2 04 00                  RET 0x4
LAB_0046cbb8:
0046CBB8  68 AC A7 7A 00            PUSH 0x7aa7ac
0046CBBD  68 CC 4C 7A 00            PUSH 0x7a4ccc
0046CBC2  6A 00                     PUSH 0x0
0046CBC4  6A 00                     PUSH 0x0
0046CBC6  68 54 25 00 00            PUSH 0x2554
0046CBCB  68 3C 9D 7A 00            PUSH 0x7a9d3c
0046CBD0  E8 FB 08 24 00            CALL 0x006ad4d0
0046CBD5  83 C4 18                  ADD ESP,0x18
0046CBD8  85 C0                     TEST EAX,EAX
0046CBDA  74 01                     JZ 0x0046cbdd
0046CBDC  CC                        INT3
LAB_0046cbdd:
0046CBDD  68 55 25 00 00            PUSH 0x2555
STBoatC::BackBuild::cf_error_exit_0046CBE2:
0046CBE2  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
0046CBE7  68 3C 9D 7A 00            PUSH 0x7a9d3c
0046CBEC  50                        PUSH EAX
0046CBED  68 FF FF 00 00            PUSH 0xffff
0046CBF2  E8 49 92 23 00            CALL 0x006a5e40
0046CBF7  5F                        POP EDI
0046CBF8  B8 FF FF 00 00            MOV EAX,0xffff
0046CBFD  5E                        POP ESI
0046CBFE  8B E5                     MOV ESP,EBP
0046CC00  5D                        POP EBP
0046CC01  C2 04 00                  RET 0x4
LAB_0046cc04:
0046CC04  5F                        POP EDI
0046CC05  33 C0                     XOR EAX,EAX
0046CC07  5E                        POP ESI
0046CC08  8B E5                     MOV ESP,EBP
0046CC0A  5D                        POP EBP
0046CC0B  C2 04 00                  RET 0x4
switchD_0046c997::caseD_6:
0046CC0E  8B 86 0C 05 00 00         MOV EAX,dword ptr [ESI + 0x50c]
0046CC14  BF 01 00 00 00            MOV EDI,0x1
0046CC19  85 C0                     TEST EAX,EAX
0046CC1B  75 53                     JNZ 0x0046cc70
0046CC1D  66 8B 8E 00 05 00 00      MOV CX,word ptr [ESI + 0x500]
0046CC24  66 8B 96 FE 04 00 00      MOV DX,word ptr [ESI + 0x4fe]
0046CC2B  66 69 C9 C8 00            IMUL CX,CX,0xc8
0046CC30  66 69 D2 C9 00            IMUL DX,DX,0xc9
0046CC35  83 C1 64                  ADD ECX,0x64
0046CC38  8B 06                     MOV EAX,dword ptr [ESI]
0046CC3A  51                        PUSH ECX
0046CC3B  66 8B 8E FC 04 00 00      MOV CX,word ptr [ESI + 0x4fc]
0046CC42  66 69 C9 C9 00            IMUL CX,CX,0xc9
0046CC47  83 C2 64                  ADD EDX,0x64
0046CC4A  83 C1 64                  ADD ECX,0x64
0046CC4D  52                        PUSH EDX
0046CC4E  66 8B 56 45               MOV DX,word ptr [ESI + 0x45]
0046CC52  51                        PUSH ECX
0046CC53  66 8B 4E 43               MOV CX,word ptr [ESI + 0x43]
0046CC57  52                        PUSH EDX
0046CC58  66 8B 56 41               MOV DX,word ptr [ESI + 0x41]
0046CC5C  51                        PUSH ECX
0046CC5D  52                        PUSH EDX
0046CC5E  8B CE                     MOV ECX,ESI
0046CC60  FF 50 10                  CALL dword ptr [EAX + 0x10]
0046CC63  66 89 86 06 05 00 00      MOV word ptr [ESI + 0x506],AX
0046CC6A  89 BE 0C 05 00 00         MOV dword ptr [ESI + 0x50c],EDI
LAB_0046cc70:
0046CC70  39 BE 0C 05 00 00         CMP dword ptr [ESI + 0x50c],EDI
0046CC76  75 61                     JNZ 0x0046ccd9
0046CC78  66 8B 86 06 05 00 00      MOV AX,word ptr [ESI + 0x506]
0046CC7F  8B CE                     MOV ECX,ESI
0046CC81  50                        PUSH EAX
0046CC82  E8 2B 64 F9 FF            CALL 0x004030b2
0046CC87  50                        PUSH EAX
0046CC88  8B CE                     MOV ECX,ESI
0046CC8A  E8 6D 56 F9 FF            CALL 0x004022fc
0046CC8F  0F BF C0                  MOVSX EAX,AX
0046CC92  83 F8 FF                  CMP EAX,-0x1
0046CC95  74 13                     JZ 0x0046ccaa
0046CC97  85 C0                     TEST EAX,EAX
0046CC99  75 3E                     JNZ 0x0046ccd9
0046CC9B  C7 86 0C 05 00 00 02 00 00 00  MOV dword ptr [ESI + 0x50c],0x2
0046CCA5  E9 1E FD FF FF            JMP 0x0046c9c8
LAB_0046ccaa:
0046CCAA  68 84 A7 7A 00            PUSH 0x7aa784
0046CCAF  68 CC 4C 7A 00            PUSH 0x7a4ccc
0046CCB4  6A 00                     PUSH 0x0
0046CCB6  6A 00                     PUSH 0x0
0046CCB8  68 6D 25 00 00            PUSH 0x256d
0046CCBD  68 3C 9D 7A 00            PUSH 0x7a9d3c
0046CCC2  E8 09 08 24 00            CALL 0x006ad4d0
0046CCC7  83 C4 18                  ADD ESP,0x18
0046CCCA  85 C0                     TEST EAX,EAX
0046CCCC  74 01                     JZ 0x0046cccf
0046CCCE  CC                        INT3
LAB_0046cccf:
0046CCCF  68 6E 25 00 00            PUSH 0x256e
0046CCD4  E9 09 FF FF FF            JMP 0x0046cbe2
LAB_0046ccd9:
0046CCD9  8B 86 0C 05 00 00         MOV EAX,dword ptr [ESI + 0x50c]
0046CCDF  BF 03 00 00 00            MOV EDI,0x3
0046CCE4  83 F8 02                  CMP EAX,0x2
0046CCE7  75 50                     JNZ 0x0046cd39
0046CCE9  8A 4E 61                  MOV CL,byte ptr [ESI + 0x61]
0046CCEC  66 8B 96 00 05 00 00      MOV DX,word ptr [ESI + 0x500]
0046CCF3  66 8B 86 FE 04 00 00      MOV AX,word ptr [ESI + 0x4fe]
0046CCFA  51                        PUSH ECX
0046CCFB  66 8B 8E FC 04 00 00      MOV CX,word ptr [ESI + 0x4fc]
0046CD02  66 69 D2 C8 00            IMUL DX,DX,0xc8
0046CD07  66 69 C0 C9 00            IMUL AX,AX,0xc9
0046CD0C  66 69 C9 C9 00            IMUL CX,CX,0xc9
0046CD11  83 C2 64                  ADD EDX,0x64
0046CD14  83 C0 64                  ADD EAX,0x64
0046CD17  52                        PUSH EDX
0046CD18  66 8B 56 45               MOV DX,word ptr [ESI + 0x45]
0046CD1C  83 C1 64                  ADD ECX,0x64
0046CD1F  50                        PUSH EAX
0046CD20  66 8B 46 43               MOV AX,word ptr [ESI + 0x43]
0046CD24  51                        PUSH ECX
0046CD25  66 8B 4E 41               MOV CX,word ptr [ESI + 0x41]
0046CD29  52                        PUSH EDX
0046CD2A  50                        PUSH EAX
0046CD2B  51                        PUSH ECX
0046CD2C  8B CE                     MOV ECX,ESI
0046CD2E  E8 22 57 F9 FF            CALL 0x00402455
0046CD33  89 BE 0C 05 00 00         MOV dword ptr [ESI + 0x50c],EDI
LAB_0046cd39:
0046CD39  39 BE 0C 05 00 00         CMP dword ptr [ESI + 0x50c],EDI
0046CD3F  0F 85 83 FC FF FF         JNZ 0x0046c9c8
0046CD45  8D 55 08                  LEA EDX,[EBP + 0x8]
0046CD48  8D 45 FC                  LEA EAX,[EBP + -0x4]
0046CD4B  52                        PUSH EDX
0046CD4C  50                        PUSH EAX
0046CD4D  8B CE                     MOV ECX,ESI
0046CD4F  E8 F3 5A F9 FF            CALL 0x00402847
0046CD54  0F BF C0                  MOVSX EAX,AX
0046CD57  83 F8 FF                  CMP EAX,-0x1
0046CD5A  74 1E                     JZ 0x0046cd7a
0046CD5C  85 C0                     TEST EAX,EAX
0046CD5E  0F 85 64 FC FF FF         JNZ 0x0046c9c8
0046CD64  8B 16                     MOV EDX,dword ptr [ESI]
0046CD66  8B CE                     MOV ECX,ESI
0046CD68  FF 92 D8 00 00 00         CALL dword ptr [EDX + 0xd8]
0046CD6E  F7 D8                     NEG EAX
0046CD70  5F                        POP EDI
0046CD71  5E                        POP ESI
0046CD72  1B C0                     SBB EAX,EAX
0046CD74  8B E5                     MOV ESP,EBP
0046CD76  5D                        POP EBP
0046CD77  C2 04 00                  RET 0x4
LAB_0046cd7a:
0046CD7A  68 5C A7 7A 00            PUSH 0x7aa75c
0046CD7F  68 CC 4C 7A 00            PUSH 0x7a4ccc
0046CD84  6A 00                     PUSH 0x0
0046CD86  6A 00                     PUSH 0x0
0046CD88  68 83 25 00 00            PUSH 0x2583
0046CD8D  68 3C 9D 7A 00            PUSH 0x7a9d3c
0046CD92  E8 39 07 24 00            CALL 0x006ad4d0
0046CD97  83 C4 18                  ADD ESP,0x18
0046CD9A  85 C0                     TEST EAX,EAX
0046CD9C  74 01                     JZ 0x0046cd9f
0046CD9E  CC                        INT3
LAB_0046cd9f:
0046CD9F  68 84 25 00 00            PUSH 0x2584
0046CDA4  E9 39 FE FF FF            JMP 0x0046cbe2
switchD_0046c997::default:
0046CDA9  68 44 A7 7A 00            PUSH 0x7aa744
0046CDAE  68 CC 4C 7A 00            PUSH 0x7a4ccc
0046CDB3  6A 00                     PUSH 0x0
0046CDB5  6A 00                     PUSH 0x0
0046CDB7  68 90 25 00 00            PUSH 0x2590
0046CDBC  68 3C 9D 7A 00            PUSH 0x7a9d3c
0046CDC1  E8 0A 07 24 00            CALL 0x006ad4d0
0046CDC6  83 C4 18                  ADD ESP,0x18
0046CDC9  85 C0                     TEST EAX,EAX
0046CDCB  74 01                     JZ 0x0046cdce
0046CDCD  CC                        INT3
LAB_0046cdce:
0046CDCE  5F                        POP EDI
0046CDCF  83 C8 FF                  OR EAX,0xffffffff
0046CDD2  5E                        POP ESI
0046CDD3  8B E5                     MOV ESP,EBP
0046CDD5  5D                        POP EBP
0046CDD6  C2 04 00                  RET 0x4
