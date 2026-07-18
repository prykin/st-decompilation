FUN_00742270:
00742270  55                        PUSH EBP
00742271  8B EC                     MOV EBP,ESP
00742273  83 EC 30                  SUB ESP,0x30
LAB_00742276:
00742276  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00742279  0F BE 08                  MOVSX ECX,byte ptr [EAX]
0074227C  85 C9                     TEST ECX,ECX
0074227E  0F 84 68 04 00 00         JZ 0x007426ec
00742284  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
00742287  83 3A 00                  CMP dword ptr [EDX],0x0
0074228A  0F 84 5C 04 00 00         JZ 0x007426ec
00742290  C6 45 F8 00               MOV byte ptr [EBP + -0x8],0x0
00742294  C7 05 3C 8E 85 00 00 00 00 00  MOV dword ptr [0x00858e3c],0x0
0074229E  C7 45 F4 00 00 00 00      MOV dword ptr [EBP + -0xc],0x0
007422A5  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
007422A8  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
007422AB  EB 09                     JMP 0x007422b6
LAB_007422ad:
007422AD  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
007422B0  83 C1 01                  ADD ECX,0x1
007422B3  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
LAB_007422b6:
007422B6  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
007422B9  0F BE 02                  MOVSX EAX,byte ptr [EDX]
007422BC  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
007422BF  0F BE 11                  MOVSX EDX,byte ptr [ECX]
007422C2  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
007422C5  83 C1 01                  ADD ECX,0x1
007422C8  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
007422CB  3B C2                     CMP EAX,EDX
007422CD  75 02                     JNZ 0x007422d1
007422CF  EB DC                     JMP 0x007422ad
LAB_007422d1:
007422D1  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
007422D4  83 EA 01                  SUB EDX,0x1
007422D7  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
007422DA  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
007422DD  0F BE 08                  MOVSX ECX,byte ptr [EAX]
007422E0  89 4D EC                  MOV dword ptr [EBP + -0x14],ECX
007422E3  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
007422E6  83 EA 27                  SUB EDX,0x27
007422E9  89 55 EC                  MOV dword ptr [EBP + -0x14],EDX
007422EC  83 7D EC 52               CMP dword ptr [EBP + -0x14],0x52
007422F0  0F 87 4A 03 00 00         JA 0x00742640
007422F6  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
007422F9  33 C0                     XOR EAX,EAX
007422FB  8A 81 1C 27 74 00         MOV AL,byte ptr [ECX + 0x74271c]
switchD_00742301::switchD:
00742301  FF 24 85 F0 26 74 00      JMP dword ptr [EAX*0x4 + 0x7426f0]
switchD_00742301::caseD_4d:
00742308  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
0074230B  89 55 E8                  MOV dword ptr [EBP + -0x18],EDX
0074230E  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
00742311  83 E8 01                  SUB EAX,0x1
00742314  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
00742317  83 7D E8 03               CMP dword ptr [EBP + -0x18],0x3
0074231B  77 24                     JA 0x00742341
0074231D  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
switchD_00742320::switchD:
00742320  FF 24 8D 6F 27 74 00      JMP dword ptr [ECX*0x4 + 0x74276f]
switchD_00742320::caseD_1:
00742327  C7 05 3C 8E 85 00 01 00 00 00  MOV dword ptr [0x00858e3c],0x1
switchD_00742320::caseD_2:
00742331  C6 45 F8 6D               MOV byte ptr [EBP + -0x8],0x6d
00742335  EB 0A                     JMP 0x00742341
switchD_00742320::caseD_3:
00742337  C6 45 F8 62               MOV byte ptr [EBP + -0x8],0x62
0074233B  EB 04                     JMP 0x00742341
switchD_00742320::caseD_4:
0074233D  C6 45 F8 42               MOV byte ptr [EBP + -0x8],0x42
LAB_00742341:
00742341  E9 FA 02 00 00            JMP 0x00742640
switchD_00742301::caseD_64:
00742346  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
00742349  89 55 E4                  MOV dword ptr [EBP + -0x1c],EDX
0074234C  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
0074234F  83 E8 01                  SUB EAX,0x1
00742352  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
00742355  83 7D E4 03               CMP dword ptr [EBP + -0x1c],0x3
00742359  77 24                     JA 0x0074237f
0074235B  8B 4D E4                  MOV ECX,dword ptr [EBP + -0x1c]
switchD_0074235e::switchD:
0074235E  FF 24 8D 7F 27 74 00      JMP dword ptr [ECX*0x4 + 0x74277f]
switchD_0074235e::caseD_1:
00742365  C7 05 3C 8E 85 00 01 00 00 00  MOV dword ptr [0x00858e3c],0x1
switchD_0074235e::caseD_2:
0074236F  C6 45 F8 64               MOV byte ptr [EBP + -0x8],0x64
00742373  EB 0A                     JMP 0x0074237f
switchD_0074235e::caseD_3:
00742375  C6 45 F8 61               MOV byte ptr [EBP + -0x8],0x61
00742379  EB 04                     JMP 0x0074237f
switchD_0074235e::caseD_4:
0074237B  C6 45 F8 41               MOV byte ptr [EBP + -0x8],0x41
LAB_0074237f:
0074237F  E9 BC 02 00 00            JMP 0x00742640
switchD_00742301::caseD_79:
00742384  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
00742387  89 55 E0                  MOV dword ptr [EBP + -0x20],EDX
0074238A  83 7D E0 02               CMP dword ptr [EBP + -0x20],0x2
0074238E  74 08                     JZ 0x00742398
00742390  83 7D E0 04               CMP dword ptr [EBP + -0x20],0x4
00742394  74 08                     JZ 0x0074239e
00742396  EB 0A                     JMP 0x007423a2
LAB_00742398:
00742398  C6 45 F8 79               MOV byte ptr [EBP + -0x8],0x79
0074239C  EB 04                     JMP 0x007423a2
LAB_0074239e:
0074239E  C6 45 F8 59               MOV byte ptr [EBP + -0x8],0x59
LAB_007423a2:
007423A2  E9 99 02 00 00            JMP 0x00742640
switchD_00742301::caseD_68:
007423A7  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
007423AA  89 45 DC                  MOV dword ptr [EBP + -0x24],EAX
007423AD  83 7D DC 01               CMP dword ptr [EBP + -0x24],0x1
007423B1  74 08                     JZ 0x007423bb
007423B3  83 7D DC 02               CMP dword ptr [EBP + -0x24],0x2
007423B7  74 0C                     JZ 0x007423c5
007423B9  EB 0E                     JMP 0x007423c9
LAB_007423bb:
007423BB  C7 05 3C 8E 85 00 01 00 00 00  MOV dword ptr [0x00858e3c],0x1
LAB_007423c5:
007423C5  C6 45 F8 49               MOV byte ptr [EBP + -0x8],0x49
LAB_007423c9:
007423C9  E9 72 02 00 00            JMP 0x00742640
switchD_00742301::caseD_48:
007423CE  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
007423D1  89 4D D8                  MOV dword ptr [EBP + -0x28],ECX
007423D4  83 7D D8 01               CMP dword ptr [EBP + -0x28],0x1
007423D8  74 08                     JZ 0x007423e2
007423DA  83 7D D8 02               CMP dword ptr [EBP + -0x28],0x2
007423DE  74 0C                     JZ 0x007423ec
007423E0  EB 0E                     JMP 0x007423f0
LAB_007423e2:
007423E2  C7 05 3C 8E 85 00 01 00 00 00  MOV dword ptr [0x00858e3c],0x1
LAB_007423ec:
007423EC  C6 45 F8 48               MOV byte ptr [EBP + -0x8],0x48
LAB_007423f0:
007423F0  E9 4B 02 00 00            JMP 0x00742640
switchD_00742301::caseD_6d:
007423F5  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
007423F8  89 55 D4                  MOV dword ptr [EBP + -0x2c],EDX
007423FB  83 7D D4 01               CMP dword ptr [EBP + -0x2c],0x1
007423FF  74 08                     JZ 0x00742409
00742401  83 7D D4 02               CMP dword ptr [EBP + -0x2c],0x2
00742405  74 0C                     JZ 0x00742413
00742407  EB 0E                     JMP 0x00742417
LAB_00742409:
00742409  C7 05 3C 8E 85 00 01 00 00 00  MOV dword ptr [0x00858e3c],0x1
LAB_00742413:
00742413  C6 45 F8 4D               MOV byte ptr [EBP + -0x8],0x4d
LAB_00742417:
00742417  E9 24 02 00 00            JMP 0x00742640
switchD_00742301::caseD_73:
0074241C  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0074241F  89 45 D0                  MOV dword ptr [EBP + -0x30],EAX
00742422  83 7D D0 01               CMP dword ptr [EBP + -0x30],0x1
00742426  74 08                     JZ 0x00742430
00742428  83 7D D0 02               CMP dword ptr [EBP + -0x30],0x2
0074242C  74 0C                     JZ 0x0074243a
0074242E  EB 0E                     JMP 0x0074243e
LAB_00742430:
00742430  C7 05 3C 8E 85 00 01 00 00 00  MOV dword ptr [0x00858e3c],0x1
LAB_0074243a:
0074243A  C6 45 F8 53               MOV byte ptr [EBP + -0x8],0x53
LAB_0074243e:
0074243E  E9 FD 01 00 00            JMP 0x00742640
switchD_00742301::caseD_41:
00742443  68 80 0F 7A 00            PUSH 0x7a0f80
00742448  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0074244B  51                        PUSH ECX
0074244C  E8 CF C1 FE FF            CALL 0x0072e620
00742451  83 C4 08                  ADD ESP,0x8
00742454  85 C0                     TEST EAX,EAX
00742456  75 0B                     JNZ 0x00742463
00742458  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0074245B  83 C2 05                  ADD EDX,0x5
0074245E  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
00742461  EB 1E                     JMP 0x00742481
LAB_00742463:
00742463  68 7C 0F 7A 00            PUSH 0x7a0f7c
00742468  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0074246B  50                        PUSH EAX
0074246C  E8 AF C1 FE FF            CALL 0x0072e620
00742471  83 C4 08                  ADD ESP,0x8
00742474  85 C0                     TEST EAX,EAX
00742476  75 09                     JNZ 0x00742481
00742478  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0074247B  83 C1 03                  ADD ECX,0x3
0074247E  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
LAB_00742481:
00742481  C6 45 F8 70               MOV byte ptr [EBP + -0x8],0x70
00742485  E9 B6 01 00 00            JMP 0x00742640
switchD_00742301::caseD_74:
0074248A  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0074248D  83 7A 08 0B               CMP dword ptr [EDX + 0x8],0xb
00742491  7F 0E                     JG 0x007424a1
00742493  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
00742496  8B 88 98 00 00 00         MOV ECX,dword ptr [EAX + 0x98]
0074249C  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
0074249F  EB 0C                     JMP 0x007424ad
LAB_007424a1:
007424A1  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
007424A4  8B 82 9C 00 00 00         MOV EAX,dword ptr [EDX + 0x9c]
007424AA  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
LAB_007424ad:
007424AD  83 7D F4 00               CMP dword ptr [EBP + -0xc],0x0
007424B1  0F 8E 9D 00 00 00         JLE 0x00742554
007424B7  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
007424BA  83 39 00                  CMP dword ptr [ECX],0x0
007424BD  0F 86 91 00 00 00         JBE 0x00742554
007424C3  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
007424C6  33 C0                     XOR EAX,EAX
007424C8  8A 02                     MOV AL,byte ptr [EDX]
007424CA  8B 0D 80 12 7F 00         MOV ECX,dword ptr [0x007f1280]
007424D0  33 D2                     XOR EDX,EDX
007424D2  66 8B 14 41               MOV DX,word ptr [ECX + EAX*0x2]
007424D6  81 E2 00 80 00 00         AND EDX,0x8000
007424DC  85 D2                     TEST EDX,EDX
007424DE  74 37                     JZ 0x00742517
007424E0  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
007424E3  83 38 01                  CMP dword ptr [EAX],0x1
007424E6  76 2F                     JBE 0x00742517
007424E8  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
007424EB  8B 11                     MOV EDX,dword ptr [ECX]
007424ED  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
007424F0  8A 08                     MOV CL,byte ptr [EAX]
007424F2  88 0A                     MOV byte ptr [EDX],CL
007424F4  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
007424F7  8B 02                     MOV EAX,dword ptr [EDX]
007424F9  83 C0 01                  ADD EAX,0x1
007424FC  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
007424FF  89 01                     MOV dword ptr [ECX],EAX
00742501  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
00742504  83 C2 01                  ADD EDX,0x1
00742507  89 55 F0                  MOV dword ptr [EBP + -0x10],EDX
0074250A  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
0074250D  8B 08                     MOV ECX,dword ptr [EAX]
0074250F  83 E9 01                  SUB ECX,0x1
00742512  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
00742515  89 0A                     MOV dword ptr [EDX],ECX
LAB_00742517:
00742517  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
0074251A  8B 08                     MOV ECX,dword ptr [EAX]
0074251C  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
0074251F  8A 02                     MOV AL,byte ptr [EDX]
00742521  88 01                     MOV byte ptr [ECX],AL
00742523  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
00742526  8B 11                     MOV EDX,dword ptr [ECX]
00742528  83 C2 01                  ADD EDX,0x1
0074252B  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
0074252E  89 10                     MOV dword ptr [EAX],EDX
00742530  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
00742533  83 C1 01                  ADD ECX,0x1
00742536  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
00742539  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
0074253C  8B 02                     MOV EAX,dword ptr [EDX]
0074253E  83 E8 01                  SUB EAX,0x1
00742541  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
00742544  89 01                     MOV dword ptr [ECX],EAX
00742546  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
00742549  83 EA 01                  SUB EDX,0x1
0074254C  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
0074254F  E9 59 FF FF FF            JMP 0x007424ad
LAB_00742554:
00742554  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00742557  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
0074255A  E9 17 FD FF FF            JMP 0x00742276
switchD_00742301::caseD_27:
0074255F  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
00742562  83 E1 01                  AND ECX,0x1
00742565  85 C9                     TEST ECX,ECX
00742567  0F 84 C5 00 00 00         JZ 0x00742632
0074256D  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00742570  03 55 F4                  ADD EDX,dword ptr [EBP + -0xc]
00742573  89 55 08                  MOV dword ptr [EBP + 0x8],EDX
LAB_00742576:
00742576  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00742579  0F BE 08                  MOVSX ECX,byte ptr [EAX]
0074257C  85 C9                     TEST ECX,ECX
0074257E  0F 84 AC 00 00 00         JZ 0x00742630
00742584  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
00742587  83 3A 00                  CMP dword ptr [EDX],0x0
0074258A  0F 84 A0 00 00 00         JZ 0x00742630
00742590  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00742593  0F BE 08                  MOVSX ECX,byte ptr [EAX]
00742596  83 F9 27                  CMP ECX,0x27
00742599  75 0E                     JNZ 0x007425a9
0074259B  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0074259E  83 C2 01                  ADD EDX,0x1
007425A1  89 55 08                  MOV dword ptr [EBP + 0x8],EDX
007425A4  E9 87 00 00 00            JMP 0x00742630
LAB_007425a9:
007425A9  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
007425AC  33 C9                     XOR ECX,ECX
007425AE  8A 08                     MOV CL,byte ptr [EAX]
007425B0  8B 15 80 12 7F 00         MOV EDX,dword ptr [0x007f1280]
007425B6  33 C0                     XOR EAX,EAX
007425B8  66 8B 04 4A               MOV AX,word ptr [EDX + ECX*0x2]
007425BC  25 00 80 00 00            AND EAX,0x8000
007425C1  85 C0                     TEST EAX,EAX
007425C3  74 37                     JZ 0x007425fc
007425C5  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
007425C8  83 39 01                  CMP dword ptr [ECX],0x1
007425CB  76 2F                     JBE 0x007425fc
007425CD  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
007425D0  8B 02                     MOV EAX,dword ptr [EDX]
007425D2  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
007425D5  8A 11                     MOV DL,byte ptr [ECX]
007425D7  88 10                     MOV byte ptr [EAX],DL
007425D9  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
007425DC  8B 08                     MOV ECX,dword ptr [EAX]
007425DE  83 C1 01                  ADD ECX,0x1
007425E1  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
007425E4  89 0A                     MOV dword ptr [EDX],ECX
007425E6  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
007425E9  83 C0 01                  ADD EAX,0x1
007425EC  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
007425EF  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
007425F2  8B 11                     MOV EDX,dword ptr [ECX]
007425F4  83 EA 01                  SUB EDX,0x1
007425F7  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
007425FA  89 10                     MOV dword ptr [EAX],EDX
LAB_007425fc:
007425FC  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
007425FF  8B 11                     MOV EDX,dword ptr [ECX]
00742601  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00742604  8A 08                     MOV CL,byte ptr [EAX]
00742606  88 0A                     MOV byte ptr [EDX],CL
00742608  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
0074260B  8B 02                     MOV EAX,dword ptr [EDX]
0074260D  83 C0 01                  ADD EAX,0x1
00742610  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
00742613  89 01                     MOV dword ptr [ECX],EAX
00742615  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00742618  83 C2 01                  ADD EDX,0x1
0074261B  89 55 08                  MOV dword ptr [EBP + 0x8],EDX
0074261E  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
00742621  8B 08                     MOV ECX,dword ptr [EAX]
00742623  83 E9 01                  SUB ECX,0x1
00742626  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
00742629  89 0A                     MOV dword ptr [EDX],ECX
0074262B  E9 46 FF FF FF            JMP 0x00742576
LAB_00742630:
00742630  EB 09                     JMP 0x0074263b
LAB_00742632:
00742632  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00742635  03 45 F4                  ADD EAX,dword ptr [EBP + -0xc]
00742638  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
LAB_0074263b:
0074263B  E9 36 FC FF FF            JMP 0x00742276
switchD_00742301::caseD_28:
00742640  0F BE 4D F8               MOVSX ECX,byte ptr [EBP + -0x8]
00742644  85 C9                     TEST ECX,ECX
00742646  74 24                     JZ 0x0074266c
00742648  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
0074264B  52                        PUSH EDX
0074264C  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
0074264F  50                        PUSH EAX
00742650  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
00742653  51                        PUSH ECX
00742654  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
00742657  52                        PUSH EDX
00742658  8A 45 F8                  MOV AL,byte ptr [EBP + -0x8]
0074265B  50                        PUSH EAX
0074265C  E8 3F F4 FF FF            CALL 0x00741aa0
00742661  83 C4 14                  ADD ESP,0x14
00742664  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00742667  89 4D 08                  MOV dword ptr [EBP + 0x8],ECX
0074266A  EB 7B                     JMP 0x007426e7
LAB_0074266c:
0074266C  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0074266F  33 C0                     XOR EAX,EAX
00742671  8A 02                     MOV AL,byte ptr [EDX]
00742673  8B 0D 80 12 7F 00         MOV ECX,dword ptr [0x007f1280]
00742679  33 D2                     XOR EDX,EDX
0074267B  66 8B 14 41               MOV DX,word ptr [ECX + EAX*0x2]
0074267F  81 E2 00 80 00 00         AND EDX,0x8000
00742685  85 D2                     TEST EDX,EDX
00742687  74 2F                     JZ 0x007426b8
00742689  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
0074268C  8B 08                     MOV ECX,dword ptr [EAX]
0074268E  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00742691  8A 02                     MOV AL,byte ptr [EDX]
00742693  88 01                     MOV byte ptr [ECX],AL
00742695  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
00742698  8B 11                     MOV EDX,dword ptr [ECX]
0074269A  83 C2 01                  ADD EDX,0x1
0074269D  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
007426A0  89 10                     MOV dword ptr [EAX],EDX
007426A2  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
007426A5  83 C1 01                  ADD ECX,0x1
007426A8  89 4D 08                  MOV dword ptr [EBP + 0x8],ECX
007426AB  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
007426AE  8B 02                     MOV EAX,dword ptr [EDX]
007426B0  83 E8 01                  SUB EAX,0x1
007426B3  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
007426B6  89 01                     MOV dword ptr [ECX],EAX
LAB_007426b8:
007426B8  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
007426BB  8B 02                     MOV EAX,dword ptr [EDX]
007426BD  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
007426C0  8A 11                     MOV DL,byte ptr [ECX]
007426C2  88 10                     MOV byte ptr [EAX],DL
007426C4  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
007426C7  8B 08                     MOV ECX,dword ptr [EAX]
007426C9  83 C1 01                  ADD ECX,0x1
007426CC  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
007426CF  89 0A                     MOV dword ptr [EDX],ECX
007426D1  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
007426D4  83 C0 01                  ADD EAX,0x1
007426D7  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
007426DA  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
007426DD  8B 11                     MOV EDX,dword ptr [ECX]
007426DF  83 EA 01                  SUB EDX,0x1
007426E2  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
007426E5  89 10                     MOV dword ptr [EAX],EDX
LAB_007426e7:
007426E7  E9 8A FB FF FF            JMP 0x00742276
LAB_007426ec:
007426EC  8B E5                     MOV ESP,EBP
007426EE  5D                        POP EBP
007426EF  C3                        RET
