CPanelTy::PaintTV:
004F80A0  55                        PUSH EBP
004F80A1  8B EC                     MOV EBP,ESP
004F80A3  83 EC 70                  SUB ESP,0x70
004F80A6  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
004F80AB  53                        PUSH EBX
004F80AC  56                        PUSH ESI
004F80AD  89 4D E0                  MOV dword ptr [EBP + -0x20],ECX
004F80B0  57                        PUSH EDI
004F80B1  8D 55 94                  LEA EDX,[EBP + -0x6c]
004F80B4  8D 4D 90                  LEA ECX,[EBP + -0x70]
004F80B7  6A 00                     PUSH 0x0
004F80B9  52                        PUSH EDX
004F80BA  89 45 90                  MOV dword ptr [EBP + -0x70],EAX
004F80BD  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
004F80C3  E8 28 57 23 00            CALL 0x0072d7f0
004F80C8  8B F0                     MOV ESI,EAX
004F80CA  83 C4 08                  ADD ESP,0x8
004F80CD  85 F6                     TEST ESI,ESI
004F80CF  0F 85 D7 08 00 00         JNZ 0x004f89ac
004F80D5  8B 75 E0                  MOV ESI,dword ptr [EBP + -0x20]
004F80D8  32 C9                     XOR CL,CL
004F80DA  88 4D F8                  MOV byte ptr [EBP + -0x8],CL
LAB_004f80dd:
004F80DD  8B 7D F8                  MOV EDI,dword ptr [EBP + -0x8]
004F80E0  33 D2                     XOR EDX,EDX
004F80E2  81 E7 FF 00 00 00         AND EDI,0xff
004F80E8  8A 94 37 EC 02 00 00      MOV DL,byte ptr [EDI + ESI*0x1 + 0x2ec]
004F80EF  8D 84 37 EC 02 00 00      LEA EAX,[EDI + ESI*0x1 + 0x2ec]
004F80F6  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
004F80F9  8B C2                     MOV EAX,EDX
004F80FB  48                        DEC EAX
004F80FC  83 F8 04                  CMP EAX,0x4
004F80FF  0F 87 33 03 00 00         JA 0x004f8438
switchD_004f8105::switchD:
004F8105  FF 24 85 F4 89 4F 00      JMP dword ptr [EAX*0x4 + 0x4f89f4]
switchD_004f8105::caseD_4:
004F810C  8B 46 38                  MOV EAX,dword ptr [ESI + 0x38]
004F810F  8B 9C BE EE 02 00 00      MOV EBX,dword ptr [ESI + EDI*0x4 + 0x2ee]
004F8116  8B C8                     MOV ECX,EAX
004F8118  2B CB                     SUB ECX,EBX
004F811A  83 F9 32                  CMP ECX,0x32
004F811D  0F 82 15 03 00 00         JC 0x004f8438
004F8123  8D 9C 37 EA 02 00 00      LEA EBX,[EDI + ESI*0x1 + 0x2ea]
004F812A  89 84 BE EE 02 00 00      MOV dword ptr [ESI + EDI*0x4 + 0x2ee],EAX
004F8131  8A 0B                     MOV CL,byte ptr [EBX]
004F8133  FE C1                     INC CL
004F8135  8A C1                     MOV AL,CL
004F8137  88 0B                     MOV byte ptr [EBX],CL
004F8139  3C 05                     CMP AL,0x5
004F813B  75 0D                     JNZ 0x004f814a
004F813D  68 B2 00 00 00            PUSH 0xb2
004F8142  E8 E8 DC F0 FF            CALL 0x00405e2f
004F8147  83 C4 04                  ADD ESP,0x4
LAB_004f814a:
004F814A  8A 03                     MOV AL,byte ptr [EBX]
004F814C  8B 94 BE E2 02 00 00      MOV EDX,dword ptr [ESI + EDI*0x4 + 0x2e2]
004F8153  66 33 C9                  XOR CX,CX
004F8156  8A C8                     MOV CL,AL
004F8158  66 3B 0A                  CMP CX,word ptr [EDX]
004F815B  7C 43                     JL 0x004f81a0
004F815D  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
004F8160  FE C8                     DEC AL
004F8162  88 03                     MOV byte ptr [EBX],AL
004F8164  C6 02 02                  MOV byte ptr [EDX],0x2
004F8167  66 83 BE 3F 02 00 00 06   CMP word ptr [ESI + 0x23f],0x6
004F816F  75 2F                     JNZ 0x004f81a0
004F8171  8A 45 F8                  MOV AL,byte ptr [EBP + -0x8]
004F8174  84 C0                     TEST AL,AL
004F8176  74 08                     JZ 0x004f8180
004F8178  8A 86 EC 02 00 00         MOV AL,byte ptr [ESI + 0x2ec]
004F817E  EB 06                     JMP 0x004f8186
LAB_004f8180:
004F8180  8A 86 ED 02 00 00         MOV AL,byte ptr [ESI + 0x2ed]
LAB_004f8186:
004F8186  84 C0                     TEST AL,AL
004F8188  74 16                     JZ 0x004f81a0
004F818A  68 B0 00 00 00            PUSH 0xb0
004F818F  66 C7 86 3F 02 00 00 04 00  MOV word ptr [ESI + 0x23f],0x4
004F8198  E8 92 DC F0 FF            CALL 0x00405e2f
004F819D  83 C4 04                  ADD ESP,0x4
LAB_004f81a0:
004F81A0  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
004F81A3  8B CE                     MOV ECX,ESI
004F81A5  50                        PUSH EAX
004F81A6  E8 24 AB F0 FF            CALL 0x00402ccf
004F81AB  8A 45 F8                  MOV AL,byte ptr [EBP + -0x8]
004F81AE  F6 D8                     NEG AL
004F81B0  1A C0                     SBB AL,AL
004F81B2  83 E0 08                  AND EAX,0x8
004F81B5  3C 0B                     CMP AL,0xb
004F81B7  88 45 E4                  MOV byte ptr [EBP + -0x1c],AL
004F81BA  0F 83 78 02 00 00         JNC 0x004f8438
004F81C0  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
004F81C3  25 FF 00 00 00            AND EAX,0xff
004F81C8  8B 8C 86 48 01 00 00      MOV ECX,dword ptr [ESI + EAX*0x4 + 0x148]
004F81CF  85 C9                     TEST ECX,ECX
004F81D1  0F 8C 61 02 00 00         JL 0x004f8438
004F81D7  E9 40 02 00 00            JMP 0x004f841c
switchD_004f8105::caseD_3:
004F81DC  8B 46 38                  MOV EAX,dword ptr [ESI + 0x38]
004F81DF  8B 9C BE EE 02 00 00      MOV EBX,dword ptr [ESI + EDI*0x4 + 0x2ee]
004F81E6  8B D0                     MOV EDX,EAX
004F81E8  2B D3                     SUB EDX,EBX
004F81EA  83 FA 32                  CMP EDX,0x32
004F81ED  0F 82 45 02 00 00         JC 0x004f8438
004F81F3  8D 9C 37 EA 02 00 00      LEA EBX,[EDI + ESI*0x1 + 0x2ea]
004F81FA  89 84 BE EE 02 00 00      MOV dword ptr [ESI + EDI*0x4 + 0x2ee],EAX
004F8201  8A 03                     MOV AL,byte ptr [EBX]
004F8203  84 C0                     TEST AL,AL
004F8205  76 06                     JBE 0x004f820d
004F8207  FE C8                     DEC AL
004F8209  88 03                     MOV byte ptr [EBX],AL
004F820B  EB 7B                     JMP 0x004f8288
LAB_004f820d:
004F820D  84 C9                     TEST CL,CL
004F820F  8D 86 63 0B 00 00         LEA EAX,[ESI + 0xb63]
004F8215  74 06                     JZ 0x004f821d
004F8217  8D 86 51 0C 00 00         LEA EAX,[ESI + 0xc51]
LAB_004f821d:
004F821D  6A 00                     PUSH 0x0
004F821F  6A 00                     PUSH 0x0
004F8221  6A 01                     PUSH 0x1
004F8223  6A 00                     PUSH 0x0
004F8225  6A 06                     PUSH 0x6
004F8227  6A 00                     PUSH 0x0
004F8229  50                        PUSH EAX
004F822A  E8 D8 B3 F0 FF            CALL 0x00403607
004F822F  83 C4 08                  ADD ESP,0x8
004F8232  50                        PUSH EAX
004F8233  A1 94 67 80 00            MOV EAX,[0x00806794]
004F8238  6A 1F                     PUSH 0x1f
004F823A  50                        PUSH EAX
004F823B  E8 B0 18 21 00            CALL 0x00709af0
004F8240  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
004F8243  89 84 BE E2 02 00 00      MOV dword ptr [ESI + EDI*0x4 + 0x2e2],EAX
004F824A  83 C4 20                  ADD ESP,0x20
004F824D  C6 01 01                  MOV byte ptr [ECX],0x1
004F8250  C6 03 00                  MOV byte ptr [EBX],0x0
004F8253  66 83 BE 3F 02 00 00 05   CMP word ptr [ESI + 0x23f],0x5
004F825B  75 2B                     JNZ 0x004f8288
004F825D  8A 45 F8                  MOV AL,byte ptr [EBP + -0x8]
004F8260  84 C0                     TEST AL,AL
004F8262  74 08                     JZ 0x004f826c
004F8264  8A 86 EC 02 00 00         MOV AL,byte ptr [ESI + 0x2ec]
004F826A  EB 06                     JMP 0x004f8272
LAB_004f826c:
004F826C  8A 86 ED 02 00 00         MOV AL,byte ptr [ESI + 0x2ed]
LAB_004f8272:
004F8272  84 C0                     TEST AL,AL
004F8274  74 12                     JZ 0x004f8288
004F8276  6A 01                     PUSH 0x1
004F8278  8B CE                     MOV ECX,ESI
004F827A  66 C7 86 3F 02 00 00 01 00  MOV word ptr [ESI + 0x23f],0x1
004F8283  E8 4A AC F0 FF            CALL 0x00402ed2
LAB_004f8288:
004F8288  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
004F828B  8B CE                     MOV ECX,ESI
004F828D  52                        PUSH EDX
004F828E  E8 3C AA F0 FF            CALL 0x00402ccf
004F8293  8A 45 F8                  MOV AL,byte ptr [EBP + -0x8]
004F8296  F6 D8                     NEG AL
004F8298  1A C0                     SBB AL,AL
004F829A  83 E0 08                  AND EAX,0x8
004F829D  3C 0B                     CMP AL,0xb
004F829F  88 45 E8                  MOV byte ptr [EBP + -0x18],AL
004F82A2  73 2F                     JNC 0x004f82d3
004F82A4  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
004F82A7  25 FF 00 00 00            AND EAX,0xff
004F82AC  8B 8C 86 48 01 00 00      MOV ECX,dword ptr [ESI + EAX*0x4 + 0x148]
004F82B3  85 C9                     TEST ECX,ECX
004F82B5  7C 1C                     JL 0x004f82d3
004F82B7  8B 94 86 94 00 00 00      MOV EDX,dword ptr [ESI + EAX*0x4 + 0x94]
004F82BE  8B 44 86 3C               MOV EAX,dword ptr [ESI + EAX*0x4 + 0x3c]
004F82C2  52                        PUSH EDX
004F82C3  50                        PUSH EAX
004F82C4  6A FF                     PUSH -0x1
004F82C6  51                        PUSH ECX
004F82C7  8B 0D A8 75 80 00         MOV ECX,dword ptr [0x008075a8]
004F82CD  51                        PUSH ECX
004F82CE  E8 6D B3 1B 00            CALL 0x006b3640
LAB_004f82d3:
004F82D3  80 BE EA 02 00 00 05      CMP byte ptr [ESI + 0x2ea],0x5
004F82DA  0F 85 58 01 00 00         JNZ 0x004f8438
004F82E0  68 B1 00 00 00            PUSH 0xb1
004F82E5  E8 45 DB F0 FF            CALL 0x00405e2f
004F82EA  83 C4 04                  ADD ESP,0x4
004F82ED  E9 46 01 00 00            JMP 0x004f8438
switchD_004f8105::caseD_5:
004F82F2  8B 46 38                  MOV EAX,dword ptr [ESI + 0x38]
004F82F5  8B 9C BE EE 02 00 00      MOV EBX,dword ptr [ESI + EDI*0x4 + 0x2ee]
004F82FC  8B D0                     MOV EDX,EAX
004F82FE  2B D3                     SUB EDX,EBX
004F8300  83 FA 42                  CMP EDX,0x42
004F8303  0F 82 2F 01 00 00         JC 0x004f8438
004F8309  8D 9C 37 EA 02 00 00      LEA EBX,[EDI + ESI*0x1 + 0x2ea]
004F8310  89 84 BE EE 02 00 00      MOV dword ptr [ESI + EDI*0x4 + 0x2ee],EAX
004F8317  66 33 D2                  XOR DX,DX
004F831A  8A 0B                     MOV CL,byte ptr [EBX]
004F831C  FE C1                     INC CL
004F831E  88 0B                     MOV byte ptr [EBX],CL
004F8320  8A C1                     MOV AL,CL
004F8322  8D 8C BE E2 02 00 00      LEA ECX,[ESI + EDI*0x4 + 0x2e2]
004F8329  8A D0                     MOV DL,AL
004F832B  89 4D EC                  MOV dword ptr [EBP + -0x14],ECX
004F832E  8B 09                     MOV ECX,dword ptr [ECX]
004F8330  66 3B 11                  CMP DX,word ptr [ECX]
004F8333  7C 31                     JL 0x004f8366
004F8335  8B 84 BE F6 02 00 00      MOV EAX,dword ptr [ESI + EDI*0x4 + 0x2f6]
004F833C  8B 0D 94 67 80 00         MOV ECX,dword ptr [0x00806794]
004F8342  6A 00                     PUSH 0x0
004F8344  6A 00                     PUSH 0x0
004F8346  6A 01                     PUSH 0x1
004F8348  6A 00                     PUSH 0x0
004F834A  6A 06                     PUSH 0x6
004F834C  50                        PUSH EAX
004F834D  6A 1F                     PUSH 0x1f
004F834F  51                        PUSH ECX
004F8350  E8 9B 17 21 00            CALL 0x00709af0
004F8355  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
004F8358  83 C4 20                  ADD ESP,0x20
004F835B  89 02                     MOV dword ptr [EDX],EAX
004F835D  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
004F8360  C6 00 01                  MOV byte ptr [EAX],0x1
004F8363  C6 03 00                  MOV byte ptr [EBX],0x0
LAB_004f8366:
004F8366  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
004F8369  51                        PUSH ECX
004F836A  8B CE                     MOV ECX,ESI
004F836C  E8 5E A9 F0 FF            CALL 0x00402ccf
004F8371  8A 45 F8                  MOV AL,byte ptr [EBP + -0x8]
004F8374  F6 D8                     NEG AL
004F8376  1A C0                     SBB AL,AL
004F8378  83 E0 08                  AND EAX,0x8
004F837B  3C 0B                     CMP AL,0xb
004F837D  88 45 F0                  MOV byte ptr [EBP + -0x10],AL
004F8380  0F 83 B2 00 00 00         JNC 0x004f8438
004F8386  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
004F8389  25 FF 00 00 00            AND EAX,0xff
004F838E  8B 8C 86 48 01 00 00      MOV ECX,dword ptr [ESI + EAX*0x4 + 0x148]
004F8395  85 C9                     TEST ECX,ECX
004F8397  0F 8C 9B 00 00 00         JL 0x004f8438
004F839D  EB 7D                     JMP 0x004f841c
switchD_004f8105::caseD_1:
004F839F  A1 1A 73 80 00            MOV EAX,[0x0080731a]
004F83A4  85 C0                     TEST EAX,EAX
004F83A6  0F 84 8C 00 00 00         JZ 0x004f8438
004F83AC  8B 46 38                  MOV EAX,dword ptr [ESI + 0x38]
004F83AF  8B 9C BE EE 02 00 00      MOV EBX,dword ptr [ESI + EDI*0x4 + 0x2ee]
004F83B6  8B D0                     MOV EDX,EAX
004F83B8  2B D3                     SUB EDX,EBX
004F83BA  83 FA 42                  CMP EDX,0x42
004F83BD  72 79                     JC 0x004f8438
004F83BF  89 84 BE EE 02 00 00      MOV dword ptr [ESI + EDI*0x4 + 0x2ee],EAX
004F83C6  8A 9C 37 EA 02 00 00      MOV BL,byte ptr [EDI + ESI*0x1 + 0x2ea]
004F83CD  8D 84 37 EA 02 00 00      LEA EAX,[EDI + ESI*0x1 + 0x2ea]
004F83D4  FE C3                     INC BL
004F83D6  8A CB                     MOV CL,BL
004F83D8  88 18                     MOV byte ptr [EAX],BL
004F83DA  8B 94 BE E2 02 00 00      MOV EDX,dword ptr [ESI + EDI*0x4 + 0x2e2]
004F83E1  66 0F B6 C9               MOVZX CX,CL
004F83E5  66 3B 0A                  CMP CX,word ptr [EDX]
004F83E8  7C 03                     JL 0x004f83ed
004F83EA  C6 00 00                  MOV byte ptr [EAX],0x0
LAB_004f83ed:
004F83ED  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
004F83F0  8B CE                     MOV ECX,ESI
004F83F2  52                        PUSH EDX
004F83F3  E8 D7 A8 F0 FF            CALL 0x00402ccf
004F83F8  8A 45 F8                  MOV AL,byte ptr [EBP + -0x8]
004F83FB  F6 D8                     NEG AL
004F83FD  1A C0                     SBB AL,AL
004F83FF  83 E0 08                  AND EAX,0x8
004F8402  3C 0B                     CMP AL,0xb
004F8404  88 45 DC                  MOV byte ptr [EBP + -0x24],AL
004F8407  73 2F                     JNC 0x004f8438
004F8409  8B 45 DC                  MOV EAX,dword ptr [EBP + -0x24]
004F840C  25 FF 00 00 00            AND EAX,0xff
004F8411  8B 8C 86 48 01 00 00      MOV ECX,dword ptr [ESI + EAX*0x4 + 0x148]
004F8418  85 C9                     TEST ECX,ECX
004F841A  7C 1C                     JL 0x004f8438
LAB_004f841c:
004F841C  8B 94 86 94 00 00 00      MOV EDX,dword ptr [ESI + EAX*0x4 + 0x94]
004F8423  8B 44 86 3C               MOV EAX,dword ptr [ESI + EAX*0x4 + 0x3c]
004F8427  52                        PUSH EDX
004F8428  50                        PUSH EAX
004F8429  6A FF                     PUSH -0x1
004F842B  51                        PUSH ECX
004F842C  8B 0D A8 75 80 00         MOV ECX,dword ptr [0x008075a8]
004F8432  51                        PUSH ECX
004F8433  E8 08 B2 1B 00            CALL 0x006b3640
switchD_004f8105::caseD_2:
004F8438  8A 4D F8                  MOV CL,byte ptr [EBP + -0x8]
004F843B  FE C1                     INC CL
004F843D  80 F9 02                  CMP CL,0x2
004F8440  88 4D F8                  MOV byte ptr [EBP + -0x8],CL
004F8443  0F 82 94 FC FF FF         JC 0x004f80dd
004F8449  A1 30 67 80 00            MOV EAX,[0x00806730]
004F844E  32 C9                     XOR CL,CL
004F8450  3D 00 04 00 00            CMP EAX,0x400
004F8455  88 4D FF                  MOV byte ptr [EBP + -0x1],CL
004F8458  74 0B                     JZ 0x004f8465
004F845A  3D 00 05 00 00            CMP EAX,0x500
004F845F  75 09                     JNZ 0x004f846a
004F8461  B1 06                     MOV CL,0x6
004F8463  EB 02                     JMP 0x004f8467
LAB_004f8465:
004F8465  B1 02                     MOV CL,0x2
LAB_004f8467:
004F8467  88 4D FF                  MOV byte ptr [EBP + -0x1],CL
LAB_004f846a:
004F846A  84 C9                     TEST CL,CL
004F846C  C6 45 F4 00               MOV byte ptr [EBP + -0xc],0x0
004F8470  0F 86 0E 02 00 00         JBE 0x004f8684
004F8476  8D 96 3B 0D 00 00         LEA EDX,[ESI + 0xd3b]
004F847C  8D 86 87 0C 00 00         LEA EAX,[ESI + 0xc87]
004F8482  8D 8E 53 0D 00 00         LEA ECX,[ESI + 0xd53]
004F8488  89 55 EC                  MOV dword ptr [EBP + -0x14],EDX
004F848B  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
004F848E  89 4D E8                  MOV dword ptr [EBP + -0x18],ECX
LAB_004f8491:
004F8491  8B 55 E4                  MOV EDX,dword ptr [EBP + -0x1c]
004F8494  8B 7D EC                  MOV EDI,dword ptr [EBP + -0x14]
004F8497  8B 5D E8                  MOV EBX,dword ptr [EBP + -0x18]
004F849A  C6 45 F8 00               MOV byte ptr [EBP + -0x8],0x0
004F849E  89 55 F0                  MOV dword ptr [EBP + -0x10],EDX
LAB_004f84a1:
004F84A1  33 C0                     XOR EAX,EAX
004F84A3  8A 47 0C                  MOV AL,byte ptr [EDI + 0xc]
004F84A6  48                        DEC EAX
004F84A7  0F 84 0B 01 00 00         JZ 0x004f85b8
004F84AD  83 E8 02                  SUB EAX,0x2
004F84B0  74 77                     JZ 0x004f8529
004F84B2  48                        DEC EAX
004F84B3  0F 85 80 01 00 00         JNZ 0x004f8639
004F84B9  8B 46 38                  MOV EAX,dword ptr [ESI + 0x38]
004F84BC  8B 13                     MOV EDX,dword ptr [EBX]
004F84BE  8B C8                     MOV ECX,EAX
004F84C0  2B CA                     SUB ECX,EDX
004F84C2  83 F9 32                  CMP ECX,0x32
004F84C5  0F 82 6E 01 00 00         JC 0x004f8639
004F84CB  89 03                     MOV dword ptr [EBX],EAX
004F84CD  8A 07                     MOV AL,byte ptr [EDI]
004F84CF  FE C0                     INC AL
004F84D1  66 33 C9                  XOR CX,CX
004F84D4  88 07                     MOV byte ptr [EDI],AL
004F84D6  8B 53 B8                  MOV EDX,dword ptr [EBX + -0x48]
004F84D9  8A C8                     MOV CL,AL
004F84DB  66 3B 0A                  CMP CX,word ptr [EDX]
004F84DE  7C 08                     JL 0x004f84e8
004F84E0  FE C8                     DEC AL
004F84E2  88 07                     MOV byte ptr [EDI],AL
004F84E4  C6 47 0C 02               MOV byte ptr [EDI + 0xc],0x2
LAB_004f84e8:
004F84E8  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
004F84EB  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
004F84EE  52                        PUSH EDX
004F84EF  50                        PUSH EAX
004F84F0  8B CE                     MOV ECX,ESI
004F84F2  E8 60 B6 F0 FF            CALL 0x00403b57
004F84F7  8A 45 F8                  MOV AL,byte ptr [EBP + -0x8]
004F84FA  84 C0                     TEST AL,AL
004F84FC  0F 94 C0                  SETZ AL
004F84FF  83 C0 09                  ADD EAX,0x9
004F8502  3C 0B                     CMP AL,0xb
004F8504  88 45 DC                  MOV byte ptr [EBP + -0x24],AL
004F8507  0F 83 2C 01 00 00         JNC 0x004f8639
004F850D  8B 45 DC                  MOV EAX,dword ptr [EBP + -0x24]
004F8510  25 FF 00 00 00            AND EAX,0xff
004F8515  8B 8C 86 48 01 00 00      MOV ECX,dword ptr [ESI + EAX*0x4 + 0x148]
004F851C  85 C9                     TEST ECX,ECX
004F851E  0F 8C 15 01 00 00         JL 0x004f8639
004F8524  E9 F4 00 00 00            JMP 0x004f861d
LAB_004f8529:
004F8529  8B 46 38                  MOV EAX,dword ptr [ESI + 0x38]
004F852C  8B 0B                     MOV ECX,dword ptr [EBX]
004F852E  8B D0                     MOV EDX,EAX
004F8530  2B D1                     SUB EDX,ECX
004F8532  83 FA 32                  CMP EDX,0x32
004F8535  0F 82 FE 00 00 00         JC 0x004f8639
004F853B  89 03                     MOV dword ptr [EBX],EAX
004F853D  8A 07                     MOV AL,byte ptr [EDI]
004F853F  84 C0                     TEST AL,AL
004F8541  76 06                     JBE 0x004f8549
004F8543  FE C8                     DEC AL
004F8545  88 07                     MOV byte ptr [EDI],AL
004F8547  EB 31                     JMP 0x004f857a
LAB_004f8549:
004F8549  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
004F854C  6A 00                     PUSH 0x0
004F854E  6A 00                     PUSH 0x0
004F8550  6A 01                     PUSH 0x1
004F8552  6A 00                     PUSH 0x0
004F8554  6A 06                     PUSH 0x6
004F8556  50                        PUSH EAX
004F8557  8B CE                     MOV ECX,ESI
004F8559  E8 57 9E F0 FF            CALL 0x004023b5
004F855E  8B 0D 94 67 80 00         MOV ECX,dword ptr [0x00806794]
004F8564  50                        PUSH EAX
004F8565  6A 1F                     PUSH 0x1f
004F8567  51                        PUSH ECX
004F8568  E8 83 15 21 00            CALL 0x00709af0
004F856D  89 43 B8                  MOV dword ptr [EBX + -0x48],EAX
004F8570  C6 47 0C 01               MOV byte ptr [EDI + 0xc],0x1
004F8574  83 C4 20                  ADD ESP,0x20
004F8577  C6 07 00                  MOV byte ptr [EDI],0x0
LAB_004f857a:
004F857A  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
004F857D  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
004F8580  52                        PUSH EDX
004F8581  50                        PUSH EAX
004F8582  8B CE                     MOV ECX,ESI
004F8584  E8 CE B5 F0 FF            CALL 0x00403b57
004F8589  8A 45 F8                  MOV AL,byte ptr [EBP + -0x8]
004F858C  84 C0                     TEST AL,AL
004F858E  0F 94 C0                  SETZ AL
004F8591  83 C0 09                  ADD EAX,0x9
004F8594  3C 0B                     CMP AL,0xb
004F8596  88 45 D8                  MOV byte ptr [EBP + -0x28],AL
004F8599  0F 83 9A 00 00 00         JNC 0x004f8639
004F859F  8B 45 D8                  MOV EAX,dword ptr [EBP + -0x28]
004F85A2  25 FF 00 00 00            AND EAX,0xff
004F85A7  8B 8C 86 48 01 00 00      MOV ECX,dword ptr [ESI + EAX*0x4 + 0x148]
004F85AE  85 C9                     TEST ECX,ECX
004F85B0  0F 8C 83 00 00 00         JL 0x004f8639
004F85B6  EB 65                     JMP 0x004f861d
LAB_004f85b8:
004F85B8  A1 1A 73 80 00            MOV EAX,[0x0080731a]
004F85BD  85 C0                     TEST EAX,EAX
004F85BF  74 78                     JZ 0x004f8639
004F85C1  8B 46 38                  MOV EAX,dword ptr [ESI + 0x38]
004F85C4  8B 0B                     MOV ECX,dword ptr [EBX]
004F85C6  8B D0                     MOV EDX,EAX
004F85C8  2B D1                     SUB EDX,ECX
004F85CA  83 FA 42                  CMP EDX,0x42
004F85CD  72 6A                     JC 0x004f8639
004F85CF  89 03                     MOV dword ptr [EBX],EAX
004F85D1  8A 0F                     MOV CL,byte ptr [EDI]
004F85D3  FE C1                     INC CL
004F85D5  66 33 D2                  XOR DX,DX
004F85D8  88 0F                     MOV byte ptr [EDI],CL
004F85DA  8A C1                     MOV AL,CL
004F85DC  8B 4B B8                  MOV ECX,dword ptr [EBX + -0x48]
004F85DF  8A D0                     MOV DL,AL
004F85E1  66 3B 11                  CMP DX,word ptr [ECX]
004F85E4  7C 03                     JL 0x004f85e9
004F85E6  C6 07 00                  MOV byte ptr [EDI],0x0
LAB_004f85e9:
004F85E9  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
004F85EC  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
004F85EF  50                        PUSH EAX
004F85F0  51                        PUSH ECX
004F85F1  8B CE                     MOV ECX,ESI
004F85F3  E8 5F B5 F0 FF            CALL 0x00403b57
004F85F8  8A 45 F8                  MOV AL,byte ptr [EBP + -0x8]
004F85FB  84 C0                     TEST AL,AL
004F85FD  0F 94 C0                  SETZ AL
004F8600  83 C0 09                  ADD EAX,0x9
004F8603  3C 0B                     CMP AL,0xb
004F8605  88 45 D4                  MOV byte ptr [EBP + -0x2c],AL
004F8608  73 2F                     JNC 0x004f8639
004F860A  8B 45 D4                  MOV EAX,dword ptr [EBP + -0x2c]
004F860D  25 FF 00 00 00            AND EAX,0xff
004F8612  8B 8C 86 48 01 00 00      MOV ECX,dword ptr [ESI + EAX*0x4 + 0x148]
004F8619  85 C9                     TEST ECX,ECX
004F861B  7C 1C                     JL 0x004f8639
LAB_004f861d:
004F861D  8B 94 86 94 00 00 00      MOV EDX,dword ptr [ESI + EAX*0x4 + 0x94]
004F8624  8B 44 86 3C               MOV EAX,dword ptr [ESI + EAX*0x4 + 0x3c]
004F8628  52                        PUSH EDX
004F8629  50                        PUSH EAX
004F862A  6A FF                     PUSH -0x1
004F862C  51                        PUSH ECX
004F862D  8B 0D A8 75 80 00         MOV ECX,dword ptr [0x008075a8]
004F8633  51                        PUSH ECX
004F8634  E8 07 B0 1B 00            CALL 0x006b3640
LAB_004f8639:
004F8639  8A 45 F8                  MOV AL,byte ptr [EBP + -0x8]
004F863C  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
004F863F  FE C0                     INC AL
004F8641  83 C2 42                  ADD EDX,0x42
004F8644  83 C3 18                  ADD EBX,0x18
004F8647  83 C7 06                  ADD EDI,0x6
004F864A  3C 02                     CMP AL,0x2
004F864C  88 45 F8                  MOV byte ptr [EBP + -0x8],AL
004F864F  89 55 F0                  MOV dword ptr [EBP + -0x10],EDX
004F8652  0F 82 49 FE FF FF         JC 0x004f84a1
004F8658  8A 45 F4                  MOV AL,byte ptr [EBP + -0xc]
004F865B  8B 5D EC                  MOV EBX,dword ptr [EBP + -0x14]
004F865E  8B 7D E8                  MOV EDI,dword ptr [EBP + -0x18]
004F8661  8B 55 E4                  MOV EDX,dword ptr [EBP + -0x1c]
004F8664  8A 4D FF                  MOV CL,byte ptr [EBP + -0x1]
004F8667  FE C0                     INC AL
004F8669  43                        INC EBX
004F866A  83 C7 04                  ADD EDI,0x4
004F866D  83 C2 0B                  ADD EDX,0xb
004F8670  3A C1                     CMP AL,CL
004F8672  88 45 F4                  MOV byte ptr [EBP + -0xc],AL
004F8675  89 5D EC                  MOV dword ptr [EBP + -0x14],EBX
004F8678  89 7D E8                  MOV dword ptr [EBP + -0x18],EDI
004F867B  89 55 E4                  MOV dword ptr [EBP + -0x1c],EDX
004F867E  0F 82 0D FE FF FF         JC 0x004f8491
LAB_004f8684:
004F8684  8B 96 7C 01 00 00         MOV EDX,dword ptr [ESI + 0x17c]
004F868A  A1 A8 75 80 00            MOV EAX,[0x008075a8]
004F868F  52                        PUSH EDX
004F8690  50                        PUSH EAX
004F8691  E8 5A AD 1B 00            CALL 0x006b33f0
004F8696  85 C0                     TEST EAX,EAX
004F8698  0F 84 FE 02 00 00         JZ 0x004f899c
004F869E  33 C0                     XOR EAX,EAX
004F86A0  8A 86 60 02 00 00         MOV AL,byte ptr [ESI + 0x260]
004F86A6  48                        DEC EAX
004F86A7  83 F8 04                  CMP EAX,0x4
004F86AA  0F 87 3D 02 00 00         JA 0x004f88ed
switchD_004f86b0::switchD:
004F86B0  FF 24 85 08 8A 4F 00      JMP dword ptr [EAX*0x4 + 0x4f8a08]
switchD_004f86b0::caseD_4:
004F86B7  8B 46 38                  MOV EAX,dword ptr [ESI + 0x38]
004F86BA  8B BE 61 02 00 00         MOV EDI,dword ptr [ESI + 0x261]
004F86C0  8B C8                     MOV ECX,EAX
004F86C2  2B CF                     SUB ECX,EDI
004F86C4  83 F9 32                  CMP ECX,0x32
004F86C7  0F 82 20 02 00 00         JC 0x004f88ed
004F86CD  8A 8E 5F 02 00 00         MOV CL,byte ptr [ESI + 0x25f]
004F86D3  89 86 61 02 00 00         MOV dword ptr [ESI + 0x261],EAX
004F86D9  FE C1                     INC CL
004F86DB  8A C1                     MOV AL,CL
004F86DD  88 8E 5F 02 00 00         MOV byte ptr [ESI + 0x25f],CL
004F86E3  3C 05                     CMP AL,0x5
004F86E5  75 0D                     JNZ 0x004f86f4
004F86E7  68 B2 00 00 00            PUSH 0xb2
004F86EC  E8 3E D7 F0 FF            CALL 0x00405e2f
004F86F1  83 C4 04                  ADD ESP,0x4
LAB_004f86f4:
004F86F4  8A 86 5F 02 00 00         MOV AL,byte ptr [ESI + 0x25f]
004F86FA  8B 96 5B 02 00 00         MOV EDX,dword ptr [ESI + 0x25b]
004F8700  66 33 C9                  XOR CX,CX
004F8703  8A C8                     MOV CL,AL
004F8705  66 3B 0A                  CMP CX,word ptr [EDX]
004F8708  0F 8C D8 01 00 00         JL 0x004f88e6
004F870E  FE C8                     DEC AL
004F8710  C6 86 60 02 00 00 02      MOV byte ptr [ESI + 0x260],0x2
004F8717  88 86 5F 02 00 00         MOV byte ptr [ESI + 0x25f],AL
004F871D  E9 C4 01 00 00            JMP 0x004f88e6
switchD_004f86b0::caseD_3:
004F8722  8B 46 38                  MOV EAX,dword ptr [ESI + 0x38]
004F8725  8B BE 61 02 00 00         MOV EDI,dword ptr [ESI + 0x261]
004F872B  8B D0                     MOV EDX,EAX
004F872D  2B D7                     SUB EDX,EDI
004F872F  83 FA 32                  CMP EDX,0x32
004F8732  0F 82 B5 01 00 00         JC 0x004f88ed
004F8738  89 86 61 02 00 00         MOV dword ptr [ESI + 0x261],EAX
004F873E  8A 86 5F 02 00 00         MOV AL,byte ptr [ESI + 0x25f]
004F8744  84 C0                     TEST AL,AL
004F8746  76 0A                     JBE 0x004f8752
004F8748  FE C8                     DEC AL
004F874A  88 86 5F 02 00 00         MOV byte ptr [ESI + 0x25f],AL
004F8750  EB 4C                     JMP 0x004f879e
LAB_004f8752:
004F8752  8B 86 5B 02 00 00         MOV EAX,dword ptr [ESI + 0x25b]
004F8758  8D BE 5B 02 00 00         LEA EDI,[ESI + 0x25b]
004F875E  85 C0                     TEST EAX,EAX
004F8760  74 09                     JZ 0x004f876b
004F8762  57                        PUSH EDI
004F8763  E8 98 2E 21 00            CALL 0x0070b600
004F8768  83 C4 04                  ADD ESP,0x4
LAB_004f876b:
004F876B  6A 01                     PUSH 0x1
004F876D  6A 00                     PUSH 0x0
004F876F  6A 06                     PUSH 0x6
004F8771  6A 00                     PUSH 0x0
004F8773  6A 00                     PUSH 0x0
004F8775  6A 00                     PUSH 0x0
004F8777  E8 26 AF F0 FF            CALL 0x004036a2
004F877C  83 C4 0C                  ADD ESP,0xc
004F877F  50                        PUSH EAX
004F8780  A1 90 67 80 00            MOV EAX,[0x00806790]
004F8785  50                        PUSH EAX
004F8786  E8 A5 2C 21 00            CALL 0x0070b430
004F878B  83 C4 14                  ADD ESP,0x14
004F878E  89 07                     MOV dword ptr [EDI],EAX
004F8790  C6 86 60 02 00 00 01      MOV byte ptr [ESI + 0x260],0x1
004F8797  C6 86 5F 02 00 00 00      MOV byte ptr [ESI + 0x25f],0x0
LAB_004f879e:
004F879E  8B CE                     MOV ECX,ESI
004F87A0  E8 49 D6 F0 FF            CALL 0x00405dee
004F87A5  80 BE 5F 02 00 00 05      CMP byte ptr [ESI + 0x25f],0x5
004F87AC  0F 85 3B 01 00 00         JNZ 0x004f88ed
004F87B2  68 B1 00 00 00            PUSH 0xb1
004F87B7  E8 73 D6 F0 FF            CALL 0x00405e2f
004F87BC  83 C4 04                  ADD ESP,0x4
004F87BF  E9 29 01 00 00            JMP 0x004f88ed
switchD_004f86b0::caseD_5:
004F87C4  8B 46 38                  MOV EAX,dword ptr [ESI + 0x38]
004F87C7  8B BE 61 02 00 00         MOV EDI,dword ptr [ESI + 0x261]
004F87CD  8B C8                     MOV ECX,EAX
004F87CF  2B CF                     SUB ECX,EDI
004F87D1  83 F9 42                  CMP ECX,0x42
004F87D4  0F 82 13 01 00 00         JC 0x004f88ed
004F87DA  8A 96 5F 02 00 00         MOV DL,byte ptr [ESI + 0x25f]
004F87E0  8D BE 5B 02 00 00         LEA EDI,[ESI + 0x25b]
004F87E6  FE C2                     INC DL
004F87E8  89 86 61 02 00 00         MOV dword ptr [ESI + 0x261],EAX
004F87EE  8B 07                     MOV EAX,dword ptr [EDI]
004F87F0  88 96 5F 02 00 00         MOV byte ptr [ESI + 0x25f],DL
004F87F6  8A CA                     MOV CL,DL
004F87F8  66 33 D2                  XOR DX,DX
004F87FB  8A D1                     MOV DL,CL
004F87FD  66 3B 10                  CMP DX,word ptr [EAX]
004F8800  0F 8C E0 00 00 00         JL 0x004f88e6
004F8806  85 C0                     TEST EAX,EAX
004F8808  74 09                     JZ 0x004f8813
004F880A  57                        PUSH EDI
004F880B  E8 F0 2D 21 00            CALL 0x0070b600
004F8810  83 C4 04                  ADD ESP,0x4
LAB_004f8813:
004F8813  8A 86 85 02 00 00         MOV AL,byte ptr [ESI + 0x285]
004F8819  84 C0                     TEST AL,AL
004F881B  74 16                     JZ 0x004f8833
004F881D  8B 0D 90 67 80 00         MOV ECX,dword ptr [0x00806790]
004F8823  6A 00                     PUSH 0x0
004F8825  6A 00                     PUSH 0x0
004F8827  8D 86 65 02 00 00         LEA EAX,[ESI + 0x265]
004F882D  6A 06                     PUSH 0x6
004F882F  50                        PUSH EAX
004F8830  51                        PUSH ECX
004F8831  EB 2D                     JMP 0x004f8860
LAB_004f8833:
004F8833  8B 15 58 67 80 00         MOV EDX,dword ptr [0x00806758]
004F8839  6A 00                     PUSH 0x0
004F883B  8D 9E 65 02 00 00         LEA EBX,[ESI + 0x265]
004F8841  6A 00                     PUSH 0x0
004F8843  6A 06                     PUSH 0x6
004F8845  53                        PUSH EBX
004F8846  52                        PUSH EDX
004F8847  E8 E4 2B 21 00            CALL 0x0070b430
004F884C  83 C4 14                  ADD ESP,0x14
004F884F  89 07                     MOV dword ptr [EDI],EAX
004F8851  85 C0                     TEST EAX,EAX
004F8853  75 15                     JNZ 0x004f886a
004F8855  50                        PUSH EAX
004F8856  50                        PUSH EAX
004F8857  A1 98 67 80 00            MOV EAX,[0x00806798]
004F885C  6A 06                     PUSH 0x6
004F885E  53                        PUSH EBX
004F885F  50                        PUSH EAX
LAB_004f8860:
004F8860  E8 CB 2B 21 00            CALL 0x0070b430
004F8865  83 C4 14                  ADD ESP,0x14
004F8868  89 07                     MOV dword ptr [EDI],EAX
LAB_004f886a:
004F886A  83 3F 00                  CMP dword ptr [EDI],0x0
004F886D  75 26                     JNZ 0x004f8895
004F886F  6A 01                     PUSH 0x1
004F8871  6A 00                     PUSH 0x0
004F8873  6A 06                     PUSH 0x6
004F8875  6A 00                     PUSH 0x0
004F8877  6A 00                     PUSH 0x0
004F8879  6A 00                     PUSH 0x0
004F887B  E8 22 AE F0 FF            CALL 0x004036a2
004F8880  8B 0D 90 67 80 00         MOV ECX,dword ptr [0x00806790]
004F8886  83 C4 0C                  ADD ESP,0xc
004F8889  50                        PUSH EAX
004F888A  51                        PUSH ECX
004F888B  E8 A0 2B 21 00            CALL 0x0070b430
004F8890  83 C4 14                  ADD ESP,0x14
004F8893  89 07                     MOV dword ptr [EDI],EAX
LAB_004f8895:
004F8895  C6 86 60 02 00 00 01      MOV byte ptr [ESI + 0x260],0x1
004F889C  EB 41                     JMP 0x004f88df
switchD_004f86b0::caseD_1:
004F889E  A1 1A 73 80 00            MOV EAX,[0x0080731a]
004F88A3  85 C0                     TEST EAX,EAX
004F88A5  74 46                     JZ 0x004f88ed
004F88A7  8B 46 38                  MOV EAX,dword ptr [ESI + 0x38]
004F88AA  8B BE 61 02 00 00         MOV EDI,dword ptr [ESI + 0x261]
004F88B0  8B D0                     MOV EDX,EAX
004F88B2  2B D7                     SUB EDX,EDI
004F88B4  83 FA 42                  CMP EDX,0x42
004F88B7  72 34                     JC 0x004f88ed
004F88B9  8A 8E 5F 02 00 00         MOV CL,byte ptr [ESI + 0x25f]
004F88BF  89 86 61 02 00 00         MOV dword ptr [ESI + 0x261],EAX
004F88C5  FE C1                     INC CL
004F88C7  66 33 D2                  XOR DX,DX
004F88CA  88 8E 5F 02 00 00         MOV byte ptr [ESI + 0x25f],CL
004F88D0  8A C1                     MOV AL,CL
004F88D2  8B 8E 5B 02 00 00         MOV ECX,dword ptr [ESI + 0x25b]
004F88D8  8A D0                     MOV DL,AL
004F88DA  66 3B 11                  CMP DX,word ptr [ECX]
004F88DD  7C 07                     JL 0x004f88e6
LAB_004f88df:
004F88DF  C6 86 5F 02 00 00 00      MOV byte ptr [ESI + 0x25f],0x0
LAB_004f88e6:
004F88E6  8B CE                     MOV ECX,ESI
004F88E8  E8 01 D5 F0 FF            CALL 0x00405dee
CPanelTy::PaintTV::cf_common_join_004F88ED:
004F88ED  8B 86 D8 01 00 00         MOV EAX,dword ptr [ESI + 0x1d8]
004F88F3  85 C0                     TEST EAX,EAX
004F88F5  0F 84 A1 00 00 00         JZ 0x004f899c
004F88FB  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
004F8901  F6 81 E4 00 00 00 01      TEST byte ptr [ECX + 0xe4],0x1
004F8908  0F 84 8E 00 00 00         JZ 0x004f899c
004F890E  8B 96 DC 01 00 00         MOV EDX,dword ptr [ESI + 0x1dc]
004F8914  8B 78 04                  MOV EDI,dword ptr [EAX + 0x4]
004F8917  83 EA 02                  SUB EDX,0x2
004F891A  3B FA                     CMP EDI,EDX
004F891C  7D 7E                     JGE 0x004f899c
004F891E  8B 86 B4 01 00 00         MOV EAX,dword ptr [ESI + 0x1b4]
004F8924  6A 00                     PUSH 0x0
004F8926  6A 55                     PUSH 0x55
004F8928  68 26 02 00 00            PUSH 0x226
004F892D  6A 05                     PUSH 0x5
004F892F  6A 64                     PUSH 0x64
004F8931  6A 00                     PUSH 0x0
004F8933  50                        PUSH EAX
004F8934  E8 37 B8 1B 00            CALL 0x006b4170
004F8939  8B 8E D8 01 00 00         MOV ECX,dword ptr [ESI + 0x1d8]
004F893F  6A 00                     PUSH 0x0
004F8941  6A 01                     PUSH 0x1
004F8943  E8 98 B7 21 00            CALL 0x007140e0
004F8948  85 C0                     TEST EAX,EAX
004F894A  74 1A                     JZ 0x004f8966
004F894C  8B 8E B4 01 00 00         MOV ECX,dword ptr [ESI + 0x1b4]
004F8952  68 FF 00 00 00            PUSH 0xff
004F8957  6A 00                     PUSH 0x0
004F8959  50                        PUSH EAX
004F895A  6A 05                     PUSH 0x5
004F895C  6A 64                     PUSH 0x64
004F895E  6A 00                     PUSH 0x0
004F8960  51                        PUSH ECX
004F8961  E8 DA CA 1B 00            CALL 0x006b5440
LAB_004f8966:
004F8966  8B 96 7C 01 00 00         MOV EDX,dword ptr [ESI + 0x17c]
004F896C  A1 A8 75 80 00            MOV EAX,[0x008075a8]
004F8971  52                        PUSH EDX
004F8972  50                        PUSH EAX
004F8973  E8 58 AC 1B 00            CALL 0x006b35d0
004F8978  8A 86 E0 01 00 00         MOV AL,byte ptr [ESI + 0x1e0]
004F897E  84 C0                     TEST AL,AL
004F8980  74 1A                     JZ 0x004f899c
004F8982  47                        INC EDI
004F8983  81 E7 01 00 00 80         AND EDI,0x80000001
004F8989  79 05                     JNS 0x004f8990
004F898B  4F                        DEC EDI
004F898C  83 CF FE                  OR EDI,0xfffffffe
004F898F  47                        INC EDI
LAB_004f8990:
004F8990  75 0A                     JNZ 0x004f899c
004F8992  6A 1E                     PUSH 0x1e
004F8994  E8 96 D4 F0 FF            CALL 0x00405e2f
004F8999  83 C4 04                  ADD ESP,0x4
LAB_004f899c:
004F899C  8B 4D 90                  MOV ECX,dword ptr [EBP + -0x70]
004F899F  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
004F89A5  5F                        POP EDI
004F89A6  5E                        POP ESI
004F89A7  5B                        POP EBX
004F89A8  8B E5                     MOV ESP,EBP
004F89AA  5D                        POP EBP
004F89AB  C3                        RET
LAB_004f89ac:
004F89AC  8B 55 90                  MOV EDX,dword ptr [EBP + -0x70]
004F89AF  68 54 21 7C 00            PUSH 0x7c2154
004F89B4  68 CC 4C 7A 00            PUSH 0x7a4ccc
004F89B9  56                        PUSH ESI
004F89BA  6A 00                     PUSH 0x0
004F89BC  68 C9 02 00 00            PUSH 0x2c9
004F89C1  68 D8 1B 7C 00            PUSH 0x7c1bd8
004F89C6  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
004F89CC  E8 FF 4A 1B 00            CALL 0x006ad4d0
004F89D1  83 C4 18                  ADD ESP,0x18
004F89D4  85 C0                     TEST EAX,EAX
004F89D6  74 01                     JZ 0x004f89d9
004F89D8  CC                        INT3
LAB_004f89d9:
004F89D9  68 C9 02 00 00            PUSH 0x2c9
004F89DE  68 D8 1B 7C 00            PUSH 0x7c1bd8
004F89E3  6A 00                     PUSH 0x0
004F89E5  56                        PUSH ESI
004F89E6  E8 55 D4 1A 00            CALL 0x006a5e40
004F89EB  5F                        POP EDI
004F89EC  5E                        POP ESI
004F89ED  5B                        POP EBX
004F89EE  8B E5                     MOV ESP,EBP
004F89F0  5D                        POP EBP
004F89F1  C3                        RET
