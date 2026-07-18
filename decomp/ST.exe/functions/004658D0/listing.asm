FUN_004658d0:
004658D0  55                        PUSH EBP
004658D1  8B EC                     MOV EBP,ESP
004658D3  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004658D6  53                        PUSH EBX
004658D7  33 DB                     XOR EBX,EBX
004658D9  56                        PUSH ESI
004658DA  3B C3                     CMP EAX,EBX
004658DC  57                        PUSH EDI
004658DD  8B F1                     MOV ESI,ECX
004658DF  0F 84 DA 01 00 00         JZ 0x00465abf
004658E5  BF 01 00 00 00            MOV EDI,0x1
004658EA  3B C7                     CMP EAX,EDI
004658EC  0F 84 CD 01 00 00         JZ 0x00465abf
004658F2  39 9E 97 04 00 00         CMP dword ptr [ESI + 0x497],EBX
004658F8  0F 85 40 01 00 00         JNZ 0x00465a3e
004658FE  6A 02                     PUSH 0x2
00465900  E8 61 C9 F9 FF            CALL 0x00402266
00465905  40                        INC EAX
00465906  83 F8 04                  CMP EAX,0x4
00465909  0F 87 2F 01 00 00         JA 0x00465a3e
switchD_0046590f::switchD:
0046590F  FF 24 85 24 5B 46 00      JMP dword ptr [EAX*0x4 + 0x465b24]
switchD_0046590f::caseD_0:
00465916  5F                        POP EDI
00465917  5E                        POP ESI
00465918  83 C8 FF                  OR EAX,0xffffffff
0046591B  5B                        POP EBX
0046591C  5D                        POP EBP
0046591D  C2 04 00                  RET 0x4
switchD_0046590f::caseD_4:
00465920  66 8B 46 30               MOV AX,word ptr [ESI + 0x30]
00465924  8A 4E 24                  MOV CL,byte ptr [ESI + 0x24]
00465927  50                        PUSH EAX
00465928  51                        PUSH ECX
00465929  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0046592F  E8 C5 03 FA FF            CALL 0x00405cf9
00465934  8B 96 8F 04 00 00         MOV EDX,dword ptr [ESI + 0x48f]
0046593A  66 8B 4E 32               MOV CX,word ptr [ESI + 0x32]
0046593E  52                        PUSH EDX
0046593F  51                        PUSH ECX
00465940  57                        PUSH EDI
00465941  8B C8                     MOV ECX,EAX
00465943  E8 37 FB F9 FF            CALL 0x0040547f
00465948  85 C0                     TEST EAX,EAX
0046594A  75 30                     JNZ 0x0046597c
0046594C  8B 96 CF 00 00 00         MOV EDX,dword ptr [ESI + 0xcf]
00465952  8B 86 CB 00 00 00         MOV EAX,dword ptr [ESI + 0xcb]
00465958  8B 8E C7 00 00 00         MOV ECX,dword ptr [ESI + 0xc7]
0046595E  52                        PUSH EDX
0046595F  50                        PUSH EAX
00465960  51                        PUSH ECX
00465961  8B CE                     MOV ECX,ESI
00465963  E8 03 F6 F9 FF            CALL 0x00404f6b
00465968  53                        PUSH EBX
00465969  8B CE                     MOV ECX,ESI
0046596B  E8 F6 C8 F9 FF            CALL 0x00402266
switchD_0046590f::caseD_3:
00465970  5F                        POP EDI
00465971  5E                        POP ESI
00465972  B8 02 00 00 00            MOV EAX,0x2
00465977  5B                        POP EBX
00465978  5D                        POP EBP
00465979  C2 04 00                  RET 0x4
LAB_0046597c:
0046597C  53                        PUSH EBX
0046597D  8B CE                     MOV ECX,ESI
0046597F  89 BE 97 04 00 00         MOV dword ptr [ESI + 0x497],EDI
00465985  89 9E 93 04 00 00         MOV dword ptr [ESI + 0x493],EBX
0046598B  E8 9B E0 F9 FF            CALL 0x00403a2b
00465990  40                        INC EAX
00465991  5F                        POP EDI
00465992  F7 D8                     NEG EAX
00465994  1B C0                     SBB EAX,EAX
00465996  5E                        POP ESI
00465997  83 E0 03                  AND EAX,0x3
0046599A  5B                        POP EBX
0046599B  48                        DEC EAX
0046599C  5D                        POP EBP
0046599D  C2 04 00                  RET 0x4
switchD_0046590f::caseD_1:
004659A0  66 8B 56 30               MOV DX,word ptr [ESI + 0x30]
004659A4  8A 46 24                  MOV AL,byte ptr [ESI + 0x24]
004659A7  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004659AD  52                        PUSH EDX
004659AE  50                        PUSH EAX
004659AF  E8 45 03 FA FF            CALL 0x00405cf9
004659B4  8B 8E 8F 04 00 00         MOV ECX,dword ptr [ESI + 0x48f]
004659BA  66 8B 56 32               MOV DX,word ptr [ESI + 0x32]
004659BE  51                        PUSH ECX
004659BF  52                        PUSH EDX
004659C0  53                        PUSH EBX
004659C1  8B C8                     MOV ECX,EAX
004659C3  E8 B7 FA F9 FF            CALL 0x0040547f
004659C8  85 C0                     TEST EAX,EAX
004659CA  75 B0                     JNZ 0x0046597c
004659CC  53                        PUSH EBX
004659CD  8B CE                     MOV ECX,ESI
004659CF  E8 57 E0 F9 FF            CALL 0x00403a2b
004659D4  83 F8 FF                  CMP EAX,-0x1
004659D7  75 09                     JNZ 0x004659e2
004659D9  5F                        POP EDI
004659DA  5E                        POP ESI
004659DB  0B C0                     OR EAX,EAX
004659DD  5B                        POP EBX
004659DE  5D                        POP EBP
004659DF  C2 04 00                  RET 0x4
LAB_004659e2:
004659E2  39 9E 2E 08 00 00         CMP dword ptr [ESI + 0x82e],EBX
004659E8  75 3C                     JNZ 0x00465a26
004659EA  81 BE 8B 04 00 00 FF FF 00 00  CMP dword ptr [ESI + 0x48b],0xffff
004659F4  75 30                     JNZ 0x00465a26
004659F6  8B 86 CF 00 00 00         MOV EAX,dword ptr [ESI + 0xcf]
004659FC  8B 8E CB 00 00 00         MOV ECX,dword ptr [ESI + 0xcb]
00465A02  8B 96 C7 00 00 00         MOV EDX,dword ptr [ESI + 0xc7]
00465A08  50                        PUSH EAX
00465A09  51                        PUSH ECX
00465A0A  52                        PUSH EDX
00465A0B  8B CE                     MOV ECX,ESI
00465A0D  E8 59 F5 F9 FF            CALL 0x00404f6b
00465A12  53                        PUSH EBX
00465A13  8B CE                     MOV ECX,ESI
00465A15  E8 4C C8 F9 FF            CALL 0x00402266
00465A1A  5F                        POP EDI
00465A1B  5E                        POP ESI
00465A1C  B8 02 00 00 00            MOV EAX,0x2
00465A21  5B                        POP EBX
00465A22  5D                        POP EBP
00465A23  C2 04 00                  RET 0x4
LAB_00465a26:
00465A26  89 BE 97 04 00 00         MOV dword ptr [ESI + 0x497],EDI
00465A2C  89 BE 93 04 00 00         MOV dword ptr [ESI + 0x493],EDI
00465A32  5F                        POP EDI
00465A33  5E                        POP ESI
00465A34  B8 02 00 00 00            MOV EAX,0x2
00465A39  5B                        POP EBX
00465A3A  5D                        POP EBP
00465A3B  C2 04 00                  RET 0x4
switchD_0046590f::caseD_2:
00465A3E  39 BE 97 04 00 00         CMP dword ptr [ESI + 0x497],EDI
00465A44  0F 85 26 FF FF FF         JNZ 0x00465970
00465A4A  6A 02                     PUSH 0x2
00465A4C  8B CE                     MOV ECX,ESI
00465A4E  E8 D8 DF F9 FF            CALL 0x00403a2b
00465A53  83 F8 FF                  CMP EAX,-0x1
00465A56  75 09                     JNZ 0x00465a61
00465A58  5F                        POP EDI
00465A59  5E                        POP ESI
00465A5A  0B C0                     OR EAX,EAX
00465A5C  5B                        POP EBX
00465A5D  5D                        POP EBP
00465A5E  C2 04 00                  RET 0x4
LAB_00465a61:
00465A61  39 9E 2E 08 00 00         CMP dword ptr [ESI + 0x82e],EBX
00465A67  0F 85 03 FF FF FF         JNZ 0x00465970
00465A6D  81 BE 8B 04 00 00 FF FF 00 00  CMP dword ptr [ESI + 0x48b],0xffff
00465A77  0F 85 F3 FE FF FF         JNZ 0x00465970
00465A7D  39 BE 93 04 00 00         CMP dword ptr [ESI + 0x493],EDI
00465A83  0F 85 E7 FE FF FF         JNZ 0x00465970
00465A89  8B 86 CF 00 00 00         MOV EAX,dword ptr [ESI + 0xcf]
00465A8F  8B 8E CB 00 00 00         MOV ECX,dword ptr [ESI + 0xcb]
00465A95  8B 96 C7 00 00 00         MOV EDX,dword ptr [ESI + 0xc7]
00465A9B  50                        PUSH EAX
00465A9C  51                        PUSH ECX
00465A9D  52                        PUSH EDX
00465A9E  8B CE                     MOV ECX,ESI
00465AA0  89 9E 97 04 00 00         MOV dword ptr [ESI + 0x497],EBX
00465AA6  E8 C0 F4 F9 FF            CALL 0x00404f6b
00465AAB  53                        PUSH EBX
00465AAC  8B CE                     MOV ECX,ESI
00465AAE  E8 B3 C7 F9 FF            CALL 0x00402266
00465AB3  5F                        POP EDI
00465AB4  5E                        POP ESI
00465AB5  B8 02 00 00 00            MOV EAX,0x2
00465ABA  5B                        POP EBX
00465ABB  5D                        POP EBP
00465ABC  C2 04 00                  RET 0x4
LAB_00465abf:
00465ABF  B9 17 00 00 00            MOV ECX,0x17
00465AC4  33 C0                     XOR EAX,EAX
00465AC6  8D BE CC 02 00 00         LEA EDI,[ESI + 0x2cc]
00465ACC  F3 AB                     STOSD.REP ES:EDI
00465ACE  8B 86 4B 03 00 00         MOV EAX,dword ptr [ESI + 0x34b]
00465AD4  8B 8E CF 00 00 00         MOV ECX,dword ptr [ESI + 0xcf]
00465ADA  8B 96 CB 00 00 00         MOV EDX,dword ptr [ESI + 0xcb]
00465AE0  89 86 8F 04 00 00         MOV dword ptr [ESI + 0x48f],EAX
00465AE6  8B 86 C7 00 00 00         MOV EAX,dword ptr [ESI + 0xc7]
00465AEC  51                        PUSH ECX
00465AED  52                        PUSH EDX
00465AEE  50                        PUSH EAX
00465AEF  8B CE                     MOV ECX,ESI
00465AF1  89 9E C4 02 00 00         MOV dword ptr [ESI + 0x2c4],EBX
00465AF7  89 9E 97 04 00 00         MOV dword ptr [ESI + 0x497],EBX
00465AFD  E8 69 F4 F9 FF            CALL 0x00404f6b
00465B02  53                        PUSH EBX
00465B03  8B CE                     MOV ECX,ESI
00465B05  E8 5C C7 F9 FF            CALL 0x00402266
00465B0A  8B 16                     MOV EDX,dword ptr [ESI]
00465B0C  8B CE                     MOV ECX,ESI
00465B0E  FF 92 D8 00 00 00         CALL dword ptr [EDX + 0xd8]
00465B14  F7 D8                     NEG EAX
00465B16  1B C0                     SBB EAX,EAX
00465B18  5F                        POP EDI
00465B19  24 FD                     AND AL,0xfd
00465B1B  5E                        POP ESI
00465B1C  83 C0 02                  ADD EAX,0x2
00465B1F  5B                        POP EBX
00465B20  5D                        POP EBP
00465B21  C2 04 00                  RET 0x4
