STBoatC::Recharge:
00478640  55                        PUSH EBP
00478641  8B EC                     MOV EBP,ESP
00478643  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00478646  53                        PUSH EBX
00478647  56                        PUSH ESI
00478648  57                        PUSH EDI
00478649  33 FF                     XOR EDI,EDI
0047864B  8B F1                     MOV ESI,ECX
0047864D  3B C7                     CMP EAX,EDI
0047864F  0F 84 7D 0A 00 00         JZ 0x004790d2
00478655  83 F8 01                  CMP EAX,0x1
00478658  0F 84 74 0A 00 00         JZ 0x004790d2
0047865E  8B 86 31 06 00 00         MOV EAX,dword ptr [ESI + 0x631]
00478664  3B C7                     CMP EAX,EDI
00478666  75 32                     JNZ 0x0047869a
00478668  8B 96 2D 06 00 00         MOV EDX,dword ptr [ESI + 0x62d]
0047866E  42                        INC EDX
0047866F  8B C2                     MOV EAX,EDX
00478671  89 96 2D 06 00 00         MOV dword ptr [ESI + 0x62d],EDX
00478677  83 F8 02                  CMP EAX,0x2
0047867A  8B 06                     MOV EAX,dword ptr [ESI]
0047867C  0F 85 E8 0B 00 00         JNZ 0x0047926a
00478682  FF 90 D8 00 00 00         CALL dword ptr [EAX + 0xd8]
00478688  85 C0                     TEST EAX,EAX
0047868A  0F 84 C1 07 00 00         JZ 0x00478e51
00478690  5F                        POP EDI
00478691  5E                        POP ESI
00478692  83 C8 FF                  OR EAX,0xffffffff
00478695  5B                        POP EBX
00478696  5D                        POP EBP
00478697  C2 04 00                  RET 0x4
LAB_0047869a:
0047869A  83 F8 01                  CMP EAX,0x1
0047869D  0F 85 1B 03 00 00         JNZ 0x004789be
004786A3  6A 02                     PUSH 0x2
004786A5  8B CE                     MOV ECX,ESI
004786A7  E8 32 AB F8 FF            CALL 0x004031de
004786AC  40                        INC EAX
004786AD  83 F8 04                  CMP EAX,0x4
004786B0  0F 87 D6 0B 00 00         JA 0x0047928c
switchD_004786b6::switchD:
004786B6  FF 24 85 98 92 47 00      JMP dword ptr [EAX*0x4 + 0x479298]
switchD_004786b6::caseD_ffffffff:
004786BD  68 7C B3 7A 00            PUSH 0x7ab37c
004786C2  68 CC 4C 7A 00            PUSH 0x7a4ccc
004786C7  57                        PUSH EDI
004786C8  57                        PUSH EDI
004786C9  68 D4 33 00 00            PUSH 0x33d4
004786CE  68 3C 9D 7A 00            PUSH 0x7a9d3c
004786D3  E8 F8 4D 23 00            CALL 0x006ad4d0
004786D8  83 C4 18                  ADD ESP,0x18
004786DB  85 C0                     TEST EAX,EAX
004786DD  74 01                     JZ 0x004786e0
004786DF  CC                        INT3
LAB_004786e0:
004786E0  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
004786E6  68 D4 33 00 00            PUSH 0x33d4
004786EB  68 3C 9D 7A 00            PUSH 0x7a9d3c
004786F0  51                        PUSH ECX
004786F1  68 FF FF 00 00            PUSH 0xffff
004786F6  E8 45 D7 22 00            CALL 0x006a5e40
004786FB  5F                        POP EDI
004786FC  5E                        POP ESI
004786FD  B8 FF FF 00 00            MOV EAX,0xffff
00478702  5B                        POP EBX
00478703  5D                        POP EBP
00478704  C2 04 00                  RET 0x4
switchD_004786b6::caseD_0:
00478707  8B CE                     MOV ECX,ESI
00478709  E8 86 AE F8 FF            CALL 0x00403594
0047870E  85 C0                     TEST EAX,EAX
00478710  0F 84 96 02 00 00         JZ 0x004789ac
00478716  8B CE                     MOV ECX,ESI
00478718  E8 52 97 F8 FF            CALL 0x00401e6f
0047871D  83 F8 01                  CMP EAX,0x1
00478720  75 10                     JNZ 0x00478732
00478722  8B CE                     MOV ECX,ESI
00478724  E8 F1 9B F8 FF            CALL 0x0040231a
00478729  83 F8 01                  CMP EAX,0x1
0047872C  0F 84 7A 02 00 00         JZ 0x004789ac
LAB_00478732:
00478732  66 8B 86 1D 06 00 00      MOV AX,word ptr [ESI + 0x61d]
00478739  66 8B 8E 21 06 00 00      MOV CX,word ptr [ESI + 0x621]
00478740  66 8B 96 1F 06 00 00      MOV DX,word ptr [ESI + 0x61f]
00478747  8D BE 21 06 00 00         LEA EDI,[ESI + 0x621]
0047874D  66 85 C0                  TEST AX,AX
00478750  0F 8C CE 00 00 00         JL 0x00478824
00478756  66 3B 05 40 B2 7F 00      CMP AX,word ptr [0x007fb240]
0047875D  0F 8D C1 00 00 00         JGE 0x00478824
00478763  66 85 D2                  TEST DX,DX
00478766  0F 8C B8 00 00 00         JL 0x00478824
0047876C  66 3B 15 42 B2 7F 00      CMP DX,word ptr [0x007fb242]
00478773  0F 8D AB 00 00 00         JGE 0x00478824
00478779  66 85 C9                  TEST CX,CX
0047877C  0F 8C A2 00 00 00         JL 0x00478824
00478782  66 3B 0D 44 B2 7F 00      CMP CX,word ptr [0x007fb244]
00478789  0F 8D 95 00 00 00         JGE 0x00478824
0047878F  0F BF 1D 46 B2 7F 00      MOVSX EBX,word ptr [0x007fb246]
00478796  0F BF C9                  MOVSX ECX,CX
00478799  0F AF D9                  IMUL EBX,ECX
0047879C  0F BF 0D 40 B2 7F 00      MOVSX ECX,word ptr [0x007fb240]
004787A3  0F BF D2                  MOVSX EDX,DX
004787A6  0F AF CA                  IMUL ECX,EDX
004787A9  0F BF C0                  MOVSX EAX,AX
004787AC  03 D9                     ADD EBX,ECX
004787AE  8B 0D 48 B2 7F 00         MOV ECX,dword ptr [0x007fb248]
004787B4  03 D8                     ADD EBX,EAX
004787B6  8B 0C D9                  MOV ECX,dword ptr [ECX + EBX*0x8]
004787B9  85 C9                     TEST ECX,ECX
004787BB  74 67                     JZ 0x00478824
004787BD  8B 51 18                  MOV EDX,dword ptr [ECX + 0x18]
004787C0  8B 86 23 06 00 00         MOV EAX,dword ptr [ESI + 0x623]
004787C6  3B D0                     CMP EDX,EAX
004787C8  75 5A                     JNZ 0x00478824
004787CA  8B 01                     MOV EAX,dword ptr [ECX]
004787CC  FF 90 F8 00 00 00         CALL dword ptr [EAX + 0xf8]
004787D2  85 C0                     TEST EAX,EAX
004787D4  74 4E                     JZ 0x00478824
004787D6  8D 9E 2B 06 00 00         LEA EBX,[ESI + 0x62b]
004787DC  8D BE 29 06 00 00         LEA EDI,[ESI + 0x629]
004787E2  8D 86 27 06 00 00         LEA EAX,[ESI + 0x627]
004787E8  53                        PUSH EBX
004787E9  57                        PUSH EDI
004787EA  50                        PUSH EAX
004787EB  8B CE                     MOV ECX,ESI
004787ED  C7 86 B7 00 00 00 00 00 00 00  MOV dword ptr [ESI + 0xb7],0x0
004787F7  E8 4C D1 F8 FF            CALL 0x00405948
004787FC  83 F8 01                  CMP EAX,0x1
004787FF  0F 85 1B 05 00 00         JNZ 0x00478d20
00478805  0F BF 0B                  MOVSX ECX,word ptr [EBX]
00478808  0F BF 17                  MOVSX EDX,word ptr [EDI]
0047880B  0F BF 86 27 06 00 00      MOVSX EAX,word ptr [ESI + 0x627]
00478812  51                        PUSH ECX
00478813  52                        PUSH EDX
00478814  C7 86 31 06 00 00 03 00 00 00  MOV dword ptr [ESI + 0x631],0x3
0047881E  50                        PUSH EAX
0047881F  E9 5F 03 00 00            JMP 0x00478b83
LAB_00478824:
00478824  8B 86 19 06 00 00         MOV EAX,dword ptr [ESI + 0x619]
0047882A  85 C0                     TEST EAX,EAX
0047882C  74 2D                     JZ 0x0047885b
0047882E  8D 8E 23 06 00 00         LEA ECX,[ESI + 0x623]
00478834  8D 9E 1F 06 00 00         LEA EBX,[ESI + 0x61f]
0047883A  51                        PUSH ECX
0047883B  57                        PUSH EDI
0047883C  8D 86 1D 06 00 00         LEA EAX,[ESI + 0x61d]
00478842  53                        PUSH EBX
00478843  50                        PUSH EAX
00478844  8B CE                     MOV ECX,ESI
00478846  E8 6A AF F8 FF            CALL 0x004037b5
0047884B  85 C0                     TEST EAX,EAX
0047884D  74 0C                     JZ 0x0047885b
0047884F  0F BF 17                  MOVSX EDX,word ptr [EDI]
00478852  0F BF 03                  MOVSX EAX,word ptr [EBX]
00478855  52                        PUSH EDX
00478856  E9 1F 03 00 00            JMP 0x00478b7a
LAB_0047885b:
0047885B  8B CE                     MOV ECX,ESI
0047885D  E8 F3 AF F8 FF            CALL 0x00403855
00478862  C7 86 B7 00 00 00 00 00 00 00  MOV dword ptr [ESI + 0xb7],0x0
0047886C  5F                        POP EDI
0047886D  5E                        POP ESI
0047886E  33 C0                     XOR EAX,EAX
00478870  5B                        POP EBX
00478871  5D                        POP EBP
00478872  C2 04 00                  RET 0x4
switchD_004786b6::caseD_3:
00478875  0F BF 86 21 06 00 00      MOVSX EAX,word ptr [ESI + 0x621]
0047887C  0F BF 8E 1F 06 00 00      MOVSX ECX,word ptr [ESI + 0x61f]
00478883  0F BF 96 1D 06 00 00      MOVSX EDX,word ptr [ESI + 0x61d]
0047888A  50                        PUSH EAX
0047888B  51                        PUSH ECX
0047888C  52                        PUSH EDX
0047888D  8B CE                     MOV ECX,ESI
0047888F  E8 D7 C6 F8 FF            CALL 0x00404f6b
00478894  57                        PUSH EDI
00478895  8B CE                     MOV ECX,ESI
00478897  E8 42 A9 F8 FF            CALL 0x004031de
0047889C  5F                        POP EDI
0047889D  5E                        POP ESI
0047889E  B8 02 00 00 00            MOV EAX,0x2
004788A3  5B                        POP EBX
004788A4  5D                        POP EBP
004788A5  C2 04 00                  RET 0x4
switchD_004786b6::caseD_1:
004788A8  8B CE                     MOV ECX,ESI
004788AA  E8 E5 AC F8 FF            CALL 0x00403594
004788AF  85 C0                     TEST EAX,EAX
004788B1  0F 84 F5 00 00 00         JZ 0x004789ac
004788B7  8B CE                     MOV ECX,ESI
004788B9  E8 B1 95 F8 FF            CALL 0x00401e6f
004788BE  83 F8 01                  CMP EAX,0x1
004788C1  75 10                     JNZ 0x004788d3
004788C3  8B CE                     MOV ECX,ESI
004788C5  E8 50 9A F8 FF            CALL 0x0040231a
004788CA  83 F8 01                  CMP EAX,0x1
004788CD  0F 84 D9 00 00 00         JZ 0x004789ac
LAB_004788d3:
004788D3  66 8B 86 1D 06 00 00      MOV AX,word ptr [ESI + 0x61d]
004788DA  66 8B 8E 21 06 00 00      MOV CX,word ptr [ESI + 0x621]
004788E1  66 8B 96 1F 06 00 00      MOV DX,word ptr [ESI + 0x61f]
004788E8  8D 9E 21 06 00 00         LEA EBX,[ESI + 0x621]
004788EE  66 3B C7                  CMP AX,DI
004788F1  7C 70                     JL 0x00478963
004788F3  66 3B 05 40 B2 7F 00      CMP AX,word ptr [0x007fb240]
004788FA  7D 67                     JGE 0x00478963
004788FC  66 85 D2                  TEST DX,DX
004788FF  7C 62                     JL 0x00478963
00478901  66 3B 15 42 B2 7F 00      CMP DX,word ptr [0x007fb242]
00478908  7D 59                     JGE 0x00478963
0047890A  66 85 C9                  TEST CX,CX
0047890D  7C 54                     JL 0x00478963
0047890F  66 3B 0D 44 B2 7F 00      CMP CX,word ptr [0x007fb244]
00478916  7D 4B                     JGE 0x00478963
00478918  0F BF 3D 46 B2 7F 00      MOVSX EDI,word ptr [0x007fb246]
0047891F  0F BF C9                  MOVSX ECX,CX
00478922  0F AF F9                  IMUL EDI,ECX
00478925  0F BF 0D 40 B2 7F 00      MOVSX ECX,word ptr [0x007fb240]
0047892C  0F BF D2                  MOVSX EDX,DX
0047892F  0F AF CA                  IMUL ECX,EDX
00478932  0F BF C0                  MOVSX EAX,AX
00478935  03 F9                     ADD EDI,ECX
00478937  8B 0D 48 B2 7F 00         MOV ECX,dword ptr [0x007fb248]
0047893D  03 F8                     ADD EDI,EAX
0047893F  8B 0C F9                  MOV ECX,dword ptr [ECX + EDI*0x8]
00478942  85 C9                     TEST ECX,ECX
00478944  74 1D                     JZ 0x00478963
00478946  8B 51 18                  MOV EDX,dword ptr [ECX + 0x18]
00478949  8B 86 23 06 00 00         MOV EAX,dword ptr [ESI + 0x623]
0047894F  3B D0                     CMP EDX,EAX
00478951  75 10                     JNZ 0x00478963
00478953  8B 01                     MOV EAX,dword ptr [ECX]
00478955  FF 90 F8 00 00 00         CALL dword ptr [EAX + 0xf8]
0047895B  85 C0                     TEST EAX,EAX
0047895D  0F 85 29 09 00 00         JNZ 0x0047928c
LAB_00478963:
00478963  8B 86 19 06 00 00         MOV EAX,dword ptr [ESI + 0x619]
00478969  85 C0                     TEST EAX,EAX
0047896B  74 25                     JZ 0x00478992
0047896D  8D 8E 23 06 00 00         LEA ECX,[ESI + 0x623]
00478973  8D BE 1F 06 00 00         LEA EDI,[ESI + 0x61f]
00478979  51                        PUSH ECX
0047897A  53                        PUSH EBX
0047897B  8D 86 1D 06 00 00         LEA EAX,[ESI + 0x61d]
00478981  57                        PUSH EDI
00478982  50                        PUSH EAX
00478983  8B CE                     MOV ECX,ESI
00478985  E8 2B AE F8 FF            CALL 0x004037b5
0047898A  85 C0                     TEST EAX,EAX
0047898C  0F 85 E1 01 00 00         JNZ 0x00478b73
LAB_00478992:
00478992  8B CE                     MOV ECX,ESI
00478994  E8 BC AE F8 FF            CALL 0x00403855
00478999  C7 86 B7 00 00 00 00 00 00 00  MOV dword ptr [ESI + 0xb7],0x0
004789A3  5F                        POP EDI
004789A4  5E                        POP ESI
004789A5  33 C0                     XOR EAX,EAX
004789A7  5B                        POP EBX
004789A8  5D                        POP EBP
004789A9  C2 04 00                  RET 0x4
LAB_004789ac:
004789AC  8B CE                     MOV ECX,ESI
004789AE  E8 A2 AE F8 FF            CALL 0x00403855
004789B3  89 BE B7 00 00 00         MOV dword ptr [ESI + 0xb7],EDI
004789B9  E9 93 04 00 00            JMP 0x00478e51
LAB_004789be:
004789BE  83 F8 02                  CMP EAX,0x2
004789C1  0F 85 D8 01 00 00         JNZ 0x00478b9f
004789C7  8B 9E 2D 06 00 00         MOV EBX,dword ptr [ESI + 0x62d]
004789CD  50                        PUSH EAX
004789CE  43                        INC EBX
004789CF  8B CE                     MOV ECX,ESI
004789D1  89 9E 2D 06 00 00         MOV dword ptr [ESI + 0x62d],EBX
004789D7  E8 4F B0 F8 FF            CALL 0x00403a2b
004789DC  83 F8 FF                  CMP EAX,-0x1
004789DF  75 09                     JNZ 0x004789ea
004789E1  5F                        POP EDI
004789E2  5E                        POP ESI
004789E3  0B C0                     OR EAX,EAX
004789E5  5B                        POP EBX
004789E6  5D                        POP EBP
004789E7  C2 04 00                  RET 0x4
LAB_004789ea:
004789EA  39 BE 2E 08 00 00         CMP dword ptr [ESI + 0x82e],EDI
004789F0  0F 85 96 08 00 00         JNZ 0x0047928c
004789F6  81 BE 8B 04 00 00 FF FF 00 00  CMP dword ptr [ESI + 0x48b],0xffff
00478A00  0F 85 86 08 00 00         JNZ 0x0047928c
00478A06  8B 86 2D 06 00 00         MOV EAX,dword ptr [ESI + 0x62d]
00478A0C  B9 0A 00 00 00            MOV ECX,0xa
00478A11  99                        CDQ
00478A12  F7 F9                     IDIV ECX
00478A14  85 D2                     TEST EDX,EDX
00478A16  0F 85 70 08 00 00         JNZ 0x0047928c
00478A1C  8B CE                     MOV ECX,ESI
00478A1E  E8 71 AB F8 FF            CALL 0x00403594
00478A23  85 C0                     TEST EAX,EAX
00478A25  0F 84 26 04 00 00         JZ 0x00478e51
00478A2B  8B CE                     MOV ECX,ESI
00478A2D  E8 3D 94 F8 FF            CALL 0x00401e6f
00478A32  83 F8 01                  CMP EAX,0x1
00478A35  75 10                     JNZ 0x00478a47
00478A37  8B CE                     MOV ECX,ESI
00478A39  E8 DC 98 F8 FF            CALL 0x0040231a
00478A3E  83 F8 01                  CMP EAX,0x1
00478A41  0F 84 0A 04 00 00         JZ 0x00478e51
LAB_00478a47:
00478A47  66 8B 86 1D 06 00 00      MOV AX,word ptr [ESI + 0x61d]
00478A4E  66 8B 8E 21 06 00 00      MOV CX,word ptr [ESI + 0x621]
00478A55  66 8B 96 1F 06 00 00      MOV DX,word ptr [ESI + 0x61f]
00478A5C  8D 9E 21 06 00 00         LEA EBX,[ESI + 0x621]
00478A62  66 85 C0                  TEST AX,AX
00478A65  0F 8C C1 00 00 00         JL 0x00478b2c
00478A6B  66 3B 05 40 B2 7F 00      CMP AX,word ptr [0x007fb240]
00478A72  0F 8D B4 00 00 00         JGE 0x00478b2c
00478A78  66 85 D2                  TEST DX,DX
00478A7B  0F 8C AB 00 00 00         JL 0x00478b2c
00478A81  66 3B 15 42 B2 7F 00      CMP DX,word ptr [0x007fb242]
00478A88  0F 8D 9E 00 00 00         JGE 0x00478b2c
00478A8E  66 85 C9                  TEST CX,CX
00478A91  0F 8C 95 00 00 00         JL 0x00478b2c
00478A97  66 3B 0D 44 B2 7F 00      CMP CX,word ptr [0x007fb244]
00478A9E  0F 8D 88 00 00 00         JGE 0x00478b2c
00478AA4  0F BF 3D 46 B2 7F 00      MOVSX EDI,word ptr [0x007fb246]
00478AAB  0F BF C9                  MOVSX ECX,CX
00478AAE  0F AF F9                  IMUL EDI,ECX
00478AB1  0F BF 0D 40 B2 7F 00      MOVSX ECX,word ptr [0x007fb240]
00478AB8  0F BF D2                  MOVSX EDX,DX
00478ABB  0F AF CA                  IMUL ECX,EDX
00478ABE  0F BF C0                  MOVSX EAX,AX
00478AC1  03 F9                     ADD EDI,ECX
00478AC3  8B 0D 48 B2 7F 00         MOV ECX,dword ptr [0x007fb248]
00478AC9  03 F8                     ADD EDI,EAX
00478ACB  8B 0C F9                  MOV ECX,dword ptr [ECX + EDI*0x8]
00478ACE  85 C9                     TEST ECX,ECX
00478AD0  74 5A                     JZ 0x00478b2c
00478AD2  8B 51 18                  MOV EDX,dword ptr [ECX + 0x18]
00478AD5  8B 86 23 06 00 00         MOV EAX,dword ptr [ESI + 0x623]
00478ADB  3B D0                     CMP EDX,EAX
00478ADD  75 4D                     JNZ 0x00478b2c
00478ADF  8B 01                     MOV EAX,dword ptr [ECX]
00478AE1  FF 90 F8 00 00 00         CALL dword ptr [EAX + 0xf8]
00478AE7  85 C0                     TEST EAX,EAX
00478AE9  74 41                     JZ 0x00478b2c
00478AEB  8D BE 2B 06 00 00         LEA EDI,[ESI + 0x62b]
00478AF1  8D 9E 29 06 00 00         LEA EBX,[ESI + 0x629]
00478AF7  8D 86 27 06 00 00         LEA EAX,[ESI + 0x627]
00478AFD  57                        PUSH EDI
00478AFE  53                        PUSH EBX
00478AFF  50                        PUSH EAX
00478B00  8B CE                     MOV ECX,ESI
00478B02  E8 41 CE F8 FF            CALL 0x00405948
00478B07  83 F8 01                  CMP EAX,0x1
00478B0A  0F 85 7C 07 00 00         JNZ 0x0047928c
00478B10  C7 86 31 06 00 00 03 00 00 00  MOV dword ptr [ESI + 0x631],0x3
LAB_00478b1a:
00478B1A  0F BF 0F                  MOVSX ECX,word ptr [EDI]
00478B1D  0F BF 13                  MOVSX EDX,word ptr [EBX]
00478B20  0F BF 86 27 06 00 00      MOVSX EAX,word ptr [ESI + 0x627]
00478B27  51                        PUSH ECX
00478B28  52                        PUSH EDX
00478B29  50                        PUSH EAX
00478B2A  EB 57                     JMP 0x00478b83
LAB_00478b2c:
00478B2C  8B 86 19 06 00 00         MOV EAX,dword ptr [ESI + 0x619]
00478B32  85 C0                     TEST EAX,EAX
00478B34  0F 84 07 03 00 00         JZ 0x00478e41
00478B3A  8D 8E 23 06 00 00         LEA ECX,[ESI + 0x623]
00478B40  8D BE 1F 06 00 00         LEA EDI,[ESI + 0x61f]
00478B46  51                        PUSH ECX
00478B47  53                        PUSH EBX
00478B48  8D 86 1D 06 00 00         LEA EAX,[ESI + 0x61d]
00478B4E  57                        PUSH EDI
00478B4F  50                        PUSH EAX
00478B50  8B CE                     MOV ECX,ESI
00478B52  E8 5E AC F8 FF            CALL 0x004037b5
00478B57  85 C0                     TEST EAX,EAX
00478B59  0F 84 E2 02 00 00         JZ 0x00478e41
LAB_00478b5f:
00478B5F  C7 86 31 06 00 00 01 00 00 00  MOV dword ptr [ESI + 0x631],0x1
00478B69  C7 86 B7 00 00 00 03 00 00 00  MOV dword ptr [ESI + 0xb7],0x3
LAB_00478b73:
00478B73  0F BF 13                  MOVSX EDX,word ptr [EBX]
00478B76  0F BF 07                  MOVSX EAX,word ptr [EDI]
00478B79  52                        PUSH EDX
LAB_00478b7a:
00478B7A  0F BF 8E 1D 06 00 00      MOVSX ECX,word ptr [ESI + 0x61d]
00478B81  50                        PUSH EAX
LAB_00478b82:
00478B82  51                        PUSH ECX
LAB_00478b83:
00478B83  8B CE                     MOV ECX,ESI
00478B85  E8 E1 C3 F8 FF            CALL 0x00404f6b
00478B8A  6A 00                     PUSH 0x0
00478B8C  8B CE                     MOV ECX,ESI
00478B8E  E8 4B A6 F8 FF            CALL 0x004031de
00478B93  5F                        POP EDI
00478B94  5E                        POP ESI
00478B95  B8 02 00 00 00            MOV EAX,0x2
00478B9A  5B                        POP EBX
00478B9B  5D                        POP EBP
00478B9C  C2 04 00                  RET 0x4
LAB_00478b9f:
00478B9F  83 F8 03                  CMP EAX,0x3
00478BA2  0F 85 C3 02 00 00         JNZ 0x00478e6b
00478BA8  6A 02                     PUSH 0x2
00478BAA  8B CE                     MOV ECX,ESI
00478BAC  E8 2D A6 F8 FF            CALL 0x004031de
00478BB1  40                        INC EAX
00478BB2  83 F8 04                  CMP EAX,0x4
00478BB5  0F 87 D1 06 00 00         JA 0x0047928c
switchD_00478bbb::switchD:
00478BBB  FF 24 85 AC 92 47 00      JMP dword ptr [EAX*0x4 + 0x4792ac]
switchD_00478bbb::caseD_ffffffff:
00478BC2  68 48 B3 7A 00            PUSH 0x7ab348
00478BC7  68 CC 4C 7A 00            PUSH 0x7a4ccc
00478BCC  6A 00                     PUSH 0x0
00478BCE  6A 00                     PUSH 0x0
00478BD0  68 51 34 00 00            PUSH 0x3451
00478BD5  68 3C 9D 7A 00            PUSH 0x7a9d3c
00478BDA  E8 F1 48 23 00            CALL 0x006ad4d0
00478BDF  83 C4 18                  ADD ESP,0x18
00478BE2  85 C0                     TEST EAX,EAX
00478BE4  74 01                     JZ 0x00478be7
00478BE6  CC                        INT3
LAB_00478be7:
00478BE7  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
00478BEC  68 51 34 00 00            PUSH 0x3451
00478BF1  68 3C 9D 7A 00            PUSH 0x7a9d3c
00478BF6  50                        PUSH EAX
00478BF7  68 FF FF 00 00            PUSH 0xffff
00478BFC  E8 3F D2 22 00            CALL 0x006a5e40
00478C01  5F                        POP EDI
00478C02  5E                        POP ESI
00478C03  B8 FF FF 00 00            MOV EAX,0xffff
00478C08  5B                        POP EBX
00478C09  5D                        POP EBP
00478C0A  C2 04 00                  RET 0x4
switchD_00478bbb::caseD_0:
00478C0D  66 8B 86 1D 06 00 00      MOV AX,word ptr [ESI + 0x61d]
00478C14  66 8B 8E 21 06 00 00      MOV CX,word ptr [ESI + 0x621]
00478C1B  66 8B 96 1F 06 00 00      MOV DX,word ptr [ESI + 0x61f]
00478C22  8D 9E 21 06 00 00         LEA EBX,[ESI + 0x621]
00478C28  66 85 C0                  TEST AX,AX
00478C2B  0F 8C 82 00 00 00         JL 0x00478cb3
00478C31  66 3B 05 40 B2 7F 00      CMP AX,word ptr [0x007fb240]
00478C38  7D 79                     JGE 0x00478cb3
00478C3A  66 85 D2                  TEST DX,DX
00478C3D  7C 74                     JL 0x00478cb3
00478C3F  66 3B 15 42 B2 7F 00      CMP DX,word ptr [0x007fb242]
00478C46  7D 6B                     JGE 0x00478cb3
00478C48  66 85 C9                  TEST CX,CX
00478C4B  7C 66                     JL 0x00478cb3
00478C4D  66 3B 0D 44 B2 7F 00      CMP CX,word ptr [0x007fb244]
00478C54  7D 5D                     JGE 0x00478cb3
00478C56  0F BF 3D 46 B2 7F 00      MOVSX EDI,word ptr [0x007fb246]
00478C5D  0F BF C9                  MOVSX ECX,CX
00478C60  0F AF F9                  IMUL EDI,ECX
00478C63  0F BF 0D 40 B2 7F 00      MOVSX ECX,word ptr [0x007fb240]
00478C6A  0F BF D2                  MOVSX EDX,DX
00478C6D  0F AF CA                  IMUL ECX,EDX
00478C70  0F BF C0                  MOVSX EAX,AX
00478C73  03 F9                     ADD EDI,ECX
00478C75  8B 0D 48 B2 7F 00         MOV ECX,dword ptr [0x007fb248]
00478C7B  03 F8                     ADD EDI,EAX
00478C7D  8B 0C F9                  MOV ECX,dword ptr [ECX + EDI*0x8]
00478C80  85 C9                     TEST ECX,ECX
00478C82  74 2F                     JZ 0x00478cb3
00478C84  8B 51 18                  MOV EDX,dword ptr [ECX + 0x18]
00478C87  8B 86 23 06 00 00         MOV EAX,dword ptr [ESI + 0x623]
00478C8D  3B D0                     CMP EDX,EAX
00478C8F  75 22                     JNZ 0x00478cb3
00478C91  8B 01                     MOV EAX,dword ptr [ECX]
00478C93  FF 90 F8 00 00 00         CALL dword ptr [EAX + 0xf8]
00478C99  85 C0                     TEST EAX,EAX
00478C9B  74 16                     JZ 0x00478cb3
00478C9D  C7 86 31 06 00 00 04 00 00 00  MOV dword ptr [ESI + 0x631],0x4
00478CA7  5F                        POP EDI
00478CA8  5E                        POP ESI
00478CA9  B8 02 00 00 00            MOV EAX,0x2
00478CAE  5B                        POP EBX
00478CAF  5D                        POP EBP
00478CB0  C2 04 00                  RET 0x4
LAB_00478cb3:
00478CB3  8B 86 19 06 00 00         MOV EAX,dword ptr [ESI + 0x619]
00478CB9  85 C0                     TEST EAX,EAX
00478CBB  0F 84 80 01 00 00         JZ 0x00478e41
00478CC1  8D 8E 23 06 00 00         LEA ECX,[ESI + 0x623]
00478CC7  8D BE 1F 06 00 00         LEA EDI,[ESI + 0x61f]
00478CCD  51                        PUSH ECX
00478CCE  53                        PUSH EBX
00478CCF  8D 86 1D 06 00 00         LEA EAX,[ESI + 0x61d]
00478CD5  57                        PUSH EDI
00478CD6  50                        PUSH EAX
00478CD7  8B CE                     MOV ECX,ESI
00478CD9  E8 D7 AA F8 FF            CALL 0x004037b5
00478CDE  85 C0                     TEST EAX,EAX
00478CE0  0F 84 5B 01 00 00         JZ 0x00478e41
00478CE6  E9 74 FE FF FF            JMP 0x00478b5f
switchD_00478bbb::caseD_3:
00478CEB  8D BE 2B 06 00 00         LEA EDI,[ESI + 0x62b]
00478CF1  8D 9E 29 06 00 00         LEA EBX,[ESI + 0x629]
00478CF7  8D 86 27 06 00 00         LEA EAX,[ESI + 0x627]
00478CFD  57                        PUSH EDI
00478CFE  53                        PUSH EBX
00478CFF  50                        PUSH EAX
00478D00  8B CE                     MOV ECX,ESI
00478D02  E8 41 CC F8 FF            CALL 0x00405948
00478D07  83 F8 01                  CMP EAX,0x1
00478D0A  75 14                     JNZ 0x00478d20
00478D0C  0F BF 17                  MOVSX EDX,word ptr [EDI]
00478D0F  0F BF 03                  MOVSX EAX,word ptr [EBX]
00478D12  0F BF 8E 27 06 00 00      MOVSX ECX,word ptr [ESI + 0x627]
00478D19  52                        PUSH EDX
00478D1A  50                        PUSH EAX
00478D1B  E9 62 FE FF FF            JMP 0x00478b82
LAB_00478d20:
00478D20  6A 00                     PUSH 0x0
00478D22  8B CE                     MOV ECX,ESI
00478D24  C7 86 31 06 00 00 02 00 00 00  MOV dword ptr [ESI + 0x631],0x2
00478D2E  C7 86 2D 06 00 00 00 00 00 00  MOV dword ptr [ESI + 0x62d],0x0
00478D38  E8 EE AC F8 FF            CALL 0x00403a2b
00478D3D  83 F8 FF                  CMP EAX,-0x1
00478D40  0F 85 46 05 00 00         JNZ 0x0047928c
LAB_00478d46:
00478D46  5F                        POP EDI
00478D47  5E                        POP ESI
00478D48  83 C8 FF                  OR EAX,0xffffffff
00478D4B  5B                        POP EBX
00478D4C  5D                        POP EBP
00478D4D  C2 04 00                  RET 0x4
switchD_00478bbb::caseD_1:
00478D50  8B CE                     MOV ECX,ESI
00478D52  E8 3D A8 F8 FF            CALL 0x00403594
00478D57  85 C0                     TEST EAX,EAX
00478D59  0F 84 EB 00 00 00         JZ 0x00478e4a
00478D5F  8B CE                     MOV ECX,ESI
00478D61  E8 09 91 F8 FF            CALL 0x00401e6f
00478D66  83 F8 01                  CMP EAX,0x1
00478D69  75 10                     JNZ 0x00478d7b
00478D6B  8B CE                     MOV ECX,ESI
00478D6D  E8 A8 95 F8 FF            CALL 0x0040231a
00478D72  83 F8 01                  CMP EAX,0x1
00478D75  0F 84 CF 00 00 00         JZ 0x00478e4a
LAB_00478d7b:
00478D7B  66 8B 86 1D 06 00 00      MOV AX,word ptr [ESI + 0x61d]
00478D82  66 8B 8E 21 06 00 00      MOV CX,word ptr [ESI + 0x621]
00478D89  66 8B 96 1F 06 00 00      MOV DX,word ptr [ESI + 0x61f]
00478D90  8D 9E 21 06 00 00         LEA EBX,[ESI + 0x621]
00478D96  66 85 C0                  TEST AX,AX
00478D99  7C 70                     JL 0x00478e0b
00478D9B  66 3B 05 40 B2 7F 00      CMP AX,word ptr [0x007fb240]
00478DA2  7D 67                     JGE 0x00478e0b
00478DA4  66 85 D2                  TEST DX,DX
00478DA7  7C 62                     JL 0x00478e0b
00478DA9  66 3B 15 42 B2 7F 00      CMP DX,word ptr [0x007fb242]
00478DB0  7D 59                     JGE 0x00478e0b
00478DB2  66 85 C9                  TEST CX,CX
00478DB5  7C 54                     JL 0x00478e0b
00478DB7  66 3B 0D 44 B2 7F 00      CMP CX,word ptr [0x007fb244]
00478DBE  7D 4B                     JGE 0x00478e0b
00478DC0  0F BF 3D 46 B2 7F 00      MOVSX EDI,word ptr [0x007fb246]
00478DC7  0F BF C9                  MOVSX ECX,CX
00478DCA  0F AF F9                  IMUL EDI,ECX
00478DCD  0F BF 0D 40 B2 7F 00      MOVSX ECX,word ptr [0x007fb240]
00478DD4  0F BF D2                  MOVSX EDX,DX
00478DD7  0F AF CA                  IMUL ECX,EDX
00478DDA  0F BF C0                  MOVSX EAX,AX
00478DDD  03 F9                     ADD EDI,ECX
00478DDF  8B 0D 48 B2 7F 00         MOV ECX,dword ptr [0x007fb248]
00478DE5  03 F8                     ADD EDI,EAX
00478DE7  8B 0C F9                  MOV ECX,dword ptr [ECX + EDI*0x8]
00478DEA  85 C9                     TEST ECX,ECX
00478DEC  74 1D                     JZ 0x00478e0b
00478DEE  8B 51 18                  MOV EDX,dword ptr [ECX + 0x18]
00478DF1  8B 86 23 06 00 00         MOV EAX,dword ptr [ESI + 0x623]
00478DF7  3B D0                     CMP EDX,EAX
00478DF9  75 10                     JNZ 0x00478e0b
00478DFB  8B 01                     MOV EAX,dword ptr [ECX]
00478DFD  FF 90 F8 00 00 00         CALL dword ptr [EAX + 0xf8]
00478E03  85 C0                     TEST EAX,EAX
00478E05  0F 85 81 04 00 00         JNZ 0x0047928c
LAB_00478e0b:
00478E0B  8B 86 19 06 00 00         MOV EAX,dword ptr [ESI + 0x619]
00478E11  85 C0                     TEST EAX,EAX
00478E13  74 25                     JZ 0x00478e3a
00478E15  8D 8E 23 06 00 00         LEA ECX,[ESI + 0x623]
00478E1B  8D BE 1F 06 00 00         LEA EDI,[ESI + 0x61f]
00478E21  51                        PUSH ECX
00478E22  53                        PUSH EBX
00478E23  8D 86 1D 06 00 00         LEA EAX,[ESI + 0x61d]
00478E29  57                        PUSH EDI
00478E2A  50                        PUSH EAX
00478E2B  8B CE                     MOV ECX,ESI
00478E2D  E8 83 A9 F8 FF            CALL 0x004037b5
00478E32  85 C0                     TEST EAX,EAX
00478E34  0F 85 25 FD FF FF         JNZ 0x00478b5f
LAB_00478e3a:
00478E3A  8B CE                     MOV ECX,ESI
00478E3C  E8 14 AA F8 FF            CALL 0x00403855
LAB_00478e41:
00478E41  5F                        POP EDI
00478E42  5E                        POP ESI
00478E43  33 C0                     XOR EAX,EAX
00478E45  5B                        POP EBX
00478E46  5D                        POP EBP
00478E47  C2 04 00                  RET 0x4
LAB_00478e4a:
00478E4A  8B CE                     MOV ECX,ESI
00478E4C  E8 04 AA F8 FF            CALL 0x00403855
LAB_00478e51:
00478E51  8B 16                     MOV EDX,dword ptr [ESI]
00478E53  68 B2 01 00 00            PUSH 0x1b2
00478E58  6A 03                     PUSH 0x3
00478E5A  8B CE                     MOV ECX,ESI
00478E5C  FF 92 90 00 00 00         CALL dword ptr [EDX + 0x90]
LAB_00478e62:
00478E62  5F                        POP EDI
00478E63  5E                        POP ESI
00478E64  33 C0                     XOR EAX,EAX
00478E66  5B                        POP EBX
00478E67  5D                        POP EBP
00478E68  C2 04 00                  RET 0x4
LAB_00478e6b:
00478E6B  83 F8 04                  CMP EAX,0x4
00478E6E  0F 85 F4 01 00 00         JNZ 0x00479068
00478E74  66 8B 86 1D 06 00 00      MOV AX,word ptr [ESI + 0x61d]
00478E7B  66 8B 8E 21 06 00 00      MOV CX,word ptr [ESI + 0x621]
00478E82  66 8B 96 1F 06 00 00      MOV DX,word ptr [ESI + 0x61f]
00478E89  8D 9E 21 06 00 00         LEA EBX,[ESI + 0x621]
00478E8F  66 3B C7                  CMP AX,DI
00478E92  0F 8C 74 01 00 00         JL 0x0047900c
00478E98  66 3B 05 40 B2 7F 00      CMP AX,word ptr [0x007fb240]
00478E9F  0F 8D 67 01 00 00         JGE 0x0047900c
00478EA5  66 85 D2                  TEST DX,DX
00478EA8  0F 8C 5E 01 00 00         JL 0x0047900c
00478EAE  66 3B 15 42 B2 7F 00      CMP DX,word ptr [0x007fb242]
00478EB5  0F 8D 51 01 00 00         JGE 0x0047900c
00478EBB  66 85 C9                  TEST CX,CX
00478EBE  0F 8C 48 01 00 00         JL 0x0047900c
00478EC4  66 3B 0D 44 B2 7F 00      CMP CX,word ptr [0x007fb244]
00478ECB  0F 8D 3B 01 00 00         JGE 0x0047900c
00478ED1  0F BF 3D 46 B2 7F 00      MOVSX EDI,word ptr [0x007fb246]
00478ED8  0F BF C9                  MOVSX ECX,CX
00478EDB  0F AF F9                  IMUL EDI,ECX
00478EDE  0F BF 0D 40 B2 7F 00      MOVSX ECX,word ptr [0x007fb240]
00478EE5  0F BF D2                  MOVSX EDX,DX
00478EE8  0F AF CA                  IMUL ECX,EDX
00478EEB  0F BF C0                  MOVSX EAX,AX
00478EEE  03 F9                     ADD EDI,ECX
00478EF0  8B 0D 48 B2 7F 00         MOV ECX,dword ptr [0x007fb248]
00478EF6  03 F8                     ADD EDI,EAX
00478EF8  8B 3C F9                  MOV EDI,dword ptr [ECX + EDI*0x8]
00478EFB  85 FF                     TEST EDI,EDI
00478EFD  0F 84 09 01 00 00         JZ 0x0047900c
00478F03  8B 57 18                  MOV EDX,dword ptr [EDI + 0x18]
00478F06  8B 86 23 06 00 00         MOV EAX,dword ptr [ESI + 0x623]
00478F0C  3B D0                     CMP EDX,EAX
00478F0E  0F 85 F8 00 00 00         JNZ 0x0047900c
00478F14  8B 07                     MOV EAX,dword ptr [EDI]
00478F16  8B CF                     MOV ECX,EDI
00478F18  FF 90 F8 00 00 00         CALL dword ptr [EAX + 0xf8]
00478F1E  85 C0                     TEST EAX,EAX
00478F20  0F 84 E6 00 00 00         JZ 0x0047900c
00478F26  8B CE                     MOV ECX,ESI
00478F28  E8 ED 93 F8 FF            CALL 0x0040231a
00478F2D  83 F8 01                  CMP EAX,0x1
00478F30  0F 85 BC 00 00 00         JNZ 0x00478ff2
00478F36  8B 16                     MOV EDX,dword ptr [ESI]
00478F38  68 B2 01 00 00            PUSH 0x1b2
00478F3D  6A 03                     PUSH 0x3
00478F3F  8B CE                     MOV ECX,ESI
00478F41  FF 92 90 00 00 00         CALL dword ptr [EDX + 0x90]
00478F47  8B 87 2C 04 00 00         MOV EAX,dword ptr [EDI + 0x42c]
00478F4D  8D 9E 2B 06 00 00         LEA EBX,[ESI + 0x62b]
00478F53  85 C0                     TEST EAX,EAX
00478F55  74 3A                     JZ 0x00478f91
00478F57  8D 86 27 06 00 00         LEA EAX,[ESI + 0x627]
00478F5D  85 C0                     TEST EAX,EAX
00478F5F  74 08                     JZ 0x00478f69
00478F61  8B 8F 30 04 00 00         MOV ECX,dword ptr [EDI + 0x430]
00478F67  89 08                     MOV dword ptr [EAX],ECX
LAB_00478f69:
00478F69  8D 86 29 06 00 00         LEA EAX,[ESI + 0x629]
00478F6F  85 C0                     TEST EAX,EAX
00478F71  74 08                     JZ 0x00478f7b
00478F73  8B 97 34 04 00 00         MOV EDX,dword ptr [EDI + 0x434]
00478F79  89 10                     MOV dword ptr [EAX],EDX
LAB_00478f7b:
00478F7B  85 DB                     TEST EBX,EBX
00478F7D  74 08                     JZ 0x00478f87
00478F7F  8B 87 38 04 00 00         MOV EAX,dword ptr [EDI + 0x438]
00478F85  89 03                     MOV dword ptr [EBX],EAX
LAB_00478f87:
00478F87  8B 87 2C 04 00 00         MOV EAX,dword ptr [EDI + 0x42c]
00478F8D  85 C0                     TEST EAX,EAX
00478F8F  75 33                     JNZ 0x00478fc4
LAB_00478f91:
00478F91  66 8B 86 21 06 00 00      MOV AX,word ptr [ESI + 0x621]
00478F98  66 8B 8E 1F 06 00 00      MOV CX,word ptr [ESI + 0x61f]
00478F9F  66 8B 96 1D 06 00 00      MOV DX,word ptr [ESI + 0x61d]
00478FA6  8D BE 29 06 00 00         LEA EDI,[ESI + 0x629]
00478FAC  53                        PUSH EBX
00478FAD  57                        PUSH EDI
00478FAE  8D BE 27 06 00 00         LEA EDI,[ESI + 0x627]
00478FB4  57                        PUSH EDI
00478FB5  6A 03                     PUSH 0x3
00478FB7  50                        PUSH EAX
00478FB8  51                        PUSH ECX
00478FB9  52                        PUSH EDX
00478FBA  50                        PUSH EAX
00478FBB  51                        PUSH ECX
00478FBC  52                        PUSH EDX
00478FBD  8B CE                     MOV ECX,ESI
00478FBF  E8 44 B9 F8 FF            CALL 0x00404908
LAB_00478fc4:
00478FC4  0F BF 0B                  MOVSX ECX,word ptr [EBX]
00478FC7  0F BF 96 29 06 00 00      MOVSX EDX,word ptr [ESI + 0x629]
00478FCE  0F BF 86 27 06 00 00      MOVSX EAX,word ptr [ESI + 0x627]
00478FD5  51                        PUSH ECX
00478FD6  52                        PUSH EDX
00478FD7  50                        PUSH EAX
00478FD8  8B CE                     MOV ECX,ESI
00478FDA  C7 86 31 06 00 00 05 00 00 00  MOV dword ptr [ESI + 0x631],0x5
00478FE4  E8 82 BF F8 FF            CALL 0x00404f6b
00478FE9  6A 00                     PUSH 0x0
00478FEB  8B CE                     MOV ECX,ESI
00478FED  E8 EC A1 F8 FF            CALL 0x004031de
LAB_00478ff2:
00478FF2  8B 16                     MOV EDX,dword ptr [ESI]
00478FF4  8B CE                     MOV ECX,ESI
00478FF6  FF 92 D8 00 00 00         CALL dword ptr [EDX + 0xd8]
00478FFC  F7 D8                     NEG EAX
00478FFE  1B C0                     SBB EAX,EAX
00479000  5F                        POP EDI
00479001  24 FD                     AND AL,0xfd
00479003  5E                        POP ESI
00479004  83 C0 02                  ADD EAX,0x2
00479007  5B                        POP EBX
00479008  5D                        POP EBP
00479009  C2 04 00                  RET 0x4
LAB_0047900c:
0047900C  8B 86 19 06 00 00         MOV EAX,dword ptr [ESI + 0x619]
00479012  85 C0                     TEST EAX,EAX
00479014  0F 84 27 FE FF FF         JZ 0x00478e41
0047901A  8D 86 23 06 00 00         LEA EAX,[ESI + 0x623]
00479020  8D BE 1F 06 00 00         LEA EDI,[ESI + 0x61f]
00479026  50                        PUSH EAX
00479027  53                        PUSH EBX
00479028  8D 86 1D 06 00 00         LEA EAX,[ESI + 0x61d]
0047902E  57                        PUSH EDI
0047902F  50                        PUSH EAX
00479030  8B CE                     MOV ECX,ESI
00479032  E8 7E A7 F8 FF            CALL 0x004037b5
00479037  85 C0                     TEST EAX,EAX
00479039  0F 84 02 FE FF FF         JZ 0x00478e41
0047903F  0F BF 0B                  MOVSX ECX,word ptr [EBX]
00479042  0F BF 17                  MOVSX EDX,word ptr [EDI]
00479045  0F BF 86 1D 06 00 00      MOVSX EAX,word ptr [ESI + 0x61d]
0047904C  51                        PUSH ECX
0047904D  52                        PUSH EDX
0047904E  C7 86 31 06 00 00 01 00 00 00  MOV dword ptr [ESI + 0x631],0x1
00479058  C7 86 B7 00 00 00 03 00 00 00  MOV dword ptr [ESI + 0xb7],0x3
00479062  50                        PUSH EAX
00479063  E9 1B FB FF FF            JMP 0x00478b83
LAB_00479068:
00479068  83 F8 05                  CMP EAX,0x5
0047906B  0F 85 1B 02 00 00         JNZ 0x0047928c
00479071  6A 02                     PUSH 0x2
00479073  8B CE                     MOV ECX,ESI
00479075  E8 64 A1 F8 FF            CALL 0x004031de
0047907A  83 F8 FF                  CMP EAX,-0x1
0047907D  0F 84 C3 FC FF FF         JZ 0x00478d46
00479083  3B C7                     CMP EAX,EDI
00479085  0F 84 B6 FD FF FF         JZ 0x00478e41
0047908B  83 F8 03                  CMP EAX,0x3
0047908E  0F 85 F8 01 00 00         JNZ 0x0047928c
00479094  66 8B 86 21 06 00 00      MOV AX,word ptr [ESI + 0x621]
0047909B  66 8B 8E 1F 06 00 00      MOV CX,word ptr [ESI + 0x61f]
004790A2  8D BE 2B 06 00 00         LEA EDI,[ESI + 0x62b]
004790A8  8D 9E 29 06 00 00         LEA EBX,[ESI + 0x629]
004790AE  57                        PUSH EDI
004790AF  8D 96 27 06 00 00         LEA EDX,[ESI + 0x627]
004790B5  53                        PUSH EBX
004790B6  52                        PUSH EDX
004790B7  66 8B 96 1D 06 00 00      MOV DX,word ptr [ESI + 0x61d]
004790BE  6A 03                     PUSH 0x3
004790C0  50                        PUSH EAX
004790C1  51                        PUSH ECX
004790C2  52                        PUSH EDX
004790C3  50                        PUSH EAX
004790C4  51                        PUSH ECX
004790C5  52                        PUSH EDX
004790C6  8B CE                     MOV ECX,ESI
004790C8  E8 3B B8 F8 FF            CALL 0x00404908
004790CD  E9 48 FA FF FF            JMP 0x00478b1a
LAB_004790d2:
004790D2  B9 17 00 00 00            MOV ECX,0x17
004790D7  33 C0                     XOR EAX,EAX
004790D9  8D BE CC 02 00 00         LEA EDI,[ESI + 0x2cc]
004790DF  33 DB                     XOR EBX,EBX
004790E1  F3 AB                     STOSD.REP ES:EDI
004790E3  8B CE                     MOV ECX,ESI
004790E5  89 9E C4 02 00 00         MOV dword ptr [ESI + 0x2c4],EBX
004790EB  E8 A4 A4 F8 FF            CALL 0x00403594
004790F0  85 C0                     TEST EAX,EAX
004790F2  0F 84 88 01 00 00         JZ 0x00479280
004790F8  8B CE                     MOV ECX,ESI
004790FA  E8 70 8D F8 FF            CALL 0x00401e6f
004790FF  83 F8 01                  CMP EAX,0x1
00479102  75 10                     JNZ 0x00479114
00479104  8B CE                     MOV ECX,ESI
00479106  E8 0F 92 F8 FF            CALL 0x0040231a
0047910B  83 F8 01                  CMP EAX,0x1
0047910E  0F 84 6C 01 00 00         JZ 0x00479280
LAB_00479114:
00479114  8B 86 F7 03 00 00         MOV EAX,dword ptr [ESI + 0x3f7]
0047911A  3B C3                     CMP EAX,EBX
0047911C  89 86 19 06 00 00         MOV dword ptr [ESI + 0x619],EAX
00479122  0F 85 DC 00 00 00         JNZ 0x00479204
00479128  66 8B 86 FB 03 00 00      MOV AX,word ptr [ESI + 0x3fb]
0047912F  66 8B 8E FD 03 00 00      MOV CX,word ptr [ESI + 0x3fd]
00479136  66 8B 96 FF 03 00 00      MOV DX,word ptr [ESI + 0x3ff]
0047913D  8D BE 21 06 00 00         LEA EDI,[ESI + 0x621]
00479143  66 3B C3                  CMP AX,BX
00479146  66 89 86 1D 06 00 00      MOV word ptr [ESI + 0x61d],AX
0047914D  66 89 8E 1F 06 00 00      MOV word ptr [ESI + 0x61f],CX
00479154  66 89 17                  MOV word ptr [EDI],DX
00479157  0F 8C E4 FC FF FF         JL 0x00478e41
0047915D  66 3B 05 40 B2 7F 00      CMP AX,word ptr [0x007fb240]
00479164  0F 8D D7 FC FF FF         JGE 0x00478e41
0047916A  66 85 C9                  TEST CX,CX
0047916D  0F 8C CE FC FF FF         JL 0x00478e41
00479173  66 3B 0D 42 B2 7F 00      CMP CX,word ptr [0x007fb242]
0047917A  0F 8D C1 FC FF FF         JGE 0x00478e41
00479180  66 85 D2                  TEST DX,DX
00479183  0F 8C B8 FC FF FF         JL 0x00478e41
00479189  66 3B 15 44 B2 7F 00      CMP DX,word ptr [0x007fb244]
00479190  0F 8D AB FC FF FF         JGE 0x00478e41
00479196  0F BF 1D 46 B2 7F 00      MOVSX EBX,word ptr [0x007fb246]
0047919D  0F BF D2                  MOVSX EDX,DX
004791A0  0F AF DA                  IMUL EBX,EDX
004791A3  0F BF 15 40 B2 7F 00      MOVSX EDX,word ptr [0x007fb240]
004791AA  0F BF C9                  MOVSX ECX,CX
004791AD  0F AF D1                  IMUL EDX,ECX
004791B0  03 DA                     ADD EBX,EDX
004791B2  0F BF D0                  MOVSX EDX,AX
004791B5  A1 48 B2 7F 00            MOV EAX,[0x007fb248]
004791BA  03 DA                     ADD EBX,EDX
004791BC  8B 1C D8                  MOV EBX,dword ptr [EAX + EBX*0x8]
004791BF  85 DB                     TEST EBX,EBX
004791C1  0F 84 7A FC FF FF         JZ 0x00478e41
004791C7  8B 13                     MOV EDX,dword ptr [EBX]
004791C9  8B CB                     MOV ECX,EBX
004791CB  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
004791CE  83 F8 62                  CMP EAX,0x62
004791D1  0F 85 6A FC FF FF         JNZ 0x00478e41
004791D7  8B 43 24                  MOV EAX,dword ptr [EBX + 0x24]
004791DA  8B 4E 24                  MOV ECX,dword ptr [ESI + 0x24]
004791DD  3B C1                     CMP EAX,ECX
004791DF  0F 85 5C FC FF FF         JNZ 0x00478e41
004791E5  8B 13                     MOV EDX,dword ptr [EBX]
004791E7  8B CB                     MOV ECX,EBX
004791E9  FF 92 F8 00 00 00         CALL dword ptr [EDX + 0xf8]
004791EF  85 C0                     TEST EAX,EAX
004791F1  0F 84 4A FC FF FF         JZ 0x00478e41
004791F7  8B 43 18                  MOV EAX,dword ptr [EBX + 0x18]
004791FA  33 DB                     XOR EBX,EBX
004791FC  89 86 23 06 00 00         MOV dword ptr [ESI + 0x623],EAX
00479202  EB 2B                     JMP 0x0047922f
LAB_00479204:
00479204  8D 96 23 06 00 00         LEA EDX,[ESI + 0x623]
0047920A  8D BE 21 06 00 00         LEA EDI,[ESI + 0x621]
00479210  8D 86 1F 06 00 00         LEA EAX,[ESI + 0x61f]
00479216  52                        PUSH EDX
00479217  8D 8E 1D 06 00 00         LEA ECX,[ESI + 0x61d]
0047921D  57                        PUSH EDI
0047921E  50                        PUSH EAX
0047921F  51                        PUSH ECX
00479220  8B CE                     MOV ECX,ESI
00479222  E8 8E A5 F8 FF            CALL 0x004037b5
00479227  85 C0                     TEST EAX,EAX
00479229  0F 84 33 FC FF FF         JZ 0x00478e62
LAB_0047922f:
0047922F  0F BF 07                  MOVSX EAX,word ptr [EDI]
00479232  0F BF 8E 1F 06 00 00      MOVSX ECX,word ptr [ESI + 0x61f]
00479239  0F BF 96 1D 06 00 00      MOVSX EDX,word ptr [ESI + 0x61d]
00479240  50                        PUSH EAX
00479241  51                        PUSH ECX
00479242  52                        PUSH EDX
00479243  8B CE                     MOV ECX,ESI
00479245  C7 86 31 06 00 00 01 00 00 00  MOV dword ptr [ESI + 0x631],0x1
0047924F  C7 86 B7 00 00 00 03 00 00 00  MOV dword ptr [ESI + 0xb7],0x3
00479259  E8 0D BD F8 FF            CALL 0x00404f6b
0047925E  53                        PUSH EBX
0047925F  8B CE                     MOV ECX,ESI
00479261  E8 78 9F F8 FF            CALL 0x004031de
00479266  8B 06                     MOV EAX,dword ptr [ESI]
00479268  8B CE                     MOV ECX,ESI
LAB_0047926a:
0047926A  FF 90 D8 00 00 00         CALL dword ptr [EAX + 0xd8]
00479270  F7 D8                     NEG EAX
00479272  1B C0                     SBB EAX,EAX
00479274  5F                        POP EDI
00479275  24 FD                     AND AL,0xfd
00479277  5E                        POP ESI
00479278  83 C0 02                  ADD EAX,0x2
0047927B  5B                        POP EBX
0047927C  5D                        POP EBP
0047927D  C2 04 00                  RET 0x4
LAB_00479280:
00479280  89 9E 31 06 00 00         MOV dword ptr [ESI + 0x631],EBX
00479286  89 9E 2D 06 00 00         MOV dword ptr [ESI + 0x62d],EBX
switchD_004786b6::caseD_2:
0047928C  5F                        POP EDI
0047928D  5E                        POP ESI
0047928E  B8 02 00 00 00            MOV EAX,0x2
00479293  5B                        POP EBX
00479294  5D                        POP EBP
00479295  C2 04 00                  RET 0x4
