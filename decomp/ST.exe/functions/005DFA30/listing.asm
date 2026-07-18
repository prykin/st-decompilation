MTaskTy::InitMTask:
005DFA30  55                        PUSH EBP
005DFA31  8B EC                     MOV EBP,ESP
005DFA33  81 EC A4 05 00 00         SUB ESP,0x5a4
005DFA39  8B 41 69                  MOV EAX,dword ptr [ECX + 0x69]
005DFA3C  53                        PUSH EBX
005DFA3D  56                        PUSH ESI
005DFA3E  89 41 61                  MOV dword ptr [ECX + 0x61],EAX
005DFA41  33 F6                     XOR ESI,ESI
005DFA43  57                        PUSH EDI
005DFA44  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
005DFA47  8B 0D F8 8D 85 00         MOV ECX,dword ptr [0x00858df8]
005DFA4D  8D 45 B4                  LEA EAX,[EBP + -0x4c]
005DFA50  8D 55 B0                  LEA EDX,[EBP + -0x50]
005DFA53  56                        PUSH ESI
005DFA54  50                        PUSH EAX
005DFA55  89 4D B0                  MOV dword ptr [EBP + -0x50],ECX
005DFA58  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
005DFA5E  E8 8D DD 14 00            CALL 0x0072d7f0
005DFA63  83 C4 08                  ADD ESP,0x8
005DFA66  3B C6                     CMP EAX,ESI
005DFA68  0F 85 9A 07 00 00         JNZ 0x005e0208
005DFA6E  8B 5D F4                  MOV EBX,dword ptr [EBP + -0xc]
005DFA71  8A 45 08                  MOV AL,byte ptr [EBP + 0x8]
005DFA74  84 C0                     TEST AL,AL
005DFA76  88 43 6E                  MOV byte ptr [EBX + 0x6e],AL
005DFA79  75 08                     JNZ 0x005dfa83
005DFA7B  8A 4D 0C                  MOV CL,byte ptr [EBP + 0xc]
005DFA7E  88 4B 6F                  MOV byte ptr [EBX + 0x6f],CL
005DFA81  EB 04                     JMP 0x005dfa87
LAB_005dfa83:
005DFA83  C6 43 6F 00               MOV byte ptr [EBX + 0x6f],0x0
LAB_005dfa87:
005DFA87  80 7B 6E 01               CMP byte ptr [EBX + 0x6e],0x1
005DFA8B  75 18                     JNZ 0x005dfaa5
005DFA8D  8B 0D 6C 17 81 00         MOV ECX,dword ptr [0x0081176c]
005DFA93  E8 74 5E E2 FF            CALL 0x0040590c
005DFA98  C6 05 7E 87 80 00 01      MOV byte ptr [0x0080877e],0x1
005DFA9F  89 35 7F 87 80 00         MOV dword ptr [0x0080877f],ESI
LAB_005dfaa5:
005DFAA5  8A 43 6E                  MOV AL,byte ptr [EBX + 0x6e]
005DFAA8  84 C0                     TEST AL,AL
005DFAAA  75 17                     JNZ 0x005dfac3
005DFAAC  56                        PUSH ESI
005DFAAD  56                        PUSH ESI
005DFAAE  56                        PUSH ESI
005DFAAF  68 16 ED 80 00            PUSH 0x80ed16
005DFAB4  68 45 03 00 00            PUSH 0x345
005DFAB9  E8 02 14 11 00            CALL 0x006f0ec0
005DFABE  83 C4 14                  ADD ESP,0x14
005DFAC1  EB 2F                     JMP 0x005dfaf2
LAB_005dfac3:
005DFAC3  68 2E C5 80 00            PUSH 0x80c52e
005DFAC8  68 80 76 80 00            PUSH 0x807680
005DFACD  68 E4 6E 7C 00            PUSH 0x7c6ee4
005DFAD2  68 3A F3 80 00            PUSH 0x80f33a
005DFAD7  FF 15 E8 BD 85 00         CALL dword ptr [0x0085bde8]
005DFADD  56                        PUSH ESI
005DFADE  56                        PUSH ESI
005DFADF  56                        PUSH ESI
005DFAE0  68 3A F3 80 00            PUSH 0x80f33a
005DFAE5  68 45 03 00 00            PUSH 0x345
005DFAEA  E8 D1 13 11 00            CALL 0x006f0ec0
005DFAEF  83 C4 24                  ADD ESP,0x24
LAB_005dfaf2:
005DFAF2  89 43 70                  MOV dword ptr [EBX + 0x70],EAX
005DFAF5  A1 6E FB 80 00            MOV EAX,[0x0080fb6e]
005DFAFA  3B C6                     CMP EAX,ESI
005DFAFC  0F 84 ED 00 00 00         JZ 0x005dfbef
005DFB02  A1 C7 C4 80 00            MOV EAX,[0x0080c4c7]
005DFB07  3B C6                     CMP EAX,ESI
005DFB09  74 06                     JZ 0x005dfb11
005DFB0B  50                        PUSH EAX
005DFB0C  E8 5F 5A 0D 00            CALL 0x006b5570
LAB_005dfb11:
005DFB11  8B 15 1C C2 79 00         MOV EDX,dword ptr [0x0079c21c]
005DFB17  8B 43 70                  MOV EAX,dword ptr [EBX + 0x70]
005DFB1A  56                        PUSH ESI
005DFB1B  52                        PUSH EDX
005DFB1C  50                        PUSH EAX
005DFB1D  E8 EE AE 13 00            CALL 0x0071aa10
005DFB22  83 C4 0C                  ADD ESP,0xc
005DFB25  3B C6                     CMP EAX,ESI
005DFB27  A3 C7 C4 80 00            MOV [0x0080c4c7],EAX
005DFB2C  75 0F                     JNZ 0x005dfb3d
005DFB2E  6A 0A                     PUSH 0xa
005DFB30  6A 0A                     PUSH 0xa
005DFB32  56                        PUSH ESI
005DFB33  E8 B8 59 0D 00            CALL 0x006b54f0
005DFB38  A3 C7 C4 80 00            MOV [0x0080c4c7],EAX
LAB_005dfb3d:
005DFB3D  A1 CB C4 80 00            MOV EAX,[0x0080c4cb]
005DFB42  3B C6                     CMP EAX,ESI
005DFB44  74 06                     JZ 0x005dfb4c
005DFB46  50                        PUSH EAX
005DFB47  E8 24 5A 0D 00            CALL 0x006b5570
LAB_005dfb4c:
005DFB4C  8B 0D 20 C2 79 00         MOV ECX,dword ptr [0x0079c220]
005DFB52  8B 53 70                  MOV EDX,dword ptr [EBX + 0x70]
005DFB55  56                        PUSH ESI
005DFB56  51                        PUSH ECX
005DFB57  52                        PUSH EDX
005DFB58  E8 B3 AE 13 00            CALL 0x0071aa10
005DFB5D  83 C4 0C                  ADD ESP,0xc
005DFB60  3B C6                     CMP EAX,ESI
005DFB62  A3 CB C4 80 00            MOV [0x0080c4cb],EAX
005DFB67  75 0F                     JNZ 0x005dfb78
005DFB69  6A 0A                     PUSH 0xa
005DFB6B  6A 0A                     PUSH 0xa
005DFB6D  56                        PUSH ESI
005DFB6E  E8 7D 59 0D 00            CALL 0x006b54f0
005DFB73  A3 CB C4 80 00            MOV [0x0080c4cb],EAX
LAB_005dfb78:
005DFB78  B9 41 00 00 00            MOV ECX,0x41
005DFB7D  33 C0                     XOR EAX,EAX
005DFB7F  BF C3 C3 80 00            MOV EDI,0x80c3c3
005DFB84  56                        PUSH ESI
005DFB85  F3 AB                     STOSD.REP ES:EDI
005DFB87  8B 0D 18 C2 79 00         MOV ECX,dword ptr [0x0079c218]
005DFB8D  8D 45 FC                  LEA EAX,[EBP + -0x4]
005DFB90  50                        PUSH EAX
005DFB91  51                        PUSH ECX
005DFB92  8B 4B 70                  MOV ECX,dword ptr [EBX + 0x70]
005DFB95  6A 0C                     PUSH 0xc
005DFB97  C7 45 FC C3 C3 80 00      MOV dword ptr [EBP + -0x4],0x80c3c3
005DFB9E  E8 3D 21 11 00            CALL 0x006f1ce0
005DFBA3  85 C0                     TEST EAX,EAX
005DFBA5  74 09                     JZ 0x005dfbb0
005DFBA7  A0 C3 C3 80 00            MOV AL,[0x0080c3c3]
005DFBAC  84 C0                     TEST AL,AL
005DFBAE  75 3F                     JNZ 0x005dfbef
LAB_005dfbb0:
005DFBB0  8D 95 5C FE FF FF         LEA EDX,[EBP + 0xfffffe5c]
005DFBB6  56                        PUSH ESI
005DFBB7  52                        PUSH EDX
005DFBB8  56                        PUSH ESI
005DFBB9  56                        PUSH ESI
005DFBBA  68 16 ED 80 00            PUSH 0x80ed16
005DFBBF  E8 6C EB 14 00            CALL 0x0072e730
005DFBC4  8D BD 5C FE FF FF         LEA EDI,[EBP + 0xfffffe5c]
005DFBCA  83 C9 FF                  OR ECX,0xffffffff
005DFBCD  33 C0                     XOR EAX,EAX
005DFBCF  83 C4 14                  ADD ESP,0x14
005DFBD2  F2 AE                     SCASB.REPNE ES:EDI
005DFBD4  F7 D1                     NOT ECX
005DFBD6  2B F9                     SUB EDI,ECX
005DFBD8  8B C1                     MOV EAX,ECX
005DFBDA  8B F7                     MOV ESI,EDI
005DFBDC  BF C3 C3 80 00            MOV EDI,0x80c3c3
005DFBE1  C1 E9 02                  SHR ECX,0x2
005DFBE4  F3 A5                     MOVSD.REP ES:EDI,ESI
005DFBE6  8B C8                     MOV ECX,EAX
005DFBE8  83 E1 03                  AND ECX,0x3
005DFBEB  F3 A4                     MOVSB.REP ES:EDI,ESI
005DFBED  33 F6                     XOR ESI,ESI
LAB_005dfbef:
005DFBEF  8A 43 6E                  MOV AL,byte ptr [EBX + 0x6e]
005DFBF2  56                        PUSH ESI
005DFBF3  84 C0                     TEST AL,AL
005DFBF5  75 0D                     JNZ 0x005dfc04
005DFBF7  8B 0D 14 C2 79 00         MOV ECX,dword ptr [0x0079c214]
005DFBFD  8B 53 70                  MOV EDX,dword ptr [EBX + 0x70]
005DFC00  51                        PUSH ECX
005DFC01  52                        PUSH EDX
005DFC02  EB 09                     JMP 0x005dfc0d
LAB_005dfc04:
005DFC04  8B 43 70                  MOV EAX,dword ptr [EBX + 0x70]
005DFC07  68 03 E3 80 00            PUSH 0x80e303
005DFC0C  50                        PUSH EAX
LAB_005dfc0d:
005DFC0D  E8 3E 54 13 00            CALL 0x00715050
005DFC12  83 C4 0C                  ADD ESP,0xc
005DFC15  3B C6                     CMP EAX,ESI
005DFC17  89 43 74                  MOV dword ptr [EBX + 0x74],EAX
005DFC1A  75 34                     JNZ 0x005dfc50
005DFC1C  6A 01                     PUSH 0x1
005DFC1E  6A 50                     PUSH 0x50
005DFC20  6A 01                     PUSH 0x1
005DFC22  56                        PUSH ESI
005DFC23  E8 68 E6 0C 00            CALL 0x006ae290
005DFC28  8B D0                     MOV EDX,EAX
005DFC2A  B9 14 00 00 00            MOV ECX,0x14
005DFC2F  33 C0                     XOR EAX,EAX
005DFC31  8D BD 60 FF FF FF         LEA EDI,[EBP + 0xffffff60]
005DFC37  F3 AB                     STOSD.REP ES:EDI
005DFC39  8D 8D 60 FF FF FF         LEA ECX,[EBP + 0xffffff60]
005DFC3F  89 53 74                  MOV dword ptr [EBX + 0x74],EDX
005DFC42  51                        PUSH ECX
005DFC43  52                        PUSH EDX
005DFC44  C6 85 60 FF FF FF 08      MOV byte ptr [EBP + 0xffffff60],0x8
005DFC4B  E8 70 E5 0C 00            CALL 0x006ae1c0
LAB_005dfc50:
005DFC50  8B 53 74                  MOV EDX,dword ptr [EBX + 0x74]
005DFC53  8D 4B 78                  LEA ECX,[EBX + 0x78]
005DFC56  E8 E5 01 0D 00            CALL 0x006afe40
005DFC5B  A1 30 2A 80 00            MOV EAX,[0x00802a30]
005DFC60  3B C6                     CMP EAX,ESI
005DFC62  74 28                     JZ 0x005dfc8c
005DFC64  39 B0 A9 00 00 00         CMP dword ptr [EAX + 0xa9],ESI
005DFC6A  74 14                     JZ 0x005dfc80
005DFC6C  8B 48 1C                  MOV ECX,dword ptr [EAX + 0x1c]
005DFC6F  83 F9 FF                  CMP ECX,-0x1
005DFC72  74 18                     JZ 0x005dfc8c
005DFC74  8B 50 60                  MOV EDX,dword ptr [EAX + 0x60]
005DFC77  51                        PUSH ECX
005DFC78  52                        PUSH EDX
005DFC79  E8 72 3E 0D 00            CALL 0x006b3af0
005DFC7E  EB 0C                     JMP 0x005dfc8c
LAB_005dfc80:
005DFC80  8B 80 AD 00 00 00         MOV EAX,dword ptr [EAX + 0xad]
005DFC86  50                        PUSH EAX
005DFC87  E8 84 8E 0D 00            CALL 0x006b8b10
LAB_005dfc8c:
005DFC8C  33 C9                     XOR ECX,ECX
005DFC8E  6A 01                     PUSH 0x1
005DFC90  8A 0D 4E 87 80 00         MOV CL,byte ptr [0x0080874e]
005DFC96  56                        PUSH ESI
005DFC97  51                        PUSH ECX
005DFC98  6A 01                     PUSH 0x1
005DFC9A  68 64 DA 7C 00            PUSH 0x7cda64
005DFC9F  E8 5C 2F 11 00            CALL 0x006f2c00
005DFCA4  8B 15 80 67 80 00         MOV EDX,dword ptr [0x00806780]
005DFCAA  83 C4 0C                  ADD ESP,0xc
005DFCAD  50                        PUSH EAX
005DFCAE  52                        PUSH EDX
005DFCAF  E8 3C AD 12 00            CALL 0x0070a9f0
005DFCB4  56                        PUSH ESI
005DFCB5  56                        PUSH ESI
005DFCB6  6A 01                     PUSH 0x1
005DFCB8  89 43 5D                  MOV dword ptr [EBX + 0x5d],EAX
005DFCBB  56                        PUSH ESI
005DFCBC  C6 83 80 00 00 00 01      MOV byte ptr [EBX + 0x80],0x1
005DFCC3  A1 84 67 80 00            MOV EAX,[0x00806784]
005DFCC8  6A FF                     PUSH -0x1
005DFCCA  68 58 DA 7C 00            PUSH 0x7cda58
005DFCCF  6A 0B                     PUSH 0xb
005DFCD1  50                        PUSH EAX
005DFCD2  E8 19 9E 12 00            CALL 0x00709af0
005DFCD7  83 C4 30                  ADD ESP,0x30
005DFCDA  B9 58 76 80 00            MOV ECX,0x807658
005DFCDF  89 83 81 00 00 00         MOV dword ptr [EBX + 0x81],EAX
005DFCE5  56                        PUSH ESI
005DFCE6  E8 B1 35 E2 FF            CALL 0x0040329c
005DFCEB  8B 53 5D                  MOV EDX,dword ptr [EBX + 0x5d]
005DFCEE  8D 8D 5C FA FF FF         LEA ECX,[EBP + 0xfffffa5c]
005DFCF4  56                        PUSH ESI
005DFCF5  51                        PUSH ECX
005DFCF6  52                        PUSH EDX
005DFCF7  E8 64 C6 0D 00            CALL 0x006bc360
005DFCFC  8D 83 91 00 00 00         LEA EAX,[EBX + 0x91]
005DFD02  8D 8D 5C FA FF FF         LEA ECX,[EBP + 0xfffffa5c]
005DFD08  50                        PUSH EAX
005DFD09  6A 10                     PUSH 0x10
005DFD0B  6A 1A                     PUSH 0x1a
005DFD0D  68 00 01 00 00            PUSH 0x100
005DFD12  56                        PUSH ESI
005DFD13  51                        PUSH ECX
005DFD14  E8 67 8A 13 00            CALL 0x00718780
005DFD19  8D 93 91 01 00 00         LEA EDX,[EBX + 0x191]
005DFD1F  8D 85 5C FA FF FF         LEA EAX,[EBP + 0xfffffa5c]
005DFD25  52                        PUSH EDX
005DFD26  6A 10                     PUSH 0x10
005DFD28  6A 2E                     PUSH 0x2e
005DFD2A  68 00 01 00 00            PUSH 0x100
005DFD2F  56                        PUSH ESI
005DFD30  50                        PUSH EAX
005DFD31  E8 4A 8A 13 00            CALL 0x00718780
005DFD36  8A 0D D9 7D 80 00         MOV CL,byte ptr [0x00807dd9]
005DFD3C  8B 53 5D                  MOV EDX,dword ptr [EBX + 0x5d]
005DFD3F  51                        PUSH ECX
005DFD40  56                        PUSH ESI
005DFD41  52                        PUSH EDX
005DFD42  E8 5E 45 E2 FF            CALL 0x004042a5
005DFD47  89 83 89 00 00 00         MOV dword ptr [EBX + 0x89],EAX
005DFD4D  C7 40 58 01 00 00 00      MOV dword ptr [EAX + 0x58],0x1
005DFD54  89 70 5C                  MOV dword ptr [EAX + 0x5c],ESI
005DFD57  A0 D9 7D 80 00            MOV AL,[0x00807dd9]
005DFD5C  8B 4B 5D                  MOV ECX,dword ptr [EBX + 0x5d]
005DFD5F  50                        PUSH EAX
005DFD60  56                        PUSH ESI
005DFD61  51                        PUSH ECX
005DFD62  E8 9F 25 E2 FF            CALL 0x00402306
005DFD67  8D 93 53 06 00 00         LEA EDX,[EBX + 0x653]
005DFD6D  83 C4 48                  ADD ESP,0x48
005DFD70  89 83 8D 00 00 00         MOV dword ptr [EBX + 0x8d],EAX
005DFD76  8D BB A5 02 00 00         LEA EDI,[EBX + 0x2a5]
005DFD7C  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
005DFD7F  C7 45 FC 05 00 00 00      MOV dword ptr [EBP + -0x4],0x5
LAB_005dfd86:
005DFD86  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
005DFD89  8B 0D A8 75 80 00         MOV ECX,dword ptr [0x008075a8]
005DFD8F  50                        PUSH EAX
005DFD90  56                        PUSH ESI
005DFD91  56                        PUSH ESI
005DFD92  68 63 2F 40 00            PUSH 0x402f63
005DFD97  6A 31                     PUSH 0x31
005DFD99  57                        PUSH EDI
005DFD9A  51                        PUSH ECX
005DFD9B  E8 90 25 0D 00            CALL 0x006b2330
005DFDA0  8B 17                     MOV EDX,dword ptr [EDI]
005DFDA2  A1 A8 75 80 00            MOV EAX,[0x008075a8]
005DFDA7  56                        PUSH ESI
005DFDA8  56                        PUSH ESI
005DFDA9  6A FF                     PUSH -0x1
005DFDAB  52                        PUSH EDX
005DFDAC  50                        PUSH EAX
005DFDAD  E8 8E 38 0D 00            CALL 0x006b3640
005DFDB2  8B 0F                     MOV ECX,dword ptr [EDI]
005DFDB4  8B 15 A8 75 80 00         MOV EDX,dword ptr [0x008075a8]
005DFDBA  51                        PUSH ECX
005DFDBB  52                        PUSH EDX
005DFDBC  E8 2F 3D 0D 00            CALL 0x006b3af0
005DFDC1  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
005DFDC4  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
005DFDC7  83 C2 0C                  ADD EDX,0xc
005DFDCA  83 C7 04                  ADD EDI,0x4
005DFDCD  48                        DEC EAX
005DFDCE  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
005DFDD1  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
005DFDD4  75 B0                     JNZ 0x005dfd86
005DFDD6  8D 83 8F 06 00 00         LEA EAX,[EBX + 0x68f]
005DFDDC  8D BB BD 02 00 00         LEA EDI,[EBX + 0x2bd]
005DFDE2  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
005DFDE5  C7 45 FC 05 00 00 00      MOV dword ptr [EBP + -0x4],0x5
LAB_005dfdec:
005DFDEC  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
005DFDEF  8B 15 A8 75 80 00         MOV EDX,dword ptr [0x008075a8]
005DFDF5  51                        PUSH ECX
005DFDF6  56                        PUSH ESI
005DFDF7  56                        PUSH ESI
005DFDF8  68 63 2F 40 00            PUSH 0x402f63
005DFDFD  6A 31                     PUSH 0x31
005DFDFF  57                        PUSH EDI
005DFE00  52                        PUSH EDX
005DFE01  E8 2A 25 0D 00            CALL 0x006b2330
005DFE06  8B 07                     MOV EAX,dword ptr [EDI]
005DFE08  8B 0D A8 75 80 00         MOV ECX,dword ptr [0x008075a8]
005DFE0E  56                        PUSH ESI
005DFE0F  56                        PUSH ESI
005DFE10  6A FF                     PUSH -0x1
005DFE12  50                        PUSH EAX
005DFE13  51                        PUSH ECX
005DFE14  E8 27 38 0D 00            CALL 0x006b3640
005DFE19  8B 17                     MOV EDX,dword ptr [EDI]
005DFE1B  A1 A8 75 80 00            MOV EAX,[0x008075a8]
005DFE20  52                        PUSH EDX
005DFE21  50                        PUSH EAX
005DFE22  E8 C9 3C 0D 00            CALL 0x006b3af0
005DFE27  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
005DFE2A  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
005DFE2D  83 C2 0C                  ADD EDX,0xc
005DFE30  83 C7 04                  ADD EDI,0x4
005DFE33  48                        DEC EAX
005DFE34  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
005DFE37  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
005DFE3A  75 B0                     JNZ 0x005dfdec
005DFE3C  8B 0D A8 75 80 00         MOV ECX,dword ptr [0x008075a8]
005DFE42  56                        PUSH ESI
005DFE43  56                        PUSH ESI
005DFE44  56                        PUSH ESI
005DFE45  6A 07                     PUSH 0x7
005DFE47  8D BB D1 02 00 00         LEA EDI,[EBX + 0x2d1]
005DFE4D  6A 31                     PUSH 0x31
005DFE4F  51                        PUSH ECX
005DFE50  8B CF                     MOV ECX,EDI
005DFE52  E8 49 5A 13 00            CALL 0x007158a0
005DFE57  A1 84 67 80 00            MOV EAX,[0x00806784]
005DFE5C  8B 17                     MOV EDX,dword ptr [EDI]
005DFE5E  6A FF                     PUSH -0x1
005DFE60  68 4C DA 7C 00            PUSH 0x7cda4c
005DFE65  56                        PUSH ESI
005DFE66  6A 07                     PUSH 0x7
005DFE68  50                        PUSH EAX
005DFE69  8B CF                     MOV ECX,EDI
005DFE6B  FF 52 04                  CALL dword ptr [EDX + 0x4]
005DFE6E  89 B3 ED 02 00 00         MOV dword ptr [EBX + 0x2ed],ESI
005DFE74  89 B3 F1 02 00 00         MOV dword ptr [EBX + 0x2f1],ESI
005DFE7A  89 B3 D9 02 00 00         MOV dword ptr [EBX + 0x2d9],ESI
005DFE80  8B 47 04                  MOV EAX,dword ptr [EDI + 0x4]
005DFE83  83 F8 FF                  CMP EAX,-0x1
005DFE86  74 0A                     JZ 0x005dfe92
005DFE88  8B 4F 48                  MOV ECX,dword ptr [EDI + 0x48]
005DFE8B  50                        PUSH EAX
005DFE8C  51                        PUSH ECX
005DFE8D  E8 5E 3C 0D 00            CALL 0x006b3af0
LAB_005dfe92:
005DFE92  8B 15 A8 75 80 00         MOV EDX,dword ptr [0x008075a8]
005DFE98  56                        PUSH ESI
005DFE99  56                        PUSH ESI
005DFE9A  56                        PUSH ESI
005DFE9B  8D BB 62 03 00 00         LEA EDI,[EBX + 0x362]
005DFEA1  6A 07                     PUSH 0x7
005DFEA3  6A 31                     PUSH 0x31
005DFEA5  52                        PUSH EDX
005DFEA6  8B CF                     MOV ECX,EDI
005DFEA8  E8 F3 59 13 00            CALL 0x007158a0
005DFEAD  8B 0D 84 67 80 00         MOV ECX,dword ptr [0x00806784]
005DFEB3  8B 07                     MOV EAX,dword ptr [EDI]
005DFEB5  6A FF                     PUSH -0x1
005DFEB7  68 40 DA 7C 00            PUSH 0x7cda40
005DFEBC  56                        PUSH ESI
005DFEBD  6A 07                     PUSH 0x7
005DFEBF  51                        PUSH ECX
005DFEC0  8B CF                     MOV ECX,EDI
005DFEC2  FF 50 04                  CALL dword ptr [EAX + 0x4]
005DFEC5  89 B3 7E 03 00 00         MOV dword ptr [EBX + 0x37e],ESI
005DFECB  89 B3 82 03 00 00         MOV dword ptr [EBX + 0x382],ESI
005DFED1  89 B3 6A 03 00 00         MOV dword ptr [EBX + 0x36a],ESI
005DFED7  8B 47 04                  MOV EAX,dword ptr [EDI + 0x4]
005DFEDA  83 F8 FF                  CMP EAX,-0x1
005DFEDD  74 0A                     JZ 0x005dfee9
005DFEDF  8B 57 48                  MOV EDX,dword ptr [EDI + 0x48]
005DFEE2  50                        PUSH EAX
005DFEE3  52                        PUSH EDX
005DFEE4  E8 07 3C 0D 00            CALL 0x006b3af0
LAB_005dfee9:
005DFEE9  A1 A8 75 80 00            MOV EAX,[0x008075a8]
005DFEEE  56                        PUSH ESI
005DFEEF  56                        PUSH ESI
005DFEF0  56                        PUSH ESI
005DFEF1  8D BB F3 03 00 00         LEA EDI,[EBX + 0x3f3]
005DFEF7  6A 07                     PUSH 0x7
005DFEF9  6A 31                     PUSH 0x31
005DFEFB  50                        PUSH EAX
005DFEFC  8B CF                     MOV ECX,EDI
005DFEFE  E8 9D 59 13 00            CALL 0x007158a0
005DFF03  A1 84 67 80 00            MOV EAX,[0x00806784]
005DFF08  8B 17                     MOV EDX,dword ptr [EDI]
005DFF0A  6A FF                     PUSH -0x1
005DFF0C  68 34 DA 7C 00            PUSH 0x7cda34
005DFF11  56                        PUSH ESI
005DFF12  6A 07                     PUSH 0x7
005DFF14  50                        PUSH EAX
005DFF15  8B CF                     MOV ECX,EDI
005DFF17  FF 52 04                  CALL dword ptr [EDX + 0x4]
005DFF1A  89 B3 0F 04 00 00         MOV dword ptr [EBX + 0x40f],ESI
005DFF20  89 B3 13 04 00 00         MOV dword ptr [EBX + 0x413],ESI
005DFF26  89 B3 FB 03 00 00         MOV dword ptr [EBX + 0x3fb],ESI
005DFF2C  8B 47 04                  MOV EAX,dword ptr [EDI + 0x4]
005DFF2F  83 F8 FF                  CMP EAX,-0x1
005DFF32  74 0A                     JZ 0x005dff3e
005DFF34  8B 4F 48                  MOV ECX,dword ptr [EDI + 0x48]
005DFF37  50                        PUSH EAX
005DFF38  51                        PUSH ECX
005DFF39  E8 B2 3B 0D 00            CALL 0x006b3af0
LAB_005dff3e:
005DFF3E  A1 A8 75 80 00            MOV EAX,[0x008075a8]
005DFF43  8D 93 BF 06 00 00         LEA EDX,[EBX + 0x6bf]
005DFF49  52                        PUSH EDX
005DFF4A  56                        PUSH ESI
005DFF4B  56                        PUSH ESI
005DFF4C  8D BB 84 04 00 00         LEA EDI,[EBX + 0x484]
005DFF52  68 63 2F 40 00            PUSH 0x402f63
005DFF57  6A 32                     PUSH 0x32
005DFF59  57                        PUSH EDI
005DFF5A  50                        PUSH EAX
005DFF5B  E8 D0 23 0D 00            CALL 0x006b2330
005DFF60  8B 0F                     MOV ECX,dword ptr [EDI]
005DFF62  8B 15 A8 75 80 00         MOV EDX,dword ptr [0x008075a8]
005DFF68  56                        PUSH ESI
005DFF69  56                        PUSH ESI
005DFF6A  6A FF                     PUSH -0x1
005DFF6C  51                        PUSH ECX
005DFF6D  52                        PUSH EDX
005DFF6E  E8 CD 36 0D 00            CALL 0x006b3640
005DFF73  8B 07                     MOV EAX,dword ptr [EDI]
005DFF75  8B 0D A8 75 80 00         MOV ECX,dword ptr [0x008075a8]
005DFF7B  50                        PUSH EAX
005DFF7C  51                        PUSH ECX
005DFF7D  E8 6E 3B 0D 00            CALL 0x006b3af0
005DFF82  8B 15 A8 75 80 00         MOV EDX,dword ptr [0x008075a8]
005DFF88  56                        PUSH ESI
005DFF89  56                        PUSH ESI
005DFF8A  56                        PUSH ESI
005DFF8B  8D BB 8C 04 00 00         LEA EDI,[EBX + 0x48c]
005DFF91  6A 07                     PUSH 0x7
005DFF93  6A 31                     PUSH 0x31
005DFF95  52                        PUSH EDX
005DFF96  8B CF                     MOV ECX,EDI
005DFF98  E8 03 59 13 00            CALL 0x007158a0
005DFF9D  8B 0D 84 67 80 00         MOV ECX,dword ptr [0x00806784]
005DFFA3  8B 07                     MOV EAX,dword ptr [EDI]
005DFFA5  6A FF                     PUSH -0x1
005DFFA7  68 4C DA 7C 00            PUSH 0x7cda4c
005DFFAC  56                        PUSH ESI
005DFFAD  6A 07                     PUSH 0x7
005DFFAF  51                        PUSH ECX
005DFFB0  8B CF                     MOV ECX,EDI
005DFFB2  FF 50 04                  CALL dword ptr [EAX + 0x4]
005DFFB5  89 B3 A8 04 00 00         MOV dword ptr [EBX + 0x4a8],ESI
005DFFBB  89 B3 AC 04 00 00         MOV dword ptr [EBX + 0x4ac],ESI
005DFFC1  89 B3 94 04 00 00         MOV dword ptr [EBX + 0x494],ESI
005DFFC7  8B 47 04                  MOV EAX,dword ptr [EDI + 0x4]
005DFFCA  83 F8 FF                  CMP EAX,-0x1
005DFFCD  74 0A                     JZ 0x005dffd9
005DFFCF  8B 57 48                  MOV EDX,dword ptr [EDI + 0x48]
005DFFD2  50                        PUSH EAX
005DFFD3  52                        PUSH EDX
005DFFD4  E8 17 3B 0D 00            CALL 0x006b3af0
LAB_005dffd9:
005DFFD9  A1 A8 75 80 00            MOV EAX,[0x008075a8]
005DFFDE  56                        PUSH ESI
005DFFDF  56                        PUSH ESI
005DFFE0  56                        PUSH ESI
005DFFE1  8D BB 1D 05 00 00         LEA EDI,[EBX + 0x51d]
005DFFE7  6A 07                     PUSH 0x7
005DFFE9  6A 31                     PUSH 0x31
005DFFEB  50                        PUSH EAX
005DFFEC  8B CF                     MOV ECX,EDI
005DFFEE  E8 AD 58 13 00            CALL 0x007158a0
005DFFF3  A1 84 67 80 00            MOV EAX,[0x00806784]
005DFFF8  8B 17                     MOV EDX,dword ptr [EDI]
005DFFFA  6A FF                     PUSH -0x1
005DFFFC  68 40 DA 7C 00            PUSH 0x7cda40
005E0001  56                        PUSH ESI
005E0002  6A 07                     PUSH 0x7
005E0004  50                        PUSH EAX
005E0005  8B CF                     MOV ECX,EDI
005E0007  FF 52 04                  CALL dword ptr [EDX + 0x4]
005E000A  89 B3 39 05 00 00         MOV dword ptr [EBX + 0x539],ESI
005E0010  89 B3 3D 05 00 00         MOV dword ptr [EBX + 0x53d],ESI
005E0016  89 B3 25 05 00 00         MOV dword ptr [EBX + 0x525],ESI
005E001C  8B 47 04                  MOV EAX,dword ptr [EDI + 0x4]
005E001F  83 F8 FF                  CMP EAX,-0x1
005E0022  74 0A                     JZ 0x005e002e
005E0024  8B 4F 48                  MOV ECX,dword ptr [EDI + 0x48]
005E0027  50                        PUSH EAX
005E0028  51                        PUSH ECX
005E0029  E8 C2 3A 0D 00            CALL 0x006b3af0
LAB_005e002e:
005E002E  8B 15 A8 75 80 00         MOV EDX,dword ptr [0x008075a8]
005E0034  56                        PUSH ESI
005E0035  56                        PUSH ESI
005E0036  56                        PUSH ESI
005E0037  8D BB AE 05 00 00         LEA EDI,[EBX + 0x5ae]
005E003D  6A 07                     PUSH 0x7
005E003F  6A 31                     PUSH 0x31
005E0041  52                        PUSH EDX
005E0042  8B CF                     MOV ECX,EDI
005E0044  E8 57 58 13 00            CALL 0x007158a0
005E0049  8B 0D 84 67 80 00         MOV ECX,dword ptr [0x00806784]
005E004F  8B 07                     MOV EAX,dword ptr [EDI]
005E0051  6A FF                     PUSH -0x1
005E0053  68 34 DA 7C 00            PUSH 0x7cda34
005E0058  56                        PUSH ESI
005E0059  6A 07                     PUSH 0x7
005E005B  51                        PUSH ECX
005E005C  8B CF                     MOV ECX,EDI
005E005E  FF 50 04                  CALL dword ptr [EAX + 0x4]
005E0061  89 B3 CA 05 00 00         MOV dword ptr [EBX + 0x5ca],ESI
005E0067  89 B3 CE 05 00 00         MOV dword ptr [EBX + 0x5ce],ESI
005E006D  89 B3 B6 05 00 00         MOV dword ptr [EBX + 0x5b6],ESI
005E0073  8B 47 04                  MOV EAX,dword ptr [EDI + 0x4]
005E0076  83 F8 FF                  CMP EAX,-0x1
005E0079  74 0A                     JZ 0x005e0085
005E007B  8B 57 48                  MOV EDX,dword ptr [EDI + 0x48]
005E007E  50                        PUSH EAX
005E007F  52                        PUSH EDX
005E0080  E8 6B 3A 0D 00            CALL 0x006b3af0
LAB_005e0085:
005E0085  8B 0D A8 75 80 00         MOV ECX,dword ptr [0x008075a8]
005E008B  8D 83 CB 06 00 00         LEA EAX,[EBX + 0x6cb]
005E0091  50                        PUSH EAX
005E0092  56                        PUSH ESI
005E0093  56                        PUSH ESI
005E0094  8D BB 3F 06 00 00         LEA EDI,[EBX + 0x63f]
005E009A  68 63 2F 40 00            PUSH 0x402f63
005E009F  6A 32                     PUSH 0x32
005E00A1  57                        PUSH EDI
005E00A2  51                        PUSH ECX
005E00A3  E8 88 22 0D 00            CALL 0x006b2330
005E00A8  8B 17                     MOV EDX,dword ptr [EDI]
005E00AA  A1 A8 75 80 00            MOV EAX,[0x008075a8]
005E00AF  56                        PUSH ESI
005E00B0  56                        PUSH ESI
005E00B1  6A FF                     PUSH -0x1
005E00B3  52                        PUSH EDX
005E00B4  50                        PUSH EAX
005E00B5  E8 86 35 0D 00            CALL 0x006b3640
005E00BA  8B 0F                     MOV ECX,dword ptr [EDI]
005E00BC  8B 15 A8 75 80 00         MOV EDX,dword ptr [0x008075a8]
005E00C2  51                        PUSH ECX
005E00C3  52                        PUSH EDX
005E00C4  E8 27 3A 0D 00            CALL 0x006b3af0
005E00C9  68 E4 5D 40 00            PUSH 0x405de4
005E00CE  6A 0A                     PUSH 0xa
005E00D0  68 9E 00 00 00            PUSH 0x9e
005E00D5  6A 0A                     PUSH 0xa
005E00D7  56                        PUSH ESI
005E00D8  E8 33 E2 0C 00            CALL 0x006ae310
005E00DD  68 5C 36 40 00            PUSH 0x40365c
005E00E2  6A 0A                     PUSH 0xa
005E00E4  6A 3E                     PUSH 0x3e
005E00E6  6A 0A                     PUSH 0xa
005E00E8  56                        PUSH ESI
005E00E9  89 83 4B 06 00 00         MOV dword ptr [EBX + 0x64b],EAX
005E00EF  E8 1C E2 0C 00            CALL 0x006ae310
005E00F4  68 5C 36 40 00            PUSH 0x40365c
005E00F9  6A 0A                     PUSH 0xa
005E00FB  6A 3E                     PUSH 0x3e
005E00FD  6A 0A                     PUSH 0xa
005E00FF  56                        PUSH ESI
005E0100  89 83 47 06 00 00         MOV dword ptr [EBX + 0x647],EAX
005E0106  E8 05 E2 0C 00            CALL 0x006ae310
005E010B  89 83 4F 06 00 00         MOV dword ptr [EBX + 0x64f],EAX
005E0111  A1 6C 17 81 00            MOV EAX,[0x0081176c]
005E0116  8B 88 E6 02 00 00         MOV ECX,dword ptr [EAX + 0x2e6]
005E011C  3B CE                     CMP ECX,ESI
005E011E  74 09                     JZ 0x005e0129
005E0120  6A 01                     PUSH 0x1
005E0122  56                        PUSH ESI
005E0123  56                        PUSH ESI
005E0124  E8 7C 1E E2 FF            CALL 0x00401fa5
LAB_005e0129:
005E0129  8B 0D 9C 75 80 00         MOV ECX,dword ptr [0x0080759c]
005E012F  56                        PUSH ESI
005E0130  6A 01                     PUSH 0x1
005E0132  51                        PUSH ECX
005E0133  E8 0B 1C E2 FF            CALL 0x00401d43
005E0138  8B 3D 30 2A 80 00         MOV EDI,dword ptr [0x00802a30]
005E013E  83 C4 0C                  ADD ESP,0xc
005E0141  3B FE                     CMP EDI,ESI
005E0143  74 4C                     JZ 0x005e0191
005E0145  8B 97 C9 00 00 00         MOV EDX,dword ptr [EDI + 0xc9]
005E014B  8B 87 C5 00 00 00         MOV EAX,dword ptr [EDI + 0xc5]
005E0151  52                        PUSH EDX
005E0152  50                        PUSH EAX
005E0153  56                        PUSH ESI
005E0154  8B CF                     MOV ECX,EDI
005E0156  C6 87 93 04 00 00 03      MOV byte ptr [EDI + 0x493],0x3
005E015D  66 C7 87 94 04 00 00 FF FF  MOV word ptr [EDI + 0x494],0xffff
005E0166  E8 13 4F E2 FF            CALL 0x0040507e
005E016B  8B 8F C9 00 00 00         MOV ECX,dword ptr [EDI + 0xc9]
005E0171  8B 97 C5 00 00 00         MOV EDX,dword ptr [EDI + 0xc5]
005E0177  51                        PUSH ECX
005E0178  52                        PUSH EDX
005E0179  8B CF                     MOV ECX,EDI
005E017B  E8 9E 22 E2 FF            CALL 0x0040241e
005E0180  C6 87 D2 00 00 00 00      MOV byte ptr [EDI + 0xd2],0x0
005E0187  C7 87 DF 04 00 00 FF FF FF FF  MOV dword ptr [EDI + 0x4df],0xffffffff
LAB_005e0191:
005E0191  56                        PUSH ESI
005E0192  8B 43 08                  MOV EAX,dword ptr [EBX + 0x8]
005E0195  56                        PUSH ESI
005E0196  56                        PUSH ESI
005E0197  56                        PUSH ESI
005E0198  56                        PUSH ESI
005E0199  56                        PUSH ESI
005E019A  6A 01                     PUSH 0x1
005E019C  6A 02                     PUSH 0x2
005E019E  6A 64                     PUSH 0x64
005E01A0  6A 02                     PUSH 0x2
005E01A2  50                        PUSH EAX
005E01A3  6A 01                     PUSH 0x1
005E01A5  E8 15 2C E2 FF            CALL 0x00402dbf
005E01AA  56                        PUSH ESI
005E01AB  8B 4B 08                  MOV ECX,dword ptr [EBX + 0x8]
005E01AE  56                        PUSH ESI
005E01AF  56                        PUSH ESI
005E01B0  56                        PUSH ESI
005E01B1  56                        PUSH ESI
005E01B2  56                        PUSH ESI
005E01B3  6A 1C                     PUSH 0x1c
005E01B5  6A 02                     PUSH 0x2
005E01B7  6A 62                     PUSH 0x62
005E01B9  6A 02                     PUSH 0x2
005E01BB  51                        PUSH ECX
005E01BC  6A 01                     PUSH 0x1
005E01BE  E8 FC 2B E2 FF            CALL 0x00402dbf
005E01C3  83 C4 60                  ADD ESP,0x60
005E01C6  8B CB                     MOV ECX,EBX
005E01C8  C6 43 6D 03               MOV byte ptr [EBX + 0x6d],0x3
005E01CC  E8 47 5A E2 FF            CALL 0x00405c18
005E01D1  8B CB                     MOV ECX,EBX
005E01D3  E8 98 34 E2 FF            CALL 0x00403670
005E01D8  8B 53 5D                  MOV EDX,dword ptr [EBX + 0x5d]
005E01DB  A1 A8 75 80 00            MOV EAX,[0x008075a8]
005E01E0  8B 0D 9C 75 80 00         MOV ECX,dword ptr [0x0080759c]
005E01E6  56                        PUSH ESI
005E01E7  6A 02                     PUSH 0x2
005E01E9  6A 0A                     PUSH 0xa
005E01EB  52                        PUSH EDX
005E01EC  50                        PUSH EAX
005E01ED  51                        PUSH ECX
005E01EE  E8 97 42 E2 FF            CALL 0x0040448a
005E01F3  8B 55 B0                  MOV EDX,dword ptr [EBP + -0x50]
005E01F6  83 C4 18                  ADD ESP,0x18
005E01F9  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
005E01FF  5F                        POP EDI
005E0200  5E                        POP ESI
005E0201  5B                        POP EBX
005E0202  8B E5                     MOV ESP,EBP
005E0204  5D                        POP EBP
005E0205  C2 08 00                  RET 0x8
LAB_005e0208:
005E0208  8B 4D B0                  MOV ECX,dword ptr [EBP + -0x50]
005E020B  68 1C DA 7C 00            PUSH 0x7cda1c
005E0210  68 CC 4C 7A 00            PUSH 0x7a4ccc
005E0215  50                        PUSH EAX
005E0216  56                        PUSH ESI
005E0217  68 DD 00 00 00            PUSH 0xdd
005E021C  68 94 D9 7C 00            PUSH 0x7cd994
005E0221  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005E0227  E8 A4 D2 0C 00            CALL 0x006ad4d0
005E022C  83 C4 18                  ADD ESP,0x18
005E022F  85 C0                     TEST EAX,EAX
005E0231  74 01                     JZ 0x005e0234
005E0233  CC                        INT3
LAB_005e0234:
005E0234  8B 7D F4                  MOV EDI,dword ptr [EBP + -0xc]
005E0237  8B CF                     MOV ECX,EDI
005E0239  E8 7A 4B E2 FF            CALL 0x00404db8
005E023E  C7 47 45 00 02 00 00      MOV dword ptr [EDI + 0x45],0x200
005E0245  89 77 49                  MOV dword ptr [EDI + 0x49],ESI
005E0248  C7 47 4D 02 61 00 00      MOV dword ptr [EDI + 0x4d],0x6102
005E024F  5F                        POP EDI
005E0250  5E                        POP ESI
005E0251  5B                        POP EBX
005E0252  8B E5                     MOV ESP,EBP
005E0254  5D                        POP EBP
005E0255  C2 08 00                  RET 0x8
