FUN_006dc320:
006DC320  55                        PUSH EBP
006DC321  8B EC                     MOV EBP,ESP
006DC323  83 EC 4C                  SUB ESP,0x4c
006DC326  53                        PUSH EBX
006DC327  56                        PUSH ESI
006DC328  8B F1                     MOV ESI,ECX
006DC32A  33 DB                     XOR EBX,EBX
006DC32C  57                        PUSH EDI
006DC32D  89 5D E0                  MOV dword ptr [EBP + -0x20],EBX
006DC330  DD 46 60                  FLD double ptr [ESI + 0x60]
006DC333  DC 5E 68                  FCOMP double ptr [ESI + 0x68]
006DC336  89 5D E8                  MOV dword ptr [EBP + -0x18],EBX
006DC339  DF E0                     FNSTSW AX
006DC33B  F6 C4 01                  TEST AH,0x1
006DC33E  0F 84 B4 09 00 00         JZ 0x006dccf8
006DC344  DD 46 70                  FLD double ptr [ESI + 0x70]
006DC347  DC 5E 78                  FCOMP double ptr [ESI + 0x78]
006DC34A  DF E0                     FNSTSW AX
006DC34C  F6 C4 01                  TEST AH,0x1
006DC34F  0F 84 A3 09 00 00         JZ 0x006dccf8
006DC355  8B 4E 30                  MOV ECX,dword ptr [ESI + 0x30]
006DC358  8B 46 38                  MOV EAX,dword ptr [ESI + 0x38]
006DC35B  3B C8                     CMP ECX,EAX
006DC35D  0F 8D 95 09 00 00         JGE 0x006dccf8
006DC363  8B 56 34                  MOV EDX,dword ptr [ESI + 0x34]
006DC366  8B 7E 3C                  MOV EDI,dword ptr [ESI + 0x3c]
006DC369  3B D7                     CMP EDX,EDI
006DC36B  0F 8D 87 09 00 00         JGE 0x006dccf8
006DC371  2B C1                     SUB EAX,ECX
006DC373  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
006DC376  DB 45 EC                  FILD dword ptr [EBP + -0x14]
006DC379  DD 46 68                  FLD double ptr [ESI + 0x68]
006DC37C  DC 66 60                  FSUB double ptr [ESI + 0x60]
006DC37F  DE F9                     FDIVP
006DC381  DD 9E D8 00 00 00         FSTP double ptr [ESI + 0xd8]
006DC387  8B 46 3C                  MOV EAX,dword ptr [ESI + 0x3c]
006DC38A  8B 56 34                  MOV EDX,dword ptr [ESI + 0x34]
006DC38D  2B C2                     SUB EAX,EDX
006DC38F  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
006DC392  DB 45 EC                  FILD dword ptr [EBP + -0x14]
006DC395  DD 46 78                  FLD double ptr [ESI + 0x78]
006DC398  DC 66 70                  FSUB double ptr [ESI + 0x70]
006DC39B  DE F9                     FDIVP
006DC39D  DD 9E E0 00 00 00         FSTP double ptr [ESI + 0xe0]
006DC3A3  DD 86 F8 00 00 00         FLD double ptr [ESI + 0xf8]
006DC3A9  DC 8E D8 00 00 00         FMUL double ptr [ESI + 0xd8]
006DC3AF  DC 0D B0 DF 79 00         FMUL double ptr [0x0079dfb0]
006DC3B5  DC 05 C0 01 79 00         FADD double ptr [0x007901c0]
006DC3BB  E8 C8 1E 05 00            CALL 0x0072e288
006DC3C0  83 F8 36                  CMP EAX,0x36
006DC3C3  89 86 F0 02 00 00         MOV dword ptr [ESI + 0x2f0],EAX
006DC3C9  BF 28 00 00 00            MOV EDI,0x28
006DC3CE  7D 08                     JGE 0x006dc3d8
006DC3D0  89 BE F0 02 00 00         MOV dword ptr [ESI + 0x2f0],EDI
006DC3D6  EB 15                     JMP 0x006dc3ed
LAB_006dc3d8:
006DC3D8  33 C9                     XOR ECX,ECX
006DC3DA  83 F8 54                  CMP EAX,0x54
006DC3DD  0F 9D C1                  SETGE CL
006DC3E0  49                        DEC ECX
006DC3E1  83 E1 DF                  AND ECX,0xffffffdf
006DC3E4  83 C1 64                  ADD ECX,0x64
006DC3E7  89 8E F0 02 00 00         MOV dword ptr [ESI + 0x2f0],ECX
LAB_006dc3ed:
006DC3ED  DD 86 00 01 00 00         FLD double ptr [ESI + 0x100]
006DC3F3  DC 8E E0 00 00 00         FMUL double ptr [ESI + 0xe0]
006DC3F9  DC 0D B0 DF 79 00         FMUL double ptr [0x0079dfb0]
006DC3FF  DC 05 C0 01 79 00         FADD double ptr [0x007901c0]
006DC405  E8 7E 1E 05 00            CALL 0x0072e288
006DC40A  83 F8 36                  CMP EAX,0x36
006DC40D  89 86 F4 02 00 00         MOV dword ptr [ESI + 0x2f4],EAX
006DC413  7D 08                     JGE 0x006dc41d
006DC415  89 BE F4 02 00 00         MOV dword ptr [ESI + 0x2f4],EDI
006DC41B  EB 15                     JMP 0x006dc432
LAB_006dc41d:
006DC41D  33 D2                     XOR EDX,EDX
006DC41F  83 F8 54                  CMP EAX,0x54
006DC422  0F 9D C2                  SETGE DL
006DC425  4A                        DEC EDX
006DC426  83 E2 DF                  AND EDX,0xffffffdf
006DC429  83 C2 64                  ADD EDX,0x64
006DC42C  89 96 F4 02 00 00         MOV dword ptr [ESI + 0x2f4],EDX
LAB_006dc432:
006DC432  8B CE                     MOV ECX,ESI
006DC434  E8 47 AF 03 00            CALL 0x00717380
006DC439  BF 01 00 00 00            MOV EDI,0x1
006DC43E  8D 45 D4                  LEA EAX,[EBP + -0x2c]
006DC441  57                        PUSH EDI
006DC442  53                        PUSH EBX
006DC443  53                        PUSH EBX
006DC444  53                        PUSH EBX
006DC445  53                        PUSH EBX
006DC446  53                        PUSH EBX
006DC447  53                        PUSH EBX
006DC448  8D 4D B4                  LEA ECX,[EBP + -0x4c]
006DC44B  50                        PUSH EAX
006DC44C  51                        PUSH ECX
006DC44D  8B CE                     MOV ECX,ESI
006DC44F  C7 45 D4 00 00 00 00      MOV dword ptr [EBP + -0x2c],0x0
006DC456  C7 45 D8 00 00 00 00      MOV dword ptr [EBP + -0x28],0x0
006DC45D  C7 45 DC 00 00 00 00      MOV dword ptr [EBP + -0x24],0x0
006DC464  E8 67 61 00 00            CALL 0x006e25d0
006DC469  8B 86 A8 00 00 00         MOV EAX,dword ptr [ESI + 0xa8]
006DC46F  83 F8 03                  CMP EAX,0x3
006DC472  77 32                     JA 0x006dc4a6
switchD_006dc474::switchD:
006DC474  FF 24 85 00 CD 6D 00      JMP dword ptr [EAX*0x4 + 0x6dcd00]
switchD_006dc474::caseD_0:
006DC47B  83 C8 FF                  OR EAX,0xffffffff
006DC47E  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
006DC481  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
006DC484  EB 26                     JMP 0x006dc4ac
switchD_006dc474::caseD_1:
006DC486  89 7D F8                  MOV dword ptr [EBP + -0x8],EDI
006DC489  C7 45 FC FF FF FF FF      MOV dword ptr [EBP + -0x4],0xffffffff
006DC490  EB 1A                     JMP 0x006dc4ac
switchD_006dc474::caseD_2:
006DC492  89 7D F8                  MOV dword ptr [EBP + -0x8],EDI
006DC495  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
006DC498  EB 12                     JMP 0x006dc4ac
switchD_006dc474::caseD_3:
006DC49A  C7 45 F8 FF FF FF FF      MOV dword ptr [EBP + -0x8],0xffffffff
006DC4A1  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
006DC4A4  EB 06                     JMP 0x006dc4ac
switchD_006dc474::default:
006DC4A6  89 5D F8                  MOV dword ptr [EBP + -0x8],EBX
006DC4A9  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
LAB_006dc4ac:
006DC4AC  DB 45 F8                  FILD dword ptr [EBP + -0x8]
006DC4AF  57                        PUSH EDI
006DC4B0  53                        PUSH EBX
006DC4B1  53                        PUSH EBX
006DC4B2  53                        PUSH EBX
006DC4B3  53                        PUSH EBX
006DC4B4  8D 55 D4                  LEA EDX,[EBP + -0x2c]
006DC4B7  83 EC 08                  SUB ESP,0x8
006DC4BA  8D 45 C4                  LEA EAX,[EBP + -0x3c]
006DC4BD  8B CE                     MOV ECX,ESI
006DC4BF  DD 1C 24                  FSTP double ptr [ESP]
006DC4C2  52                        PUSH EDX
006DC4C3  50                        PUSH EAX
006DC4C4  E8 07 61 00 00            CALL 0x006e25d0
006DC4C9  8B 4D CC                  MOV ECX,dword ptr [EBP + -0x34]
006DC4CC  8B 55 BC                  MOV EDX,dword ptr [EBP + -0x44]
006DC4CF  2B CA                     SUB ECX,EDX
006DC4D1  57                        PUSH EDI
006DC4D2  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
006DC4D5  53                        PUSH EBX
006DC4D6  DB 45 F8                  FILD dword ptr [EBP + -0x8]
006DC4D9  53                        PUSH EBX
006DC4DA  8D 55 D4                  LEA EDX,[EBP + -0x2c]
006DC4DD  83 EC 08                  SUB ESP,0x8
006DC4E0  8D 45 C4                  LEA EAX,[EBP + -0x3c]
006DC4E3  DC 0D 48 B1 79 00         FMUL double ptr [0x0079b148]
006DC4E9  8B CE                     MOV ECX,ESI
006DC4EB  DD 9E F8 02 00 00         FSTP double ptr [ESI + 0x2f8]
006DC4F1  DB 45 FC                  FILD dword ptr [EBP + -0x4]
006DC4F4  DD 1C 24                  FSTP double ptr [ESP]
006DC4F7  53                        PUSH EBX
006DC4F8  53                        PUSH EBX
006DC4F9  52                        PUSH EDX
006DC4FA  50                        PUSH EAX
006DC4FB  E8 D0 60 00 00            CALL 0x006e25d0
006DC500  8B 4D CC                  MOV ECX,dword ptr [EBP + -0x34]
006DC503  8B 55 BC                  MOV EDX,dword ptr [EBP + -0x44]
006DC506  2B CA                     SUB ECX,EDX
006DC508  57                        PUSH EDI
006DC509  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
006DC50C  68 00 00 F0 3F            PUSH 0x3ff00000
006DC511  DB 45 F8                  FILD dword ptr [EBP + -0x8]
006DC514  53                        PUSH EBX
006DC515  53                        PUSH EBX
006DC516  53                        PUSH EBX
006DC517  53                        PUSH EBX
006DC518  DC 0D 48 B1 79 00         FMUL double ptr [0x0079b148]
006DC51E  8D 55 D4                  LEA EDX,[EBP + -0x2c]
006DC521  53                        PUSH EBX
006DC522  8D 45 C4                  LEA EAX,[EBP + -0x3c]
006DC525  52                        PUSH EDX
006DC526  DD 9E 00 03 00 00         FSTP double ptr [ESI + 0x300]
006DC52C  50                        PUSH EAX
006DC52D  8B CE                     MOV ECX,ESI
006DC52F  E8 9C 60 00 00            CALL 0x006e25d0
006DC534  8B 4D CC                  MOV ECX,dword ptr [EBP + -0x34]
006DC537  8B 55 BC                  MOV EDX,dword ptr [EBP + -0x44]
006DC53A  2B CA                     SUB ECX,EDX
006DC53C  53                        PUSH EBX
006DC53D  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
006DC540  53                        PUSH EBX
006DC541  DB 45 F8                  FILD dword ptr [EBP + -0x8]
006DC544  53                        PUSH EBX
006DC545  C7 45 D4 00 00 00 00      MOV dword ptr [EBP + -0x2c],0x0
006DC54C  C7 45 D8 00 00 00 00      MOV dword ptr [EBP + -0x28],0x0
006DC553  C7 45 DC 00 00 00 00      MOV dword ptr [EBP + -0x24],0x0
006DC55A  DC 0D 48 B1 79 00         FMUL double ptr [0x0079b148]
006DC560  DD 9E 08 03 00 00         FSTP double ptr [ESI + 0x308]
006DC566  8B 96 A4 00 00 00         MOV EDX,dword ptr [ESI + 0xa4]
006DC56C  8B 86 A0 00 00 00         MOV EAX,dword ptr [ESI + 0xa0]
006DC572  8B 8E 9C 00 00 00         MOV ECX,dword ptr [ESI + 0x9c]
006DC578  52                        PUSH EDX
006DC579  8B 96 98 00 00 00         MOV EDX,dword ptr [ESI + 0x98]
006DC57F  50                        PUSH EAX
006DC580  51                        PUSH ECX
006DC581  8D 45 D4                  LEA EAX,[EBP + -0x2c]
006DC584  52                        PUSH EDX
006DC585  50                        PUSH EAX
006DC586  8D 4D B4                  LEA ECX,[EBP + -0x4c]
006DC589  51                        PUSH ECX
006DC58A  8B CE                     MOV ECX,ESI
006DC58C  E8 3F 60 00 00            CALL 0x006e25d0
006DC591  8B 96 A4 00 00 00         MOV EDX,dword ptr [ESI + 0xa4]
006DC597  8B 86 A0 00 00 00         MOV EAX,dword ptr [ESI + 0xa0]
006DC59D  8B 8E 9C 00 00 00         MOV ECX,dword ptr [ESI + 0x9c]
006DC5A3  53                        PUSH EBX
006DC5A4  DD 86 68 03 00 00         FLD double ptr [ESI + 0x368]
006DC5AA  53                        PUSH EBX
006DC5AB  53                        PUSH EBX
006DC5AC  D9 5D D4                  FSTP float ptr [EBP + -0x2c]
006DC5AF  52                        PUSH EDX
006DC5B0  8B 96 98 00 00 00         MOV EDX,dword ptr [ESI + 0x98]
006DC5B6  50                        PUSH EAX
006DC5B7  51                        PUSH ECX
006DC5B8  8D 45 D4                  LEA EAX,[EBP + -0x2c]
006DC5BB  52                        PUSH EDX
006DC5BC  8D 4D C4                  LEA ECX,[EBP + -0x3c]
006DC5BF  50                        PUSH EAX
006DC5C0  51                        PUSH ECX
006DC5C1  8B CE                     MOV ECX,ESI
006DC5C3  C7 45 D8 00 00 00 00      MOV dword ptr [EBP + -0x28],0x0
006DC5CA  C7 45 DC 00 00 00 00      MOV dword ptr [EBP + -0x24],0x0
006DC5D1  E8 FA 5F 00 00            CALL 0x006e25d0
006DC5D6  8B 55 C4                  MOV EDX,dword ptr [EBP + -0x3c]
006DC5D9  8B 45 B4                  MOV EAX,dword ptr [EBP + -0x4c]
006DC5DC  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
006DC5DF  2B D0                     SUB EDX,EAX
006DC5E1  8B 45 C8                  MOV EAX,dword ptr [EBP + -0x38]
006DC5E4  89 96 AC 03 00 00         MOV dword ptr [ESI + 0x3ac],EDX
006DC5EA  8B 55 BC                  MOV EDX,dword ptr [EBP + -0x44]
006DC5ED  2B C1                     SUB EAX,ECX
006DC5EF  8B 4D CC                  MOV ECX,dword ptr [EBP + -0x34]
006DC5F2  89 86 B8 03 00 00         MOV dword ptr [ESI + 0x3b8],EAX
006DC5F8  2B CA                     SUB ECX,EDX
006DC5FA  53                        PUSH EBX
006DC5FB  89 8E C4 03 00 00         MOV dword ptr [ESI + 0x3c4],ECX
006DC601  8B 96 A4 00 00 00         MOV EDX,dword ptr [ESI + 0xa4]
006DC607  8B 86 A0 00 00 00         MOV EAX,dword ptr [ESI + 0xa0]
006DC60D  8B 8E 9C 00 00 00         MOV ECX,dword ptr [ESI + 0x9c]
006DC613  DD 86 68 03 00 00         FLD double ptr [ESI + 0x368]
006DC619  53                        PUSH EBX
006DC61A  53                        PUSH EBX
006DC61B  D9 5D D8                  FSTP float ptr [EBP + -0x28]
006DC61E  52                        PUSH EDX
006DC61F  8B 96 98 00 00 00         MOV EDX,dword ptr [ESI + 0x98]
006DC625  50                        PUSH EAX
006DC626  51                        PUSH ECX
006DC627  8D 45 D4                  LEA EAX,[EBP + -0x2c]
006DC62A  52                        PUSH EDX
006DC62B  8D 4D C4                  LEA ECX,[EBP + -0x3c]
006DC62E  50                        PUSH EAX
006DC62F  51                        PUSH ECX
006DC630  8B CE                     MOV ECX,ESI
006DC632  C7 45 D4 00 00 00 00      MOV dword ptr [EBP + -0x2c],0x0
006DC639  C7 45 DC 00 00 00 00      MOV dword ptr [EBP + -0x24],0x0
006DC640  E8 8B 5F 00 00            CALL 0x006e25d0
006DC645  8B 55 C4                  MOV EDX,dword ptr [EBP + -0x3c]
006DC648  8B 45 B4                  MOV EAX,dword ptr [EBP + -0x4c]
006DC64B  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
006DC64E  2B D0                     SUB EDX,EAX
006DC650  8B 45 C8                  MOV EAX,dword ptr [EBP + -0x38]
006DC653  89 96 B0 03 00 00         MOV dword ptr [ESI + 0x3b0],EDX
006DC659  8B 55 BC                  MOV EDX,dword ptr [EBP + -0x44]
006DC65C  2B C1                     SUB EAX,ECX
006DC65E  8B 4D CC                  MOV ECX,dword ptr [EBP + -0x34]
006DC661  89 86 BC 03 00 00         MOV dword ptr [ESI + 0x3bc],EAX
006DC667  2B CA                     SUB ECX,EDX
006DC669  53                        PUSH EBX
006DC66A  89 8E C8 03 00 00         MOV dword ptr [ESI + 0x3c8],ECX
006DC670  8B 96 A4 00 00 00         MOV EDX,dword ptr [ESI + 0xa4]
006DC676  DD 86 A4 03 00 00         FLD double ptr [ESI + 0x3a4]
006DC67C  DC 0D A8 DF 79 00         FMUL double ptr [0x0079dfa8]
006DC682  8B 86 A0 00 00 00         MOV EAX,dword ptr [ESI + 0xa0]
006DC688  53                        PUSH EBX
006DC689  53                        PUSH EBX
006DC68A  C7 45 D4 00 00 00 00      MOV dword ptr [EBP + -0x2c],0x0
006DC691  C7 45 D8 00 00 00 00      MOV dword ptr [EBP + -0x28],0x0
006DC698  52                        PUSH EDX
006DC699  D9 5D DC                  FSTP float ptr [EBP + -0x24]
006DC69C  8B 8E 9C 00 00 00         MOV ECX,dword ptr [ESI + 0x9c]
006DC6A2  8B 96 98 00 00 00         MOV EDX,dword ptr [ESI + 0x98]
006DC6A8  50                        PUSH EAX
006DC6A9  51                        PUSH ECX
006DC6AA  8D 45 D4                  LEA EAX,[EBP + -0x2c]
006DC6AD  52                        PUSH EDX
006DC6AE  8D 4D C4                  LEA ECX,[EBP + -0x3c]
006DC6B1  50                        PUSH EAX
006DC6B2  51                        PUSH ECX
006DC6B3  8B CE                     MOV ECX,ESI
006DC6B5  E8 16 5F 00 00            CALL 0x006e25d0
006DC6BA  DB 86 B8 03 00 00         FILD dword ptr [ESI + 0x3b8]
006DC6C0  8B 55 C4                  MOV EDX,dword ptr [EBP + -0x3c]
006DC6C3  8B 45 B4                  MOV EAX,dword ptr [EBP + -0x4c]
006DC6C6  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
006DC6C9  2B D0                     SUB EDX,EAX
006DC6CB  DC 0D 48 B1 79 00         FMUL double ptr [0x0079b148]
006DC6D1  8B 45 C8                  MOV EAX,dword ptr [EBP + -0x38]
006DC6D4  89 96 B4 03 00 00         MOV dword ptr [ESI + 0x3b4],EDX
006DC6DA  8B 55 BC                  MOV EDX,dword ptr [EBP + -0x44]
006DC6DD  2B C1                     SUB EAX,ECX
006DC6DF  D9 E1                     FABS
006DC6E1  DB 86 BC 03 00 00         FILD dword ptr [ESI + 0x3bc]
006DC6E7  8B 4D CC                  MOV ECX,dword ptr [EBP + -0x34]
006DC6EA  89 86 C0 03 00 00         MOV dword ptr [ESI + 0x3c0],EAX
006DC6F0  2B CA                     SUB ECX,EDX
006DC6F2  DC 0D 48 B1 79 00         FMUL double ptr [0x0079b148]
006DC6F8  89 8E CC 03 00 00         MOV dword ptr [ESI + 0x3cc],ECX
006DC6FE  D9 E1                     FABS
006DC700  DE C1                     FADDP
006DC702  DC 0D A0 DF 79 00         FMUL double ptr [0x0079dfa0]
006DC708  E8 7B 1B 05 00            CALL 0x0072e288
006DC70D  DD 86 D0 00 00 00         FLD double ptr [ESI + 0xd0]
006DC713  DC 8E E0 00 00 00         FMUL double ptr [ESI + 0xe0]
006DC719  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
006DC71C  89 86 D4 03 00 00         MOV dword ptr [ESI + 0x3d4],EAX
006DC722  DC 0D 98 DF 79 00         FMUL double ptr [0x0079df98]
006DC728  DA 45 F8                  FIADD dword ptr [EBP + -0x8]
006DC72B  E8 58 1B 05 00            CALL 0x0072e288
006DC730  DB 86 AC 03 00 00         FILD dword ptr [ESI + 0x3ac]
006DC736  89 86 D0 03 00 00         MOV dword ptr [ESI + 0x3d0],EAX
006DC73C  DC 0D 48 B1 79 00         FMUL double ptr [0x0079b148]
006DC742  D9 E1                     FABS
006DC744  DB 86 B0 03 00 00         FILD dword ptr [ESI + 0x3b0]
006DC74A  DC 0D 48 B1 79 00         FMUL double ptr [0x0079b148]
006DC750  D9 E1                     FABS
006DC752  DE C1                     FADDP
006DC754  DC 0D A0 DF 79 00         FMUL double ptr [0x0079dfa0]
006DC75A  E8 29 1B 05 00            CALL 0x0072e288
006DC75F  89 86 D8 03 00 00         MOV dword ptr [ESI + 0x3d8],EAX
006DC765  8B 86 80 02 00 00         MOV EAX,dword ptr [ESI + 0x280]
006DC76B  3B C3                     CMP EAX,EBX
006DC76D  89 BE E0 03 00 00         MOV dword ptr [ESI + 0x3e0],EDI
006DC773  0F 84 84 03 00 00         JZ 0x006dcafd
006DC779  0F BF 10                  MOVSX EDX,word ptr [EAX]
006DC77C  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
006DC77F  8B 86 DC 03 00 00         MOV EAX,dword ptr [ESI + 0x3dc]
006DC785  DB 45 F8                  FILD dword ptr [EBP + -0x8]
006DC788  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
006DC78B  99                        CDQ
006DC78C  DC 8E C8 00 00 00         FMUL double ptr [ESI + 0xc8]
006DC792  2B C2                     SUB EAX,EDX
006DC794  8B F8                     MOV EDI,EAX
006DC796  8B 86 A8 00 00 00         MOV EAX,dword ptr [ESI + 0xa8]
006DC79C  D1 FF                     SAR EDI,0x1
006DC79E  DD 55 F4                  FST double ptr [EBP + -0xc]
006DC7A1  DC 0D 70 07 79 00         FMUL double ptr [0x00790770]
006DC7A7  83 F8 03                  CMP EAX,0x3
006DC7AA  DC 3D 88 CD 79 00         FDIVR double ptr [0x0079cd88]
006DC7B0  DD 05 88 CD 79 00         FLD double ptr [0x0079cd88]
006DC7B6  DC 75 F4                  FDIV double ptr [EBP + -0xc]
006DC7B9  89 7D F8                  MOV dword ptr [EBP + -0x8],EDI
006DC7BC  0F 87 1F 01 00 00         JA 0x006dc8e1
switchD_006dc7c2::switchD:
006DC7C2  FF 24 85 10 CD 6D 00      JMP dword ptr [EAX*0x4 + 0x6dcd10]
switchD_006dc7c2::caseD_0:
006DC7C9  DB 45 F8                  FILD dword ptr [EBP + -0x8]
006DC7CC  DD 86 98 00 00 00         FLD double ptr [ESI + 0x98]
006DC7D2  DC A6 A0 00 00 00         FSUB double ptr [ESI + 0xa0]
006DC7D8  D8 CA                     FMUL ST2
006DC7DA  DC 05 88 CD 79 00         FADD double ptr [0x0079cd88]
006DC7E0  D8 C9                     FMUL ST1
006DC7E2  E8 A1 1A 05 00            CALL 0x0072e288
006DC7E7  DD 86 98 00 00 00         FLD double ptr [ESI + 0x98]
006DC7ED  DC 86 A0 00 00 00         FADD double ptr [ESI + 0xa0]
006DC7F3  89 45 E0                  MOV dword ptr [EBP + -0x20],EAX
006DC7F6  D8 C9                     FMUL ST1
006DC7F8  D8 CA                     FMUL ST2
006DC7FA  E8 89 1A 05 00            CALL 0x0072e288
006DC7FF  DD D8                     FSTP ST0
006DC801  DD D8                     FSTP ST0
006DC803  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
006DC806  E9 D8 00 00 00            JMP 0x006dc8e3
switchD_006dc7c2::caseD_1:
006DC80B  DB 45 F8                  FILD dword ptr [EBP + -0x8]
006DC80E  DD 86 98 00 00 00         FLD double ptr [ESI + 0x98]
006DC814  DC 86 A0 00 00 00         FADD double ptr [ESI + 0xa0]
006DC81A  D8 C9                     FMUL ST1
006DC81C  D8 CA                     FMUL ST2
006DC81E  E8 65 1A 05 00            CALL 0x0072e288
006DC823  DD 86 A0 00 00 00         FLD double ptr [ESI + 0xa0]
006DC829  DC A6 98 00 00 00         FSUB double ptr [ESI + 0x98]
006DC82F  89 45 E0                  MOV dword ptr [EBP + -0x20],EAX
006DC832  D8 CA                     FMUL ST2
006DC834  DC 05 88 CD 79 00         FADD double ptr [0x0079cd88]
006DC83A  D8 C9                     FMUL ST1
006DC83C  E8 47 1A 05 00            CALL 0x0072e288
006DC841  DD D8                     FSTP ST0
006DC843  DD D8                     FSTP ST0
006DC845  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
006DC848  E9 96 00 00 00            JMP 0x006dc8e3
switchD_006dc7c2::caseD_2:
006DC84D  DB 45 F8                  FILD dword ptr [EBP + -0x8]
006DC850  DD 86 98 00 00 00         FLD double ptr [ESI + 0x98]
006DC856  DC A6 A0 00 00 00         FSUB double ptr [ESI + 0xa0]
006DC85C  D8 CA                     FMUL ST2
006DC85E  DC 2D 88 CD 79 00         FSUBR double ptr [0x0079cd88]
006DC864  D8 C9                     FMUL ST1
006DC866  E8 1D 1A 05 00            CALL 0x0072e288
006DC86B  DB 45 FC                  FILD dword ptr [EBP + -0x4]
006DC86E  DD 86 98 00 00 00         FLD double ptr [ESI + 0x98]
006DC874  DC 86 A0 00 00 00         FADD double ptr [ESI + 0xa0]
006DC87A  89 45 E0                  MOV dword ptr [EBP + -0x20],EAX
006DC87D  D8 CA                     FMUL ST2
006DC87F  D8 CB                     FMUL ST3
006DC881  DE E9                     FSUBP
006DC883  DC 25 88 CD 79 00         FSUB double ptr [0x0079cd88]
006DC889  E8 FA 19 05 00            CALL 0x0072e288
006DC88E  DD D8                     FSTP ST0
006DC890  DD D8                     FSTP ST0
006DC892  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
006DC895  EB 4C                     JMP 0x006dc8e3
switchD_006dc7c2::caseD_3:
006DC897  DB 45 F8                  FILD dword ptr [EBP + -0x8]
006DC89A  DB 45 FC                  FILD dword ptr [EBP + -0x4]
006DC89D  DD 86 98 00 00 00         FLD double ptr [ESI + 0x98]
006DC8A3  DC 86 A0 00 00 00         FADD double ptr [ESI + 0xa0]
006DC8A9  D8 CA                     FMUL ST2
006DC8AB  D8 CB                     FMUL ST3
006DC8AD  DE E9                     FSUBP
006DC8AF  DC 25 88 CD 79 00         FSUB double ptr [0x0079cd88]
006DC8B5  E8 CE 19 05 00            CALL 0x0072e288
006DC8BA  DD 86 A0 00 00 00         FLD double ptr [ESI + 0xa0]
006DC8C0  DC A6 98 00 00 00         FSUB double ptr [ESI + 0x98]
006DC8C6  89 45 E0                  MOV dword ptr [EBP + -0x20],EAX
006DC8C9  D8 CA                     FMUL ST2
006DC8CB  DC 2D 88 CD 79 00         FSUBR double ptr [0x0079cd88]
006DC8D1  D8 C9                     FMUL ST1
006DC8D3  E8 B0 19 05 00            CALL 0x0072e288
006DC8D8  DD D8                     FSTP ST0
006DC8DA  DD D8                     FSTP ST0
006DC8DC  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
006DC8DF  EB 02                     JMP 0x006dc8e3
LAB_006dc8e1:
006DC8E1  DD D8                     FSTP ST0
switchD_006dc7c2::default:
006DC8E3  DB 45 E8                  FILD dword ptr [EBP + -0x18]
006DC8E6  DD 5D E4                  FSTP double ptr [EBP + -0x1c]
006DC8E9  DB 45 FC                  FILD dword ptr [EBP + -0x4]
006DC8EC  D9 C0                     FLD ST0
006DC8EE  D8 CA                     FMUL ST2
006DC8F0  DC 4E 78                  FMUL double ptr [ESI + 0x78]
006DC8F3  DC 0D 70 07 79 00         FMUL double ptr [0x00790770]
006DC8F9  DC 6D E4                  FSUBR double ptr [EBP + -0x1c]
006DC8FC  E8 87 19 05 00            CALL 0x0072e288
006DC901  D9 C0                     FLD ST0
006DC903  DC 4E 70                  FMUL double ptr [ESI + 0x70]
006DC906  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
006DC909  89 86 E8 03 00 00         MOV dword ptr [ESI + 0x3e8],EAX
006DC90F  D8 CA                     FMUL ST2
006DC911  DC 0D 70 07 79 00         FMUL double ptr [0x00790770]
006DC917  DC 6D E4                  FSUBR double ptr [EBP + -0x1c]
006DC91A  E8 69 19 05 00            CALL 0x0072e288
006DC91F  DB 45 E0                  FILD dword ptr [EBP + -0x20]
006DC922  D9 C1                     FLD ST1
006DC924  D8 CB                     FMUL ST3
006DC926  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
006DC929  89 86 F4 03 00 00         MOV dword ptr [ESI + 0x3f4],EAX
006DC92F  DC 4E 60                  FMUL double ptr [ESI + 0x60]
006DC932  D8 C1                     FADD ST0,ST1
006DC934  E8 4F 19 05 00            CALL 0x0072e288
006DC939  D9 C9                     FXCH
006DC93B  DC 4E 68                  FMUL double ptr [ESI + 0x68]
006DC93E  8B D8                     MOV EBX,EAX
006DC940  89 9E 00 04 00 00         MOV dword ptr [ESI + 0x400],EBX
006DC946  D8 CA                     FMUL ST2
006DC948  D8 C1                     FADD ST0,ST1
006DC94A  E8 39 19 05 00            CALL 0x0072e288
006DC94F  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
006DC952  89 45 E0                  MOV dword ptr [EBP + -0x20],EAX
006DC955  DD D8                     FSTP ST0
006DC957  85 C9                     TEST ECX,ECX
006DC959  DD D8                     FSTP ST0
006DC95B  89 86 0C 04 00 00         MOV dword ptr [ESI + 0x40c],EAX
006DC961  7E 56                     JLE 0x006dc9b9
006DC963  3B CF                     CMP ECX,EDI
006DC965  89 9E EC 03 00 00         MOV dword ptr [ESI + 0x3ec],EBX
006DC96B  89 86 F0 03 00 00         MOV dword ptr [ESI + 0x3f0],EAX
006DC971  7F 17                     JG 0x006dc98a
006DC973  8B D7                     MOV EDX,EDI
006DC975  2B D1                     SUB EDX,ECX
006DC977  3B DA                     CMP EBX,EDX
006DC979  7D 06                     JGE 0x006dc981
006DC97B  89 96 EC 03 00 00         MOV dword ptr [ESI + 0x3ec],EDX
LAB_006dc981:
006DC981  03 CF                     ADD ECX,EDI
006DC983  3B C1                     CMP EAX,ECX
006DC985  7C 32                     JL 0x006dc9b9
006DC987  49                        DEC ECX
006DC988  EB 29                     JMP 0x006dc9b3
LAB_006dc98a:
006DC98A  2B 4D FC                  SUB ECX,dword ptr [EBP + -0x4]
006DC98D  03 CF                     ADD ECX,EDI
006DC98F  8D 51 01                  LEA EDX,[ECX + 0x1]
006DC992  3B DA                     CMP EBX,EDX
006DC994  7F 09                     JG 0x006dc99f
006DC996  83 C1 02                  ADD ECX,0x2
006DC999  89 8E EC 03 00 00         MOV dword ptr [ESI + 0x3ec],ECX
LAB_006dc99f:
006DC99F  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
006DC9A2  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
006DC9A5  2B CA                     SUB ECX,EDX
006DC9A7  03 CF                     ADD ECX,EDI
006DC9A9  8D 51 FE                  LEA EDX,[ECX + -0x2]
006DC9AC  3B C2                     CMP EAX,EDX
006DC9AE  7C 09                     JL 0x006dc9b9
006DC9B0  83 C1 FD                  ADD ECX,-0x3
LAB_006dc9b3:
006DC9B3  89 8E F0 03 00 00         MOV dword ptr [ESI + 0x3f0],ECX
LAB_006dc9b9:
006DC9B9  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
006DC9BC  8D 51 FF                  LEA EDX,[ECX + -0x1]
006DC9BF  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
006DC9C2  3B CA                     CMP ECX,EDX
006DC9C4  7D 61                     JGE 0x006dca27
006DC9C6  3B CF                     CMP ECX,EDI
006DC9C8  89 9E F8 03 00 00         MOV dword ptr [ESI + 0x3f8],EBX
006DC9CE  89 86 FC 03 00 00         MOV dword ptr [ESI + 0x3fc],EAX
006DC9D4  7F 18                     JG 0x006dc9ee
006DC9D6  8B D7                     MOV EDX,EDI
006DC9D8  2B D1                     SUB EDX,ECX
006DC9DA  3B DA                     CMP EBX,EDX
006DC9DC  7D 06                     JGE 0x006dc9e4
006DC9DE  89 96 F8 03 00 00         MOV dword ptr [ESI + 0x3f8],EDX
LAB_006dc9e4:
006DC9E4  8D 14 39                  LEA EDX,[ECX + EDI*0x1]
006DC9E7  3B C2                     CMP EAX,EDX
006DC9E9  7C 3C                     JL 0x006dca27
006DC9EB  4A                        DEC EDX
006DC9EC  EB 33                     JMP 0x006dca21
LAB_006dc9ee:
006DC9EE  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006DC9F1  8B C1                     MOV EAX,ECX
006DC9F3  2B C2                     SUB EAX,EDX
006DC9F5  03 C7                     ADD EAX,EDI
006DC9F7  8D 50 01                  LEA EDX,[EAX + 0x1]
006DC9FA  3B DA                     CMP EBX,EDX
006DC9FC  7F 09                     JG 0x006dca07
006DC9FE  83 C0 02                  ADD EAX,0x2
006DCA01  89 86 F8 03 00 00         MOV dword ptr [ESI + 0x3f8],EAX
LAB_006dca07:
006DCA07  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006DCA0A  2B C1                     SUB EAX,ECX
006DCA0C  03 C7                     ADD EAX,EDI
006DCA0E  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
006DCA11  8D 50 FE                  LEA EDX,[EAX + -0x2]
006DCA14  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
006DCA17  3B C2                     CMP EAX,EDX
006DCA19  7C 0C                     JL 0x006dca27
006DCA1B  8B 55 E8                  MOV EDX,dword ptr [EBP + -0x18]
006DCA1E  83 C2 FD                  ADD EDX,-0x3
LAB_006dca21:
006DCA21  89 96 FC 03 00 00         MOV dword ptr [ESI + 0x3fc],EDX
LAB_006dca27:
006DCA27  85 DB                     TEST EBX,EBX
006DCA29  7E 6A                     JLE 0x006dca95
006DCA2B  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
006DCA2E  3B DF                     CMP EBX,EDI
006DCA30  89 96 04 04 00 00         MOV dword ptr [ESI + 0x404],EDX
006DCA36  89 8E 08 04 00 00         MOV dword ptr [ESI + 0x408],ECX
006DCA3C  7F 1D                     JG 0x006dca5b
006DCA3E  8B C7                     MOV EAX,EDI
006DCA40  2B C3                     SUB EAX,EBX
006DCA42  3B D0                     CMP EDX,EAX
006DCA44  7D 06                     JGE 0x006dca4c
006DCA46  89 86 04 04 00 00         MOV dword ptr [ESI + 0x404],EAX
LAB_006dca4c:
006DCA4C  03 DF                     ADD EBX,EDI
006DCA4E  3B CB                     CMP ECX,EBX
006DCA50  7C 40                     JL 0x006dca92
006DCA52  4B                        DEC EBX
006DCA53  89 9E 08 04 00 00         MOV dword ptr [ESI + 0x408],EBX
006DCA59  EB 37                     JMP 0x006dca92
LAB_006dca5b:
006DCA5B  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006DCA5E  8B C3                     MOV EAX,EBX
006DCA60  2B C2                     SUB EAX,EDX
006DCA62  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
006DCA65  03 C7                     ADD EAX,EDI
006DCA67  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
006DCA6A  40                        INC EAX
006DCA6B  3B D0                     CMP EDX,EAX
006DCA6D  7F 0C                     JG 0x006dca7b
006DCA6F  8B 55 E8                  MOV EDX,dword ptr [EBP + -0x18]
006DCA72  83 C2 02                  ADD EDX,0x2
006DCA75  89 96 04 04 00 00         MOV dword ptr [ESI + 0x404],EDX
LAB_006dca7b:
006DCA7B  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006DCA7E  2B C3                     SUB EAX,EBX
006DCA80  03 C7                     ADD EAX,EDI
006DCA82  8D 50 FE                  LEA EDX,[EAX + -0x2]
006DCA85  3B CA                     CMP ECX,EDX
006DCA87  7C 09                     JL 0x006dca92
006DCA89  83 C0 FD                  ADD EAX,-0x3
006DCA8C  89 86 08 04 00 00         MOV dword ptr [ESI + 0x408],EAX
LAB_006dca92:
006DCA92  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
LAB_006dca95:
006DCA95  85 C0                     TEST EAX,EAX
006DCA97  7E 64                     JLE 0x006dcafd
006DCA99  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
006DCA9C  3B C7                     CMP EAX,EDI
006DCA9E  89 96 10 04 00 00         MOV dword ptr [ESI + 0x410],EDX
006DCAA4  89 8E 14 04 00 00         MOV dword ptr [ESI + 0x414],ECX
006DCAAA  7F 1A                     JG 0x006dcac6
006DCAAC  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
006DCAAF  8B D7                     MOV EDX,EDI
006DCAB1  2B D0                     SUB EDX,EAX
006DCAB3  3B DA                     CMP EBX,EDX
006DCAB5  7D 06                     JGE 0x006dcabd
006DCAB7  89 96 10 04 00 00         MOV dword ptr [ESI + 0x410],EDX
LAB_006dcabd:
006DCABD  03 F8                     ADD EDI,EAX
006DCABF  3B CF                     CMP ECX,EDI
006DCAC1  7C 3A                     JL 0x006dcafd
006DCAC3  4F                        DEC EDI
006DCAC4  EB 31                     JMP 0x006dcaf7
LAB_006dcac6:
006DCAC6  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
006DCAC9  8B D0                     MOV EDX,EAX
006DCACB  2B D3                     SUB EDX,EBX
006DCACD  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
006DCAD0  03 D7                     ADD EDX,EDI
006DCAD2  89 55 E0                  MOV dword ptr [EBP + -0x20],EDX
006DCAD5  42                        INC EDX
006DCAD6  3B DA                     CMP EBX,EDX
006DCAD8  7F 0C                     JG 0x006dcae6
006DCADA  8B 55 E0                  MOV EDX,dword ptr [EBP + -0x20]
006DCADD  83 C2 02                  ADD EDX,0x2
006DCAE0  89 96 10 04 00 00         MOV dword ptr [ESI + 0x410],EDX
LAB_006dcae6:
006DCAE6  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006DCAE9  2B D0                     SUB EDX,EAX
006DCAEB  03 FA                     ADD EDI,EDX
006DCAED  8D 47 FE                  LEA EAX,[EDI + -0x2]
006DCAF0  3B C8                     CMP ECX,EAX
006DCAF2  7C 09                     JL 0x006dcafd
006DCAF4  83 C7 FD                  ADD EDI,-0x3
LAB_006dcaf7:
006DCAF7  89 BE 14 04 00 00         MOV dword ptr [ESI + 0x414],EDI
LAB_006dcafd:
006DCAFD  8B 46 34                  MOV EAX,dword ptr [ESI + 0x34]
006DCB00  8D 4D EC                  LEA ECX,[EBP + -0x14]
006DCB03  8D 55 F0                  LEA EDX,[EBP + -0x10]
006DCB06  51                        PUSH ECX
006DCB07  8B 4E 30                  MOV ECX,dword ptr [ESI + 0x30]
006DCB0A  52                        PUSH EDX
006DCB0B  6A 00                     PUSH 0x0
006DCB0D  50                        PUSH EAX
006DCB0E  51                        PUSH ECX
006DCB0F  8B CE                     MOV ECX,ESI
006DCB11  E8 0A 51 00 00            CALL 0x006e1c20
006DCB16  D9 45 F0                  FLD float ptr [EBP + -0x10]
006DCB19  DC B6 C8 00 00 00         FDIV double ptr [ESI + 0xc8]
006DCB1F  E8 64 17 05 00            CALL 0x0072e288
006DCB24  D9 45 EC                  FLD float ptr [EBP + -0x14]
006DCB27  DC B6 C8 00 00 00         FDIV double ptr [ESI + 0xc8]
006DCB2D  8B F8                     MOV EDI,EAX
006DCB2F  E8 54 17 05 00            CALL 0x0072e288
006DCB34  8B 8E A8 00 00 00         MOV ECX,dword ptr [ESI + 0xa8]
006DCB3A  83 F9 03                  CMP ECX,0x3
006DCB3D  77 31                     JA 0x006dcb70
switchD_006dcb3f::switchD:
006DCB3F  FF 24 8D 20 CD 6D 00      JMP dword ptr [ECX*0x4 + 0x6dcd20]
switchD_006dcb3f::caseD_0:
006DCB46  83 C7 FE                  ADD EDI,-0x2
006DCB49  89 46 4C                  MOV dword ptr [ESI + 0x4c],EAX
006DCB4C  89 7E 48                  MOV dword ptr [ESI + 0x48],EDI
006DCB4F  EB 1F                     JMP 0x006dcb70
switchD_006dcb3f::caseD_1:
006DCB51  83 C0 FE                  ADD EAX,-0x2
006DCB54  89 7E 40                  MOV dword ptr [ESI + 0x40],EDI
006DCB57  89 46 44                  MOV dword ptr [ESI + 0x44],EAX
006DCB5A  EB 14                     JMP 0x006dcb70
switchD_006dcb3f::caseD_2:
006DCB5C  83 C7 02                  ADD EDI,0x2
006DCB5F  89 46 5C                  MOV dword ptr [ESI + 0x5c],EAX
006DCB62  89 7E 58                  MOV dword ptr [ESI + 0x58],EDI
006DCB65  EB 09                     JMP 0x006dcb70
switchD_006dcb3f::caseD_3:
006DCB67  83 C0 02                  ADD EAX,0x2
006DCB6A  89 7E 50                  MOV dword ptr [ESI + 0x50],EDI
006DCB6D  89 46 54                  MOV dword ptr [ESI + 0x54],EAX
switchD_006dcb3f::default:
006DCB70  8B 4E 34                  MOV ECX,dword ptr [ESI + 0x34]
006DCB73  8D 55 EC                  LEA EDX,[EBP + -0x14]
006DCB76  52                        PUSH EDX
006DCB77  8B 56 38                  MOV EDX,dword ptr [ESI + 0x38]
006DCB7A  8D 45 F0                  LEA EAX,[EBP + -0x10]
006DCB7D  4A                        DEC EDX
006DCB7E  50                        PUSH EAX
006DCB7F  6A 00                     PUSH 0x0
006DCB81  51                        PUSH ECX
006DCB82  52                        PUSH EDX
006DCB83  8B CE                     MOV ECX,ESI
006DCB85  E8 96 50 00 00            CALL 0x006e1c20
006DCB8A  D9 45 F0                  FLD float ptr [EBP + -0x10]
006DCB8D  DC B6 C8 00 00 00         FDIV double ptr [ESI + 0xc8]
006DCB93  E8 F0 16 05 00            CALL 0x0072e288
006DCB98  D9 45 EC                  FLD float ptr [EBP + -0x14]
006DCB9B  DC B6 C8 00 00 00         FDIV double ptr [ESI + 0xc8]
006DCBA1  8B F8                     MOV EDI,EAX
006DCBA3  E8 E0 16 05 00            CALL 0x0072e288
006DCBA8  8B 8E A8 00 00 00         MOV ECX,dword ptr [ESI + 0xa8]
006DCBAE  83 F9 03                  CMP ECX,0x3
006DCBB1  77 31                     JA 0x006dcbe4
switchD_006dcbb3::switchD:
006DCBB3  FF 24 8D 30 CD 6D 00      JMP dword ptr [ECX*0x4 + 0x6dcd30]
switchD_006dcbb3::caseD_0:
006DCBBA  83 C0 FE                  ADD EAX,-0x2
006DCBBD  89 7E 40                  MOV dword ptr [ESI + 0x40],EDI
006DCBC0  89 46 44                  MOV dword ptr [ESI + 0x44],EAX
006DCBC3  EB 1F                     JMP 0x006dcbe4
switchD_006dcbb3::caseD_1:
006DCBC5  83 C7 02                  ADD EDI,0x2
006DCBC8  89 46 5C                  MOV dword ptr [ESI + 0x5c],EAX
006DCBCB  89 7E 58                  MOV dword ptr [ESI + 0x58],EDI
006DCBCE  EB 14                     JMP 0x006dcbe4
switchD_006dcbb3::caseD_2:
006DCBD0  83 C0 02                  ADD EAX,0x2
006DCBD3  89 7E 50                  MOV dword ptr [ESI + 0x50],EDI
006DCBD6  89 46 54                  MOV dword ptr [ESI + 0x54],EAX
006DCBD9  EB 09                     JMP 0x006dcbe4
switchD_006dcbb3::caseD_3:
006DCBDB  83 C7 FE                  ADD EDI,-0x2
006DCBDE  89 46 4C                  MOV dword ptr [ESI + 0x4c],EAX
006DCBE1  89 7E 48                  MOV dword ptr [ESI + 0x48],EDI
switchD_006dcbb3::default:
006DCBE4  DD 86 D0 00 00 00         FLD double ptr [ESI + 0xd0]
006DCBEA  DC 0D 90 DF 79 00         FMUL double ptr [0x0079df90]
006DCBF0  8B 56 3C                  MOV EDX,dword ptr [ESI + 0x3c]
006DCBF3  8D 45 EC                  LEA EAX,[EBP + -0x14]
006DCBF6  8D 4D F0                  LEA ECX,[EBP + -0x10]
006DCBF9  50                        PUSH EAX
006DCBFA  8B 46 30                  MOV EAX,dword ptr [ESI + 0x30]
006DCBFD  51                        PUSH ECX
006DCBFE  51                        PUSH ECX
006DCBFF  4A                        DEC EDX
006DCC00  8B CE                     MOV ECX,ESI
006DCC02  D9 1C 24                  FSTP float ptr [ESP]
006DCC05  52                        PUSH EDX
006DCC06  50                        PUSH EAX
006DCC07  E8 14 50 00 00            CALL 0x006e1c20
006DCC0C  D9 45 F0                  FLD float ptr [EBP + -0x10]
006DCC0F  DC B6 C8 00 00 00         FDIV double ptr [ESI + 0xc8]
006DCC15  E8 6E 16 05 00            CALL 0x0072e288
006DCC1A  D9 45 EC                  FLD float ptr [EBP + -0x14]
006DCC1D  DC B6 C8 00 00 00         FDIV double ptr [ESI + 0xc8]
006DCC23  8B F8                     MOV EDI,EAX
006DCC25  E8 5E 16 05 00            CALL 0x0072e288
006DCC2A  8B 8E A8 00 00 00         MOV ECX,dword ptr [ESI + 0xa8]
006DCC30  83 F9 03                  CMP ECX,0x3
006DCC33  77 31                     JA 0x006dcc66
switchD_006dcc35::switchD:
006DCC35  FF 24 8D 40 CD 6D 00      JMP dword ptr [ECX*0x4 + 0x6dcd40]
switchD_006dcc35::caseD_0:
006DCC3C  83 C0 02                  ADD EAX,0x2
006DCC3F  89 7E 50                  MOV dword ptr [ESI + 0x50],EDI
006DCC42  89 46 54                  MOV dword ptr [ESI + 0x54],EAX
006DCC45  EB 1F                     JMP 0x006dcc66
switchD_006dcc35::caseD_1:
006DCC47  83 C7 FE                  ADD EDI,-0x2
006DCC4A  89 46 4C                  MOV dword ptr [ESI + 0x4c],EAX
006DCC4D  89 7E 48                  MOV dword ptr [ESI + 0x48],EDI
006DCC50  EB 14                     JMP 0x006dcc66
switchD_006dcc35::caseD_2:
006DCC52  83 C0 FE                  ADD EAX,-0x2
006DCC55  89 7E 40                  MOV dword ptr [ESI + 0x40],EDI
006DCC58  89 46 44                  MOV dword ptr [ESI + 0x44],EAX
006DCC5B  EB 09                     JMP 0x006dcc66
switchD_006dcc35::caseD_3:
006DCC5D  83 C7 02                  ADD EDI,0x2
006DCC60  89 46 5C                  MOV dword ptr [ESI + 0x5c],EAX
006DCC63  89 7E 58                  MOV dword ptr [ESI + 0x58],EDI
switchD_006dcc35::default:
006DCC66  DD 86 D0 00 00 00         FLD double ptr [ESI + 0xd0]
006DCC6C  DC 0D 90 DF 79 00         FMUL double ptr [0x0079df90]
006DCC72  8B 46 3C                  MOV EAX,dword ptr [ESI + 0x3c]
006DCC75  8D 4D EC                  LEA ECX,[EBP + -0x14]
006DCC78  8D 55 F0                  LEA EDX,[EBP + -0x10]
006DCC7B  51                        PUSH ECX
006DCC7C  52                        PUSH EDX
006DCC7D  51                        PUSH ECX
006DCC7E  8B 4E 38                  MOV ECX,dword ptr [ESI + 0x38]
006DCC81  48                        DEC EAX
006DCC82  D9 1C 24                  FSTP float ptr [ESP]
006DCC85  49                        DEC ECX
006DCC86  50                        PUSH EAX
006DCC87  51                        PUSH ECX
006DCC88  8B CE                     MOV ECX,ESI
006DCC8A  E8 91 4F 00 00            CALL 0x006e1c20
006DCC8F  D9 45 F0                  FLD float ptr [EBP + -0x10]
006DCC92  DC B6 C8 00 00 00         FDIV double ptr [ESI + 0xc8]
006DCC98  E8 EB 15 05 00            CALL 0x0072e288
006DCC9D  D9 45 EC                  FLD float ptr [EBP + -0x14]
006DCCA0  DC B6 C8 00 00 00         FDIV double ptr [ESI + 0xc8]
006DCCA6  8B F8                     MOV EDI,EAX
006DCCA8  E8 DB 15 05 00            CALL 0x0072e288
006DCCAD  8B 8E A8 00 00 00         MOV ECX,dword ptr [ESI + 0xa8]
006DCCB3  83 F9 03                  CMP ECX,0x3
006DCCB6  77 40                     JA 0x006dccf8
switchD_006dccb8::switchD:
006DCCB8  FF 24 8D 50 CD 6D 00      JMP dword ptr [ECX*0x4 + 0x6dcd50]
switchD_006dccb8::caseD_0:
006DCCBF  83 C7 02                  ADD EDI,0x2
006DCCC2  89 46 5C                  MOV dword ptr [ESI + 0x5c],EAX
006DCCC5  89 7E 58                  MOV dword ptr [ESI + 0x58],EDI
006DCCC8  5F                        POP EDI
006DCCC9  5E                        POP ESI
006DCCCA  5B                        POP EBX
006DCCCB  8B E5                     MOV ESP,EBP
006DCCCD  5D                        POP EBP
006DCCCE  C3                        RET
switchD_006dccb8::caseD_1:
006DCCCF  83 C0 02                  ADD EAX,0x2
006DCCD2  89 7E 50                  MOV dword ptr [ESI + 0x50],EDI
006DCCD5  89 46 54                  MOV dword ptr [ESI + 0x54],EAX
006DCCD8  5F                        POP EDI
006DCCD9  5E                        POP ESI
006DCCDA  5B                        POP EBX
006DCCDB  8B E5                     MOV ESP,EBP
006DCCDD  5D                        POP EBP
006DCCDE  C3                        RET
switchD_006dccb8::caseD_2:
006DCCDF  83 C7 FE                  ADD EDI,-0x2
006DCCE2  89 46 4C                  MOV dword ptr [ESI + 0x4c],EAX
006DCCE5  89 7E 48                  MOV dword ptr [ESI + 0x48],EDI
006DCCE8  5F                        POP EDI
006DCCE9  5E                        POP ESI
006DCCEA  5B                        POP EBX
006DCCEB  8B E5                     MOV ESP,EBP
006DCCED  5D                        POP EBP
006DCCEE  C3                        RET
switchD_006dccb8::caseD_3:
006DCCEF  83 C0 FE                  ADD EAX,-0x2
006DCCF2  89 7E 40                  MOV dword ptr [ESI + 0x40],EDI
006DCCF5  89 46 44                  MOV dword ptr [ESI + 0x44],EAX
switchD_006dccb8::default:
006DCCF8  5F                        POP EDI
006DCCF9  5E                        POP ESI
006DCCFA  5B                        POP EBX
006DCCFB  8B E5                     MOV ESP,EBP
006DCCFD  5D                        POP EBP
006DCCFE  C3                        RET
