FUN_006bcb30:
006BCB30  55                        PUSH EBP
006BCB31  8B EC                     MOV EBP,ESP
006BCB33  83 EC 14                  SUB ESP,0x14
006BCB36  53                        PUSH EBX
006BCB37  8B 5D 0C                  MOV EBX,dword ptr [EBP + 0xc]
006BCB3A  56                        PUSH ESI
006BCB3B  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
006BCB3E  57                        PUSH EDI
006BCB3F  8B 7D 14                  MOV EDI,dword ptr [EBP + 0x14]
006BCB42  8B 86 E4 01 00 00         MOV EAX,dword ptr [ESI + 0x1e4]
006BCB48  2B 9C C6 1C 01 00 00      SUB EBX,dword ptr [ESI + EAX*0x8 + 0x11c]
006BCB4F  79 04                     JNS 0x006bcb55
006BCB51  03 FB                     ADD EDI,EBX
006BCB53  33 DB                     XOR EBX,EBX
LAB_006bcb55:
006BCB55  8B 84 C6 20 01 00 00      MOV EAX,dword ptr [ESI + EAX*0x8 + 0x120]
006BCB5C  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
006BCB5F  2B C8                     SUB ECX,EAX
006BCB61  89 4D 10                  MOV dword ptr [EBP + 0x10],ECX
006BCB64  79 0F                     JNS 0x006bcb75
006BCB66  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
006BCB69  C7 45 10 00 00 00 00      MOV dword ptr [EBP + 0x10],0x0
006BCB70  03 C3                     ADD EAX,EBX
006BCB72  89 45 18                  MOV dword ptr [EBP + 0x18],EAX
LAB_006bcb75:
006BCB75  85 FF                     TEST EDI,EDI
006BCB77  0F 8E 82 01 00 00         JLE 0x006bccff
006BCB7D  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
006BCB80  85 C0                     TEST EAX,EAX
006BCB82  0F 8E 77 01 00 00         JLE 0x006bccff
006BCB88  8B 8E EC 01 00 00         MOV ECX,dword ptr [ESI + 0x1ec]
006BCB8E  8B C3                     MOV EAX,EBX
006BCB90  99                        CDQ
006BCB91  F7 F9                     IDIV ECX
006BCB93  03 D1                     ADD EDX,ECX
006BCB95  8D 44 3A FF               LEA EAX,[EDX + EDI*0x1 + -0x1]
006BCB99  8B BE F0 01 00 00         MOV EDI,dword ptr [ESI + 0x1f0]
006BCB9F  99                        CDQ
006BCBA0  F7 F9                     IDIV ECX
006BCBA2  89 45 14                  MOV dword ptr [EBP + 0x14],EAX
006BCBA5  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
006BCBA8  99                        CDQ
006BCBA9  F7 FF                     IDIV EDI
006BCBAB  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
006BCBAE  03 D7                     ADD EDX,EDI
006BCBB0  8D 44 02 FF               LEA EAX,[EDX + EAX*0x1 + -0x1]
006BCBB4  99                        CDQ
006BCBB5  F7 FF                     IDIV EDI
006BCBB7  89 45 18                  MOV dword ptr [EBP + 0x18],EAX
006BCBBA  8B C3                     MOV EAX,EBX
006BCBBC  99                        CDQ
006BCBBD  F7 F9                     IDIV ECX
006BCBBF  8B 9E F4 01 00 00         MOV EBX,dword ptr [ESI + 0x1f4]
006BCBC5  89 45 0C                  MOV dword ptr [EBP + 0xc],EAX
006BCBC8  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
006BCBCB  99                        CDQ
006BCBCC  F7 FF                     IDIV EDI
006BCBCE  8B F8                     MOV EDI,EAX
006BCBD0  8D 43 07                  LEA EAX,[EBX + 0x7]
006BCBD3  99                        CDQ
006BCBD4  83 E2 07                  AND EDX,0x7
006BCBD7  03 C2                     ADD EAX,EDX
006BCBD9  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006BCBDC  C1 F8 03                  SAR EAX,0x3
006BCBDF  8B C8                     MOV ECX,EAX
006BCBE1  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
006BCBE4  0F AF CF                  IMUL ECX,EDI
006BCBE7  8B 86 10 02 00 00         MOV EAX,dword ptr [ESI + 0x210]
006BCBED  03 C1                     ADD EAX,ECX
006BCBEF  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
006BCBF2  8B 86 20 02 00 00         MOV EAX,dword ptr [ESI + 0x220]
006BCBF8  03 C1                     ADD EAX,ECX
006BCBFA  8B CB                     MOV ECX,EBX
006BCBFC  0F AF CF                  IMUL ECX,EDI
006BCBFF  8B BE 04 02 00 00         MOV EDI,dword ptr [ESI + 0x204]
006BCC05  8B 9E 1C 02 00 00         MOV EBX,dword ptr [ESI + 0x21c]
006BCC0B  89 45 10                  MOV dword ptr [EBP + 0x10],EAX
006BCC0E  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
006BCC11  03 F9                     ADD EDI,ECX
006BCC13  03 D9                     ADD EBX,ECX
006BCC15  03 FA                     ADD EDI,EDX
006BCC17  03 DA                     ADD EBX,EDX
006BCC19  85 C0                     TEST EAX,EAX
006BCC1B  89 5D F8                  MOV dword ptr [EBP + -0x8],EBX
006BCC1E  0F 8E DB 00 00 00         JLE 0x006bccff
006BCC24  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
LAB_006bcc27:
006BCC27  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
006BCC2A  85 C9                     TEST ECX,ECX
006BCC2C  0F 8E A0 00 00 00         JLE 0x006bccd2
006BCC32  8B C2                     MOV EAX,EDX
006BCC34  8B D3                     MOV EDX,EBX
006BCC36  2B D7                     SUB EDX,EDI
006BCC38  8B DF                     MOV EBX,EDI
006BCC3A  89 55 F0                  MOV dword ptr [EBP + -0x10],EDX
006BCC3D  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006BCC40  2B DA                     SUB EBX,EDX
006BCC42  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
LAB_006bcc45:
006BCC45  8B 8E 04 02 00 00         MOV ECX,dword ptr [ESI + 0x204]
006BCC4B  85 C9                     TEST ECX,ECX
006BCC4D  74 40                     JZ 0x006bcc8f
006BCC4F  8B 8E 00 02 00 00         MOV ECX,dword ptr [ESI + 0x200]
006BCC55  33 D2                     XOR EDX,EDX
006BCC57  8A 14 03                  MOV DL,byte ptr [EBX + EAX*0x1]
006BCC5A  49                        DEC ECX
006BCC5B  3B D1                     CMP EDX,ECX
006BCC5D  74 30                     JZ 0x006bcc8f
006BCC5F  89 45 18                  MOV dword ptr [EBP + 0x18],EAX
006BCC62  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006BCC65  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
006BCC68  80 F2 07                  XOR DL,0x7
006BCC6B  0F AB 11                  BTS [ECX],EDX
006BCC6E  8B 8E 1C 02 00 00         MOV ECX,dword ptr [ESI + 0x21c]
006BCC74  85 C9                     TEST ECX,ECX
006BCC76  74 46                     JZ 0x006bccbe
006BCC78  80 3C 03 00               CMP byte ptr [EBX + EAX*0x1],0x0
006BCC7C  74 40                     JZ 0x006bccbe
006BCC7E  89 45 18                  MOV dword ptr [EBP + 0x18],EAX
006BCC81  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
006BCC84  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
006BCC87  80 F2 07                  XOR DL,0x7
006BCC8A  0F AB 11                  BTS [ECX],EDX
006BCC8D  EB 2F                     JMP 0x006bccbe
LAB_006bcc8f:
006BCC8F  8B 8E 1C 02 00 00         MOV ECX,dword ptr [ESI + 0x21c]
006BCC95  85 C9                     TEST ECX,ECX
006BCC97  74 25                     JZ 0x006bccbe
006BCC99  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
006BCC9C  8D 14 0B                  LEA EDX,[EBX + ECX*0x1]
006BCC9F  33 C9                     XOR ECX,ECX
006BCCA1  8A 0C 02                  MOV CL,byte ptr [EDX + EAX*0x1]
006BCCA4  8B 96 18 02 00 00         MOV EDX,dword ptr [ESI + 0x218]
006BCCAA  4A                        DEC EDX
006BCCAB  3B CA                     CMP ECX,EDX
006BCCAD  74 0F                     JZ 0x006bccbe
006BCCAF  89 45 18                  MOV dword ptr [EBP + 0x18],EAX
006BCCB2  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
006BCCB5  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
006BCCB8  80 F2 07                  XOR DL,0x7
006BCCBB  0F AB 11                  BTS [ECX],EDX
LAB_006bccbe:
006BCCBE  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
006BCCC1  40                        INC EAX
006BCCC2  49                        DEC ECX
006BCCC3  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
006BCCC6  0F 85 79 FF FF FF         JNZ 0x006bcc45
006BCCCC  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006BCCCF  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
LAB_006bccd2:
006BCCD2  8B 86 F4 01 00 00         MOV EAX,dword ptr [ESI + 0x1f4]
006BCCD8  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006BCCDB  03 F8                     ADD EDI,EAX
006BCCDD  03 D8                     ADD EBX,EAX
006BCCDF  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
006BCCE2  89 5D F8                  MOV dword ptr [EBP + -0x8],EBX
006BCCE5  03 C8                     ADD ECX,EAX
006BCCE7  89 4D 08                  MOV dword ptr [EBP + 0x8],ECX
006BCCEA  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
006BCCED  03 C8                     ADD ECX,EAX
006BCCEF  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
006BCCF2  48                        DEC EAX
006BCCF3  89 4D 10                  MOV dword ptr [EBP + 0x10],ECX
006BCCF6  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
006BCCF9  0F 85 28 FF FF FF         JNZ 0x006bcc27
LAB_006bccff:
006BCCFF  5F                        POP EDI
006BCD00  5E                        POP ESI
006BCD01  5B                        POP EBX
006BCD02  8B E5                     MOV ESP,EBP
006BCD04  5D                        POP EBP
006BCD05  C2 14 00                  RET 0x14
