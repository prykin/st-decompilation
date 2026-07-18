FUN_004eaa20:
004EAA20  55                        PUSH EBP
004EAA21  8B EC                     MOV EBP,ESP
004EAA23  81 EC 04 01 00 00         SUB ESP,0x104
004EAA29  56                        PUSH ESI
004EAA2A  8B F1                     MOV ESI,ECX
004EAA2C  57                        PUSH EDI
004EAA2D  33 FF                     XOR EDI,EDI
004EAA2F  39 BE FF 05 00 00         CMP dword ptr [ESI + 0x5ff],EDI
004EAA35  75 56                     JNZ 0x004eaa8d
004EAA37  6A 40                     PUSH 0x40
004EAA39  E8 F2 3A 24 00            CALL 0x0072e530
004EAA3E  83 C4 04                  ADD ESP,0x4
004EAA41  3B C7                     CMP EAX,EDI
004EAA43  74 09                     JZ 0x004eaa4e
004EAA45  8B C8                     MOV ECX,EAX
004EAA47  E8 CA 68 F1 FF            CALL 0x00401316
004EAA4C  EB 02                     JMP 0x004eaa50
LAB_004eaa4e:
004EAA4E  33 C0                     XOR EAX,EAX
LAB_004eaa50:
004EAA50  6A 11                     PUSH 0x11
004EAA52  68 8C 00 00 00            PUSH 0x8c
004EAA57  68 B4 00 00 00            PUSH 0xb4
004EAA5C  89 86 FF 05 00 00         MOV dword ptr [ESI + 0x5ff],EAX
004EAA62  8B 0D CC 73 80 00         MOV ECX,dword ptr [0x008073cc]
004EAA68  57                        PUSH EDI
004EAA69  6A 45                     PUSH 0x45
004EAA6B  6A 5A                     PUSH 0x5a
004EAA6D  51                        PUSH ECX
004EAA6E  8B C8                     MOV ECX,EAX
004EAA70  E8 06 A9 F1 FF            CALL 0x0040537b
004EAA75  3B C7                     CMP EAX,EDI
004EAA77  74 14                     JZ 0x004eaa8d
004EAA79  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
004EAA7F  6A 56                     PUSH 0x56
004EAA81  68 9C 15 7C 00            PUSH 0x7c159c
004EAA86  52                        PUSH EDX
004EAA87  50                        PUSH EAX
004EAA88  E8 B3 B3 1B 00            CALL 0x006a5e40
LAB_004eaa8d:
004EAA8D  8B 86 45 02 00 00         MOV EAX,dword ptr [ESI + 0x245]
004EAA93  83 F8 06                  CMP EAX,0x6
004EAA96  77 6A                     JA 0x004eab02
switchD_004eaa98::switchD:
004EAA98  FF 24 85 B8 AC 4E 00      JMP dword ptr [EAX*0x4 + 0x4eacb8]
switchD_004eaa98::caseD_0:
004EAA9F  83 BE D0 04 00 00 03      CMP dword ptr [ESI + 0x4d0],0x3
004EAAA6  75 06                     JNZ 0x004eaaae
004EAAA8  89 BE D0 04 00 00         MOV dword ptr [ESI + 0x4d0],EDI
LAB_004eaaae:
004EAAAE  8B 8E D0 04 00 00         MOV ECX,dword ptr [ESI + 0x4d0]
004EAAB4  B8 01 00 00 00            MOV EAX,0x1
004EAAB9  3B C8                     CMP ECX,EAX
004EAABB  75 45                     JNZ 0x004eab02
004EAABD  89 86 61 02 00 00         MOV dword ptr [ESI + 0x261],EAX
004EAAC3  EB 3D                     JMP 0x004eab02
switchD_004eaa98::caseD_1:
004EAAC5  89 BE D0 04 00 00         MOV dword ptr [ESI + 0x4d0],EDI
004EAACB  EB 35                     JMP 0x004eab02
switchD_004eaa98::caseD_5:
004EAACD  C7 86 D0 04 00 00 03 00 00 00  MOV dword ptr [ESI + 0x4d0],0x3
004EAAD7  89 BE 61 02 00 00         MOV dword ptr [ESI + 0x261],EDI
004EAADD  8B 86 65 02 00 00         MOV EAX,dword ptr [ESI + 0x265]
004EAAE3  68 79 02 00 00            PUSH 0x279
004EAAE8  24 FD                     AND AL,0xfd
004EAAEA  6A 03                     PUSH 0x3
004EAAEC  89 86 65 02 00 00         MOV dword ptr [ESI + 0x265],EAX
004EAAF2  89 BE 6D 02 00 00         MOV dword ptr [ESI + 0x26d],EDI
004EAAF8  8B 06                     MOV EAX,dword ptr [ESI]
004EAAFA  8B CE                     MOV ECX,ESI
004EAAFC  FF 90 90 00 00 00         CALL dword ptr [EAX + 0x90]
switchD_004eaa98::caseD_2:
004EAB02  8B 86 D0 04 00 00         MOV EAX,dword ptr [ESI + 0x4d0]
004EAB08  83 F8 01                  CMP EAX,0x1
004EAB0B  74 18                     JZ 0x004eab25
004EAB0D  83 F8 03                  CMP EAX,0x3
004EAB10  74 13                     JZ 0x004eab25
004EAB12  8B 8E FF 05 00 00         MOV ECX,dword ptr [ESI + 0x5ff]
004EAB18  E8 F2 91 F1 FF            CALL 0x00403d0f
004EAB1D  5F                        POP EDI
004EAB1E  33 C0                     XOR EAX,EAX
004EAB20  5E                        POP ESI
004EAB21  8B E5                     MOV ESP,EBP
004EAB23  5D                        POP EBP
004EAB24  C3                        RET
LAB_004eab25:
004EAB25  68 90 15 7C 00            PUSH 0x7c1590
004EAB2A  8D 8D FC FE FF FF         LEA ECX,[EBP + 0xfffffefc]
004EAB30  68 CC 4C 7A 00            PUSH 0x7a4ccc
004EAB35  51                        PUSH ECX
004EAB36  FF 15 E8 BD 85 00         CALL dword ptr [0x0085bde8]
004EAB3C  A1 74 67 80 00            MOV EAX,[0x00806774]
004EAB41  8B 8E FF 05 00 00         MOV ECX,dword ptr [ESI + 0x5ff]
004EAB47  83 C4 0C                  ADD ESP,0xc
004EAB4A  8D 95 FC FE FF FF         LEA EDX,[EBP + 0xfffffefc]
004EAB50  6A 1D                     PUSH 0x1d
004EAB52  52                        PUSH EDX
004EAB53  50                        PUSH EAX
004EAB54  6A 0E                     PUSH 0xe
004EAB56  E8 28 96 F1 FF            CALL 0x00404183
004EAB5B  3B C7                     CMP EAX,EDI
004EAB5D  74 14                     JZ 0x004eab73
004EAB5F  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
004EAB65  6A 63                     PUSH 0x63
004EAB67  68 9C 15 7C 00            PUSH 0x7c159c
004EAB6C  51                        PUSH ECX
004EAB6D  50                        PUSH EAX
004EAB6E  E8 CD B2 1B 00            CALL 0x006a5e40
LAB_004eab73:
004EAB73  6A 0A                     PUSH 0xa
004EAB75  8D 8E D5 01 00 00         LEA ECX,[ESI + 0x1d5]
004EAB7B  E8 4C A7 F1 FF            CALL 0x004052cc
004EAB80  8B 8E FF 05 00 00         MOV ECX,dword ptr [ESI + 0x5ff]
004EAB86  50                        PUSH EAX
004EAB87  E8 40 A7 F1 FF            CALL 0x004052cc
004EAB8C  8B 8E 11 02 00 00         MOV ECX,dword ptr [ESI + 0x211]
004EAB92  50                        PUSH EAX
004EAB93  E8 A8 F7 1F 00            CALL 0x006ea340
004EAB98  8B 96 D0 04 00 00         MOV EDX,dword ptr [ESI + 0x4d0]
004EAB9E  8B 8E FF 05 00 00         MOV ECX,dword ptr [ESI + 0x5ff]
004EABA4  83 EA 03                  SUB EDX,0x3
004EABA7  57                        PUSH EDI
004EABA8  F7 DA                     NEG EDX
004EABAA  1B D2                     SBB EDX,EDX
004EABAC  83 E2 ED                  AND EDX,0xffffffed
004EABAF  83 C2 3B                  ADD EDX,0x3b
004EABB2  52                        PUSH EDX
004EABB3  6A 28                     PUSH 0x28
004EABB5  6A 0E                     PUSH 0xe
004EABB7  E8 FE 72 F1 FF            CALL 0x00401eba
004EABBC  8B 8E FF 05 00 00         MOV ECX,dword ptr [ESI + 0x5ff]
004EABC2  6A 28                     PUSH 0x28
004EABC4  6A 0E                     PUSH 0xe
004EABC6  E8 99 64 F1 FF            CALL 0x00401064
004EABCB  A1 38 2A 80 00            MOV EAX,[0x00802a38]
004EABD0  8B 88 E4 00 00 00         MOV ECX,dword ptr [EAX + 0xe4]
004EABD6  51                        PUSH ECX
004EABD7  8B 8E FF 05 00 00         MOV ECX,dword ptr [ESI + 0x5ff]
004EABDD  6A 0E                     PUSH 0xe
004EABDF  E8 5C A6 F1 FF            CALL 0x00405240
004EABE4  89 BE D4 04 00 00         MOV dword ptr [ESI + 0x4d4],EDI
004EABEA  8B 15 38 2A 80 00         MOV EDX,dword ptr [0x00802a38]
004EABF0  0F BF 4E 45               MOVSX ECX,word ptr [ESI + 0x45]
004EABF4  8B 82 E4 00 00 00         MOV EAX,dword ptr [EDX + 0xe4]
004EABFA  C7 86 DC 04 00 00 01 00 00 00  MOV dword ptr [ESI + 0x4dc],0x1
004EAC04  89 86 D8 04 00 00         MOV dword ptr [ESI + 0x4d8],EAX
004EAC0A  8B 86 D0 04 00 00         MOV EAX,dword ptr [ESI + 0x4d0]
004EAC10  51                        PUSH ECX
004EAC11  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
004EAC14  C1 E0 03                  SHL EAX,0x3
004EAC17  8B 90 20 AA 79 00         MOV EDX,dword ptr [EAX + 0x79aa20]
004EAC1D  03 D1                     ADD EDX,ECX
004EAC1F  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
004EAC22  8B 90 1C AA 79 00         MOV EDX,dword ptr [EAX + 0x79aa1c]
004EAC28  DB 45 FC                  FILD dword ptr [EBP + -0x4]
004EAC2B  0F BF 4E 43               MOVSX ECX,word ptr [ESI + 0x43]
004EAC2F  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
004EAC35  03 D1                     ADD EDX,ECX
004EAC37  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
004EAC3A  8B 90 18 AA 79 00         MOV EDX,dword ptr [EAX + 0x79aa18]
004EAC40  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
004EAC46  D8 05 FC 04 79 00         FADD float ptr [0x007904fc]
004EAC4C  D9 1C 24                  FSTP float ptr [ESP]
004EAC4F  DB 45 FC                  FILD dword ptr [EBP + -0x4]
004EAC52  51                        PUSH ECX
004EAC53  0F BF 4E 41               MOVSX ECX,word ptr [ESI + 0x41]
004EAC57  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
004EAC5D  03 D1                     ADD EDX,ECX
004EAC5F  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
004EAC65  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
004EAC68  D9 1C 24                  FSTP float ptr [ESP]
004EAC6B  DB 45 FC                  FILD dword ptr [EBP + -0x4]
004EAC6E  51                        PUSH ECX
004EAC6F  8B 8E FF 05 00 00         MOV ECX,dword ptr [ESI + 0x5ff]
004EAC75  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
004EAC7B  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
004EAC81  D9 1C 24                  FSTP float ptr [ESP]
004EAC84  E8 50 99 F1 FF            CALL 0x004045d9
004EAC89  8B 8E FF 05 00 00         MOV ECX,dword ptr [ESI + 0x5ff]
004EAC8F  6A 01                     PUSH 0x1
004EAC91  E8 EC 7C F1 FF            CALL 0x00402982
004EAC96  83 BE D0 04 00 00 03      CMP dword ptr [ESI + 0x4d0],0x3
004EAC9D  75 11                     JNZ 0x004eacb0
004EAC9F  8B 06                     MOV EAX,dword ptr [ESI]
004EACA1  68 79 02 00 00            PUSH 0x279
004EACA6  6A 03                     PUSH 0x3
004EACA8  8B CE                     MOV ECX,ESI
004EACAA  FF 90 90 00 00 00         CALL dword ptr [EAX + 0x90]
LAB_004eacb0:
004EACB0  5F                        POP EDI
004EACB1  33 C0                     XOR EAX,EAX
004EACB3  5E                        POP ESI
004EACB4  8B E5                     MOV ESP,EBP
004EACB6  5D                        POP EBP
004EACB7  C3                        RET
