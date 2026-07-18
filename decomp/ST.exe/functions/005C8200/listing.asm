FUN_005c8200:
005C8200  55                        PUSH EBP
005C8201  8B EC                     MOV EBP,ESP
005C8203  81 EC 14 02 00 00         SUB ESP,0x214
005C8209  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
005C820E  53                        PUSH EBX
005C820F  56                        PUSH ESI
005C8210  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
005C8213  57                        PUSH EDI
005C8214  8D 55 8C                  LEA EDX,[EBP + -0x74]
005C8217  8D 4D 88                  LEA ECX,[EBP + -0x78]
005C821A  6A 00                     PUSH 0x0
005C821C  52                        PUSH EDX
005C821D  89 45 88                  MOV dword ptr [EBP + -0x78],EAX
005C8220  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005C8226  E8 C5 55 16 00            CALL 0x0072d7f0
005C822B  83 C4 08                  ADD ESP,0x8
005C822E  85 C0                     TEST EAX,EAX
005C8230  0F 85 11 04 00 00         JNZ 0x005c8647
005C8236  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
005C8239  8B 83 3F 1F 00 00         MOV EAX,dword ptr [EBX + 0x1f3f]
005C823F  85 C0                     TEST EAX,EAX
005C8241  74 09                     JZ 0x005c824c
005C8243  50                        PUSH EAX
005C8244  E8 27 8F 12 00            CALL 0x006f1170
005C8249  83 C4 04                  ADD ESP,0x4
LAB_005c824c:
005C824C  A1 F4 C0 79 00            MOV EAX,[0x0079c0f4]
005C8251  8B 0D E8 C0 79 00         MOV ECX,dword ptr [0x0079c0e8]
005C8257  50                        PUSH EAX
005C8258  51                        PUSH ECX
005C8259  68 80 76 80 00            PUSH 0x807680
005C825E  68 DC 6E 7C 00            PUSH 0x7c6edc
005C8263  68 E4 3D 85 00            PUSH 0x853de4
005C8268  FF 15 E8 BD 85 00         CALL dword ptr [0x0085bde8]
005C826E  6A 00                     PUSH 0x0
005C8270  6A 00                     PUSH 0x0
005C8272  6A 00                     PUSH 0x0
005C8274  68 E4 3D 85 00            PUSH 0x853de4
005C8279  68 45 03 00 00            PUSH 0x345
005C827E  E8 3D 8C 12 00            CALL 0x006f0ec0
005C8283  89 83 3F 1F 00 00         MOV dword ptr [EBX + 0x1f3f],EAX
005C8289  8B 15 6C 17 81 00         MOV EDX,dword ptr [0x0081176c]
005C828F  83 C4 28                  ADD ESP,0x28
005C8292  8B 8A F4 02 00 00         MOV ECX,dword ptr [EDX + 0x2f4]
005C8298  8D 82 F4 02 00 00         LEA EAX,[EDX + 0x2f4]
005C829E  85 C9                     TEST ECX,ECX
005C82A0  74 06                     JZ 0x005c82a8
005C82A2  50                        PUSH EAX
005C82A3  E8 B8 2D 0E 00            CALL 0x006ab060
LAB_005c82a8:
005C82A8  A1 14 C1 79 00            MOV EAX,[0x0079c114]
005C82AD  8B 8B 3F 1F 00 00         MOV ECX,dword ptr [EBX + 0x1f3f]
005C82B3  6A 00                     PUSH 0x0
005C82B5  6A 02                     PUSH 0x2
005C82B7  50                        PUSH EAX
005C82B8  6A 0C                     PUSH 0xc
005C82BA  51                        PUSH ECX
005C82BB  E8 E0 22 14 00            CALL 0x0070a5a0
005C82C0  8B 15 6C 17 81 00         MOV EDX,dword ptr [0x0081176c]
005C82C6  83 C4 14                  ADD ESP,0x14
005C82C9  89 82 F4 02 00 00         MOV dword ptr [EDX + 0x2f4],EAX
005C82CF  A1 6C 17 81 00            MOV EAX,[0x0081176c]
005C82D4  8B 80 F4 02 00 00         MOV EAX,dword ptr [EAX + 0x2f4]
005C82DA  85 C0                     TEST EAX,EAX
005C82DC  74 17                     JZ 0x005c82f5
005C82DE  8B 0D 9C 75 80 00         MOV ECX,dword ptr [0x0080759c]
005C82E4  6A 00                     PUSH 0x0
005C82E6  8B 91 B4 04 00 00         MOV EDX,dword ptr [ECX + 0x4b4]
005C82EC  52                        PUSH EDX
005C82ED  6A 00                     PUSH 0x0
005C82EF  50                        PUSH EAX
005C82F0  E8 9B FC 0F 00            CALL 0x006c7f90
LAB_005c82f5:
005C82F5  A1 5C 99 80 00            MOV EAX,[0x0080995c]
005C82FA  8B 15 10 C1 79 00         MOV EDX,dword ptr [0x0079c110]
005C8300  B9 08 00 00 00            MOV ECX,0x8
005C8305  BE 60 99 80 00            MOV ESI,0x809960
005C830A  8D BD 3C FF FF FF         LEA EDI,[EBP + 0xffffff3c]
005C8310  89 45 80                  MOV dword ptr [EBP + -0x80],EAX
005C8313  F3 A5                     MOVSD.REP ES:EDI,ESI
005C8315  33 F6                     XOR ESI,ESI
005C8317  8D 4D FC                  LEA ECX,[EBP + -0x4]
005C831A  56                        PUSH ESI
005C831B  51                        PUSH ECX
005C831C  8B 8B 3F 1F 00 00         MOV ECX,dword ptr [EBX + 0x1f3f]
005C8322  52                        PUSH EDX
005C8323  56                        PUSH ESI
005C8324  C7 45 FC B6 87 80 00      MOV dword ptr [EBP + -0x4],0x8087b6
005C832B  E8 B0 99 12 00            CALL 0x006f1ce0
005C8330  85 C0                     TEST EAX,EAX
005C8332  75 17                     JNZ 0x005c834b
005C8334  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
005C8339  68 5A 04 00 00            PUSH 0x45a
005C833E  68 E8 D0 7C 00            PUSH 0x7cd0e8
005C8343  50                        PUSH EAX
005C8344  6A FF                     PUSH -0x1
005C8346  E8 F5 DA 0D 00            CALL 0x006a5e40
LAB_005c834b:
005C834B  A0 7E 87 80 00            MOV AL,[0x0080877e]
005C8350  84 C0                     TEST AL,AL
005C8352  74 1A                     JZ 0x005c836e
005C8354  89 B3 21 21 00 00         MOV dword ptr [EBX + 0x2121],ESI
005C835A  8A 0D 4B 73 80 00         MOV CL,byte ptr [0x0080734b]
005C8360  89 35 AB 8A 80 00         MOV dword ptr [0x00808aab],ESI
005C8366  88 0D A8 8A 80 00         MOV byte ptr [0x00808aa8],CL
005C836C  EB 0E                     JMP 0x005c837c
LAB_005c836e:
005C836E  83 C8 FF                  OR EAX,0xffffffff
005C8371  89 83 21 21 00 00         MOV dword ptr [EBX + 0x2121],EAX
005C8377  A3 AB 8A 80 00            MOV [0x00808aab],EAX
LAB_005c837c:
005C837C  8B 15 BE 87 80 00         MOV EDX,dword ptr [0x008087be]
005C8382  8B 45 80                  MOV EAX,dword ptr [EBP + -0x80]
005C8385  B9 08 00 00 00            MOV ECX,0x8
005C838A  8D B5 3C FF FF FF         LEA ESI,[EBP + 0xffffff3c]
005C8390  BF 60 99 80 00            MOV EDI,0x809960
005C8395  89 15 58 99 80 00         MOV dword ptr [0x00809958],EDX
005C839B  A3 5C 99 80 00            MOV [0x0080995c],EAX
005C83A0  F3 A5                     MOVSD.REP ES:EDI,ESI
005C83A2  A1 C7 C4 80 00            MOV EAX,[0x0080c4c7]
005C83A7  85 C0                     TEST EAX,EAX
005C83A9  74 06                     JZ 0x005c83b1
005C83AB  50                        PUSH EAX
005C83AC  E8 BF D1 0E 00            CALL 0x006b5570
LAB_005c83b1:
005C83B1  8B 0D 08 C1 79 00         MOV ECX,dword ptr [0x0079c108]
005C83B7  8B 93 3F 1F 00 00         MOV EDX,dword ptr [EBX + 0x1f3f]
005C83BD  6A 00                     PUSH 0x0
005C83BF  51                        PUSH ECX
005C83C0  52                        PUSH EDX
005C83C1  E8 4A 26 15 00            CALL 0x0071aa10
005C83C6  83 C4 0C                  ADD ESP,0xc
005C83C9  A3 C7 C4 80 00            MOV [0x0080c4c7],EAX
005C83CE  85 C0                     TEST EAX,EAX
005C83D0  75 0F                     JNZ 0x005c83e1
005C83D2  6A 0A                     PUSH 0xa
005C83D4  6A 0A                     PUSH 0xa
005C83D6  50                        PUSH EAX
005C83D7  E8 14 D1 0E 00            CALL 0x006b54f0
005C83DC  A3 C7 C4 80 00            MOV [0x0080c4c7],EAX
LAB_005c83e1:
005C83E1  A1 CB C4 80 00            MOV EAX,[0x0080c4cb]
005C83E6  85 C0                     TEST EAX,EAX
005C83E8  74 06                     JZ 0x005c83f0
005C83EA  50                        PUSH EAX
005C83EB  E8 80 D1 0E 00            CALL 0x006b5570
LAB_005c83f0:
005C83F0  A1 0C C1 79 00            MOV EAX,[0x0079c10c]
005C83F5  8B 8B 3F 1F 00 00         MOV ECX,dword ptr [EBX + 0x1f3f]
005C83FB  6A 00                     PUSH 0x0
005C83FD  50                        PUSH EAX
005C83FE  51                        PUSH ECX
005C83FF  E8 0C 26 15 00            CALL 0x0071aa10
005C8404  83 C4 0C                  ADD ESP,0xc
005C8407  A3 CB C4 80 00            MOV [0x0080c4cb],EAX
005C840C  85 C0                     TEST EAX,EAX
005C840E  75 0F                     JNZ 0x005c841f
005C8410  6A 0A                     PUSH 0xa
005C8412  6A 0A                     PUSH 0xa
005C8414  50                        PUSH EAX
005C8415  E8 D6 D0 0E 00            CALL 0x006b54f0
005C841A  A3 CB C4 80 00            MOV [0x0080c4cb],EAX
LAB_005c841f:
005C841F  B9 41 00 00 00            MOV ECX,0x41
005C8424  33 C0                     XOR EAX,EAX
005C8426  BF C3 C3 80 00            MOV EDI,0x80c3c3
005C842B  50                        PUSH EAX
005C842C  F3 AB                     STOSD.REP ES:EDI
005C842E  A1 04 C1 79 00            MOV EAX,[0x0079c104]
005C8433  8B 8B 3F 1F 00 00         MOV ECX,dword ptr [EBX + 0x1f3f]
005C8439  8D 55 FC                  LEA EDX,[EBP + -0x4]
005C843C  C7 45 FC C3 C3 80 00      MOV dword ptr [EBP + -0x4],0x80c3c3
005C8443  52                        PUSH EDX
005C8444  50                        PUSH EAX
005C8445  6A 0C                     PUSH 0xc
005C8447  E8 94 98 12 00            CALL 0x006f1ce0
005C844C  85 C0                     TEST EAX,EAX
005C844E  74 09                     JZ 0x005c8459
005C8450  A0 C3 C3 80 00            MOV AL,[0x0080c3c3]
005C8455  84 C0                     TEST AL,AL
005C8457  75 40                     JNZ 0x005c8499
LAB_005c8459:
005C8459  8D 8D EC FD FF FF         LEA ECX,[EBP + 0xfffffdec]
005C845F  6A 00                     PUSH 0x0
005C8461  51                        PUSH ECX
005C8462  6A 00                     PUSH 0x0
005C8464  6A 00                     PUSH 0x0
005C8466  68 E4 3D 85 00            PUSH 0x853de4
005C846B  E8 C0 62 16 00            CALL 0x0072e730
005C8470  8D BD EC FD FF FF         LEA EDI,[EBP + 0xfffffdec]
005C8476  83 C9 FF                  OR ECX,0xffffffff
005C8479  33 C0                     XOR EAX,EAX
005C847B  83 C4 14                  ADD ESP,0x14
005C847E  F2 AE                     SCASB.REPNE ES:EDI
005C8480  F7 D1                     NOT ECX
005C8482  2B F9                     SUB EDI,ECX
005C8484  8B D1                     MOV EDX,ECX
005C8486  8B F7                     MOV ESI,EDI
005C8488  BF C3 C3 80 00            MOV EDI,0x80c3c3
005C848D  C1 E9 02                  SHR ECX,0x2
005C8490  F3 A5                     MOVSD.REP ES:EDI,ESI
005C8492  8B CA                     MOV ECX,EDX
005C8494  83 E1 03                  AND ECX,0x3
005C8497  F3 A4                     MOVSB.REP ES:EDI,ESI
LAB_005c8499:
005C8499  8B 0D F8 C0 79 00         MOV ECX,dword ptr [0x0079c0f8]
005C849F  8D 45 FC                  LEA EAX,[EBP + -0x4]
005C84A2  6A 00                     PUSH 0x0
005C84A4  50                        PUSH EAX
005C84A5  51                        PUSH ECX
005C84A6  8B 8B 3F 1F 00 00         MOV ECX,dword ptr [EBX + 0x1f3f]
005C84AC  6A 0C                     PUSH 0xc
005C84AE  C7 45 FC E0 3D 85 00      MOV dword ptr [EBP + -0x4],0x853de0
005C84B5  E8 26 98 12 00            CALL 0x006f1ce0
005C84BA  85 C0                     TEST EAX,EAX
005C84BC  75 18                     JNZ 0x005c84d6
005C84BE  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
005C84C4  68 75 04 00 00            PUSH 0x475
005C84C9  68 E8 D0 7C 00            PUSH 0x7cd0e8
005C84CE  52                        PUSH EDX
005C84CF  6A FF                     PUSH -0x1
005C84D1  E8 6A D9 0D 00            CALL 0x006a5e40
LAB_005c84d6:
005C84D6  8B 15 FC C0 79 00         MOV EDX,dword ptr [0x0079c0fc]
005C84DC  8D 4D FC                  LEA ECX,[EBP + -0x4]
005C84DF  6A 00                     PUSH 0x0
005C84E1  51                        PUSH ECX
005C84E2  8B 8B 3F 1F 00 00         MOV ECX,dword ptr [EBX + 0x1f3f]
005C84E8  8D 83 53 1F 00 00         LEA EAX,[EBX + 0x1f53]
005C84EE  52                        PUSH EDX
005C84EF  6A 0C                     PUSH 0xc
005C84F1  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
005C84F4  E8 E7 97 12 00            CALL 0x006f1ce0
005C84F9  85 C0                     TEST EAX,EAX
005C84FB  75 17                     JNZ 0x005c8514
005C84FD  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
005C8502  68 77 04 00 00            PUSH 0x477
005C8507  68 E8 D0 7C 00            PUSH 0x7cd0e8
005C850C  50                        PUSH EAX
005C850D  6A FF                     PUSH -0x1
005C850F  E8 2C D9 0D 00            CALL 0x006a5e40
LAB_005c8514:
005C8514  8B 0D F4 C0 79 00         MOV ECX,dword ptr [0x0079c0f4]
005C851A  8B 15 E8 C0 79 00         MOV EDX,dword ptr [0x0079c0e8]
005C8520  8B 3D E8 BD 85 00         MOV EDI,dword ptr [0x0085bde8]
005C8526  51                        PUSH ECX
005C8527  52                        PUSH EDX
005C8528  68 80 76 80 00            PUSH 0x807680
005C852D  68 DC 6E 7C 00            PUSH 0x7c6edc
005C8532  68 E4 3D 85 00            PUSH 0x853de4
005C8537  FF D7                     CALL EDI
005C8539  C7 83 47 1F 00 00 01 00 00 00  MOV dword ptr [EBX + 0x1f47],0x1
005C8543  A0 7E 87 80 00            MOV AL,[0x0080877e]
005C8548  83 C4 14                  ADD ESP,0x14
005C854B  84 C0                     TEST AL,AL
005C854D  0F 84 9C 00 00 00         JZ 0x005c85ef
005C8553  A0 A0 67 80 00            MOV AL,[0x008067a0]
005C8558  84 C0                     TEST AL,AL
005C855A  0F 84 8F 00 00 00         JZ 0x005c85ef
005C8560  A1 64 17 81 00            MOV EAX,[0x00811764]
005C8565  85 C0                     TEST EAX,EAX
005C8567  0F 84 82 00 00 00         JZ 0x005c85ef
005C856D  83 C0 18                  ADD EAX,0x18
005C8570  8D B3 5F 1A 00 00         LEA ESI,[EBX + 0x1a5f]
005C8576  50                        PUSH EAX
005C8577  56                        PUSH ESI
005C8578  E8 E3 DB 0E 00            CALL 0x006b6160
005C857D  C6 83 7F 1A 00 00 01      MOV byte ptr [EBX + 0x1a7f],0x1
005C8584  A0 C6 87 80 00            MOV AL,[0x008087c6]
005C8589  88 83 80 1A 00 00         MOV byte ptr [EBX + 0x1a80],AL
005C858F  66 8B 0D C2 87 80 00      MOV CX,word ptr [0x008087c2]
005C8596  D1 E9                     SHR ECX,0x1
005C8598  88 8B 81 1A 00 00         MOV byte ptr [EBX + 0x1a81],CL
005C859E  8B 15 5C 99 80 00         MOV EDX,dword ptr [0x0080995c]
005C85A4  52                        PUSH EDX
005C85A5  8D 45 EC                  LEA EAX,[EBP + -0x14]
005C85A8  68 84 C5 7C 00            PUSH 0x7cc584
005C85AD  50                        PUSH EAX
005C85AE  FF D7                     CALL EDI
005C85B0  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
005C85B3  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
005C85B6  8D 8B 82 1A 00 00         LEA ECX,[EBX + 0x1a82]
005C85BC  68 D5 01 00 00            PUSH 0x1d5
005C85C1  68 C3 C3 80 00            PUSH 0x80c3c3
005C85C6  89 11                     MOV dword ptr [ECX],EDX
005C85C8  89 41 04                  MOV dword ptr [ECX + 0x4],EAX
005C85CB  8D 8B 8A 1A 00 00         LEA ECX,[EBX + 0x1a8a]
005C85D1  51                        PUSH ECX
005C85D2  E8 69 5D 16 00            CALL 0x0072e340
005C85D7  83 C4 18                  ADD ESP,0x18
005C85DA  B9 90 2A 80 00            MOV ECX,0x802a90
005C85DF  C6 83 5E 1C 00 00 00      MOV byte ptr [EBX + 0x1c5e],0x0
005C85E6  56                        PUSH ESI
005C85E7  6A 04                     PUSH 0x4
005C85E9  FF 15 70 C0 85 00         CALL dword ptr [0x0085c070]
LAB_005c85ef:
005C85EF  8B 13                     MOV EDX,dword ptr [EBX]
005C85F1  8B CB                     MOV ECX,EBX
005C85F3  FF 52 28                  CALL dword ptr [EDX + 0x28]
005C85F6  6A 00                     PUSH 0x0
005C85F8  8B CB                     MOV ECX,EBX
005C85FA  E8 D6 C3 E3 FF            CALL 0x004049d5
005C85FF  B9 08 00 00 00            MOV ECX,0x8
005C8604  33 C0                     XOR EAX,EAX
005C8606  8D 7D CC                  LEA EDI,[EBP + -0x34]
005C8609  8D B3 60 1F 00 00         LEA ESI,[EBX + 0x1f60]
005C860F  F3 AB                     STOSD.REP ES:EDI
005C8611  C7 45 DC 05 00 00 00      MOV dword ptr [EBP + -0x24],0x5
005C8618  BF 07 00 00 00            MOV EDI,0x7
LAB_005c861d:
005C861D  8B 06                     MOV EAX,dword ptr [ESI]
005C861F  85 C0                     TEST EAX,EAX
005C8621  74 0E                     JZ 0x005c8631
005C8623  8D 4D CC                  LEA ECX,[EBP + -0x34]
005C8626  51                        PUSH ECX
005C8627  50                        PUSH EAX
005C8628  6A 02                     PUSH 0x2
005C862A  8B CB                     MOV ECX,EBX
005C862C  E8 4F DA 11 00            CALL 0x006e6080
LAB_005c8631:
005C8631  83 C6 04                  ADD ESI,0x4
005C8634  4F                        DEC EDI
005C8635  75 E6                     JNZ 0x005c861d
005C8637  8B 55 88                  MOV EDX,dword ptr [EBP + -0x78]
005C863A  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
005C8640  5F                        POP EDI
005C8641  5E                        POP ESI
005C8642  5B                        POP EBX
005C8643  8B E5                     MOV ESP,EBP
005C8645  5D                        POP EBP
005C8646  C3                        RET
LAB_005c8647:
005C8647  8B 45 88                  MOV EAX,dword ptr [EBP + -0x78]
005C864A  A3 F8 8D 85 00            MOV [0x00858df8],EAX
005C864F  A0 7E 87 80 00            MOV AL,[0x0080877e]
005C8654  84 C0                     TEST AL,AL
005C8656  74 1B                     JZ 0x005c8673
005C8658  FF 15 DC BE 85 00         CALL dword ptr [0x0085bedc]
005C865E  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
005C8661  89 81 53 1F 00 00         MOV dword ptr [ECX + 0x1f53],EAX
005C8667  E8 66 9E E3 FF            CALL 0x004024d2
005C866C  5F                        POP EDI
005C866D  5E                        POP ESI
005C866E  5B                        POP EBX
005C866F  8B E5                     MOV ESP,EBP
005C8671  5D                        POP EBP
005C8672  C3                        RET
LAB_005c8673:
005C8673  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
005C8676  8B 11                     MOV EDX,dword ptr [ECX]
005C8678  FF 52 28                  CALL dword ptr [EDX + 0x28]
005C867B  5F                        POP EDI
005C867C  5E                        POP ESI
005C867D  5B                        POP EBX
005C867E  8B E5                     MOV ESP,EBP
005C8680  5D                        POP EBP
005C8681  C3                        RET
