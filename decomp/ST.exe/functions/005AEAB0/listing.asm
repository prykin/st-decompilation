ChooseMapTy::CreateCtrls:
005AEAB0  55                        PUSH EBP
005AEAB1  8B EC                     MOV EBP,ESP
005AEAB3  81 EC E0 0F 00 00         SUB ESP,0xfe0
005AEAB9  53                        PUSH EBX
005AEABA  56                        PUSH ESI
005AEABB  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
005AEABE  57                        PUSH EDI
005AEABF  B9 35 01 00 00            MOV ECX,0x135
005AEAC4  33 C0                     XOR EAX,EAX
005AEAC6  8D BD 6C FA FF FF         LEA EDI,[EBP + 0xfffffa6c]
005AEACC  33 DB                     XOR EBX,EBX
005AEACE  F3 AB                     STOSD.REP ES:EDI
005AEAD0  B9 23 02 00 00            MOV ECX,0x223
005AEAD5  8D BD 20 F0 FF FF         LEA EDI,[EBP + 0xfffff020]
005AEADB  F3 AB                     STOSD.REP ES:EDI
005AEADD  B9 16 00 00 00            MOV ECX,0x16
005AEAE2  8D 7D 84                  LEA EDI,[EBP + -0x7c]
005AEAE5  F3 AB                     STOSD.REP ES:EDI
005AEAE7  B9 70 00 00 00            MOV ECX,0x70
005AEAEC  8D BD AC F8 FF FF         LEA EDI,[EBP + 0xfffff8ac]
005AEAF2  F3 AB                     STOSD.REP ES:EDI
005AEAF4  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
005AEAF9  8D 95 44 FF FF FF         LEA EDX,[EBP + 0xffffff44]
005AEAFF  8D 8D 40 FF FF FF         LEA ECX,[EBP + 0xffffff40]
005AEB05  53                        PUSH EBX
005AEB06  52                        PUSH EDX
005AEB07  89 85 40 FF FF FF         MOV dword ptr [EBP + 0xffffff40],EAX
005AEB0D  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005AEB13  E8 D8 EC 17 00            CALL 0x0072d7f0
005AEB18  8B F0                     MOV ESI,EAX
005AEB1A  83 C4 08                  ADD ESP,0x8
005AEB1D  3B F3                     CMP ESI,EBX
005AEB1F  0F 85 FC 05 00 00         JNZ 0x005af121
005AEB25  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
005AEB28  33 C0                     XOR EAX,EAX
005AEB2A  33 D2                     XOR EDX,EDX
005AEB2C  8A 86 5F 1A 00 00         MOV AL,byte ptr [ESI + 0x1a5f]
005AEB32  48                        DEC EAX
005AEB33  83 F8 0A                  CMP EAX,0xa
005AEB36  0F 87 9D 00 00 00         JA 0x005aebd9
005AEB3C  33 C9                     XOR ECX,ECX
005AEB3E  8A 88 7C F1 5A 00         MOV CL,byte ptr [EAX + 0x5af17c]
switchD_005aeb44::switchD:
005AEB44  FF 24 8D 6C F1 5A 00      JMP dword ptr [ECX*0x4 + 0x5af16c]
switchD_005aeb44::caseD_9:
005AEB4B  8B 3D 6C 17 81 00         MOV EDI,dword ptr [0x0081176c]
005AEB51  33 C0                     XOR EAX,EAX
005AEB53  BA 03 00 00 00            MOV EDX,0x3
005AEB58  8A 87 EA 02 00 00         MOV AL,byte ptr [EDI + 0x2ea]
005AEB5E  89 45 D0                  MOV dword ptr [EBP + -0x30],EAX
005AEB61  33 C0                     XOR EAX,EAX
005AEB63  8A 87 EA 02 00 00         MOV AL,byte ptr [EDI + 0x2ea]
005AEB69  48                        DEC EAX
005AEB6A  74 18                     JZ 0x005aeb84
005AEB6C  48                        DEC EAX
005AEB6D  74 0C                     JZ 0x005aeb7b
005AEB6F  48                        DEC EAX
005AEB70  75 67                     JNZ 0x005aebd9
005AEB72  C6 86 5F 1A 00 00 0B      MOV byte ptr [ESI + 0x1a5f],0xb
005AEB79  EB 5E                     JMP 0x005aebd9
LAB_005aeb7b:
005AEB7B  C6 86 5F 1A 00 00 0A      MOV byte ptr [ESI + 0x1a5f],0xa
005AEB82  EB 55                     JMP 0x005aebd9
LAB_005aeb84:
005AEB84  C6 86 5F 1A 00 00 09      MOV byte ptr [ESI + 0x1a5f],0x9
005AEB8B  EB 4C                     JMP 0x005aebd9
switchD_005aeb44::caseD_1:
005AEB8D  8B 0D 6C 17 81 00         MOV ECX,dword ptr [0x0081176c]
005AEB93  33 C0                     XOR EAX,EAX
005AEB95  BF 02 00 00 00            MOV EDI,0x2
005AEB9A  8A 81 EB 02 00 00         MOV AL,byte ptr [ECX + 0x2eb]
005AEBA0  8B D7                     MOV EDX,EDI
005AEBA2  83 F8 01                  CMP EAX,0x1
005AEBA5  89 45 D0                  MOV dword ptr [EBP + -0x30],EAX
005AEBA8  0F 95 C0                  SETNZ AL
005AEBAB  40                        INC EAX
005AEBAC  88 86 5F 1A 00 00         MOV byte ptr [ESI + 0x1a5f],AL
005AEBB2  EB 2A                     JMP 0x005aebde
switchD_005aeb44::caseD_4:
005AEBB4  8B 0D 6C 17 81 00         MOV ECX,dword ptr [0x0081176c]
005AEBBA  33 C0                     XOR EAX,EAX
005AEBBC  BA 02 00 00 00            MOV EDX,0x2
005AEBC1  8A 81 EB 02 00 00         MOV AL,byte ptr [ECX + 0x2eb]
005AEBC7  83 F8 01                  CMP EAX,0x1
005AEBCA  89 45 D0                  MOV dword ptr [EBP + -0x30],EAX
005AEBCD  0F 95 C0                  SETNZ AL
005AEBD0  83 C0 04                  ADD EAX,0x4
005AEBD3  88 86 5F 1A 00 00         MOV byte ptr [ESI + 0x1a5f],AL
switchD_005aeb44::caseD_3:
005AEBD9  BF 02 00 00 00            MOV EDI,0x2
LAB_005aebde:
005AEBDE  3B D3                     CMP EDX,EBX
005AEBE0  0F 84 DC 00 00 00         JZ 0x005aecc2
005AEBE6  8A 45 08                  MOV AL,byte ptr [EBP + 0x8]
005AEBE9  84 C0                     TEST AL,AL
005AEBEB  0F 84 DC 00 00 00         JZ 0x005aeccd
005AEBF1  32 DB                     XOR BL,BL
005AEBF3  85 D2                     TEST EDX,EDX
005AEBF5  7E 70                     JLE 0x005aec67
005AEBF7  33 C9                     XOR ECX,ECX
LAB_005aebf9:
005AEBF9  8D 04 CD 00 00 00 00      LEA EAX,[ECX*0x8 + 0x0]
005AEC00  8D 79 01                  LEA EDI,[ECX + 0x1]
005AEC03  2B C1                     SUB EAX,ECX
005AEC05  C1 E0 04                  SHL EAX,0x4
005AEC08  89 BC 05 AC F8 FF FF      MOV dword ptr [EBP + EAX*0x1 + 0xfffff8ac],EDI
005AEC0F  8B F9                     MOV EDI,ECX
005AEC11  C1 E7 05                  SHL EDI,0x5
005AEC14  2B F9                     SUB EDI,ECX
005AEC16  FE C3                     INC BL
005AEC18  C7 84 05 B0 F8 FF FF 00 00 00 00  MOV dword ptr [EBP + EAX*0x1 + 0xfffff8b0],0x0
005AEC23  88 5D FC                  MOV byte ptr [EBP + -0x4],BL
005AEC26  8D 0C BD 12 01 00 00      LEA ECX,[EDI*0x4 + 0x112]
005AEC2D  89 8C 05 B8 F8 FF FF      MOV dword ptr [EBP + EAX*0x1 + 0xfffff8b8],ECX
005AEC34  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
005AEC37  81 E1 FF 00 00 00         AND ECX,0xff
005AEC3D  C7 84 05 C0 F8 FF FF 7A 00 00 00  MOV dword ptr [EBP + EAX*0x1 + 0xfffff8c0],0x7a
005AEC48  C7 84 05 BC F8 FF FF D4 01 00 00  MOV dword ptr [EBP + EAX*0x1 + 0xfffff8bc],0x1d4
005AEC53  3B CA                     CMP ECX,EDX
005AEC55  C7 84 05 C4 F8 FF FF 18 00 00 00  MOV dword ptr [EBP + EAX*0x1 + 0xfffff8c4],0x18
005AEC60  7C 97                     JL 0x005aebf9
005AEC62  BF 02 00 00 00            MOV EDI,0x2
LAB_005aec67:
005AEC67  8B 46 08                  MOV EAX,dword ptr [ESI + 0x8]
005AEC6A  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
005AEC6D  8D 95 AC F8 FF FF         LEA EDX,[EBP + 0xfffff8ac]
005AEC73  6A 00                     PUSH 0x0
005AEC75  89 55 CC                  MOV dword ptr [EBP + -0x34],EDX
005AEC78  8D 55 84                  LEA EDX,[EBP + -0x7c]
005AEC7B  52                        PUSH EDX
005AEC7C  8D 96 83 1C 00 00         LEA EDX,[ESI + 0x1c83]
005AEC82  C7 45 84 01 00 00 00      MOV dword ptr [EBP + -0x7c],0x1
005AEC89  89 45 94                  MOV dword ptr [EBP + -0x6c],EAX
005AEC8C  89 7D 98                  MOV dword ptr [EBP + -0x68],EDI
005AEC8F  C7 45 9C 26 63 00 00      MOV dword ptr [EBP + -0x64],0x6326
005AEC96  89 45 B4                  MOV dword ptr [EBP + -0x4c],EAX
005AEC99  89 7D B8                  MOV dword ptr [EBP + -0x48],EDI
005AEC9C  C7 45 BC 27 63 00 00      MOV dword ptr [EBP + -0x44],0x6327
005AECA3  8B 01                     MOV EAX,dword ptr [ECX]
005AECA5  6A 00                     PUSH 0x0
005AECA7  52                        PUSH EDX
005AECA8  6A 05                     PUSH 0x5
005AECAA  FF 50 08                  CALL dword ptr [EAX + 0x8]
005AECAD  8B 86 87 1C 00 00         MOV EAX,dword ptr [ESI + 0x1c87]
005AECB3  8B 0D A8 75 80 00         MOV ECX,dword ptr [0x008075a8]
005AECB9  50                        PUSH EAX
005AECBA  51                        PUSH ECX
005AECBB  E8 70 47 10 00            CALL 0x006b3430
005AECC0  33 DB                     XOR EBX,EBX
LAB_005aecc2:
005AECC2  8A 45 08                  MOV AL,byte ptr [EBP + 0x8]
005AECC5  84 C0                     TEST AL,AL
005AECC7  0F 85 77 02 00 00         JNZ 0x005aef44
LAB_005aeccd:
005AECCD  8A 0D 4C 73 80 00         MOV CL,byte ptr [0x0080734c]
005AECD3  8B 46 08                  MOV EAX,dword ptr [ESI + 0x8]
005AECD6  84 C9                     TEST CL,CL
005AECD8  89 9D 6C FA FF FF         MOV dword ptr [EBP + 0xfffffa6c],EBX
005AECDE  C7 85 74 FA FF FF 14 01 00 00  MOV dword ptr [EBP + 0xfffffa74],0x114
005AECE8  C7 85 78 FA FF FF 3F 00 00 00  MOV dword ptr [EBP + 0xfffffa78],0x3f
005AECF2  C7 85 7C FA FF FF E4 01 00 00  MOV dword ptr [EBP + 0xfffffa7c],0x1e4
005AECFC  C7 85 80 FA FF FF 8F 01 00 00  MOV dword ptr [EBP + 0xfffffa80],0x18f
005AED06  89 9D 84 FA FF FF         MOV dword ptr [EBP + 0xfffffa84],EBX
005AED0C  89 9D 88 FA FF FF         MOV dword ptr [EBP + 0xfffffa88],EBX
005AED12  89 85 94 FA FF FF         MOV dword ptr [EBP + 0xfffffa94],EAX
005AED18  89 BD 98 FA FF FF         MOV dword ptr [EBP + 0xfffffa98],EDI
005AED1E  C7 85 9C FA FF FF 60 81 00 00  MOV dword ptr [EBP + 0xfffffa9c],0x8160
005AED28  89 85 B4 FA FF FF         MOV dword ptr [EBP + 0xfffffab4],EAX
005AED2E  89 BD B8 FA FF FF         MOV dword ptr [EBP + 0xfffffab8],EDI
005AED34  C7 85 BC FA FF FF 61 81 00 00  MOV dword ptr [EBP + 0xfffffabc],0x8161
005AED3E  89 85 D4 FA FF FF         MOV dword ptr [EBP + 0xfffffad4],EAX
005AED44  89 BD D8 FA FF FF         MOV dword ptr [EBP + 0xfffffad8],EDI
005AED4A  C7 85 DC FA FF FF 62 81 00 00  MOV dword ptr [EBP + 0xfffffadc],0x8162
005AED54  89 85 F4 FA FF FF         MOV dword ptr [EBP + 0xfffffaf4],EAX
005AED5A  89 BD F8 FA FF FF         MOV dword ptr [EBP + 0xfffffaf8],EDI
005AED60  C7 85 FC FA FF FF 63 81 00 00  MOV dword ptr [EBP + 0xfffffafc],0x8163
005AED6A  74 0A                     JZ 0x005aed76
005AED6C  C7 85 3C FF FF FF 01 00 00 00  MOV dword ptr [EBP + 0xffffff3c],0x1
LAB_005aed76:
005AED76  8B 96 8C 1A 00 00         MOV EDX,dword ptr [ESI + 0x1a8c]
005AED7C  8B 8E 90 1A 00 00         MOV ECX,dword ptr [ESI + 0x1a90]
005AED82  89 9D 9C FB FF FF         MOV dword ptr [EBP + 0xfffffb9c],EBX
005AED88  89 9D 1C FD FF FF         MOV dword ptr [EBP + 0xfffffd1c],EBX
005AED8E  8B 9E 1D 1B 00 00         MOV EBX,dword ptr [ESI + 0x1b1d]
005AED94  89 95 A4 FB FF FF         MOV dword ptr [EBP + 0xfffffba4],EDX
005AED9A  8B 96 94 1A 00 00         MOV EDX,dword ptr [ESI + 0x1a94]
005AEDA0  89 9D 24 FD FF FF         MOV dword ptr [EBP + 0xfffffd24],EBX
005AEDA6  8B 9E 21 1B 00 00         MOV EBX,dword ptr [ESI + 0x1b21]
005AEDAC  89 95 AC FB FF FF         MOV dword ptr [EBP + 0xfffffbac],EDX
005AEDB2  BA F4 01 00 00            MOV EDX,0x1f4
005AEDB7  89 8D A8 FB FF FF         MOV dword ptr [EBP + 0xfffffba8],ECX
005AEDBD  8B 8E 98 1A 00 00         MOV ECX,dword ptr [ESI + 0x1a98]
005AEDC3  89 9D 28 FD FF FF         MOV dword ptr [EBP + 0xfffffd28],EBX
005AEDC9  8B 9E 25 1B 00 00         MOV EBX,dword ptr [ESI + 0x1b25]
005AEDCF  89 95 AC FC FF FF         MOV dword ptr [EBP + 0xfffffcac],EDX
005AEDD5  89 95 2C FE FF FF         MOV dword ptr [EBP + 0xfffffe2c],EDX
005AEDDB  8B 96 AE 1B 00 00         MOV EDX,dword ptr [ESI + 0x1bae]
005AEDE1  89 8D B0 FB FF FF         MOV dword ptr [EBP + 0xfffffbb0],ECX
005AEDE7  89 9D 2C FD FF FF         MOV dword ptr [EBP + 0xfffffd2c],EBX
005AEDED  8B 9E 29 1B 00 00         MOV EBX,dword ptr [ESI + 0x1b29]
005AEDF3  B9 32 00 00 00            MOV ECX,0x32
005AEDF8  89 95 A8 FE FF FF         MOV dword ptr [EBP + 0xfffffea8],EDX
005AEDFE  8B 96 B6 1B 00 00         MOV EDX,dword ptr [ESI + 0x1bb6]
005AEE04  89 8D B0 FC FF FF         MOV dword ptr [EBP + 0xfffffcb0],ECX
005AEE0A  89 9D 30 FD FF FF         MOV dword ptr [EBP + 0xfffffd30],EBX
005AEE10  89 8D 30 FE FF FF         MOV dword ptr [EBP + 0xfffffe30],ECX
005AEE16  8B 8E B2 1B 00 00         MOV ECX,dword ptr [ESI + 0x1bb2]
005AEE1C  33 DB                     XOR EBX,EBX
005AEE1E  89 95 B0 FE FF FF         MOV dword ptr [EBP + 0xfffffeb0],EDX
005AEE24  8D 95 6C FA FF FF         LEA EDX,[EBP + 0xfffffa6c]
005AEE2A  89 8D AC FE FF FF         MOV dword ptr [EBP + 0xfffffeac],ECX
005AEE30  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
005AEE33  53                        PUSH EBX
005AEE34  52                        PUSH EDX
005AEE35  8D 96 6C 1A 00 00         LEA EDX,[ESI + 0x1a6c]
005AEE3B  89 BD 98 FB FF FF         MOV dword ptr [EBP + 0xfffffb98],EDI
005AEE41  89 BD A0 FB FF FF         MOV dword ptr [EBP + 0xfffffba0],EDI
005AEE47  89 85 FC FB FF FF         MOV dword ptr [EBP + 0xfffffbfc],EAX
005AEE4D  89 BD 00 FC FF FF         MOV dword ptr [EBP + 0xfffffc00],EDI
005AEE53  C7 85 04 FC FF FF 64 81 00 00  MOV dword ptr [EBP + 0xfffffc04],0x8164
005AEE5D  89 BD 18 FD FF FF         MOV dword ptr [EBP + 0xfffffd18],EDI
005AEE63  89 BD 20 FD FF FF         MOV dword ptr [EBP + 0xfffffd20],EDI
005AEE69  89 85 7C FD FF FF         MOV dword ptr [EBP + 0xfffffd7c],EAX
005AEE6F  89 BD 80 FD FF FF         MOV dword ptr [EBP + 0xfffffd80],EDI
005AEE75  C7 85 84 FD FF FF 65 81 00 00  MOV dword ptr [EBP + 0xfffffd84],0x8165
005AEE7F  C7 85 98 FE FF FF 03 00 00 00  MOV dword ptr [EBP + 0xfffffe98],0x3
005AEE89  C7 85 9C FE FF FF 01 00 00 00  MOV dword ptr [EBP + 0xfffffe9c],0x1
005AEE93  89 9D A4 FE FF FF         MOV dword ptr [EBP + 0xfffffea4],EBX
005AEE99  C7 85 B4 FE FF FF 57 01 00 00  MOV dword ptr [EBP + 0xfffffeb4],0x157
005AEEA3  C7 85 B8 FE FF FF 0E 00 00 00  MOV dword ptr [EBP + 0xfffffeb8],0xe
005AEEAD  89 85 EC FE FF FF         MOV dword ptr [EBP + 0xfffffeec],EAX
005AEEB3  89 BD F0 FE FF FF         MOV dword ptr [EBP + 0xfffffef0],EDI
005AEEB9  C7 85 F4 FE FF FF 66 81 00 00  MOV dword ptr [EBP + 0xfffffef4],0x8166
005AEEC3  8B 01                     MOV EAX,dword ptr [ECX]
005AEEC5  53                        PUSH EBX
005AEEC6  52                        PUSH EDX
005AEEC7  6A 07                     PUSH 0x7
005AEEC9  FF 50 08                  CALL dword ptr [EAX + 0x8]
005AEECC  8B 86 74 1A 00 00         MOV EAX,dword ptr [ESI + 0x1a74]
005AEED2  83 F8 FF                  CMP EAX,-0x1
005AEED5  74 1D                     JZ 0x005aeef4
005AEED7  8B 8E 90 1A 00 00         MOV ECX,dword ptr [ESI + 0x1a90]
005AEEDD  8B 96 8C 1A 00 00         MOV EDX,dword ptr [ESI + 0x1a8c]
005AEEE3  51                        PUSH ECX
005AEEE4  52                        PUSH EDX
005AEEE5  6A FE                     PUSH -0x2
005AEEE7  50                        PUSH EAX
005AEEE8  8B 86 B8 1A 00 00         MOV EAX,dword ptr [ESI + 0x1ab8]
005AEEEE  50                        PUSH EAX
005AEEEF  E8 DC 45 10 00            CALL 0x006b34d0
LAB_005aeef4:
005AEEF4  8B 86 05 1B 00 00         MOV EAX,dword ptr [ESI + 0x1b05]
005AEEFA  83 F8 FF                  CMP EAX,-0x1
005AEEFD  74 1D                     JZ 0x005aef1c
005AEEFF  8B 8E 21 1B 00 00         MOV ECX,dword ptr [ESI + 0x1b21]
005AEF05  8B 96 1D 1B 00 00         MOV EDX,dword ptr [ESI + 0x1b1d]
005AEF0B  51                        PUSH ECX
005AEF0C  52                        PUSH EDX
005AEF0D  6A FE                     PUSH -0x2
005AEF0F  50                        PUSH EAX
005AEF10  8B 86 49 1B 00 00         MOV EAX,dword ptr [ESI + 0x1b49]
005AEF16  50                        PUSH EAX
005AEF17  E8 B4 45 10 00            CALL 0x006b34d0
LAB_005aef1c:
005AEF1C  8B 86 96 1B 00 00         MOV EAX,dword ptr [ESI + 0x1b96]
005AEF22  83 F8 FF                  CMP EAX,-0x1
005AEF25  74 1D                     JZ 0x005aef44
005AEF27  8B 8E B2 1B 00 00         MOV ECX,dword ptr [ESI + 0x1bb2]
005AEF2D  8B 96 AE 1B 00 00         MOV EDX,dword ptr [ESI + 0x1bae]
005AEF33  51                        PUSH ECX
005AEF34  52                        PUSH EDX
005AEF35  6A FE                     PUSH -0x2
005AEF37  50                        PUSH EAX
005AEF38  8B 86 DA 1B 00 00         MOV EAX,dword ptr [ESI + 0x1bda]
005AEF3E  50                        PUSH EAX
005AEF3F  E8 8C 45 10 00            CALL 0x006b34d0
LAB_005aef44:
005AEF44  8A 86 B4 20 00 00         MOV AL,byte ptr [ESI + 0x20b4]
005AEF4A  84 C0                     TEST AL,AL
005AEF4C  74 14                     JZ 0x005aef62
005AEF4E  8A 45 08                  MOV AL,byte ptr [EBP + 0x8]
005AEF51  84 C0                     TEST AL,AL
005AEF53  75 0D                     JNZ 0x005aef62
005AEF55  8B 0D 6C 17 81 00         MOV ECX,dword ptr [0x0081176c]
005AEF5B  E8 EA 3A E5 FF            CALL 0x00402a4a
005AEF60  EB 30                     JMP 0x005aef92
LAB_005aef62:
005AEF62  8B 0D 6C 17 81 00         MOV ECX,dword ptr [0x0081176c]
005AEF68  39 99 89 03 00 00         CMP dword ptr [ECX + 0x389],EBX
005AEF6E  74 22                     JZ 0x005aef92
005AEF70  C7 46 2D 20 00 00 00      MOV dword ptr [ESI + 0x2d],0x20
005AEF77  89 5E 31                  MOV dword ptr [ESI + 0x31],EBX
005AEF7A  A1 6C 17 81 00            MOV EAX,[0x0081176c]
005AEF7F  8D 56 1D                  LEA EDX,[ESI + 0x1d]
005AEF82  52                        PUSH EDX
005AEF83  8B 88 89 03 00 00         MOV ECX,dword ptr [EAX + 0x389]
005AEF89  51                        PUSH ECX
005AEF8A  57                        PUSH EDI
005AEF8B  8B CE                     MOV ECX,ESI
005AEF8D  E8 EE 70 13 00            CALL 0x006e6080
LAB_005aef92:
005AEF92  8A 86 B7 20 00 00         MOV AL,byte ptr [ESI + 0x20b7]
005AEF98  84 C0                     TEST AL,AL
005AEF9A  0F 84 05 01 00 00         JZ 0x005af0a5
005AEFA0  8A 45 08                  MOV AL,byte ptr [EBP + 0x8]
005AEFA3  84 C0                     TEST AL,AL
005AEFA5  0F 85 FA 00 00 00         JNZ 0x005af0a5
005AEFAB  8B 0D 6C 17 81 00         MOV ECX,dword ptr [0x0081176c]
005AEFB1  E8 FF 38 E5 FF            CALL 0x004028b5
005AEFB6  B9 23 02 00 00            MOV ECX,0x223
005AEFBB  33 C0                     XOR EAX,EAX
005AEFBD  8D BD 20 F0 FF FF         LEA EDI,[EBP + 0xfffff020]
005AEFC3  8D 9D 20 F0 FF FF         LEA EBX,[EBP + 0xfffff020]
005AEFC9  F3 AB                     STOSD.REP ES:EDI
005AEFCB  A1 6C 17 81 00            MOV EAX,[0x0081176c]
005AEFD0  C7 85 20 F0 FF FF 01 00 00 00  MOV dword ptr [EBP + 0xfffff020],0x1
005AEFDA  C7 85 24 F0 FF FF 09 00 00 00  MOV dword ptr [EBP + 0xfffff024],0x9
005AEFE4  8B 50 34                  MOV EDX,dword ptr [EAX + 0x34]
005AEFE7  C7 85 2C F0 FF FF CB 00 00 00  MOV dword ptr [EBP + 0xfffff02c],0xcb
005AEFF1  89 95 28 F0 FF FF         MOV dword ptr [EBP + 0xfffff028],EDX
005AEFF7  C7 85 30 F0 FF FF 3F 02 00 00  MOV dword ptr [EBP + 0xfffff030],0x23f
005AF001  8B 88 82 06 00 00         MOV ECX,dword ptr [EAX + 0x682]
005AF007  05 4C 05 00 00            ADD EAX,0x54c
005AF00C  8B 51 04                  MOV EDX,dword ptr [ECX + 0x4]
005AF00F  89 95 34 F0 FF FF         MOV dword ptr [EBP + 0xfffff034],EDX
005AF015  8B 88 36 01 00 00         MOV ECX,dword ptr [EAX + 0x136]
005AF01B  8B 51 08                  MOV EDX,dword ptr [ECX + 0x8]
005AF01E  C7 85 3C F0 FF FF 04 01 00 00  MOV dword ptr [EBP + 0xfffff03c],0x104
005AF028  89 95 38 F0 FF FF         MOV dword ptr [EBP + 0xfffff038],EDX
005AF02E  8B 88 3A 01 00 00         MOV ECX,dword ptr [EAX + 0x13a]
005AF034  89 8D 40 F0 FF FF         MOV dword ptr [EBP + 0xfffff040],ECX
005AF03A  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
005AF03D  C7 85 84 F8 FF FF 00 01 00 00  MOV dword ptr [EBP + 0xfffff884],0x100
005AF047  8B 51 14                  MOV EDX,dword ptr [ECX + 0x14]
005AF04A  C7 85 74 F0 FF FF A0 C0 00 00  MOV dword ptr [EBP + 0xfffff074],0xc0a0
005AF054  89 95 6C F0 FF FF         MOV dword ptr [EBP + 0xfffff06c],EDX
005AF05A  33 D2                     XOR EDX,EDX
005AF05C  89 95 70 F0 FF FF         MOV dword ptr [EBP + 0xfffff070],EDX
005AF062  8B 79 14                  MOV EDI,dword ptr [ECX + 0x14]
005AF065  52                        PUSH EDX
005AF066  53                        PUSH EBX
005AF067  89 BD AC F0 FF FF         MOV dword ptr [EBP + 0xfffff0ac],EDI
005AF06D  89 95 B0 F0 FF FF         MOV dword ptr [EBP + 0xfffff0b0],EDX
005AF073  C7 85 B4 F0 FF FF A2 C0 00 00  MOV dword ptr [EBP + 0xfffff0b4],0xc0a2
005AF07D  8B 39                     MOV EDI,dword ptr [ECX]
005AF07F  52                        PUSH EDX
005AF080  50                        PUSH EAX
005AF081  6A 06                     PUSH 0x6
005AF083  FF 57 08                  CALL dword ptr [EDI + 0x8]
005AF086  A1 6C 17 81 00            MOV EAX,[0x0081176c]
005AF08B  8B 15 A8 75 80 00         MOV EDX,dword ptr [0x008075a8]
005AF091  8B 88 54 05 00 00         MOV ECX,dword ptr [EAX + 0x554]
005AF097  51                        PUSH ECX
005AF098  52                        PUSH EDX
005AF099  E8 92 43 10 00            CALL 0x006b3430
005AF09E  BF 02 00 00 00            MOV EDI,0x2
005AF0A3  33 DB                     XOR EBX,EBX
LAB_005af0a5:
005AF0A5  8B 96 5B 1A 00 00         MOV EDX,dword ptr [ESI + 0x1a5b]
005AF0AB  39 9A E6 02 00 00         CMP dword ptr [EDX + 0x2e6],EBX
005AF0B1  74 35                     JZ 0x005af0e8
005AF0B3  B9 06 00 00 00            MOV ECX,0x6
005AF0B8  33 C0                     XOR EAX,EAX
005AF0BA  8D 7D DC                  LEA EDI,[EBP + -0x24]
005AF0BD  F3 AB                     STOSD.REP ES:EDI
005AF0BF  66 AB                     STOSW ES:EDI
005AF0C1  B8 01 00 00 00            MOV EAX,0x1
005AF0C6  66 89 45 E8               MOV word ptr [EBP + -0x18],AX
005AF0CA  66 89 45 E6               MOV word ptr [EBP + -0x1a],AX
005AF0CE  66 89 45 E0               MOV word ptr [EBP + -0x20],AX
005AF0D2  8B 8A E6 02 00 00         MOV ECX,dword ptr [EDX + 0x2e6]
005AF0D8  8D 45 DC                  LEA EAX,[EBP + -0x24]
005AF0DB  50                        PUSH EAX
005AF0DC  E8 70 5A E5 FF            CALL 0x00404b51
005AF0E1  BF 02 00 00 00            MOV EDI,0x2
005AF0E6  33 DB                     XOR EBX,EBX
LAB_005af0e8:
005AF0E8  8A 45 08                  MOV AL,byte ptr [EBP + 0x8]
005AF0EB  84 C0                     TEST AL,AL
005AF0ED  74 1D                     JZ 0x005af10c
005AF0EF  53                        PUSH EBX
005AF0F0  8B 4E 08                  MOV ECX,dword ptr [ESI + 0x8]
005AF0F3  53                        PUSH EBX
005AF0F4  53                        PUSH EBX
005AF0F5  53                        PUSH EBX
005AF0F6  53                        PUSH EBX
005AF0F7  53                        PUSH EBX
005AF0F8  6A 1C                     PUSH 0x1c
005AF0FA  57                        PUSH EDI
005AF0FB  68 A1 C0 00 00            PUSH 0xc0a1
005AF100  57                        PUSH EDI
005AF101  51                        PUSH ECX
005AF102  6A 01                     PUSH 0x1
005AF104  E8 B6 3C E5 FF            CALL 0x00402dbf
005AF109  83 C4 30                  ADD ESP,0x30
LAB_005af10c:
005AF10C  8B 95 40 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff40]
005AF112  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
005AF118  5F                        POP EDI
005AF119  5E                        POP ESI
005AF11A  5B                        POP EBX
005AF11B  8B E5                     MOV ESP,EBP
005AF11D  5D                        POP EBP
005AF11E  C2 04 00                  RET 0x4
LAB_005af121:
005AF121  8B 85 40 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff40]
005AF127  68 58 C8 7C 00            PUSH 0x7cc858
005AF12C  68 CC 4C 7A 00            PUSH 0x7a4ccc
005AF131  56                        PUSH ESI
005AF132  53                        PUSH EBX
005AF133  68 9F 03 00 00            PUSH 0x39f
005AF138  68 28 C7 7C 00            PUSH 0x7cc728
005AF13D  A3 F8 8D 85 00            MOV [0x00858df8],EAX
005AF142  E8 89 E3 0F 00            CALL 0x006ad4d0
005AF147  83 C4 18                  ADD ESP,0x18
005AF14A  85 C0                     TEST EAX,EAX
005AF14C  74 01                     JZ 0x005af14f
005AF14E  CC                        INT3
LAB_005af14f:
005AF14F  68 9F 03 00 00            PUSH 0x39f
005AF154  68 28 C7 7C 00            PUSH 0x7cc728
005AF159  53                        PUSH EBX
005AF15A  56                        PUSH ESI
005AF15B  E8 E0 6C 0F 00            CALL 0x006a5e40
005AF160  5F                        POP EDI
005AF161  5E                        POP ESI
005AF162  5B                        POP EBX
005AF163  8B E5                     MOV ESP,EBP
005AF165  5D                        POP EBP
005AF166  C2 04 00                  RET 0x4
