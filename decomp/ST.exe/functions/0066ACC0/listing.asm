FUN_0066acc0:
0066ACC0  55                        PUSH EBP
0066ACC1  8B EC                     MOV EBP,ESP
0066ACC3  81 EC 24 06 00 00         SUB ESP,0x624
0066ACC9  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0066ACCE  53                        PUSH EBX
0066ACCF  56                        PUSH ESI
0066ACD0  89 4D A0                  MOV dword ptr [EBP + -0x60],ECX
0066ACD3  57                        PUSH EDI
0066ACD4  8D 95 A8 FD FF FF         LEA EDX,[EBP + 0xfffffda8]
0066ACDA  8D 8D A4 FD FF FF         LEA ECX,[EBP + 0xfffffda4]
0066ACE0  6A 00                     PUSH 0x0
0066ACE2  52                        PUSH EDX
0066ACE3  C7 45 F0 00 00 00 00      MOV dword ptr [EBP + -0x10],0x0
0066ACEA  89 85 A4 FD FF FF         MOV dword ptr [EBP + 0xfffffda4],EAX
0066ACF0  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0066ACF6  E8 F5 2A 0C 00            CALL 0x0072d7f0
0066ACFB  8B F0                     MOV ESI,EAX
0066ACFD  83 C4 08                  ADD ESP,0x8
0066AD00  85 F6                     TEST ESI,ESI
0066AD02  0F 85 9E 57 00 00         JNZ 0x006704a6
0066AD08  8B 5D A0                  MOV EBX,dword ptr [EBP + -0x60]
0066AD0B  6A 7F                     PUSH 0x7f
0066AD0D  68 A0 16 80 00            PUSH 0x8016a0
0066AD12  8D 43 04                  LEA EAX,[EBX + 0x4]
0066AD15  50                        PUSH EAX
0066AD16  E8 25 36 0C 00            CALL 0x0072e340
0066AD1B  C7 83 84 00 00 00 FF FF FF FF  MOV dword ptr [EBX + 0x84],0xffffffff
0066AD25  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
0066AD28  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
0066AD2B  83 C4 0C                  ADD ESP,0xc
0066AD2E  8A 0E                     MOV CL,byte ptr [ESI]
0066AD30  33 C0                     XOR EAX,EAX
0066AD32  80 F9 07                  CMP CL,0x7
0066AD35  74 12                     JZ 0x0066ad49
0066AD37  8B CE                     MOV ECX,ESI
LAB_0066ad39:
0066AD39  3B C7                     CMP EAX,EDI
0066AD3B  7D 0E                     JGE 0x0066ad4b
0066AD3D  8A 51 05                  MOV DL,byte ptr [ECX + 0x5]
0066AD40  83 C1 05                  ADD ECX,0x5
0066AD43  40                        INC EAX
0066AD44  80 FA 07                  CMP DL,0x7
0066AD47  75 F0                     JNZ 0x0066ad39
LAB_0066ad49:
0066AD49  3B C7                     CMP EAX,EDI
LAB_0066ad4b:
0066AD4B  74 18                     JZ 0x0066ad65
0066AD4D  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
0066AD53  68 52 01 00 00            PUSH 0x152
0066AD58  68 F4 2C 7D 00            PUSH 0x7d2cf4
0066AD5D  51                        PUSH ECX
0066AD5E  6A 95                     PUSH -0x6b
0066AD60  E8 DB B0 03 00            CALL 0x006a5e40
LAB_0066ad65:
0066AD65  8D 14 BE                  LEA EDX,[ESI + EDI*0x4]
0066AD68  0F BF 44 17 01            MOVSX EAX,word ptr [EDI + EDX*0x1 + 0x1]
0066AD6D  3D F6 07 00 00            CMP EAX,0x7f6
0066AD72  0F 8F CE 26 00 00         JG 0x0066d446
0066AD78  0F 84 79 24 00 00         JZ 0x0066d1f7
0066AD7E  3D E6 07 00 00            CMP EAX,0x7e6
0066AD83  0F 8F 5C 10 00 00         JG 0x0066bde5
0066AD89  0F 84 D8 0D 00 00         JZ 0x0066bb67
0066AD8F  3D D6 07 00 00            CMP EAX,0x7d6
0066AD94  0F 8F EC 08 00 00         JG 0x0066b686
0066AD9A  0F 84 D6 07 00 00         JZ 0x0066b576
0066ADA0  3D D2 07 00 00            CMP EAX,0x7d2
0066ADA5  0F 8F 48 05 00 00         JG 0x0066b2f3
0066ADAB  0F 84 65 04 00 00         JZ 0x0066b216
0066ADB1  3D D0 07 00 00            CMP EAX,0x7d0
0066ADB6  0F 8F 5B 02 00 00         JG 0x0066b017
0066ADBC  0F 84 9F 00 00 00         JZ 0x0066ae61
0066ADC2  3D 20 03 00 00            CMP EAX,0x320
0066ADC7  0F 8C 89 56 00 00         JL 0x00670456
0066ADCD  3D 21 03 00 00            CMP EAX,0x321
0066ADD2  0F 8F 7E 56 00 00         JG 0x00670456
0066ADD8  33 C0                     XOR EAX,EAX
0066ADDA  3B F8                     CMP EDI,EAX
0066ADDC  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0066ADDF  7E 65                     JLE 0x0066ae46
0066ADE1  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
LAB_0066ade4:
0066ADE4  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0066ADE7  8A 04 30                  MOV AL,byte ptr [EAX + ESI*0x1]
0066ADEA  3C 04                     CMP AL,0x4
0066ADEC  74 44                     JZ 0x0066ae32
0066ADEE  3C 01                     CMP AL,0x1
0066ADF0  74 40                     JZ 0x0066ae32
0066ADF2  8D 0C BE                  LEA ECX,[ESI + EDI*0x4]
0066ADF5  0F BF 54 0F 01            MOVSX EDX,word ptr [EDI + ECX*0x1 + 0x1]
0066ADFA  52                        PUSH EDX
0066ADFB  E8 DB A9 D9 FF            CALL 0x004057db
0066AE00  85 C0                     TEST EAX,EAX
0066AE02  74 0F                     JZ 0x0066ae13
0066AE04  6A 7F                     PUSH 0x7f
0066AE06  50                        PUSH EAX
0066AE07  8D 43 04                  LEA EAX,[EBX + 0x4]
0066AE0A  50                        PUSH EAX
0066AE0B  E8 30 35 0C 00            CALL 0x0072e340
0066AE10  83 C4 0C                  ADD ESP,0xc
LAB_0066ae13:
0066AE13  C7 83 84 00 00 00 FF FF FF FF  MOV dword ptr [EBX + 0x84],0xffffffff
0066AE1D  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
0066AE23  6A 79                     PUSH 0x79
0066AE25  68 24 2A 7D 00            PUSH 0x7d2a24
0066AE2A  51                        PUSH ECX
0066AE2B  6A 88                     PUSH -0x78
0066AE2D  E8 0E B0 03 00            CALL 0x006a5e40
LAB_0066ae32:
0066AE32  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0066AE35  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
0066AE38  40                        INC EAX
0066AE39  83 C2 05                  ADD EDX,0x5
0066AE3C  3B C7                     CMP EAX,EDI
0066AE3E  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0066AE41  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
0066AE44  7C 9E                     JL 0x0066ade4
LAB_0066ae46:
0066AE46  6A 04                     PUSH 0x4
0066AE48  E8 C3 FD 03 00            CALL 0x006aac10
0066AE4D  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
0066AE50  8B 13                     MOV EDX,dword ptr [EBX]
0066AE52  56                        PUSH ESI
0066AE53  8B CB                     MOV ECX,EBX
0066AE55  FF 12                     CALL dword ptr [EDX]
0066AE57  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
0066AE5A  89 01                     MOV dword ptr [ECX],EAX
0066AE5C  E9 D0 55 00 00            JMP 0x00670431
LAB_0066ae61:
0066AE61  33 C0                     XOR EAX,EAX
0066AE63  3B F8                     CMP EDI,EAX
0066AE65  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0066AE68  7E 64                     JLE 0x0066aece
0066AE6A  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
LAB_0066ae6d:
0066AE6D  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
0066AE70  8A 04 32                  MOV AL,byte ptr [EDX + ESI*0x1]
0066AE73  3C 04                     CMP AL,0x4
0066AE75  74 43                     JZ 0x0066aeba
0066AE77  3C 01                     CMP AL,0x1
0066AE79  74 3F                     JZ 0x0066aeba
0066AE7B  8D 04 BE                  LEA EAX,[ESI + EDI*0x4]
0066AE7E  0F BF 4C 07 01            MOVSX ECX,word ptr [EDI + EAX*0x1 + 0x1]
0066AE83  51                        PUSH ECX
0066AE84  E8 52 A9 D9 FF            CALL 0x004057db
0066AE89  85 C0                     TEST EAX,EAX
0066AE8B  74 0F                     JZ 0x0066ae9c
0066AE8D  6A 7F                     PUSH 0x7f
0066AE8F  8D 53 04                  LEA EDX,[EBX + 0x4]
0066AE92  50                        PUSH EAX
0066AE93  52                        PUSH EDX
0066AE94  E8 A7 34 0C 00            CALL 0x0072e340
0066AE99  83 C4 0C                  ADD ESP,0xc
LAB_0066ae9c:
0066AE9C  C7 83 84 00 00 00 FF FF FF FF  MOV dword ptr [EBX + 0x84],0xffffffff
0066AEA6  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
0066AEAB  6A 79                     PUSH 0x79
0066AEAD  68 24 2A 7D 00            PUSH 0x7d2a24
0066AEB2  50                        PUSH EAX
0066AEB3  6A 88                     PUSH -0x78
0066AEB5  E8 86 AF 03 00            CALL 0x006a5e40
LAB_0066aeba:
0066AEBA  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0066AEBD  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
0066AEC0  40                        INC EAX
0066AEC1  83 C2 05                  ADD EDX,0x5
0066AEC4  3B C7                     CMP EAX,EDI
0066AEC6  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0066AEC9  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
0066AECC  7C 9F                     JL 0x0066ae6d
LAB_0066aece:
0066AECE  8B 13                     MOV EDX,dword ptr [EBX]
0066AED0  56                        PUSH ESI
0066AED1  8B CB                     MOV ECX,EBX
0066AED3  FF 12                     CALL dword ptr [EDX]
0066AED5  8D 4E 05                  LEA ECX,[ESI + 0x5]
0066AED8  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0066AEDB  8B 03                     MOV EAX,dword ptr [EBX]
0066AEDD  51                        PUSH ECX
0066AEDE  8B CB                     MOV ECX,EBX
0066AEE0  FF 10                     CALL dword ptr [EAX]
0066AEE2  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
0066AEE5  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0066AEE8  83 F8 09                  CMP EAX,0x9
0066AEEB  C7 45 F8 00 00 00 00      MOV dword ptr [EBP + -0x8],0x0
0066AEF2  75 33                     JNZ 0x0066af27
0066AEF4  8B 13                     MOV EDX,dword ptr [EBX]
0066AEF6  8B CB                     MOV ECX,EBX
0066AEF8  FF 52 18                  CALL dword ptr [EDX + 0x18]
0066AEFB  83 F8 08                  CMP EAX,0x8
0066AEFE  75 27                     JNZ 0x0066af27
0066AF00  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
0066AF03  8B 03                     MOV EAX,dword ptr [EBX]
0066AF05  51                        PUSH ECX
0066AF06  8B CB                     MOV ECX,EBX
0066AF08  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
0066AF0B  F7 D8                     NEG EAX
0066AF0D  1B C0                     SBB EAX,EAX
0066AF0F  6A 04                     PUSH 0x4
0066AF11  40                        INC EAX
0066AF12  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0066AF15  E8 F6 FC 03 00            CALL 0x006aac10
0066AF1A  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0066AF1D  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
0066AF20  89 08                     MOV dword ptr [EAX],ECX
0066AF22  E9 0A 55 00 00            JMP 0x00670431
LAB_0066af27:
0066AF27  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0066AF2A  8D 55 B4                  LEA EDX,[EBP + -0x4c]
0066AF2D  52                        PUSH EDX
0066AF2E  6A 00                     PUSH 0x0
0066AF30  50                        PUSH EAX
0066AF31  8B CB                     MOV ECX,EBX
0066AF33  E8 80 67 D9 FF            CALL 0x004016b8
0066AF38  83 F8 01                  CMP EAX,0x1
0066AF3B  0F 85 83 00 00 00         JNZ 0x0066afc4
0066AF41  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0066AF47  85 C9                     TEST ECX,ECX
0066AF49  74 0B                     JZ 0x0066af56
0066AF4B  8B 55 B4                  MOV EDX,dword ptr [EBP + -0x4c]
0066AF4E  52                        PUSH EDX
0066AF4F  E8 71 6E D9 FF            CALL 0x00401dc5
0066AF54  EB 02                     JMP 0x0066af58
LAB_0066af56:
0066AF56  33 C0                     XOR EAX,EAX
LAB_0066af58:
0066AF58  85 C0                     TEST EAX,EAX
0066AF5A  74 28                     JZ 0x0066af84
0066AF5C  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
0066AF5F  8D 48 1C                  LEA ECX,[EAX + 0x1c]
0066AF62  52                        PUSH EDX
0066AF63  8B 01                     MOV EAX,dword ptr [ECX]
0066AF65  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
0066AF68  F7 D8                     NEG EAX
0066AF6A  1B C0                     SBB EAX,EAX
0066AF6C  6A 04                     PUSH 0x4
0066AF6E  40                        INC EAX
0066AF6F  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0066AF72  E8 99 FC 03 00            CALL 0x006aac10
0066AF77  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0066AF7A  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
0066AF7D  89 08                     MOV dword ptr [EAX],ECX
0066AF7F  E9 AD 54 00 00            JMP 0x00670431
LAB_0066af84:
0066AF84  8B 45 B4                  MOV EAX,dword ptr [EBP + -0x4c]
0066AF87  8D 0C BE                  LEA ECX,[ESI + EDI*0x4]
0066AF8A  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0066AF8D  0F BF 54 0F 01            MOVSX EDX,word ptr [EDI + ECX*0x1 + 0x1]
0066AF92  52                        PUSH EDX
0066AF93  E8 43 A8 D9 FF            CALL 0x004057db
0066AF98  85 C0                     TEST EAX,EAX
0066AF9A  74 0F                     JZ 0x0066afab
0066AF9C  6A 7F                     PUSH 0x7f
0066AF9E  50                        PUSH EAX
0066AF9F  8D 43 04                  LEA EAX,[EBX + 0x4]
0066AFA2  50                        PUSH EAX
0066AFA3  E8 98 33 0C 00            CALL 0x0072e340
0066AFA8  83 C4 0C                  ADD ESP,0xc
LAB_0066afab:
0066AFAB  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0066AFAE  6A 79                     PUSH 0x79
0066AFB0  89 8B 84 00 00 00         MOV dword ptr [EBX + 0x84],ECX
0066AFB6  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
0066AFBC  68 24 2A 7D 00            PUSH 0x7d2a24
0066AFC1  52                        PUSH EDX
0066AFC2  EB 38                     JMP 0x0066affc
LAB_0066afc4:
0066AFC4  8D 04 BE                  LEA EAX,[ESI + EDI*0x4]
0066AFC7  0F BF 4C 07 01            MOVSX ECX,word ptr [EDI + EAX*0x1 + 0x1]
0066AFCC  51                        PUSH ECX
0066AFCD  E8 09 A8 D9 FF            CALL 0x004057db
0066AFD2  85 C0                     TEST EAX,EAX
0066AFD4  74 0F                     JZ 0x0066afe5
0066AFD6  6A 7F                     PUSH 0x7f
0066AFD8  8D 53 04                  LEA EDX,[EBX + 0x4]
0066AFDB  50                        PUSH EAX
0066AFDC  52                        PUSH EDX
0066AFDD  E8 5E 33 0C 00            CALL 0x0072e340
0066AFE2  83 C4 0C                  ADD ESP,0xc
LAB_0066afe5:
0066AFE5  C7 83 84 00 00 00 FF FF FF FF  MOV dword ptr [EBX + 0x84],0xffffffff
0066AFEF  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
0066AFF4  6A 79                     PUSH 0x79
0066AFF6  68 24 2A 7D 00            PUSH 0x7d2a24
0066AFFB  50                        PUSH EAX
LAB_0066affc:
0066AFFC  6A 88                     PUSH -0x78
0066AFFE  E8 3D AE 03 00            CALL 0x006a5e40
0066B003  6A 04                     PUSH 0x4
0066B005  E8 06 FC 03 00            CALL 0x006aac10
0066B00A  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0066B00D  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
0066B010  89 08                     MOV dword ptr [EAX],ECX
0066B012  E9 1A 54 00 00            JMP 0x00670431
LAB_0066b017:
0066B017  3D D1 07 00 00            CMP EAX,0x7d1
0066B01C  0F 85 34 54 00 00         JNZ 0x00670456
0066B022  33 C0                     XOR EAX,EAX
0066B024  3B F8                     CMP EDI,EAX
0066B026  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0066B029  7E 64                     JLE 0x0066b08f
0066B02B  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
LAB_0066b02e:
0066B02E  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
0066B031  8A 04 32                  MOV AL,byte ptr [EDX + ESI*0x1]
0066B034  3C 04                     CMP AL,0x4
0066B036  74 43                     JZ 0x0066b07b
0066B038  3C 01                     CMP AL,0x1
0066B03A  74 3F                     JZ 0x0066b07b
0066B03C  8D 04 BE                  LEA EAX,[ESI + EDI*0x4]
0066B03F  0F BF 4C 07 01            MOVSX ECX,word ptr [EDI + EAX*0x1 + 0x1]
0066B044  51                        PUSH ECX
0066B045  E8 91 A7 D9 FF            CALL 0x004057db
0066B04A  85 C0                     TEST EAX,EAX
0066B04C  74 0F                     JZ 0x0066b05d
0066B04E  6A 7F                     PUSH 0x7f
0066B050  8D 53 04                  LEA EDX,[EBX + 0x4]
0066B053  50                        PUSH EAX
0066B054  52                        PUSH EDX
0066B055  E8 E6 32 0C 00            CALL 0x0072e340
0066B05A  83 C4 0C                  ADD ESP,0xc
LAB_0066b05d:
0066B05D  C7 83 84 00 00 00 FF FF FF FF  MOV dword ptr [EBX + 0x84],0xffffffff
0066B067  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
0066B06C  6A 79                     PUSH 0x79
0066B06E  68 24 2A 7D 00            PUSH 0x7d2a24
0066B073  50                        PUSH EAX
0066B074  6A 88                     PUSH -0x78
0066B076  E8 C5 AD 03 00            CALL 0x006a5e40
LAB_0066b07b:
0066B07B  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0066B07E  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
0066B081  40                        INC EAX
0066B082  83 C2 05                  ADD EDX,0x5
0066B085  3B C7                     CMP EAX,EDI
0066B087  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0066B08A  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
0066B08D  7C 9F                     JL 0x0066b02e
LAB_0066b08f:
0066B08F  8B 13                     MOV EDX,dword ptr [EBX]
0066B091  56                        PUSH ESI
0066B092  8B CB                     MOV ECX,EBX
0066B094  FF 12                     CALL dword ptr [EDX]
0066B096  8D 4E 05                  LEA ECX,[ESI + 0x5]
0066B099  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0066B09C  8B 03                     MOV EAX,dword ptr [EBX]
0066B09E  51                        PUSH ECX
0066B09F  8B CB                     MOV ECX,EBX
0066B0A1  FF 10                     CALL dword ptr [EAX]
0066B0A3  85 C0                     TEST EAX,EAX
0066B0A5  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
0066B0A8  7C 07                     JL 0x0066b0b1
0066B0AA  3D 00 01 00 00            CMP EAX,0x100
0066B0AF  7C 40                     JL 0x0066b0f1
LAB_0066b0b1:
0066B0B1  8D 14 BE                  LEA EDX,[ESI + EDI*0x4]
0066B0B4  0F BF 44 17 01            MOVSX EAX,word ptr [EDI + EDX*0x1 + 0x1]
0066B0B9  50                        PUSH EAX
0066B0BA  E8 1C A7 D9 FF            CALL 0x004057db
0066B0BF  85 C0                     TEST EAX,EAX
0066B0C1  74 0F                     JZ 0x0066b0d2
0066B0C3  6A 7F                     PUSH 0x7f
0066B0C5  8D 4B 04                  LEA ECX,[EBX + 0x4]
0066B0C8  50                        PUSH EAX
0066B0C9  51                        PUSH ECX
0066B0CA  E8 71 32 0C 00            CALL 0x0072e340
0066B0CF  83 C4 0C                  ADD ESP,0xc
LAB_0066b0d2:
0066B0D2  C7 83 84 00 00 00 FF FF FF FF  MOV dword ptr [EBX + 0x84],0xffffffff
0066B0DC  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
0066B0E2  6A 79                     PUSH 0x79
0066B0E4  68 24 2A 7D 00            PUSH 0x7d2a24
0066B0E9  52                        PUSH EDX
0066B0EA  6A 88                     PUSH -0x78
0066B0EC  E8 4F AD 03 00            CALL 0x006a5e40
LAB_0066b0f1:
0066B0F1  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0066B0F4  C7 45 F8 00 00 00 00      MOV dword ptr [EBP + -0x8],0x0
0066B0FB  83 F8 09                  CMP EAX,0x9
0066B0FE  75 2E                     JNZ 0x0066b12e
0066B100  8B 03                     MOV EAX,dword ptr [EBX]
0066B102  8B CB                     MOV ECX,EBX
0066B104  FF 50 18                  CALL dword ptr [EAX + 0x18]
0066B107  83 F8 08                  CMP EAX,0x8
0066B10A  75 22                     JNZ 0x0066b12e
0066B10C  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0066B10F  8B 13                     MOV EDX,dword ptr [EBX]
0066B111  50                        PUSH EAX
0066B112  8B CB                     MOV ECX,EBX
0066B114  FF 52 1C                  CALL dword ptr [EDX + 0x1c]
0066B117  6A 04                     PUSH 0x4
0066B119  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0066B11C  E8 EF FA 03 00            CALL 0x006aac10
0066B121  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
0066B124  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
0066B127  89 10                     MOV dword ptr [EAX],EDX
0066B129  E9 03 53 00 00            JMP 0x00670431
LAB_0066b12e:
0066B12E  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0066B131  8D 4D B4                  LEA ECX,[EBP + -0x4c]
0066B134  51                        PUSH ECX
0066B135  6A 00                     PUSH 0x0
0066B137  52                        PUSH EDX
0066B138  8B CB                     MOV ECX,EBX
0066B13A  E8 79 65 D9 FF            CALL 0x004016b8
0066B13F  83 F8 01                  CMP EAX,0x1
0066B142  75 7E                     JNZ 0x0066b1c2
0066B144  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0066B14A  85 C9                     TEST ECX,ECX
0066B14C  74 0B                     JZ 0x0066b159
0066B14E  8B 45 B4                  MOV EAX,dword ptr [EBP + -0x4c]
0066B151  50                        PUSH EAX
0066B152  E8 6E 6C D9 FF            CALL 0x00401dc5
0066B157  EB 02                     JMP 0x0066b15b
LAB_0066b159:
0066B159  33 C0                     XOR EAX,EAX
LAB_0066b15b:
0066B15B  85 C0                     TEST EAX,EAX
0066B15D  74 24                     JZ 0x0066b183
0066B15F  8B 50 1C                  MOV EDX,dword ptr [EAX + 0x1c]
0066B162  8D 48 1C                  LEA ECX,[EAX + 0x1c]
0066B165  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0066B168  50                        PUSH EAX
0066B169  FF 52 1C                  CALL dword ptr [EDX + 0x1c]
0066B16C  6A 04                     PUSH 0x4
0066B16E  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0066B171  E8 9A FA 03 00            CALL 0x006aac10
0066B176  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
0066B179  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
0066B17C  89 10                     MOV dword ptr [EAX],EDX
0066B17E  E9 AE 52 00 00            JMP 0x00670431
LAB_0066b183:
0066B183  8B 4D B4                  MOV ECX,dword ptr [EBP + -0x4c]
0066B186  8D 14 BE                  LEA EDX,[ESI + EDI*0x4]
0066B189  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0066B18C  0F BF 44 17 01            MOVSX EAX,word ptr [EDI + EDX*0x1 + 0x1]
0066B191  50                        PUSH EAX
0066B192  E8 44 A6 D9 FF            CALL 0x004057db
0066B197  85 C0                     TEST EAX,EAX
0066B199  74 0F                     JZ 0x0066b1aa
0066B19B  6A 7F                     PUSH 0x7f
0066B19D  8D 4B 04                  LEA ECX,[EBX + 0x4]
0066B1A0  50                        PUSH EAX
0066B1A1  51                        PUSH ECX
0066B1A2  E8 99 31 0C 00            CALL 0x0072e340
0066B1A7  83 C4 0C                  ADD ESP,0xc
LAB_0066b1aa:
0066B1AA  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
LAB_0066b1ad:
0066B1AD  89 93 84 00 00 00         MOV dword ptr [EBX + 0x84],EDX
0066B1B3  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
0066B1B8  6A 79                     PUSH 0x79
0066B1BA  68 24 2A 7D 00            PUSH 0x7d2a24
0066B1BF  50                        PUSH EAX
0066B1C0  EB 39                     JMP 0x0066b1fb
LAB_0066b1c2:
0066B1C2  8D 0C BE                  LEA ECX,[ESI + EDI*0x4]
0066B1C5  0F BF 54 0F 01            MOVSX EDX,word ptr [EDI + ECX*0x1 + 0x1]
0066B1CA  52                        PUSH EDX
0066B1CB  E8 0B A6 D9 FF            CALL 0x004057db
0066B1D0  85 C0                     TEST EAX,EAX
0066B1D2  74 0F                     JZ 0x0066b1e3
LAB_0066b1d4:
0066B1D4  6A 7F                     PUSH 0x7f
0066B1D6  50                        PUSH EAX
0066B1D7  8D 43 04                  LEA EAX,[EBX + 0x4]
0066B1DA  50                        PUSH EAX
0066B1DB  E8 60 31 0C 00            CALL 0x0072e340
0066B1E0  83 C4 0C                  ADD ESP,0xc
LAB_0066b1e3:
0066B1E3  C7 83 84 00 00 00 FF FF FF FF  MOV dword ptr [EBX + 0x84],0xffffffff
0066B1ED  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
0066B1F3  6A 79                     PUSH 0x79
0066B1F5  68 24 2A 7D 00            PUSH 0x7d2a24
0066B1FA  51                        PUSH ECX
LAB_0066b1fb:
0066B1FB  6A 88                     PUSH -0x78
0066B1FD  E8 3E AC 03 00            CALL 0x006a5e40
0066B202  6A 04                     PUSH 0x4
0066B204  E8 07 FA 03 00            CALL 0x006aac10
0066B209  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
0066B20C  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
0066B20F  89 10                     MOV dword ptr [EAX],EDX
0066B211  E9 1B 52 00 00            JMP 0x00670431
LAB_0066b216:
0066B216  33 C0                     XOR EAX,EAX
0066B218  3B F8                     CMP EDI,EAX
0066B21A  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0066B21D  7E 65                     JLE 0x0066b284
0066B21F  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
LAB_0066b222:
0066B222  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0066B225  8A 04 30                  MOV AL,byte ptr [EAX + ESI*0x1]
0066B228  3C 04                     CMP AL,0x4
0066B22A  74 44                     JZ 0x0066b270
0066B22C  3C 01                     CMP AL,0x1
0066B22E  74 40                     JZ 0x0066b270
0066B230  8D 0C BE                  LEA ECX,[ESI + EDI*0x4]
0066B233  0F BF 54 0F 01            MOVSX EDX,word ptr [EDI + ECX*0x1 + 0x1]
0066B238  52                        PUSH EDX
0066B239  E8 9D A5 D9 FF            CALL 0x004057db
0066B23E  85 C0                     TEST EAX,EAX
0066B240  74 0F                     JZ 0x0066b251
0066B242  6A 7F                     PUSH 0x7f
0066B244  50                        PUSH EAX
0066B245  8D 43 04                  LEA EAX,[EBX + 0x4]
0066B248  50                        PUSH EAX
0066B249  E8 F2 30 0C 00            CALL 0x0072e340
0066B24E  83 C4 0C                  ADD ESP,0xc
LAB_0066b251:
0066B251  C7 83 84 00 00 00 FF FF FF FF  MOV dword ptr [EBX + 0x84],0xffffffff
0066B25B  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
0066B261  6A 79                     PUSH 0x79
0066B263  68 24 2A 7D 00            PUSH 0x7d2a24
0066B268  51                        PUSH ECX
0066B269  6A 88                     PUSH -0x78
0066B26B  E8 D0 AB 03 00            CALL 0x006a5e40
LAB_0066b270:
0066B270  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0066B273  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
0066B276  40                        INC EAX
0066B277  83 C2 05                  ADD EDX,0x5
0066B27A  3B C7                     CMP EAX,EDI
0066B27C  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0066B27F  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
0066B282  7C 9E                     JL 0x0066b222
LAB_0066b284:
0066B284  8B 13                     MOV EDX,dword ptr [EBX]
0066B286  56                        PUSH ESI
0066B287  8B CB                     MOV ECX,EBX
0066B289  FF 12                     CALL dword ptr [EDX]
0066B28B  85 C0                     TEST EAX,EAX
0066B28D  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0066B290  7C 07                     JL 0x0066b299
0066B292  3D 00 01 00 00            CMP EAX,0x100
0066B297  7C 3F                     JL 0x0066b2d8
LAB_0066b299:
0066B299  8D 04 BE                  LEA EAX,[ESI + EDI*0x4]
0066B29C  0F BF 4C 07 01            MOVSX ECX,word ptr [EDI + EAX*0x1 + 0x1]
0066B2A1  51                        PUSH ECX
0066B2A2  E8 34 A5 D9 FF            CALL 0x004057db
0066B2A7  85 C0                     TEST EAX,EAX
0066B2A9  74 0F                     JZ 0x0066b2ba
0066B2AB  6A 7F                     PUSH 0x7f
0066B2AD  8D 53 04                  LEA EDX,[EBX + 0x4]
0066B2B0  50                        PUSH EAX
0066B2B1  52                        PUSH EDX
0066B2B2  E8 89 30 0C 00            CALL 0x0072e340
0066B2B7  83 C4 0C                  ADD ESP,0xc
LAB_0066b2ba:
0066B2BA  C7 83 84 00 00 00 FF FF FF FF  MOV dword ptr [EBX + 0x84],0xffffffff
0066B2C4  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
0066B2C9  6A 79                     PUSH 0x79
0066B2CB  68 24 2A 7D 00            PUSH 0x7d2a24
0066B2D0  50                        PUSH EAX
0066B2D1  6A 88                     PUSH -0x78
0066B2D3  E8 68 AB 03 00            CALL 0x006a5e40
LAB_0066b2d8:
0066B2D8  6A 04                     PUSH 0x4
0066B2DA  E8 31 F9 03 00            CALL 0x006aac10
0066B2DF  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0066B2E2  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
0066B2E5  8B 14 8D 3B E4 80 00      MOV EDX,dword ptr [ECX*0x4 + 0x80e43b]
0066B2EC  89 10                     MOV dword ptr [EAX],EDX
0066B2EE  E9 3E 51 00 00            JMP 0x00670431
LAB_0066b2f3:
0066B2F3  8B C8                     MOV ECX,EAX
0066B2F5  81 E9 D3 07 00 00         SUB ECX,0x7d3
0066B2FB  0F 84 BF 01 00 00         JZ 0x0066b4c0
0066B301  49                        DEC ECX
0066B302  0F 84 D8 00 00 00         JZ 0x0066b3e0
0066B308  49                        DEC ECX
0066B309  0F 85 47 51 00 00         JNZ 0x00670456
0066B30F  33 C0                     XOR EAX,EAX
0066B311  3B F8                     CMP EDI,EAX
0066B313  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0066B316  7E 65                     JLE 0x0066b37d
0066B318  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
LAB_0066b31b:
0066B31B  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0066B31E  8A 04 30                  MOV AL,byte ptr [EAX + ESI*0x1]
0066B321  3C 04                     CMP AL,0x4
0066B323  74 44                     JZ 0x0066b369
0066B325  3C 01                     CMP AL,0x1
0066B327  74 40                     JZ 0x0066b369
0066B329  8D 0C BE                  LEA ECX,[ESI + EDI*0x4]
0066B32C  0F BF 54 0F 01            MOVSX EDX,word ptr [EDI + ECX*0x1 + 0x1]
0066B331  52                        PUSH EDX
0066B332  E8 A4 A4 D9 FF            CALL 0x004057db
0066B337  85 C0                     TEST EAX,EAX
0066B339  74 0F                     JZ 0x0066b34a
0066B33B  6A 7F                     PUSH 0x7f
0066B33D  50                        PUSH EAX
0066B33E  8D 43 04                  LEA EAX,[EBX + 0x4]
0066B341  50                        PUSH EAX
0066B342  E8 F9 2F 0C 00            CALL 0x0072e340
0066B347  83 C4 0C                  ADD ESP,0xc
LAB_0066b34a:
0066B34A  C7 83 84 00 00 00 FF FF FF FF  MOV dword ptr [EBX + 0x84],0xffffffff
0066B354  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
0066B35A  6A 79                     PUSH 0x79
0066B35C  68 24 2A 7D 00            PUSH 0x7d2a24
0066B361  51                        PUSH ECX
0066B362  6A 88                     PUSH -0x78
0066B364  E8 D7 AA 03 00            CALL 0x006a5e40
LAB_0066b369:
0066B369  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0066B36C  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
0066B36F  40                        INC EAX
0066B370  83 C2 05                  ADD EDX,0x5
0066B373  3B C7                     CMP EAX,EDI
0066B375  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0066B378  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
0066B37B  7C 9E                     JL 0x0066b31b
LAB_0066b37d:
0066B37D  8B 13                     MOV EDX,dword ptr [EBX]
0066B37F  56                        PUSH ESI
0066B380  8B CB                     MOV ECX,EBX
0066B382  FF 12                     CALL dword ptr [EDX]
0066B384  85 C0                     TEST EAX,EAX
0066B386  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0066B389  7C 05                     JL 0x0066b390
0066B38B  83 F8 04                  CMP EAX,0x4
0066B38E  7C 3F                     JL 0x0066b3cf
LAB_0066b390:
0066B390  8D 04 BE                  LEA EAX,[ESI + EDI*0x4]
0066B393  0F BF 4C 07 01            MOVSX ECX,word ptr [EDI + EAX*0x1 + 0x1]
0066B398  51                        PUSH ECX
0066B399  E8 3D A4 D9 FF            CALL 0x004057db
0066B39E  85 C0                     TEST EAX,EAX
0066B3A0  74 0F                     JZ 0x0066b3b1
0066B3A2  6A 7F                     PUSH 0x7f
0066B3A4  8D 53 04                  LEA EDX,[EBX + 0x4]
0066B3A7  50                        PUSH EAX
0066B3A8  52                        PUSH EDX
0066B3A9  E8 92 2F 0C 00            CALL 0x0072e340
0066B3AE  83 C4 0C                  ADD ESP,0xc
LAB_0066b3b1:
0066B3B1  C7 83 84 00 00 00 FF FF FF FF  MOV dword ptr [EBX + 0x84],0xffffffff
0066B3BB  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
0066B3C0  6A 79                     PUSH 0x79
0066B3C2  68 24 2A 7D 00            PUSH 0x7d2a24
0066B3C7  50                        PUSH EAX
0066B3C8  6A 88                     PUSH -0x78
0066B3CA  E8 71 AA 03 00            CALL 0x006a5e40
LAB_0066b3cf:
0066B3CF  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0066B3D2  8B 13                     MOV EDX,dword ptr [EBX]
0066B3D4  50                        PUSH EAX
0066B3D5  8B CB                     MOV ECX,EBX
0066B3D7  FF 52 28                  CALL dword ptr [EDX + 0x28]
0066B3DA  50                        PUSH EAX
0066B3DB  E9 50 22 00 00            JMP 0x0066d630
LAB_0066b3e0:
0066B3E0  33 C0                     XOR EAX,EAX
0066B3E2  3B F8                     CMP EDI,EAX
0066B3E4  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0066B3E7  7E 65                     JLE 0x0066b44e
0066B3E9  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
LAB_0066b3ec:
0066B3EC  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
0066B3EF  8A 04 31                  MOV AL,byte ptr [ECX + ESI*0x1]
0066B3F2  3C 04                     CMP AL,0x4
0066B3F4  74 44                     JZ 0x0066b43a
0066B3F6  3C 01                     CMP AL,0x1
0066B3F8  74 40                     JZ 0x0066b43a
0066B3FA  8D 14 BE                  LEA EDX,[ESI + EDI*0x4]
0066B3FD  0F BF 44 17 01            MOVSX EAX,word ptr [EDI + EDX*0x1 + 0x1]
0066B402  50                        PUSH EAX
0066B403  E8 D3 A3 D9 FF            CALL 0x004057db
0066B408  85 C0                     TEST EAX,EAX
0066B40A  74 0F                     JZ 0x0066b41b
0066B40C  6A 7F                     PUSH 0x7f
0066B40E  8D 4B 04                  LEA ECX,[EBX + 0x4]
0066B411  50                        PUSH EAX
0066B412  51                        PUSH ECX
0066B413  E8 28 2F 0C 00            CALL 0x0072e340
0066B418  83 C4 0C                  ADD ESP,0xc
LAB_0066b41b:
0066B41B  C7 83 84 00 00 00 FF FF FF FF  MOV dword ptr [EBX + 0x84],0xffffffff
0066B425  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
0066B42B  6A 79                     PUSH 0x79
0066B42D  68 24 2A 7D 00            PUSH 0x7d2a24
0066B432  52                        PUSH EDX
0066B433  6A 88                     PUSH -0x78
0066B435  E8 06 AA 03 00            CALL 0x006a5e40
LAB_0066b43a:
0066B43A  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0066B43D  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
0066B440  40                        INC EAX
0066B441  83 C2 05                  ADD EDX,0x5
0066B444  3B C7                     CMP EAX,EDI
0066B446  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0066B449  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
0066B44C  7C 9E                     JL 0x0066b3ec
LAB_0066b44e:
0066B44E  8B 03                     MOV EAX,dword ptr [EBX]
0066B450  56                        PUSH ESI
0066B451  8B CB                     MOV ECX,EBX
0066B453  FF 10                     CALL dword ptr [EAX]
0066B455  85 C0                     TEST EAX,EAX
0066B457  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0066B45A  7C 05                     JL 0x0066b461
0066B45C  83 F8 21                  CMP EAX,0x21
0066B45F  7C 40                     JL 0x0066b4a1
LAB_0066b461:
0066B461  8D 0C BE                  LEA ECX,[ESI + EDI*0x4]
0066B464  0F BF 54 0F 01            MOVSX EDX,word ptr [EDI + ECX*0x1 + 0x1]
0066B469  52                        PUSH EDX
0066B46A  E8 6C A3 D9 FF            CALL 0x004057db
0066B46F  85 C0                     TEST EAX,EAX
0066B471  74 0F                     JZ 0x0066b482
0066B473  6A 7F                     PUSH 0x7f
0066B475  50                        PUSH EAX
0066B476  8D 43 04                  LEA EAX,[EBX + 0x4]
0066B479  50                        PUSH EAX
0066B47A  E8 C1 2E 0C 00            CALL 0x0072e340
0066B47F  83 C4 0C                  ADD ESP,0xc
LAB_0066b482:
0066B482  C7 83 84 00 00 00 FF FF FF FF  MOV dword ptr [EBX + 0x84],0xffffffff
0066B48C  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
0066B492  6A 79                     PUSH 0x79
0066B494  68 24 2A 7D 00            PUSH 0x7d2a24
0066B499  51                        PUSH ECX
0066B49A  6A 88                     PUSH -0x78
0066B49C  E8 9F A9 03 00            CALL 0x006a5e40
LAB_0066b4a1:
0066B4A1  6A 04                     PUSH 0x4
0066B4A3  E8 68 F7 03 00            CALL 0x006aac10
0066B4A8  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
0066B4AB  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0066B4AE  8B 13                     MOV EDX,dword ptr [EBX]
0066B4B0  50                        PUSH EAX
0066B4B1  8B CB                     MOV ECX,EBX
0066B4B3  FF 52 24                  CALL dword ptr [EDX + 0x24]
0066B4B6  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
0066B4B9  89 01                     MOV dword ptr [ECX],EAX
0066B4BB  E9 71 4F 00 00            JMP 0x00670431
LAB_0066b4c0:
0066B4C0  33 C0                     XOR EAX,EAX
0066B4C2  3B F8                     CMP EDI,EAX
0066B4C4  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0066B4C7  7E 64                     JLE 0x0066b52d
0066B4C9  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
LAB_0066b4cc:
0066B4CC  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
0066B4CF  8A 04 32                  MOV AL,byte ptr [EDX + ESI*0x1]
0066B4D2  3C 04                     CMP AL,0x4
0066B4D4  74 43                     JZ 0x0066b519
0066B4D6  3C 01                     CMP AL,0x1
0066B4D8  74 3F                     JZ 0x0066b519
0066B4DA  8D 04 BE                  LEA EAX,[ESI + EDI*0x4]
0066B4DD  0F BF 4C 07 01            MOVSX ECX,word ptr [EDI + EAX*0x1 + 0x1]
0066B4E2  51                        PUSH ECX
0066B4E3  E8 F3 A2 D9 FF            CALL 0x004057db
0066B4E8  85 C0                     TEST EAX,EAX
0066B4EA  74 0F                     JZ 0x0066b4fb
0066B4EC  6A 7F                     PUSH 0x7f
0066B4EE  8D 53 04                  LEA EDX,[EBX + 0x4]
0066B4F1  50                        PUSH EAX
0066B4F2  52                        PUSH EDX
0066B4F3  E8 48 2E 0C 00            CALL 0x0072e340
0066B4F8  83 C4 0C                  ADD ESP,0xc
LAB_0066b4fb:
0066B4FB  C7 83 84 00 00 00 FF FF FF FF  MOV dword ptr [EBX + 0x84],0xffffffff
0066B505  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
0066B50A  6A 79                     PUSH 0x79
0066B50C  68 24 2A 7D 00            PUSH 0x7d2a24
0066B511  50                        PUSH EAX
0066B512  6A 88                     PUSH -0x78
0066B514  E8 27 A9 03 00            CALL 0x006a5e40
LAB_0066b519:
0066B519  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0066B51C  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
0066B51F  40                        INC EAX
0066B520  83 C2 05                  ADD EDX,0x5
0066B523  3B C7                     CMP EAX,EDI
0066B525  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0066B528  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
0066B52B  7C 9F                     JL 0x0066b4cc
LAB_0066b52d:
0066B52D  8B 13                     MOV EDX,dword ptr [EBX]
0066B52F  56                        PUSH ESI
0066B530  8B CB                     MOV ECX,EBX
0066B532  FF 12                     CALL dword ptr [EDX]
0066B534  8B F8                     MOV EDI,EAX
0066B536  8B 03                     MOV EAX,dword ptr [EBX]
0066B538  83 C6 05                  ADD ESI,0x5
0066B53B  8B CB                     MOV ECX,EBX
0066B53D  56                        PUSH ESI
0066B53E  FF 10                     CALL dword ptr [EAX]
0066B540  6A 04                     PUSH 0x4
0066B542  8B F0                     MOV ESI,EAX
0066B544  E8 C7 F6 03 00            CALL 0x006aac10
0066B549  3B F7                     CMP ESI,EDI
0066B54B  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
0066B54E  7C 13                     JL 0x0066b563
0066B550  8B 13                     MOV EDX,dword ptr [EBX]
0066B552  56                        PUSH ESI
0066B553  57                        PUSH EDI
0066B554  8B CB                     MOV ECX,EBX
0066B556  FF 52 10                  CALL dword ptr [EDX + 0x10]
0066B559  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
0066B55C  89 01                     MOV dword ptr [ECX],EAX
0066B55E  E9 CE 4E 00 00            JMP 0x00670431
LAB_0066b563:
0066B563  8B 03                     MOV EAX,dword ptr [EBX]
0066B565  57                        PUSH EDI
0066B566  56                        PUSH ESI
0066B567  8B CB                     MOV ECX,EBX
0066B569  FF 50 10                  CALL dword ptr [EAX + 0x10]
0066B56C  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
0066B56F  89 01                     MOV dword ptr [ECX],EAX
0066B571  E9 BB 4E 00 00            JMP 0x00670431
LAB_0066b576:
0066B576  33 C0                     XOR EAX,EAX
0066B578  3B F8                     CMP EDI,EAX
0066B57A  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0066B57D  7E 64                     JLE 0x0066b5e3
0066B57F  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
LAB_0066b582:
0066B582  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
0066B585  8A 04 32                  MOV AL,byte ptr [EDX + ESI*0x1]
0066B588  3C 04                     CMP AL,0x4
0066B58A  74 43                     JZ 0x0066b5cf
0066B58C  3C 01                     CMP AL,0x1
0066B58E  74 3F                     JZ 0x0066b5cf
0066B590  8D 04 BE                  LEA EAX,[ESI + EDI*0x4]
0066B593  0F BF 4C 07 01            MOVSX ECX,word ptr [EDI + EAX*0x1 + 0x1]
0066B598  51                        PUSH ECX
0066B599  E8 3D A2 D9 FF            CALL 0x004057db
0066B59E  85 C0                     TEST EAX,EAX
0066B5A0  74 0F                     JZ 0x0066b5b1
0066B5A2  6A 7F                     PUSH 0x7f
0066B5A4  8D 53 04                  LEA EDX,[EBX + 0x4]
0066B5A7  50                        PUSH EAX
0066B5A8  52                        PUSH EDX
0066B5A9  E8 92 2D 0C 00            CALL 0x0072e340
0066B5AE  83 C4 0C                  ADD ESP,0xc
LAB_0066b5b1:
0066B5B1  C7 83 84 00 00 00 FF FF FF FF  MOV dword ptr [EBX + 0x84],0xffffffff
0066B5BB  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
0066B5C0  6A 79                     PUSH 0x79
0066B5C2  68 24 2A 7D 00            PUSH 0x7d2a24
0066B5C7  50                        PUSH EAX
0066B5C8  6A 88                     PUSH -0x78
0066B5CA  E8 71 A8 03 00            CALL 0x006a5e40
LAB_0066b5cf:
0066B5CF  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0066B5D2  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
0066B5D5  40                        INC EAX
0066B5D6  83 C2 05                  ADD EDX,0x5
0066B5D9  3B C7                     CMP EAX,EDI
0066B5DB  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0066B5DE  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
0066B5E1  7C 9F                     JL 0x0066b582
LAB_0066b5e3:
0066B5E3  8B 13                     MOV EDX,dword ptr [EBX]
0066B5E5  56                        PUSH ESI
0066B5E6  8B CB                     MOV ECX,EBX
0066B5E8  FF 12                     CALL dword ptr [EDX]
0066B5EA  8B 0D C7 C4 80 00         MOV ECX,dword ptr [0x0080c4c7]
0066B5F0  85 C9                     TEST ECX,ECX
0066B5F2  74 10                     JZ 0x0066b604
0066B5F4  3B 41 08                  CMP EAX,dword ptr [ECX + 0x8]
0066B5F7  7D 0B                     JGE 0x0066b604
0066B5F9  8B 49 14                  MOV ECX,dword ptr [ECX + 0x14]
0066B5FC  8B 14 81                  MOV EDX,dword ptr [ECX + EAX*0x4]
0066B5FF  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
0066B602  EB 07                     JMP 0x0066b60b
LAB_0066b604:
0066B604  C7 45 F8 00 00 00 00      MOV dword ptr [EBP + -0x8],0x0
LAB_0066b60b:
0066B60B  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0066B60E  85 C0                     TEST EAX,EAX
0066B610  75 3F                     JNZ 0x0066b651
0066B612  8D 04 BE                  LEA EAX,[ESI + EDI*0x4]
0066B615  0F BF 4C 07 01            MOVSX ECX,word ptr [EDI + EAX*0x1 + 0x1]
0066B61A  51                        PUSH ECX
0066B61B  E8 BB A1 D9 FF            CALL 0x004057db
0066B620  85 C0                     TEST EAX,EAX
0066B622  74 0F                     JZ 0x0066b633
0066B624  6A 7F                     PUSH 0x7f
0066B626  8D 53 04                  LEA EDX,[EBX + 0x4]
0066B629  50                        PUSH EAX
0066B62A  52                        PUSH EDX
0066B62B  E8 10 2D 0C 00            CALL 0x0072e340
0066B630  83 C4 0C                  ADD ESP,0xc
LAB_0066b633:
0066B633  C7 83 84 00 00 00 FF FF FF FF  MOV dword ptr [EBX + 0x84],0xffffffff
0066B63D  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
0066B642  6A 79                     PUSH 0x79
0066B644  68 24 2A 7D 00            PUSH 0x7d2a24
0066B649  50                        PUSH EAX
0066B64A  6A 88                     PUSH -0x78
0066B64C  E8 EF A7 03 00            CALL 0x006a5e40
LAB_0066b651:
0066B651  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0066B654  51                        PUSH ECX
0066B655  E8 56 93 05 00            CALL 0x006c49b0
0066B65A  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
0066B65D  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
0066B660  85 C0                     TEST EAX,EAX
0066B662  0F 84 26 4E 00 00         JZ 0x0067048e
0066B668  C7 00 03 00 00 00         MOV dword ptr [EAX],0x3
0066B66E  8B 95 A4 FD FF FF         MOV EDX,dword ptr [EBP + 0xfffffda4]
0066B674  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
0066B677  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0066B67D  5F                        POP EDI
0066B67E  5E                        POP ESI
0066B67F  5B                        POP EBX
0066B680  8B E5                     MOV ESP,EBP
0066B682  5D                        POP EBP
0066B683  C2 0C 00                  RET 0xc
LAB_0066b686:
0066B686  8D 88 29 F8 FF FF         LEA ECX,[EAX + 0xfffff829]
0066B68C  83 F9 0E                  CMP ECX,0xe
0066B68F  0F 87 C1 4D 00 00         JA 0x00670456
0066B695  33 D2                     XOR EDX,EDX
0066B697  8A 91 00 05 67 00         MOV DL,byte ptr [ECX + 0x670500]
switchD_0066b69d::switchD:
0066B69D  FF 24 95 E0 04 67 00      JMP dword ptr [EDX*0x4 + 0x6704e0]
switchD_0066b69d::caseD_7d7:
0066B6A4  8B 03                     MOV EAX,dword ptr [EBX]
0066B6A6  8B CB                     MOV ECX,EBX
0066B6A8  FF 50 18                  CALL dword ptr [EAX + 0x18]
0066B6AB  6A 04                     PUSH 0x4
0066B6AD  8B F0                     MOV ESI,EAX
0066B6AF  E8 5C F5 03 00            CALL 0x006aac10
0066B6B4  83 FE 08                  CMP ESI,0x8
0066B6B7  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
0066B6BA  75 05                     JNZ 0x0066b6c1
0066B6BC  BE FF 00 00 00            MOV ESI,0xff
LAB_0066b6c1:
0066B6C1  89 30                     MOV dword ptr [EAX],ESI
0066B6C3  E9 69 4D 00 00            JMP 0x00670431
switchD_0066b69d::caseD_7da:
0066B6C8  6A 04                     PUSH 0x4
0066B6CA  E8 41 F5 03 00            CALL 0x006aac10
0066B6CF  8B 15 38 2A 80 00         MOV EDX,dword ptr [0x00802a38]
0066B6D5  8B C8                     MOV ECX,EAX
0066B6D7  B8 1F 85 EB 51            MOV EAX,0x51eb851f
0066B6DC  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
0066B6DF  F7 A2 E4 00 00 00         MUL dword ptr [EDX + 0xe4]
0066B6E5  C1 EA 03                  SHR EDX,0x3
0066B6E8  89 11                     MOV dword ptr [ECX],EDX
0066B6EA  E9 42 4D 00 00            JMP 0x00670431
switchD_0066b69d::caseD_7dc:
0066B6EF  6A 04                     PUSH 0x4
0066B6F1  E8 1A F5 03 00            CALL 0x006aac10
0066B6F6  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
0066B6FC  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
0066B6FF  8B 91 E4 00 00 00         MOV EDX,dword ptr [ECX + 0xe4]
0066B705  89 10                     MOV dword ptr [EAX],EDX
0066B707  E9 25 4D 00 00            JMP 0x00670431
switchD_0066b69d::caseD_7dd:
0066B70C  33 C0                     XOR EAX,EAX
0066B70E  3B F8                     CMP EDI,EAX
0066B710  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0066B713  7E 65                     JLE 0x0066b77a
0066B715  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
LAB_0066b718:
0066B718  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0066B71B  8A 04 30                  MOV AL,byte ptr [EAX + ESI*0x1]
0066B71E  3C 04                     CMP AL,0x4
0066B720  74 44                     JZ 0x0066b766
0066B722  3C 01                     CMP AL,0x1
0066B724  74 40                     JZ 0x0066b766
0066B726  8D 0C BE                  LEA ECX,[ESI + EDI*0x4]
0066B729  0F BF 54 0F 01            MOVSX EDX,word ptr [EDI + ECX*0x1 + 0x1]
0066B72E  52                        PUSH EDX
0066B72F  E8 A7 A0 D9 FF            CALL 0x004057db
0066B734  85 C0                     TEST EAX,EAX
0066B736  74 0F                     JZ 0x0066b747
0066B738  6A 7F                     PUSH 0x7f
0066B73A  50                        PUSH EAX
0066B73B  8D 43 04                  LEA EAX,[EBX + 0x4]
0066B73E  50                        PUSH EAX
0066B73F  E8 FC 2B 0C 00            CALL 0x0072e340
0066B744  83 C4 0C                  ADD ESP,0xc
LAB_0066b747:
0066B747  C7 83 84 00 00 00 FF FF FF FF  MOV dword ptr [EBX + 0x84],0xffffffff
0066B751  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
0066B757  6A 79                     PUSH 0x79
0066B759  68 24 2A 7D 00            PUSH 0x7d2a24
0066B75E  51                        PUSH ECX
0066B75F  6A 88                     PUSH -0x78
0066B761  E8 DA A6 03 00            CALL 0x006a5e40
LAB_0066b766:
0066B766  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0066B769  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
0066B76C  40                        INC EAX
0066B76D  83 C2 05                  ADD EDX,0x5
0066B770  3B C7                     CMP EAX,EDI
0066B772  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0066B775  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
0066B778  7C 9E                     JL 0x0066b718
LAB_0066b77a:
0066B77A  8B 13                     MOV EDX,dword ptr [EBX]
0066B77C  56                        PUSH ESI
0066B77D  8B CB                     MOV ECX,EBX
0066B77F  FF 12                     CALL dword ptr [EDX]
0066B781  83 F8 09                  CMP EAX,0x9
0066B784  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0066B787  C7 45 F8 00 00 00 00      MOV dword ptr [EBP + -0x8],0x0
0066B78E  75 2A                     JNZ 0x0066b7ba
0066B790  8B 03                     MOV EAX,dword ptr [EBX]
0066B792  8B CB                     MOV ECX,EBX
0066B794  FF 50 18                  CALL dword ptr [EAX + 0x18]
0066B797  83 F8 08                  CMP EAX,0x8
0066B79A  75 1E                     JNZ 0x0066b7ba
0066B79C  8B 13                     MOV EDX,dword ptr [EBX]
0066B79E  8B CB                     MOV ECX,EBX
0066B7A0  FF 52 14                  CALL dword ptr [EDX + 0x14]
0066B7A3  6A 04                     PUSH 0x4
0066B7A5  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0066B7A8  E8 63 F4 03 00            CALL 0x006aac10
0066B7AD  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
0066B7B0  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
0066B7B3  89 10                     MOV dword ptr [EAX],EDX
0066B7B5  E9 77 4C 00 00            JMP 0x00670431
LAB_0066b7ba:
0066B7BA  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0066B7BD  8D 45 B4                  LEA EAX,[EBP + -0x4c]
0066B7C0  50                        PUSH EAX
0066B7C1  6A 00                     PUSH 0x0
0066B7C3  51                        PUSH ECX
0066B7C4  8B CB                     MOV ECX,EBX
0066B7C6  E8 ED 5E D9 FF            CALL 0x004016b8
0066B7CB  83 F8 01                  CMP EAX,0x1
0066B7CE  75 6A                     JNZ 0x0066b83a
0066B7D0  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0066B7D6  85 C9                     TEST ECX,ECX
0066B7D8  74 0B                     JZ 0x0066b7e5
0066B7DA  8B 55 B4                  MOV EDX,dword ptr [EBP + -0x4c]
0066B7DD  52                        PUSH EDX
0066B7DE  E8 E2 65 D9 FF            CALL 0x00401dc5
0066B7E3  EB 02                     JMP 0x0066b7e7
LAB_0066b7e5:
0066B7E5  33 C0                     XOR EAX,EAX
LAB_0066b7e7:
0066B7E7  85 C0                     TEST EAX,EAX
0066B7E9  74 20                     JZ 0x0066b80b
0066B7EB  8D 48 1C                  LEA ECX,[EAX + 0x1c]
0066B7EE  8B 40 1C                  MOV EAX,dword ptr [EAX + 0x1c]
0066B7F1  FF 50 14                  CALL dword ptr [EAX + 0x14]
0066B7F4  6A 04                     PUSH 0x4
0066B7F6  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0066B7F9  E8 12 F4 03 00            CALL 0x006aac10
0066B7FE  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
0066B801  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
0066B804  89 10                     MOV dword ptr [EAX],EDX
0066B806  E9 26 4C 00 00            JMP 0x00670431
LAB_0066b80b:
0066B80B  8B 4D B4                  MOV ECX,dword ptr [EBP + -0x4c]
0066B80E  8D 14 BE                  LEA EDX,[ESI + EDI*0x4]
0066B811  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0066B814  0F BF 44 17 01            MOVSX EAX,word ptr [EDI + EDX*0x1 + 0x1]
0066B819  50                        PUSH EAX
0066B81A  E8 BC 9F D9 FF            CALL 0x004057db
0066B81F  85 C0                     TEST EAX,EAX
0066B821  74 0F                     JZ 0x0066b832
0066B823  6A 7F                     PUSH 0x7f
0066B825  8D 4B 04                  LEA ECX,[EBX + 0x4]
0066B828  50                        PUSH EAX
0066B829  51                        PUSH ECX
0066B82A  E8 11 2B 0C 00            CALL 0x0072e340
0066B82F  83 C4 0C                  ADD ESP,0xc
LAB_0066b832:
0066B832  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0066B835  E9 73 F9 FF FF            JMP 0x0066b1ad
LAB_0066b83a:
0066B83A  8D 0C BE                  LEA ECX,[ESI + EDI*0x4]
0066B83D  0F BF 54 0F 01            MOVSX EDX,word ptr [EDI + ECX*0x1 + 0x1]
0066B842  52                        PUSH EDX
0066B843  E8 93 9F D9 FF            CALL 0x004057db
0066B848  85 C0                     TEST EAX,EAX
0066B84A  0F 84 93 F9 FF FF         JZ 0x0066b1e3
0066B850  E9 7F F9 FF FF            JMP 0x0066b1d4
switchD_0066b69d::caseD_7de:
0066B855  33 C0                     XOR EAX,EAX
0066B857  3B F8                     CMP EDI,EAX
0066B859  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0066B85C  7E 65                     JLE 0x0066b8c3
0066B85E  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
LAB_0066b861:
0066B861  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0066B864  8A 04 30                  MOV AL,byte ptr [EAX + ESI*0x1]
0066B867  3C 04                     CMP AL,0x4
0066B869  74 44                     JZ 0x0066b8af
0066B86B  3C 01                     CMP AL,0x1
0066B86D  74 40                     JZ 0x0066b8af
0066B86F  8D 0C BE                  LEA ECX,[ESI + EDI*0x4]
0066B872  0F BF 54 0F 01            MOVSX EDX,word ptr [EDI + ECX*0x1 + 0x1]
0066B877  52                        PUSH EDX
0066B878  E8 5E 9F D9 FF            CALL 0x004057db
0066B87D  85 C0                     TEST EAX,EAX
0066B87F  74 0F                     JZ 0x0066b890
0066B881  6A 7F                     PUSH 0x7f
0066B883  50                        PUSH EAX
0066B884  8D 43 04                  LEA EAX,[EBX + 0x4]
0066B887  50                        PUSH EAX
0066B888  E8 B3 2A 0C 00            CALL 0x0072e340
0066B88D  83 C4 0C                  ADD ESP,0xc
LAB_0066b890:
0066B890  C7 83 84 00 00 00 FF FF FF FF  MOV dword ptr [EBX + 0x84],0xffffffff
0066B89A  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
0066B8A0  6A 79                     PUSH 0x79
0066B8A2  68 24 2A 7D 00            PUSH 0x7d2a24
0066B8A7  51                        PUSH ECX
0066B8A8  6A 88                     PUSH -0x78
0066B8AA  E8 91 A5 03 00            CALL 0x006a5e40
LAB_0066b8af:
0066B8AF  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0066B8B2  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
0066B8B5  40                        INC EAX
0066B8B6  83 C2 05                  ADD EDX,0x5
0066B8B9  3B C7                     CMP EAX,EDI
0066B8BB  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0066B8BE  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
0066B8C1  7C 9E                     JL 0x0066b861
LAB_0066b8c3:
0066B8C3  8B 13                     MOV EDX,dword ptr [EBX]
0066B8C5  56                        PUSH ESI
0066B8C6  8B CB                     MOV ECX,EBX
0066B8C8  FF 12                     CALL dword ptr [EDX]
0066B8CA  83 F8 09                  CMP EAX,0x9
0066B8CD  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0066B8D0  75 0C                     JNZ 0x0066b8de
0066B8D2  8B 03                     MOV EAX,dword ptr [EBX]
0066B8D4  8B CB                     MOV ECX,EBX
0066B8D6  FF 50 18                  CALL dword ptr [EAX + 0x18]
0066B8D9  83 F8 08                  CMP EAX,0x8
0066B8DC  74 09                     JZ 0x0066b8e7
LAB_0066b8de:
0066B8DE  81 7D F8 FF 00 00 00      CMP dword ptr [EBP + -0x8],0xff
0066B8E5  75 40                     JNZ 0x0066b927
LAB_0066b8e7:
0066B8E7  8D 0C BE                  LEA ECX,[ESI + EDI*0x4]
0066B8EA  0F BF 54 0F 01            MOVSX EDX,word ptr [EDI + ECX*0x1 + 0x1]
0066B8EF  52                        PUSH EDX
0066B8F0  E8 E6 9E D9 FF            CALL 0x004057db
0066B8F5  85 C0                     TEST EAX,EAX
0066B8F7  74 0F                     JZ 0x0066b908
0066B8F9  6A 7F                     PUSH 0x7f
0066B8FB  50                        PUSH EAX
0066B8FC  8D 43 04                  LEA EAX,[EBX + 0x4]
0066B8FF  50                        PUSH EAX
0066B900  E8 3B 2A 0C 00            CALL 0x0072e340
0066B905  83 C4 0C                  ADD ESP,0xc
LAB_0066b908:
0066B908  C7 83 84 00 00 00 FF FF FF FF  MOV dword ptr [EBX + 0x84],0xffffffff
0066B912  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
0066B918  6A 79                     PUSH 0x79
0066B91A  68 24 2A 7D 00            PUSH 0x7d2a24
0066B91F  51                        PUSH ECX
0066B920  6A 88                     PUSH -0x78
0066B922  E8 19 A5 03 00            CALL 0x006a5e40
LAB_0066b927:
0066B927  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0066B92A  8D 55 B4                  LEA EDX,[EBP + -0x4c]
0066B92D  52                        PUSH EDX
0066B92E  6A 00                     PUSH 0x0
0066B930  50                        PUSH EAX
0066B931  8B CB                     MOV ECX,EBX
0066B933  E8 80 5D D9 FF            CALL 0x004016b8
0066B938  83 F8 01                  CMP EAX,0x1
0066B93B  74 40                     JZ 0x0066b97d
0066B93D  8D 0C BE                  LEA ECX,[ESI + EDI*0x4]
0066B940  0F BF 54 0F 01            MOVSX EDX,word ptr [EDI + ECX*0x1 + 0x1]
0066B945  52                        PUSH EDX
0066B946  E8 90 9E D9 FF            CALL 0x004057db
0066B94B  85 C0                     TEST EAX,EAX
0066B94D  74 0F                     JZ 0x0066b95e
0066B94F  6A 7F                     PUSH 0x7f
0066B951  50                        PUSH EAX
0066B952  8D 43 04                  LEA EAX,[EBX + 0x4]
0066B955  50                        PUSH EAX
0066B956  E8 E5 29 0C 00            CALL 0x0072e340
0066B95B  83 C4 0C                  ADD ESP,0xc
LAB_0066b95e:
0066B95E  C7 83 84 00 00 00 FF FF FF FF  MOV dword ptr [EBX + 0x84],0xffffffff
0066B968  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
0066B96E  6A 79                     PUSH 0x79
0066B970  68 24 2A 7D 00            PUSH 0x7d2a24
0066B975  51                        PUSH ECX
0066B976  6A 88                     PUSH -0x78
0066B978  E8 C3 A4 03 00            CALL 0x006a5e40
LAB_0066b97d:
0066B97D  8B 0D 88 16 80 00         MOV ECX,dword ptr [0x00801688]
0066B983  C6 45 E7 00               MOV byte ptr [EBP + -0x19],0x0
0066B987  85 C9                     TEST ECX,ECX
0066B989  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
0066B990  74 1F                     JZ 0x0066b9b1
0066B992  8D 55 E7                  LEA EDX,[EBP + -0x19]
0066B995  85 D2                     TEST EDX,EDX
0066B997  75 07                     JNZ 0x0066b9a0
0066B999  8D 45 FC                  LEA EAX,[EBP + -0x4]
0066B99C  85 C0                     TEST EAX,EAX
0066B99E  74 11                     JZ 0x0066b9b1
LAB_0066b9a0:
0066B9A0  8D 55 FC                  LEA EDX,[EBP + -0x4]
0066B9A3  8D 45 E7                  LEA EAX,[EBP + -0x19]
0066B9A6  52                        PUSH EDX
0066B9A7  8B 55 B4                  MOV EDX,dword ptr [EBP + -0x4c]
0066B9AA  50                        PUSH EAX
0066B9AB  52                        PUSH EDX
0066B9AC  E8 40 79 D9 FF            CALL 0x004032f1
LAB_0066b9b1:
0066B9B1  6A 04                     PUSH 0x4
0066B9B3  E8 58 F2 03 00            CALL 0x006aac10
0066B9B8  8A 4D E7                  MOV CL,byte ptr [EBP + -0x19]
0066B9BB  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0066B9BE  FE C9                     DEC CL
0066B9C0  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
0066B9C3  F6 D9                     NEG CL
0066B9C5  1B C9                     SBB ECX,ECX
0066B9C7  F7 D1                     NOT ECX
0066B9C9  23 CA                     AND ECX,EDX
0066B9CB  89 08                     MOV dword ptr [EAX],ECX
0066B9CD  E9 5F 4A 00 00            JMP 0x00670431
switchD_0066b69d::caseD_7e4:
0066B9D2  6A 04                     PUSH 0x4
0066B9D4  E8 37 F2 03 00            CALL 0x006aac10
0066B9D9  8A 0D A0 87 80 00         MOV CL,byte ptr [0x008087a0]
0066B9DF  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
0066B9E2  80 F9 03                  CMP CL,0x3
0066B9E5  74 10                     JZ 0x0066b9f7
0066B9E7  80 F9 08                  CMP CL,0x8
0066B9EA  74 0B                     JZ 0x0066b9f7
0066B9EC  C7 00 00 00 00 00         MOV dword ptr [EAX],0x0
0066B9F2  E9 3A 4A 00 00            JMP 0x00670431
LAB_0066b9f7:
0066B9F7  8B 15 40 73 80 00         MOV EDX,dword ptr [0x00807340]
0066B9FD  81 E2 FF 00 00 00         AND EDX,0xff
0066BA03  89 10                     MOV dword ptr [EAX],EDX
0066BA05  E9 27 4A 00 00            JMP 0x00670431
switchD_0066b69d::caseD_7e5:
0066BA0A  33 C0                     XOR EAX,EAX
0066BA0C  3B F8                     CMP EDI,EAX
0066BA0E  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0066BA11  7E 65                     JLE 0x0066ba78
0066BA13  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
LAB_0066ba16:
0066BA16  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0066BA19  8A 04 30                  MOV AL,byte ptr [EAX + ESI*0x1]
0066BA1C  3C 04                     CMP AL,0x4
0066BA1E  74 44                     JZ 0x0066ba64
0066BA20  3C 01                     CMP AL,0x1
0066BA22  74 40                     JZ 0x0066ba64
0066BA24  8D 0C BE                  LEA ECX,[ESI + EDI*0x4]
0066BA27  0F BF 54 0F 01            MOVSX EDX,word ptr [EDI + ECX*0x1 + 0x1]
0066BA2C  52                        PUSH EDX
0066BA2D  E8 A9 9D D9 FF            CALL 0x004057db
0066BA32  85 C0                     TEST EAX,EAX
0066BA34  74 0F                     JZ 0x0066ba45
0066BA36  6A 7F                     PUSH 0x7f
0066BA38  50                        PUSH EAX
0066BA39  8D 43 04                  LEA EAX,[EBX + 0x4]
0066BA3C  50                        PUSH EAX
0066BA3D  E8 FE 28 0C 00            CALL 0x0072e340
0066BA42  83 C4 0C                  ADD ESP,0xc
LAB_0066ba45:
0066BA45  C7 83 84 00 00 00 FF FF FF FF  MOV dword ptr [EBX + 0x84],0xffffffff
0066BA4F  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
0066BA55  6A 79                     PUSH 0x79
0066BA57  68 24 2A 7D 00            PUSH 0x7d2a24
0066BA5C  51                        PUSH ECX
0066BA5D  6A 88                     PUSH -0x78
0066BA5F  E8 DC A3 03 00            CALL 0x006a5e40
LAB_0066ba64:
0066BA64  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0066BA67  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0066BA6A  40                        INC EAX
0066BA6B  83 C2 05                  ADD EDX,0x5
0066BA6E  3B C7                     CMP EAX,EDI
0066BA70  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0066BA73  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
0066BA76  7C 9E                     JL 0x0066ba16
LAB_0066ba78:
0066BA78  8B 13                     MOV EDX,dword ptr [EBX]
0066BA7A  56                        PUSH ESI
0066BA7B  8B CB                     MOV ECX,EBX
0066BA7D  FF 12                     CALL dword ptr [EDX]
0066BA7F  83 F8 09                  CMP EAX,0x9
0066BA82  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0066BA85  75 0C                     JNZ 0x0066ba93
0066BA87  8B 03                     MOV EAX,dword ptr [EBX]
0066BA89  8B CB                     MOV ECX,EBX
0066BA8B  FF 50 18                  CALL dword ptr [EAX + 0x18]
0066BA8E  83 F8 08                  CMP EAX,0x8
0066BA91  74 09                     JZ 0x0066ba9c
LAB_0066ba93:
0066BA93  81 7D FC FF 00 00 00      CMP dword ptr [EBP + -0x4],0xff
0066BA9A  75 40                     JNZ 0x0066badc
LAB_0066ba9c:
0066BA9C  8D 0C BE                  LEA ECX,[ESI + EDI*0x4]
0066BA9F  0F BF 54 0F 01            MOVSX EDX,word ptr [EDI + ECX*0x1 + 0x1]
0066BAA4  52                        PUSH EDX
0066BAA5  E8 31 9D D9 FF            CALL 0x004057db
0066BAAA  85 C0                     TEST EAX,EAX
0066BAAC  74 0F                     JZ 0x0066babd
0066BAAE  6A 7F                     PUSH 0x7f
0066BAB0  50                        PUSH EAX
0066BAB1  8D 43 04                  LEA EAX,[EBX + 0x4]
0066BAB4  50                        PUSH EAX
0066BAB5  E8 86 28 0C 00            CALL 0x0072e340
0066BABA  83 C4 0C                  ADD ESP,0xc
LAB_0066babd:
0066BABD  C7 83 84 00 00 00 FF FF FF FF  MOV dword ptr [EBX + 0x84],0xffffffff
0066BAC7  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
0066BACD  6A 79                     PUSH 0x79
0066BACF  68 24 2A 7D 00            PUSH 0x7d2a24
0066BAD4  51                        PUSH ECX
0066BAD5  6A 88                     PUSH -0x78
0066BAD7  E8 64 A3 03 00            CALL 0x006a5e40
LAB_0066badc:
0066BADC  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0066BADF  8D 55 B4                  LEA EDX,[EBP + -0x4c]
0066BAE2  52                        PUSH EDX
0066BAE3  6A 00                     PUSH 0x0
0066BAE5  50                        PUSH EAX
0066BAE6  8B CB                     MOV ECX,EBX
0066BAE8  E8 CB 5B D9 FF            CALL 0x004016b8
0066BAED  83 F8 01                  CMP EAX,0x1
0066BAF0  74 40                     JZ 0x0066bb32
0066BAF2  8D 0C BE                  LEA ECX,[ESI + EDI*0x4]
0066BAF5  0F BF 54 0F 01            MOVSX EDX,word ptr [EDI + ECX*0x1 + 0x1]
0066BAFA  52                        PUSH EDX
0066BAFB  E8 DB 9C D9 FF            CALL 0x004057db
0066BB00  85 C0                     TEST EAX,EAX
0066BB02  74 0F                     JZ 0x0066bb13
0066BB04  6A 7F                     PUSH 0x7f
0066BB06  50                        PUSH EAX
0066BB07  8D 43 04                  LEA EAX,[EBX + 0x4]
0066BB0A  50                        PUSH EAX
0066BB0B  E8 30 28 0C 00            CALL 0x0072e340
0066BB10  83 C4 0C                  ADD ESP,0xc
LAB_0066bb13:
0066BB13  C7 83 84 00 00 00 FF FF FF FF  MOV dword ptr [EBX + 0x84],0xffffffff
0066BB1D  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
0066BB23  6A 79                     PUSH 0x79
0066BB25  68 24 2A 7D 00            PUSH 0x7d2a24
0066BB2A  51                        PUSH ECX
0066BB2B  6A 88                     PUSH -0x78
0066BB2D  E8 0E A3 03 00            CALL 0x006a5e40
LAB_0066bb32:
0066BB32  6A 04                     PUSH 0x4
0066BB34  E8 D7 F0 03 00            CALL 0x006aac10
0066BB39  8A 0D 8F 8A 80 00         MOV CL,byte ptr [0x00808a8f]
0066BB3F  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
0066BB42  84 C9                     TEST CL,CL
0066BB44  74 18                     JZ 0x0066bb5e
0066BB46  8B 4D B4                  MOV ECX,dword ptr [EBP + -0x4c]
0066BB49  33 D2                     XOR EDX,EDX
0066BB4B  8D 0C C9                  LEA ECX,[ECX + ECX*0x8]
0066BB4E  8A 94 C9 EA 87 80 00      MOV DL,byte ptr [ECX + ECX*0x8 + 0x8087ea]
0066BB55  8B CA                     MOV ECX,EDX
0066BB57  89 08                     MOV dword ptr [EAX],ECX
0066BB59  E9 D3 48 00 00            JMP 0x00670431
LAB_0066bb5e:
0066BB5E  33 C9                     XOR ECX,ECX
0066BB60  89 08                     MOV dword ptr [EAX],ECX
0066BB62  E9 CA 48 00 00            JMP 0x00670431
LAB_0066bb67:
0066BB67  33 C0                     XOR EAX,EAX
0066BB69  3B F8                     CMP EDI,EAX
0066BB6B  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0066BB6E  7E 65                     JLE 0x0066bbd5
0066BB70  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
LAB_0066bb73:
0066BB73  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0066BB76  8A 04 30                  MOV AL,byte ptr [EAX + ESI*0x1]
0066BB79  3C 04                     CMP AL,0x4
0066BB7B  74 44                     JZ 0x0066bbc1
0066BB7D  3C 01                     CMP AL,0x1
0066BB7F  74 40                     JZ 0x0066bbc1
0066BB81  8D 0C BE                  LEA ECX,[ESI + EDI*0x4]
0066BB84  0F BF 54 0F 01            MOVSX EDX,word ptr [EDI + ECX*0x1 + 0x1]
0066BB89  52                        PUSH EDX
0066BB8A  E8 4C 9C D9 FF            CALL 0x004057db
0066BB8F  85 C0                     TEST EAX,EAX
0066BB91  74 0F                     JZ 0x0066bba2
0066BB93  6A 7F                     PUSH 0x7f
0066BB95  50                        PUSH EAX
0066BB96  8D 43 04                  LEA EAX,[EBX + 0x4]
0066BB99  50                        PUSH EAX
0066BB9A  E8 A1 27 0C 00            CALL 0x0072e340
0066BB9F  83 C4 0C                  ADD ESP,0xc
LAB_0066bba2:
0066BBA2  C7 83 84 00 00 00 FF FF FF FF  MOV dword ptr [EBX + 0x84],0xffffffff
0066BBAC  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
0066BBB2  6A 79                     PUSH 0x79
0066BBB4  68 24 2A 7D 00            PUSH 0x7d2a24
0066BBB9  51                        PUSH ECX
0066BBBA  6A 88                     PUSH -0x78
0066BBBC  E8 7F A2 03 00            CALL 0x006a5e40
LAB_0066bbc1:
0066BBC1  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0066BBC4  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0066BBC7  40                        INC EAX
0066BBC8  83 C2 05                  ADD EDX,0x5
0066BBCB  3B C7                     CMP EAX,EDI
0066BBCD  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0066BBD0  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
0066BBD3  7C 9E                     JL 0x0066bb73
LAB_0066bbd5:
0066BBD5  8B 13                     MOV EDX,dword ptr [EBX]
0066BBD7  56                        PUSH ESI
0066BBD8  8B CB                     MOV ECX,EBX
0066BBDA  FF 12                     CALL dword ptr [EDX]
0066BBDC  8D 4E 05                  LEA ECX,[ESI + 0x5]
0066BBDF  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0066BBE2  8B 03                     MOV EAX,dword ptr [EBX]
0066BBE4  51                        PUSH ECX
0066BBE5  8B CB                     MOV ECX,EBX
0066BBE7  FF 10                     CALL dword ptr [EAX]
0066BBE9  8B 13                     MOV EDX,dword ptr [EBX]
0066BBEB  8B CB                     MOV ECX,EBX
0066BBED  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0066BBF0  FF 52 18                  CALL dword ptr [EDX + 0x18]
0066BBF3  83 F8 08                  CMP EAX,0x8
0066BBF6  75 11                     JNZ 0x0066bc09
0066BBF8  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0066BBFB  B8 09 00 00 00            MOV EAX,0x9
0066BC00  3B C8                     CMP ECX,EAX
0066BC02  74 16                     JZ 0x0066bc1a
0066BC04  39 45 F8                  CMP dword ptr [EBP + -0x8],EAX
0066BC07  74 11                     JZ 0x0066bc1a
LAB_0066bc09:
0066BC09  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0066BC0C  B8 FF 00 00 00            MOV EAX,0xff
0066BC11  3B C8                     CMP ECX,EAX
0066BC13  74 05                     JZ 0x0066bc1a
0066BC15  39 45 F8                  CMP dword ptr [EBP + -0x8],EAX
0066BC18  75 3F                     JNZ 0x0066bc59
LAB_0066bc1a:
0066BC1A  8D 04 BE                  LEA EAX,[ESI + EDI*0x4]
0066BC1D  0F BF 4C 07 01            MOVSX ECX,word ptr [EDI + EAX*0x1 + 0x1]
0066BC22  51                        PUSH ECX
0066BC23  E8 B3 9B D9 FF            CALL 0x004057db
0066BC28  85 C0                     TEST EAX,EAX
0066BC2A  74 0F                     JZ 0x0066bc3b
0066BC2C  6A 7F                     PUSH 0x7f
0066BC2E  8D 53 04                  LEA EDX,[EBX + 0x4]
0066BC31  50                        PUSH EAX
0066BC32  52                        PUSH EDX
0066BC33  E8 08 27 0C 00            CALL 0x0072e340
0066BC38  83 C4 0C                  ADD ESP,0xc
LAB_0066bc3b:
0066BC3B  C7 83 84 00 00 00 FF FF FF FF  MOV dword ptr [EBX + 0x84],0xffffffff
0066BC45  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
0066BC4A  6A 79                     PUSH 0x79
0066BC4C  68 24 2A 7D 00            PUSH 0x7d2a24
0066BC51  50                        PUSH EAX
0066BC52  6A 88                     PUSH -0x78
0066BC54  E8 E7 A1 03 00            CALL 0x006a5e40
LAB_0066bc59:
0066BC59  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0066BC5C  8D 4D B4                  LEA ECX,[EBP + -0x4c]
0066BC5F  51                        PUSH ECX
0066BC60  6A 00                     PUSH 0x0
0066BC62  52                        PUSH EDX
0066BC63  8B CB                     MOV ECX,EBX
0066BC65  E8 4E 5A D9 FF            CALL 0x004016b8
0066BC6A  83 F8 01                  CMP EAX,0x1
0066BC6D  74 3F                     JZ 0x0066bcae
0066BC6F  8D 04 BE                  LEA EAX,[ESI + EDI*0x4]
0066BC72  0F BF 4C 07 01            MOVSX ECX,word ptr [EDI + EAX*0x1 + 0x1]
0066BC77  51                        PUSH ECX
0066BC78  E8 5E 9B D9 FF            CALL 0x004057db
0066BC7D  85 C0                     TEST EAX,EAX
0066BC7F  74 0F                     JZ 0x0066bc90
0066BC81  6A 7F                     PUSH 0x7f
0066BC83  8D 53 04                  LEA EDX,[EBX + 0x4]
0066BC86  50                        PUSH EAX
0066BC87  52                        PUSH EDX
0066BC88  E8 B3 26 0C 00            CALL 0x0072e340
0066BC8D  83 C4 0C                  ADD ESP,0xc
LAB_0066bc90:
0066BC90  C7 83 84 00 00 00 FF FF FF FF  MOV dword ptr [EBX + 0x84],0xffffffff
0066BC9A  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
0066BC9F  6A 79                     PUSH 0x79
0066BCA1  68 24 2A 7D 00            PUSH 0x7d2a24
0066BCA6  50                        PUSH EAX
0066BCA7  6A 88                     PUSH -0x78
0066BCA9  E8 92 A1 03 00            CALL 0x006a5e40
LAB_0066bcae:
0066BCAE  8B 4D B4                  MOV ECX,dword ptr [EBP + -0x4c]
0066BCB1  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0066BCB4  8D 55 B4                  LEA EDX,[EBP + -0x4c]
0066BCB7  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0066BCBA  52                        PUSH EDX
0066BCBB  6A 00                     PUSH 0x0
0066BCBD  50                        PUSH EAX
0066BCBE  8B CB                     MOV ECX,EBX
0066BCC0  E8 F3 59 D9 FF            CALL 0x004016b8
0066BCC5  83 F8 01                  CMP EAX,0x1
0066BCC8  74 40                     JZ 0x0066bd0a
0066BCCA  8D 0C BE                  LEA ECX,[ESI + EDI*0x4]
0066BCCD  0F BF 54 0F 01            MOVSX EDX,word ptr [EDI + ECX*0x1 + 0x1]
0066BCD2  52                        PUSH EDX
0066BCD3  E8 03 9B D9 FF            CALL 0x004057db
0066BCD8  85 C0                     TEST EAX,EAX
0066BCDA  74 0F                     JZ 0x0066bceb
0066BCDC  6A 7F                     PUSH 0x7f
0066BCDE  50                        PUSH EAX
0066BCDF  8D 43 04                  LEA EAX,[EBX + 0x4]
0066BCE2  50                        PUSH EAX
0066BCE3  E8 58 26 0C 00            CALL 0x0072e340
0066BCE8  83 C4 0C                  ADD ESP,0xc
LAB_0066bceb:
0066BCEB  C7 83 84 00 00 00 FF FF FF FF  MOV dword ptr [EBX + 0x84],0xffffffff
0066BCF5  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
0066BCFB  6A 79                     PUSH 0x79
0066BCFD  68 24 2A 7D 00            PUSH 0x7d2a24
0066BD02  51                        PUSH ECX
0066BD03  6A 88                     PUSH -0x78
0066BD05  E8 36 A1 03 00            CALL 0x006a5e40
LAB_0066bd0a:
0066BD0A  6A 04                     PUSH 0x4
0066BD0C  E8 FF EE 03 00            CALL 0x006aac10
0066BD11  8B F0                     MOV ESI,EAX
0066BD13  A0 8F 8A 80 00            MOV AL,[0x00808a8f]
0066BD18  84 C0                     TEST AL,AL
0066BD1A  89 75 F0                  MOV dword ptr [EBP + -0x10],ESI
0066BD1D  74 3B                     JZ 0x0066bd5a
0066BD1F  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0066BD22  33 C0                     XOR EAX,EAX
0066BD24  81 E1 FF 00 00 00         AND ECX,0xff
0066BD2A  8D 14 C9                  LEA EDX,[ECX + ECX*0x8]
0066BD2D  8B 4D B4                  MOV ECX,dword ptr [EBP + -0x4c]
0066BD30  81 E1 FF 00 00 00         AND ECX,0xff
0066BD36  8A 94 D2 EA 87 80 00      MOV DL,byte ptr [EDX + EDX*0x8 + 0x8087ea]
0066BD3D  8D 0C C9                  LEA ECX,[ECX + ECX*0x8]
0066BD40  3A 94 C9 EA 87 80 00      CMP DL,byte ptr [ECX + ECX*0x8 + 0x8087ea]
0066BD47  0F 95 C0                  SETNZ AL
0066BD4A  8B C8                     MOV ECX,EAX
0066BD4C  33 C0                     XOR EAX,EAX
0066BD4E  85 C9                     TEST ECX,ECX
0066BD50  0F 95 C0                  SETNZ AL
0066BD53  89 06                     MOV dword ptr [ESI],EAX
0066BD55  E9 D7 46 00 00            JMP 0x00670431
LAB_0066bd5a:
0066BD5A  8B 4D B4                  MOV ECX,dword ptr [EBP + -0x4c]
0066BD5D  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0066BD60  3A CA                     CMP CL,DL
0066BD62  74 68                     JZ 0x0066bdcc
0066BD64  81 E1 FF 00 00 00         AND ECX,0xff
0066BD6A  81 E2 FF 00 00 00         AND EDX,0xff
0066BD70  8A 9C CA 4F 8A 80 00      MOV BL,byte ptr [EDX + ECX*0x8 + 0x808a4f]
0066BD77  84 DB                     TEST BL,BL
0066BD79  75 12                     JNZ 0x0066bd8d
0066BD7B  8A 84 D1 4F 8A 80 00      MOV AL,byte ptr [ECX + EDX*0x8 + 0x808a4f]
0066BD82  84 C0                     TEST AL,AL
0066BD84  75 07                     JNZ 0x0066bd8d
0066BD86  B9 FE FF FF FF            MOV ECX,0xfffffffe
0066BD8B  EB 41                     JMP 0x0066bdce
LAB_0066bd8d:
0066BD8D  80 FB 01                  CMP BL,0x1
0066BD90  75 10                     JNZ 0x0066bda2
0066BD92  8A 84 D1 4F 8A 80 00      MOV AL,byte ptr [ECX + EDX*0x8 + 0x808a4f]
0066BD99  84 C0                     TEST AL,AL
0066BD9B  75 05                     JNZ 0x0066bda2
0066BD9D  83 C9 FF                  OR ECX,0xffffffff
0066BDA0  EB 2C                     JMP 0x0066bdce
LAB_0066bda2:
0066BDA2  84 DB                     TEST BL,BL
0066BDA4  75 11                     JNZ 0x0066bdb7
0066BDA6  80 BC D1 4F 8A 80 00 01   CMP byte ptr [ECX + EDX*0x8 + 0x808a4f],0x1
0066BDAE  75 07                     JNZ 0x0066bdb7
0066BDB0  B9 01 00 00 00            MOV ECX,0x1
0066BDB5  EB 17                     JMP 0x0066bdce
LAB_0066bdb7:
0066BDB7  80 FB 01                  CMP BL,0x1
0066BDBA  75 10                     JNZ 0x0066bdcc
0066BDBC  38 9C D1 4F 8A 80 00      CMP byte ptr [ECX + EDX*0x8 + 0x808a4f],BL
0066BDC3  75 07                     JNZ 0x0066bdcc
0066BDC5  B9 02 00 00 00            MOV ECX,0x2
0066BDCA  EB 02                     JMP 0x0066bdce
LAB_0066bdcc:
0066BDCC  33 C9                     XOR ECX,ECX
LAB_0066bdce:
0066BDCE  33 D2                     XOR EDX,EDX
0066BDD0  85 C9                     TEST ECX,ECX
0066BDD2  0F 9C C2                  SETL DL
0066BDD5  8B CA                     MOV ECX,EDX
0066BDD7  33 C0                     XOR EAX,EAX
0066BDD9  85 C9                     TEST ECX,ECX
0066BDDB  0F 95 C0                  SETNZ AL
0066BDDE  89 06                     MOV dword ptr [ESI],EAX
0066BDE0  E9 4C 46 00 00            JMP 0x00670431
LAB_0066bde5:
0066BDE5  8D 88 19 F8 FF FF         LEA ECX,[EAX + 0xfffff819]
0066BDEB  83 F9 0E                  CMP ECX,0xe
0066BDEE  0F 87 62 46 00 00         JA 0x00670456
switchD_0066bdf4::switchD:
0066BDF4  FF 24 8D 10 05 67 00      JMP dword ptr [ECX*0x4 + 0x670510]
switchD_0066bdf4::caseD_7e7:
0066BDFB  33 C0                     XOR EAX,EAX
0066BDFD  3B F8                     CMP EDI,EAX
0066BDFF  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0066BE02  7E 65                     JLE 0x0066be69
0066BE04  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
LAB_0066be07:
0066BE07  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0066BE0A  8A 04 31                  MOV AL,byte ptr [ECX + ESI*0x1]
0066BE0D  3C 04                     CMP AL,0x4
0066BE0F  74 44                     JZ 0x0066be55
0066BE11  3C 01                     CMP AL,0x1
0066BE13  74 40                     JZ 0x0066be55
0066BE15  8D 14 BE                  LEA EDX,[ESI + EDI*0x4]
0066BE18  0F BF 44 17 01            MOVSX EAX,word ptr [EDI + EDX*0x1 + 0x1]
0066BE1D  50                        PUSH EAX
0066BE1E  E8 B8 99 D9 FF            CALL 0x004057db
0066BE23  85 C0                     TEST EAX,EAX
0066BE25  74 0F                     JZ 0x0066be36
0066BE27  6A 7F                     PUSH 0x7f
0066BE29  8D 4B 04                  LEA ECX,[EBX + 0x4]
0066BE2C  50                        PUSH EAX
0066BE2D  51                        PUSH ECX
0066BE2E  E8 0D 25 0C 00            CALL 0x0072e340
0066BE33  83 C4 0C                  ADD ESP,0xc
LAB_0066be36:
0066BE36  C7 83 84 00 00 00 FF FF FF FF  MOV dword ptr [EBX + 0x84],0xffffffff
0066BE40  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
0066BE46  6A 79                     PUSH 0x79
0066BE48  68 24 2A 7D 00            PUSH 0x7d2a24
0066BE4D  52                        PUSH EDX
0066BE4E  6A 88                     PUSH -0x78
0066BE50  E8 EB 9F 03 00            CALL 0x006a5e40
LAB_0066be55:
0066BE55  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0066BE58  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0066BE5B  40                        INC EAX
0066BE5C  83 C2 05                  ADD EDX,0x5
0066BE5F  3B C7                     CMP EAX,EDI
0066BE61  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0066BE64  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
0066BE67  7C 9E                     JL 0x0066be07
LAB_0066be69:
0066BE69  8B 03                     MOV EAX,dword ptr [EBX]
0066BE6B  56                        PUSH ESI
0066BE6C  8B CB                     MOV ECX,EBX
0066BE6E  FF 10                     CALL dword ptr [EAX]
0066BE70  83 F8 09                  CMP EAX,0x9
0066BE73  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0066BE76  75 0C                     JNZ 0x0066be84
0066BE78  8B 13                     MOV EDX,dword ptr [EBX]
0066BE7A  8B CB                     MOV ECX,EBX
0066BE7C  FF 52 18                  CALL dword ptr [EDX + 0x18]
0066BE7F  83 F8 08                  CMP EAX,0x8
0066BE82  74 0A                     JZ 0x0066be8e
LAB_0066be84:
0066BE84  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0066BE87  3D FF 00 00 00            CMP EAX,0xff
0066BE8C  75 42                     JNZ 0x0066bed0
LAB_0066be8e:
0066BE8E  8D 04 BE                  LEA EAX,[ESI + EDI*0x4]
0066BE91  0F BF 4C 07 01            MOVSX ECX,word ptr [EDI + EAX*0x1 + 0x1]
0066BE96  51                        PUSH ECX
0066BE97  E8 3F 99 D9 FF            CALL 0x004057db
0066BE9C  85 C0                     TEST EAX,EAX
0066BE9E  74 0F                     JZ 0x0066beaf
0066BEA0  6A 7F                     PUSH 0x7f
0066BEA2  8D 53 04                  LEA EDX,[EBX + 0x4]
0066BEA5  50                        PUSH EAX
0066BEA6  52                        PUSH EDX
0066BEA7  E8 94 24 0C 00            CALL 0x0072e340
0066BEAC  83 C4 0C                  ADD ESP,0xc
LAB_0066beaf:
0066BEAF  C7 83 84 00 00 00 FF FF FF FF  MOV dword ptr [EBX + 0x84],0xffffffff
0066BEB9  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
0066BEBE  6A 79                     PUSH 0x79
0066BEC0  68 24 2A 7D 00            PUSH 0x7d2a24
0066BEC5  50                        PUSH EAX
0066BEC6  6A 88                     PUSH -0x78
0066BEC8  E8 73 9F 03 00            CALL 0x006a5e40
0066BECD  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
LAB_0066bed0:
0066BED0  83 F8 08                  CMP EAX,0x8
0066BED3  75 0A                     JNZ 0x0066bedf
0066BED5  33 C0                     XOR EAX,EAX
0066BED7  A0 4D 87 80 00            MOV AL,[0x0080874d]
0066BEDC  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
LAB_0066bedf:
0066BEDF  83 F8 09                  CMP EAX,0x9
0066BEE2  75 0B                     JNZ 0x0066beef
0066BEE4  8B 13                     MOV EDX,dword ptr [EBX]
0066BEE6  8B CB                     MOV ECX,EBX
0066BEE8  FF 52 18                  CALL dword ptr [EDX + 0x18]
0066BEEB  8B F0                     MOV ESI,EAX
0066BEED  EB 03                     JMP 0x0066bef2
LAB_0066beef:
0066BEEF  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
LAB_0066bef2:
0066BEF2  6A 04                     PUSH 0x4
0066BEF4  E8 17 ED 03 00            CALL 0x006aac10
0066BEF9  83 FE 08                  CMP ESI,0x8
0066BEFC  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
0066BEFF  0F 83 59 FC FF FF         JNC 0x0066bb5e
0066BF05  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
0066BF0B  85 C9                     TEST ECX,ECX
0066BF0D  74 11                     JZ 0x0066bf20
0066BF0F  8D 0C F6                  LEA ECX,[ESI + ESI*0x8]
0066BF12  80 BC C9 E9 87 80 00 08   CMP byte ptr [ECX + ECX*0x8 + 0x8087e9],0x8
0066BF1A  0F 83 3E FC FF FF         JNC 0x0066bb5e
LAB_0066bf20:
0066BF20  B9 01 00 00 00            MOV ECX,0x1
0066BF25  89 08                     MOV dword ptr [EAX],ECX
0066BF27  E9 05 45 00 00            JMP 0x00670431
switchD_0066bdf4::caseD_7e8:
0066BF2C  33 C0                     XOR EAX,EAX
0066BF2E  3B F8                     CMP EDI,EAX
0066BF30  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0066BF33  7E 65                     JLE 0x0066bf9a
0066BF35  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
LAB_0066bf38:
0066BF38  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0066BF3B  8A 04 30                  MOV AL,byte ptr [EAX + ESI*0x1]
0066BF3E  3C 04                     CMP AL,0x4
0066BF40  74 44                     JZ 0x0066bf86
0066BF42  3C 01                     CMP AL,0x1
0066BF44  74 40                     JZ 0x0066bf86
0066BF46  8D 0C BE                  LEA ECX,[ESI + EDI*0x4]
0066BF49  0F BF 54 0F 01            MOVSX EDX,word ptr [EDI + ECX*0x1 + 0x1]
0066BF4E  52                        PUSH EDX
0066BF4F  E8 87 98 D9 FF            CALL 0x004057db
0066BF54  85 C0                     TEST EAX,EAX
0066BF56  74 0F                     JZ 0x0066bf67
0066BF58  6A 7F                     PUSH 0x7f
0066BF5A  50                        PUSH EAX
0066BF5B  8D 43 04                  LEA EAX,[EBX + 0x4]
0066BF5E  50                        PUSH EAX
0066BF5F  E8 DC 23 0C 00            CALL 0x0072e340
0066BF64  83 C4 0C                  ADD ESP,0xc
LAB_0066bf67:
0066BF67  C7 83 84 00 00 00 FF FF FF FF  MOV dword ptr [EBX + 0x84],0xffffffff
0066BF71  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
0066BF77  6A 79                     PUSH 0x79
0066BF79  68 24 2A 7D 00            PUSH 0x7d2a24
0066BF7E  51                        PUSH ECX
0066BF7F  6A 88                     PUSH -0x78
0066BF81  E8 BA 9E 03 00            CALL 0x006a5e40
LAB_0066bf86:
0066BF86  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0066BF89  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0066BF8C  40                        INC EAX
0066BF8D  83 C2 05                  ADD EDX,0x5
0066BF90  3B C7                     CMP EAX,EDI
0066BF92  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0066BF95  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
0066BF98  7C 9E                     JL 0x0066bf38
LAB_0066bf9a:
0066BF9A  8B 13                     MOV EDX,dword ptr [EBX]
0066BF9C  56                        PUSH ESI
0066BF9D  8B CB                     MOV ECX,EBX
0066BF9F  FF 12                     CALL dword ptr [EDX]
0066BFA1  8A 0D 8F 8A 80 00         MOV CL,byte ptr [0x00808a8f]
0066BFA7  33 F6                     XOR ESI,ESI
0066BFA9  84 C9                     TEST CL,CL
0066BFAB  74 46                     JZ 0x0066bff3
0066BFAD  8B 3D 38 2A 80 00         MOV EDI,dword ptr [0x00802a38]
0066BFB3  B9 EA 87 80 00            MOV ECX,0x8087ea
0066BFB8  81 F9 72 8A 80 00         CMP ECX,0x808a72
0066BFBE  7D 12                     JGE 0x0066bfd2
LAB_0066bfc0:
0066BFC0  85 FF                     TEST EDI,EDI
0066BFC2  74 06                     JZ 0x0066bfca
0066BFC4  80 79 FF 08               CMP byte ptr [ECX + -0x1],0x8
0066BFC8  73 08                     JNC 0x0066bfd2
LAB_0066bfca:
0066BFCA  33 D2                     XOR EDX,EDX
0066BFCC  8A 11                     MOV DL,byte ptr [ECX]
0066BFCE  3B D0                     CMP EDX,EAX
0066BFD0  74 1C                     JZ 0x0066bfee
LAB_0066bfd2:
0066BFD2  83 C1 51                  ADD ECX,0x51
0066BFD5  81 F9 72 8A 80 00         CMP ECX,0x808a72
0066BFDB  7C E3                     JL 0x0066bfc0
0066BFDD  6A 04                     PUSH 0x4
0066BFDF  E8 2C EC 03 00            CALL 0x006aac10
0066BFE4  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
0066BFE7  89 30                     MOV dword ptr [EAX],ESI
0066BFE9  E9 43 44 00 00            JMP 0x00670431
LAB_0066bfee:
0066BFEE  BE 01 00 00 00            MOV ESI,0x1
LAB_0066bff3:
0066BFF3  6A 04                     PUSH 0x4
0066BFF5  E8 16 EC 03 00            CALL 0x006aac10
0066BFFA  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
0066BFFD  89 30                     MOV dword ptr [EAX],ESI
0066BFFF  E9 2D 44 00 00            JMP 0x00670431
switchD_0066bdf4::caseD_7e9:
0066C004  6A 04                     PUSH 0x4
0066C006  E8 05 EC 03 00            CALL 0x006aac10
0066C00B  8A 15 8F 8A 80 00         MOV DL,byte ptr [0x00808a8f]
0066C011  33 C9                     XOR ECX,ECX
0066C013  84 D2                     TEST DL,DL
0066C015  0F 95 C1                  SETNZ CL
0066C018  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
0066C01B  89 08                     MOV dword ptr [EAX],ECX
0066C01D  E9 0F 44 00 00            JMP 0x00670431
switchD_0066bdf4::caseD_7ea:
0066C022  33 C0                     XOR EAX,EAX
0066C024  3B F8                     CMP EDI,EAX
0066C026  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0066C029  7E 64                     JLE 0x0066c08f
0066C02B  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
LAB_0066c02e:
0066C02E  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0066C031  8A 04 32                  MOV AL,byte ptr [EDX + ESI*0x1]
0066C034  3C 04                     CMP AL,0x4
0066C036  74 43                     JZ 0x0066c07b
0066C038  3C 01                     CMP AL,0x1
0066C03A  74 3F                     JZ 0x0066c07b
0066C03C  8D 04 BE                  LEA EAX,[ESI + EDI*0x4]
0066C03F  0F BF 4C 07 01            MOVSX ECX,word ptr [EDI + EAX*0x1 + 0x1]
0066C044  51                        PUSH ECX
0066C045  E8 91 97 D9 FF            CALL 0x004057db
0066C04A  85 C0                     TEST EAX,EAX
0066C04C  74 0F                     JZ 0x0066c05d
0066C04E  6A 7F                     PUSH 0x7f
0066C050  8D 53 04                  LEA EDX,[EBX + 0x4]
0066C053  50                        PUSH EAX
0066C054  52                        PUSH EDX
0066C055  E8 E6 22 0C 00            CALL 0x0072e340
0066C05A  83 C4 0C                  ADD ESP,0xc
LAB_0066c05d:
0066C05D  C7 83 84 00 00 00 FF FF FF FF  MOV dword ptr [EBX + 0x84],0xffffffff
0066C067  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
0066C06C  6A 79                     PUSH 0x79
0066C06E  68 24 2A 7D 00            PUSH 0x7d2a24
0066C073  50                        PUSH EAX
0066C074  6A 88                     PUSH -0x78
0066C076  E8 C5 9D 03 00            CALL 0x006a5e40
LAB_0066c07b:
0066C07B  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0066C07E  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0066C081  40                        INC EAX
0066C082  83 C2 05                  ADD EDX,0x5
0066C085  3B C7                     CMP EAX,EDI
0066C087  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0066C08A  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
0066C08D  7C 9F                     JL 0x0066c02e
LAB_0066c08f:
0066C08F  8B 13                     MOV EDX,dword ptr [EBX]
0066C091  56                        PUSH ESI
0066C092  8B CB                     MOV ECX,EBX
0066C094  FF 12                     CALL dword ptr [EDX]
0066C096  83 F8 09                  CMP EAX,0x9
0066C099  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0066C09C  75 0C                     JNZ 0x0066c0aa
0066C09E  8B 03                     MOV EAX,dword ptr [EBX]
0066C0A0  8B CB                     MOV ECX,EBX
0066C0A2  FF 50 18                  CALL dword ptr [EAX + 0x18]
0066C0A5  83 F8 08                  CMP EAX,0x8
0066C0A8  74 09                     JZ 0x0066c0b3
LAB_0066c0aa:
0066C0AA  81 7D FC FF 00 00 00      CMP dword ptr [EBP + -0x4],0xff
0066C0B1  75 40                     JNZ 0x0066c0f3
LAB_0066c0b3:
0066C0B3  8D 0C BE                  LEA ECX,[ESI + EDI*0x4]
0066C0B6  0F BF 54 0F 01            MOVSX EDX,word ptr [EDI + ECX*0x1 + 0x1]
0066C0BB  52                        PUSH EDX
0066C0BC  E8 1A 97 D9 FF            CALL 0x004057db
0066C0C1  85 C0                     TEST EAX,EAX
0066C0C3  74 0F                     JZ 0x0066c0d4
0066C0C5  6A 7F                     PUSH 0x7f
0066C0C7  50                        PUSH EAX
0066C0C8  8D 43 04                  LEA EAX,[EBX + 0x4]
0066C0CB  50                        PUSH EAX
0066C0CC  E8 6F 22 0C 00            CALL 0x0072e340
0066C0D1  83 C4 0C                  ADD ESP,0xc
LAB_0066c0d4:
0066C0D4  C7 83 84 00 00 00 FF FF FF FF  MOV dword ptr [EBX + 0x84],0xffffffff
0066C0DE  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
0066C0E4  6A 79                     PUSH 0x79
0066C0E6  68 24 2A 7D 00            PUSH 0x7d2a24
0066C0EB  51                        PUSH ECX
0066C0EC  6A 88                     PUSH -0x78
0066C0EE  E8 4D 9D 03 00            CALL 0x006a5e40
LAB_0066c0f3:
0066C0F3  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0066C0F6  8D 55 B4                  LEA EDX,[EBP + -0x4c]
0066C0F9  52                        PUSH EDX
0066C0FA  6A 00                     PUSH 0x0
0066C0FC  50                        PUSH EAX
0066C0FD  8B CB                     MOV ECX,EBX
0066C0FF  E8 B4 55 D9 FF            CALL 0x004016b8
0066C104  83 F8 01                  CMP EAX,0x1
0066C107  74 40                     JZ 0x0066c149
0066C109  8D 0C BE                  LEA ECX,[ESI + EDI*0x4]
0066C10C  0F BF 54 0F 01            MOVSX EDX,word ptr [EDI + ECX*0x1 + 0x1]
0066C111  52                        PUSH EDX
0066C112  E8 C4 96 D9 FF            CALL 0x004057db
0066C117  85 C0                     TEST EAX,EAX
0066C119  74 0F                     JZ 0x0066c12a
0066C11B  6A 7F                     PUSH 0x7f
0066C11D  50                        PUSH EAX
0066C11E  8D 43 04                  LEA EAX,[EBX + 0x4]
0066C121  50                        PUSH EAX
0066C122  E8 19 22 0C 00            CALL 0x0072e340
0066C127  83 C4 0C                  ADD ESP,0xc
LAB_0066c12a:
0066C12A  C7 83 84 00 00 00 FF FF FF FF  MOV dword ptr [EBX + 0x84],0xffffffff
0066C134  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
0066C13A  6A 79                     PUSH 0x79
0066C13C  68 24 2A 7D 00            PUSH 0x7d2a24
0066C141  51                        PUSH ECX
0066C142  6A 88                     PUSH -0x78
0066C144  E8 F7 9C 03 00            CALL 0x006a5e40
LAB_0066c149:
0066C149  6A 04                     PUSH 0x4
0066C14B  E8 C0 EA 03 00            CALL 0x006aac10
0066C150  8B 4D B4                  MOV ECX,dword ptr [EBP + -0x4c]
0066C153  33 D2                     XOR EDX,EDX
0066C155  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
0066C158  8A 91 50 99 80 00         MOV DL,byte ptr [ECX + 0x809950]
0066C15E  89 10                     MOV dword ptr [EAX],EDX
0066C160  E9 CC 42 00 00            JMP 0x00670431
switchD_0066bdf4::caseD_7eb:
0066C165  6A 04                     PUSH 0x4
0066C167  E8 A4 EA 03 00            CALL 0x006aac10
0066C16C  33 D2                     XOR EDX,EDX
0066C16E  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
0066C171  8A 15 4D 87 80 00         MOV DL,byte ptr [0x0080874d]
0066C177  89 10                     MOV dword ptr [EAX],EDX
0066C179  E9 B3 42 00 00            JMP 0x00670431
switchD_0066bdf4::caseD_7ec:
0066C17E  33 C0                     XOR EAX,EAX
0066C180  3B F8                     CMP EDI,EAX
0066C182  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0066C185  7E 65                     JLE 0x0066c1ec
0066C187  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
LAB_0066c18a:
0066C18A  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0066C18D  8A 04 30                  MOV AL,byte ptr [EAX + ESI*0x1]
0066C190  3C 04                     CMP AL,0x4
0066C192  74 44                     JZ 0x0066c1d8
0066C194  3C 01                     CMP AL,0x1
0066C196  74 40                     JZ 0x0066c1d8
0066C198  8D 0C BE                  LEA ECX,[ESI + EDI*0x4]
0066C19B  0F BF 54 0F 01            MOVSX EDX,word ptr [EDI + ECX*0x1 + 0x1]
0066C1A0  52                        PUSH EDX
0066C1A1  E8 35 96 D9 FF            CALL 0x004057db
0066C1A6  85 C0                     TEST EAX,EAX
0066C1A8  74 0F                     JZ 0x0066c1b9
0066C1AA  6A 7F                     PUSH 0x7f
0066C1AC  50                        PUSH EAX
0066C1AD  8D 43 04                  LEA EAX,[EBX + 0x4]
0066C1B0  50                        PUSH EAX
0066C1B1  E8 8A 21 0C 00            CALL 0x0072e340
0066C1B6  83 C4 0C                  ADD ESP,0xc
LAB_0066c1b9:
0066C1B9  C7 83 84 00 00 00 FF FF FF FF  MOV dword ptr [EBX + 0x84],0xffffffff
0066C1C3  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
0066C1C9  6A 79                     PUSH 0x79
0066C1CB  68 24 2A 7D 00            PUSH 0x7d2a24
0066C1D0  51                        PUSH ECX
0066C1D1  6A 88                     PUSH -0x78
0066C1D3  E8 68 9C 03 00            CALL 0x006a5e40
LAB_0066c1d8:
0066C1D8  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0066C1DB  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0066C1DE  40                        INC EAX
0066C1DF  83 C2 05                  ADD EDX,0x5
0066C1E2  3B C7                     CMP EAX,EDI
0066C1E4  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0066C1E7  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
0066C1EA  7C 9E                     JL 0x0066c18a
LAB_0066c1ec:
0066C1EC  8B 13                     MOV EDX,dword ptr [EBX]
0066C1EE  56                        PUSH ESI
0066C1EF  8B CB                     MOV ECX,EBX
0066C1F1  FF 12                     CALL dword ptr [EDX]
0066C1F3  83 F8 09                  CMP EAX,0x9
0066C1F6  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0066C1F9  75 0C                     JNZ 0x0066c207
0066C1FB  8B 03                     MOV EAX,dword ptr [EBX]
0066C1FD  8B CB                     MOV ECX,EBX
0066C1FF  FF 50 18                  CALL dword ptr [EAX + 0x18]
0066C202  83 F8 08                  CMP EAX,0x8
0066C205  74 09                     JZ 0x0066c210
LAB_0066c207:
0066C207  81 7D FC FF 00 00 00      CMP dword ptr [EBP + -0x4],0xff
0066C20E  75 40                     JNZ 0x0066c250
LAB_0066c210:
0066C210  8D 0C BE                  LEA ECX,[ESI + EDI*0x4]
0066C213  0F BF 54 0F 01            MOVSX EDX,word ptr [EDI + ECX*0x1 + 0x1]
0066C218  52                        PUSH EDX
0066C219  E8 BD 95 D9 FF            CALL 0x004057db
0066C21E  85 C0                     TEST EAX,EAX
0066C220  74 0F                     JZ 0x0066c231
0066C222  6A 7F                     PUSH 0x7f
0066C224  50                        PUSH EAX
0066C225  8D 43 04                  LEA EAX,[EBX + 0x4]
0066C228  50                        PUSH EAX
0066C229  E8 12 21 0C 00            CALL 0x0072e340
0066C22E  83 C4 0C                  ADD ESP,0xc
LAB_0066c231:
0066C231  C7 83 84 00 00 00 FF FF FF FF  MOV dword ptr [EBX + 0x84],0xffffffff
0066C23B  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
0066C241  6A 79                     PUSH 0x79
0066C243  68 24 2A 7D 00            PUSH 0x7d2a24
0066C248  51                        PUSH ECX
0066C249  6A 88                     PUSH -0x78
0066C24B  E8 F0 9B 03 00            CALL 0x006a5e40
LAB_0066c250:
0066C250  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0066C253  8D 55 B4                  LEA EDX,[EBP + -0x4c]
0066C256  52                        PUSH EDX
0066C257  6A 00                     PUSH 0x0
0066C259  50                        PUSH EAX
0066C25A  8B CB                     MOV ECX,EBX
0066C25C  E8 57 54 D9 FF            CALL 0x004016b8
0066C261  83 F8 01                  CMP EAX,0x1
0066C264  74 40                     JZ 0x0066c2a6
0066C266  8D 0C BE                  LEA ECX,[ESI + EDI*0x4]
0066C269  0F BF 54 0F 01            MOVSX EDX,word ptr [EDI + ECX*0x1 + 0x1]
0066C26E  52                        PUSH EDX
0066C26F  E8 67 95 D9 FF            CALL 0x004057db
0066C274  85 C0                     TEST EAX,EAX
0066C276  74 0F                     JZ 0x0066c287
0066C278  6A 7F                     PUSH 0x7f
0066C27A  50                        PUSH EAX
0066C27B  8D 43 04                  LEA EAX,[EBX + 0x4]
0066C27E  50                        PUSH EAX
0066C27F  E8 BC 20 0C 00            CALL 0x0072e340
0066C284  83 C4 0C                  ADD ESP,0xc
LAB_0066c287:
0066C287  C7 83 84 00 00 00 FF FF FF FF  MOV dword ptr [EBX + 0x84],0xffffffff
0066C291  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
0066C297  6A 79                     PUSH 0x79
0066C299  68 24 2A 7D 00            PUSH 0x7d2a24
0066C29E  51                        PUSH ECX
0066C29F  6A 88                     PUSH -0x78
0066C2A1  E8 9A 9B 03 00            CALL 0x006a5e40
LAB_0066c2a6:
0066C2A6  6A 04                     PUSH 0x4
0066C2A8  E8 63 E9 03 00            CALL 0x006aac10
0066C2AD  8B 4D B4                  MOV ECX,dword ptr [EBP + -0x4c]
0066C2B0  33 D2                     XOR EDX,EDX
0066C2B2  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
0066C2B5  8D 0C C9                  LEA ECX,[ECX + ECX*0x8]
0066C2B8  8A 94 C9 E8 87 80 00      MOV DL,byte ptr [ECX + ECX*0x8 + 0x8087e8]
0066C2BF  89 10                     MOV dword ptr [EAX],EDX
0066C2C1  E9 6B 41 00 00            JMP 0x00670431
switchD_0066bdf4::caseD_7ed:
0066C2C6  6A 04                     PUSH 0x4
0066C2C8  E8 43 E9 03 00            CALL 0x006aac10
0066C2CD  8A 15 94 8A 80 00         MOV DL,byte ptr [0x00808a94]
0066C2D3  33 C9                     XOR ECX,ECX
0066C2D5  84 D2                     TEST DL,DL
0066C2D7  0F 95 C1                  SETNZ CL
0066C2DA  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
0066C2DD  89 08                     MOV dword ptr [EAX],ECX
0066C2DF  E9 4D 41 00 00            JMP 0x00670431
switchD_0066bdf4::caseD_7ee:
0066C2E4  33 C0                     XOR EAX,EAX
0066C2E6  3B F8                     CMP EDI,EAX
0066C2E8  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0066C2EB  7E 64                     JLE 0x0066c351
0066C2ED  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
LAB_0066c2f0:
0066C2F0  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0066C2F3  8A 04 32                  MOV AL,byte ptr [EDX + ESI*0x1]
0066C2F6  3C 04                     CMP AL,0x4
0066C2F8  74 43                     JZ 0x0066c33d
0066C2FA  3C 01                     CMP AL,0x1
0066C2FC  74 3F                     JZ 0x0066c33d
0066C2FE  8D 04 BE                  LEA EAX,[ESI + EDI*0x4]
0066C301  0F BF 4C 07 01            MOVSX ECX,word ptr [EDI + EAX*0x1 + 0x1]
0066C306  51                        PUSH ECX
0066C307  E8 CF 94 D9 FF            CALL 0x004057db
0066C30C  85 C0                     TEST EAX,EAX
0066C30E  74 0F                     JZ 0x0066c31f
0066C310  6A 7F                     PUSH 0x7f
0066C312  8D 53 04                  LEA EDX,[EBX + 0x4]
0066C315  50                        PUSH EAX
0066C316  52                        PUSH EDX
0066C317  E8 24 20 0C 00            CALL 0x0072e340
0066C31C  83 C4 0C                  ADD ESP,0xc
LAB_0066c31f:
0066C31F  C7 83 84 00 00 00 FF FF FF FF  MOV dword ptr [EBX + 0x84],0xffffffff
0066C329  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
0066C32E  6A 79                     PUSH 0x79
0066C330  68 24 2A 7D 00            PUSH 0x7d2a24
0066C335  50                        PUSH EAX
0066C336  6A 88                     PUSH -0x78
0066C338  E8 03 9B 03 00            CALL 0x006a5e40
LAB_0066c33d:
0066C33D  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0066C340  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0066C343  40                        INC EAX
0066C344  83 C2 05                  ADD EDX,0x5
0066C347  3B C7                     CMP EAX,EDI
0066C349  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0066C34C  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
0066C34F  7C 9F                     JL 0x0066c2f0
LAB_0066c351:
0066C351  8B 13                     MOV EDX,dword ptr [EBX]
0066C353  56                        PUSH ESI
0066C354  8B CB                     MOV ECX,EBX
0066C356  FF 12                     CALL dword ptr [EDX]
0066C358  83 F8 09                  CMP EAX,0x9
0066C35B  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0066C35E  75 4C                     JNZ 0x0066c3ac
0066C360  8B 03                     MOV EAX,dword ptr [EBX]
0066C362  8B CB                     MOV ECX,EBX
0066C364  FF 50 18                  CALL dword ptr [EAX + 0x18]
0066C367  83 F8 08                  CMP EAX,0x8
0066C36A  75 40                     JNZ 0x0066c3ac
0066C36C  8D 0C BE                  LEA ECX,[ESI + EDI*0x4]
0066C36F  0F BF 54 0F 01            MOVSX EDX,word ptr [EDI + ECX*0x1 + 0x1]
0066C374  52                        PUSH EDX
0066C375  E8 61 94 D9 FF            CALL 0x004057db
0066C37A  85 C0                     TEST EAX,EAX
0066C37C  74 0F                     JZ 0x0066c38d
0066C37E  6A 7F                     PUSH 0x7f
0066C380  50                        PUSH EAX
0066C381  8D 43 04                  LEA EAX,[EBX + 0x4]
0066C384  50                        PUSH EAX
0066C385  E8 B6 1F 0C 00            CALL 0x0072e340
0066C38A  83 C4 0C                  ADD ESP,0xc
LAB_0066c38d:
0066C38D  C7 83 84 00 00 00 FF FF FF FF  MOV dword ptr [EBX + 0x84],0xffffffff
0066C397  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
0066C39D  6A 79                     PUSH 0x79
0066C39F  68 24 2A 7D 00            PUSH 0x7d2a24
0066C3A4  51                        PUSH ECX
0066C3A5  6A 88                     PUSH -0x78
0066C3A7  E8 94 9A 03 00            CALL 0x006a5e40
LAB_0066c3ac:
0066C3AC  8B 03                     MOV EAX,dword ptr [EBX]
0066C3AE  8D 55 B4                  LEA EDX,[EBP + -0x4c]
0066C3B1  8D 4E 05                  LEA ECX,[ESI + 0x5]
0066C3B4  52                        PUSH EDX
0066C3B5  51                        PUSH ECX
0066C3B6  8B CB                     MOV ECX,EBX
0066C3B8  FF 10                     CALL dword ptr [EAX]
0066C3BA  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0066C3BD  50                        PUSH EAX
0066C3BE  52                        PUSH EDX
0066C3BF  8B CB                     MOV ECX,EBX
0066C3C1  E8 F2 52 D9 FF            CALL 0x004016b8
0066C3C6  85 C0                     TEST EAX,EAX
0066C3C8  C7 05 80 19 81 00 00 00 00 00  MOV dword ptr [0x00811980],0x0
0066C3D2  0F 8E 86 1B 00 00         JLE 0x0066df5e
0066C3D8  8D 4E 2D                  LEA ECX,[ESI + 0x2d]
0066C3DB  8D 56 28                  LEA EDX,[ESI + 0x28]
0066C3DE  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
0066C3E1  8D 4E 23                  LEA ECX,[ESI + 0x23]
0066C3E4  89 55 EC                  MOV dword ptr [EBP + -0x14],EDX
0066C3E7  89 4D D8                  MOV dword ptr [EBP + -0x28],ECX
0066C3EA  8D 56 1E                  LEA EDX,[ESI + 0x1e]
0066C3ED  8D 4E 19                  LEA ECX,[ESI + 0x19]
0066C3F0  89 55 E8                  MOV dword ptr [EBP + -0x18],EDX
0066C3F3  89 4D E0                  MOV dword ptr [EBP + -0x20],ECX
0066C3F6  8D 56 14                  LEA EDX,[ESI + 0x14]
0066C3F9  8D 4E 0F                  LEA ECX,[ESI + 0xf]
0066C3FC  83 C6 0A                  ADD ESI,0xa
0066C3FF  89 55 D4                  MOV dword ptr [EBP + -0x2c],EDX
0066C402  89 75 F8                  MOV dword ptr [EBP + -0x8],ESI
0066C405  89 4D DC                  MOV dword ptr [EBP + -0x24],ECX
0066C408  8D 75 B4                  LEA ESI,[EBP + -0x4c]
0066C40B  8B F8                     MOV EDI,EAX
LAB_0066c40d:
0066C40D  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0066C410  8B 13                     MOV EDX,dword ptr [EBX]
0066C412  6A 00                     PUSH 0x0
0066C414  6A 00                     PUSH 0x0
0066C416  68 8D 1E 40 00            PUSH 0x401e8d
0066C41B  50                        PUSH EAX
0066C41C  8B CB                     MOV ECX,EBX
0066C41E  FF 12                     CALL dword ptr [EDX]
0066C420  8B 13                     MOV EDX,dword ptr [EBX]
0066C422  50                        PUSH EAX
0066C423  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
0066C426  8B CB                     MOV ECX,EBX
0066C428  50                        PUSH EAX
0066C429  FF 12                     CALL dword ptr [EDX]
0066C42B  8B 13                     MOV EDX,dword ptr [EBX]
0066C42D  50                        PUSH EAX
0066C42E  8B 45 D8                  MOV EAX,dword ptr [EBP + -0x28]
0066C431  8B CB                     MOV ECX,EBX
0066C433  50                        PUSH EAX
0066C434  FF 12                     CALL dword ptr [EDX]
0066C436  8B 13                     MOV EDX,dword ptr [EBX]
0066C438  50                        PUSH EAX
0066C439  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
0066C43C  8B CB                     MOV ECX,EBX
0066C43E  50                        PUSH EAX
0066C43F  FF 12                     CALL dword ptr [EDX]
0066C441  8B 13                     MOV EDX,dword ptr [EBX]
0066C443  50                        PUSH EAX
0066C444  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
0066C447  8B CB                     MOV ECX,EBX
0066C449  50                        PUSH EAX
0066C44A  FF 12                     CALL dword ptr [EDX]
0066C44C  8B 13                     MOV EDX,dword ptr [EBX]
0066C44E  50                        PUSH EAX
0066C44F  8B 45 D4                  MOV EAX,dword ptr [EBP + -0x2c]
0066C452  8B CB                     MOV ECX,EBX
0066C454  50                        PUSH EAX
0066C455  FF 12                     CALL dword ptr [EDX]
0066C457  8B 13                     MOV EDX,dword ptr [EBX]
0066C459  50                        PUSH EAX
0066C45A  8B 45 DC                  MOV EAX,dword ptr [EBP + -0x24]
0066C45D  8B CB                     MOV ECX,EBX
0066C45F  50                        PUSH EAX
0066C460  FF 12                     CALL dword ptr [EDX]
0066C462  8B 13                     MOV EDX,dword ptr [EBX]
0066C464  50                        PUSH EAX
0066C465  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0066C468  6A 00                     PUSH 0x0
0066C46A  68 FF FF FF 3F            PUSH 0x3fffffff
0066C46F  50                        PUSH EAX
0066C470  8B CB                     MOV ECX,EBX
0066C472  FF 12                     CALL dword ptr [EDX]
0066C474  8B 0E                     MOV ECX,dword ptr [ESI]
0066C476  50                        PUSH EAX
0066C477  51                        PUSH ECX
0066C478  E8 7B 4E D9 FF            CALL 0x004012f8
0066C47D  83 C4 38                  ADD ESP,0x38
0066C480  83 C6 04                  ADD ESI,0x4
0066C483  4F                        DEC EDI
0066C484  75 87                     JNZ 0x0066c40d
0066C486  E9 D3 1A 00 00            JMP 0x0066df5e
switchD_0066bdf4::caseD_7ef:
0066C48B  33 C0                     XOR EAX,EAX
0066C48D  3B F8                     CMP EDI,EAX
0066C48F  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0066C492  7E 65                     JLE 0x0066c4f9
0066C494  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
LAB_0066c497:
0066C497  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0066C49A  8A 04 30                  MOV AL,byte ptr [EAX + ESI*0x1]
0066C49D  3C 04                     CMP AL,0x4
0066C49F  74 44                     JZ 0x0066c4e5
0066C4A1  3C 01                     CMP AL,0x1
0066C4A3  74 40                     JZ 0x0066c4e5
0066C4A5  8D 0C BE                  LEA ECX,[ESI + EDI*0x4]
0066C4A8  0F BF 54 0F 01            MOVSX EDX,word ptr [EDI + ECX*0x1 + 0x1]
0066C4AD  52                        PUSH EDX
0066C4AE  E8 28 93 D9 FF            CALL 0x004057db
0066C4B3  85 C0                     TEST EAX,EAX
0066C4B5  74 0F                     JZ 0x0066c4c6
0066C4B7  6A 7F                     PUSH 0x7f
0066C4B9  50                        PUSH EAX
0066C4BA  8D 43 04                  LEA EAX,[EBX + 0x4]
0066C4BD  50                        PUSH EAX
0066C4BE  E8 7D 1E 0C 00            CALL 0x0072e340
0066C4C3  83 C4 0C                  ADD ESP,0xc
LAB_0066c4c6:
0066C4C6  C7 83 84 00 00 00 FF FF FF FF  MOV dword ptr [EBX + 0x84],0xffffffff
0066C4D0  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
0066C4D6  6A 79                     PUSH 0x79
0066C4D8  68 24 2A 7D 00            PUSH 0x7d2a24
0066C4DD  51                        PUSH ECX
0066C4DE  6A 88                     PUSH -0x78
0066C4E0  E8 5B 99 03 00            CALL 0x006a5e40
LAB_0066c4e5:
0066C4E5  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0066C4E8  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0066C4EB  40                        INC EAX
0066C4EC  83 C2 05                  ADD EDX,0x5
0066C4EF  3B C7                     CMP EAX,EDI
0066C4F1  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0066C4F4  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
0066C4F7  7C 9E                     JL 0x0066c497
LAB_0066c4f9:
0066C4F9  8B 13                     MOV EDX,dword ptr [EBX]
0066C4FB  56                        PUSH ESI
0066C4FC  8B CB                     MOV ECX,EBX
0066C4FE  FF 12                     CALL dword ptr [EDX]
0066C500  83 F8 09                  CMP EAX,0x9
0066C503  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0066C506  75 4C                     JNZ 0x0066c554
0066C508  8B 03                     MOV EAX,dword ptr [EBX]
0066C50A  8B CB                     MOV ECX,EBX
0066C50C  FF 50 18                  CALL dword ptr [EAX + 0x18]
0066C50F  83 F8 08                  CMP EAX,0x8
0066C512  75 40                     JNZ 0x0066c554
0066C514  8D 0C BE                  LEA ECX,[ESI + EDI*0x4]
0066C517  0F BF 54 0F 01            MOVSX EDX,word ptr [EDI + ECX*0x1 + 0x1]
0066C51C  52                        PUSH EDX
0066C51D  E8 B9 92 D9 FF            CALL 0x004057db
0066C522  85 C0                     TEST EAX,EAX
0066C524  74 0F                     JZ 0x0066c535
0066C526  6A 7F                     PUSH 0x7f
0066C528  50                        PUSH EAX
0066C529  8D 43 04                  LEA EAX,[EBX + 0x4]
0066C52C  50                        PUSH EAX
0066C52D  E8 0E 1E 0C 00            CALL 0x0072e340
0066C532  83 C4 0C                  ADD ESP,0xc
LAB_0066c535:
0066C535  C7 83 84 00 00 00 FF FF FF FF  MOV dword ptr [EBX + 0x84],0xffffffff
0066C53F  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
0066C545  6A 79                     PUSH 0x79
0066C547  68 24 2A 7D 00            PUSH 0x7d2a24
0066C54C  51                        PUSH ECX
0066C54D  6A 88                     PUSH -0x78
0066C54F  E8 EC 98 03 00            CALL 0x006a5e40
LAB_0066c554:
0066C554  8B 03                     MOV EAX,dword ptr [EBX]
0066C556  8D 55 B4                  LEA EDX,[EBP + -0x4c]
0066C559  8D 4E 05                  LEA ECX,[ESI + 0x5]
0066C55C  52                        PUSH EDX
0066C55D  51                        PUSH ECX
0066C55E  8B CB                     MOV ECX,EBX
0066C560  FF 10                     CALL dword ptr [EAX]
0066C562  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0066C565  50                        PUSH EAX
0066C566  52                        PUSH EDX
0066C567  8B CB                     MOV ECX,EBX
0066C569  E8 4A 51 D9 FF            CALL 0x004016b8
0066C56E  85 C0                     TEST EAX,EAX
0066C570  C7 05 80 19 81 00 00 00 00 00  MOV dword ptr [0x00811980],0x0
0066C57A  0F 8E DE 19 00 00         JLE 0x0066df5e
0066C580  8D 4E 2D                  LEA ECX,[ESI + 0x2d]
0066C583  8D 56 28                  LEA EDX,[ESI + 0x28]
0066C586  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
0066C589  8D 4E 23                  LEA ECX,[ESI + 0x23]
0066C58C  89 55 EC                  MOV dword ptr [EBP + -0x14],EDX
0066C58F  89 4D D8                  MOV dword ptr [EBP + -0x28],ECX
0066C592  8D 56 1E                  LEA EDX,[ESI + 0x1e]
0066C595  8D 4E 19                  LEA ECX,[ESI + 0x19]
0066C598  89 55 E8                  MOV dword ptr [EBP + -0x18],EDX
0066C59B  89 4D E0                  MOV dword ptr [EBP + -0x20],ECX
0066C59E  8D 56 14                  LEA EDX,[ESI + 0x14]
0066C5A1  8D 4E 0F                  LEA ECX,[ESI + 0xf]
0066C5A4  83 C6 0A                  ADD ESI,0xa
0066C5A7  89 55 D4                  MOV dword ptr [EBP + -0x2c],EDX
0066C5AA  89 75 F8                  MOV dword ptr [EBP + -0x8],ESI
0066C5AD  89 4D DC                  MOV dword ptr [EBP + -0x24],ECX
0066C5B0  8D 75 B4                  LEA ESI,[EBP + -0x4c]
0066C5B3  8B F8                     MOV EDI,EAX
LAB_0066c5b5:
0066C5B5  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0066C5B8  8B 13                     MOV EDX,dword ptr [EBX]
0066C5BA  6A 00                     PUSH 0x0
0066C5BC  6A 00                     PUSH 0x0
0066C5BE  68 8D 1E 40 00            PUSH 0x401e8d
0066C5C3  50                        PUSH EAX
0066C5C4  8B CB                     MOV ECX,EBX
0066C5C6  FF 12                     CALL dword ptr [EDX]
0066C5C8  8B 13                     MOV EDX,dword ptr [EBX]
0066C5CA  50                        PUSH EAX
0066C5CB  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
0066C5CE  8B CB                     MOV ECX,EBX
0066C5D0  50                        PUSH EAX
0066C5D1  FF 12                     CALL dword ptr [EDX]
0066C5D3  8B 13                     MOV EDX,dword ptr [EBX]
0066C5D5  50                        PUSH EAX
0066C5D6  8B 45 D8                  MOV EAX,dword ptr [EBP + -0x28]
0066C5D9  8B CB                     MOV ECX,EBX
0066C5DB  50                        PUSH EAX
0066C5DC  FF 12                     CALL dword ptr [EDX]
0066C5DE  8B 13                     MOV EDX,dword ptr [EBX]
0066C5E0  50                        PUSH EAX
0066C5E1  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
0066C5E4  8B CB                     MOV ECX,EBX
0066C5E6  50                        PUSH EAX
0066C5E7  FF 12                     CALL dword ptr [EDX]
0066C5E9  8B 13                     MOV EDX,dword ptr [EBX]
0066C5EB  50                        PUSH EAX
0066C5EC  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
0066C5EF  8B CB                     MOV ECX,EBX
0066C5F1  50                        PUSH EAX
0066C5F2  FF 12                     CALL dword ptr [EDX]
0066C5F4  8B 13                     MOV EDX,dword ptr [EBX]
0066C5F6  50                        PUSH EAX
0066C5F7  8B 45 D4                  MOV EAX,dword ptr [EBP + -0x2c]
0066C5FA  8B CB                     MOV ECX,EBX
0066C5FC  50                        PUSH EAX
0066C5FD  FF 12                     CALL dword ptr [EDX]
0066C5FF  8B 13                     MOV EDX,dword ptr [EBX]
0066C601  50                        PUSH EAX
0066C602  8B 45 DC                  MOV EAX,dword ptr [EBP + -0x24]
0066C605  8B CB                     MOV ECX,EBX
0066C607  50                        PUSH EAX
0066C608  FF 12                     CALL dword ptr [EDX]
0066C60A  8B 13                     MOV EDX,dword ptr [EBX]
0066C60C  50                        PUSH EAX
0066C60D  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0066C610  6A 00                     PUSH 0x0
0066C612  50                        PUSH EAX
0066C613  8B CB                     MOV ECX,EBX
0066C615  FF 12                     CALL dword ptr [EDX]
0066C617  8B 0E                     MOV ECX,dword ptr [ESI]
0066C619  50                        PUSH EAX
0066C61A  6A 00                     PUSH 0x0
0066C61C  51                        PUSH ECX
0066C61D  E8 D6 4C D9 FF            CALL 0x004012f8
0066C622  83 C4 38                  ADD ESP,0x38
0066C625  83 C6 04                  ADD ESI,0x4
0066C628  4F                        DEC EDI
0066C629  75 8A                     JNZ 0x0066c5b5
0066C62B  E9 2E 19 00 00            JMP 0x0066df5e
switchD_0066bdf4::caseD_7f0:
0066C630  33 C9                     XOR ECX,ECX
0066C632  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
LAB_0066c635:
0066C635  8A 04 31                  MOV AL,byte ptr [ECX + ESI*0x1]
0066C638  3C 04                     CMP AL,0x4
0066C63A  74 46                     JZ 0x0066c682
0066C63C  3C 01                     CMP AL,0x1
0066C63E  74 42                     JZ 0x0066c682
0066C640  8D 04 BE                  LEA EAX,[ESI + EDI*0x4]
0066C643  0F BF 4C 07 01            MOVSX ECX,word ptr [EDI + EAX*0x1 + 0x1]
0066C648  51                        PUSH ECX
0066C649  E8 8D 91 D9 FF            CALL 0x004057db
0066C64E  85 C0                     TEST EAX,EAX
0066C650  74 0F                     JZ 0x0066c661
0066C652  6A 7F                     PUSH 0x7f
0066C654  8D 53 04                  LEA EDX,[EBX + 0x4]
0066C657  50                        PUSH EAX
0066C658  52                        PUSH EDX
0066C659  E8 E2 1C 0C 00            CALL 0x0072e340
0066C65E  83 C4 0C                  ADD ESP,0xc
LAB_0066c661:
0066C661  C7 83 84 00 00 00 FF FF FF FF  MOV dword ptr [EBX + 0x84],0xffffffff
0066C66B  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
0066C670  6A 79                     PUSH 0x79
0066C672  68 24 2A 7D 00            PUSH 0x7d2a24
0066C677  50                        PUSH EAX
0066C678  6A 88                     PUSH -0x78
0066C67A  E8 C1 97 03 00            CALL 0x006a5e40
0066C67F  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
LAB_0066c682:
0066C682  83 C1 05                  ADD ECX,0x5
0066C685  83 F9 0A                  CMP ECX,0xa
0066C688  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0066C68B  7C A8                     JL 0x0066c635
0066C68D  8A 46 0A                  MOV AL,byte ptr [ESI + 0xa]
0066C690  3C 06                     CMP AL,0x6
0066C692  74 44                     JZ 0x0066c6d8
0066C694  3C 03                     CMP AL,0x3
0066C696  74 40                     JZ 0x0066c6d8
0066C698  8D 0C BE                  LEA ECX,[ESI + EDI*0x4]
0066C69B  0F BF 54 0F 01            MOVSX EDX,word ptr [EDI + ECX*0x1 + 0x1]
0066C6A0  52                        PUSH EDX
0066C6A1  E8 35 91 D9 FF            CALL 0x004057db
0066C6A6  85 C0                     TEST EAX,EAX
0066C6A8  74 0F                     JZ 0x0066c6b9
0066C6AA  6A 7F                     PUSH 0x7f
0066C6AC  50                        PUSH EAX
0066C6AD  8D 43 04                  LEA EAX,[EBX + 0x4]
0066C6B0  50                        PUSH EAX
0066C6B1  E8 8A 1C 0C 00            CALL 0x0072e340
0066C6B6  83 C4 0C                  ADD ESP,0xc
LAB_0066c6b9:
0066C6B9  C7 83 84 00 00 00 FF FF FF FF  MOV dword ptr [EBX + 0x84],0xffffffff
0066C6C3  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
0066C6C9  6A 79                     PUSH 0x79
0066C6CB  68 24 2A 7D 00            PUSH 0x7d2a24
0066C6D0  51                        PUSH ECX
0066C6D1  6A 88                     PUSH -0x78
0066C6D3  E8 68 97 03 00            CALL 0x006a5e40
LAB_0066c6d8:
0066C6D8  83 FF 03                  CMP EDI,0x3
0066C6DB  C7 45 F8 03 00 00 00      MOV dword ptr [EBP + -0x8],0x3
0066C6E2  7E 68                     JLE 0x0066c74c
0066C6E4  C7 45 FC 0F 00 00 00      MOV dword ptr [EBP + -0x4],0xf
LAB_0066c6eb:
0066C6EB  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0066C6EE  8A 04 32                  MOV AL,byte ptr [EDX + ESI*0x1]
0066C6F1  3C 04                     CMP AL,0x4
0066C6F3  74 43                     JZ 0x0066c738
0066C6F5  3C 01                     CMP AL,0x1
0066C6F7  74 3F                     JZ 0x0066c738
0066C6F9  8D 04 BE                  LEA EAX,[ESI + EDI*0x4]
0066C6FC  0F BF 4C 07 01            MOVSX ECX,word ptr [EDI + EAX*0x1 + 0x1]
0066C701  51                        PUSH ECX
0066C702  E8 D4 90 D9 FF            CALL 0x004057db
0066C707  85 C0                     TEST EAX,EAX
0066C709  74 0F                     JZ 0x0066c71a
0066C70B  6A 7F                     PUSH 0x7f
0066C70D  8D 53 04                  LEA EDX,[EBX + 0x4]
0066C710  50                        PUSH EAX
0066C711  52                        PUSH EDX
0066C712  E8 29 1C 0C 00            CALL 0x0072e340
0066C717  83 C4 0C                  ADD ESP,0xc
LAB_0066c71a:
0066C71A  C7 83 84 00 00 00 FF FF FF FF  MOV dword ptr [EBX + 0x84],0xffffffff
0066C724  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
0066C729  6A 79                     PUSH 0x79
0066C72B  68 24 2A 7D 00            PUSH 0x7d2a24
0066C730  50                        PUSH EAX
0066C731  6A 88                     PUSH -0x78
0066C733  E8 08 97 03 00            CALL 0x006a5e40
LAB_0066c738:
0066C738  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0066C73B  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0066C73E  40                        INC EAX
0066C73F  83 C2 05                  ADD EDX,0x5
0066C742  3B C7                     CMP EAX,EDI
0066C744  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0066C747  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
0066C74A  7C 9F                     JL 0x0066c6eb
LAB_0066c74c:
0066C74C  8B 13                     MOV EDX,dword ptr [EBX]
0066C74E  56                        PUSH ESI
0066C74F  8B CB                     MOV ECX,EBX
0066C751  FF 12                     CALL dword ptr [EDX]
0066C753  83 F8 09                  CMP EAX,0x9
0066C756  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0066C759  75 4C                     JNZ 0x0066c7a7
0066C75B  8B 03                     MOV EAX,dword ptr [EBX]
0066C75D  8B CB                     MOV ECX,EBX
0066C75F  FF 50 18                  CALL dword ptr [EAX + 0x18]
0066C762  83 F8 08                  CMP EAX,0x8
0066C765  75 40                     JNZ 0x0066c7a7
0066C767  8D 0C BE                  LEA ECX,[ESI + EDI*0x4]
0066C76A  0F BF 54 0F 01            MOVSX EDX,word ptr [EDI + ECX*0x1 + 0x1]
0066C76F  52                        PUSH EDX
0066C770  E8 66 90 D9 FF            CALL 0x004057db
0066C775  85 C0                     TEST EAX,EAX
0066C777  74 0F                     JZ 0x0066c788
0066C779  6A 7F                     PUSH 0x7f
0066C77B  50                        PUSH EAX
0066C77C  8D 43 04                  LEA EAX,[EBX + 0x4]
0066C77F  50                        PUSH EAX
0066C780  E8 BB 1B 0C 00            CALL 0x0072e340
0066C785  83 C4 0C                  ADD ESP,0xc
LAB_0066c788:
0066C788  C7 83 84 00 00 00 FF FF FF FF  MOV dword ptr [EBX + 0x84],0xffffffff
0066C792  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
0066C798  6A 79                     PUSH 0x79
0066C79A  68 24 2A 7D 00            PUSH 0x7d2a24
0066C79F  51                        PUSH ECX
0066C7A0  6A 88                     PUSH -0x78
0066C7A2  E8 99 96 03 00            CALL 0x006a5e40
LAB_0066c7a7:
0066C7A7  8B 03                     MOV EAX,dword ptr [EBX]
0066C7A9  8D 55 B4                  LEA EDX,[EBP + -0x4c]
0066C7AC  8D 4E 05                  LEA ECX,[ESI + 0x5]
0066C7AF  52                        PUSH EDX
0066C7B0  51                        PUSH ECX
0066C7B1  8B CB                     MOV ECX,EBX
0066C7B3  FF 10                     CALL dword ptr [EAX]
0066C7B5  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0066C7B8  50                        PUSH EAX
0066C7B9  52                        PUSH EDX
0066C7BA  8B CB                     MOV ECX,EBX
0066C7BC  E8 F7 4E D9 FF            CALL 0x004016b8
0066C7C1  85 C0                     TEST EAX,EAX
0066C7C3  C7 05 80 19 81 00 00 00 00 00  MOV dword ptr [0x00811980],0x0
0066C7CD  0F 8E 8B 17 00 00         JLE 0x0066df5e
0066C7D3  8D 4E 2D                  LEA ECX,[ESI + 0x2d]
0066C7D6  8D 56 28                  LEA EDX,[ESI + 0x28]
0066C7D9  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
0066C7DC  8D 4E 23                  LEA ECX,[ESI + 0x23]
0066C7DF  89 55 EC                  MOV dword ptr [EBP + -0x14],EDX
0066C7E2  89 4D D8                  MOV dword ptr [EBP + -0x28],ECX
0066C7E5  8D 56 1E                  LEA EDX,[ESI + 0x1e]
0066C7E8  8D 4E 19                  LEA ECX,[ESI + 0x19]
0066C7EB  89 55 E8                  MOV dword ptr [EBP + -0x18],EDX
0066C7EE  89 4D E0                  MOV dword ptr [EBP + -0x20],ECX
0066C7F1  8D 56 14                  LEA EDX,[ESI + 0x14]
0066C7F4  8D 4E 0F                  LEA ECX,[ESI + 0xf]
0066C7F7  83 C6 0A                  ADD ESI,0xa
0066C7FA  89 55 D4                  MOV dword ptr [EBP + -0x2c],EDX
0066C7FD  89 75 F8                  MOV dword ptr [EBP + -0x8],ESI
0066C800  89 4D DC                  MOV dword ptr [EBP + -0x24],ECX
0066C803  8D 75 B4                  LEA ESI,[EBP + -0x4c]
0066C806  8B F8                     MOV EDI,EAX
LAB_0066c808:
0066C808  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0066C80B  8B 13                     MOV EDX,dword ptr [EBX]
0066C80D  6A 00                     PUSH 0x0
0066C80F  6A 00                     PUSH 0x0
0066C811  68 8D 1E 40 00            PUSH 0x401e8d
0066C816  50                        PUSH EAX
0066C817  8B CB                     MOV ECX,EBX
0066C819  FF 12                     CALL dword ptr [EDX]
0066C81B  8B 13                     MOV EDX,dword ptr [EBX]
0066C81D  50                        PUSH EAX
0066C81E  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
0066C821  8B CB                     MOV ECX,EBX
0066C823  50                        PUSH EAX
0066C824  FF 12                     CALL dword ptr [EDX]
0066C826  8B 13                     MOV EDX,dword ptr [EBX]
0066C828  50                        PUSH EAX
0066C829  8B 45 D8                  MOV EAX,dword ptr [EBP + -0x28]
0066C82C  8B CB                     MOV ECX,EBX
0066C82E  50                        PUSH EAX
0066C82F  FF 12                     CALL dword ptr [EDX]
0066C831  8B 13                     MOV EDX,dword ptr [EBX]
0066C833  50                        PUSH EAX
0066C834  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
0066C837  8B CB                     MOV ECX,EBX
0066C839  50                        PUSH EAX
0066C83A  FF 12                     CALL dword ptr [EDX]
0066C83C  8B 13                     MOV EDX,dword ptr [EBX]
0066C83E  50                        PUSH EAX
0066C83F  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
0066C842  8B CB                     MOV ECX,EBX
0066C844  50                        PUSH EAX
0066C845  FF 12                     CALL dword ptr [EDX]
0066C847  8B 13                     MOV EDX,dword ptr [EBX]
0066C849  50                        PUSH EAX
0066C84A  8B 45 D4                  MOV EAX,dword ptr [EBP + -0x2c]
0066C84D  8B CB                     MOV ECX,EBX
0066C84F  50                        PUSH EAX
0066C850  FF 12                     CALL dword ptr [EDX]
0066C852  8B 13                     MOV EDX,dword ptr [EBX]
0066C854  50                        PUSH EAX
0066C855  8B 45 DC                  MOV EAX,dword ptr [EBP + -0x24]
0066C858  8B CB                     MOV ECX,EBX
0066C85A  50                        PUSH EAX
0066C85B  FF 12                     CALL dword ptr [EDX]
0066C85D  8B 13                     MOV EDX,dword ptr [EBX]
0066C85F  50                        PUSH EAX
0066C860  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0066C863  8B CB                     MOV ECX,EBX
0066C865  50                        PUSH EAX
0066C866  FF 52 08                  CALL dword ptr [EDX + 0x8]
0066C869  8B 0E                     MOV ECX,dword ptr [ESI]
0066C86B  50                        PUSH EAX
0066C86C  68 FF FF FF 3F            PUSH 0x3fffffff
0066C871  6A 00                     PUSH 0x0
0066C873  51                        PUSH ECX
0066C874  E8 7F 4A D9 FF            CALL 0x004012f8
0066C879  83 C4 38                  ADD ESP,0x38
0066C87C  83 C6 04                  ADD ESI,0x4
0066C87F  4F                        DEC EDI
0066C880  75 86                     JNZ 0x0066c808
0066C882  E9 D7 16 00 00            JMP 0x0066df5e
switchD_0066bdf4::caseD_7f1:
0066C887  33 C0                     XOR EAX,EAX
0066C889  3B F8                     CMP EDI,EAX
0066C88B  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0066C88E  7E 65                     JLE 0x0066c8f5
0066C890  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
LAB_0066c893:
0066C893  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0066C896  8A 04 30                  MOV AL,byte ptr [EAX + ESI*0x1]
0066C899  3C 04                     CMP AL,0x4
0066C89B  74 44                     JZ 0x0066c8e1
0066C89D  3C 01                     CMP AL,0x1
0066C89F  74 40                     JZ 0x0066c8e1
0066C8A1  8D 0C BE                  LEA ECX,[ESI + EDI*0x4]
0066C8A4  0F BF 54 0F 01            MOVSX EDX,word ptr [EDI + ECX*0x1 + 0x1]
0066C8A9  52                        PUSH EDX
0066C8AA  E8 2C 8F D9 FF            CALL 0x004057db
0066C8AF  85 C0                     TEST EAX,EAX
0066C8B1  74 0F                     JZ 0x0066c8c2
0066C8B3  6A 7F                     PUSH 0x7f
0066C8B5  50                        PUSH EAX
0066C8B6  8D 43 04                  LEA EAX,[EBX + 0x4]
0066C8B9  50                        PUSH EAX
0066C8BA  E8 81 1A 0C 00            CALL 0x0072e340
0066C8BF  83 C4 0C                  ADD ESP,0xc
LAB_0066c8c2:
0066C8C2  C7 83 84 00 00 00 FF FF FF FF  MOV dword ptr [EBX + 0x84],0xffffffff
0066C8CC  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
0066C8D2  6A 79                     PUSH 0x79
0066C8D4  68 24 2A 7D 00            PUSH 0x7d2a24
0066C8D9  51                        PUSH ECX
0066C8DA  6A 88                     PUSH -0x78
0066C8DC  E8 5F 95 03 00            CALL 0x006a5e40
LAB_0066c8e1:
0066C8E1  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0066C8E4  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0066C8E7  40                        INC EAX
0066C8E8  83 C2 05                  ADD EDX,0x5
0066C8EB  3B C7                     CMP EAX,EDI
0066C8ED  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0066C8F0  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
0066C8F3  7C 9E                     JL 0x0066c893
LAB_0066c8f5:
0066C8F5  8B 13                     MOV EDX,dword ptr [EBX]
0066C8F7  56                        PUSH ESI
0066C8F8  8B CB                     MOV ECX,EBX
0066C8FA  FF 12                     CALL dword ptr [EDX]
0066C8FC  83 F8 09                  CMP EAX,0x9
0066C8FF  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0066C902  75 4C                     JNZ 0x0066c950
0066C904  8B 03                     MOV EAX,dword ptr [EBX]
0066C906  8B CB                     MOV ECX,EBX
0066C908  FF 50 18                  CALL dword ptr [EAX + 0x18]
0066C90B  83 F8 08                  CMP EAX,0x8
0066C90E  75 40                     JNZ 0x0066c950
0066C910  8D 0C BE                  LEA ECX,[ESI + EDI*0x4]
0066C913  0F BF 54 0F 01            MOVSX EDX,word ptr [EDI + ECX*0x1 + 0x1]
0066C918  52                        PUSH EDX
0066C919  E8 BD 8E D9 FF            CALL 0x004057db
0066C91E  85 C0                     TEST EAX,EAX
0066C920  74 0F                     JZ 0x0066c931
0066C922  6A 7F                     PUSH 0x7f
0066C924  50                        PUSH EAX
0066C925  8D 43 04                  LEA EAX,[EBX + 0x4]
0066C928  50                        PUSH EAX
0066C929  E8 12 1A 0C 00            CALL 0x0072e340
0066C92E  83 C4 0C                  ADD ESP,0xc
LAB_0066c931:
0066C931  C7 83 84 00 00 00 FF FF FF FF  MOV dword ptr [EBX + 0x84],0xffffffff
0066C93B  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
0066C941  6A 79                     PUSH 0x79
0066C943  68 24 2A 7D 00            PUSH 0x7d2a24
0066C948  51                        PUSH ECX
0066C949  6A 88                     PUSH -0x78
0066C94B  E8 F0 94 03 00            CALL 0x006a5e40
LAB_0066c950:
0066C950  8B 03                     MOV EAX,dword ptr [EBX]
0066C952  8D 55 B4                  LEA EDX,[EBP + -0x4c]
0066C955  8D 4E 05                  LEA ECX,[ESI + 0x5]
0066C958  52                        PUSH EDX
0066C959  51                        PUSH ECX
0066C95A  8B CB                     MOV ECX,EBX
0066C95C  FF 10                     CALL dword ptr [EAX]
0066C95E  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0066C961  50                        PUSH EAX
0066C962  52                        PUSH EDX
0066C963  8B CB                     MOV ECX,EBX
0066C965  E8 4E 4D D9 FF            CALL 0x004016b8
0066C96A  85 C0                     TEST EAX,EAX
0066C96C  C7 45 F4 00 00 00 00      MOV dword ptr [EBP + -0xc],0x0
0066C973  0F 8E 77 01 00 00         JLE 0x0066caf0
0066C979  83 C6 0A                  ADD ESI,0xa
0066C97C  8D 4D B4                  LEA ECX,[EBP + -0x4c]
0066C97F  89 75 F8                  MOV dword ptr [EBP + -0x8],ESI
0066C982  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0066C985  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
LAB_0066c988:
0066C988  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0066C98B  8D 8D 14 FB FF FF         LEA ECX,[EBP + 0xfffffb14]
0066C991  8A 02                     MOV AL,byte ptr [EDX]
0066C993  50                        PUSH EAX
0066C994  51                        PUSH ECX
0066C995  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0066C99B  E8 44 7B D9 FF            CALL 0x004044e4
0066C9A0  B9 4E 00 00 00            MOV ECX,0x4e
0066C9A5  8B F0                     MOV ESI,EAX
0066C9A7  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0066C9AA  8D BD 68 FE FF FF         LEA EDI,[EBP + 0xfffffe68]
0066C9B0  F3 A5                     MOVSD.REP ES:EDI,ESI
0066C9B2  8B 13                     MOV EDX,dword ptr [EBX]
0066C9B4  50                        PUSH EAX
0066C9B5  8B CB                     MOV ECX,EBX
0066C9B7  FF 12                     CALL dword ptr [EDX]
0066C9B9  8B 75 F4                  MOV ESI,dword ptr [EBP + -0xc]
0066C9BC  33 FF                     XOR EDI,EDI
LAB_0066c9be:
0066C9BE  BA 01 00 00 00            MOV EDX,0x1
0066C9C3  8B CF                     MOV ECX,EDI
0066C9C5  D3 E2                     SHL EDX,CL
0066C9C7  23 D0                     AND EDX,EAX
0066C9C9  81 FA 00 01 00 00         CMP EDX,0x100
0066C9CF  77 78                     JA 0x0066ca49
0066C9D1  74 6E                     JZ 0x0066ca41
0066C9D3  4A                        DEC EDX
0066C9D4  83 FA 7F                  CMP EDX,0x7f
0066C9D7  0F 87 F0 00 00 00         JA 0x0066cacd
0066C9DD  33 C9                     XOR ECX,ECX
0066C9DF  8A 8A 70 05 67 00         MOV CL,byte ptr [EDX + 0x670570]
switchD_0066c9e5::switchD:
0066C9E5  FF 24 8D 4C 05 67 00      JMP dword ptr [ECX*0x4 + 0x67054c]
switchD_0066c9e5::caseD_1:
0066C9EC  8B 8D 10 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff10]
0066C9F2  E9 D4 00 00 00            JMP 0x0066cacb
switchD_0066c9e5::caseD_2:
0066C9F7  8B 8D 20 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff20]
0066C9FD  E9 C9 00 00 00            JMP 0x0066cacb
switchD_0066c9e5::caseD_4:
0066CA02  8B 8D 30 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff30]
0066CA08  E9 BE 00 00 00            JMP 0x0066cacb
switchD_0066c9e5::caseD_8:
0066CA0D  8B 8D 40 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff40]
0066CA13  E9 B3 00 00 00            JMP 0x0066cacb
switchD_0066c9e5::caseD_10:
0066CA18  8B 8D 50 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff50]
0066CA1E  E9 A8 00 00 00            JMP 0x0066cacb
switchD_0066c9e5::caseD_20:
0066CA23  8B 8D 60 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff60]
0066CA29  E9 9D 00 00 00            JMP 0x0066cacb
switchD_0066c9e5::caseD_40:
0066CA2E  8B 8D 70 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff70]
0066CA34  E9 92 00 00 00            JMP 0x0066cacb
switchD_0066c9e5::caseD_80:
0066CA39  8B 4D 80                  MOV ECX,dword ptr [EBP + -0x80]
0066CA3C  E9 8A 00 00 00            JMP 0x0066cacb
LAB_0066ca41:
0066CA41  8B 4D 90                  MOV ECX,dword ptr [EBP + -0x70]
0066CA44  E9 82 00 00 00            JMP 0x0066cacb
LAB_0066ca49:
0066CA49  81 FA 00 00 10 00         CMP EDX,0x100000
0066CA4F  77 4C                     JA 0x0066ca9d
0066CA51  74 42                     JZ 0x0066ca95
0066CA53  81 FA 00 00 04 00         CMP EDX,0x40000
0066CA59  77 2A                     JA 0x0066ca85
0066CA5B  74 20                     JZ 0x0066ca7d
0066CA5D  81 FA 00 00 01 00         CMP EDX,0x10000
0066CA63  74 10                     JZ 0x0066ca75
0066CA65  81 FA 00 00 02 00         CMP EDX,0x20000
0066CA6B  75 60                     JNZ 0x0066cacd
0066CA6D  8B 8D C0 FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffec0]
0066CA73  EB 56                     JMP 0x0066cacb
LAB_0066ca75:
0066CA75  8B 8D B0 FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffeb0]
0066CA7B  EB 4E                     JMP 0x0066cacb
LAB_0066ca7d:
0066CA7D  8B 8D 90 FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffe90]
0066CA83  EB 46                     JMP 0x0066cacb
LAB_0066ca85:
0066CA85  81 FA 00 00 08 00         CMP EDX,0x80000
0066CA8B  75 40                     JNZ 0x0066cacd
0066CA8D  8B 8D A0 FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffea0]
0066CA93  EB 36                     JMP 0x0066cacb
LAB_0066ca95:
0066CA95  8B 8D D0 FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffed0]
0066CA9B  EB 2E                     JMP 0x0066cacb
LAB_0066ca9d:
0066CA9D  81 FA 00 00 20 00         CMP EDX,0x200000
0066CAA3  74 20                     JZ 0x0066cac5
0066CAA5  81 FA 00 00 40 00         CMP EDX,0x400000
0066CAAB  74 10                     JZ 0x0066cabd
0066CAAD  81 FA 00 00 80 00         CMP EDX,0x800000
0066CAB3  75 18                     JNZ 0x0066cacd
0066CAB5  8B 8D 00 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff00]
0066CABB  EB 0E                     JMP 0x0066cacb
LAB_0066cabd:
0066CABD  8B 8D F0 FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffef0]
0066CAC3  EB 06                     JMP 0x0066cacb
LAB_0066cac5:
0066CAC5  8B 8D E0 FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffee0]
LAB_0066cacb:
0066CACB  03 F1                     ADD ESI,ECX
switchD_0066c9e5::caseD_3:
0066CACD  47                        INC EDI
0066CACE  83 FF 20                  CMP EDI,0x20
0066CAD1  0F 8C E7 FE FF FF         JL 0x0066c9be
0066CAD7  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0066CADA  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
0066CADD  83 C1 04                  ADD ECX,0x4
0066CAE0  48                        DEC EAX
0066CAE1  89 75 F4                  MOV dword ptr [EBP + -0xc],ESI
0066CAE4  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0066CAE7  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
0066CAEA  0F 85 98 FE FF FF         JNZ 0x0066c988
LAB_0066caf0:
0066CAF0  6A 04                     PUSH 0x4
0066CAF2  E8 19 E1 03 00            CALL 0x006aac10
0066CAF7  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
0066CAFA  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
0066CAFD  89 10                     MOV dword ptr [EAX],EDX
0066CAFF  E9 2D 39 00 00            JMP 0x00670431
switchD_0066bdf4::caseD_7f2:
0066CB04  33 C0                     XOR EAX,EAX
0066CB06  3B F8                     CMP EDI,EAX
0066CB08  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0066CB0B  7E 65                     JLE 0x0066cb72
0066CB0D  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
LAB_0066cb10:
0066CB10  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0066CB13  8A 04 30                  MOV AL,byte ptr [EAX + ESI*0x1]
0066CB16  3C 04                     CMP AL,0x4
0066CB18  74 44                     JZ 0x0066cb5e
0066CB1A  3C 01                     CMP AL,0x1
0066CB1C  74 40                     JZ 0x0066cb5e
0066CB1E  8D 0C BE                  LEA ECX,[ESI + EDI*0x4]
0066CB21  0F BF 54 0F 01            MOVSX EDX,word ptr [EDI + ECX*0x1 + 0x1]
0066CB26  52                        PUSH EDX
0066CB27  E8 AF 8C D9 FF            CALL 0x004057db
0066CB2C  85 C0                     TEST EAX,EAX
0066CB2E  74 0F                     JZ 0x0066cb3f
0066CB30  6A 7F                     PUSH 0x7f
0066CB32  50                        PUSH EAX
0066CB33  8D 43 04                  LEA EAX,[EBX + 0x4]
0066CB36  50                        PUSH EAX
0066CB37  E8 04 18 0C 00            CALL 0x0072e340
0066CB3C  83 C4 0C                  ADD ESP,0xc
LAB_0066cb3f:
0066CB3F  C7 83 84 00 00 00 FF FF FF FF  MOV dword ptr [EBX + 0x84],0xffffffff
0066CB49  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
0066CB4F  6A 79                     PUSH 0x79
0066CB51  68 24 2A 7D 00            PUSH 0x7d2a24
0066CB56  51                        PUSH ECX
0066CB57  6A 88                     PUSH -0x78
0066CB59  E8 E2 92 03 00            CALL 0x006a5e40
LAB_0066cb5e:
0066CB5E  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0066CB61  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0066CB64  40                        INC EAX
0066CB65  83 C2 05                  ADD EDX,0x5
0066CB68  3B C7                     CMP EAX,EDI
0066CB6A  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0066CB6D  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
0066CB70  7C 9E                     JL 0x0066cb10
LAB_0066cb72:
0066CB72  8B 13                     MOV EDX,dword ptr [EBX]
0066CB74  56                        PUSH ESI
0066CB75  8B CB                     MOV ECX,EBX
0066CB77  FF 12                     CALL dword ptr [EDX]
0066CB79  83 F8 09                  CMP EAX,0x9
0066CB7C  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0066CB7F  75 4C                     JNZ 0x0066cbcd
0066CB81  8B 03                     MOV EAX,dword ptr [EBX]
0066CB83  8B CB                     MOV ECX,EBX
0066CB85  FF 50 18                  CALL dword ptr [EAX + 0x18]
0066CB88  83 F8 08                  CMP EAX,0x8
0066CB8B  75 40                     JNZ 0x0066cbcd
0066CB8D  8D 0C BE                  LEA ECX,[ESI + EDI*0x4]
0066CB90  0F BF 54 0F 01            MOVSX EDX,word ptr [EDI + ECX*0x1 + 0x1]
0066CB95  52                        PUSH EDX
0066CB96  E8 40 8C D9 FF            CALL 0x004057db
0066CB9B  85 C0                     TEST EAX,EAX
0066CB9D  74 0F                     JZ 0x0066cbae
0066CB9F  6A 7F                     PUSH 0x7f
0066CBA1  50                        PUSH EAX
0066CBA2  8D 43 04                  LEA EAX,[EBX + 0x4]
0066CBA5  50                        PUSH EAX
0066CBA6  E8 95 17 0C 00            CALL 0x0072e340
0066CBAB  83 C4 0C                  ADD ESP,0xc
LAB_0066cbae:
0066CBAE  C7 83 84 00 00 00 FF FF FF FF  MOV dword ptr [EBX + 0x84],0xffffffff
0066CBB8  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
0066CBBE  6A 79                     PUSH 0x79
0066CBC0  68 24 2A 7D 00            PUSH 0x7d2a24
0066CBC5  51                        PUSH ECX
0066CBC6  6A 88                     PUSH -0x78
0066CBC8  E8 73 92 03 00            CALL 0x006a5e40
LAB_0066cbcd:
0066CBCD  8B 03                     MOV EAX,dword ptr [EBX]
0066CBCF  8D 55 B4                  LEA EDX,[EBP + -0x4c]
0066CBD2  8D 4E 05                  LEA ECX,[ESI + 0x5]
0066CBD5  52                        PUSH EDX
0066CBD6  51                        PUSH ECX
0066CBD7  8B CB                     MOV ECX,EBX
0066CBD9  FF 10                     CALL dword ptr [EAX]
0066CBDB  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0066CBDE  50                        PUSH EAX
0066CBDF  52                        PUSH EDX
0066CBE0  8B CB                     MOV ECX,EBX
0066CBE2  E8 D1 4A D9 FF            CALL 0x004016b8
0066CBE7  85 C0                     TEST EAX,EAX
0066CBE9  C7 45 F4 00 00 00 00      MOV dword ptr [EBP + -0xc],0x0
0066CBF0  0F 8E 77 01 00 00         JLE 0x0066cd6d
0066CBF6  83 C6 0A                  ADD ESI,0xa
0066CBF9  8D 4D B4                  LEA ECX,[EBP + -0x4c]
0066CBFC  89 75 F8                  MOV dword ptr [EBP + -0x8],ESI
0066CBFF  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0066CC02  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
LAB_0066cc05:
0066CC05  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0066CC08  8D 8D 4C FC FF FF         LEA ECX,[EBP + 0xfffffc4c]
0066CC0E  8A 02                     MOV AL,byte ptr [EDX]
0066CC10  50                        PUSH EAX
0066CC11  51                        PUSH ECX
0066CC12  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0066CC18  E8 C7 78 D9 FF            CALL 0x004044e4
0066CC1D  B9 4E 00 00 00            MOV ECX,0x4e
0066CC22  8B F0                     MOV ESI,EAX
0066CC24  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0066CC27  8D BD 68 FE FF FF         LEA EDI,[EBP + 0xfffffe68]
0066CC2D  F3 A5                     MOVSD.REP ES:EDI,ESI
0066CC2F  8B 13                     MOV EDX,dword ptr [EBX]
0066CC31  50                        PUSH EAX
0066CC32  8B CB                     MOV ECX,EBX
0066CC34  FF 12                     CALL dword ptr [EDX]
0066CC36  8B 75 F4                  MOV ESI,dword ptr [EBP + -0xc]
0066CC39  33 FF                     XOR EDI,EDI
LAB_0066cc3b:
0066CC3B  BA 01 00 00 00            MOV EDX,0x1
0066CC40  8B CF                     MOV ECX,EDI
0066CC42  D3 E2                     SHL EDX,CL
0066CC44  23 D0                     AND EDX,EAX
0066CC46  81 FA 00 01 00 00         CMP EDX,0x100
0066CC4C  77 78                     JA 0x0066ccc6
0066CC4E  74 6E                     JZ 0x0066ccbe
0066CC50  4A                        DEC EDX
0066CC51  83 FA 7F                  CMP EDX,0x7f
0066CC54  0F 87 F0 00 00 00         JA 0x0066cd4a
0066CC5A  33 C9                     XOR ECX,ECX
0066CC5C  8A 8A 14 06 67 00         MOV CL,byte ptr [EDX + 0x670614]
switchD_0066cc62::switchD:
0066CC62  FF 24 8D F0 05 67 00      JMP dword ptr [ECX*0x4 + 0x6705f0]
switchD_0066cc62::caseD_1:
0066CC69  8B 8D 14 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff14]
0066CC6F  E9 D4 00 00 00            JMP 0x0066cd48
switchD_0066cc62::caseD_2:
0066CC74  8B 8D 24 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff24]
0066CC7A  E9 C9 00 00 00            JMP 0x0066cd48
switchD_0066cc62::caseD_4:
0066CC7F  8B 8D 34 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff34]
0066CC85  E9 BE 00 00 00            JMP 0x0066cd48
switchD_0066cc62::caseD_8:
0066CC8A  8B 8D 44 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff44]
0066CC90  E9 B3 00 00 00            JMP 0x0066cd48
switchD_0066cc62::caseD_10:
0066CC95  8B 8D 54 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff54]
0066CC9B  E9 A8 00 00 00            JMP 0x0066cd48
switchD_0066cc62::caseD_20:
0066CCA0  8B 8D 64 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff64]
0066CCA6  E9 9D 00 00 00            JMP 0x0066cd48
switchD_0066cc62::caseD_40:
0066CCAB  8B 8D 74 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff74]
0066CCB1  E9 92 00 00 00            JMP 0x0066cd48
switchD_0066cc62::caseD_80:
0066CCB6  8B 4D 84                  MOV ECX,dword ptr [EBP + -0x7c]
0066CCB9  E9 8A 00 00 00            JMP 0x0066cd48
LAB_0066ccbe:
0066CCBE  8B 4D 94                  MOV ECX,dword ptr [EBP + -0x6c]
0066CCC1  E9 82 00 00 00            JMP 0x0066cd48
LAB_0066ccc6:
0066CCC6  81 FA 00 00 10 00         CMP EDX,0x100000
0066CCCC  77 4C                     JA 0x0066cd1a
0066CCCE  74 42                     JZ 0x0066cd12
0066CCD0  81 FA 00 00 04 00         CMP EDX,0x40000
0066CCD6  77 2A                     JA 0x0066cd02
0066CCD8  74 20                     JZ 0x0066ccfa
0066CCDA  81 FA 00 00 01 00         CMP EDX,0x10000
0066CCE0  74 10                     JZ 0x0066ccf2
0066CCE2  81 FA 00 00 02 00         CMP EDX,0x20000
0066CCE8  75 60                     JNZ 0x0066cd4a
0066CCEA  8B 8D C4 FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffec4]
0066CCF0  EB 56                     JMP 0x0066cd48
LAB_0066ccf2:
0066CCF2  8B 8D B4 FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffeb4]
0066CCF8  EB 4E                     JMP 0x0066cd48
LAB_0066ccfa:
0066CCFA  8B 8D 94 FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffe94]
0066CD00  EB 46                     JMP 0x0066cd48
LAB_0066cd02:
0066CD02  81 FA 00 00 08 00         CMP EDX,0x80000
0066CD08  75 40                     JNZ 0x0066cd4a
0066CD0A  8B 8D A4 FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffea4]
0066CD10  EB 36                     JMP 0x0066cd48
LAB_0066cd12:
0066CD12  8B 8D D4 FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffed4]
0066CD18  EB 2E                     JMP 0x0066cd48
LAB_0066cd1a:
0066CD1A  81 FA 00 00 20 00         CMP EDX,0x200000
0066CD20  74 20                     JZ 0x0066cd42
0066CD22  81 FA 00 00 40 00         CMP EDX,0x400000
0066CD28  74 10                     JZ 0x0066cd3a
0066CD2A  81 FA 00 00 80 00         CMP EDX,0x800000
0066CD30  75 18                     JNZ 0x0066cd4a
0066CD32  8B 8D 04 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff04]
0066CD38  EB 0E                     JMP 0x0066cd48
LAB_0066cd3a:
0066CD3A  8B 8D F4 FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffef4]
0066CD40  EB 06                     JMP 0x0066cd48
LAB_0066cd42:
0066CD42  8B 8D E4 FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffee4]
LAB_0066cd48:
0066CD48  03 F1                     ADD ESI,ECX
switchD_0066cc62::caseD_3:
0066CD4A  47                        INC EDI
0066CD4B  83 FF 20                  CMP EDI,0x20
0066CD4E  0F 8C E7 FE FF FF         JL 0x0066cc3b
0066CD54  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0066CD57  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
0066CD5A  83 C1 04                  ADD ECX,0x4
0066CD5D  48                        DEC EAX
0066CD5E  89 75 F4                  MOV dword ptr [EBP + -0xc],ESI
0066CD61  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0066CD64  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
0066CD67  0F 85 98 FE FF FF         JNZ 0x0066cc05
LAB_0066cd6d:
0066CD6D  6A 04                     PUSH 0x4
0066CD6F  E8 9C DE 03 00            CALL 0x006aac10
0066CD74  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
0066CD77  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
0066CD7A  89 10                     MOV dword ptr [EAX],EDX
0066CD7C  E9 B0 36 00 00            JMP 0x00670431
switchD_0066bdf4::caseD_7f3:
0066CD81  33 C0                     XOR EAX,EAX
0066CD83  3B F8                     CMP EDI,EAX
0066CD85  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0066CD88  7E 65                     JLE 0x0066cdef
0066CD8A  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
LAB_0066cd8d:
0066CD8D  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0066CD90  8A 04 30                  MOV AL,byte ptr [EAX + ESI*0x1]
0066CD93  3C 04                     CMP AL,0x4
0066CD95  74 44                     JZ 0x0066cddb
0066CD97  3C 01                     CMP AL,0x1
0066CD99  74 40                     JZ 0x0066cddb
0066CD9B  8D 0C BE                  LEA ECX,[ESI + EDI*0x4]
0066CD9E  0F BF 54 0F 01            MOVSX EDX,word ptr [EDI + ECX*0x1 + 0x1]
0066CDA3  52                        PUSH EDX
0066CDA4  E8 32 8A D9 FF            CALL 0x004057db
0066CDA9  85 C0                     TEST EAX,EAX
0066CDAB  74 0F                     JZ 0x0066cdbc
0066CDAD  6A 7F                     PUSH 0x7f
0066CDAF  50                        PUSH EAX
0066CDB0  8D 43 04                  LEA EAX,[EBX + 0x4]
0066CDB3  50                        PUSH EAX
0066CDB4  E8 87 15 0C 00            CALL 0x0072e340
0066CDB9  83 C4 0C                  ADD ESP,0xc
LAB_0066cdbc:
0066CDBC  C7 83 84 00 00 00 FF FF FF FF  MOV dword ptr [EBX + 0x84],0xffffffff
0066CDC6  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
0066CDCC  6A 79                     PUSH 0x79
0066CDCE  68 24 2A 7D 00            PUSH 0x7d2a24
0066CDD3  51                        PUSH ECX
0066CDD4  6A 88                     PUSH -0x78
0066CDD6  E8 65 90 03 00            CALL 0x006a5e40
LAB_0066cddb:
0066CDDB  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0066CDDE  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0066CDE1  40                        INC EAX
0066CDE2  83 C2 05                  ADD EDX,0x5
0066CDE5  3B C7                     CMP EAX,EDI
0066CDE7  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0066CDEA  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
0066CDED  7C 9E                     JL 0x0066cd8d
LAB_0066cdef:
0066CDEF  8B 13                     MOV EDX,dword ptr [EBX]
0066CDF1  56                        PUSH ESI
0066CDF2  8B CB                     MOV ECX,EBX
0066CDF4  FF 12                     CALL dword ptr [EDX]
0066CDF6  83 F8 09                  CMP EAX,0x9
0066CDF9  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0066CDFC  75 4C                     JNZ 0x0066ce4a
0066CDFE  8B 03                     MOV EAX,dword ptr [EBX]
0066CE00  8B CB                     MOV ECX,EBX
0066CE02  FF 50 18                  CALL dword ptr [EAX + 0x18]
0066CE05  83 F8 08                  CMP EAX,0x8
0066CE08  75 40                     JNZ 0x0066ce4a
0066CE0A  8D 0C BE                  LEA ECX,[ESI + EDI*0x4]
0066CE0D  0F BF 54 0F 01            MOVSX EDX,word ptr [EDI + ECX*0x1 + 0x1]
0066CE12  52                        PUSH EDX
0066CE13  E8 C3 89 D9 FF            CALL 0x004057db
0066CE18  85 C0                     TEST EAX,EAX
0066CE1A  74 0F                     JZ 0x0066ce2b
0066CE1C  6A 7F                     PUSH 0x7f
0066CE1E  50                        PUSH EAX
0066CE1F  8D 43 04                  LEA EAX,[EBX + 0x4]
0066CE22  50                        PUSH EAX
0066CE23  E8 18 15 0C 00            CALL 0x0072e340
0066CE28  83 C4 0C                  ADD ESP,0xc
LAB_0066ce2b:
0066CE2B  C7 83 84 00 00 00 FF FF FF FF  MOV dword ptr [EBX + 0x84],0xffffffff
0066CE35  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
0066CE3B  6A 79                     PUSH 0x79
0066CE3D  68 24 2A 7D 00            PUSH 0x7d2a24
0066CE42  51                        PUSH ECX
0066CE43  6A 88                     PUSH -0x78
0066CE45  E8 F6 8F 03 00            CALL 0x006a5e40
LAB_0066ce4a:
0066CE4A  8B 03                     MOV EAX,dword ptr [EBX]
0066CE4C  8D 55 B4                  LEA EDX,[EBP + -0x4c]
0066CE4F  8D 4E 05                  LEA ECX,[ESI + 0x5]
0066CE52  52                        PUSH EDX
0066CE53  51                        PUSH ECX
0066CE54  8B CB                     MOV ECX,EBX
0066CE56  FF 10                     CALL dword ptr [EAX]
0066CE58  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0066CE5B  50                        PUSH EAX
0066CE5C  52                        PUSH EDX
0066CE5D  8B CB                     MOV ECX,EBX
0066CE5F  E8 54 48 D9 FF            CALL 0x004016b8
0066CE64  85 C0                     TEST EAX,EAX
0066CE66  C7 45 F4 00 00 00 00      MOV dword ptr [EBP + -0xc],0x0
0066CE6D  0F 8E 7A 01 00 00         JLE 0x0066cfed
0066CE73  83 C6 0A                  ADD ESI,0xa
0066CE76  8D 4D B4                  LEA ECX,[EBP + -0x4c]
0066CE79  89 75 F8                  MOV dword ptr [EBP + -0x8],ESI
0066CE7C  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0066CE7F  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
LAB_0066ce82:
0066CE82  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0066CE85  8D 8D DC F9 FF FF         LEA ECX,[EBP + 0xfffff9dc]
0066CE8B  8A 02                     MOV AL,byte ptr [EDX]
0066CE8D  50                        PUSH EAX
0066CE8E  51                        PUSH ECX
0066CE8F  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0066CE95  E8 4A 76 D9 FF            CALL 0x004044e4
0066CE9A  B9 4E 00 00 00            MOV ECX,0x4e
0066CE9F  8B F0                     MOV ESI,EAX
0066CEA1  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0066CEA4  8D BD 68 FE FF FF         LEA EDI,[EBP + 0xfffffe68]
0066CEAA  F3 A5                     MOVSD.REP ES:EDI,ESI
0066CEAC  8B 13                     MOV EDX,dword ptr [EBX]
0066CEAE  50                        PUSH EAX
0066CEAF  8B CB                     MOV ECX,EBX
0066CEB1  FF 12                     CALL dword ptr [EDX]
0066CEB3  8B 75 F4                  MOV ESI,dword ptr [EBP + -0xc]
0066CEB6  33 FF                     XOR EDI,EDI
LAB_0066ceb8:
0066CEB8  BA 01 00 00 00            MOV EDX,0x1
0066CEBD  8B CF                     MOV ECX,EDI
0066CEBF  D3 E2                     SHL EDX,CL
0066CEC1  23 D0                     AND EDX,EAX
0066CEC3  81 FA 00 01 00 00         CMP EDX,0x100
0066CEC9  77 7B                     JA 0x0066cf46
0066CECB  74 71                     JZ 0x0066cf3e
0066CECD  4A                        DEC EDX
0066CECE  83 FA 7F                  CMP EDX,0x7f
0066CED1  0F 87 F3 00 00 00         JA 0x0066cfca
0066CED7  33 C9                     XOR ECX,ECX
0066CED9  8A 8A B8 06 67 00         MOV CL,byte ptr [EDX + 0x6706b8]
switchD_0066cedf::switchD:
0066CEDF  FF 24 8D 94 06 67 00      JMP dword ptr [ECX*0x4 + 0x670694]
switchD_0066cedf::caseD_1:
0066CEE6  8B 8D 0C FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff0c]
0066CEEC  E9 D7 00 00 00            JMP 0x0066cfc8
switchD_0066cedf::caseD_2:
0066CEF1  8B 8D 1C FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff1c]
0066CEF7  E9 CC 00 00 00            JMP 0x0066cfc8
switchD_0066cedf::caseD_4:
0066CEFC  8B 8D 2C FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff2c]
0066CF02  E9 C1 00 00 00            JMP 0x0066cfc8
switchD_0066cedf::caseD_8:
0066CF07  8B 8D 3C FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff3c]
0066CF0D  E9 B6 00 00 00            JMP 0x0066cfc8
switchD_0066cedf::caseD_10:
0066CF12  8B 8D 4C FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff4c]
0066CF18  E9 AB 00 00 00            JMP 0x0066cfc8
switchD_0066cedf::caseD_20:
0066CF1D  8B 8D 5C FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff5c]
0066CF23  E9 A0 00 00 00            JMP 0x0066cfc8
switchD_0066cedf::caseD_40:
0066CF28  8B 8D 6C FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff6c]
0066CF2E  E9 95 00 00 00            JMP 0x0066cfc8
switchD_0066cedf::caseD_80:
0066CF33  8B 8D 7C FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff7c]
0066CF39  E9 8A 00 00 00            JMP 0x0066cfc8
LAB_0066cf3e:
0066CF3E  8B 4D 8C                  MOV ECX,dword ptr [EBP + -0x74]
0066CF41  E9 82 00 00 00            JMP 0x0066cfc8
LAB_0066cf46:
0066CF46  81 FA 00 00 10 00         CMP EDX,0x100000
0066CF4C  77 4C                     JA 0x0066cf9a
0066CF4E  74 42                     JZ 0x0066cf92
0066CF50  81 FA 00 00 04 00         CMP EDX,0x40000
0066CF56  77 2A                     JA 0x0066cf82
0066CF58  74 20                     JZ 0x0066cf7a
0066CF5A  81 FA 00 00 01 00         CMP EDX,0x10000
0066CF60  74 10                     JZ 0x0066cf72
0066CF62  81 FA 00 00 02 00         CMP EDX,0x20000
0066CF68  75 60                     JNZ 0x0066cfca
0066CF6A  8B 8D BC FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffebc]
0066CF70  EB 56                     JMP 0x0066cfc8
LAB_0066cf72:
0066CF72  8B 8D AC FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffeac]
0066CF78  EB 4E                     JMP 0x0066cfc8
LAB_0066cf7a:
0066CF7A  8B 8D 8C FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffe8c]
0066CF80  EB 46                     JMP 0x0066cfc8
LAB_0066cf82:
0066CF82  81 FA 00 00 08 00         CMP EDX,0x80000
0066CF88  75 40                     JNZ 0x0066cfca
0066CF8A  8B 8D 9C FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffe9c]
0066CF90  EB 36                     JMP 0x0066cfc8
LAB_0066cf92:
0066CF92  8B 8D CC FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffecc]
0066CF98  EB 2E                     JMP 0x0066cfc8
LAB_0066cf9a:
0066CF9A  81 FA 00 00 20 00         CMP EDX,0x200000
0066CFA0  74 20                     JZ 0x0066cfc2
0066CFA2  81 FA 00 00 40 00         CMP EDX,0x400000
0066CFA8  74 10                     JZ 0x0066cfba
0066CFAA  81 FA 00 00 80 00         CMP EDX,0x800000
0066CFB0  75 18                     JNZ 0x0066cfca
0066CFB2  8B 8D FC FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffefc]
0066CFB8  EB 0E                     JMP 0x0066cfc8
LAB_0066cfba:
0066CFBA  8B 8D EC FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffeec]
0066CFC0  EB 06                     JMP 0x0066cfc8
LAB_0066cfc2:
0066CFC2  8B 8D DC FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffedc]
LAB_0066cfc8:
0066CFC8  03 F1                     ADD ESI,ECX
switchD_0066cedf::caseD_3:
0066CFCA  47                        INC EDI
0066CFCB  83 FF 20                  CMP EDI,0x20
0066CFCE  0F 8C E4 FE FF FF         JL 0x0066ceb8
0066CFD4  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0066CFD7  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
0066CFDA  83 C1 04                  ADD ECX,0x4
0066CFDD  48                        DEC EAX
0066CFDE  89 75 F4                  MOV dword ptr [EBP + -0xc],ESI
0066CFE1  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0066CFE4  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
0066CFE7  0F 85 95 FE FF FF         JNZ 0x0066ce82
LAB_0066cfed:
0066CFED  6A 04                     PUSH 0x4
0066CFEF  E8 1C DC 03 00            CALL 0x006aac10
0066CFF4  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
0066CFF7  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
0066CFFA  89 10                     MOV dword ptr [EAX],EDX
0066CFFC  E9 30 34 00 00            JMP 0x00670431
switchD_0066bdf4::caseD_7f4:
0066D001  33 C0                     XOR EAX,EAX
0066D003  3B F8                     CMP EDI,EAX
0066D005  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0066D008  7E 65                     JLE 0x0066d06f
0066D00A  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
LAB_0066d00d:
0066D00D  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0066D010  8A 04 30                  MOV AL,byte ptr [EAX + ESI*0x1]
0066D013  3C 04                     CMP AL,0x4
0066D015  74 44                     JZ 0x0066d05b
0066D017  3C 01                     CMP AL,0x1
0066D019  74 40                     JZ 0x0066d05b
0066D01B  8D 0C BE                  LEA ECX,[ESI + EDI*0x4]
0066D01E  0F BF 54 0F 01            MOVSX EDX,word ptr [EDI + ECX*0x1 + 0x1]
0066D023  52                        PUSH EDX
0066D024  E8 B2 87 D9 FF            CALL 0x004057db
0066D029  85 C0                     TEST EAX,EAX
0066D02B  74 0F                     JZ 0x0066d03c
0066D02D  6A 7F                     PUSH 0x7f
0066D02F  50                        PUSH EAX
0066D030  8D 43 04                  LEA EAX,[EBX + 0x4]
0066D033  50                        PUSH EAX
0066D034  E8 07 13 0C 00            CALL 0x0072e340
0066D039  83 C4 0C                  ADD ESP,0xc
LAB_0066d03c:
0066D03C  C7 83 84 00 00 00 FF FF FF FF  MOV dword ptr [EBX + 0x84],0xffffffff
0066D046  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
0066D04C  6A 79                     PUSH 0x79
0066D04E  68 24 2A 7D 00            PUSH 0x7d2a24
0066D053  51                        PUSH ECX
0066D054  6A 88                     PUSH -0x78
0066D056  E8 E5 8D 03 00            CALL 0x006a5e40
LAB_0066d05b:
0066D05B  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0066D05E  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0066D061  40                        INC EAX
0066D062  83 C2 05                  ADD EDX,0x5
0066D065  3B C7                     CMP EAX,EDI
0066D067  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0066D06A  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
0066D06D  7C 9E                     JL 0x0066d00d
LAB_0066d06f:
0066D06F  8B 13                     MOV EDX,dword ptr [EBX]
0066D071  56                        PUSH ESI
0066D072  8B CB                     MOV ECX,EBX
0066D074  FF 12                     CALL dword ptr [EDX]
0066D076  83 F8 09                  CMP EAX,0x9
0066D079  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0066D07C  75 4C                     JNZ 0x0066d0ca
0066D07E  8B 03                     MOV EAX,dword ptr [EBX]
0066D080  8B CB                     MOV ECX,EBX
0066D082  FF 50 18                  CALL dword ptr [EAX + 0x18]
0066D085  83 F8 08                  CMP EAX,0x8
0066D088  75 40                     JNZ 0x0066d0ca
0066D08A  8D 0C BE                  LEA ECX,[ESI + EDI*0x4]
0066D08D  0F BF 54 0F 01            MOVSX EDX,word ptr [EDI + ECX*0x1 + 0x1]
0066D092  52                        PUSH EDX
0066D093  E8 43 87 D9 FF            CALL 0x004057db
0066D098  85 C0                     TEST EAX,EAX
0066D09A  74 0F                     JZ 0x0066d0ab
0066D09C  6A 7F                     PUSH 0x7f
0066D09E  50                        PUSH EAX
0066D09F  8D 43 04                  LEA EAX,[EBX + 0x4]
0066D0A2  50                        PUSH EAX
0066D0A3  E8 98 12 0C 00            CALL 0x0072e340
0066D0A8  83 C4 0C                  ADD ESP,0xc
LAB_0066d0ab:
0066D0AB  C7 83 84 00 00 00 FF FF FF FF  MOV dword ptr [EBX + 0x84],0xffffffff
0066D0B5  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
0066D0BB  6A 79                     PUSH 0x79
0066D0BD  68 24 2A 7D 00            PUSH 0x7d2a24
0066D0C2  51                        PUSH ECX
0066D0C3  6A 88                     PUSH -0x78
0066D0C5  E8 76 8D 03 00            CALL 0x006a5e40
LAB_0066d0ca:
0066D0CA  8B 03                     MOV EAX,dword ptr [EBX]
0066D0CC  8D 55 B4                  LEA EDX,[EBP + -0x4c]
0066D0CF  8D 4E 05                  LEA ECX,[ESI + 0x5]
0066D0D2  52                        PUSH EDX
0066D0D3  51                        PUSH ECX
0066D0D4  8B CB                     MOV ECX,EBX
0066D0D6  FF 10                     CALL dword ptr [EAX]
0066D0D8  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0066D0DB  50                        PUSH EAX
0066D0DC  52                        PUSH EDX
0066D0DD  8B CB                     MOV ECX,EBX
0066D0DF  E8 D4 45 D9 FF            CALL 0x004016b8
0066D0E4  33 FF                     XOR EDI,EDI
0066D0E6  85 C0                     TEST EAX,EAX
0066D0E8  0F 8E 37 33 00 00         JLE 0x00670425
0066D0EE  83 C6 0A                  ADD ESI,0xa
0066D0F1  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0066D0F4  89 75 F8                  MOV dword ptr [EBP + -0x8],ESI
0066D0F7  8D 75 B4                  LEA ESI,[EBP + -0x4c]
LAB_0066d0fa:
0066D0FA  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0066D0FD  8B 03                     MOV EAX,dword ptr [EBX]
0066D0FF  51                        PUSH ECX
0066D100  8B CB                     MOV ECX,EBX
0066D102  FF 10                     CALL dword ptr [EAX]
0066D104  8B 16                     MOV EDX,dword ptr [ESI]
0066D106  50                        PUSH EAX
0066D107  52                        PUSH EDX
0066D108  E8 F0 50 D9 FF            CALL 0x004021fd
0066D10D  03 F8                     ADD EDI,EAX
0066D10F  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0066D112  83 C4 08                  ADD ESP,0x8
0066D115  83 C6 04                  ADD ESI,0x4
0066D118  48                        DEC EAX
0066D119  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0066D11C  75 DC                     JNZ 0x0066d0fa
0066D11E  E9 02 33 00 00            JMP 0x00670425
switchD_0066bdf4::caseD_7f5:
0066D123  33 C0                     XOR EAX,EAX
0066D125  3B F8                     CMP EDI,EAX
0066D127  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0066D12A  7E 65                     JLE 0x0066d191
0066D12C  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
LAB_0066d12f:
0066D12F  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0066D132  8A 04 30                  MOV AL,byte ptr [EAX + ESI*0x1]
0066D135  3C 04                     CMP AL,0x4
0066D137  74 44                     JZ 0x0066d17d
0066D139  3C 01                     CMP AL,0x1
0066D13B  74 40                     JZ 0x0066d17d
0066D13D  8D 0C BE                  LEA ECX,[ESI + EDI*0x4]
0066D140  0F BF 54 0F 01            MOVSX EDX,word ptr [EDI + ECX*0x1 + 0x1]
0066D145  52                        PUSH EDX
0066D146  E8 90 86 D9 FF            CALL 0x004057db
0066D14B  85 C0                     TEST EAX,EAX
0066D14D  74 0F                     JZ 0x0066d15e
0066D14F  6A 7F                     PUSH 0x7f
0066D151  50                        PUSH EAX
0066D152  8D 43 04                  LEA EAX,[EBX + 0x4]
0066D155  50                        PUSH EAX
0066D156  E8 E5 11 0C 00            CALL 0x0072e340
0066D15B  83 C4 0C                  ADD ESP,0xc
LAB_0066d15e:
0066D15E  C7 83 84 00 00 00 FF FF FF FF  MOV dword ptr [EBX + 0x84],0xffffffff
0066D168  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
0066D16E  6A 79                     PUSH 0x79
0066D170  68 24 2A 7D 00            PUSH 0x7d2a24
0066D175  51                        PUSH ECX
0066D176  6A 88                     PUSH -0x78
0066D178  E8 C3 8C 03 00            CALL 0x006a5e40
LAB_0066d17d:
0066D17D  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0066D180  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0066D183  40                        INC EAX
0066D184  83 C2 05                  ADD EDX,0x5
0066D187  3B C7                     CMP EAX,EDI
0066D189  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0066D18C  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
0066D18F  7C 9E                     JL 0x0066d12f
LAB_0066d191:
0066D191  6A 04                     PUSH 0x4
0066D193  E8 78 DA 03 00            CALL 0x006aac10
0066D198  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
0066D19B  8B 13                     MOV EDX,dword ptr [EBX]
0066D19D  8D 46 1E                  LEA EAX,[ESI + 0x1e]
0066D1A0  8B CB                     MOV ECX,EBX
0066D1A2  50                        PUSH EAX
0066D1A3  FF 12                     CALL dword ptr [EDX]
0066D1A5  8B 13                     MOV EDX,dword ptr [EBX]
0066D1A7  50                        PUSH EAX
0066D1A8  8D 46 19                  LEA EAX,[ESI + 0x19]
0066D1AB  8B CB                     MOV ECX,EBX
0066D1AD  50                        PUSH EAX
0066D1AE  FF 12                     CALL dword ptr [EDX]
0066D1B0  8B 13                     MOV EDX,dword ptr [EBX]
0066D1B2  50                        PUSH EAX
0066D1B3  8D 46 14                  LEA EAX,[ESI + 0x14]
0066D1B6  8B CB                     MOV ECX,EBX
0066D1B8  50                        PUSH EAX
0066D1B9  FF 12                     CALL dword ptr [EDX]
0066D1BB  8B 13                     MOV EDX,dword ptr [EBX]
0066D1BD  50                        PUSH EAX
0066D1BE  8D 46 0F                  LEA EAX,[ESI + 0xf]
0066D1C1  8B CB                     MOV ECX,EBX
0066D1C3  50                        PUSH EAX
0066D1C4  FF 12                     CALL dword ptr [EDX]
0066D1C6  8B 13                     MOV EDX,dword ptr [EBX]
0066D1C8  50                        PUSH EAX
0066D1C9  8D 46 0A                  LEA EAX,[ESI + 0xa]
0066D1CC  8B CB                     MOV ECX,EBX
0066D1CE  50                        PUSH EAX
0066D1CF  FF 12                     CALL dword ptr [EDX]
0066D1D1  8B 13                     MOV EDX,dword ptr [EBX]
0066D1D3  50                        PUSH EAX
0066D1D4  8D 46 05                  LEA EAX,[ESI + 0x5]
0066D1D7  8B CB                     MOV ECX,EBX
0066D1D9  50                        PUSH EAX
0066D1DA  FF 12                     CALL dword ptr [EDX]
0066D1DC  8B 13                     MOV EDX,dword ptr [EBX]
0066D1DE  50                        PUSH EAX
0066D1DF  56                        PUSH ESI
0066D1E0  8B CB                     MOV ECX,EBX
0066D1E2  FF 12                     CALL dword ptr [EDX]
0066D1E4  50                        PUSH EAX
0066D1E5  E8 56 62 D9 FF            CALL 0x00403440
0066D1EA  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
0066D1ED  83 C4 1C                  ADD ESP,0x1c
0066D1F0  89 01                     MOV dword ptr [ECX],EAX
0066D1F2  E9 3A 32 00 00            JMP 0x00670431
LAB_0066d1f7:
0066D1F7  33 C9                     XOR ECX,ECX
0066D1F9  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
LAB_0066d1fc:
0066D1FC  8A 04 31                  MOV AL,byte ptr [ECX + ESI*0x1]
0066D1FF  3C 04                     CMP AL,0x4
0066D201  74 47                     JZ 0x0066d24a
0066D203  3C 01                     CMP AL,0x1
0066D205  74 43                     JZ 0x0066d24a
0066D207  8D 14 BE                  LEA EDX,[ESI + EDI*0x4]
0066D20A  0F BF 44 17 01            MOVSX EAX,word ptr [EDI + EDX*0x1 + 0x1]
0066D20F  50                        PUSH EAX
0066D210  E8 C6 85 D9 FF            CALL 0x004057db
0066D215  85 C0                     TEST EAX,EAX
0066D217  74 0F                     JZ 0x0066d228
0066D219  6A 7F                     PUSH 0x7f
0066D21B  8D 4B 04                  LEA ECX,[EBX + 0x4]
0066D21E  50                        PUSH EAX
0066D21F  51                        PUSH ECX
0066D220  E8 1B 11 0C 00            CALL 0x0072e340
0066D225  83 C4 0C                  ADD ESP,0xc
LAB_0066d228:
0066D228  C7 83 84 00 00 00 FF FF FF FF  MOV dword ptr [EBX + 0x84],0xffffffff
0066D232  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
0066D238  6A 79                     PUSH 0x79
0066D23A  68 24 2A 7D 00            PUSH 0x7d2a24
0066D23F  52                        PUSH EDX
0066D240  6A 88                     PUSH -0x78
0066D242  E8 F9 8B 03 00            CALL 0x006a5e40
0066D247  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
LAB_0066d24a:
0066D24A  83 C1 05                  ADD ECX,0x5
0066D24D  83 F9 0F                  CMP ECX,0xf
0066D250  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0066D253  7C A7                     JL 0x0066d1fc
0066D255  8A 46 0F                  MOV AL,byte ptr [ESI + 0xf]
0066D258  3C 06                     CMP AL,0x6
0066D25A  74 43                     JZ 0x0066d29f
0066D25C  3C 03                     CMP AL,0x3
0066D25E  74 3F                     JZ 0x0066d29f
0066D260  8D 04 BE                  LEA EAX,[ESI + EDI*0x4]
0066D263  0F BF 4C 07 01            MOVSX ECX,word ptr [EDI + EAX*0x1 + 0x1]
0066D268  51                        PUSH ECX
0066D269  E8 6D 85 D9 FF            CALL 0x004057db
0066D26E  85 C0                     TEST EAX,EAX
0066D270  74 0F                     JZ 0x0066d281
0066D272  6A 7F                     PUSH 0x7f
0066D274  8D 53 04                  LEA EDX,[EBX + 0x4]
0066D277  50                        PUSH EAX
0066D278  52                        PUSH EDX
0066D279  E8 C2 10 0C 00            CALL 0x0072e340
0066D27E  83 C4 0C                  ADD ESP,0xc
LAB_0066d281:
0066D281  C7 83 84 00 00 00 FF FF FF FF  MOV dword ptr [EBX + 0x84],0xffffffff
0066D28B  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
0066D290  6A 79                     PUSH 0x79
0066D292  68 24 2A 7D 00            PUSH 0x7d2a24
0066D297  50                        PUSH EAX
0066D298  6A 88                     PUSH -0x78
0066D29A  E8 A1 8B 03 00            CALL 0x006a5e40
LAB_0066d29f:
0066D29F  83 FF 04                  CMP EDI,0x4
0066D2A2  C7 45 F8 04 00 00 00      MOV dword ptr [EBP + -0x8],0x4
0066D2A9  7E 69                     JLE 0x0066d314
0066D2AB  C7 45 FC 14 00 00 00      MOV dword ptr [EBP + -0x4],0x14
LAB_0066d2b2:
0066D2B2  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0066D2B5  8A 04 31                  MOV AL,byte ptr [ECX + ESI*0x1]
0066D2B8  3C 04                     CMP AL,0x4
0066D2BA  74 44                     JZ 0x0066d300
0066D2BC  3C 01                     CMP AL,0x1
0066D2BE  74 40                     JZ 0x0066d300
0066D2C0  8D 14 BE                  LEA EDX,[ESI + EDI*0x4]
0066D2C3  0F BF 44 17 01            MOVSX EAX,word ptr [EDI + EDX*0x1 + 0x1]
0066D2C8  50                        PUSH EAX
0066D2C9  E8 0D 85 D9 FF            CALL 0x004057db
0066D2CE  85 C0                     TEST EAX,EAX
0066D2D0  74 0F                     JZ 0x0066d2e1
0066D2D2  6A 7F                     PUSH 0x7f
0066D2D4  8D 4B 04                  LEA ECX,[EBX + 0x4]
0066D2D7  50                        PUSH EAX
0066D2D8  51                        PUSH ECX
0066D2D9  E8 62 10 0C 00            CALL 0x0072e340
0066D2DE  83 C4 0C                  ADD ESP,0xc
LAB_0066d2e1:
0066D2E1  C7 83 84 00 00 00 FF FF FF FF  MOV dword ptr [EBX + 0x84],0xffffffff
0066D2EB  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
0066D2F1  6A 79                     PUSH 0x79
0066D2F3  68 24 2A 7D 00            PUSH 0x7d2a24
0066D2F8  52                        PUSH EDX
0066D2F9  6A 88                     PUSH -0x78
0066D2FB  E8 40 8B 03 00            CALL 0x006a5e40
LAB_0066d300:
0066D300  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0066D303  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0066D306  40                        INC EAX
0066D307  83 C2 05                  ADD EDX,0x5
0066D30A  3B C7                     CMP EAX,EDI
0066D30C  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0066D30F  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
0066D312  7C 9E                     JL 0x0066d2b2
LAB_0066d314:
0066D314  8B 03                     MOV EAX,dword ptr [EBX]
0066D316  56                        PUSH ESI
0066D317  8B CB                     MOV ECX,EBX
0066D319  FF 10                     CALL dword ptr [EAX]
0066D31B  83 F8 09                  CMP EAX,0x9
0066D31E  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0066D321  75 4B                     JNZ 0x0066d36e
0066D323  8B 13                     MOV EDX,dword ptr [EBX]
0066D325  8B CB                     MOV ECX,EBX
0066D327  FF 52 18                  CALL dword ptr [EDX + 0x18]
0066D32A  83 F8 08                  CMP EAX,0x8
0066D32D  75 3F                     JNZ 0x0066d36e
0066D32F  8D 04 BE                  LEA EAX,[ESI + EDI*0x4]
0066D332  0F BF 4C 07 01            MOVSX ECX,word ptr [EDI + EAX*0x1 + 0x1]
0066D337  51                        PUSH ECX
0066D338  E8 9E 84 D9 FF            CALL 0x004057db
0066D33D  85 C0                     TEST EAX,EAX
0066D33F  74 0F                     JZ 0x0066d350
0066D341  6A 7F                     PUSH 0x7f
0066D343  8D 53 04                  LEA EDX,[EBX + 0x4]
0066D346  50                        PUSH EAX
0066D347  52                        PUSH EDX
0066D348  E8 F3 0F 0C 00            CALL 0x0072e340
0066D34D  83 C4 0C                  ADD ESP,0xc
LAB_0066d350:
0066D350  C7 83 84 00 00 00 FF FF FF FF  MOV dword ptr [EBX + 0x84],0xffffffff
0066D35A  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
0066D35F  6A 79                     PUSH 0x79
0066D361  68 24 2A 7D 00            PUSH 0x7d2a24
0066D366  50                        PUSH EAX
0066D367  6A 88                     PUSH -0x78
0066D369  E8 D2 8A 03 00            CALL 0x006a5e40
LAB_0066d36e:
0066D36E  8B 13                     MOV EDX,dword ptr [EBX]
0066D370  8D 4D B4                  LEA ECX,[EBP + -0x4c]
0066D373  8D 46 05                  LEA EAX,[ESI + 0x5]
0066D376  51                        PUSH ECX
0066D377  50                        PUSH EAX
0066D378  8B CB                     MOV ECX,EBX
0066D37A  FF 12                     CALL dword ptr [EDX]
0066D37C  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0066D37F  50                        PUSH EAX
0066D380  51                        PUSH ECX
0066D381  8B CB                     MOV ECX,EBX
0066D383  E8 30 43 D9 FF            CALL 0x004016b8
0066D388  85 C0                     TEST EAX,EAX
0066D38A  C7 05 80 19 81 00 00 00 00 00  MOV dword ptr [0x00811980],0x0
0066D394  0F 8E C4 0B 00 00         JLE 0x0066df5e
0066D39A  8D 56 2D                  LEA EDX,[ESI + 0x2d]
0066D39D  8D 4E 28                  LEA ECX,[ESI + 0x28]
0066D3A0  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
0066D3A3  8D 56 23                  LEA EDX,[ESI + 0x23]
0066D3A6  89 4D EC                  MOV dword ptr [EBP + -0x14],ECX
0066D3A9  89 55 D8                  MOV dword ptr [EBP + -0x28],EDX
0066D3AC  8D 4E 1E                  LEA ECX,[ESI + 0x1e]
0066D3AF  8D 56 19                  LEA EDX,[ESI + 0x19]
0066D3B2  89 4D E8                  MOV dword ptr [EBP + -0x18],ECX
0066D3B5  89 55 E0                  MOV dword ptr [EBP + -0x20],EDX
0066D3B8  8D 4E 14                  LEA ECX,[ESI + 0x14]
0066D3BB  8D 56 0F                  LEA EDX,[ESI + 0xf]
0066D3BE  83 C6 0A                  ADD ESI,0xa
0066D3C1  89 4D D4                  MOV dword ptr [EBP + -0x2c],ECX
0066D3C4  89 75 F8                  MOV dword ptr [EBP + -0x8],ESI
0066D3C7  89 55 DC                  MOV dword ptr [EBP + -0x24],EDX
0066D3CA  8D 75 B4                  LEA ESI,[EBP + -0x4c]
0066D3CD  8B F8                     MOV EDI,EAX
LAB_0066d3cf:
0066D3CF  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
0066D3D2  8B 03                     MOV EAX,dword ptr [EBX]
0066D3D4  6A 00                     PUSH 0x0
0066D3D6  68 28 56 40 00            PUSH 0x405628
0066D3DB  51                        PUSH ECX
0066D3DC  8B CB                     MOV ECX,EBX
0066D3DE  FF 10                     CALL dword ptr [EAX]
0066D3E0  8B 13                     MOV EDX,dword ptr [EBX]
0066D3E2  50                        PUSH EAX
0066D3E3  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
0066D3E6  8B CB                     MOV ECX,EBX
0066D3E8  50                        PUSH EAX
0066D3E9  FF 12                     CALL dword ptr [EDX]
0066D3EB  8B 13                     MOV EDX,dword ptr [EBX]
0066D3ED  50                        PUSH EAX
0066D3EE  8B 45 D8                  MOV EAX,dword ptr [EBP + -0x28]
0066D3F1  8B CB                     MOV ECX,EBX
0066D3F3  50                        PUSH EAX
0066D3F4  FF 12                     CALL dword ptr [EDX]
0066D3F6  8B 13                     MOV EDX,dword ptr [EBX]
0066D3F8  50                        PUSH EAX
0066D3F9  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
0066D3FC  8B CB                     MOV ECX,EBX
0066D3FE  50                        PUSH EAX
0066D3FF  FF 12                     CALL dword ptr [EDX]
0066D401  8B 13                     MOV EDX,dword ptr [EBX]
0066D403  50                        PUSH EAX
0066D404  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
0066D407  8B CB                     MOV ECX,EBX
0066D409  50                        PUSH EAX
0066D40A  FF 12                     CALL dword ptr [EDX]
0066D40C  8B 13                     MOV EDX,dword ptr [EBX]
0066D40E  50                        PUSH EAX
0066D40F  8B 45 D4                  MOV EAX,dword ptr [EBP + -0x2c]
0066D412  8B CB                     MOV ECX,EBX
0066D414  50                        PUSH EAX
0066D415  FF 12                     CALL dword ptr [EDX]
0066D417  8B 13                     MOV EDX,dword ptr [EBX]
0066D419  50                        PUSH EAX
0066D41A  8B 45 DC                  MOV EAX,dword ptr [EBP + -0x24]
0066D41D  8B CB                     MOV ECX,EBX
0066D41F  50                        PUSH EAX
0066D420  FF 52 08                  CALL dword ptr [EDX + 0x8]
0066D423  8B 13                     MOV EDX,dword ptr [EBX]
0066D425  50                        PUSH EAX
0066D426  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0066D429  8B CB                     MOV ECX,EBX
0066D42B  50                        PUSH EAX
0066D42C  FF 12                     CALL dword ptr [EDX]
0066D42E  66 8B 0E                  MOV CX,word ptr [ESI]
0066D431  50                        PUSH EAX
0066D432  51                        PUSH ECX
0066D433  E8 4A 64 D9 FF            CALL 0x00403882
0066D438  83 C4 2C                  ADD ESP,0x2c
0066D43B  83 C6 04                  ADD ESI,0x4
0066D43E  4F                        DEC EDI
0066D43F  75 8E                     JNZ 0x0066d3cf
0066D441  E9 18 0B 00 00            JMP 0x0066df5e
LAB_0066d446:
0066D446  8D 88 09 F8 FF FF         LEA ECX,[EAX + 0xfffff809]
0066D44C  83 F9 56                  CMP ECX,0x56
0066D44F  0F 87 01 30 00 00         JA 0x00670456
0066D455  33 D2                     XOR EDX,EDX
0066D457  8A 91 B4 07 67 00         MOV DL,byte ptr [ECX + 0x6707b4]
switchD_0066d45d::switchD:
0066D45D  FF 24 95 38 07 67 00      JMP dword ptr [EDX*0x4 + 0x670738]
switchD_0066d45d::caseD_848:
0066D464  33 C0                     XOR EAX,EAX
0066D466  3B F8                     CMP EDI,EAX
0066D468  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0066D46B  7E 65                     JLE 0x0066d4d2
0066D46D  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
LAB_0066d470:
0066D470  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0066D473  8A 04 30                  MOV AL,byte ptr [EAX + ESI*0x1]
0066D476  3C 04                     CMP AL,0x4
0066D478  74 44                     JZ 0x0066d4be
0066D47A  3C 01                     CMP AL,0x1
0066D47C  74 40                     JZ 0x0066d4be
0066D47E  8D 0C BE                  LEA ECX,[ESI + EDI*0x4]
0066D481  0F BF 54 0F 01            MOVSX EDX,word ptr [EDI + ECX*0x1 + 0x1]
0066D486  52                        PUSH EDX
0066D487  E8 4F 83 D9 FF            CALL 0x004057db
0066D48C  85 C0                     TEST EAX,EAX
0066D48E  74 0F                     JZ 0x0066d49f
0066D490  6A 7F                     PUSH 0x7f
0066D492  50                        PUSH EAX
0066D493  8D 43 04                  LEA EAX,[EBX + 0x4]
0066D496  50                        PUSH EAX
0066D497  E8 A4 0E 0C 00            CALL 0x0072e340
0066D49C  83 C4 0C                  ADD ESP,0xc
LAB_0066d49f:
0066D49F  C7 83 84 00 00 00 FF FF FF FF  MOV dword ptr [EBX + 0x84],0xffffffff
0066D4A9  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
0066D4AF  6A 79                     PUSH 0x79
0066D4B1  68 24 2A 7D 00            PUSH 0x7d2a24
0066D4B6  51                        PUSH ECX
0066D4B7  6A 88                     PUSH -0x78
0066D4B9  E8 82 89 03 00            CALL 0x006a5e40
LAB_0066d4be:
0066D4BE  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0066D4C1  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0066D4C4  40                        INC EAX
0066D4C5  83 C2 05                  ADD EDX,0x5
0066D4C8  3B C7                     CMP EAX,EDI
0066D4CA  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0066D4CD  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
0066D4D0  7C 9E                     JL 0x0066d470
LAB_0066d4d2:
0066D4D2  8B 13                     MOV EDX,dword ptr [EBX]
0066D4D4  56                        PUSH ESI
0066D4D5  8B CB                     MOV ECX,EBX
0066D4D7  FF 12                     CALL dword ptr [EDX]
0066D4D9  83 F8 09                  CMP EAX,0x9
0066D4DC  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0066D4DF  75 0C                     JNZ 0x0066d4ed
0066D4E1  8B 03                     MOV EAX,dword ptr [EBX]
0066D4E3  8B CB                     MOV ECX,EBX
0066D4E5  FF 50 18                  CALL dword ptr [EAX + 0x18]
0066D4E8  83 F8 08                  CMP EAX,0x8
0066D4EB  74 09                     JZ 0x0066d4f6
LAB_0066d4ed:
0066D4ED  81 7D FC FF 00 00 00      CMP dword ptr [EBP + -0x4],0xff
0066D4F4  75 40                     JNZ 0x0066d536
LAB_0066d4f6:
0066D4F6  8D 0C BE                  LEA ECX,[ESI + EDI*0x4]
0066D4F9  0F BF 54 0F 01            MOVSX EDX,word ptr [EDI + ECX*0x1 + 0x1]
0066D4FE  52                        PUSH EDX
0066D4FF  E8 D7 82 D9 FF            CALL 0x004057db
0066D504  85 C0                     TEST EAX,EAX
0066D506  74 0F                     JZ 0x0066d517
0066D508  6A 7F                     PUSH 0x7f
0066D50A  50                        PUSH EAX
0066D50B  8D 43 04                  LEA EAX,[EBX + 0x4]
0066D50E  50                        PUSH EAX
0066D50F  E8 2C 0E 0C 00            CALL 0x0072e340
0066D514  83 C4 0C                  ADD ESP,0xc
LAB_0066d517:
0066D517  C7 83 84 00 00 00 FF FF FF FF  MOV dword ptr [EBX + 0x84],0xffffffff
0066D521  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
0066D527  6A 79                     PUSH 0x79
0066D529  68 24 2A 7D 00            PUSH 0x7d2a24
0066D52E  51                        PUSH ECX
0066D52F  6A 88                     PUSH -0x78
0066D531  E8 0A 89 03 00            CALL 0x006a5e40
LAB_0066d536:
0066D536  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0066D539  8D 55 B4                  LEA EDX,[EBP + -0x4c]
0066D53C  52                        PUSH EDX
0066D53D  6A 00                     PUSH 0x0
0066D53F  50                        PUSH EAX
0066D540  8B CB                     MOV ECX,EBX
0066D542  E8 71 41 D9 FF            CALL 0x004016b8
0066D547  83 F8 01                  CMP EAX,0x1
0066D54A  74 40                     JZ 0x0066d58c
0066D54C  8D 0C BE                  LEA ECX,[ESI + EDI*0x4]
0066D54F  0F BF 54 0F 01            MOVSX EDX,word ptr [EDI + ECX*0x1 + 0x1]
0066D554  52                        PUSH EDX
0066D555  E8 81 82 D9 FF            CALL 0x004057db
0066D55A  85 C0                     TEST EAX,EAX
0066D55C  74 0F                     JZ 0x0066d56d
0066D55E  6A 7F                     PUSH 0x7f
0066D560  50                        PUSH EAX
0066D561  8D 43 04                  LEA EAX,[EBX + 0x4]
0066D564  50                        PUSH EAX
0066D565  E8 D6 0D 0C 00            CALL 0x0072e340
0066D56A  83 C4 0C                  ADD ESP,0xc
LAB_0066d56d:
0066D56D  C7 83 84 00 00 00 FF FF FF FF  MOV dword ptr [EBX + 0x84],0xffffffff
0066D577  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
0066D57D  6A 79                     PUSH 0x79
0066D57F  68 24 2A 7D 00            PUSH 0x7d2a24
0066D584  51                        PUSH ECX
0066D585  6A 88                     PUSH -0x78
0066D587  E8 B4 88 03 00            CALL 0x006a5e40
LAB_0066d58c:
0066D58C  33 C9                     XOR ECX,ECX
0066D58E  33 C0                     XOR EAX,EAX
0066D590  8A 0D AF 8A 80 00         MOV CL,byte ptr [0x00808aaf]
0066D596  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0066D599  3B C8                     CMP ECX,EAX
0066D59B  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
0066D59E  7E 46                     JLE 0x0066d5e6
0066D5A0  C7 45 F8 F5 8A 80 00      MOV dword ptr [EBP + -0x8],0x808af5
LAB_0066d5a7:
0066D5A7  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0066D5AA  33 D2                     XOR EDX,EDX
0066D5AC  8A 51 FF                  MOV DL,byte ptr [ECX + -0x1]
0066D5AF  8B 4D B4                  MOV ECX,dword ptr [EBP + -0x4c]
0066D5B2  3B D1                     CMP EDX,ECX
0066D5B4  75 08                     JNZ 0x0066d5be
0066D5B6  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
0066D5B9  80 3A 00                  CMP byte ptr [EDX],0x0
0066D5BC  75 16                     JNZ 0x0066d5d4
LAB_0066d5be:
0066D5BE  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
0066D5C1  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
0066D5C4  40                        INC EAX
0066D5C5  81 C2 9C 00 00 00         ADD EDX,0x9c
0066D5CB  3B C1                     CMP EAX,ECX
0066D5CD  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
0066D5D0  7C D5                     JL 0x0066d5a7
0066D5D2  EB 12                     JMP 0x0066d5e6
LAB_0066d5d4:
0066D5D4  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
0066D5D7  C1 E1 03                  SHL ECX,0x3
0066D5DA  2B C8                     SUB ECX,EAX
0066D5DC  8D 14 8D B0 8A 80 00      LEA EDX,[ECX*0x4 + 0x808ab0]
0066D5E3  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
LAB_0066d5e6:
0066D5E6  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0066D5E9  85 C0                     TEST EAX,EAX
0066D5EB  75 3F                     JNZ 0x0066d62c
0066D5ED  8D 04 BE                  LEA EAX,[ESI + EDI*0x4]
0066D5F0  0F BF 4C 07 01            MOVSX ECX,word ptr [EDI + EAX*0x1 + 0x1]
0066D5F5  51                        PUSH ECX
0066D5F6  E8 E0 81 D9 FF            CALL 0x004057db
0066D5FB  85 C0                     TEST EAX,EAX
0066D5FD  74 0F                     JZ 0x0066d60e
0066D5FF  6A 7F                     PUSH 0x7f
0066D601  8D 53 04                  LEA EDX,[EBX + 0x4]
0066D604  50                        PUSH EAX
0066D605  52                        PUSH EDX
0066D606  E8 35 0D 0C 00            CALL 0x0072e340
0066D60B  83 C4 0C                  ADD ESP,0xc
LAB_0066d60e:
0066D60E  C7 83 84 00 00 00 FF FF FF FF  MOV dword ptr [EBX + 0x84],0xffffffff
0066D618  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
0066D61D  6A 79                     PUSH 0x79
0066D61F  68 24 2A 7D 00            PUSH 0x7d2a24
0066D624  50                        PUSH EAX
0066D625  6A 88                     PUSH -0x78
0066D627  E8 14 88 03 00            CALL 0x006a5e40
LAB_0066d62c:
0066D62C  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0066D62F  51                        PUSH ECX
LAB_0066d630:
0066D630  E8 7B 73 05 00            CALL 0x006c49b0
0066D635  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
0066D638  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
0066D63B  85 C0                     TEST EAX,EAX
0066D63D  0F 84 4B 2E 00 00         JZ 0x0067048e
0066D643  C7 00 03 00 00 00         MOV dword ptr [EAX],0x3
0066D649  8B 95 A4 FD FF FF         MOV EDX,dword ptr [EBP + 0xfffffda4]
0066D64F  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
0066D652  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0066D658  5F                        POP EDI
0066D659  5E                        POP ESI
0066D65A  5B                        POP EBX
0066D65B  8B E5                     MOV ESP,EBP
0066D65D  5D                        POP EBP
0066D65E  C2 0C 00                  RET 0xc
switchD_0066d45d::caseD_849:
0066D661  6A 04                     PUSH 0x4
0066D663  E8 A8 D5 03 00            CALL 0x006aac10
0066D668  33 D2                     XOR EDX,EDX
0066D66A  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
0066D66D  8A 15 91 8A 80 00         MOV DL,byte ptr [0x00808a91]
0066D673  89 10                     MOV dword ptr [EAX],EDX
0066D675  E9 B7 2D 00 00            JMP 0x00670431
switchD_0066d45d::caseD_84a:
0066D67A  6A 04                     PUSH 0x4
0066D67C  E8 8F D5 03 00            CALL 0x006aac10
0066D681  8B 0D 90 8A 80 00         MOV ECX,dword ptr [0x00808a90]
0066D687  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
0066D68A  81 E1 FF 00 00 00         AND ECX,0xff
0066D690  89 08                     MOV dword ptr [EAX],ECX
0066D692  E9 9A 2D 00 00            JMP 0x00670431
switchD_0066d45d::caseD_84b:
0066D697  6A 04                     PUSH 0x4
0066D699  E8 72 D5 03 00            CALL 0x006aac10
0066D69E  33 D2                     XOR EDX,EDX
0066D6A0  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
0066D6A3  8A 15 9B 8A 80 00         MOV DL,byte ptr [0x00808a9b]
0066D6A9  89 10                     MOV dword ptr [EAX],EDX
0066D6AB  E9 81 2D 00 00            JMP 0x00670431
switchD_0066d45d::caseD_84c:
0066D6B0  6A 04                     PUSH 0x4
0066D6B2  E8 59 D5 03 00            CALL 0x006aac10
0066D6B7  33 C9                     XOR ECX,ECX
0066D6B9  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
0066D6BC  8A 0D 92 8A 80 00         MOV CL,byte ptr [0x00808a92]
0066D6C2  89 08                     MOV dword ptr [EAX],ECX
0066D6C4  E9 68 2D 00 00            JMP 0x00670431
switchD_0066d45d::caseD_84d:
0066D6C9  6A 04                     PUSH 0x4
0066D6CB  E8 40 D5 03 00            CALL 0x006aac10
0066D6D0  33 D2                     XOR EDX,EDX
0066D6D2  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
0066D6D5  8A 15 93 8A 80 00         MOV DL,byte ptr [0x00808a93]
0066D6DB  89 10                     MOV dword ptr [EAX],EDX
0066D6DD  E9 4F 2D 00 00            JMP 0x00670431
switchD_0066d45d::caseD_7fb:
0066D6E2  33 C0                     XOR EAX,EAX
0066D6E4  3B F8                     CMP EDI,EAX
0066D6E6  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0066D6E9  7E 65                     JLE 0x0066d750
0066D6EB  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
LAB_0066d6ee:
0066D6EE  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0066D6F1  8A 04 30                  MOV AL,byte ptr [EAX + ESI*0x1]
0066D6F4  3C 04                     CMP AL,0x4
0066D6F6  74 44                     JZ 0x0066d73c
0066D6F8  3C 01                     CMP AL,0x1
0066D6FA  74 40                     JZ 0x0066d73c
0066D6FC  8D 0C BE                  LEA ECX,[ESI + EDI*0x4]
0066D6FF  0F BF 54 0F 01            MOVSX EDX,word ptr [EDI + ECX*0x1 + 0x1]
0066D704  52                        PUSH EDX
0066D705  E8 D1 80 D9 FF            CALL 0x004057db
0066D70A  85 C0                     TEST EAX,EAX
0066D70C  74 0F                     JZ 0x0066d71d
0066D70E  6A 7F                     PUSH 0x7f
0066D710  50                        PUSH EAX
0066D711  8D 43 04                  LEA EAX,[EBX + 0x4]
0066D714  50                        PUSH EAX
0066D715  E8 26 0C 0C 00            CALL 0x0072e340
0066D71A  83 C4 0C                  ADD ESP,0xc
LAB_0066d71d:
0066D71D  C7 83 84 00 00 00 FF FF FF FF  MOV dword ptr [EBX + 0x84],0xffffffff
0066D727  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
0066D72D  6A 79                     PUSH 0x79
0066D72F  68 24 2A 7D 00            PUSH 0x7d2a24
0066D734  51                        PUSH ECX
0066D735  6A 88                     PUSH -0x78
0066D737  E8 04 87 03 00            CALL 0x006a5e40
LAB_0066d73c:
0066D73C  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0066D73F  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0066D742  40                        INC EAX
0066D743  83 C2 05                  ADD EDX,0x5
0066D746  3B C7                     CMP EAX,EDI
0066D748  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0066D74B  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
0066D74E  7C 9E                     JL 0x0066d6ee
LAB_0066d750:
0066D750  C7 05 80 19 81 00 00 00 00 00  MOV dword ptr [0x00811980],0x0
0066D75A  8B 13                     MOV EDX,dword ptr [EBX]
0066D75C  6A 00                     PUSH 0x0
0066D75E  8D 46 1E                  LEA EAX,[ESI + 0x1e]
0066D761  68 7D 1F 40 00            PUSH 0x401f7d
0066D766  50                        PUSH EAX
0066D767  8B CB                     MOV ECX,EBX
0066D769  FF 12                     CALL dword ptr [EDX]
0066D76B  8B 13                     MOV EDX,dword ptr [EBX]
0066D76D  50                        PUSH EAX
0066D76E  8D 46 19                  LEA EAX,[ESI + 0x19]
0066D771  8B CB                     MOV ECX,EBX
0066D773  50                        PUSH EAX
0066D774  FF 12                     CALL dword ptr [EDX]
0066D776  8B 13                     MOV EDX,dword ptr [EBX]
0066D778  50                        PUSH EAX
0066D779  8D 46 14                  LEA EAX,[ESI + 0x14]
0066D77C  8B CB                     MOV ECX,EBX
0066D77E  50                        PUSH EAX
0066D77F  FF 12                     CALL dword ptr [EDX]
0066D781  8B 13                     MOV EDX,dword ptr [EBX]
0066D783  50                        PUSH EAX
0066D784  8D 46 0F                  LEA EAX,[ESI + 0xf]
0066D787  8B CB                     MOV ECX,EBX
0066D789  50                        PUSH EAX
0066D78A  FF 12                     CALL dword ptr [EDX]
0066D78C  8B 13                     MOV EDX,dword ptr [EBX]
0066D78E  50                        PUSH EAX
0066D78F  8D 46 0A                  LEA EAX,[ESI + 0xa]
0066D792  8B CB                     MOV ECX,EBX
0066D794  50                        PUSH EAX
0066D795  FF 12                     CALL dword ptr [EDX]
0066D797  8B 13                     MOV EDX,dword ptr [EBX]
0066D799  50                        PUSH EAX
0066D79A  8D 46 05                  LEA EAX,[ESI + 0x5]
0066D79D  8B CB                     MOV ECX,EBX
0066D79F  50                        PUSH EAX
0066D7A0  FF 12                     CALL dword ptr [EDX]
0066D7A2  8B 13                     MOV EDX,dword ptr [EBX]
0066D7A4  50                        PUSH EAX
0066D7A5  56                        PUSH ESI
0066D7A6  8B CB                     MOV ECX,EBX
0066D7A8  FF 12                     CALL dword ptr [EDX]
0066D7AA  50                        PUSH EAX
0066D7AB  E8 92 69 D9 FF            CALL 0x00404142
0066D7B0  83 C4 24                  ADD ESP,0x24
0066D7B3  E9 35 05 00 00            JMP 0x0066dced
switchD_0066d45d::caseD_7f7:
0066D7B8  33 C9                     XOR ECX,ECX
0066D7BA  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
LAB_0066d7bd:
0066D7BD  8A 04 31                  MOV AL,byte ptr [ECX + ESI*0x1]
0066D7C0  3C 04                     CMP AL,0x4
0066D7C2  74 47                     JZ 0x0066d80b
0066D7C4  3C 01                     CMP AL,0x1
0066D7C6  74 43                     JZ 0x0066d80b
0066D7C8  8D 14 BE                  LEA EDX,[ESI + EDI*0x4]
0066D7CB  0F BF 44 17 01            MOVSX EAX,word ptr [EDI + EDX*0x1 + 0x1]
0066D7D0  50                        PUSH EAX
0066D7D1  E8 05 80 D9 FF            CALL 0x004057db
0066D7D6  85 C0                     TEST EAX,EAX
0066D7D8  74 0F                     JZ 0x0066d7e9
0066D7DA  6A 7F                     PUSH 0x7f
0066D7DC  8D 4B 04                  LEA ECX,[EBX + 0x4]
0066D7DF  50                        PUSH EAX
0066D7E0  51                        PUSH ECX
0066D7E1  E8 5A 0B 0C 00            CALL 0x0072e340
0066D7E6  83 C4 0C                  ADD ESP,0xc
LAB_0066d7e9:
0066D7E9  C7 83 84 00 00 00 FF FF FF FF  MOV dword ptr [EBX + 0x84],0xffffffff
0066D7F3  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
0066D7F9  6A 79                     PUSH 0x79
0066D7FB  68 24 2A 7D 00            PUSH 0x7d2a24
0066D800  52                        PUSH EDX
0066D801  6A 88                     PUSH -0x78
0066D803  E8 38 86 03 00            CALL 0x006a5e40
0066D808  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
LAB_0066d80b:
0066D80B  83 C1 05                  ADD ECX,0x5
0066D80E  83 F9 0F                  CMP ECX,0xf
0066D811  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0066D814  7C A7                     JL 0x0066d7bd
0066D816  8A 46 0F                  MOV AL,byte ptr [ESI + 0xf]
0066D819  3C 06                     CMP AL,0x6
0066D81B  74 43                     JZ 0x0066d860
0066D81D  3C 03                     CMP AL,0x3
0066D81F  74 3F                     JZ 0x0066d860
0066D821  8D 04 BE                  LEA EAX,[ESI + EDI*0x4]
0066D824  0F BF 4C 07 01            MOVSX ECX,word ptr [EDI + EAX*0x1 + 0x1]
0066D829  51                        PUSH ECX
0066D82A  E8 AC 7F D9 FF            CALL 0x004057db
0066D82F  85 C0                     TEST EAX,EAX
0066D831  74 0F                     JZ 0x0066d842
0066D833  6A 7F                     PUSH 0x7f
0066D835  8D 53 04                  LEA EDX,[EBX + 0x4]
0066D838  50                        PUSH EAX
0066D839  52                        PUSH EDX
0066D83A  E8 01 0B 0C 00            CALL 0x0072e340
0066D83F  83 C4 0C                  ADD ESP,0xc
LAB_0066d842:
0066D842  C7 83 84 00 00 00 FF FF FF FF  MOV dword ptr [EBX + 0x84],0xffffffff
0066D84C  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
0066D851  6A 79                     PUSH 0x79
0066D853  68 24 2A 7D 00            PUSH 0x7d2a24
0066D858  50                        PUSH EAX
0066D859  6A 88                     PUSH -0x78
0066D85B  E8 E0 85 03 00            CALL 0x006a5e40
LAB_0066d860:
0066D860  83 FF 04                  CMP EDI,0x4
0066D863  C7 45 F8 04 00 00 00      MOV dword ptr [EBP + -0x8],0x4
0066D86A  7E 69                     JLE 0x0066d8d5
0066D86C  C7 45 FC 14 00 00 00      MOV dword ptr [EBP + -0x4],0x14
LAB_0066d873:
0066D873  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0066D876  8A 04 31                  MOV AL,byte ptr [ECX + ESI*0x1]
0066D879  3C 04                     CMP AL,0x4
0066D87B  74 44                     JZ 0x0066d8c1
0066D87D  3C 01                     CMP AL,0x1
0066D87F  74 40                     JZ 0x0066d8c1
0066D881  8D 14 BE                  LEA EDX,[ESI + EDI*0x4]
0066D884  0F BF 44 17 01            MOVSX EAX,word ptr [EDI + EDX*0x1 + 0x1]
0066D889  50                        PUSH EAX
0066D88A  E8 4C 7F D9 FF            CALL 0x004057db
0066D88F  85 C0                     TEST EAX,EAX
0066D891  74 0F                     JZ 0x0066d8a2
0066D893  6A 7F                     PUSH 0x7f
0066D895  8D 4B 04                  LEA ECX,[EBX + 0x4]
0066D898  50                        PUSH EAX
0066D899  51                        PUSH ECX
0066D89A  E8 A1 0A 0C 00            CALL 0x0072e340
0066D89F  83 C4 0C                  ADD ESP,0xc
LAB_0066d8a2:
0066D8A2  C7 83 84 00 00 00 FF FF FF FF  MOV dword ptr [EBX + 0x84],0xffffffff
0066D8AC  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
0066D8B2  6A 79                     PUSH 0x79
0066D8B4  68 24 2A 7D 00            PUSH 0x7d2a24
0066D8B9  52                        PUSH EDX
0066D8BA  6A 88                     PUSH -0x78
0066D8BC  E8 7F 85 03 00            CALL 0x006a5e40
LAB_0066d8c1:
0066D8C1  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0066D8C4  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0066D8C7  40                        INC EAX
0066D8C8  83 C2 05                  ADD EDX,0x5
0066D8CB  3B C7                     CMP EAX,EDI
0066D8CD  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0066D8D0  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
0066D8D3  7C 9E                     JL 0x0066d873
LAB_0066d8d5:
0066D8D5  8B 03                     MOV EAX,dword ptr [EBX]
0066D8D7  56                        PUSH ESI
0066D8D8  8B CB                     MOV ECX,EBX
0066D8DA  FF 10                     CALL dword ptr [EAX]
0066D8DC  83 F8 09                  CMP EAX,0x9
0066D8DF  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0066D8E2  75 4B                     JNZ 0x0066d92f
0066D8E4  8B 13                     MOV EDX,dword ptr [EBX]
0066D8E6  8B CB                     MOV ECX,EBX
0066D8E8  FF 52 18                  CALL dword ptr [EDX + 0x18]
0066D8EB  83 F8 08                  CMP EAX,0x8
0066D8EE  75 3F                     JNZ 0x0066d92f
0066D8F0  8D 04 BE                  LEA EAX,[ESI + EDI*0x4]
0066D8F3  0F BF 4C 07 01            MOVSX ECX,word ptr [EDI + EAX*0x1 + 0x1]
0066D8F8  51                        PUSH ECX
0066D8F9  E8 DD 7E D9 FF            CALL 0x004057db
0066D8FE  85 C0                     TEST EAX,EAX
0066D900  74 0F                     JZ 0x0066d911
0066D902  6A 7F                     PUSH 0x7f
0066D904  8D 53 04                  LEA EDX,[EBX + 0x4]
0066D907  50                        PUSH EAX
0066D908  52                        PUSH EDX
0066D909  E8 32 0A 0C 00            CALL 0x0072e340
0066D90E  83 C4 0C                  ADD ESP,0xc
LAB_0066d911:
0066D911  C7 83 84 00 00 00 FF FF FF FF  MOV dword ptr [EBX + 0x84],0xffffffff
0066D91B  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
0066D920  6A 79                     PUSH 0x79
0066D922  68 24 2A 7D 00            PUSH 0x7d2a24
0066D927  50                        PUSH EAX
0066D928  6A 88                     PUSH -0x78
0066D92A  E8 11 85 03 00            CALL 0x006a5e40
LAB_0066d92f:
0066D92F  8B 13                     MOV EDX,dword ptr [EBX]
0066D931  8D 4D B4                  LEA ECX,[EBP + -0x4c]
0066D934  8D 46 05                  LEA EAX,[ESI + 0x5]
0066D937  51                        PUSH ECX
0066D938  50                        PUSH EAX
0066D939  8B CB                     MOV ECX,EBX
0066D93B  FF 12                     CALL dword ptr [EDX]
0066D93D  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0066D940  50                        PUSH EAX
0066D941  51                        PUSH ECX
0066D942  8B CB                     MOV ECX,EBX
0066D944  E8 6F 3D D9 FF            CALL 0x004016b8
0066D949  85 C0                     TEST EAX,EAX
0066D94B  C7 05 80 19 81 00 00 00 00 00  MOV dword ptr [0x00811980],0x0
0066D955  0F 8E 03 06 00 00         JLE 0x0066df5e
0066D95B  8D 56 2D                  LEA EDX,[ESI + 0x2d]
0066D95E  8D 4E 28                  LEA ECX,[ESI + 0x28]
0066D961  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
0066D964  8D 56 23                  LEA EDX,[ESI + 0x23]
0066D967  89 4D EC                  MOV dword ptr [EBP + -0x14],ECX
0066D96A  89 55 D8                  MOV dword ptr [EBP + -0x28],EDX
0066D96D  8D 4E 1E                  LEA ECX,[ESI + 0x1e]
0066D970  8D 56 19                  LEA EDX,[ESI + 0x19]
0066D973  89 4D E8                  MOV dword ptr [EBP + -0x18],ECX
0066D976  89 55 E0                  MOV dword ptr [EBP + -0x20],EDX
0066D979  8D 4E 14                  LEA ECX,[ESI + 0x14]
0066D97C  8D 56 0F                  LEA EDX,[ESI + 0xf]
0066D97F  83 C6 0A                  ADD ESI,0xa
0066D982  89 4D D4                  MOV dword ptr [EBP + -0x2c],ECX
0066D985  89 75 F8                  MOV dword ptr [EBP + -0x8],ESI
0066D988  89 55 DC                  MOV dword ptr [EBP + -0x24],EDX
0066D98B  8D 75 B4                  LEA ESI,[EBP + -0x4c]
0066D98E  8B F8                     MOV EDI,EAX
LAB_0066d990:
0066D990  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
0066D993  8B 03                     MOV EAX,dword ptr [EBX]
0066D995  6A 00                     PUSH 0x0
0066D997  68 FB 50 40 00            PUSH 0x4050fb
0066D99C  51                        PUSH ECX
0066D99D  8B CB                     MOV ECX,EBX
0066D99F  FF 10                     CALL dword ptr [EAX]
0066D9A1  8B 13                     MOV EDX,dword ptr [EBX]
0066D9A3  50                        PUSH EAX
0066D9A4  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
0066D9A7  8B CB                     MOV ECX,EBX
0066D9A9  50                        PUSH EAX
0066D9AA  FF 12                     CALL dword ptr [EDX]
0066D9AC  8B 13                     MOV EDX,dword ptr [EBX]
0066D9AE  50                        PUSH EAX
0066D9AF  8B 45 D8                  MOV EAX,dword ptr [EBP + -0x28]
0066D9B2  8B CB                     MOV ECX,EBX
0066D9B4  50                        PUSH EAX
0066D9B5  FF 12                     CALL dword ptr [EDX]
0066D9B7  8B 13                     MOV EDX,dword ptr [EBX]
0066D9B9  50                        PUSH EAX
0066D9BA  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
0066D9BD  8B CB                     MOV ECX,EBX
0066D9BF  50                        PUSH EAX
0066D9C0  FF 12                     CALL dword ptr [EDX]
0066D9C2  8B 13                     MOV EDX,dword ptr [EBX]
0066D9C4  50                        PUSH EAX
0066D9C5  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
0066D9C8  8B CB                     MOV ECX,EBX
0066D9CA  50                        PUSH EAX
0066D9CB  FF 12                     CALL dword ptr [EDX]
0066D9CD  8B 13                     MOV EDX,dword ptr [EBX]
0066D9CF  50                        PUSH EAX
0066D9D0  8B 45 D4                  MOV EAX,dword ptr [EBP + -0x2c]
0066D9D3  8B CB                     MOV ECX,EBX
0066D9D5  50                        PUSH EAX
0066D9D6  FF 12                     CALL dword ptr [EDX]
0066D9D8  8B 13                     MOV EDX,dword ptr [EBX]
0066D9DA  50                        PUSH EAX
0066D9DB  8B 45 DC                  MOV EAX,dword ptr [EBP + -0x24]
0066D9DE  8B CB                     MOV ECX,EBX
0066D9E0  50                        PUSH EAX
0066D9E1  FF 52 08                  CALL dword ptr [EDX + 0x8]
0066D9E4  8B 13                     MOV EDX,dword ptr [EBX]
0066D9E6  50                        PUSH EAX
0066D9E7  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0066D9EA  8B CB                     MOV ECX,EBX
0066D9EC  50                        PUSH EAX
0066D9ED  FF 12                     CALL dword ptr [EDX]
0066D9EF  66 8B 0E                  MOV CX,word ptr [ESI]
0066D9F2  50                        PUSH EAX
0066D9F3  51                        PUSH ECX
0066D9F4  E8 89 5E D9 FF            CALL 0x00403882
0066D9F9  83 C4 2C                  ADD ESP,0x2c
0066D9FC  83 C6 04                  ADD ESI,0x4
0066D9FF  4F                        DEC EDI
0066DA00  75 8E                     JNZ 0x0066d990
0066DA02  E9 57 05 00 00            JMP 0x0066df5e
switchD_0066d45d::caseD_7f8:
0066DA07  8A 0E                     MOV CL,byte ptr [ESI]
0066DA09  80 F9 04                  CMP CL,0x4
0066DA0C  74 3D                     JZ 0x0066da4b
0066DA0E  80 F9 01                  CMP CL,0x1
0066DA11  74 38                     JZ 0x0066da4b
0066DA13  50                        PUSH EAX
0066DA14  E8 C2 7D D9 FF            CALL 0x004057db
0066DA19  85 C0                     TEST EAX,EAX
0066DA1B  74 0F                     JZ 0x0066da2c
0066DA1D  6A 7F                     PUSH 0x7f
0066DA1F  50                        PUSH EAX
0066DA20  8D 43 04                  LEA EAX,[EBX + 0x4]
0066DA23  50                        PUSH EAX
0066DA24  E8 17 09 0C 00            CALL 0x0072e340
0066DA29  83 C4 0C                  ADD ESP,0xc
LAB_0066da2c:
0066DA2C  C7 83 84 00 00 00 FF FF FF FF  MOV dword ptr [EBX + 0x84],0xffffffff
0066DA36  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
0066DA3C  6A 79                     PUSH 0x79
0066DA3E  68 24 2A 7D 00            PUSH 0x7d2a24
0066DA43  51                        PUSH ECX
0066DA44  6A 88                     PUSH -0x78
0066DA46  E8 F5 83 03 00            CALL 0x006a5e40
LAB_0066da4b:
0066DA4B  8A 46 05                  MOV AL,byte ptr [ESI + 0x5]
0066DA4E  3C 06                     CMP AL,0x6
0066DA50  74 44                     JZ 0x0066da96
0066DA52  3C 03                     CMP AL,0x3
0066DA54  74 40                     JZ 0x0066da96
0066DA56  8D 14 BE                  LEA EDX,[ESI + EDI*0x4]
0066DA59  0F BF 44 17 01            MOVSX EAX,word ptr [EDI + EDX*0x1 + 0x1]
0066DA5E  50                        PUSH EAX
0066DA5F  E8 77 7D D9 FF            CALL 0x004057db
0066DA64  85 C0                     TEST EAX,EAX
0066DA66  74 0F                     JZ 0x0066da77
0066DA68  6A 7F                     PUSH 0x7f
0066DA6A  8D 4B 04                  LEA ECX,[EBX + 0x4]
0066DA6D  50                        PUSH EAX
0066DA6E  51                        PUSH ECX
0066DA6F  E8 CC 08 0C 00            CALL 0x0072e340
0066DA74  83 C4 0C                  ADD ESP,0xc
LAB_0066da77:
0066DA77  C7 83 84 00 00 00 FF FF FF FF  MOV dword ptr [EBX + 0x84],0xffffffff
0066DA81  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
0066DA87  6A 79                     PUSH 0x79
0066DA89  68 24 2A 7D 00            PUSH 0x7d2a24
0066DA8E  52                        PUSH EDX
0066DA8F  6A 88                     PUSH -0x78
0066DA91  E8 AA 83 03 00            CALL 0x006a5e40
LAB_0066da96:
0066DA96  83 FF 02                  CMP EDI,0x2
0066DA99  C7 45 F8 02 00 00 00      MOV dword ptr [EBP + -0x8],0x2
0066DAA0  7E 69                     JLE 0x0066db0b
0066DAA2  C7 45 FC 0A 00 00 00      MOV dword ptr [EBP + -0x4],0xa
LAB_0066daa9:
0066DAA9  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0066DAAC  8A 04 30                  MOV AL,byte ptr [EAX + ESI*0x1]
0066DAAF  3C 04                     CMP AL,0x4
0066DAB1  74 44                     JZ 0x0066daf7
0066DAB3  3C 01                     CMP AL,0x1
0066DAB5  74 40                     JZ 0x0066daf7
0066DAB7  8D 0C BE                  LEA ECX,[ESI + EDI*0x4]
0066DABA  0F BF 54 0F 01            MOVSX EDX,word ptr [EDI + ECX*0x1 + 0x1]
0066DABF  52                        PUSH EDX
0066DAC0  E8 16 7D D9 FF            CALL 0x004057db
0066DAC5  85 C0                     TEST EAX,EAX
0066DAC7  74 0F                     JZ 0x0066dad8
0066DAC9  6A 7F                     PUSH 0x7f
0066DACB  50                        PUSH EAX
0066DACC  8D 43 04                  LEA EAX,[EBX + 0x4]
0066DACF  50                        PUSH EAX
0066DAD0  E8 6B 08 0C 00            CALL 0x0072e340
0066DAD5  83 C4 0C                  ADD ESP,0xc
LAB_0066dad8:
0066DAD8  C7 83 84 00 00 00 FF FF FF FF  MOV dword ptr [EBX + 0x84],0xffffffff
0066DAE2  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
0066DAE8  6A 79                     PUSH 0x79
0066DAEA  68 24 2A 7D 00            PUSH 0x7d2a24
0066DAEF  51                        PUSH ECX
0066DAF0  6A 88                     PUSH -0x78
0066DAF2  E8 49 83 03 00            CALL 0x006a5e40
LAB_0066daf7:
0066DAF7  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0066DAFA  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0066DAFD  40                        INC EAX
0066DAFE  83 C2 05                  ADD EDX,0x5
0066DB01  3B C7                     CMP EAX,EDI
0066DB03  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0066DB06  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
0066DB09  7C 9E                     JL 0x0066daa9
LAB_0066db0b:
0066DB0B  C7 05 80 19 81 00 00 00 00 00  MOV dword ptr [0x00811980],0x0
0066DB15  8B 13                     MOV EDX,dword ptr [EBX]
0066DB17  6A 00                     PUSH 0x0
0066DB19  8D 46 23                  LEA EAX,[ESI + 0x23]
0066DB1C  68 CB 2B 40 00            PUSH 0x402bcb
0066DB21  50                        PUSH EAX
0066DB22  8B CB                     MOV ECX,EBX
0066DB24  FF 12                     CALL dword ptr [EDX]
0066DB26  8B 13                     MOV EDX,dword ptr [EBX]
0066DB28  50                        PUSH EAX
0066DB29  8D 46 1E                  LEA EAX,[ESI + 0x1e]
0066DB2C  8B CB                     MOV ECX,EBX
0066DB2E  50                        PUSH EAX
0066DB2F  FF 12                     CALL dword ptr [EDX]
0066DB31  8B 13                     MOV EDX,dword ptr [EBX]
0066DB33  50                        PUSH EAX
0066DB34  8D 46 19                  LEA EAX,[ESI + 0x19]
0066DB37  8B CB                     MOV ECX,EBX
0066DB39  50                        PUSH EAX
0066DB3A  FF 12                     CALL dword ptr [EDX]
0066DB3C  8B 13                     MOV EDX,dword ptr [EBX]
0066DB3E  50                        PUSH EAX
0066DB3F  8D 46 14                  LEA EAX,[ESI + 0x14]
0066DB42  8B CB                     MOV ECX,EBX
0066DB44  50                        PUSH EAX
0066DB45  FF 12                     CALL dword ptr [EDX]
0066DB47  8B 13                     MOV EDX,dword ptr [EBX]
0066DB49  50                        PUSH EAX
0066DB4A  8D 46 0F                  LEA EAX,[ESI + 0xf]
0066DB4D  8B CB                     MOV ECX,EBX
0066DB4F  50                        PUSH EAX
0066DB50  FF 12                     CALL dword ptr [EDX]
0066DB52  8B 13                     MOV EDX,dword ptr [EBX]
0066DB54  50                        PUSH EAX
0066DB55  8D 46 0A                  LEA EAX,[ESI + 0xa]
0066DB58  8B CB                     MOV ECX,EBX
0066DB5A  50                        PUSH EAX
0066DB5B  FF 12                     CALL dword ptr [EDX]
0066DB5D  8B 13                     MOV EDX,dword ptr [EBX]
0066DB5F  50                        PUSH EAX
0066DB60  8D 46 05                  LEA EAX,[ESI + 0x5]
0066DB63  8B CB                     MOV ECX,EBX
0066DB65  50                        PUSH EAX
0066DB66  FF 52 08                  CALL dword ptr [EDX + 0x8]
0066DB69  8B 13                     MOV EDX,dword ptr [EBX]
0066DB6B  50                        PUSH EAX
0066DB6C  56                        PUSH ESI
0066DB6D  8B CB                     MOV ECX,EBX
0066DB6F  FF 12                     CALL dword ptr [EDX]
0066DB71  50                        PUSH EAX
0066DB72  E8 BB 4D D9 FF            CALL 0x00402932
0066DB77  E9 6E 01 00 00            JMP 0x0066dcea
switchD_0066d45d::caseD_7f9:
0066DB7C  8A 0E                     MOV CL,byte ptr [ESI]
0066DB7E  80 F9 04                  CMP CL,0x4
0066DB81  74 3C                     JZ 0x0066dbbf
0066DB83  80 F9 01                  CMP CL,0x1
0066DB86  74 37                     JZ 0x0066dbbf
0066DB88  50                        PUSH EAX
0066DB89  E8 4D 7C D9 FF            CALL 0x004057db
0066DB8E  85 C0                     TEST EAX,EAX
0066DB90  74 0F                     JZ 0x0066dba1
0066DB92  6A 7F                     PUSH 0x7f
0066DB94  8D 53 04                  LEA EDX,[EBX + 0x4]
0066DB97  50                        PUSH EAX
0066DB98  52                        PUSH EDX
0066DB99  E8 A2 07 0C 00            CALL 0x0072e340
0066DB9E  83 C4 0C                  ADD ESP,0xc
LAB_0066dba1:
0066DBA1  C7 83 84 00 00 00 FF FF FF FF  MOV dword ptr [EBX + 0x84],0xffffffff
0066DBAB  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
0066DBB0  6A 79                     PUSH 0x79
0066DBB2  68 24 2A 7D 00            PUSH 0x7d2a24
0066DBB7  50                        PUSH EAX
0066DBB8  6A 88                     PUSH -0x78
0066DBBA  E8 81 82 03 00            CALL 0x006a5e40
LAB_0066dbbf:
0066DBBF  8A 46 05                  MOV AL,byte ptr [ESI + 0x5]
0066DBC2  3C 06                     CMP AL,0x6
0066DBC4  74 44                     JZ 0x0066dc0a
0066DBC6  3C 03                     CMP AL,0x3
0066DBC8  74 40                     JZ 0x0066dc0a
0066DBCA  8D 0C BE                  LEA ECX,[ESI + EDI*0x4]
0066DBCD  0F BF 54 0F 01            MOVSX EDX,word ptr [EDI + ECX*0x1 + 0x1]
0066DBD2  52                        PUSH EDX
0066DBD3  E8 03 7C D9 FF            CALL 0x004057db
0066DBD8  85 C0                     TEST EAX,EAX
0066DBDA  74 0F                     JZ 0x0066dbeb
0066DBDC  6A 7F                     PUSH 0x7f
0066DBDE  50                        PUSH EAX
0066DBDF  8D 43 04                  LEA EAX,[EBX + 0x4]
0066DBE2  50                        PUSH EAX
0066DBE3  E8 58 07 0C 00            CALL 0x0072e340
0066DBE8  83 C4 0C                  ADD ESP,0xc
LAB_0066dbeb:
0066DBEB  C7 83 84 00 00 00 FF FF FF FF  MOV dword ptr [EBX + 0x84],0xffffffff
0066DBF5  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
0066DBFB  6A 79                     PUSH 0x79
0066DBFD  68 24 2A 7D 00            PUSH 0x7d2a24
0066DC02  51                        PUSH ECX
0066DC03  6A 88                     PUSH -0x78
0066DC05  E8 36 82 03 00            CALL 0x006a5e40
LAB_0066dc0a:
0066DC0A  83 FF 02                  CMP EDI,0x2
0066DC0D  C7 45 F8 02 00 00 00      MOV dword ptr [EBP + -0x8],0x2
0066DC14  7E 68                     JLE 0x0066dc7e
0066DC16  C7 45 FC 0A 00 00 00      MOV dword ptr [EBP + -0x4],0xa
LAB_0066dc1d:
0066DC1D  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0066DC20  8A 04 32                  MOV AL,byte ptr [EDX + ESI*0x1]
0066DC23  3C 04                     CMP AL,0x4
0066DC25  74 43                     JZ 0x0066dc6a
0066DC27  3C 01                     CMP AL,0x1
0066DC29  74 3F                     JZ 0x0066dc6a
0066DC2B  8D 04 BE                  LEA EAX,[ESI + EDI*0x4]
0066DC2E  0F BF 4C 07 01            MOVSX ECX,word ptr [EDI + EAX*0x1 + 0x1]
0066DC33  51                        PUSH ECX
0066DC34  E8 A2 7B D9 FF            CALL 0x004057db
0066DC39  85 C0                     TEST EAX,EAX
0066DC3B  74 0F                     JZ 0x0066dc4c
0066DC3D  6A 7F                     PUSH 0x7f
0066DC3F  8D 53 04                  LEA EDX,[EBX + 0x4]
0066DC42  50                        PUSH EAX
0066DC43  52                        PUSH EDX
0066DC44  E8 F7 06 0C 00            CALL 0x0072e340
0066DC49  83 C4 0C                  ADD ESP,0xc
LAB_0066dc4c:
0066DC4C  C7 83 84 00 00 00 FF FF FF FF  MOV dword ptr [EBX + 0x84],0xffffffff
0066DC56  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
0066DC5B  6A 79                     PUSH 0x79
0066DC5D  68 24 2A 7D 00            PUSH 0x7d2a24
0066DC62  50                        PUSH EAX
0066DC63  6A 88                     PUSH -0x78
0066DC65  E8 D6 81 03 00            CALL 0x006a5e40
LAB_0066dc6a:
0066DC6A  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0066DC6D  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0066DC70  40                        INC EAX
0066DC71  83 C2 05                  ADD EDX,0x5
0066DC74  3B C7                     CMP EAX,EDI
0066DC76  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0066DC79  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
0066DC7C  7C 9F                     JL 0x0066dc1d
LAB_0066dc7e:
0066DC7E  C7 05 80 19 81 00 00 00 00 00  MOV dword ptr [0x00811980],0x0
0066DC88  8B 13                     MOV EDX,dword ptr [EBX]
0066DC8A  6A 00                     PUSH 0x0
0066DC8C  8D 46 23                  LEA EAX,[ESI + 0x23]
0066DC8F  68 50 3D 40 00            PUSH 0x403d50
0066DC94  50                        PUSH EAX
0066DC95  8B CB                     MOV ECX,EBX
0066DC97  FF 12                     CALL dword ptr [EDX]
0066DC99  8B 13                     MOV EDX,dword ptr [EBX]
0066DC9B  50                        PUSH EAX
0066DC9C  8D 46 1E                  LEA EAX,[ESI + 0x1e]
0066DC9F  8B CB                     MOV ECX,EBX
0066DCA1  50                        PUSH EAX
0066DCA2  FF 12                     CALL dword ptr [EDX]
0066DCA4  8B 13                     MOV EDX,dword ptr [EBX]
0066DCA6  50                        PUSH EAX
0066DCA7  8D 46 19                  LEA EAX,[ESI + 0x19]
0066DCAA  8B CB                     MOV ECX,EBX
0066DCAC  50                        PUSH EAX
0066DCAD  FF 12                     CALL dword ptr [EDX]
0066DCAF  8B 13                     MOV EDX,dword ptr [EBX]
0066DCB1  50                        PUSH EAX
0066DCB2  8D 46 14                  LEA EAX,[ESI + 0x14]
0066DCB5  8B CB                     MOV ECX,EBX
0066DCB7  50                        PUSH EAX
0066DCB8  FF 12                     CALL dword ptr [EDX]
0066DCBA  8B 13                     MOV EDX,dword ptr [EBX]
0066DCBC  50                        PUSH EAX
0066DCBD  8D 46 0F                  LEA EAX,[ESI + 0xf]
0066DCC0  8B CB                     MOV ECX,EBX
0066DCC2  50                        PUSH EAX
0066DCC3  FF 12                     CALL dword ptr [EDX]
0066DCC5  8B 13                     MOV EDX,dword ptr [EBX]
0066DCC7  50                        PUSH EAX
0066DCC8  8D 46 0A                  LEA EAX,[ESI + 0xa]
0066DCCB  8B CB                     MOV ECX,EBX
0066DCCD  50                        PUSH EAX
0066DCCE  FF 12                     CALL dword ptr [EDX]
0066DCD0  8B 13                     MOV EDX,dword ptr [EBX]
0066DCD2  50                        PUSH EAX
0066DCD3  56                        PUSH ESI
0066DCD4  8B CB                     MOV ECX,EBX
0066DCD6  FF 12                     CALL dword ptr [EDX]
0066DCD8  50                        PUSH EAX
0066DCD9  8B 03                     MOV EAX,dword ptr [EBX]
0066DCDB  83 C6 05                  ADD ESI,0x5
0066DCDE  8B CB                     MOV ECX,EBX
0066DCE0  56                        PUSH ESI
0066DCE1  FF 50 08                  CALL dword ptr [EAX + 0x8]
0066DCE4  50                        PUSH EAX
0066DCE5  E8 08 37 D9 FF            CALL 0x004013f2
LAB_0066dcea:
0066DCEA  83 C4 28                  ADD ESP,0x28
LAB_0066dced:
0066DCED  6A 04                     PUSH 0x4
0066DCEF  E8 1C CF 03 00            CALL 0x006aac10
0066DCF4  8B 0D 80 19 81 00         MOV ECX,dword ptr [0x00811980]
0066DCFA  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
0066DCFD  89 08                     MOV dword ptr [EAX],ECX
0066DCFF  E9 2D 27 00 00            JMP 0x00670431
switchD_0066d45d::caseD_7fa:
0066DD04  33 C9                     XOR ECX,ECX
0066DD06  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
LAB_0066dd09:
0066DD09  8A 04 31                  MOV AL,byte ptr [ECX + ESI*0x1]
0066DD0C  3C 04                     CMP AL,0x4
0066DD0E  74 47                     JZ 0x0066dd57
0066DD10  3C 01                     CMP AL,0x1
0066DD12  74 43                     JZ 0x0066dd57
0066DD14  8D 14 BE                  LEA EDX,[ESI + EDI*0x4]
0066DD17  0F BF 44 17 01            MOVSX EAX,word ptr [EDI + EDX*0x1 + 0x1]
0066DD1C  50                        PUSH EAX
0066DD1D  E8 B9 7A D9 FF            CALL 0x004057db
0066DD22  85 C0                     TEST EAX,EAX
0066DD24  74 0F                     JZ 0x0066dd35
0066DD26  6A 7F                     PUSH 0x7f
0066DD28  8D 4B 04                  LEA ECX,[EBX + 0x4]
0066DD2B  50                        PUSH EAX
0066DD2C  51                        PUSH ECX
0066DD2D  E8 0E 06 0C 00            CALL 0x0072e340
0066DD32  83 C4 0C                  ADD ESP,0xc
LAB_0066dd35:
0066DD35  C7 83 84 00 00 00 FF FF FF FF  MOV dword ptr [EBX + 0x84],0xffffffff
0066DD3F  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
0066DD45  6A 79                     PUSH 0x79
0066DD47  68 24 2A 7D 00            PUSH 0x7d2a24
0066DD4C  52                        PUSH EDX
0066DD4D  6A 88                     PUSH -0x78
0066DD4F  E8 EC 80 03 00            CALL 0x006a5e40
0066DD54  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
LAB_0066dd57:
0066DD57  83 C1 05                  ADD ECX,0x5
0066DD5A  83 F9 14                  CMP ECX,0x14
0066DD5D  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0066DD60  7C A7                     JL 0x0066dd09
0066DD62  8A 46 14                  MOV AL,byte ptr [ESI + 0x14]
0066DD65  3C 06                     CMP AL,0x6
0066DD67  74 43                     JZ 0x0066ddac
0066DD69  3C 03                     CMP AL,0x3
0066DD6B  74 3F                     JZ 0x0066ddac
0066DD6D  8D 04 BE                  LEA EAX,[ESI + EDI*0x4]
0066DD70  0F BF 4C 07 01            MOVSX ECX,word ptr [EDI + EAX*0x1 + 0x1]
0066DD75  51                        PUSH ECX
0066DD76  E8 60 7A D9 FF            CALL 0x004057db
0066DD7B  85 C0                     TEST EAX,EAX
0066DD7D  74 0F                     JZ 0x0066dd8e
0066DD7F  6A 7F                     PUSH 0x7f
0066DD81  8D 53 04                  LEA EDX,[EBX + 0x4]
0066DD84  50                        PUSH EAX
0066DD85  52                        PUSH EDX
0066DD86  E8 B5 05 0C 00            CALL 0x0072e340
0066DD8B  83 C4 0C                  ADD ESP,0xc
LAB_0066dd8e:
0066DD8E  C7 83 84 00 00 00 FF FF FF FF  MOV dword ptr [EBX + 0x84],0xffffffff
0066DD98  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
0066DD9D  6A 79                     PUSH 0x79
0066DD9F  68 24 2A 7D 00            PUSH 0x7d2a24
0066DDA4  50                        PUSH EAX
0066DDA5  6A 88                     PUSH -0x78
0066DDA7  E8 94 80 03 00            CALL 0x006a5e40
LAB_0066ddac:
0066DDAC  83 FF 05                  CMP EDI,0x5
0066DDAF  C7 45 F8 05 00 00 00      MOV dword ptr [EBP + -0x8],0x5
0066DDB6  7E 69                     JLE 0x0066de21
0066DDB8  C7 45 FC 19 00 00 00      MOV dword ptr [EBP + -0x4],0x19
LAB_0066ddbf:
0066DDBF  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0066DDC2  8A 04 31                  MOV AL,byte ptr [ECX + ESI*0x1]
0066DDC5  3C 04                     CMP AL,0x4
0066DDC7  74 44                     JZ 0x0066de0d
0066DDC9  3C 01                     CMP AL,0x1
0066DDCB  74 40                     JZ 0x0066de0d
0066DDCD  8D 14 BE                  LEA EDX,[ESI + EDI*0x4]
0066DDD0  0F BF 44 17 01            MOVSX EAX,word ptr [EDI + EDX*0x1 + 0x1]
0066DDD5  50                        PUSH EAX
0066DDD6  E8 00 7A D9 FF            CALL 0x004057db
0066DDDB  85 C0                     TEST EAX,EAX
0066DDDD  74 0F                     JZ 0x0066ddee
0066DDDF  6A 7F                     PUSH 0x7f
0066DDE1  8D 4B 04                  LEA ECX,[EBX + 0x4]
0066DDE4  50                        PUSH EAX
0066DDE5  51                        PUSH ECX
0066DDE6  E8 55 05 0C 00            CALL 0x0072e340
0066DDEB  83 C4 0C                  ADD ESP,0xc
LAB_0066ddee:
0066DDEE  C7 83 84 00 00 00 FF FF FF FF  MOV dword ptr [EBX + 0x84],0xffffffff
0066DDF8  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
0066DDFE  6A 79                     PUSH 0x79
0066DE00  68 24 2A 7D 00            PUSH 0x7d2a24
0066DE05  52                        PUSH EDX
0066DE06  6A 88                     PUSH -0x78
0066DE08  E8 33 80 03 00            CALL 0x006a5e40
LAB_0066de0d:
0066DE0D  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0066DE10  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0066DE13  40                        INC EAX
0066DE14  83 C2 05                  ADD EDX,0x5
0066DE17  3B C7                     CMP EAX,EDI
0066DE19  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0066DE1C  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
0066DE1F  7C 9E                     JL 0x0066ddbf
LAB_0066de21:
0066DE21  8B 03                     MOV EAX,dword ptr [EBX]
0066DE23  56                        PUSH ESI
0066DE24  8B CB                     MOV ECX,EBX
0066DE26  FF 10                     CALL dword ptr [EAX]
0066DE28  83 F8 09                  CMP EAX,0x9
0066DE2B  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0066DE2E  75 4B                     JNZ 0x0066de7b
0066DE30  8B 13                     MOV EDX,dword ptr [EBX]
0066DE32  8B CB                     MOV ECX,EBX
0066DE34  FF 52 18                  CALL dword ptr [EDX + 0x18]
0066DE37  83 F8 08                  CMP EAX,0x8
0066DE3A  75 3F                     JNZ 0x0066de7b
0066DE3C  8D 04 BE                  LEA EAX,[ESI + EDI*0x4]
0066DE3F  0F BF 4C 07 01            MOVSX ECX,word ptr [EDI + EAX*0x1 + 0x1]
0066DE44  51                        PUSH ECX
0066DE45  E8 91 79 D9 FF            CALL 0x004057db
0066DE4A  85 C0                     TEST EAX,EAX
0066DE4C  74 0F                     JZ 0x0066de5d
0066DE4E  6A 7F                     PUSH 0x7f
0066DE50  8D 53 04                  LEA EDX,[EBX + 0x4]
0066DE53  50                        PUSH EAX
0066DE54  52                        PUSH EDX
0066DE55  E8 E6 04 0C 00            CALL 0x0072e340
0066DE5A  83 C4 0C                  ADD ESP,0xc
LAB_0066de5d:
0066DE5D  C7 83 84 00 00 00 FF FF FF FF  MOV dword ptr [EBX + 0x84],0xffffffff
0066DE67  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
0066DE6C  6A 79                     PUSH 0x79
0066DE6E  68 24 2A 7D 00            PUSH 0x7d2a24
0066DE73  50                        PUSH EAX
0066DE74  6A 88                     PUSH -0x78
0066DE76  E8 C5 7F 03 00            CALL 0x006a5e40
LAB_0066de7b:
0066DE7B  8B 13                     MOV EDX,dword ptr [EBX]
0066DE7D  8D 4D B4                  LEA ECX,[EBP + -0x4c]
0066DE80  8D 46 05                  LEA EAX,[ESI + 0x5]
0066DE83  51                        PUSH ECX
0066DE84  50                        PUSH EAX
0066DE85  8B CB                     MOV ECX,EBX
0066DE87  FF 12                     CALL dword ptr [EDX]
0066DE89  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0066DE8C  50                        PUSH EAX
0066DE8D  51                        PUSH ECX
0066DE8E  8B CB                     MOV ECX,EBX
0066DE90  E8 23 38 D9 FF            CALL 0x004016b8
0066DE95  85 C0                     TEST EAX,EAX
0066DE97  C7 05 80 19 81 00 00 00 00 00  MOV dword ptr [0x00811980],0x0
0066DEA1  0F 8E B7 00 00 00         JLE 0x0066df5e
0066DEA7  8D 56 32                  LEA EDX,[ESI + 0x32]
0066DEAA  8D 4E 2D                  LEA ECX,[ESI + 0x2d]
0066DEAD  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
0066DEB0  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
0066DEB3  8D 56 28                  LEA EDX,[ESI + 0x28]
0066DEB6  8D 4E 23                  LEA ECX,[ESI + 0x23]
0066DEB9  89 55 EC                  MOV dword ptr [EBP + -0x14],EDX
0066DEBC  89 4D D8                  MOV dword ptr [EBP + -0x28],ECX
0066DEBF  8D 56 1E                  LEA EDX,[ESI + 0x1e]
0066DEC2  8D 4E 19                  LEA ECX,[ESI + 0x19]
0066DEC5  89 55 E8                  MOV dword ptr [EBP + -0x18],EDX
0066DEC8  89 4D E0                  MOV dword ptr [EBP + -0x20],ECX
0066DECB  8D 56 14                  LEA EDX,[ESI + 0x14]
0066DECE  8D 4E 0F                  LEA ECX,[ESI + 0xf]
0066DED1  83 C6 0A                  ADD ESI,0xa
0066DED4  89 55 D4                  MOV dword ptr [EBP + -0x2c],EDX
0066DED7  89 75 F8                  MOV dword ptr [EBP + -0x8],ESI
0066DEDA  89 4D DC                  MOV dword ptr [EBP + -0x24],ECX
0066DEDD  8D 75 B4                  LEA ESI,[EBP + -0x4c]
0066DEE0  8B F8                     MOV EDI,EAX
LAB_0066dee2:
0066DEE2  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0066DEE5  8B 13                     MOV EDX,dword ptr [EBX]
0066DEE7  6A 00                     PUSH 0x0
0066DEE9  68 A7 27 40 00            PUSH 0x4027a7
0066DEEE  50                        PUSH EAX
0066DEEF  8B CB                     MOV ECX,EBX
0066DEF1  FF 12                     CALL dword ptr [EDX]
0066DEF3  8B 13                     MOV EDX,dword ptr [EBX]
0066DEF5  50                        PUSH EAX
0066DEF6  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0066DEF9  8B CB                     MOV ECX,EBX
0066DEFB  50                        PUSH EAX
0066DEFC  FF 12                     CALL dword ptr [EDX]
0066DEFE  8B 13                     MOV EDX,dword ptr [EBX]
0066DF00  50                        PUSH EAX
0066DF01  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
0066DF04  8B CB                     MOV ECX,EBX
0066DF06  50                        PUSH EAX
0066DF07  FF 12                     CALL dword ptr [EDX]
0066DF09  8B 13                     MOV EDX,dword ptr [EBX]
0066DF0B  50                        PUSH EAX
0066DF0C  8B 45 D8                  MOV EAX,dword ptr [EBP + -0x28]
0066DF0F  8B CB                     MOV ECX,EBX
0066DF11  50                        PUSH EAX
0066DF12  FF 12                     CALL dword ptr [EDX]
0066DF14  8B 13                     MOV EDX,dword ptr [EBX]
0066DF16  50                        PUSH EAX
0066DF17  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
0066DF1A  8B CB                     MOV ECX,EBX
0066DF1C  50                        PUSH EAX
0066DF1D  FF 12                     CALL dword ptr [EDX]
0066DF1F  8B 13                     MOV EDX,dword ptr [EBX]
0066DF21  50                        PUSH EAX
0066DF22  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
0066DF25  8B CB                     MOV ECX,EBX
0066DF27  50                        PUSH EAX
0066DF28  FF 12                     CALL dword ptr [EDX]
0066DF2A  8B 13                     MOV EDX,dword ptr [EBX]
0066DF2C  50                        PUSH EAX
0066DF2D  8B 45 D4                  MOV EAX,dword ptr [EBP + -0x2c]
0066DF30  8B CB                     MOV ECX,EBX
0066DF32  50                        PUSH EAX
0066DF33  FF 52 08                  CALL dword ptr [EDX + 0x8]
0066DF36  8B 13                     MOV EDX,dword ptr [EBX]
0066DF38  50                        PUSH EAX
0066DF39  8B 45 DC                  MOV EAX,dword ptr [EBP + -0x24]
0066DF3C  8B CB                     MOV ECX,EBX
0066DF3E  50                        PUSH EAX
0066DF3F  FF 12                     CALL dword ptr [EDX]
0066DF41  8B 13                     MOV EDX,dword ptr [EBX]
0066DF43  50                        PUSH EAX
0066DF44  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0066DF47  8B CB                     MOV ECX,EBX
0066DF49  50                        PUSH EAX
0066DF4A  FF 12                     CALL dword ptr [EDX]
0066DF4C  8B 0E                     MOV ECX,dword ptr [ESI]
0066DF4E  50                        PUSH EAX
0066DF4F  51                        PUSH ECX
0066DF50  E8 20 57 D9 FF            CALL 0x00403675
0066DF55  83 C4 30                  ADD ESP,0x30
0066DF58  83 C6 04                  ADD ESI,0x4
0066DF5B  4F                        DEC EDI
0066DF5C  75 84                     JNZ 0x0066dee2
LAB_0066df5e:
0066DF5E  6A 04                     PUSH 0x4
0066DF60  E8 AB CC 03 00            CALL 0x006aac10
0066DF65  8B 15 80 19 81 00         MOV EDX,dword ptr [0x00811980]
0066DF6B  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
0066DF6E  89 10                     MOV dword ptr [EAX],EDX
0066DF70  E9 BC 24 00 00            JMP 0x00670431
switchD_0066d45d::caseD_7fc:
0066DF75  33 C0                     XOR EAX,EAX
0066DF77  3B F8                     CMP EDI,EAX
0066DF79  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0066DF7C  7E 65                     JLE 0x0066dfe3
0066DF7E  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
LAB_0066df81:
0066DF81  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0066DF84  8A 04 30                  MOV AL,byte ptr [EAX + ESI*0x1]
0066DF87  3C 04                     CMP AL,0x4
0066DF89  74 44                     JZ 0x0066dfcf
0066DF8B  3C 01                     CMP AL,0x1
0066DF8D  74 40                     JZ 0x0066dfcf
0066DF8F  8D 0C BE                  LEA ECX,[ESI + EDI*0x4]
0066DF92  0F BF 54 0F 01            MOVSX EDX,word ptr [EDI + ECX*0x1 + 0x1]
0066DF97  52                        PUSH EDX
0066DF98  E8 3E 78 D9 FF            CALL 0x004057db
0066DF9D  85 C0                     TEST EAX,EAX
0066DF9F  74 0F                     JZ 0x0066dfb0
0066DFA1  6A 7F                     PUSH 0x7f
0066DFA3  50                        PUSH EAX
0066DFA4  8D 43 04                  LEA EAX,[EBX + 0x4]
0066DFA7  50                        PUSH EAX
0066DFA8  E8 93 03 0C 00            CALL 0x0072e340
0066DFAD  83 C4 0C                  ADD ESP,0xc
LAB_0066dfb0:
0066DFB0  C7 83 84 00 00 00 FF FF FF FF  MOV dword ptr [EBX + 0x84],0xffffffff
0066DFBA  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
0066DFC0  6A 79                     PUSH 0x79
0066DFC2  68 24 2A 7D 00            PUSH 0x7d2a24
0066DFC7  51                        PUSH ECX
0066DFC8  6A 88                     PUSH -0x78
0066DFCA  E8 71 7E 03 00            CALL 0x006a5e40
LAB_0066dfcf:
0066DFCF  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0066DFD2  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0066DFD5  40                        INC EAX
0066DFD6  83 C2 05                  ADD EDX,0x5
0066DFD9  3B C7                     CMP EAX,EDI
0066DFDB  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0066DFDE  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
0066DFE1  7C 9E                     JL 0x0066df81
LAB_0066dfe3:
0066DFE3  8B 13                     MOV EDX,dword ptr [EBX]
0066DFE5  56                        PUSH ESI
0066DFE6  8B CB                     MOV ECX,EBX
0066DFE8  C7 45 F8 FF FF FF FF      MOV dword ptr [EBP + -0x8],0xffffffff
0066DFEF  FF 12                     CALL dword ptr [EDX]
0066DFF1  8D 4E 05                  LEA ECX,[ESI + 0x5]
0066DFF4  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0066DFF7  8B 03                     MOV EAX,dword ptr [EBX]
0066DFF9  51                        PUSH ECX
0066DFFA  8B CB                     MOV ECX,EBX
0066DFFC  FF 10                     CALL dword ptr [EAX]
0066DFFE  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
0066E001  8B 13                     MOV EDX,dword ptr [EBX]
0066E003  8D 46 0A                  LEA EAX,[ESI + 0xa]
0066E006  8B CB                     MOV ECX,EBX
0066E008  50                        PUSH EAX
0066E009  FF 12                     CALL dword ptr [EDX]
0066E00B  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0066E00E  81 C1 24 FF FF FF         ADD ECX,0xffffff24
0066E014  83 F9 06                  CMP ECX,0x6
0066E017  0F 87 96 01 00 00         JA 0x0066e1b3
switchD_0066e01d::switchD:
0066E01D  FF 24 8D 0C 08 67 00      JMP dword ptr [ECX*0x4 + 0x67080c]
switchD_0066e01d::caseD_dd:
0066E024  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
0066E027  83 F9 32                  CMP ECX,0x32
0066E02A  7C 0C                     JL 0x0066e038
0066E02C  83 F9 74                  CMP ECX,0x74
0066E02F  7D 07                     JGE 0x0066e038
0066E031  BA 01 00 00 00            MOV EDX,0x1
0066E036  EB 02                     JMP 0x0066e03a
LAB_0066e038:
0066E038  33 D2                     XOR EDX,EDX
LAB_0066e03a:
0066E03A  85 D2                     TEST EDX,EDX
0066E03C  74 26                     JZ 0x0066e064
0066E03E  83 F8 01                  CMP EAX,0x1
0066E041  0F 8C 73 01 00 00         JL 0x0066e1ba
0066E047  83 F8 03                  CMP EAX,0x3
0066E04A  0F 8F 6A 01 00 00         JG 0x0066e1ba
0066E050  8D 14 48                  LEA EDX,[EAX + ECX*0x2]
0066E053  03 CA                     ADD ECX,EDX
0066E055  8B 04 8D F4 19 7E 00      MOV EAX,dword ptr [ECX*0x4 + 0x7e19f4]
0066E05C  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0066E05F  E9 56 01 00 00            JMP 0x0066e1ba
LAB_0066e064:
0066E064  83 F9 01                  CMP ECX,0x1
0066E067  7C 0C                     JL 0x0066e075
0066E069  83 F9 29                  CMP ECX,0x29
0066E06C  7D 07                     JGE 0x0066e075
0066E06E  B8 01 00 00 00            MOV EAX,0x1
0066E073  EB 02                     JMP 0x0066e077
LAB_0066e075:
0066E075  33 C0                     XOR EAX,EAX
LAB_0066e077:
0066E077  85 C0                     TEST EAX,EAX
0066E079  0F 84 3B 01 00 00         JZ 0x0066e1ba
0066E07F  8B 0C 8D 5C 05 7E 00      MOV ECX,dword ptr [ECX*0x4 + 0x7e055c]
0066E086  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
0066E089  E9 2C 01 00 00            JMP 0x0066e1ba
switchD_0066e01d::caseD_de:
0066E08E  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
0066E091  83 F9 32                  CMP ECX,0x32
0066E094  7C 0C                     JL 0x0066e0a2
0066E096  83 F9 74                  CMP ECX,0x74
0066E099  7D 07                     JGE 0x0066e0a2
0066E09B  BA 01 00 00 00            MOV EDX,0x1
0066E0A0  EB 02                     JMP 0x0066e0a4
LAB_0066e0a2:
0066E0A2  33 D2                     XOR EDX,EDX
LAB_0066e0a4:
0066E0A4  85 D2                     TEST EDX,EDX
0066E0A6  74 26                     JZ 0x0066e0ce
0066E0A8  83 F8 01                  CMP EAX,0x1
0066E0AB  0F 8C 09 01 00 00         JL 0x0066e1ba
0066E0B1  83 F8 03                  CMP EAX,0x3
0066E0B4  0F 8F 00 01 00 00         JG 0x0066e1ba
0066E0BA  8D 14 48                  LEA EDX,[EAX + ECX*0x2]
0066E0BD  03 CA                     ADD ECX,EDX
0066E0BF  8B 04 8D A0 22 7E 00      MOV EAX,dword ptr [ECX*0x4 + 0x7e22a0]
0066E0C6  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0066E0C9  E9 EC 00 00 00            JMP 0x0066e1ba
LAB_0066e0ce:
0066E0CE  83 F9 01                  CMP ECX,0x1
0066E0D1  7C 0C                     JL 0x0066e0df
0066E0D3  83 F9 29                  CMP ECX,0x29
0066E0D6  7D 07                     JGE 0x0066e0df
0066E0D8  B8 01 00 00 00            MOV EAX,0x1
0066E0DD  EB 02                     JMP 0x0066e0e1
LAB_0066e0df:
0066E0DF  33 C0                     XOR EAX,EAX
LAB_0066e0e1:
0066E0E1  85 C0                     TEST EAX,EAX
0066E0E3  0F 84 D1 00 00 00         JZ 0x0066e1ba
0066E0E9  8B 0C 8D 9C 07 7E 00      MOV ECX,dword ptr [ECX*0x4 + 0x7e079c]
0066E0F0  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
0066E0F3  E9 C2 00 00 00            JMP 0x0066e1ba
switchD_0066e01d::caseD_e2:
0066E0F8  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
0066E0FB  83 F9 32                  CMP ECX,0x32
0066E0FE  7C 0C                     JL 0x0066e10c
0066E100  83 F9 74                  CMP ECX,0x74
0066E103  7D 07                     JGE 0x0066e10c
0066E105  BA 01 00 00 00            MOV EDX,0x1
0066E10A  EB 02                     JMP 0x0066e10e
LAB_0066e10c:
0066E10C  33 D2                     XOR EDX,EDX
LAB_0066e10e:
0066E10E  85 D2                     TEST EDX,EDX
0066E110  74 26                     JZ 0x0066e138
0066E112  83 F8 01                  CMP EAX,0x1
0066E115  0F 8C 9F 00 00 00         JL 0x0066e1ba
0066E11B  83 F8 03                  CMP EAX,0x3
0066E11E  0F 8F 96 00 00 00         JG 0x0066e1ba
0066E124  8D 14 48                  LEA EDX,[EAX + ECX*0x2]
0066E127  03 CA                     ADD ECX,EDX
0066E129  8B 04 8D 04 2F 7E 00      MOV EAX,dword ptr [ECX*0x4 + 0x7e2f04]
0066E130  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0066E133  E9 82 00 00 00            JMP 0x0066e1ba
LAB_0066e138:
0066E138  83 F9 01                  CMP ECX,0x1
0066E13B  7C 0C                     JL 0x0066e149
0066E13D  83 F9 29                  CMP ECX,0x29
0066E140  7D 07                     JGE 0x0066e149
0066E142  B8 01 00 00 00            MOV EAX,0x1
0066E147  EB 02                     JMP 0x0066e14b
LAB_0066e149:
0066E149  33 C0                     XOR EAX,EAX
LAB_0066e14b:
0066E14B  85 C0                     TEST EAX,EAX
0066E14D  74 6B                     JZ 0x0066e1ba
0066E14F  8B 0C 8D DC 09 7E 00      MOV ECX,dword ptr [ECX*0x4 + 0x7e09dc]
0066E156  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
0066E159  EB 5F                     JMP 0x0066e1ba
switchD_0066e01d::caseD_dc:
0066E15B  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
0066E15E  83 F9 32                  CMP ECX,0x32
0066E161  7C 0C                     JL 0x0066e16f
0066E163  83 F9 74                  CMP ECX,0x74
0066E166  7D 07                     JGE 0x0066e16f
0066E168  BA 01 00 00 00            MOV EDX,0x1
0066E16D  EB 02                     JMP 0x0066e171
LAB_0066e16f:
0066E16F  33 D2                     XOR EDX,EDX
LAB_0066e171:
0066E171  85 D2                     TEST EDX,EDX
0066E173  74 1B                     JZ 0x0066e190
0066E175  83 F8 01                  CMP EAX,0x1
0066E178  7C 40                     JL 0x0066e1ba
0066E17A  83 F8 03                  CMP EAX,0x3
0066E17D  7F 3B                     JG 0x0066e1ba
0066E17F  8D 14 48                  LEA EDX,[EAX + ECX*0x2]
0066E182  03 CA                     ADD ECX,EDX
0066E184  8B 04 8D 50 43 85 00      MOV EAX,dword ptr [ECX*0x4 + 0x854350]
0066E18B  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0066E18E  EB 2A                     JMP 0x0066e1ba
LAB_0066e190:
0066E190  83 F9 01                  CMP ECX,0x1
0066E193  7C 0C                     JL 0x0066e1a1
0066E195  83 F9 29                  CMP ECX,0x29
0066E198  7D 07                     JGE 0x0066e1a1
0066E19A  B8 01 00 00 00            MOV EAX,0x1
0066E19F  EB 02                     JMP 0x0066e1a3
LAB_0066e1a1:
0066E1A1  33 C0                     XOR EAX,EAX
LAB_0066e1a3:
0066E1A3  85 C0                     TEST EAX,EAX
0066E1A5  74 13                     JZ 0x0066e1ba
0066E1A7  8B 0C 8D 28 44 85 00      MOV ECX,dword ptr [ECX*0x4 + 0x854428]
0066E1AE  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
0066E1B1  EB 07                     JMP 0x0066e1ba
switchD_0066e01d::caseD_df:
0066E1B3  C7 45 F8 00 00 00 00      MOV dword ptr [EBP + -0x8],0x0
LAB_0066e1ba:
0066E1BA  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0066E1BD  85 C0                     TEST EAX,EAX
0066E1BF  7D 40                     JGE 0x0066e201
0066E1C1  8D 14 BE                  LEA EDX,[ESI + EDI*0x4]
0066E1C4  0F BF 44 17 01            MOVSX EAX,word ptr [EDI + EDX*0x1 + 0x1]
0066E1C9  50                        PUSH EAX
0066E1CA  E8 0C 76 D9 FF            CALL 0x004057db
0066E1CF  85 C0                     TEST EAX,EAX
0066E1D1  74 0F                     JZ 0x0066e1e2
0066E1D3  6A 7F                     PUSH 0x7f
0066E1D5  8D 4B 04                  LEA ECX,[EBX + 0x4]
0066E1D8  50                        PUSH EAX
0066E1D9  51                        PUSH ECX
0066E1DA  E8 61 01 0C 00            CALL 0x0072e340
0066E1DF  83 C4 0C                  ADD ESP,0xc
LAB_0066e1e2:
0066E1E2  C7 83 84 00 00 00 FF FF FF FF  MOV dword ptr [EBX + 0x84],0xffffffff
0066E1EC  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
0066E1F2  6A 79                     PUSH 0x79
0066E1F4  68 24 2A 7D 00            PUSH 0x7d2a24
0066E1F9  52                        PUSH EDX
0066E1FA  6A 88                     PUSH -0x78
0066E1FC  E8 3F 7C 03 00            CALL 0x006a5e40
LAB_0066e201:
0066E201  6A 04                     PUSH 0x4
0066E203  E8 08 CA 03 00            CALL 0x006aac10
0066E208  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0066E20B  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
0066E20E  89 08                     MOV dword ptr [EAX],ECX
0066E210  E9 1C 22 00 00            JMP 0x00670431
switchD_0066d45d::caseD_80c:
0066E215  8A 0E                     MOV CL,byte ptr [ESI]
0066E217  80 F9 04                  CMP CL,0x4
0066E21A  74 3C                     JZ 0x0066e258
0066E21C  80 F9 01                  CMP CL,0x1
0066E21F  74 37                     JZ 0x0066e258
0066E221  50                        PUSH EAX
0066E222  E8 B4 75 D9 FF            CALL 0x004057db
0066E227  85 C0                     TEST EAX,EAX
0066E229  74 0F                     JZ 0x0066e23a
0066E22B  6A 7F                     PUSH 0x7f
0066E22D  8D 53 04                  LEA EDX,[EBX + 0x4]
0066E230  50                        PUSH EAX
0066E231  52                        PUSH EDX
0066E232  E8 09 01 0C 00            CALL 0x0072e340
0066E237  83 C4 0C                  ADD ESP,0xc
LAB_0066e23a:
0066E23A  C7 83 84 00 00 00 FF FF FF FF  MOV dword ptr [EBX + 0x84],0xffffffff
0066E244  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
0066E249  6A 79                     PUSH 0x79
0066E24B  68 24 2A 7D 00            PUSH 0x7d2a24
0066E250  50                        PUSH EAX
0066E251  6A 88                     PUSH -0x78
0066E253  E8 E8 7B 03 00            CALL 0x006a5e40
LAB_0066e258:
0066E258  8A 46 05                  MOV AL,byte ptr [ESI + 0x5]
0066E25B  3C 06                     CMP AL,0x6
0066E25D  74 44                     JZ 0x0066e2a3
0066E25F  3C 03                     CMP AL,0x3
0066E261  74 40                     JZ 0x0066e2a3
0066E263  8D 0C BE                  LEA ECX,[ESI + EDI*0x4]
0066E266  0F BF 54 0F 01            MOVSX EDX,word ptr [EDI + ECX*0x1 + 0x1]
0066E26B  52                        PUSH EDX
0066E26C  E8 6A 75 D9 FF            CALL 0x004057db
0066E271  85 C0                     TEST EAX,EAX
0066E273  74 0F                     JZ 0x0066e284
0066E275  6A 7F                     PUSH 0x7f
0066E277  50                        PUSH EAX
0066E278  8D 43 04                  LEA EAX,[EBX + 0x4]
0066E27B  50                        PUSH EAX
0066E27C  E8 BF 00 0C 00            CALL 0x0072e340
0066E281  83 C4 0C                  ADD ESP,0xc
LAB_0066e284:
0066E284  C7 83 84 00 00 00 FF FF FF FF  MOV dword ptr [EBX + 0x84],0xffffffff
0066E28E  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
0066E294  6A 79                     PUSH 0x79
0066E296  68 24 2A 7D 00            PUSH 0x7d2a24
0066E29B  51                        PUSH ECX
0066E29C  6A 88                     PUSH -0x78
0066E29E  E8 9D 7B 03 00            CALL 0x006a5e40
LAB_0066e2a3:
0066E2A3  83 FF 02                  CMP EDI,0x2
0066E2A6  C7 45 F8 02 00 00 00      MOV dword ptr [EBP + -0x8],0x2
0066E2AD  7E 68                     JLE 0x0066e317
0066E2AF  C7 45 FC 0A 00 00 00      MOV dword ptr [EBP + -0x4],0xa
LAB_0066e2b6:
0066E2B6  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0066E2B9  8A 04 32                  MOV AL,byte ptr [EDX + ESI*0x1]
0066E2BC  3C 04                     CMP AL,0x4
0066E2BE  74 43                     JZ 0x0066e303
0066E2C0  3C 01                     CMP AL,0x1
0066E2C2  74 3F                     JZ 0x0066e303
0066E2C4  8D 04 BE                  LEA EAX,[ESI + EDI*0x4]
0066E2C7  0F BF 4C 07 01            MOVSX ECX,word ptr [EDI + EAX*0x1 + 0x1]
0066E2CC  51                        PUSH ECX
0066E2CD  E8 09 75 D9 FF            CALL 0x004057db
0066E2D2  85 C0                     TEST EAX,EAX
0066E2D4  74 0F                     JZ 0x0066e2e5
0066E2D6  6A 7F                     PUSH 0x7f
0066E2D8  8D 53 04                  LEA EDX,[EBX + 0x4]
0066E2DB  50                        PUSH EAX
0066E2DC  52                        PUSH EDX
0066E2DD  E8 5E 00 0C 00            CALL 0x0072e340
0066E2E2  83 C4 0C                  ADD ESP,0xc
LAB_0066e2e5:
0066E2E5  C7 83 84 00 00 00 FF FF FF FF  MOV dword ptr [EBX + 0x84],0xffffffff
0066E2EF  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
0066E2F4  6A 79                     PUSH 0x79
0066E2F6  68 24 2A 7D 00            PUSH 0x7d2a24
0066E2FB  50                        PUSH EAX
0066E2FC  6A 88                     PUSH -0x78
0066E2FE  E8 3D 7B 03 00            CALL 0x006a5e40
LAB_0066e303:
0066E303  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0066E306  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0066E309  40                        INC EAX
0066E30A  83 C2 05                  ADD EDX,0x5
0066E30D  3B C7                     CMP EAX,EDI
0066E30F  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0066E312  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
0066E315  7C 9F                     JL 0x0066e2b6
LAB_0066e317:
0066E317  8B 13                     MOV EDX,dword ptr [EBX]
0066E319  56                        PUSH ESI
0066E31A  8B CB                     MOV ECX,EBX
0066E31C  FF 12                     CALL dword ptr [EDX]
0066E31E  83 F8 09                  CMP EAX,0x9
0066E321  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0066E324  75 4C                     JNZ 0x0066e372
0066E326  8B 03                     MOV EAX,dword ptr [EBX]
0066E328  8B CB                     MOV ECX,EBX
0066E32A  FF 50 18                  CALL dword ptr [EAX + 0x18]
0066E32D  83 F8 08                  CMP EAX,0x8
0066E330  75 40                     JNZ 0x0066e372
0066E332  8D 0C BE                  LEA ECX,[ESI + EDI*0x4]
0066E335  0F BF 54 0F 01            MOVSX EDX,word ptr [EDI + ECX*0x1 + 0x1]
0066E33A  52                        PUSH EDX
0066E33B  E8 9B 74 D9 FF            CALL 0x004057db
0066E340  85 C0                     TEST EAX,EAX
0066E342  74 0F                     JZ 0x0066e353
0066E344  6A 7F                     PUSH 0x7f
0066E346  50                        PUSH EAX
0066E347  8D 43 04                  LEA EAX,[EBX + 0x4]
0066E34A  50                        PUSH EAX
0066E34B  E8 F0 FF 0B 00            CALL 0x0072e340
0066E350  83 C4 0C                  ADD ESP,0xc
LAB_0066e353:
0066E353  C7 83 84 00 00 00 FF FF FF FF  MOV dword ptr [EBX + 0x84],0xffffffff
0066E35D  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
0066E363  6A 79                     PUSH 0x79
0066E365  68 24 2A 7D 00            PUSH 0x7d2a24
0066E36A  51                        PUSH ECX
0066E36B  6A 88                     PUSH -0x78
0066E36D  E8 CE 7A 03 00            CALL 0x006a5e40
LAB_0066e372:
0066E372  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0066E375  8D 55 B4                  LEA EDX,[EBP + -0x4c]
0066E378  52                        PUSH EDX
0066E379  6A 00                     PUSH 0x0
0066E37B  50                        PUSH EAX
0066E37C  8B CB                     MOV ECX,EBX
0066E37E  C7 45 F4 00 00 00 00      MOV dword ptr [EBP + -0xc],0x0
0066E385  E8 2E 33 D9 FF            CALL 0x004016b8
0066E38A  83 F8 01                  CMP EAX,0x1
0066E38D  0F 85 0A 01 00 00         JNZ 0x0066e49d
0066E393  6A 00                     PUSH 0x0
0066E395  6A 00                     PUSH 0x0
0066E397  8B 13                     MOV EDX,dword ptr [EBX]
0066E399  68 A3 2B 40 00            PUSH 0x402ba3
0066E39E  6A FF                     PUSH -0x1
0066E3A0  6A FF                     PUSH -0x1
0066E3A2  6A FF                     PUSH -0x1
0066E3A4  6A 00                     PUSH 0x0
0066E3A6  6A 00                     PUSH 0x0
0066E3A8  6A 00                     PUSH 0x0
0066E3AA  8D 46 05                  LEA EAX,[ESI + 0x5]
0066E3AD  6A FF                     PUSH -0x1
0066E3AF  50                        PUSH EAX
0066E3B0  8B CB                     MOV ECX,EBX
0066E3B2  FF 52 08                  CALL dword ptr [EDX + 0x8]
0066E3B5  8B 4D B4                  MOV ECX,dword ptr [EBP + -0x4c]
0066E3B8  50                        PUSH EAX
0066E3B9  68 FF FF FF 3F            PUSH 0x3fffffff
0066E3BE  6A 00                     PUSH 0x0
0066E3C0  51                        PUSH ECX
0066E3C1  E8 32 2F D9 FF            CALL 0x004012f8
0066E3C6  83 C4 38                  ADD ESP,0x38
0066E3C9  83 F8 FF                  CMP EAX,-0x1
0066E3CC  0F 85 0A 01 00 00         JNZ 0x0066e4dc
0066E3D2  A1 84 19 81 00            MOV EAX,[0x00811984]
0066E3D7  85 C0                     TEST EAX,EAX
0066E3D9  0F 84 FD 00 00 00         JZ 0x0066e4dc
0066E3DF  C7 45 F4 01 00 00 00      MOV dword ptr [EBP + -0xc],0x1
0066E3E6  8B 13                     MOV EDX,dword ptr [EBX]
0066E3E8  8D 46 0A                  LEA EAX,[ESI + 0xa]
0066E3EB  8B CB                     MOV ECX,EBX
0066E3ED  50                        PUSH EAX
0066E3EE  FF 12                     CALL dword ptr [EDX]
0066E3F0  8B 13                     MOV EDX,dword ptr [EBX]
0066E3F2  8B F8                     MOV EDI,EAX
0066E3F4  8D 46 0F                  LEA EAX,[ESI + 0xf]
0066E3F7  8B CB                     MOV ECX,EBX
0066E3F9  50                        PUSH EAX
0066E3FA  FF 12                     CALL dword ptr [EDX]
0066E3FC  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0066E3FF  8B 13                     MOV EDX,dword ptr [EBX]
0066E401  8D 46 14                  LEA EAX,[ESI + 0x14]
0066E404  8B CB                     MOV ECX,EBX
0066E406  50                        PUSH EAX
0066E407  FF 12                     CALL dword ptr [EDX]
0066E409  8B 13                     MOV EDX,dword ptr [EBX]
0066E40B  83 C6 19                  ADD ESI,0x19
0066E40E  56                        PUSH ESI
0066E40F  8B CB                     MOV ECX,EBX
0066E411  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0066E414  FF 12                     CALL dword ptr [EDX]
0066E416  85 FF                     TEST EDI,EDI
0066E418  8B F0                     MOV ESI,EAX
0066E41A  7D 0E                     JGE 0x0066e42a
0066E41C  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0066E41F  85 C0                     TEST EAX,EAX
0066E421  7D 07                     JGE 0x0066e42a
0066E423  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0066E426  85 C0                     TEST EAX,EAX
0066E428  7C 44                     JL 0x0066e46e
LAB_0066e42a:
0066E42A  8D 45 AC                  LEA EAX,[EBP + -0x54]
0066E42D  8D 4D B2                  LEA ECX,[EBP + -0x4e]
0066E430  50                        PUSH EAX
0066E431  8D 55 AA                  LEA EDX,[EBP + -0x56]
0066E434  51                        PUSH ECX
0066E435  8B 0D 84 19 81 00         MOV ECX,dword ptr [0x00811984]
0066E43B  52                        PUSH EDX
0066E43C  E8 84 34 D9 FF            CALL 0x004018c5
0066E441  0F BF 4D AA               MOVSX ECX,word ptr [EBP + -0x56]
0066E445  8B 03                     MOV EAX,dword ptr [EBX]
0066E447  51                        PUSH ECX
0066E448  57                        PUSH EDI
0066E449  8B CB                     MOV ECX,EBX
0066E44B  FF 50 20                  CALL dword ptr [EAX + 0x20]
0066E44E  0F BF 45 B2               MOVSX EAX,word ptr [EBP + -0x4e]
0066E452  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0066E455  8B 13                     MOV EDX,dword ptr [EBX]
0066E457  50                        PUSH EAX
0066E458  51                        PUSH ECX
0066E459  8B CB                     MOV ECX,EBX
0066E45B  FF 52 20                  CALL dword ptr [EDX + 0x20]
0066E45E  0F BF 45 AC               MOVSX EAX,word ptr [EBP + -0x54]
0066E462  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0066E465  8B 13                     MOV EDX,dword ptr [EBX]
0066E467  50                        PUSH EAX
0066E468  51                        PUSH ECX
0066E469  8B CB                     MOV ECX,EBX
0066E46B  FF 52 20                  CALL dword ptr [EDX + 0x20]
LAB_0066e46e:
0066E46E  85 F6                     TEST ESI,ESI
0066E470  7C 6A                     JL 0x0066e4dc
0066E472  8B 0D 84 19 81 00         MOV ECX,dword ptr [0x00811984]
0066E478  8B 11                     MOV EDX,dword ptr [ECX]
0066E47A  FF 92 1C 01 00 00         CALL dword ptr [EDX + 0x11c]
0066E480  8B 13                     MOV EDX,dword ptr [EBX]
0066E482  50                        PUSH EAX
0066E483  56                        PUSH ESI
0066E484  8B CB                     MOV ECX,EBX
0066E486  FF 52 20                  CALL dword ptr [EDX + 0x20]
0066E489  6A 04                     PUSH 0x4
0066E48B  E8 80 C7 03 00            CALL 0x006aac10
0066E490  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
0066E493  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
0066E496  89 08                     MOV dword ptr [EAX],ECX
0066E498  E9 94 1F 00 00            JMP 0x00670431
LAB_0066e49d:
0066E49D  8D 04 BE                  LEA EAX,[ESI + EDI*0x4]
0066E4A0  0F BF 4C 07 01            MOVSX ECX,word ptr [EDI + EAX*0x1 + 0x1]
0066E4A5  51                        PUSH ECX
0066E4A6  E8 30 73 D9 FF            CALL 0x004057db
0066E4AB  85 C0                     TEST EAX,EAX
0066E4AD  74 0F                     JZ 0x0066e4be
0066E4AF  6A 7F                     PUSH 0x7f
0066E4B1  8D 53 04                  LEA EDX,[EBX + 0x4]
0066E4B4  50                        PUSH EAX
0066E4B5  52                        PUSH EDX
0066E4B6  E8 85 FE 0B 00            CALL 0x0072e340
0066E4BB  83 C4 0C                  ADD ESP,0xc
LAB_0066e4be:
0066E4BE  C7 83 84 00 00 00 FF FF FF FF  MOV dword ptr [EBX + 0x84],0xffffffff
0066E4C8  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
0066E4CD  6A 79                     PUSH 0x79
0066E4CF  68 24 2A 7D 00            PUSH 0x7d2a24
0066E4D4  50                        PUSH EAX
0066E4D5  6A 88                     PUSH -0x78
0066E4D7  E8 64 79 03 00            CALL 0x006a5e40
LAB_0066e4dc:
0066E4DC  6A 04                     PUSH 0x4
0066E4DE  E8 2D C7 03 00            CALL 0x006aac10
0066E4E3  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
0066E4E6  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
0066E4E9  89 08                     MOV dword ptr [EAX],ECX
0066E4EB  E9 41 1F 00 00            JMP 0x00670431
switchD_0066d45d::caseD_80d:
0066E4F0  8A 0E                     MOV CL,byte ptr [ESI]
0066E4F2  80 F9 04                  CMP CL,0x4
0066E4F5  74 3C                     JZ 0x0066e533
0066E4F7  80 F9 01                  CMP CL,0x1
0066E4FA  74 37                     JZ 0x0066e533
0066E4FC  50                        PUSH EAX
0066E4FD  E8 D9 72 D9 FF            CALL 0x004057db
0066E502  85 C0                     TEST EAX,EAX
0066E504  74 0F                     JZ 0x0066e515
0066E506  6A 7F                     PUSH 0x7f
0066E508  8D 53 04                  LEA EDX,[EBX + 0x4]
0066E50B  50                        PUSH EAX
0066E50C  52                        PUSH EDX
0066E50D  E8 2E FE 0B 00            CALL 0x0072e340
0066E512  83 C4 0C                  ADD ESP,0xc
LAB_0066e515:
0066E515  C7 83 84 00 00 00 FF FF FF FF  MOV dword ptr [EBX + 0x84],0xffffffff
0066E51F  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
0066E524  6A 79                     PUSH 0x79
0066E526  68 24 2A 7D 00            PUSH 0x7d2a24
0066E52B  50                        PUSH EAX
0066E52C  6A 88                     PUSH -0x78
0066E52E  E8 0D 79 03 00            CALL 0x006a5e40
LAB_0066e533:
0066E533  8A 46 05                  MOV AL,byte ptr [ESI + 0x5]
0066E536  3C 06                     CMP AL,0x6
0066E538  74 44                     JZ 0x0066e57e
0066E53A  3C 03                     CMP AL,0x3
0066E53C  74 40                     JZ 0x0066e57e
0066E53E  8D 0C BE                  LEA ECX,[ESI + EDI*0x4]
0066E541  0F BF 54 0F 01            MOVSX EDX,word ptr [EDI + ECX*0x1 + 0x1]
0066E546  52                        PUSH EDX
0066E547  E8 8F 72 D9 FF            CALL 0x004057db
0066E54C  85 C0                     TEST EAX,EAX
0066E54E  74 0F                     JZ 0x0066e55f
0066E550  6A 7F                     PUSH 0x7f
0066E552  50                        PUSH EAX
0066E553  8D 43 04                  LEA EAX,[EBX + 0x4]
0066E556  50                        PUSH EAX
0066E557  E8 E4 FD 0B 00            CALL 0x0072e340
0066E55C  83 C4 0C                  ADD ESP,0xc
LAB_0066e55f:
0066E55F  C7 83 84 00 00 00 FF FF FF FF  MOV dword ptr [EBX + 0x84],0xffffffff
0066E569  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
0066E56F  6A 79                     PUSH 0x79
0066E571  68 24 2A 7D 00            PUSH 0x7d2a24
0066E576  51                        PUSH ECX
0066E577  6A 88                     PUSH -0x78
0066E579  E8 C2 78 03 00            CALL 0x006a5e40
LAB_0066e57e:
0066E57E  83 FF 02                  CMP EDI,0x2
0066E581  C7 45 F8 02 00 00 00      MOV dword ptr [EBP + -0x8],0x2
0066E588  7E 68                     JLE 0x0066e5f2
0066E58A  C7 45 FC 0A 00 00 00      MOV dword ptr [EBP + -0x4],0xa
LAB_0066e591:
0066E591  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0066E594  8A 04 32                  MOV AL,byte ptr [EDX + ESI*0x1]
0066E597  3C 04                     CMP AL,0x4
0066E599  74 43                     JZ 0x0066e5de
0066E59B  3C 01                     CMP AL,0x1
0066E59D  74 3F                     JZ 0x0066e5de
0066E59F  8D 04 BE                  LEA EAX,[ESI + EDI*0x4]
0066E5A2  0F BF 4C 07 01            MOVSX ECX,word ptr [EDI + EAX*0x1 + 0x1]
0066E5A7  51                        PUSH ECX
0066E5A8  E8 2E 72 D9 FF            CALL 0x004057db
0066E5AD  85 C0                     TEST EAX,EAX
0066E5AF  74 0F                     JZ 0x0066e5c0
0066E5B1  6A 7F                     PUSH 0x7f
0066E5B3  8D 53 04                  LEA EDX,[EBX + 0x4]
0066E5B6  50                        PUSH EAX
0066E5B7  52                        PUSH EDX
0066E5B8  E8 83 FD 0B 00            CALL 0x0072e340
0066E5BD  83 C4 0C                  ADD ESP,0xc
LAB_0066e5c0:
0066E5C0  C7 83 84 00 00 00 FF FF FF FF  MOV dword ptr [EBX + 0x84],0xffffffff
0066E5CA  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
0066E5CF  6A 79                     PUSH 0x79
0066E5D1  68 24 2A 7D 00            PUSH 0x7d2a24
0066E5D6  50                        PUSH EAX
0066E5D7  6A 88                     PUSH -0x78
0066E5D9  E8 62 78 03 00            CALL 0x006a5e40
LAB_0066e5de:
0066E5DE  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0066E5E1  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0066E5E4  40                        INC EAX
0066E5E5  83 C2 05                  ADD EDX,0x5
0066E5E8  3B C7                     CMP EAX,EDI
0066E5EA  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0066E5ED  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
0066E5F0  7C 9F                     JL 0x0066e591
LAB_0066e5f2:
0066E5F2  8B 13                     MOV EDX,dword ptr [EBX]
0066E5F4  56                        PUSH ESI
0066E5F5  8B CB                     MOV ECX,EBX
0066E5F7  FF 12                     CALL dword ptr [EDX]
0066E5F9  83 F8 09                  CMP EAX,0x9
0066E5FC  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0066E5FF  75 4C                     JNZ 0x0066e64d
0066E601  8B 03                     MOV EAX,dword ptr [EBX]
0066E603  8B CB                     MOV ECX,EBX
0066E605  FF 50 18                  CALL dword ptr [EAX + 0x18]
0066E608  83 F8 08                  CMP EAX,0x8
0066E60B  75 40                     JNZ 0x0066e64d
0066E60D  8D 0C BE                  LEA ECX,[ESI + EDI*0x4]
0066E610  0F BF 54 0F 01            MOVSX EDX,word ptr [EDI + ECX*0x1 + 0x1]
0066E615  52                        PUSH EDX
0066E616  E8 C0 71 D9 FF            CALL 0x004057db
0066E61B  85 C0                     TEST EAX,EAX
0066E61D  74 0F                     JZ 0x0066e62e
0066E61F  6A 7F                     PUSH 0x7f
0066E621  50                        PUSH EAX
0066E622  8D 43 04                  LEA EAX,[EBX + 0x4]
0066E625  50                        PUSH EAX
0066E626  E8 15 FD 0B 00            CALL 0x0072e340
0066E62B  83 C4 0C                  ADD ESP,0xc
LAB_0066e62e:
0066E62E  C7 83 84 00 00 00 FF FF FF FF  MOV dword ptr [EBX + 0x84],0xffffffff
0066E638  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
0066E63E  6A 79                     PUSH 0x79
0066E640  68 24 2A 7D 00            PUSH 0x7d2a24
0066E645  51                        PUSH ECX
0066E646  6A 88                     PUSH -0x78
0066E648  E8 F3 77 03 00            CALL 0x006a5e40
LAB_0066e64d:
0066E64D  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0066E650  8D 55 B4                  LEA EDX,[EBP + -0x4c]
0066E653  52                        PUSH EDX
0066E654  6A 00                     PUSH 0x0
0066E656  50                        PUSH EAX
0066E657  8B CB                     MOV ECX,EBX
0066E659  C7 45 F4 00 00 00 00      MOV dword ptr [EBP + -0xc],0x0
0066E660  E8 53 30 D9 FF            CALL 0x004016b8
0066E665  83 F8 01                  CMP EAX,0x1
0066E668  0F 85 01 01 00 00         JNZ 0x0066e76f
0066E66E  8B 13                     MOV EDX,dword ptr [EBX]
0066E670  6A 00                     PUSH 0x0
0066E672  68 A2 2C 40 00            PUSH 0x402ca2
0066E677  6A FF                     PUSH -0x1
0066E679  6A FF                     PUSH -0x1
0066E67B  6A FF                     PUSH -0x1
0066E67D  6A 00                     PUSH 0x0
0066E67F  6A 00                     PUSH 0x0
0066E681  8D 46 05                  LEA EAX,[ESI + 0x5]
0066E684  6A 00                     PUSH 0x0
0066E686  50                        PUSH EAX
0066E687  8B CB                     MOV ECX,EBX
0066E689  FF 52 08                  CALL dword ptr [EDX + 0x8]
0066E68C  8B 4D B4                  MOV ECX,dword ptr [EBP + -0x4c]
0066E68F  50                        PUSH EAX
0066E690  6A 00                     PUSH 0x0
0066E692  51                        PUSH ECX
0066E693  E8 EA 51 D9 FF            CALL 0x00403882
0066E698  83 C4 2C                  ADD ESP,0x2c
0066E69B  83 F8 FF                  CMP EAX,-0x1
0066E69E  0F 85 0A 01 00 00         JNZ 0x0066e7ae
0066E6A4  A1 84 19 81 00            MOV EAX,[0x00811984]
0066E6A9  85 C0                     TEST EAX,EAX
0066E6AB  0F 84 FD 00 00 00         JZ 0x0066e7ae
0066E6B1  C7 45 F4 01 00 00 00      MOV dword ptr [EBP + -0xc],0x1
0066E6B8  8B 13                     MOV EDX,dword ptr [EBX]
0066E6BA  8D 46 0A                  LEA EAX,[ESI + 0xa]
0066E6BD  8B CB                     MOV ECX,EBX
0066E6BF  50                        PUSH EAX
0066E6C0  FF 12                     CALL dword ptr [EDX]
0066E6C2  8B 13                     MOV EDX,dword ptr [EBX]
0066E6C4  8B F8                     MOV EDI,EAX
0066E6C6  8D 46 0F                  LEA EAX,[ESI + 0xf]
0066E6C9  8B CB                     MOV ECX,EBX
0066E6CB  50                        PUSH EAX
0066E6CC  FF 12                     CALL dword ptr [EDX]
0066E6CE  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0066E6D1  8B 13                     MOV EDX,dword ptr [EBX]
0066E6D3  8D 46 14                  LEA EAX,[ESI + 0x14]
0066E6D6  8B CB                     MOV ECX,EBX
0066E6D8  50                        PUSH EAX
0066E6D9  FF 12                     CALL dword ptr [EDX]
0066E6DB  8B 13                     MOV EDX,dword ptr [EBX]
0066E6DD  83 C6 19                  ADD ESI,0x19
0066E6E0  56                        PUSH ESI
0066E6E1  8B CB                     MOV ECX,EBX
0066E6E3  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0066E6E6  FF 12                     CALL dword ptr [EDX]
0066E6E8  85 FF                     TEST EDI,EDI
0066E6EA  8B F0                     MOV ESI,EAX
0066E6EC  7D 0E                     JGE 0x0066e6fc
0066E6EE  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0066E6F1  85 C0                     TEST EAX,EAX
0066E6F3  7D 07                     JGE 0x0066e6fc
0066E6F5  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0066E6F8  85 C0                     TEST EAX,EAX
0066E6FA  7C 44                     JL 0x0066e740
LAB_0066e6fc:
0066E6FC  8D 45 B0                  LEA EAX,[EBP + -0x50]
0066E6FF  8D 4D AE                  LEA ECX,[EBP + -0x52]
0066E702  50                        PUSH EAX
0066E703  8D 55 A8                  LEA EDX,[EBP + -0x58]
0066E706  51                        PUSH ECX
0066E707  8B 0D 84 19 81 00         MOV ECX,dword ptr [0x00811984]
0066E70D  52                        PUSH EDX
0066E70E  E8 F8 77 D9 FF            CALL 0x00405f0b
0066E713  0F BF 4D A8               MOVSX ECX,word ptr [EBP + -0x58]
0066E717  8B 03                     MOV EAX,dword ptr [EBX]
0066E719  51                        PUSH ECX
0066E71A  57                        PUSH EDI
0066E71B  8B CB                     MOV ECX,EBX
0066E71D  FF 50 20                  CALL dword ptr [EAX + 0x20]
0066E720  0F BF 45 AE               MOVSX EAX,word ptr [EBP + -0x52]
0066E724  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0066E727  8B 13                     MOV EDX,dword ptr [EBX]
0066E729  50                        PUSH EAX
0066E72A  51                        PUSH ECX
0066E72B  8B CB                     MOV ECX,EBX
0066E72D  FF 52 20                  CALL dword ptr [EDX + 0x20]
0066E730  0F BF 45 B0               MOVSX EAX,word ptr [EBP + -0x50]
0066E734  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0066E737  8B 13                     MOV EDX,dword ptr [EBX]
0066E739  50                        PUSH EAX
0066E73A  51                        PUSH ECX
0066E73B  8B CB                     MOV ECX,EBX
0066E73D  FF 52 20                  CALL dword ptr [EDX + 0x20]
LAB_0066e740:
0066E740  85 F6                     TEST ESI,ESI
0066E742  7C 6A                     JL 0x0066e7ae
0066E744  8B 0D 84 19 81 00         MOV ECX,dword ptr [0x00811984]
0066E74A  8B 11                     MOV EDX,dword ptr [ECX]
0066E74C  FF 92 1C 01 00 00         CALL dword ptr [EDX + 0x11c]
0066E752  8B 13                     MOV EDX,dword ptr [EBX]
0066E754  50                        PUSH EAX
0066E755  56                        PUSH ESI
0066E756  8B CB                     MOV ECX,EBX
0066E758  FF 52 20                  CALL dword ptr [EDX + 0x20]
0066E75B  6A 04                     PUSH 0x4
0066E75D  E8 AE C4 03 00            CALL 0x006aac10
0066E762  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
0066E765  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
0066E768  89 08                     MOV dword ptr [EAX],ECX
0066E76A  E9 C2 1C 00 00            JMP 0x00670431
LAB_0066e76f:
0066E76F  8D 04 BE                  LEA EAX,[ESI + EDI*0x4]
0066E772  0F BF 4C 07 01            MOVSX ECX,word ptr [EDI + EAX*0x1 + 0x1]
0066E777  51                        PUSH ECX
0066E778  E8 5E 70 D9 FF            CALL 0x004057db
0066E77D  85 C0                     TEST EAX,EAX
0066E77F  74 0F                     JZ 0x0066e790
0066E781  6A 7F                     PUSH 0x7f
0066E783  8D 53 04                  LEA EDX,[EBX + 0x4]
0066E786  50                        PUSH EAX
0066E787  52                        PUSH EDX
0066E788  E8 B3 FB 0B 00            CALL 0x0072e340
0066E78D  83 C4 0C                  ADD ESP,0xc
LAB_0066e790:
0066E790  C7 83 84 00 00 00 FF FF FF FF  MOV dword ptr [EBX + 0x84],0xffffffff
0066E79A  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
0066E79F  6A 79                     PUSH 0x79
0066E7A1  68 24 2A 7D 00            PUSH 0x7d2a24
0066E7A6  50                        PUSH EAX
0066E7A7  6A 88                     PUSH -0x78
0066E7A9  E8 92 76 03 00            CALL 0x006a5e40
LAB_0066e7ae:
0066E7AE  6A 04                     PUSH 0x4
0066E7B0  E8 5B C4 03 00            CALL 0x006aac10
0066E7B5  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
0066E7B8  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
0066E7BB  89 08                     MOV dword ptr [EAX],ECX
0066E7BD  E9 6F 1C 00 00            JMP 0x00670431
switchD_0066d45d::caseD_80e:
0066E7C2  8A 0E                     MOV CL,byte ptr [ESI]
0066E7C4  80 F9 06                  CMP CL,0x6
0066E7C7  74 3C                     JZ 0x0066e805
0066E7C9  80 F9 03                  CMP CL,0x3
0066E7CC  74 37                     JZ 0x0066e805
0066E7CE  50                        PUSH EAX
0066E7CF  E8 07 70 D9 FF            CALL 0x004057db
0066E7D4  85 C0                     TEST EAX,EAX
0066E7D6  74 0F                     JZ 0x0066e7e7
0066E7D8  6A 7F                     PUSH 0x7f
0066E7DA  8D 53 04                  LEA EDX,[EBX + 0x4]
0066E7DD  50                        PUSH EAX
0066E7DE  52                        PUSH EDX
0066E7DF  E8 5C FB 0B 00            CALL 0x0072e340
0066E7E4  83 C4 0C                  ADD ESP,0xc
LAB_0066e7e7:
0066E7E7  C7 83 84 00 00 00 FF FF FF FF  MOV dword ptr [EBX + 0x84],0xffffffff
0066E7F1  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
0066E7F6  6A 79                     PUSH 0x79
0066E7F8  68 24 2A 7D 00            PUSH 0x7d2a24
0066E7FD  50                        PUSH EAX
0066E7FE  6A 88                     PUSH -0x78
0066E800  E8 3B 76 03 00            CALL 0x006a5e40
LAB_0066e805:
0066E805  83 FF 01                  CMP EDI,0x1
0066E808  C7 45 F8 01 00 00 00      MOV dword ptr [EBP + -0x8],0x1
0066E80F  7E 69                     JLE 0x0066e87a
0066E811  C7 45 FC 05 00 00 00      MOV dword ptr [EBP + -0x4],0x5
LAB_0066e818:
0066E818  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0066E81B  8A 04 31                  MOV AL,byte ptr [ECX + ESI*0x1]
0066E81E  3C 04                     CMP AL,0x4
0066E820  74 44                     JZ 0x0066e866
0066E822  3C 01                     CMP AL,0x1
0066E824  74 40                     JZ 0x0066e866
0066E826  8D 14 BE                  LEA EDX,[ESI + EDI*0x4]
0066E829  0F BF 44 17 01            MOVSX EAX,word ptr [EDI + EDX*0x1 + 0x1]
0066E82E  50                        PUSH EAX
0066E82F  E8 A7 6F D9 FF            CALL 0x004057db
0066E834  85 C0                     TEST EAX,EAX
0066E836  74 0F                     JZ 0x0066e847
0066E838  6A 7F                     PUSH 0x7f
0066E83A  8D 4B 04                  LEA ECX,[EBX + 0x4]
0066E83D  50                        PUSH EAX
0066E83E  51                        PUSH ECX
0066E83F  E8 FC FA 0B 00            CALL 0x0072e340
0066E844  83 C4 0C                  ADD ESP,0xc
LAB_0066e847:
0066E847  C7 83 84 00 00 00 FF FF FF FF  MOV dword ptr [EBX + 0x84],0xffffffff
0066E851  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
0066E857  6A 79                     PUSH 0x79
0066E859  68 24 2A 7D 00            PUSH 0x7d2a24
0066E85E  52                        PUSH EDX
0066E85F  6A 88                     PUSH -0x78
0066E861  E8 DA 75 03 00            CALL 0x006a5e40
LAB_0066e866:
0066E866  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0066E869  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0066E86C  40                        INC EAX
0066E86D  83 C2 05                  ADD EDX,0x5
0066E870  3B C7                     CMP EAX,EDI
0066E872  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0066E875  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
0066E878  7C 9E                     JL 0x0066e818
LAB_0066e87a:
0066E87A  6A 00                     PUSH 0x0
0066E87C  68 8E 18 40 00            PUSH 0x40188e
0066E881  6A FF                     PUSH -0x1
0066E883  6A FF                     PUSH -0x1
0066E885  6A FF                     PUSH -0x1
0066E887  6A 00                     PUSH 0x0
0066E889  C7 45 F4 00 00 00 00      MOV dword ptr [EBP + -0xc],0x0
0066E890  8B 03                     MOV EAX,dword ptr [EBX]
0066E892  6A 00                     PUSH 0x0
0066E894  6A 00                     PUSH 0x0
0066E896  56                        PUSH ESI
0066E897  8B CB                     MOV ECX,EBX
0066E899  FF 50 08                  CALL dword ptr [EAX + 0x8]
0066E89C  50                        PUSH EAX
0066E89D  6A 00                     PUSH 0x0
0066E89F  E8 8E 40 D9 FF            CALL 0x00402932
0066E8A4  83 C4 28                  ADD ESP,0x28
0066E8A7  83 F8 FF                  CMP EAX,-0x1
0066E8AA  0F 85 B7 00 00 00         JNZ 0x0066e967
0066E8B0  A1 84 19 81 00            MOV EAX,[0x00811984]
0066E8B5  85 C0                     TEST EAX,EAX
0066E8B7  0F 84 AA 00 00 00         JZ 0x0066e967
0066E8BD  C7 45 F4 01 00 00 00      MOV dword ptr [EBP + -0xc],0x1
0066E8C4  8B 13                     MOV EDX,dword ptr [EBX]
0066E8C6  8D 46 05                  LEA EAX,[ESI + 0x5]
0066E8C9  8B CB                     MOV ECX,EBX
0066E8CB  50                        PUSH EAX
0066E8CC  FF 12                     CALL dword ptr [EDX]
0066E8CE  8B 13                     MOV EDX,dword ptr [EBX]
0066E8D0  8B F8                     MOV EDI,EAX
0066E8D2  8D 46 0A                  LEA EAX,[ESI + 0xa]
0066E8D5  8B CB                     MOV ECX,EBX
0066E8D7  50                        PUSH EAX
0066E8D8  FF 12                     CALL dword ptr [EDX]
0066E8DA  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0066E8DD  8B 13                     MOV EDX,dword ptr [EBX]
0066E8DF  8D 46 0F                  LEA EAX,[ESI + 0xf]
0066E8E2  8B CB                     MOV ECX,EBX
0066E8E4  50                        PUSH EAX
0066E8E5  FF 12                     CALL dword ptr [EDX]
0066E8E7  8B 13                     MOV EDX,dword ptr [EBX]
0066E8E9  83 C6 14                  ADD ESI,0x14
0066E8EC  56                        PUSH ESI
0066E8ED  8B CB                     MOV ECX,EBX
0066E8EF  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0066E8F2  FF 12                     CALL dword ptr [EDX]
0066E8F4  85 FF                     TEST EDI,EDI
0066E8F6  8B F0                     MOV ESI,EAX
0066E8F8  7D 0E                     JGE 0x0066e908
0066E8FA  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0066E8FD  85 C0                     TEST EAX,EAX
0066E8FF  7D 07                     JGE 0x0066e908
0066E901  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0066E904  85 C0                     TEST EAX,EAX
0066E906  7C 44                     JL 0x0066e94c
LAB_0066e908:
0066E908  8D 45 DE                  LEA EAX,[EBP + -0x22]
0066E90B  8D 4D A6                  LEA ECX,[EBP + -0x5a]
0066E90E  50                        PUSH EAX
0066E90F  8D 55 A4                  LEA EDX,[EBP + -0x5c]
0066E912  51                        PUSH ECX
0066E913  8B 0D 84 19 81 00         MOV ECX,dword ptr [0x00811984]
0066E919  52                        PUSH EDX
0066E91A  E8 EC 75 D9 FF            CALL 0x00405f0b
0066E91F  0F BF 4D A4               MOVSX ECX,word ptr [EBP + -0x5c]
0066E923  8B 03                     MOV EAX,dword ptr [EBX]
0066E925  51                        PUSH ECX
0066E926  57                        PUSH EDI
0066E927  8B CB                     MOV ECX,EBX
0066E929  FF 50 20                  CALL dword ptr [EAX + 0x20]
0066E92C  0F BF 45 A6               MOVSX EAX,word ptr [EBP + -0x5a]
0066E930  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0066E933  8B 13                     MOV EDX,dword ptr [EBX]
0066E935  50                        PUSH EAX
0066E936  51                        PUSH ECX
0066E937  8B CB                     MOV ECX,EBX
0066E939  FF 52 20                  CALL dword ptr [EDX + 0x20]
0066E93C  0F BF 45 DE               MOVSX EAX,word ptr [EBP + -0x22]
0066E940  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0066E943  8B 13                     MOV EDX,dword ptr [EBX]
0066E945  50                        PUSH EAX
0066E946  51                        PUSH ECX
0066E947  8B CB                     MOV ECX,EBX
0066E949  FF 52 20                  CALL dword ptr [EDX + 0x20]
LAB_0066e94c:
0066E94C  85 F6                     TEST ESI,ESI
0066E94E  7C 17                     JL 0x0066e967
0066E950  8B 0D 84 19 81 00         MOV ECX,dword ptr [0x00811984]
0066E956  8B 11                     MOV EDX,dword ptr [ECX]
0066E958  FF 92 1C 01 00 00         CALL dword ptr [EDX + 0x11c]
0066E95E  8B 13                     MOV EDX,dword ptr [EBX]
0066E960  50                        PUSH EAX
0066E961  56                        PUSH ESI
0066E962  8B CB                     MOV ECX,EBX
0066E964  FF 52 20                  CALL dword ptr [EDX + 0x20]
LAB_0066e967:
0066E967  6A 04                     PUSH 0x4
0066E969  E8 A2 C2 03 00            CALL 0x006aac10
0066E96E  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
0066E971  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
0066E974  89 08                     MOV dword ptr [EAX],ECX
0066E976  E9 B6 1A 00 00            JMP 0x00670431
switchD_0066d45d::caseD_80f:
0066E97B  8A 0E                     MOV CL,byte ptr [ESI]
0066E97D  80 F9 06                  CMP CL,0x6
0066E980  74 3C                     JZ 0x0066e9be
0066E982  80 F9 03                  CMP CL,0x3
0066E985  74 37                     JZ 0x0066e9be
0066E987  50                        PUSH EAX
0066E988  E8 4E 6E D9 FF            CALL 0x004057db
0066E98D  85 C0                     TEST EAX,EAX
0066E98F  74 0F                     JZ 0x0066e9a0
0066E991  6A 7F                     PUSH 0x7f
0066E993  8D 53 04                  LEA EDX,[EBX + 0x4]
0066E996  50                        PUSH EAX
0066E997  52                        PUSH EDX
0066E998  E8 A3 F9 0B 00            CALL 0x0072e340
0066E99D  83 C4 0C                  ADD ESP,0xc
LAB_0066e9a0:
0066E9A0  C7 83 84 00 00 00 FF FF FF FF  MOV dword ptr [EBX + 0x84],0xffffffff
0066E9AA  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
0066E9AF  6A 79                     PUSH 0x79
0066E9B1  68 24 2A 7D 00            PUSH 0x7d2a24
0066E9B6  50                        PUSH EAX
0066E9B7  6A 88                     PUSH -0x78
0066E9B9  E8 82 74 03 00            CALL 0x006a5e40
LAB_0066e9be:
0066E9BE  83 FF 01                  CMP EDI,0x1
0066E9C1  C7 45 F8 01 00 00 00      MOV dword ptr [EBP + -0x8],0x1
0066E9C8  7E 69                     JLE 0x0066ea33
0066E9CA  C7 45 FC 05 00 00 00      MOV dword ptr [EBP + -0x4],0x5
LAB_0066e9d1:
0066E9D1  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0066E9D4  8A 04 31                  MOV AL,byte ptr [ECX + ESI*0x1]
0066E9D7  3C 04                     CMP AL,0x4
0066E9D9  74 44                     JZ 0x0066ea1f
0066E9DB  3C 01                     CMP AL,0x1
0066E9DD  74 40                     JZ 0x0066ea1f
0066E9DF  8D 14 BE                  LEA EDX,[ESI + EDI*0x4]
0066E9E2  0F BF 44 17 01            MOVSX EAX,word ptr [EDI + EDX*0x1 + 0x1]
0066E9E7  50                        PUSH EAX
0066E9E8  E8 EE 6D D9 FF            CALL 0x004057db
0066E9ED  85 C0                     TEST EAX,EAX
0066E9EF  74 0F                     JZ 0x0066ea00
0066E9F1  6A 7F                     PUSH 0x7f
0066E9F3  8D 4B 04                  LEA ECX,[EBX + 0x4]
0066E9F6  50                        PUSH EAX
0066E9F7  51                        PUSH ECX
0066E9F8  E8 43 F9 0B 00            CALL 0x0072e340
0066E9FD  83 C4 0C                  ADD ESP,0xc
LAB_0066ea00:
0066EA00  C7 83 84 00 00 00 FF FF FF FF  MOV dword ptr [EBX + 0x84],0xffffffff
0066EA0A  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
0066EA10  6A 79                     PUSH 0x79
0066EA12  68 24 2A 7D 00            PUSH 0x7d2a24
0066EA17  52                        PUSH EDX
0066EA18  6A 88                     PUSH -0x78
0066EA1A  E8 21 74 03 00            CALL 0x006a5e40
LAB_0066ea1f:
0066EA1F  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0066EA22  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0066EA25  40                        INC EAX
0066EA26  83 C2 05                  ADD EDX,0x5
0066EA29  3B C7                     CMP EAX,EDI
0066EA2B  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0066EA2E  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
0066EA31  7C 9E                     JL 0x0066e9d1
LAB_0066ea33:
0066EA33  6A 00                     PUSH 0x0
0066EA35  68 73 4C 40 00            PUSH 0x404c73
0066EA3A  6A FF                     PUSH -0x1
0066EA3C  6A FF                     PUSH -0x1
0066EA3E  6A FF                     PUSH -0x1
0066EA40  6A 00                     PUSH 0x0
0066EA42  6A 00                     PUSH 0x0
0066EA44  C7 45 F4 00 00 00 00      MOV dword ptr [EBP + -0xc],0x0
0066EA4B  8B 03                     MOV EAX,dword ptr [EBX]
0066EA4D  6A 00                     PUSH 0x0
0066EA4F  6A FF                     PUSH -0x1
0066EA51  56                        PUSH ESI
0066EA52  8B CB                     MOV ECX,EBX
0066EA54  FF 50 08                  CALL dword ptr [EAX + 0x8]
0066EA57  50                        PUSH EAX
0066EA58  E8 95 29 D9 FF            CALL 0x004013f2
0066EA5D  83 C4 28                  ADD ESP,0x28
0066EA60  83 F8 FF                  CMP EAX,-0x1
0066EA63  0F 85 B7 00 00 00         JNZ 0x0066eb20
0066EA69  A1 84 19 81 00            MOV EAX,[0x00811984]
0066EA6E  85 C0                     TEST EAX,EAX
0066EA70  0F 84 AA 00 00 00         JZ 0x0066eb20
0066EA76  C7 45 F4 01 00 00 00      MOV dword ptr [EBP + -0xc],0x1
0066EA7D  8B 13                     MOV EDX,dword ptr [EBX]
0066EA7F  8D 46 05                  LEA EAX,[ESI + 0x5]
0066EA82  8B CB                     MOV ECX,EBX
0066EA84  50                        PUSH EAX
0066EA85  FF 12                     CALL dword ptr [EDX]
0066EA87  8B 13                     MOV EDX,dword ptr [EBX]
0066EA89  8B F8                     MOV EDI,EAX
0066EA8B  8D 46 0A                  LEA EAX,[ESI + 0xa]
0066EA8E  8B CB                     MOV ECX,EBX
0066EA90  50                        PUSH EAX
0066EA91  FF 12                     CALL dword ptr [EDX]
0066EA93  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0066EA96  8B 13                     MOV EDX,dword ptr [EBX]
0066EA98  8D 46 0F                  LEA EAX,[ESI + 0xf]
0066EA9B  8B CB                     MOV ECX,EBX
0066EA9D  50                        PUSH EAX
0066EA9E  FF 12                     CALL dword ptr [EDX]
0066EAA0  8B 13                     MOV EDX,dword ptr [EBX]
0066EAA2  83 C6 14                  ADD ESI,0x14
0066EAA5  56                        PUSH ESI
0066EAA6  8B CB                     MOV ECX,EBX
0066EAA8  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0066EAAB  FF 12                     CALL dword ptr [EDX]
0066EAAD  85 FF                     TEST EDI,EDI
0066EAAF  8B F0                     MOV ESI,EAX
0066EAB1  7D 0E                     JGE 0x0066eac1
0066EAB3  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0066EAB6  85 C0                     TEST EAX,EAX
0066EAB8  7D 07                     JGE 0x0066eac1
0066EABA  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0066EABD  85 C0                     TEST EAX,EAX
0066EABF  7C 44                     JL 0x0066eb05
LAB_0066eac1:
0066EAC1  8D 45 EA                  LEA EAX,[EBP + -0x16]
0066EAC4  8D 4D E2                  LEA ECX,[EBP + -0x1e]
0066EAC7  50                        PUSH EAX
0066EAC8  8D 55 D6                  LEA EDX,[EBP + -0x2a]
0066EACB  51                        PUSH ECX
0066EACC  8B 0D 84 19 81 00         MOV ECX,dword ptr [0x00811984]
0066EAD2  52                        PUSH EDX
0066EAD3  E8 ED 2D D9 FF            CALL 0x004018c5
0066EAD8  0F BF 4D D6               MOVSX ECX,word ptr [EBP + -0x2a]
0066EADC  8B 03                     MOV EAX,dword ptr [EBX]
0066EADE  51                        PUSH ECX
0066EADF  57                        PUSH EDI
0066EAE0  8B CB                     MOV ECX,EBX
0066EAE2  FF 50 20                  CALL dword ptr [EAX + 0x20]
0066EAE5  0F BF 45 E2               MOVSX EAX,word ptr [EBP + -0x1e]
0066EAE9  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0066EAEC  8B 13                     MOV EDX,dword ptr [EBX]
0066EAEE  50                        PUSH EAX
0066EAEF  51                        PUSH ECX
0066EAF0  8B CB                     MOV ECX,EBX
0066EAF2  FF 52 20                  CALL dword ptr [EDX + 0x20]
0066EAF5  0F BF 45 EA               MOVSX EAX,word ptr [EBP + -0x16]
0066EAF9  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0066EAFC  8B 13                     MOV EDX,dword ptr [EBX]
0066EAFE  50                        PUSH EAX
0066EAFF  51                        PUSH ECX
0066EB00  8B CB                     MOV ECX,EBX
0066EB02  FF 52 20                  CALL dword ptr [EDX + 0x20]
LAB_0066eb05:
0066EB05  85 F6                     TEST ESI,ESI
0066EB07  7C 17                     JL 0x0066eb20
0066EB09  8B 0D 84 19 81 00         MOV ECX,dword ptr [0x00811984]
0066EB0F  8B 11                     MOV EDX,dword ptr [ECX]
0066EB11  FF 92 1C 01 00 00         CALL dword ptr [EDX + 0x11c]
0066EB17  8B 13                     MOV EDX,dword ptr [EBX]
0066EB19  50                        PUSH EAX
0066EB1A  56                        PUSH ESI
0066EB1B  8B CB                     MOV ECX,EBX
0066EB1D  FF 52 20                  CALL dword ptr [EDX + 0x20]
LAB_0066eb20:
0066EB20  6A 04                     PUSH 0x4
0066EB22  E8 E9 C0 03 00            CALL 0x006aac10
0066EB27  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
0066EB2A  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
0066EB2D  89 08                     MOV dword ptr [EAX],ECX
0066EB2F  E9 FD 18 00 00            JMP 0x00670431
switchD_0066d45d::caseD_810:
0066EB34  8A 0E                     MOV CL,byte ptr [ESI]
0066EB36  80 F9 04                  CMP CL,0x4
0066EB39  74 3C                     JZ 0x0066eb77
0066EB3B  80 F9 01                  CMP CL,0x1
0066EB3E  74 37                     JZ 0x0066eb77
0066EB40  50                        PUSH EAX
0066EB41  E8 95 6C D9 FF            CALL 0x004057db
0066EB46  85 C0                     TEST EAX,EAX
0066EB48  74 0F                     JZ 0x0066eb59
0066EB4A  6A 7F                     PUSH 0x7f
0066EB4C  8D 53 04                  LEA EDX,[EBX + 0x4]
0066EB4F  50                        PUSH EAX
0066EB50  52                        PUSH EDX
0066EB51  E8 EA F7 0B 00            CALL 0x0072e340
0066EB56  83 C4 0C                  ADD ESP,0xc
LAB_0066eb59:
0066EB59  C7 83 84 00 00 00 FF FF FF FF  MOV dword ptr [EBX + 0x84],0xffffffff
0066EB63  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
0066EB68  6A 79                     PUSH 0x79
0066EB6A  68 24 2A 7D 00            PUSH 0x7d2a24
0066EB6F  50                        PUSH EAX
0066EB70  6A 88                     PUSH -0x78
0066EB72  E8 C9 72 03 00            CALL 0x006a5e40
LAB_0066eb77:
0066EB77  8A 46 05                  MOV AL,byte ptr [ESI + 0x5]
0066EB7A  3C 06                     CMP AL,0x6
0066EB7C  74 44                     JZ 0x0066ebc2
0066EB7E  3C 03                     CMP AL,0x3
0066EB80  74 40                     JZ 0x0066ebc2
0066EB82  8D 0C BE                  LEA ECX,[ESI + EDI*0x4]
0066EB85  0F BF 54 0F 01            MOVSX EDX,word ptr [EDI + ECX*0x1 + 0x1]
0066EB8A  52                        PUSH EDX
0066EB8B  E8 4B 6C D9 FF            CALL 0x004057db
0066EB90  85 C0                     TEST EAX,EAX
0066EB92  74 0F                     JZ 0x0066eba3
0066EB94  6A 7F                     PUSH 0x7f
0066EB96  50                        PUSH EAX
0066EB97  8D 43 04                  LEA EAX,[EBX + 0x4]
0066EB9A  50                        PUSH EAX
0066EB9B  E8 A0 F7 0B 00            CALL 0x0072e340
0066EBA0  83 C4 0C                  ADD ESP,0xc
LAB_0066eba3:
0066EBA3  C7 83 84 00 00 00 FF FF FF FF  MOV dword ptr [EBX + 0x84],0xffffffff
0066EBAD  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
0066EBB3  6A 79                     PUSH 0x79
0066EBB5  68 24 2A 7D 00            PUSH 0x7d2a24
0066EBBA  51                        PUSH ECX
0066EBBB  6A 88                     PUSH -0x78
0066EBBD  E8 7E 72 03 00            CALL 0x006a5e40
LAB_0066ebc2:
0066EBC2  83 FF 02                  CMP EDI,0x2
0066EBC5  C7 45 F8 02 00 00 00      MOV dword ptr [EBP + -0x8],0x2
0066EBCC  7E 68                     JLE 0x0066ec36
0066EBCE  C7 45 FC 0A 00 00 00      MOV dword ptr [EBP + -0x4],0xa
LAB_0066ebd5:
0066EBD5  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0066EBD8  8A 04 32                  MOV AL,byte ptr [EDX + ESI*0x1]
0066EBDB  3C 04                     CMP AL,0x4
0066EBDD  74 43                     JZ 0x0066ec22
0066EBDF  3C 01                     CMP AL,0x1
0066EBE1  74 3F                     JZ 0x0066ec22
0066EBE3  8D 04 BE                  LEA EAX,[ESI + EDI*0x4]
0066EBE6  0F BF 4C 07 01            MOVSX ECX,word ptr [EDI + EAX*0x1 + 0x1]
0066EBEB  51                        PUSH ECX
0066EBEC  E8 EA 6B D9 FF            CALL 0x004057db
0066EBF1  85 C0                     TEST EAX,EAX
0066EBF3  74 0F                     JZ 0x0066ec04
0066EBF5  6A 7F                     PUSH 0x7f
0066EBF7  8D 53 04                  LEA EDX,[EBX + 0x4]
0066EBFA  50                        PUSH EAX
0066EBFB  52                        PUSH EDX
0066EBFC  E8 3F F7 0B 00            CALL 0x0072e340
0066EC01  83 C4 0C                  ADD ESP,0xc
LAB_0066ec04:
0066EC04  C7 83 84 00 00 00 FF FF FF FF  MOV dword ptr [EBX + 0x84],0xffffffff
0066EC0E  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
0066EC13  6A 79                     PUSH 0x79
0066EC15  68 24 2A 7D 00            PUSH 0x7d2a24
0066EC1A  50                        PUSH EAX
0066EC1B  6A 88                     PUSH -0x78
0066EC1D  E8 1E 72 03 00            CALL 0x006a5e40
LAB_0066ec22:
0066EC22  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0066EC25  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0066EC28  40                        INC EAX
0066EC29  83 C2 05                  ADD EDX,0x5
0066EC2C  3B C7                     CMP EAX,EDI
0066EC2E  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0066EC31  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
0066EC34  7C 9F                     JL 0x0066ebd5
LAB_0066ec36:
0066EC36  8B 13                     MOV EDX,dword ptr [EBX]
0066EC38  56                        PUSH ESI
0066EC39  8B CB                     MOV ECX,EBX
0066EC3B  FF 12                     CALL dword ptr [EDX]
0066EC3D  83 F8 09                  CMP EAX,0x9
0066EC40  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0066EC43  75 4C                     JNZ 0x0066ec91
0066EC45  8B 03                     MOV EAX,dword ptr [EBX]
0066EC47  8B CB                     MOV ECX,EBX
0066EC49  FF 50 18                  CALL dword ptr [EAX + 0x18]
0066EC4C  83 F8 08                  CMP EAX,0x8
0066EC4F  75 40                     JNZ 0x0066ec91
0066EC51  8D 0C BE                  LEA ECX,[ESI + EDI*0x4]
0066EC54  0F BF 54 0F 01            MOVSX EDX,word ptr [EDI + ECX*0x1 + 0x1]
0066EC59  52                        PUSH EDX
0066EC5A  E8 7C 6B D9 FF            CALL 0x004057db
0066EC5F  85 C0                     TEST EAX,EAX
0066EC61  74 0F                     JZ 0x0066ec72
0066EC63  6A 7F                     PUSH 0x7f
0066EC65  50                        PUSH EAX
0066EC66  8D 43 04                  LEA EAX,[EBX + 0x4]
0066EC69  50                        PUSH EAX
0066EC6A  E8 D1 F6 0B 00            CALL 0x0072e340
0066EC6F  83 C4 0C                  ADD ESP,0xc
LAB_0066ec72:
0066EC72  C7 83 84 00 00 00 FF FF FF FF  MOV dword ptr [EBX + 0x84],0xffffffff
0066EC7C  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
0066EC82  6A 79                     PUSH 0x79
0066EC84  68 24 2A 7D 00            PUSH 0x7d2a24
0066EC89  51                        PUSH ECX
0066EC8A  6A 88                     PUSH -0x78
0066EC8C  E8 AF 71 03 00            CALL 0x006a5e40
LAB_0066ec91:
0066EC91  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0066EC94  8D 55 B4                  LEA EDX,[EBP + -0x4c]
0066EC97  52                        PUSH EDX
0066EC98  6A 00                     PUSH 0x0
0066EC9A  50                        PUSH EAX
0066EC9B  8B CB                     MOV ECX,EBX
0066EC9D  C7 45 E8 00 00 00 00      MOV dword ptr [EBP + -0x18],0x0
0066ECA4  E8 0F 2A D9 FF            CALL 0x004016b8
0066ECA9  83 F8 01                  CMP EAX,0x1
0066ECAC  0F 85 03 01 00 00         JNZ 0x0066edb5
0066ECB2  8B 13                     MOV EDX,dword ptr [EBX]
0066ECB4  6A 00                     PUSH 0x0
0066ECB6  68 6C 44 40 00            PUSH 0x40446c
0066ECBB  6A FF                     PUSH -0x1
0066ECBD  6A FF                     PUSH -0x1
0066ECBF  6A FF                     PUSH -0x1
0066ECC1  6A 00                     PUSH 0x0
0066ECC3  6A 00                     PUSH 0x0
0066ECC5  8D 46 05                  LEA EAX,[ESI + 0x5]
0066ECC8  6A 00                     PUSH 0x0
0066ECCA  50                        PUSH EAX
0066ECCB  8B CB                     MOV ECX,EBX
0066ECCD  FF 52 08                  CALL dword ptr [EDX + 0x8]
0066ECD0  8B 4D B4                  MOV ECX,dword ptr [EBP + -0x4c]
0066ECD3  50                        PUSH EAX
0066ECD4  6A FF                     PUSH -0x1
0066ECD6  6A 00                     PUSH 0x0
0066ECD8  51                        PUSH ECX
0066ECD9  E8 97 49 D9 FF            CALL 0x00403675
0066ECDE  83 C4 30                  ADD ESP,0x30
0066ECE1  83 F8 FF                  CMP EAX,-0x1
0066ECE4  0F 85 0A 01 00 00         JNZ 0x0066edf4
0066ECEA  A1 84 19 81 00            MOV EAX,[0x00811984]
0066ECEF  85 C0                     TEST EAX,EAX
0066ECF1  0F 84 FD 00 00 00         JZ 0x0066edf4
0066ECF7  C7 45 E8 01 00 00 00      MOV dword ptr [EBP + -0x18],0x1
0066ECFE  8B 13                     MOV EDX,dword ptr [EBX]
0066ED00  8D 46 0A                  LEA EAX,[ESI + 0xa]
0066ED03  8B CB                     MOV ECX,EBX
0066ED05  50                        PUSH EAX
0066ED06  FF 12                     CALL dword ptr [EDX]
0066ED08  8B 13                     MOV EDX,dword ptr [EBX]
0066ED0A  8B F8                     MOV EDI,EAX
0066ED0C  8D 46 0F                  LEA EAX,[ESI + 0xf]
0066ED0F  8B CB                     MOV ECX,EBX
0066ED11  50                        PUSH EAX
0066ED12  FF 12                     CALL dword ptr [EDX]
0066ED14  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0066ED17  8B 13                     MOV EDX,dword ptr [EBX]
0066ED19  8D 46 14                  LEA EAX,[ESI + 0x14]
0066ED1C  8B CB                     MOV ECX,EBX
0066ED1E  50                        PUSH EAX
0066ED1F  FF 12                     CALL dword ptr [EDX]
0066ED21  8B 13                     MOV EDX,dword ptr [EBX]
0066ED23  83 C6 19                  ADD ESI,0x19
0066ED26  56                        PUSH ESI
0066ED27  8B CB                     MOV ECX,EBX
0066ED29  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0066ED2C  FF 12                     CALL dword ptr [EDX]
0066ED2E  85 FF                     TEST EDI,EDI
0066ED30  8B F0                     MOV ESI,EAX
0066ED32  7D 0E                     JGE 0x0066ed42
0066ED34  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0066ED37  85 C0                     TEST EAX,EAX
0066ED39  7D 07                     JGE 0x0066ed42
0066ED3B  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0066ED3E  85 C0                     TEST EAX,EAX
0066ED40  7C 44                     JL 0x0066ed86
LAB_0066ed42:
0066ED42  8D 45 F6                  LEA EAX,[EBP + -0xa]
0066ED45  8D 4D EE                  LEA ECX,[EBP + -0x12]
0066ED48  50                        PUSH EAX
0066ED49  8D 55 DA                  LEA EDX,[EBP + -0x26]
0066ED4C  51                        PUSH ECX
0066ED4D  8B 0D 84 19 81 00         MOV ECX,dword ptr [0x00811984]
0066ED53  52                        PUSH EDX
0066ED54  E8 6C 2B D9 FF            CALL 0x004018c5
0066ED59  0F BF 4D DA               MOVSX ECX,word ptr [EBP + -0x26]
0066ED5D  8B 03                     MOV EAX,dword ptr [EBX]
0066ED5F  51                        PUSH ECX
0066ED60  57                        PUSH EDI
0066ED61  8B CB                     MOV ECX,EBX
0066ED63  FF 50 20                  CALL dword ptr [EAX + 0x20]
0066ED66  0F BF 45 EE               MOVSX EAX,word ptr [EBP + -0x12]
0066ED6A  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0066ED6D  8B 13                     MOV EDX,dword ptr [EBX]
0066ED6F  50                        PUSH EAX
0066ED70  51                        PUSH ECX
0066ED71  8B CB                     MOV ECX,EBX
0066ED73  FF 52 20                  CALL dword ptr [EDX + 0x20]
0066ED76  0F BF 45 F6               MOVSX EAX,word ptr [EBP + -0xa]
0066ED7A  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0066ED7D  8B 13                     MOV EDX,dword ptr [EBX]
0066ED7F  50                        PUSH EAX
0066ED80  51                        PUSH ECX
0066ED81  8B CB                     MOV ECX,EBX
0066ED83  FF 52 20                  CALL dword ptr [EDX + 0x20]
LAB_0066ed86:
0066ED86  85 F6                     TEST ESI,ESI
0066ED88  7C 6A                     JL 0x0066edf4
0066ED8A  8B 0D 84 19 81 00         MOV ECX,dword ptr [0x00811984]
0066ED90  8B 11                     MOV EDX,dword ptr [ECX]
0066ED92  FF 92 1C 01 00 00         CALL dword ptr [EDX + 0x11c]
0066ED98  8B 13                     MOV EDX,dword ptr [EBX]
0066ED9A  50                        PUSH EAX
0066ED9B  56                        PUSH ESI
0066ED9C  8B CB                     MOV ECX,EBX
0066ED9E  FF 52 20                  CALL dword ptr [EDX + 0x20]
0066EDA1  6A 04                     PUSH 0x4
0066EDA3  E8 68 BE 03 00            CALL 0x006aac10
0066EDA8  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
0066EDAB  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
0066EDAE  89 08                     MOV dword ptr [EAX],ECX
0066EDB0  E9 7C 16 00 00            JMP 0x00670431
LAB_0066edb5:
0066EDB5  8D 04 BE                  LEA EAX,[ESI + EDI*0x4]
0066EDB8  0F BF 4C 07 01            MOVSX ECX,word ptr [EDI + EAX*0x1 + 0x1]
0066EDBD  51                        PUSH ECX
0066EDBE  E8 18 6A D9 FF            CALL 0x004057db
0066EDC3  85 C0                     TEST EAX,EAX
0066EDC5  74 0F                     JZ 0x0066edd6
0066EDC7  6A 7F                     PUSH 0x7f
0066EDC9  8D 53 04                  LEA EDX,[EBX + 0x4]
0066EDCC  50                        PUSH EAX
0066EDCD  52                        PUSH EDX
0066EDCE  E8 6D F5 0B 00            CALL 0x0072e340
0066EDD3  83 C4 0C                  ADD ESP,0xc
LAB_0066edd6:
0066EDD6  C7 83 84 00 00 00 FF FF FF FF  MOV dword ptr [EBX + 0x84],0xffffffff
0066EDE0  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
0066EDE5  6A 79                     PUSH 0x79
0066EDE7  68 24 2A 7D 00            PUSH 0x7d2a24
0066EDEC  50                        PUSH EAX
0066EDED  6A 88                     PUSH -0x78
0066EDEF  E8 4C 70 03 00            CALL 0x006a5e40
LAB_0066edf4:
0066EDF4  6A 04                     PUSH 0x4
0066EDF6  E8 15 BE 03 00            CALL 0x006aac10
0066EDFB  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
0066EDFE  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
0066EE01  89 08                     MOV dword ptr [EAX],ECX
0066EE03  E9 29 16 00 00            JMP 0x00670431
switchD_0066d45d::caseD_816:
0066EE08  33 C0                     XOR EAX,EAX
0066EE0A  3B F8                     CMP EDI,EAX
0066EE0C  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0066EE0F  7E 64                     JLE 0x0066ee75
0066EE11  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
LAB_0066ee14:
0066EE14  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0066EE17  8A 04 32                  MOV AL,byte ptr [EDX + ESI*0x1]
0066EE1A  3C 04                     CMP AL,0x4
0066EE1C  74 43                     JZ 0x0066ee61
0066EE1E  3C 01                     CMP AL,0x1
0066EE20  74 3F                     JZ 0x0066ee61
0066EE22  8D 04 BE                  LEA EAX,[ESI + EDI*0x4]
0066EE25  0F BF 4C 07 01            MOVSX ECX,word ptr [EDI + EAX*0x1 + 0x1]
0066EE2A  51                        PUSH ECX
0066EE2B  E8 AB 69 D9 FF            CALL 0x004057db
0066EE30  85 C0                     TEST EAX,EAX
0066EE32  74 0F                     JZ 0x0066ee43
0066EE34  6A 7F                     PUSH 0x7f
0066EE36  8D 53 04                  LEA EDX,[EBX + 0x4]
0066EE39  50                        PUSH EAX
0066EE3A  52                        PUSH EDX
0066EE3B  E8 00 F5 0B 00            CALL 0x0072e340
0066EE40  83 C4 0C                  ADD ESP,0xc
LAB_0066ee43:
0066EE43  C7 83 84 00 00 00 FF FF FF FF  MOV dword ptr [EBX + 0x84],0xffffffff
0066EE4D  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
0066EE52  6A 79                     PUSH 0x79
0066EE54  68 24 2A 7D 00            PUSH 0x7d2a24
0066EE59  50                        PUSH EAX
0066EE5A  6A 88                     PUSH -0x78
0066EE5C  E8 DF 6F 03 00            CALL 0x006a5e40
LAB_0066ee61:
0066EE61  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0066EE64  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0066EE67  40                        INC EAX
0066EE68  83 C2 05                  ADD EDX,0x5
0066EE6B  3B C7                     CMP EAX,EDI
0066EE6D  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0066EE70  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
0066EE73  7C 9F                     JL 0x0066ee14
LAB_0066ee75:
0066EE75  8B 13                     MOV EDX,dword ptr [EBX]
0066EE77  56                        PUSH ESI
0066EE78  8B CB                     MOV ECX,EBX
0066EE7A  FF 12                     CALL dword ptr [EDX]
0066EE7C  83 F8 09                  CMP EAX,0x9
0066EE7F  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0066EE82  75 4C                     JNZ 0x0066eed0
0066EE84  8B 03                     MOV EAX,dword ptr [EBX]
0066EE86  8B CB                     MOV ECX,EBX
0066EE88  FF 50 18                  CALL dword ptr [EAX + 0x18]
0066EE8B  83 F8 08                  CMP EAX,0x8
0066EE8E  75 40                     JNZ 0x0066eed0
0066EE90  8D 0C BE                  LEA ECX,[ESI + EDI*0x4]
0066EE93  0F BF 54 0F 01            MOVSX EDX,word ptr [EDI + ECX*0x1 + 0x1]
0066EE98  52                        PUSH EDX
0066EE99  E8 3D 69 D9 FF            CALL 0x004057db
0066EE9E  85 C0                     TEST EAX,EAX
0066EEA0  74 0F                     JZ 0x0066eeb1
0066EEA2  6A 7F                     PUSH 0x7f
0066EEA4  50                        PUSH EAX
0066EEA5  8D 43 04                  LEA EAX,[EBX + 0x4]
0066EEA8  50                        PUSH EAX
0066EEA9  E8 92 F4 0B 00            CALL 0x0072e340
0066EEAE  83 C4 0C                  ADD ESP,0xc
LAB_0066eeb1:
0066EEB1  C7 83 84 00 00 00 FF FF FF FF  MOV dword ptr [EBX + 0x84],0xffffffff
0066EEBB  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
0066EEC1  6A 79                     PUSH 0x79
0066EEC3  68 24 2A 7D 00            PUSH 0x7d2a24
0066EEC8  51                        PUSH ECX
0066EEC9  6A 88                     PUSH -0x78
0066EECB  E8 70 6F 03 00            CALL 0x006a5e40
LAB_0066eed0:
0066EED0  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0066EED3  8D 55 B4                  LEA EDX,[EBP + -0x4c]
0066EED6  52                        PUSH EDX
0066EED7  6A 00                     PUSH 0x0
0066EED9  50                        PUSH EAX
0066EEDA  8B CB                     MOV ECX,EBX
0066EEDC  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
0066EEE3  E8 D0 27 D9 FF            CALL 0x004016b8
0066EEE8  83 F8 01                  CMP EAX,0x1
0066EEEB  8D 0C BE                  LEA ECX,[ESI + EDI*0x4]
0066EEEE  75 58                     JNZ 0x0066ef48
0066EEF0  0F BF 44 0F 01            MOVSX EAX,word ptr [EDI + ECX*0x1 + 0x1]
0066EEF5  2D 16 08 00 00            SUB EAX,0x816
0066EEFA  74 17                     JZ 0x0066ef13
0066EEFC  48                        DEC EAX
0066EEFD  74 23                     JZ 0x0066ef22
0066EEFF  6A 04                     PUSH 0x4
0066EF01  E8 0A BD 03 00            CALL 0x006aac10
0066EF06  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0066EF09  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
0066EF0C  89 10                     MOV dword ptr [EAX],EDX
0066EF0E  E9 1E 15 00 00            JMP 0x00670431
LAB_0066ef13:
0066EF13  8B 55 B4                  MOV EDX,dword ptr [EBP + -0x4c]
0066EF16  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0066EF1C  52                        PUSH EDX
0066EF1D  E8 9A 28 D9 FF            CALL 0x004017bc
LAB_0066ef22:
0066EF22  8B 45 B4                  MOV EAX,dword ptr [EBP + -0x4c]
0066EF25  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0066EF2B  50                        PUSH EAX
0066EF2C  E8 4B 40 D9 FF            CALL 0x00402f7c
0066EF31  6A 04                     PUSH 0x4
0066EF33  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0066EF36  E8 D5 BC 03 00            CALL 0x006aac10
0066EF3B  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0066EF3E  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
0066EF41  89 10                     MOV dword ptr [EAX],EDX
0066EF43  E9 E9 14 00 00            JMP 0x00670431
LAB_0066ef48:
0066EF48  0F BF 54 0F 01            MOVSX EDX,word ptr [EDI + ECX*0x1 + 0x1]
0066EF4D  52                        PUSH EDX
0066EF4E  E8 88 68 D9 FF            CALL 0x004057db
0066EF53  85 C0                     TEST EAX,EAX
0066EF55  74 0F                     JZ 0x0066ef66
0066EF57  6A 7F                     PUSH 0x7f
0066EF59  50                        PUSH EAX
0066EF5A  8D 43 04                  LEA EAX,[EBX + 0x4]
0066EF5D  50                        PUSH EAX
0066EF5E  E8 DD F3 0B 00            CALL 0x0072e340
0066EF63  83 C4 0C                  ADD ESP,0xc
LAB_0066ef66:
0066EF66  C7 83 84 00 00 00 FF FF FF FF  MOV dword ptr [EBX + 0x84],0xffffffff
0066EF70  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
0066EF76  6A 79                     PUSH 0x79
0066EF78  68 24 2A 7D 00            PUSH 0x7d2a24
0066EF7D  51                        PUSH ECX
0066EF7E  6A 88                     PUSH -0x78
0066EF80  E8 BB 6E 03 00            CALL 0x006a5e40
0066EF85  6A 04                     PUSH 0x4
0066EF87  E8 84 BC 03 00            CALL 0x006aac10
0066EF8C  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0066EF8F  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
0066EF92  89 10                     MOV dword ptr [EAX],EDX
0066EF94  E9 98 14 00 00            JMP 0x00670431
switchD_0066d45d::caseD_819:
0066EF99  33 C0                     XOR EAX,EAX
0066EF9B  3B F8                     CMP EDI,EAX
0066EF9D  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0066EFA0  7E 65                     JLE 0x0066f007
0066EFA2  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
LAB_0066efa5:
0066EFA5  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0066EFA8  8A 04 30                  MOV AL,byte ptr [EAX + ESI*0x1]
0066EFAB  3C 04                     CMP AL,0x4
0066EFAD  74 44                     JZ 0x0066eff3
0066EFAF  3C 01                     CMP AL,0x1
0066EFB1  74 40                     JZ 0x0066eff3
0066EFB3  8D 0C BE                  LEA ECX,[ESI + EDI*0x4]
0066EFB6  0F BF 54 0F 01            MOVSX EDX,word ptr [EDI + ECX*0x1 + 0x1]
0066EFBB  52                        PUSH EDX
0066EFBC  E8 1A 68 D9 FF            CALL 0x004057db
0066EFC1  85 C0                     TEST EAX,EAX
0066EFC3  74 0F                     JZ 0x0066efd4
0066EFC5  6A 7F                     PUSH 0x7f
0066EFC7  50                        PUSH EAX
0066EFC8  8D 43 04                  LEA EAX,[EBX + 0x4]
0066EFCB  50                        PUSH EAX
0066EFCC  E8 6F F3 0B 00            CALL 0x0072e340
0066EFD1  83 C4 0C                  ADD ESP,0xc
LAB_0066efd4:
0066EFD4  C7 83 84 00 00 00 FF FF FF FF  MOV dword ptr [EBX + 0x84],0xffffffff
0066EFDE  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
0066EFE4  6A 79                     PUSH 0x79
0066EFE6  68 24 2A 7D 00            PUSH 0x7d2a24
0066EFEB  51                        PUSH ECX
0066EFEC  6A 88                     PUSH -0x78
0066EFEE  E8 4D 6E 03 00            CALL 0x006a5e40
LAB_0066eff3:
0066EFF3  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0066EFF6  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0066EFF9  40                        INC EAX
0066EFFA  83 C2 05                  ADD EDX,0x5
0066EFFD  3B C7                     CMP EAX,EDI
0066EFFF  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0066F002  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
0066F005  7C 9E                     JL 0x0066efa5
LAB_0066f007:
0066F007  8B 13                     MOV EDX,dword ptr [EBX]
0066F009  56                        PUSH ESI
0066F00A  8B CB                     MOV ECX,EBX
0066F00C  FF 12                     CALL dword ptr [EDX]
0066F00E  8D 4E 05                  LEA ECX,[ESI + 0x5]
0066F011  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
0066F014  8B 03                     MOV EAX,dword ptr [EBX]
0066F016  51                        PUSH ECX
0066F017  8B CB                     MOV ECX,EBX
0066F019  FF 10                     CALL dword ptr [EAX]
0066F01B  8B 13                     MOV EDX,dword ptr [EBX]
0066F01D  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0066F020  8D 46 0A                  LEA EAX,[ESI + 0xa]
0066F023  8B CB                     MOV ECX,EBX
0066F025  50                        PUSH EAX
0066F026  FF 12                     CALL dword ptr [EDX]
0066F028  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0066F02B  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0066F02E  85 C0                     TEST EAX,EAX
0066F030  7C 07                     JL 0x0066f039
0066F032  3D 9B 00 00 00            CMP EAX,0x9b
0066F037  7C 40                     JL 0x0066f079
LAB_0066f039:
0066F039  8D 0C BE                  LEA ECX,[ESI + EDI*0x4]
0066F03C  0F BF 54 0F 01            MOVSX EDX,word ptr [EDI + ECX*0x1 + 0x1]
0066F041  52                        PUSH EDX
0066F042  E8 94 67 D9 FF            CALL 0x004057db
0066F047  85 C0                     TEST EAX,EAX
0066F049  74 0F                     JZ 0x0066f05a
0066F04B  6A 7F                     PUSH 0x7f
0066F04D  50                        PUSH EAX
0066F04E  8D 43 04                  LEA EAX,[EBX + 0x4]
0066F051  50                        PUSH EAX
0066F052  E8 E9 F2 0B 00            CALL 0x0072e340
0066F057  83 C4 0C                  ADD ESP,0xc
LAB_0066f05a:
0066F05A  C7 83 84 00 00 00 FF FF FF FF  MOV dword ptr [EBX + 0x84],0xffffffff
0066F064  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
0066F06A  6A 79                     PUSH 0x79
0066F06C  68 24 2A 7D 00            PUSH 0x7d2a24
0066F071  51                        PUSH ECX
0066F072  6A 88                     PUSH -0x78
0066F074  E8 C7 6D 03 00            CALL 0x006a5e40
LAB_0066f079:
0066F079  83 7D F4 09               CMP dword ptr [EBP + -0xc],0x9
0066F07D  75 4B                     JNZ 0x0066f0ca
0066F07F  8B 13                     MOV EDX,dword ptr [EBX]
0066F081  8B CB                     MOV ECX,EBX
0066F083  FF 52 18                  CALL dword ptr [EDX + 0x18]
0066F086  83 F8 08                  CMP EAX,0x8
0066F089  75 3F                     JNZ 0x0066f0ca
0066F08B  8D 04 BE                  LEA EAX,[ESI + EDI*0x4]
0066F08E  0F BF 4C 07 01            MOVSX ECX,word ptr [EDI + EAX*0x1 + 0x1]
0066F093  51                        PUSH ECX
0066F094  E8 42 67 D9 FF            CALL 0x004057db
0066F099  85 C0                     TEST EAX,EAX
0066F09B  74 0F                     JZ 0x0066f0ac
0066F09D  6A 7F                     PUSH 0x7f
0066F09F  8D 53 04                  LEA EDX,[EBX + 0x4]
0066F0A2  50                        PUSH EAX
0066F0A3  52                        PUSH EDX
0066F0A4  E8 97 F2 0B 00            CALL 0x0072e340
0066F0A9  83 C4 0C                  ADD ESP,0xc
LAB_0066f0ac:
0066F0AC  C7 83 84 00 00 00 FF FF FF FF  MOV dword ptr [EBX + 0x84],0xffffffff
0066F0B6  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
0066F0BB  6A 79                     PUSH 0x79
0066F0BD  68 24 2A 7D 00            PUSH 0x7d2a24
0066F0C2  50                        PUSH EAX
0066F0C3  6A 88                     PUSH -0x78
0066F0C5  E8 76 6D 03 00            CALL 0x006a5e40
LAB_0066f0ca:
0066F0CA  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
0066F0CD  8D 4D B4                  LEA ECX,[EBP + -0x4c]
0066F0D0  51                        PUSH ECX
0066F0D1  6A 00                     PUSH 0x0
0066F0D3  52                        PUSH EDX
0066F0D4  8B CB                     MOV ECX,EBX
0066F0D6  C7 45 EC 00 00 00 00      MOV dword ptr [EBP + -0x14],0x0
0066F0DD  E8 D6 25 D9 FF            CALL 0x004016b8
0066F0E2  83 F8 01                  CMP EAX,0x1
0066F0E5  8D 04 BE                  LEA EAX,[ESI + EDI*0x4]
0066F0E8  0F 85 D5 00 00 00         JNZ 0x0066f1c3
0066F0EE  0F BF 44 07 01            MOVSX EAX,word ptr [EDI + EAX*0x1 + 0x1]
0066F0F3  2D 19 08 00 00            SUB EAX,0x819
0066F0F8  0F 84 95 00 00 00         JZ 0x0066f193
0066F0FE  83 E8 02                  SUB EAX,0x2
0066F101  74 60                     JZ 0x0066f163
0066F103  48                        DEC EAX
0066F104  0F 85 F5 00 00 00         JNZ 0x0066f1ff
0066F10A  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
0066F10D  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
0066F110  8B 4D B4                  MOV ECX,dword ptr [EBP + -0x4c]
0066F113  57                        PUSH EDI
0066F114  56                        PUSH ESI
0066F115  51                        PUSH ECX
0066F116  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0066F11C  E8 6E 4E D9 FF            CALL 0x00403f8f
0066F121  85 C0                     TEST EAX,EAX
0066F123  75 28                     JNZ 0x0066f14d
0066F125  8B 55 B4                  MOV EDX,dword ptr [EBP + -0x4c]
0066F128  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0066F12E  57                        PUSH EDI
0066F12F  56                        PUSH ESI
0066F130  52                        PUSH EDX
0066F131  E8 0C 32 D9 FF            CALL 0x00402342
0066F136  85 C0                     TEST EAX,EAX
0066F138  75 13                     JNZ 0x0066f14d
0066F13A  6A 04                     PUSH 0x4
0066F13C  33 F6                     XOR ESI,ESI
0066F13E  E8 CD BA 03 00            CALL 0x006aac10
0066F143  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
0066F146  89 30                     MOV dword ptr [EAX],ESI
0066F148  E9 E4 12 00 00            JMP 0x00670431
LAB_0066f14d:
0066F14D  6A 04                     PUSH 0x4
0066F14F  BE 01 00 00 00            MOV ESI,0x1
0066F154  E8 B7 BA 03 00            CALL 0x006aac10
0066F159  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
0066F15C  89 30                     MOV dword ptr [EAX],ESI
0066F15E  E9 CE 12 00 00            JMP 0x00670431
LAB_0066f163:
0066F163  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0066F166  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0066F169  8B 55 B4                  MOV EDX,dword ptr [EBP + -0x4c]
0066F16C  50                        PUSH EAX
0066F16D  51                        PUSH ECX
0066F16E  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0066F174  52                        PUSH EDX
0066F175  E8 FF 63 D9 FF            CALL 0x00405579
0066F17A  8B F0                     MOV ESI,EAX
0066F17C  6A 04                     PUSH 0x4
0066F17E  F7 DE                     NEG ESI
0066F180  1B F6                     SBB ESI,ESI
0066F182  F7 DE                     NEG ESI
0066F184  E8 87 BA 03 00            CALL 0x006aac10
0066F189  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
0066F18C  89 30                     MOV dword ptr [EAX],ESI
0066F18E  E9 9E 12 00 00            JMP 0x00670431
LAB_0066f193:
0066F193  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0066F196  8B 4D B4                  MOV ECX,dword ptr [EBP + -0x4c]
0066F199  50                        PUSH EAX
0066F19A  51                        PUSH ECX
0066F19B  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0066F1A1  E8 C5 26 D9 FF            CALL 0x0040186b
0066F1A6  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0066F1A9  33 D2                     XOR EDX,EDX
0066F1AB  3B C1                     CMP EAX,ECX
0066F1AD  6A 04                     PUSH 0x4
0066F1AF  0F 9D C2                  SETGE DL
0066F1B2  8B F2                     MOV ESI,EDX
0066F1B4  E8 57 BA 03 00            CALL 0x006aac10
0066F1B9  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
0066F1BC  89 30                     MOV dword ptr [EAX],ESI
0066F1BE  E9 6E 12 00 00            JMP 0x00670431
LAB_0066f1c3:
0066F1C3  0F BF 4C 07 01            MOVSX ECX,word ptr [EDI + EAX*0x1 + 0x1]
0066F1C8  51                        PUSH ECX
0066F1C9  E8 0D 66 D9 FF            CALL 0x004057db
0066F1CE  85 C0                     TEST EAX,EAX
0066F1D0  74 0F                     JZ 0x0066f1e1
0066F1D2  6A 7F                     PUSH 0x7f
0066F1D4  8D 53 04                  LEA EDX,[EBX + 0x4]
0066F1D7  50                        PUSH EAX
0066F1D8  52                        PUSH EDX
0066F1D9  E8 62 F1 0B 00            CALL 0x0072e340
0066F1DE  83 C4 0C                  ADD ESP,0xc
LAB_0066f1e1:
0066F1E1  C7 83 84 00 00 00 FF FF FF FF  MOV dword ptr [EBX + 0x84],0xffffffff
0066F1EB  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
0066F1F0  6A 79                     PUSH 0x79
0066F1F2  68 24 2A 7D 00            PUSH 0x7d2a24
0066F1F7  50                        PUSH EAX
0066F1F8  6A 88                     PUSH -0x78
0066F1FA  E8 41 6C 03 00            CALL 0x006a5e40
LAB_0066f1ff:
0066F1FF  8B 75 EC                  MOV ESI,dword ptr [EBP + -0x14]
0066F202  6A 04                     PUSH 0x4
0066F204  E8 07 BA 03 00            CALL 0x006aac10
0066F209  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
0066F20C  89 30                     MOV dword ptr [EAX],ESI
0066F20E  E9 1E 12 00 00            JMP 0x00670431
switchD_0066d45d::caseD_81a:
0066F213  33 C0                     XOR EAX,EAX
0066F215  3B F8                     CMP EDI,EAX
0066F217  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0066F21A  7E 65                     JLE 0x0066f281
0066F21C  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
LAB_0066f21f:
0066F21F  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0066F222  8A 04 31                  MOV AL,byte ptr [ECX + ESI*0x1]
0066F225  3C 04                     CMP AL,0x4
0066F227  74 44                     JZ 0x0066f26d
0066F229  3C 01                     CMP AL,0x1
0066F22B  74 40                     JZ 0x0066f26d
0066F22D  8D 14 BE                  LEA EDX,[ESI + EDI*0x4]
0066F230  0F BF 44 17 01            MOVSX EAX,word ptr [EDI + EDX*0x1 + 0x1]
0066F235  50                        PUSH EAX
0066F236  E8 A0 65 D9 FF            CALL 0x004057db
0066F23B  85 C0                     TEST EAX,EAX
0066F23D  74 0F                     JZ 0x0066f24e
0066F23F  6A 7F                     PUSH 0x7f
0066F241  8D 4B 04                  LEA ECX,[EBX + 0x4]
0066F244  50                        PUSH EAX
0066F245  51                        PUSH ECX
0066F246  E8 F5 F0 0B 00            CALL 0x0072e340
0066F24B  83 C4 0C                  ADD ESP,0xc
LAB_0066f24e:
0066F24E  C7 83 84 00 00 00 FF FF FF FF  MOV dword ptr [EBX + 0x84],0xffffffff
0066F258  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
0066F25E  6A 79                     PUSH 0x79
0066F260  68 24 2A 7D 00            PUSH 0x7d2a24
0066F265  52                        PUSH EDX
0066F266  6A 88                     PUSH -0x78
0066F268  E8 D3 6B 03 00            CALL 0x006a5e40
LAB_0066f26d:
0066F26D  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0066F270  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0066F273  40                        INC EAX
0066F274  83 C2 05                  ADD EDX,0x5
0066F277  3B C7                     CMP EAX,EDI
0066F279  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0066F27C  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
0066F27F  7C 9E                     JL 0x0066f21f
LAB_0066f281:
0066F281  8B 03                     MOV EAX,dword ptr [EBX]
0066F283  56                        PUSH ESI
0066F284  8B CB                     MOV ECX,EBX
0066F286  FF 10                     CALL dword ptr [EAX]
0066F288  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0066F28B  8B 13                     MOV EDX,dword ptr [EBX]
0066F28D  8D 46 05                  LEA EAX,[ESI + 0x5]
0066F290  8B CB                     MOV ECX,EBX
0066F292  50                        PUSH EAX
0066F293  FF 12                     CALL dword ptr [EDX]
0066F295  85 C0                     TEST EAX,EAX
0066F297  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0066F29A  7C 07                     JL 0x0066f2a3
0066F29C  3D 9B 00 00 00            CMP EAX,0x9b
0066F2A1  7C 40                     JL 0x0066f2e3
LAB_0066f2a3:
0066F2A3  8D 0C BE                  LEA ECX,[ESI + EDI*0x4]
0066F2A6  0F BF 54 0F 01            MOVSX EDX,word ptr [EDI + ECX*0x1 + 0x1]
0066F2AB  52                        PUSH EDX
0066F2AC  E8 2A 65 D9 FF            CALL 0x004057db
0066F2B1  85 C0                     TEST EAX,EAX
0066F2B3  74 0F                     JZ 0x0066f2c4
0066F2B5  6A 7F                     PUSH 0x7f
0066F2B7  50                        PUSH EAX
0066F2B8  8D 43 04                  LEA EAX,[EBX + 0x4]
0066F2BB  50                        PUSH EAX
0066F2BC  E8 7F F0 0B 00            CALL 0x0072e340
0066F2C1  83 C4 0C                  ADD ESP,0xc
LAB_0066f2c4:
0066F2C4  C7 83 84 00 00 00 FF FF FF FF  MOV dword ptr [EBX + 0x84],0xffffffff
0066F2CE  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
0066F2D4  6A 79                     PUSH 0x79
0066F2D6  68 24 2A 7D 00            PUSH 0x7d2a24
0066F2DB  51                        PUSH ECX
0066F2DC  6A 88                     PUSH -0x78
0066F2DE  E8 5D 6B 03 00            CALL 0x006a5e40
LAB_0066f2e3:
0066F2E3  83 7D FC 09               CMP dword ptr [EBP + -0x4],0x9
0066F2E7  75 4B                     JNZ 0x0066f334
0066F2E9  8B 13                     MOV EDX,dword ptr [EBX]
0066F2EB  8B CB                     MOV ECX,EBX
0066F2ED  FF 52 18                  CALL dword ptr [EDX + 0x18]
0066F2F0  83 F8 08                  CMP EAX,0x8
0066F2F3  75 3F                     JNZ 0x0066f334
0066F2F5  8D 04 BE                  LEA EAX,[ESI + EDI*0x4]
0066F2F8  0F BF 4C 07 01            MOVSX ECX,word ptr [EDI + EAX*0x1 + 0x1]
0066F2FD  51                        PUSH ECX
0066F2FE  E8 D8 64 D9 FF            CALL 0x004057db
0066F303  85 C0                     TEST EAX,EAX
0066F305  74 0F                     JZ 0x0066f316
0066F307  6A 7F                     PUSH 0x7f
0066F309  8D 53 04                  LEA EDX,[EBX + 0x4]
0066F30C  50                        PUSH EAX
0066F30D  52                        PUSH EDX
0066F30E  E8 2D F0 0B 00            CALL 0x0072e340
0066F313  83 C4 0C                  ADD ESP,0xc
LAB_0066f316:
0066F316  C7 83 84 00 00 00 FF FF FF FF  MOV dword ptr [EBX + 0x84],0xffffffff
0066F320  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
0066F325  6A 79                     PUSH 0x79
0066F327  68 24 2A 7D 00            PUSH 0x7d2a24
0066F32C  50                        PUSH EAX
0066F32D  6A 88                     PUSH -0x78
0066F32F  E8 0C 6B 03 00            CALL 0x006a5e40
LAB_0066f334:
0066F334  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0066F337  8D 4D B4                  LEA ECX,[EBP + -0x4c]
0066F33A  51                        PUSH ECX
0066F33B  6A 00                     PUSH 0x0
0066F33D  52                        PUSH EDX
0066F33E  8B CB                     MOV ECX,EBX
0066F340  C7 45 F4 00 00 00 00      MOV dword ptr [EBP + -0xc],0x0
0066F347  E8 6C 23 D9 FF            CALL 0x004016b8
0066F34C  83 F8 01                  CMP EAX,0x1
0066F34F  75 2C                     JNZ 0x0066f37d
0066F351  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0066F354  8B 4D B4                  MOV ECX,dword ptr [EBP + -0x4c]
0066F357  50                        PUSH EAX
0066F358  51                        PUSH ECX
0066F359  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0066F35F  E8 BB 2A D9 FF            CALL 0x00401e1f
0066F364  8B F0                     MOV ESI,EAX
0066F366  6A 04                     PUSH 0x4
0066F368  F7 DE                     NEG ESI
0066F36A  1B F6                     SBB ESI,ESI
0066F36C  F7 DE                     NEG ESI
0066F36E  E8 9D B8 03 00            CALL 0x006aac10
0066F373  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
0066F376  89 30                     MOV dword ptr [EAX],ESI
0066F378  E9 B4 10 00 00            JMP 0x00670431
LAB_0066f37d:
0066F37D  8D 14 BE                  LEA EDX,[ESI + EDI*0x4]
0066F380  0F BF 44 17 01            MOVSX EAX,word ptr [EDI + EDX*0x1 + 0x1]
0066F385  50                        PUSH EAX
0066F386  E8 50 64 D9 FF            CALL 0x004057db
0066F38B  85 C0                     TEST EAX,EAX
0066F38D  74 0F                     JZ 0x0066f39e
0066F38F  6A 7F                     PUSH 0x7f
0066F391  8D 4B 04                  LEA ECX,[EBX + 0x4]
0066F394  50                        PUSH EAX
0066F395  51                        PUSH ECX
0066F396  E8 A5 EF 0B 00            CALL 0x0072e340
0066F39B  83 C4 0C                  ADD ESP,0xc
LAB_0066f39e:
0066F39E  C7 83 84 00 00 00 FF FF FF FF  MOV dword ptr [EBX + 0x84],0xffffffff
0066F3A8  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
0066F3AE  6A 79                     PUSH 0x79
0066F3B0  68 24 2A 7D 00            PUSH 0x7d2a24
0066F3B5  52                        PUSH EDX
0066F3B6  6A 88                     PUSH -0x78
0066F3B8  E8 83 6A 03 00            CALL 0x006a5e40
0066F3BD  8B 75 F4                  MOV ESI,dword ptr [EBP + -0xc]
0066F3C0  6A 04                     PUSH 0x4
0066F3C2  E8 49 B8 03 00            CALL 0x006aac10
0066F3C7  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
0066F3CA  89 30                     MOV dword ptr [EAX],ESI
0066F3CC  E9 60 10 00 00            JMP 0x00670431
switchD_0066d45d::caseD_818:
0066F3D1  33 C0                     XOR EAX,EAX
0066F3D3  3B F8                     CMP EDI,EAX
0066F3D5  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0066F3D8  7E 65                     JLE 0x0066f43f
0066F3DA  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
LAB_0066f3dd:
0066F3DD  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0066F3E0  8A 04 30                  MOV AL,byte ptr [EAX + ESI*0x1]
0066F3E3  3C 04                     CMP AL,0x4
0066F3E5  74 44                     JZ 0x0066f42b
0066F3E7  3C 01                     CMP AL,0x1
0066F3E9  74 40                     JZ 0x0066f42b
0066F3EB  8D 0C BE                  LEA ECX,[ESI + EDI*0x4]
0066F3EE  0F BF 54 0F 01            MOVSX EDX,word ptr [EDI + ECX*0x1 + 0x1]
0066F3F3  52                        PUSH EDX
0066F3F4  E8 E2 63 D9 FF            CALL 0x004057db
0066F3F9  85 C0                     TEST EAX,EAX
0066F3FB  74 0F                     JZ 0x0066f40c
0066F3FD  6A 7F                     PUSH 0x7f
0066F3FF  50                        PUSH EAX
0066F400  8D 43 04                  LEA EAX,[EBX + 0x4]
0066F403  50                        PUSH EAX
0066F404  E8 37 EF 0B 00            CALL 0x0072e340
0066F409  83 C4 0C                  ADD ESP,0xc
LAB_0066f40c:
0066F40C  C7 83 84 00 00 00 FF FF FF FF  MOV dword ptr [EBX + 0x84],0xffffffff
0066F416  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
0066F41C  6A 79                     PUSH 0x79
0066F41E  68 24 2A 7D 00            PUSH 0x7d2a24
0066F423  51                        PUSH ECX
0066F424  6A 88                     PUSH -0x78
0066F426  E8 15 6A 03 00            CALL 0x006a5e40
LAB_0066f42b:
0066F42B  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0066F42E  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0066F431  40                        INC EAX
0066F432  83 C2 05                  ADD EDX,0x5
0066F435  3B C7                     CMP EAX,EDI
0066F437  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0066F43A  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
0066F43D  7C 9E                     JL 0x0066f3dd
LAB_0066f43f:
0066F43F  8B 13                     MOV EDX,dword ptr [EBX]
0066F441  56                        PUSH ESI
0066F442  8B CB                     MOV ECX,EBX
0066F444  FF 12                     CALL dword ptr [EDX]
0066F446  85 C0                     TEST EAX,EAX
0066F448  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0066F44B  7C 07                     JL 0x0066f454
0066F44D  3D 9B 00 00 00            CMP EAX,0x9b
0066F452  7C 3F                     JL 0x0066f493
LAB_0066f454:
0066F454  8D 04 BE                  LEA EAX,[ESI + EDI*0x4]
0066F457  0F BF 4C 07 01            MOVSX ECX,word ptr [EDI + EAX*0x1 + 0x1]
0066F45C  51                        PUSH ECX
0066F45D  E8 79 63 D9 FF            CALL 0x004057db
0066F462  85 C0                     TEST EAX,EAX
0066F464  74 0F                     JZ 0x0066f475
0066F466  6A 7F                     PUSH 0x7f
0066F468  8D 53 04                  LEA EDX,[EBX + 0x4]
0066F46B  50                        PUSH EAX
0066F46C  52                        PUSH EDX
0066F46D  E8 CE EE 0B 00            CALL 0x0072e340
0066F472  83 C4 0C                  ADD ESP,0xc
LAB_0066f475:
0066F475  C7 83 84 00 00 00 FF FF FF FF  MOV dword ptr [EBX + 0x84],0xffffffff
0066F47F  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
0066F484  6A 79                     PUSH 0x79
0066F486  68 24 2A 7D 00            PUSH 0x7d2a24
0066F48B  50                        PUSH EAX
0066F48C  6A 88                     PUSH -0x78
0066F48E  E8 AD 69 03 00            CALL 0x006a5e40
LAB_0066f493:
0066F493  6A 04                     PUSH 0x4
0066F495  E8 76 B7 03 00            CALL 0x006aac10
0066F49A  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0066F49D  33 C9                     XOR ECX,ECX
0066F49F  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
0066F4A2  8A 8A D8 8F 79 00         MOV CL,byte ptr [EDX + 0x798fd8]
0066F4A8  89 08                     MOV dword ptr [EAX],ECX
0066F4AA  E9 82 0F 00 00            JMP 0x00670431
switchD_0066d45d::caseD_81d:
0066F4AF  33 C0                     XOR EAX,EAX
0066F4B1  3B F8                     CMP EDI,EAX
0066F4B3  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0066F4B6  7E 65                     JLE 0x0066f51d
0066F4B8  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
LAB_0066f4bb:
0066F4BB  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0066F4BE  8A 04 30                  MOV AL,byte ptr [EAX + ESI*0x1]
0066F4C1  3C 04                     CMP AL,0x4
0066F4C3  74 44                     JZ 0x0066f509
0066F4C5  3C 01                     CMP AL,0x1
0066F4C7  74 40                     JZ 0x0066f509
0066F4C9  8D 0C BE                  LEA ECX,[ESI + EDI*0x4]
0066F4CC  0F BF 54 0F 01            MOVSX EDX,word ptr [EDI + ECX*0x1 + 0x1]
0066F4D1  52                        PUSH EDX
0066F4D2  E8 04 63 D9 FF            CALL 0x004057db
0066F4D7  85 C0                     TEST EAX,EAX
0066F4D9  74 0F                     JZ 0x0066f4ea
0066F4DB  6A 7F                     PUSH 0x7f
0066F4DD  50                        PUSH EAX
0066F4DE  8D 43 04                  LEA EAX,[EBX + 0x4]
0066F4E1  50                        PUSH EAX
0066F4E2  E8 59 EE 0B 00            CALL 0x0072e340
0066F4E7  83 C4 0C                  ADD ESP,0xc
LAB_0066f4ea:
0066F4EA  C7 83 84 00 00 00 FF FF FF FF  MOV dword ptr [EBX + 0x84],0xffffffff
0066F4F4  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
0066F4FA  6A 79                     PUSH 0x79
0066F4FC  68 24 2A 7D 00            PUSH 0x7d2a24
0066F501  51                        PUSH ECX
0066F502  6A 88                     PUSH -0x78
0066F504  E8 37 69 03 00            CALL 0x006a5e40
LAB_0066f509:
0066F509  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0066F50C  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0066F50F  40                        INC EAX
0066F510  83 C2 05                  ADD EDX,0x5
0066F513  3B C7                     CMP EAX,EDI
0066F515  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0066F518  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
0066F51B  7C 9E                     JL 0x0066f4bb
LAB_0066f51d:
0066F51D  8B 13                     MOV EDX,dword ptr [EBX]
0066F51F  56                        PUSH ESI
0066F520  8B CB                     MOV ECX,EBX
0066F522  FF 12                     CALL dword ptr [EDX]
0066F524  8D 4E 05                  LEA ECX,[ESI + 0x5]
0066F527  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0066F52A  8B 03                     MOV EAX,dword ptr [EBX]
0066F52C  51                        PUSH ECX
0066F52D  8B CB                     MOV ECX,EBX
0066F52F  FF 10                     CALL dword ptr [EAX]
0066F531  48                        DEC EAX
0066F532  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0066F535  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0066F538  85 C0                     TEST EAX,EAX
0066F53A  7C 07                     JL 0x0066f543
0066F53C  3D 9B 00 00 00            CMP EAX,0x9b
0066F541  7C 40                     JL 0x0066f583
LAB_0066f543:
0066F543  8D 14 BE                  LEA EDX,[ESI + EDI*0x4]
0066F546  0F BF 44 17 01            MOVSX EAX,word ptr [EDI + EDX*0x1 + 0x1]
0066F54B  50                        PUSH EAX
0066F54C  E8 8A 62 D9 FF            CALL 0x004057db
0066F551  85 C0                     TEST EAX,EAX
0066F553  74 0F                     JZ 0x0066f564
0066F555  6A 7F                     PUSH 0x7f
0066F557  8D 4B 04                  LEA ECX,[EBX + 0x4]
0066F55A  50                        PUSH EAX
0066F55B  51                        PUSH ECX
0066F55C  E8 DF ED 0B 00            CALL 0x0072e340
0066F561  83 C4 0C                  ADD ESP,0xc
LAB_0066f564:
0066F564  C7 83 84 00 00 00 FF FF FF FF  MOV dword ptr [EBX + 0x84],0xffffffff
0066F56E  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
0066F574  6A 79                     PUSH 0x79
0066F576  68 24 2A 7D 00            PUSH 0x7d2a24
0066F57B  52                        PUSH EDX
0066F57C  6A 88                     PUSH -0x78
0066F57E  E8 BD 68 03 00            CALL 0x006a5e40
LAB_0066f583:
0066F583  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0066F586  85 C0                     TEST EAX,EAX
0066F588  7C 06                     JL 0x0066f590
0066F58A  83 7D F8 04               CMP dword ptr [EBP + -0x8],0x4
0066F58E  7C 3F                     JL 0x0066f5cf
LAB_0066f590:
0066F590  8D 04 BE                  LEA EAX,[ESI + EDI*0x4]
0066F593  0F BF 4C 07 01            MOVSX ECX,word ptr [EDI + EAX*0x1 + 0x1]
0066F598  51                        PUSH ECX
0066F599  E8 3D 62 D9 FF            CALL 0x004057db
0066F59E  85 C0                     TEST EAX,EAX
0066F5A0  74 0F                     JZ 0x0066f5b1
0066F5A2  6A 7F                     PUSH 0x7f
0066F5A4  8D 53 04                  LEA EDX,[EBX + 0x4]
0066F5A7  50                        PUSH EAX
0066F5A8  52                        PUSH EDX
0066F5A9  E8 92 ED 0B 00            CALL 0x0072e340
0066F5AE  83 C4 0C                  ADD ESP,0xc
LAB_0066f5b1:
0066F5B1  C7 83 84 00 00 00 FF FF FF FF  MOV dword ptr [EBX + 0x84],0xffffffff
0066F5BB  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
0066F5C0  6A 79                     PUSH 0x79
0066F5C2  68 24 2A 7D 00            PUSH 0x7d2a24
0066F5C7  50                        PUSH EAX
0066F5C8  6A 88                     PUSH -0x78
0066F5CA  E8 71 68 03 00            CALL 0x006a5e40
LAB_0066f5cf:
0066F5CF  6A 04                     PUSH 0x4
0066F5D1  E8 3A B6 03 00            CALL 0x006aac10
0066F5D6  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0066F5D9  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
0066F5DC  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
0066F5DF  8D 0C 91                  LEA ECX,[ECX + EDX*0x4]
0066F5E2  8B 14 8D 1C 48 7E 00      MOV EDX,dword ptr [ECX*0x4 + 0x7e481c]
0066F5E9  89 10                     MOV dword ptr [EAX],EDX
0066F5EB  E9 41 0E 00 00            JMP 0x00670431
switchD_0066d45d::caseD_82a:
0066F5F0  8A 0E                     MOV CL,byte ptr [ESI]
0066F5F2  80 F9 04                  CMP CL,0x4
0066F5F5  74 3D                     JZ 0x0066f634
0066F5F7  80 F9 01                  CMP CL,0x1
0066F5FA  74 38                     JZ 0x0066f634
0066F5FC  50                        PUSH EAX
0066F5FD  E8 D9 61 D9 FF            CALL 0x004057db
0066F602  85 C0                     TEST EAX,EAX
0066F604  74 0F                     JZ 0x0066f615
0066F606  6A 7F                     PUSH 0x7f
0066F608  50                        PUSH EAX
0066F609  8D 43 04                  LEA EAX,[EBX + 0x4]
0066F60C  50                        PUSH EAX
0066F60D  E8 2E ED 0B 00            CALL 0x0072e340
0066F612  83 C4 0C                  ADD ESP,0xc
LAB_0066f615:
0066F615  C7 83 84 00 00 00 FF FF FF FF  MOV dword ptr [EBX + 0x84],0xffffffff
0066F61F  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
0066F625  6A 79                     PUSH 0x79
0066F627  68 24 2A 7D 00            PUSH 0x7d2a24
0066F62C  51                        PUSH ECX
0066F62D  6A 88                     PUSH -0x78
0066F62F  E8 0C 68 03 00            CALL 0x006a5e40
LAB_0066f634:
0066F634  83 FF 01                  CMP EDI,0x1
0066F637  C7 45 F8 01 00 00 00      MOV dword ptr [EBP + -0x8],0x1
0066F63E  7E 68                     JLE 0x0066f6a8
0066F640  C7 45 FC 05 00 00 00      MOV dword ptr [EBP + -0x4],0x5
LAB_0066f647:
0066F647  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0066F64A  8A 04 32                  MOV AL,byte ptr [EDX + ESI*0x1]
0066F64D  3C 06                     CMP AL,0x6
0066F64F  74 43                     JZ 0x0066f694
0066F651  3C 03                     CMP AL,0x3
0066F653  74 3F                     JZ 0x0066f694
0066F655  8D 04 BE                  LEA EAX,[ESI + EDI*0x4]
0066F658  0F BF 4C 07 01            MOVSX ECX,word ptr [EDI + EAX*0x1 + 0x1]
0066F65D  51                        PUSH ECX
0066F65E  E8 78 61 D9 FF            CALL 0x004057db
0066F663  85 C0                     TEST EAX,EAX
0066F665  74 0F                     JZ 0x0066f676
0066F667  6A 7F                     PUSH 0x7f
0066F669  8D 53 04                  LEA EDX,[EBX + 0x4]
0066F66C  50                        PUSH EAX
0066F66D  52                        PUSH EDX
0066F66E  E8 CD EC 0B 00            CALL 0x0072e340
0066F673  83 C4 0C                  ADD ESP,0xc
LAB_0066f676:
0066F676  C7 83 84 00 00 00 FF FF FF FF  MOV dword ptr [EBX + 0x84],0xffffffff
0066F680  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
0066F685  6A 79                     PUSH 0x79
0066F687  68 24 2A 7D 00            PUSH 0x7d2a24
0066F68C  50                        PUSH EAX
0066F68D  6A 88                     PUSH -0x78
0066F68F  E8 AC 67 03 00            CALL 0x006a5e40
LAB_0066f694:
0066F694  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0066F697  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0066F69A  40                        INC EAX
0066F69B  83 C2 05                  ADD EDX,0x5
0066F69E  3B C7                     CMP EAX,EDI
0066F6A0  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0066F6A3  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
0066F6A6  7C 9F                     JL 0x0066f647
LAB_0066f6a8:
0066F6A8  8B 13                     MOV EDX,dword ptr [EBX]
0066F6AA  56                        PUSH ESI
0066F6AB  8B CB                     MOV ECX,EBX
0066F6AD  FF 12                     CALL dword ptr [EDX]
0066F6AF  83 F8 09                  CMP EAX,0x9
0066F6B2  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0066F6B5  75 0C                     JNZ 0x0066f6c3
0066F6B7  8B 03                     MOV EAX,dword ptr [EBX]
0066F6B9  8B CB                     MOV ECX,EBX
0066F6BB  FF 50 18                  CALL dword ptr [EAX + 0x18]
0066F6BE  83 F8 08                  CMP EAX,0x8
0066F6C1  74 09                     JZ 0x0066f6cc
LAB_0066f6c3:
0066F6C3  81 7D FC FF 00 00 00      CMP dword ptr [EBP + -0x4],0xff
0066F6CA  75 40                     JNZ 0x0066f70c
LAB_0066f6cc:
0066F6CC  8D 0C BE                  LEA ECX,[ESI + EDI*0x4]
0066F6CF  0F BF 54 0F 01            MOVSX EDX,word ptr [EDI + ECX*0x1 + 0x1]
0066F6D4  52                        PUSH EDX
0066F6D5  E8 01 61 D9 FF            CALL 0x004057db
0066F6DA  85 C0                     TEST EAX,EAX
0066F6DC  74 0F                     JZ 0x0066f6ed
0066F6DE  6A 7F                     PUSH 0x7f
0066F6E0  50                        PUSH EAX
0066F6E1  8D 43 04                  LEA EAX,[EBX + 0x4]
0066F6E4  50                        PUSH EAX
0066F6E5  E8 56 EC 0B 00            CALL 0x0072e340
0066F6EA  83 C4 0C                  ADD ESP,0xc
LAB_0066f6ed:
0066F6ED  C7 83 84 00 00 00 FF FF FF FF  MOV dword ptr [EBX + 0x84],0xffffffff
0066F6F7  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
0066F6FD  6A 79                     PUSH 0x79
0066F6FF  68 24 2A 7D 00            PUSH 0x7d2a24
0066F704  51                        PUSH ECX
0066F705  6A 88                     PUSH -0x78
0066F707  E8 34 67 03 00            CALL 0x006a5e40
LAB_0066f70c:
0066F70C  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0066F70F  8D 55 B4                  LEA EDX,[EBP + -0x4c]
0066F712  52                        PUSH EDX
0066F713  6A 00                     PUSH 0x0
0066F715  50                        PUSH EAX
0066F716  8B CB                     MOV ECX,EBX
0066F718  E8 9B 1F D9 FF            CALL 0x004016b8
0066F71D  83 F8 01                  CMP EAX,0x1
0066F720  74 40                     JZ 0x0066f762
0066F722  8D 0C BE                  LEA ECX,[ESI + EDI*0x4]
0066F725  0F BF 54 0F 01            MOVSX EDX,word ptr [EDI + ECX*0x1 + 0x1]
0066F72A  52                        PUSH EDX
0066F72B  E8 AB 60 D9 FF            CALL 0x004057db
0066F730  85 C0                     TEST EAX,EAX
0066F732  74 0F                     JZ 0x0066f743
0066F734  6A 7F                     PUSH 0x7f
0066F736  50                        PUSH EAX
0066F737  8D 43 04                  LEA EAX,[EBX + 0x4]
0066F73A  50                        PUSH EAX
0066F73B  E8 00 EC 0B 00            CALL 0x0072e340
0066F740  83 C4 0C                  ADD ESP,0xc
LAB_0066f743:
0066F743  C7 83 84 00 00 00 FF FF FF FF  MOV dword ptr [EBX + 0x84],0xffffffff
0066F74D  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
0066F753  6A 79                     PUSH 0x79
0066F755  68 24 2A 7D 00            PUSH 0x7d2a24
0066F75A  51                        PUSH ECX
0066F75B  6A 88                     PUSH -0x78
0066F75D  E8 DE 66 03 00            CALL 0x006a5e40
LAB_0066f762:
0066F762  8B 13                     MOV EDX,dword ptr [EBX]
0066F764  8D 46 0A                  LEA EAX,[ESI + 0xa]
0066F767  50                        PUSH EAX
0066F768  8B CB                     MOV ECX,EBX
0066F76A  FF 52 08                  CALL dword ptr [EDX + 0x8]
0066F76D  8B 13                     MOV EDX,dword ptr [EBX]
0066F76F  83 C6 05                  ADD ESI,0x5
0066F772  50                        PUSH EAX
0066F773  56                        PUSH ESI
0066F774  8B CB                     MOV ECX,EBX
0066F776  FF 52 08                  CALL dword ptr [EDX + 0x8]
0066F779  50                        PUSH EAX
0066F77A  8B 45 B4                  MOV EAX,dword ptr [EBP + -0x4c]
0066F77D  50                        PUSH EAX
0066F77E  8B CB                     MOV ECX,EBX
0066F780  E8 74 60 D9 FF            CALL 0x004057f9
0066F785  6A 04                     PUSH 0x4
0066F787  8B F0                     MOV ESI,EAX
0066F789  E8 82 B4 03 00            CALL 0x006aac10
0066F78E  85 F6                     TEST ESI,ESI
0066F790  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
0066F793  74 0D                     JZ 0x0066f7a2
0066F795  33 C9                     XOR ECX,ECX
0066F797  66 8B 4E 7D               MOV CX,word ptr [ESI + 0x7d]
0066F79B  89 08                     MOV dword ptr [EAX],ECX
0066F79D  E9 8F 0C 00 00            JMP 0x00670431
LAB_0066f7a2:
0066F7A2  83 C9 FF                  OR ECX,0xffffffff
0066F7A5  89 08                     MOV dword ptr [EAX],ECX
0066F7A7  E9 85 0C 00 00            JMP 0x00670431
switchD_0066d45d::caseD_82b:
0066F7AC  33 C9                     XOR ECX,ECX
0066F7AE  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
LAB_0066f7b1:
0066F7B1  8A 04 31                  MOV AL,byte ptr [ECX + ESI*0x1]
0066F7B4  3C 04                     CMP AL,0x4
0066F7B6  74 47                     JZ 0x0066f7ff
0066F7B8  3C 01                     CMP AL,0x1
0066F7BA  74 43                     JZ 0x0066f7ff
0066F7BC  8D 0C BE                  LEA ECX,[ESI + EDI*0x4]
0066F7BF  0F BF 54 0F 01            MOVSX EDX,word ptr [EDI + ECX*0x1 + 0x1]
0066F7C4  52                        PUSH EDX
0066F7C5  E8 11 60 D9 FF            CALL 0x004057db
0066F7CA  85 C0                     TEST EAX,EAX
0066F7CC  74 0F                     JZ 0x0066f7dd
0066F7CE  6A 7F                     PUSH 0x7f
0066F7D0  50                        PUSH EAX
0066F7D1  8D 43 04                  LEA EAX,[EBX + 0x4]
0066F7D4  50                        PUSH EAX
0066F7D5  E8 66 EB 0B 00            CALL 0x0072e340
0066F7DA  83 C4 0C                  ADD ESP,0xc
LAB_0066f7dd:
0066F7DD  C7 83 84 00 00 00 FF FF FF FF  MOV dword ptr [EBX + 0x84],0xffffffff
0066F7E7  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
0066F7ED  6A 79                     PUSH 0x79
0066F7EF  68 24 2A 7D 00            PUSH 0x7d2a24
0066F7F4  51                        PUSH ECX
0066F7F5  6A 88                     PUSH -0x78
0066F7F7  E8 44 66 03 00            CALL 0x006a5e40
0066F7FC  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
LAB_0066f7ff:
0066F7FF  83 C1 05                  ADD ECX,0x5
0066F802  83 F9 14                  CMP ECX,0x14
0066F805  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0066F808  7C A7                     JL 0x0066f7b1
0066F80A  8B 13                     MOV EDX,dword ptr [EBX]
0066F80C  56                        PUSH ESI
0066F80D  8B CB                     MOV ECX,EBX
0066F80F  FF 12                     CALL dword ptr [EDX]
0066F811  83 F8 09                  CMP EAX,0x9
0066F814  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0066F817  75 0C                     JNZ 0x0066f825
0066F819  8B 03                     MOV EAX,dword ptr [EBX]
0066F81B  8B CB                     MOV ECX,EBX
0066F81D  FF 50 18                  CALL dword ptr [EAX + 0x18]
0066F820  83 F8 08                  CMP EAX,0x8
0066F823  74 09                     JZ 0x0066f82e
LAB_0066f825:
0066F825  81 7D FC FF 00 00 00      CMP dword ptr [EBP + -0x4],0xff
0066F82C  75 40                     JNZ 0x0066f86e
LAB_0066f82e:
0066F82E  8D 0C BE                  LEA ECX,[ESI + EDI*0x4]
0066F831  0F BF 54 0F 01            MOVSX EDX,word ptr [EDI + ECX*0x1 + 0x1]
0066F836  52                        PUSH EDX
0066F837  E8 9F 5F D9 FF            CALL 0x004057db
0066F83C  85 C0                     TEST EAX,EAX
0066F83E  74 0F                     JZ 0x0066f84f
0066F840  6A 7F                     PUSH 0x7f
0066F842  50                        PUSH EAX
0066F843  8D 43 04                  LEA EAX,[EBX + 0x4]
0066F846  50                        PUSH EAX
0066F847  E8 F4 EA 0B 00            CALL 0x0072e340
0066F84C  83 C4 0C                  ADD ESP,0xc
LAB_0066f84f:
0066F84F  C7 83 84 00 00 00 FF FF FF FF  MOV dword ptr [EBX + 0x84],0xffffffff
0066F859  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
0066F85F  6A 79                     PUSH 0x79
0066F861  68 24 2A 7D 00            PUSH 0x7d2a24
0066F866  51                        PUSH ECX
0066F867  6A 88                     PUSH -0x78
0066F869  E8 D2 65 03 00            CALL 0x006a5e40
LAB_0066f86e:
0066F86E  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0066F871  8D 55 B4                  LEA EDX,[EBP + -0x4c]
0066F874  52                        PUSH EDX
0066F875  6A 00                     PUSH 0x0
0066F877  50                        PUSH EAX
0066F878  8B CB                     MOV ECX,EBX
0066F87A  E8 39 1E D9 FF            CALL 0x004016b8
0066F87F  83 F8 01                  CMP EAX,0x1
0066F882  74 40                     JZ 0x0066f8c4
0066F884  8D 0C BE                  LEA ECX,[ESI + EDI*0x4]
0066F887  0F BF 54 0F 01            MOVSX EDX,word ptr [EDI + ECX*0x1 + 0x1]
0066F88C  52                        PUSH EDX
0066F88D  E8 49 5F D9 FF            CALL 0x004057db
0066F892  85 C0                     TEST EAX,EAX
0066F894  74 0F                     JZ 0x0066f8a5
0066F896  6A 7F                     PUSH 0x7f
0066F898  50                        PUSH EAX
0066F899  8D 43 04                  LEA EAX,[EBX + 0x4]
0066F89C  50                        PUSH EAX
0066F89D  E8 9E EA 0B 00            CALL 0x0072e340
0066F8A2  83 C4 0C                  ADD ESP,0xc
LAB_0066f8a5:
0066F8A5  C7 83 84 00 00 00 FF FF FF FF  MOV dword ptr [EBX + 0x84],0xffffffff
0066F8AF  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
0066F8B5  6A 79                     PUSH 0x79
0066F8B7  68 24 2A 7D 00            PUSH 0x7d2a24
0066F8BC  51                        PUSH ECX
0066F8BD  6A 88                     PUSH -0x78
0066F8BF  E8 7C 65 03 00            CALL 0x006a5e40
LAB_0066f8c4:
0066F8C4  8B 13                     MOV EDX,dword ptr [EBX]
0066F8C6  8D 46 05                  LEA EAX,[ESI + 0x5]
0066F8C9  50                        PUSH EAX
0066F8CA  8B CB                     MOV ECX,EBX
0066F8CC  C7 45 F8 FF FF FF FF      MOV dword ptr [EBP + -0x8],0xffffffff
0066F8D3  FF 12                     CALL dword ptr [EDX]
0066F8D5  8B 4D B4                  MOV ECX,dword ptr [EBP + -0x4c]
0066F8D8  50                        PUSH EAX
0066F8D9  51                        PUSH ECX
0066F8DA  8B CB                     MOV ECX,EBX
0066F8DC  E8 B5 2B D9 FF            CALL 0x00402496
0066F8E1  8B F8                     MOV EDI,EAX
0066F8E3  85 FF                     TEST EDI,EDI
0066F8E5  74 20                     JZ 0x0066f907
0066F8E7  8B 13                     MOV EDX,dword ptr [EBX]
0066F8E9  8D 46 0F                  LEA EAX,[ESI + 0xf]
0066F8EC  50                        PUSH EAX
0066F8ED  8B CB                     MOV ECX,EBX
0066F8EF  FF 12                     CALL dword ptr [EDX]
0066F8F1  8B 13                     MOV EDX,dword ptr [EBX]
0066F8F3  83 C6 0A                  ADD ESI,0xa
0066F8F6  50                        PUSH EAX
0066F8F7  56                        PUSH ESI
0066F8F8  8B CB                     MOV ECX,EBX
0066F8FA  FF 12                     CALL dword ptr [EDX]
0066F8FC  50                        PUSH EAX
0066F8FD  8B CF                     MOV ECX,EDI
0066F8FF  E8 1C 51 D9 FF            CALL 0x00404a20
LAB_0066f904:
0066F904  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
LAB_0066f907:
0066F907  8B 7D F8                  MOV EDI,dword ptr [EBP + -0x8]
LAB_0066f90a:
0066F90A  85 FF                     TEST EDI,EDI
0066F90C  0F 8D 13 0B 00 00         JGE 0x00670425
0066F912  8B 75 B4                  MOV ESI,dword ptr [EBP + -0x4c]
0066F915  B8 A0 16 80 00            MOV EAX,0x8016a0
0066F91A  85 C0                     TEST EAX,EAX
0066F91C  0F 84 E5 0A 00 00         JZ 0x00670407
0066F922  E9 CD 0A 00 00            JMP 0x006703f4
switchD_0066d45d::caseD_82c:
0066F927  33 C9                     XOR ECX,ECX
0066F929  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
LAB_0066f92c:
0066F92C  8A 04 31                  MOV AL,byte ptr [ECX + ESI*0x1]
0066F92F  3C 04                     CMP AL,0x4
0066F931  74 46                     JZ 0x0066f979
0066F933  3C 01                     CMP AL,0x1
0066F935  74 42                     JZ 0x0066f979
0066F937  8D 04 BE                  LEA EAX,[ESI + EDI*0x4]
0066F93A  0F BF 4C 07 01            MOVSX ECX,word ptr [EDI + EAX*0x1 + 0x1]
0066F93F  51                        PUSH ECX
0066F940  E8 96 5E D9 FF            CALL 0x004057db
0066F945  85 C0                     TEST EAX,EAX
0066F947  74 0F                     JZ 0x0066f958
0066F949  6A 7F                     PUSH 0x7f
0066F94B  8D 53 04                  LEA EDX,[EBX + 0x4]
0066F94E  50                        PUSH EAX
0066F94F  52                        PUSH EDX
0066F950  E8 EB E9 0B 00            CALL 0x0072e340
0066F955  83 C4 0C                  ADD ESP,0xc
LAB_0066f958:
0066F958  C7 83 84 00 00 00 FF FF FF FF  MOV dword ptr [EBX + 0x84],0xffffffff
0066F962  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
0066F967  6A 79                     PUSH 0x79
0066F969  68 24 2A 7D 00            PUSH 0x7d2a24
0066F96E  50                        PUSH EAX
0066F96F  6A 88                     PUSH -0x78
0066F971  E8 CA 64 03 00            CALL 0x006a5e40
0066F976  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
LAB_0066f979:
0066F979  83 C1 05                  ADD ECX,0x5
0066F97C  83 F9 14                  CMP ECX,0x14
0066F97F  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0066F982  7C A8                     JL 0x0066f92c
0066F984  8B 13                     MOV EDX,dword ptr [EBX]
0066F986  56                        PUSH ESI
0066F987  8B CB                     MOV ECX,EBX
0066F989  FF 12                     CALL dword ptr [EDX]
0066F98B  83 F8 09                  CMP EAX,0x9
0066F98E  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0066F991  75 0C                     JNZ 0x0066f99f
0066F993  8B 03                     MOV EAX,dword ptr [EBX]
0066F995  8B CB                     MOV ECX,EBX
0066F997  FF 50 18                  CALL dword ptr [EAX + 0x18]
0066F99A  83 F8 08                  CMP EAX,0x8
0066F99D  74 09                     JZ 0x0066f9a8
LAB_0066f99f:
0066F99F  81 7D FC FF 00 00 00      CMP dword ptr [EBP + -0x4],0xff
0066F9A6  75 40                     JNZ 0x0066f9e8
LAB_0066f9a8:
0066F9A8  8D 0C BE                  LEA ECX,[ESI + EDI*0x4]
0066F9AB  0F BF 54 0F 01            MOVSX EDX,word ptr [EDI + ECX*0x1 + 0x1]
0066F9B0  52                        PUSH EDX
0066F9B1  E8 25 5E D9 FF            CALL 0x004057db
0066F9B6  85 C0                     TEST EAX,EAX
0066F9B8  74 0F                     JZ 0x0066f9c9
0066F9BA  6A 7F                     PUSH 0x7f
0066F9BC  50                        PUSH EAX
0066F9BD  8D 43 04                  LEA EAX,[EBX + 0x4]
0066F9C0  50                        PUSH EAX
0066F9C1  E8 7A E9 0B 00            CALL 0x0072e340
0066F9C6  83 C4 0C                  ADD ESP,0xc
LAB_0066f9c9:
0066F9C9  C7 83 84 00 00 00 FF FF FF FF  MOV dword ptr [EBX + 0x84],0xffffffff
0066F9D3  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
0066F9D9  6A 79                     PUSH 0x79
0066F9DB  68 24 2A 7D 00            PUSH 0x7d2a24
0066F9E0  51                        PUSH ECX
0066F9E1  6A 88                     PUSH -0x78
0066F9E3  E8 58 64 03 00            CALL 0x006a5e40
LAB_0066f9e8:
0066F9E8  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0066F9EB  8D 55 B4                  LEA EDX,[EBP + -0x4c]
0066F9EE  52                        PUSH EDX
0066F9EF  6A 00                     PUSH 0x0
0066F9F1  50                        PUSH EAX
0066F9F2  8B CB                     MOV ECX,EBX
0066F9F4  E8 BF 1C D9 FF            CALL 0x004016b8
0066F9F9  83 F8 01                  CMP EAX,0x1
0066F9FC  74 40                     JZ 0x0066fa3e
0066F9FE  8D 0C BE                  LEA ECX,[ESI + EDI*0x4]
0066FA01  0F BF 54 0F 01            MOVSX EDX,word ptr [EDI + ECX*0x1 + 0x1]
0066FA06  52                        PUSH EDX
0066FA07  E8 CF 5D D9 FF            CALL 0x004057db
0066FA0C  85 C0                     TEST EAX,EAX
0066FA0E  74 0F                     JZ 0x0066fa1f
0066FA10  6A 7F                     PUSH 0x7f
0066FA12  50                        PUSH EAX
0066FA13  8D 43 04                  LEA EAX,[EBX + 0x4]
0066FA16  50                        PUSH EAX
0066FA17  E8 24 E9 0B 00            CALL 0x0072e340
0066FA1C  83 C4 0C                  ADD ESP,0xc
LAB_0066fa1f:
0066FA1F  C7 83 84 00 00 00 FF FF FF FF  MOV dword ptr [EBX + 0x84],0xffffffff
0066FA29  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
0066FA2F  6A 79                     PUSH 0x79
0066FA31  68 24 2A 7D 00            PUSH 0x7d2a24
0066FA36  51                        PUSH ECX
0066FA37  6A 88                     PUSH -0x78
0066FA39  E8 02 64 03 00            CALL 0x006a5e40
LAB_0066fa3e:
0066FA3E  8B 13                     MOV EDX,dword ptr [EBX]
0066FA40  8D 46 05                  LEA EAX,[ESI + 0x5]
0066FA43  50                        PUSH EAX
0066FA44  8B CB                     MOV ECX,EBX
0066FA46  C7 45 F8 FF FF FF FF      MOV dword ptr [EBP + -0x8],0xffffffff
0066FA4D  FF 12                     CALL dword ptr [EDX]
0066FA4F  8B 4D B4                  MOV ECX,dword ptr [EBP + -0x4c]
0066FA52  50                        PUSH EAX
0066FA53  51                        PUSH ECX
0066FA54  8B CB                     MOV ECX,EBX
0066FA56  E8 3B 2A D9 FF            CALL 0x00402496
0066FA5B  8B F8                     MOV EDI,EAX
0066FA5D  85 FF                     TEST EDI,EDI
0066FA5F  0F 84 A2 FE FF FF         JZ 0x0066f907
0066FA65  8B 13                     MOV EDX,dword ptr [EBX]
0066FA67  8D 46 0F                  LEA EAX,[ESI + 0xf]
0066FA6A  50                        PUSH EAX
0066FA6B  8B CB                     MOV ECX,EBX
0066FA6D  FF 12                     CALL dword ptr [EDX]
0066FA6F  8B 13                     MOV EDX,dword ptr [EBX]
0066FA71  83 C6 0A                  ADD ESI,0xa
0066FA74  50                        PUSH EAX
0066FA75  56                        PUSH ESI
0066FA76  8B CB                     MOV ECX,EBX
0066FA78  FF 12                     CALL dword ptr [EDX]
0066FA7A  50                        PUSH EAX
0066FA7B  8B CF                     MOV ECX,EDI
0066FA7D  E8 3D 47 D9 FF            CALL 0x004041bf
0066FA82  E9 7D FE FF FF            JMP 0x0066f904
switchD_0066d45d::caseD_82d:
0066FA87  33 C9                     XOR ECX,ECX
0066FA89  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
LAB_0066fa8c:
0066FA8C  8A 04 31                  MOV AL,byte ptr [ECX + ESI*0x1]
0066FA8F  3C 04                     CMP AL,0x4
0066FA91  74 46                     JZ 0x0066fad9
0066FA93  3C 01                     CMP AL,0x1
0066FA95  74 42                     JZ 0x0066fad9
0066FA97  8D 04 BE                  LEA EAX,[ESI + EDI*0x4]
0066FA9A  0F BF 4C 07 01            MOVSX ECX,word ptr [EDI + EAX*0x1 + 0x1]
0066FA9F  51                        PUSH ECX
0066FAA0  E8 36 5D D9 FF            CALL 0x004057db
0066FAA5  85 C0                     TEST EAX,EAX
0066FAA7  74 0F                     JZ 0x0066fab8
0066FAA9  6A 7F                     PUSH 0x7f
0066FAAB  8D 53 04                  LEA EDX,[EBX + 0x4]
0066FAAE  50                        PUSH EAX
0066FAAF  52                        PUSH EDX
0066FAB0  E8 8B E8 0B 00            CALL 0x0072e340
0066FAB5  83 C4 0C                  ADD ESP,0xc
LAB_0066fab8:
0066FAB8  C7 83 84 00 00 00 FF FF FF FF  MOV dword ptr [EBX + 0x84],0xffffffff
0066FAC2  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
0066FAC7  6A 79                     PUSH 0x79
0066FAC9  68 24 2A 7D 00            PUSH 0x7d2a24
0066FACE  50                        PUSH EAX
0066FACF  6A 88                     PUSH -0x78
0066FAD1  E8 6A 63 03 00            CALL 0x006a5e40
0066FAD6  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
LAB_0066fad9:
0066FAD9  83 C1 05                  ADD ECX,0x5
0066FADC  83 F9 0A                  CMP ECX,0xa
0066FADF  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0066FAE2  7C A8                     JL 0x0066fa8c
0066FAE4  8B 13                     MOV EDX,dword ptr [EBX]
0066FAE6  56                        PUSH ESI
0066FAE7  8B CB                     MOV ECX,EBX
0066FAE9  FF 12                     CALL dword ptr [EDX]
0066FAEB  83 F8 09                  CMP EAX,0x9
0066FAEE  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0066FAF1  75 0C                     JNZ 0x0066faff
0066FAF3  8B 03                     MOV EAX,dword ptr [EBX]
0066FAF5  8B CB                     MOV ECX,EBX
0066FAF7  FF 50 18                  CALL dword ptr [EAX + 0x18]
0066FAFA  83 F8 08                  CMP EAX,0x8
0066FAFD  74 09                     JZ 0x0066fb08
LAB_0066faff:
0066FAFF  81 7D FC FF 00 00 00      CMP dword ptr [EBP + -0x4],0xff
0066FB06  75 40                     JNZ 0x0066fb48
LAB_0066fb08:
0066FB08  8D 0C BE                  LEA ECX,[ESI + EDI*0x4]
0066FB0B  0F BF 54 0F 01            MOVSX EDX,word ptr [EDI + ECX*0x1 + 0x1]
0066FB10  52                        PUSH EDX
0066FB11  E8 C5 5C D9 FF            CALL 0x004057db
0066FB16  85 C0                     TEST EAX,EAX
0066FB18  74 0F                     JZ 0x0066fb29
0066FB1A  6A 7F                     PUSH 0x7f
0066FB1C  50                        PUSH EAX
0066FB1D  8D 43 04                  LEA EAX,[EBX + 0x4]
0066FB20  50                        PUSH EAX
0066FB21  E8 1A E8 0B 00            CALL 0x0072e340
0066FB26  83 C4 0C                  ADD ESP,0xc
LAB_0066fb29:
0066FB29  C7 83 84 00 00 00 FF FF FF FF  MOV dword ptr [EBX + 0x84],0xffffffff
0066FB33  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
0066FB39  6A 79                     PUSH 0x79
0066FB3B  68 24 2A 7D 00            PUSH 0x7d2a24
0066FB40  51                        PUSH ECX
0066FB41  6A 88                     PUSH -0x78
0066FB43  E8 F8 62 03 00            CALL 0x006a5e40
LAB_0066fb48:
0066FB48  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0066FB4B  8D 55 B4                  LEA EDX,[EBP + -0x4c]
0066FB4E  52                        PUSH EDX
0066FB4F  6A 00                     PUSH 0x0
0066FB51  50                        PUSH EAX
0066FB52  8B CB                     MOV ECX,EBX
0066FB54  E8 5F 1B D9 FF            CALL 0x004016b8
0066FB59  83 F8 01                  CMP EAX,0x1
0066FB5C  74 40                     JZ 0x0066fb9e
0066FB5E  8D 0C BE                  LEA ECX,[ESI + EDI*0x4]
0066FB61  0F BF 54 0F 01            MOVSX EDX,word ptr [EDI + ECX*0x1 + 0x1]
0066FB66  52                        PUSH EDX
0066FB67  E8 6F 5C D9 FF            CALL 0x004057db
0066FB6C  85 C0                     TEST EAX,EAX
0066FB6E  74 0F                     JZ 0x0066fb7f
0066FB70  6A 7F                     PUSH 0x7f
0066FB72  50                        PUSH EAX
0066FB73  8D 43 04                  LEA EAX,[EBX + 0x4]
0066FB76  50                        PUSH EAX
0066FB77  E8 C4 E7 0B 00            CALL 0x0072e340
0066FB7C  83 C4 0C                  ADD ESP,0xc
LAB_0066fb7f:
0066FB7F  C7 83 84 00 00 00 FF FF FF FF  MOV dword ptr [EBX + 0x84],0xffffffff
0066FB89  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
0066FB8F  6A 79                     PUSH 0x79
0066FB91  68 24 2A 7D 00            PUSH 0x7d2a24
0066FB96  51                        PUSH ECX
0066FB97  6A 88                     PUSH -0x78
0066FB99  E8 A2 62 03 00            CALL 0x006a5e40
LAB_0066fb9e:
0066FB9E  8B 13                     MOV EDX,dword ptr [EBX]
0066FBA0  83 C6 05                  ADD ESI,0x5
0066FBA3  56                        PUSH ESI
0066FBA4  8B CB                     MOV ECX,EBX
0066FBA6  83 CF FF                  OR EDI,0xffffffff
0066FBA9  FF 12                     CALL dword ptr [EDX]
0066FBAB  50                        PUSH EAX
0066FBAC  8B 45 B4                  MOV EAX,dword ptr [EBP + -0x4c]
0066FBAF  50                        PUSH EAX
0066FBB0  8B CB                     MOV ECX,EBX
0066FBB2  E8 DF 28 D9 FF            CALL 0x00402496
0066FBB7  85 C0                     TEST EAX,EAX
0066FBB9  74 06                     JZ 0x0066fbc1
0066FBBB  8B B8 EB 00 00 00         MOV EDI,dword ptr [EAX + 0xeb]
LAB_0066fbc1:
0066FBC1  85 FF                     TEST EDI,EDI
0066FBC3  0F 8D 5C 08 00 00         JGE 0x00670425
0066FBC9  8B 75 B4                  MOV ESI,dword ptr [EBP + -0x4c]
0066FBCC  B9 A0 16 80 00            MOV ECX,0x8016a0
0066FBD1  85 C9                     TEST ECX,ECX
0066FBD3  74 0F                     JZ 0x0066fbe4
0066FBD5  6A 7F                     PUSH 0x7f
0066FBD7  8D 53 04                  LEA EDX,[EBX + 0x4]
0066FBDA  51                        PUSH ECX
0066FBDB  52                        PUSH EDX
0066FBDC  E8 5F E7 0B 00            CALL 0x0072e340
0066FBE1  83 C4 0C                  ADD ESP,0xc
LAB_0066fbe4:
0066FBE4  89 B3 84 00 00 00         MOV dword ptr [EBX + 0x84],ESI
0066FBEA  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
0066FBEF  6A 79                     PUSH 0x79
0066FBF1  68 24 2A 7D 00            PUSH 0x7d2a24
0066FBF6  50                        PUSH EAX
0066FBF7  E9 1F 08 00 00            JMP 0x0067041b
switchD_0066d45d::caseD_82e:
0066FBFC  33 C9                     XOR ECX,ECX
0066FBFE  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
LAB_0066fc01:
0066FC01  8A 04 31                  MOV AL,byte ptr [ECX + ESI*0x1]
0066FC04  3C 04                     CMP AL,0x4
0066FC06  74 47                     JZ 0x0066fc4f
0066FC08  3C 01                     CMP AL,0x1
0066FC0A  74 43                     JZ 0x0066fc4f
0066FC0C  8D 0C BE                  LEA ECX,[ESI + EDI*0x4]
0066FC0F  0F BF 54 0F 01            MOVSX EDX,word ptr [EDI + ECX*0x1 + 0x1]
0066FC14  52                        PUSH EDX
0066FC15  E8 C1 5B D9 FF            CALL 0x004057db
0066FC1A  85 C0                     TEST EAX,EAX
0066FC1C  74 0F                     JZ 0x0066fc2d
0066FC1E  6A 7F                     PUSH 0x7f
0066FC20  50                        PUSH EAX
0066FC21  8D 43 04                  LEA EAX,[EBX + 0x4]
0066FC24  50                        PUSH EAX
0066FC25  E8 16 E7 0B 00            CALL 0x0072e340
0066FC2A  83 C4 0C                  ADD ESP,0xc
LAB_0066fc2d:
0066FC2D  C7 83 84 00 00 00 FF FF FF FF  MOV dword ptr [EBX + 0x84],0xffffffff
0066FC37  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
0066FC3D  6A 79                     PUSH 0x79
0066FC3F  68 24 2A 7D 00            PUSH 0x7d2a24
0066FC44  51                        PUSH ECX
0066FC45  6A 88                     PUSH -0x78
0066FC47  E8 F4 61 03 00            CALL 0x006a5e40
0066FC4C  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
LAB_0066fc4f:
0066FC4F  83 C1 05                  ADD ECX,0x5
0066FC52  83 F9 19                  CMP ECX,0x19
0066FC55  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0066FC58  7C A7                     JL 0x0066fc01
0066FC5A  8A 46 19                  MOV AL,byte ptr [ESI + 0x19]
0066FC5D  3C 06                     CMP AL,0x6
0066FC5F  74 44                     JZ 0x0066fca5
0066FC61  3C 03                     CMP AL,0x3
0066FC63  74 40                     JZ 0x0066fca5
0066FC65  8D 14 BE                  LEA EDX,[ESI + EDI*0x4]
0066FC68  0F BF 44 17 01            MOVSX EAX,word ptr [EDI + EDX*0x1 + 0x1]
0066FC6D  50                        PUSH EAX
0066FC6E  E8 68 5B D9 FF            CALL 0x004057db
0066FC73  85 C0                     TEST EAX,EAX
0066FC75  74 0F                     JZ 0x0066fc86
0066FC77  6A 7F                     PUSH 0x7f
0066FC79  8D 4B 04                  LEA ECX,[EBX + 0x4]
0066FC7C  50                        PUSH EAX
0066FC7D  51                        PUSH ECX
0066FC7E  E8 BD E6 0B 00            CALL 0x0072e340
0066FC83  83 C4 0C                  ADD ESP,0xc
LAB_0066fc86:
0066FC86  C7 83 84 00 00 00 FF FF FF FF  MOV dword ptr [EBX + 0x84],0xffffffff
0066FC90  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
0066FC96  6A 79                     PUSH 0x79
0066FC98  68 24 2A 7D 00            PUSH 0x7d2a24
0066FC9D  52                        PUSH EDX
0066FC9E  6A 88                     PUSH -0x78
0066FCA0  E8 9B 61 03 00            CALL 0x006a5e40
LAB_0066fca5:
0066FCA5  83 FF 06                  CMP EDI,0x6
0066FCA8  C7 45 F8 06 00 00 00      MOV dword ptr [EBP + -0x8],0x6
0066FCAF  7E 69                     JLE 0x0066fd1a
0066FCB1  C7 45 FC 1E 00 00 00      MOV dword ptr [EBP + -0x4],0x1e
LAB_0066fcb8:
0066FCB8  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0066FCBB  8A 04 30                  MOV AL,byte ptr [EAX + ESI*0x1]
0066FCBE  3C 04                     CMP AL,0x4
0066FCC0  74 44                     JZ 0x0066fd06
0066FCC2  3C 01                     CMP AL,0x1
0066FCC4  74 40                     JZ 0x0066fd06
0066FCC6  8D 0C BE                  LEA ECX,[ESI + EDI*0x4]
0066FCC9  0F BF 54 0F 01            MOVSX EDX,word ptr [EDI + ECX*0x1 + 0x1]
0066FCCE  52                        PUSH EDX
0066FCCF  E8 07 5B D9 FF            CALL 0x004057db
0066FCD4  85 C0                     TEST EAX,EAX
0066FCD6  74 0F                     JZ 0x0066fce7
0066FCD8  6A 7F                     PUSH 0x7f
0066FCDA  50                        PUSH EAX
0066FCDB  8D 43 04                  LEA EAX,[EBX + 0x4]
0066FCDE  50                        PUSH EAX
0066FCDF  E8 5C E6 0B 00            CALL 0x0072e340
0066FCE4  83 C4 0C                  ADD ESP,0xc
LAB_0066fce7:
0066FCE7  C7 83 84 00 00 00 FF FF FF FF  MOV dword ptr [EBX + 0x84],0xffffffff
0066FCF1  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
0066FCF7  6A 79                     PUSH 0x79
0066FCF9  68 24 2A 7D 00            PUSH 0x7d2a24
0066FCFE  51                        PUSH ECX
0066FCFF  6A 88                     PUSH -0x78
0066FD01  E8 3A 61 03 00            CALL 0x006a5e40
LAB_0066fd06:
0066FD06  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0066FD09  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0066FD0C  40                        INC EAX
0066FD0D  83 C2 05                  ADD EDX,0x5
0066FD10  3B C7                     CMP EAX,EDI
0066FD12  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0066FD15  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
0066FD18  7C 9E                     JL 0x0066fcb8
LAB_0066fd1a:
0066FD1A  8B 13                     MOV EDX,dword ptr [EBX]
0066FD1C  56                        PUSH ESI
0066FD1D  8B CB                     MOV ECX,EBX
0066FD1F  FF 12                     CALL dword ptr [EDX]
0066FD21  83 F8 09                  CMP EAX,0x9
0066FD24  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0066FD27  75 0C                     JNZ 0x0066fd35
0066FD29  8B 03                     MOV EAX,dword ptr [EBX]
0066FD2B  8B CB                     MOV ECX,EBX
0066FD2D  FF 50 18                  CALL dword ptr [EAX + 0x18]
0066FD30  83 F8 08                  CMP EAX,0x8
0066FD33  74 09                     JZ 0x0066fd3e
LAB_0066fd35:
0066FD35  81 7D FC FF 00 00 00      CMP dword ptr [EBP + -0x4],0xff
0066FD3C  75 40                     JNZ 0x0066fd7e
LAB_0066fd3e:
0066FD3E  8D 0C BE                  LEA ECX,[ESI + EDI*0x4]
0066FD41  0F BF 54 0F 01            MOVSX EDX,word ptr [EDI + ECX*0x1 + 0x1]
0066FD46  52                        PUSH EDX
0066FD47  E8 8F 5A D9 FF            CALL 0x004057db
0066FD4C  85 C0                     TEST EAX,EAX
0066FD4E  74 0F                     JZ 0x0066fd5f
0066FD50  6A 7F                     PUSH 0x7f
0066FD52  50                        PUSH EAX
0066FD53  8D 43 04                  LEA EAX,[EBX + 0x4]
0066FD56  50                        PUSH EAX
0066FD57  E8 E4 E5 0B 00            CALL 0x0072e340
0066FD5C  83 C4 0C                  ADD ESP,0xc
LAB_0066fd5f:
0066FD5F  C7 83 84 00 00 00 FF FF FF FF  MOV dword ptr [EBX + 0x84],0xffffffff
0066FD69  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
0066FD6F  6A 79                     PUSH 0x79
0066FD71  68 24 2A 7D 00            PUSH 0x7d2a24
0066FD76  51                        PUSH ECX
0066FD77  6A 88                     PUSH -0x78
0066FD79  E8 C2 60 03 00            CALL 0x006a5e40
LAB_0066fd7e:
0066FD7E  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0066FD81  8D 55 B4                  LEA EDX,[EBP + -0x4c]
0066FD84  52                        PUSH EDX
0066FD85  6A 00                     PUSH 0x0
0066FD87  50                        PUSH EAX
0066FD88  8B CB                     MOV ECX,EBX
0066FD8A  E8 29 19 D9 FF            CALL 0x004016b8
0066FD8F  83 F8 01                  CMP EAX,0x1
0066FD92  74 40                     JZ 0x0066fdd4
0066FD94  8D 0C BE                  LEA ECX,[ESI + EDI*0x4]
0066FD97  0F BF 54 0F 01            MOVSX EDX,word ptr [EDI + ECX*0x1 + 0x1]
0066FD9C  52                        PUSH EDX
0066FD9D  E8 39 5A D9 FF            CALL 0x004057db
0066FDA2  85 C0                     TEST EAX,EAX
0066FDA4  74 0F                     JZ 0x0066fdb5
0066FDA6  6A 7F                     PUSH 0x7f
0066FDA8  50                        PUSH EAX
0066FDA9  8D 43 04                  LEA EAX,[EBX + 0x4]
0066FDAC  50                        PUSH EAX
0066FDAD  E8 8E E5 0B 00            CALL 0x0072e340
0066FDB2  83 C4 0C                  ADD ESP,0xc
LAB_0066fdb5:
0066FDB5  C7 83 84 00 00 00 FF FF FF FF  MOV dword ptr [EBX + 0x84],0xffffffff
0066FDBF  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
0066FDC5  6A 79                     PUSH 0x79
0066FDC7  68 24 2A 7D 00            PUSH 0x7d2a24
0066FDCC  51                        PUSH ECX
0066FDCD  6A 88                     PUSH -0x78
0066FDCF  E8 6C 60 03 00            CALL 0x006a5e40
LAB_0066fdd4:
0066FDD4  8B 13                     MOV EDX,dword ptr [EBX]
0066FDD6  8D 46 05                  LEA EAX,[ESI + 0x5]
0066FDD9  50                        PUSH EAX
0066FDDA  8B CB                     MOV ECX,EBX
0066FDDC  C7 45 F8 FF FF FF FF      MOV dword ptr [EBP + -0x8],0xffffffff
0066FDE3  FF 12                     CALL dword ptr [EDX]
0066FDE5  8B 4D B4                  MOV ECX,dword ptr [EBP + -0x4c]
0066FDE8  50                        PUSH EAX
0066FDE9  51                        PUSH ECX
0066FDEA  8B CB                     MOV ECX,EBX
0066FDEC  E8 A5 26 D9 FF            CALL 0x00402496
0066FDF1  8B F8                     MOV EDI,EAX
0066FDF3  85 FF                     TEST EDI,EDI
0066FDF5  0F 84 0C FB FF FF         JZ 0x0066f907
0066FDFB  8B 13                     MOV EDX,dword ptr [EBX]
0066FDFD  8D 46 37                  LEA EAX,[ESI + 0x37]
0066FE00  50                        PUSH EAX
0066FE01  8B CB                     MOV ECX,EBX
0066FE03  FF 12                     CALL dword ptr [EDX]
0066FE05  8B 13                     MOV EDX,dword ptr [EBX]
0066FE07  50                        PUSH EAX
0066FE08  8D 46 32                  LEA EAX,[ESI + 0x32]
0066FE0B  8B CB                     MOV ECX,EBX
0066FE0D  50                        PUSH EAX
0066FE0E  FF 12                     CALL dword ptr [EDX]
0066FE10  8B 13                     MOV EDX,dword ptr [EBX]
0066FE12  50                        PUSH EAX
0066FE13  8D 46 2D                  LEA EAX,[ESI + 0x2d]
0066FE16  8B CB                     MOV ECX,EBX
0066FE18  50                        PUSH EAX
0066FE19  FF 12                     CALL dword ptr [EDX]
0066FE1B  8B 13                     MOV EDX,dword ptr [EBX]
0066FE1D  50                        PUSH EAX
0066FE1E  8D 46 28                  LEA EAX,[ESI + 0x28]
0066FE21  8B CB                     MOV ECX,EBX
0066FE23  50                        PUSH EAX
0066FE24  FF 12                     CALL dword ptr [EDX]
0066FE26  8B 13                     MOV EDX,dword ptr [EBX]
0066FE28  50                        PUSH EAX
0066FE29  8D 46 23                  LEA EAX,[ESI + 0x23]
0066FE2C  8B CB                     MOV ECX,EBX
0066FE2E  50                        PUSH EAX
0066FE2F  FF 12                     CALL dword ptr [EDX]
0066FE31  8B 13                     MOV EDX,dword ptr [EBX]
0066FE33  50                        PUSH EAX
0066FE34  8D 46 1E                  LEA EAX,[ESI + 0x1e]
0066FE37  8B CB                     MOV ECX,EBX
0066FE39  50                        PUSH EAX
0066FE3A  FF 12                     CALL dword ptr [EDX]
0066FE3C  8B 13                     MOV EDX,dword ptr [EBX]
0066FE3E  50                        PUSH EAX
0066FE3F  8D 46 19                  LEA EAX,[ESI + 0x19]
0066FE42  8B CB                     MOV ECX,EBX
0066FE44  50                        PUSH EAX
0066FE45  FF 52 08                  CALL dword ptr [EDX + 0x8]
0066FE48  8B 13                     MOV EDX,dword ptr [EBX]
0066FE4A  50                        PUSH EAX
0066FE4B  8D 46 14                  LEA EAX,[ESI + 0x14]
0066FE4E  8B CB                     MOV ECX,EBX
0066FE50  50                        PUSH EAX
0066FE51  FF 12                     CALL dword ptr [EDX]
0066FE53  8B 13                     MOV EDX,dword ptr [EBX]
0066FE55  50                        PUSH EAX
0066FE56  8D 46 0F                  LEA EAX,[ESI + 0xf]
0066FE59  8B CB                     MOV ECX,EBX
0066FE5B  50                        PUSH EAX
0066FE5C  FF 12                     CALL dword ptr [EDX]
0066FE5E  8B 13                     MOV EDX,dword ptr [EBX]
0066FE60  83 C6 0A                  ADD ESI,0xa
0066FE63  50                        PUSH EAX
0066FE64  56                        PUSH ESI
0066FE65  8B CB                     MOV ECX,EBX
0066FE67  FF 12                     CALL dword ptr [EDX]
0066FE69  50                        PUSH EAX
0066FE6A  8B CF                     MOV ECX,EDI
0066FE6C  E8 99 20 D9 FF            CALL 0x00401f0a
0066FE71  E9 8E FA FF FF            JMP 0x0066f904
switchD_0066d45d::caseD_82f:
0066FE76  33 C9                     XOR ECX,ECX
0066FE78  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
LAB_0066fe7b:
0066FE7B  8A 04 31                  MOV AL,byte ptr [ECX + ESI*0x1]
0066FE7E  3C 04                     CMP AL,0x4
0066FE80  74 46                     JZ 0x0066fec8
0066FE82  3C 01                     CMP AL,0x1
0066FE84  74 42                     JZ 0x0066fec8
0066FE86  8D 04 BE                  LEA EAX,[ESI + EDI*0x4]
0066FE89  0F BF 4C 07 01            MOVSX ECX,word ptr [EDI + EAX*0x1 + 0x1]
0066FE8E  51                        PUSH ECX
0066FE8F  E8 47 59 D9 FF            CALL 0x004057db
0066FE94  85 C0                     TEST EAX,EAX
0066FE96  74 0F                     JZ 0x0066fea7
0066FE98  6A 7F                     PUSH 0x7f
0066FE9A  8D 53 04                  LEA EDX,[EBX + 0x4]
0066FE9D  50                        PUSH EAX
0066FE9E  52                        PUSH EDX
0066FE9F  E8 9C E4 0B 00            CALL 0x0072e340
0066FEA4  83 C4 0C                  ADD ESP,0xc
LAB_0066fea7:
0066FEA7  C7 83 84 00 00 00 FF FF FF FF  MOV dword ptr [EBX + 0x84],0xffffffff
0066FEB1  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
0066FEB6  6A 79                     PUSH 0x79
0066FEB8  68 24 2A 7D 00            PUSH 0x7d2a24
0066FEBD  50                        PUSH EAX
0066FEBE  6A 88                     PUSH -0x78
0066FEC0  E8 7B 5F 03 00            CALL 0x006a5e40
0066FEC5  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
LAB_0066fec8:
0066FEC8  83 C1 05                  ADD ECX,0x5
0066FECB  83 F9 23                  CMP ECX,0x23
0066FECE  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0066FED1  7C A8                     JL 0x0066fe7b
0066FED3  8A 46 23                  MOV AL,byte ptr [ESI + 0x23]
0066FED6  3C 06                     CMP AL,0x6
0066FED8  74 44                     JZ 0x0066ff1e
0066FEDA  3C 03                     CMP AL,0x3
0066FEDC  74 40                     JZ 0x0066ff1e
0066FEDE  8D 0C BE                  LEA ECX,[ESI + EDI*0x4]
0066FEE1  0F BF 54 0F 01            MOVSX EDX,word ptr [EDI + ECX*0x1 + 0x1]
0066FEE6  52                        PUSH EDX
0066FEE7  E8 EF 58 D9 FF            CALL 0x004057db
0066FEEC  85 C0                     TEST EAX,EAX
0066FEEE  74 0F                     JZ 0x0066feff
0066FEF0  6A 7F                     PUSH 0x7f
0066FEF2  50                        PUSH EAX
0066FEF3  8D 43 04                  LEA EAX,[EBX + 0x4]
0066FEF6  50                        PUSH EAX
0066FEF7  E8 44 E4 0B 00            CALL 0x0072e340
0066FEFC  83 C4 0C                  ADD ESP,0xc
LAB_0066feff:
0066FEFF  C7 83 84 00 00 00 FF FF FF FF  MOV dword ptr [EBX + 0x84],0xffffffff
0066FF09  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
0066FF0F  6A 79                     PUSH 0x79
0066FF11  68 24 2A 7D 00            PUSH 0x7d2a24
0066FF16  51                        PUSH ECX
0066FF17  6A 88                     PUSH -0x78
0066FF19  E8 22 5F 03 00            CALL 0x006a5e40
LAB_0066ff1e:
0066FF1E  8B 13                     MOV EDX,dword ptr [EBX]
0066FF20  56                        PUSH ESI
0066FF21  8B CB                     MOV ECX,EBX
0066FF23  FF 12                     CALL dword ptr [EDX]
0066FF25  83 F8 09                  CMP EAX,0x9
0066FF28  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0066FF2B  75 0C                     JNZ 0x0066ff39
0066FF2D  8B 03                     MOV EAX,dword ptr [EBX]
0066FF2F  8B CB                     MOV ECX,EBX
0066FF31  FF 50 18                  CALL dword ptr [EAX + 0x18]
0066FF34  83 F8 08                  CMP EAX,0x8
0066FF37  74 09                     JZ 0x0066ff42
LAB_0066ff39:
0066FF39  81 7D FC FF 00 00 00      CMP dword ptr [EBP + -0x4],0xff
0066FF40  75 40                     JNZ 0x0066ff82
LAB_0066ff42:
0066FF42  8D 0C BE                  LEA ECX,[ESI + EDI*0x4]
0066FF45  0F BF 54 0F 01            MOVSX EDX,word ptr [EDI + ECX*0x1 + 0x1]
0066FF4A  52                        PUSH EDX
0066FF4B  E8 8B 58 D9 FF            CALL 0x004057db
0066FF50  85 C0                     TEST EAX,EAX
0066FF52  74 0F                     JZ 0x0066ff63
0066FF54  6A 7F                     PUSH 0x7f
0066FF56  50                        PUSH EAX
0066FF57  8D 43 04                  LEA EAX,[EBX + 0x4]
0066FF5A  50                        PUSH EAX
0066FF5B  E8 E0 E3 0B 00            CALL 0x0072e340
0066FF60  83 C4 0C                  ADD ESP,0xc
LAB_0066ff63:
0066FF63  C7 83 84 00 00 00 FF FF FF FF  MOV dword ptr [EBX + 0x84],0xffffffff
0066FF6D  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
0066FF73  6A 79                     PUSH 0x79
0066FF75  68 24 2A 7D 00            PUSH 0x7d2a24
0066FF7A  51                        PUSH ECX
0066FF7B  6A 88                     PUSH -0x78
0066FF7D  E8 BE 5E 03 00            CALL 0x006a5e40
LAB_0066ff82:
0066FF82  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0066FF85  8D 55 B4                  LEA EDX,[EBP + -0x4c]
0066FF88  52                        PUSH EDX
0066FF89  6A 00                     PUSH 0x0
0066FF8B  50                        PUSH EAX
0066FF8C  8B CB                     MOV ECX,EBX
0066FF8E  E8 25 17 D9 FF            CALL 0x004016b8
0066FF93  83 F8 01                  CMP EAX,0x1
0066FF96  74 40                     JZ 0x0066ffd8
0066FF98  8D 0C BE                  LEA ECX,[ESI + EDI*0x4]
0066FF9B  0F BF 54 0F 01            MOVSX EDX,word ptr [EDI + ECX*0x1 + 0x1]
0066FFA0  52                        PUSH EDX
0066FFA1  E8 35 58 D9 FF            CALL 0x004057db
0066FFA6  85 C0                     TEST EAX,EAX
0066FFA8  74 0F                     JZ 0x0066ffb9
0066FFAA  6A 7F                     PUSH 0x7f
0066FFAC  50                        PUSH EAX
0066FFAD  8D 43 04                  LEA EAX,[EBX + 0x4]
0066FFB0  50                        PUSH EAX
0066FFB1  E8 8A E3 0B 00            CALL 0x0072e340
0066FFB6  83 C4 0C                  ADD ESP,0xc
LAB_0066ffb9:
0066FFB9  C7 83 84 00 00 00 FF FF FF FF  MOV dword ptr [EBX + 0x84],0xffffffff
0066FFC3  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
0066FFC9  6A 79                     PUSH 0x79
0066FFCB  68 24 2A 7D 00            PUSH 0x7d2a24
0066FFD0  51                        PUSH ECX
0066FFD1  6A 88                     PUSH -0x78
0066FFD3  E8 68 5E 03 00            CALL 0x006a5e40
LAB_0066ffd8:
0066FFD8  8D 95 84 FD FF FF         LEA EDX,[EBP + 0xfffffd84]
0066FFDE  8D 4E 0F                  LEA ECX,[ESI + 0xf]
0066FFE1  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
0066FFE8  8B 03                     MOV EAX,dword ptr [EBX]
0066FFEA  52                        PUSH EDX
0066FFEB  51                        PUSH ECX
0066FFEC  8B CB                     MOV ECX,EBX
0066FFEE  FF 10                     CALL dword ptr [EAX]
0066FFF0  8B 13                     MOV EDX,dword ptr [EBX]
0066FFF2  50                        PUSH EAX
0066FFF3  8D 46 0A                  LEA EAX,[ESI + 0xa]
0066FFF6  8B CB                     MOV ECX,EBX
0066FFF8  50                        PUSH EAX
0066FFF9  FF 12                     CALL dword ptr [EDX]
0066FFFB  50                        PUSH EAX
0066FFFC  8B CB                     MOV ECX,EBX
0066FFFE  E8 B5 16 D9 FF            CALL 0x004016b8
00670003  85 C0                     TEST EAX,EAX
00670005  7E 1D                     JLE 0x00670024
00670007  8D 95 84 FD FF FF         LEA EDX,[EBP + 0xfffffd84]
LAB_0067000d:
0067000D  8B 0A                     MOV ECX,dword ptr [EDX]
0067000F  BF 01 00 00 00            MOV EDI,0x1
00670014  D3 E7                     SHL EDI,CL
00670016  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00670019  83 C2 04                  ADD EDX,0x4
0067001C  0B CF                     OR ECX,EDI
0067001E  48                        DEC EAX
0067001F  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
00670022  75 E9                     JNZ 0x0067000d
LAB_00670024:
00670024  8B 13                     MOV EDX,dword ptr [EBX]
00670026  8D 46 05                  LEA EAX,[ESI + 0x5]
00670029  50                        PUSH EAX
0067002A  8B CB                     MOV ECX,EBX
0067002C  C7 45 F8 FF FF FF FF      MOV dword ptr [EBP + -0x8],0xffffffff
00670033  FF 12                     CALL dword ptr [EDX]
00670035  8B 4D B4                  MOV ECX,dword ptr [EBP + -0x4c]
00670038  50                        PUSH EAX
00670039  51                        PUSH ECX
0067003A  8B CB                     MOV ECX,EBX
0067003C  E8 55 24 D9 FF            CALL 0x00402496
00670041  8B F8                     MOV EDI,EAX
00670043  85 FF                     TEST EDI,EDI
00670045  74 3B                     JZ 0x00670082
00670047  8B 13                     MOV EDX,dword ptr [EBX]
00670049  8D 46 23                  LEA EAX,[ESI + 0x23]
0067004C  50                        PUSH EAX
0067004D  8B CB                     MOV ECX,EBX
0067004F  FF 52 08                  CALL dword ptr [EDX + 0x8]
00670052  8B 13                     MOV EDX,dword ptr [EBX]
00670054  50                        PUSH EAX
00670055  8D 46 1E                  LEA EAX,[ESI + 0x1e]
00670058  8B CB                     MOV ECX,EBX
0067005A  50                        PUSH EAX
0067005B  FF 12                     CALL dword ptr [EDX]
0067005D  8B 13                     MOV EDX,dword ptr [EBX]
0067005F  50                        PUSH EAX
00670060  8D 46 19                  LEA EAX,[ESI + 0x19]
00670063  8B CB                     MOV ECX,EBX
00670065  50                        PUSH EAX
00670066  FF 12                     CALL dword ptr [EDX]
00670068  8B 13                     MOV EDX,dword ptr [EBX]
0067006A  83 C6 14                  ADD ESI,0x14
0067006D  50                        PUSH EAX
0067006E  56                        PUSH ESI
0067006F  8B CB                     MOV ECX,EBX
00670071  FF 12                     CALL dword ptr [EDX]
00670073  50                        PUSH EAX
00670074  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00670077  50                        PUSH EAX
00670078  8B CF                     MOV ECX,EDI
0067007A  E8 94 5B D9 FF            CALL 0x00405c13
0067007F  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
LAB_00670082:
00670082  8B 7D F8                  MOV EDI,dword ptr [EBP + -0x8]
00670085  E9 37 FB FF FF            JMP 0x0066fbc1
switchD_0066d45d::caseD_830:
0067008A  33 C0                     XOR EAX,EAX
0067008C  3B F8                     CMP EDI,EAX
0067008E  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
00670091  7E 65                     JLE 0x006700f8
00670093  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
LAB_00670096:
00670096  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00670099  8A 04 31                  MOV AL,byte ptr [ECX + ESI*0x1]
0067009C  3C 04                     CMP AL,0x4
0067009E  74 44                     JZ 0x006700e4
006700A0  3C 01                     CMP AL,0x1
006700A2  74 40                     JZ 0x006700e4
006700A4  8D 14 BE                  LEA EDX,[ESI + EDI*0x4]
006700A7  0F BF 44 17 01            MOVSX EAX,word ptr [EDI + EDX*0x1 + 0x1]
006700AC  50                        PUSH EAX
006700AD  E8 29 57 D9 FF            CALL 0x004057db
006700B2  85 C0                     TEST EAX,EAX
006700B4  74 0F                     JZ 0x006700c5
006700B6  6A 7F                     PUSH 0x7f
006700B8  8D 4B 04                  LEA ECX,[EBX + 0x4]
006700BB  50                        PUSH EAX
006700BC  51                        PUSH ECX
006700BD  E8 7E E2 0B 00            CALL 0x0072e340
006700C2  83 C4 0C                  ADD ESP,0xc
LAB_006700c5:
006700C5  C7 83 84 00 00 00 FF FF FF FF  MOV dword ptr [EBX + 0x84],0xffffffff
006700CF  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
006700D5  6A 79                     PUSH 0x79
006700D7  68 24 2A 7D 00            PUSH 0x7d2a24
006700DC  52                        PUSH EDX
006700DD  6A 88                     PUSH -0x78
006700DF  E8 5C 5D 03 00            CALL 0x006a5e40
LAB_006700e4:
006700E4  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
006700E7  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006700EA  40                        INC EAX
006700EB  83 C2 05                  ADD EDX,0x5
006700EE  3B C7                     CMP EAX,EDI
006700F0  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
006700F3  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
006700F6  7C 9E                     JL 0x00670096
LAB_006700f8:
006700F8  8B 03                     MOV EAX,dword ptr [EBX]
006700FA  56                        PUSH ESI
006700FB  8B CB                     MOV ECX,EBX
006700FD  FF 10                     CALL dword ptr [EAX]
006700FF  83 F8 09                  CMP EAX,0x9
00670102  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00670105  75 0C                     JNZ 0x00670113
00670107  8B 13                     MOV EDX,dword ptr [EBX]
00670109  8B CB                     MOV ECX,EBX
0067010B  FF 52 18                  CALL dword ptr [EDX + 0x18]
0067010E  83 F8 08                  CMP EAX,0x8
00670111  74 09                     JZ 0x0067011c
LAB_00670113:
00670113  81 7D FC FF 00 00 00      CMP dword ptr [EBP + -0x4],0xff
0067011A  75 3F                     JNZ 0x0067015b
LAB_0067011c:
0067011C  8D 04 BE                  LEA EAX,[ESI + EDI*0x4]
0067011F  0F BF 4C 07 01            MOVSX ECX,word ptr [EDI + EAX*0x1 + 0x1]
00670124  51                        PUSH ECX
00670125  E8 B1 56 D9 FF            CALL 0x004057db
0067012A  85 C0                     TEST EAX,EAX
0067012C  74 0F                     JZ 0x0067013d
0067012E  6A 7F                     PUSH 0x7f
00670130  8D 53 04                  LEA EDX,[EBX + 0x4]
00670133  50                        PUSH EAX
00670134  52                        PUSH EDX
00670135  E8 06 E2 0B 00            CALL 0x0072e340
0067013A  83 C4 0C                  ADD ESP,0xc
LAB_0067013d:
0067013D  C7 83 84 00 00 00 FF FF FF FF  MOV dword ptr [EBX + 0x84],0xffffffff
00670147  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
0067014C  6A 79                     PUSH 0x79
0067014E  68 24 2A 7D 00            PUSH 0x7d2a24
00670153  50                        PUSH EAX
00670154  6A 88                     PUSH -0x78
00670156  E8 E5 5C 03 00            CALL 0x006a5e40
LAB_0067015b:
0067015B  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0067015E  8D 4D B4                  LEA ECX,[EBP + -0x4c]
00670161  51                        PUSH ECX
00670162  6A 00                     PUSH 0x0
00670164  52                        PUSH EDX
00670165  8B CB                     MOV ECX,EBX
00670167  E8 4C 15 D9 FF            CALL 0x004016b8
0067016C  83 F8 01                  CMP EAX,0x1
0067016F  74 3F                     JZ 0x006701b0
00670171  8D 04 BE                  LEA EAX,[ESI + EDI*0x4]
00670174  0F BF 4C 07 01            MOVSX ECX,word ptr [EDI + EAX*0x1 + 0x1]
00670179  51                        PUSH ECX
0067017A  E8 5C 56 D9 FF            CALL 0x004057db
0067017F  85 C0                     TEST EAX,EAX
00670181  74 0F                     JZ 0x00670192
00670183  6A 7F                     PUSH 0x7f
00670185  8D 53 04                  LEA EDX,[EBX + 0x4]
00670188  50                        PUSH EAX
00670189  52                        PUSH EDX
0067018A  E8 B1 E1 0B 00            CALL 0x0072e340
0067018F  83 C4 0C                  ADD ESP,0xc
LAB_00670192:
00670192  C7 83 84 00 00 00 FF FF FF FF  MOV dword ptr [EBX + 0x84],0xffffffff
0067019C  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
006701A1  6A 79                     PUSH 0x79
006701A3  68 24 2A 7D 00            PUSH 0x7d2a24
006701A8  50                        PUSH EAX
006701A9  6A 88                     PUSH -0x78
006701AB  E8 90 5C 03 00            CALL 0x006a5e40
LAB_006701b0:
006701B0  8B 13                     MOV EDX,dword ptr [EBX]
006701B2  8D 46 05                  LEA EAX,[ESI + 0x5]
006701B5  50                        PUSH EAX
006701B6  8B CB                     MOV ECX,EBX
006701B8  83 CF FF                  OR EDI,0xffffffff
006701BB  FF 12                     CALL dword ptr [EDX]
006701BD  8B 4D B4                  MOV ECX,dword ptr [EBP + -0x4c]
006701C0  50                        PUSH EAX
006701C1  51                        PUSH ECX
006701C2  8B CB                     MOV ECX,EBX
006701C4  E8 CD 22 D9 FF            CALL 0x00402496
006701C9  85 C0                     TEST EAX,EAX
006701CB  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
006701CE  0F 84 36 F7 FF FF         JZ 0x0066f90a
006701D4  B9 12 00 00 00            MOV ECX,0x12
006701D9  33 C0                     XOR EAX,EAX
006701DB  8D BD E8 FD FF FF         LEA EDI,[EBP + 0xfffffde8]
006701E1  83 C6 0A                  ADD ESI,0xa
006701E4  F3 AB                     STOSD.REP ES:EDI
006701E6  66 AB                     STOSW ES:EDI
006701E8  8B 13                     MOV EDX,dword ptr [EBX]
006701EA  56                        PUSH ESI
006701EB  8B CB                     MOV ECX,EBX
006701ED  FF 12                     CALL dword ptr [EDX]
006701EF  89 85 E8 FD FF FF         MOV dword ptr [EBP + 0xfffffde8],EAX
006701F5  B9 0D 00 00 00            MOV ECX,0xd
006701FA  33 C0                     XOR EAX,EAX
006701FC  8D BD 34 FE FF FF         LEA EDI,[EBP + 0xfffffe34]
00670202  F3 AB                     STOSD.REP ES:EDI
00670204  8D 8D 34 FE FF FF         LEA ECX,[EBP + 0xfffffe34]
0067020A  8D 85 E8 FD FF FF         LEA EAX,[EBP + 0xfffffde8]
00670210  51                        PUSH ECX
00670211  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00670214  66 C7 85 EC FD FF FF FF FF  MOV word ptr [EBP + 0xfffffdec],0xffff
0067021D  C7 85 F0 FD FF FF F0 FF FF FF  MOV dword ptr [EBP + 0xfffffdf0],0xfffffff0
00670227  66 C7 85 F4 FD FF FF FF FF  MOV word ptr [EBP + 0xfffffdf4],0xffff
00670230  C6 85 26 FE FF FF 01      MOV byte ptr [EBP + 0xfffffe26],0x1
00670237  C7 85 34 FE FF FF 68 00 00 00  MOV dword ptr [EBP + 0xfffffe34],0x68
00670241  89 85 3E FE FF FF         MOV dword ptr [EBP + 0xfffffe3e],EAX
00670247  E8 09 13 D9 FF            CALL 0x00401555
0067024C  8A 85 3C FE FF FF         MOV AL,byte ptr [EBP + 0xfffffe3c]
00670252  33 D2                     XOR EDX,EDX
00670254  84 C0                     TEST AL,AL
00670256  0F 9F C2                  SETG DL
00670259  8B FA                     MOV EDI,EDX
0067025B  E9 AA F6 FF FF            JMP 0x0066f90a
switchD_0066d45d::caseD_831:
00670260  33 C0                     XOR EAX,EAX
00670262  3B F8                     CMP EDI,EAX
00670264  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
00670267  7E 65                     JLE 0x006702ce
00670269  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
LAB_0067026c:
0067026C  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0067026F  8A 04 30                  MOV AL,byte ptr [EAX + ESI*0x1]
00670272  3C 04                     CMP AL,0x4
00670274  74 44                     JZ 0x006702ba
00670276  3C 01                     CMP AL,0x1
00670278  74 40                     JZ 0x006702ba
0067027A  8D 0C BE                  LEA ECX,[ESI + EDI*0x4]
0067027D  0F BF 54 0F 01            MOVSX EDX,word ptr [EDI + ECX*0x1 + 0x1]
00670282  52                        PUSH EDX
00670283  E8 53 55 D9 FF            CALL 0x004057db
00670288  85 C0                     TEST EAX,EAX
0067028A  74 0F                     JZ 0x0067029b
0067028C  6A 7F                     PUSH 0x7f
0067028E  50                        PUSH EAX
0067028F  8D 43 04                  LEA EAX,[EBX + 0x4]
00670292  50                        PUSH EAX
00670293  E8 A8 E0 0B 00            CALL 0x0072e340
00670298  83 C4 0C                  ADD ESP,0xc
LAB_0067029b:
0067029B  C7 83 84 00 00 00 FF FF FF FF  MOV dword ptr [EBX + 0x84],0xffffffff
006702A5  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
006702AB  6A 79                     PUSH 0x79
006702AD  68 24 2A 7D 00            PUSH 0x7d2a24
006702B2  51                        PUSH ECX
006702B3  6A 88                     PUSH -0x78
006702B5  E8 86 5B 03 00            CALL 0x006a5e40
LAB_006702ba:
006702BA  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
006702BD  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006702C0  40                        INC EAX
006702C1  83 C2 05                  ADD EDX,0x5
006702C4  3B C7                     CMP EAX,EDI
006702C6  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
006702C9  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
006702CC  7C 9E                     JL 0x0067026c
LAB_006702ce:
006702CE  8B 13                     MOV EDX,dword ptr [EBX]
006702D0  56                        PUSH ESI
006702D1  8B CB                     MOV ECX,EBX
006702D3  FF 12                     CALL dword ptr [EDX]
006702D5  83 F8 09                  CMP EAX,0x9
006702D8  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
006702DB  75 0C                     JNZ 0x006702e9
006702DD  8B 03                     MOV EAX,dword ptr [EBX]
006702DF  8B CB                     MOV ECX,EBX
006702E1  FF 50 18                  CALL dword ptr [EAX + 0x18]
006702E4  83 F8 08                  CMP EAX,0x8
006702E7  74 09                     JZ 0x006702f2
LAB_006702e9:
006702E9  81 7D FC FF 00 00 00      CMP dword ptr [EBP + -0x4],0xff
006702F0  75 40                     JNZ 0x00670332
LAB_006702f2:
006702F2  8D 0C BE                  LEA ECX,[ESI + EDI*0x4]
006702F5  0F BF 54 0F 01            MOVSX EDX,word ptr [EDI + ECX*0x1 + 0x1]
006702FA  52                        PUSH EDX
006702FB  E8 DB 54 D9 FF            CALL 0x004057db
00670300  85 C0                     TEST EAX,EAX
00670302  74 0F                     JZ 0x00670313
00670304  6A 7F                     PUSH 0x7f
00670306  50                        PUSH EAX
00670307  8D 43 04                  LEA EAX,[EBX + 0x4]
0067030A  50                        PUSH EAX
0067030B  E8 30 E0 0B 00            CALL 0x0072e340
00670310  83 C4 0C                  ADD ESP,0xc
LAB_00670313:
00670313  C7 83 84 00 00 00 FF FF FF FF  MOV dword ptr [EBX + 0x84],0xffffffff
0067031D  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
00670323  6A 79                     PUSH 0x79
00670325  68 24 2A 7D 00            PUSH 0x7d2a24
0067032A  51                        PUSH ECX
0067032B  6A 88                     PUSH -0x78
0067032D  E8 0E 5B 03 00            CALL 0x006a5e40
LAB_00670332:
00670332  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00670335  8D 55 B4                  LEA EDX,[EBP + -0x4c]
00670338  52                        PUSH EDX
00670339  6A 00                     PUSH 0x0
0067033B  50                        PUSH EAX
0067033C  8B CB                     MOV ECX,EBX
0067033E  E8 75 13 D9 FF            CALL 0x004016b8
00670343  83 F8 01                  CMP EAX,0x1
00670346  74 40                     JZ 0x00670388
00670348  8D 0C BE                  LEA ECX,[ESI + EDI*0x4]
0067034B  0F BF 54 0F 01            MOVSX EDX,word ptr [EDI + ECX*0x1 + 0x1]
00670350  52                        PUSH EDX
00670351  E8 85 54 D9 FF            CALL 0x004057db
00670356  85 C0                     TEST EAX,EAX
00670358  74 0F                     JZ 0x00670369
0067035A  6A 7F                     PUSH 0x7f
0067035C  50                        PUSH EAX
0067035D  8D 43 04                  LEA EAX,[EBX + 0x4]
00670360  50                        PUSH EAX
00670361  E8 DA DF 0B 00            CALL 0x0072e340
00670366  83 C4 0C                  ADD ESP,0xc
LAB_00670369:
00670369  C7 83 84 00 00 00 FF FF FF FF  MOV dword ptr [EBX + 0x84],0xffffffff
00670373  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
00670379  6A 79                     PUSH 0x79
0067037B  68 24 2A 7D 00            PUSH 0x7d2a24
00670380  51                        PUSH ECX
00670381  6A 88                     PUSH -0x78
00670383  E8 B8 5A 03 00            CALL 0x006a5e40
LAB_00670388:
00670388  8B 13                     MOV EDX,dword ptr [EBX]
0067038A  8D 46 05                  LEA EAX,[ESI + 0x5]
0067038D  50                        PUSH EAX
0067038E  8B CB                     MOV ECX,EBX
00670390  C7 45 F8 FF FF FF FF      MOV dword ptr [EBP + -0x8],0xffffffff
00670397  FF 12                     CALL dword ptr [EDX]
00670399  8B 4D B4                  MOV ECX,dword ptr [EBP + -0x4c]
0067039C  50                        PUSH EAX
0067039D  51                        PUSH ECX
0067039E  8B CB                     MOV ECX,EBX
006703A0  E8 F1 20 D9 FF            CALL 0x00402496
006703A5  8B F8                     MOV EDI,EAX
006703A7  85 FF                     TEST EDI,EDI
006703A9  74 36                     JZ 0x006703e1
006703AB  8B 13                     MOV EDX,dword ptr [EBX]
006703AD  8D 46 19                  LEA EAX,[ESI + 0x19]
006703B0  50                        PUSH EAX
006703B1  8B CB                     MOV ECX,EBX
006703B3  FF 12                     CALL dword ptr [EDX]
006703B5  8B 13                     MOV EDX,dword ptr [EBX]
006703B7  50                        PUSH EAX
006703B8  8D 46 14                  LEA EAX,[ESI + 0x14]
006703BB  8B CB                     MOV ECX,EBX
006703BD  50                        PUSH EAX
006703BE  FF 12                     CALL dword ptr [EDX]
006703C0  8B 13                     MOV EDX,dword ptr [EBX]
006703C2  50                        PUSH EAX
006703C3  8D 46 0F                  LEA EAX,[ESI + 0xf]
006703C6  8B CB                     MOV ECX,EBX
006703C8  50                        PUSH EAX
006703C9  FF 12                     CALL dword ptr [EDX]
006703CB  8B 13                     MOV EDX,dword ptr [EBX]
006703CD  83 C6 0A                  ADD ESI,0xa
006703D0  50                        PUSH EAX
006703D1  56                        PUSH ESI
006703D2  8B CB                     MOV ECX,EBX
006703D4  FF 12                     CALL dword ptr [EDX]
006703D6  50                        PUSH EAX
006703D7  8B CF                     MOV ECX,EDI
006703D9  E8 0D 44 D9 FF            CALL 0x004047eb
006703DE  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
LAB_006703e1:
006703E1  8B 7D F8                  MOV EDI,dword ptr [EBP + -0x8]
006703E4  85 FF                     TEST EDI,EDI
006703E6  7D 3D                     JGE 0x00670425
006703E8  8B 75 B4                  MOV ESI,dword ptr [EBP + -0x4c]
006703EB  B8 A0 16 80 00            MOV EAX,0x8016a0
006703F0  85 C0                     TEST EAX,EAX
006703F2  74 13                     JZ 0x00670407
LAB_006703f4:
006703F4  6A 7F                     PUSH 0x7f
006703F6  8D 4B 04                  LEA ECX,[EBX + 0x4]
006703F9  68 A0 16 80 00            PUSH 0x8016a0
006703FE  51                        PUSH ECX
006703FF  E8 3C DF 0B 00            CALL 0x0072e340
00670404  83 C4 0C                  ADD ESP,0xc
LAB_00670407:
00670407  89 B3 84 00 00 00         MOV dword ptr [EBX + 0x84],ESI
0067040D  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
00670413  6A 79                     PUSH 0x79
00670415  68 24 2A 7D 00            PUSH 0x7d2a24
0067041A  52                        PUSH EDX
LAB_0067041b:
0067041B  68 56 FF FF FF            PUSH 0xffffff56
00670420  E8 1B 5A 03 00            CALL 0x006a5e40
LAB_00670425:
00670425  6A 04                     PUSH 0x4
00670427  E8 E4 A7 03 00            CALL 0x006aac10
0067042C  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
0067042F  89 38                     MOV dword ptr [EAX],EDI
LAB_00670431:
00670431  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
00670434  85 C0                     TEST EAX,EAX
00670436  74 56                     JZ 0x0067048e
00670438  C7 00 01 00 00 00         MOV dword ptr [EAX],0x1
0067043E  8B 95 A4 FD FF FF         MOV EDX,dword ptr [EBP + 0xfffffda4]
00670444  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
00670447  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0067044D  5F                        POP EDI
0067044E  5E                        POP ESI
0067044F  5B                        POP EBX
00670450  8B E5                     MOV ESP,EBP
00670452  5D                        POP EBP
00670453  C2 0C 00                  RET 0xc
switchD_0066b69d::caseD_7d8:
00670456  50                        PUSH EAX
00670457  E8 7F 53 D9 FF            CALL 0x004057db
0067045C  85 C0                     TEST EAX,EAX
0067045E  74 0F                     JZ 0x0067046f
00670460  6A 7F                     PUSH 0x7f
00670462  50                        PUSH EAX
00670463  8D 43 04                  LEA EAX,[EBX + 0x4]
00670466  50                        PUSH EAX
00670467  E8 D4 DE 0B 00            CALL 0x0072e340
0067046C  83 C4 0C                  ADD ESP,0xc
LAB_0067046f:
0067046F  C7 83 84 00 00 00 FF FF FF FF  MOV dword ptr [EBX + 0x84],0xffffffff
00670479  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
0067047F  6A 79                     PUSH 0x79
00670481  68 24 2A 7D 00            PUSH 0x7d2a24
00670486  51                        PUSH ECX
00670487  6A 89                     PUSH -0x77
00670489  E8 B2 59 03 00            CALL 0x006a5e40
LAB_0067048e:
0067048E  8B 95 A4 FD FF FF         MOV EDX,dword ptr [EBP + 0xfffffda4]
00670494  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
00670497  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0067049D  5F                        POP EDI
0067049E  5E                        POP ESI
0067049F  5B                        POP EBX
006704A0  8B E5                     MOV ESP,EBP
006704A2  5D                        POP EBP
006704A3  C2 0C 00                  RET 0xc
LAB_006704a6:
006704A6  8B 85 A4 FD FF FF         MOV EAX,dword ptr [EBP + 0xfffffda4]
006704AC  A3 F8 8D 85 00            MOV [0x00858df8],EAX
006704B1  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
006704B4  85 C0                     TEST EAX,EAX
006704B6  74 09                     JZ 0x006704c1
006704B8  8D 4D F0                  LEA ECX,[EBP + -0x10]
006704BB  51                        PUSH ECX
006704BC  E8 9F AB 03 00            CALL 0x006ab060
LAB_006704c1:
006704C1  85 F6                     TEST ESI,ESI
006704C3  7E 05                     JLE 0x006704ca
006704C5  BE 95 FF FF FF            MOV ESI,0xffffff95
LAB_006704ca:
006704CA  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
006704CD  85 C0                     TEST EAX,EAX
006704CF  74 02                     JZ 0x006704d3
006704D1  89 30                     MOV dword ptr [EAX],ESI
LAB_006704d3:
006704D3  5F                        POP EDI
006704D4  5E                        POP ESI
006704D5  33 C0                     XOR EAX,EAX
006704D7  5B                        POP EBX
006704D8  8B E5                     MOV ESP,EBP
006704DA  5D                        POP EBP
006704DB  C2 0C 00                  RET 0xc
