FUN_00428e50:
00428E50  55                        PUSH EBP
00428E51  8B EC                     MOV EBP,ESP
00428E53  81 EC 10 01 00 00         SUB ESP,0x110
00428E59  53                        PUSH EBX
00428E5A  56                        PUSH ESI
00428E5B  57                        PUSH EDI
00428E5C  68 F2 04 00 00            PUSH 0x4f2
00428E61  E8 6A 76 28 00            CALL 0x006b04d0
00428E66  85 C0                     TEST EAX,EAX
00428E68  0F 84 62 04 00 00         JZ 0x004292d0
00428E6E  8B C8                     MOV ECX,EAX
00428E70  E8 2B 2E 2B 00            CALL 0x006dbca0
00428E75  8B F8                     MOV EDI,EAX
00428E77  85 FF                     TEST EDI,EDI
00428E79  89 7D D4                  MOV dword ptr [EBP + -0x2c],EDI
00428E7C  75 17                     JNZ 0x00428e95
LAB_00428e7e:
00428E7E  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
00428E83  68 4D 02 00 00            PUSH 0x24d
00428E88  68 DC 5F 7A 00            PUSH 0x7a5fdc
00428E8D  50                        PUSH EAX
00428E8E  6A FE                     PUSH -0x2
00428E90  E8 AB CF 27 00            CALL 0x006a5e40
LAB_00428e95:
00428E95  DB 05 70 75 80 00         FILD dword ptr [0x00807570]
00428E9B  83 EC 08                  SUB ESP,0x8
00428E9E  DC 0D 90 05 79 00         FMUL double ptr [0x00790590]
00428EA4  D8 35 80 C5 7A 00         FDIV float ptr [0x007ac580]
00428EAA  DC 05 C0 01 79 00         FADD double ptr [0x007901c0]
00428EB0  DD 1C 24                  FSTP double ptr [ESP]
00428EB3  E8 98 52 30 00            CALL 0x0072e150
00428EB8  E8 CB 53 30 00            CALL 0x0072e288
00428EBD  DB 05 70 75 80 00         FILD dword ptr [0x00807570]
00428EC3  8B D8                     MOV EBX,EAX
00428EC5  89 5D F0                  MOV dword ptr [EBP + -0x10],EBX
00428EC8  D8 3D 80 C5 7A 00         FDIVR float ptr [0x007ac580]
00428ECE  8D 73 03                  LEA ESI,[EBX + 0x3]
00428ED1  83 E6 FC                  AND ESI,0xfffffffc
00428ED4  89 B5 1C FF FF FF         MOV dword ptr [EBP + 0xffffff1c],ESI
00428EDA  D8 3D F8 04 79 00         FDIVR float ptr [0x007904f8]
00428EE0  DC 05 C0 01 79 00         FADD double ptr [0x007901c0]
00428EE6  DD 1C 24                  FSTP double ptr [ESP]
00428EE9  E8 62 52 30 00            CALL 0x0072e150
00428EEE  DC 3D 80 05 79 00         FDIVR double ptr [0x00790580]
00428EF4  DD 9D 50 FF FF FF         FSTP double ptr [EBP + 0xffffff50]
00428EFA  DD 05 70 05 79 00         FLD double ptr [0x00790570]
00428F00  DC B5 50 FF FF FF         FDIV double ptr [EBP + 0xffffff50]
00428F06  DC 05 C0 01 79 00         FADD double ptr [0x007901c0]
00428F0C  DD 1C 24                  FSTP double ptr [ESP]
00428F0F  E8 3C 52 30 00            CALL 0x0072e150
00428F14  83 C4 08                  ADD ESP,0x8
00428F17  E8 6C 53 30 00            CALL 0x0072e288
00428F1C  89 85 40 FF FF FF         MOV dword ptr [EBP + 0xffffff40],EAX
00428F22  6A 00                     PUSH 0x0
00428F24  DB 85 40 FF FF FF         FILD dword ptr [EBP + 0xffffff40]
00428F2A  68 97 EE 23 40            PUSH 0x4023ee97
00428F2F  68 40 35 5E 86            PUSH 0x865e3540
00428F34  68 00 00 24 40            PUSH 0x40240000
00428F39  6A 00                     PUSH 0x0
00428F3B  DC 8D 50 FF FF FF         FMUL double ptr [EBP + 0xffffff50]
00428F41  83 EC 08                  SUB ESP,0x8
00428F44  8B CE                     MOV ECX,ESI
00428F46  2B CB                     SUB ECX,EBX
00428F48  DC 25 80 05 79 00         FSUB double ptr [0x00790580]
00428F4E  DD 1C 24                  FSTP double ptr [ESP]
00428F51  DB 45 F0                  FILD dword ptr [EBP + -0x10]
00428F54  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
00428F57  68 00 00 24 C0            PUSH 0xc0240000
00428F5C  6A 00                     PUSH 0x0
00428F5E  8B CF                     MOV ECX,EDI
00428F60  DC 3D 90 05 79 00         FDIVR double ptr [0x00790590]
00428F66  83 EC 08                  SUB ESP,0x8
00428F69  DB 45 F0                  FILD dword ptr [EBP + -0x10]
00428F6C  DE C9                     FMULP
00428F6E  DC 05 90 05 79 00         FADD double ptr [0x00790590]
00428F74  DC 25 60 05 79 00         FSUB double ptr [0x00790560]
00428F7A  DD 1C 24                  FSTP double ptr [ESP]
00428F7D  68 C6 48 2C C0            PUSH 0xc02c48c6
00428F82  68 A9 08 1F 00            PUSH 0x1f08a9
00428F87  50                        PUSH EAX
00428F88  56                        PUSH ESI
00428F89  6A 00                     PUSH 0x0
00428F8B  6A 00                     PUSH 0x0
00428F8D  6A 00                     PUSH 0x0
00428F8F  E8 BC 30 2B 00            CALL 0x006dc050
00428F94  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00428F97  C7 87 28 01 00 00 FF 00 00 00  MOV dword ptr [EDI + 0x128],0xff
00428FA1  C7 87 24 01 00 00 06 00 00 00  MOV dword ptr [EDI + 0x124],0x6
00428FAB  33 F6                     XOR ESI,ESI
00428FAD  8B 82 55 04 00 00         MOV EAX,dword ptr [EDX + 0x455]
00428FB3  85 C0                     TEST EAX,EAX
00428FB5  7E 36                     JLE 0x00428fed
00428FB7  8B C2                     MOV EAX,EDX
00428FB9  05 59 04 00 00            ADD EAX,0x459
00428FBE  89 45 C4                  MOV dword ptr [EBP + -0x3c],EAX
LAB_00428fc1:
00428FC1  8B 4D C4                  MOV ECX,dword ptr [EBP + -0x3c]
00428FC4  8B 19                     MOV EBX,dword ptr [ECX]
00428FC6  85 DB                     TEST EBX,EBX
00428FC8  74 0C                     JZ 0x00428fd6
00428FCA  8B 53 24                  MOV EDX,dword ptr [EBX + 0x24]
00428FCD  52                        PUSH EDX
00428FCE  E8 3D 1C 28 00            CALL 0x006aac10
00428FD3  89 43 3C                  MOV dword ptr [EBX + 0x3c],EAX
LAB_00428fd6:
00428FD6  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00428FD9  8B 55 C4                  MOV EDX,dword ptr [EBP + -0x3c]
00428FDC  46                        INC ESI
00428FDD  83 C2 04                  ADD EDX,0x4
00428FE0  8B 88 55 04 00 00         MOV ECX,dword ptr [EAX + 0x455]
00428FE6  89 55 C4                  MOV dword ptr [EBP + -0x3c],EDX
00428FE9  3B F1                     CMP ESI,ECX
00428FEB  7C D4                     JL 0x00428fc1
LAB_00428fed:
00428FED  68 00 00 24 40            PUSH 0x40240000
00428FF2  6A 00                     PUSH 0x0
00428FF4  68 00 00 24 40            PUSH 0x40240000
00428FF9  6A 00                     PUSH 0x0
00428FFB  6A 00                     PUSH 0x0
00428FFD  8B CF                     MOV ECX,EDI
00428FFF  E8 0C 46 2B 00            CALL 0x006dd610
00429004  6A 01                     PUSH 0x1
00429006  6A 00                     PUSH 0x0
00429008  6A 00                     PUSH 0x0
0042900A  6A 00                     PUSH 0x0
0042900C  6A 00                     PUSH 0x0
0042900E  6A 00                     PUSH 0x0
00429010  8D 8D 30 FF FF FF         LEA ECX,[EBP + 0xffffff30]
00429016  6A 00                     PUSH 0x0
00429018  8D 95 0C FF FF FF         LEA EDX,[EBP + 0xffffff0c]
0042901E  51                        PUSH ECX
0042901F  52                        PUSH EDX
00429020  8B CF                     MOV ECX,EDI
00429022  C7 85 30 FF FF FF 00 00 20 41  MOV dword ptr [EBP + 0xffffff30],0x41200000
0042902C  C7 85 34 FF FF FF 00 00 20 41  MOV dword ptr [EBP + 0xffffff34],0x41200000
00429036  C7 85 38 FF FF FF 00 00 00 00  MOV dword ptr [EBP + 0xffffff38],0x0
00429040  E8 8B 95 2B 00            CALL 0x006e25d0
00429045  6A 01                     PUSH 0x1
00429047  6A 00                     PUSH 0x0
00429049  6A 00                     PUSH 0x0
0042904B  68 00 00 34 40            PUSH 0x40340000
00429050  6A 00                     PUSH 0x0
00429052  6A 00                     PUSH 0x0
00429054  8D 85 30 FF FF FF         LEA EAX,[EBP + 0xffffff30]
0042905A  6A 00                     PUSH 0x0
0042905C  8D 8D 20 FF FF FF         LEA ECX,[EBP + 0xffffff20]
00429062  50                        PUSH EAX
00429063  51                        PUSH ECX
00429064  8B CF                     MOV ECX,EDI
00429066  E8 65 95 2B 00            CALL 0x006e25d0
0042906B  8B 95 20 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff20]
00429071  8B 85 0C FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff0c]
00429077  8B 5D D4                  MOV EBX,dword ptr [EBP + -0x2c]
0042907A  BE FB FF FF FF            MOV ESI,0xfffffffb
0042907F  C1 FA 10                  SAR EDX,0x10
00429082  C1 F8 10                  SAR EAX,0x10
00429085  2B C2                     SUB EAX,EDX
00429087  89 75 BC                  MOV dword ptr [EBP + -0x44],ESI
0042908A  89 85 3C FF FF FF         MOV dword ptr [EBP + 0xffffff3c],EAX
LAB_00429090:
00429090  DB 45 BC                  FILD dword ptr [EBP + -0x44]
00429093  6A 01                     PUSH 0x1
00429095  8D 85 30 FF FF FF         LEA EAX,[EBP + 0xffffff30]
0042909B  83 EC 08                  SUB ESP,0x8
0042909E  8D 8D 20 FF FF FF         LEA ECX,[EBP + 0xffffff20]
004290A4  D8 0D 04 05 79 00         FMUL float ptr [0x00790504]
004290AA  DD 1C 24                  FSTP double ptr [ESP]
004290AD  6A 00                     PUSH 0x0
004290AF  6A 00                     PUSH 0x0
004290B1  6A 00                     PUSH 0x0
004290B3  6A 00                     PUSH 0x0
004290B5  50                        PUSH EAX
004290B6  51                        PUSH ECX
004290B7  8B CB                     MOV ECX,EBX
004290B9  E8 12 95 2B 00            CALL 0x006e25d0
004290BE  8B 95 10 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff10]
004290C4  8B 85 24 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff24]
004290CA  8B 0D 50 52 7A 00         MOV ECX,dword ptr [0x007a5250]
004290D0  C1 FA 10                  SAR EDX,0x10
004290D3  C1 F8 10                  SAR EAX,0x10
004290D6  2B C2                     SUB EAX,EDX
004290D8  89 04 B1                  MOV dword ptr [ECX + ESI*0x4],EAX
004290DB  46                        INC ESI
004290DC  83 FE 05                  CMP ESI,0x5
004290DF  89 75 BC                  MOV dword ptr [EBP + -0x44],ESI
004290E2  7E AC                     JLE 0x00429090
004290E4  C7 45 D8 02 00 00 00      MOV dword ptr [EBP + -0x28],0x2
004290EB  BE B8 4D 7F 00            MOV ESI,0x7f4db8
LAB_004290f0:
004290F0  DB 45 D8                  FILD dword ptr [EBP + -0x28]
004290F3  8B 55 D8                  MOV EDX,dword ptr [EBP + -0x28]
004290F6  6A 01                     PUSH 0x1
004290F8  83 C2 FE                  ADD EDX,-0x2
004290FB  6A 00                     PUSH 0x0
004290FD  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
00429103  89 55 F0                  MOV dword ptr [EBP + -0x10],EDX
00429106  6A 00                     PUSH 0x0
00429108  DD 9D 44 FF FF FF         FSTP double ptr [EBP + 0xffffff44]
0042910E  DB 45 F0                  FILD dword ptr [EBP + -0x10]
00429111  8B BD 48 FF FF FF         MOV EDI,dword ptr [EBP + 0xffffff48]
00429117  8B 85 44 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff44]
0042911D  57                        PUSH EDI
0042911E  50                        PUSH EAX
0042911F  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
00429125  8D 85 30 FF FF FF         LEA EAX,[EBP + 0xffffff30]
0042912B  DD 9D 50 FF FF FF         FSTP double ptr [EBP + 0xffffff50]
00429131  8B 8D 54 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff54]
00429137  8B 95 50 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff50]
0042913D  51                        PUSH ECX
0042913E  52                        PUSH EDX
0042913F  8D 8D 20 FF FF FF         LEA ECX,[EBP + 0xffffff20]
00429145  50                        PUSH EAX
00429146  51                        PUSH ECX
00429147  8B CB                     MOV ECX,EBX
00429149  E8 82 94 2B 00            CALL 0x006e25d0
0042914E  8B 95 10 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff10]
00429154  8B 85 24 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff24]
0042915A  C1 FA 10                  SAR EDX,0x10
0042915D  C1 F8 10                  SAR EAX,0x10
00429160  2B C2                     SUB EAX,EDX
00429162  6A 01                     PUSH 0x1
00429164  89 46 FC                  MOV dword ptr [ESI + -0x4],EAX
00429167  8B 85 44 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff44]
0042916D  6A 00                     PUSH 0x0
0042916F  6A 00                     PUSH 0x0
00429171  57                        PUSH EDI
00429172  50                        PUSH EAX
00429173  57                        PUSH EDI
00429174  8D 8D 30 FF FF FF         LEA ECX,[EBP + 0xffffff30]
0042917A  50                        PUSH EAX
0042917B  8D 95 20 FF FF FF         LEA EDX,[EBP + 0xffffff20]
00429181  51                        PUSH ECX
00429182  52                        PUSH EDX
00429183  8B CB                     MOV ECX,EBX
00429185  E8 46 94 2B 00            CALL 0x006e25d0
0042918A  8B 85 10 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff10]
00429190  8B 8D 24 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff24]
00429196  8B 95 54 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff54]
0042919C  6A 01                     PUSH 0x1
0042919E  C1 F8 10                  SAR EAX,0x10
004291A1  C1 F9 10                  SAR ECX,0x10
004291A4  2B C8                     SUB ECX,EAX
004291A6  8B 85 50 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff50]
004291AC  6A 00                     PUSH 0x0
004291AE  6A 00                     PUSH 0x0
004291B0  89 0E                     MOV dword ptr [ESI],ECX
004291B2  8B 8D 44 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff44]
004291B8  52                        PUSH EDX
004291B9  50                        PUSH EAX
004291BA  57                        PUSH EDI
004291BB  8D 95 30 FF FF FF         LEA EDX,[EBP + 0xffffff30]
004291C1  51                        PUSH ECX
004291C2  8D 85 20 FF FF FF         LEA EAX,[EBP + 0xffffff20]
004291C8  52                        PUSH EDX
004291C9  50                        PUSH EAX
004291CA  8B CB                     MOV ECX,EBX
004291CC  E8 FF 93 2B 00            CALL 0x006e25d0
004291D1  8B 8D 10 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff10]
004291D7  8B 95 24 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff24]
004291DD  C1 F9 10                  SAR ECX,0x10
004291E0  C1 FA 10                  SAR EDX,0x10
004291E3  2B D1                     SUB EDX,ECX
004291E5  89 56 04                  MOV dword ptr [ESI + 0x4],EDX
004291E8  8B 55 D8                  MOV EDX,dword ptr [EBP + -0x28]
004291EB  83 C6 0C                  ADD ESI,0xc
004291EE  83 C2 02                  ADD EDX,0x2
004291F1  81 FE C4 4D 7F 00         CMP ESI,0x7f4dc4
004291F7  89 55 D8                  MOV dword ptr [EBP + -0x28],EDX
004291FA  0F 8E F0 FE FF FF         JLE 0x004290f0
00429200  33 C0                     XOR EAX,EAX
00429202  C6 45 D8 02               MOV byte ptr [EBP + -0x28],0x2
00429206  89 85 60 FF FF FF         MOV dword ptr [EBP + 0xffffff60],EAX
0042920C  C6 45 FB 01               MOV byte ptr [EBP + -0x5],0x1
00429210  89 45 C4                  MOV dword ptr [EBP + -0x3c],EAX
LAB_00429213:
00429213  8A 45 D8                  MOV AL,byte ptr [EBP + -0x28]
00429216  33 F6                     XOR ESI,ESI
00429218  D0 E8                     SHR AL,0x1
0042921A  68 00 00 24 40            PUSH 0x40240000
0042921F  88 45 B4                  MOV byte ptr [EBP + -0x4c],AL
00429222  8B 45 C4                  MOV EAX,dword ptr [EBP + -0x3c]
00429225  56                        PUSH ESI
00429226  68 00 00 24 40            PUSH 0x40240000
0042922B  56                        PUSH ESI
0042922C  50                        PUSH EAX
0042922D  8B CB                     MOV ECX,EBX
0042922F  E8 DC 43 2B 00            CALL 0x006dd610
00429234  6A 0A                     PUSH 0xa
00429236  6A 1C                     PUSH 0x1c
00429238  6A 0A                     PUSH 0xa
0042923A  56                        PUSH ESI
0042923B  E8 50 50 28 00            CALL 0x006ae290
00429240  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00429243  89 45 C0                  MOV dword ptr [EBP + -0x40],EAX
00429246  89 35 D0 4D 7F 00         MOV dword ptr [0x007f4dd0],ESI
0042924C  89 B5 74 FF FF FF         MOV dword ptr [EBP + 0xffffff74],ESI
00429252  39 B1 55 04 00 00         CMP dword ptr [ECX + 0x455],ESI
00429258  0F 8E 8F 01 00 00         JLE 0x004293ed
0042925E  81 C1 59 04 00 00         ADD ECX,0x459
00429264  89 4D DC                  MOV dword ptr [EBP + -0x24],ECX
LAB_00429267:
00429267  8B 4D DC                  MOV ECX,dword ptr [EBP + -0x24]
0042926A  8B 31                     MOV ESI,dword ptr [ECX]
0042926C  85 F6                     TEST ESI,ESI
0042926E  0F 84 52 01 00 00         JZ 0x004293c6
00429274  8B 0D 58 2A 80 00         MOV ECX,dword ptr [0x00802a58]
0042927A  85 C9                     TEST ECX,ECX
0042927C  74 31                     JZ 0x004292af
0042927E  8B 85 60 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff60]
00429284  40                        INC EAX
00429285  8B D0                     MOV EDX,EAX
00429287  89 85 60 FF FF FF         MOV dword ptr [EBP + 0xffffff60],EAX
0042928D  81 E2 0F 00 00 80         AND EDX,0x8000000f
00429293  79 05                     JNS 0x0042929a
00429295  4A                        DEC EDX
00429296  83 CA F0                  OR EDX,0xfffffff0
00429299  42                        INC EDX
LAB_0042929a:
0042929A  75 13                     JNZ 0x004292af
0042929C  99                        CDQ
0042929D  83 E2 0F                  AND EDX,0xf
004292A0  6A 00                     PUSH 0x0
004292A2  03 C2                     ADD EAX,EDX
004292A4  C1 F8 04                  SAR EAX,0x4
004292A7  50                        PUSH EAX
004292A8  6A 01                     PUSH 0x1
004292AA  E8 C3 A1 FD FF            CALL 0x00403472
LAB_004292af:
004292AF  8B 7D C0                  MOV EDI,dword ptr [EBP + -0x40]
004292B2  33 C9                     XOR ECX,ECX
LAB_004292b4:
004292B4  3B 4F 0C                  CMP ECX,dword ptr [EDI + 0xc]
004292B7  73 29                     JNC 0x004292e2
004292B9  8B 47 08                  MOV EAX,dword ptr [EDI + 0x8]
004292BC  8B 57 1C                  MOV EDX,dword ptr [EDI + 0x1c]
004292BF  0F AF C1                  IMUL EAX,ECX
004292C2  03 C2                     ADD EAX,EDX
004292C4  74 1C                     JZ 0x004292e2
004292C6  8B 56 28                  MOV EDX,dword ptr [ESI + 0x28]
004292C9  3B 10                     CMP EDX,dword ptr [EAX]
004292CB  74 0D                     JZ 0x004292da
004292CD  41                        INC ECX
004292CE  EB E4                     JMP 0x004292b4
LAB_004292d0:
004292D0  33 FF                     XOR EDI,EDI
004292D2  89 7D D4                  MOV dword ptr [EBP + -0x2c],EDI
004292D5  E9 A4 FB FF FF            JMP 0x00428e7e
LAB_004292da:
004292DA  85 C0                     TEST EAX,EAX
004292DC  0F 85 BE 00 00 00         JNZ 0x004293a0
LAB_004292e2:
004292E2  0F BF 46 06               MOVSX EAX,word ptr [ESI + 0x6]
004292E6  66 0F B6 56 48            MOVZX DX,byte ptr [ESI + 0x48]
004292EB  0F BF 7E 04               MOVSX EDI,word ptr [ESI + 0x4]
004292EF  0F BF 4E 08               MOVSX ECX,word ptr [ESI + 0x8]
004292F3  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
004292F6  33 C0                     XOR EAX,EAX
004292F8  66 89 46 04               MOV word ptr [ESI + 0x4],AX
004292FC  66 89 46 06               MOV word ptr [ESI + 0x6],AX
00429300  66 89 56 08               MOV word ptr [ESI + 0x8],DX
00429304  8B 83 40 01 00 00         MOV EAX,dword ptr [EBX + 0x140]
0042930A  89 06                     MOV dword ptr [ESI],EAX
0042930C  8B 83 3C 01 00 00         MOV EAX,dword ptr [EBX + 0x13c]
00429312  89 4D BC                  MOV dword ptr [EBP + -0x44],ECX
00429315  40                        INC EAX
00429316  8B CB                     MOV ECX,EBX
00429318  89 B3 40 01 00 00         MOV dword ptr [EBX + 0x140],ESI
0042931E  89 83 3C 01 00 00         MOV dword ptr [EBX + 0x13c],EAX
00429324  E8 B7 48 2B 00            CALL 0x006ddbe0
00429329  8B CB                     MOV ECX,EBX
0042932B  E8 20 4A 2B 00            CALL 0x006ddd50
00429330  66 8B 4D F0               MOV CX,word ptr [EBP + -0x10]
00429334  66 8B 55 BC               MOV DX,word ptr [EBP + -0x44]
00429338  33 C0                     XOR EAX,EAX
0042933A  89 83 40 01 00 00         MOV dword ptr [EBX + 0x140],EAX
00429340  89 83 3C 01 00 00         MOV dword ptr [EBX + 0x13c],EAX
00429346  66 89 4E 06               MOV word ptr [ESI + 0x6],CX
0042934A  8B 8D 40 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff40]
00429350  8D 85 FC FE FF FF         LEA EAX,[EBP + 0xfffffefc]
00429356  66 89 56 08               MOV word ptr [ESI + 0x8],DX
0042935A  8B 95 1C FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff1c]
00429360  66 89 7E 04               MOV word ptr [ESI + 0x4],DI
00429364  50                        PUSH EAX
00429365  8B 43 0C                  MOV EAX,dword ptr [EBX + 0xc]
00429368  51                        PUSH ECX
00429369  52                        PUSH EDX
0042936A  50                        PUSH EAX
0042936B  E8 C9 93 FD FF            CALL 0x00402739
00429370  89 85 F4 FE FF FF         MOV dword ptr [EBP + 0xfffffef4],EAX
00429376  8B 4E 28                  MOV ECX,dword ptr [ESI + 0x28]
00429379  83 C4 10                  ADD ESP,0x10
0042937C  89 8D F0 FE FF FF         MOV dword ptr [EBP + 0xfffffef0],ECX
00429382  8B 4D C0                  MOV ECX,dword ptr [EBP + -0x40]
00429385  8B 56 3C                  MOV EDX,dword ptr [ESI + 0x3c]
00429388  8D 85 F0 FE FF FF         LEA EAX,[EBP + 0xfffffef0]
0042938E  89 95 F8 FE FF FF         MOV dword ptr [EBP + 0xfffffef8],EDX
00429394  50                        PUSH EAX
00429395  51                        PUSH ECX
00429396  E8 25 4E 28 00            CALL 0x006ae1c0
0042939B  89 46 18                  MOV dword ptr [ESI + 0x18],EAX
0042939E  EB 26                     JMP 0x004293c6
LAB_004293a0:
004293A0  89 4E 18                  MOV dword ptr [ESI + 0x18],ECX
004293A3  8B 4E 24                  MOV ECX,dword ptr [ESI + 0x24]
004293A6  33 FF                     XOR EDI,EDI
004293A8  85 C9                     TEST ECX,ECX
004293AA  7E 1A                     JLE 0x004293c6
004293AC  8A 55 B4                  MOV DL,byte ptr [EBP + -0x4c]
LAB_004293af:
004293AF  8B 48 08                  MOV ECX,dword ptr [EAX + 0x8]
004293B2  84 14 39                  TEST byte ptr [ECX + EDI*0x1],DL
004293B5  74 07                     JZ 0x004293be
004293B7  8B 4E 3C                  MOV ECX,dword ptr [ESI + 0x3c]
004293BA  03 CF                     ADD ECX,EDI
004293BC  08 11                     OR byte ptr [ECX],DL
LAB_004293be:
004293BE  8B 4E 24                  MOV ECX,dword ptr [ESI + 0x24]
004293C1  47                        INC EDI
004293C2  3B F9                     CMP EDI,ECX
004293C4  7C E9                     JL 0x004293af
LAB_004293c6:
004293C6  8B 55 DC                  MOV EDX,dword ptr [EBP + -0x24]
004293C9  8B 85 74 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff74]
004293CF  83 C2 04                  ADD EDX,0x4
004293D2  40                        INC EAX
004293D3  89 55 DC                  MOV dword ptr [EBP + -0x24],EDX
004293D6  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
004293D9  89 85 74 FF FF FF         MOV dword ptr [EBP + 0xffffff74],EAX
004293DF  3B 82 55 04 00 00         CMP EAX,dword ptr [EDX + 0x455]
004293E5  0F 8C 7C FE FF FF         JL 0x00429267
004293EB  8B CA                     MOV ECX,EDX
LAB_004293ed:
004293ED  0F BF 01                  MOVSX EAX,word ptr [ECX]
004293F0  99                        CDQ
004293F1  2B C2                     SUB EAX,EDX
004293F3  8B 55 C4                  MOV EDX,dword ptr [EBP + -0x3c]
004293F6  33 F6                     XOR ESI,ESI
004293F8  BF 01 00 00 00            MOV EDI,0x1
004293FD  D1 F8                     SAR EAX,0x1
004293FF  2B D6                     SUB EDX,ESI
00429401  89 45 CC                  MOV dword ptr [EBP + -0x34],EAX
00429404  74 5A                     JZ 0x00429460
00429406  4A                        DEC EDX
00429407  74 3A                     JZ 0x00429443
00429409  4A                        DEC EDX
0042940A  74 1D                     JZ 0x00429429
0042940C  83 CA FF                  OR EDX,0xffffffff
0042940F  89 BD 78 FF FF FF         MOV dword ptr [EBP + 0xffffff78],EDI
00429415  89 75 88                  MOV dword ptr [EBP + -0x78],ESI
00429418  89 BD 5C FF FF FF         MOV dword ptr [EBP + 0xffffff5c],EDI
0042941E  89 55 98                  MOV dword ptr [EBP + -0x68],EDX
00429421  89 75 90                  MOV dword ptr [EBP + -0x70],ESI
00429424  89 55 80                  MOV dword ptr [EBP + -0x80],EDX
00429427  EB 4F                     JMP 0x00429478
LAB_00429429:
00429429  83 CA FF                  OR EDX,0xffffffff
0042942C  89 B5 78 FF FF FF         MOV dword ptr [EBP + 0xffffff78],ESI
00429432  89 55 88                  MOV dword ptr [EBP + -0x78],EDX
00429435  89 95 5C FF FF FF         MOV dword ptr [EBP + 0xffffff5c],EDX
0042943B  89 55 98                  MOV dword ptr [EBP + -0x68],EDX
0042943E  89 55 90                  MOV dword ptr [EBP + -0x70],EDX
00429441  EB 32                     JMP 0x00429475
LAB_00429443:
00429443  83 CA FF                  OR EDX,0xffffffff
00429446  89 75 88                  MOV dword ptr [EBP + -0x78],ESI
00429449  89 95 78 FF FF FF         MOV dword ptr [EBP + 0xffffff78],EDX
0042944F  89 95 5C FF FF FF         MOV dword ptr [EBP + 0xffffff5c],EDX
00429455  89 7D 98                  MOV dword ptr [EBP + -0x68],EDI
00429458  89 75 90                  MOV dword ptr [EBP + -0x70],ESI
0042945B  89 7D 80                  MOV dword ptr [EBP + -0x80],EDI
0042945E  EB 18                     JMP 0x00429478
LAB_00429460:
00429460  89 B5 78 FF FF FF         MOV dword ptr [EBP + 0xffffff78],ESI
00429466  89 7D 88                  MOV dword ptr [EBP + -0x78],EDI
00429469  89 BD 5C FF FF FF         MOV dword ptr [EBP + 0xffffff5c],EDI
0042946F  89 7D 98                  MOV dword ptr [EBP + -0x68],EDI
00429472  89 7D 90                  MOV dword ptr [EBP + -0x70],EDI
LAB_00429475:
00429475  89 75 80                  MOV dword ptr [EBP + -0x80],ESI
LAB_00429478:
00429478  0F AF C0                  IMUL EAX,EAX
0042947B  89 45 84                  MOV dword ptr [EBP + -0x7c],EAX
0042947E  8B 81 55 04 00 00         MOV EAX,dword ptr [ECX + 0x455]
00429484  3B C6                     CMP EAX,ESI
00429486  89 B5 74 FF FF FF         MOV dword ptr [EBP + 0xffffff74],ESI
0042948C  0F 8E 78 09 00 00         JLE 0x00429e0a
00429492  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00429495  05 59 04 00 00            ADD EAX,0x459
0042949A  89 45 BC                  MOV dword ptr [EBP + -0x44],EAX
LAB_0042949d:
0042949D  8B 4D BC                  MOV ECX,dword ptr [EBP + -0x44]
004294A0  8B 39                     MOV EDI,dword ptr [ECX]
004294A2  85 FF                     TEST EDI,EDI
004294A4  89 7D F4                  MOV dword ptr [EBP + -0xc],EDI
004294A7  0F 84 36 09 00 00         JZ 0x00429de3
004294AD  8B 0D 58 2A 80 00         MOV ECX,dword ptr [0x00802a58]
004294B3  85 C9                     TEST ECX,ECX
004294B5  74 31                     JZ 0x004294e8
004294B7  8B 85 60 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff60]
004294BD  40                        INC EAX
004294BE  8B D0                     MOV EDX,EAX
004294C0  89 85 60 FF FF FF         MOV dword ptr [EBP + 0xffffff60],EAX
004294C6  81 E2 0F 00 00 80         AND EDX,0x8000000f
004294CC  79 05                     JNS 0x004294d3
004294CE  4A                        DEC EDX
004294CF  83 CA F0                  OR EDX,0xfffffff0
004294D2  42                        INC EDX
LAB_004294d3:
004294D3  75 13                     JNZ 0x004294e8
004294D5  99                        CDQ
004294D6  83 E2 0F                  AND EDX,0xf
004294D9  6A 00                     PUSH 0x0
004294DB  03 C2                     ADD EAX,EDX
004294DD  C1 F8 04                  SAR EAX,0x4
004294E0  50                        PUSH EAX
004294E1  6A 01                     PUSH 0x1
004294E3  E8 8A 9F FD FF            CALL 0x00403472
LAB_004294e8:
004294E8  8B 4D C0                  MOV ECX,dword ptr [EBP + -0x40]
004294EB  8B 47 18                  MOV EAX,dword ptr [EDI + 0x18]
004294EE  3B 41 0C                  CMP EAX,dword ptr [ECX + 0xc]
004294F1  73 0B                     JNC 0x004294fe
004294F3  8B 59 08                  MOV EBX,dword ptr [ECX + 0x8]
004294F6  0F AF D8                  IMUL EBX,EAX
004294F9  03 59 1C                  ADD EBX,dword ptr [ECX + 0x1c]
004294FC  EB 02                     JMP 0x00429500
LAB_004294fe:
004294FE  33 DB                     XOR EBX,EBX
LAB_00429500:
00429500  0F BF 47 04               MOVSX EAX,word ptr [EDI + 0x4]
00429504  99                        CDQ
00429505  2B C2                     SUB EAX,EDX
00429507  D1 F8                     SAR EAX,0x1
00429509  89 45 A0                  MOV dword ptr [EBP + -0x60],EAX
0042950C  0F BF 47 06               MOVSX EAX,word ptr [EDI + 0x6]
00429510  99                        CDQ
00429511  2B C2                     SUB EAX,EDX
00429513  33 D2                     XOR EDX,EDX
00429515  8A 57 48                  MOV DL,byte ptr [EDI + 0x48]
00429518  8B F0                     MOV ESI,EAX
0042951A  0F BF 47 08               MOVSX EAX,word ptr [EDI + 0x8]
0042951E  8B C8                     MOV ECX,EAX
00429520  2B CA                     SUB ECX,EDX
00429522  89 4D E0                  MOV dword ptr [EBP + -0x20],ECX
00429525  66 8B 4F 4E               MOV CX,word ptr [EDI + 0x4e]
00429529  D1 FE                     SAR ESI,0x1
0042952B  F6 C5 20                  TEST CH,0x20
0042952E  89 75 F0                  MOV dword ptr [EBP + -0x10],ESI
00429531  74 0F                     JZ 0x00429542
00429533  F6 C1 0F                  TEST CL,0xf
00429536  C7 85 58 FF FF FF 00 00 00 00  MOV dword ptr [EBP + 0xffffff58],0x0
00429540  74 06                     JZ 0x00429548
LAB_00429542:
00429542  89 95 58 FF FF FF         MOV dword ptr [EBP + 0xffffff58],EDX
LAB_00429548:
00429548  8B 55 84                  MOV EDX,dword ptr [EBP + -0x7c]
0042954B  8B CE                     MOV ECX,ESI
0042954D  0F AF 4D CC               IMUL ECX,dword ptr [EBP + -0x34]
00429551  8B 7D A0                  MOV EDI,dword ptr [EBP + -0x60]
00429554  8D 14 92                  LEA EDX,[EDX + EDX*0x4]
00429557  89 95 4C FF FF FF         MOV dword ptr [EBP + 0xffffff4c],EDX
0042955D  03 D1                     ADD EDX,ECX
0042955F  03 D7                     ADD EDX,EDI
00429561  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
00429564  83 F8 05                  CMP EAX,0x5
00429567  C7 45 C8 01 00 00 00      MOV dword ptr [EBP + -0x38],0x1
0042956E  8D 94 97 59 04 00 00      LEA EDX,[EDI + EDX*0x4 + 0x459]
00429575  C7 45 D0 00 00 00 00      MOV dword ptr [EBP + -0x30],0x0
0042957C  89 4D DC                  MOV dword ptr [EBP + -0x24],ECX
0042957F  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
00429582  C7 45 E8 05 00 00 00      MOV dword ptr [EBP + -0x18],0x5
00429589  0F 8D 83 01 00 00         JGE 0x00429712
LAB_0042958f:
0042958F  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00429592  8B 31                     MOV ESI,dword ptr [ECX]
00429594  85 F6                     TEST ESI,ESI
00429596  0F 84 33 01 00 00         JZ 0x004296cf
0042959C  0F BF 7E 08               MOVSX EDI,word ptr [ESI + 0x8]
004295A0  33 D2                     XOR EDX,EDX
004295A2  83 C0 03                  ADD EAX,0x3
004295A5  8A 56 48                  MOV DL,byte ptr [ESI + 0x48]
004295A8  2B FA                     SUB EDI,EDX
004295AA  3B F8                     CMP EDI,EAX
004295AC  0F 8F 1D 01 00 00         JG 0x004296cf
004295B2  8B 4D C0                  MOV ECX,dword ptr [EBP + -0x40]
004295B5  8B 46 18                  MOV EAX,dword ptr [ESI + 0x18]
004295B8  3B 41 0C                  CMP EAX,dword ptr [ECX + 0xc]
004295BB  73 0B                     JNC 0x004295c8
004295BD  8B 71 08                  MOV ESI,dword ptr [ECX + 0x8]
004295C0  0F AF F0                  IMUL ESI,EAX
004295C3  03 71 1C                  ADD ESI,dword ptr [ECX + 0x1c]
004295C6  EB 02                     JMP 0x004295ca
LAB_004295c8:
004295C8  33 F6                     XOR ESI,ESI
LAB_004295ca:
004295CA  8B 4D E0                  MOV ECX,dword ptr [EBP + -0x20]
004295CD  A1 50 52 7A 00            MOV EAX,[0x007a5250]
004295D2  2B F9                     SUB EDI,ECX
004295D4  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
004295D7  89 75 EC                  MOV dword ptr [EBP + -0x14],ESI
004295DA  8B 3C B8                  MOV EDI,dword ptr [EAX + EDI*0x4]
004295DD  89 4D A4                  MOV dword ptr [EBP + -0x5c],ECX
004295E0  8B 56 10                  MOV EDX,dword ptr [ESI + 0x10]
004295E3  03 D7                     ADD EDX,EDI
004295E5  89 55 A8                  MOV dword ptr [EBP + -0x58],EDX
004295E8  8B 46 14                  MOV EAX,dword ptr [ESI + 0x14]
004295EB  89 45 AC                  MOV dword ptr [EBP + -0x54],EAX
004295EE  8B 4E 18                  MOV ECX,dword ptr [ESI + 0x18]
004295F1  8D 45 A4                  LEA EAX,[EBP + -0x5c]
004295F4  89 4D B0                  MOV dword ptr [EBP + -0x50],ECX
004295F7  8D 53 0C                  LEA EDX,[EBX + 0xc]
004295FA  50                        PUSH EAX
004295FB  8D 8D 64 FF FF FF         LEA ECX,[EBP + 0xffffff64]
00429601  E8 5A 6E 28 00            CALL 0x006b0460
00429606  85 C0                     TEST EAX,EAX
00429608  0F 84 C1 00 00 00         JZ 0x004296cf
0042960E  8B 7D F4                  MOV EDI,dword ptr [EBP + -0xc]
00429611  B8 02 00 00 00            MOV EAX,0x2
00429616  39 47 24                  CMP dword ptr [EDI + 0x24],EAX
00429619  0F 8E A8 00 00 00         JLE 0x004296c7
0042961F  8B 4D D4                  MOV ECX,dword ptr [EBP + -0x2c]
00429622  8B 85 68 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff68]
00429628  8B 7B 14                  MOV EDI,dword ptr [EBX + 0x14]
0042962B  8B 51 0C                  MOV EDX,dword ptr [ECX + 0xc]
0042962E  8B 4B 10                  MOV ECX,dword ptr [EBX + 0x10]
00429631  89 55 E4                  MOV dword ptr [EBP + -0x1c],EDX
00429634  8B D0                     MOV EDX,EAX
00429636  2B 45 A8                  SUB EAX,dword ptr [EBP + -0x58]
00429639  2B D1                     SUB EDX,ECX
0042963B  0F AF D7                  IMUL EDX,EDI
0042963E  0F AF 45 AC               IMUL EAX,dword ptr [EBP + -0x54]
00429642  8B 4B 0C                  MOV ECX,dword ptr [EBX + 0xc]
00429645  03 46 04                  ADD EAX,dword ptr [ESI + 0x4]
00429648  2B D1                     SUB EDX,ECX
0042964A  8B 4D E4                  MOV ECX,dword ptr [EBP + -0x1c]
0042964D  2B 45 A4                  SUB EAX,dword ptr [EBP + -0x5c]
00429650  03 D1                     ADD EDX,ECX
00429652  8B 8D 64 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff64]
00429658  03 C1                     ADD EAX,ECX
0042965A  03 D1                     ADD EDX,ECX
0042965C  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
0042965F  8B 45 C8                  MOV EAX,dword ptr [EBP + -0x38]
00429662  85 C0                     TEST EAX,EAX
00429664  74 24                     JZ 0x0042968a
00429666  8B 4B 18                  MOV ECX,dword ptr [EBX + 0x18]
00429669  8B 73 04                  MOV ESI,dword ptr [EBX + 0x4]
0042966C  0F AF CF                  IMUL ECX,EDI
0042966F  8B 7D E4                  MOV EDI,dword ptr [EBP + -0x1c]
00429672  8B C1                     MOV EAX,ECX
00429674  C1 E9 02                  SHR ECX,0x2
00429677  F3 A5                     MOVSD.REP ES:EDI,ESI
00429679  8B C8                     MOV ECX,EAX
0042967B  C7 45 C8 00 00 00 00      MOV dword ptr [EBP + -0x38],0x0
00429682  83 E1 03                  AND ECX,0x3
00429685  F3 A4                     MOVSB.REP ES:EDI,ESI
00429687  8B 75 EC                  MOV ESI,dword ptr [EBP + -0x14]
LAB_0042968a:
0042968A  8B 4D B4                  MOV ECX,dword ptr [EBP + -0x4c]
0042968D  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
00429690  68 FF 00 00 00            PUSH 0xff
00429695  51                        PUSH ECX
00429696  8B 48 3C                  MOV ECX,dword ptr [EAX + 0x3c]
00429699  8B 85 70 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff70]
0042969F  51                        PUSH ECX
004296A0  8B 8D 6C FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff6c]
004296A6  50                        PUSH EAX
004296A7  8B 46 14                  MOV EAX,dword ptr [ESI + 0x14]
004296AA  51                        PUSH ECX
004296AB  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
004296AE  50                        PUSH EAX
004296AF  8B 43 14                  MOV EAX,dword ptr [EBX + 0x14]
004296B2  51                        PUSH ECX
004296B3  50                        PUSH EAX
004296B4  52                        PUSH EDX
004296B5  E8 23 92 FD FF            CALL 0x004028dd
004296BA  8B 4D D0                  MOV ECX,dword ptr [EBP + -0x30]
004296BD  83 C4 24                  ADD ESP,0x24
004296C0  0B C8                     OR ECX,EAX
004296C2  89 4D D0                  MOV dword ptr [EBP + -0x30],ECX
004296C5  EB 08                     JMP 0x004296cf
LAB_004296c7:
004296C7  39 85 70 FF FF FF         CMP dword ptr [EBP + 0xffffff70],EAX
004296CD  7F 2F                     JG 0x004296fe
LAB_004296cf:
004296CF  8B 4D 84                  MOV ECX,dword ptr [EBP + -0x7c]
004296D2  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
004296D5  F7 D9                     NEG ECX
004296D7  8D 04 8A                  LEA EAX,[EDX + ECX*0x4]
004296DA  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
004296DD  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
004296E0  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
004296E3  0F BF 42 08               MOVSX EAX,word ptr [EDX + 0x8]
004296E7  49                        DEC ECX
004296E8  3B C8                     CMP ECX,EAX
004296EA  89 4D E8                  MOV dword ptr [EBP + -0x18],ECX
004296ED  0F 8F 9C FE FF FF         JG 0x0042958f
004296F3  8B 75 F0                  MOV ESI,dword ptr [EBP + -0x10]
004296F6  8B 55 CC                  MOV EDX,dword ptr [EBP + -0x34]
004296F9  8B 4D DC                  MOV ECX,dword ptr [EBP + -0x24]
004296FC  EB 17                     JMP 0x00429715
LAB_004296fe:
004296FE  8B 47 3C                  MOV EAX,dword ptr [EDI + 0x3c]
00429701  8A 4D B4                  MOV CL,byte ptr [EBP + -0x4c]
00429704  8A 10                     MOV DL,byte ptr [EAX]
00429706  0A D1                     OR DL,CL
00429708  88 10                     MOV byte ptr [EAX],DL
0042970A  8B 47 3C                  MOV EAX,dword ptr [EDI + 0x3c]
0042970D  E9 68 06 00 00            JMP 0x00429d7a
LAB_00429712:
00429712  8B 55 CC                  MOV EDX,dword ptr [EBP + -0x34]
LAB_00429715:
00429715  8B 45 80                  MOV EAX,dword ptr [EBP + -0x80]
00429718  8B 7D A0                  MOV EDI,dword ptr [EBP + -0x60]
0042971B  0F AF C2                  IMUL EAX,EDX
0042971E  89 85 48 FF FF FF         MOV dword ptr [EBP + 0xffffff48],EAX
00429724  8B 45 98                  MOV EAX,dword ptr [EBP + -0x68]
00429727  0F AF C2                  IMUL EAX,EDX
0042972A  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
0042972D  8B 45 88                  MOV EAX,dword ptr [EBP + -0x78]
00429730  03 C6                     ADD EAX,ESI
00429732  89 4D DC                  MOV dword ptr [EBP + -0x24],ECX
00429735  0F AF C2                  IMUL EAX,EDX
00429738  8B 8D 4C FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff4c]
0042973E  C7 85 7C FF FF FF 48 52 7A 00  MOV dword ptr [EBP + 0xffffff7c],0x7a5248
00429748  03 C1                     ADD EAX,ECX
0042974A  C7 45 94 B8 4D 7F 00      MOV dword ptr [EBP + -0x6c],0x7f4db8
00429751  89 75 8C                  MOV dword ptr [EBP + -0x74],ESI
00429754  89 7D 9C                  MOV dword ptr [EBP + -0x64],EDI
00429757  89 45 A0                  MOV dword ptr [EBP + -0x60],EAX
LAB_0042975a:
0042975A  85 FF                     TEST EDI,EDI
0042975C  0F 8C 1B 06 00 00         JL 0x00429d7d
00429762  3B FA                     CMP EDI,EDX
00429764  0F 8D 13 06 00 00         JGE 0x00429d7d
0042976A  85 F6                     TEST ESI,ESI
0042976C  0F 8C 0B 06 00 00         JL 0x00429d7d
00429772  3B F2                     CMP ESI,EDX
00429774  0F 8D 03 06 00 00         JGE 0x00429d7d
0042977A  8B 8D 78 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff78]
00429780  03 F9                     ADD EDI,ECX
00429782  85 FF                     TEST EDI,EDI
00429784  0F 8C BF 01 00 00         JL 0x00429949
0042978A  3B 7D CC                  CMP EDI,dword ptr [EBP + -0x34]
0042978D  0F 8D B6 01 00 00         JGE 0x00429949
00429793  8B 55 88                  MOV EDX,dword ptr [EBP + -0x78]
00429796  8D 0C 32                  LEA ECX,[EDX + ESI*0x1]
00429799  85 C9                     TEST ECX,ECX
0042979B  0F 8C A8 01 00 00         JL 0x00429949
004297A1  3B 4D CC                  CMP ECX,dword ptr [EBP + -0x34]
004297A4  0F 8D 9F 01 00 00         JGE 0x00429949
004297AA  8B 8D 78 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff78]
004297B0  8B 55 9C                  MOV EDX,dword ptr [EBP + -0x64]
004297B3  03 C8                     ADD ECX,EAX
004297B5  03 CA                     ADD ECX,EDX
004297B7  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
004297BA  8D 84 8A 59 04 00 00      LEA EAX,[EDX + ECX*0x4 + 0x459]
004297C1  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
004297C4  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
004297C7  83 F8 05                  CMP EAX,0x5
004297CA  0F 8D 79 01 00 00         JGE 0x00429949
004297D0  8B 4D E0                  MOV ECX,dword ptr [EBP + -0x20]
004297D3  B8 05 00 00 00            MOV EAX,0x5
004297D8  2B C1                     SUB EAX,ECX
004297DA  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
LAB_004297dd:
004297DD  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
004297E0  8B 39                     MOV EDI,dword ptr [ECX]
004297E2  85 FF                     TEST EDI,EDI
004297E4  0F 84 3D 01 00 00         JZ 0x00429927
004297EA  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
004297ED  0F BF 47 08               MOVSX EAX,word ptr [EDI + 0x8]
004297F1  0F BF 4A 08               MOVSX ECX,word ptr [EDX + 0x8]
004297F5  8B 95 58 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff58]
004297FB  2B CA                     SUB ECX,EDX
004297FD  8B 95 7C FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff7c]
00429803  03 0A                     ADD ECX,dword ptr [EDX]
00429805  3B C1                     CMP EAX,ECX
00429807  0F 8E 1A 01 00 00         JLE 0x00429927
0042980D  8B 55 C0                  MOV EDX,dword ptr [EBP + -0x40]
00429810  8B 4F 18                  MOV ECX,dword ptr [EDI + 0x18]
00429813  3B 4A 0C                  CMP ECX,dword ptr [EDX + 0xc]
00429816  73 0B                     JNC 0x00429823
00429818  8B 72 08                  MOV ESI,dword ptr [EDX + 0x8]
0042981B  0F AF F1                  IMUL ESI,ECX
0042981E  03 72 1C                  ADD ESI,dword ptr [EDX + 0x1c]
00429821  EB 02                     JMP 0x00429825
LAB_00429823:
00429823  33 F6                     XOR ESI,ESI
LAB_00429825:
00429825  8B 15 50 52 7A 00         MOV EDX,dword ptr [0x007a5250]
0042982B  33 C9                     XOR ECX,ECX
0042982D  8A 4F 48                  MOV CL,byte ptr [EDI + 0x48]
00429830  8B 7D E0                  MOV EDI,dword ptr [EBP + -0x20]
00429833  2B C1                     SUB EAX,ECX
00429835  8B 4D 94                  MOV ECX,dword ptr [EBP + -0x6c]
00429838  2B C7                     SUB EAX,EDI
0042983A  8B BD 3C FF FF FF         MOV EDI,dword ptr [EBP + 0xffffff3c]
00429840  89 75 EC                  MOV dword ptr [EBP + -0x14],ESI
00429843  8B 04 82                  MOV EAX,dword ptr [EDX + EAX*0x4]
00429846  8B 51 FC                  MOV EDX,dword ptr [ECX + -0x4]
00429849  03 C2                     ADD EAX,EDX
0042984B  8B 56 0C                  MOV EDX,dword ptr [ESI + 0xc]
0042984E  2B D7                     SUB EDX,EDI
00429850  89 55 A4                  MOV dword ptr [EBP + -0x5c],EDX
00429853  8B 4E 10                  MOV ECX,dword ptr [ESI + 0x10]
00429856  03 C8                     ADD ECX,EAX
00429858  89 4D A8                  MOV dword ptr [EBP + -0x58],ECX
0042985B  8B 56 14                  MOV EDX,dword ptr [ESI + 0x14]
0042985E  8D 4D A4                  LEA ECX,[EBP + -0x5c]
00429861  89 55 AC                  MOV dword ptr [EBP + -0x54],EDX
00429864  8B 46 18                  MOV EAX,dword ptr [ESI + 0x18]
00429867  51                        PUSH ECX
00429868  8D 53 0C                  LEA EDX,[EBX + 0xc]
0042986B  8D 8D 64 FF FF FF         LEA ECX,[EBP + 0xffffff64]
00429871  89 45 B0                  MOV dword ptr [EBP + -0x50],EAX
00429874  E8 E7 6B 28 00            CALL 0x006b0460
00429879  85 C0                     TEST EAX,EAX
0042987B  0F 84 A6 00 00 00         JZ 0x00429927
00429881  8B 55 D4                  MOV EDX,dword ptr [EBP + -0x2c]
00429884  8B 4B 10                  MOV ECX,dword ptr [EBX + 0x10]
00429887  8B 7B 14                  MOV EDI,dword ptr [EBX + 0x14]
0042988A  8B 42 0C                  MOV EAX,dword ptr [EDX + 0xc]
0042988D  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
00429890  8B 85 68 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff68]
00429896  8B D0                     MOV EDX,EAX
00429898  2B 45 A8                  SUB EAX,dword ptr [EBP + -0x58]
0042989B  2B D1                     SUB EDX,ECX
0042989D  8B 4B 0C                  MOV ECX,dword ptr [EBX + 0xc]
004298A0  0F AF 45 AC               IMUL EAX,dword ptr [EBP + -0x54]
004298A4  0F AF D7                  IMUL EDX,EDI
004298A7  03 46 04                  ADD EAX,dword ptr [ESI + 0x4]
004298AA  2B D1                     SUB EDX,ECX
004298AC  8B 4D E4                  MOV ECX,dword ptr [EBP + -0x1c]
004298AF  2B 45 A4                  SUB EAX,dword ptr [EBP + -0x5c]
004298B2  03 D1                     ADD EDX,ECX
004298B4  8B 8D 64 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff64]
004298BA  03 C1                     ADD EAX,ECX
004298BC  03 D1                     ADD EDX,ECX
004298BE  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
004298C1  8B 45 C8                  MOV EAX,dword ptr [EBP + -0x38]
004298C4  85 C0                     TEST EAX,EAX
004298C6  74 24                     JZ 0x004298ec
004298C8  8B 4B 18                  MOV ECX,dword ptr [EBX + 0x18]
004298CB  8B 73 04                  MOV ESI,dword ptr [EBX + 0x4]
004298CE  0F AF CF                  IMUL ECX,EDI
004298D1  8B 7D E4                  MOV EDI,dword ptr [EBP + -0x1c]
004298D4  8B C1                     MOV EAX,ECX
004298D6  C1 E9 02                  SHR ECX,0x2
004298D9  F3 A5                     MOVSD.REP ES:EDI,ESI
004298DB  8B C8                     MOV ECX,EAX
004298DD  C7 45 C8 00 00 00 00      MOV dword ptr [EBP + -0x38],0x0
004298E4  83 E1 03                  AND ECX,0x3
004298E7  F3 A4                     MOVSB.REP ES:EDI,ESI
004298E9  8B 75 EC                  MOV ESI,dword ptr [EBP + -0x14]
LAB_004298ec:
004298EC  8B 4D B4                  MOV ECX,dword ptr [EBP + -0x4c]
004298EF  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
004298F2  68 FE 00 00 00            PUSH 0xfe
004298F7  51                        PUSH ECX
004298F8  8B 48 3C                  MOV ECX,dword ptr [EAX + 0x3c]
004298FB  8B 85 70 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff70]
00429901  51                        PUSH ECX
00429902  8B 8D 6C FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff6c]
00429908  50                        PUSH EAX
00429909  8B 46 14                  MOV EAX,dword ptr [ESI + 0x14]
0042990C  51                        PUSH ECX
0042990D  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
00429910  50                        PUSH EAX
00429911  8B 43 14                  MOV EAX,dword ptr [EBX + 0x14]
00429914  51                        PUSH ECX
00429915  50                        PUSH EAX
00429916  52                        PUSH EDX
00429917  E8 C1 8F FD FF            CALL 0x004028dd
0042991C  8B 4D D0                  MOV ECX,dword ptr [EBP + -0x30]
0042991F  83 C4 24                  ADD ESP,0x24
00429922  0B C8                     OR ECX,EAX
00429924  89 4D D0                  MOV dword ptr [EBP + -0x30],ECX
LAB_00429927:
00429927  8B 4D 84                  MOV ECX,dword ptr [EBP + -0x7c]
0042992A  8D 04 8D 00 00 00 00      LEA EAX,[ECX*0x4 + 0x0]
00429931  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00429934  2B C8                     SUB ECX,EAX
00429936  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
00429939  48                        DEC EAX
0042993A  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0042993D  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
00429940  0F 85 97 FE FF FF         JNZ 0x004297dd
00429946  8B 75 8C                  MOV ESI,dword ptr [EBP + -0x74]
LAB_00429949:
00429949  8B 4D 9C                  MOV ECX,dword ptr [EBP + -0x64]
0042994C  8B 95 5C FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff5c]
00429952  8D 04 0A                  LEA EAX,[EDX + ECX*0x1]
00429955  85 C0                     TEST EAX,EAX
00429957  89 85 54 FF FF FF         MOV dword ptr [EBP + 0xffffff54],EAX
0042995D  0F 8C D7 01 00 00         JL 0x00429b3a
00429963  8B 7D CC                  MOV EDI,dword ptr [EBP + -0x34]
00429966  3B C7                     CMP EAX,EDI
00429968  0F 8D CC 01 00 00         JGE 0x00429b3a
0042996E  8B 45 98                  MOV EAX,dword ptr [EBP + -0x68]
00429971  03 C6                     ADD EAX,ESI
00429973  85 C0                     TEST EAX,EAX
00429975  0F 8C BF 01 00 00         JL 0x00429b3a
0042997B  3B C7                     CMP EAX,EDI
0042997D  0F 8D B7 01 00 00         JGE 0x00429b3a
00429983  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
00429986  8B 75 DC                  MOV ESI,dword ptr [EBP + -0x24]
00429989  03 C6                     ADD EAX,ESI
0042998B  8B B5 4C FF FF FF         MOV ESI,dword ptr [EBP + 0xffffff4c]
00429991  03 F2                     ADD ESI,EDX
00429993  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00429996  03 F1                     ADD ESI,ECX
00429998  03 F0                     ADD ESI,EAX
0042999A  8D 84 B2 59 04 00 00      LEA EAX,[EDX + ESI*0x4 + 0x459]
004299A1  8B 55 E0                  MOV EDX,dword ptr [EBP + -0x20]
004299A4  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
004299A7  B8 05 00 00 00            MOV EAX,0x5
004299AC  3B D0                     CMP EDX,EAX
004299AE  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
004299B1  0F 8D 83 01 00 00         JGE 0x00429b3a
LAB_004299b7:
004299B7  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
004299BA  8B 39                     MOV EDI,dword ptr [ECX]
004299BC  85 FF                     TEST EDI,EDI
004299BE  0F 84 53 01 00 00         JZ 0x00429b17
004299C4  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
004299C7  0F BF 47 08               MOVSX EAX,word ptr [EDI + 0x8]
004299CB  0F BF 4A 08               MOVSX ECX,word ptr [EDX + 0x8]
004299CF  8B 95 58 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff58]
004299D5  2B CA                     SUB ECX,EDX
004299D7  8B 95 7C FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff7c]
004299DD  03 0A                     ADD ECX,dword ptr [EDX]
004299DF  3B C1                     CMP EAX,ECX
004299E1  0F 8E 30 01 00 00         JLE 0x00429b17
004299E7  8B 55 C0                  MOV EDX,dword ptr [EBP + -0x40]
004299EA  8B 4F 18                  MOV ECX,dword ptr [EDI + 0x18]
004299ED  3B 4A 0C                  CMP ECX,dword ptr [EDX + 0xc]
004299F0  73 0B                     JNC 0x004299fd
004299F2  8B 72 08                  MOV ESI,dword ptr [EDX + 0x8]
004299F5  0F AF F1                  IMUL ESI,ECX
004299F8  03 72 1C                  ADD ESI,dword ptr [EDX + 0x1c]
004299FB  EB 02                     JMP 0x004299ff
LAB_004299fd:
004299FD  33 F6                     XOR ESI,ESI
LAB_004299ff:
004299FF  8B 15 50 52 7A 00         MOV EDX,dword ptr [0x007a5250]
00429A05  33 C9                     XOR ECX,ECX
00429A07  8A 4F 48                  MOV CL,byte ptr [EDI + 0x48]
00429A0A  89 75 EC                  MOV dword ptr [EBP + -0x14],ESI
00429A0D  2B C1                     SUB EAX,ECX
00429A0F  8B 4D E0                  MOV ECX,dword ptr [EBP + -0x20]
00429A12  2B C1                     SUB EAX,ECX
00429A14  8B 4D 94                  MOV ECX,dword ptr [EBP + -0x6c]
00429A17  8B 04 82                  MOV EAX,dword ptr [EDX + EAX*0x4]
00429A1A  8B 56 0C                  MOV EDX,dword ptr [ESI + 0xc]
00429A1D  8B 39                     MOV EDI,dword ptr [ECX]
00429A1F  89 55 A4                  MOV dword ptr [EBP + -0x5c],EDX
00429A22  8B 4E 10                  MOV ECX,dword ptr [ESI + 0x10]
00429A25  03 C7                     ADD EAX,EDI
00429A27  03 C8                     ADD ECX,EAX
00429A29  89 4D A8                  MOV dword ptr [EBP + -0x58],ECX
00429A2C  8B 56 14                  MOV EDX,dword ptr [ESI + 0x14]
00429A2F  8D 4D A4                  LEA ECX,[EBP + -0x5c]
00429A32  89 55 AC                  MOV dword ptr [EBP + -0x54],EDX
00429A35  8B 46 18                  MOV EAX,dword ptr [ESI + 0x18]
00429A38  51                        PUSH ECX
00429A39  8D 53 0C                  LEA EDX,[EBX + 0xc]
00429A3C  8D 8D 64 FF FF FF         LEA ECX,[EBP + 0xffffff64]
00429A42  89 45 B0                  MOV dword ptr [EBP + -0x50],EAX
00429A45  E8 16 6A 28 00            CALL 0x006b0460
00429A4A  85 C0                     TEST EAX,EAX
00429A4C  0F 84 C5 00 00 00         JZ 0x00429b17
00429A52  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
00429A55  B9 02 00 00 00            MOV ECX,0x2
00429A5A  39 48 24                  CMP dword ptr [EAX + 0x24],ECX
00429A5D  0F 8E A8 00 00 00         JLE 0x00429b0b
00429A63  8B 55 D4                  MOV EDX,dword ptr [EBP + -0x2c]
00429A66  8B 4B 10                  MOV ECX,dword ptr [EBX + 0x10]
00429A69  8B 7B 14                  MOV EDI,dword ptr [EBX + 0x14]
00429A6C  8B 42 0C                  MOV EAX,dword ptr [EDX + 0xc]
00429A6F  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
00429A72  8B 85 68 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff68]
00429A78  8B D0                     MOV EDX,EAX
00429A7A  2B 45 A8                  SUB EAX,dword ptr [EBP + -0x58]
00429A7D  2B D1                     SUB EDX,ECX
00429A7F  8B 4B 0C                  MOV ECX,dword ptr [EBX + 0xc]
00429A82  0F AF 45 AC               IMUL EAX,dword ptr [EBP + -0x54]
00429A86  0F AF D7                  IMUL EDX,EDI
00429A89  03 46 04                  ADD EAX,dword ptr [ESI + 0x4]
00429A8C  2B D1                     SUB EDX,ECX
00429A8E  8B 4D E4                  MOV ECX,dword ptr [EBP + -0x1c]
00429A91  2B 45 A4                  SUB EAX,dword ptr [EBP + -0x5c]
00429A94  03 D1                     ADD EDX,ECX
00429A96  8B 8D 64 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff64]
00429A9C  03 C1                     ADD EAX,ECX
00429A9E  03 D1                     ADD EDX,ECX
00429AA0  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
00429AA3  8B 45 C8                  MOV EAX,dword ptr [EBP + -0x38]
00429AA6  85 C0                     TEST EAX,EAX
00429AA8  74 24                     JZ 0x00429ace
00429AAA  8B 4B 18                  MOV ECX,dword ptr [EBX + 0x18]
00429AAD  8B 73 04                  MOV ESI,dword ptr [EBX + 0x4]
00429AB0  0F AF CF                  IMUL ECX,EDI
00429AB3  8B 7D E4                  MOV EDI,dword ptr [EBP + -0x1c]
00429AB6  8B C1                     MOV EAX,ECX
00429AB8  C1 E9 02                  SHR ECX,0x2
00429ABB  F3 A5                     MOVSD.REP ES:EDI,ESI
00429ABD  8B C8                     MOV ECX,EAX
00429ABF  C7 45 C8 00 00 00 00      MOV dword ptr [EBP + -0x38],0x0
00429AC6  83 E1 03                  AND ECX,0x3
00429AC9  F3 A4                     MOVSB.REP ES:EDI,ESI
00429ACB  8B 75 EC                  MOV ESI,dword ptr [EBP + -0x14]
LAB_00429ace:
00429ACE  8B 4D B4                  MOV ECX,dword ptr [EBP + -0x4c]
00429AD1  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
00429AD4  68 FD 00 00 00            PUSH 0xfd
00429AD9  51                        PUSH ECX
00429ADA  8B 48 3C                  MOV ECX,dword ptr [EAX + 0x3c]
00429ADD  8B 85 70 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff70]
00429AE3  51                        PUSH ECX
00429AE4  8B 8D 6C FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff6c]
00429AEA  50                        PUSH EAX
00429AEB  8B 46 14                  MOV EAX,dword ptr [ESI + 0x14]
00429AEE  51                        PUSH ECX
00429AEF  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
00429AF2  50                        PUSH EAX
00429AF3  8B 43 14                  MOV EAX,dword ptr [EBX + 0x14]
00429AF6  51                        PUSH ECX
00429AF7  50                        PUSH EAX
00429AF8  52                        PUSH EDX
00429AF9  E8 DF 8D FD FF            CALL 0x004028dd
00429AFE  8B 4D D0                  MOV ECX,dword ptr [EBP + -0x30]
00429B01  83 C4 24                  ADD ESP,0x24
00429B04  0B C8                     OR ECX,EAX
00429B06  89 4D D0                  MOV dword ptr [EBP + -0x30],ECX
00429B09  EB 0C                     JMP 0x00429b17
LAB_00429b0b:
00429B0B  39 8D 70 FF FF FF         CMP dword ptr [EBP + 0xffffff70],ECX
00429B11  0F 8F 54 02 00 00         JG 0x00429d6b
LAB_00429b17:
00429B17  8B 4D 84                  MOV ECX,dword ptr [EBP + -0x7c]
00429B1A  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00429B1D  F7 D9                     NEG ECX
00429B1F  8D 04 8A                  LEA EAX,[EDX + ECX*0x4]
00429B22  8B 4D E0                  MOV ECX,dword ptr [EBP + -0x20]
00429B25  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00429B28  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
00429B2B  48                        DEC EAX
00429B2C  3B C1                     CMP EAX,ECX
00429B2E  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
00429B31  0F 8F 80 FE FF FF         JG 0x004299b7
00429B37  8B 4D 9C                  MOV ECX,dword ptr [EBP + -0x64]
LAB_00429b3a:
00429B3A  8B 55 90                  MOV EDX,dword ptr [EBP + -0x70]
00429B3D  8D 04 0A                  LEA EAX,[EDX + ECX*0x1]
00429B40  85 C0                     TEST EAX,EAX
00429B42  0F 8C CE 01 00 00         JL 0x00429d16
00429B48  3B 45 CC                  CMP EAX,dword ptr [EBP + -0x34]
00429B4B  0F 8D C5 01 00 00         JGE 0x00429d16
00429B51  8B 45 80                  MOV EAX,dword ptr [EBP + -0x80]
00429B54  8B 4D 8C                  MOV ECX,dword ptr [EBP + -0x74]
00429B57  03 C1                     ADD EAX,ECX
00429B59  85 C0                     TEST EAX,EAX
00429B5B  0F 8C B5 01 00 00         JL 0x00429d16
00429B61  3B 45 CC                  CMP EAX,dword ptr [EBP + -0x34]
00429B64  0F 8D AC 01 00 00         JGE 0x00429d16
00429B6A  8B 55 DC                  MOV EDX,dword ptr [EBP + -0x24]
00429B6D  8B 85 48 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff48]
00429B73  8B 8D 4C FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff4c]
00429B79  03 C2                     ADD EAX,EDX
00429B7B  8B 55 90                  MOV EDX,dword ptr [EBP + -0x70]
00429B7E  03 C1                     ADD EAX,ECX
00429B80  8B 4D 9C                  MOV ECX,dword ptr [EBP + -0x64]
00429B83  03 C2                     ADD EAX,EDX
00429B85  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00429B88  03 C1                     ADD EAX,ECX
00429B8A  8D 84 82 59 04 00 00      LEA EAX,[EDX + EAX*0x4 + 0x459]
00429B91  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00429B94  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
00429B97  83 F8 05                  CMP EAX,0x5
00429B9A  0F 8D 76 01 00 00         JGE 0x00429d16
00429BA0  8B 4D E0                  MOV ECX,dword ptr [EBP + -0x20]
00429BA3  B8 05 00 00 00            MOV EAX,0x5
00429BA8  2B C1                     SUB EAX,ECX
00429BAA  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
LAB_00429bad:
00429BAD  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00429BB0  8B 39                     MOV EDI,dword ptr [ECX]
00429BB2  85 FF                     TEST EDI,EDI
00429BB4  0F 84 3D 01 00 00         JZ 0x00429cf7
00429BBA  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
00429BBD  0F BF 47 08               MOVSX EAX,word ptr [EDI + 0x8]
00429BC1  0F BF 4A 08               MOVSX ECX,word ptr [EDX + 0x8]
00429BC5  8B 95 58 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff58]
00429BCB  2B CA                     SUB ECX,EDX
00429BCD  8B 95 7C FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff7c]
00429BD3  03 0A                     ADD ECX,dword ptr [EDX]
00429BD5  3B C1                     CMP EAX,ECX
00429BD7  0F 8E 1A 01 00 00         JLE 0x00429cf7
00429BDD  8B 55 C0                  MOV EDX,dword ptr [EBP + -0x40]
00429BE0  8B 4F 18                  MOV ECX,dword ptr [EDI + 0x18]
00429BE3  3B 4A 0C                  CMP ECX,dword ptr [EDX + 0xc]
00429BE6  73 0B                     JNC 0x00429bf3
00429BE8  8B 72 08                  MOV ESI,dword ptr [EDX + 0x8]
00429BEB  0F AF F1                  IMUL ESI,ECX
00429BEE  03 72 1C                  ADD ESI,dword ptr [EDX + 0x1c]
00429BF1  EB 02                     JMP 0x00429bf5
LAB_00429bf3:
00429BF3  33 F6                     XOR ESI,ESI
LAB_00429bf5:
00429BF5  8B 15 50 52 7A 00         MOV EDX,dword ptr [0x007a5250]
00429BFB  33 C9                     XOR ECX,ECX
00429BFD  8A 4F 48                  MOV CL,byte ptr [EDI + 0x48]
00429C00  8B 7D E0                  MOV EDI,dword ptr [EBP + -0x20]
00429C03  2B C1                     SUB EAX,ECX
00429C05  8B 4D 94                  MOV ECX,dword ptr [EBP + -0x6c]
00429C08  2B C7                     SUB EAX,EDI
00429C0A  8B BD 3C FF FF FF         MOV EDI,dword ptr [EBP + 0xffffff3c]
00429C10  89 75 EC                  MOV dword ptr [EBP + -0x14],ESI
00429C13  8B 04 82                  MOV EAX,dword ptr [EDX + EAX*0x4]
00429C16  8B 51 04                  MOV EDX,dword ptr [ECX + 0x4]
00429C19  03 C2                     ADD EAX,EDX
00429C1B  8B 56 0C                  MOV EDX,dword ptr [ESI + 0xc]
00429C1E  03 D7                     ADD EDX,EDI
00429C20  89 55 A4                  MOV dword ptr [EBP + -0x5c],EDX
00429C23  8B 4E 10                  MOV ECX,dword ptr [ESI + 0x10]
00429C26  03 C8                     ADD ECX,EAX
00429C28  89 4D A8                  MOV dword ptr [EBP + -0x58],ECX
00429C2B  8B 56 14                  MOV EDX,dword ptr [ESI + 0x14]
00429C2E  8D 4D A4                  LEA ECX,[EBP + -0x5c]
00429C31  89 55 AC                  MOV dword ptr [EBP + -0x54],EDX
00429C34  8B 46 18                  MOV EAX,dword ptr [ESI + 0x18]
00429C37  51                        PUSH ECX
00429C38  8D 53 0C                  LEA EDX,[EBX + 0xc]
00429C3B  8D 8D 64 FF FF FF         LEA ECX,[EBP + 0xffffff64]
00429C41  89 45 B0                  MOV dword ptr [EBP + -0x50],EAX
00429C44  E8 17 68 28 00            CALL 0x006b0460
00429C49  85 C0                     TEST EAX,EAX
00429C4B  0F 84 A6 00 00 00         JZ 0x00429cf7
00429C51  8B 55 D4                  MOV EDX,dword ptr [EBP + -0x2c]
00429C54  8B 4B 10                  MOV ECX,dword ptr [EBX + 0x10]
00429C57  8B 7B 14                  MOV EDI,dword ptr [EBX + 0x14]
00429C5A  8B 42 0C                  MOV EAX,dword ptr [EDX + 0xc]
00429C5D  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
00429C60  8B 85 68 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff68]
00429C66  8B D0                     MOV EDX,EAX
00429C68  2B 45 A8                  SUB EAX,dword ptr [EBP + -0x58]
00429C6B  2B D1                     SUB EDX,ECX
00429C6D  8B 4B 0C                  MOV ECX,dword ptr [EBX + 0xc]
00429C70  0F AF 45 AC               IMUL EAX,dword ptr [EBP + -0x54]
00429C74  0F AF D7                  IMUL EDX,EDI
00429C77  03 46 04                  ADD EAX,dword ptr [ESI + 0x4]
00429C7A  2B D1                     SUB EDX,ECX
00429C7C  8B 4D E4                  MOV ECX,dword ptr [EBP + -0x1c]
00429C7F  2B 45 A4                  SUB EAX,dword ptr [EBP + -0x5c]
00429C82  03 D1                     ADD EDX,ECX
00429C84  8B 8D 64 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff64]
00429C8A  03 C1                     ADD EAX,ECX
00429C8C  03 D1                     ADD EDX,ECX
00429C8E  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
00429C91  8B 45 C8                  MOV EAX,dword ptr [EBP + -0x38]
00429C94  85 C0                     TEST EAX,EAX
00429C96  74 24                     JZ 0x00429cbc
00429C98  8B 4B 18                  MOV ECX,dword ptr [EBX + 0x18]
00429C9B  8B 73 04                  MOV ESI,dword ptr [EBX + 0x4]
00429C9E  0F AF CF                  IMUL ECX,EDI
00429CA1  8B 7D E4                  MOV EDI,dword ptr [EBP + -0x1c]
00429CA4  8B C1                     MOV EAX,ECX
00429CA6  C1 E9 02                  SHR ECX,0x2
00429CA9  F3 A5                     MOVSD.REP ES:EDI,ESI
00429CAB  8B C8                     MOV ECX,EAX
00429CAD  C7 45 C8 00 00 00 00      MOV dword ptr [EBP + -0x38],0x0
00429CB4  83 E1 03                  AND ECX,0x3
00429CB7  F3 A4                     MOVSB.REP ES:EDI,ESI
00429CB9  8B 75 EC                  MOV ESI,dword ptr [EBP + -0x14]
LAB_00429cbc:
00429CBC  8B 4D B4                  MOV ECX,dword ptr [EBP + -0x4c]
00429CBF  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
00429CC2  68 FC 00 00 00            PUSH 0xfc
00429CC7  51                        PUSH ECX
00429CC8  8B 48 3C                  MOV ECX,dword ptr [EAX + 0x3c]
00429CCB  8B 85 70 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff70]
00429CD1  51                        PUSH ECX
00429CD2  8B 8D 6C FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff6c]
00429CD8  50                        PUSH EAX
00429CD9  8B 46 14                  MOV EAX,dword ptr [ESI + 0x14]
00429CDC  51                        PUSH ECX
00429CDD  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
00429CE0  50                        PUSH EAX
00429CE1  8B 43 14                  MOV EAX,dword ptr [EBX + 0x14]
00429CE4  51                        PUSH ECX
00429CE5  50                        PUSH EAX
00429CE6  52                        PUSH EDX
00429CE7  E8 F1 8B FD FF            CALL 0x004028dd
00429CEC  8B 4D D0                  MOV ECX,dword ptr [EBP + -0x30]
00429CEF  83 C4 24                  ADD ESP,0x24
00429CF2  0B C8                     OR ECX,EAX
00429CF4  89 4D D0                  MOV dword ptr [EBP + -0x30],ECX
LAB_00429cf7:
00429CF7  8B 4D 84                  MOV ECX,dword ptr [EBP + -0x7c]
00429CFA  8D 04 8D 00 00 00 00      LEA EAX,[ECX*0x4 + 0x0]
00429D01  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00429D04  2B C8                     SUB ECX,EAX
00429D06  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
00429D09  48                        DEC EAX
00429D0A  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
00429D0D  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
00429D10  0F 85 97 FE FF FF         JNZ 0x00429bad
LAB_00429d16:
00429D16  8B 95 54 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff54]
00429D1C  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
00429D1F  8B 4D A0                  MOV ECX,dword ptr [EBP + -0x60]
00429D22  8B 7D 8C                  MOV EDI,dword ptr [EBP + -0x74]
00429D25  89 55 9C                  MOV dword ptr [EBP + -0x64],EDX
00429D28  8B 55 DC                  MOV EDX,dword ptr [EBP + -0x24]
00429D2B  03 D0                     ADD EDX,EAX
00429D2D  03 C8                     ADD ECX,EAX
00429D2F  8B 45 98                  MOV EAX,dword ptr [EBP + -0x68]
00429D32  89 55 DC                  MOV dword ptr [EBP + -0x24],EDX
00429D35  8B 55 94                  MOV EDX,dword ptr [EBP + -0x6c]
00429D38  03 F8                     ADD EDI,EAX
00429D3A  8B 85 7C FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff7c]
00429D40  83 C2 0C                  ADD EDX,0xc
00429D43  83 C0 04                  ADD EAX,0x4
00429D46  89 4D A0                  MOV dword ptr [EBP + -0x60],ECX
00429D49  3D 4C 52 7A 00            CMP EAX,0x7a524c
00429D4E  89 7D 8C                  MOV dword ptr [EBP + -0x74],EDI
00429D51  89 85 7C FF FF FF         MOV dword ptr [EBP + 0xffffff7c],EAX
00429D57  89 55 94                  MOV dword ptr [EBP + -0x6c],EDX
00429D5A  7F 21                     JG 0x00429d7d
00429D5C  8B 55 CC                  MOV EDX,dword ptr [EBP + -0x34]
00429D5F  8B F7                     MOV ESI,EDI
00429D61  8B 7D 9C                  MOV EDI,dword ptr [EBP + -0x64]
00429D64  8B C1                     MOV EAX,ECX
00429D66  E9 EF F9 FF FF            JMP 0x0042975a
LAB_00429d6b:
00429D6B  8B 70 3C                  MOV ESI,dword ptr [EAX + 0x3c]
00429D6E  8A 4D B4                  MOV CL,byte ptr [EBP + -0x4c]
00429D71  8A 16                     MOV DL,byte ptr [ESI]
00429D73  0A D1                     OR DL,CL
00429D75  88 16                     MOV byte ptr [ESI],DL
00429D77  8B 40 3C                  MOV EAX,dword ptr [EAX + 0x3c]
LAB_00429d7a:
00429D7A  08 48 01                  OR byte ptr [EAX + 0x1],CL
LAB_00429d7d:
00429D7D  8B 45 D0                  MOV EAX,dword ptr [EBP + -0x30]
00429D80  85 C0                     TEST EAX,EAX
00429D82  74 28                     JZ 0x00429dac
00429D84  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
00429D87  8B 4D D8                  MOV ECX,dword ptr [EBP + -0x28]
00429D8A  51                        PUSH ECX
00429D8B  8B 4B 18                  MOV ECX,dword ptr [EBX + 0x18]
00429D8E  8B 50 24                  MOV EDX,dword ptr [EAX + 0x24]
00429D91  8B 40 3C                  MOV EAX,dword ptr [EAX + 0x3c]
00429D94  52                        PUSH EDX
00429D95  8B 53 14                  MOV EDX,dword ptr [EBX + 0x14]
00429D98  8B 5D D4                  MOV EBX,dword ptr [EBP + -0x2c]
00429D9B  50                        PUSH EAX
00429D9C  51                        PUSH ECX
00429D9D  52                        PUSH EDX
00429D9E  8B 43 0C                  MOV EAX,dword ptr [EBX + 0xc]
00429DA1  50                        PUSH EAX
00429DA2  E8 1B AB FD FF            CALL 0x004048c2
00429DA7  83 C4 18                  ADD ESP,0x18
00429DAA  EB 37                     JMP 0x00429de3
LAB_00429dac:
00429DAC  8B 75 F4                  MOV ESI,dword ptr [EBP + -0xc]
00429DAF  33 C9                     XOR ECX,ECX
00429DB1  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
00429DB4  85 C0                     TEST EAX,EAX
00429DB6  7E 28                     JLE 0x00429de0
00429DB8  33 FF                     XOR EDI,EDI
LAB_00429dba:
00429DBA  8B 56 28                  MOV EDX,dword ptr [ESI + 0x28]
00429DBD  8A 45 FB                  MOV AL,byte ptr [EBP + -0x5]
00429DC0  84 04 3A                  TEST byte ptr [EDX + EDI*0x1],AL
00429DC3  74 10                     JZ 0x00429dd5
00429DC5  8B 56 3C                  MOV EDX,dword ptr [ESI + 0x3c]
00429DC8  8A 1C 0A                  MOV BL,byte ptr [EDX + ECX*0x1]
00429DCB  8D 04 0A                  LEA EAX,[EDX + ECX*0x1]
00429DCE  8A 55 D8                  MOV DL,byte ptr [EBP + -0x28]
00429DD1  0A DA                     OR BL,DL
00429DD3  88 18                     MOV byte ptr [EAX],BL
LAB_00429dd5:
00429DD5  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
00429DD8  41                        INC ECX
00429DD9  83 C7 1C                  ADD EDI,0x1c
00429DDC  3B C8                     CMP ECX,EAX
00429DDE  7C DA                     JL 0x00429dba
LAB_00429de0:
00429DE0  8B 5D D4                  MOV EBX,dword ptr [EBP + -0x2c]
LAB_00429de3:
00429DE3  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00429DE6  8B 85 74 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff74]
00429DEC  8B 75 BC                  MOV ESI,dword ptr [EBP + -0x44]
00429DEF  40                        INC EAX
00429DF0  8B 91 55 04 00 00         MOV EDX,dword ptr [ECX + 0x455]
00429DF6  83 C6 04                  ADD ESI,0x4
00429DF9  3B C2                     CMP EAX,EDX
00429DFB  89 85 74 FF FF FF         MOV dword ptr [EBP + 0xffffff74],EAX
00429E01  89 75 BC                  MOV dword ptr [EBP + -0x44],ESI
00429E04  0F 8C 93 F6 FF FF         JL 0x0042949d
LAB_00429e0a:
00429E0A  8B 75 C0                  MOV ESI,dword ptr [EBP + -0x40]
00429E0D  C7 46 04 00 00 00 00      MOV dword ptr [ESI + 0x4],0x0
LAB_00429e14:
00429E14  8B 4E 04                  MOV ECX,dword ptr [ESI + 0x4]
00429E17  8B 46 0C                  MOV EAX,dword ptr [ESI + 0xc]
00429E1A  3B C8                     CMP ECX,EAX
00429E1C  73 1E                     JNC 0x00429e3c
00429E1E  8B 46 08                  MOV EAX,dword ptr [ESI + 0x8]
00429E21  8B 56 1C                  MOV EDX,dword ptr [ESI + 0x1c]
00429E24  0F AF C1                  IMUL EAX,ECX
00429E27  8D 49 01                  LEA ECX,[ECX + 0x1]
00429E2A  03 C2                     ADD EAX,EDX
00429E2C  89 4E 04                  MOV dword ptr [ESI + 0x4],ECX
00429E2F  74 0B                     JZ 0x00429e3c
00429E31  8B 50 04                  MOV EDX,dword ptr [EAX + 0x4]
00429E34  52                        PUSH EDX
00429E35  E8 56 C0 27 00            CALL 0x006a5e90
00429E3A  EB D8                     JMP 0x00429e14
LAB_00429e3c:
00429E3C  56                        PUSH ESI
00429E3D  E8 CE 42 28 00            CALL 0x006ae110
00429E42  8A 45 FB                  MOV AL,byte ptr [EBP + -0x5]
00429E45  8A 4D D8                  MOV CL,byte ptr [EBP + -0x28]
00429E48  D0 E0                     SHL AL,0x1
00429E4A  88 45 FB                  MOV byte ptr [EBP + -0x5],AL
00429E4D  8B 45 C4                  MOV EAX,dword ptr [EBP + -0x3c]
00429E50  C0 E1 02                  SHL CL,0x2
00429E53  40                        INC EAX
00429E54  88 4D D8                  MOV byte ptr [EBP + -0x28],CL
00429E57  83 F8 03                  CMP EAX,0x3
00429E5A  89 45 C4                  MOV dword ptr [EBP + -0x3c],EAX
00429E5D  0F 8E B0 F3 FF FF         JLE 0x00429213
00429E63  85 DB                     TEST EBX,EBX
00429E65  74 10                     JZ 0x00429e77
00429E67  8B CB                     MOV ECX,EBX
00429E69  E8 82 1E 2B 00            CALL 0x006dbcf0
00429E6E  53                        PUSH EBX
00429E6F  E8 3C 44 30 00            CALL 0x0072e2b0
00429E74  83 C4 04                  ADD ESP,0x4
LAB_00429e77:
00429E77  5F                        POP EDI
00429E78  5E                        POP ESI
00429E79  5B                        POP EBX
00429E7A  8B E5                     MOV ESP,EBP
00429E7C  5D                        POP EBP
00429E7D  C3                        RET
