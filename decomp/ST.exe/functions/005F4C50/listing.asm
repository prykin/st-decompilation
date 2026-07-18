FUN_005f4c50:
005F4C50  55                        PUSH EBP
005F4C51  8B EC                     MOV EBP,ESP
005F4C53  83 EC 28                  SUB ESP,0x28
005F4C56  DB 45 18                  FILD dword ptr [EBP + 0x18]
005F4C59  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
005F4C5C  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
005F4C5F  53                        PUSH EBX
005F4C60  8B 5D 14                  MOV EBX,dword ptr [EBP + 0x14]
005F4C63  D8 3D A4 C5 79 00         FDIVR float ptr [0x0079c5a4]
005F4C69  56                        PUSH ESI
005F4C6A  8B F1                     MOV ESI,ECX
005F4C6C  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
005F4C6F  57                        PUSH EDI
005F4C70  89 86 09 01 00 00         MOV dword ptr [ESI + 0x109],EAX
005F4C76  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
005F4C79  85 DB                     TEST EBX,EBX
005F4C7B  89 9E 0D 01 00 00         MOV dword ptr [ESI + 0x10d],EBX
005F4C81  89 8E 11 01 00 00         MOV dword ptr [ESI + 0x111],ECX
005F4C87  89 96 15 01 00 00         MOV dword ptr [ESI + 0x115],EDX
005F4C8D  89 86 19 01 00 00         MOV dword ptr [ESI + 0x119],EAX
005F4C93  C7 86 21 01 00 00 E2 FF FF FF  MOV dword ptr [ESI + 0x121],0xffffffe2
005F4C9D  C7 86 1D 01 00 00 14 00 00 00  MOV dword ptr [ESI + 0x11d],0x14
005F4CA7  C7 86 25 01 00 00 07 00 00 00  MOV dword ptr [ESI + 0x125],0x7
005F4CB1  D9 5D FC                  FSTP float ptr [EBP + -0x4]
005F4CB4  7E 4B                     JLE 0x005f4d01
005F4CB6  33 FF                     XOR EDI,EDI
005F4CB8  8D 8E 49 01 00 00         LEA ECX,[ESI + 0x149]
005F4CBE  89 5D 14                  MOV dword ptr [EBP + 0x14],EBX
LAB_005f4cc1:
005F4CC1  8B 96 1D 01 00 00         MOV EDX,dword ptr [ESI + 0x11d]
005F4CC7  89 51 F0                  MOV dword ptr [ECX + -0x10],EDX
005F4CCA  8B 86 19 01 00 00         MOV EAX,dword ptr [ESI + 0x119]
005F4CD0  89 01                     MOV dword ptr [ECX],EAX
005F4CD2  8B C7                     MOV EAX,EDI
005F4CD4  99                        CDQ
005F4CD5  F7 BE 21 01 00 00         IDIV dword ptr [ESI + 0x121]
005F4CDB  8B 15 38 2A 80 00         MOV EDX,dword ptr [0x00802a38]
005F4CE1  81 EF 96 00 00 00         SUB EDI,0x96
005F4CE7  83 C1 04                  ADD ECX,0x4
005F4CEA  03 82 E4 00 00 00         ADD EAX,dword ptr [EDX + 0xe4]
005F4CF0  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
005F4CF3  03 C2                     ADD EAX,EDX
005F4CF5  89 41 0C                  MOV dword ptr [ECX + 0xc],EAX
005F4CF8  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
005F4CFB  48                        DEC EAX
005F4CFC  89 45 14                  MOV dword ptr [EBP + 0x14],EAX
005F4CFF  75 C0                     JNZ 0x005f4cc1
LAB_005f4d01:
005F4D01  8B 86 69 01 00 00         MOV EAX,dword ptr [ESI + 0x169]
005F4D07  85 C0                     TEST EAX,EAX
005F4D09  74 06                     JZ 0x005f4d11
005F4D0B  50                        PUSH EAX
005F4D0C  E8 FF 93 0B 00            CALL 0x006ae110
LAB_005f4d11:
005F4D11  0F AF 5D 18               IMUL EBX,dword ptr [EBP + 0x18]
005F4D15  6A 0A                     PUSH 0xa
005F4D17  6A 23                     PUSH 0x23
005F4D19  53                        PUSH EBX
005F4D1A  6A 00                     PUSH 0x0
005F4D1C  E8 6F 95 0B 00            CALL 0x006ae290
005F4D21  85 C0                     TEST EAX,EAX
005F4D23  89 86 69 01 00 00         MOV dword ptr [ESI + 0x169],EAX
005F4D29  0F 84 95 01 00 00         JZ 0x005f4ec4
005F4D2F  8B 86 0D 01 00 00         MOV EAX,dword ptr [ESI + 0x10d]
005F4D35  33 D2                     XOR EDX,EDX
005F4D37  85 C0                     TEST EAX,EAX
005F4D39  89 55 14                  MOV dword ptr [EBP + 0x14],EDX
005F4D3C  0F 8E 82 01 00 00         JLE 0x005f4ec4
LAB_005f4d42:
005F4D42  8B 86 09 01 00 00         MOV EAX,dword ptr [ESI + 0x109]
005F4D48  C7 45 08 00 00 00 00      MOV dword ptr [EBP + 0x8],0x0
005F4D4F  8B D8                     MOV EBX,EAX
005F4D51  C7 45 10 00 00 00 00      MOV dword ptr [EBP + 0x10],0x0
005F4D58  0F AF DA                  IMUL EBX,EDX
005F4D5B  85 C0                     TEST EAX,EAX
005F4D5D  89 5D 0C                  MOV dword ptr [EBP + 0xc],EBX
005F4D60  0F 8E 4C 01 00 00         JLE 0x005f4eb2
005F4D66  EB 06                     JMP 0x005f4d6e
LAB_005f4d68:
005F4D68  8B 5D 0C                  MOV EBX,dword ptr [EBP + 0xc]
005F4D6B  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
LAB_005f4d6e:
005F4D6E  B9 08 00 00 00            MOV ECX,0x8
005F4D73  33 C0                     XOR EAX,EAX
005F4D75  8D 7D D8                  LEA EDI,[EBP + -0x28]
005F4D78  F3 AB                     STOSD.REP ES:EDI
005F4D7A  66 AB                     STOSW ES:EDI
005F4D7C  85 D2                     TEST EDX,EDX
005F4D7E  AA                        STOSB ES:EDI
005F4D7F  75 38                     JNZ 0x005f4db9
005F4D81  D9 45 08                  FLD float ptr [EBP + 0x8]
005F4D84  D9 FF                     FCOS
005F4D86  DC 0D 98 C5 79 00         FMUL double ptr [0x0079c598]
005F4D8C  E8 F7 94 13 00            CALL 0x0072e288
005F4D91  D9 45 08                  FLD float ptr [EBP + 0x8]
005F4D94  D9 FE                     FSIN
005F4D96  8B F8                     MOV EDI,EAX
005F4D98  89 7D EA                  MOV dword ptr [EBP + -0x16],EDI
005F4D9B  DC 0D 98 C5 79 00         FMUL double ptr [0x0079c598]
005F4DA1  E8 E2 94 13 00            CALL 0x0072e288
005F4DA6  D9 45 08                  FLD float ptr [EBP + 0x8]
005F4DA9  D8 45 FC                  FADD float ptr [EBP + -0x4]
005F4DAC  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
005F4DAF  8B D8                     MOV EBX,EAX
005F4DB1  89 5D EE                  MOV dword ptr [EBP + -0x12],EBX
005F4DB4  D9 5D 08                  FSTP float ptr [EBP + 0x8]
005F4DB7  EB 2D                     JMP 0x005f4de6
LAB_005f4db9:
005F4DB9  8B BE 69 01 00 00         MOV EDI,dword ptr [ESI + 0x169]
005F4DBF  8B CB                     MOV ECX,EBX
005F4DC1  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
005F4DC4  8B 47 0C                  MOV EAX,dword ptr [EDI + 0xc]
005F4DC7  2B CB                     SUB ECX,EBX
005F4DC9  3B C8                     CMP ECX,EAX
005F4DCB  73 0B                     JNC 0x005f4dd8
005F4DCD  8B 47 08                  MOV EAX,dword ptr [EDI + 0x8]
005F4DD0  0F AF C1                  IMUL EAX,ECX
005F4DD3  03 47 1C                  ADD EAX,dword ptr [EDI + 0x1c]
005F4DD6  EB 02                     JMP 0x005f4dda
LAB_005f4dd8:
005F4DD8  33 C0                     XOR EAX,EAX
LAB_005f4dda:
005F4DDA  8B 78 12                  MOV EDI,dword ptr [EAX + 0x12]
005F4DDD  89 7D EA                  MOV dword ptr [EBP + -0x16],EDI
005F4DE0  8B 58 16                  MOV EBX,dword ptr [EAX + 0x16]
005F4DE3  89 5D EE                  MOV dword ptr [EBP + -0x12],EBX
LAB_005f4de6:
005F4DE6  8B 8C 96 39 01 00 00      MOV ECX,dword ptr [ESI + EDX*0x4 + 0x139]
005F4DED  B8 AD 8B DB 68            MOV EAX,0x68db8bad
005F4DF2  8B D1                     MOV EDX,ECX
005F4DF4  0F AF CB                  IMUL ECX,EBX
005F4DF7  0F AF D7                  IMUL EDX,EDI
005F4DFA  F7 EA                     IMUL EDX
005F4DFC  C1 FA 0C                  SAR EDX,0xc
005F4DFF  8B C2                     MOV EAX,EDX
005F4E01  8B 9E 15 01 00 00         MOV EBX,dword ptr [ESI + 0x115]
005F4E07  C1 E8 1F                  SHR EAX,0x1f
005F4E0A  03 D0                     ADD EDX,EAX
005F4E0C  8B 86 11 01 00 00         MOV EAX,dword ptr [ESI + 0x111]
005F4E12  03 D0                     ADD EDX,EAX
005F4E14  B8 AD 8B DB 68            MOV EAX,0x68db8bad
005F4E19  89 55 DA                  MOV dword ptr [EBP + -0x26],EDX
005F4E1C  F7 E9                     IMUL ECX
005F4E1E  C1 FA 0C                  SAR EDX,0xc
005F4E21  8B CA                     MOV ECX,EDX
005F4E23  A1 EC E5 7C 00            MOV EAX,[0x007ce5ec]
005F4E28  C1 E9 1F                  SHR ECX,0x1f
005F4E2B  03 D1                     ADD EDX,ECX
005F4E2D  33 C9                     XOR ECX,ECX
005F4E2F  03 D3                     ADD EDX,EBX
005F4E31  89 45 F2                  MOV dword ptr [EBP + -0xe],EAX
005F4E34  89 55 DE                  MOV dword ptr [EBP + -0x22],EDX
005F4E37  8B 96 19 01 00 00         MOV EDX,dword ptr [ESI + 0x119]
005F4E3D  8A 86 03 01 00 00         MOV AL,byte ptr [ESI + 0x103]
005F4E43  89 55 E2                  MOV dword ptr [EBP + -0x1e],EDX
005F4E46  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
005F4E49  C7 45 E6 00 00 00 00      MOV dword ptr [EBP + -0x1a],0x0
005F4E50  C6 45 D9 03               MOV byte ptr [EBP + -0x27],0x3
005F4E54  C7 45 F7 FF FF FF FF      MOV dword ptr [EBP + -0x9],0xffffffff
005F4E5B  8B BC 96 59 01 00 00      MOV EDI,dword ptr [ESI + EDX*0x4 + 0x159]
005F4E62  85 FF                     TEST EDI,EDI
005F4E64  0F 95 C1                  SETNZ CL
005F4E67  84 C0                     TEST AL,AL
005F4E69  8B F9                     MOV EDI,ECX
005F4E6B  74 0E                     JZ 0x005f4e7b
005F4E6D  57                        PUSH EDI
005F4E6E  8D 45 D8                  LEA EAX,[EBP + -0x28]
005F4E71  6A 03                     PUSH 0x3
005F4E73  50                        PUSH EAX
005F4E74  8B CE                     MOV ECX,ESI
005F4E76  E8 CC E3 E0 FF            CALL 0x00403247
LAB_005f4e7b:
005F4E7B  8B 86 69 01 00 00         MOV EAX,dword ptr [ESI + 0x169]
005F4E81  8D 55 D8                  LEA EDX,[EBP + -0x28]
005F4E84  85 FF                     TEST EDI,EDI
005F4E86  0F 94 C1                  SETZ CL
005F4E89  52                        PUSH EDX
005F4E8A  50                        PUSH EAX
005F4E8B  88 4D D8                  MOV byte ptr [EBP + -0x28],CL
005F4E8E  E8 2D 93 0B 00            CALL 0x006ae1c0
005F4E93  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
005F4E96  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
005F4E99  8B 8E 09 01 00 00         MOV ECX,dword ptr [ESI + 0x109]
005F4E9F  40                        INC EAX
005F4EA0  42                        INC EDX
005F4EA1  3B C1                     CMP EAX,ECX
005F4EA3  89 45 10                  MOV dword ptr [EBP + 0x10],EAX
005F4EA6  89 55 0C                  MOV dword ptr [EBP + 0xc],EDX
005F4EA9  0F 8C B9 FE FF FF         JL 0x005f4d68
005F4EAF  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
LAB_005f4eb2:
005F4EB2  8B 86 0D 01 00 00         MOV EAX,dword ptr [ESI + 0x10d]
005F4EB8  42                        INC EDX
005F4EB9  3B D0                     CMP EDX,EAX
005F4EBB  89 55 14                  MOV dword ptr [EBP + 0x14],EDX
005F4EBE  0F 8C 7E FE FF FF         JL 0x005f4d42
LAB_005f4ec4:
005F4EC4  8B 86 69 01 00 00         MOV EAX,dword ptr [ESI + 0x169]
005F4ECA  5F                        POP EDI
005F4ECB  5E                        POP ESI
005F4ECC  5B                        POP EBX
005F4ECD  85 C0                     TEST EAX,EAX
005F4ECF  74 0B                     JZ 0x005f4edc
005F4ED1  B8 01 00 00 00            MOV EAX,0x1
005F4ED6  8B E5                     MOV ESP,EBP
005F4ED8  5D                        POP EBP
005F4ED9  C2 18 00                  RET 0x18
LAB_005f4edc:
005F4EDC  33 C0                     XOR EAX,EAX
005F4EDE  8B E5                     MOV ESP,EBP
005F4EE0  5D                        POP EBP
005F4EE1  C2 18 00                  RET 0x18
