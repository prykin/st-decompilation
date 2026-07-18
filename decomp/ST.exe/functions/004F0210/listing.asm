BldLabPanelTy::GetMessage:
004F0210  55                        PUSH EBP
004F0211  8B EC                     MOV EBP,ESP
004F0213  83 EC 48                  SUB ESP,0x48
004F0216  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
004F021B  56                        PUSH ESI
004F021C  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
004F021F  57                        PUSH EDI
004F0220  8D 55 BC                  LEA EDX,[EBP + -0x44]
004F0223  8D 4D B8                  LEA ECX,[EBP + -0x48]
004F0226  6A 00                     PUSH 0x0
004F0228  52                        PUSH EDX
004F0229  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
004F022C  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
004F0232  E8 B9 D5 23 00            CALL 0x0072d7f0
004F0237  8B F0                     MOV ESI,EAX
004F0239  83 C4 08                  ADD ESP,0x8
004F023C  85 F6                     TEST ESI,ESI
004F023E  0F 85 46 01 00 00         JNZ 0x004f038a
004F0244  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
004F0247  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
004F024A  8B 47 10                  MOV EAX,dword ptr [EDI + 0x10]
004F024D  83 E8 02                  SUB EAX,0x2
004F0250  75 07                     JNZ 0x004f0259
004F0252  8B CE                     MOV ECX,ESI
004F0254  E8 4D 30 F1 FF            CALL 0x004032a6
LAB_004f0259:
004F0259  57                        PUSH EDI
004F025A  8B CE                     MOV ECX,ESI
004F025C  E8 73 57 F1 FF            CALL 0x004059d4
004F0261  8B 47 10                  MOV EAX,dword ptr [EDI + 0x10]
004F0264  3D A3 C0 00 00            CMP EAX,0xc0a3
004F0269  0F 87 BB 00 00 00         JA 0x004f032a
004F026F  3D 9F C0 00 00            CMP EAX,0xc09f
004F0274  73 5D                     JNC 0x004f02d3
004F0276  83 E8 02                  SUB EAX,0x2
004F0279  74 3E                     JZ 0x004f02b9
004F027B  48                        DEC EAX
004F027C  0F 85 F5 00 00 00         JNZ 0x004f0377
004F0282  8B 86 7A 02 00 00         MOV EAX,dword ptr [ESI + 0x27a]
004F0288  85 C0                     TEST EAX,EAX
004F028A  74 06                     JZ 0x004f0292
004F028C  50                        PUSH EAX
004F028D  E8 7E DE 1B 00            CALL 0x006ae110
LAB_004f0292:
004F0292  8B 55 B8                  MOV EDX,dword ptr [EBP + -0x48]
004F0295  C7 86 7A 02 00 00 00 00 00 00  MOV dword ptr [ESI + 0x27a],0x0
004F029F  C7 05 80 16 80 00 00 00 00 00  MOV dword ptr [0x00801680],0x0
004F02A9  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
004F02AF  33 C0                     XOR EAX,EAX
004F02B1  5F                        POP EDI
004F02B2  5E                        POP ESI
004F02B3  8B E5                     MOV ESP,EBP
004F02B5  5D                        POP EBP
004F02B6  C2 04 00                  RET 0x4
LAB_004f02b9:
004F02B9  8B CE                     MOV ECX,ESI
004F02BB  E8 0C 5A F1 FF            CALL 0x00405ccc
004F02C0  8B 55 B8                  MOV EDX,dword ptr [EBP + -0x48]
004F02C3  33 C0                     XOR EAX,EAX
004F02C5  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
004F02CB  5F                        POP EDI
004F02CC  5E                        POP ESI
004F02CD  8B E5                     MOV ESP,EBP
004F02CF  5D                        POP EBP
004F02D0  C2 04 00                  RET 0x4
LAB_004f02d3:
004F02D3  8B 8E 7A 02 00 00         MOV ECX,dword ptr [ESI + 0x27a]
004F02D9  85 C9                     TEST ECX,ECX
004F02DB  74 25                     JZ 0x004f0302
004F02DD  8B 96 99 01 00 00         MOV EDX,dword ptr [ESI + 0x199]
004F02E3  8B 79 0C                  MOV EDI,dword ptr [ECX + 0xc]
004F02E6  03 C2                     ADD EAX,EDX
004F02E8  8D 90 61 3F FF FF         LEA EDX,[EAX + 0xffff3f61]
004F02EE  3B D7                     CMP EDX,EDI
004F02F0  73 10                     JNC 0x004f0302
004F02F2  05 61 3F FF FF            ADD EAX,0xffff3f61
004F02F7  8B 51 1C                  MOV EDX,dword ptr [ECX + 0x1c]
004F02FA  0F AF 41 08               IMUL EAX,dword ptr [ECX + 0x8]
004F02FE  03 C2                     ADD EAX,EDX
004F0300  EB 02                     JMP 0x004f0304
LAB_004f0302:
004F0302  33 C0                     XOR EAX,EAX
LAB_004f0304:
004F0304  85 C0                     TEST EAX,EAX
004F0306  74 6F                     JZ 0x004f0377
004F0308  8A 48 08                  MOV CL,byte ptr [EAX + 0x8]
004F030B  84 C9                     TEST CL,CL
004F030D  74 68                     JZ 0x004f0377
004F030F  8B 00                     MOV EAX,dword ptr [EAX]
004F0311  8B 0D 30 2A 80 00         MOV ECX,dword ptr [0x00802a30]
004F0317  50                        PUSH EAX
004F0318  6A 0E                     PUSH 0xe
004F031A  E8 8E 32 F1 FF            CALL 0x004035ad
004F031F  6A 00                     PUSH 0x0
004F0321  8B CE                     MOV ECX,ESI
004F0323  E8 4B 17 F1 FF            CALL 0x00401a73
004F0328  EB 40                     JMP 0x004f036a
LAB_004f032a:
004F032A  3D A4 C0 00 00            CMP EAX,0xc0a4
004F032F  74 29                     JZ 0x004f035a
004F0331  3D AE C0 00 00            CMP EAX,0xc0ae
004F0336  76 3F                     JBE 0x004f0377
004F0338  3D B3 C0 00 00            CMP EAX,0xc0b3
004F033D  77 38                     JA 0x004f0377
004F033F  57                        PUSH EDI
004F0340  8B CE                     MOV ECX,ESI
004F0342  E8 34 55 F1 FF            CALL 0x0040587b
004F0347  8B 55 B8                  MOV EDX,dword ptr [EBP + -0x48]
004F034A  33 C0                     XOR EAX,EAX
004F034C  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
004F0352  5F                        POP EDI
004F0353  5E                        POP ESI
004F0354  8B E5                     MOV ESP,EBP
004F0356  5D                        POP EBP
004F0357  C2 04 00                  RET 0x4
LAB_004f035a:
004F035A  8B 4F 14                  MOV ECX,dword ptr [EDI + 0x14]
004F035D  89 8E 99 01 00 00         MOV dword ptr [ESI + 0x199],ECX
004F0363  8B CE                     MOV ECX,ESI
004F0365  E8 81 35 F1 FF            CALL 0x004038eb
LAB_004f036a:
004F036A  68 AE 00 00 00            PUSH 0xae
004F036F  E8 BB 5A F1 FF            CALL 0x00405e2f
004F0374  83 C4 04                  ADD ESP,0x4
LAB_004f0377:
004F0377  8B 55 B8                  MOV EDX,dword ptr [EBP + -0x48]
004F037A  33 C0                     XOR EAX,EAX
004F037C  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
004F0382  5F                        POP EDI
004F0383  5E                        POP ESI
004F0384  8B E5                     MOV ESP,EBP
004F0386  5D                        POP EBP
004F0387  C2 04 00                  RET 0x4
LAB_004f038a:
004F038A  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
004F038D  68 64 19 7C 00            PUSH 0x7c1964
004F0392  68 CC 4C 7A 00            PUSH 0x7a4ccc
004F0397  56                        PUSH ESI
004F0398  6A 00                     PUSH 0x0
004F039A  68 9A 00 00 00            PUSH 0x9a
004F039F  68 B4 18 7C 00            PUSH 0x7c18b4
004F03A4  A3 F8 8D 85 00            MOV [0x00858df8],EAX
004F03A9  E8 22 D1 1B 00            CALL 0x006ad4d0
004F03AE  83 C4 18                  ADD ESP,0x18
004F03B1  85 C0                     TEST EAX,EAX
004F03B3  74 01                     JZ 0x004f03b6
004F03B5  CC                        INT3
LAB_004f03b6:
004F03B6  68 9A 00 00 00            PUSH 0x9a
004F03BB  68 B4 18 7C 00            PUSH 0x7c18b4
004F03C0  6A 00                     PUSH 0x0
004F03C2  56                        PUSH ESI
004F03C3  E8 78 5A 1B 00            CALL 0x006a5e40
004F03C8  5F                        POP EDI
004F03C9  B8 FF FF 00 00            MOV EAX,0xffff
004F03CE  5E                        POP ESI
004F03CF  8B E5                     MOV ESP,EBP
004F03D1  5D                        POP EBP
004F03D2  C2 04 00                  RET 0x4
