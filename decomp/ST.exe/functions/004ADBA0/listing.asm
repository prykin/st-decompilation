STT3DSprC::RestoreSpr:
004ADBA0  55                        PUSH EBP
004ADBA1  8B EC                     MOV EBP,ESP
004ADBA3  83 EC 64                  SUB ESP,0x64
004ADBA6  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
004ADBAB  53                        PUSH EBX
004ADBAC  56                        PUSH ESI
004ADBAD  89 4D E0                  MOV dword ptr [EBP + -0x20],ECX
004ADBB0  57                        PUSH EDI
004ADBB1  8D 55 A0                  LEA EDX,[EBP + -0x60]
004ADBB4  8D 4D 9C                  LEA ECX,[EBP + -0x64]
004ADBB7  6A 00                     PUSH 0x0
004ADBB9  52                        PUSH EDX
004ADBBA  89 45 9C                  MOV dword ptr [EBP + -0x64],EAX
004ADBBD  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
004ADBC3  E8 28 FC 27 00            CALL 0x0072d7f0
004ADBC8  83 C4 08                  ADD ESP,0x8
004ADBCB  85 C0                     TEST EAX,EAX
004ADBCD  0F 85 6E 03 00 00         JNZ 0x004adf41
004ADBD3  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
004ADBD6  8B 5D E0                  MOV EBX,dword ptr [EBP + -0x20]
004ADBD9  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
004ADBDC  8B 06                     MOV EAX,dword ptr [ESI]
004ADBDE  89 43 04                  MOV dword ptr [EBX + 0x4],EAX
004ADBE1  8B 4E 04                  MOV ECX,dword ptr [ESI + 0x4]
004ADBE4  89 4B 08                  MOV dword ptr [EBX + 0x8],ECX
004ADBE7  8A 56 08                  MOV DL,byte ptr [ESI + 0x8]
004ADBEA  88 53 10                  MOV byte ptr [EBX + 0x10],DL
004ADBED  8A 46 09                  MOV AL,byte ptr [ESI + 0x9]
004ADBF0  88 43 11                  MOV byte ptr [EBX + 0x11],AL
004ADBF3  8A 4E 0A                  MOV CL,byte ptr [ESI + 0xa]
004ADBF6  88 4B 12                  MOV byte ptr [EBX + 0x12],CL
004ADBF9  8B 56 0B                  MOV EDX,dword ptr [ESI + 0xb]
004ADBFC  89 53 0C                  MOV dword ptr [EBX + 0xc],EDX
004ADBFF  8B 46 0F                  MOV EAX,dword ptr [ESI + 0xf]
004ADC02  89 43 14                  MOV dword ptr [EBX + 0x14],EAX
004ADC05  8B 4E 13                  MOV ECX,dword ptr [ESI + 0x13]
004ADC08  89 4B 24                  MOV dword ptr [EBX + 0x24],ECX
004ADC0B  8B 56 17                  MOV EDX,dword ptr [ESI + 0x17]
004ADC0E  89 53 28                  MOV dword ptr [EBX + 0x28],EDX
004ADC11  8B 46 1B                  MOV EAX,dword ptr [ESI + 0x1b]
004ADC14  89 43 2C                  MOV dword ptr [EBX + 0x2c],EAX
004ADC17  8A 4E 1F                  MOV CL,byte ptr [ESI + 0x1f]
004ADC1A  88 4B 13                  MOV byte ptr [EBX + 0x13],CL
004ADC1D  8B 56 20                  MOV EDX,dword ptr [ESI + 0x20]
004ADC20  8B 4B 2C                  MOV ECX,dword ptr [EBX + 0x2c]
004ADC23  89 53 30                  MOV dword ptr [EBX + 0x30],EDX
004ADC26  8B 47 18                  MOV EAX,dword ptr [EDI + 0x18]
004ADC29  8B 53 28                  MOV EDX,dword ptr [EBX + 0x28]
004ADC2C  89 43 38                  MOV dword ptr [EBX + 0x38],EAX
004ADC2F  8B 43 24                  MOV EAX,dword ptr [EBX + 0x24]
004ADC32  51                        PUSH ECX
004ADC33  52                        PUSH EDX
004ADC34  50                        PUSH EAX
004ADC35  8B CB                     MOV ECX,EBX
004ADC37  E8 9D 69 F5 FF            CALL 0x004045d9
004ADC3C  8B 4B 08                  MOV ECX,dword ptr [EBX + 0x8]
004ADC3F  8B 53 04                  MOV EDX,dword ptr [EBX + 0x4]
004ADC42  8B 43 18                  MOV EAX,dword ptr [EBX + 0x18]
004ADC45  51                        PUSH ECX
004ADC46  8B 4B 3C                  MOV ECX,dword ptr [EBX + 0x3c]
004ADC49  52                        PUSH EDX
004ADC4A  50                        PUSH EAX
004ADC4B  E8 E0 BB 23 00            CALL 0x006e9830
004ADC50  8B 47 04                  MOV EAX,dword ptr [EDI + 0x4]
004ADC53  85 C0                     TEST EAX,EAX
004ADC55  74 0C                     JZ 0x004adc63
004ADC57  8B 4F 08                  MOV ECX,dword ptr [EDI + 0x8]
004ADC5A  51                        PUSH ECX
004ADC5B  50                        PUSH EAX
004ADC5C  8B CB                     MOV ECX,EBX
004ADC5E  E8 0A 35 F5 FF            CALL 0x0040116d
LAB_004adc63:
004ADC63  8B 47 0C                  MOV EAX,dword ptr [EDI + 0xc]
004ADC66  85 C0                     TEST EAX,EAX
004ADC68  74 08                     JZ 0x004adc72
004ADC6A  50                        PUSH EAX
004ADC6B  8B CB                     MOV ECX,EBX
004ADC6D  E8 37 80 F5 FF            CALL 0x00405ca9
LAB_004adc72:
004ADC72  8B 47 10                  MOV EAX,dword ptr [EDI + 0x10]
004ADC75  85 C0                     TEST EAX,EAX
004ADC77  74 0C                     JZ 0x004adc85
004ADC79  8B 57 14                  MOV EDX,dword ptr [EDI + 0x14]
004ADC7C  8B CB                     MOV ECX,EBX
004ADC7E  52                        PUSH EDX
004ADC7F  50                        PUSH EAX
004ADC80  E8 69 68 F5 FF            CALL 0x004044ee
LAB_004adc85:
004ADC85  8D 56 24                  LEA EDX,[ESI + 0x24]
004ADC88  8B 73 14                  MOV ESI,dword ptr [EBX + 0x14]
004ADC8B  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
004ADC8E  8D 04 F6                  LEA EAX,[ESI + ESI*0x8]
004ADC91  85 F6                     TEST ESI,ESI
004ADC93  8D 14 82                  LEA EDX,[EDX + EAX*0x4]
004ADC96  89 55 E8                  MOV dword ptr [EBP + -0x18],EDX
004ADC99  89 55 F0                  MOV dword ptr [EBP + -0x10],EDX
004ADC9C  7E 23                     JLE 0x004adcc1
004ADC9E  89 75 EC                  MOV dword ptr [EBP + -0x14],ESI
LAB_004adca1:
004ADCA1  8B 7D F0                  MOV EDI,dword ptr [EBP + -0x10]
004ADCA4  83 C9 FF                  OR ECX,0xffffffff
004ADCA7  33 C0                     XOR EAX,EAX
004ADCA9  F2 AE                     SCASB.REPNE ES:EDI
004ADCAB  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
004ADCAE  F7 D1                     NOT ECX
004ADCB0  49                        DEC ECX
004ADCB1  8D 4C 08 01               LEA ECX,[EAX + ECX*0x1 + 0x1]
004ADCB5  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
004ADCB8  48                        DEC EAX
004ADCB9  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
004ADCBC  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
004ADCBF  75 E0                     JNZ 0x004adca1
LAB_004adcc1:
004ADCC1  85 F6                     TEST ESI,ESI
004ADCC3  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
004ADCCA  0F 8E 29 02 00 00         JLE 0x004adef9
004ADCD0  33 F6                     XOR ESI,ESI
004ADCD2  89 75 EC                  MOV dword ptr [EBP + -0x14],ESI
004ADCD5  EB 03                     JMP 0x004adcda
LAB_004adcd7:
004ADCD7  8B 55 E8                  MOV EDX,dword ptr [EBP + -0x18]
LAB_004adcda:
004ADCDA  8B FA                     MOV EDI,EDX
004ADCDC  83 C9 FF                  OR ECX,0xffffffff
004ADCDF  33 C0                     XOR EAX,EAX
004ADCE1  C7 45 E4 00 00 00 00      MOV dword ptr [EBP + -0x1c],0x0
004ADCE8  F2 AE                     SCASB.REPNE ES:EDI
004ADCEA  F7 D1                     NOT ECX
004ADCEC  49                        DEC ECX
004ADCED  0F 84 9F 00 00 00         JZ 0x004add92
004ADCF3  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
004ADCF6  8B 43 20                  MOV EAX,dword ptr [EBX + 0x20]
004ADCF9  8A 49 04                  MOV CL,byte ptr [ECX + 0x4]
004ADCFC  88 4C 06 0C               MOV byte ptr [ESI + EAX*0x1 + 0xc],CL
004ADD00  8B 43 20                  MOV EAX,dword ptr [EBX + 0x20]
004ADD03  8A 4C 06 0C               MOV CL,byte ptr [ESI + EAX*0x1 + 0xc]
004ADD07  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
004ADD0A  51                        PUSH ECX
004ADD0B  52                        PUSH EDX
004ADD0C  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
004ADD0F  8B 0A                     MOV ECX,dword ptr [EDX]
004ADD11  8B 14 81                  MOV EDX,dword ptr [ECX + EAX*0x4]
004ADD14  8B CB                     MOV ECX,EBX
004ADD16  52                        PUSH EDX
004ADD17  50                        PUSH EAX
004ADD18  E8 66 64 F5 FF            CALL 0x00404183
004ADD1D  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
004ADD20  8B 53 20                  MOV EDX,dword ptr [EBX + 0x20]
004ADD23  8B 75 F0                  MOV ESI,dword ptr [EBP + -0x10]
004ADD26  8B 08                     MOV ECX,dword ptr [EAX]
004ADD28  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
004ADD2B  C1 E1 02                  SHL ECX,0x2
004ADD2E  8B 7C 10 04               MOV EDI,dword ptr [EAX + EDX*0x1 + 0x4]
004ADD32  89 4D E4                  MOV dword ptr [EBP + -0x1c],ECX
004ADD35  8B D1                     MOV EDX,ECX
004ADD37  C1 E9 02                  SHR ECX,0x2
004ADD3A  F3 A5                     MOVSD.REP ES:EDI,ESI
004ADD3C  8B CA                     MOV ECX,EDX
004ADD3E  83 E1 03                  AND ECX,0x3
004ADD41  F3 A4                     MOVSB.REP ES:EDI,ESI
004ADD43  8B 75 F4                  MOV ESI,dword ptr [EBP + -0xc]
004ADD46  8B 4B 20                  MOV ECX,dword ptr [EBX + 0x20]
004ADD49  8B 56 0B                  MOV EDX,dword ptr [ESI + 0xb]
004ADD4C  89 54 08 10               MOV dword ptr [EAX + ECX*0x1 + 0x10],EDX
004ADD50  8B 4B 20                  MOV ECX,dword ptr [EBX + 0x20]
004ADD53  8B 56 0F                  MOV EDX,dword ptr [ESI + 0xf]
004ADD56  89 54 08 14               MOV dword ptr [EAX + ECX*0x1 + 0x14],EDX
004ADD5A  8B 4B 20                  MOV ECX,dword ptr [EBX + 0x20]
004ADD5D  8B 56 13                  MOV EDX,dword ptr [ESI + 0x13]
004ADD60  89 54 08 18               MOV dword ptr [EAX + ECX*0x1 + 0x18],EDX
004ADD64  8B 4B 20                  MOV ECX,dword ptr [EBX + 0x20]
004ADD67  8B 56 1B                  MOV EDX,dword ptr [ESI + 0x1b]
004ADD6A  89 54 08 20               MOV dword ptr [EAX + ECX*0x1 + 0x20],EDX
004ADD6E  8B 46 17                  MOV EAX,dword ptr [ESI + 0x17]
004ADD71  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
004ADD74  50                        PUSH EAX
004ADD75  51                        PUSH ECX
004ADD76  8B CB                     MOV ECX,EBX
004ADD78  E8 C3 74 F5 FF            CALL 0x00405240
004ADD7D  8A 46 05                  MOV AL,byte ptr [ESI + 0x5]
004ADD80  84 C0                     TEST AL,AL
004ADD82  75 0B                     JNZ 0x004add8f
004ADD84  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
004ADD87  8B CB                     MOV ECX,EBX
004ADD89  52                        PUSH EDX
004ADD8A  E8 D5 64 F5 FF            CALL 0x00404264
LAB_004add8f:
004ADD8F  8B 75 EC                  MOV ESI,dword ptr [EBP + -0x14]
LAB_004add92:
004ADD92  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
004ADD95  8A 41 06                  MOV AL,byte ptr [ECX + 0x6]
004ADD98  84 C0                     TEST AL,AL
004ADD9A  74 0E                     JZ 0x004addaa
004ADD9C  8B 43 20                  MOV EAX,dword ptr [EBX + 0x20]
004ADD9F  80 4C 06 0E 01            OR byte ptr [ESI + EAX*0x1 + 0xe],0x1
004ADDA4  8D 44 06 0E               LEA EAX,[ESI + EAX*0x1 + 0xe]
004ADDA8  EB 0E                     JMP 0x004addb8
LAB_004addaa:
004ADDAA  8B 53 20                  MOV EDX,dword ptr [EBX + 0x20]
004ADDAD  66 81 64 16 0E FE FF      AND word ptr [ESI + EDX*0x1 + 0xe],0xfffe
004ADDB4  8D 44 16 0E               LEA EAX,[ESI + EDX*0x1 + 0xe]
LAB_004addb8:
004ADDB8  8B 43 20                  MOV EAX,dword ptr [EBX + 0x20]
004ADDBB  8A 51 07                  MOV DL,byte ptr [ECX + 0x7]
004ADDBE  88 54 06 0D               MOV byte ptr [ESI + EAX*0x1 + 0xd],DL
004ADDC2  8A 41 08                  MOV AL,byte ptr [ECX + 0x8]
004ADDC5  84 C0                     TEST AL,AL
004ADDC7  74 0E                     JZ 0x004addd7
004ADDC9  8B 43 20                  MOV EAX,dword ptr [EBX + 0x20]
004ADDCC  80 4C 06 0E 02            OR byte ptr [ESI + EAX*0x1 + 0xe],0x2
004ADDD1  8D 44 06 0E               LEA EAX,[ESI + EAX*0x1 + 0xe]
004ADDD5  EB 0E                     JMP 0x004adde5
LAB_004addd7:
004ADDD7  8B 53 20                  MOV EDX,dword ptr [EBX + 0x20]
004ADDDA  66 81 64 16 0E FD FF      AND word ptr [ESI + EDX*0x1 + 0xe],0xfffd
004ADDE1  8D 44 16 0E               LEA EAX,[ESI + EDX*0x1 + 0xe]
LAB_004adde5:
004ADDE5  8A 41 09                  MOV AL,byte ptr [ECX + 0x9]
004ADDE8  84 C0                     TEST AL,AL
004ADDEA  74 0E                     JZ 0x004addfa
004ADDEC  8B 43 20                  MOV EAX,dword ptr [EBX + 0x20]
004ADDEF  80 4C 06 0F 02            OR byte ptr [ESI + EAX*0x1 + 0xf],0x2
004ADDF4  8D 44 06 0E               LEA EAX,[ESI + EAX*0x1 + 0xe]
004ADDF8  EB 0E                     JMP 0x004ade08
LAB_004addfa:
004ADDFA  8B 53 20                  MOV EDX,dword ptr [EBX + 0x20]
004ADDFD  66 81 64 16 0E FF FD      AND word ptr [ESI + EDX*0x1 + 0xe],0xfdff
004ADE04  8D 44 16 0E               LEA EAX,[ESI + EDX*0x1 + 0xe]
LAB_004ade08:
004ADE08  8A 41 0A                  MOV AL,byte ptr [ECX + 0xa]
004ADE0B  84 C0                     TEST AL,AL
004ADE0D  74 0E                     JZ 0x004ade1d
004ADE0F  8B 43 20                  MOV EAX,dword ptr [EBX + 0x20]
004ADE12  80 4C 06 0E 04            OR byte ptr [ESI + EAX*0x1 + 0xe],0x4
004ADE17  8D 44 06 0E               LEA EAX,[ESI + EAX*0x1 + 0xe]
004ADE1B  EB 0E                     JMP 0x004ade2b
LAB_004ade1d:
004ADE1D  8B 53 20                  MOV EDX,dword ptr [EBX + 0x20]
004ADE20  66 81 64 16 0E FB FF      AND word ptr [ESI + EDX*0x1 + 0xe],0xfffb
004ADE27  8D 44 16 0E               LEA EAX,[ESI + EDX*0x1 + 0xe]
LAB_004ade2b:
004ADE2B  8A 41 1F                  MOV AL,byte ptr [ECX + 0x1f]
004ADE2E  8B CB                     MOV ECX,EBX
004ADE30  84 C0                     TEST AL,AL
004ADE32  8A 45 FC                  MOV AL,byte ptr [EBP + -0x4]
004ADE35  88 45 F8                  MOV byte ptr [EBP + -0x8],AL
004ADE38  50                        PUSH EAX
004ADE39  75 07                     JNZ 0x004ade42
004ADE3B  E8 6E 3D F5 FF            CALL 0x00401bae
004ADE40  EB 05                     JMP 0x004ade47
LAB_004ade42:
004ADE42  E8 93 61 F5 FF            CALL 0x00403fda
LAB_004ade47:
004ADE47  8B 7D F4                  MOV EDI,dword ptr [EBP + -0xc]
004ADE4A  80 7F 20 01               CMP byte ptr [EDI + 0x20],0x1
004ADE4E  75 0D                     JNZ 0x004ade5d
004ADE50  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
004ADE53  8B CB                     MOV ECX,EBX
004ADE55  50                        PUSH EAX
004ADE56  E8 A2 5C F5 FF            CALL 0x00403afd
004ADE5B  EB 0B                     JMP 0x004ade68
LAB_004ade5d:
004ADE5D  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
004ADE60  51                        PUSH ECX
004ADE61  8B CB                     MOV ECX,EBX
004ADE63  E8 B7 67 F5 FF            CALL 0x0040461f
LAB_004ade68:
004ADE68  80 7F 21 01               CMP byte ptr [EDI + 0x21],0x1
004ADE6C  75 0D                     JNZ 0x004ade7b
004ADE6E  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
004ADE71  8B CB                     MOV ECX,EBX
004ADE73  52                        PUSH EDX
004ADE74  E8 BA 53 F5 FF            CALL 0x00403233
004ADE79  EB 0B                     JMP 0x004ade86
LAB_004ade7b:
004ADE7B  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
004ADE7E  8B CB                     MOV ECX,EBX
004ADE80  50                        PUSH EAX
004ADE81  E8 CB 3A F5 FF            CALL 0x00401951
LAB_004ade86:
004ADE86  80 7F 22 01               CMP byte ptr [EDI + 0x22],0x1
004ADE8A  75 0B                     JNZ 0x004ade97
004ADE8C  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
004ADE8F  51                        PUSH ECX
004ADE90  8B CB                     MOV ECX,EBX
004ADE92  E8 CA 48 F5 FF            CALL 0x00402761
LAB_004ade97:
004ADE97  8A 47 23                  MOV AL,byte ptr [EDI + 0x23]
004ADE9A  84 C0                     TEST AL,AL
004ADE9C  74 0E                     JZ 0x004adeac
004ADE9E  8B 53 20                  MOV EDX,dword ptr [EBX + 0x20]
004ADEA1  80 4C 16 0F 01            OR byte ptr [ESI + EDX*0x1 + 0xf],0x1
004ADEA6  8D 44 16 0E               LEA EAX,[ESI + EDX*0x1 + 0xe]
004ADEAA  EB 0E                     JMP 0x004adeba
LAB_004adeac:
004ADEAC  8B 43 20                  MOV EAX,dword ptr [EBX + 0x20]
004ADEAF  66 81 64 06 0E FF FE      AND word ptr [ESI + EAX*0x1 + 0xe],0xfeff
004ADEB6  8D 44 06 0E               LEA EAX,[ESI + EAX*0x1 + 0xe]
LAB_004adeba:
004ADEBA  8B 55 E8                  MOV EDX,dword ptr [EBP + -0x18]
004ADEBD  83 C7 24                  ADD EDI,0x24
004ADEC0  89 7D F4                  MOV dword ptr [EBP + -0xc],EDI
004ADEC3  8B FA                     MOV EDI,EDX
004ADEC5  83 C9 FF                  OR ECX,0xffffffff
004ADEC8  33 C0                     XOR EAX,EAX
004ADECA  F2 AE                     SCASB.REPNE ES:EDI
004ADECC  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
004ADECF  83 C6 24                  ADD ESI,0x24
004ADED2  F7 D1                     NOT ECX
004ADED4  49                        DEC ECX
004ADED5  89 75 EC                  MOV dword ptr [EBP + -0x14],ESI
004ADED8  8D 4C 0A 01               LEA ECX,[EDX + ECX*0x1 + 0x1]
004ADEDC  8B 55 E4                  MOV EDX,dword ptr [EBP + -0x1c]
004ADEDF  03 C2                     ADD EAX,EDX
004ADEE1  89 4D E8                  MOV dword ptr [EBP + -0x18],ECX
004ADEE4  8B 4B 14                  MOV ECX,dword ptr [EBX + 0x14]
004ADEE7  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
004ADEEA  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
004ADEED  40                        INC EAX
004ADEEE  3B C1                     CMP EAX,ECX
004ADEF0  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
004ADEF3  0F 8C DE FD FF FF         JL 0x004adcd7
LAB_004adef9:
004ADEF9  83 7B 0C FF               CMP dword ptr [EBX + 0xc],-0x1
004ADEFD  7E 31                     JLE 0x004adf30
004ADEFF  8B 43 14                  MOV EAX,dword ptr [EBX + 0x14]
004ADF02  33 F6                     XOR ESI,ESI
004ADF04  85 C0                     TEST EAX,EAX
004ADF06  7E 28                     JLE 0x004adf30
004ADF08  33 FF                     XOR EDI,EDI
LAB_004adf0a:
004ADF0A  8B 43 20                  MOV EAX,dword ptr [EBX + 0x20]
004ADF0D  F6 44 38 0F 01            TEST byte ptr [EAX + EDI*0x1 + 0xf],0x1
004ADF12  74 11                     JZ 0x004adf25
004ADF14  8B 4B 0C                  MOV ECX,dword ptr [EBX + 0xc]
004ADF17  8B 53 18                  MOV EDX,dword ptr [EBX + 0x18]
004ADF1A  51                        PUSH ECX
004ADF1B  8B 4B 3C                  MOV ECX,dword ptr [EBX + 0x3c]
004ADF1E  56                        PUSH ESI
004ADF1F  52                        PUSH EDX
004ADF20  E8 9B B4 23 00            CALL 0x006e93c0
LAB_004adf25:
004ADF25  8B 43 14                  MOV EAX,dword ptr [EBX + 0x14]
004ADF28  46                        INC ESI
004ADF29  83 C7 24                  ADD EDI,0x24
004ADF2C  3B F0                     CMP ESI,EAX
004ADF2E  7C DA                     JL 0x004adf0a
LAB_004adf30:
004ADF30  8B 45 9C                  MOV EAX,dword ptr [EBP + -0x64]
004ADF33  A3 F8 8D 85 00            MOV [0x00858df8],EAX
004ADF38  5F                        POP EDI
004ADF39  5E                        POP ESI
004ADF3A  5B                        POP EBX
004ADF3B  8B E5                     MOV ESP,EBP
004ADF3D  5D                        POP EBP
004ADF3E  C2 08 00                  RET 0x8
LAB_004adf41:
004ADF41  8B 4D 9C                  MOV ECX,dword ptr [EBP + -0x64]
004ADF44  68 3C C7 7A 00            PUSH 0x7ac73c
004ADF49  68 CC 4C 7A 00            PUSH 0x7a4ccc
004ADF4E  50                        PUSH EAX
004ADF4F  6A 00                     PUSH 0x0
004ADF51  68 3D 04 00 00            PUSH 0x43d
004ADF56  68 38 C6 7A 00            PUSH 0x7ac638
004ADF5B  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
004ADF61  E8 6A F5 1F 00            CALL 0x006ad4d0
004ADF66  83 C4 18                  ADD ESP,0x18
004ADF69  85 C0                     TEST EAX,EAX
004ADF6B  74 01                     JZ 0x004adf6e
004ADF6D  CC                        INT3
LAB_004adf6e:
004ADF6E  5F                        POP EDI
004ADF6F  5E                        POP ESI
004ADF70  5B                        POP EBX
004ADF71  8B E5                     MOV ESP,EBP
004ADF73  5D                        POP EBP
004ADF74  C2 08 00                  RET 0x8
