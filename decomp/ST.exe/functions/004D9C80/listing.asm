FUN_004d9c80:
004D9C80  55                        PUSH EBP
004D9C81  8B EC                     MOV EBP,ESP
004D9C83  81 EC 04 01 00 00         SUB ESP,0x104
004D9C89  56                        PUSH ESI
004D9C8A  8B F1                     MOV ESI,ECX
004D9C8C  57                        PUSH EDI
004D9C8D  33 FF                     XOR EDI,EDI
004D9C8F  39 BE FF 05 00 00         CMP dword ptr [ESI + 0x5ff],EDI
004D9C95  75 56                     JNZ 0x004d9ced
004D9C97  6A 40                     PUSH 0x40
004D9C99  E8 92 48 25 00            CALL 0x0072e530
004D9C9E  83 C4 04                  ADD ESP,0x4
004D9CA1  3B C7                     CMP EAX,EDI
004D9CA3  74 09                     JZ 0x004d9cae
004D9CA5  8B C8                     MOV ECX,EAX
004D9CA7  E8 6A 76 F2 FF            CALL 0x00401316
004D9CAC  EB 02                     JMP 0x004d9cb0
LAB_004d9cae:
004D9CAE  33 C0                     XOR EAX,EAX
LAB_004d9cb0:
004D9CB0  6A 11                     PUSH 0x11
004D9CB2  68 8C 00 00 00            PUSH 0x8c
004D9CB7  68 B4 00 00 00            PUSH 0xb4
004D9CBC  89 86 FF 05 00 00         MOV dword ptr [ESI + 0x5ff],EAX
004D9CC2  8B 0D CC 73 80 00         MOV ECX,dword ptr [0x008073cc]
004D9CC8  57                        PUSH EDI
004D9CC9  6A 45                     PUSH 0x45
004D9CCB  6A 5A                     PUSH 0x5a
004D9CCD  51                        PUSH ECX
004D9CCE  8B C8                     MOV ECX,EAX
004D9CD0  E8 A6 B6 F2 FF            CALL 0x0040537b
004D9CD5  3B C7                     CMP EAX,EDI
004D9CD7  74 14                     JZ 0x004d9ced
004D9CD9  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
004D9CDF  6A 3E                     PUSH 0x3e
004D9CE1  68 18 F6 7B 00            PUSH 0x7bf618
004D9CE6  52                        PUSH EDX
004D9CE7  50                        PUSH EAX
004D9CE8  E8 53 C1 1C 00            CALL 0x006a5e40
LAB_004d9ced:
004D9CED  8B 86 45 02 00 00         MOV EAX,dword ptr [ESI + 0x245]
004D9CF3  B9 04 00 00 00            MOV ECX,0x4
004D9CF8  83 F8 06                  CMP EAX,0x6
004D9CFB  0F 87 84 00 00 00         JA 0x004d9d85
switchD_004d9d01::switchD:
004D9D01  FF 24 85 08 9F 4D 00      JMP dword ptr [EAX*0x4 + 0x4d9f08]
switchD_004d9d01::caseD_0:
004D9D08  89 BE 61 02 00 00         MOV dword ptr [ESI + 0x261],EDI
004D9D0E  8B 86 D0 04 00 00         MOV EAX,dword ptr [ESI + 0x4d0]
004D9D14  3B C1                     CMP EAX,ECX
004D9D16  75 0C                     JNZ 0x004d9d24
004D9D18  C7 86 D0 04 00 00 05 00 00 00  MOV dword ptr [ESI + 0x4d0],0x5
004D9D22  EB 61                     JMP 0x004d9d85
LAB_004d9d24:
004D9D24  83 F8 05                  CMP EAX,0x5
004D9D27  75 08                     JNZ 0x004d9d31
switchD_004d9d01::caseD_1:
004D9D29  89 BE D0 04 00 00         MOV dword ptr [ESI + 0x4d0],EDI
004D9D2F  EB 54                     JMP 0x004d9d85
LAB_004d9d31:
004D9D31  83 F8 01                  CMP EAX,0x1
004D9D34  75 4F                     JNZ 0x004d9d85
004D9D36  89 86 61 02 00 00         MOV dword ptr [ESI + 0x261],EAX
004D9D3C  EB 47                     JMP 0x004d9d85
switchD_004d9d01::caseD_5:
004D9D3E  8B 86 D0 04 00 00         MOV EAX,dword ptr [ESI + 0x4d0]
004D9D44  48                        DEC EAX
004D9D45  74 1A                     JZ 0x004d9d61
004D9D47  83 E8 02                  SUB EAX,0x2
004D9D4A  74 0D                     JZ 0x004d9d59
004D9D4C  83 E8 02                  SUB EAX,0x2
004D9D4F  75 1A                     JNZ 0x004d9d6b
004D9D51  89 BE D0 04 00 00         MOV dword ptr [ESI + 0x4d0],EDI
004D9D57  EB 12                     JMP 0x004d9d6b
LAB_004d9d59:
004D9D59  89 8E D0 04 00 00         MOV dword ptr [ESI + 0x4d0],ECX
004D9D5F  EB 0A                     JMP 0x004d9d6b
LAB_004d9d61:
004D9D61  C7 86 D0 04 00 00 03 00 00 00  MOV dword ptr [ESI + 0x4d0],0x3
LAB_004d9d6b:
004D9D6B  89 BE 61 02 00 00         MOV dword ptr [ESI + 0x261],EDI
004D9D71  8B 86 65 02 00 00         MOV EAX,dword ptr [ESI + 0x265]
004D9D77  24 FD                     AND AL,0xfd
004D9D79  89 86 65 02 00 00         MOV dword ptr [ESI + 0x265],EAX
004D9D7F  89 BE 6D 02 00 00         MOV dword ptr [ESI + 0x26d],EDI
switchD_004d9d01::caseD_2:
004D9D85  39 8E D0 04 00 00         CMP dword ptr [ESI + 0x4d0],ECX
004D9D8B  0F 85 64 01 00 00         JNZ 0x004d9ef5
004D9D91  68 10 F6 7B 00            PUSH 0x7bf610
004D9D96  8D 85 FC FE FF FF         LEA EAX,[EBP + 0xfffffefc]
004D9D9C  68 CC 4C 7A 00            PUSH 0x7a4ccc
004D9DA1  50                        PUSH EAX
004D9DA2  FF 15 E8 BD 85 00         CALL dword ptr [0x0085bde8]
004D9DA8  8B 15 74 67 80 00         MOV EDX,dword ptr [0x00806774]
004D9DAE  83 C4 0C                  ADD ESP,0xc
004D9DB1  8D 8D FC FE FF FF         LEA ECX,[EBP + 0xfffffefc]
004D9DB7  6A 1D                     PUSH 0x1d
004D9DB9  51                        PUSH ECX
004D9DBA  8B 8E FF 05 00 00         MOV ECX,dword ptr [ESI + 0x5ff]
004D9DC0  52                        PUSH EDX
004D9DC1  6A 0E                     PUSH 0xe
004D9DC3  E8 BB A3 F2 FF            CALL 0x00404183
004D9DC8  3B C7                     CMP EAX,EDI
004D9DCA  74 14                     JZ 0x004d9de0
004D9DCC  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
004D9DD2  6A 57                     PUSH 0x57
004D9DD4  68 18 F6 7B 00            PUSH 0x7bf618
004D9DD9  51                        PUSH ECX
004D9DDA  50                        PUSH EAX
004D9DDB  E8 60 C0 1C 00            CALL 0x006a5e40
LAB_004d9de0:
004D9DE0  8B 8E FF 05 00 00         MOV ECX,dword ptr [ESI + 0x5ff]
004D9DE6  E8 A5 8C F2 FF            CALL 0x00402a90
004D9DEB  6A 0A                     PUSH 0xa
004D9DED  8D 8E D5 01 00 00         LEA ECX,[ESI + 0x1d5]
004D9DF3  E8 D4 B4 F2 FF            CALL 0x004052cc
004D9DF8  8B 8E FF 05 00 00         MOV ECX,dword ptr [ESI + 0x5ff]
004D9DFE  50                        PUSH EAX
004D9DFF  E8 C8 B4 F2 FF            CALL 0x004052cc
004D9E04  8B 8E 11 02 00 00         MOV ECX,dword ptr [ESI + 0x211]
004D9E0A  50                        PUSH EAX
004D9E0B  E8 30 05 21 00            CALL 0x006ea340
004D9E10  8B 15 38 2A 80 00         MOV EDX,dword ptr [0x00802a38]
004D9E16  8B 8E FF 05 00 00         MOV ECX,dword ptr [ESI + 0x5ff]
004D9E1C  8B 82 E4 00 00 00         MOV EAX,dword ptr [EDX + 0xe4]
004D9E22  50                        PUSH EAX
004D9E23  6A 0E                     PUSH 0xe
004D9E25  E8 16 B4 F2 FF            CALL 0x00405240
004D9E2A  8B 86 D0 04 00 00         MOV EAX,dword ptr [ESI + 0x4d0]
004D9E30  89 BE D4 04 00 00         MOV dword ptr [ESI + 0x4d4],EDI
004D9E36  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
004D9E3C  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
004D9E3F  8B 91 E4 00 00 00         MOV EDX,dword ptr [ECX + 0xe4]
004D9E45  C7 86 DC 04 00 00 01 00 00 00  MOV dword ptr [ESI + 0x4dc],0x1
004D9E4F  0F BF 4E 45               MOVSX ECX,word ptr [ESI + 0x45]
004D9E53  C1 E0 03                  SHL EAX,0x3
004D9E56  89 96 D8 04 00 00         MOV dword ptr [ESI + 0x4d8],EDX
004D9E5C  51                        PUSH ECX
004D9E5D  8B 90 C0 8E 79 00         MOV EDX,dword ptr [EAX + 0x798ec0]
004D9E63  03 D1                     ADD EDX,ECX
004D9E65  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
004D9E68  8B 90 BC 8E 79 00         MOV EDX,dword ptr [EAX + 0x798ebc]
004D9E6E  DB 45 FC                  FILD dword ptr [EBP + -0x4]
004D9E71  0F BF 4E 43               MOVSX ECX,word ptr [ESI + 0x43]
004D9E75  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
004D9E7B  03 D1                     ADD EDX,ECX
004D9E7D  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
004D9E80  8B 90 B8 8E 79 00         MOV EDX,dword ptr [EAX + 0x798eb8]
004D9E86  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
004D9E8C  D8 05 FC 04 79 00         FADD float ptr [0x007904fc]
004D9E92  D9 1C 24                  FSTP float ptr [ESP]
004D9E95  DB 45 FC                  FILD dword ptr [EBP + -0x4]
004D9E98  51                        PUSH ECX
004D9E99  0F BF 4E 41               MOVSX ECX,word ptr [ESI + 0x41]
004D9E9D  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
004D9EA3  03 D1                     ADD EDX,ECX
004D9EA5  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
004D9EAB  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
004D9EAE  D9 1C 24                  FSTP float ptr [ESP]
004D9EB1  DB 45 FC                  FILD dword ptr [EBP + -0x4]
004D9EB4  51                        PUSH ECX
004D9EB5  8B 8E FF 05 00 00         MOV ECX,dword ptr [ESI + 0x5ff]
004D9EBB  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
004D9EC1  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
004D9EC7  D9 1C 24                  FSTP float ptr [ESP]
004D9ECA  E8 0A A7 F2 FF            CALL 0x004045d9
004D9ECF  8B 8E FF 05 00 00         MOV ECX,dword ptr [ESI + 0x5ff]
004D9ED5  6A 01                     PUSH 0x1
004D9ED7  E8 A6 8A F2 FF            CALL 0x00402982
004D9EDC  8B 06                     MOV EAX,dword ptr [ESI]
004D9EDE  68 47 03 00 00            PUSH 0x347
004D9EE3  6A 03                     PUSH 0x3
004D9EE5  8B CE                     MOV ECX,ESI
004D9EE7  FF 90 90 00 00 00         CALL dword ptr [EAX + 0x90]
004D9EED  5F                        POP EDI
004D9EEE  33 C0                     XOR EAX,EAX
004D9EF0  5E                        POP ESI
004D9EF1  8B E5                     MOV ESP,EBP
004D9EF3  5D                        POP EBP
004D9EF4  C3                        RET
LAB_004d9ef5:
004D9EF5  8B 8E FF 05 00 00         MOV ECX,dword ptr [ESI + 0x5ff]
004D9EFB  E8 0F 9E F2 FF            CALL 0x00403d0f
004D9F00  5F                        POP EDI
004D9F01  33 C0                     XOR EAX,EAX
004D9F03  5E                        POP ESI
004D9F04  8B E5                     MOV ESP,EBP
004D9F06  5D                        POP EBP
004D9F07  C3                        RET
