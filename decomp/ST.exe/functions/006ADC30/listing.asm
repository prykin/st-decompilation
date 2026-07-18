FUN_006adc30:
006ADC30  55                        PUSH EBP
006ADC31  8B EC                     MOV EBP,ESP
006ADC33  56                        PUSH ESI
006ADC34  57                        PUSH EDI
006ADC35  64 A1 00 00 00 00         MOV EAX,FS:[0x0]
006ADC3B  A3 B0 4E 85 00            MOV [0x00854eb0],EAX
006ADC40  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
006ADC43  8B 06                     MOV EAX,dword ptr [ESI]
006ADC45  81 38 03 00 00 80         CMP dword ptr [EAX],0x80000003
006ADC4B  75 06                     JNZ 0x006adc53
006ADC4D  5F                        POP EDI
006ADC4E  33 C0                     XOR EAX,EAX
006ADC50  5E                        POP ESI
006ADC51  5D                        POP EBP
006ADC52  C3                        RET
LAB_006adc53:
006ADC53  A1 B4 4E 85 00            MOV EAX,[0x00854eb4]
006ADC58  33 FF                     XOR EDI,EDI
006ADC5A  3B C7                     CMP EAX,EDI
006ADC5C  A3 9C 4A 85 00            MOV [0x00854a9c],EAX
006ADC61  0F 84 9C 04 00 00         JZ 0x006ae103
006ADC67  39 3D 9C D7 7E 00         CMP dword ptr [0x007ed79c],EDI
006ADC6D  74 6A                     JZ 0x006adcd9
006ADC6F  8B 15 94 4A 85 00         MOV EDX,dword ptr [0x00854a94]
006ADC75  33 C9                     XOR ECX,ECX
006ADC77  66 8B 0D 96 4A 85 00      MOV CX,word ptr [0x00854a96]
006ADC7E  81 E2 FF FF 00 00         AND EDX,0xffff
006ADC84  51                        PUSH ECX
006ADC85  33 C9                     XOR ECX,ECX
006ADC87  66 8B 0D 92 4A 85 00      MOV CX,word ptr [0x00854a92]
006ADC8E  52                        PUSH EDX
006ADC8F  8B 15 90 4A 85 00         MOV EDX,dword ptr [0x00854a90]
006ADC95  51                        PUSH ECX
006ADC96  8B 0D 88 4A 85 00         MOV ECX,dword ptr [0x00854a88]
006ADC9C  81 E2 FF FF 00 00         AND EDX,0xffff
006ADCA2  52                        PUSH EDX
006ADCA3  81 E1 FF FF 00 00         AND ECX,0xffff
006ADCA9  33 D2                     XOR EDX,EDX
006ADCAB  51                        PUSH ECX
006ADCAC  66 8B 15 8A 4A 85 00      MOV DX,word ptr [0x00854a8a]
006ADCB3  33 C9                     XOR ECX,ECX
006ADCB5  66 8B 0D 8E 4A 85 00      MOV CX,word ptr [0x00854a8e]
006ADCBC  52                        PUSH EDX
006ADCBD  8B 15 AC 4E 85 00         MOV EDX,dword ptr [0x00854eac]
006ADCC3  51                        PUSH ECX
006ADCC4  52                        PUSH EDX
006ADCC5  68 C0 D9 7E 00            PUSH 0x7ed9c0
006ADCCA  50                        PUSH EAX
006ADCCB  E8 A0 62 08 00            CALL 0x00733f70
006ADCD0  83 C4 28                  ADD ESP,0x28
006ADCD3  89 3D 9C D7 7E 00         MOV dword ptr [0x007ed79c],EDI
LAB_006adcd9:
006ADCD9  A1 B0 4E 85 00            MOV EAX,[0x00854eb0]
006ADCDE  3B C7                     CMP EAX,EDI
006ADCE0  74 1C                     JZ 0x006adcfe
LAB_006adce2:
006ADCE2  8B 4E 04                  MOV ECX,dword ptr [ESI + 0x4]
006ADCE5  3B 81 C4 00 00 00         CMP EAX,dword ptr [ECX + 0xc4]
006ADCEB  73 11                     JNC 0x006adcfe
006ADCED  8B 08                     MOV ECX,dword ptr [EAX]
006ADCEF  3B C8                     CMP ECX,EAX
006ADCF1  76 0B                     JBE 0x006adcfe
006ADCF3  8B C1                     MOV EAX,ECX
006ADCF5  3B C7                     CMP EAX,EDI
006ADCF7  A3 B0 4E 85 00            MOV [0x00854eb0],EAX
006ADCFC  75 E4                     JNZ 0x006adce2
LAB_006adcfe:
006ADCFE  8B 16                     MOV EDX,dword ptr [ESI]
006ADD00  8B 0D 9C 4A 85 00         MOV ECX,dword ptr [0x00854a9c]
006ADD06  8B 02                     MOV EAX,dword ptr [EDX]
006ADD08  50                        PUSH EAX
006ADD09  68 90 D9 7E 00            PUSH 0x7ed990
006ADD0E  51                        PUSH ECX
006ADD0F  E8 5C 62 08 00            CALL 0x00733f70
006ADD14  8B 16                     MOV EDX,dword ptr [ESI]
006ADD16  8B 0D 9C 4A 85 00         MOV ECX,dword ptr [0x00854a9c]
006ADD1C  8B 42 0C                  MOV EAX,dword ptr [EDX + 0xc]
006ADD1F  50                        PUSH EAX
006ADD20  68 88 D9 7E 00            PUSH 0x7ed988
006ADD25  51                        PUSH ECX
006ADD26  E8 45 62 08 00            CALL 0x00733f70
006ADD2B  8B 16                     MOV EDX,dword ptr [ESI]
006ADD2D  83 C4 18                  ADD ESP,0x18
006ADD30  39 7A 10                  CMP dword ptr [EDX + 0x10],EDI
006ADD33  0F 86 98 00 00 00         JBE 0x006addd1
006ADD39  A1 9C 4A 85 00            MOV EAX,[0x00854a9c]
006ADD3E  68 84 D9 7E 00            PUSH 0x7ed984
006ADD43  50                        PUSH EAX
006ADD44  E8 27 62 08 00            CALL 0x00733f70
006ADD49  A1 9C 4A 85 00            MOV EAX,[0x00854a9c]
006ADD4E  89 3D A0 4A 85 00         MOV dword ptr [0x00854aa0],EDI
006ADD54  8B 0E                     MOV ECX,dword ptr [ESI]
006ADD56  8B 51 14                  MOV EDX,dword ptr [ECX + 0x14]
006ADD59  52                        PUSH EDX
006ADD5A  68 7C D9 7E 00            PUSH 0x7ed97c
006ADD5F  50                        PUSH EAX
006ADD60  E8 0B 62 08 00            CALL 0x00733f70
006ADD65  A1 A0 4A 85 00            MOV EAX,[0x00854aa0]
006ADD6A  83 C4 14                  ADD ESP,0x14
006ADD6D  40                        INC EAX
006ADD6E  A3 A0 4A 85 00            MOV [0x00854aa0],EAX
006ADD73  8B 0E                     MOV ECX,dword ptr [ESI]
006ADD75  3B 41 10                  CMP EAX,dword ptr [ECX + 0x10]
006ADD78  7D 43                     JGE 0x006addbd
LAB_006add7a:
006ADD7A  8B 15 9C 4A 85 00         MOV EDX,dword ptr [0x00854a9c]
006ADD80  68 78 D9 7E 00            PUSH 0x7ed978
006ADD85  52                        PUSH EDX
006ADD86  E8 E5 61 08 00            CALL 0x00733f70
006ADD8B  8B 06                     MOV EAX,dword ptr [ESI]
006ADD8D  8B 0D A0 4A 85 00         MOV ECX,dword ptr [0x00854aa0]
006ADD93  8B 54 88 14               MOV EDX,dword ptr [EAX + ECX*0x4 + 0x14]
006ADD97  A1 9C 4A 85 00            MOV EAX,[0x00854a9c]
006ADD9C  52                        PUSH EDX
006ADD9D  68 7C D9 7E 00            PUSH 0x7ed97c
006ADDA2  50                        PUSH EAX
006ADDA3  E8 C8 61 08 00            CALL 0x00733f70
006ADDA8  A1 A0 4A 85 00            MOV EAX,[0x00854aa0]
006ADDAD  83 C4 14                  ADD ESP,0x14
006ADDB0  40                        INC EAX
006ADDB1  A3 A0 4A 85 00            MOV [0x00854aa0],EAX
006ADDB6  8B 0E                     MOV ECX,dword ptr [ESI]
006ADDB8  3B 41 10                  CMP EAX,dword ptr [ECX + 0x10]
006ADDBB  7C BD                     JL 0x006add7a
LAB_006addbd:
006ADDBD  8B 15 9C 4A 85 00         MOV EDX,dword ptr [0x00854a9c]
006ADDC3  68 74 D9 7E 00            PUSH 0x7ed974
006ADDC8  52                        PUSH EDX
006ADDC9  E8 A2 61 08 00            CALL 0x00733f70
006ADDCE  83 C4 08                  ADD ESP,0x8
LAB_006addd1:
006ADDD1  A1 9C 4A 85 00            MOV EAX,[0x00854a9c]
006ADDD6  68 60 D9 7E 00            PUSH 0x7ed960
006ADDDB  50                        PUSH EAX
006ADDDC  E8 8F 61 08 00            CALL 0x00733f70
006ADDE1  8B 46 04                  MOV EAX,dword ptr [ESI + 0x4]
006ADDE4  8B 88 C4 00 00 00         MOV ECX,dword ptr [EAX + 0xc4]
006ADDEA  8B 90 B4 00 00 00         MOV EDX,dword ptr [EAX + 0xb4]
006ADDF0  51                        PUSH ECX
006ADDF1  8B 88 9C 00 00 00         MOV ECX,dword ptr [EAX + 0x9c]
006ADDF7  52                        PUSH EDX
006ADDF8  8B 90 A0 00 00 00         MOV EDX,dword ptr [EAX + 0xa0]
006ADDFE  51                        PUSH ECX
006ADDFF  8B 88 A8 00 00 00         MOV ECX,dword ptr [EAX + 0xa8]
006ADE05  52                        PUSH EDX
006ADE06  8B 90 AC 00 00 00         MOV EDX,dword ptr [EAX + 0xac]
006ADE0C  51                        PUSH ECX
006ADE0D  8B 88 A4 00 00 00         MOV ECX,dword ptr [EAX + 0xa4]
006ADE13  52                        PUSH EDX
006ADE14  8B 90 B0 00 00 00         MOV EDX,dword ptr [EAX + 0xb0]
006ADE1A  A1 9C 4A 85 00            MOV EAX,[0x00854a9c]
006ADE1F  51                        PUSH ECX
006ADE20  52                        PUSH EDX
006ADE21  68 30 D9 7E 00            PUSH 0x7ed930
006ADE26  50                        PUSH EAX
006ADE27  E8 44 61 08 00            CALL 0x00733f70
006ADE2C  8B 46 04                  MOV EAX,dword ptr [ESI + 0x4]
006ADE2F  8B 88 C0 00 00 00         MOV ECX,dword ptr [EAX + 0xc0]
006ADE35  8B 90 8C 00 00 00         MOV EDX,dword ptr [EAX + 0x8c]
006ADE3B  51                        PUSH ECX
006ADE3C  8B 88 90 00 00 00         MOV ECX,dword ptr [EAX + 0x90]
006ADE42  52                        PUSH EDX
006ADE43  8B 90 94 00 00 00         MOV EDX,dword ptr [EAX + 0x94]
006ADE49  51                        PUSH ECX
006ADE4A  8B 88 98 00 00 00         MOV ECX,dword ptr [EAX + 0x98]
006ADE50  52                        PUSH EDX
006ADE51  8B 90 C8 00 00 00         MOV EDX,dword ptr [EAX + 0xc8]
006ADE57  8B 80 BC 00 00 00         MOV EAX,dword ptr [EAX + 0xbc]
006ADE5D  51                        PUSH ECX
006ADE5E  8B 0D 9C 4A 85 00         MOV ECX,dword ptr [0x00854a9c]
006ADE64  52                        PUSH EDX
006ADE65  50                        PUSH EAX
006ADE66  68 FC D8 7E 00            PUSH 0x7ed8fc
006ADE6B  51                        PUSH ECX
006ADE6C  E8 FF 60 08 00            CALL 0x00733f70
006ADE71  8B 15 9C 4A 85 00         MOV EDX,dword ptr [0x00854a9c]
006ADE77  83 C4 54                  ADD ESP,0x54
006ADE7A  68 60 D9 7E 00            PUSH 0x7ed960
006ADE7F  52                        PUSH EDX
006ADE80  E8 EB 60 08 00            CALL 0x00733f70
006ADE85  8B 46 04                  MOV EAX,dword ptr [ESI + 0x4]
006ADE88  83 C4 08                  ADD ESP,0x8
006ADE8B  8B 80 B4 00 00 00         MOV EAX,dword ptr [EAX + 0xb4]
006ADE91  A3 A4 4E 85 00            MOV [0x00854ea4],EAX
006ADE96  8B 4E 04                  MOV ECX,dword ptr [ESI + 0x4]
006ADE99  3B 81 C4 00 00 00         CMP EAX,dword ptr [ECX + 0xc4]
006ADE9F  0F 82 D6 00 00 00         JC 0x006adf7b
006ADEA5  3B 05 B0 4E 85 00         CMP EAX,dword ptr [0x00854eb0]
006ADEAB  0F 83 CA 00 00 00         JNC 0x006adf7b
006ADEB1  89 3D A0 4A 85 00         MOV dword ptr [0x00854aa0],EDI
006ADEB7  8B 50 04                  MOV EDX,dword ptr [EAX + 0x4]
006ADEBA  A1 9C 4A 85 00            MOV EAX,[0x00854a9c]
006ADEBF  52                        PUSH EDX
006ADEC0  68 40 D8 7E 00            PUSH 0x7ed840
006ADEC5  50                        PUSH EAX
006ADEC6  E8 A5 60 08 00            CALL 0x00733f70
006ADECB  A1 A4 4E 85 00            MOV EAX,[0x00854ea4]
006ADED0  83 C4 0C                  ADD ESP,0xc
006ADED3  8B C8                     MOV ECX,EAX
006ADED5  89 0D A8 4E 85 00         MOV dword ptr [0x00854ea8],ECX
006ADEDB  8B 00                     MOV EAX,dword ptr [EAX]
006ADEDD  3B C1                     CMP EAX,ECX
006ADEDF  A3 A4 4E 85 00            MOV [0x00854ea4],EAX
006ADEE4  76 6C                     JBE 0x006adf52
LAB_006adee6:
006ADEE6  3B 05 B0 4E 85 00         CMP EAX,dword ptr [0x00854eb0]
006ADEEC  73 64                     JNC 0x006adf52
006ADEEE  8B 0D A0 4A 85 00         MOV ECX,dword ptr [0x00854aa0]
006ADEF4  41                        INC ECX
006ADEF5  89 0D A0 4A 85 00         MOV dword ptr [0x00854aa0],ECX
006ADEFB  81 E1 07 00 00 80         AND ECX,0x80000007
006ADF01  79 05                     JNS 0x006adf08
006ADF03  49                        DEC ECX
006ADF04  83 C9 F8                  OR ECX,0xfffffff8
006ADF07  41                        INC ECX
LAB_006adf08:
006ADF08  75 19                     JNZ 0x006adf23
006ADF0A  8B 0D 9C 4A 85 00         MOV ECX,dword ptr [0x00854a9c]
006ADF10  68 F4 8F 7C 00            PUSH 0x7c8ff4
006ADF15  51                        PUSH ECX
006ADF16  E8 55 60 08 00            CALL 0x00733f70
006ADF1B  A1 A4 4E 85 00            MOV EAX,[0x00854ea4]
006ADF20  83 C4 08                  ADD ESP,0x8
LAB_006adf23:
006ADF23  8B 50 04                  MOV EDX,dword ptr [EAX + 0x4]
006ADF26  A1 9C 4A 85 00            MOV EAX,[0x00854a9c]
006ADF2B  52                        PUSH EDX
006ADF2C  68 40 D8 7E 00            PUSH 0x7ed840
006ADF31  50                        PUSH EAX
006ADF32  E8 39 60 08 00            CALL 0x00733f70
006ADF37  A1 A4 4E 85 00            MOV EAX,[0x00854ea4]
006ADF3C  83 C4 0C                  ADD ESP,0xc
006ADF3F  8B C8                     MOV ECX,EAX
006ADF41  89 0D A8 4E 85 00         MOV dword ptr [0x00854ea8],ECX
006ADF47  8B 00                     MOV EAX,dword ptr [EAX]
006ADF49  3B C1                     CMP EAX,ECX
006ADF4B  A3 A4 4E 85 00            MOV [0x00854ea4],EAX
006ADF50  77 94                     JA 0x006adee6
LAB_006adf52:
006ADF52  8B 0D A0 4A 85 00         MOV ECX,dword ptr [0x00854aa0]
006ADF58  81 E1 07 00 00 80         AND ECX,0x80000007
006ADF5E  79 05                     JNS 0x006adf65
006ADF60  49                        DEC ECX
006ADF61  83 C9 F8                  OR ECX,0xfffffff8
006ADF64  41                        INC ECX
LAB_006adf65:
006ADF65  74 14                     JZ 0x006adf7b
006ADF67  8B 15 9C 4A 85 00         MOV EDX,dword ptr [0x00854a9c]
006ADF6D  68 F4 8F 7C 00            PUSH 0x7c8ff4
006ADF72  52                        PUSH EDX
006ADF73  E8 F8 5F 08 00            CALL 0x00733f70
006ADF78  83 C4 08                  ADD ESP,0x8
LAB_006adf7b:
006ADF7B  A1 9C 4A 85 00            MOV EAX,[0x00854a9c]
006ADF80  68 60 D9 7E 00            PUSH 0x7ed960
006ADF85  50                        PUSH EAX
006ADF86  E8 E5 5F 08 00            CALL 0x00733f70
006ADF8B  8B 4E 04                  MOV ECX,dword ptr [ESI + 0x4]
006ADF8E  83 C4 08                  ADD ESP,0x8
006ADF91  33 C0                     XOR EAX,EAX
006ADF93  8B 89 C4 00 00 00         MOV ECX,dword ptr [ECX + 0xc4]
006ADF99  A3 A0 4A 85 00            MOV [0x00854aa0],EAX
006ADF9E  89 0D 80 4A 85 00         MOV dword ptr [0x00854a80],ECX
006ADFA4  EB 06                     JMP 0x006adfac
LAB_006adfa6:
006ADFA6  8B 0D 80 4A 85 00         MOV ECX,dword ptr [0x00854a80]
LAB_006adfac:
006ADFAC  3B 0D B0 4E 85 00         CMP ECX,dword ptr [0x00854eb0]
006ADFB2  73 61                     JNC 0x006ae015
006ADFB4  8B 11                     MOV EDX,dword ptr [ECX]
006ADFB6  A1 9C 4A 85 00            MOV EAX,[0x00854a9c]
006ADFBB  52                        PUSH EDX
006ADFBC  68 40 D8 7E 00            PUSH 0x7ed840
006ADFC1  50                        PUSH EAX
006ADFC2  E8 A9 5F 08 00            CALL 0x00733f70
006ADFC7  8B 15 80 4A 85 00         MOV EDX,dword ptr [0x00854a80]
006ADFCD  A1 A0 4A 85 00            MOV EAX,[0x00854aa0]
006ADFD2  83 C4 0C                  ADD ESP,0xc
006ADFD5  83 C2 04                  ADD EDX,0x4
006ADFD8  40                        INC EAX
006ADFD9  89 15 80 4A 85 00         MOV dword ptr [0x00854a80],EDX
006ADFDF  8B C8                     MOV ECX,EAX
006ADFE1  A3 A0 4A 85 00            MOV [0x00854aa0],EAX
006ADFE6  81 E1 07 00 00 80         AND ECX,0x80000007
006ADFEC  79 05                     JNS 0x006adff3
006ADFEE  49                        DEC ECX
006ADFEF  83 C9 F8                  OR ECX,0xfffffff8
006ADFF2  41                        INC ECX
LAB_006adff3:
006ADFF3  75 19                     JNZ 0x006ae00e
006ADFF5  8B 15 9C 4A 85 00         MOV EDX,dword ptr [0x00854a9c]
006ADFFB  68 F4 8F 7C 00            PUSH 0x7c8ff4
006AE000  52                        PUSH EDX
006AE001  E8 6A 5F 08 00            CALL 0x00733f70
006AE006  A1 A0 4A 85 00            MOV EAX,[0x00854aa0]
006AE00B  83 C4 08                  ADD ESP,0x8
LAB_006ae00e:
006AE00E  3D 90 01 00 00            CMP EAX,0x190
006AE013  7C 91                     JL 0x006adfa6
LAB_006ae015:
006AE015  25 07 00 00 80            AND EAX,0x80000007
006AE01A  79 05                     JNS 0x006ae021
006AE01C  48                        DEC EAX
006AE01D  83 C8 F8                  OR EAX,0xfffffff8
006AE020  40                        INC EAX
LAB_006ae021:
006AE021  74 13                     JZ 0x006ae036
006AE023  A1 9C 4A 85 00            MOV EAX,[0x00854a9c]
006AE028  68 F4 8F 7C 00            PUSH 0x7c8ff4
006AE02D  50                        PUSH EAX
006AE02E  E8 3D 5F 08 00            CALL 0x00733f70
006AE033  83 C4 08                  ADD ESP,0x8
LAB_006ae036:
006AE036  8B 0D 9C 4A 85 00         MOV ECX,dword ptr [0x00854a9c]
006AE03C  68 60 D9 7E 00            PUSH 0x7ed960
006AE041  51                        PUSH ECX
006AE042  E8 29 5F 08 00            CALL 0x00733f70
006AE047  8B 0D DC 8D 85 00         MOV ECX,dword ptr [0x00858ddc]
006AE04D  83 C4 08                  ADD ESP,0x8
006AE050  33 C0                     XOR EAX,EAX
006AE052  3B CF                     CMP ECX,EDI
006AE054  A3 A0 4A 85 00            MOV [0x00854aa0],EAX
006AE059  7E 5A                     JLE 0x006ae0b5
LAB_006ae05b:
006AE05B  8B 15 C0 8D 85 00         MOV EDX,dword ptr [0x00858dc0]
006AE061  8B 0D 9C 4A 85 00         MOV ECX,dword ptr [0x00854a9c]
006AE067  8B 04 82                  MOV EAX,dword ptr [EDX + EAX*0x4]
006AE06A  50                        PUSH EAX
006AE06B  68 40 D8 7E 00            PUSH 0x7ed840
006AE070  51                        PUSH ECX
006AE071  E8 FA 5E 08 00            CALL 0x00733f70
006AE076  A1 A0 4A 85 00            MOV EAX,[0x00854aa0]
006AE07B  83 C4 0C                  ADD ESP,0xc
006AE07E  40                        INC EAX
006AE07F  8B D0                     MOV EDX,EAX
006AE081  A3 A0 4A 85 00            MOV [0x00854aa0],EAX
006AE086  81 E2 07 00 00 80         AND EDX,0x80000007
006AE08C  79 05                     JNS 0x006ae093
006AE08E  4A                        DEC EDX
006AE08F  83 CA F8                  OR EDX,0xfffffff8
006AE092  42                        INC EDX
LAB_006ae093:
006AE093  75 18                     JNZ 0x006ae0ad
006AE095  A1 9C 4A 85 00            MOV EAX,[0x00854a9c]
006AE09A  68 F4 8F 7C 00            PUSH 0x7c8ff4
006AE09F  50                        PUSH EAX
006AE0A0  E8 CB 5E 08 00            CALL 0x00733f70
006AE0A5  A1 A0 4A 85 00            MOV EAX,[0x00854aa0]
006AE0AA  83 C4 08                  ADD ESP,0x8
LAB_006ae0ad:
006AE0AD  3B 05 DC 8D 85 00         CMP EAX,dword ptr [0x00858ddc]
006AE0B3  7C A6                     JL 0x006ae05b
LAB_006ae0b5:
006AE0B5  25 07 00 00 80            AND EAX,0x80000007
006AE0BA  79 05                     JNS 0x006ae0c1
006AE0BC  48                        DEC EAX
006AE0BD  83 C8 F8                  OR EAX,0xfffffff8
006AE0C0  40                        INC EAX
LAB_006ae0c1:
006AE0C1  74 14                     JZ 0x006ae0d7
006AE0C3  8B 0D 9C 4A 85 00         MOV ECX,dword ptr [0x00854a9c]
006AE0C9  68 F4 8F 7C 00            PUSH 0x7c8ff4
006AE0CE  51                        PUSH ECX
006AE0CF  E8 9C 5E 08 00            CALL 0x00733f70
006AE0D4  83 C4 08                  ADD ESP,0x8
LAB_006ae0d7:
006AE0D7  8B 15 9C 4A 85 00         MOV EDX,dword ptr [0x00854a9c]
006AE0DD  89 3D DC 8D 85 00         MOV dword ptr [0x00858ddc],EDI
006AE0E3  52                        PUSH EDX
006AE0E4  E8 77 5C 08 00            CALL 0x00733d60
006AE0E9  A1 B4 4E 85 00            MOV EAX,[0x00854eb4]
006AE0EE  83 C4 04                  ADD ESP,0x4
006AE0F1  3B C7                     CMP EAX,EDI
006AE0F3  75 0E                     JNZ 0x006ae103
006AE0F5  A1 9C 4A 85 00            MOV EAX,[0x00854a9c]
006AE0FA  50                        PUSH EAX
006AE0FB  E8 90 09 08 00            CALL 0x0072ea90
006AE100  83 C4 04                  ADD ESP,0x4
LAB_006ae103:
006AE103  5F                        POP EDI
006AE104  B8 01 00 00 00            MOV EAX,0x1
006AE109  5E                        POP ESI
006AE10A  5D                        POP EBP
006AE10B  C3                        RET
