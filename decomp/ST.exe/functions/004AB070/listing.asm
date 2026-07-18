FUN_004ab070:
004AB070  55                        PUSH EBP
004AB071  8B EC                     MOV EBP,ESP
004AB073  56                        PUSH ESI
004AB074  8B F1                     MOV ESI,ECX
004AB076  FF 15 DC BE 85 00         CALL dword ptr [0x0085bedc]
004AB07C  8B 56 18                  MOV EDX,dword ptr [ESI + 0x18]
004AB07F  8B C8                     MOV ECX,EAX
004AB081  2B CA                     SUB ECX,EDX
004AB083  83 F9 32                  CMP ECX,0x32
004AB086  73 1E                     JNC 0x004ab0a6
004AB088  8B 4E 1C                  MOV ECX,dword ptr [ESI + 0x1c]
004AB08B  B8 FE FF FF FF            MOV EAX,0xfffffffe
004AB090  3B C8                     CMP ECX,EAX
004AB092  0F 84 3A 01 00 00         JZ 0x004ab1d2
004AB098  C7 46 1C FF FF FF FF      MOV dword ptr [ESI + 0x1c],0xffffffff
004AB09F  33 C0                     XOR EAX,EAX
004AB0A1  5E                        POP ESI
004AB0A2  5D                        POP EBP
004AB0A3  C2 10 00                  RET 0x10
LAB_004ab0a6:
004AB0A6  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
004AB0A9  C7 05 E0 73 80 00 00 00 00 00  MOV dword ptr [0x008073e0],0x0
004AB0B3  83 F9 01                  CMP ECX,0x1
004AB0B6  75 19                     JNZ 0x004ab0d1
004AB0B8  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
004AB0BB  85 C9                     TEST ECX,ECX
004AB0BD  75 72                     JNZ 0x004ab131
004AB0BF  8B 0D 61 74 80 00         MOV ECX,dword ptr [0x00807461]
004AB0C5  41                        INC ECX
004AB0C6  83 F9 18                  CMP ECX,0x18
004AB0C9  89 0D 61 74 80 00         MOV dword ptr [0x00807461],ECX
004AB0CF  7E 0B                     JLE 0x004ab0dc
LAB_004ab0d1:
004AB0D1  B9 18 00 00 00            MOV ECX,0x18
LAB_004ab0d6:
004AB0D6  89 0D 61 74 80 00         MOV dword ptr [0x00807461],ECX
LAB_004ab0dc:
004AB0DC  33 D2                     XOR EDX,EDX
004AB0DE  41                        INC ECX
004AB0DF  8A 15 3A 73 80 00         MOV DL,byte ptr [0x0080733a]
004AB0E5  89 4D 0C                  MOV dword ptr [EBP + 0xc],ECX
004AB0E8  DB 45 0C                  FILD dword ptr [EBP + 0xc]
004AB0EB  83 7D 14 01               CMP dword ptr [EBP + 0x14],0x1
004AB0EF  D8 0C 95 84 C5 7A 00      FMUL float ptr [EDX*0x4 + 0x7ac584]
004AB0F6  D8 0D 8C 07 79 00         FMUL float ptr [0x0079078c]
004AB0FC  D9 5D 0C                  FSTP float ptr [EBP + 0xc]
004AB0FF  75 0C                     JNZ 0x004ab10d
004AB101  D9 45 0C                  FLD float ptr [EBP + 0xc]
004AB104  D8 0D 88 07 79 00         FMUL float ptr [0x00790788]
004AB10A  D9 5D 0C                  FSTP float ptr [EBP + 0xc]
LAB_004ab10d:
004AB10D  89 46 18                  MOV dword ptr [ESI + 0x18],EAX
004AB110  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004AB113  48                        DEC EAX
004AB114  83 F8 07                  CMP EAX,0x7
004AB117  0F 87 AD 00 00 00         JA 0x004ab1ca
switchD_004ab11d::switchD:
004AB11D  FF 24 85 D8 B1 4A 00      JMP dword ptr [EAX*0x4 + 0x4ab1d8]
switchD_004ab11d::caseD_1:
004AB124  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
004AB127  51                        PUSH ECX
004AB128  8B CE                     MOV ECX,ESI
004AB12A  E8 C6 AA F5 FF            CALL 0x00405bf5
004AB12F  EB 5D                     JMP 0x004ab18e
LAB_004ab131:
004AB131  33 C9                     XOR ECX,ECX
004AB133  EB A1                     JMP 0x004ab0d6
switchD_004ab11d::caseD_2:
004AB135  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
004AB138  8B CE                     MOV ECX,ESI
004AB13A  52                        PUSH EDX
004AB13B  E8 6A 6E F5 FF            CALL 0x00401faa
004AB140  EB 4C                     JMP 0x004ab18e
switchD_004ab11d::caseD_3:
004AB142  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
004AB145  8B CE                     MOV ECX,ESI
004AB147  50                        PUSH EAX
004AB148  E8 9B A8 F5 FF            CALL 0x004059e8
004AB14D  EB 3F                     JMP 0x004ab18e
switchD_004ab11d::caseD_4:
004AB14F  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
004AB152  51                        PUSH ECX
004AB153  8B CE                     MOV ECX,ESI
004AB155  E8 57 80 F5 FF            CALL 0x004031b1
004AB15A  EB 32                     JMP 0x004ab18e
switchD_004ab11d::caseD_5:
004AB15C  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
004AB15F  8B CE                     MOV ECX,ESI
004AB161  52                        PUSH EDX
004AB162  E8 AC 91 F5 FF            CALL 0x00404313
004AB167  EB 25                     JMP 0x004ab18e
switchD_004ab11d::caseD_6:
004AB169  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
004AB16C  8B CE                     MOV ECX,ESI
004AB16E  50                        PUSH EAX
004AB16F  E8 28 9F F5 FF            CALL 0x0040509c
004AB174  EB 18                     JMP 0x004ab18e
switchD_004ab11d::caseD_7:
004AB176  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
004AB179  51                        PUSH ECX
004AB17A  8B CE                     MOV ECX,ESI
004AB17C  E8 88 A5 F5 FF            CALL 0x00405709
004AB181  EB 0B                     JMP 0x004ab18e
switchD_004ab11d::caseD_8:
004AB183  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
004AB186  8B CE                     MOV ECX,ESI
004AB188  52                        PUSH EDX
004AB189  E8 FB 6B F5 FF            CALL 0x00401d89
LAB_004ab18e:
004AB18E  83 F8 01                  CMP EAX,0x1
004AB191  75 37                     JNZ 0x004ab1ca
004AB193  A1 3C 74 80 00            MOV EAX,[0x0080743c]
004AB198  8B 0D FC 73 80 00         MOV ECX,dword ptr [0x008073fc]
004AB19E  8B 15 DC 73 80 00         MOV EDX,dword ptr [0x008073dc]
004AB1A4  25 FF 00 00 00            AND EAX,0xff
004AB1A9  50                        PUSH EAX
004AB1AA  A1 D8 73 80 00            MOV EAX,[0x008073d8]
004AB1AF  51                        PUSH ECX
004AB1B0  52                        PUSH EDX
004AB1B1  50                        PUSH EAX
004AB1B2  B9 58 76 80 00            MOV ECX,0x807658
004AB1B7  E8 18 85 F5 FF            CALL 0x004036d4
004AB1BC  C7 46 1C 00 00 00 00      MOV dword ptr [ESI + 0x1c],0x0
004AB1C3  33 C0                     XOR EAX,EAX
004AB1C5  5E                        POP ESI
004AB1C6  5D                        POP EBP
004AB1C7  C2 10 00                  RET 0x10
switchD_004ab11d::default:
004AB1CA  B8 FE FF FF FF            MOV EAX,0xfffffffe
004AB1CF  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
LAB_004ab1d2:
004AB1D2  5E                        POP ESI
004AB1D3  5D                        POP EBP
004AB1D4  C2 10 00                  RET 0x10
