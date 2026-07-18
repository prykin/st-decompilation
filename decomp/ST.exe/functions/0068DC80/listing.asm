FUN_0068dc80:
0068DC80  55                        PUSH EBP
0068DC81  8B EC                     MOV EBP,ESP
0068DC83  83 EC 60                  SUB ESP,0x60
0068DC86  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0068DC8B  53                        PUSH EBX
0068DC8C  56                        PUSH ESI
0068DC8D  57                        PUSH EDI
0068DC8E  89 4D EC                  MOV dword ptr [EBP + -0x14],ECX
0068DC91  33 FF                     XOR EDI,EDI
0068DC93  8D 55 A4                  LEA EDX,[EBP + -0x5c]
0068DC96  8D 4D A0                  LEA ECX,[EBP + -0x60]
0068DC99  57                        PUSH EDI
0068DC9A  52                        PUSH EDX
0068DC9B  89 7D F8                  MOV dword ptr [EBP + -0x8],EDI
0068DC9E  89 7D F4                  MOV dword ptr [EBP + -0xc],EDI
0068DCA1  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
0068DCA4  89 45 A0                  MOV dword ptr [EBP + -0x60],EAX
0068DCA7  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0068DCAD  E8 3E FB 09 00            CALL 0x0072d7f0
0068DCB2  8B F0                     MOV ESI,EAX
0068DCB4  83 C4 08                  ADD ESP,0x8
0068DCB7  3B F7                     CMP ESI,EDI
0068DCB9  0F 85 29 02 00 00         JNZ 0x0068dee8
0068DCBF  8B 5D EC                  MOV EBX,dword ptr [EBP + -0x14]
0068DCC2  3B DF                     CMP EBX,EDI
0068DCC4  74 03                     JZ 0x0068dcc9
0068DCC6  8D 7B 20                  LEA EDI,[EBX + 0x20]
LAB_0068dcc9:
0068DCC9  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
0068DCCC  B9 43 00 00 00            MOV ECX,0x43
0068DCD1  F3 A5                     MOVSD.REP ES:EDI,ESI
0068DCD3  C7 43 20 8E 03 00 00      MOV dword ptr [EBX + 0x20],0x38e
0068DCDA  C6 43 38 01               MOV byte ptr [EBX + 0x38],0x1
0068DCDE  8D B3 A5 00 00 00         LEA ESI,[EBX + 0xa5]
0068DCE4  BF 08 00 00 00            MOV EDI,0x8
LAB_0068dce9:
0068DCE9  83 3E 00                  CMP dword ptr [ESI],0x0
0068DCEC  74 17                     JZ 0x0068dd05
0068DCEE  8B 46 04                  MOV EAX,dword ptr [ESI + 0x4]
0068DCF1  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0068DCF4  8D 84 08 0B 01 00 00      LEA EAX,[EAX + ECX*0x1 + 0x10b]
0068DCFB  50                        PUSH EAX
0068DCFC  6A 00                     PUSH 0x0
0068DCFE  E8 5D 23 02 00            CALL 0x006b0060
0068DD03  89 06                     MOV dword ptr [ESI],EAX
LAB_0068dd05:
0068DD05  83 C6 0C                  ADD ESI,0xc
0068DD08  4F                        DEC EDI
0068DD09  75 DE                     JNZ 0x0068dce9
0068DD0B  8B 83 A5 00 00 00         MOV EAX,dword ptr [EBX + 0xa5]
0068DD11  85 C0                     TEST EAX,EAX
0068DD13  75 13                     JNZ 0x0068dd28
0068DD15  6A 0A                     PUSH 0xa
0068DD17  6A 08                     PUSH 0x8
0068DD19  6A 0A                     PUSH 0xa
0068DD1B  6A 00                     PUSH 0x0
0068DD1D  E8 6E 05 02 00            CALL 0x006ae290
0068DD22  89 83 A5 00 00 00         MOV dword ptr [EBX + 0xa5],EAX
LAB_0068dd28:
0068DD28  8B 83 B1 00 00 00         MOV EAX,dword ptr [EBX + 0xb1]
0068DD2E  85 C0                     TEST EAX,EAX
0068DD30  75 13                     JNZ 0x0068dd45
0068DD32  6A 0A                     PUSH 0xa
0068DD34  6A 34                     PUSH 0x34
0068DD36  6A 0A                     PUSH 0xa
0068DD38  6A 00                     PUSH 0x0
0068DD3A  E8 51 05 02 00            CALL 0x006ae290
0068DD3F  89 83 B1 00 00 00         MOV dword ptr [EBX + 0xb1],EAX
LAB_0068dd45:
0068DD45  8B 83 BD 00 00 00         MOV EAX,dword ptr [EBX + 0xbd]
0068DD4B  85 C0                     TEST EAX,EAX
0068DD4D  75 13                     JNZ 0x0068dd62
0068DD4F  6A 0A                     PUSH 0xa
0068DD51  6A 4A                     PUSH 0x4a
0068DD53  6A 0A                     PUSH 0xa
0068DD55  6A 00                     PUSH 0x0
0068DD57  E8 34 05 02 00            CALL 0x006ae290
0068DD5C  89 83 BD 00 00 00         MOV dword ptr [EBX + 0xbd],EAX
LAB_0068dd62:
0068DD62  8B 83 C9 00 00 00         MOV EAX,dword ptr [EBX + 0xc9]
0068DD68  85 C0                     TEST EAX,EAX
0068DD6A  75 13                     JNZ 0x0068dd7f
0068DD6C  6A 0A                     PUSH 0xa
0068DD6E  6A 08                     PUSH 0x8
0068DD70  6A 0A                     PUSH 0xa
0068DD72  6A 00                     PUSH 0x0
0068DD74  E8 17 05 02 00            CALL 0x006ae290
0068DD79  89 83 C9 00 00 00         MOV dword ptr [EBX + 0xc9],EAX
LAB_0068dd7f:
0068DD7F  33 FF                     XOR EDI,EDI
0068DD81  66 39 BB 25 01 00 00      CMP word ptr [EBX + 0x125],DI
0068DD88  0F 8E 47 01 00 00         JLE 0x0068ded5
0068DD8E  8B 93 A5 00 00 00         MOV EDX,dword ptr [EBX + 0xa5]
0068DD94  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0068DD97  89 7A 0C                  MOV dword ptr [EDX + 0xc],EDI
0068DD9A  8B 88 07 01 00 00         MOV ECX,dword ptr [EAX + 0x107]
0068DDA0  66 39 BB 25 01 00 00      CMP word ptr [EBX + 0x125],DI
0068DDA7  8D B4 01 0B 01 00 00      LEA ESI,[ECX + EAX*0x1 + 0x10b]
0068DDAE  7E 71                     JLE 0x0068de21
LAB_0068ddb0:
0068DDB0  8B 53 24                  MOV EDX,dword ptr [EBX + 0x24]
0068DDB3  6A 00                     PUSH 0x0
0068DDB5  89 56 04                  MOV dword ptr [ESI + 0x4],EDX
0068DDB8  8B 83 9D 00 00 00         MOV EAX,dword ptr [EBX + 0x9d]
0068DDBE  89 46 77                  MOV dword ptr [ESI + 0x77],EAX
0068DDC1  8A 8B 88 00 00 00         MOV CL,byte ptr [EBX + 0x88]
0068DDC7  8D 55 F8                  LEA EDX,[EBP + -0x8]
0068DDCA  56                        PUSH ESI
0068DDCB  8D 45 F0                  LEA EAX,[EBP + -0x10]
0068DDCE  52                        PUSH EDX
0068DDCF  88 4E 6A                  MOV byte ptr [ESI + 0x6a],CL
0068DDD2  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
0068DDD8  50                        PUSH EAX
0068DDD9  68 84 03 00 00            PUSH 0x384
0068DDDE  E8 DF 3D D7 FF            CALL 0x00401bc2
0068DDE3  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0068DDE6  33 C9                     XOR ECX,ECX
0068DDE8  89 4D E4                  MOV dword ptr [EBP + -0x1c],ECX
0068DDEB  89 4D E8                  MOV dword ptr [EBP + -0x18],ECX
0068DDEE  8B 8B A5 00 00 00         MOV ECX,dword ptr [EBX + 0xa5]
0068DDF4  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
0068DDF7  8B 50 18                  MOV EDX,dword ptr [EAX + 0x18]
0068DDFA  8D 45 E4                  LEA EAX,[EBP + -0x1c]
0068DDFD  89 55 E4                  MOV dword ptr [EBP + -0x1c],EDX
0068DE00  50                        PUSH EAX
0068DE01  51                        PUSH ECX
0068DE02  E8 B9 03 02 00            CALL 0x006ae1c0
0068DE07  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
0068DE0A  89 9A 84 02 00 00         MOV dword ptr [EDX + 0x284],EBX
0068DE10  8B 46 14                  MOV EAX,dword ptr [ESI + 0x14]
0068DE13  03 F0                     ADD ESI,EAX
0068DE15  47                        INC EDI
0068DE16  0F BF 83 25 01 00 00      MOVSX EAX,word ptr [EBX + 0x125]
0068DE1D  3B F8                     CMP EDI,EAX
0068DE1F  7C 8F                     JL 0x0068ddb0
LAB_0068de21:
0068DE21  8A 4B 24                  MOV CL,byte ptr [EBX + 0x24]
0068DE24  66 8B 53 39               MOV DX,word ptr [EBX + 0x39]
0068DE28  51                        PUSH ECX
0068DE29  6A 00                     PUSH 0x0
0068DE2B  68 00 80 00 00            PUSH 0x8000
0068DE30  52                        PUSH EDX
0068DE31  68 1C 57 7D 00            PUSH 0x7d571c
0068DE36  E8 86 75 D7 FF            CALL 0x004053c1
0068DE3B  8D 4D F0                  LEA ECX,[EBP + -0x10]
0068DE3E  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
0068DE41  51                        PUSH ECX
0068DE42  50                        PUSH EAX
0068DE43  E8 7C 36 D7 FF            CALL 0x004014c4
0068DE48  8D 55 F4                  LEA EDX,[EBP + -0xc]
0068DE4B  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0068DE4E  52                        PUSH EDX
0068DE4F  E8 79 7D D7 FF            CALL 0x00405bcd
0068DE54  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0068DE57  8B 43 24                  MOV EAX,dword ptr [EBX + 0x24]
0068DE5A  83 C4 20                  ADD ESP,0x20
0068DE5D  89 41 04                  MOV dword ptr [ECX + 0x4],EAX
0068DE60  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0068DE63  8B 93 9D 00 00 00         MOV EDX,dword ptr [EBX + 0x9d]
0068DE69  6A 00                     PUSH 0x0
0068DE6B  89 50 77                  MOV dword ptr [EAX + 0x77],EDX
0068DE6E  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0068DE71  8A 8B 88 00 00 00         MOV CL,byte ptr [EBX + 0x88]
0068DE77  88 4A 6A                  MOV byte ptr [EDX + 0x6a],CL
0068DE7A  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0068DE7D  8D 4D F8                  LEA ECX,[EBP + -0x8]
0068DE80  50                        PUSH EAX
0068DE81  8D 55 F0                  LEA EDX,[EBP + -0x10]
0068DE84  51                        PUSH ECX
0068DE85  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
0068DE8B  52                        PUSH EDX
0068DE8C  68 84 03 00 00            PUSH 0x384
0068DE91  E8 2C 3D D7 FF            CALL 0x00401bc2
0068DE96  8D 45 FC                  LEA EAX,[EBP + -0x4]
0068DE99  50                        PUSH EAX
0068DE9A  E8 2E 7D D7 FF            CALL 0x00405bcd
0068DE9F  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0068DEA2  33 C9                     XOR ECX,ECX
0068DEA4  89 4D E4                  MOV dword ptr [EBP + -0x1c],ECX
0068DEA7  83 C4 04                  ADD ESP,0x4
0068DEAA  89 4D E8                  MOV dword ptr [EBP + -0x18],ECX
0068DEAD  8B 8B A5 00 00 00         MOV ECX,dword ptr [EBX + 0xa5]
0068DEB3  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
0068DEB6  8B 50 18                  MOV EDX,dword ptr [EAX + 0x18]
0068DEB9  8D 45 E4                  LEA EAX,[EBP + -0x1c]
0068DEBC  89 55 E4                  MOV dword ptr [EBP + -0x1c],EDX
0068DEBF  50                        PUSH EAX
0068DEC0  51                        PUSH ECX
0068DEC1  E8 FA 02 02 00            CALL 0x006ae1c0
0068DEC6  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
0068DEC9  89 83 A1 00 00 00         MOV dword ptr [EBX + 0xa1],EAX
0068DECF  89 9A 84 02 00 00         MOV dword ptr [EDX + 0x284],EBX
LAB_0068ded5:
0068DED5  8B 45 A0                  MOV EAX,dword ptr [EBP + -0x60]
0068DED8  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0068DEDD  33 C0                     XOR EAX,EAX
0068DEDF  5F                        POP EDI
0068DEE0  5E                        POP ESI
0068DEE1  5B                        POP EBX
0068DEE2  8B E5                     MOV ESP,EBP
0068DEE4  5D                        POP EBP
0068DEE5  C2 04 00                  RET 0x4
LAB_0068dee8:
0068DEE8  8B 4D A0                  MOV ECX,dword ptr [EBP + -0x60]
0068DEEB  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0068DEF1  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
0068DEF4  E8 53 49 D7 FF            CALL 0x0040284c
0068DEF9  8D 55 FC                  LEA EDX,[EBP + -0x4]
0068DEFC  52                        PUSH EDX
0068DEFD  E8 CB 7C D7 FF            CALL 0x00405bcd
0068DF02  8D 45 F4                  LEA EAX,[EBP + -0xc]
0068DF05  50                        PUSH EAX
0068DF06  E8 C2 7C D7 FF            CALL 0x00405bcd
0068DF0B  68 00 57 7D 00            PUSH 0x7d5700
0068DF10  68 CC 4C 7A 00            PUSH 0x7a4ccc
0068DF15  56                        PUSH ESI
0068DF16  57                        PUSH EDI
0068DF17  6A 61                     PUSH 0x61
0068DF19  68 E0 56 7D 00            PUSH 0x7d56e0
0068DF1E  E8 AD F5 01 00            CALL 0x006ad4d0
0068DF23  83 C4 20                  ADD ESP,0x20
0068DF26  85 C0                     TEST EAX,EAX
0068DF28  74 01                     JZ 0x0068df2b
0068DF2A  CC                        INT3
LAB_0068df2b:
0068DF2B  6A 62                     PUSH 0x62
0068DF2D  68 E0 56 7D 00            PUSH 0x7d56e0
0068DF32  57                        PUSH EDI
0068DF33  56                        PUSH ESI
0068DF34  E8 07 7F 01 00            CALL 0x006a5e40
0068DF39  8B C6                     MOV EAX,ESI
0068DF3B  5F                        POP EDI
0068DF3C  5E                        POP ESI
0068DF3D  5B                        POP EBX
0068DF3E  8B E5                     MOV ESP,EBP
0068DF40  5D                        POP EBP
0068DF41  C2 04 00                  RET 0x4
