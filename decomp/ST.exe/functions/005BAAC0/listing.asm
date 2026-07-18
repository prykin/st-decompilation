FUN_005baac0:
005BAAC0  55                        PUSH EBP
005BAAC1  8B EC                     MOV EBP,ESP
005BAAC3  81 EC 60 02 00 00         SUB ESP,0x260
005BAAC9  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
005BAACE  53                        PUSH EBX
005BAACF  56                        PUSH ESI
005BAAD0  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
005BAAD3  57                        PUSH EDI
005BAAD4  8D 55 BC                  LEA EDX,[EBP + -0x44]
005BAAD7  8D 4D B8                  LEA ECX,[EBP + -0x48]
005BAADA  6A 00                     PUSH 0x0
005BAADC  52                        PUSH EDX
005BAADD  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
005BAAE0  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005BAAE6  E8 05 2D 17 00            CALL 0x0072d7f0
005BAAEB  8B F0                     MOV ESI,EAX
005BAAED  83 C4 08                  ADD ESP,0x8
005BAAF0  85 F6                     TEST ESI,ESI
005BAAF2  0F 85 0F 02 00 00         JNZ 0x005bad07
005BAAF8  B9 7E 00 00 00            MOV ECX,0x7e
005BAAFD  8D BD A0 FD FF FF         LEA EDI,[EBP + 0xfffffda0]
005BAB03  F3 AB                     STOSD.REP ES:EDI
005BAB05  8A 55 08                  MOV DL,byte ptr [EBP + 0x8]
005BAB08  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
005BAB0B  66 AB                     STOSW ES:EDI
005BAB0D  B1 01                     MOV CL,0x1
005BAB0F  88 96 5F 1A 00 00         MOV byte ptr [ESI + 0x1a5f],DL
005BAB15  AA                        STOSB ES:EDI
005BAB16  3A D1                     CMP DL,CL
005BAB18  B0 05                     MOV AL,0x5
005BAB1A  BB 02 00 00 00            MOV EBX,0x2
005BAB1F  75 3E                     JNZ 0x005bab5f
005BAB21  38 46 65                  CMP byte ptr [ESI + 0x65],AL
005BAB24  C7 85 63 FE FF FF 40 23 00 00  MOV dword ptr [EBP + 0xfffffe63],0x2340
005BAB2E  75 10                     JNZ 0x005bab40
005BAB30  80 BE 72 1A 00 00 00      CMP byte ptr [ESI + 0x1a72],0x0
005BAB37  C6 85 67 FE FF FF 00      MOV byte ptr [EBP + 0xfffffe67],0x0
005BAB3E  74 06                     JZ 0x005bab46
LAB_005bab40:
005BAB40  88 8D 67 FE FF FF         MOV byte ptr [EBP + 0xfffffe67],CL
LAB_005bab46:
005BAB46  8B 7E 08                  MOV EDI,dword ptr [ESI + 0x8]
005BAB49  89 9D 74 FE FF FF         MOV dword ptr [EBP + 0xfffffe74],EBX
005BAB4F  89 BD 70 FE FF FF         MOV dword ptr [EBP + 0xfffffe70],EDI
005BAB55  C7 85 78 FE FF FF 43 69 00 00  MOV dword ptr [EBP + 0xfffffe78],0x6943
LAB_005bab5f:
005BAB5F  38 46 65                  CMP byte ptr [ESI + 0x65],AL
005BAB62  C7 85 8A FE FF FF BC 24 00 00  MOV dword ptr [EBP + 0xfffffe8a],0x24bc
005BAB6C  75 11                     JNZ 0x005bab7f
005BAB6E  8A 86 72 1A 00 00         MOV AL,byte ptr [ESI + 0x1a72]
005BAB74  C6 85 8E FE FF FF 00      MOV byte ptr [EBP + 0xfffffe8e],0x0
005BAB7B  84 C0                     TEST AL,AL
005BAB7D  74 06                     JZ 0x005bab85
LAB_005bab7f:
005BAB7F  88 8D 8E FE FF FF         MOV byte ptr [EBP + 0xfffffe8e],CL
LAB_005bab85:
005BAB85  8B 46 08                  MOV EAX,dword ptr [ESI + 0x8]
005BAB88  3A D1                     CMP DL,CL
005BAB8A  89 85 97 FE FF FF         MOV dword ptr [EBP + 0xfffffe97],EAX
005BAB90  89 9D 9B FE FF FF         MOV dword ptr [EBP + 0xfffffe9b],EBX
005BAB96  C7 85 9F FE FF FF 52 69 00 00  MOV dword ptr [EBP + 0xfffffe9f],0x6952
005BABA0  75 45                     JNZ 0x005babe7
005BABA2  C7 85 C7 FD FF FF 57 23 00 00  MOV dword ptr [EBP + 0xfffffdc7],0x2357
005BABAC  89 85 D4 FD FF FF         MOV dword ptr [EBP + 0xfffffdd4],EAX
005BABB2  89 9D D8 FD FF FF         MOV dword ptr [EBP + 0xfffffdd8],EBX
005BABB8  C7 85 DC FD FF FF 4E 69 00 00  MOV dword ptr [EBP + 0xfffffddc],0x694e
005BABC2  C7 85 EE FD FF FF 16 26 00 00  MOV dword ptr [EBP + 0xfffffdee],0x2616
005BABCC  89 85 FB FD FF FF         MOV dword ptr [EBP + 0xfffffdfb],EAX
005BABD2  89 9D FF FD FF FF         MOV dword ptr [EBP + 0xfffffdff],EBX
005BABD8  C7 85 03 FE FF FF FF 64 00 00  MOV dword ptr [EBP + 0xfffffe03],0x64ff
005BABE2  E9 80 00 00 00            JMP 0x005bac67
LAB_005babe7:
005BABE7  C7 85 A0 FD FF FF 17 26 00 00  MOV dword ptr [EBP + 0xfffffda0],0x2617
005BABF1  89 85 AD FD FF FF         MOV dword ptr [EBP + 0xfffffdad],EAX
005BABF7  89 9D B1 FD FF FF         MOV dword ptr [EBP + 0xfffffdb1],EBX
005BABFD  C7 85 B5 FD FF FF 01 65 00 00  MOV dword ptr [EBP + 0xfffffdb5],0x6501
005BAC07  C7 85 C7 FD FF FF 18 26 00 00  MOV dword ptr [EBP + 0xfffffdc7],0x2618
005BAC11  89 85 D4 FD FF FF         MOV dword ptr [EBP + 0xfffffdd4],EAX
005BAC17  89 9D D8 FD FF FF         MOV dword ptr [EBP + 0xfffffdd8],EBX
005BAC1D  C7 85 DC FD FF FF 02 65 00 00  MOV dword ptr [EBP + 0xfffffddc],0x6502
005BAC27  C7 85 EE FD FF FF 3E 23 00 00  MOV dword ptr [EBP + 0xfffffdee],0x233e
005BAC31  89 85 FB FD FF FF         MOV dword ptr [EBP + 0xfffffdfb],EAX
005BAC37  89 9D FF FD FF FF         MOV dword ptr [EBP + 0xfffffdff],EBX
005BAC3D  C7 85 03 FE FF FF 49 69 00 00  MOV dword ptr [EBP + 0xfffffe03],0x6949
005BAC47  C7 85 B1 FE FF FF 19 26 00 00  MOV dword ptr [EBP + 0xfffffeb1],0x2619
005BAC51  89 85 BE FE FF FF         MOV dword ptr [EBP + 0xfffffebe],EAX
005BAC57  89 9D C2 FE FF FF         MOV dword ptr [EBP + 0xfffffec2],EBX
005BAC5D  C7 85 C6 FE FF FF 51 69 00 00  MOV dword ptr [EBP + 0xfffffec6],0x6951
LAB_005bac67:
005BAC67  8B 96 5B 1A 00 00         MOV EDX,dword ptr [ESI + 0x1a5b]
005BAC6D  8B 82 E6 02 00 00         MOV EAX,dword ptr [EDX + 0x2e6]
005BAC73  85 C0                     TEST EAX,EAX
005BAC75  74 3C                     JZ 0x005bacb3
005BAC77  B9 06 00 00 00            MOV ECX,0x6
005BAC7C  83 C8 FF                  OR EAX,0xffffffff
005BAC7F  8D 7D 9C                  LEA EDI,[EBP + -0x64]
005BAC82  6A 00                     PUSH 0x0
005BAC84  F3 AB                     STOSD.REP ES:EDI
005BAC86  66 AB                     STOSW ES:EDI
005BAC88  8B 8A E6 02 00 00         MOV ECX,dword ptr [EDX + 0x2e6]
005BAC8E  8D 85 A0 FD FF FF         LEA EAX,[EBP + 0xfffffda0]
005BAC94  6A 00                     PUSH 0x0
005BAC96  50                        PUSH EAX
005BAC97  6A 00                     PUSH 0x0
005BAC99  E8 79 6A E4 FF            CALL 0x00401717
005BAC9E  8B 96 5B 1A 00 00         MOV EDX,dword ptr [ESI + 0x1a5b]
005BACA4  8D 4D 9C                  LEA ECX,[EBP + -0x64]
005BACA7  51                        PUSH ECX
005BACA8  8B 8A E6 02 00 00         MOV ECX,dword ptr [EDX + 0x2e6]
005BACAE  E8 9E 9E E4 FF            CALL 0x00404b51
LAB_005bacb3:
005BACB3  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
005BACB6  8B CE                     MOV ECX,ESI
005BACB8  50                        PUSH EAX
005BACB9  E8 94 B1 E4 FF            CALL 0x00405e52
005BACBE  6A 00                     PUSH 0x0
005BACC0  B9 58 76 80 00            MOV ECX,0x807658
005BACC5  C6 46 65 03               MOV byte ptr [ESI + 0x65],0x3
005BACC9  E8 CE 85 E4 FF            CALL 0x0040329c
005BACCE  F6 05 01 73 80 00 08      TEST byte ptr [0x00807301],0x8
005BACD5  74 11                     JZ 0x005bace8
005BACD7  6A 00                     PUSH 0x0
005BACD9  6A 00                     PUSH 0x0
005BACDB  53                        PUSH EBX
005BACDC  6A 14                     PUSH 0x14
005BACDE  B9 58 76 80 00            MOV ECX,0x807658
005BACE3  E8 E9 82 E4 FF            CALL 0x00402fd1
LAB_005bace8:
005BACE8  6A FF                     PUSH -0x1
005BACEA  6A 00                     PUSH 0x0
005BACEC  6A 0B                     PUSH 0xb
005BACEE  8B CE                     MOV ECX,ESI
005BACF0  E8 FC 9E E4 FF            CALL 0x00404bf1
005BACF5  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
005BACF8  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005BACFE  5F                        POP EDI
005BACFF  5E                        POP ESI
005BAD00  5B                        POP EBX
005BAD01  8B E5                     MOV ESP,EBP
005BAD03  5D                        POP EBP
005BAD04  C2 08 00                  RET 0x8
LAB_005bad07:
005BAD07  8B 55 B8                  MOV EDX,dword ptr [EBP + -0x48]
005BAD0A  68 00 CE 7C 00            PUSH 0x7cce00
005BAD0F  68 CC 4C 7A 00            PUSH 0x7a4ccc
005BAD14  56                        PUSH ESI
005BAD15  6A 00                     PUSH 0x0
005BAD17  68 1E 01 00 00            PUSH 0x11e
005BAD1C  68 28 CD 7C 00            PUSH 0x7ccd28
005BAD21  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
005BAD27  E8 A4 27 0F 00            CALL 0x006ad4d0
005BAD2C  83 C4 18                  ADD ESP,0x18
005BAD2F  85 C0                     TEST EAX,EAX
005BAD31  74 01                     JZ 0x005bad34
005BAD33  CC                        INT3
LAB_005bad34:
005BAD34  68 1E 01 00 00            PUSH 0x11e
005BAD39  68 28 CD 7C 00            PUSH 0x7ccd28
005BAD3E  6A 00                     PUSH 0x0
005BAD40  56                        PUSH ESI
005BAD41  E8 FA B0 0E 00            CALL 0x006a5e40
005BAD46  5F                        POP EDI
005BAD47  5E                        POP ESI
005BAD48  5B                        POP EBX
005BAD49  8B E5                     MOV ESP,EBP
005BAD4B  5D                        POP EBP
005BAD4C  C2 08 00                  RET 0x8
