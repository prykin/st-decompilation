FUN_004ccc10:
004CCC10  55                        PUSH EBP
004CCC11  8B EC                     MOV EBP,ESP
004CCC13  81 EC 90 02 00 00         SUB ESP,0x290
004CCC19  53                        PUSH EBX
004CCC1A  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
004CCC1D  56                        PUSH ESI
004CCC1E  8B F1                     MOV ESI,ECX
004CCC20  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
004CCC23  57                        PUSH EDI
004CCC24  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
004CCC27  51                        PUSH ECX
004CCC28  53                        PUSH EBX
004CCC29  8B CE                     MOV ECX,ESI
004CCC2B  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
004CCC2E  E8 7F 5F F3 FF            CALL 0x00402bb2
004CCC33  8B 56 24                  MOV EDX,dword ptr [ESI + 0x24]
004CCC36  8B 86 3D 02 00 00         MOV EAX,dword ptr [ESI + 0x23d]
004CCC3C  3B D0                     CMP EDX,EAX
004CCC3E  0F 85 B7 01 00 00         JNZ 0x004ccdfb
004CCC44  8B 86 35 02 00 00         MOV EAX,dword ptr [ESI + 0x235]
004CCC4A  8B 96 39 02 00 00         MOV EDX,dword ptr [ESI + 0x239]
004CCC50  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
004CCC53  03 C2                     ADD EAX,EDX
004CCC55  8B 0C 85 18 12 7E 00      MOV ECX,dword ptr [EAX*0x4 + 0x7e1218]
004CCC5C  85 C9                     TEST ECX,ECX
004CCC5E  0F 84 97 01 00 00         JZ 0x004ccdfb
004CCC64  B9 9B 00 00 00            MOV ECX,0x9b
004CCC69  33 C0                     XOR EAX,EAX
004CCC6B  8D BD 70 FD FF FF         LEA EDI,[EBP + 0xfffffd70]
004CCC71  F3 AB                     STOSD.REP ES:EDI
004CCC73  8D 8D 70 FD FF FF         LEA ECX,[EBP + 0xfffffd70]
004CCC79  33 FF                     XOR EDI,EDI
004CCC7B  89 4D 08                  MOV dword ptr [EBP + 0x8],ECX
LAB_004ccc7e:
004CCC7E  8A 56 24                  MOV DL,byte ptr [ESI + 0x24]
004CCC81  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004CCC87  52                        PUSH EDX
004CCC88  E8 2A 7D F3 FF            CALL 0x004049b7
004CCC8D  25 FF 00 00 00            AND EAX,0xff
004CCC92  8B 04 85 00 FC 7B 00      MOV EAX,dword ptr [EAX*0x4 + 0x7bfc00]
004CCC99  80 3C 38 00               CMP byte ptr [EAX + EDI*0x1],0x0
004CCC9D  75 29                     JNZ 0x004cccc8
004CCC9F  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004CCCA5  57                        PUSH EDI
004CCCA6  53                        PUSH EBX
004CCCA7  E8 BF 4B F3 FF            CALL 0x0040186b
004CCCAC  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004CCCB2  40                        INC EAX
004CCCB3  50                        PUSH EAX
004CCCB4  57                        PUSH EDI
004CCCB5  53                        PUSH EBX
004CCCB6  E8 87 56 F3 FF            CALL 0x00402342
004CCCBB  85 C0                     TEST EAX,EAX
004CCCBD  74 09                     JZ 0x004cccc8
004CCCBF  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
004CCCC2  C7 01 01 00 00 00         MOV dword ptr [ECX],0x1
LAB_004cccc8:
004CCCC8  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
004CCCCB  47                        INC EDI
004CCCCC  83 C1 04                  ADD ECX,0x4
004CCCCF  81 FF 9B 00 00 00         CMP EDI,0x9b
004CCCD5  89 4D 08                  MOV dword ptr [EBP + 0x8],ECX
004CCCD8  7C A4                     JL 0x004ccc7e
004CCCDA  8B 86 35 02 00 00         MOV EAX,dword ptr [ESI + 0x235]
004CCCE0  8B 4E 24                  MOV ECX,dword ptr [ESI + 0x24]
004CCCE3  8D 14 40                  LEA EDX,[EAX + EAX*0x2]
004CCCE6  8B 86 39 02 00 00         MOV EAX,dword ptr [ESI + 0x239]
004CCCEC  03 D0                     ADD EDX,EAX
004CCCEE  8B 04 95 18 12 7E 00      MOV EAX,dword ptr [EDX*0x4 + 0x7e1218]
004CCCF5  50                        PUSH EAX
004CCCF6  51                        PUSH ECX
004CCCF7  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004CCCFD  53                        PUSH EBX
004CCCFE  E8 BF 80 F3 FF            CALL 0x00404dc2
004CCD03  33 D2                     XOR EDX,EDX
004CCD05  8A 15 4D 87 80 00         MOV DL,byte ptr [0x0080874d]
004CCD0B  3B DA                     CMP EBX,EDX
004CCD0D  75 3E                     JNZ 0x004ccd4d
004CCD0F  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004CCD15  53                        PUSH EBX
004CCD16  E8 9C 7C F3 FF            CALL 0x004049b7
004CCD1B  25 FF 00 00 00            AND EAX,0xff
004CCD20  48                        DEC EAX
004CCD21  74 1C                     JZ 0x004ccd3f
004CCD23  48                        DEC EAX
004CCD24  74 09                     JZ 0x004ccd2f
004CCD26  48                        DEC EAX
004CCD27  75 24                     JNZ 0x004ccd4d
004CCD29  8B 06                     MOV EAX,dword ptr [ESI]
004CCD2B  6A 76                     PUSH 0x76
004CCD2D  EB 14                     JMP 0x004ccd43
LAB_004ccd2f:
004CCD2F  8B 16                     MOV EDX,dword ptr [ESI]
004CCD31  6A 75                     PUSH 0x75
004CCD33  6A 06                     PUSH 0x6
004CCD35  8B CE                     MOV ECX,ESI
004CCD37  FF 92 90 00 00 00         CALL dword ptr [EDX + 0x90]
004CCD3D  EB 0E                     JMP 0x004ccd4d
LAB_004ccd3f:
004CCD3F  8B 06                     MOV EAX,dword ptr [ESI]
004CCD41  6A 74                     PUSH 0x74
LAB_004ccd43:
004CCD43  6A 06                     PUSH 0x6
004CCD45  8B CE                     MOV ECX,ESI
004CCD47  FF 90 90 00 00 00         CALL dword ptr [EAX + 0x90]
LAB_004ccd4d:
004CCD4D  A1 BC 17 81 00            MOV EAX,[0x008117bc]
004CCD52  85 C0                     TEST EAX,EAX
004CCD54  0F 84 A1 00 00 00         JZ 0x004ccdfb
004CCD5A  B9 08 00 00 00            MOV ECX,0x8
004CCD5F  33 C0                     XOR EAX,EAX
004CCD61  8D 7D DC                  LEA EDI,[EBP + -0x24]
004CCD64  F3 AB                     STOSD.REP ES:EDI
004CCD66  8D 8D 70 FD FF FF         LEA ECX,[EBP + 0xfffffd70]
004CCD6C  C7 45 EC E9 5D 00 00      MOV dword ptr [EBP + -0x14],0x5de9
004CCD73  66 89 5D F0               MOV word ptr [EBP + -0x10],BX
004CCD77  33 FF                     XOR EDI,EDI
004CCD79  89 4D 08                  MOV dword ptr [EBP + 0x8],ECX
LAB_004ccd7c:
004CCD7C  8A 56 24                  MOV DL,byte ptr [ESI + 0x24]
004CCD7F  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004CCD85  52                        PUSH EDX
004CCD86  E8 2C 7C F3 FF            CALL 0x004049b7
004CCD8B  25 FF 00 00 00            AND EAX,0xff
004CCD90  8B 04 85 00 FC 7B 00      MOV EAX,dword ptr [EAX*0x4 + 0x7bfc00]
004CCD97  80 3C 38 00               CMP byte ptr [EAX + EDI*0x1],0x0
004CCD9B  75 4C                     JNZ 0x004ccde9
004CCD9D  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
004CCDA0  83 39 00                  CMP dword ptr [ECX],0x0
004CCDA3  75 44                     JNZ 0x004ccde9
004CCDA5  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004CCDAB  57                        PUSH EDI
004CCDAC  53                        PUSH EBX
004CCDAD  E8 B9 4A F3 FF            CALL 0x0040186b
004CCDB2  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004CCDB8  40                        INC EAX
004CCDB9  50                        PUSH EAX
004CCDBA  57                        PUSH EDI
004CCDBB  53                        PUSH EBX
004CCDBC  E8 81 55 F3 FF            CALL 0x00402342
004CCDC1  85 C0                     TEST EAX,EAX
004CCDC3  74 24                     JZ 0x004ccde9
004CCDC5  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004CCDCB  57                        PUSH EDI
004CCDCC  53                        PUSH EBX
004CCDCD  66 89 7D F4               MOV word ptr [EBP + -0xc],DI
004CCDD1  E8 95 4A F3 FF            CALL 0x0040186b
004CCDD6  8B 0D BC 17 81 00         MOV ECX,dword ptr [0x008117bc]
004CCDDC  40                        INC EAX
004CCDDD  66 89 45 F6               MOV word ptr [EBP + -0xa],AX
004CCDE1  8D 45 DC                  LEA EAX,[EBP + -0x24]
004CCDE4  8B 11                     MOV EDX,dword ptr [ECX]
004CCDE6  50                        PUSH EAX
004CCDE7  FF 12                     CALL dword ptr [EDX]
LAB_004ccde9:
004CCDE9  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
004CCDEC  47                        INC EDI
004CCDED  83 C1 04                  ADD ECX,0x4
004CCDF0  81 FF 9B 00 00 00         CMP EDI,0x9b
004CCDF6  89 4D 08                  MOV dword ptr [EBP + 0x8],ECX
004CCDF9  7C 81                     JL 0x004ccd7c
LAB_004ccdfb:
004CCDFB  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
004CCDFE  8A D3                     MOV DL,BL
004CCE00  89 5E 24                  MOV dword ptr [ESI + 0x24],EBX
004CCE03  89 8E C0 05 00 00         MOV dword ptr [ESI + 0x5c0],ECX
004CCE09  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004CCE0F  52                        PUSH EDX
004CCE10  E8 A2 7B F3 FF            CALL 0x004049b7
004CCE15  25 FF 00 00 00            AND EAX,0xff
004CCE1A  8B CE                     MOV ECX,ESI
004CCE1C  48                        DEC EAX
004CCE1D  89 86 39 02 00 00         MOV dword ptr [ESI + 0x239],EAX
004CCE23  E8 0E 5C F3 FF            CALL 0x00402a36
004CCE28  33 DB                     XOR EBX,EBX
004CCE2A  8B CE                     MOV ECX,ESI
004CCE2C  53                        PUSH EBX
004CCE2D  E8 97 7D F3 FF            CALL 0x00404bc9
004CCE32  8B CE                     MOV ECX,ESI
004CCE34  E8 5E 4B F3 FF            CALL 0x00401997
004CCE39  8B 86 35 02 00 00         MOV EAX,dword ptr [ESI + 0x235]
004CCE3F  39 1C 85 78 27 79 00      CMP dword ptr [EAX*0x4 + 0x792778],EBX
004CCE46  74 29                     JZ 0x004cce71
004CCE48  53                        PUSH EBX
004CCE49  50                        PUSH EAX
004CCE4A  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
004CCE4D  50                        PUSH EAX
004CCE4E  E8 F2 8D F3 FF            CALL 0x00405c45
004CCE53  83 C4 0C                  ADD ESP,0xc
004CCE56  85 C0                     TEST EAX,EAX
004CCE58  74 17                     JZ 0x004cce71
004CCE5A  8B 8E 35 02 00 00         MOV ECX,dword ptr [ESI + 0x235]
004CCE60  8B 56 24                  MOV EDX,dword ptr [ESI + 0x24]
004CCE63  53                        PUSH EBX
004CCE64  51                        PUSH ECX
004CCE65  52                        PUSH EDX
004CCE66  E8 DA 8D F3 FF            CALL 0x00405c45
004CCE6B  83 C4 0C                  ADD ESP,0xc
004CCE6E  50                        PUSH EAX
004CCE6F  EB 02                     JMP 0x004cce73
LAB_004cce71:
004CCE71  6A 05                     PUSH 0x5
LAB_004cce73:
004CCE73  8B CE                     MOV ECX,ESI
004CCE75  E8 27 55 F3 FF            CALL 0x004023a1
004CCE7A  83 BE AC 05 00 00 34      CMP dword ptr [ESI + 0x5ac],0x34
004CCE81  75 07                     JNZ 0x004cce8a
004CCE83  8B CE                     MOV ECX,ESI
004CCE85  E8 22 63 F3 FF            CALL 0x004031ac
LAB_004cce8a:
004CCE8A  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
004CCE8D  8B 8E 3D 02 00 00         MOV ECX,dword ptr [ESI + 0x23d]
004CCE93  3B C1                     CMP EAX,ECX
004CCE95  74 45                     JZ 0x004ccedc
004CCE97  51                        PUSH ECX
004CCE98  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004CCE9E  E8 14 7B F3 FF            CALL 0x004049b7
004CCEA3  8A 4E 24                  MOV CL,byte ptr [ESI + 0x24]
004CCEA6  8A D0                     MOV DL,AL
004CCEA8  8B 86 35 02 00 00         MOV EAX,dword ptr [ESI + 0x235]
004CCEAE  81 E2 FF 00 00 00         AND EDX,0xff
004CCEB4  51                        PUSH ECX
004CCEB5  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004CCEBB  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
004CCEBE  03 C2                     ADD EAX,EDX
004CCEC0  8D 3C 40                  LEA EDI,[EAX + EAX*0x2]
004CCEC3  E8 EF 7A F3 FF            CALL 0x004049b7
004CCEC8  25 FF 00 00 00            AND EAX,0xff
004CCECD  8A 8C 07 84 19 7E 00      MOV CL,byte ptr [EDI + EAX*0x1 + 0x7e1984]
004CCED4  84 C9                     TEST CL,CL
004CCED6  0F 84 9F 00 00 00         JZ 0x004ccf7b
LAB_004ccedc:
004CCEDC  83 BE AC 05 00 00 50      CMP dword ptr [ESI + 0x5ac],0x50
004CCEE3  75 11                     JNZ 0x004ccef6
004CCEE5  8A 56 24                  MOV DL,byte ptr [ESI + 0x24]
004CCEE8  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004CCEEE  6A 28                     PUSH 0x28
004CCEF0  52                        PUSH EDX
004CCEF1  E8 10 72 F3 FF            CALL 0x00404106
LAB_004ccef6:
004CCEF6  8B 86 AC 05 00 00         MOV EAX,dword ptr [ESI + 0x5ac]
004CCEFC  83 F8 6F                  CMP EAX,0x6f
004CCEFF  74 05                     JZ 0x004ccf06
004CCF01  83 F8 73                  CMP EAX,0x73
004CCF04  75 07                     JNZ 0x004ccf0d
LAB_004ccf06:
004CCF06  8B CE                     MOV ECX,ESI
004CCF08  E8 E5 58 F3 FF            CALL 0x004027f2
LAB_004ccf0d:
004CCF0D  8B 86 AC 05 00 00         MOV EAX,dword ptr [ESI + 0x5ac]
004CCF13  83 F8 36                  CMP EAX,0x36
004CCF16  74 05                     JZ 0x004ccf1d
004CCF18  83 F8 5D                  CMP EAX,0x5d
004CCF1B  75 45                     JNZ 0x004ccf62
LAB_004ccf1d:
004CCF1D  8B 86 39 02 00 00         MOV EAX,dword ptr [ESI + 0x239]
004CCF23  8B 56 24                  MOV EDX,dword ptr [ESI + 0x24]
004CCF26  8B 0C 85 B0 8F 79 00      MOV ECX,dword ptr [EAX*0x4 + 0x798fb0]
004CCF2D  51                        PUSH ECX
004CCF2E  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004CCF34  52                        PUSH EDX
004CCF35  E8 31 49 F3 FF            CALL 0x0040186b
004CCF3A  8B 8E 39 02 00 00         MOV ECX,dword ptr [ESI + 0x239]
004CCF40  8D 14 48                  LEA EDX,[EAX + ECX*0x2]
004CCF43  8B CE                     MOV ECX,ESI
004CCF45  8B 04 95 98 8F 79 00      MOV EAX,dword ptr [EDX*0x4 + 0x798f98]
004CCF4C  50                        PUSH EAX
004CCF4D  89 86 D0 04 00 00         MOV dword ptr [ESI + 0x4d0],EAX
004CCF53  E8 DD 88 F3 FF            CALL 0x00405835
004CCF58  C7 86 DC 04 00 00 01 00 00 00  MOV dword ptr [ESI + 0x4dc],0x1
LAB_004ccf62:
004CCF62  8B 86 AC 05 00 00         MOV EAX,dword ptr [ESI + 0x5ac]
004CCF68  83 F8 3D                  CMP EAX,0x3d
004CCF6B  74 05                     JZ 0x004ccf72
004CCF6D  83 F8 5D                  CMP EAX,0x5d
004CCF70  75 2D                     JNZ 0x004ccf9f
LAB_004ccf72:
004CCF72  8B CE                     MOV ECX,ESI
004CCF74  E8 9F 4B F3 FF            CALL 0x00401b18
004CCF79  EB 24                     JMP 0x004ccf9f
LAB_004ccf7b:
004CCF7B  89 9E 61 02 00 00         MOV dword ptr [ESI + 0x261],EBX
004CCF81  89 9E E1 02 00 00         MOV dword ptr [ESI + 0x2e1],EBX
004CCF87  83 BE AC 05 00 00 3C      CMP dword ptr [ESI + 0x5ac],0x3c
004CCF8E  75 0F                     JNZ 0x004ccf9f
004CCF90  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
004CCF93  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004CCF99  50                        PUSH EAX
004CCF9A  E8 62 76 F3 FF            CALL 0x00404601
LAB_004ccf9f:
004CCF9F  39 9E 08 04 00 00         CMP dword ptr [ESI + 0x408],EBX
004CCFA5  0F 84 8D 00 00 00         JZ 0x004cd038
004CCFAB  8B 4E 24                  MOV ECX,dword ptr [ESI + 0x24]
004CCFAE  8B 86 3D 02 00 00         MOV EAX,dword ptr [ESI + 0x23d]
004CCFB4  3B C8                     CMP ECX,EAX
004CCFB6  89 5D 0C                  MOV dword ptr [EBP + 0xc],EBX
004CCFB9  74 45                     JZ 0x004cd000
004CCFBB  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004CCFC1  8A D0                     MOV DL,AL
004CCFC3  52                        PUSH EDX
004CCFC4  E8 EE 79 F3 FF            CALL 0x004049b7
004CCFC9  8A C8                     MOV CL,AL
004CCFCB  8B 86 35 02 00 00         MOV EAX,dword ptr [ESI + 0x235]
004CCFD1  81 E1 FF 00 00 00         AND ECX,0xff
004CCFD7  8D 14 40                  LEA EDX,[EAX + EAX*0x2]
004CCFDA  03 CA                     ADD ECX,EDX
004CCFDC  8B C1                     MOV EAX,ECX
004CCFDE  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004CCFE4  8D 3C 40                  LEA EDI,[EAX + EAX*0x2]
004CCFE7  8A 46 24                  MOV AL,byte ptr [ESI + 0x24]
004CCFEA  50                        PUSH EAX
004CCFEB  E8 C7 79 F3 FF            CALL 0x004049b7
004CCFF0  25 FF 00 00 00            AND EAX,0xff
004CCFF5  8A 8C 07 84 19 7E 00      MOV CL,byte ptr [EDI + EAX*0x1 + 0x7e1984]
004CCFFC  84 C9                     TEST CL,CL
004CCFFE  74 31                     JZ 0x004cd031
LAB_004cd000:
004CD000  8B 96 0C 04 00 00         MOV EDX,dword ptr [ESI + 0x40c]
004CD006  8D 4D 0C                  LEA ECX,[EBP + 0xc]
004CD009  51                        PUSH ECX
004CD00A  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
004CD010  52                        PUSH EDX
004CD011  E8 BA 92 21 00            CALL 0x006e62d0
004CD016  85 C0                     TEST EAX,EAX
004CD018  75 1E                     JNZ 0x004cd038
004CD01A  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
004CD01D  3B CB                     CMP ECX,EBX
004CD01F  74 17                     JZ 0x004cd038
004CD021  66 8B 46 32               MOV AX,word ptr [ESI + 0x32]
004CD025  8B 56 24                  MOV EDX,dword ptr [ESI + 0x24]
004CD028  50                        PUSH EAX
004CD029  52                        PUSH EDX
004CD02A  E8 B7 4A F3 FF            CALL 0x00401ae6
004CD02F  EB 07                     JMP 0x004cd038
LAB_004cd031:
004CD031  8B CE                     MOV ECX,ESI
004CD033  E8 FB 89 F3 FF            CALL 0x00405a33
LAB_004cd038:
004CD038  83 BE AC 05 00 00 6A      CMP dword ptr [ESI + 0x5ac],0x6a
004CD03F  75 3D                     JNZ 0x004cd07e
004CD041  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
004CD047  8B 96 D4 04 00 00         MOV EDX,dword ptr [ESI + 0x4d4]
004CD04D  8B 81 E4 00 00 00         MOV EAX,dword ptr [ECX + 0xe4]
004CD053  3B C2                     CMP EAX,EDX
004CD055  72 27                     JC 0x004cd07e
004CD057  8B 86 D0 04 00 00         MOV EAX,dword ptr [ESI + 0x4d0]
004CD05D  8D 55 0C                  LEA EDX,[EBP + 0xc]
004CD060  52                        PUSH EDX
004CD061  50                        PUSH EAX
004CD062  E8 69 92 21 00            CALL 0x006e62d0
004CD067  85 C0                     TEST EAX,EAX
004CD069  75 13                     JNZ 0x004cd07e
004CD06B  8B 56 24                  MOV EDX,dword ptr [ESI + 0x24]
004CD06E  33 C9                     XOR ECX,ECX
004CD070  66 8B 4E 32               MOV CX,word ptr [ESI + 0x32]
004CD074  51                        PUSH ECX
004CD075  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
004CD078  52                        PUSH EDX
004CD079  E8 11 42 F3 FF            CALL 0x0040128f
LAB_004cd07e:
004CD07E  83 BE AC 05 00 00 41      CMP dword ptr [ESI + 0x5ac],0x41
004CD085  75 4B                     JNZ 0x004cd0d2
004CD087  39 9E E4 04 00 00         CMP dword ptr [ESI + 0x4e4],EBX
004CD08D  7E 43                     JLE 0x004cd0d2
004CD08F  8D BE D0 04 00 00         LEA EDI,[ESI + 0x4d0]
LAB_004cd095:
004CD095  8B 07                     MOV EAX,dword ptr [EDI]
004CD097  85 C0                     TEST EAX,EAX
004CD099  74 27                     JZ 0x004cd0c2
004CD09B  8D 4D 0C                  LEA ECX,[EBP + 0xc]
004CD09E  51                        PUSH ECX
004CD09F  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
004CD0A5  50                        PUSH EAX
004CD0A6  E8 25 92 21 00            CALL 0x006e62d0
004CD0AB  85 C0                     TEST EAX,EAX
004CD0AD  75 13                     JNZ 0x004cd0c2
004CD0AF  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
004CD0B2  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
004CD0B5  33 D2                     XOR EDX,EDX
004CD0B7  66 8B 56 32               MOV DX,word ptr [ESI + 0x32]
004CD0BB  52                        PUSH EDX
004CD0BC  50                        PUSH EAX
004CD0BD  E8 7A 3F F3 FF            CALL 0x0040103c
LAB_004cd0c2:
004CD0C2  8B 86 E4 04 00 00         MOV EAX,dword ptr [ESI + 0x4e4]
004CD0C8  43                        INC EBX
004CD0C9  83 C7 04                  ADD EDI,0x4
004CD0CC  3B D8                     CMP EBX,EAX
004CD0CE  7C C5                     JL 0x004cd095
004CD0D0  33 DB                     XOR EBX,EBX
LAB_004cd0d2:
004CD0D2  83 BE AC 05 00 00 69      CMP dword ptr [ESI + 0x5ac],0x69
004CD0D9  75 2B                     JNZ 0x004cd106
004CD0DB  8B 96 EC 04 00 00         MOV EDX,dword ptr [ESI + 0x4ec]
004CD0E1  8D 4D 0C                  LEA ECX,[EBP + 0xc]
004CD0E4  51                        PUSH ECX
004CD0E5  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
004CD0EB  52                        PUSH EDX
004CD0EC  E8 DF 91 21 00            CALL 0x006e62d0
004CD0F1  85 C0                     TEST EAX,EAX
004CD0F3  75 11                     JNZ 0x004cd106
004CD0F5  66 8B 46 32               MOV AX,word ptr [ESI + 0x32]
004CD0F9  8B 4E 24                  MOV ECX,dword ptr [ESI + 0x24]
004CD0FC  50                        PUSH EAX
004CD0FD  51                        PUSH ECX
004CD0FE  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
004CD101  E8 52 82 F3 FF            CALL 0x00405358
LAB_004cd106:
004CD106  83 BE AC 05 00 00 70      CMP dword ptr [ESI + 0x5ac],0x70
004CD10D  75 2F                     JNZ 0x004cd13e
004CD10F  8B 86 F0 04 00 00         MOV EAX,dword ptr [ESI + 0x4f0]
004CD115  3B C3                     CMP EAX,EBX
004CD117  74 25                     JZ 0x004cd13e
004CD119  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
004CD11F  8D 55 0C                  LEA EDX,[EBP + 0xc]
004CD122  52                        PUSH EDX
004CD123  50                        PUSH EAX
004CD124  E8 A7 91 21 00            CALL 0x006e62d0
004CD129  85 C0                     TEST EAX,EAX
004CD12B  75 11                     JNZ 0x004cd13e
004CD12D  66 8B 46 32               MOV AX,word ptr [ESI + 0x32]
004CD131  8B 4E 24                  MOV ECX,dword ptr [ESI + 0x24]
004CD134  50                        PUSH EAX
004CD135  51                        PUSH ECX
004CD136  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
004CD139  E8 EA 7F F3 FF            CALL 0x00405128
LAB_004cd13e:
004CD13E  8B 56 24                  MOV EDX,dword ptr [ESI + 0x24]
004CD141  8B 86 3D 02 00 00         MOV EAX,dword ptr [ESI + 0x23d]
004CD147  3B D0                     CMP EDX,EAX
004CD149  74 43                     JZ 0x004cd18e
004CD14B  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004CD151  50                        PUSH EAX
004CD152  E8 60 78 F3 FF            CALL 0x004049b7
004CD157  8A C8                     MOV CL,AL
004CD159  8B 86 35 02 00 00         MOV EAX,dword ptr [ESI + 0x235]
004CD15F  81 E1 FF 00 00 00         AND ECX,0xff
004CD165  8D 14 40                  LEA EDX,[EAX + EAX*0x2]
004CD168  03 CA                     ADD ECX,EDX
004CD16A  8B C1                     MOV EAX,ECX
004CD16C  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004CD172  8D 3C 40                  LEA EDI,[EAX + EAX*0x2]
004CD175  8A 46 24                  MOV AL,byte ptr [ESI + 0x24]
004CD178  50                        PUSH EAX
004CD179  E8 39 78 F3 FF            CALL 0x004049b7
004CD17E  25 FF 00 00 00            AND EAX,0xff
004CD183  8A 8C 07 84 19 7E 00      MOV CL,byte ptr [EDI + EAX*0x1 + 0x7e1984]
004CD18A  84 C9                     TEST CL,CL
004CD18C  74 49                     JZ 0x004cd1d7
LAB_004cd18e:
004CD18E  8B 86 AC 05 00 00         MOV EAX,dword ptr [ESI + 0x5ac]
004CD194  B9 02 00 00 00            MOV ECX,0x2
004CD199  83 F8 4D                  CMP EAX,0x4d
004CD19C  75 08                     JNZ 0x004cd1a6
004CD19E  39 8E D0 04 00 00         CMP dword ptr [ESI + 0x4d0],ECX
004CD1A4  75 31                     JNZ 0x004cd1d7
LAB_004cd1a6:
004CD1A6  83 F8 4C                  CMP EAX,0x4c
004CD1A9  75 08                     JNZ 0x004cd1b3
004CD1AB  39 8E D0 04 00 00         CMP dword ptr [ESI + 0x4d0],ECX
004CD1B1  75 24                     JNZ 0x004cd1d7
LAB_004cd1b3:
004CD1B3  83 F8 43                  CMP EAX,0x43
004CD1B6  75 08                     JNZ 0x004cd1c0
004CD1B8  39 8E D0 04 00 00         CMP dword ptr [ESI + 0x4d0],ECX
004CD1BE  75 17                     JNZ 0x004cd1d7
LAB_004cd1c0:
004CD1C0  8B 16                     MOV EDX,dword ptr [ESI]
004CD1C2  8B CE                     MOV ECX,ESI
004CD1C4  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
004CD1C7  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004CD1CD  50                        PUSH EAX
004CD1CE  8A 46 24                  MOV AL,byte ptr [ESI + 0x24]
004CD1D1  50                        PUSH EAX
004CD1D2  E8 62 8C F3 FF            CALL 0x00405e39
LAB_004cd1d7:
004CD1D7  8B CE                     MOV ECX,ESI
004CD1D9  E8 39 7C F3 FF            CALL 0x00404e17
004CD1DE  6A 01                     PUSH 0x1
004CD1E0  8B CE                     MOV ECX,ESI
004CD1E2  E8 10 5B F3 FF            CALL 0x00402cf7
004CD1E7  8B 4E 10                  MOV ECX,dword ptr [ESI + 0x10]
004CD1EA  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
004CD1ED  33 D2                     XOR EDX,EDX
004CD1EF  8A 91 2D 11 00 00         MOV DL,byte ptr [ECX + 0x112d]
004CD1F5  3B C2                     CMP EAX,EDX
004CD1F7  75 0C                     JNZ 0x004cd205
004CD1F9  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004CD1FF  50                        PUSH EAX
004CD200  E8 88 79 F3 FF            CALL 0x00404b8d
LAB_004cd205:
004CD205  5F                        POP EDI
004CD206  5E                        POP ESI
004CD207  5B                        POP EBX
004CD208  8B E5                     MOV ESP,EBP
004CD20A  5D                        POP EBP
004CD20B  C2 08 00                  RET 0x8
