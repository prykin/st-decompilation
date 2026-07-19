FUN_004e6310:
004E6310  55                        PUSH EBP
004E6311  8B EC                     MOV EBP,ESP
004E6313  83 EC 1C                  SUB ESP,0x1c
004E6316  53                        PUSH EBX
004E6317  56                        PUSH ESI
004E6318  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
004E631B  89 4D E4                  MOV dword ptr [EBP + -0x1c],ECX
004E631E  85 F6                     TEST ESI,ESI
004E6320  0F 8C 95 02 00 00         JL 0x004e65bb
004E6326  83 FE 08                  CMP ESI,0x8
004E6329  0F 8D 8C 02 00 00         JGE 0x004e65bb
004E632F  8B 5D 0C                  MOV EBX,dword ptr [EBP + 0xc]
004E6332  83 FB 01                  CMP EBX,0x1
004E6335  0F 8C 80 02 00 00         JL 0x004e65bb
004E633B  81 FB 9B 00 00 00         CMP EBX,0x9b
004E6341  0F 8D 74 02 00 00         JGE 0x004e65bb
004E6347  8D 04 B6                  LEA EAX,[ESI + ESI*0x4]
004E634A  57                        PUSH EDI
004E634B  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
004E634E  8D 0C C6                  LEA ECX,[ESI + EAX*0x8]
004E6351  8D 3C 4E                  LEA EDI,[ESI + ECX*0x2]
004E6354  C1 E7 04                  SHL EDI,0x4
004E6357  03 FE                     ADD EDI,ESI
004E6359  D1 E7                     SHL EDI,0x1
004E635B  8D 87 1F 51 7F 00         LEA EAX,[EDI + 0x7f511f]
004E6361  89 94 9F 47 51 7F 00      MOV dword ptr [EDI + EBX*0x4 + 0x7f5147],EDX
004E6368  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
004E636B  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
004E636E  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
004E6371  80 F2 07                  XOR DL,0x7
004E6374  0F B3 11                  BTR [ECX],EDX
004E6377  8B 84 9F 47 51 7F 00      MOV EAX,dword ptr [EDI + EBX*0x4 + 0x7f5147]
004E637E  85 C0                     TEST EAX,EAX
004E6380  0F 84 1E 02 00 00         JZ 0x004e65a4
004E6386  33 C0                     XOR EAX,EAX
004E6388  8A 87 20 4E 7F 00         MOV AL,byte ptr [EDI + 0x7f4e20]
004E638E  48                        DEC EAX
004E638F  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
004E6392  8B 04 85 C8 0D 7C 00      MOV EAX,dword ptr [EAX*0x4 + 0x7c0dc8]
004E6399  83 38 00                  CMP dword ptr [EAX],0x0
004E639C  0F 84 BD 00 00 00         JZ 0x004e645f
004E63A2  33 F6                     XOR ESI,ESI
004E63A4  C7 45 F4 05 00 00 00      MOV dword ptr [EBP + -0xc],0x5
LAB_004e63ab:
004E63AB  8B 0C 06                  MOV ECX,dword ptr [ESI + EAX*0x1]
004E63AE  33 D2                     XOR EDX,EDX
004E63B0  8A 54 06 04               MOV DL,byte ptr [ESI + EAX*0x1 + 0x4]
004E63B4  89 4D EC                  MOV dword ptr [EBP + -0x14],ECX
004E63B7  4A                        DEC EDX
004E63B8  39 94 8F 47 51 7F 00      CMP dword ptr [EDI + ECX*0x4 + 0x7f5147],EDX
004E63BF  75 7B                     JNZ 0x004e643c
004E63C1  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
004E63C4  33 D2                     XOR EDX,EDX
004E63C6  39 14 01                  CMP dword ptr [ECX + EAX*0x1],EDX
004E63C9  74 71                     JZ 0x004e643c
004E63CB  8D 44 06 05               LEA EAX,[ESI + EAX*0x1 + 0x5]
004E63CF  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
004E63D2  8B C8                     MOV ECX,EAX
LAB_004e63d4:
004E63D4  83 FA 04                  CMP EDX,0x4
004E63D7  7D 63                     JGE 0x004e643c
004E63D9  39 19                     CMP dword ptr [ECX],EBX
004E63DB  75 0F                     JNZ 0x004e63ec
004E63DD  8B 5D 10                  MOV EBX,dword ptr [EBP + 0x10]
004E63E0  33 C0                     XOR EAX,EAX
004E63E2  8A 41 04                  MOV AL,byte ptr [ECX + 0x4]
004E63E5  3B C3                     CMP EAX,EBX
004E63E7  74 10                     JZ 0x004e63f9
004E63E9  8B 5D 0C                  MOV EBX,dword ptr [EBP + 0xc]
LAB_004e63ec:
004E63EC  8B 41 05                  MOV EAX,dword ptr [ECX + 0x5]
004E63EF  83 C1 05                  ADD ECX,0x5
004E63F2  42                        INC EDX
004E63F3  85 C0                     TEST EAX,EAX
004E63F5  75 DD                     JNZ 0x004e63d4
004E63F7  EB 43                     JMP 0x004e643c
LAB_004e63f9:
004E63F9  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
004E63FC  33 C9                     XOR ECX,ECX
LAB_004e63fe:
004E63FE  83 F9 04                  CMP ECX,0x4
004E6401  7D 1B                     JGE 0x004e641e
004E6403  8B 10                     MOV EDX,dword ptr [EAX]
004E6405  33 DB                     XOR EBX,EBX
004E6407  8A 58 04                  MOV BL,byte ptr [EAX + 0x4]
004E640A  39 9C 97 47 51 7F 00      CMP dword ptr [EDI + EDX*0x4 + 0x7f5147],EBX
004E6411  7C 26                     JL 0x004e6439
004E6413  8B 50 05                  MOV EDX,dword ptr [EAX + 0x5]
004E6416  83 C0 05                  ADD EAX,0x5
004E6419  41                        INC ECX
004E641A  85 D2                     TEST EDX,EDX
004E641C  75 E0                     JNZ 0x004e63fe
LAB_004e641e:
004E641E  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
004E6421  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
004E6424  8D 87 1F 51 7F 00         LEA EAX,[EDI + 0x7f511f]
004E642A  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
004E642D  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
004E6430  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
004E6433  80 F2 07                  XOR DL,0x7
004E6436  0F AB 11                  BTS [ECX],EDX
LAB_004e6439:
004E6439  8B 5D 0C                  MOV EBX,dword ptr [EBP + 0xc]
FUN_004e6310::cf_continue_loop_004E643C:
004E643C  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
004E643F  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
004E6442  83 C0 19                  ADD EAX,0x19
004E6445  83 C6 19                  ADD ESI,0x19
004E6448  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
004E644B  8B 04 8D C8 0D 7C 00      MOV EAX,dword ptr [ECX*0x4 + 0x7c0dc8]
004E6452  83 3C 06 00               CMP dword ptr [ESI + EAX*0x1],0x0
004E6456  0F 85 4F FF FF FF         JNZ 0x004e63ab
004E645C  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
LAB_004e645f:
004E645F  8B 87 EE 57 7F 00         MOV EAX,dword ptr [EDI + 0x7f57ee]
004E6465  85 C0                     TEST EAX,EAX
004E6467  74 33                     JZ 0x004e649c
004E6469  C7 40 04 00 00 00 00      MOV dword ptr [EAX + 0x4],0x0
004E6470  8B 8F EE 57 7F 00         MOV ECX,dword ptr [EDI + 0x7f57ee]
004E6476  8D 55 F8                  LEA EDX,[EBP + -0x8]
004E6479  E8 12 AD 1C 00            CALL 0x006b1190
004E647E  85 C0                     TEST EAX,EAX
004E6480  7C 1A                     JL 0x004e649c
LAB_004e6482:
004E6482  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
004E6485  E8 22 CD F1 FF            CALL 0x004031ac
004E648A  8B 8F EE 57 7F 00         MOV ECX,dword ptr [EDI + 0x7f57ee]
004E6490  8D 55 F8                  LEA EDX,[EBP + -0x8]
004E6493  E8 F8 AC 1C 00            CALL 0x006b1190
004E6498  85 C0                     TEST EAX,EAX
004E649A  7D E6                     JGE 0x004e6482
LAB_004e649c:
004E649C  83 FB 1D                  CMP EBX,0x1d
004E649F  74 17                     JZ 0x004e64b8
004E64A1  81 FB 89 00 00 00         CMP EBX,0x89
004E64A7  74 0F                     JZ 0x004e64b8
004E64A9  83 FB 46                  CMP EBX,0x46
004E64AC  74 0A                     JZ 0x004e64b8
004E64AE  83 FB 4A                  CMP EBX,0x4a
004E64B1  74 05                     JZ 0x004e64b8
004E64B3  83 FB 12                  CMP EBX,0x12
004E64B6  75 68                     JNZ 0x004e6520
LAB_004e64b8:
004E64B8  8B 8F 29 4E 7F 00         MOV ECX,dword ptr [EDI + 0x7f4e29]
004E64BE  85 C9                     TEST ECX,ECX
004E64C0  74 5E                     JZ 0x004e6520
004E64C2  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
004E64C5  33 F6                     XOR ESI,ESI
004E64C7  85 C0                     TEST EAX,EAX
004E64C9  76 52                     JBE 0x004e651d
LAB_004e64cb:
004E64CB  8D 55 FC                  LEA EDX,[EBP + -0x4]
004E64CE  52                        PUSH EDX
004E64CF  8B D6                     MOV EDX,ESI
004E64D1  E8 9A 67 1C 00            CALL 0x006acc70
004E64D6  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
004E64D9  85 C9                     TEST ECX,ECX
004E64DB  74 34                     JZ 0x004e6511
004E64DD  8B 01                     MOV EAX,dword ptr [ECX]
004E64DF  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
004E64E2  83 F8 36                  CMP EAX,0x36
004E64E5  74 1A                     JZ 0x004e6501
004E64E7  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
004E64EA  8B 11                     MOV EDX,dword ptr [ECX]
004E64EC  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
004E64EF  83 F8 5D                  CMP EAX,0x5d
004E64F2  74 0D                     JZ 0x004e6501
004E64F4  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
004E64F7  8B 01                     MOV EAX,dword ptr [ECX]
004E64F9  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
004E64FC  83 F8 3D                  CMP EAX,0x3d
004E64FF  75 10                     JNZ 0x004e6511
LAB_004e6501:
004E6501  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
004E6504  E8 66 C8 F1 FF            CALL 0x00402d6f
004E6509  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
004E650C  E8 07 B6 F1 FF            CALL 0x00401b18
LAB_004e6511:
004E6511  8B 8F 29 4E 7F 00         MOV ECX,dword ptr [EDI + 0x7f4e29]
004E6517  46                        INC ESI
004E6518  3B 71 0C                  CMP ESI,dword ptr [ECX + 0xc]
004E651B  72 AE                     JC 0x004e64cb
LAB_004e651d:
004E651D  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
LAB_004e6520:
004E6520  83 FB 3C                  CMP EBX,0x3c
004E6523  74 1F                     JZ 0x004e6544
004E6525  81 FB 91 00 00 00         CMP EBX,0x91
004E652B  74 17                     JZ 0x004e6544
004E652D  81 FB 9A 00 00 00         CMP EBX,0x9a
004E6533  74 0F                     JZ 0x004e6544
004E6535  83 FB 4B                  CMP EBX,0x4b
004E6538  74 0A                     JZ 0x004e6544
004E653A  83 FB 4C                  CMP EBX,0x4c
004E653D  74 05                     JZ 0x004e6544
004E653F  83 FB 41                  CMP EBX,0x41
004E6542  75 60                     JNZ 0x004e65a4
LAB_004e6544:
004E6544  8B 8F 29 4E 7F 00         MOV ECX,dword ptr [EDI + 0x7f4e29]
004E654A  85 C9                     TEST ECX,ECX
004E654C  74 56                     JZ 0x004e65a4
004E654E  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
004E6551  33 F6                     XOR ESI,ESI
004E6553  85 C0                     TEST EAX,EAX
004E6555  76 4A                     JBE 0x004e65a1
LAB_004e6557:
004E6557  8D 55 FC                  LEA EDX,[EBP + -0x4]
004E655A  52                        PUSH EDX
004E655B  8B D6                     MOV EDX,ESI
004E655D  E8 0E 67 1C 00            CALL 0x006acc70
004E6562  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
004E6565  85 C9                     TEST ECX,ECX
004E6567  74 2C                     JZ 0x004e6595
004E6569  8B 01                     MOV EAX,dword ptr [ECX]
004E656B  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
004E656E  83 F8 05                  CMP EAX,0x5
004E6571  74 1A                     JZ 0x004e658d
004E6573  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
004E6576  8B 11                     MOV EDX,dword ptr [ECX]
004E6578  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
004E657B  83 F8 21                  CMP EAX,0x21
004E657E  74 0D                     JZ 0x004e658d
004E6580  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
004E6583  8B 01                     MOV EAX,dword ptr [ECX]
004E6585  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
004E6588  83 F8 11                  CMP EAX,0x11
004E658B  75 08                     JNZ 0x004e6595
LAB_004e658d:
004E658D  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
004E6590  E8 55 C0 F1 FF            CALL 0x004025ea
LAB_004e6595:
004E6595  8B 8F 29 4E 7F 00         MOV ECX,dword ptr [EDI + 0x7f4e29]
004E659B  46                        INC ESI
004E659C  3B 71 0C                  CMP ESI,dword ptr [ECX + 0xc]
004E659F  72 B6                     JC 0x004e6557
LAB_004e65a1:
004E65A1  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
LAB_004e65a4:
004E65A4  56                        PUSH ESI
004E65A5  8B 75 E4                  MOV ESI,dword ptr [EBP + -0x1c]
004E65A8  8B CE                     MOV ECX,ESI
004E65AA  E8 C4 F5 F1 FF            CALL 0x00405b73
004E65AF  6A 00                     PUSH 0x0
004E65B1  6A 13                     PUSH 0x13
004E65B3  8B CE                     MOV ECX,ESI
004E65B5  E8 9B E6 F1 FF            CALL 0x00404c55
004E65BA  5F                        POP EDI
LAB_004e65bb:
004E65BB  5E                        POP ESI
004E65BC  5B                        POP EBX
004E65BD  8B E5                     MOV ESP,EBP
004E65BF  5D                        POP EBP
004E65C0  C2 0C 00                  RET 0xc
