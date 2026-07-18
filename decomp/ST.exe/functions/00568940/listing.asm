FUN_00568940:
00568940  55                        PUSH EBP
00568941  8B EC                     MOV EBP,ESP
00568943  83 EC 48                  SUB ESP,0x48
00568946  8B 81 8B 0F 00 00         MOV EAX,dword ptr [ECX + 0xf8b]
0056894C  56                        PUSH ESI
0056894D  85 C0                     TEST EAX,EAX
0056894F  57                        PUSH EDI
00568950  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
00568953  0F 84 A8 01 00 00         JZ 0x00568b01
00568959  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0056895E  8D 55 BC                  LEA EDX,[EBP + -0x44]
00568961  8D 4D B8                  LEA ECX,[EBP + -0x48]
00568964  6A 00                     PUSH 0x0
00568966  52                        PUSH EDX
00568967  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
0056896A  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00568970  E8 7B 4E 1C 00            CALL 0x0072d7f0
00568975  83 C4 08                  ADD ESP,0x8
00568978  85 C0                     TEST EAX,EAX
0056897A  0F 85 78 01 00 00         JNZ 0x00568af8
00568980  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00568983  25 FF 00 00 00            AND EAX,0xff
00568988  48                        DEC EAX
00568989  83 F8 0B                  CMP EAX,0xb
0056898C  0F 87 55 01 00 00         JA 0x00568ae7
switchD_00568992::switchD:
00568992  FF 24 85 0C 8B 56 00      JMP dword ptr [EAX*0x4 + 0x568b0c]
switchD_00568992::caseD_b:
00568999  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
0056899C  33 F6                     XOR ESI,ESI
LAB_0056899e:
0056899E  56                        PUSH ESI
0056899F  8B CF                     MOV ECX,EDI
005689A1  E8 F6 A8 E9 FF            CALL 0x0040329c
005689A6  46                        INC ESI
005689A7  83 FE 01                  CMP ESI,0x1
005689AA  7E F2                     JLE 0x0056899e
005689AC  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
005689AF  83 C8 FF                  OR EAX,0xffffffff
005689B2  89 87 03 0E 00 00         MOV dword ptr [EDI + 0xe03],EAX
005689B8  89 87 07 0E 00 00         MOV dword ptr [EDI + 0xe07],EAX
005689BE  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005689C4  5F                        POP EDI
005689C5  5E                        POP ESI
005689C6  8B E5                     MOV ESP,EBP
005689C8  5D                        POP EBP
005689C9  C2 04 00                  RET 0x4
switchD_00568992::caseD_1:
005689CC  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
005689CF  BE 02 00 00 00            MOV ESI,0x2
LAB_005689d4:
005689D4  56                        PUSH ESI
005689D5  8B CF                     MOV ECX,EDI
005689D7  E8 C0 A8 E9 FF            CALL 0x0040329c
005689DC  46                        INC ESI
005689DD  83 FE 03                  CMP ESI,0x3
005689E0  7E F2                     JLE 0x005689d4
005689E2  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
005689E5  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005689EB  5F                        POP EDI
005689EC  5E                        POP ESI
005689ED  8B E5                     MOV ESP,EBP
005689EF  5D                        POP EBP
005689F0  C2 04 00                  RET 0x4
switchD_00568992::caseD_2:
005689F3  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
005689F6  BE 04 00 00 00            MOV ESI,0x4
LAB_005689fb:
005689FB  56                        PUSH ESI
005689FC  8B CF                     MOV ECX,EDI
005689FE  E8 99 A8 E9 FF            CALL 0x0040329c
00568A03  46                        INC ESI
00568A04  83 FE 0A                  CMP ESI,0xa
00568A07  7E F2                     JLE 0x005689fb
00568A09  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
00568A0C  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00568A12  5F                        POP EDI
00568A13  5E                        POP ESI
00568A14  8B E5                     MOV ESP,EBP
00568A16  5D                        POP EBP
00568A17  C2 04 00                  RET 0x4
switchD_00568992::caseD_3:
00568A1A  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
00568A1D  BE 0B 00 00 00            MOV ESI,0xb
LAB_00568a22:
00568A22  56                        PUSH ESI
00568A23  8B CF                     MOV ECX,EDI
00568A25  E8 72 A8 E9 FF            CALL 0x0040329c
00568A2A  46                        INC ESI
00568A2B  83 FE 11                  CMP ESI,0x11
00568A2E  7E F2                     JLE 0x00568a22
00568A30  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
00568A33  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00568A39  5F                        POP EDI
00568A3A  5E                        POP ESI
00568A3B  8B E5                     MOV ESP,EBP
00568A3D  5D                        POP EBP
00568A3E  C2 04 00                  RET 0x4
switchD_00568992::caseD_4:
00568A41  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
00568A44  BE 12 00 00 00            MOV ESI,0x12
LAB_00568a49:
00568A49  56                        PUSH ESI
00568A4A  8B CF                     MOV ECX,EDI
00568A4C  E8 4B A8 E9 FF            CALL 0x0040329c
00568A51  46                        INC ESI
00568A52  83 FE 14                  CMP ESI,0x14
00568A55  7E F2                     JLE 0x00568a49
00568A57  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
00568A5A  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00568A60  5F                        POP EDI
00568A61  5E                        POP ESI
00568A62  8B E5                     MOV ESP,EBP
00568A64  5D                        POP EBP
00568A65  C2 04 00                  RET 0x4
switchD_00568992::caseD_5:
00568A68  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
00568A6B  BE 15 00 00 00            MOV ESI,0x15
LAB_00568a70:
00568A70  56                        PUSH ESI
00568A71  8B CF                     MOV ECX,EDI
00568A73  E8 24 A8 E9 FF            CALL 0x0040329c
00568A78  46                        INC ESI
00568A79  83 FE 19                  CMP ESI,0x19
00568A7C  7E F2                     JLE 0x00568a70
00568A7E  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
00568A81  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00568A87  5F                        POP EDI
00568A88  5E                        POP ESI
00568A89  8B E5                     MOV ESP,EBP
00568A8B  5D                        POP EBP
00568A8C  C2 04 00                  RET 0x4
switchD_00568992::caseD_6:
00568A8F  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
00568A92  BE 1B 00 00 00            MOV ESI,0x1b
LAB_00568a97:
00568A97  56                        PUSH ESI
00568A98  8B CF                     MOV ECX,EDI
00568A9A  E8 FD A7 E9 FF            CALL 0x0040329c
00568A9F  46                        INC ESI
00568AA0  83 FE 1D                  CMP ESI,0x1d
00568AA3  7E F2                     JLE 0x00568a97
00568AA5  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
00568AA8  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00568AAE  5F                        POP EDI
00568AAF  5E                        POP ESI
00568AB0  8B E5                     MOV ESP,EBP
00568AB2  5D                        POP EBP
00568AB3  C2 04 00                  RET 0x4
switchD_00568992::caseD_7:
00568AB6  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
00568AB9  BE 1E 00 00 00            MOV ESI,0x1e
LAB_00568abe:
00568ABE  56                        PUSH ESI
00568ABF  8B CF                     MOV ECX,EDI
00568AC1  E8 D6 A7 E9 FF            CALL 0x0040329c
00568AC6  46                        INC ESI
00568AC7  83 FE 1F                  CMP ESI,0x1f
00568ACA  7E F2                     JLE 0x00568abe
00568ACC  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
00568ACF  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00568AD5  5F                        POP EDI
00568AD6  5E                        POP ESI
00568AD7  8B E5                     MOV ESP,EBP
00568AD9  5D                        POP EBP
00568ADA  C2 04 00                  RET 0x4
switchD_00568992::caseD_c:
00568ADD  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00568AE0  6A 1A                     PUSH 0x1a
00568AE2  E8 B5 A7 E9 FF            CALL 0x0040329c
switchD_00568992::caseD_9:
00568AE7  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
00568AEA  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00568AF0  5F                        POP EDI
00568AF1  5E                        POP ESI
00568AF2  8B E5                     MOV ESP,EBP
00568AF4  5D                        POP EBP
00568AF5  C2 04 00                  RET 0x4
LAB_00568af8:
00568AF8  8B 55 B8                  MOV EDX,dword ptr [EBP + -0x48]
00568AFB  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
LAB_00568b01:
00568B01  5F                        POP EDI
00568B02  5E                        POP ESI
00568B03  8B E5                     MOV ESP,EBP
00568B05  5D                        POP EBP
00568B06  C2 04 00                  RET 0x4
