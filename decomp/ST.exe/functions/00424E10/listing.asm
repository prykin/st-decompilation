FUN_00424e10:
00424E10  55                        PUSH EBP
00424E11  8B EC                     MOV EBP,ESP
00424E13  6A FF                     PUSH -0x1
00424E15  68 40 05 79 00            PUSH 0x790540
00424E1A  68 64 D9 72 00            PUSH 0x72d964
00424E1F  64 A1 00 00 00 00         MOV EAX,FS:[0x0]
00424E25  50                        PUSH EAX
00424E26  64 89 25 00 00 00 00      MOV dword ptr FS:[0x0],ESP
00424E2D  81 EC 40 01 00 00         SUB ESP,0x140
00424E33  53                        PUSH EBX
00424E34  56                        PUSH ESI
00424E35  57                        PUSH EDI
00424E36  89 65 E8                  MOV dword ptr [EBP + -0x18],ESP
00424E39  8B D9                     MOV EBX,ECX
00424E3B  89 9D 08 FF FF FF         MOV dword ptr [EBP + 0xffffff08],EBX
00424E41  33 F6                     XOR ESI,ESI
00424E43  89 75 B8                  MOV dword ptr [EBP + -0x48],ESI
00424E46  89 75 BC                  MOV dword ptr [EBP + -0x44],ESI
00424E49  89 75 B0                  MOV dword ptr [EBP + -0x50],ESI
00424E4C  89 B5 40 FF FF FF         MOV dword ptr [EBP + 0xffffff40],ESI
00424E52  89 B5 30 FF FF FF         MOV dword ptr [EBP + 0xffffff30],ESI
00424E58  89 75 9C                  MOV dword ptr [EBP + -0x64],ESI
00424E5B  89 B5 44 FF FF FF         MOV dword ptr [EBP + 0xffffff44],ESI
00424E61  89 B5 34 FF FF FF         MOV dword ptr [EBP + 0xffffff34],ESI
00424E67  89 B5 68 FF FF FF         MOV dword ptr [EBP + 0xffffff68],ESI
00424E6D  89 B5 5C FF FF FF         MOV dword ptr [EBP + 0xffffff5c],ESI
00424E73  89 75 D8                  MOV dword ptr [EBP + -0x28],ESI
00424E76  39 B3 58 03 00 00         CMP dword ptr [EBX + 0x358],ESI
00424E7C  0F 84 50 19 00 00         JZ 0x004267d2
00424E82  39 75 08                  CMP dword ptr [EBP + 0x8],ESI
00424E85  0F 84 47 19 00 00         JZ 0x004267d2
00424E8B  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00424E8E  89 45 80                  MOV dword ptr [EBP + -0x80],EAX
00424E91  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
00424E94  89 4D 84                  MOV dword ptr [EBP + -0x7c],ECX
00424E97  89 75 88                  MOV dword ptr [EBP + -0x78],ESI
00424E9A  6A 01                     PUSH 0x1
00424E9C  56                        PUSH ESI
00424E9D  56                        PUSH ESI
00424E9E  56                        PUSH ESI
00424E9F  56                        PUSH ESI
00424EA0  56                        PUSH ESI
00424EA1  56                        PUSH ESI
00424EA2  8D 55 80                  LEA EDX,[EBP + -0x80]
00424EA5  52                        PUSH EDX
00424EA6  8D 45 8C                  LEA EAX,[EBP + -0x74]
00424EA9  50                        PUSH EAX
00424EAA  8B CB                     MOV ECX,EBX
00424EAC  E8 1F D7 2B 00            CALL 0x006e25d0
00424EB1  83 F8 01                  CMP EAX,0x1
00424EB4  0F 84 81 01 00 00         JZ 0x0042503b
00424EBA  8B 4D 8C                  MOV ECX,dword ptr [EBP + -0x74]
00424EBD  C1 F9 10                  SAR ECX,0x10
00424EC0  8B 93 D8 03 00 00         MOV EDX,dword ptr [EBX + 0x3d8]
00424EC6  8D 3C 0A                  LEA EDI,[EDX + ECX*0x1]
00424EC9  3B 7B 30                  CMP EDI,dword ptr [EBX + 0x30]
00424ECC  0F 8C 69 01 00 00         JL 0x0042503b
00424ED2  2B CA                     SUB ECX,EDX
00424ED4  3B 4B 38                  CMP ECX,dword ptr [EBX + 0x38]
00424ED7  0F 8D 5E 01 00 00         JGE 0x0042503b
00424EDD  8B 4D 90                  MOV ECX,dword ptr [EBP + -0x70]
00424EE0  C1 F9 10                  SAR ECX,0x10
00424EE3  8B 93 D4 03 00 00         MOV EDX,dword ptr [EBX + 0x3d4]
00424EE9  03 D1                     ADD EDX,ECX
00424EEB  3B 53 34                  CMP EDX,dword ptr [EBX + 0x34]
00424EEE  0F 8C 47 01 00 00         JL 0x0042503b
00424EF4  2B 8B D0 03 00 00         SUB ECX,dword ptr [EBX + 0x3d0]
00424EFA  3B 4B 3C                  CMP ECX,dword ptr [EBX + 0x3c]
00424EFD  0F 8D 38 01 00 00         JGE 0x0042503b
00424F03  DB 45 18                  FILD dword ptr [EBP + 0x18]
00424F06  DD 95 00 FF FF FF         FST double ptr [EBP + 0xffffff00]
00424F0C  DC 8B 68 03 00 00         FMUL double ptr [EBX + 0x368]
00424F12  D8 45 80                  FADD float ptr [EBP + -0x80]
00424F15  D9 5D 80                  FSTP float ptr [EBP + -0x80]
00424F18  6A 01                     PUSH 0x1
00424F1A  56                        PUSH ESI
00424F1B  56                        PUSH ESI
00424F1C  56                        PUSH ESI
00424F1D  56                        PUSH ESI
00424F1E  56                        PUSH ESI
00424F1F  56                        PUSH ESI
00424F20  8D 45 80                  LEA EAX,[EBP + -0x80]
00424F23  50                        PUSH EAX
00424F24  8D 4D 8C                  LEA ECX,[EBP + -0x74]
00424F27  51                        PUSH ECX
00424F28  8B CB                     MOV ECX,EBX
00424F2A  E8 A1 D6 2B 00            CALL 0x006e25d0
00424F2F  83 F8 01                  CMP EAX,0x1
00424F32  0F 84 03 01 00 00         JZ 0x0042503b
00424F38  DB 45 1C                  FILD dword ptr [EBP + 0x1c]
00424F3B  DD 95 F8 FE FF FF         FST double ptr [EBP + 0xfffffef8]
00424F41  DC 8B 68 03 00 00         FMUL double ptr [EBX + 0x368]
00424F47  D8 45 84                  FADD float ptr [EBP + -0x7c]
00424F4A  D9 5D 84                  FSTP float ptr [EBP + -0x7c]
00424F4D  6A 01                     PUSH 0x1
00424F4F  56                        PUSH ESI
00424F50  56                        PUSH ESI
00424F51  56                        PUSH ESI
00424F52  56                        PUSH ESI
00424F53  56                        PUSH ESI
00424F54  56                        PUSH ESI
00424F55  8D 55 80                  LEA EDX,[EBP + -0x80]
00424F58  52                        PUSH EDX
00424F59  8D 45 8C                  LEA EAX,[EBP + -0x74]
00424F5C  50                        PUSH EAX
00424F5D  8B CB                     MOV ECX,EBX
00424F5F  E8 6C D6 2B 00            CALL 0x006e25d0
00424F64  83 F8 01                  CMP EAX,0x1
00424F67  0F 84 CE 00 00 00         JZ 0x0042503b
00424F6D  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00424F70  89 4D 80                  MOV dword ptr [EBP + -0x80],ECX
00424F73  6A 01                     PUSH 0x1
00424F75  56                        PUSH ESI
00424F76  56                        PUSH ESI
00424F77  56                        PUSH ESI
00424F78  56                        PUSH ESI
00424F79  56                        PUSH ESI
00424F7A  56                        PUSH ESI
00424F7B  8D 55 80                  LEA EDX,[EBP + -0x80]
00424F7E  52                        PUSH EDX
00424F7F  8D 45 8C                  LEA EAX,[EBP + -0x74]
00424F82  50                        PUSH EAX
00424F83  8B CB                     MOV ECX,EBX
00424F85  E8 46 D6 2B 00            CALL 0x006e25d0
00424F8A  83 F8 01                  CMP EAX,0x1
00424F8D  0F 84 A8 00 00 00         JZ 0x0042503b
00424F93  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00424F96  89 4D 80                  MOV dword ptr [EBP + -0x80],ECX
00424F99  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
00424F9C  89 55 84                  MOV dword ptr [EBP + -0x7c],EDX
00424F9F  C7 45 88 EB 51 47 42      MOV dword ptr [EBP + -0x78],0x424751eb
00424FA6  6A 01                     PUSH 0x1
00424FA8  56                        PUSH ESI
00424FA9  56                        PUSH ESI
00424FAA  56                        PUSH ESI
00424FAB  56                        PUSH ESI
00424FAC  56                        PUSH ESI
00424FAD  56                        PUSH ESI
00424FAE  8D 45 80                  LEA EAX,[EBP + -0x80]
00424FB1  50                        PUSH EAX
00424FB2  8D 4D 8C                  LEA ECX,[EBP + -0x74]
00424FB5  51                        PUSH ECX
00424FB6  8B CB                     MOV ECX,EBX
00424FB8  E8 13 D6 2B 00            CALL 0x006e25d0
00424FBD  83 F8 01                  CMP EAX,0x1
00424FC0  74 79                     JZ 0x0042503b
00424FC2  DD 85 00 FF FF FF         FLD double ptr [EBP + 0xffffff00]
00424FC8  DC 8B 68 03 00 00         FMUL double ptr [EBX + 0x368]
00424FCE  D8 45 80                  FADD float ptr [EBP + -0x80]
00424FD1  D9 5D 80                  FSTP float ptr [EBP + -0x80]
00424FD4  6A 01                     PUSH 0x1
00424FD6  56                        PUSH ESI
00424FD7  56                        PUSH ESI
00424FD8  56                        PUSH ESI
00424FD9  56                        PUSH ESI
00424FDA  56                        PUSH ESI
00424FDB  56                        PUSH ESI
00424FDC  8D 55 80                  LEA EDX,[EBP + -0x80]
00424FDF  52                        PUSH EDX
00424FE0  8D 45 8C                  LEA EAX,[EBP + -0x74]
00424FE3  50                        PUSH EAX
00424FE4  8B CB                     MOV ECX,EBX
00424FE6  E8 E5 D5 2B 00            CALL 0x006e25d0
00424FEB  83 F8 01                  CMP EAX,0x1
00424FEE  74 4B                     JZ 0x0042503b
00424FF0  DD 85 F8 FE FF FF         FLD double ptr [EBP + 0xfffffef8]
00424FF6  DC 8B 68 03 00 00         FMUL double ptr [EBX + 0x368]
00424FFC  D8 45 84                  FADD float ptr [EBP + -0x7c]
00424FFF  D9 5D 84                  FSTP float ptr [EBP + -0x7c]
00425002  6A 01                     PUSH 0x1
00425004  56                        PUSH ESI
00425005  56                        PUSH ESI
00425006  56                        PUSH ESI
00425007  56                        PUSH ESI
00425008  56                        PUSH ESI
00425009  56                        PUSH ESI
0042500A  8D 4D 80                  LEA ECX,[EBP + -0x80]
0042500D  51                        PUSH ECX
0042500E  8D 55 8C                  LEA EDX,[EBP + -0x74]
00425011  52                        PUSH EDX
00425012  8B CB                     MOV ECX,EBX
00425014  E8 B7 D5 2B 00            CALL 0x006e25d0
00425019  83 F8 01                  CMP EAX,0x1
0042501C  74 1D                     JZ 0x0042503b
0042501E  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00425021  89 45 80                  MOV dword ptr [EBP + -0x80],EAX
00425024  6A 01                     PUSH 0x1
00425026  56                        PUSH ESI
00425027  56                        PUSH ESI
00425028  56                        PUSH ESI
00425029  56                        PUSH ESI
0042502A  56                        PUSH ESI
0042502B  56                        PUSH ESI
0042502C  8D 4D 80                  LEA ECX,[EBP + -0x80]
0042502F  51                        PUSH ECX
00425030  8D 55 8C                  LEA EDX,[EBP + -0x74]
00425033  52                        PUSH EDX
00425034  8B CB                     MOV ECX,EBX
00425036  E8 95 D5 2B 00            CALL 0x006e25d0
LAB_0042503b:
0042503B  3B C6                     CMP EAX,ESI
0042503D  0F 84 8F 17 00 00         JZ 0x004267d2
00425043  8B 75 18                  MOV ESI,dword ptr [EBP + 0x18]
00425046  89 B5 54 FF FF FF         MOV dword ptr [EBP + 0xffffff54],ESI
0042504C  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
0042504F  89 85 4C FF FF FF         MOV dword ptr [EBP + 0xffffff4c],EAX
00425055  8D 46 07                  LEA EAX,[ESI + 0x7]
00425058  99                        CDQ
00425059  83 E2 07                  AND EDX,0x7
0042505C  03 C2                     ADD EAX,EDX
0042505E  C1 F8 03                  SAR EAX,0x3
00425061  89 45 DC                  MOV dword ptr [EBP + -0x24],EAX
00425064  D9 45 0C                  FLD float ptr [EBP + 0xc]
00425067  DC B3 68 03 00 00         FDIV double ptr [EBX + 0x368]
0042506D  83 EC 08                  SUB ESP,0x8
00425070  DD 1C 24                  FSTP double ptr [ESP]
00425073  E8 D8 90 30 00            CALL 0x0072e150
00425078  83 C4 08                  ADD ESP,0x8
0042507B  E8 08 92 30 00            CALL 0x0072e288
00425080  8B F8                     MOV EDI,EAX
00425082  89 7D BC                  MOV dword ptr [EBP + -0x44],EDI
00425085  D9 45 0C                  FLD float ptr [EBP + 0xc]
00425088  DB 45 BC                  FILD dword ptr [EBP + -0x44]
0042508B  DC 8B 68 03 00 00         FMUL double ptr [EBX + 0x368]
00425091  DE E9                     FSUBP
00425093  D9 5D 9C                  FSTP float ptr [EBP + -0x64]
00425096  2B BB 74 03 00 00         SUB EDI,dword ptr [EBX + 0x374]
0042509C  89 7D BC                  MOV dword ptr [EBP + -0x44],EDI
0042509F  C7 85 40 FF FF FF 00 00 00 00  MOV dword ptr [EBP + 0xffffff40],0x0
004250A9  8B 83 70 03 00 00         MOV EAX,dword ptr [EBX + 0x370]
004250AF  8D 0C 37                  LEA ECX,[EDI + ESI*0x1]
004250B2  3B C8                     CMP ECX,EAX
004250B4  7E 0E                     JLE 0x004250c4
004250B6  2B C7                     SUB EAX,EDI
004250B8  8B F0                     MOV ESI,EAX
004250BA  89 75 18                  MOV dword ptr [EBP + 0x18],ESI
004250BD  C7 45 D8 01 00 00 00      MOV dword ptr [EBP + -0x28],0x1
LAB_004250c4:
004250C4  85 FF                     TEST EDI,EDI
004250C6  7D 16                     JGE 0x004250de
004250C8  8B C7                     MOV EAX,EDI
004250CA  F7 D8                     NEG EAX
004250CC  89 85 40 FF FF FF         MOV dword ptr [EBP + 0xffffff40],EAX
004250D2  2B F0                     SUB ESI,EAX
004250D4  89 75 18                  MOV dword ptr [EBP + 0x18],ESI
004250D7  C7 45 D8 01 00 00 00      MOV dword ptr [EBP + -0x28],0x1
LAB_004250de:
004250DE  D9 45 10                  FLD float ptr [EBP + 0x10]
004250E1  DC B3 68 03 00 00         FDIV double ptr [EBX + 0x368]
004250E7  83 EC 08                  SUB ESP,0x8
004250EA  DD 1C 24                  FSTP double ptr [ESP]
004250ED  E8 5E 90 30 00            CALL 0x0072e150
004250F2  83 C4 08                  ADD ESP,0x8
004250F5  E8 8E 91 30 00            CALL 0x0072e288
004250FA  89 45 B0                  MOV dword ptr [EBP + -0x50],EAX
004250FD  D9 45 10                  FLD float ptr [EBP + 0x10]
00425100  DB 45 B0                  FILD dword ptr [EBP + -0x50]
00425103  DC 8B 68 03 00 00         FMUL double ptr [EBX + 0x368]
00425109  DE E9                     FSUBP
0042510B  D9 9D 44 FF FF FF         FSTP float ptr [EBP + 0xffffff44]
00425111  2B 83 78 03 00 00         SUB EAX,dword ptr [EBX + 0x378]
00425117  89 45 B0                  MOV dword ptr [EBP + -0x50],EAX
0042511A  C7 85 30 FF FF FF 00 00 00 00  MOV dword ptr [EBP + 0xffffff30],0x0
00425124  8B 8B 70 03 00 00         MOV ECX,dword ptr [EBX + 0x370]
0042512A  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
0042512D  03 D0                     ADD EDX,EAX
0042512F  3B D1                     CMP EDX,ECX
00425131  7E 0C                     JLE 0x0042513f
00425133  2B C8                     SUB ECX,EAX
00425135  89 4D 1C                  MOV dword ptr [EBP + 0x1c],ECX
00425138  C7 45 D8 01 00 00 00      MOV dword ptr [EBP + -0x28],0x1
LAB_0042513f:
0042513F  85 C0                     TEST EAX,EAX
00425141  7D 12                     JGE 0x00425155
00425143  F7 D8                     NEG EAX
00425145  89 85 30 FF FF FF         MOV dword ptr [EBP + 0xffffff30],EAX
0042514B  29 45 1C                  SUB dword ptr [EBP + 0x1c],EAX
0042514E  C7 45 D8 01 00 00 00      MOV dword ptr [EBP + -0x28],0x1
LAB_00425155:
00425155  85 F6                     TEST ESI,ESI
00425157  0F 8E 75 16 00 00         JLE 0x004267d2
0042515D  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
00425160  85 C0                     TEST EAX,EAX
00425162  0F 8E 6A 16 00 00         JLE 0x004267d2
00425168  D9 45 14                  FLD float ptr [EBP + 0x14]
0042516B  D8 0D 38 05 79 00         FMUL float ptr [0x00790538]
00425171  83 EC 08                  SUB ESP,0x8
00425174  DD 1C 24                  FSTP double ptr [ESP]
00425177  E8 D4 8F 30 00            CALL 0x0072e150
0042517C  83 C4 08                  ADD ESP,0x8
0042517F  DC C0                     FADD ST0,ST0
00425181  E8 02 91 30 00            CALL 0x0072e288
00425186  89 45 A4                  MOV dword ptr [EBP + -0x5c],EAX
00425189  8B 55 20                  MOV EDX,dword ptr [EBP + 0x20]
0042518C  8B 42 1C                  MOV EAX,dword ptr [EDX + 0x1c]
0042518F  89 85 F4 FE FF FF         MOV dword ptr [EBP + 0xfffffef4],EAX
00425195  85 C0                     TEST EAX,EAX
00425197  0F 84 67 02 00 00         JZ 0x00425404
0042519D  8B 42 20                  MOV EAX,dword ptr [EDX + 0x20]
004251A0  85 C0                     TEST EAX,EAX
004251A2  0F 84 5C 02 00 00         JZ 0x00425404
004251A8  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
004251AB  39 4A 18                  CMP dword ptr [EDX + 0x18],ECX
004251AE  0F 85 50 02 00 00         JNZ 0x00425404
004251B4  8B 8D 40 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff40]
004251BA  3B 4A 08                  CMP ECX,dword ptr [EDX + 0x8]
004251BD  0F 85 41 02 00 00         JNZ 0x00425404
004251C3  8B 8D 30 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff30]
004251C9  3B 4A 0C                  CMP ECX,dword ptr [EDX + 0xc]
004251CC  0F 85 32 02 00 00         JNZ 0x00425404
004251D2  8B 8B 74 03 00 00         MOV ECX,dword ptr [EBX + 0x374]
004251D8  8B 12                     MOV EDX,dword ptr [EDX]
004251DA  89 95 F0 FE FF FF         MOV dword ptr [EBP + 0xfffffef0],EDX
004251E0  8D 34 39                  LEA ESI,[ECX + EDI*0x1]
004251E3  3B F2                     CMP ESI,EDX
004251E5  75 57                     JNZ 0x0042523e
004251E7  8B 75 B0                  MOV ESI,dword ptr [EBP + -0x50]
004251EA  03 B3 78 03 00 00         ADD ESI,dword ptr [EBX + 0x378]
004251F0  8B 55 20                  MOV EDX,dword ptr [EBP + 0x20]
004251F3  3B 72 04                  CMP ESI,dword ptr [EDX + 0x4]
004251F6  75 40                     JNZ 0x00425238
004251F8  D9 42 10                  FLD float ptr [EDX + 0x10]
004251FB  D8 5D 9C                  FCOMP float ptr [EBP + -0x64]
004251FE  DF E0                     FNSTSW AX
00425200  F6 C4 40                  TEST AH,0x40
00425203  74 1A                     JZ 0x0042521f
00425205  D9 42 14                  FLD float ptr [EDX + 0x14]
00425208  D8 9D 44 FF FF FF         FCOMP float ptr [EBP + 0xffffff44]
0042520E  DF E0                     FNSTSW AX
00425210  F6 C4 40                  TEST AH,0x40
00425213  74 0A                     JZ 0x0042521f
00425215  B8 02 00 00 00            MOV EAX,0x2
0042521A  E9 C1 16 00 00            JMP 0x004268e0
LAB_0042521f:
0042521F  8B 45 9C                  MOV EAX,dword ptr [EBP + -0x64]
00425222  89 42 10                  MOV dword ptr [EDX + 0x10],EAX
00425225  8B 8D 44 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff44]
0042522B  89 4A 14                  MOV dword ptr [EDX + 0x14],ECX
0042522E  B8 01 00 00 00            MOV EAX,0x1
00425233  E9 A8 16 00 00            JMP 0x004268e0
LAB_00425238:
00425238  8B 95 F0 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffef0]
LAB_0042523e:
0042523E  83 BD F4 FE FF FF 01      CMP dword ptr [EBP + 0xfffffef4],0x1
00425245  0F 85 B9 01 00 00         JNZ 0x00425404
0042524B  F6 00 04                  TEST byte ptr [EAX],0x4
0042524E  0F 85 B0 01 00 00         JNZ 0x00425404
00425254  8B 75 D8                  MOV ESI,dword ptr [EBP + -0x28]
00425257  85 F6                     TEST ESI,ESI
00425259  0F 85 A5 01 00 00         JNZ 0x00425404
0042525F  8B 70 04                  MOV ESI,dword ptr [EAX + 0x4]
00425262  89 B5 38 FF FF FF         MOV dword ptr [EBP + 0xffffff38],ESI
00425268  8B 40 08                  MOV EAX,dword ptr [EAX + 0x8]
0042526B  89 85 10 FF FF FF         MOV dword ptr [EBP + 0xffffff10],EAX
00425271  8B F1                     MOV ESI,ECX
00425273  2B F2                     SUB ESI,EDX
00425275  03 F7                     ADD ESI,EDI
00425277  89 B5 20 FF FF FF         MOV dword ptr [EBP + 0xffffff20],ESI
0042527D  8B 93 78 03 00 00         MOV EDX,dword ptr [EBX + 0x378]
00425283  8B C2                     MOV EAX,EDX
00425285  8B 7D 20                  MOV EDI,dword ptr [EBP + 0x20]
00425288  2B 47 04                  SUB EAX,dword ptr [EDI + 0x4]
0042528B  03 45 B0                  ADD EAX,dword ptr [EBP + -0x50]
0042528E  8B BD 10 FF FF FF         MOV EDI,dword ptr [EBP + 0xffffff10]
00425294  0F BF 3F                  MOVSX EDI,word ptr [EDI]
00425297  2B F9                     SUB EDI,ECX
00425299  8B 8D 10 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff10]
0042529F  83 C1 02                  ADD ECX,0x2
004252A2  89 8D EC FE FF FF         MOV dword ptr [EBP + 0xfffffeec],ECX
004252A8  0F BF 09                  MOVSX ECX,word ptr [ECX]
004252AB  2B CA                     SUB ECX,EDX
004252AD  8B 93 7C 03 00 00         MOV EDX,dword ptr [EBX + 0x37c]
004252B3  0F AF D1                  IMUL EDX,ECX
004252B6  03 93 8C 03 00 00         ADD EDX,dword ptr [EBX + 0x38c]
004252BC  33 C9                     XOR ECX,ECX
004252BE  8A 0C 3A                  MOV CL,byte ptr [EDX + EDI*0x1]
004252C1  89 8D 24 FF FF FF         MOV dword ptr [EBP + 0xffffff24],ECX
004252C7  C7 85 14 FF FF FF 00 00 00 00  MOV dword ptr [EBP + 0xffffff14],0x0
004252D1  8B 8D 38 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff38]
004252D7  85 C9                     TEST ECX,ECX
004252D9  7E 74                     JLE 0x0042534f
004252DB  8B BD EC FE FF FF         MOV EDI,dword ptr [EBP + 0xfffffeec]
004252E1  EB 06                     JMP 0x004252e9
LAB_004252e3:
004252E3  8B B5 20 FF FF FF         MOV ESI,dword ptr [EBP + 0xffffff20]
LAB_004252e9:
004252E9  66 2B B3 74 03 00 00      SUB SI,word ptr [EBX + 0x374]
004252F0  66 01 77 FE               ADD word ptr [EDI + -0x2],SI
004252F4  66 8B D0                  MOV DX,AX
004252F7  66 2B 93 78 03 00 00      SUB DX,word ptr [EBX + 0x378]
004252FE  66 01 17                  ADD word ptr [EDI],DX
00425301  F6 47 04 02               TEST byte ptr [EDI + 0x4],0x2
00425305  74 04                     JZ 0x0042530b
00425307  66 FF 4F FE               DEC word ptr [EDI + -0x2]
LAB_0042530b:
0042530B  F6 47 04 01               TEST byte ptr [EDI + 0x4],0x1
0042530F  74 03                     JZ 0x00425314
00425311  66 FF 0F                  DEC word ptr [EDI]
LAB_00425314:
00425314  0F BF 37                  MOVSX ESI,word ptr [EDI]
00425317  0F AF B3 7C 03 00 00      IMUL ESI,dword ptr [EBX + 0x37c]
0042531E  0F BF 57 FE               MOVSX EDX,word ptr [EDI + -0x2]
00425322  03 F2                     ADD ESI,EDX
00425324  8B 93 8C 03 00 00         MOV EDX,dword ptr [EBX + 0x38c]
0042532A  33 C9                     XOR ECX,ECX
0042532C  8A 0C 16                  MOV CL,byte ptr [ESI + EDX*0x1]
0042532F  3B 8D 24 FF FF FF         CMP ECX,dword ptr [EBP + 0xffffff24]
00425335  75 18                     JNZ 0x0042534f
00425337  8B 8D 14 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff14]
0042533D  41                        INC ECX
0042533E  89 8D 14 FF FF FF         MOV dword ptr [EBP + 0xffffff14],ECX
00425344  83 C7 08                  ADD EDI,0x8
00425347  3B 8D 38 FF FF FF         CMP ECX,dword ptr [EBP + 0xffffff38]
0042534D  7C 94                     JL 0x004252e3
LAB_0042534f:
0042534F  8B 85 38 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff38]
00425355  39 85 14 FF FF FF         CMP dword ptr [EBP + 0xffffff14],EAX
0042535B  0F 8C A3 00 00 00         JL 0x00425404
00425361  8B F0                     MOV ESI,EAX
00425363  8D 0C F5 00 00 00 00      LEA ECX,[ESI*0x8 + 0x0]
0042536A  51                        PUSH ECX
0042536B  E8 00 59 28 00            CALL 0x006aac70
00425370  89 85 64 FF FF FF         MOV dword ptr [EBP + 0xffffff64],EAX
00425376  33 FF                     XOR EDI,EDI
00425378  85 F6                     TEST ESI,ESI
0042537A  7E 3C                     JLE 0x004253b8
0042537C  8B 95 10 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff10]
00425382  8D 72 02                  LEA ESI,[EDX + 0x2]
00425385  8B 9D 38 FF FF FF         MOV EBX,dword ptr [EBP + 0xffffff38]
LAB_0042538b:
0042538B  6A FF                     PUSH -0x1
0042538D  8A 46 04                  MOV AL,byte ptr [ESI + 0x4]
00425390  83 E0 03                  AND EAX,0x3
00425393  50                        PUSH EAX
00425394  0F BF 0E                  MOVSX ECX,word ptr [ESI]
00425397  51                        PUSH ECX
00425398  0F BF 56 FE               MOVSX EDX,word ptr [ESI + -0x2]
0042539C  52                        PUSH EDX
0042539D  57                        PUSH EDI
0042539E  8B 85 64 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff64]
004253A4  50                        PUSH EAX
004253A5  8B 8D 08 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff08]
004253AB  E8 60 FC FD FF            CALL 0x00405010
004253B0  47                        INC EDI
004253B1  83 C6 08                  ADD ESI,0x8
004253B4  3B FB                     CMP EDI,EBX
004253B6  7C D3                     JL 0x0042538b
LAB_004253b8:
004253B8  8B 8D 10 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff10]
004253BE  51                        PUSH ECX
004253BF  E8 CC 0A 28 00            CALL 0x006a5e90
004253C4  8B 45 20                  MOV EAX,dword ptr [EBP + 0x20]
004253C7  8B 50 20                  MOV EDX,dword ptr [EAX + 0x20]
004253CA  8B 8D 64 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff64]
004253D0  89 4A 08                  MOV dword ptr [EDX + 0x8],ECX
004253D3  8B 4D BC                  MOV ECX,dword ptr [EBP + -0x44]
004253D6  8B 95 08 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff08]
004253DC  03 8A 74 03 00 00         ADD ECX,dword ptr [EDX + 0x374]
004253E2  89 08                     MOV dword ptr [EAX],ECX
004253E4  8B 4D B0                  MOV ECX,dword ptr [EBP + -0x50]
004253E7  03 8A 78 03 00 00         ADD ECX,dword ptr [EDX + 0x378]
004253ED  89 48 04                  MOV dword ptr [EAX + 0x4],ECX
004253F0  8B 55 9C                  MOV EDX,dword ptr [EBP + -0x64]
004253F3  89 50 10                  MOV dword ptr [EAX + 0x10],EDX
004253F6  8B 8D 44 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff44]
004253FC  89 48 14                  MOV dword ptr [EAX + 0x14],ECX
004253FF  E9 DA 14 00 00            JMP 0x004268de
LAB_00425404:
00425404  8B 95 54 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff54]
0042540A  8D 34 95 00 00 00 00      LEA ESI,[EDX*0x4 + 0x0]
00425411  89 B5 E8 FE FF FF         MOV dword ptr [EBP + 0xfffffee8],ESI
00425417  9B                        WAIT
00425418  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
0042541F  0F AF B5 4C FF FF FF      IMUL ESI,dword ptr [EBP + 0xffffff4c]
00425426  8B C6                     MOV EAX,ESI
00425428  83 C0 03                  ADD EAX,0x3
0042542B  24 FC                     AND AL,0xfc
0042542D  E8 0E 86 30 00            CALL 0x0072da40
00425432  89 65 E8                  MOV dword ptr [EBP + -0x18],ESP
00425435  8B D4                     MOV EDX,ESP
00425437  89 55 A0                  MOV dword ptr [EBP + -0x60],EDX
0042543A  8B CE                     MOV ECX,ESI
0042543C  33 C0                     XOR EAX,EAX
0042543E  8B FA                     MOV EDI,EDX
00425440  C1 E9 02                  SHR ECX,0x2
00425443  F3 AB                     STOSD.REP ES:EDI
00425445  8B CE                     MOV ECX,ESI
00425447  83 E1 03                  AND ECX,0x3
0042544A  F3 AA                     STOSB.REP ES:EDI
0042544C  9B                        WAIT
0042544D  C7 45 FC FF FF FF FF      MOV dword ptr [EBP + -0x4],0xffffffff
00425454  8B 8B 7C 03 00 00         MOV ECX,dword ptr [EBX + 0x37c]
0042545A  8B B5 30 FF FF FF         MOV ESI,dword ptr [EBP + 0xffffff30]
00425460  8B 45 B0                  MOV EAX,dword ptr [EBP + -0x50]
00425463  03 C6                     ADD EAX,ESI
00425465  0F AF C1                  IMUL EAX,ECX
00425468  03 83 8C 03 00 00         ADD EAX,dword ptr [EBX + 0x38c]
0042546E  8B BD 40 FF FF FF         MOV EDI,dword ptr [EBP + 0xffffff40]
00425474  03 C7                     ADD EAX,EDI
00425476  03 45 BC                  ADD EAX,dword ptr [EBP + -0x44]
00425479  89 45 C8                  MOV dword ptr [EBP + -0x38],EAX
0042547C  8B 8D 54 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff54]
00425482  0F AF CE                  IMUL ECX,ESI
00425485  03 CF                     ADD ECX,EDI
00425487  8D 04 8A                  LEA EAX,[EDX + ECX*0x4]
0042548A  89 85 28 FF FF FF         MOV dword ptr [EBP + 0xffffff28],EAX
00425490  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
00425493  8D 4A FF                  LEA ECX,[EDX + -0x1]
00425496  89 8D E4 FE FF FF         MOV dword ptr [EBP + 0xfffffee4],ECX
0042549C  85 C9                     TEST ECX,ECX
0042549E  0F 8E CC 03 00 00         JLE 0x00425870
004254A4  8B CF                     MOV ECX,EDI
004254A6  83 E1 07                  AND ECX,0x7
004254A9  BA 80 00 00 00            MOV EDX,0x80
004254AE  D3 FA                     SAR EDX,CL
004254B0  89 95 E0 FE FF FF         MOV dword ptr [EBP + 0xfffffee0],EDX
004254B6  BA 40 00 00 00            MOV EDX,0x40
004254BB  D3 FA                     SAR EDX,CL
004254BD  89 95 DC FE FF FF         MOV dword ptr [EBP + 0xfffffedc],EDX
004254C3  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
004254C6  49                        DEC ECX
004254C7  89 8D D8 FE FF FF         MOV dword ptr [EBP + 0xfffffed8],ECX
004254CD  8B 95 E8 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffee8]
004254D3  03 D0                     ADD EDX,EAX
004254D5  89 95 D4 FE FF FF         MOV dword ptr [EBP + 0xfffffed4],EDX
004254DB  8B C7                     MOV EAX,EDI
004254DD  C1 F8 03                  SAR EAX,0x3
004254E0  8B 4D DC                  MOV ECX,dword ptr [EBP + -0x24]
004254E3  0F AF CE                  IMUL ECX,ESI
004254E6  03 C8                     ADD ECX,EAX
004254E8  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
004254EB  8D 7C 39 01               LEA EDI,[ECX + EDI*0x1 + 0x1]
004254EF  89 BD D0 FE FF FF         MOV dword ptr [EBP + 0xfffffed0],EDI
004254F5  46                        INC ESI
004254F6  0F AF 75 DC               IMUL ESI,dword ptr [EBP + -0x24]
004254FA  03 F0                     ADD ESI,EAX
004254FC  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004254FF  8D 4C 06 01               LEA ECX,[ESI + EAX*0x1 + 0x1]
00425503  89 8D CC FE FF FF         MOV dword ptr [EBP + 0xfffffecc],ECX
00425509  B8 04 00 00 00            MOV EAX,0x4
0042550E  2B 85 E8 FE FF FF         SUB EAX,dword ptr [EBP + 0xfffffee8]
00425514  89 85 C8 FE FF FF         MOV dword ptr [EBP + 0xfffffec8],EAX
0042551A  8B 85 E4 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffee4]
00425520  89 85 C4 FE FF FF         MOV dword ptr [EBP + 0xfffffec4],EAX
LAB_00425526:
00425526  8B 83 7C 03 00 00         MOV EAX,dword ptr [EBX + 0x37c]
0042552C  8B 4D C8                  MOV ECX,dword ptr [EBP + -0x38]
0042552F  03 C1                     ADD EAX,ECX
00425531  89 85 48 FF FF FF         MOV dword ptr [EBP + 0xffffff48],EAX
00425537  33 C0                     XOR EAX,EAX
00425539  8A 47 FF                  MOV AL,byte ptr [EDI + -0x1]
0042553C  89 85 2C FF FF FF         MOV dword ptr [EBP + 0xffffff2c],EAX
00425542  8B F7                     MOV ESI,EDI
00425544  33 C9                     XOR ECX,ECX
00425546  8B 85 CC FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffecc]
0042554C  8A 48 FF                  MOV CL,byte ptr [EAX + -0x1]
0042554F  89 8D 50 FF FF FF         MOV dword ptr [EBP + 0xffffff50],ECX
00425555  89 85 70 FF FF FF         MOV dword ptr [EBP + 0xffffff70],EAX
0042555B  8B 8D E0 FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffee0]
00425561  89 4D B4                  MOV dword ptr [EBP + -0x4c],ECX
00425564  8B 8D DC FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffedc]
0042556A  89 4D D0                  MOV dword ptr [EBP + -0x30],ECX
0042556D  85 C9                     TEST ECX,ECX
0042556F  75 46                     JNZ 0x004255b7
00425571  C7 45 B4 00 01 00 00      MOV dword ptr [EBP + -0x4c],0x100
00425578  C7 45 D0 80 00 00 00      MOV dword ptr [EBP + -0x30],0x80
0042557F  8B B5 2C FF FF FF         MOV ESI,dword ptr [EBP + 0xffffff2c]
00425585  C1 E6 08                  SHL ESI,0x8
00425588  8A 0F                     MOV CL,byte ptr [EDI]
0042558A  0B F1                     OR ESI,ECX
0042558C  89 B5 2C FF FF FF         MOV dword ptr [EBP + 0xffffff2c],ESI
00425592  8D 77 01                  LEA ESI,[EDI + 0x1]
00425595  8B BD 50 FF FF FF         MOV EDI,dword ptr [EBP + 0xffffff50]
0042559B  C1 E7 08                  SHL EDI,0x8
0042559E  33 C9                     XOR ECX,ECX
004255A0  8A 08                     MOV CL,byte ptr [EAX]
004255A2  0B F9                     OR EDI,ECX
004255A4  89 BD 50 FF FF FF         MOV dword ptr [EBP + 0xffffff50],EDI
004255AA  40                        INC EAX
004255AB  89 85 70 FF FF FF         MOV dword ptr [EBP + 0xffffff70],EAX
004255B1  8B BD D0 FE FF FF         MOV EDI,dword ptr [EBP + 0xfffffed0]
LAB_004255b7:
004255B7  8B 85 2C FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff2c]
004255BD  85 45 B4                  TEST dword ptr [EBP + -0x4c],EAX
004255C0  0F 84 8C 00 00 00         JZ 0x00425652
004255C6  8B 4D C8                  MOV ECX,dword ptr [EBP + -0x38]
004255C9  8A 09                     MOV CL,byte ptr [ECX]
004255CB  88 4D C4                  MOV byte ptr [EBP + -0x3c],CL
004255CE  83 7D 18 01               CMP dword ptr [EBP + 0x18],0x1
004255D2  7E 23                     JLE 0x004255f7
004255D4  85 45 D0                  TEST dword ptr [EBP + -0x30],EAX
004255D7  74 1E                     JZ 0x004255f7
004255D9  8A 45 C4                  MOV AL,byte ptr [EBP + -0x3c]
004255DC  8B 4D C8                  MOV ECX,dword ptr [EBP + -0x38]
004255DF  3A 41 01                  CMP AL,byte ptr [ECX + 0x1]
004255E2  75 13                     JNZ 0x004255f7
004255E4  8B 85 28 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff28]
004255EA  83 08 01                  OR dword ptr [EAX],0x1
004255ED  8B 85 C8 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffec8]
004255F3  83 0C 10 10               OR dword ptr [EAX + EDX*0x1],0x10
LAB_004255f7:
004255F7  8B 85 50 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff50]
004255FD  85 45 B4                  TEST dword ptr [EBP + -0x4c],EAX
00425600  74 1C                     JZ 0x0042561e
00425602  8A 4D C4                  MOV CL,byte ptr [EBP + -0x3c]
00425605  8B 85 48 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff48]
0042560B  3A 08                     CMP CL,byte ptr [EAX]
0042560D  75 0F                     JNZ 0x0042561e
0042560F  8B 85 28 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff28]
00425615  83 08 40                  OR dword ptr [EAX],0x40
00425618  8B 02                     MOV EAX,dword ptr [EDX]
0042561A  0C 04                     OR AL,0x4
0042561C  89 02                     MOV dword ptr [EDX],EAX
LAB_0042561e:
0042561E  83 7D 18 01               CMP dword ptr [EBP + 0x18],0x1
00425622  7E 2E                     JLE 0x00425652
00425624  8B 8D 50 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff50]
0042562A  85 4D D0                  TEST dword ptr [EBP + -0x30],ECX
0042562D  74 23                     JZ 0x00425652
0042562F  8A 45 C4                  MOV AL,byte ptr [EBP + -0x3c]
00425632  8B 8D 48 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff48]
00425638  3A 41 01                  CMP AL,byte ptr [ECX + 0x1]
0042563B  75 15                     JNZ 0x00425652
0042563D  8B 85 28 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff28]
00425643  8B 08                     MOV ECX,dword ptr [EAX]
00425645  80 C9 80                  OR CL,0x80
00425648  89 08                     MOV dword ptr [EAX],ECX
0042564A  8B 42 04                  MOV EAX,dword ptr [EDX + 0x4]
0042564D  0C 08                     OR AL,0x8
0042564F  89 42 04                  MOV dword ptr [EDX + 0x4],EAX
LAB_00425652:
00425652  B8 01 00 00 00            MOV EAX,0x1
00425657  39 85 D8 FE FF FF         CMP dword ptr [EBP + 0xfffffed8],EAX
0042565D  0F 8E 6F 01 00 00         JLE 0x004257d2
00425663  8B 8D C8 FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffec8]
00425669  03 CA                     ADD ECX,EDX
0042566B  8D 7A 08                  LEA EDI,[EDX + 0x8]
0042566E  8B 9D 28 FF FF FF         MOV EBX,dword ptr [EBP + 0xffffff28]
00425674  2B DA                     SUB EBX,EDX
00425676  89 9D C0 FE FF FF         MOV dword ptr [EBP + 0xfffffec0],EBX
0042567C  8B 55 C8                  MOV EDX,dword ptr [EBP + -0x38]
0042567F  2B 95 48 FF FF FF         SUB EDX,dword ptr [EBP + 0xffffff48]
00425685  89 95 BC FE FF FF         MOV dword ptr [EBP + 0xfffffebc],EDX
LAB_0042568b:
0042568B  8B 55 B4                  MOV EDX,dword ptr [EBP + -0x4c]
0042568E  89 95 3C FF FF FF         MOV dword ptr [EBP + 0xffffff3c],EDX
00425694  8B 55 D0                  MOV EDX,dword ptr [EBP + -0x30]
00425697  89 55 B4                  MOV dword ptr [EBP + -0x4c],EDX
0042569A  D1 FA                     SAR EDX,0x1
0042569C  89 55 D0                  MOV dword ptr [EBP + -0x30],EDX
0042569F  75 56                     JNZ 0x004256f7
004256A1  C7 85 3C FF FF FF 00 02 00 00  MOV dword ptr [EBP + 0xffffff3c],0x200
004256AB  C7 45 B4 00 01 00 00      MOV dword ptr [EBP + -0x4c],0x100
004256B2  C7 45 D0 80 00 00 00      MOV dword ptr [EBP + -0x30],0x80
004256B9  8B 95 2C FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff2c]
004256BF  C1 E2 08                  SHL EDX,0x8
004256C2  33 DB                     XOR EBX,EBX
004256C4  8A 1E                     MOV BL,byte ptr [ESI]
004256C6  0B D3                     OR EDX,EBX
004256C8  89 95 2C FF FF FF         MOV dword ptr [EBP + 0xffffff2c],EDX
004256CE  46                        INC ESI
004256CF  89 75 CC                  MOV dword ptr [EBP + -0x34],ESI
004256D2  8B 95 50 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff50]
004256D8  C1 E2 08                  SHL EDX,0x8
004256DB  33 DB                     XOR EBX,EBX
004256DD  8B B5 70 FF FF FF         MOV ESI,dword ptr [EBP + 0xffffff70]
004256E3  8A 1E                     MOV BL,byte ptr [ESI]
004256E5  0B D3                     OR EDX,EBX
004256E7  89 95 50 FF FF FF         MOV dword ptr [EBP + 0xffffff50],EDX
004256ED  46                        INC ESI
004256EE  89 B5 70 FF FF FF         MOV dword ptr [EBP + 0xffffff70],ESI
004256F4  8B 75 CC                  MOV ESI,dword ptr [EBP + -0x34]
LAB_004256f7:
004256F7  8B 95 2C FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff2c]
004256FD  85 55 B4                  TEST dword ptr [EBP + -0x4c],EDX
00425700  0F 84 A1 00 00 00         JZ 0x004257a7
00425706  8B 95 48 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff48]
0042570C  03 D0                     ADD EDX,EAX
0042570E  8B 9D BC FE FF FF         MOV EBX,dword ptr [EBP + 0xfffffebc]
00425714  8A 14 1A                  MOV DL,byte ptr [EDX + EBX*0x1]
00425717  88 55 C4                  MOV byte ptr [EBP + -0x3c],DL
0042571A  8B 95 2C FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff2c]
00425720  85 55 D0                  TEST dword ptr [EBP + -0x30],EDX
00425723  74 19                     JZ 0x0042573e
00425725  8A 55 C4                  MOV DL,byte ptr [EBP + -0x3c]
00425728  8B 5D C8                  MOV EBX,dword ptr [EBP + -0x38]
0042572B  3A 54 18 01               CMP DL,byte ptr [EAX + EBX*0x1 + 0x1]
0042572F  75 0D                     JNZ 0x0042573e
00425731  83 09 01                  OR dword ptr [ECX],0x1
00425734  8B 95 C0 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffec0]
0042573A  83 0C 3A 10               OR dword ptr [EDX + EDI*0x1],0x10
LAB_0042573e:
0042573E  8B 95 50 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff50]
00425744  85 95 3C FF FF FF         TEST dword ptr [EBP + 0xffffff3c],EDX
0042574A  74 16                     JZ 0x00425762
0042574C  8A 55 C4                  MOV DL,byte ptr [EBP + -0x3c]
0042574F  8B 9D 48 FF FF FF         MOV EBX,dword ptr [EBP + 0xffffff48]
00425755  3A 54 18 FF               CMP DL,byte ptr [EAX + EBX*0x1 + -0x1]
00425759  75 07                     JNZ 0x00425762
0042575B  83 09 20                  OR dword ptr [ECX],0x20
0042575E  83 4F F8 02               OR dword ptr [EDI + -0x8],0x2
LAB_00425762:
00425762  8B 95 50 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff50]
00425768  85 55 B4                  TEST dword ptr [EBP + -0x4c],EDX
0042576B  74 16                     JZ 0x00425783
0042576D  8B 95 48 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff48]
00425773  03 D0                     ADD EDX,EAX
00425775  8A 5D C4                  MOV BL,byte ptr [EBP + -0x3c]
00425778  3A 1A                     CMP BL,byte ptr [EDX]
0042577A  75 07                     JNZ 0x00425783
0042577C  83 09 40                  OR dword ptr [ECX],0x40
0042577F  83 4F FC 04               OR dword ptr [EDI + -0x4],0x4
LAB_00425783:
00425783  8B 95 50 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff50]
00425789  85 55 D0                  TEST dword ptr [EBP + -0x30],EDX
0042578C  74 19                     JZ 0x004257a7
0042578E  8A 55 C4                  MOV DL,byte ptr [EBP + -0x3c]
00425791  8B 9D 48 FF FF FF         MOV EBX,dword ptr [EBP + 0xffffff48]
00425797  3A 54 18 01               CMP DL,byte ptr [EAX + EBX*0x1 + 0x1]
0042579B  75 0A                     JNZ 0x004257a7
0042579D  8B 19                     MOV EBX,dword ptr [ECX]
0042579F  80 CB 80                  OR BL,0x80
004257A2  89 19                     MOV dword ptr [ECX],EBX
004257A4  83 0F 08                  OR dword ptr [EDI],0x8
LAB_004257a7:
004257A7  40                        INC EAX
004257A8  83 C1 04                  ADD ECX,0x4
004257AB  83 C7 04                  ADD EDI,0x4
004257AE  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
004257B1  4A                        DEC EDX
004257B2  89 95 D8 FE FF FF         MOV dword ptr [EBP + 0xfffffed8],EDX
004257B8  3B C2                     CMP EAX,EDX
004257BA  0F 8C CB FE FF FF         JL 0x0042568b
004257C0  8B 95 D4 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffed4]
004257C6  8B 9D 08 FF FF FF         MOV EBX,dword ptr [EBP + 0xffffff08]
004257CC  8B BD D0 FE FF FF         MOV EDI,dword ptr [EBP + 0xfffffed0]
LAB_004257d2:
004257D2  83 7D 18 01               CMP dword ptr [EBP + 0x18],0x1
004257D6  7E 5B                     JLE 0x00425833
004257D8  8B 8D 2C FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff2c]
004257DE  85 4D D0                  TEST dword ptr [EBP + -0x30],ECX
004257E1  74 50                     JZ 0x00425833
004257E3  8B 4D C8                  MOV ECX,dword ptr [EBP + -0x38]
004257E6  8A 0C 08                  MOV CL,byte ptr [EAX + ECX*0x1]
004257E9  8B B5 50 FF FF FF         MOV ESI,dword ptr [EBP + 0xffffff50]
004257EF  85 75 B4                  TEST dword ptr [EBP + -0x4c],ESI
004257F2  74 1B                     JZ 0x0042580f
004257F4  8B B5 48 FF FF FF         MOV ESI,dword ptr [EBP + 0xffffff48]
004257FA  3A 4C 30 FF               CMP CL,byte ptr [EAX + ESI*0x1 + -0x1]
004257FE  75 0F                     JNZ 0x0042580f
00425800  8B B5 28 FF FF FF         MOV ESI,dword ptr [EBP + 0xffffff28]
00425806  83 0C 86 20               OR dword ptr [ESI + EAX*0x4],0x20
0042580A  83 4C 82 FC 02            OR dword ptr [EDX + EAX*0x4 + -0x4],0x2
LAB_0042580f:
0042580F  8B B5 50 FF FF FF         MOV ESI,dword ptr [EBP + 0xffffff50]
00425815  85 75 D0                  TEST dword ptr [EBP + -0x30],ESI
00425818  74 19                     JZ 0x00425833
0042581A  8B B5 48 FF FF FF         MOV ESI,dword ptr [EBP + 0xffffff48]
00425820  3A 0C 30                  CMP CL,byte ptr [EAX + ESI*0x1]
00425823  75 0E                     JNZ 0x00425833
00425825  8B 8D 28 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff28]
0042582B  83 0C 81 40               OR dword ptr [ECX + EAX*0x4],0x40
0042582F  83 0C 82 04               OR dword ptr [EDX + EAX*0x4],0x4
LAB_00425833:
00425833  8B 83 7C 03 00 00         MOV EAX,dword ptr [EBX + 0x37c]
00425839  01 45 C8                  ADD dword ptr [EBP + -0x38],EAX
0042583C  8B 85 54 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff54]
00425842  C1 E0 02                  SHL EAX,0x2
00425845  01 85 28 FF FF FF         ADD dword ptr [EBP + 0xffffff28],EAX
0042584B  03 D0                     ADD EDX,EAX
0042584D  89 95 D4 FE FF FF         MOV dword ptr [EBP + 0xfffffed4],EDX
00425853  8B 45 DC                  MOV EAX,dword ptr [EBP + -0x24]
00425856  01 85 CC FE FF FF         ADD dword ptr [EBP + 0xfffffecc],EAX
0042585C  03 F8                     ADD EDI,EAX
0042585E  89 BD D0 FE FF FF         MOV dword ptr [EBP + 0xfffffed0],EDI
00425864  FF 8D C4 FE FF FF         DEC dword ptr [EBP + 0xfffffec4]
0042586A  0F 85 B6 FC FF FF         JNZ 0x00425526
LAB_00425870:
00425870  8B 9D 28 FF FF FF         MOV EBX,dword ptr [EBP + 0xffffff28]
00425876  8B 8D 30 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff30]
0042587C  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
0042587F  8D 4C 11 FF               LEA ECX,[ECX + EDX*0x1 + -0x1]
00425883  0F AF 4D DC               IMUL ECX,dword ptr [EBP + -0x24]
00425887  8B BD 40 FF FF FF         MOV EDI,dword ptr [EBP + 0xffffff40]
0042588D  8B C7                     MOV EAX,EDI
0042588F  C1 F8 03                  SAR EAX,0x3
00425892  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00425895  03 D1                     ADD EDX,ECX
00425897  03 C2                     ADD EAX,EDX
00425899  33 C9                     XOR ECX,ECX
0042589B  8A 08                     MOV CL,byte ptr [EAX]
0042589D  8B F1                     MOV ESI,ECX
0042589F  40                        INC EAX
004258A0  8B CF                     MOV ECX,EDI
004258A2  83 E1 07                  AND ECX,0x7
004258A5  BF 80 00 00 00            MOV EDI,0x80
004258AA  D3 FF                     SAR EDI,CL
004258AC  BA 40 00 00 00            MOV EDX,0x40
004258B1  D3 FA                     SAR EDX,CL
004258B3  85 D2                     TEST EDX,EDX
004258B5  75 14                     JNZ 0x004258cb
004258B7  BF 00 01 00 00            MOV EDI,0x100
004258BC  BA 80 00 00 00            MOV EDX,0x80
004258C1  C1 E6 08                  SHL ESI,0x8
004258C4  33 C9                     XOR ECX,ECX
004258C6  8A 08                     MOV CL,byte ptr [EAX]
004258C8  0B F1                     OR ESI,ECX
004258CA  40                        INC EAX
LAB_004258cb:
004258CB  85 FE                     TEST ESI,EDI
004258CD  74 1E                     JZ 0x004258ed
004258CF  83 7D 18 01               CMP dword ptr [EBP + 0x18],0x1
004258D3  7E 18                     JLE 0x004258ed
004258D5  85 D6                     TEST ESI,EDX
004258D7  74 14                     JZ 0x004258ed
004258D9  8B 4D C8                  MOV ECX,dword ptr [EBP + -0x38]
004258DC  8A 09                     MOV CL,byte ptr [ECX]
004258DE  8B 7D C8                  MOV EDI,dword ptr [EBP + -0x38]
004258E1  3A 4F 01                  CMP CL,byte ptr [EDI + 0x1]
004258E4  75 07                     JNZ 0x004258ed
004258E6  83 0B 01                  OR dword ptr [EBX],0x1
004258E9  83 4B 04 10               OR dword ptr [EBX + 0x4],0x10
LAB_004258ed:
004258ED  BF 01 00 00 00            MOV EDI,0x1
004258F2  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
004258F5  49                        DEC ECX
004258F6  89 8D D8 FE FF FF         MOV dword ptr [EBP + 0xfffffed8],ECX
004258FC  3B CF                     CMP ECX,EDI
004258FE  7E 62                     JLE 0x00425962
00425900  8B 8D 28 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff28]
00425906  8D 59 04                  LEA EBX,[ECX + 0x4]
00425909  89 9D B8 FE FF FF         MOV dword ptr [EBP + 0xfffffeb8],EBX
LAB_0042590f:
0042590F  8B CA                     MOV ECX,EDX
00425911  D1 FA                     SAR EDX,0x1
00425913  75 1A                     JNZ 0x0042592f
00425915  B9 00 01 00 00            MOV ECX,0x100
0042591A  BA 80 00 00 00            MOV EDX,0x80
0042591F  C1 E6 08                  SHL ESI,0x8
00425922  33 DB                     XOR EBX,EBX
00425924  8A 18                     MOV BL,byte ptr [EAX]
00425926  0B F3                     OR ESI,EBX
00425928  40                        INC EAX
00425929  8B 9D B8 FE FF FF         MOV EBX,dword ptr [EBP + 0xfffffeb8]
LAB_0042592f:
0042592F  85 CE                     TEST ESI,ECX
00425931  74 1D                     JZ 0x00425950
00425933  85 D6                     TEST ESI,EDX
00425935  74 19                     JZ 0x00425950
00425937  8B 4D C8                  MOV ECX,dword ptr [EBP + -0x38]
0042593A  8A 1C 0F                  MOV BL,byte ptr [EDI + ECX*0x1]
0042593D  3A 5C 0F 01               CMP BL,byte ptr [EDI + ECX*0x1 + 0x1]
00425941  8B 9D B8 FE FF FF         MOV EBX,dword ptr [EBP + 0xfffffeb8]
00425947  75 07                     JNZ 0x00425950
00425949  83 0B 01                  OR dword ptr [EBX],0x1
0042594C  83 4B 04 10               OR dword ptr [EBX + 0x4],0x10
LAB_00425950:
00425950  47                        INC EDI
00425951  83 C3 04                  ADD EBX,0x4
00425954  89 9D B8 FE FF FF         MOV dword ptr [EBP + 0xfffffeb8],EBX
0042595A  3B BD D8 FE FF FF         CMP EDI,dword ptr [EBP + 0xfffffed8]
00425960  7C AD                     JL 0x0042590f
LAB_00425962:
00425962  8B 95 4C FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff4c]
00425968  4A                        DEC EDX
00425969  89 95 B4 FE FF FF         MOV dword ptr [EBP + 0xfffffeb4],EDX
LAB_0042596f:
0042596F  8B B5 54 FF FF FF         MOV ESI,dword ptr [EBP + 0xffffff54]
00425975  8B 55 A0                  MOV EDX,dword ptr [EBP + -0x60]
00425978  33 DB                     XOR EBX,EBX
0042597A  8B 85 B4 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffeb4]
00425980  85 C0                     TEST EAX,EAX
00425982  7E 38                     JLE 0x004259bc
LAB_00425984:
00425984  33 FF                     XOR EDI,EDI
00425986  85 F6                     TEST ESI,ESI
00425988  7E 1C                     JLE 0x004259a6
0042598A  8B CA                     MOV ECX,EDX
LAB_0042598c:
0042598C  8B 01                     MOV EAX,dword ptr [ECX]
0042598E  85 C0                     TEST EAX,EAX
00425990  74 0C                     JZ 0x0042599e
00425992  F6 C4 02                  TEST AH,0x2
00425995  75 07                     JNZ 0x0042599e
00425997  83 E0 55                  AND EAX,0x55
0042599A  3C 55                     CMP AL,0x55
0042599C  75 08                     JNZ 0x004259a6
LAB_0042599e:
0042599E  47                        INC EDI
0042599F  83 C1 04                  ADD ECX,0x4
004259A2  3B FE                     CMP EDI,ESI
004259A4  7C E6                     JL 0x0042598c
LAB_004259a6:
004259A6  3B FE                     CMP EDI,ESI
004259A8  7C 1A                     JL 0x004259c4
004259AA  8D 04 B5 00 00 00 00      LEA EAX,[ESI*0x4 + 0x0]
004259B1  03 D0                     ADD EDX,EAX
004259B3  43                        INC EBX
004259B4  3B 9D B4 FE FF FF         CMP EBX,dword ptr [EBP + 0xfffffeb4]
004259BA  7C C8                     JL 0x00425984
LAB_004259bc:
004259BC  3B FE                     CMP EDI,ESI
004259BE  0F 8D 3C 0D 00 00         JGE 0x00426700
LAB_004259c4:
004259C4  8D 04 BA                  LEA EAX,[EDX + EDI*0x4]
004259C7  89 85 28 FF FF FF         MOV dword ptr [EBP + 0xffffff28],EAX
004259CD  8B 4D B0                  MOV ECX,dword ptr [EBP + -0x50]
004259D0  8D 14 0B                  LEA EDX,[EBX + ECX*0x1]
004259D3  8B 85 08 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff08]
004259D9  0F AF 90 7C 03 00 00      IMUL EDX,dword ptr [EAX + 0x37c]
004259E0  03 90 8C 03 00 00         ADD EDX,dword ptr [EAX + 0x38c]
004259E6  03 D7                     ADD EDX,EDI
004259E8  33 C0                     XOR EAX,EAX
004259EA  8B 4D BC                  MOV ECX,dword ptr [EBP + -0x44]
004259ED  8A 04 0A                  MOV AL,byte ptr [EDX + ECX*0x1]
004259F0  8B C8                     MOV ECX,EAX
004259F2  83 E1 0F                  AND ECX,0xf
004259F5  89 4D E0                  MOV dword ptr [EBP + -0x20],ECX
004259F8  25 80 00 00 00            AND EAX,0x80
004259FD  89 85 58 FF FF FF         MOV dword ptr [EBP + 0xffffff58],EAX
00425A03  8B B5 68 FF FF FF         MOV ESI,dword ptr [EBP + 0xffffff68]
00425A09  39 B5 34 FF FF FF         CMP dword ptr [EBP + 0xffffff34],ESI
00425A0F  7C 2B                     JL 0x00425a3c
00425A11  8D 54 76 1E               LEA EDX,[ESI + ESI*0x2 + 0x1e]
00425A15  C1 E2 02                  SHL EDX,0x2
00425A18  52                        PUSH EDX
00425A19  8B 85 5C FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff5c]
00425A1F  50                        PUSH EAX
00425A20  E8 2B 75 28 00            CALL 0x006acf50
00425A25  85 C0                     TEST EAX,EAX
00425A27  0F 84 61 0D 00 00         JZ 0x0042678e
00425A2D  89 85 5C FF FF FF         MOV dword ptr [EBP + 0xffffff5c],EAX
00425A33  83 C6 0A                  ADD ESI,0xa
00425A36  89 B5 68 FF FF FF         MOV dword ptr [EBP + 0xffffff68],ESI
LAB_00425a3c:
00425A3C  8B 85 34 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff34]
00425A42  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
00425A45  C1 E0 02                  SHL EAX,0x2
00425A48  89 85 B0 FE FF FF         MOV dword ptr [EBP + 0xfffffeb0],EAX
00425A4E  33 F6                     XOR ESI,ESI
00425A50  8B 8D 5C FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff5c]
00425A56  89 34 08                  MOV dword ptr [EAX + ECX*0x1],ESI
00425A59  89 B5 64 FF FF FF         MOV dword ptr [EBP + 0xffffff64],ESI
00425A5F  89 B5 74 FF FF FF         MOV dword ptr [EBP + 0xffffff74],ESI
00425A65  89 75 C0                  MOV dword ptr [EBP + -0x40],ESI
00425A68  C7 85 78 FF FF FF 10 00 00 00  MOV dword ptr [EBP + 0xffffff78],0x10
00425A72  8B 8D 28 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff28]
00425A78  8B 01                     MOV EAX,dword ptr [ECX]
00425A7A  89 45 B4                  MOV dword ptr [EBP + -0x4c],EAX
00425A7D  80 CC 01                  OR AH,0x1
00425A80  89 01                     MOV dword ptr [ECX],EAX
LAB_00425a82:
00425A82  81 BD 74 FF FF FF C8 00 00 00  CMP dword ptr [EBP + 0xffffff74],0xc8
00425A8C  0F 8F 92 0C 00 00         JG 0x00426724
00425A92  8B 55 C0                  MOV EDX,dword ptr [EBP + -0x40]
00425A95  4A                        DEC EDX
00425A96  3B F2                     CMP ESI,EDX
00425A98  7C 3E                     JL 0x00425ad8
00425A9A  8B 45 C0                  MOV EAX,dword ptr [EBP + -0x40]
00425A9D  8D 0C C5 50 00 00 00      LEA ECX,[EAX*0x8 + 0x50]
00425AA4  51                        PUSH ECX
00425AA5  8B 95 64 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff64]
00425AAB  52                        PUSH EDX
00425AAC  E8 9F 74 28 00            CALL 0x006acf50
00425AB1  89 85 64 FF FF FF         MOV dword ptr [EBP + 0xffffff64],EAX
00425AB7  85 C0                     TEST EAX,EAX
00425AB9  0F 84 CF 0C 00 00         JZ 0x0042678e
00425ABF  8B 8D 5C FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff5c]
00425AC5  8B 95 B0 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffeb0]
00425ACB  89 44 0A 08               MOV dword ptr [EDX + ECX*0x1 + 0x8],EAX
00425ACF  8B 45 C0                  MOV EAX,dword ptr [EBP + -0x40]
00425AD2  83 C0 0A                  ADD EAX,0xa
00425AD5  89 45 C0                  MOV dword ptr [EBP + -0x40],EAX
LAB_00425ad8:
00425AD8  FF 85 74 FF FF FF         INC dword ptr [EBP + 0xffffff74]
00425ADE  8B 85 28 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff28]
00425AE4  8B 10                     MOV EDX,dword ptr [EAX]
00425AE6  80 CE 02                  OR DH,0x2
00425AE9  89 10                     MOV dword ptr [EAX],EDX
00425AEB  8B 8D 78 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff78]
00425AF1  8D 41 FF                  LEA EAX,[ECX + -0x1]
00425AF4  83 F8 7F                  CMP EAX,0x7f
00425AF7  0F 87 15 0B 00 00         JA 0x00426612
00425AFD  33 D2                     XOR EDX,EDX
00425AFF  8A 90 20 69 42 00         MOV DL,byte ptr [EAX + 0x426920]
switchD_00425b05::switchD:
00425B05  FF 24 95 FC 68 42 00      JMP dword ptr [EDX*0x4 + 0x4268fc]
switchD_00425b05::caseD_10:
00425B0C  8A 45 B4                  MOV AL,byte ptr [EBP + -0x4c]
00425B0F  A8 08                     TEST AL,0x8
00425B11  0F 85 22 08 00 00         JNZ 0x00426339
00425B17  A8 10                     TEST AL,0x10
00425B19  74 5F                     JZ 0x00425b7a
00425B1B  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
00425B1E  39 45 A4                  CMP dword ptr [EBP + -0x5c],EAX
00425B21  7C 4A                     JL 0x00425b6d
00425B23  85 DB                     TEST EBX,EBX
00425B25  7E 46                     JLE 0x00425b6d
00425B27  8B 8D 28 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff28]
00425B2D  8B 95 54 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff54]
00425B33  8D 04 95 00 00 00 00      LEA EAX,[EDX*0x4 + 0x0]
00425B3A  2B C8                     SUB ECX,EAX
00425B3C  8B 01                     MOV EAX,dword ptr [ECX]
00425B3E  85 C0                     TEST EAX,EAX
00425B40  74 2B                     JZ 0x00425b6d
00425B42  A8 01                     TEST AL,0x1
00425B44  75 27                     JNZ 0x00425b6d
00425B46  6A FF                     PUSH -0x1
00425B48  6A 02                     PUSH 0x2
00425B4A  8B 45 B0                  MOV EAX,dword ptr [EBP + -0x50]
00425B4D  8D 0C 03                  LEA ECX,[EBX + EAX*0x1]
00425B50  51                        PUSH ECX
00425B51  8B 55 BC                  MOV EDX,dword ptr [EBP + -0x44]
00425B54  8D 04 17                  LEA EAX,[EDI + EDX*0x1]
00425B57  50                        PUSH EAX
00425B58  56                        PUSH ESI
00425B59  8B 8D 64 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff64]
00425B5F  51                        PUSH ECX
00425B60  8B 8D 08 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff08]
00425B66  E8 A5 F4 FD FF            CALL 0x00405010
00425B6B  8B F0                     MOV ESI,EAX
LAB_00425b6d:
00425B6D  83 AD 28 FF FF FF 04      SUB dword ptr [EBP + 0xffffff28],0x4
00425B74  4F                        DEC EDI
00425B75  E9 98 0A 00 00            JMP 0x00426612
LAB_00425b7a:
00425B7A  A8 20                     TEST AL,0x20
00425B7C  74 41                     JZ 0x00425bbf
00425B7E  8B 55 E0                  MOV EDX,dword ptr [EBP + -0x20]
00425B81  39 55 A4                  CMP dword ptr [EBP + -0x5c],EDX
00425B84  7C 27                     JL 0x00425bad
00425B86  6A FF                     PUSH -0x1
00425B88  6A 00                     PUSH 0x0
LAB_00425b8a:
00425B8A  8B 45 B0                  MOV EAX,dword ptr [EBP + -0x50]
00425B8D  8D 0C 03                  LEA ECX,[EBX + EAX*0x1]
00425B90  51                        PUSH ECX
00425B91  8B 55 BC                  MOV EDX,dword ptr [EBP + -0x44]
00425B94  8D 04 17                  LEA EAX,[EDI + EDX*0x1]
00425B97  50                        PUSH EAX
00425B98  56                        PUSH ESI
00425B99  8B 8D 64 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff64]
00425B9F  51                        PUSH ECX
00425BA0  8B 8D 08 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff08]
00425BA6  E8 65 F4 FD FF            CALL 0x00405010
00425BAB  8B F0                     MOV ESI,EAX
LAB_00425bad:
00425BAD  8B 95 54 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff54]
00425BB3  8D 04 95 00 00 00 00      LEA EAX,[EDX*0x4 + 0x0]
00425BBA  E9 58 08 00 00            JMP 0x00426417
LAB_00425bbf:
00425BBF  A8 40                     TEST AL,0x40
00425BC1  74 15                     JZ 0x00425bd8
LAB_00425bc3:
00425BC3  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
00425BC6  39 45 A4                  CMP dword ptr [EBP + -0x5c],EAX
00425BC9  0F 8C 94 02 00 00         JL 0x00425e63
00425BCF  6A FF                     PUSH -0x1
00425BD1  6A 00                     PUSH 0x0
00425BD3  E9 68 02 00 00            JMP 0x00425e40
LAB_00425bd8:
00425BD8  A8 80                     TEST AL,0x80
00425BDA  74 15                     JZ 0x00425bf1
LAB_00425bdc:
00425BDC  8B 4D E0                  MOV ECX,dword ptr [EBP + -0x20]
00425BDF  39 4D A4                  CMP dword ptr [EBP + -0x5c],ECX
00425BE2  0F 8C 96 04 00 00         JL 0x0042607e
00425BE8  6A 01                     PUSH 0x1
00425BEA  6A 00                     PUSH 0x0
00425BEC  E9 6A 04 00 00            JMP 0x0042605b
LAB_00425bf1:
00425BF1  A8 01                     TEST AL,0x1
00425BF3  0F 84 19 0A 00 00         JZ 0x00426612
LAB_00425bf9:
00425BF9  8B 4D E0                  MOV ECX,dword ptr [EBP + -0x20]
00425BFC  39 4D A4                  CMP dword ptr [EBP + -0x5c],ECX
00425BFF  0F 8C C7 04 00 00         JL 0x004260cc
00425C05  6A 01                     PUSH 0x1
00425C07  6A 00                     PUSH 0x0
00425C09  E9 9B 04 00 00            JMP 0x004260a9
switchD_00425b05::caseD_20:
00425C0E  8A 45 B4                  MOV AL,byte ptr [EBP + -0x4c]
00425C11  A8 08                     TEST AL,0x8
00425C13  74 15                     JZ 0x00425c2a
00425C15  8B 4D E0                  MOV ECX,dword ptr [EBP + -0x20]
00425C18  39 4D A4                  CMP dword ptr [EBP + -0x5c],ECX
00425C1B  0F 8C B7 05 00 00         JL 0x004261d8
00425C21  6A FF                     PUSH -0x1
00425C23  6A 00                     PUSH 0x0
00425C25  E9 8B 05 00 00            JMP 0x004261b5
LAB_00425c2a:
00425C2A  A8 10                     TEST AL,0x10
00425C2C  74 15                     JZ 0x00425c43
00425C2E  8B 4D E0                  MOV ECX,dword ptr [EBP + -0x20]
00425C31  39 4D A4                  CMP dword ptr [EBP + -0x5c],ECX
00425C34  0F 8C 8A 07 00 00         JL 0x004263c4
00425C3A  6A FF                     PUSH -0x1
00425C3C  6A 00                     PUSH 0x0
00425C3E  E9 D2 05 00 00            JMP 0x00426215
LAB_00425c43:
00425C43  A8 20                     TEST AL,0x20
00425C45  74 68                     JZ 0x00425caf
00425C47  8B 4D E0                  MOV ECX,dword ptr [EBP + -0x20]
00425C4A  39 4D A4                  CMP dword ptr [EBP + -0x5c],ECX
00425C4D  7C 3C                     JL 0x00425c8b
00425C4F  85 FF                     TEST EDI,EDI
00425C51  7E 38                     JLE 0x00425c8b
00425C53  8B 95 28 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff28]
00425C59  8B 42 FC                  MOV EAX,dword ptr [EDX + -0x4]
00425C5C  85 C0                     TEST EAX,EAX
00425C5E  74 2B                     JZ 0x00425c8b
00425C60  A8 02                     TEST AL,0x2
00425C62  75 27                     JNZ 0x00425c8b
00425C64  6A FF                     PUSH -0x1
00425C66  6A 00                     PUSH 0x0
00425C68  8B 45 B0                  MOV EAX,dword ptr [EBP + -0x50]
00425C6B  8D 0C 03                  LEA ECX,[EBX + EAX*0x1]
00425C6E  51                        PUSH ECX
00425C6F  8B 55 BC                  MOV EDX,dword ptr [EBP + -0x44]
00425C72  8D 04 17                  LEA EAX,[EDI + EDX*0x1]
00425C75  50                        PUSH EAX
00425C76  56                        PUSH ESI
00425C77  8B 8D 64 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff64]
00425C7D  51                        PUSH ECX
00425C7E  8B 8D 08 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff08]
00425C84  E8 87 F3 FD FF            CALL 0x00405010
00425C89  8B F0                     MOV ESI,EAX
LAB_00425c8b:
00425C8B  8B 95 54 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff54]
00425C91  8D 04 95 00 00 00 00      LEA EAX,[EDX*0x4 + 0x0]
00425C98  8B 8D 28 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff28]
00425C9E  8D 54 01 FC               LEA EDX,[ECX + EAX*0x1 + -0x4]
00425CA2  89 95 28 FF FF FF         MOV dword ptr [EBP + 0xffffff28],EDX
00425CA8  4F                        DEC EDI
00425CA9  43                        INC EBX
00425CAA  E9 63 09 00 00            JMP 0x00426612
LAB_00425caf:
00425CAF  A8 40                     TEST AL,0x40
00425CB1  0F 85 0C FF FF FF         JNZ 0x00425bc3
00425CB7  A8 80                     TEST AL,0x80
00425CB9  0F 85 1D FF FF FF         JNZ 0x00425bdc
00425CBF  A8 01                     TEST AL,0x1
00425CC1  0F 85 32 FF FF FF         JNZ 0x00425bf9
00425CC7  A8 02                     TEST AL,0x2
00425CC9  0F 84 43 09 00 00         JZ 0x00426612
00425CCF  8B 4D E0                  MOV ECX,dword ptr [EBP + -0x20]
00425CD2  39 4D A4                  CMP dword ptr [EBP + -0x5c],ECX
00425CD5  0F 8C C7 05 00 00         JL 0x004262a2
00425CDB  6A 03                     PUSH 0x3
00425CDD  6A 00                     PUSH 0x0
00425CDF  E9 9B 05 00 00            JMP 0x0042627f
switchD_00425b05::caseD_40:
00425CE4  8A 45 B4                  MOV AL,byte ptr [EBP + -0x4c]
00425CE7  A8 20                     TEST AL,0x20
00425CE9  74 15                     JZ 0x00425d00
00425CEB  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
00425CEE  39 45 A4                  CMP dword ptr [EBP + -0x5c],EAX
00425CF1  0F 8C 17 07 00 00         JL 0x0042640e
00425CF7  6A FF                     PUSH -0x1
00425CF9  6A 00                     PUSH 0x0
00425CFB  E9 EB 06 00 00            JMP 0x004263eb
LAB_00425d00:
00425D00  A8 40                     TEST AL,0x40
00425D02  74 5D                     JZ 0x00425d61
00425D04  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
00425D07  39 45 A4                  CMP dword ptr [EBP + -0x5c],EAX
00425D0A  7C 3C                     JL 0x00425d48
00425D0C  85 FF                     TEST EDI,EDI
00425D0E  7E 38                     JLE 0x00425d48
00425D10  8B 8D 28 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff28]
00425D16  8B 41 FC                  MOV EAX,dword ptr [ECX + -0x4]
00425D19  85 C0                     TEST EAX,EAX
00425D1B  74 2B                     JZ 0x00425d48
00425D1D  A8 04                     TEST AL,0x4
00425D1F  75 27                     JNZ 0x00425d48
00425D21  6A FF                     PUSH -0x1
00425D23  6A 00                     PUSH 0x0
00425D25  8B 55 B0                  MOV EDX,dword ptr [EBP + -0x50]
00425D28  8D 04 13                  LEA EAX,[EBX + EDX*0x1]
00425D2B  50                        PUSH EAX
00425D2C  8B 4D BC                  MOV ECX,dword ptr [EBP + -0x44]
00425D2F  8D 14 0F                  LEA EDX,[EDI + ECX*0x1]
00425D32  52                        PUSH EDX
00425D33  56                        PUSH ESI
00425D34  8B 85 64 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff64]
00425D3A  50                        PUSH EAX
00425D3B  8B 8D 08 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff08]
00425D41  E8 CA F2 FD FF            CALL 0x00405010
00425D46  8B F0                     MOV ESI,EAX
LAB_00425d48:
00425D48  8B 8D 54 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff54]
00425D4E  8D 04 8D 00 00 00 00      LEA EAX,[ECX*0x4 + 0x0]
00425D55  01 85 28 FF FF FF         ADD dword ptr [EBP + 0xffffff28],EAX
00425D5B  43                        INC EBX
00425D5C  E9 B1 08 00 00            JMP 0x00426612
LAB_00425d61:
00425D61  A8 80                     TEST AL,0x80
00425D63  0F 85 43 02 00 00         JNZ 0x00425fac
00425D69  A8 01                     TEST AL,0x1
00425D6B  0F 85 7A 01 00 00         JNZ 0x00425eeb
00425D71  A8 02                     TEST AL,0x2
00425D73  74 56                     JZ 0x00425dcb
LAB_00425d75:
00425D75  8B 55 E0                  MOV EDX,dword ptr [EBP + -0x20]
00425D78  39 55 A4                  CMP dword ptr [EBP + -0x5c],EDX
00425D7B  7C 27                     JL 0x00425da4
00425D7D  6A 03                     PUSH 0x3
00425D7F  6A 01                     PUSH 0x1
00425D81  8B 45 B0                  MOV EAX,dword ptr [EBP + -0x50]
00425D84  8D 0C 03                  LEA ECX,[EBX + EAX*0x1]
00425D87  51                        PUSH ECX
00425D88  8B 55 BC                  MOV EDX,dword ptr [EBP + -0x44]
00425D8B  8D 04 17                  LEA EAX,[EDI + EDX*0x1]
00425D8E  50                        PUSH EAX
00425D8F  56                        PUSH ESI
00425D90  8B 8D 64 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff64]
00425D96  51                        PUSH ECX
00425D97  8B 8D 08 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff08]
00425D9D  E8 6E F2 FD FF            CALL 0x00405010
00425DA2  8B F0                     MOV ESI,EAX
LAB_00425da4:
00425DA4  BA 04 00 00 00            MOV EDX,0x4
00425DA9  8B 85 54 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff54]
00425DAF  C1 E0 02                  SHL EAX,0x2
00425DB2  2B D0                     SUB EDX,EAX
00425DB4  01 95 28 FF FF FF         ADD dword ptr [EBP + 0xffffff28],EDX
00425DBA  47                        INC EDI
00425DBB  4B                        DEC EBX
00425DBC  C7 85 78 FF FF FF 02 00 00 00  MOV dword ptr [EBP + 0xffffff78],0x2
00425DC6  E9 47 08 00 00            JMP 0x00426612
LAB_00425dcb:
00425DCB  A8 04                     TEST AL,0x4
00425DCD  0F 84 3F 08 00 00         JZ 0x00426612
LAB_00425dd3:
00425DD3  8B 4D E0                  MOV ECX,dword ptr [EBP + -0x20]
00425DD6  39 4D A4                  CMP dword ptr [EBP + -0x5c],ECX
00425DD9  7C 27                     JL 0x00425e02
00425DDB  6A 03                     PUSH 0x3
00425DDD  6A 01                     PUSH 0x1
00425DDF  8B 55 B0                  MOV EDX,dword ptr [EBP + -0x50]
00425DE2  8D 04 13                  LEA EAX,[EBX + EDX*0x1]
00425DE5  50                        PUSH EAX
00425DE6  8B 4D BC                  MOV ECX,dword ptr [EBP + -0x44]
00425DE9  8D 14 0F                  LEA EDX,[EDI + ECX*0x1]
00425DEC  52                        PUSH EDX
00425DED  56                        PUSH ESI
00425DEE  8B 85 64 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff64]
00425DF4  50                        PUSH EAX
00425DF5  8B 8D 08 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff08]
00425DFB  E8 10 F2 FD FF            CALL 0x00405010
00425E00  8B F0                     MOV ESI,EAX
LAB_00425e02:
00425E02  8B 8D 54 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff54]
00425E08  8D 04 8D 00 00 00 00      LEA EAX,[ECX*0x4 + 0x0]
00425E0F  E9 7B 03 00 00            JMP 0x0042618f
switchD_00425b05::caseD_80:
00425E14  8A 45 B4                  MOV AL,byte ptr [EBP + -0x4c]
00425E17  A8 20                     TEST AL,0x20
00425E19  74 15                     JZ 0x00425e30
00425E1B  8B 55 E0                  MOV EDX,dword ptr [EBP + -0x20]
00425E1E  39 55 A4                  CMP dword ptr [EBP + -0x5c],EDX
00425E21  0F 8C 86 FD FF FF         JL 0x00425bad
00425E27  6A FF                     PUSH -0x1
00425E29  6A 01                     PUSH 0x1
00425E2B  E9 5A FD FF FF            JMP 0x00425b8a
LAB_00425e30:
00425E30  A8 40                     TEST AL,0x40
00425E32  74 4E                     JZ 0x00425e82
00425E34  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
00425E37  39 45 A4                  CMP dword ptr [EBP + -0x5c],EAX
00425E3A  7C 27                     JL 0x00425e63
00425E3C  6A FF                     PUSH -0x1
00425E3E  6A 01                     PUSH 0x1
LAB_00425e40:
00425E40  8B 4D B0                  MOV ECX,dword ptr [EBP + -0x50]
00425E43  8D 14 0B                  LEA EDX,[EBX + ECX*0x1]
00425E46  52                        PUSH EDX
00425E47  8B 45 BC                  MOV EAX,dword ptr [EBP + -0x44]
00425E4A  8D 0C 07                  LEA ECX,[EDI + EAX*0x1]
00425E4D  51                        PUSH ECX
00425E4E  56                        PUSH ESI
00425E4F  8B 95 64 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff64]
00425E55  52                        PUSH EDX
00425E56  8B 8D 08 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff08]
00425E5C  E8 AF F1 FD FF            CALL 0x00405010
00425E61  8B F0                     MOV ESI,EAX
LAB_00425e63:
00425E63  8B 85 54 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff54]
00425E69  C1 E0 02                  SHL EAX,0x2
LAB_00425e6c:
00425E6C  01 85 28 FF FF FF         ADD dword ptr [EBP + 0xffffff28],EAX
00425E72  43                        INC EBX
00425E73  C7 85 78 FF FF FF 40 00 00 00  MOV dword ptr [EBP + 0xffffff78],0x40
00425E7D  E9 90 07 00 00            JMP 0x00426612
LAB_00425e82:
00425E82  A8 80                     TEST AL,0x80
00425E84  74 61                     JZ 0x00425ee7
00425E86  8B 4D E0                  MOV ECX,dword ptr [EBP + -0x20]
00425E89  39 4D A4                  CMP dword ptr [EBP + -0x5c],ECX
00425E8C  7C 3C                     JL 0x00425eca
00425E8E  85 FF                     TEST EDI,EDI
00425E90  7E 38                     JLE 0x00425eca
00425E92  8B 95 28 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff28]
00425E98  8B 42 FC                  MOV EAX,dword ptr [EDX + -0x4]
00425E9B  85 C0                     TEST EAX,EAX
00425E9D  74 2B                     JZ 0x00425eca
00425E9F  A8 08                     TEST AL,0x8
00425EA1  75 27                     JNZ 0x00425eca
00425EA3  6A FF                     PUSH -0x1
00425EA5  6A 01                     PUSH 0x1
00425EA7  8B 45 B0                  MOV EAX,dword ptr [EBP + -0x50]
00425EAA  8D 0C 03                  LEA ECX,[EBX + EAX*0x1]
00425EAD  51                        PUSH ECX
00425EAE  8B 55 BC                  MOV EDX,dword ptr [EBP + -0x44]
00425EB1  8D 04 17                  LEA EAX,[EDI + EDX*0x1]
00425EB4  50                        PUSH EAX
00425EB5  56                        PUSH ESI
00425EB6  8B 8D 64 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff64]
00425EBC  51                        PUSH ECX
00425EBD  8B 8D 08 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff08]
00425EC3  E8 48 F1 FD FF            CALL 0x00405010
00425EC8  8B F0                     MOV ESI,EAX
LAB_00425eca:
00425ECA  8B 95 28 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff28]
00425ED0  8B 85 54 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff54]
00425ED6  8D 4C 82 04               LEA ECX,[EDX + EAX*0x4 + 0x4]
00425EDA  89 8D 28 FF FF FF         MOV dword ptr [EBP + 0xffffff28],ECX
00425EE0  47                        INC EDI
00425EE1  43                        INC EBX
00425EE2  E9 2B 07 00 00            JMP 0x00426612
LAB_00425ee7:
00425EE7  A8 01                     TEST AL,0x1
00425EE9  74 4A                     JZ 0x00425f35
LAB_00425eeb:
00425EEB  8B 55 E0                  MOV EDX,dword ptr [EBP + -0x20]
00425EEE  39 55 A4                  CMP dword ptr [EBP + -0x5c],EDX
00425EF1  0F 8C D5 01 00 00         JL 0x004260cc
00425EF7  6A FF                     PUSH -0x1
00425EF9  6A 01                     PUSH 0x1
00425EFB  8B 45 B0                  MOV EAX,dword ptr [EBP + -0x50]
00425EFE  8D 0C 03                  LEA ECX,[EBX + EAX*0x1]
00425F01  51                        PUSH ECX
00425F02  8B 55 BC                  MOV EDX,dword ptr [EBP + -0x44]
00425F05  8D 04 17                  LEA EAX,[EDI + EDX*0x1]
00425F08  50                        PUSH EAX
00425F09  56                        PUSH ESI
00425F0A  8B 8D 64 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff64]
00425F10  51                        PUSH ECX
00425F11  8B 8D 08 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff08]
00425F17  E8 F4 F0 FD FF            CALL 0x00405010
00425F1C  8B F0                     MOV ESI,EAX
00425F1E  83 85 28 FF FF FF 04      ADD dword ptr [EBP + 0xffffff28],0x4
00425F25  47                        INC EDI
00425F26  C7 85 78 FF FF FF 01 00 00 00  MOV dword ptr [EBP + 0xffffff78],0x1
00425F30  E9 DD 06 00 00            JMP 0x00426612
LAB_00425f35:
00425F35  A8 02                     TEST AL,0x2
00425F37  0F 85 38 FE FF FF         JNZ 0x00425d75
00425F3D  A8 04                     TEST AL,0x4
00425F3F  0F 85 8E FE FF FF         JNZ 0x00425dd3
00425F45  A8 08                     TEST AL,0x8
00425F47  0F 84 C5 06 00 00         JZ 0x00426612
00425F4D  8B 55 E0                  MOV EDX,dword ptr [EBP + -0x20]
00425F50  39 55 A4                  CMP dword ptr [EBP + -0x5c],EDX
00425F53  7C 27                     JL 0x00425f7c
00425F55  6A 02                     PUSH 0x2
00425F57  6A 01                     PUSH 0x1
00425F59  8B 45 B0                  MOV EAX,dword ptr [EBP + -0x50]
00425F5C  8D 0C 03                  LEA ECX,[EBX + EAX*0x1]
00425F5F  51                        PUSH ECX
00425F60  8B 55 BC                  MOV EDX,dword ptr [EBP + -0x44]
00425F63  8D 04 17                  LEA EAX,[EDI + EDX*0x1]
00425F66  50                        PUSH EAX
00425F67  56                        PUSH ESI
00425F68  8B 8D 64 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff64]
00425F6E  51                        PUSH ECX
00425F6F  8B 8D 08 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff08]
00425F75  E8 96 F0 FD FF            CALL 0x00405010
00425F7A  8B F0                     MOV ESI,EAX
LAB_00425f7c:
00425F7C  83 CA FF                  OR EDX,0xffffffff
00425F7F  2B 95 54 FF FF FF         SUB EDX,dword ptr [EBP + 0xffffff54]
00425F85  8B 85 28 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff28]
00425F8B  8D 0C 90                  LEA ECX,[EAX + EDX*0x4]
00425F8E  89 8D 28 FF FF FF         MOV dword ptr [EBP + 0xffffff28],ECX
00425F94  4F                        DEC EDI
00425F95  4B                        DEC EBX
00425F96  C7 85 78 FF FF FF 08 00 00 00  MOV dword ptr [EBP + 0xffffff78],0x8
00425FA0  E9 6D 06 00 00            JMP 0x00426612
switchD_00425b05::caseD_1:
00425FA5  8A 45 B4                  MOV AL,byte ptr [EBP + -0x4c]
00425FA8  A8 80                     TEST AL,0x80
00425FAA  74 15                     JZ 0x00425fc1
LAB_00425fac:
00425FAC  8B 55 E0                  MOV EDX,dword ptr [EBP + -0x20]
00425FAF  39 55 A4                  CMP dword ptr [EBP + -0x5c],EDX
00425FB2  0F 8C 38 06 00 00         JL 0x004265f0
00425FB8  6A FF                     PUSH -0x1
00425FBA  6A 01                     PUSH 0x1
00425FBC  E9 0C 06 00 00            JMP 0x004265cd
LAB_00425fc1:
00425FC1  A8 01                     TEST AL,0x1
00425FC3  74 5E                     JZ 0x00426023
00425FC5  8B 55 E0                  MOV EDX,dword ptr [EBP + -0x20]
00425FC8  39 55 A4                  CMP dword ptr [EBP + -0x5c],EDX
00425FCB  7C 49                     JL 0x00426016
00425FCD  3B 9D B4 FE FF FF         CMP EBX,dword ptr [EBP + 0xfffffeb4]
00425FD3  7D 41                     JGE 0x00426016
00425FD5  8B 85 54 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff54]
00425FDB  C1 E0 02                  SHL EAX,0x2
00425FDE  8B 8D 28 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff28]
00425FE4  8B 04 08                  MOV EAX,dword ptr [EAX + ECX*0x1]
00425FE7  85 C0                     TEST EAX,EAX
00425FE9  74 2B                     JZ 0x00426016
00425FEB  A8 10                     TEST AL,0x10
00425FED  75 27                     JNZ 0x00426016
00425FEF  6A FF                     PUSH -0x1
00425FF1  6A 01                     PUSH 0x1
00425FF3  8B 55 B0                  MOV EDX,dword ptr [EBP + -0x50]
00425FF6  8D 04 13                  LEA EAX,[EBX + EDX*0x1]
00425FF9  50                        PUSH EAX
00425FFA  8B 4D BC                  MOV ECX,dword ptr [EBP + -0x44]
00425FFD  8D 14 0F                  LEA EDX,[EDI + ECX*0x1]
00426000  52                        PUSH EDX
00426001  56                        PUSH ESI
00426002  8B 85 64 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff64]
00426008  50                        PUSH EAX
00426009  8B 8D 08 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff08]
0042600F  E8 FC EF FD FF            CALL 0x00405010
00426014  8B F0                     MOV ESI,EAX
LAB_00426016:
00426016  83 85 28 FF FF FF 04      ADD dword ptr [EBP + 0xffffff28],0x4
0042601D  47                        INC EDI
0042601E  E9 EF 05 00 00            JMP 0x00426612
LAB_00426023:
00426023  A8 02                     TEST AL,0x2
00426025  0F 85 48 02 00 00         JNZ 0x00426273
0042602B  A8 04                     TEST AL,0x4
0042602D  0F 85 24 01 00 00         JNZ 0x00426157
00426033  A8 08                     TEST AL,0x8
00426035  0F 85 6E 01 00 00         JNZ 0x004261a9
0042603B  A8 10                     TEST AL,0x10
0042603D  0F 84 CF 05 00 00         JZ 0x00426612
00426043  E9 BD 01 00 00            JMP 0x00426205
switchD_00425b05::caseD_2:
00426048  8A 45 B4                  MOV AL,byte ptr [EBP + -0x4c]
0042604B  A8 80                     TEST AL,0x80
0042604D  74 4A                     JZ 0x00426099
0042604F  8B 4D E0                  MOV ECX,dword ptr [EBP + -0x20]
00426052  39 4D A4                  CMP dword ptr [EBP + -0x5c],ECX
00426055  7C 27                     JL 0x0042607e
00426057  6A FF                     PUSH -0x1
00426059  6A 03                     PUSH 0x3
LAB_0042605b:
0042605B  8B 55 B0                  MOV EDX,dword ptr [EBP + -0x50]
0042605E  8D 04 13                  LEA EAX,[EBX + EDX*0x1]
00426061  50                        PUSH EAX
00426062  8B 4D BC                  MOV ECX,dword ptr [EBP + -0x44]
00426065  8D 14 0F                  LEA EDX,[EDI + ECX*0x1]
00426068  52                        PUSH EDX
00426069  56                        PUSH ESI
0042606A  8B 85 64 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff64]
00426070  50                        PUSH EAX
00426071  8B 8D 08 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff08]
00426077  E8 94 EF FD FF            CALL 0x00405010
0042607C  8B F0                     MOV ESI,EAX
LAB_0042607e:
0042607E  8B 8D 28 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff28]
00426084  8B 95 54 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff54]
0042608A  8D 44 91 04               LEA EAX,[ECX + EDX*0x4 + 0x4]
0042608E  89 85 28 FF FF FF         MOV dword ptr [EBP + 0xffffff28],EAX
00426094  E9 6D 05 00 00            JMP 0x00426606
LAB_00426099:
00426099  A8 01                     TEST AL,0x1
0042609B  74 46                     JZ 0x004260e3
0042609D  8B 4D E0                  MOV ECX,dword ptr [EBP + -0x20]
004260A0  39 4D A4                  CMP dword ptr [EBP + -0x5c],ECX
004260A3  7C 27                     JL 0x004260cc
004260A5  6A FF                     PUSH -0x1
004260A7  6A 03                     PUSH 0x3
LAB_004260a9:
004260A9  8B 55 B0                  MOV EDX,dword ptr [EBP + -0x50]
004260AC  8D 04 13                  LEA EAX,[EBX + EDX*0x1]
004260AF  50                        PUSH EAX
004260B0  8B 4D BC                  MOV ECX,dword ptr [EBP + -0x44]
004260B3  8D 14 0F                  LEA EDX,[EDI + ECX*0x1]
004260B6  52                        PUSH EDX
004260B7  56                        PUSH ESI
004260B8  8B 85 64 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff64]
004260BE  50                        PUSH EAX
004260BF  8B 8D 08 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff08]
004260C5  E8 46 EF FD FF            CALL 0x00405010
004260CA  8B F0                     MOV ESI,EAX
LAB_004260cc:
004260CC  83 85 28 FF FF FF 04      ADD dword ptr [EBP + 0xffffff28],0x4
004260D3  47                        INC EDI
004260D4  C7 85 78 FF FF FF 01 00 00 00  MOV dword ptr [EBP + 0xffffff78],0x1
004260DE  E9 2F 05 00 00            JMP 0x00426612
LAB_004260e3:
004260E3  A8 02                     TEST AL,0x2
004260E5  74 6C                     JZ 0x00426153
004260E7  8B 4D E0                  MOV ECX,dword ptr [EBP + -0x20]
004260EA  39 4D A4                  CMP dword ptr [EBP + -0x5c],ECX
004260ED  7C 43                     JL 0x00426132
004260EF  8B 95 54 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff54]
004260F5  4A                        DEC EDX
004260F6  3B FA                     CMP EDI,EDX
004260F8  7D 38                     JGE 0x00426132
004260FA  8B 85 28 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff28]
00426100  8B 40 04                  MOV EAX,dword ptr [EAX + 0x4]
00426103  85 C0                     TEST EAX,EAX
00426105  74 2B                     JZ 0x00426132
00426107  A8 20                     TEST AL,0x20
00426109  75 27                     JNZ 0x00426132
0042610B  6A FF                     PUSH -0x1
0042610D  6A 03                     PUSH 0x3
0042610F  8B 4D B0                  MOV ECX,dword ptr [EBP + -0x50]
00426112  8D 14 0B                  LEA EDX,[EBX + ECX*0x1]
00426115  52                        PUSH EDX
00426116  8B 45 BC                  MOV EAX,dword ptr [EBP + -0x44]
00426119  8D 0C 07                  LEA ECX,[EDI + EAX*0x1]
0042611C  51                        PUSH ECX
0042611D  56                        PUSH ESI
0042611E  8B 95 64 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff64]
00426124  52                        PUSH EDX
00426125  8B 8D 08 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff08]
0042612B  E8 E0 EE FD FF            CALL 0x00405010
00426130  8B F0                     MOV ESI,EAX
LAB_00426132:
00426132  B9 04 00 00 00            MOV ECX,0x4
00426137  8B 95 54 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff54]
0042613D  8D 04 95 00 00 00 00      LEA EAX,[EDX*0x4 + 0x0]
00426144  2B C8                     SUB ECX,EAX
00426146  01 8D 28 FF FF FF         ADD dword ptr [EBP + 0xffffff28],ECX
0042614C  47                        INC EDI
0042614D  4B                        DEC EBX
0042614E  E9 BF 04 00 00            JMP 0x00426612
LAB_00426153:
00426153  A8 04                     TEST AL,0x4
00426155  74 4E                     JZ 0x004261a5
LAB_00426157:
00426157  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
0042615A  39 45 A4                  CMP dword ptr [EBP + -0x5c],EAX
0042615D  7C 27                     JL 0x00426186
0042615F  6A FF                     PUSH -0x1
00426161  6A 03                     PUSH 0x3
LAB_00426163:
00426163  8B 4D B0                  MOV ECX,dword ptr [EBP + -0x50]
00426166  8D 14 0B                  LEA EDX,[EBX + ECX*0x1]
00426169  52                        PUSH EDX
0042616A  8B 45 BC                  MOV EAX,dword ptr [EBP + -0x44]
0042616D  8D 0C 07                  LEA ECX,[EDI + EAX*0x1]
00426170  51                        PUSH ECX
00426171  56                        PUSH ESI
00426172  8B 95 64 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff64]
00426178  52                        PUSH EDX
00426179  8B 8D 08 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff08]
0042617F  E8 8C EE FD FF            CALL 0x00405010
00426184  8B F0                     MOV ESI,EAX
LAB_00426186:
00426186  8B 85 54 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff54]
0042618C  C1 E0 02                  SHL EAX,0x2
LAB_0042618f:
0042618F  29 85 28 FF FF FF         SUB dword ptr [EBP + 0xffffff28],EAX
00426195  4B                        DEC EBX
00426196  C7 85 78 FF FF FF 04 00 00 00  MOV dword ptr [EBP + 0xffffff78],0x4
004261A0  E9 6D 04 00 00            JMP 0x00426612
LAB_004261a5:
004261A5  A8 08                     TEST AL,0x8
004261A7  74 58                     JZ 0x00426201
LAB_004261a9:
004261A9  8B 4D E0                  MOV ECX,dword ptr [EBP + -0x20]
004261AC  39 4D A4                  CMP dword ptr [EBP + -0x5c],ECX
004261AF  7C 27                     JL 0x004261d8
004261B1  6A 02                     PUSH 0x2
004261B3  6A 03                     PUSH 0x3
LAB_004261b5:
004261B5  8B 55 B0                  MOV EDX,dword ptr [EBP + -0x50]
004261B8  8D 04 13                  LEA EAX,[EBX + EDX*0x1]
004261BB  50                        PUSH EAX
004261BC  8B 4D BC                  MOV ECX,dword ptr [EBP + -0x44]
004261BF  8D 14 0F                  LEA EDX,[EDI + ECX*0x1]
004261C2  52                        PUSH EDX
004261C3  56                        PUSH ESI
004261C4  8B 85 64 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff64]
004261CA  50                        PUSH EAX
004261CB  8B 8D 08 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff08]
004261D1  E8 3A EE FD FF            CALL 0x00405010
004261D6  8B F0                     MOV ESI,EAX
LAB_004261d8:
004261D8  83 C9 FF                  OR ECX,0xffffffff
004261DB  2B 8D 54 FF FF FF         SUB ECX,dword ptr [EBP + 0xffffff54]
004261E1  8B 95 28 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff28]
004261E7  8D 04 8A                  LEA EAX,[EDX + ECX*0x4]
004261EA  89 85 28 FF FF FF         MOV dword ptr [EBP + 0xffffff28],EAX
004261F0  4F                        DEC EDI
004261F1  4B                        DEC EBX
004261F2  C7 85 78 FF FF FF 08 00 00 00  MOV dword ptr [EBP + 0xffffff78],0x8
004261FC  E9 11 04 00 00            JMP 0x00426612
LAB_00426201:
00426201  A8 10                     TEST AL,0x10
00426203  74 4A                     JZ 0x0042624f
LAB_00426205:
00426205  8B 4D E0                  MOV ECX,dword ptr [EBP + -0x20]
00426208  39 4D A4                  CMP dword ptr [EBP + -0x5c],ECX
0042620B  0F 8C B3 01 00 00         JL 0x004263c4
00426211  6A 02                     PUSH 0x2
00426213  6A 03                     PUSH 0x3
LAB_00426215:
00426215  8B 55 B0                  MOV EDX,dword ptr [EBP + -0x50]
00426218  8D 04 13                  LEA EAX,[EBX + EDX*0x1]
0042621B  50                        PUSH EAX
0042621C  8B 4D BC                  MOV ECX,dword ptr [EBP + -0x44]
0042621F  8D 14 0F                  LEA EDX,[EDI + ECX*0x1]
00426222  52                        PUSH EDX
00426223  56                        PUSH ESI
00426224  8B 85 64 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff64]
0042622A  50                        PUSH EAX
0042622B  8B 8D 08 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff08]
00426231  E8 DA ED FD FF            CALL 0x00405010
00426236  8B F0                     MOV ESI,EAX
00426238  83 AD 28 FF FF FF 04      SUB dword ptr [EBP + 0xffffff28],0x4
0042623F  4F                        DEC EDI
00426240  C7 85 78 FF FF FF 10 00 00 00  MOV dword ptr [EBP + 0xffffff78],0x10
0042624A  E9 C3 03 00 00            JMP 0x00426612
LAB_0042624f:
0042624F  A8 20                     TEST AL,0x20
00426251  0F 84 BB 03 00 00         JZ 0x00426612
00426257  8B 4D E0                  MOV ECX,dword ptr [EBP + -0x20]
0042625A  39 4D A4                  CMP dword ptr [EBP + -0x5c],ECX
0042625D  0F 8C E7 02 00 00         JL 0x0042654a
00426263  6A 00                     PUSH 0x0
00426265  6A 03                     PUSH 0x3
00426267  E9 BB 02 00 00            JMP 0x00426527
switchD_00425b05::caseD_4:
0042626C  8A 45 B4                  MOV AL,byte ptr [EBP + -0x4c]
0042626F  A8 02                     TEST AL,0x2
00426271  74 5A                     JZ 0x004262cd
LAB_00426273:
00426273  8B 4D E0                  MOV ECX,dword ptr [EBP + -0x20]
00426276  39 4D A4                  CMP dword ptr [EBP + -0x5c],ECX
00426279  7C 27                     JL 0x004262a2
0042627B  6A FF                     PUSH -0x1
0042627D  6A 03                     PUSH 0x3
LAB_0042627f:
0042627F  8B 55 B0                  MOV EDX,dword ptr [EBP + -0x50]
00426282  8D 04 13                  LEA EAX,[EBX + EDX*0x1]
00426285  50                        PUSH EAX
00426286  8B 4D BC                  MOV ECX,dword ptr [EBP + -0x44]
00426289  8D 14 0F                  LEA EDX,[EDI + ECX*0x1]
0042628C  52                        PUSH EDX
0042628D  56                        PUSH ESI
0042628E  8B 85 64 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff64]
00426294  50                        PUSH EAX
00426295  8B 8D 08 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff08]
0042629B  E8 70 ED FD FF            CALL 0x00405010
004262A0  8B F0                     MOV ESI,EAX
LAB_004262a2:
004262A2  B9 04 00 00 00            MOV ECX,0x4
004262A7  8B 95 54 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff54]
004262AD  8D 04 95 00 00 00 00      LEA EAX,[EDX*0x4 + 0x0]
004262B4  2B C8                     SUB ECX,EAX
004262B6  01 8D 28 FF FF FF         ADD dword ptr [EBP + 0xffffff28],ECX
004262BC  47                        INC EDI
004262BD  4B                        DEC EBX
004262BE  C7 85 78 FF FF FF 02 00 00 00  MOV dword ptr [EBP + 0xffffff78],0x2
004262C8  E9 45 03 00 00            JMP 0x00426612
LAB_004262cd:
004262CD  A8 04                     TEST AL,0x4
004262CF  74 64                     JZ 0x00426335
004262D1  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
004262D4  39 45 A4                  CMP dword ptr [EBP + -0x5c],EAX
004262D7  7C 43                     JL 0x0042631c
004262D9  8B 8D 54 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff54]
004262DF  49                        DEC ECX
004262E0  3B F9                     CMP EDI,ECX
004262E2  7D 38                     JGE 0x0042631c
004262E4  8B 95 28 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff28]
004262EA  8B 42 04                  MOV EAX,dword ptr [EDX + 0x4]
004262ED  85 C0                     TEST EAX,EAX
004262EF  74 2B                     JZ 0x0042631c
004262F1  A8 40                     TEST AL,0x40
004262F3  75 27                     JNZ 0x0042631c
004262F5  6A FF                     PUSH -0x1
004262F7  6A 03                     PUSH 0x3
004262F9  8B 45 B0                  MOV EAX,dword ptr [EBP + -0x50]
004262FC  8D 0C 03                  LEA ECX,[EBX + EAX*0x1]
004262FF  51                        PUSH ECX
00426300  8B 55 BC                  MOV EDX,dword ptr [EBP + -0x44]
00426303  8D 04 17                  LEA EAX,[EDI + EDX*0x1]
00426306  50                        PUSH EAX
00426307  56                        PUSH ESI
00426308  8B 8D 64 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff64]
0042630E  51                        PUSH ECX
0042630F  8B 8D 08 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff08]
00426315  E8 F6 EC FD FF            CALL 0x00405010
0042631A  8B F0                     MOV ESI,EAX
LAB_0042631c:
0042631C  8B 95 54 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff54]
00426322  8D 04 95 00 00 00 00      LEA EAX,[EDX*0x4 + 0x0]
00426329  29 85 28 FF FF FF         SUB dword ptr [EBP + 0xffffff28],EAX
0042632F  4B                        DEC EBX
00426330  E9 DD 02 00 00            JMP 0x00426612
LAB_00426335:
00426335  A8 08                     TEST AL,0x8
00426337  74 58                     JZ 0x00426391
LAB_00426339:
00426339  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
0042633C  39 45 A4                  CMP dword ptr [EBP + -0x5c],EAX
0042633F  7C 27                     JL 0x00426368
00426341  6A FF                     PUSH -0x1
00426343  6A 02                     PUSH 0x2
00426345  8B 4D B0                  MOV ECX,dword ptr [EBP + -0x50]
00426348  8D 14 0B                  LEA EDX,[EBX + ECX*0x1]
0042634B  52                        PUSH EDX
0042634C  8B 45 BC                  MOV EAX,dword ptr [EBP + -0x44]
0042634F  8D 0C 07                  LEA ECX,[EDI + EAX*0x1]
00426352  51                        PUSH ECX
00426353  56                        PUSH ESI
00426354  8B 95 64 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff64]
0042635A  52                        PUSH EDX
0042635B  8B 8D 08 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff08]
00426361  E8 AA EC FD FF            CALL 0x00405010
00426366  8B F0                     MOV ESI,EAX
LAB_00426368:
00426368  83 C8 FF                  OR EAX,0xffffffff
0042636B  2B 85 54 FF FF FF         SUB EAX,dword ptr [EBP + 0xffffff54]
00426371  8B 8D 28 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff28]
00426377  8D 14 81                  LEA EDX,[ECX + EAX*0x4]
0042637A  89 95 28 FF FF FF         MOV dword ptr [EBP + 0xffffff28],EDX
00426380  4F                        DEC EDI
00426381  4B                        DEC EBX
00426382  C7 85 78 FF FF FF 08 00 00 00  MOV dword ptr [EBP + 0xffffff78],0x8
0042638C  E9 81 02 00 00            JMP 0x00426612
LAB_00426391:
00426391  A8 10                     TEST AL,0x10
00426393  74 46                     JZ 0x004263db
00426395  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
00426398  39 45 A4                  CMP dword ptr [EBP + -0x5c],EAX
0042639B  7C 27                     JL 0x004263c4
0042639D  6A FF                     PUSH -0x1
0042639F  6A 02                     PUSH 0x2
004263A1  8B 4D B0                  MOV ECX,dword ptr [EBP + -0x50]
004263A4  8D 14 0B                  LEA EDX,[EBX + ECX*0x1]
004263A7  52                        PUSH EDX
004263A8  8B 45 BC                  MOV EAX,dword ptr [EBP + -0x44]
004263AB  8D 0C 07                  LEA ECX,[EDI + EAX*0x1]
004263AE  51                        PUSH ECX
004263AF  56                        PUSH ESI
004263B0  8B 95 64 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff64]
004263B6  52                        PUSH EDX
004263B7  8B 8D 08 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff08]
004263BD  E8 4E EC FD FF            CALL 0x00405010
004263C2  8B F0                     MOV ESI,EAX
LAB_004263c4:
004263C4  83 AD 28 FF FF FF 04      SUB dword ptr [EBP + 0xffffff28],0x4
004263CB  4F                        DEC EDI
004263CC  C7 85 78 FF FF FF 10 00 00 00  MOV dword ptr [EBP + 0xffffff78],0x10
004263D6  E9 37 02 00 00            JMP 0x00426612
LAB_004263db:
004263DB  A8 20                     TEST AL,0x20
004263DD  74 59                     JZ 0x00426438
004263DF  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
004263E2  39 45 A4                  CMP dword ptr [EBP + -0x5c],EAX
004263E5  7C 27                     JL 0x0042640e
004263E7  6A 00                     PUSH 0x0
004263E9  6A 02                     PUSH 0x2
LAB_004263eb:
004263EB  8B 4D B0                  MOV ECX,dword ptr [EBP + -0x50]
004263EE  8D 14 0B                  LEA EDX,[EBX + ECX*0x1]
004263F1  52                        PUSH EDX
004263F2  8B 45 BC                  MOV EAX,dword ptr [EBP + -0x44]
004263F5  8D 0C 07                  LEA ECX,[EDI + EAX*0x1]
004263F8  51                        PUSH ECX
004263F9  56                        PUSH ESI
004263FA  8B 95 64 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff64]
00426400  52                        PUSH EDX
00426401  8B 8D 08 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff08]
00426407  E8 04 EC FD FF            CALL 0x00405010
0042640C  8B F0                     MOV ESI,EAX
LAB_0042640e:
0042640E  8B 85 54 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff54]
00426414  C1 E0 02                  SHL EAX,0x2
LAB_00426417:
00426417  8B 8D 28 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff28]
0042641D  8D 54 01 FC               LEA EDX,[ECX + EAX*0x1 + -0x4]
00426421  89 95 28 FF FF FF         MOV dword ptr [EBP + 0xffffff28],EDX
00426427  4F                        DEC EDI
00426428  43                        INC EBX
00426429  C7 85 78 FF FF FF 20 00 00 00  MOV dword ptr [EBP + 0xffffff78],0x20
00426433  E9 DA 01 00 00            JMP 0x00426612
LAB_00426438:
00426438  A8 40                     TEST AL,0x40
0042643A  0F 84 D2 01 00 00         JZ 0x00426612
00426440  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
00426443  39 45 A4                  CMP dword ptr [EBP + -0x5c],EAX
00426446  0F 8C 17 FA FF FF         JL 0x00425e63
0042644C  6A 00                     PUSH 0x0
0042644E  6A 02                     PUSH 0x2
00426450  E9 EB F9 FF FF            JMP 0x00425e40
switchD_00425b05::caseD_8:
00426455  8A 45 B4                  MOV AL,byte ptr [EBP + -0x4c]
00426458  A8 02                     TEST AL,0x2
0042645A  74 15                     JZ 0x00426471
0042645C  8B 4D E0                  MOV ECX,dword ptr [EBP + -0x20]
0042645F  39 4D A4                  CMP dword ptr [EBP + -0x5c],ECX
00426462  0F 8C 3A FE FF FF         JL 0x004262a2
00426468  6A FF                     PUSH -0x1
0042646A  6A 02                     PUSH 0x2
0042646C  E9 0E FE FF FF            JMP 0x0042627f
LAB_00426471:
00426471  A8 04                     TEST AL,0x4
00426473  74 15                     JZ 0x0042648a
00426475  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
00426478  39 45 A4                  CMP dword ptr [EBP + -0x5c],EAX
0042647B  0F 8C 05 FD FF FF         JL 0x00426186
00426481  6A FF                     PUSH -0x1
00426483  6A 02                     PUSH 0x2
00426485  E9 D9 FC FF FF            JMP 0x00426163
LAB_0042648a:
0042648A  A8 08                     TEST AL,0x8
0042648C  74 70                     JZ 0x004264fe
0042648E  8B 4D E0                  MOV ECX,dword ptr [EBP + -0x20]
00426491  39 4D A4                  CMP dword ptr [EBP + -0x5c],ECX
00426494  7C 49                     JL 0x004264df
00426496  8B 85 54 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff54]
0042649C  8D 50 FF                  LEA EDX,[EAX + -0x1]
0042649F  3B FA                     CMP EDI,EDX
004264A1  7D 3C                     JGE 0x004264df
004264A3  8B 8D 28 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff28]
004264A9  C1 E0 02                  SHL EAX,0x2
004264AC  2B C8                     SUB ECX,EAX
004264AE  8B 01                     MOV EAX,dword ptr [ECX]
004264B0  85 C0                     TEST EAX,EAX
004264B2  74 2B                     JZ 0x004264df
004264B4  A8 80                     TEST AL,0x80
004264B6  75 27                     JNZ 0x004264df
004264B8  6A FF                     PUSH -0x1
004264BA  6A 02                     PUSH 0x2
004264BC  8B 55 B0                  MOV EDX,dword ptr [EBP + -0x50]
004264BF  8D 04 13                  LEA EAX,[EBX + EDX*0x1]
004264C2  50                        PUSH EAX
004264C3  8B 4D BC                  MOV ECX,dword ptr [EBP + -0x44]
004264C6  8D 14 0F                  LEA EDX,[EDI + ECX*0x1]
004264C9  52                        PUSH EDX
004264CA  56                        PUSH ESI
004264CB  8B 85 64 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff64]
004264D1  50                        PUSH EAX
004264D2  8B 8D 08 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff08]
004264D8  E8 33 EB FD FF            CALL 0x00405010
004264DD  8B F0                     MOV ESI,EAX
LAB_004264df:
004264DF  83 C9 FF                  OR ECX,0xffffffff
004264E2  2B 8D 54 FF FF FF         SUB ECX,dword ptr [EBP + 0xffffff54]
004264E8  8B 95 28 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff28]
004264EE  8D 04 8A                  LEA EAX,[EDX + ECX*0x4]
004264F1  89 85 28 FF FF FF         MOV dword ptr [EBP + 0xffffff28],EAX
004264F7  4F                        DEC EDI
004264F8  4B                        DEC EBX
004264F9  E9 14 01 00 00            JMP 0x00426612
LAB_004264fe:
004264FE  A8 10                     TEST AL,0x10
00426500  74 15                     JZ 0x00426517
00426502  8B 4D E0                  MOV ECX,dword ptr [EBP + -0x20]
00426505  39 4D A4                  CMP dword ptr [EBP + -0x5c],ECX
00426508  0F 8C B6 FE FF FF         JL 0x004263c4
0042650E  6A FF                     PUSH -0x1
00426510  6A 02                     PUSH 0x2
00426512  E9 FE FC FF FF            JMP 0x00426215
LAB_00426517:
00426517  A8 20                     TEST AL,0x20
00426519  74 5D                     JZ 0x00426578
0042651B  8B 4D E0                  MOV ECX,dword ptr [EBP + -0x20]
0042651E  39 4D A4                  CMP dword ptr [EBP + -0x5c],ECX
00426521  7C 27                     JL 0x0042654a
00426523  6A 00                     PUSH 0x0
00426525  6A 02                     PUSH 0x2
LAB_00426527:
00426527  8B 55 B0                  MOV EDX,dword ptr [EBP + -0x50]
0042652A  8D 04 13                  LEA EAX,[EBX + EDX*0x1]
0042652D  50                        PUSH EAX
0042652E  8B 4D BC                  MOV ECX,dword ptr [EBP + -0x44]
00426531  8D 14 0F                  LEA EDX,[EDI + ECX*0x1]
00426534  52                        PUSH EDX
00426535  56                        PUSH ESI
00426536  8B 85 64 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff64]
0042653C  50                        PUSH EAX
0042653D  8B 8D 08 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff08]
00426543  E8 C8 EA FD FF            CALL 0x00405010
00426548  8B F0                     MOV ESI,EAX
LAB_0042654a:
0042654A  8B 8D 54 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff54]
00426550  8D 04 8D 00 00 00 00      LEA EAX,[ECX*0x4 + 0x0]
00426557  8B 95 28 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff28]
0042655D  8D 44 02 FC               LEA EAX,[EDX + EAX*0x1 + -0x4]
00426561  89 85 28 FF FF FF         MOV dword ptr [EBP + 0xffffff28],EAX
00426567  4F                        DEC EDI
00426568  43                        INC EBX
00426569  C7 85 78 FF FF FF 20 00 00 00  MOV dword ptr [EBP + 0xffffff78],0x20
00426573  E9 9A 00 00 00            JMP 0x00426612
LAB_00426578:
00426578  A8 40                     TEST AL,0x40
0042657A  74 41                     JZ 0x004265bd
0042657C  8B 4D E0                  MOV ECX,dword ptr [EBP + -0x20]
0042657F  39 4D A4                  CMP dword ptr [EBP + -0x5c],ECX
00426582  7C 27                     JL 0x004265ab
00426584  6A 00                     PUSH 0x0
00426586  6A 02                     PUSH 0x2
00426588  8B 55 B0                  MOV EDX,dword ptr [EBP + -0x50]
0042658B  8D 04 13                  LEA EAX,[EBX + EDX*0x1]
0042658E  50                        PUSH EAX
0042658F  8B 4D BC                  MOV ECX,dword ptr [EBP + -0x44]
00426592  8D 14 0F                  LEA EDX,[EDI + ECX*0x1]
00426595  52                        PUSH EDX
00426596  56                        PUSH ESI
00426597  8B 85 64 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff64]
0042659D  50                        PUSH EAX
0042659E  8B 8D 08 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff08]
004265A4  E8 67 EA FD FF            CALL 0x00405010
004265A9  8B F0                     MOV ESI,EAX
LAB_004265ab:
004265AB  8B 8D 54 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff54]
004265B1  8D 04 8D 00 00 00 00      LEA EAX,[ECX*0x4 + 0x0]
004265B8  E9 AF F8 FF FF            JMP 0x00425e6c
LAB_004265bd:
004265BD  A8 80                     TEST AL,0x80
004265BF  74 51                     JZ 0x00426612
004265C1  8B 55 E0                  MOV EDX,dword ptr [EBP + -0x20]
004265C4  39 55 A4                  CMP dword ptr [EBP + -0x5c],EDX
004265C7  7C 27                     JL 0x004265f0
004265C9  6A 01                     PUSH 0x1
004265CB  6A 02                     PUSH 0x2
LAB_004265cd:
004265CD  8B 45 B0                  MOV EAX,dword ptr [EBP + -0x50]
004265D0  8D 0C 03                  LEA ECX,[EBX + EAX*0x1]
004265D3  51                        PUSH ECX
004265D4  8B 55 BC                  MOV EDX,dword ptr [EBP + -0x44]
004265D7  8D 04 17                  LEA EAX,[EDI + EDX*0x1]
004265DA  50                        PUSH EAX
004265DB  56                        PUSH ESI
004265DC  8B 8D 64 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff64]
004265E2  51                        PUSH ECX
004265E3  8B 8D 08 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff08]
004265E9  E8 22 EA FD FF            CALL 0x00405010
004265EE  8B F0                     MOV ESI,EAX
LAB_004265f0:
004265F0  8B 95 28 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff28]
004265F6  8B 85 54 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff54]
004265FC  8D 4C 82 04               LEA ECX,[EDX + EAX*0x4 + 0x4]
00426600  89 8D 28 FF FF FF         MOV dword ptr [EBP + 0xffffff28],ECX
LAB_00426606:
00426606  47                        INC EDI
00426607  43                        INC EBX
00426608  C7 85 78 FF FF FF 80 00 00 00  MOV dword ptr [EBP + 0xffffff78],0x80
switchD_00425b05::caseD_3:
00426612  8B 45 B4                  MOV EAX,dword ptr [EBP + -0x4c]
00426615  F6 C4 01                  TEST AH,0x1
00426618  74 0D                     JZ 0x00426627
0042661A  8B 95 28 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff28]
00426620  8B 02                     MOV EAX,dword ptr [EDX]
00426622  F6 C4 02                  TEST AH,0x2
00426625  75 10                     JNZ 0x00426637
LAB_00426627:
00426627  8B 85 28 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff28]
0042662D  8B 08                     MOV ECX,dword ptr [EAX]
0042662F  89 4D B4                  MOV dword ptr [EBP + -0x4c],ECX
00426632  E9 4B F4 FF FF            JMP 0x00425a82
LAB_00426637:
00426637  8B 8D 64 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff64]
0042663D  66 8B 44 F1 F8            MOV AX,word ptr [ECX + ESI*0x8 + -0x8]
00426642  66 3B 41 08               CMP AX,word ptr [ECX + 0x8]
00426646  75 20                     JNZ 0x00426668
00426648  66 8B 54 F1 FA            MOV DX,word ptr [ECX + ESI*0x8 + -0x6]
0042664D  66 3B 51 0A               CMP DX,word ptr [ECX + 0xa]
00426651  75 15                     JNZ 0x00426668
00426653  0F BF 44 F1 FC            MOVSX EAX,word ptr [ECX + ESI*0x8 + -0x4]
00426658  0F BF 51 0C               MOVSX EDX,word ptr [ECX + 0xc]
0042665C  2B C2                     SUB EAX,EDX
0042665E  99                        CDQ
0042665F  33 C2                     XOR EAX,EDX
00426661  2B C2                     SUB EAX,EDX
00426663  83 F8 02                  CMP EAX,0x2
00426666  7E 51                     JLE 0x004266b9
LAB_00426668:
00426668  66 8B 19                  MOV BX,word ptr [ECX]
0042666B  66 39 5C F1 F0            CMP word ptr [ECX + ESI*0x8 + -0x10],BX
00426670  75 20                     JNZ 0x00426692
00426672  66 8B 44 F1 F2            MOV AX,word ptr [ECX + ESI*0x8 + -0xe]
00426677  66 3B 41 02               CMP AX,word ptr [ECX + 0x2]
0042667B  75 15                     JNZ 0x00426692
0042667D  0F BF 44 F1 F4            MOVSX EAX,word ptr [ECX + ESI*0x8 + -0xc]
00426682  0F BF 51 04               MOVSX EDX,word ptr [ECX + 0x4]
00426686  2B C2                     SUB EAX,EDX
00426688  99                        CDQ
00426689  33 C2                     XOR EAX,EDX
0042668B  2B C2                     SUB EAX,EDX
0042668D  83 F8 02                  CMP EAX,0x2
00426690  7E 27                     JLE 0x004266b9
LAB_00426692:
00426692  66 39 5C F1 F8            CMP word ptr [ECX + ESI*0x8 + -0x8],BX
00426697  75 21                     JNZ 0x004266ba
00426699  66 8B 44 F1 FA            MOV AX,word ptr [ECX + ESI*0x8 + -0x6]
0042669E  66 3B 41 02               CMP AX,word ptr [ECX + 0x2]
004266A2  75 16                     JNZ 0x004266ba
004266A4  0F BF 44 F1 FC            MOVSX EAX,word ptr [ECX + ESI*0x8 + -0x4]
004266A9  0F BF 51 04               MOVSX EDX,word ptr [ECX + 0x4]
004266AD  2B C2                     SUB EAX,EDX
004266AF  99                        CDQ
004266B0  33 C2                     XOR EAX,EDX
004266B2  2B C2                     SUB EAX,EDX
004266B4  83 F8 02                  CMP EAX,0x2
004266B7  7F 01                     JG 0x004266ba
LAB_004266b9:
004266B9  4E                        DEC ESI
LAB_004266ba:
004266BA  83 FE 03                  CMP ESI,0x3
004266BD  7C 2F                     JL 0x004266ee
004266BF  8B 85 5C FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff5c]
004266C5  8B 8D B0 FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffeb0]
004266CB  89 74 01 04               MOV dword ptr [ECX + EAX*0x1 + 0x4],ESI
004266CF  8B 85 58 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff58]
004266D5  85 C0                     TEST EAX,EAX
004266D7  74 0A                     JZ 0x004266e3
004266D9  8B 85 5C FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff5c]
004266DF  83 0C 01 01               OR dword ptr [ECX + EAX*0x1],0x1
LAB_004266e3:
004266E3  FF 85 34 FF FF FF         INC dword ptr [EBP + 0xffffff34]
004266E9  E9 81 F2 FF FF            JMP 0x0042596f
LAB_004266ee:
004266EE  51                        PUSH ECX
004266EF  E8 9C F7 27 00            CALL 0x006a5e90
004266F4  C7 45 D8 01 00 00 00      MOV dword ptr [EBP + -0x28],0x1
004266FB  E9 6F F2 FF FF            JMP 0x0042596f
LAB_00426700:
00426700  8B 85 34 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff34]
00426706  85 C0                     TEST EAX,EAX
00426708  75 79                     JNZ 0x00426783
0042670A  8D 8D 5C FF FF FF         LEA ECX,[EBP + 0xffffff5c]
00426710  51                        PUSH ECX
00426711  E8 4A 49 28 00            CALL 0x006ab060
00426716  8B 7D 20                  MOV EDI,dword ptr [EBP + 0x20]
00426719  8B 9D 08 FF FF FF         MOV EBX,dword ptr [EBP + 0xffffff08]
0042671F  E9 B1 00 00 00            JMP 0x004267d5
LAB_00426724:
00426724  8B 85 34 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff34]
0042672A  8D 14 40                  LEA EDX,[EAX + EAX*0x2]
0042672D  8B 85 5C FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff5c]
00426733  8B 4C 90 FC               MOV ECX,dword ptr [EAX + EDX*0x4 + -0x4]
00426737  3B 8D 64 FF FF FF         CMP ECX,dword ptr [EBP + 0xffffff64]
0042673D  74 0C                     JZ 0x0042674b
0042673F  8D 95 64 FF FF FF         LEA EDX,[EBP + 0xffffff64]
00426745  52                        PUSH EDX
00426746  E8 15 49 28 00            CALL 0x006ab060
LAB_0042674b:
0042674B  8B BD 34 FF FF FF         MOV EDI,dword ptr [EBP + 0xffffff34]
00426751  85 FF                     TEST EDI,EDI
00426753  7E 18                     JLE 0x0042676d
00426755  33 F6                     XOR ESI,ESI
LAB_00426757:
00426757  8B 85 5C FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff5c]
0042675D  8B 4C 06 08               MOV ECX,dword ptr [ESI + EAX*0x1 + 0x8]
00426761  51                        PUSH ECX
00426762  E8 29 F7 27 00            CALL 0x006a5e90
00426767  83 C6 0C                  ADD ESI,0xc
0042676A  4F                        DEC EDI
0042676B  75 EA                     JNZ 0x00426757
LAB_0042676d:
0042676D  8D 95 5C FF FF FF         LEA EDX,[EBP + 0xffffff5c]
00426773  52                        PUSH EDX
00426774  E8 E7 48 28 00            CALL 0x006ab060
00426779  C7 85 34 FF FF FF 00 00 00 00  MOV dword ptr [EBP + 0xffffff34],0x0
LAB_00426783:
00426783  8B 7D 20                  MOV EDI,dword ptr [EBP + 0x20]
00426786  8B 9D 08 FF FF FF         MOV EBX,dword ptr [EBP + 0xffffff08]
0042678C  EB 47                     JMP 0x004267d5
LAB_0042678e:
0042678E  C7 45 B8 FE FF FF FF      MOV dword ptr [EBP + -0x48],0xfffffffe
00426795  8B 7D 20                  MOV EDI,dword ptr [EBP + 0x20]
00426798  8B 9D 08 FF FF FF         MOV EBX,dword ptr [EBP + 0xffffff08]
0042679E  EB 35                     JMP 0x004267d5
LAB_004267d2:
004267D2  8B 7D 20                  MOV EDI,dword ptr [EBP + 0x20]
LAB_004267d5:
004267D5  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
004267D8  85 C0                     TEST EAX,EAX
004267DA  74 51                     JZ 0x0042682d
004267DC  8B 85 34 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff34]
004267E2  85 C0                     TEST EAX,EAX
004267E4  7E 1A                     JLE 0x00426800
004267E6  33 F6                     XOR ESI,ESI
004267E8  8B F8                     MOV EDI,EAX
LAB_004267ea:
004267EA  8B 8D 5C FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff5c]
004267F0  8B 54 0E 08               MOV EDX,dword ptr [ESI + ECX*0x1 + 0x8]
004267F4  52                        PUSH EDX
004267F5  E8 96 F6 27 00            CALL 0x006a5e90
004267FA  83 C6 0C                  ADD ESI,0xc
004267FD  4F                        DEC EDI
004267FE  75 EA                     JNZ 0x004267ea
LAB_00426800:
00426800  8B 85 5C FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff5c]
00426806  50                        PUSH EAX
00426807  E8 84 F6 27 00            CALL 0x006a5e90
0042680C  68 60 05 00 00            PUSH 0x560
00426811  68 08 52 7A 00            PUSH 0x7a5208
00426816  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
0042681C  51                        PUSH ECX
0042681D  8B 75 B8                  MOV ESI,dword ptr [EBP + -0x48]
00426820  56                        PUSH ESI
00426821  E8 1A F6 27 00            CALL 0x006a5e40
00426826  8B C6                     MOV EAX,ESI
00426828  E9 B3 00 00 00            JMP 0x004268e0
LAB_0042682d:
0042682D  8B 95 5C FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff5c]
00426833  89 95 60 FF FF FF         MOV dword ptr [EBP + 0xffffff60],EDX
00426839  8B 4F 1C                  MOV ECX,dword ptr [EDI + 0x1c]
0042683C  85 C9                     TEST ECX,ECX
0042683E  74 3E                     JZ 0x0042687e
00426840  8B 47 20                  MOV EAX,dword ptr [EDI + 0x20]
00426843  85 C0                     TEST EAX,EAX
00426845  74 37                     JZ 0x0042687e
00426847  89 85 5C FF FF FF         MOV dword ptr [EBP + 0xffffff5c],EAX
0042684D  33 F6                     XOR ESI,ESI
0042684F  85 C9                     TEST ECX,ECX
00426851  7E 1C                     JLE 0x0042686f
LAB_00426853:
00426853  8B 95 5C FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff5c]
00426859  8B 42 08                  MOV EAX,dword ptr [EDX + 0x8]
0042685C  50                        PUSH EAX
0042685D  E8 2E F6 27 00            CALL 0x006a5e90
00426862  83 85 5C FF FF FF 0C      ADD dword ptr [EBP + 0xffffff5c],0xc
00426869  46                        INC ESI
0042686A  3B 77 1C                  CMP ESI,dword ptr [EDI + 0x1c]
0042686D  7C E4                     JL 0x00426853
LAB_0042686f:
0042686F  8D 47 20                  LEA EAX,[EDI + 0x20]
00426872  50                        PUSH EAX
00426873  E8 E8 47 28 00            CALL 0x006ab060
00426878  8B 95 60 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff60]
LAB_0042687e:
0042687E  8B 8B 74 03 00 00         MOV ECX,dword ptr [EBX + 0x374]
00426884  03 4D BC                  ADD ECX,dword ptr [EBP + -0x44]
00426887  89 0F                     MOV dword ptr [EDI],ECX
00426889  8B 83 78 03 00 00         MOV EAX,dword ptr [EBX + 0x378]
0042688F  03 45 B0                  ADD EAX,dword ptr [EBP + -0x50]
00426892  89 47 04                  MOV dword ptr [EDI + 0x4],EAX
00426895  8B 8D 40 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff40]
0042689B  89 4F 08                  MOV dword ptr [EDI + 0x8],ECX
0042689E  8B 85 30 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff30]
004268A4  89 47 0C                  MOV dword ptr [EDI + 0xc],EAX
004268A7  8B 4D 9C                  MOV ECX,dword ptr [EBP + -0x64]
004268AA  89 4F 10                  MOV dword ptr [EDI + 0x10],ECX
004268AD  8B 85 44 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff44]
004268B3  89 47 14                  MOV dword ptr [EDI + 0x14],EAX
004268B6  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
004268B9  89 4F 18                  MOV dword ptr [EDI + 0x18],ECX
004268BC  8B 85 34 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff34]
004268C2  89 47 1C                  MOV dword ptr [EDI + 0x1c],EAX
004268C5  89 57 20                  MOV dword ptr [EDI + 0x20],EDX
004268C8  85 C0                     TEST EAX,EAX
004268CA  7E 12                     JLE 0x004268de
004268CC  8B 4D D8                  MOV ECX,dword ptr [EBP + -0x28]
004268CF  85 C9                     TEST ECX,ECX
004268D1  75 05                     JNZ 0x004268d8
004268D3  83 F8 01                  CMP EAX,0x1
004268D6  7E 06                     JLE 0x004268de
LAB_004268d8:
004268D8  8B 02                     MOV EAX,dword ptr [EDX]
004268DA  0C 04                     OR AL,0x4
004268DC  89 02                     MOV dword ptr [EDX],EAX
LAB_004268de:
004268DE  33 C0                     XOR EAX,EAX
LAB_004268e0:
004268E0  8D A5 A4 FE FF FF         LEA ESP,[EBP + 0xfffffea4]
004268E6  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
004268E9  64 89 0D 00 00 00 00      MOV dword ptr FS:[0x0],ECX
004268F0  5F                        POP EDI
004268F1  5E                        POP ESI
004268F2  5B                        POP EBX
004268F3  8B E5                     MOV ESP,EBP
004268F5  5D                        POP EBP
004268F6  C2 1C 00                  RET 0x1c
