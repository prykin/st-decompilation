STExplosion::GetMessage:
00603740  55                        PUSH EBP
00603741  8B EC                     MOV EBP,ESP
00603743  83 EC 50                  SUB ESP,0x50
00603746  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0060374B  53                        PUSH EBX
0060374C  56                        PUSH ESI
0060374D  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
00603750  33 F6                     XOR ESI,ESI
00603752  57                        PUSH EDI
00603753  8D 55 B4                  LEA EDX,[EBP + -0x4c]
00603756  8D 4D B0                  LEA ECX,[EBP + -0x50]
00603759  56                        PUSH ESI
0060375A  52                        PUSH EDX
0060375B  89 45 B0                  MOV dword ptr [EBP + -0x50],EAX
0060375E  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00603764  E8 87 A0 12 00            CALL 0x0072d7f0
00603769  8B F8                     MOV EDI,EAX
0060376B  83 C4 08                  ADD ESP,0x8
0060376E  3B FE                     CMP EDI,ESI
00603770  0F 85 A3 06 00 00         JNZ 0x00603e19
00603776  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
00603779  8B 7D F4                  MOV EDI,dword ptr [EBP + -0xc]
0060377C  53                        PUSH EBX
0060377D  8B CF                     MOV ECX,EDI
0060377F  E8 39 07 E0 FF            CALL 0x00403ebd
00603784  3D FF FF 00 00            CMP EAX,0xffff
00603789  0F 84 C6 06 00 00         JZ 0x00603e55
0060378F  8B 43 10                  MOV EAX,dword ptr [EBX + 0x10]
00603792  3D 0F 01 00 00            CMP EAX,0x10f
00603797  0F 87 FD 05 00 00         JA 0x00603d9a
0060379D  0F 84 C7 05 00 00         JZ 0x00603d6a
006037A3  2B C6                     SUB EAX,ESI
006037A5  0F 84 A3 04 00 00         JZ 0x00603c4e
006037AB  83 E8 02                  SUB EAX,0x2
006037AE  74 5E                     JZ 0x0060380e
006037B0  48                        DEC EAX
006037B1  0F 85 4E 06 00 00         JNZ 0x00603e05
006037B7  8B CF                     MOV ECX,EDI
006037B9  E8 5A D9 DF FF            CALL 0x00401118
006037BE  8A 87 6D 02 00 00         MOV AL,byte ptr [EDI + 0x26d]
006037C4  84 C0                     TEST AL,AL
006037C6  74 07                     JZ 0x006037cf
006037C8  8B CF                     MOV ECX,EDI
006037CA  E8 7C 19 E0 FF            CALL 0x0040514b
LAB_006037cf:
006037CF  8B 8F BB 02 00 00         MOV ECX,dword ptr [EDI + 0x2bb]
006037D5  3B CE                     CMP ECX,ESI
006037D7  74 1A                     JZ 0x006037f3
006037D9  E8 62 E3 DF FF            CALL 0x00401b40
006037DE  8B 87 BB 02 00 00         MOV EAX,dword ptr [EDI + 0x2bb]
006037E4  50                        PUSH EAX
006037E5  E8 C6 AA 12 00            CALL 0x0072e2b0
006037EA  83 C4 04                  ADD ESP,0x4
006037ED  89 B7 BB 02 00 00         MOV dword ptr [EDI + 0x2bb],ESI
LAB_006037f3:
006037F3  8B CF                     MOV ECX,EDI
006037F5  E8 40 07 E0 FF            CALL 0x00403f3a
006037FA  8B 55 B0                  MOV EDX,dword ptr [EBP + -0x50]
006037FD  33 C0                     XOR EAX,EAX
006037FF  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00603805  5F                        POP EDI
00603806  5E                        POP ESI
00603807  5B                        POP EBX
00603808  8B E5                     MOV ESP,EBP
0060380A  5D                        POP EBP
0060380B  C2 04 00                  RET 0x4
LAB_0060380e:
0060380E  8B 4F 1C                  MOV ECX,dword ptr [EDI + 0x1c]
00603811  33 D2                     XOR EDX,EDX
00603813  69 C9 6D 4E C6 41         IMUL ECX,ECX,0x41c64e6d
00603819  8D 81 39 30 00 00         LEA EAX,[ECX + 0x3039]
0060381F  B9 33 00 00 00            MOV ECX,0x33
00603824  89 47 1C                  MOV dword ptr [EDI + 0x1c],EAX
00603827  C1 E8 10                  SHR EAX,0x10
0060382A  F7 F1                     DIV ECX
0060382C  89 15 90 17 81 00         MOV dword ptr [0x00811790],EDX
00603832  8B 5B 14                  MOV EBX,dword ptr [EBX + 0x14]
00603835  39 73 0C                  CMP dword ptr [EBX + 0xc],ESI
00603838  0F 85 F4 03 00 00         JNZ 0x00603c32
0060383E  B9 10 00 00 00            MOV ECX,0x10
00603843  8B F3                     MOV ESI,EBX
00603845  81 C7 D5 01 00 00         ADD EDI,0x1d5
0060384B  F3 A5                     MOVSD.REP ES:EDI,ESI
0060384D  8B 75 F4                  MOV ESI,dword ptr [EBP + -0xc]
00603850  8B CE                     MOV ECX,ESI
00603852  E8 49 0F E0 FF            CALL 0x004047a0
00603857  8D BE 72 02 00 00         LEA EDI,[ESI + 0x272]
0060385D  8B CE                     MOV ECX,ESI
0060385F  57                        PUSH EDI
00603860  E8 37 E6 DF FF            CALL 0x00401e9c
00603865  85 C0                     TEST EAX,EAX
00603867  74 07                     JZ 0x00603870
00603869  C6 86 6D 02 00 00 01      MOV byte ptr [ESI + 0x26d],0x1
LAB_00603870:
00603870  8B 43 18                  MOV EAX,dword ptr [EBX + 0x18]
00603873  83 F8 04                  CMP EAX,0x4
00603876  0F 87 89 05 00 00         JA 0x00603e05
switchD_0060387c::switchD:
0060387C  FF 24 85 64 3E 60 00      JMP dword ptr [EAX*0x4 + 0x603e64]
switchD_0060387c::caseD_0:
00603883  8B 4B 1C                  MOV ECX,dword ptr [EBX + 0x1c]
00603886  B8 79 19 8C 02            MOV EAX,0x28c1979
0060388B  85 C9                     TEST ECX,ECX
0060388D  7C 10                     JL 0x0060389f
0060388F  F7 E9                     IMUL ECX
00603891  D1 FA                     SAR EDX,0x1
00603893  8B C2                     MOV EAX,EDX
00603895  C1 E8 1F                  SHR EAX,0x1f
00603898  03 D0                     ADD EDX,EAX
0060389A  0F BF C2                  MOVSX EAX,DX
0060389D  EB 0F                     JMP 0x006038ae
LAB_0060389f:
0060389F  F7 E9                     IMUL ECX
006038A1  D1 FA                     SAR EDX,0x1
006038A3  8B CA                     MOV ECX,EDX
006038A5  C1 E9 1F                  SHR ECX,0x1f
006038A8  03 D1                     ADD EDX,ECX
006038AA  0F BF C2                  MOVSX EAX,DX
006038AD  48                        DEC EAX
LAB_006038ae:
006038AE  83 C0 FE                  ADD EAX,-0x2
006038B1  89 07                     MOV dword ptr [EDI],EAX
006038B3  BF 05 00 00 00            MOV EDI,0x5
006038B8  89 BE 7A 02 00 00         MOV dword ptr [ESI + 0x27a],EDI
006038BE  8B 4B 20                  MOV ECX,dword ptr [EBX + 0x20]
006038C1  85 C9                     TEST ECX,ECX
006038C3  B8 79 19 8C 02            MOV EAX,0x28c1979
006038C8  7C 10                     JL 0x006038da
006038CA  F7 E9                     IMUL ECX
006038CC  D1 FA                     SAR EDX,0x1
006038CE  8B C2                     MOV EAX,EDX
006038D0  C1 E8 1F                  SHR EAX,0x1f
006038D3  03 D0                     ADD EDX,EAX
006038D5  0F BF C2                  MOVSX EAX,DX
006038D8  EB 0F                     JMP 0x006038e9
LAB_006038da:
006038DA  F7 E9                     IMUL ECX
006038DC  D1 FA                     SAR EDX,0x1
006038DE  8B CA                     MOV ECX,EDX
006038E0  C1 E9 1F                  SHR ECX,0x1f
006038E3  03 D1                     ADD EDX,ECX
006038E5  0F BF C2                  MOVSX EAX,DX
006038E8  48                        DEC EAX
LAB_006038e9:
006038E9  8A 96 6D 02 00 00         MOV DL,byte ptr [ESI + 0x26d]
006038EF  83 C0 FE                  ADD EAX,-0x2
006038F2  89 86 76 02 00 00         MOV dword ptr [ESI + 0x276],EAX
006038F8  89 BE 7E 02 00 00         MOV dword ptr [ESI + 0x27e],EDI
006038FE  8B 43 30                  MOV EAX,dword ptr [EBX + 0x30]
00603901  8B 4B 3C                  MOV ECX,dword ptr [EBX + 0x3c]
00603904  52                        PUSH EDX
00603905  8B 53 38                  MOV EDX,dword ptr [EBX + 0x38]
00603908  50                        PUSH EAX
00603909  8B 43 34                  MOV EAX,dword ptr [EBX + 0x34]
0060390C  51                        PUSH ECX
0060390D  8B 4B 28                  MOV ECX,dword ptr [EBX + 0x28]
00603910  52                        PUSH EDX
00603911  8B 53 24                  MOV EDX,dword ptr [EBX + 0x24]
00603914  50                        PUSH EAX
00603915  8B 43 20                  MOV EAX,dword ptr [EBX + 0x20]
00603918  51                        PUSH ECX
00603919  8B 4B 1C                  MOV ECX,dword ptr [EBX + 0x1c]
0060391C  52                        PUSH EDX
0060391D  50                        PUSH EAX
0060391E  51                        PUSH ECX
0060391F  8B CE                     MOV ECX,ESI
00603921  E8 7A 13 E0 FF            CALL 0x00404ca0
00603926  8B 55 B0                  MOV EDX,dword ptr [EBP + -0x50]
00603929  89 86 69 02 00 00         MOV dword ptr [ESI + 0x269],EAX
0060392F  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00603935  33 C0                     XOR EAX,EAX
00603937  5F                        POP EDI
00603938  5E                        POP ESI
00603939  5B                        POP EBX
0060393A  8B E5                     MOV ESP,EBP
0060393C  5D                        POP EBP
0060393D  C2 04 00                  RET 0x4
switchD_0060387c::caseD_1:
00603940  8B 4B 1C                  MOV ECX,dword ptr [EBX + 0x1c]
00603943  B8 79 19 8C 02            MOV EAX,0x28c1979
00603948  85 C9                     TEST ECX,ECX
0060394A  7C 10                     JL 0x0060395c
0060394C  F7 E9                     IMUL ECX
0060394E  D1 FA                     SAR EDX,0x1
00603950  8B C2                     MOV EAX,EDX
00603952  C1 E8 1F                  SHR EAX,0x1f
00603955  03 D0                     ADD EDX,EAX
00603957  0F BF C2                  MOVSX EAX,DX
0060395A  EB 0F                     JMP 0x0060396b
LAB_0060395c:
0060395C  F7 E9                     IMUL ECX
0060395E  D1 FA                     SAR EDX,0x1
00603960  8B CA                     MOV ECX,EDX
00603962  C1 E9 1F                  SHR ECX,0x1f
00603965  03 D1                     ADD EDX,ECX
00603967  0F BF C2                  MOVSX EAX,DX
0060396A  48                        DEC EAX
LAB_0060396b:
0060396B  83 C0 FE                  ADD EAX,-0x2
0060396E  89 07                     MOV dword ptr [EDI],EAX
00603970  BF 05 00 00 00            MOV EDI,0x5
00603975  89 BE 7A 02 00 00         MOV dword ptr [ESI + 0x27a],EDI
0060397B  8B 4B 20                  MOV ECX,dword ptr [EBX + 0x20]
0060397E  85 C9                     TEST ECX,ECX
00603980  B8 79 19 8C 02            MOV EAX,0x28c1979
00603985  7C 10                     JL 0x00603997
00603987  F7 E9                     IMUL ECX
00603989  D1 FA                     SAR EDX,0x1
0060398B  8B C2                     MOV EAX,EDX
0060398D  C1 E8 1F                  SHR EAX,0x1f
00603990  03 D0                     ADD EDX,EAX
00603992  0F BF C2                  MOVSX EAX,DX
00603995  EB 0F                     JMP 0x006039a6
LAB_00603997:
00603997  F7 E9                     IMUL ECX
00603999  D1 FA                     SAR EDX,0x1
0060399B  8B CA                     MOV ECX,EDX
0060399D  C1 E9 1F                  SHR ECX,0x1f
006039A0  03 D1                     ADD EDX,ECX
006039A2  0F BF C2                  MOVSX EAX,DX
006039A5  48                        DEC EAX
LAB_006039a6:
006039A6  8A 96 6D 02 00 00         MOV DL,byte ptr [ESI + 0x26d]
006039AC  83 C0 FE                  ADD EAX,-0x2
006039AF  89 86 76 02 00 00         MOV dword ptr [ESI + 0x276],EAX
006039B5  89 BE 7E 02 00 00         MOV dword ptr [ESI + 0x27e],EDI
006039BB  8B 43 30                  MOV EAX,dword ptr [EBX + 0x30]
006039BE  8B 4B 3C                  MOV ECX,dword ptr [EBX + 0x3c]
006039C1  52                        PUSH EDX
006039C2  8B 53 38                  MOV EDX,dword ptr [EBX + 0x38]
006039C5  50                        PUSH EAX
006039C6  8B 43 34                  MOV EAX,dword ptr [EBX + 0x34]
006039C9  51                        PUSH ECX
006039CA  8B 4B 28                  MOV ECX,dword ptr [EBX + 0x28]
006039CD  52                        PUSH EDX
006039CE  8B 53 24                  MOV EDX,dword ptr [EBX + 0x24]
006039D1  50                        PUSH EAX
006039D2  8B 43 20                  MOV EAX,dword ptr [EBX + 0x20]
006039D5  51                        PUSH ECX
006039D6  8B 4B 1C                  MOV ECX,dword ptr [EBX + 0x1c]
006039D9  52                        PUSH EDX
006039DA  50                        PUSH EAX
006039DB  51                        PUSH ECX
006039DC  8B CE                     MOV ECX,ESI
006039DE  E8 90 F4 DF FF            CALL 0x00402e73
006039E3  8B 55 B0                  MOV EDX,dword ptr [EBP + -0x50]
006039E6  89 86 69 02 00 00         MOV dword ptr [ESI + 0x269],EAX
006039EC  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
006039F2  33 C0                     XOR EAX,EAX
006039F4  5F                        POP EDI
006039F5  5E                        POP ESI
006039F6  5B                        POP EBX
006039F7  8B E5                     MOV ESP,EBP
006039F9  5D                        POP EBP
006039FA  C2 04 00                  RET 0x4
switchD_0060387c::caseD_2:
006039FD  8B 4B 1C                  MOV ECX,dword ptr [EBX + 0x1c]
00603A00  B8 79 19 8C 02            MOV EAX,0x28c1979
00603A05  85 C9                     TEST ECX,ECX
00603A07  7C 10                     JL 0x00603a19
00603A09  F7 E9                     IMUL ECX
00603A0B  D1 FA                     SAR EDX,0x1
00603A0D  8B C2                     MOV EAX,EDX
00603A0F  C1 E8 1F                  SHR EAX,0x1f
00603A12  03 D0                     ADD EDX,EAX
00603A14  0F BF C2                  MOVSX EAX,DX
00603A17  EB 0F                     JMP 0x00603a28
LAB_00603a19:
00603A19  F7 E9                     IMUL ECX
00603A1B  D1 FA                     SAR EDX,0x1
00603A1D  8B CA                     MOV ECX,EDX
00603A1F  C1 E9 1F                  SHR ECX,0x1f
00603A22  03 D1                     ADD EDX,ECX
00603A24  0F BF C2                  MOVSX EAX,DX
00603A27  48                        DEC EAX
LAB_00603a28:
00603A28  83 C0 FE                  ADD EAX,-0x2
00603A2B  89 07                     MOV dword ptr [EDI],EAX
00603A2D  BF 05 00 00 00            MOV EDI,0x5
00603A32  89 BE 7A 02 00 00         MOV dword ptr [ESI + 0x27a],EDI
00603A38  8B 4B 20                  MOV ECX,dword ptr [EBX + 0x20]
00603A3B  85 C9                     TEST ECX,ECX
00603A3D  B8 79 19 8C 02            MOV EAX,0x28c1979
00603A42  7C 10                     JL 0x00603a54
00603A44  F7 E9                     IMUL ECX
00603A46  D1 FA                     SAR EDX,0x1
00603A48  8B C2                     MOV EAX,EDX
00603A4A  C1 E8 1F                  SHR EAX,0x1f
00603A4D  03 D0                     ADD EDX,EAX
00603A4F  0F BF C2                  MOVSX EAX,DX
00603A52  EB 0F                     JMP 0x00603a63
LAB_00603a54:
00603A54  F7 E9                     IMUL ECX
00603A56  D1 FA                     SAR EDX,0x1
00603A58  8B CA                     MOV ECX,EDX
00603A5A  C1 E9 1F                  SHR ECX,0x1f
00603A5D  03 D1                     ADD EDX,ECX
00603A5F  0F BF C2                  MOVSX EAX,DX
00603A62  48                        DEC EAX
LAB_00603a63:
00603A63  8A 96 6D 02 00 00         MOV DL,byte ptr [ESI + 0x26d]
00603A69  83 C0 FE                  ADD EAX,-0x2
00603A6C  89 86 76 02 00 00         MOV dword ptr [ESI + 0x276],EAX
00603A72  89 BE 7E 02 00 00         MOV dword ptr [ESI + 0x27e],EDI
00603A78  8B 43 30                  MOV EAX,dword ptr [EBX + 0x30]
00603A7B  8B 4B 3C                  MOV ECX,dword ptr [EBX + 0x3c]
00603A7E  52                        PUSH EDX
00603A7F  8B 53 38                  MOV EDX,dword ptr [EBX + 0x38]
00603A82  50                        PUSH EAX
00603A83  8B 43 34                  MOV EAX,dword ptr [EBX + 0x34]
00603A86  51                        PUSH ECX
00603A87  8B 4B 28                  MOV ECX,dword ptr [EBX + 0x28]
00603A8A  52                        PUSH EDX
00603A8B  8B 53 24                  MOV EDX,dword ptr [EBX + 0x24]
00603A8E  50                        PUSH EAX
00603A8F  8B 43 20                  MOV EAX,dword ptr [EBX + 0x20]
00603A92  51                        PUSH ECX
00603A93  8B 4B 1C                  MOV ECX,dword ptr [EBX + 0x1c]
00603A96  52                        PUSH EDX
00603A97  50                        PUSH EAX
00603A98  51                        PUSH ECX
00603A99  8B CE                     MOV ECX,ESI
00603A9B  E8 84 ED DF FF            CALL 0x00402824
00603AA0  8B 55 B0                  MOV EDX,dword ptr [EBP + -0x50]
00603AA3  89 86 69 02 00 00         MOV dword ptr [ESI + 0x269],EAX
00603AA9  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00603AAF  33 C0                     XOR EAX,EAX
00603AB1  5F                        POP EDI
00603AB2  5E                        POP ESI
00603AB3  5B                        POP EBX
00603AB4  8B E5                     MOV ESP,EBP
00603AB6  5D                        POP EBP
00603AB7  C2 04 00                  RET 0x4
switchD_0060387c::caseD_3:
00603ABA  8B 4B 1C                  MOV ECX,dword ptr [EBX + 0x1c]
00603ABD  B8 79 19 8C 02            MOV EAX,0x28c1979
00603AC2  85 C9                     TEST ECX,ECX
00603AC4  7C 10                     JL 0x00603ad6
00603AC6  F7 E9                     IMUL ECX
00603AC8  D1 FA                     SAR EDX,0x1
00603ACA  8B C2                     MOV EAX,EDX
00603ACC  C1 E8 1F                  SHR EAX,0x1f
00603ACF  03 D0                     ADD EDX,EAX
00603AD1  0F BF C2                  MOVSX EAX,DX
00603AD4  EB 0F                     JMP 0x00603ae5
LAB_00603ad6:
00603AD6  F7 E9                     IMUL ECX
00603AD8  D1 FA                     SAR EDX,0x1
00603ADA  8B CA                     MOV ECX,EDX
00603ADC  C1 E9 1F                  SHR ECX,0x1f
00603ADF  03 D1                     ADD EDX,ECX
00603AE1  0F BF C2                  MOVSX EAX,DX
00603AE4  48                        DEC EAX
LAB_00603ae5:
00603AE5  83 C0 FE                  ADD EAX,-0x2
00603AE8  89 07                     MOV dword ptr [EDI],EAX
00603AEA  BF 05 00 00 00            MOV EDI,0x5
00603AEF  89 BE 7A 02 00 00         MOV dword ptr [ESI + 0x27a],EDI
00603AF5  8B 4B 20                  MOV ECX,dword ptr [EBX + 0x20]
00603AF8  85 C9                     TEST ECX,ECX
00603AFA  B8 79 19 8C 02            MOV EAX,0x28c1979
00603AFF  7C 10                     JL 0x00603b11
00603B01  F7 E9                     IMUL ECX
00603B03  D1 FA                     SAR EDX,0x1
00603B05  8B C2                     MOV EAX,EDX
00603B07  C1 E8 1F                  SHR EAX,0x1f
00603B0A  03 D0                     ADD EDX,EAX
00603B0C  0F BF C2                  MOVSX EAX,DX
00603B0F  EB 0F                     JMP 0x00603b20
LAB_00603b11:
00603B11  F7 E9                     IMUL ECX
00603B13  D1 FA                     SAR EDX,0x1
00603B15  8B CA                     MOV ECX,EDX
00603B17  C1 E9 1F                  SHR ECX,0x1f
00603B1A  03 D1                     ADD EDX,ECX
00603B1C  0F BF C2                  MOVSX EAX,DX
00603B1F  48                        DEC EAX
LAB_00603b20:
00603B20  8A 96 6D 02 00 00         MOV DL,byte ptr [ESI + 0x26d]
00603B26  83 C0 FE                  ADD EAX,-0x2
00603B29  89 86 76 02 00 00         MOV dword ptr [ESI + 0x276],EAX
00603B2F  89 BE 7E 02 00 00         MOV dword ptr [ESI + 0x27e],EDI
00603B35  8B 43 30                  MOV EAX,dword ptr [EBX + 0x30]
00603B38  8B 4B 3C                  MOV ECX,dword ptr [EBX + 0x3c]
00603B3B  52                        PUSH EDX
00603B3C  8B 53 38                  MOV EDX,dword ptr [EBX + 0x38]
00603B3F  50                        PUSH EAX
00603B40  8B 43 34                  MOV EAX,dword ptr [EBX + 0x34]
00603B43  51                        PUSH ECX
00603B44  8B 4B 28                  MOV ECX,dword ptr [EBX + 0x28]
00603B47  52                        PUSH EDX
00603B48  8B 53 24                  MOV EDX,dword ptr [EBX + 0x24]
00603B4B  50                        PUSH EAX
00603B4C  8B 43 20                  MOV EAX,dword ptr [EBX + 0x20]
00603B4F  51                        PUSH ECX
00603B50  8B 4B 1C                  MOV ECX,dword ptr [EBX + 0x1c]
00603B53  52                        PUSH EDX
00603B54  50                        PUSH EAX
00603B55  51                        PUSH ECX
00603B56  8B CE                     MOV ECX,ESI
00603B58  E8 E1 09 E0 FF            CALL 0x0040453e
00603B5D  8B 55 B0                  MOV EDX,dword ptr [EBP + -0x50]
00603B60  89 86 69 02 00 00         MOV dword ptr [ESI + 0x269],EAX
00603B66  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00603B6C  33 C0                     XOR EAX,EAX
00603B6E  5F                        POP EDI
00603B6F  5E                        POP ESI
00603B70  5B                        POP EBX
00603B71  8B E5                     MOV ESP,EBP
00603B73  5D                        POP EBP
00603B74  C2 04 00                  RET 0x4
switchD_0060387c::caseD_4:
00603B77  8B 4B 1C                  MOV ECX,dword ptr [EBX + 0x1c]
00603B7A  B8 79 19 8C 02            MOV EAX,0x28c1979
00603B7F  85 C9                     TEST ECX,ECX
00603B81  7C 10                     JL 0x00603b93
00603B83  F7 E9                     IMUL ECX
00603B85  D1 FA                     SAR EDX,0x1
00603B87  8B C2                     MOV EAX,EDX
00603B89  C1 E8 1F                  SHR EAX,0x1f
00603B8C  03 D0                     ADD EDX,EAX
00603B8E  0F BF C2                  MOVSX EAX,DX
00603B91  EB 0F                     JMP 0x00603ba2
LAB_00603b93:
00603B93  F7 E9                     IMUL ECX
00603B95  D1 FA                     SAR EDX,0x1
00603B97  8B CA                     MOV ECX,EDX
00603B99  C1 E9 1F                  SHR ECX,0x1f
00603B9C  03 D1                     ADD EDX,ECX
00603B9E  0F BF C2                  MOVSX EAX,DX
00603BA1  48                        DEC EAX
LAB_00603ba2:
00603BA2  83 C0 FE                  ADD EAX,-0x2
00603BA5  89 07                     MOV dword ptr [EDI],EAX
00603BA7  BF 05 00 00 00            MOV EDI,0x5
00603BAC  89 BE 7A 02 00 00         MOV dword ptr [ESI + 0x27a],EDI
00603BB2  8B 4B 20                  MOV ECX,dword ptr [EBX + 0x20]
00603BB5  85 C9                     TEST ECX,ECX
00603BB7  B8 79 19 8C 02            MOV EAX,0x28c1979
00603BBC  7C 10                     JL 0x00603bce
00603BBE  F7 E9                     IMUL ECX
00603BC0  D1 FA                     SAR EDX,0x1
00603BC2  8B C2                     MOV EAX,EDX
00603BC4  C1 E8 1F                  SHR EAX,0x1f
00603BC7  03 D0                     ADD EDX,EAX
00603BC9  0F BF C2                  MOVSX EAX,DX
00603BCC  EB 0F                     JMP 0x00603bdd
LAB_00603bce:
00603BCE  F7 E9                     IMUL ECX
00603BD0  D1 FA                     SAR EDX,0x1
00603BD2  8B CA                     MOV ECX,EDX
00603BD4  C1 E9 1F                  SHR ECX,0x1f
00603BD7  03 D1                     ADD EDX,ECX
00603BD9  0F BF C2                  MOVSX EAX,DX
00603BDC  48                        DEC EAX
LAB_00603bdd:
00603BDD  8A 96 6D 02 00 00         MOV DL,byte ptr [ESI + 0x26d]
00603BE3  83 C0 FE                  ADD EAX,-0x2
00603BE6  89 86 76 02 00 00         MOV dword ptr [ESI + 0x276],EAX
00603BEC  89 BE 7E 02 00 00         MOV dword ptr [ESI + 0x27e],EDI
00603BF2  8B 43 3C                  MOV EAX,dword ptr [EBX + 0x3c]
00603BF5  8B 4B 38                  MOV ECX,dword ptr [EBX + 0x38]
00603BF8  52                        PUSH EDX
00603BF9  8B 53 34                  MOV EDX,dword ptr [EBX + 0x34]
00603BFC  6A 00                     PUSH 0x0
00603BFE  50                        PUSH EAX
00603BFF  8B 43 28                  MOV EAX,dword ptr [EBX + 0x28]
00603C02  51                        PUSH ECX
00603C03  8B 4B 24                  MOV ECX,dword ptr [EBX + 0x24]
00603C06  52                        PUSH EDX
00603C07  8B 53 20                  MOV EDX,dword ptr [EBX + 0x20]
00603C0A  50                        PUSH EAX
00603C0B  8B 43 1C                  MOV EAX,dword ptr [EBX + 0x1c]
00603C0E  51                        PUSH ECX
00603C0F  52                        PUSH EDX
00603C10  50                        PUSH EAX
00603C11  8B CE                     MOV ECX,ESI
00603C13  E8 BB EC DF FF            CALL 0x004028d3
00603C18  8B 55 B0                  MOV EDX,dword ptr [EBP + -0x50]
00603C1B  89 86 69 02 00 00         MOV dword ptr [ESI + 0x269],EAX
00603C21  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00603C27  33 C0                     XOR EAX,EAX
00603C29  5F                        POP EDI
00603C2A  5E                        POP ESI
00603C2B  5B                        POP EBX
00603C2C  8B E5                     MOV ESP,EBP
00603C2E  5D                        POP EBP
00603C2F  C2 04 00                  RET 0x4
LAB_00603c32:
00603C32  53                        PUSH EBX
00603C33  8B CF                     MOV ECX,EDI
00603C35  E8 04 F0 DF FF            CALL 0x00402c3e
00603C3A  8B 55 B0                  MOV EDX,dword ptr [EBP + -0x50]
00603C3D  33 C0                     XOR EAX,EAX
00603C3F  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00603C45  5F                        POP EDI
00603C46  5E                        POP ESI
00603C47  5B                        POP EBX
00603C48  8B E5                     MOV ESP,EBP
00603C4A  5D                        POP EBP
00603C4B  C2 04 00                  RET 0x4
LAB_00603c4e:
00603C4E  8B 8F B7 02 00 00         MOV ECX,dword ptr [EDI + 0x2b7]
00603C54  3B CE                     CMP ECX,ESI
00603C56  0F 8E A9 00 00 00         JLE 0x00603d05
00603C5C  8B 15 38 2A 80 00         MOV EDX,dword ptr [0x00802a38]
00603C62  8B 9F 6E 02 00 00         MOV EBX,dword ptr [EDI + 0x26e]
00603C68  8B 82 E4 00 00 00         MOV EAX,dword ptr [EDX + 0xe4]
00603C6E  2B C3                     SUB EAX,EBX
00603C70  03 C1                     ADD EAX,ECX
00603C72  83 F8 0F                  CMP EAX,0xf
00603C75  75 4F                     JNZ 0x00603cc6
00603C77  8A 8F 6D 02 00 00         MOV CL,byte ptr [EDI + 0x26d]
00603C7D  84 C9                     TEST CL,CL
00603C7F  74 42                     JZ 0x00603cc3
00603C81  39 B7 BB 02 00 00         CMP dword ptr [EDI + 0x2bb],ESI
00603C87  75 7C                     JNZ 0x00603d05
00603C89  E8 04 E2 DF FF            CALL 0x00401e92
00603C8E  3B C6                     CMP EAX,ESI
00603C90  89 87 BB 02 00 00         MOV dword ptr [EDI + 0x2bb],EAX
00603C96  74 6D                     JZ 0x00603d05
00603C98  8B 8F F9 01 00 00         MOV ECX,dword ptr [EDI + 0x1f9]
00603C9E  8B 97 F5 01 00 00         MOV EDX,dword ptr [EDI + 0x1f5]
00603CA4  56                        PUSH ESI
00603CA5  6A 05                     PUSH 0x5
00603CA7  6A 1E                     PUSH 0x1e
00603CA9  83 E9 28                  SUB ECX,0x28
00603CAC  68 96 00 00 00            PUSH 0x96
00603CB1  51                        PUSH ECX
00603CB2  8B 8F F1 01 00 00         MOV ECX,dword ptr [EDI + 0x1f1]
00603CB8  52                        PUSH EDX
00603CB9  51                        PUSH ECX
00603CBA  8B C8                     MOV ECX,EAX
00603CBC  E8 CF 1A E0 FF            CALL 0x00405790
00603CC1  EB 42                     JMP 0x00603d05
LAB_00603cc3:
00603CC3  83 F8 0F                  CMP EAX,0xf
LAB_00603cc6:
00603CC6  7E 3D                     JLE 0x00603d05
00603CC8  8B 8F BB 02 00 00         MOV ECX,dword ptr [EDI + 0x2bb]
00603CCE  3B CE                     CMP ECX,ESI
00603CD0  74 33                     JZ 0x00603d05
00603CD2  E8 75 FF DF FF            CALL 0x00403c4c
00603CD7  85 C0                     TEST EAX,EAX
00603CD9  74 2A                     JZ 0x00603d05
00603CDB  8B 8F BB 02 00 00         MOV ECX,dword ptr [EDI + 0x2bb]
00603CE1  E8 5A DE DF FF            CALL 0x00401b40
00603CE6  8B 97 BB 02 00 00         MOV EDX,dword ptr [EDI + 0x2bb]
00603CEC  52                        PUSH EDX
00603CED  E8 BE A5 12 00            CALL 0x0072e2b0
00603CF2  83 C4 04                  ADD ESP,0x4
00603CF5  C7 87 B7 02 00 00 FF FF FF FF  MOV dword ptr [EDI + 0x2b7],0xffffffff
00603CFF  89 B7 BB 02 00 00         MOV dword ptr [EDI + 0x2bb],ESI
LAB_00603d05:
00603D05  8A 87 6D 02 00 00         MOV AL,byte ptr [EDI + 0x26d]
00603D0B  84 C0                     TEST AL,AL
00603D0D  75 22                     JNZ 0x00603d31
00603D0F  8D 87 72 02 00 00         LEA EAX,[EDI + 0x272]
00603D15  8B CF                     MOV ECX,EDI
00603D17  50                        PUSH EAX
00603D18  E8 7F E1 DF FF            CALL 0x00401e9c
00603D1D  85 C0                     TEST EAX,EAX
00603D1F  74 17                     JZ 0x00603d38
00603D21  8B CF                     MOV ECX,EDI
00603D23  E8 28 05 E0 FF            CALL 0x00404250
00603D28  C6 87 6D 02 00 00 01      MOV byte ptr [EDI + 0x26d],0x1
00603D2F  EB 07                     JMP 0x00603d38
LAB_00603d31:
00603D31  8B CF                     MOV ECX,EDI
00603D33  E8 3E 20 E0 FF            CALL 0x00405d76
LAB_00603d38:
00603D38  8B CF                     MOV ECX,EDI
00603D3A  E8 D5 09 E0 FF            CALL 0x00404714
00603D3F  56                        PUSH ESI
00603D40  8B CF                     MOV ECX,EDI
00603D42  E8 C8 09 E0 FF            CALL 0x0040470f
00603D47  85 C0                     TEST EAX,EAX
00603D49  0F 85 B6 00 00 00         JNZ 0x00603e05
00603D4F  8B CF                     MOV ECX,EDI
00603D51  E8 79 17 E0 FF            CALL 0x004054cf
00603D56  8B 55 B0                  MOV EDX,dword ptr [EBP + -0x50]
00603D59  33 C0                     XOR EAX,EAX
00603D5B  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00603D61  5F                        POP EDI
00603D62  5E                        POP ESI
00603D63  5B                        POP EBX
00603D64  8B E5                     MOV ESP,EBP
00603D66  5D                        POP EBP
00603D67  C2 04 00                  RET 0x4
LAB_00603d6a:
00603D6A  8D 4D FC                  LEA ECX,[EBP + -0x4]
00603D6D  51                        PUSH ECX
00603D6E  8B CF                     MOV ECX,EDI
00603D70  E8 EA 18 E0 FF            CALL 0x0040565f
00603D75  3B C6                     CMP EAX,ESI
00603D77  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
00603D7A  0F 84 85 00 00 00         JZ 0x00603e05
00603D80  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00603D83  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
00603D89  52                        PUSH EDX
00603D8A  50                        PUSH EAX
00603D8B  8B 47 18                  MOV EAX,dword ptr [EDI + 0x18]
00603D8E  50                        PUSH EAX
00603D8F  E8 65 E8 DF FF            CALL 0x004025f9
00603D94  8D 4D F8                  LEA ECX,[EBP + -0x8]
00603D97  51                        PUSH ECX
00603D98  EB 66                     JMP 0x00603e00
LAB_00603d9a:
00603D9A  2D 11 01 00 00            SUB EAX,0x111
00603D9F  74 46                     JZ 0x00603de7
00603DA1  48                        DEC EAX
00603DA2  74 23                     JZ 0x00603dc7
00603DA4  48                        DEC EAX
00603DA5  75 5E                     JNZ 0x00603e05
00603DA7  68 13 01 00 00            PUSH 0x113
00603DAC  8B CF                     MOV ECX,EDI
00603DAE  E8 5C 09 E0 FF            CALL 0x0040470f
00603DB3  8B 55 B0                  MOV EDX,dword ptr [EBP + -0x50]
00603DB6  33 C0                     XOR EAX,EAX
00603DB8  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00603DBE  5F                        POP EDI
00603DBF  5E                        POP ESI
00603DC0  5B                        POP EBX
00603DC1  8B E5                     MOV ESP,EBP
00603DC3  5D                        POP EBP
00603DC4  C2 04 00                  RET 0x4
LAB_00603dc7:
00603DC7  68 12 01 00 00            PUSH 0x112
00603DCC  8B CF                     MOV ECX,EDI
00603DCE  E8 3C 09 E0 FF            CALL 0x0040470f
00603DD3  8B 55 B0                  MOV EDX,dword ptr [EBP + -0x50]
00603DD6  33 C0                     XOR EAX,EAX
00603DD8  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00603DDE  5F                        POP EDI
00603DDF  5E                        POP ESI
00603DE0  5B                        POP EBX
00603DE1  8B E5                     MOV ESP,EBP
00603DE3  5D                        POP EBP
00603DE4  C2 04 00                  RET 0x4
LAB_00603de7:
00603DE7  8B 87 B3 02 00 00         MOV EAX,dword ptr [EDI + 0x2b3]
00603DED  8D 9F B3 02 00 00         LEA EBX,[EDI + 0x2b3]
00603DF3  3B C6                     CMP EAX,ESI
00603DF5  74 0E                     JZ 0x00603e05
00603DF7  50                        PUSH EAX
00603DF8  8B CF                     MOV ECX,EDI
00603DFA  E8 BC F3 DF FF            CALL 0x004031bb
00603DFF  53                        PUSH EBX
LAB_00603e00:
00603E00  E8 5B 72 0A 00            CALL 0x006ab060
switchD_0060387c::default:
00603E05  8B 55 B0                  MOV EDX,dword ptr [EBP + -0x50]
00603E08  33 C0                     XOR EAX,EAX
00603E0A  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00603E10  5F                        POP EDI
00603E11  5E                        POP ESI
00603E12  5B                        POP EBX
00603E13  8B E5                     MOV ESP,EBP
00603E15  5D                        POP EBP
00603E16  C2 04 00                  RET 0x4
LAB_00603e19:
00603E19  8B 45 B0                  MOV EAX,dword ptr [EBP + -0x50]
00603E1C  68 54 F6 7C 00            PUSH 0x7cf654
00603E21  68 CC 4C 7A 00            PUSH 0x7a4ccc
00603E26  57                        PUSH EDI
00603E27  56                        PUSH ESI
00603E28  68 BB 01 00 00            PUSH 0x1bb
00603E2D  68 30 F6 7C 00            PUSH 0x7cf630
00603E32  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00603E37  E8 94 96 0A 00            CALL 0x006ad4d0
00603E3C  83 C4 18                  ADD ESP,0x18
00603E3F  85 C0                     TEST EAX,EAX
00603E41  74 01                     JZ 0x00603e44
00603E43  CC                        INT3
LAB_00603e44:
00603E44  68 BD 01 00 00            PUSH 0x1bd
00603E49  68 30 F6 7C 00            PUSH 0x7cf630
00603E4E  56                        PUSH ESI
00603E4F  57                        PUSH EDI
00603E50  E8 EB 1F 0A 00            CALL 0x006a5e40
LAB_00603e55:
00603E55  5F                        POP EDI
00603E56  5E                        POP ESI
00603E57  B8 FF FF 00 00            MOV EAX,0xffff
00603E5C  5B                        POP EBX
00603E5D  8B E5                     MOV ESP,EBP
00603E5F  5D                        POP EBP
00603E60  C2 04 00                  RET 0x4
